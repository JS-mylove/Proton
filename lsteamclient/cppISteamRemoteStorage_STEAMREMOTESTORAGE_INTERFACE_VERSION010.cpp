#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_124/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_124
#include "struct_converters.h"
#include "cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010.h"
bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWrite(void *linux_side, const char *pchFile, const void *pvData, int32 cubData)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWrite((const char *)pchFile, (const void *)pvData, (int32)cubData);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileRead(void *linux_side, const char *pchFile, void *pvData, int32 cubDataToRead)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileRead((const char *)pchFile, (void *)pvData, (int32)cubDataToRead);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileForget(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileForget((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileDelete(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileDelete((const char *)pchFile);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileShare(void *linux_side, const char *pchFile)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileShare((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetSyncPlatforms(void *linux_side, const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->SetSyncPlatforms((const char *)pchFile, (ERemoteStoragePlatform)eRemoteStoragePlatform);
    return (_ret);
}

UGCFileWriteStreamHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamOpen(void *linux_side, const char *pchFile)
{
    UGCFileWriteStreamHandle_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWriteStreamOpen((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamWriteChunk(void *linux_side, UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWriteStreamWriteChunk((UGCFileWriteStreamHandle_t)writeHandle, (const void *)pvData, (int32)cubData);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamClose(void *linux_side, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWriteStreamClose((UGCFileWriteStreamHandle_t)writeHandle);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileWriteStreamCancel(void *linux_side, UGCFileWriteStreamHandle_t writeHandle)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileWriteStreamCancel((UGCFileWriteStreamHandle_t)writeHandle);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FileExists(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FileExists((const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_FilePersisted(void *linux_side, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->FilePersisted((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileSize(void *linux_side, const char *pchFile)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileSize((const char *)pchFile);
    return (_ret);
}

int64 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileTimestamp(void *linux_side, const char *pchFile)
{
    int64 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileTimestamp((const char *)pchFile);
    return (_ret);
}

ERemoteStoragePlatform cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetSyncPlatforms(void *linux_side, const char *pchFile)
{
    ERemoteStoragePlatform _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetSyncPlatforms((const char *)pchFile);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileCount();
    return (_ret);
}

const char * cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetFileNameAndSize(void *linux_side, int iFile, int32 *pnFileSizeInBytes)
{
    const char *_ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetFileNameAndSize((int)iFile, (int32 *)pnFileSizeInBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetQuota(void *linux_side, int32 *pnTotalBytes, int32 *puAvailableBytes)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetQuota((int32 *)pnTotalBytes, (int32 *)puAvailableBytes);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForAccount(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForAccount();
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_IsCloudEnabledForApp(void *linux_side)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->IsCloudEnabledForApp();
    return (_ret);
}

void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetCloudEnabledForApp(void *linux_side, bool bEnabled)
{
    ((ISteamRemoteStorage*)linux_side)->SetCloudEnabledForApp((bool)bEnabled);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownload(void *linux_side, UGCHandle_t hContent, uint32 unPriority)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCDownload((UGCHandle_t)hContent, (uint32)unPriority);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDownloadProgress(void *linux_side, UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetUGCDownloadProgress((UGCHandle_t)hContent, (int32 *)pnBytesDownloaded, (int32 *)pnBytesExpected);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUGCDetails(void *linux_side, UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetUGCDetails((UGCHandle_t)hContent, (AppId_t *)pnAppID, (char **)ppchName, (int32 *)pnFileSizeInBytes, (CSteamID *)pSteamIDOwner);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCRead(void *linux_side, UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCRead((UGCHandle_t)hContent, (void *)pvData, (int32)cubDataToRead, (uint32)cOffset);
    return (_ret);
}

int32 cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCCount(void *linux_side)
{
    int32 _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCCount();
    return (_ret);
}

UGCHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetCachedUGCHandle(void *linux_side, int32 iCachedContent)
{
    UGCHandle_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetCachedUGCHandle((int32)iCachedContent);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishWorkshopFile(void *linux_side, const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->PublishWorkshopFile((const char *)pchFile, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (ERemoteStoragePublishedFileVisibility)eVisibility, (SteamParamStringArray_t *)pTags, (EWorkshopFileType)eWorkshopFileType);
    return (_ret);
}

PublishedFileUpdateHandle_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CreatePublishedFileUpdateRequest(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    PublishedFileUpdateHandle_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->CreatePublishedFileUpdateRequest((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileFile(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char *pchFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileFile((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFilePreviewFile(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFilePreviewFile((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchPreviewFile);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTitle(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char *pchTitle)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileTitle((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchTitle);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileDescription(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char *pchDescription)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileDescription((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchDescription);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileVisibility(void *linux_side, PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileVisibility((PublishedFileUpdateHandle_t)updateHandle, (ERemoteStoragePublishedFileVisibility)eVisibility);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileTags(void *linux_side, PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileTags((PublishedFileUpdateHandle_t)updateHandle, (SteamParamStringArray_t *)pTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_CommitPublishedFileUpdate(void *linux_side, PublishedFileUpdateHandle_t updateHandle)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->CommitPublishedFileUpdate((PublishedFileUpdateHandle_t)updateHandle);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedFileDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetPublishedFileDetails((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_DeletePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->DeletePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserPublishedFiles(void *linux_side, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumerateUserPublishedFiles((uint32)unStartIndex);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->SubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSubscribedFiles(void *linux_side, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumerateUserSubscribedFiles((uint32)unStartIndex);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UnsubscribePublishedFile(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UnsubscribePublishedFile((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

bool cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdatePublishedFileSetChangeDescription(void *linux_side, PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription)
{
    bool _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdatePublishedFileSetChangeDescription((PublishedFileUpdateHandle_t)updateHandle, (const char *)pchChangeDescription);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetPublishedItemVoteDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetPublishedItemVoteDetails((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UpdateUserPublishedItemVote(void *linux_side, PublishedFileId_t unPublishedFileId, bool bVoteUp)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UpdateUserPublishedItemVote((PublishedFileId_t)unPublishedFileId, (bool)bVoteUp);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_GetUserPublishedItemVoteDetails(void *linux_side, PublishedFileId_t unPublishedFileId)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->GetUserPublishedItemVoteDetails((PublishedFileId_t)unPublishedFileId);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumerateUserSharedWorkshopFiles(void *linux_side, CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumerateUserSharedWorkshopFiles((CSteamID)steamId, (uint32)unStartIndex, (SteamParamStringArray_t *)pRequiredTags, (SteamParamStringArray_t *)pExcludedTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_PublishVideo(void *linux_side, EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->PublishVideo((EWorkshopVideoProvider)eVideoProvider, (const char *)pchVideoAccount, (const char *)pchVideoIdentifier, (const char *)pchPreviewFile, (AppId_t)nConsumerAppId, (const char *)pchTitle, (const char *)pchDescription, (ERemoteStoragePublishedFileVisibility)eVisibility, (SteamParamStringArray_t *)pTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_SetUserPublishedFileAction(void *linux_side, PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->SetUserPublishedFileAction((PublishedFileId_t)unPublishedFileId, (EWorkshopFileAction)eAction);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedFilesByUserAction(void *linux_side, EWorkshopFileAction eAction, uint32 unStartIndex)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumeratePublishedFilesByUserAction((EWorkshopFileAction)eAction, (uint32)unStartIndex);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_EnumeratePublishedWorkshopFiles(void *linux_side, EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->EnumeratePublishedWorkshopFiles((EWorkshopEnumerationType)eEnumerationType, (uint32)unStartIndex, (uint32)unCount, (uint32)unDays, (SteamParamStringArray_t *)pTags, (SteamParamStringArray_t *)pUserTags);
    return (_ret);
}

SteamAPICall_t cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION010_UGCDownloadToLocation(void *linux_side, UGCHandle_t hContent, const char *pchLocation, uint32 unPriority)
{
    SteamAPICall_t _ret;
    _ret = ((ISteamRemoteStorage*)linux_side)->UGCDownloadToLocation((UGCHandle_t)hContent, (const char *)pchLocation, (uint32)unPriority);
    return (_ret);
}

#ifdef __cplusplus
}
#endif
