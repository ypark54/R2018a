/******************************************************************************
 ** File: nesl_rtw_lti.h
 ** Abstract: simscape LTI header.
 **
 ** Copyright 2015-2017 The MathWorks, Inc.
 ******************************************************************************/

#ifndef __nesl_rtw_lti_h__
#define __nesl_rtw_lti_h__

#include "nesl_rtw.h"

PMF_DEPLOY_STATIC boolean_T cgIcSolve(
    PmRealVector *x,
    const PmRealVector *u,
    const LtiIcParams *icParams,
    NeuDiagnosticManager    *mgr)
{
    return ic_solve_impl(x, u, icParams, NULL, mgr);
}

#endif /* include guard */
