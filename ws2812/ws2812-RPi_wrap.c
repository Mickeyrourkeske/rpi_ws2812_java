/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

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
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
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



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "ws2812-RPi.h"


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_ws2812JNI_Color_1t_1r_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  arg2 = (unsigned char)jarg2; 
  if (arg1) (arg1)->r = arg2;
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_Color_1t_1r_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  result = (unsigned char) ((arg1)->r);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_Color_1t_1g_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  arg2 = (unsigned char)jarg2; 
  if (arg1) (arg1)->g = arg2;
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_Color_1t_1g_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  result = (unsigned char) ((arg1)->g);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_Color_1t_1b_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  arg2 = (unsigned char)jarg2; 
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_Color_1t_1b_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jshort jresult = 0 ;
  Color_t *arg1 = (Color_t *) 0 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Color_t **)&jarg1; 
  result = (unsigned char) ((arg1)->b);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_new_1Color_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Color_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Color_t *)calloc(1, sizeof(Color_t));
  *(Color_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_delete_1Color_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Color_t *arg1 = (Color_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Color_t **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_init(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  init(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_clear(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  clear();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_show(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  show();
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_Wheel(JNIEnv *jenv, jclass jcls, jshort jarg1) {
  jlong jresult = 0 ;
  uint8_t arg1 ;
  Color_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (uint8_t)jarg1; 
  result = Wheel(arg1);
  {
    Color_t * resultptr = (Color_t *) malloc(sizeof(Color_t));
    memmove(resultptr, &result, sizeof(Color_t));
    *(Color_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_colorWipe(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  Color_t arg1 ;
  uint8_t arg2 ;
  Color_t *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Color_t **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Color_t");
    return ;
  }
  arg1 = *argp1; 
  arg2 = (uint8_t)jarg2; 
  colorWipe(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_rainbow(JNIEnv *jenv, jclass jcls, jshort jarg1) {
  uint8_t arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (uint8_t)jarg1; 
  rainbow(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_rainbowCycle(JNIEnv *jenv, jclass jcls, jshort jarg1) {
  uint8_t arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (uint8_t)jarg1; 
  rainbowCycle(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_theaterChase(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jshort jarg2) {
  Color_t arg1 ;
  uint8_t arg2 ;
  Color_t *argp1 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  argp1 = *(Color_t **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Color_t");
    return ;
  }
  arg1 = *argp1; 
  arg2 = (uint8_t)jarg2; 
  theaterChase(arg1,arg2);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_theaterChaseRainbow(JNIEnv *jenv, jclass jcls, jshort jarg1) {
  uint8_t arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (uint8_t)jarg1; 
  theaterChaseRainbow(arg1);
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_setBrightness(JNIEnv *jenv, jclass jcls, jdouble jarg1) {
  jshort jresult = 0 ;
  double arg1 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (double)jarg1; 
  result = (unsigned char)setBrightness(arg1);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_ws2812JNI_getBrightness(JNIEnv *jenv, jclass jcls) {
  jdouble jresult = 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  result = (double)getBrightness();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_RGB2Color(JNIEnv *jenv, jclass jcls, jshort jarg1, jshort jarg2, jshort jarg3) {
  jlong jresult = 0 ;
  unsigned char arg1 ;
  unsigned char arg2 ;
  unsigned char arg3 ;
  Color_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned char)jarg1; 
  arg2 = (unsigned char)jarg2; 
  arg3 = (unsigned char)jarg3; 
  result = RGB2Color(arg1,arg2,arg3);
  {
    Color_t * resultptr = (Color_t *) malloc(sizeof(Color_t));
    memmove(resultptr, &result, sizeof(Color_t));
    *(Color_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_Color(JNIEnv *jenv, jclass jcls, jshort jarg1, jshort jarg2, jshort jarg3) {
  jlong jresult = 0 ;
  unsigned char arg1 ;
  unsigned char arg2 ;
  unsigned char arg3 ;
  Color_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned char)jarg1; 
  arg2 = (unsigned char)jarg2; 
  arg3 = (unsigned char)jarg3; 
  result = Color(arg1,arg2,arg3);
  {
    Color_t * resultptr = (Color_t *) malloc(sizeof(Color_t));
    memmove(resultptr, &result, sizeof(Color_t));
    *(Color_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_setPixelColor(JNIEnv *jenv, jclass jcls, jlong jarg1, jshort jarg2, jshort jarg3, jshort jarg4) {
  jshort jresult = 0 ;
  unsigned int arg1 ;
  unsigned char arg2 ;
  unsigned char arg3 ;
  unsigned char arg4 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned char)jarg2; 
  arg3 = (unsigned char)jarg3; 
  arg4 = (unsigned char)jarg4; 
  result = (unsigned char)setPixelColor(arg1,arg2,arg3,arg4);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_setPixelColorT(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jobject jarg2_) {
  jshort jresult = 0 ;
  unsigned int arg1 ;
  Color_t arg2 ;
  Color_t *argp2 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg2_;
  arg1 = (unsigned int)jarg1; 
  argp2 = *(Color_t **)&jarg2; 
  if (!argp2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null Color_t");
    return 0;
  }
  arg2 = *argp2; 
  result = (unsigned char)setPixelColorT(arg1,arg2);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_getPixelColor(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  unsigned int arg1 ;
  Color_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = getPixelColor(arg1);
  {
    Color_t * resultptr = (Color_t *) malloc(sizeof(Color_t));
    memmove(resultptr, &result, sizeof(Color_t));
    *(Color_t **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_numPixels(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  result = (unsigned int)numPixels();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_ws2812JNI_getPixels(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Color_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Color_t *)getPixels();
  *(Color_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_setPWMBit(JNIEnv *jenv, jclass jcls, jlong jarg1, jshort jarg2) {
  unsigned int arg1 ;
  unsigned char arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned char)jarg2; 
  setPWMBit(arg1,arg2);
}


SWIGEXPORT jshort JNICALL Java_ws2812JNI_getPWMBit(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jshort jresult = 0 ;
  unsigned int arg1 ;
  unsigned char result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  result = (unsigned char)getPWMBit(arg1);
  jresult = (jshort)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpLEDBuffer(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpLEDBuffer();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpPWMBuffer(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpPWMBuffer();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpPWMStatus(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpPWMStatus();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpPWMControl(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  dumpPWMControl(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpPWMDMAC(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpPWMDMAC();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpPWM(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpPWM();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpDMARegs(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpDMARegs();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpControlBlock(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  dma_cb_t *arg1 = (dma_cb_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(dma_cb_t **)&jarg1; 
  dumpControlBlock(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpTransferInformation(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  unsigned int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  dumpTransferInformation(arg1);
}


SWIGEXPORT void JNICALL Java_ws2812JNI_dumpDMA(JNIEnv *jenv, jclass jcls) {
  (void)jenv;
  (void)jcls;
  dumpDMA();
}


SWIGEXPORT void JNICALL Java_ws2812JNI_terminate(JNIEnv *jenv, jclass jcls, jint jarg1) {
  int arg1 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  terminate(arg1);
}


#ifdef __cplusplus
}
#endif

