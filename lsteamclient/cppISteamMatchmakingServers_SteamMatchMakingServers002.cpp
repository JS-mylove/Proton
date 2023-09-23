#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_158/steam_api.h"
#include "steamworks_sdk_158/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_158
#include "struct_converters.h"
#include "cppISteamMatchmakingServers_SteamMatchMakingServers002.h"
HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestInternetServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestInternetServerList((AppId_t)iApp, (MatchMakingKeyValuePair_t **)ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestLANServerList(void *linux_side, AppId_t iApp, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestLANServerList((AppId_t)iApp, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFriendsServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestFriendsServerList((AppId_t)iApp, (MatchMakingKeyValuePair_t **)ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestFavoritesServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestFavoritesServerList((AppId_t)iApp, (MatchMakingKeyValuePair_t **)ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestHistoryServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestHistoryServerList((AppId_t)iApp, (MatchMakingKeyValuePair_t **)ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

HServerListRequest cppISteamMatchmakingServers_SteamMatchMakingServers002_RequestSpectatorServerList(void *linux_side, AppId_t iApp, MatchMakingKeyValuePair_t **ppchFilters, uint32 nFilters, void /*ISteamMatchmakingServerListResponse*/ *pRequestServersResponse)
{
    HServerListRequest _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->RequestSpectatorServerList((AppId_t)iApp, (MatchMakingKeyValuePair_t **)ppchFilters, (uint32)nFilters, (ISteamMatchmakingServerListResponse *)pRequestServersResponse);
    return (_ret);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_ReleaseRequest(void *linux_side, HServerListRequest hServerListRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->ReleaseRequest((HServerListRequest)hServerListRequest);
}

gameserveritem_t * cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerDetails(void *linux_side, HServerListRequest hRequest, int iServer)
{
    gameserveritem_t *_ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->GetServerDetails((HServerListRequest)hRequest, (int)iServer);
    return (_ret);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelQuery(void *linux_side, HServerListRequest hRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelQuery((HServerListRequest)hRequest);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshQuery(void *linux_side, HServerListRequest hRequest)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshQuery((HServerListRequest)hRequest);
}

bool cppISteamMatchmakingServers_SteamMatchMakingServers002_IsRefreshing(void *linux_side, HServerListRequest hRequest)
{
    bool _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->IsRefreshing((HServerListRequest)hRequest);
    return (_ret);
}

int cppISteamMatchmakingServers_SteamMatchMakingServers002_GetServerCount(void *linux_side, HServerListRequest hRequest)
{
    int _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->GetServerCount((HServerListRequest)hRequest);
    return (_ret);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_RefreshServer(void *linux_side, HServerListRequest hRequest, int iServer)
{
    ((ISteamMatchmakingServers*)linux_side)->RefreshServer((HServerListRequest)hRequest, (int)iServer);
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PingServer(void *linux_side, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPingResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->PingServer((uint32)unIP, (uint16)usPort, (ISteamMatchmakingPingResponse *)pRequestServersResponse);
    return (_ret);
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_PlayerDetails(void *linux_side, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingPlayersResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->PlayerDetails((uint32)unIP, (uint16)usPort, (ISteamMatchmakingPlayersResponse *)pRequestServersResponse);
    return (_ret);
}

HServerQuery cppISteamMatchmakingServers_SteamMatchMakingServers002_ServerRules(void *linux_side, uint32 unIP, uint16 usPort, void /*ISteamMatchmakingRulesResponse*/ *pRequestServersResponse)
{
    HServerQuery _ret;
    _ret = ((ISteamMatchmakingServers*)linux_side)->ServerRules((uint32)unIP, (uint16)usPort, (ISteamMatchmakingRulesResponse *)pRequestServersResponse);
    return (_ret);
}

void cppISteamMatchmakingServers_SteamMatchMakingServers002_CancelServerQuery(void *linux_side, HServerQuery hServerQuery)
{
    ((ISteamMatchmakingServers*)linux_side)->CancelServerQuery((HServerQuery)hServerQuery);
}

#ifdef __cplusplus
}
#endif
