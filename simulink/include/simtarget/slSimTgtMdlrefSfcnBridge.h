/* Copyright 2015-2017 The MathWorks, Inc. */

#ifdef SUPPORTS_PRAGMA_ONCE
#pragma once
#endif

#ifndef SLSIMTGTMDLREFSFCNBRIDGE_H
#define SLSIMTGTMDLREFSFCNBRIDGE_H

#include "sl_simtarget_core_spec.h"

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrPortSampleTimeMapAddStructs(
    SimStruct* S, int numStructs, size_t* allStructs);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetDataTypeOverrideSettings(
    SimStruct* sfcnS, int dataTypeOverrideMode,
    int dataTypeOverrideAppliesTo );

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegisterContinuousOrDiscreteRateInfo(
    SimStruct* S, int tid, double period, double offset);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetHasContinuousSampleTime(
    SimStruct* S, bool hasContinuousSampleTime);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetHasBlockUsingZOHContinuousSampleTime(
    SimStruct* S, bool val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegMdlRefParamCoderGroup(SimStruct* sfcnS, const char* identifier, const char* group);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrAddResetEvents(SimStruct* sfcnS, const char* resetEvents);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C int_T slmrGetTopTidFromMdlRefChildTid(SimStruct* S,
                                                                        int_T childTid,
                                                                        bool childTidIsExplicitTasking);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupSetSpecifiedTs(SimStruct* S,
                                                             double     period,
                                                             double     offset);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupSetIsPeriodicFcnCall(
    SimStruct* S, bool val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupAddPortGroupWithDataTransferConnection(
    SimStruct* S, int_T portGroupIdx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupAddMuxedPortGroup(
    SimStruct* S, int_T portGroupIdx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupSetSchedulingPriority(
    SimStruct* S, int_T schedulingPriority);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetNumInportFcnCallPortGroups(
    SimStruct* S, int_T val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefAddStateOwnerAndAccessor(
    SimStruct* S, const char *ownerBlkPath, const char *accessorBlkPath);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupAddCallerName(
    SimStruct* S, const char *callerName, const char *fullPath);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupSetSimulinkFunctionName(
    SimStruct* S, const char *SimulinkFunctionName, const char *SimulinkFunctionFullPath);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefFcnCallPortGroupSetIsSimulinkFunction(
    SimStruct* S, bool val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetHasDataLoggedInLegacyFormat(SimStruct* S,
                                                     boolean_T  val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefInitPortGroupsInSameRate(SimStruct* S);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateAddMergeGroup(
    SimStruct* S, const char* rootMergeBlkName);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateAddMergedPortGroup(
    SimStruct* S, int portGroupIdx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateInitDSMEntry(
    SimStruct* S, const char* dsmName);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateAddDSMPortGroupIdx(
    SimStruct* S, int portGroupIdx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateInitGlobalDSMEntry(
    SimStruct* S, const char* dsmName);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefPortGroupsInSameRateAddGlobalDSMPortGroupIdx(
    SimStruct* S, int portGroupIdx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefAddRateSpecOfGlobalDSMAccessedByDescExpFcnMdlToHash(
    SimStruct  *S,
    const char *dsmName,
    double      period,
    double      offset,
    const char *descExpFcnMdlPath);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetHasDescExpFcnMdl(SimStruct* S,
                                                                       boolean_T  val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetHasDescAdaptedMdl(SimStruct* S,
                                                                        boolean_T  val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetHasStatesModifiedInOutputUpdate(
    SimStruct* S, boolean_T val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetOutputPortDrivenByNonCondExecStateflow(
    SimStruct* S, int portIdx, boolean_T val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetOutputPortDrivenByResetITVS(
    SimStruct* S, int portIdx, boolean_T val);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetOutputPortSID(
    SimStruct* S, int portIdx, int sid);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetInputPortSID(
    SimStruct* S, int portIdx, int sid);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetHasNonBuiltinLoggedState(
    SimStruct* S, const size_t numModels, const char **modelNames);

typedef void (*mdlSystemInitializeFcn)(SimStruct *S);
typedef void (*mdlSystemResetFcn)(SimStruct *S);
typedef void (*mdlPeriodicOutputUpdateFcn)(SimStruct *S, int_T tid);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegisterSystemInitializeMethod(
    SimStruct* S, mdlSystemInitializeFcn fcn);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegisterSystemResetMethod(
    SimStruct* S, mdlSystemResetFcn fcn);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegisterPeriodicOutputUpdateMethod(
    SimStruct* S, mdlPeriodicOutputUpdateFcn fcn);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrAccelRunBlockSystemInitialize(
    SimStruct *S, int sysidx, int blkidx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrAccelRunBlockSystemReset(
    SimStruct *S, int sysidx, int blkidx);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefSetHasBlocksWithCustomSimState(
    SimStruct* S, boolean_T  val);
SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrModelRefRegisterSimStateChecksum(
    SimStruct* S, const char* mdlname, const uint32_T* chksum);
SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelRefLoggingSaveFormat(
    SimStruct *S, int format);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelRefOriginalInportBusType(
    SimStruct *S, int, const char*);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelRefOriginalOutportBusType(
    SimStruct *S, int, const char*);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrInitializeIOPortDataVectors(
    SimStruct *S, int nIPorts, int nOPorts);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrRegisterTypeReplacement(
    SimStruct* S, const char* aStructTypeName, const char* aBusTypeName);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetSparseJacobianDataFileName(SimStruct* S, const char * dataFile);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelRefMaxFreqHz(
    SimStruct *S, double);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelRefAutoSolverStatusFlags(
    SimStruct *S, int );

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelWideEventsInfo(
    SimStruct *S, int tid, int sti, const char* id, const char* eventType);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetModelWideEventsInfoOnPort(
    SimStruct *S, int portIdx, const char* id, const char* eventType);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrSetForeachDimensions(
    void *pDatasetDesc, uint_T numForEachLevels, const uint_T *forEachDims);

SL_SIMTARGET_CORE_EXPORT_EXTERN_C void slmrLogStatesAfterStateWrite(
    SimStruct *s,  const char* writerSID);

#endif
