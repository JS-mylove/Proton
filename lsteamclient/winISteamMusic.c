/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext, 4)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume, 8)
DEFINE_THISCALL_WRAPPER(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume, 4)

bool __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled(_this->u_iface);
    return _ret;
}

bool __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying(_this->u_iface);
    return _ret;
}

AudioPlayback_Status __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(struct w_steam_iface *_this)
{
    AudioPlayback_Status _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus(_this->u_iface);
    return _ret;
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play(_this->u_iface);
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause(_this->u_iface);
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious(_this->u_iface);
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext(_this->u_iface);
}

void __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(struct w_steam_iface *_this, float flVolume)
{
    TRACE("%p\n", _this);
    cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume(_this->u_iface, flVolume);
}

float __thiscall winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(struct w_steam_iface *_this)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume(_this->u_iface);
    return _ret;
}

extern vtable_ptr winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsEnabled)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_BIsPlaying)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetPlaybackStatus)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Play)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_Pause)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayPrevious)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_PlayNext)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_SetVolume)
        VTABLE_ADD_FUNC(winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_GetVolume)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMMUSIC_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamMusic_STEAMMUSIC_INTERFACE_VERSION001_vtable, 9, "STEAMMUSIC_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

