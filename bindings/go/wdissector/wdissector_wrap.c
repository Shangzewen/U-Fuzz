/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.12
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

/* source: wdissector.i */

#define SWIGMODULE wdissector
/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <stdint.h>
#include "wdissector.h"
extern const char *wdissector_version_info();
extern const char *wdissector_profile_info();


#include <stdint.h>		// Use the C99 official header

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_wdissector_f377edad665c4a82(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_wdissector_f377edad665c4a82(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


void _wrap_DEMO_PKT_RRC_CONNECTION_SETUP_set_wdissector_f377edad665c4a82(char *_swig_go_0) {
  uint8_t *arg1 ;
  
  arg1 = *(uint8_t **)&_swig_go_0; 
  
  {
    size_t ii;
    uint8_t *b = (uint8_t *) DEMO_PKT_RRC_CONNECTION_SETUP;
    for (ii = 0; ii < (size_t)128; ii++) b[ii] = *((uint8_t *) arg1 + ii);
  }
  
}


char *_wrap_DEMO_PKT_RRC_CONNECTION_SETUP_get_wdissector_f377edad665c4a82() {
  uint8_t *result = 0 ;
  char *_swig_go_result;
  
  
  result = (uint8_t *)(uint8_t *)DEMO_PKT_RRC_CONNECTION_SETUP;
  *(uint8_t **)&_swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_DEMO_PKT_RRC_SETUP_COMPLETE_set_wdissector_f377edad665c4a82(char *_swig_go_0) {
  uint8_t *arg1 ;
  
  arg1 = *(uint8_t **)&_swig_go_0; 
  
  {
    size_t ii;
    uint8_t *b = (uint8_t *) DEMO_PKT_RRC_SETUP_COMPLETE;
    for (ii = 0; ii < (size_t)122; ii++) b[ii] = *((uint8_t *) arg1 + ii);
  }
  
}


char *_wrap_DEMO_PKT_RRC_SETUP_COMPLETE_get_wdissector_f377edad665c4a82() {
  uint8_t *result = 0 ;
  char *_swig_go_result;
  
  
  result = (uint8_t *)(uint8_t *)DEMO_PKT_RRC_SETUP_COMPLETE;
  *(uint8_t **)&_swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_DEMO_PKT_RRC_RECONFIGURATION_set_wdissector_f377edad665c4a82(char *_swig_go_0) {
  uint8_t *arg1 ;
  
  arg1 = *(uint8_t **)&_swig_go_0; 
  
  {
    size_t ii;
    uint8_t *b = (uint8_t *) DEMO_PKT_RRC_RECONFIGURATION;
    for (ii = 0; ii < (size_t)114; ii++) b[ii] = *((uint8_t *) arg1 + ii);
  }
  
}


char *_wrap_DEMO_PKT_RRC_RECONFIGURATION_get_wdissector_f377edad665c4a82() {
  uint8_t *result = 0 ;
  char *_swig_go_result;
  
  
  result = (uint8_t *)(uint8_t *)DEMO_PKT_RRC_RECONFIGURATION;
  *(uint8_t **)&_swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_DEMO_PKT_NAS_ATTACH_REQUEST_set_wdissector_f377edad665c4a82(char *_swig_go_0) {
  uint8_t *arg1 ;
  
  arg1 = *(uint8_t **)&_swig_go_0; 
  
  {
    size_t ii;
    uint8_t *b = (uint8_t *) DEMO_PKT_NAS_ATTACH_REQUEST;
    for (ii = 0; ii < (size_t)118; ii++) b[ii] = *((uint8_t *) arg1 + ii);
  }
  
}


char *_wrap_DEMO_PKT_NAS_ATTACH_REQUEST_get_wdissector_f377edad665c4a82() {
  uint8_t *result = 0 ;
  char *_swig_go_result;
  
  
  result = (uint8_t *)(uint8_t *)DEMO_PKT_NAS_ATTACH_REQUEST;
  *(uint8_t **)&_swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_wdissector_init_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint8_t)wdissector_init((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


void _wrap_wdissector_set_log_level_wdissector_f377edad665c4a82(intgo _swig_go_0) {
  enum ws_log_level arg1 ;
  
  arg1 = (enum ws_log_level)_swig_go_0; 
  
  wdissector_set_log_level(arg1);
  
}


void _wrap_wdissector_enable_fast_full_dissection_wdissector_f377edad665c4a82(char _swig_go_0) {
  uint8_t arg1 ;
  
  arg1 = (uint8_t)_swig_go_0; 
  
  wdissector_enable_fast_full_dissection(arg1);
  
}


void _wrap_wdissector_enable_full_dissection_wdissector_f377edad665c4a82(char _swig_go_0) {
  uint8_t arg1 ;
  
  arg1 = (uint8_t)_swig_go_0; 
  
  wdissector_enable_full_dissection(arg1);
  
}


gboolean *_wrap_packet_set_protocol_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = packet_set_protocol((char const *)arg1);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


gboolean *_wrap_packet_set_protocol_fast_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = packet_set_protocol_fast((char const *)arg1);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


void _wrap_packet_dissect_wdissector_f377edad665c4a82(char *_swig_go_0, intgo _swig_go_1) {
  unsigned char *arg1 = (unsigned char *) 0 ;
  uint32_t arg2 ;
  
  arg1 = *(unsigned char **)&_swig_go_0; 
  arg2 = (uint32_t)_swig_go_1; 
  
  packet_dissect(arg1,arg2);
  
}


void _wrap_packet_set_direction_wdissector_f377edad665c4a82(intgo _swig_go_0) {
  int arg1 ;
  
  arg1 = (int)_swig_go_0; 
  
  packet_set_direction(arg1);
  
}


void _wrap_packet_cleanup_wdissector_f377edad665c4a82() {
  packet_cleanup();
  
}


void _wrap_packet_navigate_wdissector_f377edad665c4a82(intgo _swig_go_0, intgo _swig_go_1, void* _swig_go_2) {
  uint32_t arg1 ;
  uint32_t arg2 ;
  uint8_t (*arg3)(proto_tree *,uint8_t,uint8_t *) = (uint8_t (*)(proto_tree *,uint8_t,uint8_t *)) 0 ;
  
  arg1 = (uint32_t)_swig_go_0; 
  arg2 = (uint32_t)_swig_go_1; 
  arg3 = *(uint8_t (**)(proto_tree *,uint8_t,uint8_t *))&_swig_go_2; 
  
  packet_navigate(arg1,arg2,arg3);
  
}


epan_dissect_t *_wrap_wdissector_get_edt_wdissector_f377edad665c4a82() {
  epan_dissect_t *result = 0 ;
  epan_dissect_t *_swig_go_result;
  
  
  result = (epan_dissect_t *)wdissector_get_edt();
  *(epan_dissect_t **)&_swig_go_result = (epan_dissect_t *)result; 
  return _swig_go_result;
}


_gostring_ _wrap_wdissector_version_info_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)wdissector_version_info();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_wdissector_profile_info_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)wdissector_profile_info();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


gboolean *_wrap_packet_has_condition_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = packet_has_condition((char const *)arg1);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


gboolean *_wrap_packet_register_condition_wdissector_f377edad665c4a82(_gostring_ _swig_go_0, short _swig_go_1) {
  char *arg1 = (char *) 0 ;
  uint16_t arg2 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  arg2 = (uint16_t)_swig_go_1; 
  
  result = packet_register_condition((char const *)arg1,arg2);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


void _wrap_packet_set_condition_wdissector_f377edad665c4a82(short _swig_go_0) {
  uint16_t arg1 ;
  
  arg1 = (uint16_t)_swig_go_0; 
  
  packet_set_condition(arg1);
  
}


gboolean *_wrap_packet_read_condition_wdissector_f377edad665c4a82(short _swig_go_0) {
  uint16_t arg1 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  arg1 = (uint16_t)_swig_go_0; 
  
  result = packet_read_condition(arg1);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  return _swig_go_result;
}


_gostring_ _wrap_packet_register_filter_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (char *)packet_register_filter((char const *)arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  return _swig_go_result;
}


void _wrap_packet_set_filter_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  packet_set_filter((char const *)arg1);
  
  free(arg1); 
}


gboolean *_wrap_packet_read_filter_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = packet_read_filter((char const *)arg1);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


header_field_info *_wrap_packet_get_header_info_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  header_field_info *result = 0 ;
  header_field_info *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (header_field_info *)packet_get_header_info((char const *)arg1);
  *(header_field_info **)&_swig_go_result = (header_field_info *)result; 
  free(arg1); 
  return _swig_go_result;
}


header_field_info *_wrap_packet_register_set_field_hfinfo_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  header_field_info *result = 0 ;
  header_field_info *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (header_field_info *)packet_register_set_field_hfinfo((char const *)arg1);
  *(header_field_info **)&_swig_go_result = (header_field_info *)result; 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_exists_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  int result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (int)packet_get_field_exists((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


field_info *_wrap_packet_get_field_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  field_info *result = 0 ;
  field_info *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (field_info *)packet_get_field((char const *)arg1);
  *(field_info **)&_swig_go_result = (field_info *)result; 
  free(arg1); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_get_field_name_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (char *)packet_get_field_name((char const *)arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_get_field_string_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (char *)packet_get_field_string((char const *)arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_offset_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint32_t)packet_get_field_offset((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_size_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint32_t)packet_get_field_size((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


long long _wrap_packet_get_field_bitmask_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint64_t result;
  long long _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint64_t)packet_get_field_bitmask((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_encoding_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint32_t)packet_get_field_encoding((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_type_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  int result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (int)packet_get_field_type((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_get_field_type_name_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (char *)packet_get_field_type_name((char const *)arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_get_field_encoding_name_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (char *)packet_get_field_encoding_name((char const *)arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  free(arg1); 
  return _swig_go_result;
}


intgo _wrap_packet_get_field_uint32_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  result = (uint32_t)packet_get_field_uint32((char const *)arg1);
  _swig_go_result = result; 
  free(arg1); 
  return _swig_go_result;
}


void _wrap_packet_set_field_hfinfo_wdissector_f377edad665c4a82(header_field_info *_swig_go_0) {
  header_field_info *arg1 = (header_field_info *) 0 ;
  
  arg1 = *(header_field_info **)&_swig_go_0; 
  
  packet_set_field_hfinfo(arg1);
  
}


void _wrap_packet_set_field_hfinfo_all_wdissector_f377edad665c4a82(header_field_info *_swig_go_0) {
  header_field_info *arg1 = (header_field_info *) 0 ;
  
  arg1 = *(header_field_info **)&_swig_go_0; 
  
  packet_set_field_hfinfo_all(arg1);
  
}


intgo _wrap_packet_read_field_exists_hfinfo_wdissector_f377edad665c4a82(header_field_info *_swig_go_0) {
  header_field_info *arg1 = (header_field_info *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(header_field_info **)&_swig_go_0; 
  
  result = (int)packet_read_field_exists_hfinfo(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


field_info *_wrap_packet_read_field_hfinfo_wdissector_f377edad665c4a82(header_field_info *_swig_go_0) {
  header_field_info *arg1 = (header_field_info *) 0 ;
  field_info *result = 0 ;
  field_info *_swig_go_result;
  
  arg1 = *(header_field_info **)&_swig_go_0; 
  
  result = (field_info *)packet_read_field_hfinfo(arg1);
  *(field_info **)&_swig_go_result = (field_info *)result; 
  return _swig_go_result;
}


GPtrArray *_wrap_packet_read_fields_hfinfo_wdissector_f377edad665c4a82(header_field_info *_swig_go_0) {
  header_field_info *arg1 = (header_field_info *) 0 ;
  GPtrArray *result = 0 ;
  GPtrArray *_swig_go_result;
  
  arg1 = *(header_field_info **)&_swig_go_0; 
  
  result = (GPtrArray *)packet_read_fields_hfinfo(arg1);
  *(GPtrArray **)&_swig_go_result = (GPtrArray *)result; 
  return _swig_go_result;
}


gboolean *_wrap_packet_register_field_wdissector_f377edad665c4a82(_gostring_ _swig_go_0, short _swig_go_1) {
  char *arg1 = (char *) 0 ;
  uint16_t arg2 ;
  gboolean result;
  gboolean *_swig_go_result;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  arg2 = (uint16_t)_swig_go_1; 
  
  result = packet_register_field((char const *)arg1,arg2);
  {
    gboolean * resultptr = (gboolean *)malloc(sizeof(gboolean));
    memmove(resultptr, &result, sizeof(gboolean));
    *(gboolean **)&_swig_go_result = resultptr;
  }
  free(arg1); 
  return _swig_go_result;
}


void _wrap_packet_register_set_field_wdissector_f377edad665c4a82(_gostring_ _swig_go_0, short _swig_go_1) {
  char *arg1 = (char *) 0 ;
  uint16_t arg2 ;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  arg2 = (uint16_t)_swig_go_1; 
  
  packet_register_set_field((char const *)arg1,arg2);
  
  free(arg1); 
}


void _wrap_packet_set_field_wdissector_f377edad665c4a82(short _swig_go_0) {
  uint16_t arg1 ;
  
  arg1 = (uint16_t)_swig_go_0; 
  
  packet_set_field(arg1);
  
}


field_info *_wrap_packet_read_field_wdissector_f377edad665c4a82(short _swig_go_0) {
  uint16_t arg1 ;
  field_info *result = 0 ;
  field_info *_swig_go_result;
  
  arg1 = (uint16_t)_swig_go_0; 
  
  result = (field_info *)packet_read_field(arg1);
  *(field_info **)&_swig_go_result = (field_info *)result; 
  return _swig_go_result;
}


GPtrArray *_wrap_packet_read_fields_wdissector_f377edad665c4a82(short _swig_go_0) {
  uint16_t arg1 ;
  GPtrArray *result = 0 ;
  GPtrArray *_swig_go_result;
  
  arg1 = (uint16_t)_swig_go_0; 
  
  result = (GPtrArray *)packet_read_fields(arg1);
  *(GPtrArray **)&_swig_go_result = (GPtrArray *)result; 
  return _swig_go_result;
}


field_info *_wrap_packet_read_field_at_wdissector_f377edad665c4a82(GPtrArray *_swig_go_0, short _swig_go_1) {
  GPtrArray *arg1 = (GPtrArray *) 0 ;
  uint16_t arg2 ;
  field_info *result = 0 ;
  field_info *_swig_go_result;
  
  arg1 = *(GPtrArray **)&_swig_go_0; 
  arg2 = (uint16_t)_swig_go_1; 
  
  result = (field_info *)packet_read_field_at(arg1,arg2);
  *(field_info **)&_swig_go_result = (field_info *)result; 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_field_name_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (char *)packet_read_field_name(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_field_abbrev_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (char *)packet_read_field_abbrev(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


short _wrap_packet_read_field_offset_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  uint16_t result;
  short _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (uint16_t)packet_read_field_offset(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_packet_read_field_size_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (uint32_t)packet_read_field_size(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_packet_read_field_size_bits_wdissector_f377edad665c4a82(long long _swig_go_0) {
  uint64_t arg1 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (uint64_t)_swig_go_0; 
  
  result = (uint8_t)packet_read_field_size_bits(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_packet_read_field_bitmask_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  unsigned long result;
  long long _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (unsigned long)packet_read_field_bitmask(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_packet_read_field_bitmask_offset_wdissector_f377edad665c4a82(long long _swig_go_0) {
  uint64_t arg1 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (uint64_t)_swig_go_0; 
  
  result = (uint8_t)packet_read_field_bitmask_offset(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


char _wrap_packet_read_field_bitmask_offset_msb_wdissector_f377edad665c4a82(long long _swig_go_0) {
  uint64_t arg1 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = (uint64_t)_swig_go_0; 
  
  result = (uint8_t)packet_read_field_bitmask_offset_msb(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_packet_read_field_encoding_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (uint32_t)packet_read_field_encoding(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_packet_read_field_type_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  int result;
  intgo _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (int)packet_read_field_type(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_field_type_name_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (char *)packet_read_field_type_name(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_field_encoding_name_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (char *)packet_read_field_encoding_name(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_field_string_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (char *)packet_read_field_string(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


char *_wrap_packet_read_field_ustring_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  unsigned char *result = 0 ;
  char *_swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (unsigned char *)packet_read_field_ustring(arg1);
  *(unsigned char **)&_swig_go_result = (unsigned char *)result; 
  return _swig_go_result;
}


GByteArray *_wrap_packet_read_field_bytes_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  GByteArray *result = 0 ;
  GByteArray *_swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (GByteArray *)packet_read_field_bytes(arg1);
  *(GByteArray **)&_swig_go_result = (GByteArray *)result; 
  return _swig_go_result;
}


intgo _wrap_packet_read_field_uint32_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  uint32_t result;
  intgo _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (uint32_t)packet_read_field_uint32(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


intgo _wrap_packet_read_field_int32_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  int32_t result;
  intgo _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (int32_t)packet_read_field_int32(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_packet_read_field_uint64_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  uint64_t result;
  long long _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (uint64_t)packet_read_field_uint64(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_packet_read_field_int64_wdissector_f377edad665c4a82(field_info *_swig_go_0) {
  field_info *arg1 = (field_info *) 0 ;
  int64_t result;
  long long _swig_go_result;
  
  arg1 = *(field_info **)&_swig_go_0; 
  
  result = (int64_t)packet_read_field_int64(arg1);
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_packet_read_value_to_string_wdissector_f377edad665c4a82(intgo _swig_go_0, header_field_info *_swig_go_1) {
  uint32_t arg1 ;
  header_field_info *arg2 = (header_field_info *) 0 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = (uint32_t)_swig_go_0; 
  arg2 = *(header_field_info **)&_swig_go_1; 
  
  result = (char *)packet_read_value_to_string(arg1,(header_field_info const *)arg2);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_show_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_show();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_summary_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_summary();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_layers_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_layers();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_layer_wdissector_f377edad665c4a82(char _swig_go_0) {
  uint8_t arg1 ;
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = (uint8_t)_swig_go_0; 
  
  result = (char *)packet_layer(arg1);
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


intgo _wrap_packet_layers_count_wdissector_f377edad665c4a82() {
  uint32_t result;
  intgo _swig_go_result;
  
  
  result = (uint32_t)packet_layers_count();
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_packet_relevant_fields_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_relevant_fields();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_description_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_description();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


char _wrap_packet_direction_wdissector_f377edad665c4a82() {
  uint8_t result;
  char _swig_go_result;
  
  
  result = (uint8_t)packet_direction();
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_packet_protocol_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_protocol();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


_gostring_ _wrap_packet_show_pdml_wdissector_f377edad665c4a82() {
  char *result = 0 ;
  _gostring_ _swig_go_result;
  
  
  result = (char *)packet_show_pdml();
  _swig_go_result = Swig_AllocateString((char*)result, result ? strlen((char*)result) : 0); 
  return _swig_go_result;
}


char _wrap_packet_field_summary_wdissector_f377edad665c4a82(char *_swig_go_0, intgo _swig_go_1, _gostring_ _swig_go_2) {
  uint8_t *arg1 = (uint8_t *) 0 ;
  uint32_t arg2 ;
  char *arg3 = (char *) 0 ;
  uint8_t result;
  char _swig_go_result;
  
  arg1 = *(uint8_t **)&_swig_go_0; 
  arg2 = (uint32_t)_swig_go_1; 
  
  arg3 = (char *)malloc(_swig_go_2.n + 1);
  memcpy(arg3, _swig_go_2.p, _swig_go_2.n);
  arg3[_swig_go_2.n] = '\0';
  
  
  result = (uint8_t)packet_field_summary(arg1,arg2,(char const *)arg3);
  _swig_go_result = result; 
  free(arg3); 
  return _swig_go_result;
}


void _wrap_wd_log_g_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  wd_log_g((char const *)arg1);
  
  free(arg1); 
}


void _wrap_wd_log_y_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  wd_log_y((char const *)arg1);
  
  free(arg1); 
}


void _wrap_wd_log_r_wdissector_f377edad665c4a82(_gostring_ _swig_go_0) {
  char *arg1 = (char *) 0 ;
  
  
  arg1 = (char *)malloc(_swig_go_0.n + 1);
  memcpy(arg1, _swig_go_0.p, _swig_go_0.n);
  arg1[_swig_go_0.n] = '\0';
  
  
  wd_log_r((char const *)arg1);
  
  free(arg1); 
}


void _wrap_set_wd_log_g_wdissector_f377edad665c4a82(void* _swig_go_0) {
  void (*arg1)(char const *) = (void (*)(char const *)) 0 ;
  
  arg1 = *(void (**)(char const *))&_swig_go_0; 
  
  set_wd_log_g(arg1);
  
}


void _wrap_set_wd_log_y_wdissector_f377edad665c4a82(void* _swig_go_0) {
  void (*arg1)(char const *) = (void (*)(char const *)) 0 ;
  
  arg1 = *(void (**)(char const *))&_swig_go_0; 
  
  set_wd_log_y(arg1);
  
}


void _wrap_set_wd_log_r_wdissector_f377edad665c4a82(void* _swig_go_0) {
  void (*arg1)(char const *) = (void (*)(char const *)) 0 ;
  
  arg1 = *(void (**)(char const *))&_swig_go_0; 
  
  set_wd_log_r(arg1);
  
}


#ifdef __cplusplus
}
#endif

