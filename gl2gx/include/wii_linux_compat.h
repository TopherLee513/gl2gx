#ifndef __WII_LINUX_COMPAT_H__
#define __WII_LINUX_COMPAT_H__

// compatibility with wii-linux-ngx

#include <pthread.h>
#include "video_types.h"

#ifdef __cplusplus
   extern "C" {
#endif /* __cplusplus */

#define lwp_t pthread_t

#ifdef __cplusplus
   }
#endif /* __cplusplus */

#endif
