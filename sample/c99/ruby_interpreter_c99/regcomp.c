




typedef char* va_list;
typedef char* __gnuc_va_list;





typedef long unsigned int size_t;
typedef int wchar_t;







typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





 typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
extern size_t __ctype_get_mb_cur_max (void)  ;



extern double atof (const char *__nptr)
        ;

extern int atoi (const char *__nptr)
        ;

extern long int atol (const char *__nptr)
        ;



 extern long long int atoll (const char *__nptr)
        ;



extern double strtod (const char *restrict __nptr,
        char **restrict __endptr)
      ;



extern float strtof (const char *restrict __nptr,
       char **restrict __endptr)  ;

extern long double strtold (const char *restrict __nptr,
       char **restrict __endptr)
      ;
extern _Float32 strtof32 (const char *restrict __nptr,
     char **restrict __endptr)
      ;



extern _Float64 strtof64 (const char *restrict __nptr,
     char **restrict __endptr)
      ;
extern _Float32x strtof32x (const char *restrict __nptr,
       char **restrict __endptr)
      ;



extern _Float64x strtof64x (const char *restrict __nptr,
       char **restrict __endptr)
      ;
extern long int strtol (const char *restrict __nptr,
   char **restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *restrict __nptr,
      char **restrict __endptr, int __base)
      ;




extern long long int strtoq (const char *restrict __nptr,
        char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtouq (const char *restrict __nptr,
           char **restrict __endptr, int __base)
      ;





extern long long int strtoll (const char *restrict __nptr,
         char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *restrict __nptr,
     char **restrict __endptr, int __base)
      ;




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
      ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
      ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
      ;
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
      ;



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
      ;
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
      ;



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
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

extern long int strtol_l (const char *restrict __nptr,
     char **restrict __endptr, int __base,
     locale_t __loc)  ;

extern unsigned long int strtoul_l (const char *restrict __nptr,
        char **restrict __endptr,
        int __base, locale_t __loc)
      ;


extern long long int strtoll_l (const char *restrict __nptr,
    char **restrict __endptr, int __base,
    locale_t __loc)
      ;


extern unsigned long long int strtoull_l (const char *restrict __nptr,
       char **restrict __endptr,
       int __base, locale_t __loc)
      ;

extern double strtod_l (const char *restrict __nptr,
   char **restrict __endptr, locale_t __loc)
      ;

extern float strtof_l (const char *restrict __nptr,
         char **restrict __endptr, locale_t __loc)
      ;

extern long double strtold_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
      ;
extern _Float32 strtof32_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
      ;



extern _Float64 strtof64_l (const char *restrict __nptr,
       char **restrict __endptr,
       locale_t __loc)
      ;
extern _Float32x strtof32x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
      ;



extern _Float64x strtof64x_l (const char *restrict __nptr,
         char **restrict __endptr,
         locale_t __loc)
      ;
extern char *l64a (long int __n)  ;


extern long int a64l (const char *__s)
        ;







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



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;











typedef __clock_t clock_t;







typedef __clockid_t clockid_t;






typedef __time_t time_t;






typedef __timer_t timer_t;



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;









typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;





typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






static inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}











typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;


typedef __sigset_t sigset_t;










struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};








struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef long int __fd_mask;
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
extern int select (int __nfds, fd_set *restrict __readfds,
     fd_set *restrict __writefds,
     fd_set *restrict __exceptfds,
     struct timeval *restrict __timeout);
extern int pselect (int __nfds, fd_set *restrict __readfds,
      fd_set *restrict __writefds,
      fd_set *restrict __exceptfds,
      const struct timespec *restrict __timeout,
      const __sigset_t *restrict __sigmask);







extern unsigned int gnu_dev_major (__dev_t __dev)  ;
extern unsigned int gnu_dev_minor (__dev_t __dev)  ;
extern __dev_t gnu_dev_makedev (unsigned int __major, unsigned int __minor)  ;






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;






struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
};




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
struct __pthread_mutex_s
{
  int __lock ;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;





  short __spins; short __elision;
  __pthread_list_t __list;
};




struct __pthread_cond_s
{
   union
  {
     unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
   union
  {
     unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
   long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen)  ;



extern char *setstate (char *__statebuf)  ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *restrict __buf,
       int32_t *restrict __result)  ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
      ;

extern int initstate_r (unsigned int __seed, char *restrict __statebuf,
   size_t __statelen,
   struct random_data *restrict __buf)
      ;

extern int setstate_r (char *restrict __statebuf,
         struct random_data *restrict __buf)
      ;





extern int rand (void) ;

extern void srand (unsigned int __seed) ;



extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3])  ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
      ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
      ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
      ;
extern void lcong48 (unsigned short int __param[7])  ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
     unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *restrict __buffer,
        double *restrict __result)  ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        double *restrict __result)  ;


extern int lrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
      ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
      ;


extern int mrand48_r (struct drand48_data *restrict __buffer,
        long int *restrict __result)
      ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *restrict __buffer,
        long int *restrict __result)
      ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
      ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer)  ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
      ;




extern void *malloc (size_t __size)   ;

extern void *calloc (size_t __nmemb, size_t __size)
       ;






extern void *realloc (void *__ptr, size_t __size)
      ;







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
      ;



extern void free (void *__ptr) ;










extern void *alloca (size_t __size) ;





extern void *valloc (size_t __size)   ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
       ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
       ;



extern void abort (void)  ;



extern int atexit (void (*__func) (void))  ;







extern int at_quick_exit (void (*__func) (void))  ;






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
      ;





extern void exit (int __status)  ;





extern void quick_exit (int __status)  ;





extern void _Exit (int __status)  ;




extern char *getenv (const char *__name)   ;




extern char *secure_getenv (const char *__name)
       ;






extern int putenv (char *__string)  ;





extern int setenv (const char *__name, const char *__value, int __replace)
      ;


extern int unsetenv (const char *__name)  ;






extern int clearenv (void) ;
extern char *mktemp (char *__template)  ;
extern int mkstemp (char *__template)  ;
extern int mkstemp64 (char *__template)  ;
extern int mkstemps (char *__template, int __suffixlen)  ;
extern int mkstemps64 (char *__template, int __suffixlen)
      ;
extern char *mkdtemp (char *__template)   ;
extern int mkostemp (char *__template, int __flags)  ;
extern int mkostemp64 (char *__template, int __flags)  ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
      ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
      ;
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
       ;
extern char *realpath (const char *restrict __name,
         char *restrict __resolved)  ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  ;




extern int abs (int __x)   ;
extern long int labs (long int __x)   ;


 extern long long int llabs (long long int __x)
       ;






extern div_t div (int __numer, int __denom)
       ;
extern ldiv_t ldiv (long int __numer, long int __denom)
       ;


 extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
       ;
extern char *ecvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign)   ;




extern char *fcvt (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign)   ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
       ;




extern char *qecvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
       ;
extern char *qfcvt (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign)
       ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
       ;




extern int ecvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len)  ;
extern int fcvt_r (double __value, int __ndigit, int *restrict __decpt,
     int *restrict __sign, char *restrict __buf,
     size_t __len)  ;

extern int qecvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
      ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *restrict __decpt, int *restrict __sign,
      char *restrict __buf, size_t __len)
      ;





extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
     const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict __pwcs,
   const char *restrict __s, size_t __n) ;

extern size_t wcstombs (char *restrict __s,
   const wchar_t *restrict __pwcs, size_t __n)
     ;







extern int rpmatch (const char *__response)   ;
extern int getsubopt (char **restrict __optionp,
        char *const *restrict __tokens,
        char **restrict __valuep)
       ;





extern void setkey (const char *__key)  ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) ;



extern int unlockpt (int __fd) ;




extern char *ptsname (int __fd)  ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
      ;


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
      ;



















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

enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
      ;
extern const __int32_t **__ctype_tolower_loc (void)
      ;
extern const __int32_t **__ctype_toupper_loc (void)
      ;
extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;




extern int isblank (int) ;




extern int isctype (int __c, int __mask) ;






extern int isascii (int __c) ;



extern int toascii (int __c) ;



extern int _toupper (int) ;
extern int _tolower (int) ;
extern int isalnum_l (int, locale_t) ;
extern int isalpha_l (int, locale_t) ;
extern int iscntrl_l (int, locale_t) ;
extern int isdigit_l (int, locale_t) ;
extern int islower_l (int, locale_t) ;
extern int isgraph_l (int, locale_t) ;
extern int isprint_l (int, locale_t) ;
extern int ispunct_l (int, locale_t) ;
extern int isspace_l (int, locale_t) ;
extern int isupper_l (int, locale_t) ;
extern int isxdigit_l (int, locale_t) ;

extern int isblank_l (int, locale_t) ;



extern int __tolower_l (int __c, locale_t __l) ;
extern int tolower_l (int __c, locale_t __l) ;


extern int __toupper_l (int __c, locale_t __l) ;
extern int toupper_l (int __c, locale_t __l) ;













typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;









typedef int __gwchar_t;
typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n)  ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
       ;


extern intmax_t strtoimax (const char *restrict __nptr,
      char **restrict __endptr, int __base) ;


extern uintmax_t strtoumax (const char *restrict __nptr,
       char ** restrict __endptr, int __base) ;


extern intmax_t wcstoimax (const __gwchar_t *restrict __nptr,
      __gwchar_t **restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const __gwchar_t *restrict __nptr,
       __gwchar_t ** restrict __endptr, int __base)
     ;


typedef long int ptrdiff_t;









typedef unsigned char OnigUChar;
typedef unsigned int OnigCodePoint;
typedef unsigned int OnigCtype;
typedef size_t OnigDistance;
typedef ptrdiff_t OnigPosition;
typedef unsigned int OnigCaseFoldType;

extern OnigCaseFoldType OnigDefaultCaseFoldFlag;
typedef struct {
  int byte_len;
  int code_len;
  OnigCodePoint code[3];
} OnigCaseFoldCodeItem;

typedef struct {
  OnigCodePoint esc;
  OnigCodePoint anychar;
  OnigCodePoint anytime;
  OnigCodePoint zero_or_one_time;
  OnigCodePoint one_or_more_time;
  OnigCodePoint anychar_anytime;
} OnigMetaCharTableType;

typedef int (*OnigApplyAllCaseFoldFunc)(OnigCodePoint from, OnigCodePoint* to, int to_len, void* arg);

typedef struct OnigEncodingTypeST {
  int (*precise_mbc_enc_len)(const OnigUChar* p,const OnigUChar* e, const struct OnigEncodingTypeST* enc);
  const char* name;
  int max_enc_len;
  int min_enc_len;
  int (*is_mbc_newline)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  OnigCodePoint (*mbc_to_code)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*code_to_mbclen)(OnigCodePoint code, const struct OnigEncodingTypeST* enc);
  int (*code_to_mbc)(OnigCodePoint code, OnigUChar *buf, const struct OnigEncodingTypeST* enc);
  int (*mbc_case_fold)(OnigCaseFoldType flag, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, const struct OnigEncodingTypeST* enc);
  int (*apply_all_case_fold)(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, const struct OnigEncodingTypeST* enc);
  int (*get_case_fold_codes_by_str)(OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem acs[], const struct OnigEncodingTypeST* enc);
  int (*property_name_to_ctype)(const struct OnigEncodingTypeST* enc, const OnigUChar* p, const OnigUChar* end);
  int (*is_code_ctype)(OnigCodePoint code, OnigCtype ctype, const struct OnigEncodingTypeST* enc);
  int (*get_ctype_code_range)(OnigCtype ctype, OnigCodePoint* sb_out, const OnigCodePoint* ranges[], const struct OnigEncodingTypeST* enc);
  OnigUChar* (*left_adjust_char_head)(const OnigUChar* start, const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*is_allowed_reverse_match)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*case_map)(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);
  int ruby_encoding_index;
  unsigned int flags;
} OnigEncodingType;

typedef const OnigEncodingType* OnigEncoding;

extern const OnigEncodingType OnigEncodingASCII;

extern const OnigEncodingType OnigEncodingISO_8859_1;
extern const OnigEncodingType OnigEncodingISO_8859_2;
extern const OnigEncodingType OnigEncodingISO_8859_3;
extern const OnigEncodingType OnigEncodingISO_8859_4;
extern const OnigEncodingType OnigEncodingISO_8859_5;
extern const OnigEncodingType OnigEncodingISO_8859_6;
extern const OnigEncodingType OnigEncodingISO_8859_7;
extern const OnigEncodingType OnigEncodingISO_8859_8;
extern const OnigEncodingType OnigEncodingISO_8859_9;
extern const OnigEncodingType OnigEncodingISO_8859_10;
extern const OnigEncodingType OnigEncodingISO_8859_11;
extern const OnigEncodingType OnigEncodingISO_8859_13;
extern const OnigEncodingType OnigEncodingISO_8859_14;
extern const OnigEncodingType OnigEncodingISO_8859_15;
extern const OnigEncodingType OnigEncodingISO_8859_16;
extern const OnigEncodingType OnigEncodingUTF_8;
extern const OnigEncodingType OnigEncodingUTF_16BE;
extern const OnigEncodingType OnigEncodingUTF_16LE;
extern const OnigEncodingType OnigEncodingUTF_32BE;
extern const OnigEncodingType OnigEncodingUTF_32LE;
extern const OnigEncodingType OnigEncodingEUC_JP;
extern const OnigEncodingType OnigEncodingEUC_TW;
extern const OnigEncodingType OnigEncodingEUC_KR;
extern const OnigEncodingType OnigEncodingEUC_CN;
extern const OnigEncodingType OnigEncodingShift_JIS;
extern const OnigEncodingType OnigEncodingWindows_31J;

extern const OnigEncodingType OnigEncodingKOI8_R;
extern const OnigEncodingType OnigEncodingKOI8_U;
extern const OnigEncodingType OnigEncodingWindows_1250;
extern const OnigEncodingType OnigEncodingWindows_1251;
extern const OnigEncodingType OnigEncodingWindows_1252;
extern const OnigEncodingType OnigEncodingWindows_1253;
extern const OnigEncodingType OnigEncodingWindows_1254;
extern const OnigEncodingType OnigEncodingWindows_1257;
extern const OnigEncodingType OnigEncodingBIG5;
extern const OnigEncodingType OnigEncodingGB18030;
extern
int onigenc_ascii_only_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);
extern
int onigenc_mbclen_approximate(const OnigUChar* p,const OnigUChar* e, const struct OnigEncodingTypeST* enc);
extern
OnigUChar* onigenc_step_back(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, int n);



extern
int onigenc_init(void);
extern
int onigenc_set_default_encoding(OnigEncoding enc);
extern
OnigEncoding onigenc_get_default_encoding(void);
extern
OnigUChar* onigenc_get_right_adjust_char_head_with_prev(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, const OnigUChar** prev);
extern
OnigUChar* onigenc_get_prev_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
OnigUChar* onigenc_get_left_adjust_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
OnigUChar* onigenc_get_right_adjust_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
int onigenc_strlen(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern
int onigenc_strlen_null(OnigEncoding enc, const OnigUChar* p);
extern
int onigenc_str_bytelen_null(OnigEncoding enc, const OnigUChar* p);
typedef unsigned int OnigOptionType;
typedef struct {
  unsigned int op;
  unsigned int op2;
  unsigned int behavior;
  OnigOptionType options;
  OnigMetaCharTableType meta_char_table;
} OnigSyntaxType;

extern const OnigSyntaxType OnigSyntaxASIS;
extern const OnigSyntaxType OnigSyntaxPosixBasic;
extern const OnigSyntaxType OnigSyntaxPosixExtended;
extern const OnigSyntaxType OnigSyntaxEmacs;
extern const OnigSyntaxType OnigSyntaxGrep;
extern const OnigSyntaxType OnigSyntaxGnuRegex;
extern const OnigSyntaxType OnigSyntaxJava;
extern const OnigSyntaxType OnigSyntaxPerl58;
extern const OnigSyntaxType OnigSyntaxPerl58_NG;
extern const OnigSyntaxType OnigSyntaxPerl;
extern const OnigSyntaxType OnigSyntaxRuby;
extern const OnigSyntaxType OnigSyntaxPython;
extern const OnigSyntaxType* OnigDefaultSyntax;
typedef struct OnigCaptureTreeNodeStruct {
  int group;
  OnigPosition beg;
  OnigPosition end;
  int allocated;
  int num_childs;
  struct OnigCaptureTreeNodeStruct** childs;
} OnigCaptureTreeNode;


struct re_registers {
  int allocated;
  int num_regs;
  OnigPosition* beg;
  OnigPosition* end;

  OnigCaptureTreeNode* history_root;
};
typedef struct re_registers OnigRegion;

typedef struct {
  OnigEncoding enc;
  OnigUChar* par;
  OnigUChar* par_end;
} OnigErrorInfo;

typedef struct {
  int lower;
  int upper;
} OnigRepeatRange;

typedef void (*OnigWarnFunc)(const char* s);
extern void onig_null_warn(const char* s);




typedef struct re_pattern_buffer {

  unsigned char* p;
  unsigned int used;
  unsigned int alloc;

  int num_mem;
  int num_repeat;
  int num_null_check;
  int num_comb_exp_check;
  int num_call;
  unsigned int capture_history;
  unsigned int bt_mem_start;
  unsigned int bt_mem_end;
  int stack_pop_level;
  int repeat_range_alloc;

  OnigOptionType options;

  OnigRepeatRange* repeat_range;

  OnigEncoding enc;
  const OnigSyntaxType* syntax;
  void* name_table;
  OnigCaseFoldType case_fold_flag;


  int optimize;
  int threshold_len;
  int anchor;
  OnigDistance anchor_dmin;
  OnigDistance anchor_dmax;
  int sub_anchor;
  unsigned char *exact;
  unsigned char *exact_end;
  unsigned char map[256];
  int *int_map;
  int *int_map_backward;
  OnigDistance dmin;
  OnigDistance dmax;


  struct re_pattern_buffer* chain;
} OnigRegexType;

typedef OnigRegexType* OnigRegex;


typedef OnigRegexType regex_t;



typedef struct {
  int num_of_elements;
  OnigEncoding pattern_enc;
  OnigEncoding target_enc;
  const OnigSyntaxType* syntax;
  OnigOptionType option;
  OnigCaseFoldType case_fold_flag;
} OnigCompileInfo;


extern
int onig_initialize(OnigEncoding encodings[], int n);
extern
int onig_init(void);
extern
int onig_error_code_to_str(OnigUChar* s, OnigPosition err_code, ...);
extern
void onig_set_warn_func(OnigWarnFunc f);
extern
void onig_set_verb_warn_func(OnigWarnFunc f);
extern
int onig_new(OnigRegex*, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax, OnigErrorInfo* einfo);
extern
int onig_reg_init(OnigRegex reg, OnigOptionType option, OnigCaseFoldType case_fold_flag, OnigEncoding enc, const OnigSyntaxType* syntax);
extern
int onig_new_without_alloc(OnigRegex, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax, OnigErrorInfo* einfo);
extern
int onig_new_deluxe(OnigRegex* reg, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigCompileInfo* ci, OnigErrorInfo* einfo);
extern
void onig_free(OnigRegex);
extern
void onig_free_body(OnigRegex);
extern
OnigPosition onig_scan(OnigRegex reg, const OnigUChar* str, const OnigUChar* end, OnigRegion* region, OnigOptionType option, int (*scan_callback)(OnigPosition, OnigPosition, OnigRegion*, void*), void* callback_arg);
extern
OnigPosition onig_search(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* start, const OnigUChar* range, OnigRegion* region, OnigOptionType option);
extern
OnigPosition onig_search_gpos(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* global_pos, const OnigUChar* start, const OnigUChar* range, OnigRegion* region, OnigOptionType option);
extern
OnigPosition onig_match(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* at, OnigRegion* region, OnigOptionType option);
extern
OnigRegion* onig_region_new(void);
extern
void onig_region_init(OnigRegion* region);
extern
void onig_region_free(OnigRegion* region, int free_self);
extern
void onig_region_copy(OnigRegion* to, const OnigRegion* from);
extern
void onig_region_clear(OnigRegion* region);
extern
int onig_region_resize(OnigRegion* region, int n);
extern
int onig_region_set(OnigRegion* region, int at, int beg, int end);
extern
int onig_name_to_group_numbers(OnigRegex reg, const OnigUChar* name, const OnigUChar* name_end, int** nums);
extern
int onig_name_to_backref_number(OnigRegex reg, const OnigUChar* name, const OnigUChar* name_end, const OnigRegion *region);
extern
int onig_foreach_name(OnigRegex reg, int (*func)(const OnigUChar*, const OnigUChar*,int,int*,OnigRegex,void*), void* arg);
extern
int onig_number_of_names(const OnigRegexType *reg);
extern
int onig_number_of_captures(const OnigRegexType *reg);
extern
int onig_number_of_capture_histories(const OnigRegexType *reg);
extern
OnigCaptureTreeNode* onig_get_capture_tree(OnigRegion* region);
extern
int onig_capture_tree_traverse(OnigRegion* region, int at, int(*callback_func)(int,OnigPosition,OnigPosition,int,int,void*), void* arg);
extern
int onig_noname_group_capture_is_active(const OnigRegexType *reg);
extern
OnigEncoding onig_get_encoding(const OnigRegexType *reg);
extern
OnigOptionType onig_get_options(const OnigRegexType *reg);
extern
OnigCaseFoldType onig_get_case_fold_flag(const OnigRegexType *reg);
extern
const OnigSyntaxType* onig_get_syntax(const OnigRegexType *reg);
extern
int onig_set_default_syntax(const OnigSyntaxType* syntax);
extern
void onig_copy_syntax(OnigSyntaxType* to, const OnigSyntaxType* from);
extern
unsigned int onig_get_syntax_op(const OnigSyntaxType* syntax);
extern
unsigned int onig_get_syntax_op2(const OnigSyntaxType* syntax);
extern
unsigned int onig_get_syntax_behavior(const OnigSyntaxType* syntax);
extern
OnigOptionType onig_get_syntax_options(const OnigSyntaxType* syntax);
extern
void onig_set_syntax_op(OnigSyntaxType* syntax, unsigned int op);
extern
void onig_set_syntax_op2(OnigSyntaxType* syntax, unsigned int op2);
extern
void onig_set_syntax_behavior(OnigSyntaxType* syntax, unsigned int behavior);
extern
void onig_set_syntax_options(OnigSyntaxType* syntax, OnigOptionType options);
extern
int onig_set_meta_char(OnigSyntaxType* syntax, unsigned int what, OnigCodePoint code);
extern
void onig_copy_encoding(OnigEncodingType *to, OnigEncoding from);
extern
OnigCaseFoldType onig_get_default_case_fold_flag(void);
extern
int onig_set_default_case_fold_flag(OnigCaseFoldType case_fold_flag);
extern
unsigned int onig_get_match_stack_limit_size(void);
extern
int onig_set_match_stack_limit_size(unsigned int size);
extern
unsigned int onig_get_parse_depth_limit(void);
extern
int onig_set_parse_depth_limit(unsigned int depth);
extern
int onig_end(void);
extern
const char* onig_version(void);
extern
const char* onig_copyright(void);




typedef struct {
  OnigCodePoint from;
  OnigCodePoint to;
} OnigPairCaseFoldCodes;
typedef struct {
  short int len;
  const OnigUChar name[6];
  int ctype;
} PosixBracketEntryType;
extern int onigenc_ascii_apply_all_case_fold(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, OnigEncoding enc);
extern int onigenc_ascii_get_case_fold_codes_by_str(OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[], OnigEncoding enc);
extern int onigenc_apply_all_case_fold_with_map(int map_size, const OnigPairCaseFoldCodes map[], int ess_tsett_flag, OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg);
extern int onigenc_get_case_fold_codes_by_str_with_map(int map_size, const OnigPairCaseFoldCodes map[], int ess_tsett_flag, OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[]);
extern int onigenc_not_support_get_ctype_code_range(OnigCtype ctype, OnigCodePoint* sb_out, const OnigCodePoint* ranges[], OnigEncoding enc);
extern int onigenc_is_mbc_newline_0x0a(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_single_byte_ascii_only_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);



extern int onigenc_ascii_mbc_case_fold(OnigCaseFoldType flag, const OnigUChar** p, const OnigUChar* end, OnigUChar* lower, OnigEncoding enc);
extern int onigenc_single_byte_mbc_enc_len(const OnigUChar* p, const OnigUChar* e, OnigEncoding enc);
extern OnigCodePoint onigenc_single_byte_mbc_to_code(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_single_byte_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_single_byte_code_to_mbc(OnigCodePoint code, OnigUChar *buf, OnigEncoding enc);
extern OnigUChar* onigenc_single_byte_left_adjust_char_head(const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_always_true_is_allowed_reverse_match(const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_always_false_is_allowed_reverse_match(const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_ascii_is_code_ctype(OnigCodePoint code, unsigned int ctype, OnigEncoding enc);


extern OnigCodePoint onigenc_mbn_mbc_to_code(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_mbn_mbc_case_fold(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar** p, const OnigUChar* end, OnigUChar* lower);
extern int onigenc_mb2_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_mb2_code_to_mbc(OnigEncoding enc, OnigCodePoint code, OnigUChar *buf);
extern int onigenc_minimum_property_name_to_ctype(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_unicode_property_name_to_ctype(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_mb2_is_code_ctype(OnigEncoding enc, OnigCodePoint code, unsigned int ctype);
extern int onigenc_mb4_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_mb4_code_to_mbc(OnigEncoding enc, OnigCodePoint code, OnigUChar *buf);
extern int onigenc_mb4_is_code_ctype(OnigEncoding enc, OnigCodePoint code, unsigned int ctype);

extern int onigenc_unicode_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);



extern int onigenc_unicode_is_code_ctype(OnigCodePoint code, unsigned int ctype, OnigEncoding enc);
extern int onigenc_utf16_32_get_ctype_code_range(OnigCtype ctype, OnigCodePoint *sb_out, const OnigCodePoint* ranges[], OnigEncoding enc);
extern int onigenc_unicode_ctype_code_range(int ctype, const OnigCodePoint* ranges[]);
extern int onigenc_unicode_get_case_fold_codes_by_str(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[]);
extern int onigenc_unicode_mbc_case_fold(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar** pp, const OnigUChar* end, OnigUChar* fold);
extern int onigenc_unicode_apply_all_case_fold(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, OnigEncoding enc);
extern const OnigUChar OnigEncISO_8859_1_ToLowerCaseTable[];
extern const OnigUChar OnigEncISO_8859_1_ToUpperCaseTable[];

extern int
onigenc_with_ascii_strncmp(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, const OnigUChar* sascii , int n);
extern int
onigenc_with_ascii_strnicmp(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, const OnigUChar* sascii , int n);
extern OnigUChar*
onigenc_step(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, int n);


extern int onig_is_in_code_range(const OnigUChar* p, OnigCodePoint code);

extern OnigEncoding OnigEncDefaultCharEncoding;
extern const OnigUChar OnigEncAsciiToLowerCaseTable[];
extern const OnigUChar OnigEncAsciiToUpperCaseTable[];
extern const unsigned short OnigEncAsciiCtypeTable[];

typedef unsigned int BitStatusType;
typedef unsigned int Bits;



typedef Bits BitSet[((1 << 8) / ((int )sizeof(Bits) * 8))];
typedef Bits* BitSetRef;
typedef struct _BBuf {
  OnigUChar* p;
  unsigned int used;
  unsigned int alloc;
} BBuf;
enum OpCode {
  OP_FINISH = 0,
  OP_END = 1,

  OP_EXACT1 = 2,
  OP_EXACT2,
  OP_EXACT3,
  OP_EXACT4,
  OP_EXACT5,
  OP_EXACTN,
  OP_EXACTMB2N1,
  OP_EXACTMB2N2,
  OP_EXACTMB2N3,
  OP_EXACTMB2N,
  OP_EXACTMB3N,
  OP_EXACTMBN,

  OP_EXACT1_IC,
  OP_EXACTN_IC,

  OP_CCLASS,
  OP_CCLASS_MB,
  OP_CCLASS_MIX,
  OP_CCLASS_NOT,
  OP_CCLASS_MB_NOT,
  OP_CCLASS_MIX_NOT,

  OP_ANYCHAR,
  OP_ANYCHAR_ML,
  OP_ANYCHAR_STAR,
  OP_ANYCHAR_ML_STAR,
  OP_ANYCHAR_STAR_PEEK_NEXT,
  OP_ANYCHAR_ML_STAR_PEEK_NEXT,

  OP_WORD,
  OP_NOT_WORD,
  OP_WORD_BOUND,
  OP_NOT_WORD_BOUND,
  OP_WORD_BEGIN,
  OP_WORD_END,

  OP_ASCII_WORD,
  OP_NOT_ASCII_WORD,
  OP_ASCII_WORD_BOUND,
  OP_NOT_ASCII_WORD_BOUND,
  OP_ASCII_WORD_BEGIN,
  OP_ASCII_WORD_END,

  OP_BEGIN_BUF,
  OP_END_BUF,
  OP_BEGIN_LINE,
  OP_END_LINE,
  OP_SEMI_END_BUF,
  OP_BEGIN_POSITION,

  OP_BACKREF1,
  OP_BACKREF2,
  OP_BACKREFN,
  OP_BACKREFN_IC,
  OP_BACKREF_MULTI,
  OP_BACKREF_MULTI_IC,
  OP_BACKREF_WITH_LEVEL,

  OP_MEMORY_START,
  OP_MEMORY_START_PUSH,
  OP_MEMORY_END_PUSH,
  OP_MEMORY_END_PUSH_REC,
  OP_MEMORY_END,
  OP_MEMORY_END_REC,

  OP_KEEP,

  OP_FAIL,
  OP_JUMP,
  OP_PUSH,
  OP_POP,
  OP_PUSH_OR_JUMP_EXACT1,
  OP_PUSH_IF_PEEK_NEXT,
  OP_REPEAT,
  OP_REPEAT_NG,
  OP_REPEAT_INC,
  OP_REPEAT_INC_NG,
  OP_REPEAT_INC_SG,
  OP_REPEAT_INC_NG_SG,
  OP_NULL_CHECK_START,
  OP_NULL_CHECK_END,
  OP_NULL_CHECK_END_MEMST,
  OP_NULL_CHECK_END_MEMST_PUSH,

  OP_PUSH_POS,
  OP_POP_POS,
  OP_PUSH_POS_NOT,
  OP_FAIL_POS,
  OP_PUSH_STOP_BT,
  OP_POP_STOP_BT,
  OP_LOOK_BEHIND,
  OP_PUSH_LOOK_BEHIND_NOT,
  OP_FAIL_LOOK_BEHIND_NOT,
  OP_PUSH_ABSENT_POS,
  OP_ABSENT,
  OP_ABSENT_END,

  OP_CALL,
  OP_RETURN,

  OP_CONDITION,

  OP_STATE_CHECK_PUSH,
  OP_STATE_CHECK_PUSH_OR_JUMP,
  OP_STATE_CHECK,
  OP_STATE_CHECK_ANYCHAR_STAR,
  OP_STATE_CHECK_ANYCHAR_ML_STAR,


  OP_SET_OPTION_PUSH,
  OP_SET_OPTION
};

typedef int RelAddrType;
typedef int AbsAddrType;
typedef int LengthType;
typedef int RepeatNumType;
typedef short int MemNumType;
typedef short int StateCheckNumType;
typedef void* PointerType;
typedef struct {
  int type;


} NodeBase;

typedef struct {
  NodeBase base;
  unsigned int flags;
  BitSet bs;
  BBuf* mbuf;
} CClassNode;

typedef intptr_t OnigStackIndex;

typedef struct _OnigStackType {
  unsigned int type;
  union {
    struct {
      OnigUChar *pcode;
      OnigUChar *pstr;
      OnigUChar *pstr_prev;



      OnigUChar *pkeep;
    } state;
    struct {
      int count;
      OnigUChar *pcode;
      int num;
    } repeat;
    struct {
      OnigStackIndex si;
    } repeat_inc;
    struct {
      int num;
      OnigUChar *pstr;

      OnigStackIndex start;
      OnigStackIndex end;
    } mem;
    struct {
      int num;
      OnigUChar *pstr;
    } null_check;

    struct {
      OnigUChar *ret_addr;
      int num;
      OnigUChar *pstr;
    } call_frame;

    struct {
      OnigUChar *abs_pstr;
      const OnigUChar *end_pstr;
    } absent_pos;
  } u;
} OnigStackType;

typedef struct {
  void* stack_p;
  size_t stack_n;
  OnigOptionType options;
  OnigRegion* region;
  const OnigUChar* start;
  const OnigUChar* gpos;

  OnigPosition best_len;
  OnigUChar* best_s;





} OnigMatchArg;





typedef struct OnigEndCallListItem {
  struct OnigEndCallListItem* next;
  void (*func)(void);
} OnigEndCallListItemType;

extern void onig_add_end_call(void (*func)(void));
extern OnigUChar* onig_error_code_to_format(OnigPosition code);
extern void onig_vsnprintf_with_pattern(OnigUChar buf[], int bufsize, OnigEncoding enc, OnigUChar* pat, OnigUChar* pat_end, const OnigUChar *fmt, va_list args);
extern void onig_snprintf_with_pattern(OnigUChar buf[], int bufsize, OnigEncoding enc, OnigUChar* pat, OnigUChar* pat_end, const OnigUChar *fmt, ...);
extern int onig_bbuf_init(BBuf* buf, OnigDistance size);
extern int onig_compile(regex_t* reg, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigErrorInfo* einfo);



extern void onig_transfer(regex_t* to, regex_t* from);
extern int onig_is_code_in_cc(OnigEncoding enc, OnigCodePoint code, CClassNode* cc);
extern int onig_is_code_in_cc_len(int enclen, OnigCodePoint code, CClassNode* cc);


typedef void hash_table_type;














struct _IO_FILE;
typedef struct _IO_FILE __FILE;



struct _IO_FILE;


typedef struct _IO_FILE FILE;




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




struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];



  };
extern int stat (const char *restrict __file,
   struct stat *restrict __buf)  ;



extern int fstat (int __fd, struct stat *__buf)  ;
extern int stat64 (const char *restrict __file,
     struct stat64 *restrict __buf)  ;
extern int fstat64 (int __fd, struct stat64 *__buf)  ;







extern int fstatat (int __fd, const char *restrict __file,
      struct stat *restrict __buf, int __flag)
      ;
extern int fstatat64 (int __fd, const char *restrict __file,
        struct stat64 *restrict __buf, int __flag)
      ;







extern int lstat (const char *restrict __file,
    struct stat *restrict __buf)  ;
extern int lstat64 (const char *restrict __file,
      struct stat64 *restrict __buf)
      ;





extern int chmod (const char *__file, __mode_t __mode)
      ;





extern int lchmod (const char *__file, __mode_t __mode)
      ;




extern int fchmod (int __fd, __mode_t __mode) ;





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
       ;






extern __mode_t umask (__mode_t __mask) ;




extern __mode_t getumask (void) ;



extern int mkdir (const char *__path, __mode_t __mode)
      ;





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
      ;






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
      ;





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev)  ;





extern int mkfifo (const char *__path, __mode_t __mode)
      ;





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
      ;





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
      ;




extern int futimens (int __fd, const struct timespec __times[2]) ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
      ;
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf)  ;
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf)  ;
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
      ;
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
      ;
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf)  ;
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf)  ;
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
      ;

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev)  ;

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
      ;








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
void *ruby_xmalloc(size_t) ;
void *ruby_xmalloc2(size_t,size_t) ;
void *ruby_xcalloc(size_t,size_t) ;
void *ruby_xrealloc(void*,size_t) ;
void *ruby_xrealloc2(void*,size_t,size_t) ;
void ruby_xfree(void*);



typedef unsigned long st_data_t;






typedef struct st_table st_table;

typedef st_data_t st_index_t;




typedef int st_compare_func(st_data_t, st_data_t);
typedef st_index_t st_hash_func(st_data_t);

typedef char st_check_for_sizeof_st_index_t[8 == (int)sizeof(st_index_t) ? 1 : -1];


struct st_hash_type {
    int (*compare)( );
    st_index_t (*hash)( );
};
typedef struct st_table_entry st_table_entry;

struct st_table_entry;

struct st_table {

    unsigned char entry_power, bin_power, size_ind;

    unsigned int rebuilds_num;
    const struct st_hash_type *type;

    st_index_t num_entries;

    st_index_t *bins;



    st_index_t entries_start, entries_bound;

    st_table_entry *entries;
};



enum st_retval {ST_CONTINUE, ST_STOP, ST_DELETE, ST_CHECK};

st_table *onig_st_init_table(const struct st_hash_type *);
st_table *onig_st_init_table_with_size(const struct st_hash_type *, st_index_t);
st_table *onig_st_init_numtable(void);
st_table *onig_st_init_numtable_with_size(st_index_t);
st_table *onig_st_init_strtable(void);
st_table *onig_st_init_strtable_with_size(st_index_t);
st_table *st_init_strcasetable(void);
st_table *st_init_strcasetable_with_size(st_index_t);
int onig_st_delete(st_table *, st_data_t *, st_data_t *);
int onig_st_delete_safe(st_table *, st_data_t *, st_data_t *, st_data_t);
int st_shift(st_table *, st_data_t *, st_data_t *);
int onig_st_insert(st_table *, st_data_t, st_data_t);
int st_insert2(st_table *, st_data_t, st_data_t, st_data_t (*)(st_data_t));
int onig_st_lookup(st_table *, st_data_t, st_data_t *);
int st_get_key(st_table *, st_data_t, st_data_t *);
typedef int st_update_callback_func(st_data_t *key, st_data_t *value, st_data_t arg, int existing);



int st_update(st_table *table, st_data_t key, st_update_callback_func *func, st_data_t arg);
int onig_st_foreach(st_table *, int (*)(), st_data_t);
int st_foreach_check(st_table *, int (*)(), st_data_t, st_data_t);
st_index_t st_keys(st_table *table, st_data_t *keys, st_index_t size);
st_index_t st_keys_check(st_table *table, st_data_t *keys, st_index_t size, st_data_t never);
st_index_t st_values(st_table *table, st_data_t *values, st_index_t size);
st_index_t st_values_check(st_table *table, st_data_t *values, st_index_t size, st_data_t never);
void onig_st_add_direct(st_table *, st_data_t, st_data_t);
void onig_st_free_table(st_table *);
void onig_st_cleanup_safe(st_table *, st_data_t);
void st_clear(st_table *);
st_table *onig_st_copy(st_table *);
 int st_numcmp(st_data_t, st_data_t);
 st_index_t st_numhash(st_data_t);
 int st_locale_insensitive_strcasecmp(const char *s1, const char *s2);
 int st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);


 size_t st_memsize(const st_table *);
 st_index_t st_hash(const void *ptr, size_t len, st_index_t h);
 st_index_t st_hash_uint32(st_index_t h, uint32_t i);
 st_index_t st_hash_uint(st_index_t h, st_index_t i);
 st_index_t st_hash_end(st_index_t h);
 st_index_t st_hash_start(st_index_t h);



typedef st_data_t hash_data_type;

extern hash_table_type* onig_st_init_strend_table_with_size(st_index_t size);
extern int onig_st_lookup_strend(hash_table_type* table, const OnigUChar* str_key, const OnigUChar* end_key, hash_data_type *value);
extern int onig_st_insert_strend(hash_table_type* table, const OnigUChar* str_key, const OnigUChar* end_key, hash_data_type value);


extern size_t onig_memsize(const regex_t *reg);
extern size_t onig_region_memsize(const struct re_registers *regs);



typedef struct {
  NodeBase base;
  OnigUChar* s;
  OnigUChar* end;
  unsigned int flag;
  int capa;
  OnigUChar buf[24];
} StrNode;

typedef struct {
  NodeBase base;
  int state;
  struct _Node* target;
  int lower;
  int upper;
  int greedy;
  int target_empty_info;
  struct _Node* head_exact;
  struct _Node* next_head_exact;
  int is_refered;



} QtfrNode;

typedef struct {
  NodeBase base;
  int state;
  int type;
  int regnum;
  OnigOptionType option;
  AbsAddrType call_addr;
  struct _Node* target;

  OnigDistance min_len;
  OnigDistance max_len;
  int char_len;
  int opt_count;
} EncloseNode;



typedef struct {
  int offset;
  struct _Node* target;
} UnsetAddr;

typedef struct {
  int num;
  int alloc;
  UnsetAddr* us;
} UnsetAddrList;

typedef struct {
  NodeBase base;
  int state;
  int group_num;
  OnigUChar* name;
  OnigUChar* name_end;
  struct _Node* target;
  UnsetAddrList* unset_addr_list;
} CallNode;



typedef struct {
  NodeBase base;
  int state;
  int back_num;
  int back_static[6];
  int* back_dynamic;
  int nest_level;
} BRefNode;

typedef struct {
  NodeBase base;
  int type;
  struct _Node* target;
  int char_len;
  int ascii_range;
} AnchorNode;

typedef struct {
  NodeBase base;
  struct _Node* car;
  struct _Node* cdr;
} ConsAltNode;

typedef struct {
  NodeBase base;
  int ctype;
  int not;
  int ascii_range;
} CtypeNode;

typedef struct _Node {
  union {
    NodeBase base;
    StrNode str;
    CClassNode cclass;
    QtfrNode qtfr;
    EncloseNode enclose;
    BRefNode bref;
    AnchorNode anchor;
    ConsAltNode cons;
    CtypeNode ctype;

    CallNode call;

  } u;
} Node;
typedef struct {
  OnigOptionType option;
  OnigCaseFoldType case_fold_flag;
  OnigEncoding enc;
  const OnigSyntaxType* syntax;
  BitStatusType capture_history;
  BitStatusType bt_mem_start;
  BitStatusType bt_mem_end;
  BitStatusType backrefed_mem;
  OnigUChar* pattern;
  OnigUChar* pattern_end;
  OnigUChar* error;
  OnigUChar* error_end;
  regex_t* reg;

  UnsetAddrList* unset_addr_list;

  int num_call;
  int num_mem;

  int num_named;

  int mem_alloc;
  Node* mem_nodes_static[8];
  Node** mem_nodes_dynamic;






  unsigned int parse_depth;
  int warnings_flag;

  const char* sourcefile;
  int sourceline;

} ScanEnv;







typedef struct {
  int new_val;
} GroupNumRemap;

extern int onig_renumber_name_table(regex_t* reg, GroupNumRemap* map);


extern int onig_strncmp(const OnigUChar* s1, const OnigUChar* s2, int n);
extern void onig_strcpy(OnigUChar* dest, const OnigUChar* src, const OnigUChar* end);
extern void onig_scan_env_set_error_string(ScanEnv* env, int ecode, OnigUChar* arg, OnigUChar* arg_end);
extern int onig_scan_unsigned_number(OnigUChar** src, const OnigUChar* end, OnigEncoding enc);
extern void onig_reduce_nested_quantifier(Node* pnode, Node* cnode);
extern void onig_node_conv_to_str_node(Node* node, int raw);
extern int onig_node_str_cat(Node* node, const OnigUChar* s, const OnigUChar* end);
extern int onig_node_str_set(Node* node, const OnigUChar* s, const OnigUChar* end);
extern void onig_node_free(Node* node);
extern Node* onig_node_new_enclose(int type);
extern Node* onig_node_new_anchor(int type);
extern Node* onig_node_new_str(const OnigUChar* s, const OnigUChar* end);
extern Node* onig_node_new_list(Node* left, Node* right);
extern Node* onig_node_list_add(Node* list, Node* x);
extern Node* onig_node_new_alt(Node* left, Node* right);
extern void onig_node_str_clear(Node* node);
extern int onig_names_free(regex_t* reg);
extern int onig_parse_make_tree(Node** root, const OnigUChar* pattern, const OnigUChar* end, regex_t* reg, ScanEnv* env);
extern int onig_free_shared_cclass_table(void);








OnigCaseFoldType OnigDefaultCaseFoldFlag = (1<<30);

extern OnigCaseFoldType
onig_get_default_case_fold_flag(void)
{
  return OnigDefaultCaseFoldFlag;
}

extern int
onig_set_default_case_fold_flag(OnigCaseFoldType case_fold_flag)
{
  OnigDefaultCaseFoldFlag = case_fold_flag;
  return 0;
}
static void
swap_node(Node* a, Node* b)
{
  Node c;
  c = *a; *a = *b; *b = c;

  if (((a)->u.base.type) == 0) {
    StrNode* sn = (&((a)->u.str));
    if (sn->capa == 0) {
      size_t len = sn->end - sn->s;
      sn->s = sn->buf;
      sn->end = sn->s + len;
    }
  }

  if (((b)->u.base.type) == 0) {
    StrNode* sn = (&((b)->u.str));
    if (sn->capa == 0) {
      size_t len = sn->end - sn->s;
      sn->s = sn->buf;
      sn->end = sn->s + len;
    }
  }
}

static OnigDistance
distance_add(OnigDistance d1, OnigDistance d2)
{
  if (d1 == ~((OnigDistance )0) || d2 == ~((OnigDistance )0))
    return ~((OnigDistance )0);
  else {
    if (d1 <= ~((OnigDistance )0) - d2) return d1 + d2;
    else return ~((OnigDistance )0);
  }
}

static OnigDistance
distance_multiply(OnigDistance d, int m)
{
  if (m == 0) return 0;

  if (d < ~((OnigDistance )0) / m)
    return d * m;
  else
    return ~((OnigDistance )0);
}

static int
bitset_is_empty(BitSetRef bs)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) {
    if (bs[i] != 0) return 0;
  }
  return 1;
}
extern int
onig_bbuf_init(BBuf* buf, OnigDistance size)
{
  if (size <= 0) {
    size = 0;
    buf->p = ((void*)0);
  }
  else {
    buf->p = (OnigUChar* )ruby_xmalloc(size);
    if ((((void*)(buf->p)) == (void*)0)) return(-5);
  }

  buf->alloc = (unsigned int )size;
  buf->used = 0;
  return 0;
}




static int
unset_addr_list_init(UnsetAddrList* uslist, int size)
{
  UnsetAddr* p;

  p = (UnsetAddr* )ruby_xmalloc(sizeof(UnsetAddr)* size);
  if ((((void*)(p)) == (void*)0)) return -5;
  uslist->num = 0;
  uslist->alloc = size;
  uslist->us = p;
  return 0;
}

static void
unset_addr_list_end(UnsetAddrList* uslist)
{
  if ((((void*)(uslist->us)) != (void*)0))
    ruby_xfree(uslist->us);
}

static int
unset_addr_list_add(UnsetAddrList* uslist, int offset, struct _Node* node)
{
  UnsetAddr* p;
  int size;

  if (uslist->num >= uslist->alloc) {
    size = uslist->alloc * 2;
    p = (UnsetAddr* )ruby_xrealloc(uslist->us, sizeof(UnsetAddr) * size);
    if ((((void*)(p)) == (void*)0)) return -5;
    uslist->alloc = size;
    uslist->us = p;
  }

  uslist->us[uslist->num].offset = offset;
  uslist->us[uslist->num].target = node;
  uslist->num++;
  return 0;
}



static int
add_opcode(regex_t* reg, int opcode)
{
  do{ int used = ((reg)->used) + 1; if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); ((reg))->p[((reg)->used)] = (OnigUChar )((opcode)); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}
static int
add_rel_addr(regex_t* reg, int addr)
{
  RelAddrType ra = (RelAddrType )addr;

  do{ int used = ((reg)->used) + (int )(((int )sizeof(RelAddrType))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((&ra)), (((int )sizeof(RelAddrType)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_abs_addr(regex_t* reg, int addr)
{
  AbsAddrType ra = (AbsAddrType )addr;

  do{ int used = ((reg)->used) + (int )(((int )sizeof(AbsAddrType))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((&ra)), (((int )sizeof(AbsAddrType)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_length(regex_t* reg, OnigDistance len)
{
  LengthType l = (LengthType )len;

  do{ int used = ((reg)->used) + (int )(((int )sizeof(LengthType))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((&l)), (((int )sizeof(LengthType)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_mem_num(regex_t* reg, int num)
{
  MemNumType n = (MemNumType )num;

  do{ int used = ((reg)->used) + (int )(((int )sizeof(MemNumType))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((&n)), (((int )sizeof(MemNumType)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}
static int
add_option(regex_t* reg, OnigOptionType option)
{
  do{ int used = ((reg)->used) + (int )(((int )sizeof(OnigOptionType))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((&option)), (((int )sizeof(OnigOptionType)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_opcode_rel_addr(regex_t* reg, int opcode, int addr)
{
  int r;

  r = add_opcode(reg, opcode);
  if (r) return r;
  r = add_rel_addr(reg, addr);
  return r;
}

static int
add_bytes(regex_t* reg, OnigUChar* bytes, OnigDistance len)
{
  do{ int used = ((reg)->used) + (int )((len)); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((bytes)), ((len))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_bitset(regex_t* reg, BitSetRef bs)
{
  do{ int used = ((reg)->used) + (int )(((int )sizeof(BitSet))); if (((reg))->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { (((reg)))->alloc *= 2; } while ((((reg)))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc((((reg)))->p, (((reg)))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (((reg)))->p = tmp;} while (0); memcpy(((reg))->p + ((reg)->used), ((bs)), (((int )sizeof(BitSet)))); if (((reg))->used < (unsigned int )used) ((reg))->used = used;} while (0);
  return 0;
}

static int
add_opcode_option(regex_t* reg, int opcode, OnigOptionType option)
{
  int r;

  r = add_opcode(reg, opcode);
  if (r) return r;
  r = add_option(reg, option);
  return r;
}

static int compile_length_tree(Node* node, regex_t* reg);
static int compile_tree(Node* node, regex_t* reg);






static int
select_str_opcode(int mb_len, OnigDistance byte_len, int ignore_case)
{
  int op;
  OnigDistance str_len = (byte_len + mb_len - 1) / mb_len;

  if (ignore_case) {
    switch (str_len) {
    case 1: op = OP_EXACT1_IC; break;
    default: op = OP_EXACTN_IC; break;
    }
  }
  else {
    switch (mb_len) {
    case 1:
      switch (str_len) {
      case 1: op = OP_EXACT1; break;
      case 2: op = OP_EXACT2; break;
      case 3: op = OP_EXACT3; break;
      case 4: op = OP_EXACT4; break;
      case 5: op = OP_EXACT5; break;
      default: op = OP_EXACTN; break;
      }
      break;

    case 2:
      switch (str_len) {
      case 1: op = OP_EXACTMB2N1; break;
      case 2: op = OP_EXACTMB2N2; break;
      case 3: op = OP_EXACTMB2N3; break;
      default: op = OP_EXACTMB2N; break;
      }
      break;

    case 3:
      op = OP_EXACTMB3N;
      break;

    default:
      op = OP_EXACTMBN;
      break;
    }
  }
  return op;
}

static int
compile_tree_empty_check(Node* node, regex_t* reg, int empty_info)
{
  int r;
  int saved_num_null_check = reg->num_null_check;

  if (empty_info != 0) {
    r = add_opcode(reg, OP_NULL_CHECK_START);
    if (r) return r;
    r = add_mem_num(reg, reg->num_null_check);
    if (r) return r;
    reg->num_null_check++;
  }

  r = compile_tree(node, reg);
  if (r) return r;

  if (empty_info != 0) {
    if (empty_info == 1)
      r = add_opcode(reg, OP_NULL_CHECK_END);
    else if (empty_info == 2)
      r = add_opcode(reg, OP_NULL_CHECK_END_MEMST);
    else if (empty_info == 3)
      r = add_opcode(reg, OP_NULL_CHECK_END_MEMST_PUSH);

    if (r) return r;
    r = add_mem_num(reg, saved_num_null_check);
  }
  return r;
}


static int
compile_call(CallNode* node, regex_t* reg)
{
  int r;

  r = add_opcode(reg, OP_CALL);
  if (r) return r;
  r = unset_addr_list_add(node->unset_addr_list, ((reg)->used),
                          node->target);
  if (r) return r;
  r = add_abs_addr(reg, 0 );
  return r;
}


static int
compile_tree_n_times(Node* node, int n, regex_t* reg)
{
  int i, r;

  for (i = 0; i < n; i++) {
    r = compile_tree(node, reg);
    if (r) return r;
  }
  return 0;
}

static int
add_compile_string_length(OnigUChar* s , int mb_len, OnigDistance byte_len,
                          regex_t* reg , int ignore_case)
{
  int len;
  int op = select_str_opcode(mb_len, byte_len, ignore_case);

  len = 1;

  if (op == OP_EXACTMBN) len += (int )sizeof(LengthType);
  if (((op) == OP_EXACTN || (op) == OP_EXACTMB2N || (op) == OP_EXACTMB3N || (op) == OP_EXACTMBN || (op) == OP_EXACTN_IC))
    len += (int )sizeof(LengthType);

  len += (int )byte_len;
  return len;
}

static int
add_compile_string(OnigUChar* s, int mb_len, OnigDistance byte_len,
                   regex_t* reg, int ignore_case)
{
  int op = select_str_opcode(mb_len, byte_len, ignore_case);
  add_opcode(reg, op);

  if (op == OP_EXACTMBN)
    add_length(reg, mb_len);

  if (((op) == OP_EXACTN || (op) == OP_EXACTMB2N || (op) == OP_EXACTMB3N || (op) == OP_EXACTMBN || (op) == OP_EXACTN_IC)) {
    if (op == OP_EXACTN_IC)
      add_length(reg, byte_len);
    else
      add_length(reg, byte_len / mb_len);
  }

  add_bytes(reg, s, byte_len);
  return 0;
}


static int
compile_length_string_node(Node* node, regex_t* reg)
{
  int rlen, r, len, prev_len, blen, ambig;
  OnigEncoding enc = reg->enc;
  OnigUChar *p, *prev;
  StrNode* sn;

  sn = (&((node)->u.str));
  if (sn->end <= sn->s)
    return 0;

  ambig = (((node)->u.str.flag & (1<<1)) != 0);

  p = prev = sn->s;
  prev_len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,sn->end,enc));
  p += prev_len;
  blen = prev_len;
  rlen = 0;

  for (; p < sn->end; ) {
    len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,sn->end,enc));
    if (len == prev_len || ambig) {
      blen += len;
    }
    else {
      r = add_compile_string_length(prev, prev_len, blen, reg, ambig);
      rlen += r;
      prev = p;
      blen = len;
      prev_len = len;
    }
    p += len;
  }
  r = add_compile_string_length(prev, prev_len, blen, reg, ambig);
  rlen += r;
  return rlen;
}

static int
compile_length_string_raw_node(StrNode* sn, regex_t* reg)
{
  if (sn->end <= sn->s)
    return 0;

  return add_compile_string_length(sn->s, 1 , sn->end - sn->s, reg, 0);
}

static int
compile_string_node(Node* node, regex_t* reg)
{
  int r, len, prev_len, blen, ambig;
  OnigEncoding enc = reg->enc;
  OnigUChar *p, *prev, *end;
  StrNode* sn;

  sn = (&((node)->u.str));
  if (sn->end <= sn->s)
    return 0;

  end = sn->end;
  ambig = (((node)->u.str.flag & (1<<1)) != 0);

  p = prev = sn->s;
  prev_len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc));
  p += prev_len;
  blen = prev_len;

  for (; p < end; ) {
    len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc));
    if (len == prev_len || ambig) {
      blen += len;
    }
    else {
      r = add_compile_string(prev, prev_len, blen, reg, ambig);
      if (r) return r;

      prev = p;
      blen = len;
      prev_len = len;
    }

    p += len;
  }
  return add_compile_string(prev, prev_len, blen, reg, ambig);
}

static int
compile_string_raw_node(StrNode* sn, regex_t* reg)
{
  if (sn->end <= sn->s)
    return 0;

  return add_compile_string(sn->s, 1 , sn->end - sn->s, reg, 0);
}

static int
add_multi_byte_cclass(BBuf* mbuf, regex_t* reg)
{

  add_length(reg, mbuf->used);
  return add_bytes(reg, mbuf->p, mbuf->used);
}

static int
compile_length_cclass_node(CClassNode* cc, regex_t* reg)
{
  int len;

  if ((((void*)(cc->mbuf)) == (void*)0)) {
    len = 1 + (int )sizeof(BitSet);
  }
  else {
    if (((reg->enc)->min_enc_len) > 1 || bitset_is_empty(cc->bs)) {
      len = 1;
    }
    else {
      len = 1 + (int )sizeof(BitSet);
    }

    len += (int )sizeof(LengthType) + cc->mbuf->used;



  }

  return len;
}

static int
compile_cclass_node(CClassNode* cc, regex_t* reg)
{
  int r;

  if ((((void*)(cc->mbuf)) == (void*)0)) {
    if (((((cc)->flags) & ((1<<0))) != 0))
      add_opcode(reg, OP_CCLASS_NOT);
    else
      add_opcode(reg, OP_CCLASS);

    r = add_bitset(reg, cc->bs);
  }
  else {
    if (((reg->enc)->min_enc_len) > 1 || bitset_is_empty(cc->bs)) {
      if (((((cc)->flags) & ((1<<0))) != 0))
 add_opcode(reg, OP_CCLASS_MB_NOT);
      else
 add_opcode(reg, OP_CCLASS_MB);

      r = add_multi_byte_cclass(cc->mbuf, reg);
    }
    else {
      if (((((cc)->flags) & ((1<<0))) != 0))
 add_opcode(reg, OP_CCLASS_MIX_NOT);
      else
 add_opcode(reg, OP_CCLASS_MIX);

      r = add_bitset(reg, cc->bs);
      if (r) return r;
      r = add_multi_byte_cclass(cc->mbuf, reg);
    }
  }

  return r;
}

static int
entry_repeat_range(regex_t* reg, int id, int lower, int upper)
{


  OnigRepeatRange* p;

  if (reg->repeat_range_alloc == 0) {
    p = (OnigRepeatRange* )ruby_xmalloc(sizeof(OnigRepeatRange) * 4);
    if ((((void*)(p)) == (void*)0)) return -5;
    reg->repeat_range = p;
    reg->repeat_range_alloc = 4;
  }
  else if (reg->repeat_range_alloc <= id) {
    int n;
    n = reg->repeat_range_alloc + 4;
    p = (OnigRepeatRange* )ruby_xrealloc(reg->repeat_range,
                                    sizeof(OnigRepeatRange) * n);
    if ((((void*)(p)) == (void*)0)) return -5;
    reg->repeat_range = p;
    reg->repeat_range_alloc = n;
  }
  else {
    p = reg->repeat_range;
  }

  p[id].lower = lower;
  p[id].upper = (((upper) == -1) ? 0x7fffffff : upper);
  return 0;
}

static int
compile_range_repeat_node(QtfrNode* qn, int target_len, int empty_info,
                          regex_t* reg)
{
  int r;
  int num_repeat = reg->num_repeat;

  r = add_opcode(reg, qn->greedy ? OP_REPEAT : OP_REPEAT_NG);
  if (r) return r;
  r = add_mem_num(reg, num_repeat);
  reg->num_repeat++;
  if (r) return r;
  r = add_rel_addr(reg, target_len + (1 + (int )sizeof(MemNumType)));
  if (r) return r;

  r = entry_repeat_range(reg, num_repeat, qn->lower, qn->upper);
  if (r) return r;

  r = compile_tree_empty_check(qn->target, reg, empty_info);
  if (r) return r;

  if (

      reg->num_call > 0 ||

      (((qn)->state & (1<<12)) != 0)) {
    r = add_opcode(reg, qn->greedy ? OP_REPEAT_INC_SG : OP_REPEAT_INC_NG_SG);
  }
  else {
    r = add_opcode(reg, qn->greedy ? OP_REPEAT_INC : OP_REPEAT_INC_NG);
  }
  if (r) return r;
  r = add_mem_num(reg, num_repeat);
  return r;
}

static int
is_anychar_star_quantifier(QtfrNode* qn)
{
  if (qn->greedy && ((qn->upper) == -1) &&
      ((qn->target)->u.base.type) == 3)
    return 1;
  else
    return 0;
}
static int
compile_length_quantifier_node(QtfrNode* qn, regex_t* reg)
{
  int len, mod_tlen;
  int infinite = ((qn->upper) == -1);
  int empty_info = qn->target_empty_info;
  int tlen = compile_length_tree(qn->target, reg);

  if (tlen < 0) return tlen;


  if (((qn->target)->u.base.type) == 3) {
    if (qn->greedy && infinite) {
      if ((((void*)(qn->next_head_exact)) != (void*)0))
 return (1 + 1) + tlen * qn->lower;
      else
 return 1 + tlen * qn->lower;
    }
  }

  if (empty_info != 0)
    mod_tlen = tlen + ((1 + (int )sizeof(MemNumType)) + (1 + (int )sizeof(MemNumType)));
  else
    mod_tlen = tlen;

  if (infinite &&
      (qn->lower <= 1 || tlen * qn->lower <= 50)) {
    if (qn->lower == 1 && tlen > 50) {
      len = (1 + (int )sizeof(RelAddrType));
    }
    else {
      len = tlen * qn->lower;
    }

    if (qn->greedy) {





      if ((((void*)(qn->next_head_exact)) != (void*)0))
 len += (1 + (int )sizeof(RelAddrType) + 1) + mod_tlen + (1 + (int )sizeof(RelAddrType));
      else
 len += (1 + (int )sizeof(RelAddrType)) + mod_tlen + (1 + (int )sizeof(RelAddrType));
    }
    else
      len += (1 + (int )sizeof(RelAddrType)) + mod_tlen + (1 + (int )sizeof(RelAddrType));
  }
  else if (qn->upper == 0 && qn->is_refered != 0) {
    len = (1 + (int )sizeof(RelAddrType)) + tlen;
  }
  else if (!infinite && qn->greedy &&
           (qn->upper == 1 || (tlen + (1 + (int )sizeof(RelAddrType))) * qn->upper
                                      <= 50)) {
    len = tlen * qn->lower;
    len += ((1 + (int )sizeof(RelAddrType)) + tlen) * (qn->upper - qn->lower);
  }
  else if (!qn->greedy && qn->upper == 1 && qn->lower == 0) {
    len = (1 + (int )sizeof(RelAddrType)) + (1 + (int )sizeof(RelAddrType)) + tlen;
  }
  else {
    len = (1 + (int )sizeof(MemNumType))
        + mod_tlen + 1 + (int )sizeof(RelAddrType) + (int )sizeof(MemNumType);
  }

  return len;
}

static int
compile_quantifier_node(QtfrNode* qn, regex_t* reg)
{
  int i, r, mod_tlen;
  int infinite = ((qn->upper) == -1);
  int empty_info = qn->target_empty_info;
  int tlen = compile_length_tree(qn->target, reg);

  if (tlen < 0) return tlen;

  if (is_anychar_star_quantifier(qn)) {
    r = compile_tree_n_times(qn->target, qn->lower, reg);
    if (r) return r;
    if ((((void*)(qn->next_head_exact)) != (void*)0)) {
      if (((reg->options) & ((1U << 1) << 1)))
 r = add_opcode(reg, OP_ANYCHAR_ML_STAR_PEEK_NEXT);
      else
 r = add_opcode(reg, OP_ANYCHAR_STAR_PEEK_NEXT);
      if (r) return r;
      return add_bytes(reg, (&((qn->next_head_exact)->u.str))->s, 1);
    }
    else {
      if (((reg->options) & ((1U << 1) << 1)))
 return add_opcode(reg, OP_ANYCHAR_ML_STAR);
      else
 return add_opcode(reg, OP_ANYCHAR_STAR);
    }
  }

  if (empty_info != 0)
    mod_tlen = tlen + ((1 + (int )sizeof(MemNumType)) + (1 + (int )sizeof(MemNumType)));
  else
    mod_tlen = tlen;

  if (infinite &&
      (qn->lower <= 1 || tlen * qn->lower <= 50)) {
    if (qn->lower == 1 && tlen > 50) {
      if (qn->greedy) {





 if ((((void*)(qn->next_head_exact)) != (void*)0))
   r = add_opcode_rel_addr(reg, OP_JUMP, (1 + (int )sizeof(RelAddrType) + 1));
 else
   r = add_opcode_rel_addr(reg, OP_JUMP, (1 + (int )sizeof(RelAddrType)));
      }
      else {
 r = add_opcode_rel_addr(reg, OP_JUMP, (1 + (int )sizeof(RelAddrType)));
      }
      if (r) return r;
    }
    else {
      r = compile_tree_n_times(qn->target, qn->lower, reg);
      if (r) return r;
    }

    if (qn->greedy) {
      if ((((void*)(qn->next_head_exact)) != (void*)0)) {
 r = add_opcode_rel_addr(reg, OP_PUSH_IF_PEEK_NEXT,
    mod_tlen + (1 + (int )sizeof(RelAddrType)));
 if (r) return r;
 add_bytes(reg, (&((qn->next_head_exact)->u.str))->s, 1);
 r = compile_tree_empty_check(qn->target, reg, empty_info);
 if (r) return r;
 r = add_opcode_rel_addr(reg, OP_JUMP,
          -(mod_tlen + (int )(1 + (int )sizeof(RelAddrType)) + (int )(1 + (int )sizeof(RelAddrType) + 1)));
      }
      else {
 r = add_opcode_rel_addr(reg, OP_PUSH, mod_tlen + (1 + (int )sizeof(RelAddrType)));
 if (r) return r;
 r = compile_tree_empty_check(qn->target, reg, empty_info);
 if (r) return r;
 r = add_opcode_rel_addr(reg, OP_JUMP,
       -(mod_tlen + (int )(1 + (int )sizeof(RelAddrType)) + (int )(1 + (int )sizeof(RelAddrType))));
      }
    }
    else {
      r = add_opcode_rel_addr(reg, OP_JUMP, mod_tlen);
      if (r) return r;
      r = compile_tree_empty_check(qn->target, reg, empty_info);
      if (r) return r;
      r = add_opcode_rel_addr(reg, OP_PUSH, -(mod_tlen + (int )(1 + (int )sizeof(RelAddrType))));
    }
  }
  else if (qn->upper == 0 && qn->is_refered != 0) {
    r = add_opcode_rel_addr(reg, OP_JUMP, tlen);
    if (r) return r;
    r = compile_tree(qn->target, reg);
  }
  else if (!infinite && qn->greedy &&
           (qn->upper == 1 || (tlen + (1 + (int )sizeof(RelAddrType))) * qn->upper
                                  <= 50)) {
    int n = qn->upper - qn->lower;

    r = compile_tree_n_times(qn->target, qn->lower, reg);
    if (r) return r;

    for (i = 0; i < n; i++) {
      r = add_opcode_rel_addr(reg, OP_PUSH,
      (n - i) * tlen + (n - i - 1) * (1 + (int )sizeof(RelAddrType)));
      if (r) return r;
      r = compile_tree(qn->target, reg);
      if (r) return r;
    }
  }
  else if (!qn->greedy && qn->upper == 1 && qn->lower == 0) {
    r = add_opcode_rel_addr(reg, OP_PUSH, (1 + (int )sizeof(RelAddrType)));
    if (r) return r;
    r = add_opcode_rel_addr(reg, OP_JUMP, tlen);
    if (r) return r;
    r = compile_tree(qn->target, reg);
  }
  else {
    r = compile_range_repeat_node(qn, mod_tlen, empty_info, reg);
  }
  return r;
}


static int
compile_length_option_node(EncloseNode* node, regex_t* reg)
{
  int tlen;
  OnigOptionType prev = reg->options;

  reg->options = node->option;
  tlen = compile_length_tree(node->target, reg);
  reg->options = prev;

  if (tlen < 0) return tlen;

  if (0) {
    return (1 + (int )sizeof(OnigOptionType)) + (1 + (int )sizeof(OnigOptionType)) + 1
           + tlen + (1 + (int )sizeof(OnigOptionType));
  }
  else
    return tlen;
}

static int
compile_option_node(EncloseNode* node, regex_t* reg)
{
  int r;
  OnigOptionType prev = reg->options;

  if (0) {
    r = add_opcode_option(reg, OP_SET_OPTION_PUSH, node->option);
    if (r) return r;
    r = add_opcode_option(reg, OP_SET_OPTION, prev);
    if (r) return r;
    r = add_opcode(reg, OP_FAIL);
    if (r) return r;
  }

  reg->options = node->option;
  r = compile_tree(node->target, reg);
  reg->options = prev;

  if (0) {
    if (r) return r;
    r = add_opcode_option(reg, OP_SET_OPTION, prev);
  }
  return r;
}

static int
compile_length_enclose_node(EncloseNode* node, regex_t* reg)
{
  int len;
  int tlen;

  if (node->type == (1<<1))
    return compile_length_option_node(node, reg);

  if (node->target) {
    tlen = compile_length_tree(node->target, reg);
    if (tlen < 0) return tlen;
  }
  else
    tlen = 0;

  switch (node->type) {
  case (1<<0):

    if ((((node)->state & (1<<8)) != 0)) {
      len = (1 + (int )sizeof(MemNumType)) + tlen
   + (1 + (int )sizeof(AbsAddrType)) + (1 + (int )sizeof(RelAddrType)) + 1;
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1)))
 len += ((((node)->state & (1<<7)) != 0)
  ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));
      else
 len += ((((node)->state & (1<<7)) != 0)
  ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));
    }
    else if ((((node)->state & (1<<7)) != 0)) {
      len = (1 + (int )sizeof(MemNumType));
      len += tlen + (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1))
       ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));
    }
    else

    {
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_start) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_start) & 1)))
 len = (1 + (int )sizeof(MemNumType));
      else
 len = (1 + (int )sizeof(MemNumType));

      len += tlen + (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1))
       ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));
    }
    break;

  case (1<<2):
    if ((((node)->state & (1<<6)) != 0)) {
      QtfrNode* qn = (&((node->target)->u.qtfr));
      tlen = compile_length_tree(qn->target, reg);
      if (tlen < 0) return tlen;

      len = tlen * qn->lower
   + (1 + (int )sizeof(RelAddrType)) + tlen + 1 + (1 + (int )sizeof(RelAddrType));
    }
    else {
      len = 1 + tlen + 1;
    }
    break;

  case (1<<3):
    len = (1 + (int )sizeof(MemNumType) + (int )sizeof(RelAddrType));
    if (((node->target)->u.base.type) == 9) {
      Node* x = node->target;

      tlen = compile_length_tree(((&((x)->u.cons))->car), reg);
      if (tlen < 0) return tlen;
      len += tlen + (1 + (int )sizeof(RelAddrType));
      if (((&((x)->u.cons))->cdr) == ((void*)0)) return -11;
      x = ((&((x)->u.cons))->cdr);
      tlen = compile_length_tree(((&((x)->u.cons))->car), reg);
      if (tlen < 0) return tlen;
      len += tlen;
      if (((&((x)->u.cons))->cdr) != ((void*)0)) return -124;
    }
    else {
      return -11;
    }
    break;

  case (1<<4):
    len = 1 + (1 + (int )sizeof(RelAddrType)) + tlen + 1;
    break;

  default:
    return -6;
    break;
  }

  return len;
}

static int get_char_length_tree(Node* node, regex_t* reg, int* len);

static int
compile_enclose_node(EncloseNode* node, regex_t* reg)
{
  int r, len;

  if (node->type == (1<<1))
    return compile_option_node(node, reg);

  switch (node->type) {
  case (1<<0):

    if ((((node)->state & (1<<8)) != 0)) {
      r = add_opcode(reg, OP_CALL);
      if (r) return r;
      node->call_addr = ((reg)->used) + (int )sizeof(AbsAddrType) + (1 + (int )sizeof(RelAddrType));
      node->state |= (1<<9);
      r = add_abs_addr(reg, (int )node->call_addr);
      if (r) return r;
      len = compile_length_tree(node->target, reg);
      len += ((1 + (int )sizeof(MemNumType)) + 1);
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1)))
 len += ((((node)->state & (1<<7)) != 0)
  ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));
      else
 len += ((((node)->state & (1<<7)) != 0)
  ? (1 + (int )sizeof(MemNumType)) : (1 + (int )sizeof(MemNumType)));

      r = add_opcode_rel_addr(reg, OP_JUMP, len);
      if (r) return r;
    }

    if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_start) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_start) & 1)))
      r = add_opcode(reg, OP_MEMORY_START_PUSH);
    else
      r = add_opcode(reg, OP_MEMORY_START);
    if (r) return r;
    r = add_mem_num(reg, node->regnum);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;

    if ((((node)->state & (1<<8)) != 0)) {
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1)))
 r = add_opcode(reg, ((((node)->state & (1<<7)) != 0)
        ? OP_MEMORY_END_PUSH_REC : OP_MEMORY_END_PUSH));
      else
 r = add_opcode(reg, ((((node)->state & (1<<7)) != 0)
        ? OP_MEMORY_END_REC : OP_MEMORY_END));

      if (r) return r;
      r = add_mem_num(reg, node->regnum);
      if (r) return r;
      r = add_opcode(reg, OP_RETURN);
    }
    else if ((((node)->state & (1<<7)) != 0)) {
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1)))
 r = add_opcode(reg, OP_MEMORY_END_PUSH_REC);
      else
 r = add_opcode(reg, OP_MEMORY_END_REC);
      if (r) return r;
      r = add_mem_num(reg, node->regnum);
    }
    else

    {
      if (((node->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((reg->bt_mem_end) & ((BitStatusType )1 << node->regnum)) : ((reg->bt_mem_end) & 1)))
 r = add_opcode(reg, OP_MEMORY_END_PUSH);
      else
 r = add_opcode(reg, OP_MEMORY_END);
      if (r) return r;
      r = add_mem_num(reg, node->regnum);
    }
    break;

  case (1<<2):
    if ((((node)->state & (1<<6)) != 0)) {
      QtfrNode* qn = (&((node->target)->u.qtfr));
      r = compile_tree_n_times(qn->target, qn->lower, reg);
      if (r) return r;

      len = compile_length_tree(qn->target, reg);
      if (len < 0) return len;

      r = add_opcode_rel_addr(reg, OP_PUSH, len + 1 + (1 + (int )sizeof(RelAddrType)));
      if (r) return r;
      r = compile_tree(qn->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_POP);
      if (r) return r;
      r = add_opcode_rel_addr(reg, OP_JUMP,
  -((int )(1 + (int )sizeof(RelAddrType)) + len + (int )1 + (int )(1 + (int )sizeof(RelAddrType))));
    }
    else {
      r = add_opcode(reg, OP_PUSH_STOP_BT);
      if (r) return r;
      r = compile_tree(node->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_POP_STOP_BT);
    }
    break;

  case (1<<3):
    r = add_opcode(reg, OP_CONDITION);
    if (r) return r;
    r = add_mem_num(reg, node->regnum);
    if (r) return r;

    if (((node->target)->u.base.type) == 9) {
      Node* x = node->target;
      int len2;

      len = compile_length_tree(((&((x)->u.cons))->car), reg);
      if (len < 0) return len;
      if (((&((x)->u.cons))->cdr) == ((void*)0)) return -11;
      x = ((&((x)->u.cons))->cdr);
      len2 = compile_length_tree(((&((x)->u.cons))->car), reg);
      if (len2 < 0) return len2;
      if (((&((x)->u.cons))->cdr) != ((void*)0)) return -124;

      x = node->target;
      r = add_rel_addr(reg, len + (1 + (int )sizeof(RelAddrType)));
      if (r) return r;
      r = compile_tree(((&((x)->u.cons))->car), reg);
      if (r) return r;
      r = add_opcode_rel_addr(reg, OP_JUMP, len2);
      if (r) return r;
      x = ((&((x)->u.cons))->cdr);
      r = compile_tree(((&((x)->u.cons))->car), reg);
    }
    else {
      return -11;
    }
    break;

  case (1<<4):
    len = compile_length_tree(node->target, reg);
    if (len < 0) return len;

    r = add_opcode(reg, OP_PUSH_ABSENT_POS);
    if (r) return r;
    r = add_opcode_rel_addr(reg, OP_ABSENT, len + 1);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
    r = add_opcode(reg, OP_ABSENT_END);
    break;

  default:
    return -6;
    break;
  }

  return r;
}

static int
compile_length_anchor_node(AnchorNode* node, regex_t* reg)
{
  int len;
  int tlen = 0;

  if (node->target) {
    tlen = compile_length_tree(node->target, reg);
    if (tlen < 0) return tlen;
  }

  switch (node->type) {
  case (1<<10):
    len = 1 + tlen + 1;
    break;
  case (1<<11):
    len = (1 + (int )sizeof(RelAddrType)) + tlen + 1;
    break;
  case (1<<12):
    len = (1 + (int )sizeof(LengthType)) + tlen;
    break;
  case (1<<13):
    len = (1 + (int )sizeof(RelAddrType) + (int )sizeof(LengthType)) + tlen + 1;
    break;

  default:
    len = 1;
    break;
  }

  return len;
}

static int
compile_anchor_node(AnchorNode* node, regex_t* reg)
{
  int r, len;

  switch (node->type) {
  case (1<<0): r = add_opcode(reg, OP_BEGIN_BUF); break;
  case (1<<3): r = add_opcode(reg, OP_END_BUF); break;
  case (1<<1): r = add_opcode(reg, OP_BEGIN_LINE); break;
  case (1<<5): r = add_opcode(reg, OP_END_LINE); break;
  case (1<<4): r = add_opcode(reg, OP_SEMI_END_BUF); break;
  case (1<<2): r = add_opcode(reg, OP_BEGIN_POSITION); break;

  case (1<<6):
    if (node->ascii_range) r = add_opcode(reg, OP_ASCII_WORD_BOUND);
    else r = add_opcode(reg, OP_WORD_BOUND);
    break;
  case (1<<7):
    if (node->ascii_range) r = add_opcode(reg, OP_NOT_ASCII_WORD_BOUND);
    else r = add_opcode(reg, OP_NOT_WORD_BOUND);
    break;

  case (1<<8):
    if (node->ascii_range) r = add_opcode(reg, OP_ASCII_WORD_BEGIN);
    else r = add_opcode(reg, OP_WORD_BEGIN);
    break;
  case (1<<9):
    if (node->ascii_range) r = add_opcode(reg, OP_ASCII_WORD_END);
    else r = add_opcode(reg, OP_WORD_END);
    break;

  case (1<<16): r = add_opcode(reg, OP_KEEP); break;

  case (1<<10):
    r = add_opcode(reg, OP_PUSH_POS);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
    r = add_opcode(reg, OP_POP_POS);
    break;

  case (1<<11):
    len = compile_length_tree(node->target, reg);
    if (len < 0) return len;
    r = add_opcode_rel_addr(reg, OP_PUSH_POS_NOT, len + 1);
    if (r) return r;
    r = compile_tree(node->target, reg);
    if (r) return r;
    r = add_opcode(reg, OP_FAIL_POS);
    break;

  case (1<<12):
    {
      int n;
      r = add_opcode(reg, OP_LOOK_BEHIND);
      if (r) return r;
      if (node->char_len < 0) {
 r = get_char_length_tree(node->target, reg, &n);
 if (r) return -122;
      }
      else
 n = node->char_len;
      r = add_length(reg, n);
      if (r) return r;
      r = compile_tree(node->target, reg);
    }
    break;

  case (1<<13):
    {
      int n;
      len = compile_length_tree(node->target, reg);
      r = add_opcode_rel_addr(reg, OP_PUSH_LOOK_BEHIND_NOT,
      len + 1);
      if (r) return r;
      if (node->char_len < 0) {
 r = get_char_length_tree(node->target, reg, &n);
 if (r) return -122;
      }
      else
 n = node->char_len;
      r = add_length(reg, n);
      if (r) return r;
      r = compile_tree(node->target, reg);
      if (r) return r;
      r = add_opcode(reg, OP_FAIL_LOOK_BEHIND_NOT);
    }
    break;

  default:
    return -6;
    break;
  }

  return r;
}

static int
compile_length_tree(Node* node, regex_t* reg)
{
  int len, type, r;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    len = 0;
    do {
      r = compile_length_tree(((&((node)->u.cons))->car), reg);
      if (r < 0) return r;
      len += r;
    } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    r = len;
    break;

  case 9:
    {
      int n = 0;
      len = 0;
      do {
 r = compile_length_tree(((&((node)->u.cons))->car), reg);
 if (r < 0) return r;
 len += r;
 n++;
      } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
      r = len;
      r += ((1 + (int )sizeof(RelAddrType)) + (1 + (int )sizeof(RelAddrType))) * (n - 1);
    }
    break;

  case 0:
    if ((((node)->u.str.flag & (1<<0)) != 0))
      r = compile_length_string_raw_node((&((node)->u.str)), reg);
    else
      r = compile_length_string_node(node, reg);
    break;

  case 1:
    r = compile_length_cclass_node((&((node)->u.cclass)), reg);
    break;

  case 2:
  case 3:
    r = 1;
    break;

  case 4:
    {
      BRefNode* br = (&((node)->u.bref));


      if ((((br)->state & (1<<13)) != 0)) {
 r = 1 + (int )sizeof(OnigOptionType) + (int )sizeof(LengthType) +
            (int )sizeof(LengthType) + ((int )sizeof(MemNumType) * br->back_num);
      }
      else

      if (br->back_num == 1) {
 r = ((!((reg->options) & 1U) && br->back_static[0] <= 2)
      ? 1 : (1 + (int )sizeof(MemNumType)));
      }
      else {
 r = 1 + (int )sizeof(LengthType) + ((int )sizeof(MemNumType) * br->back_num);
      }
    }
    break;


  case 10:
    r = (1 + (int )sizeof(AbsAddrType));
    break;


  case 5:
    r = compile_length_quantifier_node((&((node)->u.qtfr)), reg);
    break;

  case 6:
    r = compile_length_enclose_node((&((node)->u.enclose)), reg);
    break;

  case 7:
    r = compile_length_anchor_node((&((node)->u.anchor)), reg);
    break;

  default:
    return -6;
    break;
  }

  return r;
}

static int
compile_tree(Node* node, regex_t* reg)
{
  int n, type, len, pos, r = 0;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    do {
      r = compile_tree(((&((node)->u.cons))->car), reg);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 9:
    {
      Node* x = node;
      len = 0;
      do {
 len += compile_length_tree(((&((x)->u.cons))->car), reg);
 if (((&((x)->u.cons))->cdr) != ((void*)0)) {
   len += (1 + (int )sizeof(RelAddrType)) + (1 + (int )sizeof(RelAddrType));
 }
      } while ((((void*)(x = ((&((x)->u.cons))->cdr))) != (void*)0));
      pos = reg->used + len;

      do {
 len = compile_length_tree(((&((node)->u.cons))->car), reg);
 if ((((void*)(((&((node)->u.cons))->cdr))) != (void*)0)) {
   r = add_opcode_rel_addr(reg, OP_PUSH, len + (1 + (int )sizeof(RelAddrType)));
   if (r) break;
 }
 r = compile_tree(((&((node)->u.cons))->car), reg);
 if (r) break;
 if ((((void*)(((&((node)->u.cons))->cdr))) != (void*)0)) {
   len = pos - (reg->used + (1 + (int )sizeof(RelAddrType)));
   r = add_opcode_rel_addr(reg, OP_JUMP, len);
   if (r) break;
 }
      } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 0:
    if ((((node)->u.str.flag & (1<<0)) != 0))
      r = compile_string_raw_node((&((node)->u.str)), reg);
    else
      r = compile_string_node(node, reg);
    break;

  case 1:
    r = compile_cclass_node((&((node)->u.cclass)), reg);
    break;

  case 2:
    {
      int op;

      switch ((&((node)->u.ctype))->ctype) {
      case 12:
 if ((&((node)->u.ctype))->ascii_range != 0) {
   if ((&((node)->u.ctype))->not != 0) op = OP_NOT_ASCII_WORD;
   else op = OP_ASCII_WORD;
 }
 else {
   if ((&((node)->u.ctype))->not != 0) op = OP_NOT_WORD;
   else op = OP_WORD;
 }
 break;
      default:
 return -6;
 break;
      }
      r = add_opcode(reg, op);
    }
    break;

  case 3:
    if (((reg->options) & ((1U << 1) << 1)))
      r = add_opcode(reg, OP_ANYCHAR_ML);
    else
      r = add_opcode(reg, OP_ANYCHAR);
    break;

  case 4:
    {
      BRefNode* br = (&((node)->u.bref));


      if ((((br)->state & (1<<13)) != 0)) {
 r = add_opcode(reg, OP_BACKREF_WITH_LEVEL);
 if (r) return r;
 r = add_option(reg, (reg->options & 1U));
 if (r) return r;
 r = add_length(reg, br->nest_level);
 if (r) return r;

 goto add_bacref_mems;
      }
      else

      if (br->back_num == 1) {
 n = br->back_static[0];
 if (((reg->options) & 1U)) {
   r = add_opcode(reg, OP_BACKREFN_IC);
   if (r) return r;
   r = add_mem_num(reg, n);
 }
 else {
   switch (n) {
   case 1: r = add_opcode(reg, OP_BACKREF1); break;
   case 2: r = add_opcode(reg, OP_BACKREF2); break;
   default:
     r = add_opcode(reg, OP_BACKREFN);
     if (r) return r;
     r = add_mem_num(reg, n);
     break;
   }
 }
      }
      else {
 int i;
 int* p;

 if (((reg->options) & 1U)) {
   r = add_opcode(reg, OP_BACKREF_MULTI_IC);
 }
 else {
   r = add_opcode(reg, OP_BACKREF_MULTI);
 }
 if (r) return r;


      add_bacref_mems:

 r = add_length(reg, br->back_num);
 if (r) return r;
 p = ((((void*)((br)->back_dynamic)) != (void*)0) ? (br)->back_dynamic : (br)->back_static);;
 for (i = br->back_num - 1; i >= 0; i--) {
   r = add_mem_num(reg, p[i]);
   if (r) return r;
 }
      }
    }
    break;


  case 10:
    r = compile_call((&((node)->u.call)), reg);
    break;


  case 5:
    r = compile_quantifier_node((&((node)->u.qtfr)), reg);
    break;

  case 6:
    r = compile_enclose_node((&((node)->u.enclose)), reg);
    break;

  case 7:
    r = compile_anchor_node((&((node)->u.anchor)), reg);
    break;

  default:



    break;
  }

  return r;
}



static int
noname_disable_map(Node** plink, GroupNumRemap* map, int* counter)
{
  int r = 0;
  Node* node = *plink;

  switch (((node)->u.base.type)) {
  case 8:
  case 9:
    do {
      r = noname_disable_map(&(((&((node)->u.cons))->car)), map, counter);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 5:
    {
      Node** ptarget = &((&((node)->u.qtfr))->target);
      Node* old = *ptarget;
      r = noname_disable_map(ptarget, map, counter);
      if (*ptarget != old && ((*ptarget)->u.base.type) == 5) {
 onig_reduce_nested_quantifier(node, *ptarget);
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      if (en->type == (1<<0)) {
 if ((((en)->state & (1<<10)) != 0)) {
   (*counter)++;
   map[en->regnum].new_val = *counter;
   en->regnum = *counter;
 }
 else if (en->regnum != 0) {
   *plink = en->target;
   en->target = ((Node* )0);
   onig_node_free(node);
   r = noname_disable_map(plink, map, counter);
   break;
 }
      }
      r = noname_disable_map(&(en->target), map, counter);
    }
    break;

  case 7:
    if ((&((node)->u.anchor))->target)
      r = noname_disable_map(&((&((node)->u.anchor))->target), map, counter);
    break;

  default:
    break;
  }

  return r;
}

static int
renumber_node_backref(Node* node, GroupNumRemap* map)
{
  int i, pos, n, old_num;
  int *backs;
  BRefNode* bn = (&((node)->u.bref));

  if (! (((bn)->state & (1<<11)) != 0))
    return -209;

  old_num = bn->back_num;
  if ((((void*)(bn->back_dynamic)) == (void*)0))
    backs = bn->back_static;
  else
    backs = bn->back_dynamic;

  for (i = 0, pos = 0; i < old_num; i++) {
    n = map[backs[i]].new_val;
    if (n > 0) {
      backs[pos] = n;
      pos++;
    }
  }

  bn->back_num = pos;
  return 0;
}

static int
renumber_by_map(Node* node, GroupNumRemap* map)
{
  int r = 0;

  switch (((node)->u.base.type)) {
  case 8:
  case 9:
    do {
      r = renumber_by_map(((&((node)->u.cons))->car), map);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;
  case 5:
    r = renumber_by_map((&((node)->u.qtfr))->target, map);
    break;
  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      if (en->type == (1<<3))
 en->regnum = map[en->regnum].new_val;
      r = renumber_by_map(en->target, map);
    }
    break;

  case 4:
    r = renumber_node_backref(node, map);
    break;

  case 7:
    if ((&((node)->u.anchor))->target)
      r = renumber_by_map((&((node)->u.anchor))->target, map);
    break;

  default:
    break;
  }

  return r;
}

static int
numbered_ref_check(Node* node)
{
  int r = 0;

  switch (((node)->u.base.type)) {
  case 8:
  case 9:
    do {
      r = numbered_ref_check(((&((node)->u.cons))->car));
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;
  case 5:
    r = numbered_ref_check((&((node)->u.qtfr))->target);
    break;
  case 6:
    r = numbered_ref_check((&((node)->u.enclose))->target);
    break;

  case 4:
    if (! ((((&((node)->u.bref)))->state & (1<<11)) != 0))
      return -209;
    break;

  case 7:
    if ((&((node)->u.anchor))->target)
      r = numbered_ref_check((&((node)->u.anchor))->target);
    break;

  default:
    break;
  }

  return r;
}

static int
disable_noname_group_capture(Node** root, regex_t* reg, ScanEnv* env)
{
  int r, i, pos, counter;
  BitStatusType loc;
  GroupNumRemap* map;

  map = (GroupNumRemap* )__builtin_alloca (sizeof(GroupNumRemap) * (env->num_mem + 1));
  if ((((void*)(map)) == (void*)0)) return -5;
  for (i = 1; i <= env->num_mem; i++) {
    map[i].new_val = 0;
  }
  counter = 0;
  r = noname_disable_map(root, map, &counter);
  if (r != 0) return r;

  r = renumber_by_map(*root, map);
  if (r != 0) return r;

  for (i = 1, pos = 1; i <= env->num_mem; i++) {
    if (map[i].new_val > 0) {
      ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[pos] = ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[i];
      pos++;
    }
  }

  loc = env->capture_history;
  (env->capture_history) = 0;
  for (i = 1; i <= 31; i++) {
    if (((i) < (int )(sizeof(BitStatusType) * 8) ? ((loc) & ((BitStatusType )1 << i)) : ((loc) & 1))) {
      do { if ((map[i].new_val) < (int )(sizeof(BitStatusType) * 8)) (env->capture_history) |= (1 << (map[i].new_val));} while (0);
    }
  }

  env->num_mem = env->num_named;
  reg->num_mem = env->num_named;

  return onig_renumber_name_table(reg, map);
}



static int
unset_addr_list_fix(UnsetAddrList* uslist, regex_t* reg)
{
  int i, offset;
  EncloseNode* en;
  AbsAddrType addr;

  for (i = 0; i < uslist->num; i++) {
    en = (&((uslist->us[i].target)->u.enclose));
    if (! (((en)->state & (1<<9)) != 0)) return -11;
    addr = en->call_addr;
    offset = uslist->us[i].offset;

    do{ int used = (offset) + (int )((int )sizeof(AbsAddrType)); if ((reg)->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { ((reg))->alloc *= 2; } while (((reg))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc(((reg))->p, ((reg))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((reg))->p = tmp;} while (0); memcpy((reg)->p + (offset), (&addr), ((int )sizeof(AbsAddrType))); if ((reg)->used < (unsigned int )used) (reg)->used = used;} while (0);
  }
  return 0;
}



static int
quantifiers_memory_node_info(Node* node)
{
  int r = 0;

  switch (((node)->u.base.type)) {
  case 8:
  case 9:
    {
      int v;
      do {
 v = quantifiers_memory_node_info(((&((node)->u.cons))->car));
 if (v > r) r = v;
      } while (v >= 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    }
    break;


  case 10:
    if (((((&((node)->u.call)))->state & (1<<7)) != 0)) {
      return 3;
    }
    else
      r = quantifiers_memory_node_info((&((node)->u.call))->target);
    break;


  case 5:
    {
      QtfrNode* qn = (&((node)->u.qtfr));
      if (qn->upper != 0) {
 r = quantifiers_memory_node_info(qn->target);
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      switch (en->type) {
      case (1<<0):
 return 2;
 break;

      case (1<<1):
      case (1<<2):
      case (1<<3):
      case (1<<4):
 r = quantifiers_memory_node_info(en->target);
 break;
      default:
 break;
      }
    }
    break;

  case 4:
  case 0:
  case 2:
  case 1:
  case 3:
  case 7:
  default:
    break;
  }

  return r;
}


static int
get_min_match_length(Node* node, OnigDistance *min, ScanEnv* env)
{
  OnigDistance tmin;
  int r = 0;

  *min = 0;
  switch (((node)->u.base.type)) {
  case 4:
    {
      int i;
      int* backs;
      Node** nodes = ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static);
      BRefNode* br = (&((node)->u.bref));
      if (br->state & (1<<7)) break;

      backs = ((((void*)((br)->back_dynamic)) != (void*)0) ? (br)->back_dynamic : (br)->back_static);;
      if (backs[0] > env->num_mem) return -208;
      r = get_min_match_length(nodes[backs[0]], min, env);
      if (r != 0) break;
      for (i = 1; i < br->back_num; i++) {
 if (backs[i] > env->num_mem) return -208;
 r = get_min_match_length(nodes[backs[i]], &tmin, env);
 if (r != 0) break;
 if (*min > tmin) *min = tmin;
      }
    }
    break;


  case 10:
    if (((((&((node)->u.call)))->state & (1<<7)) != 0)) {
      EncloseNode* en = (&(((&((node)->u.call))->target)->u.enclose));
      if ((((en)->state & (1<<0)) != 0))
 *min = en->min_len;
    }
    else
      r = get_min_match_length((&((node)->u.call))->target, min, env);
    break;


  case 8:
    do {
      r = get_min_match_length(((&((node)->u.cons))->car), &tmin, env);
      if (r == 0) *min += tmin;
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 9:
    {
      Node *x, *y;
      y = node;
      do {
 x = ((&((y)->u.cons))->car);
 r = get_min_match_length(x, &tmin, env);
 if (r != 0) break;
 if (y == node) *min = tmin;
 else if (*min > tmin) *min = tmin;
      } while (r == 0 && (((void*)(y = ((&((y)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 0:
    {
      StrNode* sn = (&((node)->u.str));
      *min = sn->end - sn->s;
    }
    break;

  case 2:
    *min = 1;
    break;

  case 1:
  case 3:
    *min = 1;
    break;

  case 5:
    {
      QtfrNode* qn = (&((node)->u.qtfr));

      if (qn->lower > 0) {
 r = get_min_match_length(qn->target, min, env);
 if (r == 0)
   *min = distance_multiply(*min, qn->lower);
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      switch (en->type) {
      case (1<<0):
        if ((((en)->state & (1<<0)) != 0))
          *min = en->min_len;
        else {
   if (((((&((node)->u.enclose)))->state & (1<<3)) != 0))
     *min = 0;
   else {
     (node)->u.enclose.state |= ((1<<3));
     r = get_min_match_length(en->target, min, env);
     (node)->u.enclose.state &= ~((1<<3));
     if (r == 0) {
       en->min_len = *min;
       (node)->u.enclose.state |= ((1<<0));
     }
   }
        }
        break;

      case (1<<1):
      case (1<<2):
      case (1<<3):
 r = get_min_match_length(en->target, min, env);
 break;

      case (1<<4):
 break;
      }
    }
    break;

  case 7:
  default:
    break;
  }

  return r;
}

static int
get_max_match_length(Node* node, OnigDistance *max, ScanEnv* env)
{
  OnigDistance tmax;
  int r = 0;

  *max = 0;
  switch (((node)->u.base.type)) {
  case 8:
    do {
      r = get_max_match_length(((&((node)->u.cons))->car), &tmax, env);
      if (r == 0)
 *max = distance_add(*max, tmax);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 9:
    do {
      r = get_max_match_length(((&((node)->u.cons))->car), &tmax, env);
      if (r == 0 && *max < tmax) *max = tmax;
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 0:
    {
      StrNode* sn = (&((node)->u.str));
      *max = sn->end - sn->s;
    }
    break;

  case 2:
    *max = ((env->enc)->max_enc_len);
    break;

  case 1:
  case 3:
    *max = ((env->enc)->max_enc_len);
    break;

  case 4:
    {
      int i;
      int* backs;
      Node** nodes = ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static);
      BRefNode* br = (&((node)->u.bref));
      if (br->state & (1<<7)) {
 *max = ~((OnigDistance )0);
 break;
      }
      backs = ((((void*)((br)->back_dynamic)) != (void*)0) ? (br)->back_dynamic : (br)->back_static);;
      for (i = 0; i < br->back_num; i++) {
 if (backs[i] > env->num_mem) return -208;
 r = get_max_match_length(nodes[backs[i]], &tmax, env);
 if (r != 0) break;
 if (*max < tmax) *max = tmax;
      }
    }
    break;


  case 10:
    if (! ((((&((node)->u.call)))->state & (1<<7)) != 0))
      r = get_max_match_length((&((node)->u.call))->target, max, env);
    else
      *max = ~((OnigDistance )0);
    break;


  case 5:
    {
      QtfrNode* qn = (&((node)->u.qtfr));

      if (qn->upper != 0) {
 r = get_max_match_length(qn->target, max, env);
 if (r == 0 && *max != 0) {
   if (! ((qn->upper) == -1))
     *max = distance_multiply(*max, qn->upper);
   else
     *max = ~((OnigDistance )0);
 }
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      switch (en->type) {
      case (1<<0):
 if ((((en)->state & (1<<1)) != 0))
   *max = en->max_len;
 else {
   if (((((&((node)->u.enclose)))->state & (1<<3)) != 0))
     *max = ~((OnigDistance )0);
   else {
     (node)->u.enclose.state |= ((1<<3));
     r = get_max_match_length(en->target, max, env);
     (node)->u.enclose.state &= ~((1<<3));
     if (r == 0) {
       en->max_len = *max;
       (node)->u.enclose.state |= ((1<<1));
     }
   }
 }
 break;

      case (1<<1):
      case (1<<2):
      case (1<<3):
 r = get_max_match_length(en->target, max, env);
 break;

      case (1<<4):
 break;
      }
    }
    break;

  case 7:
  default:
    break;
  }

  return r;
}





static int
get_char_length_tree1(Node* node, regex_t* reg, int* len, int level)
{
  int tlen;
  int r = 0;

  level++;
  *len = 0;
  switch (((node)->u.base.type)) {
  case 8:
    do {
      r = get_char_length_tree1(((&((node)->u.cons))->car), reg, &tlen, level);
      if (r == 0)
 *len = (int )distance_add(*len, tlen);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 9:
    {
      int tlen2;
      int varlen = 0;

      r = get_char_length_tree1(((&((node)->u.cons))->car), reg, &tlen, level);
      while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0)) {
 r = get_char_length_tree1(((&((node)->u.cons))->car), reg, &tlen2, level);
 if (r == 0) {
   if (tlen != tlen2)
     varlen = 1;
 }
      }
      if (r == 0) {
 if (varlen != 0) {
   if (level == 1)
     r = -2;
   else
     r = -1;
 }
 else
   *len = tlen;
      }
    }
    break;

  case 0:
    {
      StrNode* sn = (&((node)->u.str));
      OnigUChar *s = sn->s;
      while (s < sn->end) {
 s += ((reg->enc->max_enc_len == reg->enc->min_enc_len) ? reg->enc->min_enc_len : onigenc_mbclen_approximate(s,sn->end,reg->enc));
 (*len)++;
      }
    }
    break;

  case 5:
    {
      QtfrNode* qn = (&((node)->u.qtfr));
      if (qn->lower == qn->upper) {
 r = get_char_length_tree1(qn->target, reg, &tlen, level);
 if (r == 0)
   *len = (int )distance_multiply(tlen, qn->lower);
      }
      else
 r = -1;
    }
    break;


  case 10:
    if (! ((((&((node)->u.call)))->state & (1<<7)) != 0))
      r = get_char_length_tree1((&((node)->u.call))->target, reg, len, level);
    else
      r = -1;
    break;


  case 2:
    *len = 1;
    break;

  case 1:
  case 3:
    *len = 1;
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      switch (en->type) {
      case (1<<0):

 if ((((en)->state & (1<<2)) != 0))
   *len = en->char_len;
 else {
   r = get_char_length_tree1(en->target, reg, len, level);
   if (r == 0) {
     en->char_len = *len;
     (node)->u.enclose.state |= ((1<<2));
   }
 }
 break;

      case (1<<1):
      case (1<<2):
      case (1<<3):
 r = get_char_length_tree1(en->target, reg, len, level);
 break;
      case (1<<4):
      default:
 break;
      }
    }
    break;

  case 7:
    break;

  default:
    r = -1;
    break;
  }

  return r;
}

static int
get_char_length_tree(Node* node, regex_t* reg, int* len)
{
  return get_char_length_tree1(node, reg, len, 0);
}


static int
is_not_included(Node* x, Node* y, regex_t* reg)
{
  int i;
  OnigDistance len;
  OnigCodePoint code;
  OnigUChar *p;
  int ytype;

 retry:
  ytype = ((y)->u.base.type);
  switch (((x)->u.base.type)) {
  case 2:
    {
      switch (ytype) {
      case 2:
 if ((&((y)->u.ctype))->ctype == (&((x)->u.ctype))->ctype &&
     (&((y)->u.ctype))->not != (&((x)->u.ctype))->not &&
     (&((y)->u.ctype))->ascii_range == (&((x)->u.ctype))->ascii_range)
   return 1;
 else
   return 0;
 break;

      case 1:
      swap:
 {
   Node* tmp;
   tmp = x; x = y; y = tmp;
   goto retry;
 }
 break;

      case 0:
 goto swap;
 break;

      default:
 break;
      }
    }
    break;

  case 1:
    {
      CClassNode* xc = (&((x)->u.cclass));
      switch (ytype) {
      case 2:
 switch ((&((y)->u.ctype))->ctype) {
 case 12:
   if ((&((y)->u.ctype))->not == 0) {
     if ((((void*)(xc->mbuf)) == (void*)0) && !((((xc)->flags) & ((1<<0))) != 0)) {
       for (i = 0; i < (1 << 8); i++) {
  if (((xc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8))))) {
    if ((&((y)->u.ctype))->ascii_range) {
      if ((((i) < 128) && (reg->enc)->is_code_ctype(i,12,reg->enc))) return 0;
    }
    else {
      if ((reg->enc)->is_code_ctype(i,12,reg->enc)) return 0;
    }
  }
       }
       return 1;
     }
     return 0;
   }
   else {
     if ((((void*)(xc->mbuf)) != (void*)0)) return 0;
     for (i = 0; i < (1 << 8); i++) {
       int is_word;
       if ((&((y)->u.ctype))->ascii_range)
  is_word = (((i) < 128) && (reg->enc)->is_code_ctype(i,12,reg->enc));
       else
  is_word = (reg->enc)->is_code_ctype(i,12,reg->enc);
       if (! is_word) {
  if (!((((xc)->flags) & ((1<<0))) != 0)) {
    if (((xc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8)))))
      return 0;
  }
  else {
    if (! ((xc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8)))))
      return 0;
  }
       }
     }
     return 1;
   }
   break;

 default:
   break;
 }
 break;

      case 1:
 {
   int v;
   CClassNode* yc = (&((y)->u.cclass));

   for (i = 0; i < (1 << 8); i++) {
     v = ((xc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8))));
     if ((v != 0 && !((((xc)->flags) & ((1<<0))) != 0)) ||
  (v == 0 && ((((xc)->flags) & ((1<<0))) != 0))) {
       v = ((yc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8))));
       if ((v != 0 && !((((yc)->flags) & ((1<<0))) != 0)) ||
    (v == 0 && ((((yc)->flags) & ((1<<0))) != 0)))
  return 0;
     }
   }
   if (((((void*)(xc->mbuf)) == (void*)0) && !((((xc)->flags) & ((1<<0))) != 0)) ||
       ((((void*)(yc->mbuf)) == (void*)0) && !((((yc)->flags) & ((1<<0))) != 0)))
     return 1;
   return 0;
 }
 break;

      case 0:
 goto swap;
 break;

      default:
 break;
      }
    }
    break;

  case 0:
    {
      StrNode* xs = (&((x)->u.str));
      if ((OnigDistance )((x)->u.str.end - (x)->u.str.s) == 0)
 break;

      switch (ytype) {
      case 2:
 switch ((&((y)->u.ctype))->ctype) {
 case 12:
   if ((&((y)->u.ctype))->ascii_range) {
     if (onigenc_ascii_is_code_ctype( (reg->enc)->mbc_to_code((xs->s),(xs->end),reg->enc),12,reg->enc))
       return (&((y)->u.ctype))->not;
     else
       return !((&((y)->u.ctype))->not);
   }
   else {
     if ((reg->enc)->is_code_ctype((reg->enc)->mbc_to_code((xs->s),(xs->end),reg->enc),12,reg->enc))
       return (&((y)->u.ctype))->not;
     else
       return !((&((y)->u.ctype))->not);
   }
   break;
 default:
   break;
 }
 break;

      case 1:
 {
   CClassNode* cc = (&((y)->u.cclass));

   code = (reg->enc)->mbc_to_code((xs->s),(xs->s + ((reg->enc)->max_enc_len)),reg->enc);

   return (onig_is_code_in_cc(reg->enc, code, cc) != 0 ? 0 : 1);
 }
 break;

      case 0:
 {
   OnigUChar *q;
   StrNode* ys = (&((y)->u.str));
   len = (OnigDistance )((x)->u.str.end - (x)->u.str.s);
   if (len > (OnigDistance )((y)->u.str.end - (y)->u.str.s)) len = (OnigDistance )((y)->u.str.end - (y)->u.str.s);
   if ((((x)->u.str.flag & (1<<1)) != 0) || (((y)->u.str.flag & (1<<1)) != 0)) {

     return 0;
   }
   else {
     for (i = 0, p = ys->s, q = xs->s; (OnigDistance )i < len; i++, p++, q++) {
       if (*p != *q) return 1;
     }
   }
 }
 break;

      default:
 break;
      }
    }
    break;

  default:
    break;
  }

  return 0;
}

static Node*
get_head_value_node(Node* node, int exact, regex_t* reg)
{
  Node* n = ((Node* )0);

  switch (((node)->u.base.type)) {
  case 4:
  case 9:
  case 3:

  case 10:

    break;

  case 2:
  case 1:
    if (exact == 0) {
      n = node;
    }
    break;

  case 8:
    n = get_head_value_node(((&((node)->u.cons))->car), exact, reg);
    break;

  case 0:
    {
      StrNode* sn = (&((node)->u.str));

      if (sn->end <= sn->s)
 break;

      if (exact != 0 &&
   !(((node)->u.str.flag & (1<<0)) != 0) && ((reg->options) & 1U)) {
      }
      else {
 n = node;
      }
    }
    break;

  case 5:
    {
      QtfrNode* qn = (&((node)->u.qtfr));
      if (qn->lower > 0) {





   n = get_head_value_node(qn->target, exact, reg);
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      switch (en->type) {
      case (1<<1):
 {
   OnigOptionType options = reg->options;

   reg->options = (&((node)->u.enclose))->option;
   n = get_head_value_node((&((node)->u.enclose))->target, exact, reg);
   reg->options = options;
 }
 break;

      case (1<<0):
      case (1<<2):
      case (1<<3):
 n = get_head_value_node(en->target, exact, reg);
 break;

      case (1<<4):
 break;
      }
    }
    break;

  case 7:
    if ((&((node)->u.anchor))->type == (1<<10))
      n = get_head_value_node((&((node)->u.anchor))->target, exact, reg);
    break;

  default:
    break;
  }

  return n;
}

static int
check_type_tree(Node* node, int type_mask, int enclose_mask, int anchor_mask)
{
  int type, r = 0;

  type = ((node)->u.base.type);
  if (((1<<(type)) & type_mask) == 0)
    return 1;

  switch (type) {
  case 8:
  case 9:
    do {
      r = check_type_tree(((&((node)->u.cons))->car), type_mask, enclose_mask,
     anchor_mask);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 5:
    r = check_type_tree((&((node)->u.qtfr))->target, type_mask, enclose_mask,
   anchor_mask);
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));
      if ((en->type & enclose_mask) == 0)
 return 1;

      r = check_type_tree(en->target, type_mask, enclose_mask, anchor_mask);
    }
    break;

  case 7:
    type = (&((node)->u.anchor))->type;
    if ((type & anchor_mask) == 0)
      return 1;

    if ((&((node)->u.anchor))->target)
      r = check_type_tree((&((node)->u.anchor))->target,
     type_mask, enclose_mask, anchor_mask);
    break;

  default:
    break;
  }
  return r;
}






static int
subexp_inf_recursive_check(Node* node, ScanEnv* env, int head)
{
  int type;
  int r = 0;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    {
      Node *x;
      OnigDistance min;
      int ret;

      x = node;
      do {
 ret = subexp_inf_recursive_check(((&((x)->u.cons))->car), env, head);
 if (ret < 0 || ret == 2) return ret;
 r |= ret;
 if (head) {
   ret = get_min_match_length(((&((x)->u.cons))->car), &min, env);
   if (ret != 0) return ret;
   if (min != 0) head = 0;
 }
      } while ((((void*)(x = ((&((x)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 9:
    {
      int ret;
      r = 1;
      do {
 ret = subexp_inf_recursive_check(((&((node)->u.cons))->car), env, head);
 if (ret < 0 || ret == 2) return ret;
 r &= ret;
      } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 5:
    r = subexp_inf_recursive_check((&((node)->u.qtfr))->target, env, head);
    if (r == 1) {
      if ((&((node)->u.qtfr))->lower == 0) r = 0;
    }
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));
      switch (an->type) {
      case (1<<10):
      case (1<<11):
      case (1<<12):
      case (1<<13):
 r = subexp_inf_recursive_check(an->target, env, head);
 break;
      }
    }
    break;

  case 10:
    r = subexp_inf_recursive_check((&((node)->u.call))->target, env, head);
    break;

  case 6:
    if (((((&((node)->u.enclose)))->state & (1<<4)) != 0))
      return 0;
    else if (((((&((node)->u.enclose)))->state & (1<<3)) != 0))
      return (head == 0 ? 1 : 2);
    else {
      (node)->u.enclose.state |= ((1<<4));
      r = subexp_inf_recursive_check((&((node)->u.enclose))->target, env, head);
      (node)->u.enclose.state &= ~((1<<4));
    }
    break;

  default:
    break;
  }

  return r;
}

static int
subexp_inf_recursive_check_trav(Node* node, ScanEnv* env)
{
  int type;
  int r = 0;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
  case 9:
    do {
      r = subexp_inf_recursive_check_trav(((&((node)->u.cons))->car), env);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 5:
    r = subexp_inf_recursive_check_trav((&((node)->u.qtfr))->target, env);
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));
      switch (an->type) {
      case (1<<10):
      case (1<<11):
      case (1<<12):
      case (1<<13):
 r = subexp_inf_recursive_check_trav(an->target, env);
 break;
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));

      if ((((en)->state & (1<<7)) != 0)) {
 (node)->u.enclose.state |= ((1<<3));
 r = subexp_inf_recursive_check(en->target, env, 1);
 if (r > 0) return -221;
 (node)->u.enclose.state &= ~((1<<3));
      }
      r = subexp_inf_recursive_check_trav(en->target, env);
    }

    break;

  default:
    break;
  }

  return r;
}

static int
subexp_recursive_check(Node* node)
{
  int r = 0;

  switch (((node)->u.base.type)) {
  case 8:
  case 9:
    do {
      r |= subexp_recursive_check(((&((node)->u.cons))->car));
    } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 5:
    r = subexp_recursive_check((&((node)->u.qtfr))->target);
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));
      switch (an->type) {
      case (1<<10):
      case (1<<11):
      case (1<<12):
      case (1<<13):
 r = subexp_recursive_check(an->target);
 break;
      }
    }
    break;

  case 10:
    r = subexp_recursive_check((&((node)->u.call))->target);
    if (r != 0) (node)->u.call.state |= (1<<7);
    break;

  case 6:
    if (((((&((node)->u.enclose)))->state & (1<<4)) != 0))
      return 0;
    else if (((((&((node)->u.enclose)))->state & (1<<3)) != 0))
      return 1;
    else {
      (node)->u.enclose.state |= ((1<<4));
      r = subexp_recursive_check((&((node)->u.enclose))->target);
      (node)->u.enclose.state &= ~((1<<4));
    }
    break;

  default:
    break;
  }

  return r;
}


static int
subexp_recursive_check_trav(Node* node, ScanEnv* env)
{


  int type;
  int r = 0;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
  case 9:
    {
      int ret;
      do {
 ret = subexp_recursive_check_trav(((&((node)->u.cons))->car), env);
 if (ret == 1) r = 1;
 else if (ret < 0) return ret;
      } while ((((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 5:
    r = subexp_recursive_check_trav((&((node)->u.qtfr))->target, env);
    if ((&((node)->u.qtfr))->upper == 0) {
      if (r == 1)
 (&((node)->u.qtfr))->is_refered = 1;
    }
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));
      switch (an->type) {
      case (1<<10):
      case (1<<11):
      case (1<<12):
      case (1<<13):
 r = subexp_recursive_check_trav(an->target, env);
 break;
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));

      if (! (((en)->state & (1<<7)) != 0)) {
 if ((((en)->state & (1<<8)) != 0)) {
   (node)->u.enclose.state |= ((1<<3));
   r = subexp_recursive_check(en->target);
   if (r != 0) (node)->u.enclose.state |= ((1<<7));
   (node)->u.enclose.state &= ~((1<<3));
 }
      }
      r = subexp_recursive_check_trav(en->target, env);
      if ((((en)->state & (1<<8)) != 0))
 r |= 1;
    }
    break;

  default:
    break;
  }

  return r;
}

static int
setup_subexp_call(Node* node, ScanEnv* env)
{
  int type;
  int r = 0;

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    do {
      r = setup_subexp_call(((&((node)->u.cons))->car), env);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 9:
    do {
      r = setup_subexp_call(((&((node)->u.cons))->car), env);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 5:
    r = setup_subexp_call((&((node)->u.qtfr))->target, env);
    break;
  case 6:
    r = setup_subexp_call((&((node)->u.enclose))->target, env);
    break;

  case 10:
    {
      CallNode* cn = (&((node)->u.call));
      Node** nodes = ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static);

      if (cn->group_num != 0) {
 int gnum = cn->group_num;


 if (env->num_named > 0 &&
     (((env->syntax)->behavior & ((1U<<7))) != 0) &&
     !((env->option) & (((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))) {
   return -209;
 }

 if (gnum > env->num_mem) {
   onig_scan_env_set_error_string(env,
   -218, cn->name, cn->name_end);
   return -218;
 }


      set_call_attr:

 cn->target = nodes[cn->group_num];
 if ((((void*)(cn->target)) == (void*)0)) {
   onig_scan_env_set_error_string(env,
   -217, cn->name, cn->name_end);
   return -217;
 }
 (cn->target)->u.enclose.state |= ((1<<8));
 do { if ((cn->group_num) < (int )(sizeof(BitStatusType) * 8)) (env->bt_mem_start) |= (1 << (cn->group_num)); else (env->bt_mem_start) |= 1;} while (0);
 cn->unset_addr_list = env->unset_addr_list;
      }


      else if (cn->name == cn->name_end) {
 goto set_call_attr;
      }

      else {
 int *refs;

 int n = onig_name_to_group_numbers(env->reg, cn->name, cn->name_end,
        &refs);
 if (n <= 0) {
   onig_scan_env_set_error_string(env,
   -217, cn->name, cn->name_end);
   return -217;
 }
 else if (n > 1 &&
     ! (((env->syntax)->behavior & ((1U<<10))) != 0)) {
   onig_scan_env_set_error_string(env,
     -220, cn->name, cn->name_end);
   return -220;
 }
 else {
   cn->group_num = refs[0];
   goto set_call_attr;
 }
      }

    }
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));

      switch (an->type) {
      case (1<<10):
      case (1<<11):
      case (1<<12):
      case (1<<13):
 r = setup_subexp_call(an->target, env);
 break;
      }
    }
    break;

  default:
    break;
  }

  return r;
}






static int
divide_look_behind_alternatives(Node* node)
{
  Node *head, *np, *insert_node;
  AnchorNode* an = (&((node)->u.anchor));
  int anc_type = an->type;

  head = an->target;
  np = ((&((head)->u.cons))->car);
  swap_node(node, head);
  ((&((node)->u.cons))->car) = head;
  (&((head)->u.anchor))->target = np;

  np = node;
  while ((np = ((&((np)->u.cons))->cdr)) != ((Node* )0)) {
    insert_node = onig_node_new_anchor(anc_type);
    if ((((void*)(insert_node)) == (void*)0)) return -5;
    (&((insert_node)->u.anchor))->target = ((&((np)->u.cons))->car);
    ((&((np)->u.cons))->car) = insert_node;
  }

  if (anc_type == (1<<13)) {
    np = node;
    do {
      do { int value = 8; memcpy(&((np)->u.base.type), &value, sizeof(int)); } while (0);
    } while ((np = ((&((np)->u.cons))->cdr)) != ((Node* )0));
  }
  return 0;
}

static int
setup_look_behind(Node* node, regex_t* reg, ScanEnv* env)
{
  int r, len;
  AnchorNode* an = (&((node)->u.anchor));

  r = get_char_length_tree(an->target, reg, &len);
  if (r == 0)
    an->char_len = len;
  else if (r == -1)
    r = -122;
  else if (r == -2) {
    if ((((env->syntax)->behavior & ((1U<<6))) != 0))
      r = divide_look_behind_alternatives(node);
    else
      r = -122;
  }

  return r;
}

static int
next_setup(Node* node, Node* next_node, regex_t* reg)
{
  int type;

 retry:
  type = ((node)->u.base.type);
  if (type == 5) {
    QtfrNode* qn = (&((node)->u.qtfr));
    if (qn->greedy && ((qn->upper) == -1)) {

      Node* n = get_head_value_node(next_node, 1, reg);

      if ((((void*)(n)) != (void*)0) && (&((n)->u.str))->s[0] != '\0') {
 qn->next_head_exact = n;
      }


      if (qn->lower <= 1) {
 int ttype = ((qn->target)->u.base.type);
 if ((((1<<(ttype)) & ((1<<(0)) | (1<<(1)) | (1<<(2)) | (1<<(3)) | (1<<(4)))) != 0)) {
   Node *x, *y;
   x = get_head_value_node(qn->target, 0, reg);
   if ((((void*)(x)) != (void*)0)) {
     y = get_head_value_node(next_node, 0, reg);
     if ((((void*)(y)) != (void*)0) && is_not_included(x, y, reg)) {
       Node* en = onig_node_new_enclose((1<<2));
       if ((((void*)(en)) == (void*)0)) return -5;
       (en)->u.enclose.state |= ((1<<6));
       swap_node(node, en);
       (&((node)->u.enclose))->target = en;
     }
   }
 }
      }
    }
  }
  else if (type == 6) {
    EncloseNode* en = (&((node)->u.enclose));
    if (en->type == (1<<0)) {
      node = en->target;
      goto retry;
    }
  }
  return 0;
}


static int
update_string_node_case_fold(regex_t* reg, Node *node)
{
  OnigUChar *p, *end, buf[18];
  OnigUChar *sbuf, *ebuf, *sp;
  int r, i, len;
  OnigDistance sbuf_size;
  StrNode* sn = (&((node)->u.str));

  end = sn->end;
  sbuf_size = (end - sn->s) * 2;
  sbuf = (OnigUChar* )ruby_xmalloc(sbuf_size);
  if ((((void*)(sbuf)) == (void*)0)) return -5;
  ebuf = sbuf + sbuf_size;

  sp = sbuf;
  p = sn->s;
  while (p < end) {
    len = (reg->enc)->mbc_case_fold(reg->case_fold_flag,(const OnigUChar** )&p,end,buf,reg->enc);
    for (i = 0; i < len; i++) {
      if (sp >= ebuf) {
 OnigUChar* p = (OnigUChar* )ruby_xrealloc(sbuf, sbuf_size * 2);
 if ((((void*)(p)) == (void*)0)) {
   ruby_xfree(sbuf);
   return -5;
 }
 sbuf = p;
 sp = sbuf + sbuf_size;
 sbuf_size *= 2;
 ebuf = sbuf + sbuf_size;
      }

      *sp++ = buf[i];
    }
  }

  r = onig_node_str_set(node, sbuf, sp);

  ruby_xfree(sbuf);
  return r;
}

static int
expand_case_fold_make_rem_string(Node** rnode, OnigUChar *s, OnigUChar *end,
     regex_t* reg)
{
  int r;
  Node *node;

  node = onig_node_new_str(s, end);
  if ((((void*)(node)) == (void*)0)) return -5;

  r = update_string_node_case_fold(reg, node);
  if (r != 0) {
    onig_node_free(node);
    return r;
  }

  (node)->u.str.flag |= (1<<1);
  (node)->u.str.flag |= (1<<2);
  *rnode = node;
  return 0;
}

static int
is_case_fold_variable_len(int item_num, OnigCaseFoldCodeItem items[],
     int slen)
{
  int i;

  for (i = 0; i < item_num; i++) {
    if (items[i].byte_len != slen) {
      return 1;
    }
    if (items[i].code_len != 1) {
      return 1;
    }
  }
  return 0;
}

static int
expand_case_fold_string_alt(int item_num, OnigCaseFoldCodeItem items[],
       OnigUChar *p, int slen, OnigUChar *end,
       regex_t* reg, Node **rnode)
{
  int r, i, j, len, varlen;
  Node *anode, *var_anode, *snode, *xnode, *an;
  OnigUChar buf[7];

  *rnode = var_anode = ((Node* )0);

  varlen = 0;
  for (i = 0; i < item_num; i++) {
    if (items[i].byte_len != slen) {
      varlen = 1;
      break;
    }
  }

  if (varlen != 0) {
    *rnode = var_anode = onig_node_new_alt(((Node* )0), ((Node* )0));
    if ((((void*)(var_anode)) == (void*)0)) return -5;

    xnode = onig_node_new_list(((void*)0), ((void*)0));
    if ((((void*)(xnode)) == (void*)0)) goto mem_err;
    ((&((var_anode)->u.cons))->car) = xnode;

    anode = onig_node_new_alt(((Node* )0), ((Node* )0));
    if ((((void*)(anode)) == (void*)0)) goto mem_err;
    ((&((xnode)->u.cons))->car) = anode;
  }
  else {
    *rnode = anode = onig_node_new_alt(((Node* )0), ((Node* )0));
    if ((((void*)(anode)) == (void*)0)) return -5;
  }

  snode = onig_node_new_str(p, p + slen);
  if ((((void*)(snode)) == (void*)0)) goto mem_err;

  ((&((anode)->u.cons))->car) = snode;

  for (i = 0; i < item_num; i++) {
    snode = onig_node_new_str(((void*)0), ((void*)0));
    if ((((void*)(snode)) == (void*)0)) goto mem_err;

    for (j = 0; j < items[i].code_len; j++) {
      len = (reg->enc)->code_to_mbc(items[i].code[j],buf,reg->enc);
      if (len < 0) {
 r = len;
 goto mem_err2;
      }

      r = onig_node_str_cat(snode, buf, buf + len);
      if (r != 0) goto mem_err2;
    }

    an = onig_node_new_alt(((Node* )0), ((Node* )0));
    if ((((void*)(an)) == (void*)0)) {
      goto mem_err2;
    }

    if (items[i].byte_len != slen) {
      Node *rem;
      OnigUChar *q = p + items[i].byte_len;

      if (q < end) {
 r = expand_case_fold_make_rem_string(&rem, q, end, reg);
 if (r != 0) {
   onig_node_free(an);
   goto mem_err2;
 }

 xnode = onig_node_list_add(((Node* )0), snode);
 if ((((void*)(xnode)) == (void*)0)) {
   onig_node_free(an);
   onig_node_free(rem);
   goto mem_err2;
 }
 if ((((void*)(onig_node_list_add(xnode, rem))) == (void*)0)) {
   onig_node_free(an);
   onig_node_free(xnode);
   onig_node_free(rem);
   goto mem_err;
 }

 ((&((an)->u.cons))->car) = xnode;
      }
      else {
 ((&((an)->u.cons))->car) = snode;
      }

      ((&((var_anode)->u.cons))->cdr) = an;
      var_anode = an;
    }
    else {
      ((&((an)->u.cons))->car) = snode;
      ((&((anode)->u.cons))->cdr) = an;
      anode = an;
    }
  }

  return varlen;

 mem_err2:
  onig_node_free(snode);

 mem_err:
  onig_node_free(*rnode);

  return -5;
}

static int
expand_case_fold_string(Node* node, regex_t* reg)
{


  int r, n, len, alt_num;
  int varlen = 0;
  OnigUChar *start, *end, *p;
  Node *top_root, *root, *snode, *prev_node;
  OnigCaseFoldCodeItem items[13];
  StrNode* sn = (&((node)->u.str));

  if ((((node)->u.str.flag & (1<<1)) != 0)) return 0;

  start = sn->s;
  end = sn->end;
  if (start >= end) return 0;

  r = 0;
  top_root = root = prev_node = snode = ((Node* )0);
  alt_num = 1;
  p = start;
  while (p < end) {
    n = (reg->enc)->get_case_fold_codes_by_str(reg->case_fold_flag,p,end,items,reg->enc);

    if (n < 0) {
      r = n;
      goto err;
    }

    len = ((reg->enc->max_enc_len == reg->enc->min_enc_len) ? reg->enc->min_enc_len : onigenc_mbclen_approximate(p,end,reg->enc));

    varlen = is_case_fold_variable_len(n, items, len);
    if (n == 0 || varlen == 0) {
      if ((((void*)(snode)) == (void*)0)) {
 if ((((void*)(root)) == (void*)0) && (((void*)(prev_node)) != (void*)0)) {
   top_root = root = onig_node_list_add(((Node* )0), prev_node);
   if ((((void*)(root)) == (void*)0)) {
     onig_node_free(prev_node);
     goto mem_err;
   }
 }

 prev_node = snode = onig_node_new_str(((void*)0), ((void*)0));
 if ((((void*)(snode)) == (void*)0)) goto mem_err;
 if ((((void*)(root)) != (void*)0)) {
   if ((((void*)(onig_node_list_add(root, snode))) == (void*)0)) {
     onig_node_free(snode);
     goto mem_err;
   }
 }
      }

      r = onig_node_str_cat(snode, p, p + len);
      if (r != 0) goto err;
    }
    else {
      alt_num *= (n + 1);
      if (alt_num > 8) break;

      if ((((void*)(snode)) != (void*)0)) {
 r = update_string_node_case_fold(reg, snode);
 if (r == 0) {
   (snode)->u.str.flag |= (1<<1);
 }
      }
      if ((((void*)(root)) == (void*)0) && (((void*)(prev_node)) != (void*)0)) {
 top_root = root = onig_node_list_add(((Node* )0), prev_node);
 if ((((void*)(root)) == (void*)0)) {
   onig_node_free(prev_node);
   goto mem_err;
 }
      }

      r = expand_case_fold_string_alt(n, items, p, len, end, reg, &prev_node);
      if (r < 0) goto mem_err;
      if (r == 1) {
 if ((((void*)(root)) == (void*)0)) {
   top_root = prev_node;
 }
 else {
   if ((((void*)(onig_node_list_add(root, prev_node))) == (void*)0)) {
     onig_node_free(prev_node);
     goto mem_err;
   }
 }

 root = ((&((prev_node)->u.cons))->car);
      }
      else {
 if ((((void*)(root)) != (void*)0)) {
   if ((((void*)(onig_node_list_add(root, prev_node))) == (void*)0)) {
     onig_node_free(prev_node);
     goto mem_err;
   }
 }
      }

      snode = ((Node* )0);
    }

    p += len;
  }
  if ((((void*)(snode)) != (void*)0)) {
    r = update_string_node_case_fold(reg, snode);
    if (r == 0) {
      (snode)->u.str.flag |= (1<<1);
    }
  }

  if (p < end) {
    Node *srem;

    r = expand_case_fold_make_rem_string(&srem, p, end, reg);
    if (r != 0) goto mem_err;

    if ((((void*)(prev_node)) != (void*)0) && (((void*)(root)) == (void*)0)) {
      top_root = root = onig_node_list_add(((Node* )0), prev_node);
      if ((((void*)(root)) == (void*)0)) {
 onig_node_free(srem);
 onig_node_free(prev_node);
 goto mem_err;
      }
    }

    if ((((void*)(root)) == (void*)0)) {
      prev_node = srem;
    }
    else {
      if ((((void*)(onig_node_list_add(root, srem))) == (void*)0)) {
 onig_node_free(srem);
 goto mem_err;
      }
    }
  }


  top_root = ((((void*)(top_root)) != (void*)0) ? top_root : prev_node);
  swap_node(node, top_root);
  onig_node_free(top_root);
  return 0;

 mem_err:
  r = -5;

 err:
  onig_node_free(top_root);
  return r;
}
static int
setup_tree(Node* node, regex_t* reg, int state, ScanEnv* env)
{
  int type;
  int r = 0;

restart:
  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    {
      Node* prev = ((Node* )0);
      do {
 r = setup_tree(((&((node)->u.cons))->car), reg, state, env);
 if ((((void*)(prev)) != (void*)0) && r == 0) {
   r = next_setup(prev, ((&((node)->u.cons))->car), reg);
 }
 prev = ((&((node)->u.cons))->car);
      } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 9:
    do {
      r = setup_tree(((&((node)->u.cons))->car), reg, (state | (1<<0)), env);
    } while (r == 0 && (((void*)(node = ((&((node)->u.cons))->cdr))) != (void*)0));
    break;

  case 1:
    break;

  case 0:
    if (((reg->options) & 1U) && !(((node)->u.str.flag & (1<<0)) != 0)) {
      r = expand_case_fold_string(node, reg);
    }
    break;

  case 2:
  case 3:
    break;


  case 10:
    break;


  case 4:
    {
      int i;
      int* p;
      Node** nodes = ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static);
      BRefNode* br = (&((node)->u.bref));
      p = ((((void*)((br)->back_dynamic)) != (void*)0) ? (br)->back_dynamic : (br)->back_static);;
      for (i = 0; i < br->back_num; i++) {
 if (p[i] > env->num_mem) return -208;
 do { if ((p[i]) < (int )(sizeof(BitStatusType) * 8)) (env->backrefed_mem) |= (1 << (p[i])); else (env->backrefed_mem) |= 1;} while (0);
 do { if ((p[i]) < (int )(sizeof(BitStatusType) * 8)) (env->bt_mem_start) |= (1 << (p[i])); else (env->bt_mem_start) |= 1;} while (0);

 if ((((br)->state & (1<<13)) != 0)) {
   do { if ((p[i]) < (int )(sizeof(BitStatusType) * 8)) (env->bt_mem_end) |= (1 << (p[i])); else (env->bt_mem_end) |= 1;} while (0);
 }

 (nodes[p[i]])->u.enclose.state |= ((1<<5));
      }
    }
    break;

  case 5:
    {
      OnigDistance d;
      QtfrNode* qn = (&((node)->u.qtfr));
      Node* target = qn->target;

      if ((state & (1<<2)) != 0) {
 qn->state |= (1<<12);
      }

      if (((qn->upper) == -1) || qn->upper >= 1) {
 r = get_min_match_length(target, &d, env);
 if (r) break;
 if (d == 0) {
   qn->target_empty_info = 1;

   r = quantifiers_memory_node_info(target);
   if (r < 0) break;
   if (r > 0) {
     qn->target_empty_info = r;
   }
 }
      }

      state |= (1<<2);
      if (qn->lower != qn->upper)
 state |= (1<<3);
      r = setup_tree(target, reg, state, env);
      if (r) break;



      if (((target)->u.base.type) == 0) {
 if (qn->lower > 1) {
   int i, n = qn->lower;
   OnigDistance len = (OnigDistance )((target)->u.str.end - (target)->u.str.s);
   StrNode* sn = (&((target)->u.str));
   Node* np;

   np = onig_node_new_str(sn->s, sn->end);
   if ((((void*)(np)) == (void*)0)) return -5;
   (&((np)->u.str))->flag = sn->flag;

   for (i = 1; i < n && (i+1) * len <= 100; i++) {
     r = onig_node_str_cat(np, sn->s, sn->end);
     if (r) {
       onig_node_free(np);
       return r;
     }
   }
   if (i < qn->upper || ((qn->upper) == -1)) {
     Node *np1, *np2;

     qn->lower -= i;
     if (! ((qn->upper) == -1))
       qn->upper -= i;

     np1 = onig_node_new_list(np, ((void*)0));
     if ((((void*)(np1)) == (void*)0)) {
       onig_node_free(np);
       return -5;
     }
     swap_node(np1, node);
     np2 = onig_node_list_add(node, np1);
     if ((((void*)(np2)) == (void*)0)) {
       onig_node_free(np1);
       return -5;
     }
   }
   else {
     swap_node(np, node);
     onig_node_free(np);
   }
   break;
 }
      }
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));

      switch (en->type) {
      case (1<<1):
 {
   OnigOptionType options = reg->options;
   reg->options = (&((node)->u.enclose))->option;
   r = setup_tree((&((node)->u.enclose))->target, reg, state, env);
   reg->options = options;
 }
 break;

      case (1<<0):
 if ((state & ((1<<0) | (1<<1) | (1<<3) | (1<<4))) != 0) {
   do { if ((en->regnum) < (int )(sizeof(BitStatusType) * 8)) (env->bt_mem_start) |= (1 << (en->regnum)); else (env->bt_mem_start) |= 1;} while (0);

 }
 if ((((en)->state & (1<<8)) != 0))
   state |= (1<<4);
 if ((((en)->state & (1<<7)) != 0))
   state |= (1<<5);
 else if ((state & (1<<5)) != 0)
   (node)->u.call.state |= (1<<7);
 r = setup_tree(en->target, reg, state, env);
 break;

      case (1<<2):
 {
   Node* target = en->target;
   r = setup_tree(target, reg, state, env);
   if (((target)->u.base.type) == 5) {
     QtfrNode* tqn = (&((target)->u.qtfr));
     if (((tqn->upper) == -1) && tqn->lower <= 1 &&
  tqn->greedy != 0) {
       int qtype = ((tqn->target)->u.base.type);
       if ((((1<<(qtype)) & ((1<<(0)) | (1<<(1)) | (1<<(2)) | (1<<(3)) | (1<<(4)))) != 0))
  (node)->u.enclose.state |= ((1<<6));
     }
   }
 }
 break;

      case (1<<3):

 if (! ((((&((node)->u.enclose)))->state & (1<<11)) != 0) &&
     env->num_named > 0 &&
     (((env->syntax)->behavior & ((1U<<7))) != 0) &&
     !((env->option) & (((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))) {
   return -209;
 }

 if ((&((node)->u.enclose))->regnum > env->num_mem)
   return -208;
 r = setup_tree((&((node)->u.enclose))->target, reg, state, env);
 break;

      case (1<<4):
 r = setup_tree((&((node)->u.enclose))->target, reg, state, env);
 break;
      }
    }
    break;

  case 7:
    {
      AnchorNode* an = (&((node)->u.anchor));

      switch (an->type) {
      case (1<<10):
 r = setup_tree(an->target, reg, state, env);
 break;
      case (1<<11):
 r = setup_tree(an->target, reg, (state | (1<<1)), env);
 break;
      case (1<<12):
 {
   r = check_type_tree(an->target, ( (1<<(8)) | (1<<(9)) | (1<<(0)) | (1<<(1)) | (1<<(2)) | (1<<(3)) | (1<<(7)) | (1<<(6)) | (1<<(5)) | (1<<(10)) ),
         ( (1<<0) | (1<<1) ), ( (1<<12) | (1<<13) | (1<<1) | (1<<5) | (1<<0) | (1<<2) | (1<<16) | (1<<6) | (1<<7) | (1<<8) | (1<<9) ));
   if (r < 0) return r;
   if (r > 0) return -122;
   if (((node)->u.base.type) != 7) goto restart;
   r = setup_tree(an->target, reg, state, env);
   if (r != 0) return r;
   r = setup_look_behind(node, reg, env);
 }
 break;

      case (1<<13):
 {
   r = check_type_tree(an->target, ( (1<<(8)) | (1<<(9)) | (1<<(0)) | (1<<(1)) | (1<<(2)) | (1<<(3)) | (1<<(7)) | (1<<(6)) | (1<<(5)) | (1<<(10)) ),
        (1<<1), ( (1<<12) | (1<<13) | (1<<1) | (1<<5) | (1<<0) | (1<<2) | (1<<16) | (1<<6) | (1<<7) | (1<<8) | (1<<9) ));
   if (r < 0) return r;
   if (r > 0) return -122;
   if (((node)->u.base.type) != 7) goto restart;
   r = setup_tree(an->target, reg, (state | (1<<1)), env);
   if (r != 0) return r;
   r = setup_look_behind(node, reg, env);
 }
 break;
      }
    }
    break;

  default:
    break;
  }

  return r;
}
static int
set_bm_skip(OnigUChar* s, OnigUChar* end, regex_t* reg,
     OnigUChar skip[], int** int_skip, int ignore_case)
{
  OnigDistance i, len;
  int clen, flen, n, j, k;
  OnigUChar *p, buf[13][18];
  OnigCaseFoldCodeItem items[13];
  OnigEncoding enc = reg->enc;

  len = end - s;
  if (len < 256) {
    for (i = 0; i < 256; i++) skip[i] = (OnigUChar )(len + 1);

    n = 0;
    for (i = 0; i < len; i += clen) {
      p = s + i;
      if (ignore_case)
 n = (enc)->get_case_fold_codes_by_str(reg->case_fold_flag,p,end,items,enc);

      clen = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc));
      if (p + clen > end)
 clen = (int )(end - p);

      for (j = 0; j < n; j++) {
 if ((items[j].code_len != 1) || (items[j].byte_len != clen))
   return 1;
 flen = (enc)->code_to_mbc(items[j].code[0],buf[j],enc);
 if (flen != clen)
   return 1;
      }
      for (j = 0; j < clen; j++) {
 skip[s[i + j]] = (OnigUChar )(len - i - j);
 for (k = 0; k < n; k++) {
   skip[buf[k][j]] = (OnigUChar )(len - i - j);
 }
      }
    }
  }
  else {


    return -6;
  }
  return 0;
}


typedef struct {
  OnigDistance min;
  OnigDistance max;
} MinMaxLen;

typedef struct {
  MinMaxLen mmd;
  OnigEncoding enc;
  OnigOptionType options;
  OnigCaseFoldType case_fold_flag;
  ScanEnv* scan_env;
} OptEnv;

typedef struct {
  int left_anchor;
  int right_anchor;
} OptAncInfo;

typedef struct {
  MinMaxLen mmd;
  OptAncInfo anc;

  int reach_end;
  int ignore_case;
  int len;
  OnigUChar s[24];
} OptExactInfo;

typedef struct {
  MinMaxLen mmd;
  OptAncInfo anc;

  int value;
  OnigUChar map[256];
} OptMapInfo;

typedef struct {
  MinMaxLen len;

  OptAncInfo anc;
  OptExactInfo exb;
  OptExactInfo exm;
  OptExactInfo expr;

  OptMapInfo map;
} NodeOptInfo;


static int
map_position_value(OnigEncoding enc, int i)
{
  static const short int ByteValTable[] = {
     5, 1, 1, 1, 1, 1, 1, 1, 1, 10, 10, 1, 1, 10, 1, 1,
     1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    12, 4, 7, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5,
     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5, 5,
     5, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 6, 5, 5, 5,
     5, 6, 6, 6, 6, 7, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
     6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5, 1
  };

  if (i < (int )(sizeof(ByteValTable) / sizeof((ByteValTable)[0]))) {
    if (i == 0 && ((enc)->min_enc_len) > 1)
      return 20;
    else
      return (int )ByteValTable[i];
  }
  else
    return 4;
}

static int
distance_value(MinMaxLen* mm)
{

  static const short int dist_vals[] = {
    1000, 500, 333, 250, 200, 167, 143, 125, 111, 100,
      91, 83, 77, 71, 67, 63, 59, 56, 53, 50,
      48, 45, 43, 42, 40, 38, 37, 36, 34, 33,
      32, 31, 30, 29, 29, 28, 27, 26, 26, 25,
      24, 24, 23, 23, 22, 22, 21, 21, 20, 20,
      20, 19, 19, 19, 18, 18, 18, 17, 17, 17,
      16, 16, 16, 16, 15, 15, 15, 15, 14, 14,
      14, 14, 14, 14, 13, 13, 13, 13, 13, 13,
      12, 12, 12, 12, 12, 12, 11, 11, 11, 11,
      11, 11, 11, 11, 11, 10, 10, 10, 10, 10
  };

  OnigDistance d;

  if (mm->max == ~((OnigDistance )0)) return 0;

  d = mm->max - mm->min;
  if (d < (int )(sizeof(dist_vals) / sizeof((dist_vals)[0])))

    return (int )dist_vals[d];
  else
    return 1;
}

static int
comp_distance_value(MinMaxLen* d1, MinMaxLen* d2, int v1, int v2)
{
  if (v2 <= 0) return -1;
  if (v1 <= 0) return 1;

  v1 *= distance_value(d1);
  v2 *= distance_value(d2);

  if (v2 > v1) return 1;
  if (v2 < v1) return -1;

  if (d2->min < d1->min) return 1;
  if (d2->min > d1->min) return -1;
  return 0;
}

static int
is_equal_mml(MinMaxLen* a, MinMaxLen* b)
{
  return (a->min == b->min && a->max == b->max) ? 1 : 0;
}


static void
set_mml(MinMaxLen* mml, OnigDistance min, OnigDistance max)
{
  mml->min = min;
  mml->max = max;
}

static void
clear_mml(MinMaxLen* mml)
{
  mml->min = mml->max = 0;
}

static void
copy_mml(MinMaxLen* to, MinMaxLen* from)
{
  to->min = from->min;
  to->max = from->max;
}

static void
add_mml(MinMaxLen* to, MinMaxLen* from)
{
  to->min = distance_add(to->min, from->min);
  to->max = distance_add(to->max, from->max);
}
static void
alt_merge_mml(MinMaxLen* to, MinMaxLen* from)
{
  if (to->min > from->min) to->min = from->min;
  if (to->max < from->max) to->max = from->max;
}

static void
copy_opt_env(OptEnv* to, OptEnv* from)
{
  *to = *from;
}

static void
clear_opt_anc_info(OptAncInfo* anc)
{
  anc->left_anchor = 0;
  anc->right_anchor = 0;
}

static void
copy_opt_anc_info(OptAncInfo* to, OptAncInfo* from)
{
  *to = *from;
}

static void
concat_opt_anc_info(OptAncInfo* to, OptAncInfo* left, OptAncInfo* right,
      OnigDistance left_len, OnigDistance right_len)
{
  clear_opt_anc_info(to);

  to->left_anchor = left->left_anchor;
  if (left_len == 0) {
    to->left_anchor |= right->left_anchor;
  }

  to->right_anchor = right->right_anchor;
  if (right_len == 0) {
    to->right_anchor |= left->right_anchor;
  }
  else {
    to->right_anchor |= (left->right_anchor & (1<<11));
  }
}

static int
is_left_anchor(int anc)
{
  if (anc == (1<<3) || anc == (1<<4) ||
      anc == (1<<5) || anc == (1<<10) ||
      anc == (1<<11))
    return 0;

  return 1;
}

static int
is_set_opt_anc_info(OptAncInfo* to, int anc)
{
  if ((to->left_anchor & anc) != 0) return 1;

  return ((to->right_anchor & anc) != 0 ? 1 : 0);
}

static void
add_opt_anc_info(OptAncInfo* to, int anc)
{
  if (is_left_anchor(anc))
    to->left_anchor |= anc;
  else
    to->right_anchor |= anc;
}

static void
remove_opt_anc_info(OptAncInfo* to, int anc)
{
  if (is_left_anchor(anc))
    to->left_anchor &= ~anc;
  else
    to->right_anchor &= ~anc;
}

static void
alt_merge_opt_anc_info(OptAncInfo* to, OptAncInfo* add)
{
  to->left_anchor &= add->left_anchor;
  to->right_anchor &= add->right_anchor;
}

static int
is_full_opt_exact_info(OptExactInfo* ex)
{
  return (ex->len >= 24 ? 1 : 0);
}

static void
clear_opt_exact_info(OptExactInfo* ex)
{
  clear_mml(&ex->mmd);
  clear_opt_anc_info(&ex->anc);
  ex->reach_end = 0;
  ex->ignore_case = -1;
  ex->len = 0;
  ex->s[0] = '\0';
}

static void
copy_opt_exact_info(OptExactInfo* to, OptExactInfo* from)
{
  *to = *from;
}

static void
concat_opt_exact_info(OptExactInfo* to, OptExactInfo* add, OnigEncoding enc)
{
  int i, j, len;
  OnigUChar *p, *end;
  OptAncInfo tanc;

  if (to->ignore_case < 0)
    to->ignore_case = add->ignore_case;
  else if (to->ignore_case != add->ignore_case)
    return ;

  p = add->s;
  end = p + add->len;
  for (i = to->len; p < end; ) {
    len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc));
    if (i + len > 24) break;
    for (j = 0; j < len && p < end; j++)
      to->s[i++] = *p++;
  }

  to->len = i;
  to->reach_end = (p == end ? add->reach_end : 0);

  concat_opt_anc_info(&tanc, &to->anc, &add->anc, 1, 1);
  if (! to->reach_end) tanc.right_anchor = 0;
  copy_opt_anc_info(&to->anc, &tanc);
}

static void
concat_opt_exact_info_str(OptExactInfo* to, OnigUChar* s, OnigUChar* end,
     int raw , OnigEncoding enc)
{
  int i, j, len;
  OnigUChar *p;

  for (i = to->len, p = s; p < end && i < 24; ) {
    len = ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc));
    if (i + len > 24) break;
    for (j = 0; j < len && p < end; j++)
      to->s[i++] = *p++;
  }

  to->len = i;
}

static void
alt_merge_opt_exact_info(OptExactInfo* to, OptExactInfo* add, OptEnv* env)
{
  int i, j, len;

  if (add->len == 0 || to->len == 0) {
    clear_opt_exact_info(to);
    return ;
  }

  if (! is_equal_mml(&to->mmd, &add->mmd)) {
    clear_opt_exact_info(to);
    return ;
  }

  for (i = 0; i < to->len && i < add->len; ) {
    if (to->s[i] != add->s[i]) break;
    len = ((env->enc->max_enc_len == env->enc->min_enc_len) ? env->enc->min_enc_len : onigenc_mbclen_approximate(to->s + i,to->s + to->len,env->enc));

    for (j = 1; j < len; j++) {
      if (to->s[i+j] != add->s[i+j]) break;
    }
    if (j < len) break;
    i += len;
  }

  if (! add->reach_end || i < add->len || i < to->len) {
    to->reach_end = 0;
  }
  to->len = i;
  if (to->ignore_case < 0)
    to->ignore_case = add->ignore_case;
  else if (add->ignore_case >= 0)
    to->ignore_case |= add->ignore_case;

  alt_merge_opt_anc_info(&to->anc, &add->anc);
  if (! to->reach_end) to->anc.right_anchor = 0;
}

static void
select_opt_exact_info(OnigEncoding enc, OptExactInfo* now, OptExactInfo* alt)
{
  int v1, v2;

  v1 = now->len;
  v2 = alt->len;

  if (v2 == 0) {
    return ;
  }
  else if (v1 == 0) {
    copy_opt_exact_info(now, alt);
    return ;
  }
  else if (v1 <= 2 && v2 <= 2) {

    v2 = map_position_value(enc, now->s[0]);
    v1 = map_position_value(enc, alt->s[0]);

    if (now->len > 1) v1 += 5;
    if (alt->len > 1) v2 += 5;
  }

  if (now->ignore_case <= 0) v1 *= 2;
  if (alt->ignore_case <= 0) v2 *= 2;

  if (comp_distance_value(&now->mmd, &alt->mmd, v1, v2) > 0)
    copy_opt_exact_info(now, alt);
}

static void
clear_opt_map_info(OptMapInfo* map)
{
  static const OptMapInfo clean_info = {
    {0, 0}, {0, 0}, 0,
    {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
    }
  };

  memcpy(map, &clean_info, sizeof(OptMapInfo));
}

static void
copy_opt_map_info(OptMapInfo* to, OptMapInfo* from)
{
  *to = *from;
}

static void
add_char_opt_map_info(OptMapInfo* map, OnigUChar c, OnigEncoding enc)
{
  if (map->map[c] == 0) {
    map->map[c] = 1;
    map->value += map_position_value(enc, c);
  }
}

static int
add_char_amb_opt_map_info(OptMapInfo* map, OnigUChar* p, OnigUChar* end,
                          OnigEncoding enc, OnigCaseFoldType case_fold_flag)
{
  OnigCaseFoldCodeItem items[13];
  OnigUChar buf[7];
  int i, n;

  add_char_opt_map_info(map, p[0], enc);

  case_fold_flag = ((case_fold_flag) & ~(1<<30));
  n = (enc)->get_case_fold_codes_by_str(case_fold_flag,p,end,items,enc);
  if (n < 0) return n;

  for (i = 0; i < n; i++) {
    (enc)->code_to_mbc(items[i].code[0],buf,enc);
    add_char_opt_map_info(map, buf[0], enc);
  }

  return 0;
}

static void
select_opt_map_info(OptMapInfo* now, OptMapInfo* alt)
{
  const int z = 1<<15;

  int v1, v2;

  if (alt->value == 0) return ;
  if (now->value == 0) {
    copy_opt_map_info(now, alt);
    return ;
  }

  v1 = z / now->value;
  v2 = z / alt->value;
  if (comp_distance_value(&now->mmd, &alt->mmd, v1, v2) > 0)
    copy_opt_map_info(now, alt);
}

static int
comp_opt_exact_or_map_info(OptExactInfo* e, OptMapInfo* m)
{

  int ve, vm;

  if (m->value <= 0) return -1;

  ve = 20 * e->len * (e->ignore_case > 0 ? 1 : 2);
  vm = 20 * 5 * 2 / m->value;
  return comp_distance_value(&e->mmd, &m->mmd, ve, vm);
}

static void
alt_merge_opt_map_info(OnigEncoding enc, OptMapInfo* to, OptMapInfo* add)
{
  int i, val;


  if (to->value == 0) return ;
  if (add->value == 0 || to->mmd.max < add->mmd.min) {
    clear_opt_map_info(to);
    return ;
  }

  alt_merge_mml(&to->mmd, &add->mmd);

  val = 0;
  for (i = 0; i < 256; i++) {
    if (add->map[i])
      to->map[i] = 1;

    if (to->map[i])
      val += map_position_value(enc, i);
  }
  to->value = val;

  alt_merge_opt_anc_info(&to->anc, &add->anc);
}

static void
set_bound_node_opt_info(NodeOptInfo* opt, MinMaxLen* mmd)
{
  copy_mml(&(opt->exb.mmd), mmd);
  copy_mml(&(opt->expr.mmd), mmd);
  copy_mml(&(opt->map.mmd), mmd);
}

static void
clear_node_opt_info(NodeOptInfo* opt)
{
  clear_mml(&opt->len);
  clear_opt_anc_info(&opt->anc);
  clear_opt_exact_info(&opt->exb);
  clear_opt_exact_info(&opt->exm);
  clear_opt_exact_info(&opt->expr);
  clear_opt_map_info(&opt->map);
}

static void
copy_node_opt_info(NodeOptInfo* to, NodeOptInfo* from)
{
  *to = *from;
}

static void
concat_left_node_opt_info(OnigEncoding enc, NodeOptInfo* to, NodeOptInfo* add)
{
  int exb_reach, exm_reach;
  OptAncInfo tanc;

  concat_opt_anc_info(&tanc, &to->anc, &add->anc, to->len.max, add->len.max);
  copy_opt_anc_info(&to->anc, &tanc);

  if (add->exb.len > 0 && to->len.max == 0) {
    concat_opt_anc_info(&tanc, &to->anc, &add->exb.anc,
   to->len.max, add->len.max);
    copy_opt_anc_info(&add->exb.anc, &tanc);
  }

  if (add->map.value > 0 && to->len.max == 0) {
    if (add->map.mmd.max == 0)
      add->map.anc.left_anchor |= to->anc.left_anchor;
  }

  exb_reach = to->exb.reach_end;
  exm_reach = to->exm.reach_end;

  if (add->len.max != 0)
    to->exb.reach_end = to->exm.reach_end = 0;

  if (add->exb.len > 0) {
    if (exb_reach) {
      concat_opt_exact_info(&to->exb, &add->exb, enc);
      clear_opt_exact_info(&add->exb);
    }
    else if (exm_reach) {
      concat_opt_exact_info(&to->exm, &add->exb, enc);
      clear_opt_exact_info(&add->exb);
    }
  }
  select_opt_exact_info(enc, &to->exm, &add->exb);
  select_opt_exact_info(enc, &to->exm, &add->exm);

  if (to->expr.len > 0) {
    if (add->len.max > 0) {
      if (to->expr.len > (int )add->len.max)
 to->expr.len = (int )add->len.max;

      if (to->expr.mmd.max == 0)
 select_opt_exact_info(enc, &to->exb, &to->expr);
      else
 select_opt_exact_info(enc, &to->exm, &to->expr);
    }
  }
  else if (add->expr.len > 0) {
    copy_opt_exact_info(&to->expr, &add->expr);
  }

  select_opt_map_info(&to->map, &add->map);

  add_mml(&to->len, &add->len);
}

static void
alt_merge_node_opt_info(NodeOptInfo* to, NodeOptInfo* add, OptEnv* env)
{
  alt_merge_opt_anc_info (&to->anc, &add->anc);
  alt_merge_opt_exact_info(&to->exb, &add->exb, env);
  alt_merge_opt_exact_info(&to->exm, &add->exm, env);
  alt_merge_opt_exact_info(&to->expr, &add->expr, env);
  alt_merge_opt_map_info(env->enc, &to->map, &add->map);

  alt_merge_mml(&to->len, &add->len);
}




static int
optimize_node_left(Node* node, NodeOptInfo* opt, OptEnv* env)
{
  int type;
  int r = 0;

  clear_node_opt_info(opt);
  set_bound_node_opt_info(opt, &env->mmd);

  type = ((node)->u.base.type);
  switch (type) {
  case 8:
    {
      OptEnv nenv;
      NodeOptInfo nopt;
      Node* nd = node;

      copy_opt_env(&nenv, env);
      do {
 r = optimize_node_left(((&((nd)->u.cons))->car), &nopt, &nenv);
 if (r == 0) {
   add_mml(&nenv.mmd, &nopt.len);
   concat_left_node_opt_info(env->enc, opt, &nopt);
 }
      } while (r == 0 && (((void*)(nd = ((&((nd)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 9:
    {
      NodeOptInfo nopt;
      Node* nd = node;

      do {
 r = optimize_node_left(((&((nd)->u.cons))->car), &nopt, env);
 if (r == 0) {
   if (nd == node) copy_node_opt_info(opt, &nopt);
   else alt_merge_node_opt_info(opt, &nopt, env);
 }
      } while ((r == 0) && (((void*)(nd = ((&((nd)->u.cons))->cdr))) != (void*)0));
    }
    break;

  case 0:
    {
      StrNode* sn = (&((node)->u.str));
      OnigDistance slen = sn->end - sn->s;
      int is_raw = (((node)->u.str.flag & (1<<0)) != 0);

      if (! (((node)->u.str.flag & (1<<1)) != 0)) {
 concat_opt_exact_info_str(&opt->exb, sn->s, sn->end,
      is_raw, env->enc);
 opt->exb.ignore_case = 0;
 if (slen > 0) {
   add_char_opt_map_info(&opt->map, *(sn->s), env->enc);
 }
 set_mml(&opt->len, slen, slen);
      }
      else {
 OnigDistance max;

 if ((((node)->u.str.flag & (1<<2)) != 0)) {
   int n = onigenc_strlen(env->enc, sn->s, sn->end);
   max = ((env->enc)->max_enc_len) * n;
 }
 else {
   concat_opt_exact_info_str(&opt->exb, sn->s, sn->end,
        is_raw, env->enc);
   opt->exb.ignore_case = 1;

   if (slen > 0) {
     r = add_char_amb_opt_map_info(&opt->map, sn->s, sn->end,
       env->enc, env->case_fold_flag);
     if (r != 0) break;
   }

   max = slen;
 }

 set_mml(&opt->len, slen, max);
      }

      if ((OnigDistance )opt->exb.len == slen)
 opt->exb.reach_end = 1;
    }
    break;

  case 1:
    {
      int i, z;
      CClassNode* cc = (&((node)->u.cclass));



      if ((((void*)(cc->mbuf)) != (void*)0) || ((((cc)->flags) & ((1<<0))) != 0)) {
 OnigDistance min = ((env->enc)->min_enc_len);
 OnigDistance max = ((env->enc)->max_enc_len);

 set_mml(&opt->len, min, max);
      }
      else {
 for (i = 0; i < (1 << 8); i++) {
   z = ((cc->bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8))));
   if ((z && !((((cc)->flags) & ((1<<0))) != 0)) || (!z && ((((cc)->flags) & ((1<<0))) != 0))) {
     add_char_opt_map_info(&opt->map, (OnigUChar )i, env->enc);
   }
 }
 set_mml(&opt->len, 1, 1);
      }
    }
    break;

  case 2:
    {
      int i, min, max;
      int maxcode;

      max = ((env->enc)->max_enc_len);

      if (max == 1) {
 min = 1;

 maxcode = (&((node)->u.ctype))->ascii_range ? 0x80 : (1 << 8);
 switch ((&((node)->u.ctype))->ctype) {
 case 12:
   if ((&((node)->u.ctype))->not != 0) {
     for (i = 0; i < (1 << 8); i++) {
       if (! (env->enc)->is_code_ctype(i,12,env->enc) || i >= maxcode) {
  add_char_opt_map_info(&opt->map, (OnigUChar )i, env->enc);
       }
     }
   }
   else {
     for (i = 0; i < maxcode; i++) {
       if ((env->enc)->is_code_ctype(i,12,env->enc)) {
  add_char_opt_map_info(&opt->map, (OnigUChar )i, env->enc);
       }
     }
   }
   break;
 }
      }
      else {
 min = ((env->enc)->min_enc_len);
      }
      set_mml(&opt->len, min, max);
    }
    break;

  case 3:
    {
      OnigDistance min = ((env->enc)->min_enc_len);
      OnigDistance max = ((env->enc)->max_enc_len);
      set_mml(&opt->len, min, max);
    }
    break;

  case 7:
    switch ((&((node)->u.anchor))->type) {
    case (1<<0):
    case (1<<2):
    case (1<<1):
    case (1<<3):
    case (1<<4):
    case (1<<5):
    case (1<<12):
    case (1<<11):
      add_opt_anc_info(&opt->anc, (&((node)->u.anchor))->type);
      break;

    case (1<<10):
      {
 NodeOptInfo nopt;

 r = optimize_node_left((&((node)->u.anchor))->target, &nopt, env);
 if (r == 0) {
   if (nopt.exb.len > 0)
     copy_opt_exact_info(&opt->expr, &nopt.exb);
   else if (nopt.exm.len > 0)
     copy_opt_exact_info(&opt->expr, &nopt.exm);

   opt->expr.reach_end = 0;

   if (nopt.map.value > 0)
     copy_opt_map_info(&opt->map, &nopt.map);
 }
      }
      break;

    case (1<<13):
      break;
    }
    break;

  case 4:
    {
      int i;
      int* backs;
      OnigDistance min, max, tmin, tmax;
      Node** nodes = ((((void*)((env->scan_env)->mem_nodes_dynamic)) != (void*)0) ? (env->scan_env)->mem_nodes_dynamic : (env->scan_env)->mem_nodes_static);
      BRefNode* br = (&((node)->u.bref));

      if (br->state & (1<<7)) {
 set_mml(&opt->len, 0, ~((OnigDistance )0));
 break;
      }
      backs = ((((void*)((br)->back_dynamic)) != (void*)0) ? (br)->back_dynamic : (br)->back_static);;
      r = get_min_match_length(nodes[backs[0]], &min, env->scan_env);
      if (r != 0) break;
      r = get_max_match_length(nodes[backs[0]], &max, env->scan_env);
      if (r != 0) break;
      for (i = 1; i < br->back_num; i++) {
 r = get_min_match_length(nodes[backs[i]], &tmin, env->scan_env);
 if (r != 0) break;
 r = get_max_match_length(nodes[backs[i]], &tmax, env->scan_env);
 if (r != 0) break;
 if (min > tmin) min = tmin;
 if (max < tmax) max = tmax;
      }
      if (r == 0) set_mml(&opt->len, min, max);
    }
    break;


  case 10:
    if (((((&((node)->u.call)))->state & (1<<7)) != 0))
      set_mml(&opt->len, 0, ~((OnigDistance )0));
    else {
      OnigOptionType save = env->options;
      env->options = (&(((&((node)->u.call))->target)->u.enclose))->option;
      r = optimize_node_left((&((node)->u.call))->target, opt, env);
      env->options = save;
    }
    break;


  case 5:
    {
      int i;
      OnigDistance min, max;
      NodeOptInfo nopt;
      QtfrNode* qn = (&((node)->u.qtfr));

      r = optimize_node_left(qn->target, &nopt, env);
      if (r) break;

      if ( ((qn->upper) == -1)) {
 if (env->mmd.max == 0 &&
     ((qn->target)->u.base.type) == 3 && qn->greedy) {
   if (((env->options) & ((1U << 1) << 1)))

     add_opt_anc_info(&opt->anc, (1<<15));
   else
     add_opt_anc_info(&opt->anc, (1<<14));
 }
      }
      else {
 if (qn->lower > 0) {
   copy_node_opt_info(opt, &nopt);
   if (nopt.exb.len > 0) {
     if (nopt.exb.reach_end) {
       for (i = 2; i <= qn->lower &&
     ! is_full_opt_exact_info(&opt->exb); i++) {
  concat_opt_exact_info(&opt->exb, &nopt.exb, env->enc);
       }
       if (i < qn->lower) {
  opt->exb.reach_end = 0;
       }
     }
   }

   if (qn->lower != qn->upper) {
     opt->exb.reach_end = 0;
     opt->exm.reach_end = 0;
   }
   if (qn->lower > 1)
     opt->exm.reach_end = 0;
 }
      }

      min = distance_multiply(nopt.len.min, qn->lower);
      if (((qn->upper) == -1))
 max = (nopt.len.max > 0 ? ~((OnigDistance )0) : 0);
      else
 max = distance_multiply(nopt.len.max, qn->upper);

      set_mml(&opt->len, min, max);
    }
    break;

  case 6:
    {
      EncloseNode* en = (&((node)->u.enclose));

      switch (en->type) {
      case (1<<1):
 {
   OnigOptionType save = env->options;

   env->options = en->option;
   r = optimize_node_left(en->target, opt, env);
   env->options = save;
 }
 break;

      case (1<<0):

 en->opt_count++;
 if (en->opt_count > 5) {
   OnigDistance min, max;

   min = 0;
   max = ~((OnigDistance )0);
   if ((((en)->state & (1<<0)) != 0)) min = en->min_len;
   if ((((en)->state & (1<<1)) != 0)) max = en->max_len;
   set_mml(&opt->len, min, max);
 }
 else

 {
   r = optimize_node_left(en->target, opt, env);

   if (is_set_opt_anc_info(&opt->anc, ((1<<14) | (1<<15)))) {
     if (((en->regnum) < (int )(sizeof(BitStatusType) * 8) ? ((env->scan_env->backrefed_mem) & ((BitStatusType )1 << en->regnum)) : ((env->scan_env->backrefed_mem) & 1)))
       remove_opt_anc_info(&opt->anc, ((1<<14) | (1<<15)));
   }
 }
 break;

      case (1<<2):
      case (1<<3):
 r = optimize_node_left(en->target, opt, env);
 break;

      case (1<<4):
 set_mml(&opt->len, 0, ~((OnigDistance )0));
 break;
      }
    }
    break;

  default:




    r = -6;
    break;
  }

  return r;
}

static int
set_optimize_exact_info(regex_t* reg, OptExactInfo* e)
{
  int r;
  int allow_reverse;

  if (e->len == 0) return 0;

  reg->exact = (OnigUChar* )ruby_xmalloc(e->len);
  if ((((void*)(reg->exact)) == (void*)0)) return -5;
  memcpy(reg->exact, e->s, e->len);
  reg->exact_end = reg->exact + e->len;

  allow_reverse =
 (reg->enc)->is_allowed_reverse_match(reg->exact,reg->exact_end,reg->enc);

  if (e->ignore_case > 0) {
    if (e->len >= 3 || (e->len >= 2 && allow_reverse)) {
      r = set_bm_skip(reg->exact, reg->exact_end, reg,
        reg->map, &(reg->int_map), 1);
      if (r == 0) {
 reg->optimize = (allow_reverse != 0
    ? 6 : 7);
      }
      else {
 reg->optimize = 4;
      }
    }
    else {
      reg->optimize = 4;
    }
  }
  else {
    if (e->len >= 3 || (e->len >= 2 && allow_reverse)) {
      r = set_bm_skip(reg->exact, reg->exact_end, reg,
        reg->map, &(reg->int_map), 0);
      if (r == 0) {
 reg->optimize = (allow_reverse != 0
         ? 2 : 3);
      }
      else {
 reg->optimize = 1;
      }
    }
    else {
      reg->optimize = 1;
    }
  }

  reg->dmin = e->mmd.min;
  reg->dmax = e->mmd.max;

  if (reg->dmin != ~((OnigDistance )0)) {
    reg->threshold_len = (int )(reg->dmin + (reg->exact_end - reg->exact));
  }

  return 0;
}

static void
set_optimize_map_info(regex_t* reg, OptMapInfo* m)
{
  int i;

  for (i = 0; i < 256; i++)
    reg->map[i] = m->map[i];

  reg->optimize = 5;
  reg->dmin = m->mmd.min;
  reg->dmax = m->mmd.max;

  if (reg->dmin != ~((OnigDistance )0)) {
    reg->threshold_len = (int )(reg->dmin + 1);
  }
}

static void
set_sub_anchor(regex_t* reg, OptAncInfo* anc)
{
  reg->sub_anchor |= anc->left_anchor & (1<<1);
  reg->sub_anchor |= anc->right_anchor & (1<<5);
}





static int
set_optimize_info_from_tree(Node* node, regex_t* reg, ScanEnv* scan_env)
{

  int r;
  NodeOptInfo opt;
  OptEnv env;

  env.enc = reg->enc;
  env.options = reg->options;
  env.case_fold_flag = reg->case_fold_flag;
  env.scan_env = scan_env;
  clear_mml(&env.mmd);

  r = optimize_node_left(node, &opt, &env);
  if (r) return r;

  reg->anchor = opt.anc.left_anchor & ((1<<0) |
        (1<<2) | (1<<14) | (1<<15) |
        (1<<12));

  if ((opt.anc.left_anchor & ((1<<12) | (1<<11))) != 0)
    reg->anchor &= ~(1<<15);

  reg->anchor |= opt.anc.right_anchor & ((1<<3) | (1<<4) |
 (1<<11));

  if (reg->anchor & ((1<<3) | (1<<4))) {
    reg->anchor_dmin = opt.len.min;
    reg->anchor_dmax = opt.len.max;
  }

  if (opt.exb.len > 0 || opt.exm.len > 0) {
    select_opt_exact_info(reg->enc, &opt.exb, &opt.exm);
    if (opt.map.value > 0 &&
 comp_opt_exact_or_map_info(&opt.exb, &opt.map) > 0) {
      goto set_map;
    }
    else {
      r = set_optimize_exact_info(reg, &opt.exb);
      set_sub_anchor(reg, &opt.exb.anc);
    }
  }
  else if (opt.map.value > 0) {
  set_map:
    set_optimize_map_info(reg, &opt.map);
    set_sub_anchor(reg, &opt.map.anc);
  }
  else {
    reg->sub_anchor |= opt.anc.left_anchor & (1<<1);
    if (opt.len.max == 0)
      reg->sub_anchor |= opt.anc.right_anchor & (1<<5);
  }




  return r;
}

static void
clear_optimize_info(regex_t* reg)
{
  reg->optimize = 0;
  reg->anchor = 0;
  reg->anchor_dmin = 0;
  reg->anchor_dmax = 0;
  reg->sub_anchor = 0;
  reg->exact_end = (OnigUChar* )((void*)0);
  reg->threshold_len = 0;
  if ((((void*)(reg->exact)) != (void*)0)) {
    ruby_xfree(reg->exact);
    reg->exact = (OnigUChar* )((void*)0);
  }
}
extern void
onig_free_body(regex_t* reg)
{
  if ((((void*)(reg)) != (void*)0)) {
    if ((((void*)(reg->p)) != (void*)0)) ruby_xfree(reg->p);
    if ((((void*)(reg->exact)) != (void*)0)) ruby_xfree(reg->exact);
    if ((((void*)(reg->int_map)) != (void*)0)) ruby_xfree(reg->int_map);
    if ((((void*)(reg->int_map_backward)) != (void*)0)) ruby_xfree(reg->int_map_backward);
    if ((((void*)(reg->repeat_range)) != (void*)0)) ruby_xfree(reg->repeat_range);
    if ((((void*)(reg->chain)) != (void*)0)) onig_free(reg->chain);


    onig_names_free(reg);

  }
}

extern void
onig_free(regex_t* reg)
{
  if ((((void*)(reg)) != (void*)0)) {
    onig_free_body(reg);
    ruby_xfree(reg);
  }
}


size_t
onig_memsize(const regex_t *reg)
{
    size_t size = sizeof(regex_t);
    if ((((void*)(reg)) == (void*)0)) return 0;
    if ((((void*)(reg->p)) != (void*)0)) size += reg->alloc;
    if ((((void*)(reg->exact)) != (void*)0)) size += reg->exact_end - reg->exact;
    if ((((void*)(reg->int_map)) != (void*)0)) size += sizeof(int) * 256;
    if ((((void*)(reg->int_map_backward)) != (void*)0)) size += sizeof(int) * 256;
    if ((((void*)(reg->repeat_range)) != (void*)0)) size += reg->repeat_range_alloc * sizeof(OnigRepeatRange);
    if ((((void*)(reg->chain)) != (void*)0)) size += onig_memsize(reg->chain);

    return size;
}

size_t
onig_region_memsize(const OnigRegion *regs)
{
    size_t size = sizeof(*regs);
    if ((((void*)(regs)) == (void*)0)) return 0;
    size += regs->allocated * (sizeof(*regs->beg) + sizeof(*regs->end));
    return size;
}
extern int
onig_compile(regex_t* reg, const OnigUChar* pattern, const OnigUChar* pattern_end,
      OnigErrorInfo* einfo)
{
  return onig_compile_ruby(reg, pattern, pattern_end, einfo, ((void*)0), 0);
}



extern int
onig_compile_ruby(regex_t* reg, const OnigUChar* pattern, const OnigUChar* pattern_end,
       OnigErrorInfo* einfo, const char *sourcefile, int sourceline)





{


  int r;
  OnigDistance init_size;
  Node* root;
  ScanEnv scan_env = {0};

  UnsetAddrList uslist;


  if ((((void*)(einfo)) != (void*)0)) einfo->par = (OnigUChar* )((void*)0);


  scan_env.sourcefile = sourcefile;
  scan_env.sourceline = sourceline;






  if (reg->alloc == 0) {
    init_size = (pattern_end - pattern) * 2;
    if (init_size <= 0) init_size = 20;
    r = onig_bbuf_init((BBuf* )(reg), (init_size));
    if (r != 0) goto end;
  }
  else
    reg->used = 0;

  reg->num_mem = 0;
  reg->num_repeat = 0;
  reg->num_null_check = 0;
  reg->repeat_range_alloc = 0;
  reg->repeat_range = (OnigRepeatRange* )((void*)0);




  r = onig_parse_make_tree(&root, pattern, pattern_end, reg, &scan_env);
  if (r != 0) goto err;
  if (scan_env.num_named > 0 &&
      (((scan_env.syntax)->behavior & ((1U<<7))) != 0) &&
      !((reg->options) & (((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))) {
    if (scan_env.num_named != scan_env.num_mem)
      r = disable_noname_group_capture(&root, reg, &scan_env);
    else
      r = numbered_ref_check(root);

    if (r != 0) goto err;
  }



  if (scan_env.num_call > 0) {
    r = unset_addr_list_init(&uslist, scan_env.num_call);
    if (r != 0) goto err;
    scan_env.unset_addr_list = &uslist;
    r = setup_subexp_call(root, &scan_env);
    if (r != 0) goto err_unset;
    r = subexp_recursive_check_trav(root, &scan_env);
    if (r < 0) goto err_unset;
    r = subexp_inf_recursive_check_trav(root, &scan_env);
    if (r != 0) goto err_unset;

    reg->num_call = scan_env.num_call;
  }
  else
    reg->num_call = 0;


  r = setup_tree(root, reg, 0, &scan_env);
  if (r != 0) goto err_unset;





  reg->capture_history = scan_env.capture_history;
  reg->bt_mem_start = scan_env.bt_mem_start;
  reg->bt_mem_start |= reg->capture_history;
  if (((reg->options) & (((((1U << 1) << 1) << 1) << 1) | (((((1U << 1) << 1) << 1) << 1) << 1))))
    (reg->bt_mem_end) = ~((BitStatusType )0);
  else {
    reg->bt_mem_end = scan_env.bt_mem_end;
    reg->bt_mem_end |= reg->capture_history;
  }
  clear_optimize_info(reg);

  r = set_optimize_info_from_tree(root, reg, &scan_env);
  if (r != 0) goto err_unset;


  if ((((void*)(scan_env.mem_nodes_dynamic)) != (void*)0)) {
    ruby_xfree(scan_env.mem_nodes_dynamic);
    scan_env.mem_nodes_dynamic = (Node** )((void*)0);
  }

  r = compile_tree(root, reg);
  if (r == 0) {
    r = add_opcode(reg, OP_END);

    if (scan_env.num_call > 0) {
      r = unset_addr_list_fix(&uslist, reg);
      unset_addr_list_end(&uslist);
      if (r) goto err;
    }


    if ((reg->num_repeat != 0) || (reg->bt_mem_end != 0))
      reg->stack_pop_level = 2;
    else {
      if (reg->bt_mem_start != 0)
 reg->stack_pop_level = 1;
      else
 reg->stack_pop_level = 0;
    }
  }

  else if (scan_env.num_call > 0) {
    unset_addr_list_end(&uslist);
  }

  onig_node_free(root);
 end:
  return r;

 err_unset:

  if (scan_env.num_call > 0) {
    unset_addr_list_end(&uslist);
  }

 err:
  if ((((void*)(scan_env.error)) != (void*)0)) {
    if ((((void*)(einfo)) != (void*)0)) {
      einfo->enc = scan_env.enc;
      einfo->par = scan_env.error;
      einfo->par_end = scan_env.error_end;
    }
  }

  onig_node_free(root);
  if ((((void*)(scan_env.mem_nodes_dynamic)) != (void*)0))
      ruby_xfree(scan_env.mem_nodes_dynamic);
  return r;
}

static int onig_inited = 0;

extern int
onig_reg_init(regex_t* reg, OnigOptionType option,
       OnigCaseFoldType case_fold_flag,
       OnigEncoding enc, const OnigSyntaxType* syntax)
{
  if (! onig_inited)
    onig_init();

  if ((((void*)(reg)) == (void*)0))
    return -30;

  if (((enc) == ((OnigEncoding )0)))
    return -21;

  if ((option & ((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1)|((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
      == ((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1)|((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) {
    return -403;
  }

  if ((option & ((((((1U << 1) << 1) << 1) << 1) << 1) << 1)) != 0) {
    option |= syntax->options;
    option &= ~(((1U << 1) << 1) << 1);
  }
  else
    option |= syntax->options;

  (reg)->enc = enc;
  (reg)->options = option;
  (reg)->syntax = syntax;
  (reg)->optimize = 0;
  (reg)->exact = (OnigUChar* )((void*)0);
  (reg)->int_map = (int* )((void*)0);
  (reg)->int_map_backward = (int* )((void*)0);
  (reg)->chain = (regex_t* )((void*)0);

  (reg)->p = (OnigUChar* )((void*)0);
  (reg)->alloc = 0;
  (reg)->used = 0;
  (reg)->name_table = (void* )((void*)0);

  (reg)->case_fold_flag = case_fold_flag;
  return 0;
}

extern int
onig_new_without_alloc(regex_t* reg, const OnigUChar* pattern,
          const OnigUChar* pattern_end, OnigOptionType option, OnigEncoding enc,
          const OnigSyntaxType* syntax, OnigErrorInfo* einfo)
{
  int r;

  r = onig_reg_init(reg, option, OnigDefaultCaseFoldFlag, enc, syntax);
  if (r) return r;

  r = onig_compile(reg, pattern, pattern_end, einfo);
  return r;
}

extern int
onig_new(regex_t** reg, const OnigUChar* pattern, const OnigUChar* pattern_end,
   OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax,
   OnigErrorInfo* einfo)
{
  int r;

  *reg = (regex_t* )ruby_xmalloc(sizeof(regex_t));
  if ((((void*)(*reg)) == (void*)0)) return -5;

  r = onig_reg_init(*reg, option, OnigDefaultCaseFoldFlag, enc, syntax);
  if (r) goto err;

  r = onig_compile(*reg, pattern, pattern_end, einfo);
  if (r) {
  err:
    onig_free(*reg);
    *reg = ((void*)0);
  }
  return r;
}

extern int
onig_initialize(OnigEncoding encodings[] , int n )
{
  return onig_init();
}

extern int
onig_init(void)
{
  if (onig_inited != 0)
    return 0;

  onig_inited = 1;





  onigenc_init();






  return 0;
}


static OnigEndCallListItemType* EndCallTop;

extern void onig_add_end_call(void (*func)(void))
{
  OnigEndCallListItemType* item;

  item = (OnigEndCallListItemType* )ruby_xmalloc(sizeof(*item));
  if (item == 0) return ;

  item->next = EndCallTop;
  item->func = func;

  EndCallTop = item;
}

static void
exec_end_call_list(void)
{
  OnigEndCallListItemType* prev;
  void (*func)(void);

  while (EndCallTop != 0) {
    func = EndCallTop->func;
    (*func)();

    prev = EndCallTop;
    EndCallTop = EndCallTop->next;
    ruby_xfree(prev);
  }
}

extern int
onig_end(void)
{
  exec_end_call_list();
  onig_inited = 0;

  return 0;
}

extern int
onig_is_in_code_range(const OnigUChar* p, OnigCodePoint code)
{
  OnigCodePoint n, *data;
  OnigCodePoint low, high, x;

  n = *((OnigCodePoint* )(p));
  data = (OnigCodePoint* )p;
  data++;

  for (low = 0, high = n; low < high; ) {
    x = (low + high) >> 1;
    if (code > data[x * 2 + 1])
      low = x + 1;
    else
      high = x;
  }

  return ((low < n && code >= data[low * 2]) ? 1 : 0);
}

extern int
onig_is_code_in_cc_len(int elen, OnigCodePoint code, CClassNode* cc)
{
  int found;

  if (elen > 1 || (code >= (1 << 8))) {
    if ((((void*)(cc->mbuf)) == (void*)0)) {
      found = 0;
    }
    else {
      found = (onig_is_in_code_range(cc->mbuf->p, code) != 0 ? 1 : 0);
    }
  }
  else {
    found = (((cc->bs)[(int )(code) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(code) % ((int )sizeof(Bits) * 8)))) == 0 ? 0 : 1);
  }

  if (((((cc)->flags) & ((1<<0))) != 0))
    return !found;
  else
    return found;
}

extern int
onig_is_code_in_cc(OnigEncoding enc, OnigCodePoint code, CClassNode* cc)
{
  int len;

  if (((enc)->min_enc_len) > 1) {
    len = 2;
  }
  else {
    len = (enc)->code_to_mbclen(code,enc);
  }
  return onig_is_code_in_cc_len(len, code, cc);
}
