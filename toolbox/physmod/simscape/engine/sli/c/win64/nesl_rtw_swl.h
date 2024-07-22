/******************************************************************************
 ** File: nesl_rtw_swl.h
 ** Abstract: Partitioning solver header.
 **
 ** Copyright 2017 The MathWorks, Inc.
 ******************************************************************************/

#ifndef __nesl_rtw_swl_h__
#define __nesl_rtw_swl_h__

#include "nesl_rtw.h"

PMF_DEPLOY_STATIC boolean_T swl_solve(
    const Simulator             *solver,
    const PmRealVector          *inputs,
    const PmRealVector          *states,
    const PmRealVector          *outputs,
    real_T                       time,
    const NeuDiagnosticManager  *mgr,
    boolean_T                    firstOutput)
{
    return solver->mSolve(solver,
                          inputs,
                          states,
                          outputs,
                          time,
                          mgr,
                          firstOutput);
}

PMF_DEPLOY_STATIC boolean_T swl_check(
    const Simulator             *solver,
    const PmRealVector          *inputs,
    const PmRealVector          *states,
    real_T                       time,
    const NeuDiagnosticManager   *mgr)
{
    return solver->mCheck(solver,
                          inputs,
                          states,
                          time,
                          mgr);
}

PMF_DEPLOY_STATIC void swl_start(
    const Simulator             *solver,
    const NeParameterBundle     *bundle)
{
    solver->mStart(solver,
                   bundle);
}

#endif /* include guard */
