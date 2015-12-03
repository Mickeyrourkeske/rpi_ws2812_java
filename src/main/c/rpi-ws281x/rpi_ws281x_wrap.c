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


#include <stdint.h>		// Use the C99 official header


#include "lib/ws2811.h"


    uint32_t ws2811_led_get(ws2811_channel_t *channel, int lednum)
    {
        if (lednum >= channel->count)
        {
            return -1;
        }

        return channel->leds[lednum];
    }

    int ws2811_led_set(ws2811_channel_t *channel, int lednum, uint32_t color)
    {
        if (lednum >= channel->count)
        {
            return -1;
        }

        channel->leds[lednum] = color;

        return 0;
    }

    ws2811_channel_t *ws2811_channel_get(ws2811_t *ws, int channelnum)
    {
        return &ws->channel[channelnum];
    }


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_WS2811_1TARGET_1FREQ_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(800000);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1gpionum_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->gpionum = arg2;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1gpionum_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  result = (int) ((arg1)->gpionum);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1invert_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->invert = arg2;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1invert_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  result = (int) ((arg1)->invert);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1count_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->count = arg2;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1count_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  result = (int) ((arg1)->count);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1brightness_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->brightness = arg2;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1brightness_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  result = (int) ((arg1)->brightness);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1leds_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  ws2811_led_t *arg2 = (ws2811_led_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = *(ws2811_led_t **)&jarg2; 
  if (arg1) (arg1)->leds = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1t_1leds_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  ws2811_led_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  result = (ws2811_led_t *) ((arg1)->leds);
  *(ws2811_led_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_new_1ws2811_1channel_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ws2811_channel_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ws2811_channel_t *)calloc(1, sizeof(ws2811_channel_t));
  *(ws2811_channel_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_delete_1ws2811_1channel_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1device_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  struct ws2811_device *arg2 = (struct ws2811_device *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  arg2 = *(struct ws2811_device **)&jarg2; 
  if (arg1) (arg1)->device = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1device_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  struct ws2811_device *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (struct ws2811_device *) ((arg1)->device);
  *(struct ws2811_device **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1freq_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  if (arg1) (arg1)->freq = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1freq_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (uint32_t) ((arg1)->freq);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1dmanum_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  arg2 = (int)jarg2; 
  if (arg1) (arg1)->dmanum = arg2;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1dmanum_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (int) ((arg1)->dmanum);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1channel_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  ws2811_channel_t *arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(ws2811_t **)&jarg1; 
  arg2 = *(ws2811_channel_t **)&jarg2; 
  {
    size_t ii;
    ws2811_channel_t *b = (ws2811_channel_t *) arg1->channel;
    for (ii = 0; ii < (size_t)RPI_PWM_CHANNELS; ii++) b[ii] = *((ws2811_channel_t *) arg2 + ii);
  }
  
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1t_1channel_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  ws2811_channel_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (ws2811_channel_t *)(ws2811_channel_t *) ((arg1)->channel);
  *(ws2811_channel_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_new_1ws2811_1t(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ws2811_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ws2811_t *)calloc(1, sizeof(ws2811_t));
  *(ws2811_t **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_delete_1ws2811_1t(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ws2811_t **)&jarg1; 
  free((char *) arg1);
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (int)ws2811_init(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1fini(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  ws2811_fini(arg1);
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1render(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (int)ws2811_render(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1wait(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  result = (int)ws2811_wait(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1led_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (uint32_t)ws2811_led_get(arg1,arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1led_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  jint jresult = 0 ;
  ws2811_channel_t *arg1 = (ws2811_channel_t *) 0 ;
  int arg2 ;
  uint32_t arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_channel_t **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (uint32_t)jarg3; 
  result = (int)ws2811_led_set(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_gs_ledstrip_ws2811_rpi_1ws281xJNI_ws2811_1channel_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  ws2811_t *arg1 = (ws2811_t *) 0 ;
  int arg2 ;
  ws2811_channel_t *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(ws2811_t **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (ws2811_channel_t *)ws2811_channel_get(arg1,arg2);
  *(ws2811_channel_t **)&jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

