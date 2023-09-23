#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.4.18/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_006.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRInputError cppIVRInput_IVRInput_006_SetActionManifestPath(void *linux_side, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->SetActionManifestPath((const char *)pchActionManifestPath);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetActionSetHandle(void *linux_side, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionSetHandle((const char *)pchActionSetName, (vr::VRActionSetHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetActionHandle(void *linux_side, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionHandle((const char *)pchActionName, (vr::VRActionHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetInputSourceHandle(void *linux_side, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetInputSourceHandle((const char *)pchInputSourcePath, (vr::VRInputValueHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_UpdateActionState(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetDigitalActionData(void *linux_side, VRActionHandle_t action, winInputDigitalActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    InputDigitalActionData_t lin;
    if(pActionData)
        struct_InputDigitalActionData_t_1418_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetDigitalActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
    if(pActionData)
        struct_InputDigitalActionData_t_1418_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetAnalogActionData(void *linux_side, VRActionHandle_t action, winInputAnalogActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    InputAnalogActionData_t lin;
    if(pActionData)
        struct_InputAnalogActionData_t_1418_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetAnalogActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
    if(pActionData)
        struct_InputAnalogActionData_t_1418_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow(void *linux_side, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    InputPoseActionData_t lin;
    if(pActionData)
        struct_InputPoseActionData_t_1418_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetPoseActionDataRelativeToNow((vr::VRActionHandle_t)action, (vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsFromNow, pActionData ? &lin : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
    if(pActionData)
        struct_InputPoseActionData_t_1418_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame(void *linux_side, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, winInputPoseActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    InputPoseActionData_t lin;
    if(pActionData)
        struct_InputPoseActionData_t_1418_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetPoseActionDataForNextFrame((vr::VRActionHandle_t)action, (vr::ETrackingUniverseOrigin)eOrigin, pActionData ? &lin : nullptr, lin_unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
    if(pActionData)
        struct_InputPoseActionData_t_1418_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalActionData(void *linux_side, VRActionHandle_t action, winInputSkeletalActionData_t_1418 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    InputSkeletalActionData_t lin;
    if(pActionData)
        struct_InputSkeletalActionData_t_1418_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, lin_unActionDataSize);
    if(pActionData)
        struct_InputSkeletalActionData_t_1418_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetBoneCount(void *linux_side, VRActionHandle_t action, uint32_t *pBoneCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetBoneCount((vr::VRActionHandle_t)action, (uint32_t *)pBoneCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetBoneHierarchy(void *linux_side, VRActionHandle_t action, BoneIndex_t *pParentIndices, uint32_t unIndexArayCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetBoneHierarchy((vr::VRActionHandle_t)action, (vr::BoneIndex_t *)pParentIndices, (uint32_t)unIndexArayCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetBoneName(void *linux_side, VRActionHandle_t action, BoneIndex_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetBoneName((vr::VRActionHandle_t)action, (vr::BoneIndex_t)nBoneIndex, (char *)pchBoneName, (uint32_t)unNameBufferSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalReferenceTransforms((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::EVRSkeletalReferencePose)eReferencePose, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel(void *linux_side, VRActionHandle_t action, EVRSkeletalTrackingLevel *pSkeletalTrackingLevel)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalTrackingLevel((vr::VRActionHandle_t)action, (vr::EVRSkeletalTrackingLevel *)pSkeletalTrackingLevel);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalBoneData(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalBoneData((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::EVRSkeletalMotionRange)eMotionRange, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalSummaryData(void *linux_side, VRActionHandle_t action, EVRSummaryType eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalSummaryData((vr::VRActionHandle_t)action, (vr::EVRSummaryType)eSummaryType, (vr::VRSkeletalSummaryData_t *)pSkeletalSummaryData);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed(void *linux_side, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalBoneDataCompressed((vr::VRActionHandle_t)action, (vr::EVRSkeletalMotionRange)eMotionRange, (void *)pvCompressedData, (uint32_t)unCompressedSize, (uint32_t *)punRequiredCompressedSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_DecompressSkeletalBoneData(void *linux_side, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->DecompressSkeletalBoneData((const void *)pvCompressedBuffer, (uint32_t)unCompressedBufferSize, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_TriggerHapticVibrationAction(void *linux_side, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)action, (float)fStartSecondsFromNow, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude, (vr::VRInputValueHandle_t)ulRestrictToDevice);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)digitalActionHandle, (vr::VRInputValueHandle_t *)originsOut, (uint32_t)originOutCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetOriginLocalizedName(void *linux_side, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)origin, (char *)pchNameArray, (uint32_t)unNameArraySize, (int32_t)unStringSectionsToInclude);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo(void *linux_side, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    uint32_t lin_unOriginInfoSize = std::min(unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t));
    _ret = ((IVRInput*)linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)origin, (vr::InputOriginInfo_t *)pOriginInfo, lin_unOriginInfoSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_ShowActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)ulActionHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_006_ShowBindingsForActionSet(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount, (vr::VRInputValueHandle_t)originToHighlight);
    return _ret;
}

bool cppIVRInput_IVRInput_006_IsUsingLegacyInput(void *linux_side)
{
    bool _ret;
    _ret = ((IVRInput*)linux_side)->IsUsingLegacyInput();
    return _ret;
}

#ifdef __cplusplus
}
#endif
