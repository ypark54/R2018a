/*********************************************************************************************************************
 ** File: nesl_rtw_utils.h
 ** Abstract:
 **     Utility functions to be called in generated code.
 **     This header must be included after _nesl_rtw.h
 **
 ** Copyright 2013-2014 The MathWorks, Inc.
 *********************************************************************************************************************/


#ifndef __nesl_rtw_utils_h__
#define __nesl_rtw_utils_h__

#include <nesl_diag.h>

/*
 * NeslSimulator
 */

PMF_DEPLOY_STATIC NeslSimulator *nesl_lease_simulator( const char *key,
                                                       int category,
                                                       int index)
{
    const NeslSimulatorGroupRegistry *registry = nesl_get_registry();
    return (NeslSimulator *)(registry->mLeaseSimulator(registry, key,
                                                       (NeslSimulatorCategory)category,
                                                       (size_t)index));
}

PMF_DEPLOY_STATIC void nesl_erase_simulator(const char *key)
{
    const NeslSimulatorGroupRegistry *registry = nesl_get_registry();
    registry->mErase(registry, key);
}

PMF_DEPLOY_STATIC int32_T nesl_initialize_simulator( NeslSimulator *simulator,
                                                     const NeModelParameters *mp,
                                                     NeuDiagnosticManager *mgr)
{
    return simulator->mInitialize(simulator,mp,mgr);
}

PMF_DEPLOY_STATIC void nesl_simulator_set_rtps( NeslSimulator *simulator,
                                                NeParameterBundle bundle)
{
    simulator->mSetParameters(simulator,&bundle);
}


/*
 * NeslSimulationData
 */

PMF_DEPLOY_STATIC void nesl_destroy_simulation_data(NeslSimulationData *sd)
{
    SAFE_DESTROY(sd)
}


/*
 * Pointer-arithmetic (not supported by RTWCG)
 */

PMF_DEPLOY_STATIC boolean_T pointer_is_null(void *ptr)
{
    return (ptr == NULL);
}

PMF_DEPLOY_STATIC double *double_pointer_shift(double *base, int offset)
{
    return &(base[offset]);
}

#endif /* __nesl_rtw_utils_h__ */
/* [EOF] nesl_rtw_utils.h */
