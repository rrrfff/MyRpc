

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sat Aug 27 03:20:44 2016
 */
/* Compiler settings for rpc.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __rpc_h_h__
#define __rpc_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __MPQ_INTERFACE_DEFINED__
#define __MPQ_INTERFACE_DEFINED__

/* interface MPQ */
/* [implicit_handle][version][uuid] */ 

/* [async] */ void  JoinTask( 
    /* [in] */ PRPC_ASYNC_STATE JoinTask_AsyncHandle,
    /* [string][in] */ unsigned char *pszString,
    /* [out] */ int *res);

void Shutdown( void);


extern handle_t MPQ_BindingHandle;


extern RPC_IF_HANDLE MPQ_v1_0_c_ifspec;
extern RPC_IF_HANDLE MPQ_v1_0_s_ifspec;
#endif /* __MPQ_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


