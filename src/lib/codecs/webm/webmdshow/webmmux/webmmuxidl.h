

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ..\IDL\webmmux.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __webmmuxidl_h__
#define __webmmuxidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IWebmMux_FWD_DEFINED__
#define __IWebmMux_FWD_DEFINED__
typedef interface IWebmMux IWebmMux;

#endif 	/* __IWebmMux_FWD_DEFINED__ */


#ifndef __WebmMux_FWD_DEFINED__
#define __WebmMux_FWD_DEFINED__

#ifdef __cplusplus
typedef class WebmMux WebmMux;
#else
typedef struct WebmMux WebmMux;
#endif /* __cplusplus */

#endif 	/* __WebmMux_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __WebmMuxLib_LIBRARY_DEFINED__
#define __WebmMuxLib_LIBRARY_DEFINED__

/* library WebmMuxLib */
/* [version][helpstring][uuid] */ 


EXTERN_C const IID LIBID_WebmMuxLib;

#ifndef __IWebmMux_INTERFACE_DEFINED__
#define __IWebmMux_INTERFACE_DEFINED__

/* interface IWebmMux */
/* [helpstring][uuid][object] */ 


EXTERN_C const IID IID_IWebmMux;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED311101-5211-11DF-94AF-0026B977EEAA")
    IWebmMux : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetWritingApp( 
            /* [string][in] */ const wchar_t *__MIDL__IWebmMux0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetWritingApp( 
            /* [string][out] */ wchar_t **__MIDL__IWebmMux0001) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWebmMuxVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWebmMux * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWebmMux * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWebmMux * This);
        
        DECLSPEC_XFGVIRT(IWebmMux, SetWritingApp)
        HRESULT ( STDMETHODCALLTYPE *SetWritingApp )( 
            IWebmMux * This,
            /* [string][in] */ const wchar_t *__MIDL__IWebmMux0000);
        
        DECLSPEC_XFGVIRT(IWebmMux, GetWritingApp)
        HRESULT ( STDMETHODCALLTYPE *GetWritingApp )( 
            IWebmMux * This,
            /* [string][out] */ wchar_t **__MIDL__IWebmMux0001);
        
        END_INTERFACE
    } IWebmMuxVtbl;

    interface IWebmMux
    {
        CONST_VTBL struct IWebmMuxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWebmMux_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWebmMux_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWebmMux_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWebmMux_SetWritingApp(This,__MIDL__IWebmMux0000)	\
    ( (This)->lpVtbl -> SetWritingApp(This,__MIDL__IWebmMux0000) ) 

#define IWebmMux_GetWritingApp(This,__MIDL__IWebmMux0001)	\
    ( (This)->lpVtbl -> GetWritingApp(This,__MIDL__IWebmMux0001) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWebmMux_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_WebmMux;

#ifdef __cplusplus

class DECLSPEC_UUID("ED3110F0-5211-11DF-94AF-0026B977EEAA")
WebmMux;
#endif
#endif /* __WebmMuxLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


