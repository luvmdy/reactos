/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         ReactOS System Libraries
 * FILE:            lib/rtl/rtl.h
 * PURPOSE:         Run-Time Libary Header
 * PROGRAMMER:      Alex Ionescu
 */

/* INCLUDES ******************************************************************/

#ifndef RTL_H
#define RTL_H

/* We're a core NT DLL, we don't import syscalls */
#define WIN32_NO_STATUS
#define _INC_SWPRINTF_INL_

/* C Headers */
#include <stdio.h>

/* PSDK/NDK Headers */
#include <windows.h>
#include <ndk/ntndk.h>

#ifdef _M_PPC /* Hmm why is this needed? */
#define DBG_PRINTEXCEPTION_C             ((NTSTATUS)0x40010006)
#endif

/* Internal RTL header */
#include <reactos/helper.h>
#include "rtlp.h"

#include <pseh/pseh.h>

#endif /* RTL_H */

/* EOF */
