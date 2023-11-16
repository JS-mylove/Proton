#ifndef __VRCLIENT_UNIX_PRIVATE_H
#define __VRCLIENT_UNIX_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>

#include <windef.h>
#include <winbase.h>

#include "unixlib.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

extern VkDevice_T *(WINAPI *p_get_native_VkDevice)( VkDevice_T * );
extern VkInstance_T *(WINAPI *p_get_native_VkInstance)( VkInstance_T * );
extern VkPhysicalDevice_T *(WINAPI *p_get_native_VkPhysicalDevice)( VkPhysicalDevice_T * );
extern VkPhysicalDevice_T *(WINAPI *p_get_wrapped_VkPhysicalDevice)( VkInstance_T *, VkPhysicalDevice_T * );
extern VkQueue_T *(WINAPI *p_get_native_VkQueue)( VkQueue_T * );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unix_private_generated.h"

#endif /* __VRCLIENT_UNIX_PRIVATE_H */