typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;




typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef float float_t;
typedef double double_t;



enum
  {
    FP_INT_UPWARD =

      0,
    FP_INT_DOWNWARD =

      1,
    FP_INT_TOWARDZERO =

      2,
    FP_INT_TONEARESTFROMZERO =

      3,
    FP_INT_TONEAREST =

      4,
  };
extern int __fpclassify (double __value) 
     ;


extern int __signbit (double __value) 
     ;



extern int __isinf (double __value)  ;


extern int __finite (double __value)  ;


extern int __isnan (double __value)  ;


extern int __iseqsig (double __x, double __y) ;


extern int __issignaling (double __value) 
     ;
extern double acos (double __x) ; extern double __acos (double __x) ;

extern double asin (double __x) ; extern double __asin (double __x) ;

extern double atan (double __x) ; extern double __atan (double __x) ;

extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;


 extern double cos (double __x) ; extern double __cos (double __x) ;

 extern double sin (double __x) ; extern double __sin (double __x) ;

extern double tan (double __x) ; extern double __tan (double __x) ;




extern double cosh (double __x) ; extern double __cosh (double __x) ;

extern double sinh (double __x) ; extern double __sinh (double __x) ;

extern double tanh (double __x) ; extern double __tanh (double __x) ;



 extern void sincos (double __x, double *__sinx, double *__cosx) ; extern void __sincos (double __x, double *__sinx, double *__cosx) ;





extern double acosh (double __x) ; extern double __acosh (double __x) ;

extern double asinh (double __x) ; extern double __asinh (double __x) ;

extern double atanh (double __x) ; extern double __atanh (double __x) ;





 extern double exp (double __x) ; extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;


 extern double log (double __x) ; extern double __log (double __x) ;


extern double log10 (double __x) ; extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr)  ;



extern double exp10 (double __x) ; extern double __exp10 (double __x) ;




extern double expm1 (double __x) ; extern double __expm1 (double __x) ;


extern double log1p (double __x) ; extern double __log1p (double __x) ;


extern double logb (double __x) ; extern double __logb (double __x) ;




extern double exp2 (double __x) ; extern double __exp2 (double __x) ;


extern double log2 (double __x) ; extern double __log2 (double __x) ;






 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ; extern double __sqrt (double __x) ;



extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;




extern double cbrt (double __x) ; extern double __cbrt (double __x) ;






extern double ceil (double __x)  ; extern double __ceil (double __x)  ;


extern double fabs (double __x)  ; extern double __fabs (double __x)  ;


extern double floor (double __x)  ; extern double __floor (double __x)  ;


extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
extern int isinf (double __value)  ;




extern int finite (double __value)  ;


extern double drem (double __x, double __y) ; extern double __drem (double __x, double __y) ;



extern double significand (double __x) ; extern double __significand (double __x) ;






extern double copysign (double __x, double __y)  ; extern double __copysign (double __x, double __y)  ;




extern double nan (const char *__tagb)  ; extern double __nan (const char *__tagb)  ;
extern int isnan (double __value)  ;





extern double j0 (double) ; extern double __j0 (double) ;
extern double j1 (double) ; extern double __j1 (double) ;
extern double jn (int, double) ; extern double __jn (int, double) ;
extern double y0 (double) ; extern double __y0 (double) ;
extern double y1 (double) ; extern double __y1 (double) ;
extern double yn (int, double) ; extern double __yn (int, double) ;





extern double erf (double) ; extern double __erf (double) ;
extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;




extern double tgamma (double) ; extern double __tgamma (double) ;





extern double gamma (double) ; extern double __gamma (double) ;







extern double lgamma_r (double, int *__signgamp) ; extern double __lgamma_r (double, int *__signgamp) ;






extern double rint (double __x) ; extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;




extern double nextdown (double __x) ; extern double __nextdown (double __x) ;

extern double nextup (double __x) ; extern double __nextup (double __x) ;



extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;



extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;



extern int ilogb (double __x) ; extern int __ilogb (double __x) ;




extern long int llogb (double __x) ; extern long int __llogb (double __x) ;




extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;



extern double round (double __x)  ; extern double __round (double __x)  ;



extern double trunc (double __x)  ; extern double __trunc (double __x)  ;




extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ; extern long int __lrint (double __x) ;

extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;



extern long int lround (double __x) ; extern long int __lround (double __x) ;

extern long long int llround (double __x) ; extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


extern double fmax (double __x, double __y)  ; extern double __fmax (double __x, double __y)  ;


extern double fmin (double __x, double __y)  ; extern double __fmin (double __x, double __y)  ;


extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;




extern double roundeven (double __x)  ; extern double __roundeven (double __x)  ;



extern __intmax_t fromfp (double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) ;



extern double fmaxmag (double __x, double __y)  ; extern double __fmaxmag (double __x, double __y)  ;


extern double fminmag (double __x, double __y)  ; extern double __fminmag (double __x, double __y)  ;


extern int totalorder (double __x, double __y) 
     ;


extern int totalordermag (double __x, double __y) 
     ;


extern int canonicalize (double *__cx, const double *__x) ;


extern double getpayload (const double *__x) ; extern double __getpayload (const double *__x) ;


extern int setpayload (double *__x, double __payload) ;


extern int setpayloadsig (double *__x, double __payload) ;







extern double scalb (double __x, double __n) ; extern double __scalb (double __x, double __n) ;
extern int __fpclassifyf (float __value) 
     ;


extern int __signbitf (float __value) 
     ;



extern int __isinff (float __value)  ;


extern int __finitef (float __value)  ;


extern int __isnanf (float __value)  ;


extern int __iseqsigf (float __x, float __y) ;


extern int __issignalingf (float __value) 
     ;
extern float acosf (float __x) ; extern float __acosf (float __x) ;

extern float asinf (float __x) ; extern float __asinf (float __x) ;

extern float atanf (float __x) ; extern float __atanf (float __x) ;

extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;


 extern float cosf (float __x) ; extern float __cosf (float __x) ;

 extern float sinf (float __x) ; extern float __sinf (float __x) ;

extern float tanf (float __x) ; extern float __tanf (float __x) ;




extern float coshf (float __x) ; extern float __coshf (float __x) ;

extern float sinhf (float __x) ; extern float __sinhf (float __x) ;

extern float tanhf (float __x) ; extern float __tanhf (float __x) ;



 extern void sincosf (float __x, float *__sinx, float *__cosx) ; extern void __sincosf (float __x, float *__sinx, float *__cosx) ;





extern float acoshf (float __x) ; extern float __acoshf (float __x) ;

extern float asinhf (float __x) ; extern float __asinhf (float __x) ;

extern float atanhf (float __x) ; extern float __atanhf (float __x) ;





 extern float expf (float __x) ; extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;


 extern float logf (float __x) ; extern float __logf (float __x) ;


extern float log10f (float __x) ; extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr)  ;



extern float exp10f (float __x) ; extern float __exp10f (float __x) ;




extern float expm1f (float __x) ; extern float __expm1f (float __x) ;


extern float log1pf (float __x) ; extern float __log1pf (float __x) ;


extern float logbf (float __x) ; extern float __logbf (float __x) ;




extern float exp2f (float __x) ; extern float __exp2f (float __x) ;


extern float log2f (float __x) ; extern float __log2f (float __x) ;






 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;



extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;




extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;






extern float ceilf (float __x)  ; extern float __ceilf (float __x)  ;


extern float fabsf (float __x)  ; extern float __fabsf (float __x)  ;


extern float floorf (float __x)  ; extern float __floorf (float __x)  ;


extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;
extern int isinff (float __value)  ;




extern int finitef (float __value)  ;


extern float dremf (float __x, float __y) ; extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ; extern float __significandf (float __x) ;






extern float copysignf (float __x, float __y)  ; extern float __copysignf (float __x, float __y)  ;




extern float nanf (const char *__tagb)  ; extern float __nanf (const char *__tagb)  ;
extern int isnanf (float __value)  ;





extern float j0f (float) ; extern float __j0f (float) ;
extern float j1f (float) ; extern float __j1f (float) ;
extern float jnf (int, float) ; extern float __jnf (int, float) ;
extern float y0f (float) ; extern float __y0f (float) ;
extern float y1f (float) ; extern float __y1f (float) ;
extern float ynf (int, float) ; extern float __ynf (int, float) ;





extern float erff (float) ; extern float __erff (float) ;
extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;




extern float tgammaf (float) ; extern float __tgammaf (float) ;





extern float gammaf (float) ; extern float __gammaf (float) ;







extern float lgammaf_r (float, int *__signgamp) ; extern float __lgammaf_r (float, int *__signgamp) ;






extern float rintf (float __x) ; extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;




extern float nextdownf (float __x) ; extern float __nextdownf (float __x) ;

extern float nextupf (float __x) ; extern float __nextupf (float __x) ;



extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;



extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;



extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;




extern long int llogbf (float __x) ; extern long int __llogbf (float __x) ;




extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;



extern float roundf (float __x)  ; extern float __roundf (float __x)  ;



extern float truncf (float __x)  ; extern float __truncf (float __x)  ;




extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;

extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;

extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


extern float fmaxf (float __x, float __y)  ; extern float __fmaxf (float __x, float __y)  ;


extern float fminf (float __x, float __y)  ; extern float __fminf (float __x, float __y)  ;


extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;




extern float roundevenf (float __x)  ; extern float __roundevenf (float __x)  ;



extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) ;



extern float fmaxmagf (float __x, float __y)  ; extern float __fmaxmagf (float __x, float __y)  ;


extern float fminmagf (float __x, float __y)  ; extern float __fminmagf (float __x, float __y)  ;


extern int totalorderf (float __x, float __y) 
     ;


extern int totalordermagf (float __x, float __y) 
     ;


extern int canonicalizef (float *__cx, const float *__x) ;


extern float getpayloadf (const float *__x) ; extern float __getpayloadf (const float *__x) ;


extern int setpayloadf (float *__x, float __payload) ;


extern int setpayloadsigf (float *__x, float __payload) ;







extern float scalbf (float __x, float __n) ; extern float __scalbf (float __x, float __n) ;
extern int __fpclassifyl (long double __value) 
     ;


extern int __signbitl (long double __value) 
     ;



extern int __isinfl (long double __value)  ;


extern int __finitel (long double __value)  ;


extern int __isnanl (long double __value)  ;


extern int __iseqsigl (long double __x, long double __y) ;


extern int __issignalingl (long double __value) 
     ;
extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;

extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;

extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;

extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;


 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;

 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;

extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;




extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;

extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;

extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;



 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) ; extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) ;





extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;

extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;

extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;





 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;


 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;


extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr)  ;



extern long double exp10l (long double __x) ; extern long double __exp10l (long double __x) ;




extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;


extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;




extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;


extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;






 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;



extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;




extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;






extern long double ceill (long double __x)  ; extern long double __ceill (long double __x)  ;


extern long double fabsl (long double __x)  ; extern long double __fabsl (long double __x)  ;


extern long double floorl (long double __x)  ; extern long double __floorl (long double __x)  ;


extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;
extern int isinfl (long double __value)  ;




extern int finitel (long double __value)  ;


extern long double dreml (long double __x, long double __y) ; extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ; extern long double __significandl (long double __x) ;






extern long double copysignl (long double __x, long double __y)  ; extern long double __copysignl (long double __x, long double __y)  ;




extern long double nanl (const char *__tagb)  ; extern long double __nanl (const char *__tagb)  ;
extern int isnanl (long double __value)  ;





extern long double j0l (long double) ; extern long double __j0l (long double) ;
extern long double j1l (long double) ; extern long double __j1l (long double) ;
extern long double jnl (int, long double) ; extern long double __jnl (int, long double) ;
extern long double y0l (long double) ; extern long double __y0l (long double) ;
extern long double y1l (long double) ; extern long double __y1l (long double) ;
extern long double ynl (int, long double) ; extern long double __ynl (int, long double) ;





extern long double erfl (long double) ; extern long double __erfl (long double) ;
extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;




extern long double tgammal (long double) ; extern long double __tgammal (long double) ;





extern long double gammal (long double) ; extern long double __gammal (long double) ;







extern long double lgammal_r (long double, int *__signgamp) ; extern long double __lgammal_r (long double, int *__signgamp) ;






extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;




extern long double nextdownl (long double __x) ; extern long double __nextdownl (long double __x) ;

extern long double nextupl (long double __x) ; extern long double __nextupl (long double __x) ;



extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;



extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;



extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;




extern long int llogbl (long double __x) ; extern long int __llogbl (long double __x) ;




extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x)  ; extern long double __roundl (long double __x)  ;



extern long double truncl (long double __x)  ; extern long double __truncl (long double __x)  ;




extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;

extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;

extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


extern long double fmaxl (long double __x, long double __y)  ; extern long double __fmaxl (long double __x, long double __y)  ;


extern long double fminl (long double __x, long double __y)  ; extern long double __fminl (long double __x, long double __y)  ;


extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;




extern long double roundevenl (long double __x)  ; extern long double __roundevenl (long double __x)  ;



extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) ;



extern long double fmaxmagl (long double __x, long double __y)  ; extern long double __fmaxmagl (long double __x, long double __y)  ;


extern long double fminmagl (long double __x, long double __y)  ; extern long double __fminmagl (long double __x, long double __y)  ;


extern int totalorderl (long double __x, long double __y) 
     ;


extern int totalordermagl (long double __x, long double __y) 
     ;


extern int canonicalizel (long double *__cx, const long double *__x) ;


extern long double getpayloadl (const long double *__x) ; extern long double __getpayloadl (const long double *__x) ;


extern int setpayloadl (long double *__x, long double __payload) ;


extern int setpayloadsigl (long double *__x, long double __payload) ;







extern long double scalbl (long double __x, long double __n) ; extern long double __scalbl (long double __x, long double __n) ;
extern _Float32 acosf32 (_Float32 __x) ; extern _Float32 __acosf32 (_Float32 __x) ;

extern _Float32 asinf32 (_Float32 __x) ; extern _Float32 __asinf32 (_Float32 __x) ;

extern _Float32 atanf32 (_Float32 __x) ; extern _Float32 __atanf32 (_Float32 __x) ;

extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) ; extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) ;


 extern _Float32 cosf32 (_Float32 __x) ; extern _Float32 __cosf32 (_Float32 __x) ;

 extern _Float32 sinf32 (_Float32 __x) ; extern _Float32 __sinf32 (_Float32 __x) ;

extern _Float32 tanf32 (_Float32 __x) ; extern _Float32 __tanf32 (_Float32 __x) ;




extern _Float32 coshf32 (_Float32 __x) ; extern _Float32 __coshf32 (_Float32 __x) ;

extern _Float32 sinhf32 (_Float32 __x) ; extern _Float32 __sinhf32 (_Float32 __x) ;

extern _Float32 tanhf32 (_Float32 __x) ; extern _Float32 __tanhf32 (_Float32 __x) ;



 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ; extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ;





extern _Float32 acoshf32 (_Float32 __x) ; extern _Float32 __acoshf32 (_Float32 __x) ;

extern _Float32 asinhf32 (_Float32 __x) ; extern _Float32 __asinhf32 (_Float32 __x) ;

extern _Float32 atanhf32 (_Float32 __x) ; extern _Float32 __atanhf32 (_Float32 __x) ;





 extern _Float32 expf32 (_Float32 __x) ; extern _Float32 __expf32 (_Float32 __x) ;


extern _Float32 frexpf32 (_Float32 __x, int *__exponent) ; extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) ;


extern _Float32 ldexpf32 (_Float32 __x, int __exponent) ; extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) ;


 extern _Float32 logf32 (_Float32 __x) ; extern _Float32 __logf32 (_Float32 __x) ;


extern _Float32 log10f32 (_Float32 __x) ; extern _Float32 __log10f32 (_Float32 __x) ;


extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) ; extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr)  ;



extern _Float32 exp10f32 (_Float32 __x) ; extern _Float32 __exp10f32 (_Float32 __x) ;




extern _Float32 expm1f32 (_Float32 __x) ; extern _Float32 __expm1f32 (_Float32 __x) ;


extern _Float32 log1pf32 (_Float32 __x) ; extern _Float32 __log1pf32 (_Float32 __x) ;


extern _Float32 logbf32 (_Float32 __x) ; extern _Float32 __logbf32 (_Float32 __x) ;




extern _Float32 exp2f32 (_Float32 __x) ; extern _Float32 __exp2f32 (_Float32 __x) ;


extern _Float32 log2f32 (_Float32 __x) ; extern _Float32 __log2f32 (_Float32 __x) ;






 extern _Float32 powf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __powf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 sqrtf32 (_Float32 __x) ; extern _Float32 __sqrtf32 (_Float32 __x) ;



extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) ;




extern _Float32 cbrtf32 (_Float32 __x) ; extern _Float32 __cbrtf32 (_Float32 __x) ;






extern _Float32 ceilf32 (_Float32 __x)  ; extern _Float32 __ceilf32 (_Float32 __x)  ;


extern _Float32 fabsf32 (_Float32 __x)  ; extern _Float32 __fabsf32 (_Float32 __x)  ;


extern _Float32 floorf32 (_Float32 __x)  ; extern _Float32 __floorf32 (_Float32 __x)  ;


extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) ;
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y)  ; extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y)  ;




extern _Float32 nanf32 (const char *__tagb)  ; extern _Float32 __nanf32 (const char *__tagb)  ;
extern _Float32 j0f32 (_Float32) ; extern _Float32 __j0f32 (_Float32) ;
extern _Float32 j1f32 (_Float32) ; extern _Float32 __j1f32 (_Float32) ;
extern _Float32 jnf32 (int, _Float32) ; extern _Float32 __jnf32 (int, _Float32) ;
extern _Float32 y0f32 (_Float32) ; extern _Float32 __y0f32 (_Float32) ;
extern _Float32 y1f32 (_Float32) ; extern _Float32 __y1f32 (_Float32) ;
extern _Float32 ynf32 (int, _Float32) ; extern _Float32 __ynf32 (int, _Float32) ;





extern _Float32 erff32 (_Float32) ; extern _Float32 __erff32 (_Float32) ;
extern _Float32 erfcf32 (_Float32) ; extern _Float32 __erfcf32 (_Float32) ;
extern _Float32 lgammaf32 (_Float32) ; extern _Float32 __lgammaf32 (_Float32) ;




extern _Float32 tgammaf32 (_Float32) ; extern _Float32 __tgammaf32 (_Float32) ;
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) ; extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) ;






extern _Float32 rintf32 (_Float32 __x) ; extern _Float32 __rintf32 (_Float32 __x) ;


extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) ;






extern _Float32 nextdownf32 (_Float32 __x) ; extern _Float32 __nextdownf32 (_Float32 __x) ;

extern _Float32 nextupf32 (_Float32 __x) ; extern _Float32 __nextupf32 (_Float32 __x) ;



extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) ;



extern _Float32 scalbnf32 (_Float32 __x, int __n) ; extern _Float32 __scalbnf32 (_Float32 __x, int __n) ;



extern int ilogbf32 (_Float32 __x) ; extern int __ilogbf32 (_Float32 __x) ;




extern long int llogbf32 (_Float32 __x) ; extern long int __llogbf32 (_Float32 __x) ;




extern _Float32 scalblnf32 (_Float32 __x, long int __n) ; extern _Float32 __scalblnf32 (_Float32 __x, long int __n) ;



extern _Float32 nearbyintf32 (_Float32 __x) ; extern _Float32 __nearbyintf32 (_Float32 __x) ;



extern _Float32 roundf32 (_Float32 __x)  ; extern _Float32 __roundf32 (_Float32 __x)  ;



extern _Float32 truncf32 (_Float32 __x)  ; extern _Float32 __truncf32 (_Float32 __x)  ;




extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) ; extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) ;






extern long int lrintf32 (_Float32 __x) ; extern long int __lrintf32 (_Float32 __x) ;

extern long long int llrintf32 (_Float32 __x) ; extern long long int __llrintf32 (_Float32 __x) ;



extern long int lroundf32 (_Float32 __x) ; extern long int __lroundf32 (_Float32 __x) ;

extern long long int llroundf32 (_Float32 __x) ; extern long long int __llroundf32 (_Float32 __x) ;



extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) ; extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y)  ; extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y)  ;


extern _Float32 fminf32 (_Float32 __x, _Float32 __y)  ; extern _Float32 __fminf32 (_Float32 __x, _Float32 __y)  ;


extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ; extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ;




extern _Float32 roundevenf32 (_Float32 __x)  ; extern _Float32 __roundevenf32 (_Float32 __x)  ;



extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) ;



extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y)  ; extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y)  ;


extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y)  ; extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y)  ;


extern int totalorderf32 (_Float32 __x, _Float32 __y) 
     ;


extern int totalordermagf32 (_Float32 __x, _Float32 __y) 
     ;


extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) ;


extern _Float32 getpayloadf32 (const _Float32 *__x) ; extern _Float32 __getpayloadf32 (const _Float32 *__x) ;


extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) ;


extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) ;
extern _Float64 acosf64 (_Float64 __x) ; extern _Float64 __acosf64 (_Float64 __x) ;

extern _Float64 asinf64 (_Float64 __x) ; extern _Float64 __asinf64 (_Float64 __x) ;

extern _Float64 atanf64 (_Float64 __x) ; extern _Float64 __atanf64 (_Float64 __x) ;

extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) ; extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) ;


 extern _Float64 cosf64 (_Float64 __x) ; extern _Float64 __cosf64 (_Float64 __x) ;

 extern _Float64 sinf64 (_Float64 __x) ; extern _Float64 __sinf64 (_Float64 __x) ;

extern _Float64 tanf64 (_Float64 __x) ; extern _Float64 __tanf64 (_Float64 __x) ;




extern _Float64 coshf64 (_Float64 __x) ; extern _Float64 __coshf64 (_Float64 __x) ;

extern _Float64 sinhf64 (_Float64 __x) ; extern _Float64 __sinhf64 (_Float64 __x) ;

extern _Float64 tanhf64 (_Float64 __x) ; extern _Float64 __tanhf64 (_Float64 __x) ;



 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ; extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ;





extern _Float64 acoshf64 (_Float64 __x) ; extern _Float64 __acoshf64 (_Float64 __x) ;

extern _Float64 asinhf64 (_Float64 __x) ; extern _Float64 __asinhf64 (_Float64 __x) ;

extern _Float64 atanhf64 (_Float64 __x) ; extern _Float64 __atanhf64 (_Float64 __x) ;





 extern _Float64 expf64 (_Float64 __x) ; extern _Float64 __expf64 (_Float64 __x) ;


extern _Float64 frexpf64 (_Float64 __x, int *__exponent) ; extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) ;


extern _Float64 ldexpf64 (_Float64 __x, int __exponent) ; extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) ;


 extern _Float64 logf64 (_Float64 __x) ; extern _Float64 __logf64 (_Float64 __x) ;


extern _Float64 log10f64 (_Float64 __x) ; extern _Float64 __log10f64 (_Float64 __x) ;


extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) ; extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr)  ;



extern _Float64 exp10f64 (_Float64 __x) ; extern _Float64 __exp10f64 (_Float64 __x) ;




extern _Float64 expm1f64 (_Float64 __x) ; extern _Float64 __expm1f64 (_Float64 __x) ;


extern _Float64 log1pf64 (_Float64 __x) ; extern _Float64 __log1pf64 (_Float64 __x) ;


extern _Float64 logbf64 (_Float64 __x) ; extern _Float64 __logbf64 (_Float64 __x) ;




extern _Float64 exp2f64 (_Float64 __x) ; extern _Float64 __exp2f64 (_Float64 __x) ;


extern _Float64 log2f64 (_Float64 __x) ; extern _Float64 __log2f64 (_Float64 __x) ;






 extern _Float64 powf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __powf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 sqrtf64 (_Float64 __x) ; extern _Float64 __sqrtf64 (_Float64 __x) ;



extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) ;




extern _Float64 cbrtf64 (_Float64 __x) ; extern _Float64 __cbrtf64 (_Float64 __x) ;






extern _Float64 ceilf64 (_Float64 __x)  ; extern _Float64 __ceilf64 (_Float64 __x)  ;


extern _Float64 fabsf64 (_Float64 __x)  ; extern _Float64 __fabsf64 (_Float64 __x)  ;


extern _Float64 floorf64 (_Float64 __x)  ; extern _Float64 __floorf64 (_Float64 __x)  ;


extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) ;
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y)  ; extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y)  ;




extern _Float64 nanf64 (const char *__tagb)  ; extern _Float64 __nanf64 (const char *__tagb)  ;
extern _Float64 j0f64 (_Float64) ; extern _Float64 __j0f64 (_Float64) ;
extern _Float64 j1f64 (_Float64) ; extern _Float64 __j1f64 (_Float64) ;
extern _Float64 jnf64 (int, _Float64) ; extern _Float64 __jnf64 (int, _Float64) ;
extern _Float64 y0f64 (_Float64) ; extern _Float64 __y0f64 (_Float64) ;
extern _Float64 y1f64 (_Float64) ; extern _Float64 __y1f64 (_Float64) ;
extern _Float64 ynf64 (int, _Float64) ; extern _Float64 __ynf64 (int, _Float64) ;





extern _Float64 erff64 (_Float64) ; extern _Float64 __erff64 (_Float64) ;
extern _Float64 erfcf64 (_Float64) ; extern _Float64 __erfcf64 (_Float64) ;
extern _Float64 lgammaf64 (_Float64) ; extern _Float64 __lgammaf64 (_Float64) ;




extern _Float64 tgammaf64 (_Float64) ; extern _Float64 __tgammaf64 (_Float64) ;
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) ; extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) ;






extern _Float64 rintf64 (_Float64 __x) ; extern _Float64 __rintf64 (_Float64 __x) ;


extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) ;






extern _Float64 nextdownf64 (_Float64 __x) ; extern _Float64 __nextdownf64 (_Float64 __x) ;

extern _Float64 nextupf64 (_Float64 __x) ; extern _Float64 __nextupf64 (_Float64 __x) ;



extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) ;



extern _Float64 scalbnf64 (_Float64 __x, int __n) ; extern _Float64 __scalbnf64 (_Float64 __x, int __n) ;



extern int ilogbf64 (_Float64 __x) ; extern int __ilogbf64 (_Float64 __x) ;




extern long int llogbf64 (_Float64 __x) ; extern long int __llogbf64 (_Float64 __x) ;




extern _Float64 scalblnf64 (_Float64 __x, long int __n) ; extern _Float64 __scalblnf64 (_Float64 __x, long int __n) ;



extern _Float64 nearbyintf64 (_Float64 __x) ; extern _Float64 __nearbyintf64 (_Float64 __x) ;



extern _Float64 roundf64 (_Float64 __x)  ; extern _Float64 __roundf64 (_Float64 __x)  ;



extern _Float64 truncf64 (_Float64 __x)  ; extern _Float64 __truncf64 (_Float64 __x)  ;




extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) ; extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) ;






extern long int lrintf64 (_Float64 __x) ; extern long int __lrintf64 (_Float64 __x) ;

extern long long int llrintf64 (_Float64 __x) ; extern long long int __llrintf64 (_Float64 __x) ;



extern long int lroundf64 (_Float64 __x) ; extern long int __lroundf64 (_Float64 __x) ;

extern long long int llroundf64 (_Float64 __x) ; extern long long int __llroundf64 (_Float64 __x) ;



extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) ; extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y)  ; extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y)  ;


extern _Float64 fminf64 (_Float64 __x, _Float64 __y)  ; extern _Float64 __fminf64 (_Float64 __x, _Float64 __y)  ;


extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ; extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;




extern _Float64 roundevenf64 (_Float64 __x)  ; extern _Float64 __roundevenf64 (_Float64 __x)  ;



extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) ;



extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y)  ; extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y)  ;


extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y)  ; extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y)  ;


extern int totalorderf64 (_Float64 __x, _Float64 __y) 
     ;


extern int totalordermagf64 (_Float64 __x, _Float64 __y) 
     ;


extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) ;


extern _Float64 getpayloadf64 (const _Float64 *__x) ; extern _Float64 __getpayloadf64 (const _Float64 *__x) ;


extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) ;


extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) ;
extern _Float32x acosf32x (_Float32x __x) ; extern _Float32x __acosf32x (_Float32x __x) ;

extern _Float32x asinf32x (_Float32x __x) ; extern _Float32x __asinf32x (_Float32x __x) ;

extern _Float32x atanf32x (_Float32x __x) ; extern _Float32x __atanf32x (_Float32x __x) ;

extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) ; extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) ;


 extern _Float32x cosf32x (_Float32x __x) ; extern _Float32x __cosf32x (_Float32x __x) ;

 extern _Float32x sinf32x (_Float32x __x) ; extern _Float32x __sinf32x (_Float32x __x) ;

extern _Float32x tanf32x (_Float32x __x) ; extern _Float32x __tanf32x (_Float32x __x) ;




extern _Float32x coshf32x (_Float32x __x) ; extern _Float32x __coshf32x (_Float32x __x) ;

extern _Float32x sinhf32x (_Float32x __x) ; extern _Float32x __sinhf32x (_Float32x __x) ;

extern _Float32x tanhf32x (_Float32x __x) ; extern _Float32x __tanhf32x (_Float32x __x) ;



 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ; extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ;





extern _Float32x acoshf32x (_Float32x __x) ; extern _Float32x __acoshf32x (_Float32x __x) ;

extern _Float32x asinhf32x (_Float32x __x) ; extern _Float32x __asinhf32x (_Float32x __x) ;

extern _Float32x atanhf32x (_Float32x __x) ; extern _Float32x __atanhf32x (_Float32x __x) ;





 extern _Float32x expf32x (_Float32x __x) ; extern _Float32x __expf32x (_Float32x __x) ;


extern _Float32x frexpf32x (_Float32x __x, int *__exponent) ; extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) ;


extern _Float32x ldexpf32x (_Float32x __x, int __exponent) ; extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) ;


 extern _Float32x logf32x (_Float32x __x) ; extern _Float32x __logf32x (_Float32x __x) ;


extern _Float32x log10f32x (_Float32x __x) ; extern _Float32x __log10f32x (_Float32x __x) ;


extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) ; extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr)  ;



extern _Float32x exp10f32x (_Float32x __x) ; extern _Float32x __exp10f32x (_Float32x __x) ;




extern _Float32x expm1f32x (_Float32x __x) ; extern _Float32x __expm1f32x (_Float32x __x) ;


extern _Float32x log1pf32x (_Float32x __x) ; extern _Float32x __log1pf32x (_Float32x __x) ;


extern _Float32x logbf32x (_Float32x __x) ; extern _Float32x __logbf32x (_Float32x __x) ;




extern _Float32x exp2f32x (_Float32x __x) ; extern _Float32x __exp2f32x (_Float32x __x) ;


extern _Float32x log2f32x (_Float32x __x) ; extern _Float32x __log2f32x (_Float32x __x) ;






 extern _Float32x powf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __powf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x sqrtf32x (_Float32x __x) ; extern _Float32x __sqrtf32x (_Float32x __x) ;



extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) ;




extern _Float32x cbrtf32x (_Float32x __x) ; extern _Float32x __cbrtf32x (_Float32x __x) ;






extern _Float32x ceilf32x (_Float32x __x)  ; extern _Float32x __ceilf32x (_Float32x __x)  ;


extern _Float32x fabsf32x (_Float32x __x)  ; extern _Float32x __fabsf32x (_Float32x __x)  ;


extern _Float32x floorf32x (_Float32x __x)  ; extern _Float32x __floorf32x (_Float32x __x)  ;


extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) ;
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y)  ; extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y)  ;




extern _Float32x nanf32x (const char *__tagb)  ; extern _Float32x __nanf32x (const char *__tagb)  ;
extern _Float32x j0f32x (_Float32x) ; extern _Float32x __j0f32x (_Float32x) ;
extern _Float32x j1f32x (_Float32x) ; extern _Float32x __j1f32x (_Float32x) ;
extern _Float32x jnf32x (int, _Float32x) ; extern _Float32x __jnf32x (int, _Float32x) ;
extern _Float32x y0f32x (_Float32x) ; extern _Float32x __y0f32x (_Float32x) ;
extern _Float32x y1f32x (_Float32x) ; extern _Float32x __y1f32x (_Float32x) ;
extern _Float32x ynf32x (int, _Float32x) ; extern _Float32x __ynf32x (int, _Float32x) ;





extern _Float32x erff32x (_Float32x) ; extern _Float32x __erff32x (_Float32x) ;
extern _Float32x erfcf32x (_Float32x) ; extern _Float32x __erfcf32x (_Float32x) ;
extern _Float32x lgammaf32x (_Float32x) ; extern _Float32x __lgammaf32x (_Float32x) ;




extern _Float32x tgammaf32x (_Float32x) ; extern _Float32x __tgammaf32x (_Float32x) ;
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) ; extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) ;






extern _Float32x rintf32x (_Float32x __x) ; extern _Float32x __rintf32x (_Float32x __x) ;


extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) ;






extern _Float32x nextdownf32x (_Float32x __x) ; extern _Float32x __nextdownf32x (_Float32x __x) ;

extern _Float32x nextupf32x (_Float32x __x) ; extern _Float32x __nextupf32x (_Float32x __x) ;



extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) ;



extern _Float32x scalbnf32x (_Float32x __x, int __n) ; extern _Float32x __scalbnf32x (_Float32x __x, int __n) ;



extern int ilogbf32x (_Float32x __x) ; extern int __ilogbf32x (_Float32x __x) ;




extern long int llogbf32x (_Float32x __x) ; extern long int __llogbf32x (_Float32x __x) ;




extern _Float32x scalblnf32x (_Float32x __x, long int __n) ; extern _Float32x __scalblnf32x (_Float32x __x, long int __n) ;



extern _Float32x nearbyintf32x (_Float32x __x) ; extern _Float32x __nearbyintf32x (_Float32x __x) ;



extern _Float32x roundf32x (_Float32x __x)  ; extern _Float32x __roundf32x (_Float32x __x)  ;



extern _Float32x truncf32x (_Float32x __x)  ; extern _Float32x __truncf32x (_Float32x __x)  ;




extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) ; extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) ;






extern long int lrintf32x (_Float32x __x) ; extern long int __lrintf32x (_Float32x __x) ;

extern long long int llrintf32x (_Float32x __x) ; extern long long int __llrintf32x (_Float32x __x) ;



extern long int lroundf32x (_Float32x __x) ; extern long int __lroundf32x (_Float32x __x) ;

extern long long int llroundf32x (_Float32x __x) ; extern long long int __llroundf32x (_Float32x __x) ;



extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) ; extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y)  ; extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y)  ;


extern _Float32x fminf32x (_Float32x __x, _Float32x __y)  ; extern _Float32x __fminf32x (_Float32x __x, _Float32x __y)  ;


extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ; extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ;




extern _Float32x roundevenf32x (_Float32x __x)  ; extern _Float32x __roundevenf32x (_Float32x __x)  ;



extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) ;



extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y)  ; extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y)  ;


extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y)  ; extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y)  ;


extern int totalorderf32x (_Float32x __x, _Float32x __y) 
     ;


extern int totalordermagf32x (_Float32x __x, _Float32x __y) 
     ;


extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) ;


extern _Float32x getpayloadf32x (const _Float32x *__x) ; extern _Float32x __getpayloadf32x (const _Float32x *__x) ;


extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) ;


extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) ;
extern _Float64x acosf64x (_Float64x __x) ; extern _Float64x __acosf64x (_Float64x __x) ;

extern _Float64x asinf64x (_Float64x __x) ; extern _Float64x __asinf64x (_Float64x __x) ;

extern _Float64x atanf64x (_Float64x __x) ; extern _Float64x __atanf64x (_Float64x __x) ;

extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) ; extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) ;


 extern _Float64x cosf64x (_Float64x __x) ; extern _Float64x __cosf64x (_Float64x __x) ;

 extern _Float64x sinf64x (_Float64x __x) ; extern _Float64x __sinf64x (_Float64x __x) ;

extern _Float64x tanf64x (_Float64x __x) ; extern _Float64x __tanf64x (_Float64x __x) ;




extern _Float64x coshf64x (_Float64x __x) ; extern _Float64x __coshf64x (_Float64x __x) ;

extern _Float64x sinhf64x (_Float64x __x) ; extern _Float64x __sinhf64x (_Float64x __x) ;

extern _Float64x tanhf64x (_Float64x __x) ; extern _Float64x __tanhf64x (_Float64x __x) ;



 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ; extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ;





extern _Float64x acoshf64x (_Float64x __x) ; extern _Float64x __acoshf64x (_Float64x __x) ;

extern _Float64x asinhf64x (_Float64x __x) ; extern _Float64x __asinhf64x (_Float64x __x) ;

extern _Float64x atanhf64x (_Float64x __x) ; extern _Float64x __atanhf64x (_Float64x __x) ;





 extern _Float64x expf64x (_Float64x __x) ; extern _Float64x __expf64x (_Float64x __x) ;


extern _Float64x frexpf64x (_Float64x __x, int *__exponent) ; extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) ;


extern _Float64x ldexpf64x (_Float64x __x, int __exponent) ; extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) ;


 extern _Float64x logf64x (_Float64x __x) ; extern _Float64x __logf64x (_Float64x __x) ;


extern _Float64x log10f64x (_Float64x __x) ; extern _Float64x __log10f64x (_Float64x __x) ;


extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) ; extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr)  ;



extern _Float64x exp10f64x (_Float64x __x) ; extern _Float64x __exp10f64x (_Float64x __x) ;




extern _Float64x expm1f64x (_Float64x __x) ; extern _Float64x __expm1f64x (_Float64x __x) ;


extern _Float64x log1pf64x (_Float64x __x) ; extern _Float64x __log1pf64x (_Float64x __x) ;


extern _Float64x logbf64x (_Float64x __x) ; extern _Float64x __logbf64x (_Float64x __x) ;




extern _Float64x exp2f64x (_Float64x __x) ; extern _Float64x __exp2f64x (_Float64x __x) ;


extern _Float64x log2f64x (_Float64x __x) ; extern _Float64x __log2f64x (_Float64x __x) ;






 extern _Float64x powf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __powf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x sqrtf64x (_Float64x __x) ; extern _Float64x __sqrtf64x (_Float64x __x) ;



extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) ;




extern _Float64x cbrtf64x (_Float64x __x) ; extern _Float64x __cbrtf64x (_Float64x __x) ;






extern _Float64x ceilf64x (_Float64x __x)  ; extern _Float64x __ceilf64x (_Float64x __x)  ;


extern _Float64x fabsf64x (_Float64x __x)  ; extern _Float64x __fabsf64x (_Float64x __x)  ;


extern _Float64x floorf64x (_Float64x __x)  ; extern _Float64x __floorf64x (_Float64x __x)  ;


extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) ;
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y)  ; extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y)  ;




extern _Float64x nanf64x (const char *__tagb)  ; extern _Float64x __nanf64x (const char *__tagb)  ;
extern _Float64x j0f64x (_Float64x) ; extern _Float64x __j0f64x (_Float64x) ;
extern _Float64x j1f64x (_Float64x) ; extern _Float64x __j1f64x (_Float64x) ;
extern _Float64x jnf64x (int, _Float64x) ; extern _Float64x __jnf64x (int, _Float64x) ;
extern _Float64x y0f64x (_Float64x) ; extern _Float64x __y0f64x (_Float64x) ;
extern _Float64x y1f64x (_Float64x) ; extern _Float64x __y1f64x (_Float64x) ;
extern _Float64x ynf64x (int, _Float64x) ; extern _Float64x __ynf64x (int, _Float64x) ;





extern _Float64x erff64x (_Float64x) ; extern _Float64x __erff64x (_Float64x) ;
extern _Float64x erfcf64x (_Float64x) ; extern _Float64x __erfcf64x (_Float64x) ;
extern _Float64x lgammaf64x (_Float64x) ; extern _Float64x __lgammaf64x (_Float64x) ;




extern _Float64x tgammaf64x (_Float64x) ; extern _Float64x __tgammaf64x (_Float64x) ;
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) ; extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) ;






extern _Float64x rintf64x (_Float64x __x) ; extern _Float64x __rintf64x (_Float64x __x) ;


extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) ;






extern _Float64x nextdownf64x (_Float64x __x) ; extern _Float64x __nextdownf64x (_Float64x __x) ;

extern _Float64x nextupf64x (_Float64x __x) ; extern _Float64x __nextupf64x (_Float64x __x) ;



extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) ;



extern _Float64x scalbnf64x (_Float64x __x, int __n) ; extern _Float64x __scalbnf64x (_Float64x __x, int __n) ;



extern int ilogbf64x (_Float64x __x) ; extern int __ilogbf64x (_Float64x __x) ;




extern long int llogbf64x (_Float64x __x) ; extern long int __llogbf64x (_Float64x __x) ;




extern _Float64x scalblnf64x (_Float64x __x, long int __n) ; extern _Float64x __scalblnf64x (_Float64x __x, long int __n) ;



extern _Float64x nearbyintf64x (_Float64x __x) ; extern _Float64x __nearbyintf64x (_Float64x __x) ;



extern _Float64x roundf64x (_Float64x __x)  ; extern _Float64x __roundf64x (_Float64x __x)  ;



extern _Float64x truncf64x (_Float64x __x)  ; extern _Float64x __truncf64x (_Float64x __x)  ;




extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) ; extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) ;






extern long int lrintf64x (_Float64x __x) ; extern long int __lrintf64x (_Float64x __x) ;

extern long long int llrintf64x (_Float64x __x) ; extern long long int __llrintf64x (_Float64x __x) ;



extern long int lroundf64x (_Float64x __x) ; extern long int __lroundf64x (_Float64x __x) ;

extern long long int llroundf64x (_Float64x __x) ; extern long long int __llroundf64x (_Float64x __x) ;



extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) ; extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y)  ; extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y)  ;


extern _Float64x fminf64x (_Float64x __x, _Float64x __y)  ; extern _Float64x __fminf64x (_Float64x __x, _Float64x __y)  ;


extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ; extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;




extern _Float64x roundevenf64x (_Float64x __x)  ; extern _Float64x __roundevenf64x (_Float64x __x)  ;



extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) ;




extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) ;





extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) ; extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) ;





extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) ; extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) ;



extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y)  ; extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y)  ;


extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y)  ; extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y)  ;


extern int totalorderf64x (_Float64x __x, _Float64x __y) 
     ;


extern int totalordermagf64x (_Float64x __x, _Float64x __y) 
     ;


extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) ;


extern _Float64x getpayloadf64x (const _Float64x *__x) ; extern _Float64x __getpayloadf64x (const _Float64x *__x) ;


extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) ;


extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) ;
extern int signgam;
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
extern int __iscanonicall (long double __x)
      ;
extern size_t strlcpy(char *, const char*, size_t);



extern size_t strlcat(char *, const char*, size_t);
extern void setproctitle(const char *fmt, ...);
typedef union {
 unsigned char b[8];
 struct {





  long i0: 32;
  long i1: 32;

 } b32;

 long b64;

} C_block;
struct crypt_data {


 C_block KS[16];



 char cryptresult[1+4+4+11+1];
};

char *crypt(const char *key, const char *setting);
void setkey(const char *key);
void encrypt(char *block, int flag);

char *crypt_r(const char *key, const char *setting, struct crypt_data *data);
void setkey_r(const char *key, struct crypt_data *data);
void encrypt_r(char *block, int flag, struct crypt_data *data);




typedef __ssize_t ssize_t;











typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type)  ;




extern int euidaccess (const char *__name, int __type)
      ;


extern int eaccess (const char *__name, int __type)
      ;






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
       ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     ;






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2])  ;




extern int pipe2 (int __pipedes[2], int __flags)  ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
       ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group)  ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
       ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
       ;



extern int chdir (const char *__path)   ;



extern int fchdir (int __fd)  ;
extern char *getcwd (char *__buf, size_t __size)  ;





extern char *get_current_dir_name (void) ;







extern char *getwd (char *__buf)
        ;




extern int dup (int __fd)  ;


extern int dup2 (int __fd, int __fd2) ;




extern int dup3 (int __fd, int __fd2, int __flags) ;



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[])  ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
      ;




extern int execv (const char *__path, char *const __argv[])
      ;



extern int execle (const char *__path, const char *__arg, ...)
      ;



extern int execl (const char *__path, const char *__arg, ...)
      ;



extern int execvp (const char *__file, char *const __argv[])
      ;




extern int execlp (const char *__file, const char *__arg, ...)
      ;




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
      ;





extern int nice (int __inc)  ;




extern void _exit (int __status) ;






enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
      ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len) ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[])  ;



extern int group_member (__gid_t __gid) ;






extern int setuid (__uid_t __uid)  ;




extern int setreuid (__uid_t __ruid, __uid_t __euid)  ;




extern int seteuid (__uid_t __uid)  ;






extern int setgid (__gid_t __gid)  ;




extern int setregid (__gid_t __rgid, __gid_t __egid)  ;




extern int setegid (__gid_t __gid)  ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     ;



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     ;



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
      ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
      ;






extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
       ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
       ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
       ;




extern int symlink (const char *__from, const char *__to)
       ;




extern ssize_t readlink (const char *restrict __path,
    char *restrict __buf, size_t __len)
       ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to)   ;


extern ssize_t readlinkat (int __fd, const char *restrict __path,
      char *restrict __buf, size_t __len)
       ;



extern int unlink (const char *__name)  ;



extern int unlinkat (int __fd, const char *__name, int __flag)
      ;



extern int rmdir (const char *__path)  ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) ;




extern int setlogin (const char *__name)  ;








extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
        ;







extern int gethostname (char *__name, size_t __len)  ;






extern int sethostname (const char *__name, size_t __len)
       ;



extern int sethostid (long int __id)  ;





extern int getdomainname (char *__name, size_t __len)
       ;
extern int setdomainname (const char *__name, size_t __len)
       ;





extern int vhangup (void) ;


extern int revoke (const char *__file)   ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
      ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose)  ;






extern int chroot (const char *__path)   ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);





extern int syncfs (int __fd) ;






extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void)  ;




extern int getdtablesize (void) ;
extern int truncate (const char *__file, __off_t __length)
       ;
extern int truncate64 (const char *__file, __off64_t __length)
       ;
extern int ftruncate (int __fd, __off_t __length)  ;
extern int ftruncate64 (int __fd, __off64_t __length)  ;
extern int brk (void *__addr)  ;





extern void *sbrk (intptr_t __delta) ;
extern long int syscall (long int __sysno, ...) ;
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
      ;



extern void encrypt (char *__glibc_block, int __edflag)
      ;






extern void swab (const void *restrict __from, void *restrict __to,
    ssize_t __n)  ;
int getentropy (void *__buffer, size_t __length) ;








struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};







struct _IO_FILE;


typedef struct _IO_FILE FILE;








extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
extern struct passwd *fgetpwent (FILE *__stream) ;







extern int putpwent (const struct passwd *restrict __p,
       FILE *restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) ;
extern int getpwent_r (struct passwd *restrict __resultbuf,
         char *restrict __buffer, size_t __buflen,
         struct passwd **restrict __result)
         ;


extern int getpwuid_r (__uid_t __uid,
         struct passwd *restrict __resultbuf,
         char *restrict __buffer, size_t __buflen,
         struct passwd **restrict __result)
         ;

extern int getpwnam_r (const char *restrict __name,
         struct passwd *restrict __resultbuf,
         char *restrict __buffer, size_t __buflen,
         struct passwd **restrict __result)
         ;
extern int fgetpwent_r (FILE *restrict __stream,
   struct passwd *restrict __resultbuf,
   char *restrict __buffer, size_t __buflen,
   struct passwd **restrict __result)
   ;
extern int getpw (__uid_t __uid, char *__buffer);











struct _IO_FILE;
typedef struct _IO_FILE __FILE;





typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef char* va_list;
typedef char* __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * restrict, const char * restrict,
   __gnuc_va_list, int *restrict);
extern int _IO_vfprintf (_IO_FILE *restrict, const char *restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;




typedef __gnuc_va_list va_list;
typedef _G_fpos_t fpos_t;




typedef _G_fpos64_t fpos64_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;







extern FILE *tmpfile (void) ;
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s)  ;




extern char *tmpnam_r (char *__s)  ;
extern char *tempnam (const char *__dir, const char *__pfx)
       ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
extern FILE *fopen64 (const char *restrict __filename,
        const char *restrict __modes) ;
extern FILE *freopen64 (const char *restrict __filename,
   const char *restrict __modes,
   FILE *restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes)  ;





extern FILE *fopencookie (void *restrict __magic_cookie,
     const char *restrict __modes,
     _IO_cookie_io_functions_t __io_funcs)  ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc)  ;





extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;




extern void setbuffer (FILE *restrict __stream, char *restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;







extern int fprintf (FILE *restrict __stream,
      const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
      const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
       const char *restrict __format, ...)
      ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
        const char *restrict __format, __gnuc_va_list __arg)
      ;





extern int vasprintf (char **restrict __ptr, const char *restrict __f,
        __gnuc_va_list __arg)
       ;
extern int __asprintf (char **restrict __ptr,
         const char *restrict __fmt, ...)
       ;
extern int asprintf (char **restrict __ptr,
       const char *restrict __fmt, ...)
       ;




extern int vdprintf (int __fd, const char *restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *restrict __fmt, ...)
     ;







extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
      ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
          ;
extern char *fgets_unlocked (char *restrict __s, int __n,
        FILE *restrict __stream) ;
extern __ssize_t __getdelim (char **restrict __lineptr,
          size_t *restrict __n, int __delimiter,
          FILE *restrict __stream) ;
extern __ssize_t getdelim (char **restrict __lineptr,
        size_t *restrict __n, int __delimiter,
        FILE *restrict __stream) ;







extern __ssize_t getline (char **restrict __lineptr,
       size_t *restrict __n,
       FILE *restrict __stream) ;







extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s);
extern int fputs_unlocked (const char *restrict __s,
      FILE *restrict __stream);
extern size_t fread_unlocked (void *restrict __ptr, size_t __size,
         size_t __n, FILE *restrict __stream) ;
extern size_t fwrite_unlocked (const void *restrict __ptr, size_t __size,
          size_t __n, FILE *restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *restrict __stream, fpos64_t *restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;



extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream)  ;
extern int ferror_unlocked (FILE *__stream)  ;







extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];




extern int fileno (FILE *__stream)  ;




extern int fileno_unlocked (FILE *__stream)  ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *restrict __obstack,
      const char *restrict __format, ...)
      ;
extern int obstack_vprintf (struct obstack *restrict __obstack,
       const char *restrict __format,
       __gnuc_va_list __args)
      ;







extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream)  ;


extern void funlockfile (FILE *__stream) ;














extern void *memcpy (void *restrict __dest, const void *restrict __src,
       size_t __n)  ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
      ;





extern void *memccpy (void *restrict __dest, const void *restrict __src,
        int __c, size_t __n)
      ;




extern void *memset (void *__s, int __c, size_t __n)  ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
       ;
extern void *memchr (const void *__s, int __c, size_t __n)
        ;
extern void *rawmemchr (const void *__s, int __c)
       ;
extern void *memrchr (const void *__s, int __c, size_t __n)
        ;





extern char *strcpy (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
      ;


extern char *strcat (char *restrict __dest, const char *restrict __src)
      ;

extern char *strncat (char *restrict __dest, const char *restrict __src,
        size_t __n)  ;


extern int strcmp (const char *__s1, const char *__s2)
       ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
       ;


extern int strcoll (const char *__s1, const char *__s2)
       ;

extern size_t strxfrm (char *restrict __dest,
         const char *restrict __src, size_t __n)
      ;




struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;

typedef __locale_t locale_t;


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
       ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l)  ;





extern char *strdup (const char *__s)
       ;






extern char *strndup (const char *__string, size_t __n)
       ;
extern char *strchr (const char *__s, int __c)
       ;
extern char *strrchr (const char *__s, int __c)
       ;
extern char *strchrnul (const char *__s, int __c)
       ;





extern size_t strcspn (const char *__s, const char *__reject)
       ;


extern size_t strspn (const char *__s, const char *__accept)
       ;
extern char *strpbrk (const char *__s, const char *__accept)
       ;
extern char *strstr (const char *__haystack, const char *__needle)
       ;




extern char *strtok (char *restrict __s, const char *restrict __delim)
      ;



extern char *__strtok_r (char *restrict __s,
    const char *restrict __delim,
    char **restrict __save_ptr)
      ;

extern char *strtok_r (char *restrict __s, const char *restrict __delim,
         char **restrict __save_ptr)
      ;
extern char *strcasestr (const char *__haystack, const char *__needle)
       ;







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
       ;



extern void *__mempcpy (void *restrict __dest,
   const void *restrict __src, size_t __n)
      ;
extern void *mempcpy (void *restrict __dest,
        const void *restrict __src, size_t __n)
      ;




extern size_t strlen (const char *__s)
       ;




extern size_t strnlen (const char *__string, size_t __maxlen)
       ;




extern char *strerror (int __errnum) ;
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
       ;





extern char *strerror_l (int __errnum, locale_t __l) ;




extern int bcmp (const void *__s1, const void *__s2, size_t __n)
       ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
   ;


extern void bzero (void *__s, size_t __n)  ;
extern char *index (const char *__s, int __c)
       ;
extern char *rindex (const char *__s, int __c)
       ;






extern int ffs (int __i)  ;





extern int ffsl (long int __l)  ;
 extern int ffsll (long long int __ll)
      ;



extern int strcasecmp (const char *__s1, const char *__s2)
       ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
       ;






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
       ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
       ;



extern void explicit_bzero (void *__s, size_t __n)  ;



extern char *strsep (char **restrict __stringp,
       const char *restrict __delim)
      ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *restrict __dest, const char *restrict __src)
      ;
extern char *stpcpy (char *restrict __dest, const char *restrict __src)
      ;



extern char *__stpncpy (char *restrict __dest,
   const char *restrict __src, size_t __n)
      ;
extern char *stpncpy (char *restrict __dest,
        const char *restrict __src, size_t __n)
      ;




extern int strverscmp (const char *__s1, const char *__s2)
       ;


extern char *strfry (char *__string)  ;


extern void *memfrob (void *__s, size_t __n)  ;
extern char *basename (const char *__filename)  ;



static const C_block PC1ROT[64/(1<<2)][1<<(1<<2)] = {
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 1, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 1, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 1, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 1, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 0, 1, 0, 16, 0, 0,}},
  {{ 0, 0, 0, 1, 0, 16, 0, 0,}},
  {{ 0, 0, 1, 1, 0, 16, 0, 0,}},
  {{ 0, 0, 1, 1, 0, 16, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0,128, 0, 0, 0,}},
  {{ 0, 0, 4, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 4, 0,128, 0, 0, 0,}},
  {{ 0, 16, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 0,128, 0, 0, 0,}},
  {{ 0, 16, 4, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 4, 0,128, 0, 0, 0,}},
  {{ 0, 0, 0, 8, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 8,128, 0, 0, 0,}},
  {{ 0, 0, 4, 8, 0, 0, 0, 0,}},
  {{ 0, 0, 4, 8,128, 0, 0, 0,}},
  {{ 0, 16, 0, 8, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 8,128, 0, 0, 0,}},
  {{ 0, 16, 4, 8, 0, 0, 0, 0,}},
  {{ 0, 16, 4, 8,128, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 8,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 8,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 24,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 24,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 24,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 24,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 2, 0, 0, 0, 0,}},
  {{ 0, 1, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 1, 0, 2, 0, 0, 0, 0,}},
  {{ 4, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 0, 0, 2, 0, 0, 0, 0,}},
  {{ 4, 1, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 1, 0, 2, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 2, 0, 0, 0, 0,}},
  {{ 0, 33, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 33, 0, 2, 0, 0, 0, 0,}},
  {{ 4, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 32, 0, 2, 0, 0, 0, 0,}},
  {{ 4, 33, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 33, 0, 2, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 8, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 4, 64, 8, 0,}},
  {{ 0, 0, 0, 0, 4, 64, 8, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0,128, 0,}},
  {{ 0, 64, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 64, 0, 0, 0, 0,128, 0,}},
  {{ 0, 0, 0, 64, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 64, 0, 0,128, 0,}},
  {{ 0, 64, 0, 64, 0, 0, 0, 0,}},
  {{ 0, 64, 0, 64, 0, 0,128, 0,}},
  {{128, 0, 0, 0, 0, 0, 0, 0,}},
  {{128, 0, 0, 0, 0, 0,128, 0,}},
  {{128, 64, 0, 0, 0, 0, 0, 0,}},
  {{128, 64, 0, 0, 0, 0,128, 0,}},
  {{128, 0, 0, 64, 0, 0, 0, 0,}},
  {{128, 0, 0, 64, 0, 0,128, 0,}},
  {{128, 64, 0, 64, 0, 0, 0, 0,}},
  {{128, 64, 0, 64, 0, 0,128, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0,128,}},
  {{ 0, 0, 0, 0, 0, 0, 0,128,}},
  {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 8, 0,128,}},
  {{ 0, 0, 0, 0, 0, 8, 0,128,}},
  {{ 0, 0, 0, 0, 0,128, 0, 0,}},
  {{ 0, 0, 0, 0, 0,128, 0, 0,}},
  {{ 0, 0, 0, 0, 0,128, 0,128,}},
  {{ 0, 0, 0, 0, 0,128, 0,128,}},
  {{ 0, 0, 0, 0, 0,136, 0, 0,}},
  {{ 0, 0, 0, 0, 0,136, 0, 0,}},
  {{ 0, 0, 0, 0, 0,136, 0,128,}},
  {{ 0, 0, 0, 0, 0,136, 0,128,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 8, 0, 0, 0,}},
  {{ 0, 0, 0, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 32, 8, 0, 0, 0,}},
  {{ 0, 0, 16, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 0, 8, 0, 0, 0,}},
  {{ 0, 0, 16, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 32, 8, 0, 0, 0,}},
  {{ 0, 0, 32, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 0, 8, 0, 0, 0,}},
  {{ 0, 0, 32, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 32, 8, 0, 0, 0,}},
  {{ 0, 0, 48, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 48, 0, 8, 0, 0, 0,}},
  {{ 0, 0, 48, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 48, 32, 8, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 80, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 80, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 80, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 80, 0, 16, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 0, 8, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 8, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 8, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 8, 16, 0, 0, 0, 0,}},
  {{ 0, 4, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 4, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 4, 8, 0, 0, 0, 0, 0,}},
  {{ 0, 4, 8, 16, 0, 0, 0, 0,}},
  {{ 16, 4, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 4, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 4, 8, 0, 0, 0, 0, 0,}},
  {{ 16, 4, 8, 16, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 0,}},
  {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 2, 0, 0, 4, 0, 0,}},
  {{ 0, 0, 2, 0, 0, 4, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 4,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 4,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 4,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 4,}},
  {{ 0, 0, 2, 0, 0, 0, 0, 4,}},
  {{ 0, 0, 2, 0, 0, 0, 0, 4,}},
  {{ 0, 0, 2, 0, 0, 4, 0, 4,}},
  {{ 0, 0, 2, 0, 0, 4, 0, 4,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 64, 0, 0, 0, 0, 0,}},
  {{ 2, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 2, 0, 64, 0, 0, 0, 0, 0,}},
  {{ 0,128, 0, 0, 0, 0, 0, 0,}},
  {{ 0,128, 64, 0, 0, 0, 0, 0,}},
  {{ 2,128, 0, 0, 0, 0, 0, 0,}},
  {{ 2,128, 64, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0,128, 0, 0, 0, 0,}},
  {{ 0, 0, 64,128, 0, 0, 0, 0,}},
  {{ 2, 0, 0,128, 0, 0, 0, 0,}},
  {{ 2, 0, 64,128, 0, 0, 0, 0,}},
  {{ 0,128, 0,128, 0, 0, 0, 0,}},
  {{ 0,128, 64,128, 0, 0, 0, 0,}},
  {{ 2,128, 0,128, 0, 0, 0, 0,}},
  {{ 2,128, 64,128, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 64,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 64,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 64,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 64,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 8, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 8, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 1, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 1, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 9, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 9, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 64, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 64, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 72, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 72, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 65, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 65, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 73, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 73, 2, 0, 0, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 36, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 36, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 36, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 36, 32,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 4, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 4, 0, 0, 0, 0,}},
  {{ 0, 0,128, 0, 0, 0, 0, 0,}},
  {{ 32, 0,128, 0, 0, 0, 0, 0,}},
  {{ 0, 0,128, 4, 0, 0, 0, 0,}},
  {{ 32, 0,128, 4, 0, 0, 0, 0,}},
  {{ 0, 8, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 8, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 8, 0, 4, 0, 0, 0, 0,}},
  {{ 32, 8, 0, 4, 0, 0, 0, 0,}},
  {{ 0, 8,128, 0, 0, 0, 0, 0,}},
  {{ 32, 8,128, 0, 0, 0, 0, 0,}},
  {{ 0, 8,128, 4, 0, 0, 0, 0,}},
  {{ 32, 8,128, 4, 0, 0, 0, 0,}},
 },
};


static const C_block PC2ROT[2][64/(1<<2)][1<<(1<<2)] = {
 {
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0,128, 0, 0, 0, 0, 0,}},
   {{ 8, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 8, 0,128, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 64, 0, 0, 0, 0,}},
   {{ 0, 0,128, 64, 0, 0, 0, 0,}},
   {{ 8, 0, 0, 64, 0, 0, 0, 0,}},
   {{ 8, 0,128, 64, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 4, 0, 0, 0, 0,}},
   {{ 0, 0,128, 4, 0, 0, 0, 0,}},
   {{ 8, 0, 0, 4, 0, 0, 0, 0,}},
   {{ 8, 0,128, 4, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 68, 0, 0, 0, 0,}},
   {{ 0, 0,128, 68, 0, 0, 0, 0,}},
   {{ 8, 0, 0, 68, 0, 0, 0, 0,}},
   {{ 8, 0,128, 68, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0,128, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 4, 0, 0, 0, 0, 0,}},
   {{ 0,128, 4, 0, 0, 0, 0, 0,}},
   {{ 0, 8, 0, 0, 0, 0, 0, 0,}},
   {{ 0,136, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 8, 4, 0, 0, 0, 0, 0,}},
   {{ 0,136, 4, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 32, 0, 0, 0, 0, 0,}},
   {{ 0,128, 32, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 36, 0, 0, 0, 0, 0,}},
   {{ 0,128, 36, 0, 0, 0, 0, 0,}},
   {{ 0, 8, 32, 0, 0, 0, 0, 0,}},
   {{ 0,136, 32, 0, 0, 0, 0, 0,}},
   {{ 0, 8, 36, 0, 0, 0, 0, 0,}},
   {{ 0,136, 36, 0, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 64, 0, 0, 0, 0, 0, 0,}},
   {{ 32, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 32, 64, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0,128, 0, 0, 0, 0,}},
   {{ 0, 64, 0,128, 0, 0, 0, 0,}},
   {{ 32, 0, 0,128, 0, 0, 0, 0,}},
   {{ 32, 64, 0,128, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 16, 0, 0, 0, 0,}},
   {{ 0, 64, 0, 16, 0, 0, 0, 0,}},
   {{ 32, 0, 0, 16, 0, 0, 0, 0,}},
   {{ 32, 64, 0, 16, 0, 0, 0, 0,}},
   {{ 0, 0, 0,144, 0, 0, 0, 0,}},
   {{ 0, 64, 0,144, 0, 0, 0, 0,}},
   {{ 32, 0, 0,144, 0, 0, 0, 0,}},
   {{ 32, 64, 0,144, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 4, 0, 0, 0, 0, 0, 0, 0,}},
   {{128, 0, 0, 0, 0, 0, 0, 0,}},
   {{132, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 32, 0, 0, 0, 0,}},
   {{ 4, 0, 0, 32, 0, 0, 0, 0,}},
   {{128, 0, 0, 32, 0, 0, 0, 0,}},
   {{132, 0, 0, 32, 0, 0, 0, 0,}},
   {{ 1, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 5, 0, 0, 0, 0, 0, 0, 0,}},
   {{129, 0, 0, 0, 0, 0, 0, 0,}},
   {{133, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 1, 0, 0, 32, 0, 0, 0, 0,}},
   {{ 5, 0, 0, 32, 0, 0, 0, 0,}},
   {{129, 0, 0, 32, 0, 0, 0, 0,}},
   {{133, 0, 0, 32, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 64, 0,}},
   {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 32, 0, 64, 0,}},
   {{ 0, 1, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 1, 0, 0, 0, 0, 64, 0,}},
   {{ 0, 1, 0, 0, 32, 0, 0, 0,}},
   {{ 0, 1, 0, 0, 32, 0, 64, 0,}},
   {{ 2, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 0, 0, 0, 0, 0, 64, 0,}},
   {{ 2, 0, 0, 0, 32, 0, 0, 0,}},
   {{ 2, 0, 0, 0, 32, 0, 64, 0,}},
   {{ 2, 1, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 1, 0, 0, 0, 0, 64, 0,}},
   {{ 2, 1, 0, 0, 32, 0, 0, 0,}},
   {{ 2, 1, 0, 0, 32, 0, 64, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 4, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 4, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 6, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 6, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 8, 0, 0, 0, 0,}},
   {{ 16, 0, 0, 8, 0, 0, 0, 0,}},
   {{ 0, 4, 0, 8, 0, 0, 0, 0,}},
   {{ 16, 4, 0, 8, 0, 0, 0, 0,}},
   {{ 0, 2, 0, 8, 0, 0, 0, 0,}},
   {{ 16, 2, 0, 8, 0, 0, 0, 0,}},
   {{ 0, 6, 0, 8, 0, 0, 0, 0,}},
   {{ 16, 6, 0, 8, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 0, 0,128, 0,}},
   {{ 0, 0, 0, 0, 0, 0,128, 8,}},
   {{ 0, 16, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 16, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 16, 0, 0, 0, 0,128, 0,}},
   {{ 0, 16, 0, 0, 0, 0,128, 8,}},
   {{ 0, 32, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 32, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 32, 0, 0, 0, 0,128, 0,}},
   {{ 0, 32, 0, 0, 0, 0,128, 8,}},
   {{ 0, 48, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 48, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 48, 0, 0, 0, 0,128, 0,}},
   {{ 0, 48, 0, 0, 0, 0,128, 8,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 64, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 8, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 72, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 16, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 80, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 24, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 88, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 64, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 8, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 72, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 16, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 80, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 24, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 88, 0, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 24, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 24, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 24, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 24, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 4, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
   {{ 0, 0, 0, 0, 0, 4, 0, 32,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 4,}},
   {{ 0, 0, 0, 0, 0, 4, 0, 4,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 36,}},
   {{ 0, 0, 0, 0, 0, 4, 0, 36,}},
   {{ 0, 0, 0, 2, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 2, 0, 4, 0, 0,}},
   {{ 0, 0, 0, 2, 0, 0, 0, 32,}},
   {{ 0, 0, 0, 2, 0, 4, 0, 32,}},
   {{ 0, 0, 0, 2, 0, 0, 0, 4,}},
   {{ 0, 0, 0, 2, 0, 4, 0, 4,}},
   {{ 0, 0, 0, 2, 0, 0, 0, 36,}},
   {{ 0, 0, 0, 2, 0, 4, 0, 36,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 64,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 64,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 0,128,}},
   {{ 0, 0, 0, 0, 0, 0, 0,144,}},
   {{ 0, 0, 0, 0, 0, 0, 4,128,}},
   {{ 0, 0, 0, 0, 0, 0, 4,144,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 64, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 4, 16,}},
   {{ 0, 0, 0, 0, 64, 0, 0,128,}},
   {{ 0, 0, 0, 0, 64, 0, 0,144,}},
   {{ 0, 0, 0, 0, 64, 0, 4,128,}},
   {{ 0, 0, 0, 0, 64, 0, 4,144,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0,128, 0, 0,}},
   {{ 0, 0, 0, 0, 0,128, 0, 0,}},
   {{ 0, 0, 0, 0, 0,128, 0, 0,}},
   {{ 0, 0, 0, 0, 0,128, 0, 0,}},
   {{ 0, 0, 0, 1, 0,128, 0, 0,}},
   {{ 0, 0, 0, 1, 0,128, 0, 0,}},
   {{ 0, 0, 0, 1, 0,128, 0, 0,}},
   {{ 0, 0, 0, 1, 0,128, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0,128, 0, 0, 0,}},
   {{ 0, 0, 2, 0,128, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 64, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 64, 0, 0,}},
   {{ 0, 0, 0, 0,128, 64, 0, 0,}},
   {{ 0, 0, 2, 0,128, 64, 0, 0,}},
   {{ 0, 0, 0, 0, 8, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 8, 0, 0, 0,}},
   {{ 0, 0, 0, 0,136, 0, 0, 0,}},
   {{ 0, 0, 2, 0,136, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 8, 64, 0, 0,}},
   {{ 0, 0, 2, 0, 8, 64, 0, 0,}},
   {{ 0, 0, 0, 0,136, 64, 0, 0,}},
   {{ 0, 0, 2, 0,136, 64, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 32, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 8, 0,}},
   {{ 0, 0, 1, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 1, 0, 0, 0, 8, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 40, 0,}},
   {{ 0, 0, 1, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 1, 0, 0, 0, 40, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 8, 0,}},
   {{ 0, 0, 1, 0, 16, 0, 0, 0,}},
   {{ 0, 0, 1, 0, 16, 0, 8, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 32, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 40, 0,}},
   {{ 0, 0, 1, 0, 16, 0, 32, 0,}},
   {{ 0, 0, 1, 0, 16, 0, 40, 0,}},
  },
 },
 {
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 8, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 4, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 12, 0, 0, 0, 0,}},
   {{ 0, 0, 16, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 16, 8, 0, 0, 0, 0,}},
   {{ 0, 0, 16, 4, 0, 0, 0, 0,}},
   {{ 0, 0, 16, 12, 0, 0, 0, 0,}},
   {{ 0, 16, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 16, 0, 8, 0, 0, 0, 0,}},
   {{ 0, 16, 0, 4, 0, 0, 0, 0,}},
   {{ 0, 16, 0, 12, 0, 0, 0, 0,}},
   {{ 0, 16, 16, 0, 0, 0, 0, 0,}},
   {{ 0, 16, 16, 8, 0, 0, 0, 0,}},
   {{ 0, 16, 16, 4, 0, 0, 0, 0,}},
   {{ 0, 16, 16, 12, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 1, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 1, 0, 0, 0, 0, 0, 0,}},
   {{ 1, 1, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 16, 0, 0, 0, 0,}},
   {{ 1, 0, 0, 16, 0, 0, 0, 0,}},
   {{ 0, 1, 0, 16, 0, 0, 0, 0,}},
   {{ 1, 1, 0, 16, 0, 0, 0, 0,}},
   {{ 0, 4, 0, 0, 0, 0, 0, 0,}},
   {{ 1, 4, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 5, 0, 0, 0, 0, 0, 0,}},
   {{ 1, 5, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 4, 0, 16, 0, 0, 0, 0,}},
   {{ 1, 4, 0, 16, 0, 0, 0, 0,}},
   {{ 0, 5, 0, 16, 0, 0, 0, 0,}},
   {{ 1, 5, 0, 16, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 32, 0, 0, 0, 0,}},
   {{ 0, 0, 4, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 4, 32, 0, 0, 0, 0,}},
   {{ 64, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 0, 32, 0, 0, 0, 0,}},
   {{ 64, 0, 4, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 4, 32, 0, 0, 0, 0,}},
   {{ 0, 0, 64, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 64, 32, 0, 0, 0, 0,}},
   {{ 0, 0, 68, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 68, 32, 0, 0, 0, 0,}},
   {{ 64, 0, 64, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 64, 32, 0, 0, 0, 0,}},
   {{ 64, 0, 68, 0, 0, 0, 0, 0,}},
   {{ 64, 0, 68, 32, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 64, 0, 0, 0, 0,}},
   {{ 0, 0, 32, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 32, 64, 0, 0, 0, 0,}},
   {{ 0, 0, 8, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 8, 64, 0, 0, 0, 0,}},
   {{ 0, 0, 40, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 40, 64, 0, 0, 0, 0,}},
   {{ 0, 0,128, 0, 0, 0, 0, 0,}},
   {{ 0, 0,128, 64, 0, 0, 0, 0,}},
   {{ 0, 0,160, 0, 0, 0, 0, 0,}},
   {{ 0, 0,160, 64, 0, 0, 0, 0,}},
   {{ 0, 0,136, 0, 0, 0, 0, 0,}},
   {{ 0, 0,136, 64, 0, 0, 0, 0,}},
   {{ 0, 0,168, 0, 0, 0, 0, 0,}},
   {{ 0, 0,168, 64, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 64, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
   {{ 0, 0, 0, 0, 0, 64, 0, 32,}},
   {{ 0, 64, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 64, 0, 0, 0, 64, 0, 0,}},
   {{ 0, 64, 0, 0, 0, 0, 0, 32,}},
   {{ 0, 64, 0, 0, 0, 64, 0, 32,}},
   {{ 8, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 8, 0, 0, 0, 0, 64, 0, 0,}},
   {{ 8, 0, 0, 0, 0, 0, 0, 32,}},
   {{ 8, 0, 0, 0, 0, 64, 0, 32,}},
   {{ 8, 64, 0, 0, 0, 0, 0, 0,}},
   {{ 8, 64, 0, 0, 0, 64, 0, 0,}},
   {{ 8, 64, 0, 0, 0, 0, 0, 32,}},
   {{ 8, 64, 0, 0, 0, 64, 0, 32,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0,128, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0,128, 0, 0, 0, 0,}},
   {{ 0,128, 0,128, 0, 0, 0, 0,}},
   {{ 32, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 32,128, 0, 0, 0, 0, 0, 0,}},
   {{ 32, 0, 0,128, 0, 0, 0, 0,}},
   {{ 32,128, 0,128, 0, 0, 0, 0,}},
   {{ 0, 32, 0, 0, 0, 0, 0, 0,}},
   {{ 0,160, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 32, 0,128, 0, 0, 0, 0,}},
   {{ 0,160, 0,128, 0, 0, 0, 0,}},
   {{ 32, 32, 0, 0, 0, 0, 0, 0,}},
   {{ 32,160, 0, 0, 0, 0, 0, 0,}},
   {{ 32, 32, 0,128, 0, 0, 0, 0,}},
   {{ 32,160, 0,128, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 8, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 12, 0, 0, 0,}},
   {{ 4, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 4, 0, 0, 0, 4, 0, 0, 0,}},
   {{ 4, 0, 0, 0, 8, 0, 0, 0,}},
   {{ 4, 0, 0, 0, 12, 0, 0, 0,}},
   {{128, 0, 0, 0, 0, 0, 0, 0,}},
   {{128, 0, 0, 0, 4, 0, 0, 0,}},
   {{128, 0, 0, 0, 8, 0, 0, 0,}},
   {{128, 0, 0, 0, 12, 0, 0, 0,}},
   {{132, 0, 0, 0, 0, 0, 0, 0,}},
   {{132, 0, 0, 0, 4, 0, 0, 0,}},
   {{132, 0, 0, 0, 8, 0, 0, 0,}},
   {{132, 0, 0, 0, 12, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 18, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 18, 2, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 8, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 10, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 8, 0, 0, 0, 0, 0, 0,}},
   {{ 2, 10, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 8, 0, 0, 0, 0, 0, 0,}},
   {{ 16, 10, 0, 0, 0, 0, 0, 0,}},
   {{ 18, 8, 0, 0, 0, 0, 0, 0,}},
   {{ 18, 10, 0, 0, 0, 0, 0, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
   {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 1, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 1, 0, 0, 0, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 32, 0, 64,}},
   {{ 0, 0, 1, 0, 0, 32, 0, 0,}},
   {{ 0, 0, 1, 0, 0, 32, 0, 64,}},
   {{ 0, 0, 0, 0, 0, 0,128, 0,}},
   {{ 0, 0, 0, 0, 0, 0,128, 64,}},
   {{ 0, 0, 1, 0, 0, 0,128, 0,}},
   {{ 0, 0, 1, 0, 0, 0,128, 64,}},
   {{ 0, 0, 0, 0, 0, 32,128, 0,}},
   {{ 0, 0, 0, 0, 0, 32,128, 64,}},
   {{ 0, 0, 1, 0, 0, 32,128, 0,}},
   {{ 0, 0, 1, 0, 0, 32,128, 64,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 32, 0,}},
   {{ 0, 0, 2, 0, 0, 0, 32, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 8, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 0, 0, 8, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 16, 0, 8, 0,}},
   {{ 0, 0, 0, 1, 16, 0, 0, 0,}},
   {{ 0, 0, 0, 1, 16, 0, 8, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 4,}},
   {{ 0, 0, 0, 0, 0, 0, 8, 4,}},
   {{ 0, 0, 0, 1, 0, 0, 0, 4,}},
   {{ 0, 0, 0, 1, 0, 0, 8, 4,}},
   {{ 0, 0, 0, 0, 16, 0, 0, 4,}},
   {{ 0, 0, 0, 0, 16, 0, 8, 4,}},
   {{ 0, 0, 0, 1, 16, 0, 0, 4,}},
   {{ 0, 0, 0, 1, 16, 0, 8, 4,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 8,}},
   {{ 0, 0, 0, 0, 64, 0, 0, 8,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
   {{ 0, 0, 0, 2, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 2, 32, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0,128,}},
   {{ 0, 0, 0, 0, 32, 0, 0,128,}},
   {{ 0, 0, 0, 2, 0, 0, 0,128,}},
   {{ 0, 0, 0, 2, 32, 0, 0,128,}},
   {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 32, 16, 0, 0,}},
   {{ 0, 0, 0, 2, 0, 16, 0, 0,}},
   {{ 0, 0, 0, 2, 32, 16, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 16, 0,128,}},
   {{ 0, 0, 0, 0, 32, 16, 0,128,}},
   {{ 0, 0, 0, 2, 0, 16, 0,128,}},
   {{ 0, 0, 0, 2, 32, 16, 0,128,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 4, 0,}},
   {{ 0, 0, 0, 0, 0, 8, 4, 0,}},
  },
  {
   {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
   {{ 0, 0, 0, 0, 0,128, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 0, 64, 0,}},
   {{ 0, 0, 0, 0, 0,128, 64, 0,}},
   {{ 0, 0, 0, 0,128, 0, 0, 0,}},
   {{ 0, 0, 0, 0,128,128, 0, 0,}},
   {{ 0, 0, 0, 0,128, 0, 64, 0,}},
   {{ 0, 0, 0, 0,128,128, 64, 0,}},
   {{ 0, 0, 0, 0, 0, 4, 0, 0,}},
   {{ 0, 0, 0, 0, 0,132, 0, 0,}},
   {{ 0, 0, 0, 0, 0, 4, 64, 0,}},
   {{ 0, 0, 0, 0, 0,132, 64, 0,}},
   {{ 0, 0, 0, 0,128, 4, 0, 0,}},
   {{ 0, 0, 0, 0,128,132, 0, 0,}},
   {{ 0, 0, 0, 0,128, 4, 64, 0,}},
   {{ 0, 0, 0, 0,128,132, 64, 0,}},
  },
 },
};


static const C_block IE3264[32/(1<<2)][1<<(1<<2)] = {
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 4,}},
  {{ 4, 0, 0, 0, 0, 0, 0, 64,}},
  {{ 4, 0, 0, 0, 0, 0, 64, 68,}},
  {{ 0, 0, 0, 0, 64, 4, 0, 0,}},
  {{ 0, 0, 0, 0, 64, 4, 64, 4,}},
  {{ 4, 0, 0, 0, 64, 4, 0, 64,}},
  {{ 4, 0, 0, 0, 64, 4, 64, 68,}},
  {{ 0, 0, 0, 0, 0, 64, 4, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 68, 4,}},
  {{ 4, 0, 0, 0, 0, 64, 4, 64,}},
  {{ 4, 0, 0, 0, 0, 64, 68, 68,}},
  {{ 0, 0, 0, 0, 64, 68, 4, 0,}},
  {{ 0, 0, 0, 0, 64, 68, 68, 4,}},
  {{ 4, 0, 0, 0, 64, 68, 4, 64,}},
  {{ 4, 0, 0, 0, 64, 68, 68, 68,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 64, 4, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 64, 4, 0, 0, 0,}},
  {{ 0, 0, 64, 68, 4, 0, 0, 0,}},
  {{ 64, 4, 0, 0, 0, 0, 0, 0,}},
  {{ 64, 4, 64, 4, 0, 0, 0, 0,}},
  {{ 64, 4, 0, 64, 4, 0, 0, 0,}},
  {{ 64, 4, 64, 68, 4, 0, 0, 0,}},
  {{ 0, 64, 4, 0, 0, 0, 0, 0,}},
  {{ 0, 64, 68, 4, 0, 0, 0, 0,}},
  {{ 0, 64, 4, 64, 4, 0, 0, 0,}},
  {{ 0, 64, 68, 68, 4, 0, 0, 0,}},
  {{ 64, 68, 4, 0, 0, 0, 0, 0,}},
  {{ 64, 68, 68, 4, 0, 0, 0, 0,}},
  {{ 64, 68, 4, 64, 4, 0, 0, 0,}},
  {{ 64, 68, 68, 68, 4, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 32, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 32, 32, 32,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 32, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 32,}},
  {{ 0, 0, 0, 0, 32, 32, 32, 32,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 32, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 0, 32, 0, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 32, 0, 0, 0, 0,}},
  {{ 32, 0, 32, 32, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 32, 32, 0, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 32, 0, 0, 0, 0,}},
  {{ 0, 32, 32, 32, 0, 0, 0, 0,}},
  {{ 32, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 32, 32, 0, 0, 0, 0, 0,}},
  {{ 32, 32, 0, 32, 0, 0, 0, 0,}},
  {{ 32, 32, 32, 32, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 16,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 16, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 16, 16, 16,}},
  {{ 0, 0, 0, 0, 16, 16, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 16, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 16, 0, 16,}},
  {{ 0, 0, 0, 0, 16, 16, 16, 16,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 16, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 16, 16, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 16, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 16, 16, 16, 0, 0, 0, 0,}},
  {{ 16, 16, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 16, 16, 0, 0, 0, 0, 0,}},
  {{ 16, 16, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 16, 16, 16, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0,128, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 0,128, 8,}},
  {{ 0, 0, 0, 0, 0,128,136, 8,}},
  {{ 0, 0, 0,128, 8, 0, 0, 0,}},
  {{ 0, 0, 0,128, 8,128, 8, 0,}},
  {{ 0, 0, 0,128, 8, 0,128, 8,}},
  {{ 0, 0, 0,128, 8,128,136, 8,}},
  {{ 0, 0, 0, 0,128, 8, 0, 0,}},
  {{ 0, 0, 0, 0,128,136, 8, 0,}},
  {{ 0, 0, 0, 0,128, 8,128, 8,}},
  {{ 0, 0, 0, 0,128,136,136, 8,}},
  {{ 0, 0, 0,128,136, 8, 0, 0,}},
  {{ 0, 0, 0,128,136,136, 8, 0,}},
  {{ 0, 0, 0,128,136, 8,128, 8,}},
  {{ 0, 0, 0,128,136,136,136, 8,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0,128, 8, 0, 0, 0, 0, 0,}},
  {{ 0, 0,128, 8, 0, 0, 0, 0,}},
  {{ 0,128,136, 8, 0, 0, 0, 0,}},
  {{ 8, 0, 0, 0, 0, 0, 0,128,}},
  {{ 8,128, 8, 0, 0, 0, 0,128,}},
  {{ 8, 0,128, 8, 0, 0, 0,128,}},
  {{ 8,128,136, 8, 0, 0, 0,128,}},
  {{128, 8, 0, 0, 0, 0, 0, 0,}},
  {{128,136, 8, 0, 0, 0, 0, 0,}},
  {{128, 8,128, 8, 0, 0, 0, 0,}},
  {{128,136,136, 8, 0, 0, 0, 0,}},
  {{136, 8, 0, 0, 0, 0, 0,128,}},
  {{136,136, 8, 0, 0, 0, 0,128,}},
  {{136, 8,128, 8, 0, 0, 0,128,}},
  {{136,136,136, 8, 0, 0, 0,128,}},
 },
};


static const unsigned long SPE[2][8][64] = {
 {
  {
   0x80088000,0x80000000, 0,0x80088000,
            0,0x80088000,0x80000000, 0,
   0x80088000,0x80088000,0x80000000, 0x88000,
      0x88000, 0, 0,0x80000000,
   0x80000000, 0, 0x88000,0x80088000,
   0x80088000,0x80000000, 0x88000, 0x88000,
            0, 0x88000,0x80088000,0x80000000,
      0x88000, 0x88000,0x80000000, 0,
            0,0x80088000, 0x88000,0x80000000,
   0x80088000,0x80000000, 0x88000, 0x88000,
   0x80000000, 0x88000,0x80088000, 0,
   0x80088000, 0, 0,0x80000000,
   0x80088000,0x80088000,0x80000000, 0x88000,
            0, 0x88000,0x80000000, 0,
   0x80000000, 0, 0x88000,0x80088000,
            0,0x80000000, 0x88000,0x80088000,
  },
  {
    0x8800010, 0, 0x8800000, 0,
         0x10, 0x8800010, 0x8800000, 0x8800000,
    0x8800000, 0x10, 0x10, 0x8800000,
         0x10, 0x8800000, 0, 0x10,
            0, 0x8800010, 0x10, 0x8800000,
    0x8800010, 0, 0, 0x10,
    0x8800010, 0x8800010, 0x8800000, 0x10,
            0, 0, 0x8800010, 0x8800010,
         0x10, 0x8800000, 0x8800000, 0x8800010,
    0x8800010, 0x10, 0x10, 0,
            0, 0x8800010, 0, 0x10,
    0x8800000, 0, 0x8800010, 0x8800010,
    0x8800000, 0x8800000, 0, 0x10,
         0x10, 0x8800010, 0x8800000, 0,
         0x10, 0, 0x8800010, 0x8800000,
    0x8800010, 0x10, 0, 0x8800000,
  },
  {
            0,0x40001000, 0x1000, 0x1000,
   0x40000000, 0, 0x1000,0x40001000,
       0x1000,0x40000000,0x40000000, 0,
   0x40001000, 0x1000, 0,0x40000000,
            0,0x40000000,0x40001000, 0x1000,
       0x1000,0x40001000,0x40000000, 0,
   0x40000000, 0x1000,0x40001000,0x40000000,
   0x40001000, 0, 0,0x40001000,
   0x40001000, 0x1000, 0,0x40000000,
       0x1000,0x40000000,0x40000000, 0x1000,
            0,0x40001000,0x40001000,0x40000000,
   0x40000000, 0,0x40001000, 0,
   0x40001000, 0, 0,0x40001000,
   0x40000000, 0x1000, 0x1000,0x40001000,
       0x1000, 0,0x40000000, 0x1000,
            0,0x40001000, 0x1000,0x40000000,
  },
  {
     0x100008, 0x100000, 0x8, 0x100008,
            0, 0, 0x100008, 0x8,
     0x100000, 0x8, 0, 0x100008,
          0x8, 0x100008, 0, 0,
          0x8, 0x100000, 0x100000, 0x8,
     0x100000, 0x100008, 0, 0x100000,
     0x100008, 0, 0x8, 0x100000,
     0x100000, 0x8, 0x100008, 0,
          0x8, 0x100008, 0, 0x8,
     0x100000, 0x100000, 0x8, 0,
     0x100008, 0, 0x100000, 0x8,
            0, 0x8, 0x100000, 0x100000,
            0, 0x100008, 0x100008, 0,
     0x100008, 0x8, 0x100000, 0x100008,
          0x8, 0x100000, 0, 0x100008,
     0x100008, 0, 0x8, 0x100000,
  },
  {
            0,0x10000000, 0x44000,0x10044020,
   0x10000020, 0x44000,0x10044020,0x10000000,
   0x10000000, 0x20, 0x20,0x10044000,
      0x44020,0x10000020,0x10044000, 0,
   0x10044000, 0,0x10000020, 0x44020,
      0x44000,0x10044020, 0, 0x20,
         0x20, 0x44020,0x10044020,0x10000020,
   0x10000000, 0x44000, 0x44020,0x10044000,
   0x10044000, 0x44020,0x10000020,0x10000000,
   0x10000000, 0x20, 0x20, 0x44000,
            0,0x10044000,0x10044020, 0,
   0x10044020, 0, 0x44000,0x10000020,
      0x44020, 0x44000, 0,0x10044020,
   0x10000020,0x10044000, 0x44020,0x10000000,
   0x10044000,0x10000020, 0x44000, 0x44020,
         0x20,0x10044020,0x10000000, 0x20,
  },
  {
        0x440, 0x440, 0, 0x200000,
        0x440, 0x200000, 0x200440, 0,
     0x200440, 0x200440, 0x200000, 0,
     0x200000, 0x440, 0, 0x200440,
            0, 0x200440, 0x440, 0,
     0x200000, 0x440, 0x200000, 0x440,
     0x200440, 0, 0, 0x200440,
        0x440, 0x200000, 0x200440, 0x200000,
     0x200440, 0, 0x200000, 0x200440,
     0x200000, 0x440, 0, 0x200000,
            0, 0x200000, 0x440, 0,
        0x440, 0x200440, 0x200000, 0x440,
     0x200440, 0x200000, 0, 0x200440,
        0x440, 0, 0x200440, 0,
     0x200000, 0x440, 0x200440, 0x200000,
            0, 0x200440, 0x440, 0x440,
  },
  {
    0x4400000, 0x2000, 0x2000, 0x4,
    0x4402004, 0x4400004, 0x4402000, 0,
            0, 0x2004, 0x2004, 0x4400000,
          0x4, 0x4402000, 0x4400000, 0x2004,
       0x2004, 0x4400000, 0x4400004, 0x4402004,
            0, 0x2000, 0x4, 0x4402000,
    0x4400004, 0x4402004, 0x4402000, 0x4,
    0x4402004, 0x4400004, 0x2000, 0,
    0x4402004, 0x4400000, 0x4400004, 0x2004,
    0x4400000, 0x2000, 0, 0x4400004,
       0x2004, 0x4402004, 0x4402000, 0,
       0x2000, 0x4, 0x4, 0x2000,
            0, 0x2004, 0x2000, 0x4402000,
       0x2004, 0x4400000, 0x4402004, 0,
    0x4402000, 0x4, 0x4400004, 0x4402004,
          0x4, 0x4402000, 0x4400000, 0x4400004,
  },
  {
        0x880,0x20000000,0x20000880, 0,
   0x20000000, 0x880, 0,0x20000880,
        0x880, 0,0x20000000,0x20000880,
   0x20000880,0x20000880, 0x880, 0,
   0x20000000,0x20000880, 0x880,0x20000000,
   0x20000880, 0x880, 0,0x20000000,
            0, 0,0x20000880, 0x880,
            0,0x20000000,0x20000000, 0x880,
            0,0x20000000, 0x880,0x20000880,
   0x20000880, 0, 0,0x20000000,
        0x880,0x20000880,0x20000000, 0x880,
   0x20000000, 0x880, 0x880,0x20000000,
   0x20000880, 0, 0, 0x880,
   0x20000000,0x20000880,0x20000880, 0,
        0x880,0x20000000,0x20000880, 0,
            0, 0x880,0x20000000,0x20000880,
  },
 },
 {
  {
       0x2008, 0x8,0x20002000,0x20002008,
       0x2000,0x20000008,0x20000008,0x20002000,
   0x20000008, 0x2008, 0x2008,0x20000000,
   0x20002000, 0x2000, 0,0x20000008,
          0x8,0x20000000, 0x2000, 0x8,
   0x20002008, 0x2008,0x20000000, 0x2000,
   0x20000000, 0, 0x8,0x20002008,
            0,0x20002000,0x20002008, 0,
            0,0x20002008, 0x2000,0x20000008,
       0x2008, 0x8,0x20000000, 0x2000,
   0x20002008, 0, 0x8,0x20002000,
   0x20000008,0x20000000,0x20002000, 0x2008,
   0x20002008, 0x8, 0x2008,0x20002000,
       0x2000,0x20000000,0x20000008, 0,
          0x8, 0x2000,0x20002000, 0x2008,
   0x20000000,0x20002008, 0,0x20000008,
  },
  {
    0x4400010, 0, 0x10, 0x4400010,
    0x4400000, 0, 0x4400000, 0x10,
            0, 0x4400010, 0, 0x4400000,
         0x10, 0x4400010, 0x4400010, 0,
         0x10, 0x4400000, 0x4400010, 0,
         0x10, 0x4400000, 0, 0x10,
    0x4400000, 0x10, 0x4400010, 0x4400000,
    0x4400000, 0x10, 0, 0x4400010,
         0x10, 0x4400010, 0x4400000, 0x10,
    0x4400010, 0x10, 0x4400000, 0,
    0x4400000, 0, 0x10, 0x4400010,
            0, 0x4400000, 0x10, 0x4400000,
    0x4400010, 0, 0, 0x4400000,
            0, 0x4400010, 0x10, 0x4400010,
    0x4400010, 0x10, 0, 0x4400000,
    0x4400000, 0, 0x4400010, 0x10,
  },
  {
   0x10044000, 0x44004, 0,0x10044000,
   0x10000004, 0x44000,0x10044000, 0x4,
      0x44000, 0x4, 0x44004,0x10000000,
   0x10044004,0x10000000,0x10000000,0x10044004,
            0,0x10000004, 0x44004, 0,
   0x10000000,0x10044004, 0x4,0x10044000,
   0x10044004, 0x44000,0x10000004, 0x44004,
          0x4, 0, 0x44000,0x10000004,
      0x44004, 0,0x10000000, 0x4,
   0x10000000,0x10000004, 0x44004,0x10044000,
            0, 0x44004, 0x4,0x10044004,
   0x10000004, 0x44000,0x10044004,0x10000000,
   0x10000004,0x10044000, 0x44000,0x10044004,
          0x4, 0x44000,0x10044000, 0x4,
      0x44000, 0,0x10044004,0x10000000,
   0x10044000,0x10000004, 0, 0x44004,
  },
  {
   0x80000440, 0x100000,0x80000000,0x80100440,
            0, 0x100440,0x80100000,0x80000440,
     0x100440,0x80100000, 0x100000,0x80000000,
   0x80100000,0x80000440, 0x440, 0x100000,
   0x80100440, 0x440, 0,0x80000000,
        0x440,0x80100000, 0x100440, 0,
   0x80000000, 0,0x80000440, 0x100440,
     0x100000,0x80100440,0x80100440, 0x440,
   0x80100440,0x80000000, 0x440,0x80100000,
        0x440, 0x100000,0x80000000, 0x100440,
   0x80100000, 0, 0,0x80000440,
            0,0x80100440, 0x100440, 0,
     0x100000,0x80100440,0x80000440, 0x440,
   0x80100440,0x80000000, 0x100000,0x80000440,
   0x80000440, 0x440, 0x100440,0x80100000,
   0x80000000, 0x100000,0x80100000, 0x100440,
  },
  {
      0x88000, 0, 0, 0x88000,
      0x88000, 0x88000, 0, 0x88000,
            0, 0, 0x88000, 0,
      0x88000, 0x88000, 0x88000, 0,
            0, 0x88000, 0, 0,
      0x88000, 0, 0, 0x88000,
            0, 0x88000, 0x88000, 0,
      0x88000, 0, 0, 0x88000,
      0x88000, 0x88000, 0, 0x88000,
            0, 0, 0x88000, 0x88000,
      0x88000, 0, 0x88000, 0,
            0, 0x88000, 0, 0,
      0x88000, 0, 0, 0x88000,
      0x88000, 0x88000, 0, 0,
            0, 0x88000, 0x88000, 0,
            0, 0, 0x88000, 0x88000,
  },
  {
    0x8800000, 0x20, 0, 0x8800020,
         0x20, 0, 0x8800000, 0x20,
            0, 0x8800020, 0x20, 0x8800000,
    0x8800000, 0x8800000, 0x8800020, 0x20,
         0x20, 0x8800000, 0x8800020, 0,
            0, 0, 0x8800020, 0x8800020,
    0x8800020, 0x8800020, 0x8800000, 0,
            0, 0x20, 0x20, 0x8800000,
            0, 0x8800000, 0x8800000, 0x20,
    0x8800020, 0x20, 0, 0x8800000,
    0x8800000, 0, 0x8800020, 0x20,
         0x20, 0x8800020, 0x20, 0,
    0x8800020, 0x20, 0x20, 0x8800000,
    0x8800000, 0x8800020, 0x20, 0,
            0, 0x8800000, 0x8800000, 0x8800020,
    0x8800020, 0, 0, 0x8800020,
  },
  {
            0, 0, 0x1000,0x40001000,
   0x40001000,0x40000000, 0, 0,
       0x1000,0x40001000,0x40000000, 0x1000,
   0x40000000, 0x1000, 0x1000,0x40000000,
   0x40001000, 0,0x40000000,0x40001000,
            0, 0x1000,0x40001000, 0,
   0x40001000,0x40000000, 0x1000,0x40000000,
   0x40000000,0x40001000, 0, 0x1000,
   0x40000000, 0x1000,0x40001000,0x40000000,
            0, 0, 0x1000,0x40001000,
   0x40001000,0x40000000, 0, 0,
            0,0x40001000,0x40000000, 0x1000,
            0,0x40001000, 0x1000, 0,
   0x40000000, 0,0x40001000, 0x1000,
       0x1000,0x40000000,0x40000000,0x40001000,
   0x40001000, 0x1000, 0x1000,0x40000000,
  },
  {
     0x200880, 0x200880, 0, 0,
     0x200000, 0x880, 0x200880, 0x200880,
            0, 0x200000, 0x880, 0,
        0x880, 0x200000, 0x200000, 0x200880,
            0, 0x880, 0x880, 0x200000,
     0x200880, 0x200000, 0, 0x880,
     0x200000, 0x880, 0x200000, 0x200880,
        0x880, 0, 0x200880, 0,
        0x880, 0, 0x200000, 0x200880,
            0, 0x200000, 0, 0x880,
     0x200880, 0x200000, 0x200000, 0x880,
     0x200880, 0, 0x880, 0x200000,
     0x200880, 0x880, 0x200880, 0x200000,
        0x880, 0, 0x200000, 0x200880,
            0, 0x200880, 0x880, 0,
     0x200000, 0x200880, 0, 0x880,
  },
 },
};


static const C_block CF6464[64/(1<<2)][1<<(1<<2)] = {
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 64, 64,}},
  {{ 0, 0, 0, 0, 0, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 0, 64,}},
  {{ 0, 0, 0, 0, 0, 64, 64, 0,}},
  {{ 0, 0, 0, 0, 0, 64, 64, 64,}},
  {{ 0, 0, 0, 0, 64, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 0, 64,}},
  {{ 0, 0, 0, 0, 64, 0, 64, 0,}},
  {{ 0, 0, 0, 0, 64, 0, 64, 64,}},
  {{ 0, 0, 0, 0, 64, 64, 0, 0,}},
  {{ 0, 0, 0, 0, 64, 64, 0, 64,}},
  {{ 0, 0, 0, 0, 64, 64, 64, 0,}},
  {{ 0, 0, 0, 0, 64, 64, 64, 64,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 4,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 4, 4,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 4, 0, 4,}},
  {{ 0, 0, 0, 0, 0, 4, 4, 0,}},
  {{ 0, 0, 0, 0, 0, 4, 4, 4,}},
  {{ 0, 0, 0, 0, 4, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 0, 4,}},
  {{ 0, 0, 0, 0, 4, 0, 4, 0,}},
  {{ 0, 0, 0, 0, 4, 0, 4, 4,}},
  {{ 0, 0, 0, 0, 4, 4, 0, 0,}},
  {{ 0, 0, 0, 0, 4, 4, 0, 4,}},
  {{ 0, 0, 0, 0, 4, 4, 4, 0,}},
  {{ 0, 0, 0, 0, 4, 4, 4, 4,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 64, 0, 0, 0, 0,}},
  {{ 0, 0, 64, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 64, 64, 0, 0, 0, 0,}},
  {{ 0, 64, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 64, 0, 64, 0, 0, 0, 0,}},
  {{ 0, 64, 64, 0, 0, 0, 0, 0,}},
  {{ 0, 64, 64, 64, 0, 0, 0, 0,}},
  {{ 64, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 64, 0, 0, 64, 0, 0, 0, 0,}},
  {{ 64, 0, 64, 0, 0, 0, 0, 0,}},
  {{ 64, 0, 64, 64, 0, 0, 0, 0,}},
  {{ 64, 64, 0, 0, 0, 0, 0, 0,}},
  {{ 64, 64, 0, 64, 0, 0, 0, 0,}},
  {{ 64, 64, 64, 0, 0, 0, 0, 0,}},
  {{ 64, 64, 64, 64, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 4, 0, 0, 0, 0,}},
  {{ 0, 0, 4, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 4, 4, 0, 0, 0, 0,}},
  {{ 0, 4, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 4, 0, 4, 0, 0, 0, 0,}},
  {{ 0, 4, 4, 0, 0, 0, 0, 0,}},
  {{ 0, 4, 4, 4, 0, 0, 0, 0,}},
  {{ 4, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 0, 0, 4, 0, 0, 0, 0,}},
  {{ 4, 0, 4, 0, 0, 0, 0, 0,}},
  {{ 4, 0, 4, 4, 0, 0, 0, 0,}},
  {{ 4, 4, 0, 0, 0, 0, 0, 0,}},
  {{ 4, 4, 0, 4, 0, 0, 0, 0,}},
  {{ 4, 4, 4, 0, 0, 0, 0, 0,}},
  {{ 4, 4, 4, 4, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 16, 16,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 0, 16,}},
  {{ 0, 0, 0, 0, 0, 16, 16, 0,}},
  {{ 0, 0, 0, 0, 0, 16, 16, 16,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 0, 16,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 0, 16, 16,}},
  {{ 0, 0, 0, 0, 16, 16, 0, 0,}},
  {{ 0, 0, 0, 0, 16, 16, 0, 16,}},
  {{ 0, 0, 0, 0, 16, 16, 16, 0,}},
  {{ 0, 0, 0, 0, 16, 16, 16, 16,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 1,}},
  {{ 0, 0, 0, 0, 0, 0, 1, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 1, 1,}},
  {{ 0, 0, 0, 0, 0, 1, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 1, 0, 1,}},
  {{ 0, 0, 0, 0, 0, 1, 1, 0,}},
  {{ 0, 0, 0, 0, 0, 1, 1, 1,}},
  {{ 0, 0, 0, 0, 1, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 1, 0, 0, 1,}},
  {{ 0, 0, 0, 0, 1, 0, 1, 0,}},
  {{ 0, 0, 0, 0, 1, 0, 1, 1,}},
  {{ 0, 0, 0, 0, 1, 1, 0, 0,}},
  {{ 0, 0, 0, 0, 1, 1, 0, 1,}},
  {{ 0, 0, 0, 0, 1, 1, 1, 0,}},
  {{ 0, 0, 0, 0, 1, 1, 1, 1,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 16, 16, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 0, 16, 0, 0, 0, 0,}},
  {{ 0, 16, 16, 0, 0, 0, 0, 0,}},
  {{ 0, 16, 16, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 0, 16, 0, 0, 0, 0, 0,}},
  {{ 16, 0, 16, 16, 0, 0, 0, 0,}},
  {{ 16, 16, 0, 0, 0, 0, 0, 0,}},
  {{ 16, 16, 0, 16, 0, 0, 0, 0,}},
  {{ 16, 16, 16, 0, 0, 0, 0, 0,}},
  {{ 16, 16, 16, 16, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 1, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 1, 1, 0, 0, 0, 0,}},
  {{ 0, 1, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 1, 0, 1, 0, 0, 0, 0,}},
  {{ 0, 1, 1, 0, 0, 0, 0, 0,}},
  {{ 0, 1, 1, 1, 0, 0, 0, 0,}},
  {{ 1, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 1, 0, 0, 1, 0, 0, 0, 0,}},
  {{ 1, 0, 1, 0, 0, 0, 0, 0,}},
  {{ 1, 0, 1, 1, 0, 0, 0, 0,}},
  {{ 1, 1, 0, 0, 0, 0, 0, 0,}},
  {{ 1, 1, 0, 1, 0, 0, 0, 0,}},
  {{ 1, 1, 1, 0, 0, 0, 0, 0,}},
  {{ 1, 1, 1, 1, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0,128,}},
  {{ 0, 0, 0, 0, 0, 0,128, 0,}},
  {{ 0, 0, 0, 0, 0, 0,128,128,}},
  {{ 0, 0, 0, 0, 0,128, 0, 0,}},
  {{ 0, 0, 0, 0, 0,128, 0,128,}},
  {{ 0, 0, 0, 0, 0,128,128, 0,}},
  {{ 0, 0, 0, 0, 0,128,128,128,}},
  {{ 0, 0, 0, 0,128, 0, 0, 0,}},
  {{ 0, 0, 0, 0,128, 0, 0,128,}},
  {{ 0, 0, 0, 0,128, 0,128, 0,}},
  {{ 0, 0, 0, 0,128, 0,128,128,}},
  {{ 0, 0, 0, 0,128,128, 0, 0,}},
  {{ 0, 0, 0, 0,128,128, 0,128,}},
  {{ 0, 0, 0, 0,128,128,128, 0,}},
  {{ 0, 0, 0, 0,128,128,128,128,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 8,}},
  {{ 0, 0, 0, 0, 0, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 8, 8,}},
  {{ 0, 0, 0, 0, 0, 8, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 8, 0, 8,}},
  {{ 0, 0, 0, 0, 0, 8, 8, 0,}},
  {{ 0, 0, 0, 0, 0, 8, 8, 8,}},
  {{ 0, 0, 0, 0, 8, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 8, 0, 0, 8,}},
  {{ 0, 0, 0, 0, 8, 0, 8, 0,}},
  {{ 0, 0, 0, 0, 8, 0, 8, 8,}},
  {{ 0, 0, 0, 0, 8, 8, 0, 0,}},
  {{ 0, 0, 0, 0, 8, 8, 0, 8,}},
  {{ 0, 0, 0, 0, 8, 8, 8, 0,}},
  {{ 0, 0, 0, 0, 8, 8, 8, 8,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0,128, 0, 0, 0, 0,}},
  {{ 0, 0,128, 0, 0, 0, 0, 0,}},
  {{ 0, 0,128,128, 0, 0, 0, 0,}},
  {{ 0,128, 0, 0, 0, 0, 0, 0,}},
  {{ 0,128, 0,128, 0, 0, 0, 0,}},
  {{ 0,128,128, 0, 0, 0, 0, 0,}},
  {{ 0,128,128,128, 0, 0, 0, 0,}},
  {{128, 0, 0, 0, 0, 0, 0, 0,}},
  {{128, 0, 0,128, 0, 0, 0, 0,}},
  {{128, 0,128, 0, 0, 0, 0, 0,}},
  {{128, 0,128,128, 0, 0, 0, 0,}},
  {{128,128, 0, 0, 0, 0, 0, 0,}},
  {{128,128, 0,128, 0, 0, 0, 0,}},
  {{128,128,128, 0, 0, 0, 0, 0,}},
  {{128,128,128,128, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 8, 0, 0, 0, 0,}},
  {{ 0, 0, 8, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 8, 8, 0, 0, 0, 0,}},
  {{ 0, 8, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 8, 0, 8, 0, 0, 0, 0,}},
  {{ 0, 8, 8, 0, 0, 0, 0, 0,}},
  {{ 0, 8, 8, 8, 0, 0, 0, 0,}},
  {{ 8, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 8, 0, 0, 8, 0, 0, 0, 0,}},
  {{ 8, 0, 8, 0, 0, 0, 0, 0,}},
  {{ 8, 0, 8, 8, 0, 0, 0, 0,}},
  {{ 8, 8, 0, 0, 0, 0, 0, 0,}},
  {{ 8, 8, 0, 8, 0, 0, 0, 0,}},
  {{ 8, 8, 8, 0, 0, 0, 0, 0,}},
  {{ 8, 8, 8, 8, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 0, 32,}},
  {{ 0, 0, 0, 0, 0, 32, 32, 0,}},
  {{ 0, 0, 0, 0, 0, 32, 32, 32,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 0, 32,}},
  {{ 0, 0, 0, 0, 32, 0, 32, 0,}},
  {{ 0, 0, 0, 0, 32, 0, 32, 32,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 0, 32,}},
  {{ 0, 0, 0, 0, 32, 32, 32, 0,}},
  {{ 0, 0, 0, 0, 32, 32, 32, 32,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 0, 2,}},
  {{ 0, 0, 0, 0, 0, 0, 2, 0,}},
  {{ 0, 0, 0, 0, 0, 0, 2, 2,}},
  {{ 0, 0, 0, 0, 0, 2, 0, 0,}},
  {{ 0, 0, 0, 0, 0, 2, 0, 2,}},
  {{ 0, 0, 0, 0, 0, 2, 2, 0,}},
  {{ 0, 0, 0, 0, 0, 2, 2, 2,}},
  {{ 0, 0, 0, 0, 2, 0, 0, 0,}},
  {{ 0, 0, 0, 0, 2, 0, 0, 2,}},
  {{ 0, 0, 0, 0, 2, 0, 2, 0,}},
  {{ 0, 0, 0, 0, 2, 0, 2, 2,}},
  {{ 0, 0, 0, 0, 2, 2, 0, 0,}},
  {{ 0, 0, 0, 0, 2, 2, 0, 2,}},
  {{ 0, 0, 0, 0, 2, 2, 2, 0,}},
  {{ 0, 0, 0, 0, 2, 2, 2, 2,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 32, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 32, 32, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 32, 0, 32, 0, 0, 0, 0,}},
  {{ 0, 32, 32, 0, 0, 0, 0, 0,}},
  {{ 0, 32, 32, 32, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 0, 0, 32, 0, 0, 0, 0,}},
  {{ 32, 0, 32, 0, 0, 0, 0, 0,}},
  {{ 32, 0, 32, 32, 0, 0, 0, 0,}},
  {{ 32, 32, 0, 0, 0, 0, 0, 0,}},
  {{ 32, 32, 0, 32, 0, 0, 0, 0,}},
  {{ 32, 32, 32, 0, 0, 0, 0, 0,}},
  {{ 32, 32, 32, 32, 0, 0, 0, 0,}},
 },
 {
  {{ 0, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 0, 2, 0, 0, 0, 0,}},
  {{ 0, 0, 2, 0, 0, 0, 0, 0,}},
  {{ 0, 0, 2, 2, 0, 0, 0, 0,}},
  {{ 0, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 0, 2, 0, 2, 0, 0, 0, 0,}},
  {{ 0, 2, 2, 0, 0, 0, 0, 0,}},
  {{ 0, 2, 2, 2, 0, 0, 0, 0,}},
  {{ 2, 0, 0, 0, 0, 0, 0, 0,}},
  {{ 2, 0, 0, 2, 0, 0, 0, 0,}},
  {{ 2, 0, 2, 0, 0, 0, 0, 0,}},
  {{ 2, 0, 2, 2, 0, 0, 0, 0,}},
  {{ 2, 2, 0, 0, 0, 0, 0, 0,}},
  {{ 2, 2, 0, 2, 0, 0, 0, 0,}},
  {{ 2, 2, 2, 0, 0, 0, 0, 0,}},
  {{ 2, 2, 2, 2, 0, 0, 0, 0,}},
 },
};
static void
permute(const unsigned char *cp, C_block *out, register const C_block *p, int chars_in)
{
 register long D0, D1;
 register const C_block *tp;
 register int t;

 ((D0) = 0, (D1) = 0);
 do {
  t = *cp++;
  tp = &p[t&0xf]; ((D0) |= (*tp).b32.i0, (D1) |= (*tp).b32.i1); p += (1<<(1<<2));
  tp = &p[t>>4]; ((D0) |= (*tp).b32.i0, (D1) |= (*tp).b32.i1); p += (1<<(1<<2));
 } while (--chars_in > 0);
 ((*out).b32.i0 = (D0), (*out).b32.i1 = (D1));
}
static const unsigned char Rotates[] = {
 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1,
};
static const unsigned char itoa64[] =
 "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


static const unsigned char a64toi[256] = {
 ((0x00 +0x00 +0 +0) == '.' ? 0 : (0x00 +0x00 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= '9') ? (0x00 +0x00 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= 'Z') ? (0x00 +0x00 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= 'z') ? (0x00 +0x00 +0 +0) - 'a' + 38 : 0), ((0x00 +0x00 +0 +1) == '.' ? 0 : (0x00 +0x00 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= '9') ? (0x00 +0x00 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= 'Z') ? (0x00 +0x00 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= 'z') ? (0x00 +0x00 +0 +1) - 'a' + 38 : 0), ((0x00 +0x00 +0 +2) == '.' ? 0 : (0x00 +0x00 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= '9') ? (0x00 +0x00 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= 'Z') ? (0x00 +0x00 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= 'z') ? (0x00 +0x00 +0 +2) - 'a' + 38 : 0), ((0x00 +0x00 +0 +3) == '.' ? 0 : (0x00 +0x00 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= '9') ? (0x00 +0x00 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= 'Z') ? (0x00 +0x00 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= 'z') ? (0x00 +0x00 +0 +3) - 'a' + 38 : 0), ((0x00 +0x00 +4 +0) == '.' ? 0 : (0x00 +0x00 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= '9') ? (0x00 +0x00 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= 'Z') ? (0x00 +0x00 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= 'z') ? (0x00 +0x00 +4 +0) - 'a' + 38 : 0), ((0x00 +0x00 +4 +1) == '.' ? 0 : (0x00 +0x00 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= '9') ? (0x00 +0x00 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= 'Z') ? (0x00 +0x00 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= 'z') ? (0x00 +0x00 +4 +1) - 'a' + 38 : 0), ((0x00 +0x00 +4 +2) == '.' ? 0 : (0x00 +0x00 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= '9') ? (0x00 +0x00 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= 'Z') ? (0x00 +0x00 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= 'z') ? (0x00 +0x00 +4 +2) - 'a' + 38 : 0), ((0x00 +0x00 +4 +3) == '.' ? 0 : (0x00 +0x00 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= '9') ? (0x00 +0x00 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= 'Z') ? (0x00 +0x00 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= 'z') ? (0x00 +0x00 +4 +3) - 'a' + 38 : 0), ((0x00 +0x00 +8 +0) == '.' ? 0 : (0x00 +0x00 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= '9') ? (0x00 +0x00 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= 'Z') ? (0x00 +0x00 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= 'z') ? (0x00 +0x00 +8 +0) - 'a' + 38 : 0), ((0x00 +0x00 +8 +1) == '.' ? 0 : (0x00 +0x00 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= '9') ? (0x00 +0x00 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= 'Z') ? (0x00 +0x00 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= 'z') ? (0x00 +0x00 +8 +1) - 'a' + 38 : 0), ((0x00 +0x00 +8 +2) == '.' ? 0 : (0x00 +0x00 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= '9') ? (0x00 +0x00 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= 'Z') ? (0x00 +0x00 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= 'z') ? (0x00 +0x00 +8 +2) - 'a' + 38 : 0), ((0x00 +0x00 +8 +3) == '.' ? 0 : (0x00 +0x00 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= '9') ? (0x00 +0x00 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= 'Z') ? (0x00 +0x00 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= 'z') ? (0x00 +0x00 +8 +3) - 'a' + 38 : 0), ((0x00 +0x00 +12 +0) == '.' ? 0 : (0x00 +0x00 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= '9') ? (0x00 +0x00 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= 'Z') ? (0x00 +0x00 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= 'z') ? (0x00 +0x00 +12 +0) - 'a' + 38 : 0), ((0x00 +0x00 +12 +1) == '.' ? 0 : (0x00 +0x00 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= '9') ? (0x00 +0x00 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= 'Z') ? (0x00 +0x00 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= 'z') ? (0x00 +0x00 +12 +1) - 'a' + 38 : 0), ((0x00 +0x00 +12 +2) == '.' ? 0 : (0x00 +0x00 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= '9') ? (0x00 +0x00 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= 'Z') ? (0x00 +0x00 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= 'z') ? (0x00 +0x00 +12 +2) - 'a' + 38 : 0), ((0x00 +0x00 +12 +3) == '.' ? 0 : (0x00 +0x00 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= '9') ? (0x00 +0x00 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= 'Z') ? (0x00 +0x00 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= 'z') ? (0x00 +0x00 +12 +3) - 'a' + 38 : 0), ((0x00 +0x10 +0 +0) == '.' ? 0 : (0x00 +0x10 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= '9') ? (0x00 +0x10 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= 'Z') ? (0x00 +0x10 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= 'z') ? (0x00 +0x10 +0 +0) - 'a' + 38 : 0), ((0x00 +0x10 +0 +1) == '.' ? 0 : (0x00 +0x10 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= '9') ? (0x00 +0x10 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= 'Z') ? (0x00 +0x10 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= 'z') ? (0x00 +0x10 +0 +1) - 'a' + 38 : 0), ((0x00 +0x10 +0 +2) == '.' ? 0 : (0x00 +0x10 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= '9') ? (0x00 +0x10 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= 'Z') ? (0x00 +0x10 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= 'z') ? (0x00 +0x10 +0 +2) - 'a' + 38 : 0), ((0x00 +0x10 +0 +3) == '.' ? 0 : (0x00 +0x10 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= '9') ? (0x00 +0x10 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= 'Z') ? (0x00 +0x10 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= 'z') ? (0x00 +0x10 +0 +3) - 'a' + 38 : 0), ((0x00 +0x10 +4 +0) == '.' ? 0 : (0x00 +0x10 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= '9') ? (0x00 +0x10 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= 'Z') ? (0x00 +0x10 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= 'z') ? (0x00 +0x10 +4 +0) - 'a' + 38 : 0), ((0x00 +0x10 +4 +1) == '.' ? 0 : (0x00 +0x10 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= '9') ? (0x00 +0x10 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= 'Z') ? (0x00 +0x10 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= 'z') ? (0x00 +0x10 +4 +1) - 'a' + 38 : 0), ((0x00 +0x10 +4 +2) == '.' ? 0 : (0x00 +0x10 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= '9') ? (0x00 +0x10 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= 'Z') ? (0x00 +0x10 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= 'z') ? (0x00 +0x10 +4 +2) - 'a' + 38 : 0), ((0x00 +0x10 +4 +3) == '.' ? 0 : (0x00 +0x10 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= '9') ? (0x00 +0x10 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= 'Z') ? (0x00 +0x10 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= 'z') ? (0x00 +0x10 +4 +3) - 'a' + 38 : 0), ((0x00 +0x10 +8 +0) == '.' ? 0 : (0x00 +0x10 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= '9') ? (0x00 +0x10 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= 'Z') ? (0x00 +0x10 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= 'z') ? (0x00 +0x10 +8 +0) - 'a' + 38 : 0), ((0x00 +0x10 +8 +1) == '.' ? 0 : (0x00 +0x10 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= '9') ? (0x00 +0x10 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= 'Z') ? (0x00 +0x10 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= 'z') ? (0x00 +0x10 +8 +1) - 'a' + 38 : 0), ((0x00 +0x10 +8 +2) == '.' ? 0 : (0x00 +0x10 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= '9') ? (0x00 +0x10 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= 'Z') ? (0x00 +0x10 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= 'z') ? (0x00 +0x10 +8 +2) - 'a' + 38 : 0), ((0x00 +0x10 +8 +3) == '.' ? 0 : (0x00 +0x10 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= '9') ? (0x00 +0x10 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= 'Z') ? (0x00 +0x10 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= 'z') ? (0x00 +0x10 +8 +3) - 'a' + 38 : 0), ((0x00 +0x10 +12 +0) == '.' ? 0 : (0x00 +0x10 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= '9') ? (0x00 +0x10 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= 'Z') ? (0x00 +0x10 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= 'z') ? (0x00 +0x10 +12 +0) - 'a' + 38 : 0), ((0x00 +0x10 +12 +1) == '.' ? 0 : (0x00 +0x10 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= '9') ? (0x00 +0x10 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= 'Z') ? (0x00 +0x10 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= 'z') ? (0x00 +0x10 +12 +1) - 'a' + 38 : 0), ((0x00 +0x10 +12 +2) == '.' ? 0 : (0x00 +0x10 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= '9') ? (0x00 +0x10 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= 'Z') ? (0x00 +0x10 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= 'z') ? (0x00 +0x10 +12 +2) - 'a' + 38 : 0), ((0x00 +0x10 +12 +3) == '.' ? 0 : (0x00 +0x10 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= '9') ? (0x00 +0x10 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= 'Z') ? (0x00 +0x10 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= 'z') ? (0x00 +0x10 +12 +3) - 'a' + 38 : 0), ((0x00 +0x20 +0 +0) == '.' ? 0 : (0x00 +0x20 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= '9') ? (0x00 +0x20 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= 'Z') ? (0x00 +0x20 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= 'z') ? (0x00 +0x20 +0 +0) - 'a' + 38 : 0), ((0x00 +0x20 +0 +1) == '.' ? 0 : (0x00 +0x20 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= '9') ? (0x00 +0x20 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= 'Z') ? (0x00 +0x20 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= 'z') ? (0x00 +0x20 +0 +1) - 'a' + 38 : 0), ((0x00 +0x20 +0 +2) == '.' ? 0 : (0x00 +0x20 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= '9') ? (0x00 +0x20 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= 'Z') ? (0x00 +0x20 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= 'z') ? (0x00 +0x20 +0 +2) - 'a' + 38 : 0), ((0x00 +0x20 +0 +3) == '.' ? 0 : (0x00 +0x20 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= '9') ? (0x00 +0x20 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= 'Z') ? (0x00 +0x20 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= 'z') ? (0x00 +0x20 +0 +3) - 'a' + 38 : 0), ((0x00 +0x20 +4 +0) == '.' ? 0 : (0x00 +0x20 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= '9') ? (0x00 +0x20 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= 'Z') ? (0x00 +0x20 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= 'z') ? (0x00 +0x20 +4 +0) - 'a' + 38 : 0), ((0x00 +0x20 +4 +1) == '.' ? 0 : (0x00 +0x20 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= '9') ? (0x00 +0x20 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= 'Z') ? (0x00 +0x20 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= 'z') ? (0x00 +0x20 +4 +1) - 'a' + 38 : 0), ((0x00 +0x20 +4 +2) == '.' ? 0 : (0x00 +0x20 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= '9') ? (0x00 +0x20 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= 'Z') ? (0x00 +0x20 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= 'z') ? (0x00 +0x20 +4 +2) - 'a' + 38 : 0), ((0x00 +0x20 +4 +3) == '.' ? 0 : (0x00 +0x20 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= '9') ? (0x00 +0x20 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= 'Z') ? (0x00 +0x20 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= 'z') ? (0x00 +0x20 +4 +3) - 'a' + 38 : 0), ((0x00 +0x20 +8 +0) == '.' ? 0 : (0x00 +0x20 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= '9') ? (0x00 +0x20 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= 'Z') ? (0x00 +0x20 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= 'z') ? (0x00 +0x20 +8 +0) - 'a' + 38 : 0), ((0x00 +0x20 +8 +1) == '.' ? 0 : (0x00 +0x20 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= '9') ? (0x00 +0x20 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= 'Z') ? (0x00 +0x20 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= 'z') ? (0x00 +0x20 +8 +1) - 'a' + 38 : 0), ((0x00 +0x20 +8 +2) == '.' ? 0 : (0x00 +0x20 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= '9') ? (0x00 +0x20 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= 'Z') ? (0x00 +0x20 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= 'z') ? (0x00 +0x20 +8 +2) - 'a' + 38 : 0), ((0x00 +0x20 +8 +3) == '.' ? 0 : (0x00 +0x20 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= '9') ? (0x00 +0x20 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= 'Z') ? (0x00 +0x20 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= 'z') ? (0x00 +0x20 +8 +3) - 'a' + 38 : 0), ((0x00 +0x20 +12 +0) == '.' ? 0 : (0x00 +0x20 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= '9') ? (0x00 +0x20 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= 'Z') ? (0x00 +0x20 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= 'z') ? (0x00 +0x20 +12 +0) - 'a' + 38 : 0), ((0x00 +0x20 +12 +1) == '.' ? 0 : (0x00 +0x20 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= '9') ? (0x00 +0x20 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= 'Z') ? (0x00 +0x20 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= 'z') ? (0x00 +0x20 +12 +1) - 'a' + 38 : 0), ((0x00 +0x20 +12 +2) == '.' ? 0 : (0x00 +0x20 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= '9') ? (0x00 +0x20 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= 'Z') ? (0x00 +0x20 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= 'z') ? (0x00 +0x20 +12 +2) - 'a' + 38 : 0), ((0x00 +0x20 +12 +3) == '.' ? 0 : (0x00 +0x20 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= '9') ? (0x00 +0x20 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= 'Z') ? (0x00 +0x20 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= 'z') ? (0x00 +0x20 +12 +3) - 'a' + 38 : 0), ((0x00 +0x30 +0 +0) == '.' ? 0 : (0x00 +0x30 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= '9') ? (0x00 +0x30 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= 'Z') ? (0x00 +0x30 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= 'z') ? (0x00 +0x30 +0 +0) - 'a' + 38 : 0), ((0x00 +0x30 +0 +1) == '.' ? 0 : (0x00 +0x30 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= '9') ? (0x00 +0x30 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= 'Z') ? (0x00 +0x30 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= 'z') ? (0x00 +0x30 +0 +1) - 'a' + 38 : 0), ((0x00 +0x30 +0 +2) == '.' ? 0 : (0x00 +0x30 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= '9') ? (0x00 +0x30 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= 'Z') ? (0x00 +0x30 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= 'z') ? (0x00 +0x30 +0 +2) - 'a' + 38 : 0), ((0x00 +0x30 +0 +3) == '.' ? 0 : (0x00 +0x30 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= '9') ? (0x00 +0x30 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= 'Z') ? (0x00 +0x30 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= 'z') ? (0x00 +0x30 +0 +3) - 'a' + 38 : 0), ((0x00 +0x30 +4 +0) == '.' ? 0 : (0x00 +0x30 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= '9') ? (0x00 +0x30 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= 'Z') ? (0x00 +0x30 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= 'z') ? (0x00 +0x30 +4 +0) - 'a' + 38 : 0), ((0x00 +0x30 +4 +1) == '.' ? 0 : (0x00 +0x30 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= '9') ? (0x00 +0x30 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= 'Z') ? (0x00 +0x30 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= 'z') ? (0x00 +0x30 +4 +1) - 'a' + 38 : 0), ((0x00 +0x30 +4 +2) == '.' ? 0 : (0x00 +0x30 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= '9') ? (0x00 +0x30 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= 'Z') ? (0x00 +0x30 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= 'z') ? (0x00 +0x30 +4 +2) - 'a' + 38 : 0), ((0x00 +0x30 +4 +3) == '.' ? 0 : (0x00 +0x30 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= '9') ? (0x00 +0x30 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= 'Z') ? (0x00 +0x30 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= 'z') ? (0x00 +0x30 +4 +3) - 'a' + 38 : 0), ((0x00 +0x30 +8 +0) == '.' ? 0 : (0x00 +0x30 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= '9') ? (0x00 +0x30 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= 'Z') ? (0x00 +0x30 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= 'z') ? (0x00 +0x30 +8 +0) - 'a' + 38 : 0), ((0x00 +0x30 +8 +1) == '.' ? 0 : (0x00 +0x30 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= '9') ? (0x00 +0x30 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= 'Z') ? (0x00 +0x30 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= 'z') ? (0x00 +0x30 +8 +1) - 'a' + 38 : 0), ((0x00 +0x30 +8 +2) == '.' ? 0 : (0x00 +0x30 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= '9') ? (0x00 +0x30 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= 'Z') ? (0x00 +0x30 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= 'z') ? (0x00 +0x30 +8 +2) - 'a' + 38 : 0), ((0x00 +0x30 +8 +3) == '.' ? 0 : (0x00 +0x30 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= '9') ? (0x00 +0x30 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= 'Z') ? (0x00 +0x30 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= 'z') ? (0x00 +0x30 +8 +3) - 'a' + 38 : 0), ((0x00 +0x30 +12 +0) == '.' ? 0 : (0x00 +0x30 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= '9') ? (0x00 +0x30 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= 'Z') ? (0x00 +0x30 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= 'z') ? (0x00 +0x30 +12 +0) - 'a' + 38 : 0), ((0x00 +0x30 +12 +1) == '.' ? 0 : (0x00 +0x30 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= '9') ? (0x00 +0x30 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= 'Z') ? (0x00 +0x30 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= 'z') ? (0x00 +0x30 +12 +1) - 'a' + 38 : 0), ((0x00 +0x30 +12 +2) == '.' ? 0 : (0x00 +0x30 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= '9') ? (0x00 +0x30 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= 'Z') ? (0x00 +0x30 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= 'z') ? (0x00 +0x30 +12 +2) - 'a' + 38 : 0), ((0x00 +0x30 +12 +3) == '.' ? 0 : (0x00 +0x30 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= '9') ? (0x00 +0x30 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= 'Z') ? (0x00 +0x30 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= 'z') ? (0x00 +0x30 +12 +3) - 'a' + 38 : 0), ((0x40 +0x00 +0 +0) == '.' ? 0 : (0x40 +0x00 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= '9') ? (0x40 +0x00 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= 'Z') ? (0x40 +0x00 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= 'z') ? (0x40 +0x00 +0 +0) - 'a' + 38 : 0), ((0x40 +0x00 +0 +1) == '.' ? 0 : (0x40 +0x00 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= '9') ? (0x40 +0x00 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= 'Z') ? (0x40 +0x00 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= 'z') ? (0x40 +0x00 +0 +1) - 'a' + 38 : 0), ((0x40 +0x00 +0 +2) == '.' ? 0 : (0x40 +0x00 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= '9') ? (0x40 +0x00 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= 'Z') ? (0x40 +0x00 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= 'z') ? (0x40 +0x00 +0 +2) - 'a' + 38 : 0), ((0x40 +0x00 +0 +3) == '.' ? 0 : (0x40 +0x00 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= '9') ? (0x40 +0x00 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= 'Z') ? (0x40 +0x00 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= 'z') ? (0x40 +0x00 +0 +3) - 'a' + 38 : 0), ((0x40 +0x00 +4 +0) == '.' ? 0 : (0x40 +0x00 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= '9') ? (0x40 +0x00 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= 'Z') ? (0x40 +0x00 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= 'z') ? (0x40 +0x00 +4 +0) - 'a' + 38 : 0), ((0x40 +0x00 +4 +1) == '.' ? 0 : (0x40 +0x00 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= '9') ? (0x40 +0x00 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= 'Z') ? (0x40 +0x00 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= 'z') ? (0x40 +0x00 +4 +1) - 'a' + 38 : 0), ((0x40 +0x00 +4 +2) == '.' ? 0 : (0x40 +0x00 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= '9') ? (0x40 +0x00 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= 'Z') ? (0x40 +0x00 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= 'z') ? (0x40 +0x00 +4 +2) - 'a' + 38 : 0), ((0x40 +0x00 +4 +3) == '.' ? 0 : (0x40 +0x00 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= '9') ? (0x40 +0x00 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= 'Z') ? (0x40 +0x00 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= 'z') ? (0x40 +0x00 +4 +3) - 'a' + 38 : 0), ((0x40 +0x00 +8 +0) == '.' ? 0 : (0x40 +0x00 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= '9') ? (0x40 +0x00 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= 'Z') ? (0x40 +0x00 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= 'z') ? (0x40 +0x00 +8 +0) - 'a' + 38 : 0), ((0x40 +0x00 +8 +1) == '.' ? 0 : (0x40 +0x00 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= '9') ? (0x40 +0x00 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= 'Z') ? (0x40 +0x00 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= 'z') ? (0x40 +0x00 +8 +1) - 'a' + 38 : 0), ((0x40 +0x00 +8 +2) == '.' ? 0 : (0x40 +0x00 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= '9') ? (0x40 +0x00 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= 'Z') ? (0x40 +0x00 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= 'z') ? (0x40 +0x00 +8 +2) - 'a' + 38 : 0), ((0x40 +0x00 +8 +3) == '.' ? 0 : (0x40 +0x00 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= '9') ? (0x40 +0x00 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= 'Z') ? (0x40 +0x00 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= 'z') ? (0x40 +0x00 +8 +3) - 'a' + 38 : 0), ((0x40 +0x00 +12 +0) == '.' ? 0 : (0x40 +0x00 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= '9') ? (0x40 +0x00 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= 'Z') ? (0x40 +0x00 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= 'z') ? (0x40 +0x00 +12 +0) - 'a' + 38 : 0), ((0x40 +0x00 +12 +1) == '.' ? 0 : (0x40 +0x00 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= '9') ? (0x40 +0x00 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= 'Z') ? (0x40 +0x00 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= 'z') ? (0x40 +0x00 +12 +1) - 'a' + 38 : 0), ((0x40 +0x00 +12 +2) == '.' ? 0 : (0x40 +0x00 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= '9') ? (0x40 +0x00 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= 'Z') ? (0x40 +0x00 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= 'z') ? (0x40 +0x00 +12 +2) - 'a' + 38 : 0), ((0x40 +0x00 +12 +3) == '.' ? 0 : (0x40 +0x00 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= '9') ? (0x40 +0x00 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= 'Z') ? (0x40 +0x00 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= 'z') ? (0x40 +0x00 +12 +3) - 'a' + 38 : 0), ((0x40 +0x10 +0 +0) == '.' ? 0 : (0x40 +0x10 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= '9') ? (0x40 +0x10 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= 'Z') ? (0x40 +0x10 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= 'z') ? (0x40 +0x10 +0 +0) - 'a' + 38 : 0), ((0x40 +0x10 +0 +1) == '.' ? 0 : (0x40 +0x10 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= '9') ? (0x40 +0x10 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= 'Z') ? (0x40 +0x10 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= 'z') ? (0x40 +0x10 +0 +1) - 'a' + 38 : 0), ((0x40 +0x10 +0 +2) == '.' ? 0 : (0x40 +0x10 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= '9') ? (0x40 +0x10 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= 'Z') ? (0x40 +0x10 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= 'z') ? (0x40 +0x10 +0 +2) - 'a' + 38 : 0), ((0x40 +0x10 +0 +3) == '.' ? 0 : (0x40 +0x10 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= '9') ? (0x40 +0x10 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= 'Z') ? (0x40 +0x10 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= 'z') ? (0x40 +0x10 +0 +3) - 'a' + 38 : 0), ((0x40 +0x10 +4 +0) == '.' ? 0 : (0x40 +0x10 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= '9') ? (0x40 +0x10 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= 'Z') ? (0x40 +0x10 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= 'z') ? (0x40 +0x10 +4 +0) - 'a' + 38 : 0), ((0x40 +0x10 +4 +1) == '.' ? 0 : (0x40 +0x10 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= '9') ? (0x40 +0x10 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= 'Z') ? (0x40 +0x10 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= 'z') ? (0x40 +0x10 +4 +1) - 'a' + 38 : 0), ((0x40 +0x10 +4 +2) == '.' ? 0 : (0x40 +0x10 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= '9') ? (0x40 +0x10 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= 'Z') ? (0x40 +0x10 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= 'z') ? (0x40 +0x10 +4 +2) - 'a' + 38 : 0), ((0x40 +0x10 +4 +3) == '.' ? 0 : (0x40 +0x10 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= '9') ? (0x40 +0x10 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= 'Z') ? (0x40 +0x10 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= 'z') ? (0x40 +0x10 +4 +3) - 'a' + 38 : 0), ((0x40 +0x10 +8 +0) == '.' ? 0 : (0x40 +0x10 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= '9') ? (0x40 +0x10 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= 'Z') ? (0x40 +0x10 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= 'z') ? (0x40 +0x10 +8 +0) - 'a' + 38 : 0), ((0x40 +0x10 +8 +1) == '.' ? 0 : (0x40 +0x10 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= '9') ? (0x40 +0x10 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= 'Z') ? (0x40 +0x10 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= 'z') ? (0x40 +0x10 +8 +1) - 'a' + 38 : 0), ((0x40 +0x10 +8 +2) == '.' ? 0 : (0x40 +0x10 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= '9') ? (0x40 +0x10 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= 'Z') ? (0x40 +0x10 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= 'z') ? (0x40 +0x10 +8 +2) - 'a' + 38 : 0), ((0x40 +0x10 +8 +3) == '.' ? 0 : (0x40 +0x10 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= '9') ? (0x40 +0x10 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= 'Z') ? (0x40 +0x10 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= 'z') ? (0x40 +0x10 +8 +3) - 'a' + 38 : 0), ((0x40 +0x10 +12 +0) == '.' ? 0 : (0x40 +0x10 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= '9') ? (0x40 +0x10 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= 'Z') ? (0x40 +0x10 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= 'z') ? (0x40 +0x10 +12 +0) - 'a' + 38 : 0), ((0x40 +0x10 +12 +1) == '.' ? 0 : (0x40 +0x10 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= '9') ? (0x40 +0x10 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= 'Z') ? (0x40 +0x10 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= 'z') ? (0x40 +0x10 +12 +1) - 'a' + 38 : 0), ((0x40 +0x10 +12 +2) == '.' ? 0 : (0x40 +0x10 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= '9') ? (0x40 +0x10 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= 'Z') ? (0x40 +0x10 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= 'z') ? (0x40 +0x10 +12 +2) - 'a' + 38 : 0), ((0x40 +0x10 +12 +3) == '.' ? 0 : (0x40 +0x10 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= '9') ? (0x40 +0x10 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= 'Z') ? (0x40 +0x10 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= 'z') ? (0x40 +0x10 +12 +3) - 'a' + 38 : 0), ((0x40 +0x20 +0 +0) == '.' ? 0 : (0x40 +0x20 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= '9') ? (0x40 +0x20 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= 'Z') ? (0x40 +0x20 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= 'z') ? (0x40 +0x20 +0 +0) - 'a' + 38 : 0), ((0x40 +0x20 +0 +1) == '.' ? 0 : (0x40 +0x20 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= '9') ? (0x40 +0x20 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= 'Z') ? (0x40 +0x20 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= 'z') ? (0x40 +0x20 +0 +1) - 'a' + 38 : 0), ((0x40 +0x20 +0 +2) == '.' ? 0 : (0x40 +0x20 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= '9') ? (0x40 +0x20 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= 'Z') ? (0x40 +0x20 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= 'z') ? (0x40 +0x20 +0 +2) - 'a' + 38 : 0), ((0x40 +0x20 +0 +3) == '.' ? 0 : (0x40 +0x20 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= '9') ? (0x40 +0x20 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= 'Z') ? (0x40 +0x20 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= 'z') ? (0x40 +0x20 +0 +3) - 'a' + 38 : 0), ((0x40 +0x20 +4 +0) == '.' ? 0 : (0x40 +0x20 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= '9') ? (0x40 +0x20 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= 'Z') ? (0x40 +0x20 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= 'z') ? (0x40 +0x20 +4 +0) - 'a' + 38 : 0), ((0x40 +0x20 +4 +1) == '.' ? 0 : (0x40 +0x20 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= '9') ? (0x40 +0x20 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= 'Z') ? (0x40 +0x20 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= 'z') ? (0x40 +0x20 +4 +1) - 'a' + 38 : 0), ((0x40 +0x20 +4 +2) == '.' ? 0 : (0x40 +0x20 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= '9') ? (0x40 +0x20 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= 'Z') ? (0x40 +0x20 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= 'z') ? (0x40 +0x20 +4 +2) - 'a' + 38 : 0), ((0x40 +0x20 +4 +3) == '.' ? 0 : (0x40 +0x20 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= '9') ? (0x40 +0x20 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= 'Z') ? (0x40 +0x20 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= 'z') ? (0x40 +0x20 +4 +3) - 'a' + 38 : 0), ((0x40 +0x20 +8 +0) == '.' ? 0 : (0x40 +0x20 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= '9') ? (0x40 +0x20 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= 'Z') ? (0x40 +0x20 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= 'z') ? (0x40 +0x20 +8 +0) - 'a' + 38 : 0), ((0x40 +0x20 +8 +1) == '.' ? 0 : (0x40 +0x20 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= '9') ? (0x40 +0x20 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= 'Z') ? (0x40 +0x20 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= 'z') ? (0x40 +0x20 +8 +1) - 'a' + 38 : 0), ((0x40 +0x20 +8 +2) == '.' ? 0 : (0x40 +0x20 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= '9') ? (0x40 +0x20 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= 'Z') ? (0x40 +0x20 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= 'z') ? (0x40 +0x20 +8 +2) - 'a' + 38 : 0), ((0x40 +0x20 +8 +3) == '.' ? 0 : (0x40 +0x20 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= '9') ? (0x40 +0x20 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= 'Z') ? (0x40 +0x20 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= 'z') ? (0x40 +0x20 +8 +3) - 'a' + 38 : 0), ((0x40 +0x20 +12 +0) == '.' ? 0 : (0x40 +0x20 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= '9') ? (0x40 +0x20 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= 'Z') ? (0x40 +0x20 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= 'z') ? (0x40 +0x20 +12 +0) - 'a' + 38 : 0), ((0x40 +0x20 +12 +1) == '.' ? 0 : (0x40 +0x20 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= '9') ? (0x40 +0x20 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= 'Z') ? (0x40 +0x20 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= 'z') ? (0x40 +0x20 +12 +1) - 'a' + 38 : 0), ((0x40 +0x20 +12 +2) == '.' ? 0 : (0x40 +0x20 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= '9') ? (0x40 +0x20 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= 'Z') ? (0x40 +0x20 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= 'z') ? (0x40 +0x20 +12 +2) - 'a' + 38 : 0), ((0x40 +0x20 +12 +3) == '.' ? 0 : (0x40 +0x20 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= '9') ? (0x40 +0x20 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= 'Z') ? (0x40 +0x20 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= 'z') ? (0x40 +0x20 +12 +3) - 'a' + 38 : 0), ((0x40 +0x30 +0 +0) == '.' ? 0 : (0x40 +0x30 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= '9') ? (0x40 +0x30 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= 'Z') ? (0x40 +0x30 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= 'z') ? (0x40 +0x30 +0 +0) - 'a' + 38 : 0), ((0x40 +0x30 +0 +1) == '.' ? 0 : (0x40 +0x30 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= '9') ? (0x40 +0x30 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= 'Z') ? (0x40 +0x30 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= 'z') ? (0x40 +0x30 +0 +1) - 'a' + 38 : 0), ((0x40 +0x30 +0 +2) == '.' ? 0 : (0x40 +0x30 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= '9') ? (0x40 +0x30 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= 'Z') ? (0x40 +0x30 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= 'z') ? (0x40 +0x30 +0 +2) - 'a' + 38 : 0), ((0x40 +0x30 +0 +3) == '.' ? 0 : (0x40 +0x30 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= '9') ? (0x40 +0x30 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= 'Z') ? (0x40 +0x30 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= 'z') ? (0x40 +0x30 +0 +3) - 'a' + 38 : 0), ((0x40 +0x30 +4 +0) == '.' ? 0 : (0x40 +0x30 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= '9') ? (0x40 +0x30 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= 'Z') ? (0x40 +0x30 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= 'z') ? (0x40 +0x30 +4 +0) - 'a' + 38 : 0), ((0x40 +0x30 +4 +1) == '.' ? 0 : (0x40 +0x30 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= '9') ? (0x40 +0x30 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= 'Z') ? (0x40 +0x30 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= 'z') ? (0x40 +0x30 +4 +1) - 'a' + 38 : 0), ((0x40 +0x30 +4 +2) == '.' ? 0 : (0x40 +0x30 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= '9') ? (0x40 +0x30 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= 'Z') ? (0x40 +0x30 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= 'z') ? (0x40 +0x30 +4 +2) - 'a' + 38 : 0), ((0x40 +0x30 +4 +3) == '.' ? 0 : (0x40 +0x30 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= '9') ? (0x40 +0x30 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= 'Z') ? (0x40 +0x30 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= 'z') ? (0x40 +0x30 +4 +3) - 'a' + 38 : 0), ((0x40 +0x30 +8 +0) == '.' ? 0 : (0x40 +0x30 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= '9') ? (0x40 +0x30 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= 'Z') ? (0x40 +0x30 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= 'z') ? (0x40 +0x30 +8 +0) - 'a' + 38 : 0), ((0x40 +0x30 +8 +1) == '.' ? 0 : (0x40 +0x30 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= '9') ? (0x40 +0x30 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= 'Z') ? (0x40 +0x30 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= 'z') ? (0x40 +0x30 +8 +1) - 'a' + 38 : 0), ((0x40 +0x30 +8 +2) == '.' ? 0 : (0x40 +0x30 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= '9') ? (0x40 +0x30 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= 'Z') ? (0x40 +0x30 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= 'z') ? (0x40 +0x30 +8 +2) - 'a' + 38 : 0), ((0x40 +0x30 +8 +3) == '.' ? 0 : (0x40 +0x30 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= '9') ? (0x40 +0x30 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= 'Z') ? (0x40 +0x30 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= 'z') ? (0x40 +0x30 +8 +3) - 'a' + 38 : 0), ((0x40 +0x30 +12 +0) == '.' ? 0 : (0x40 +0x30 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= '9') ? (0x40 +0x30 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= 'Z') ? (0x40 +0x30 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= 'z') ? (0x40 +0x30 +12 +0) - 'a' + 38 : 0), ((0x40 +0x30 +12 +1) == '.' ? 0 : (0x40 +0x30 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= '9') ? (0x40 +0x30 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= 'Z') ? (0x40 +0x30 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= 'z') ? (0x40 +0x30 +12 +1) - 'a' + 38 : 0), ((0x40 +0x30 +12 +2) == '.' ? 0 : (0x40 +0x30 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= '9') ? (0x40 +0x30 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= 'Z') ? (0x40 +0x30 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= 'z') ? (0x40 +0x30 +12 +2) - 'a' + 38 : 0), ((0x40 +0x30 +12 +3) == '.' ? 0 : (0x40 +0x30 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= '9') ? (0x40 +0x30 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= 'Z') ? (0x40 +0x30 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= 'z') ? (0x40 +0x30 +12 +3) - 'a' + 38 : 0),
 ((0x00 +0x00 +0 +0) == '.' ? 0 : (0x00 +0x00 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= '9') ? (0x00 +0x00 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= 'Z') ? (0x00 +0x00 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +0) && (0x00 +0x00 +0 +0) <= 'z') ? (0x00 +0x00 +0 +0) - 'a' + 38 : 0), ((0x00 +0x00 +0 +1) == '.' ? 0 : (0x00 +0x00 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= '9') ? (0x00 +0x00 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= 'Z') ? (0x00 +0x00 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +1) && (0x00 +0x00 +0 +1) <= 'z') ? (0x00 +0x00 +0 +1) - 'a' + 38 : 0), ((0x00 +0x00 +0 +2) == '.' ? 0 : (0x00 +0x00 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= '9') ? (0x00 +0x00 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= 'Z') ? (0x00 +0x00 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +2) && (0x00 +0x00 +0 +2) <= 'z') ? (0x00 +0x00 +0 +2) - 'a' + 38 : 0), ((0x00 +0x00 +0 +3) == '.' ? 0 : (0x00 +0x00 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= '9') ? (0x00 +0x00 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= 'Z') ? (0x00 +0x00 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +0 +3) && (0x00 +0x00 +0 +3) <= 'z') ? (0x00 +0x00 +0 +3) - 'a' + 38 : 0), ((0x00 +0x00 +4 +0) == '.' ? 0 : (0x00 +0x00 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= '9') ? (0x00 +0x00 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= 'Z') ? (0x00 +0x00 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +0) && (0x00 +0x00 +4 +0) <= 'z') ? (0x00 +0x00 +4 +0) - 'a' + 38 : 0), ((0x00 +0x00 +4 +1) == '.' ? 0 : (0x00 +0x00 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= '9') ? (0x00 +0x00 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= 'Z') ? (0x00 +0x00 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +1) && (0x00 +0x00 +4 +1) <= 'z') ? (0x00 +0x00 +4 +1) - 'a' + 38 : 0), ((0x00 +0x00 +4 +2) == '.' ? 0 : (0x00 +0x00 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= '9') ? (0x00 +0x00 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= 'Z') ? (0x00 +0x00 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +2) && (0x00 +0x00 +4 +2) <= 'z') ? (0x00 +0x00 +4 +2) - 'a' + 38 : 0), ((0x00 +0x00 +4 +3) == '.' ? 0 : (0x00 +0x00 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= '9') ? (0x00 +0x00 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= 'Z') ? (0x00 +0x00 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +4 +3) && (0x00 +0x00 +4 +3) <= 'z') ? (0x00 +0x00 +4 +3) - 'a' + 38 : 0), ((0x00 +0x00 +8 +0) == '.' ? 0 : (0x00 +0x00 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= '9') ? (0x00 +0x00 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= 'Z') ? (0x00 +0x00 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +0) && (0x00 +0x00 +8 +0) <= 'z') ? (0x00 +0x00 +8 +0) - 'a' + 38 : 0), ((0x00 +0x00 +8 +1) == '.' ? 0 : (0x00 +0x00 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= '9') ? (0x00 +0x00 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= 'Z') ? (0x00 +0x00 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +1) && (0x00 +0x00 +8 +1) <= 'z') ? (0x00 +0x00 +8 +1) - 'a' + 38 : 0), ((0x00 +0x00 +8 +2) == '.' ? 0 : (0x00 +0x00 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= '9') ? (0x00 +0x00 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= 'Z') ? (0x00 +0x00 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +2) && (0x00 +0x00 +8 +2) <= 'z') ? (0x00 +0x00 +8 +2) - 'a' + 38 : 0), ((0x00 +0x00 +8 +3) == '.' ? 0 : (0x00 +0x00 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= '9') ? (0x00 +0x00 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= 'Z') ? (0x00 +0x00 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +8 +3) && (0x00 +0x00 +8 +3) <= 'z') ? (0x00 +0x00 +8 +3) - 'a' + 38 : 0), ((0x00 +0x00 +12 +0) == '.' ? 0 : (0x00 +0x00 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= '9') ? (0x00 +0x00 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= 'Z') ? (0x00 +0x00 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +0) && (0x00 +0x00 +12 +0) <= 'z') ? (0x00 +0x00 +12 +0) - 'a' + 38 : 0), ((0x00 +0x00 +12 +1) == '.' ? 0 : (0x00 +0x00 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= '9') ? (0x00 +0x00 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= 'Z') ? (0x00 +0x00 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +1) && (0x00 +0x00 +12 +1) <= 'z') ? (0x00 +0x00 +12 +1) - 'a' + 38 : 0), ((0x00 +0x00 +12 +2) == '.' ? 0 : (0x00 +0x00 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= '9') ? (0x00 +0x00 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= 'Z') ? (0x00 +0x00 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +2) && (0x00 +0x00 +12 +2) <= 'z') ? (0x00 +0x00 +12 +2) - 'a' + 38 : 0), ((0x00 +0x00 +12 +3) == '.' ? 0 : (0x00 +0x00 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= '9') ? (0x00 +0x00 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= 'Z') ? (0x00 +0x00 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x00 +12 +3) && (0x00 +0x00 +12 +3) <= 'z') ? (0x00 +0x00 +12 +3) - 'a' + 38 : 0), ((0x00 +0x10 +0 +0) == '.' ? 0 : (0x00 +0x10 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= '9') ? (0x00 +0x10 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= 'Z') ? (0x00 +0x10 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +0) && (0x00 +0x10 +0 +0) <= 'z') ? (0x00 +0x10 +0 +0) - 'a' + 38 : 0), ((0x00 +0x10 +0 +1) == '.' ? 0 : (0x00 +0x10 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= '9') ? (0x00 +0x10 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= 'Z') ? (0x00 +0x10 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +1) && (0x00 +0x10 +0 +1) <= 'z') ? (0x00 +0x10 +0 +1) - 'a' + 38 : 0), ((0x00 +0x10 +0 +2) == '.' ? 0 : (0x00 +0x10 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= '9') ? (0x00 +0x10 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= 'Z') ? (0x00 +0x10 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +2) && (0x00 +0x10 +0 +2) <= 'z') ? (0x00 +0x10 +0 +2) - 'a' + 38 : 0), ((0x00 +0x10 +0 +3) == '.' ? 0 : (0x00 +0x10 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= '9') ? (0x00 +0x10 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= 'Z') ? (0x00 +0x10 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +0 +3) && (0x00 +0x10 +0 +3) <= 'z') ? (0x00 +0x10 +0 +3) - 'a' + 38 : 0), ((0x00 +0x10 +4 +0) == '.' ? 0 : (0x00 +0x10 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= '9') ? (0x00 +0x10 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= 'Z') ? (0x00 +0x10 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +0) && (0x00 +0x10 +4 +0) <= 'z') ? (0x00 +0x10 +4 +0) - 'a' + 38 : 0), ((0x00 +0x10 +4 +1) == '.' ? 0 : (0x00 +0x10 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= '9') ? (0x00 +0x10 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= 'Z') ? (0x00 +0x10 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +1) && (0x00 +0x10 +4 +1) <= 'z') ? (0x00 +0x10 +4 +1) - 'a' + 38 : 0), ((0x00 +0x10 +4 +2) == '.' ? 0 : (0x00 +0x10 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= '9') ? (0x00 +0x10 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= 'Z') ? (0x00 +0x10 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +2) && (0x00 +0x10 +4 +2) <= 'z') ? (0x00 +0x10 +4 +2) - 'a' + 38 : 0), ((0x00 +0x10 +4 +3) == '.' ? 0 : (0x00 +0x10 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= '9') ? (0x00 +0x10 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= 'Z') ? (0x00 +0x10 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +4 +3) && (0x00 +0x10 +4 +3) <= 'z') ? (0x00 +0x10 +4 +3) - 'a' + 38 : 0), ((0x00 +0x10 +8 +0) == '.' ? 0 : (0x00 +0x10 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= '9') ? (0x00 +0x10 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= 'Z') ? (0x00 +0x10 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +0) && (0x00 +0x10 +8 +0) <= 'z') ? (0x00 +0x10 +8 +0) - 'a' + 38 : 0), ((0x00 +0x10 +8 +1) == '.' ? 0 : (0x00 +0x10 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= '9') ? (0x00 +0x10 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= 'Z') ? (0x00 +0x10 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +1) && (0x00 +0x10 +8 +1) <= 'z') ? (0x00 +0x10 +8 +1) - 'a' + 38 : 0), ((0x00 +0x10 +8 +2) == '.' ? 0 : (0x00 +0x10 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= '9') ? (0x00 +0x10 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= 'Z') ? (0x00 +0x10 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +2) && (0x00 +0x10 +8 +2) <= 'z') ? (0x00 +0x10 +8 +2) - 'a' + 38 : 0), ((0x00 +0x10 +8 +3) == '.' ? 0 : (0x00 +0x10 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= '9') ? (0x00 +0x10 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= 'Z') ? (0x00 +0x10 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +8 +3) && (0x00 +0x10 +8 +3) <= 'z') ? (0x00 +0x10 +8 +3) - 'a' + 38 : 0), ((0x00 +0x10 +12 +0) == '.' ? 0 : (0x00 +0x10 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= '9') ? (0x00 +0x10 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= 'Z') ? (0x00 +0x10 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +0) && (0x00 +0x10 +12 +0) <= 'z') ? (0x00 +0x10 +12 +0) - 'a' + 38 : 0), ((0x00 +0x10 +12 +1) == '.' ? 0 : (0x00 +0x10 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= '9') ? (0x00 +0x10 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= 'Z') ? (0x00 +0x10 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +1) && (0x00 +0x10 +12 +1) <= 'z') ? (0x00 +0x10 +12 +1) - 'a' + 38 : 0), ((0x00 +0x10 +12 +2) == '.' ? 0 : (0x00 +0x10 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= '9') ? (0x00 +0x10 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= 'Z') ? (0x00 +0x10 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +2) && (0x00 +0x10 +12 +2) <= 'z') ? (0x00 +0x10 +12 +2) - 'a' + 38 : 0), ((0x00 +0x10 +12 +3) == '.' ? 0 : (0x00 +0x10 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= '9') ? (0x00 +0x10 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= 'Z') ? (0x00 +0x10 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x10 +12 +3) && (0x00 +0x10 +12 +3) <= 'z') ? (0x00 +0x10 +12 +3) - 'a' + 38 : 0), ((0x00 +0x20 +0 +0) == '.' ? 0 : (0x00 +0x20 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= '9') ? (0x00 +0x20 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= 'Z') ? (0x00 +0x20 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +0) && (0x00 +0x20 +0 +0) <= 'z') ? (0x00 +0x20 +0 +0) - 'a' + 38 : 0), ((0x00 +0x20 +0 +1) == '.' ? 0 : (0x00 +0x20 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= '9') ? (0x00 +0x20 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= 'Z') ? (0x00 +0x20 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +1) && (0x00 +0x20 +0 +1) <= 'z') ? (0x00 +0x20 +0 +1) - 'a' + 38 : 0), ((0x00 +0x20 +0 +2) == '.' ? 0 : (0x00 +0x20 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= '9') ? (0x00 +0x20 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= 'Z') ? (0x00 +0x20 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +2) && (0x00 +0x20 +0 +2) <= 'z') ? (0x00 +0x20 +0 +2) - 'a' + 38 : 0), ((0x00 +0x20 +0 +3) == '.' ? 0 : (0x00 +0x20 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= '9') ? (0x00 +0x20 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= 'Z') ? (0x00 +0x20 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +0 +3) && (0x00 +0x20 +0 +3) <= 'z') ? (0x00 +0x20 +0 +3) - 'a' + 38 : 0), ((0x00 +0x20 +4 +0) == '.' ? 0 : (0x00 +0x20 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= '9') ? (0x00 +0x20 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= 'Z') ? (0x00 +0x20 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +0) && (0x00 +0x20 +4 +0) <= 'z') ? (0x00 +0x20 +4 +0) - 'a' + 38 : 0), ((0x00 +0x20 +4 +1) == '.' ? 0 : (0x00 +0x20 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= '9') ? (0x00 +0x20 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= 'Z') ? (0x00 +0x20 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +1) && (0x00 +0x20 +4 +1) <= 'z') ? (0x00 +0x20 +4 +1) - 'a' + 38 : 0), ((0x00 +0x20 +4 +2) == '.' ? 0 : (0x00 +0x20 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= '9') ? (0x00 +0x20 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= 'Z') ? (0x00 +0x20 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +2) && (0x00 +0x20 +4 +2) <= 'z') ? (0x00 +0x20 +4 +2) - 'a' + 38 : 0), ((0x00 +0x20 +4 +3) == '.' ? 0 : (0x00 +0x20 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= '9') ? (0x00 +0x20 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= 'Z') ? (0x00 +0x20 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +4 +3) && (0x00 +0x20 +4 +3) <= 'z') ? (0x00 +0x20 +4 +3) - 'a' + 38 : 0), ((0x00 +0x20 +8 +0) == '.' ? 0 : (0x00 +0x20 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= '9') ? (0x00 +0x20 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= 'Z') ? (0x00 +0x20 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +0) && (0x00 +0x20 +8 +0) <= 'z') ? (0x00 +0x20 +8 +0) - 'a' + 38 : 0), ((0x00 +0x20 +8 +1) == '.' ? 0 : (0x00 +0x20 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= '9') ? (0x00 +0x20 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= 'Z') ? (0x00 +0x20 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +1) && (0x00 +0x20 +8 +1) <= 'z') ? (0x00 +0x20 +8 +1) - 'a' + 38 : 0), ((0x00 +0x20 +8 +2) == '.' ? 0 : (0x00 +0x20 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= '9') ? (0x00 +0x20 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= 'Z') ? (0x00 +0x20 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +2) && (0x00 +0x20 +8 +2) <= 'z') ? (0x00 +0x20 +8 +2) - 'a' + 38 : 0), ((0x00 +0x20 +8 +3) == '.' ? 0 : (0x00 +0x20 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= '9') ? (0x00 +0x20 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= 'Z') ? (0x00 +0x20 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +8 +3) && (0x00 +0x20 +8 +3) <= 'z') ? (0x00 +0x20 +8 +3) - 'a' + 38 : 0), ((0x00 +0x20 +12 +0) == '.' ? 0 : (0x00 +0x20 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= '9') ? (0x00 +0x20 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= 'Z') ? (0x00 +0x20 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +0) && (0x00 +0x20 +12 +0) <= 'z') ? (0x00 +0x20 +12 +0) - 'a' + 38 : 0), ((0x00 +0x20 +12 +1) == '.' ? 0 : (0x00 +0x20 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= '9') ? (0x00 +0x20 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= 'Z') ? (0x00 +0x20 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +1) && (0x00 +0x20 +12 +1) <= 'z') ? (0x00 +0x20 +12 +1) - 'a' + 38 : 0), ((0x00 +0x20 +12 +2) == '.' ? 0 : (0x00 +0x20 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= '9') ? (0x00 +0x20 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= 'Z') ? (0x00 +0x20 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +2) && (0x00 +0x20 +12 +2) <= 'z') ? (0x00 +0x20 +12 +2) - 'a' + 38 : 0), ((0x00 +0x20 +12 +3) == '.' ? 0 : (0x00 +0x20 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= '9') ? (0x00 +0x20 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= 'Z') ? (0x00 +0x20 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x20 +12 +3) && (0x00 +0x20 +12 +3) <= 'z') ? (0x00 +0x20 +12 +3) - 'a' + 38 : 0), ((0x00 +0x30 +0 +0) == '.' ? 0 : (0x00 +0x30 +0 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= '9') ? (0x00 +0x30 +0 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= 'Z') ? (0x00 +0x30 +0 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +0) && (0x00 +0x30 +0 +0) <= 'z') ? (0x00 +0x30 +0 +0) - 'a' + 38 : 0), ((0x00 +0x30 +0 +1) == '.' ? 0 : (0x00 +0x30 +0 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= '9') ? (0x00 +0x30 +0 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= 'Z') ? (0x00 +0x30 +0 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +1) && (0x00 +0x30 +0 +1) <= 'z') ? (0x00 +0x30 +0 +1) - 'a' + 38 : 0), ((0x00 +0x30 +0 +2) == '.' ? 0 : (0x00 +0x30 +0 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= '9') ? (0x00 +0x30 +0 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= 'Z') ? (0x00 +0x30 +0 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +2) && (0x00 +0x30 +0 +2) <= 'z') ? (0x00 +0x30 +0 +2) - 'a' + 38 : 0), ((0x00 +0x30 +0 +3) == '.' ? 0 : (0x00 +0x30 +0 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= '9') ? (0x00 +0x30 +0 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= 'Z') ? (0x00 +0x30 +0 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +0 +3) && (0x00 +0x30 +0 +3) <= 'z') ? (0x00 +0x30 +0 +3) - 'a' + 38 : 0), ((0x00 +0x30 +4 +0) == '.' ? 0 : (0x00 +0x30 +4 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= '9') ? (0x00 +0x30 +4 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= 'Z') ? (0x00 +0x30 +4 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +0) && (0x00 +0x30 +4 +0) <= 'z') ? (0x00 +0x30 +4 +0) - 'a' + 38 : 0), ((0x00 +0x30 +4 +1) == '.' ? 0 : (0x00 +0x30 +4 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= '9') ? (0x00 +0x30 +4 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= 'Z') ? (0x00 +0x30 +4 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +1) && (0x00 +0x30 +4 +1) <= 'z') ? (0x00 +0x30 +4 +1) - 'a' + 38 : 0), ((0x00 +0x30 +4 +2) == '.' ? 0 : (0x00 +0x30 +4 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= '9') ? (0x00 +0x30 +4 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= 'Z') ? (0x00 +0x30 +4 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +2) && (0x00 +0x30 +4 +2) <= 'z') ? (0x00 +0x30 +4 +2) - 'a' + 38 : 0), ((0x00 +0x30 +4 +3) == '.' ? 0 : (0x00 +0x30 +4 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= '9') ? (0x00 +0x30 +4 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= 'Z') ? (0x00 +0x30 +4 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +4 +3) && (0x00 +0x30 +4 +3) <= 'z') ? (0x00 +0x30 +4 +3) - 'a' + 38 : 0), ((0x00 +0x30 +8 +0) == '.' ? 0 : (0x00 +0x30 +8 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= '9') ? (0x00 +0x30 +8 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= 'Z') ? (0x00 +0x30 +8 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +0) && (0x00 +0x30 +8 +0) <= 'z') ? (0x00 +0x30 +8 +0) - 'a' + 38 : 0), ((0x00 +0x30 +8 +1) == '.' ? 0 : (0x00 +0x30 +8 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= '9') ? (0x00 +0x30 +8 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= 'Z') ? (0x00 +0x30 +8 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +1) && (0x00 +0x30 +8 +1) <= 'z') ? (0x00 +0x30 +8 +1) - 'a' + 38 : 0), ((0x00 +0x30 +8 +2) == '.' ? 0 : (0x00 +0x30 +8 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= '9') ? (0x00 +0x30 +8 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= 'Z') ? (0x00 +0x30 +8 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +2) && (0x00 +0x30 +8 +2) <= 'z') ? (0x00 +0x30 +8 +2) - 'a' + 38 : 0), ((0x00 +0x30 +8 +3) == '.' ? 0 : (0x00 +0x30 +8 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= '9') ? (0x00 +0x30 +8 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= 'Z') ? (0x00 +0x30 +8 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +8 +3) && (0x00 +0x30 +8 +3) <= 'z') ? (0x00 +0x30 +8 +3) - 'a' + 38 : 0), ((0x00 +0x30 +12 +0) == '.' ? 0 : (0x00 +0x30 +12 +0) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= '9') ? (0x00 +0x30 +12 +0) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= 'Z') ? (0x00 +0x30 +12 +0) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +0) && (0x00 +0x30 +12 +0) <= 'z') ? (0x00 +0x30 +12 +0) - 'a' + 38 : 0), ((0x00 +0x30 +12 +1) == '.' ? 0 : (0x00 +0x30 +12 +1) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= '9') ? (0x00 +0x30 +12 +1) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= 'Z') ? (0x00 +0x30 +12 +1) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +1) && (0x00 +0x30 +12 +1) <= 'z') ? (0x00 +0x30 +12 +1) - 'a' + 38 : 0), ((0x00 +0x30 +12 +2) == '.' ? 0 : (0x00 +0x30 +12 +2) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= '9') ? (0x00 +0x30 +12 +2) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= 'Z') ? (0x00 +0x30 +12 +2) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +2) && (0x00 +0x30 +12 +2) <= 'z') ? (0x00 +0x30 +12 +2) - 'a' + 38 : 0), ((0x00 +0x30 +12 +3) == '.' ? 0 : (0x00 +0x30 +12 +3) == '/' ? 1 : ('0' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= '9') ? (0x00 +0x30 +12 +3) - '0' + 2 : ('A' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= 'Z') ? (0x00 +0x30 +12 +3) - 'A' + 12 : ('a' <= (0x00 +0x30 +12 +3) && (0x00 +0x30 +12 +3) <= 'z') ? (0x00 +0x30 +12 +3) - 'a' + 38 : 0), ((0x40 +0x00 +0 +0) == '.' ? 0 : (0x40 +0x00 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= '9') ? (0x40 +0x00 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= 'Z') ? (0x40 +0x00 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +0) && (0x40 +0x00 +0 +0) <= 'z') ? (0x40 +0x00 +0 +0) - 'a' + 38 : 0), ((0x40 +0x00 +0 +1) == '.' ? 0 : (0x40 +0x00 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= '9') ? (0x40 +0x00 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= 'Z') ? (0x40 +0x00 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +1) && (0x40 +0x00 +0 +1) <= 'z') ? (0x40 +0x00 +0 +1) - 'a' + 38 : 0), ((0x40 +0x00 +0 +2) == '.' ? 0 : (0x40 +0x00 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= '9') ? (0x40 +0x00 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= 'Z') ? (0x40 +0x00 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +2) && (0x40 +0x00 +0 +2) <= 'z') ? (0x40 +0x00 +0 +2) - 'a' + 38 : 0), ((0x40 +0x00 +0 +3) == '.' ? 0 : (0x40 +0x00 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= '9') ? (0x40 +0x00 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= 'Z') ? (0x40 +0x00 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +0 +3) && (0x40 +0x00 +0 +3) <= 'z') ? (0x40 +0x00 +0 +3) - 'a' + 38 : 0), ((0x40 +0x00 +4 +0) == '.' ? 0 : (0x40 +0x00 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= '9') ? (0x40 +0x00 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= 'Z') ? (0x40 +0x00 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +0) && (0x40 +0x00 +4 +0) <= 'z') ? (0x40 +0x00 +4 +0) - 'a' + 38 : 0), ((0x40 +0x00 +4 +1) == '.' ? 0 : (0x40 +0x00 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= '9') ? (0x40 +0x00 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= 'Z') ? (0x40 +0x00 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +1) && (0x40 +0x00 +4 +1) <= 'z') ? (0x40 +0x00 +4 +1) - 'a' + 38 : 0), ((0x40 +0x00 +4 +2) == '.' ? 0 : (0x40 +0x00 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= '9') ? (0x40 +0x00 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= 'Z') ? (0x40 +0x00 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +2) && (0x40 +0x00 +4 +2) <= 'z') ? (0x40 +0x00 +4 +2) - 'a' + 38 : 0), ((0x40 +0x00 +4 +3) == '.' ? 0 : (0x40 +0x00 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= '9') ? (0x40 +0x00 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= 'Z') ? (0x40 +0x00 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +4 +3) && (0x40 +0x00 +4 +3) <= 'z') ? (0x40 +0x00 +4 +3) - 'a' + 38 : 0), ((0x40 +0x00 +8 +0) == '.' ? 0 : (0x40 +0x00 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= '9') ? (0x40 +0x00 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= 'Z') ? (0x40 +0x00 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +0) && (0x40 +0x00 +8 +0) <= 'z') ? (0x40 +0x00 +8 +0) - 'a' + 38 : 0), ((0x40 +0x00 +8 +1) == '.' ? 0 : (0x40 +0x00 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= '9') ? (0x40 +0x00 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= 'Z') ? (0x40 +0x00 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +1) && (0x40 +0x00 +8 +1) <= 'z') ? (0x40 +0x00 +8 +1) - 'a' + 38 : 0), ((0x40 +0x00 +8 +2) == '.' ? 0 : (0x40 +0x00 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= '9') ? (0x40 +0x00 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= 'Z') ? (0x40 +0x00 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +2) && (0x40 +0x00 +8 +2) <= 'z') ? (0x40 +0x00 +8 +2) - 'a' + 38 : 0), ((0x40 +0x00 +8 +3) == '.' ? 0 : (0x40 +0x00 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= '9') ? (0x40 +0x00 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= 'Z') ? (0x40 +0x00 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +8 +3) && (0x40 +0x00 +8 +3) <= 'z') ? (0x40 +0x00 +8 +3) - 'a' + 38 : 0), ((0x40 +0x00 +12 +0) == '.' ? 0 : (0x40 +0x00 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= '9') ? (0x40 +0x00 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= 'Z') ? (0x40 +0x00 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +0) && (0x40 +0x00 +12 +0) <= 'z') ? (0x40 +0x00 +12 +0) - 'a' + 38 : 0), ((0x40 +0x00 +12 +1) == '.' ? 0 : (0x40 +0x00 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= '9') ? (0x40 +0x00 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= 'Z') ? (0x40 +0x00 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +1) && (0x40 +0x00 +12 +1) <= 'z') ? (0x40 +0x00 +12 +1) - 'a' + 38 : 0), ((0x40 +0x00 +12 +2) == '.' ? 0 : (0x40 +0x00 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= '9') ? (0x40 +0x00 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= 'Z') ? (0x40 +0x00 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +2) && (0x40 +0x00 +12 +2) <= 'z') ? (0x40 +0x00 +12 +2) - 'a' + 38 : 0), ((0x40 +0x00 +12 +3) == '.' ? 0 : (0x40 +0x00 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= '9') ? (0x40 +0x00 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= 'Z') ? (0x40 +0x00 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x00 +12 +3) && (0x40 +0x00 +12 +3) <= 'z') ? (0x40 +0x00 +12 +3) - 'a' + 38 : 0), ((0x40 +0x10 +0 +0) == '.' ? 0 : (0x40 +0x10 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= '9') ? (0x40 +0x10 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= 'Z') ? (0x40 +0x10 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +0) && (0x40 +0x10 +0 +0) <= 'z') ? (0x40 +0x10 +0 +0) - 'a' + 38 : 0), ((0x40 +0x10 +0 +1) == '.' ? 0 : (0x40 +0x10 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= '9') ? (0x40 +0x10 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= 'Z') ? (0x40 +0x10 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +1) && (0x40 +0x10 +0 +1) <= 'z') ? (0x40 +0x10 +0 +1) - 'a' + 38 : 0), ((0x40 +0x10 +0 +2) == '.' ? 0 : (0x40 +0x10 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= '9') ? (0x40 +0x10 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= 'Z') ? (0x40 +0x10 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +2) && (0x40 +0x10 +0 +2) <= 'z') ? (0x40 +0x10 +0 +2) - 'a' + 38 : 0), ((0x40 +0x10 +0 +3) == '.' ? 0 : (0x40 +0x10 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= '9') ? (0x40 +0x10 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= 'Z') ? (0x40 +0x10 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +0 +3) && (0x40 +0x10 +0 +3) <= 'z') ? (0x40 +0x10 +0 +3) - 'a' + 38 : 0), ((0x40 +0x10 +4 +0) == '.' ? 0 : (0x40 +0x10 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= '9') ? (0x40 +0x10 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= 'Z') ? (0x40 +0x10 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +0) && (0x40 +0x10 +4 +0) <= 'z') ? (0x40 +0x10 +4 +0) - 'a' + 38 : 0), ((0x40 +0x10 +4 +1) == '.' ? 0 : (0x40 +0x10 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= '9') ? (0x40 +0x10 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= 'Z') ? (0x40 +0x10 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +1) && (0x40 +0x10 +4 +1) <= 'z') ? (0x40 +0x10 +4 +1) - 'a' + 38 : 0), ((0x40 +0x10 +4 +2) == '.' ? 0 : (0x40 +0x10 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= '9') ? (0x40 +0x10 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= 'Z') ? (0x40 +0x10 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +2) && (0x40 +0x10 +4 +2) <= 'z') ? (0x40 +0x10 +4 +2) - 'a' + 38 : 0), ((0x40 +0x10 +4 +3) == '.' ? 0 : (0x40 +0x10 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= '9') ? (0x40 +0x10 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= 'Z') ? (0x40 +0x10 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +4 +3) && (0x40 +0x10 +4 +3) <= 'z') ? (0x40 +0x10 +4 +3) - 'a' + 38 : 0), ((0x40 +0x10 +8 +0) == '.' ? 0 : (0x40 +0x10 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= '9') ? (0x40 +0x10 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= 'Z') ? (0x40 +0x10 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +0) && (0x40 +0x10 +8 +0) <= 'z') ? (0x40 +0x10 +8 +0) - 'a' + 38 : 0), ((0x40 +0x10 +8 +1) == '.' ? 0 : (0x40 +0x10 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= '9') ? (0x40 +0x10 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= 'Z') ? (0x40 +0x10 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +1) && (0x40 +0x10 +8 +1) <= 'z') ? (0x40 +0x10 +8 +1) - 'a' + 38 : 0), ((0x40 +0x10 +8 +2) == '.' ? 0 : (0x40 +0x10 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= '9') ? (0x40 +0x10 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= 'Z') ? (0x40 +0x10 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +2) && (0x40 +0x10 +8 +2) <= 'z') ? (0x40 +0x10 +8 +2) - 'a' + 38 : 0), ((0x40 +0x10 +8 +3) == '.' ? 0 : (0x40 +0x10 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= '9') ? (0x40 +0x10 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= 'Z') ? (0x40 +0x10 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +8 +3) && (0x40 +0x10 +8 +3) <= 'z') ? (0x40 +0x10 +8 +3) - 'a' + 38 : 0), ((0x40 +0x10 +12 +0) == '.' ? 0 : (0x40 +0x10 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= '9') ? (0x40 +0x10 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= 'Z') ? (0x40 +0x10 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +0) && (0x40 +0x10 +12 +0) <= 'z') ? (0x40 +0x10 +12 +0) - 'a' + 38 : 0), ((0x40 +0x10 +12 +1) == '.' ? 0 : (0x40 +0x10 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= '9') ? (0x40 +0x10 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= 'Z') ? (0x40 +0x10 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +1) && (0x40 +0x10 +12 +1) <= 'z') ? (0x40 +0x10 +12 +1) - 'a' + 38 : 0), ((0x40 +0x10 +12 +2) == '.' ? 0 : (0x40 +0x10 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= '9') ? (0x40 +0x10 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= 'Z') ? (0x40 +0x10 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +2) && (0x40 +0x10 +12 +2) <= 'z') ? (0x40 +0x10 +12 +2) - 'a' + 38 : 0), ((0x40 +0x10 +12 +3) == '.' ? 0 : (0x40 +0x10 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= '9') ? (0x40 +0x10 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= 'Z') ? (0x40 +0x10 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x10 +12 +3) && (0x40 +0x10 +12 +3) <= 'z') ? (0x40 +0x10 +12 +3) - 'a' + 38 : 0), ((0x40 +0x20 +0 +0) == '.' ? 0 : (0x40 +0x20 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= '9') ? (0x40 +0x20 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= 'Z') ? (0x40 +0x20 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +0) && (0x40 +0x20 +0 +0) <= 'z') ? (0x40 +0x20 +0 +0) - 'a' + 38 : 0), ((0x40 +0x20 +0 +1) == '.' ? 0 : (0x40 +0x20 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= '9') ? (0x40 +0x20 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= 'Z') ? (0x40 +0x20 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +1) && (0x40 +0x20 +0 +1) <= 'z') ? (0x40 +0x20 +0 +1) - 'a' + 38 : 0), ((0x40 +0x20 +0 +2) == '.' ? 0 : (0x40 +0x20 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= '9') ? (0x40 +0x20 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= 'Z') ? (0x40 +0x20 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +2) && (0x40 +0x20 +0 +2) <= 'z') ? (0x40 +0x20 +0 +2) - 'a' + 38 : 0), ((0x40 +0x20 +0 +3) == '.' ? 0 : (0x40 +0x20 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= '9') ? (0x40 +0x20 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= 'Z') ? (0x40 +0x20 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +0 +3) && (0x40 +0x20 +0 +3) <= 'z') ? (0x40 +0x20 +0 +3) - 'a' + 38 : 0), ((0x40 +0x20 +4 +0) == '.' ? 0 : (0x40 +0x20 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= '9') ? (0x40 +0x20 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= 'Z') ? (0x40 +0x20 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +0) && (0x40 +0x20 +4 +0) <= 'z') ? (0x40 +0x20 +4 +0) - 'a' + 38 : 0), ((0x40 +0x20 +4 +1) == '.' ? 0 : (0x40 +0x20 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= '9') ? (0x40 +0x20 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= 'Z') ? (0x40 +0x20 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +1) && (0x40 +0x20 +4 +1) <= 'z') ? (0x40 +0x20 +4 +1) - 'a' + 38 : 0), ((0x40 +0x20 +4 +2) == '.' ? 0 : (0x40 +0x20 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= '9') ? (0x40 +0x20 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= 'Z') ? (0x40 +0x20 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +2) && (0x40 +0x20 +4 +2) <= 'z') ? (0x40 +0x20 +4 +2) - 'a' + 38 : 0), ((0x40 +0x20 +4 +3) == '.' ? 0 : (0x40 +0x20 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= '9') ? (0x40 +0x20 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= 'Z') ? (0x40 +0x20 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +4 +3) && (0x40 +0x20 +4 +3) <= 'z') ? (0x40 +0x20 +4 +3) - 'a' + 38 : 0), ((0x40 +0x20 +8 +0) == '.' ? 0 : (0x40 +0x20 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= '9') ? (0x40 +0x20 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= 'Z') ? (0x40 +0x20 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +0) && (0x40 +0x20 +8 +0) <= 'z') ? (0x40 +0x20 +8 +0) - 'a' + 38 : 0), ((0x40 +0x20 +8 +1) == '.' ? 0 : (0x40 +0x20 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= '9') ? (0x40 +0x20 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= 'Z') ? (0x40 +0x20 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +1) && (0x40 +0x20 +8 +1) <= 'z') ? (0x40 +0x20 +8 +1) - 'a' + 38 : 0), ((0x40 +0x20 +8 +2) == '.' ? 0 : (0x40 +0x20 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= '9') ? (0x40 +0x20 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= 'Z') ? (0x40 +0x20 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +2) && (0x40 +0x20 +8 +2) <= 'z') ? (0x40 +0x20 +8 +2) - 'a' + 38 : 0), ((0x40 +0x20 +8 +3) == '.' ? 0 : (0x40 +0x20 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= '9') ? (0x40 +0x20 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= 'Z') ? (0x40 +0x20 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +8 +3) && (0x40 +0x20 +8 +3) <= 'z') ? (0x40 +0x20 +8 +3) - 'a' + 38 : 0), ((0x40 +0x20 +12 +0) == '.' ? 0 : (0x40 +0x20 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= '9') ? (0x40 +0x20 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= 'Z') ? (0x40 +0x20 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +0) && (0x40 +0x20 +12 +0) <= 'z') ? (0x40 +0x20 +12 +0) - 'a' + 38 : 0), ((0x40 +0x20 +12 +1) == '.' ? 0 : (0x40 +0x20 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= '9') ? (0x40 +0x20 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= 'Z') ? (0x40 +0x20 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +1) && (0x40 +0x20 +12 +1) <= 'z') ? (0x40 +0x20 +12 +1) - 'a' + 38 : 0), ((0x40 +0x20 +12 +2) == '.' ? 0 : (0x40 +0x20 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= '9') ? (0x40 +0x20 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= 'Z') ? (0x40 +0x20 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +2) && (0x40 +0x20 +12 +2) <= 'z') ? (0x40 +0x20 +12 +2) - 'a' + 38 : 0), ((0x40 +0x20 +12 +3) == '.' ? 0 : (0x40 +0x20 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= '9') ? (0x40 +0x20 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= 'Z') ? (0x40 +0x20 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x20 +12 +3) && (0x40 +0x20 +12 +3) <= 'z') ? (0x40 +0x20 +12 +3) - 'a' + 38 : 0), ((0x40 +0x30 +0 +0) == '.' ? 0 : (0x40 +0x30 +0 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= '9') ? (0x40 +0x30 +0 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= 'Z') ? (0x40 +0x30 +0 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +0) && (0x40 +0x30 +0 +0) <= 'z') ? (0x40 +0x30 +0 +0) - 'a' + 38 : 0), ((0x40 +0x30 +0 +1) == '.' ? 0 : (0x40 +0x30 +0 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= '9') ? (0x40 +0x30 +0 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= 'Z') ? (0x40 +0x30 +0 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +1) && (0x40 +0x30 +0 +1) <= 'z') ? (0x40 +0x30 +0 +1) - 'a' + 38 : 0), ((0x40 +0x30 +0 +2) == '.' ? 0 : (0x40 +0x30 +0 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= '9') ? (0x40 +0x30 +0 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= 'Z') ? (0x40 +0x30 +0 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +2) && (0x40 +0x30 +0 +2) <= 'z') ? (0x40 +0x30 +0 +2) - 'a' + 38 : 0), ((0x40 +0x30 +0 +3) == '.' ? 0 : (0x40 +0x30 +0 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= '9') ? (0x40 +0x30 +0 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= 'Z') ? (0x40 +0x30 +0 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +0 +3) && (0x40 +0x30 +0 +3) <= 'z') ? (0x40 +0x30 +0 +3) - 'a' + 38 : 0), ((0x40 +0x30 +4 +0) == '.' ? 0 : (0x40 +0x30 +4 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= '9') ? (0x40 +0x30 +4 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= 'Z') ? (0x40 +0x30 +4 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +0) && (0x40 +0x30 +4 +0) <= 'z') ? (0x40 +0x30 +4 +0) - 'a' + 38 : 0), ((0x40 +0x30 +4 +1) == '.' ? 0 : (0x40 +0x30 +4 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= '9') ? (0x40 +0x30 +4 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= 'Z') ? (0x40 +0x30 +4 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +1) && (0x40 +0x30 +4 +1) <= 'z') ? (0x40 +0x30 +4 +1) - 'a' + 38 : 0), ((0x40 +0x30 +4 +2) == '.' ? 0 : (0x40 +0x30 +4 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= '9') ? (0x40 +0x30 +4 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= 'Z') ? (0x40 +0x30 +4 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +2) && (0x40 +0x30 +4 +2) <= 'z') ? (0x40 +0x30 +4 +2) - 'a' + 38 : 0), ((0x40 +0x30 +4 +3) == '.' ? 0 : (0x40 +0x30 +4 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= '9') ? (0x40 +0x30 +4 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= 'Z') ? (0x40 +0x30 +4 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +4 +3) && (0x40 +0x30 +4 +3) <= 'z') ? (0x40 +0x30 +4 +3) - 'a' + 38 : 0), ((0x40 +0x30 +8 +0) == '.' ? 0 : (0x40 +0x30 +8 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= '9') ? (0x40 +0x30 +8 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= 'Z') ? (0x40 +0x30 +8 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +0) && (0x40 +0x30 +8 +0) <= 'z') ? (0x40 +0x30 +8 +0) - 'a' + 38 : 0), ((0x40 +0x30 +8 +1) == '.' ? 0 : (0x40 +0x30 +8 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= '9') ? (0x40 +0x30 +8 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= 'Z') ? (0x40 +0x30 +8 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +1) && (0x40 +0x30 +8 +1) <= 'z') ? (0x40 +0x30 +8 +1) - 'a' + 38 : 0), ((0x40 +0x30 +8 +2) == '.' ? 0 : (0x40 +0x30 +8 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= '9') ? (0x40 +0x30 +8 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= 'Z') ? (0x40 +0x30 +8 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +2) && (0x40 +0x30 +8 +2) <= 'z') ? (0x40 +0x30 +8 +2) - 'a' + 38 : 0), ((0x40 +0x30 +8 +3) == '.' ? 0 : (0x40 +0x30 +8 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= '9') ? (0x40 +0x30 +8 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= 'Z') ? (0x40 +0x30 +8 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +8 +3) && (0x40 +0x30 +8 +3) <= 'z') ? (0x40 +0x30 +8 +3) - 'a' + 38 : 0), ((0x40 +0x30 +12 +0) == '.' ? 0 : (0x40 +0x30 +12 +0) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= '9') ? (0x40 +0x30 +12 +0) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= 'Z') ? (0x40 +0x30 +12 +0) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +0) && (0x40 +0x30 +12 +0) <= 'z') ? (0x40 +0x30 +12 +0) - 'a' + 38 : 0), ((0x40 +0x30 +12 +1) == '.' ? 0 : (0x40 +0x30 +12 +1) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= '9') ? (0x40 +0x30 +12 +1) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= 'Z') ? (0x40 +0x30 +12 +1) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +1) && (0x40 +0x30 +12 +1) <= 'z') ? (0x40 +0x30 +12 +1) - 'a' + 38 : 0), ((0x40 +0x30 +12 +2) == '.' ? 0 : (0x40 +0x30 +12 +2) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= '9') ? (0x40 +0x30 +12 +2) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= 'Z') ? (0x40 +0x30 +12 +2) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +2) && (0x40 +0x30 +12 +2) <= 'z') ? (0x40 +0x30 +12 +2) - 'a' + 38 : 0), ((0x40 +0x30 +12 +3) == '.' ? 0 : (0x40 +0x30 +12 +3) == '/' ? 1 : ('0' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= '9') ? (0x40 +0x30 +12 +3) - '0' + 2 : ('A' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= 'Z') ? (0x40 +0x30 +12 +3) - 'A' + 12 : ('a' <= (0x40 +0x30 +12 +3) && (0x40 +0x30 +12 +3) <= 'z') ? (0x40 +0x30 +12 +3) - 'a' + 38 : 0),
};
static const C_block constdatablock = {{0}};




static void des_setkey_r(const unsigned char *key, struct crypt_data *data);
static void des_cipher_r(const unsigned char *in, unsigned char *out, long salt, int num_iter, struct crypt_data *data);
char *
crypt_r(const char *key, const char *setting, struct crypt_data *data)
{
 register char *encp;
 register long i;
 register int t;
 long salt;
 int num_iter, salt_size;
 C_block keyblock, rsltblock;

 for (i = 0; i < 8; i++) {
  if ((t = 2*(unsigned char)(*key)) != 0)
   key++;
  keyblock.b[i] = t;
 }
 des_setkey_r(keyblock.b, data);

 encp = &(data->cryptresult)[0];
 switch (*setting) {
 case '_':



  while (*key) {
   des_cipher_r(keyblock.b, keyblock.b, 0L, 1, data);
   for (i = 0; i < 8; i++) {
    if ((t = 2*(unsigned char)(*key)) != 0)
     key++;
    keyblock.b[i] ^= t;
   }
   des_setkey_r(keyblock.b, data);
  }

  *encp++ = *setting++;


  num_iter = 0;
  for (i = 4; --i >= 0; ) {
   if ((t = (unsigned char)setting[i]) == '\0')
    t = '.';
   encp[i] = t;
   num_iter = (num_iter<<6) | a64toi[t];
  }
  setting += 4;
  encp += 4;
  salt_size = 4;
  break;
 default:
  num_iter = 25;
  salt_size = 2;
 }

 salt = 0;
 for (i = salt_size; --i >= 0; ) {
  if ((t = (unsigned char)setting[i]) == '\0')
   t = '.';
  encp[i] = t;
  salt = (salt<<6) | a64toi[t];
 }
 encp += salt_size;
 des_cipher_r(constdatablock.b, rsltblock.b, salt, num_iter, data);




 i = ((long)((rsltblock.b[0]<<8) | rsltblock.b[1])<<8) | rsltblock.b[2];
 encp[3] = itoa64[i&0x3f]; i >>= 6;
 encp[2] = itoa64[i&0x3f]; i >>= 6;
 encp[1] = itoa64[i&0x3f]; i >>= 6;
 encp[0] = itoa64[i]; encp += 4;
 i = ((long)((rsltblock.b[3]<<8) | rsltblock.b[4])<<8) | rsltblock.b[5];
 encp[3] = itoa64[i&0x3f]; i >>= 6;
 encp[2] = itoa64[i&0x3f]; i >>= 6;
 encp[1] = itoa64[i&0x3f]; i >>= 6;
 encp[0] = itoa64[i]; encp += 4;
 i = ((long)((rsltblock.b[6])<<8) | rsltblock.b[7])<<2;
 encp[2] = itoa64[i&0x3f]; i >>= 6;
 encp[1] = itoa64[i&0x3f]; i >>= 6;
 encp[0] = itoa64[i];

 encp[3] = 0;

 return ((data->cryptresult));
}




static void
des_setkey_r(const unsigned char *key, struct crypt_data *data)
{
 register long K0, K1;
 register const C_block *ptabp;
 register int i;
 C_block *ksp;

 ((void)0);

 { C_block tblk; permute((key),&tblk,(PC1ROT[0]),8); (((K0)) = (tblk).b32.i0, ((K1)) = (tblk).b32.i1); };
 ksp = &(data->KS)[0];
 ((*ksp).b32.i0 = (K0&~0x03030303L), (*ksp).b32.i1 = (K1));
 for (i = 1; i < (int)(sizeof((data->KS)) / sizeof(((data->KS))[0])); i++) {
  ksp++;
  ((*ksp).b32.i0 = (K0), (*ksp).b32.i1 = (K1));
  ptabp = PC2ROT[Rotates[i]-1][0];
  { C_block tblk; permute((ksp->b),&tblk,(ptabp),8); (((K0)) = (tblk).b32.i0, ((K1)) = (tblk).b32.i1); };
  ((*ksp).b32.i0 = (K0&~0x03030303L), (*ksp).b32.i1 = (K1));
 }
}
void
des_cipher_r(const unsigned char *in, unsigned char *out, long salt, int num_iter, struct crypt_data *data)
{




 register unsigned long L0, L1, R0, R1, k;
 register const C_block *kp;
 register int ks_inc, loop_count;
 C_block B;

 L0 = salt;
 { C_block cvt; cvt.b[0] = (unsigned char)(L0); (L0) >>= 6; cvt.b[1] = (unsigned char)(L0); (L0) >>= 6; cvt.b[2] = (unsigned char)(L0); (L0) >>= 6; cvt.b[3] = (unsigned char)(L0); (salt) = (cvt.b32.i0 & 0x3f3f3f3fL) << 2; };
 B.b[0] = in[0]; B.b[1] = in[1]; B.b[2] = in[2]; B.b[3] = in[3];
 B.b[4] = in[4]; B.b[5] = in[5]; B.b[6] = in[6]; B.b[7] = in[7];
 ((L0) = (B).b32.i0, (L1) = (B).b32.i1);



 ((R0) = (L0), (R1) = (L1));
 L0 &= 0x55555555L;
 L1 &= 0x55555555L;
 L0 = (L0 << 1) | L1;
 R0 &= 0xaaaaaaaaL;
 R1 = (R1 >> 1) & 0x55555555L;
 L1 = R0 | R1;
 ((B).b32.i0 = (L0), (B).b32.i1 = (L1));
 { C_block tblk; permute((B.b),&tblk,(IE3264[0]),4); (((L0)) = (tblk).b32.i0, ((L1)) = (tblk).b32.i1); };
 { C_block tblk; permute((B.b+4),&tblk,(IE3264[0]),4); (((R0)) = (tblk).b32.i0, ((R1)) = (tblk).b32.i1); };

 if (num_iter >= 0)
 {
  kp = &(data->KS)[0];
  ks_inc = +1;
 }
 else
 {
  num_iter = -num_iter;
  kp = &(data->KS)[16 -1];
  ks_inc = -1;
 }

 while (--num_iter >= 0) {
  loop_count = 8;
  do {
   k = ((R0) ^ (R1)) & salt; B.b32.i0 = k ^ (R0) ^ kp->b32.i0; B.b32.i1 = k ^ (R1) ^ kp->b32.i1; kp += ks_inc; k=B.b[(0)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(0)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(0)]) + (k)*(sizeof(long)/4)));; k=B.b[(1)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(1)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(1)]) + (k)*(sizeof(long)/4)));; k=B.b[(2)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(2)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(2)]) + (k)*(sizeof(long)/4)));; k=B.b[(3)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(3)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(3)]) + (k)*(sizeof(long)/4)));; k=B.b[(4)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(4)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(4)]) + (k)*(sizeof(long)/4)));; k=B.b[(5)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(5)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(5)]) + (k)*(sizeof(long)/4)));; k=B.b[(6)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(6)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(6)]) + (k)*(sizeof(long)/4)));; k=B.b[(7)]; ((L0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(7)]) + (k)*(sizeof(long)/4))); ((L1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(7)]) + (k)*(sizeof(long)/4)));;;
   k = ((L0) ^ (L1)) & salt; B.b32.i0 = k ^ (L0) ^ kp->b32.i0; B.b32.i1 = k ^ (L1) ^ kp->b32.i1; kp += ks_inc; k=B.b[(0)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(0)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(0)]) + (k)*(sizeof(long)/4)));; k=B.b[(1)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(1)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(1)]) + (k)*(sizeof(long)/4)));; k=B.b[(2)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(2)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(2)]) + (k)*(sizeof(long)/4)));; k=B.b[(3)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(3)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(3)]) + (k)*(sizeof(long)/4)));; k=B.b[(4)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(4)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(4)]) + (k)*(sizeof(long)/4)));; k=B.b[(5)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(5)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(5)]) + (k)*(sizeof(long)/4)));; k=B.b[(6)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(6)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(6)]) + (k)*(sizeof(long)/4)));; k=B.b[(7)]; ((R0))^=(*(const unsigned long *)((const unsigned char *)(SPE[0][(7)]) + (k)*(sizeof(long)/4))); ((R1))^=(*(const unsigned long *)((const unsigned char *)(SPE[1][(7)]) + (k)*(sizeof(long)/4)));;;
  } while (--loop_count != 0);
  kp -= (ks_inc*16);



  L0 ^= R0; L1 ^= R1;
  R0 ^= L0; R1 ^= L1;
  L0 ^= R0; L1 ^= R1;
 }


 L0 = ((L0 >> 3) & 0x0f0f0f0fL) | ((L1 << 1) & 0xf0f0f0f0L);
 L1 = ((R0 >> 3) & 0x0f0f0f0fL) | ((R1 << 1) & 0xf0f0f0f0L);
 ((B).b32.i0 = (L0), (B).b32.i1 = (L1));
 { C_block tblk; permute((B.b),&tblk,(CF6464[0]),8); (((L0)) = (tblk).b32.i0, ((L1)) = (tblk).b32.i1); };

 ((B).b32.i0 = (L0), (B).b32.i1 = (L1));
 out[0] = B.b[0]; out[1] = B.b[1]; out[2] = B.b[2]; out[3] = B.b[3];
 out[4] = B.b[4]; out[5] = B.b[5]; out[6] = B.b[6]; out[7] = B.b[7];



}
void
setkey_r(const char *key, struct crypt_data *data)
{
 register int i, j, k;
 C_block keyblock;

 for (i = 0; i < 8; i++) {
  k = 0;
  for (j = 0; j < 8; j++) {
   k <<= 1;
   k |= (unsigned char)*key++;
  }
  keyblock.b[i] = k;
 }
 des_setkey_r(keyblock.b, data);
}
void
encrypt_r(char *block, int flag, struct crypt_data *data)
{
 register int i, j, k;
 C_block cblock;

 for (i = 0; i < 8; i++) {
  k = 0;
  for (j = 0; j < 8; j++) {
   k <<= 1;
   k |= (unsigned char)*block++;
  }
  cblock.b[i] = k;
 }
 des_cipher_r(cblock.b, cblock.b, 0L, (flag ? -1: 1), data);
 for (i = 7; i >= 0; i--) {
  k = cblock.b[i];
  for (j = 7; j >= 0; j--) {
   *--block = k&01;
   k >>= 1;
  }
 }
}
