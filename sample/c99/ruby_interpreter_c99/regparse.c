




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














const OnigSyntaxType OnigSyntaxRuby = {
  (( ( (1U<<1) | (1U<<17) | (1U<<24) | (1U<<16) | (1U<<8) | (1U<<12) | (1U<<10) | (1U<<2) | (1U<<4) | (1U<<6) | (1U<<14) | (1U<<15) | (1U<<18) | (1U<<20) | (1U<<19) | (1U<<21) | (1U<<22) | (1U<<23) ) | (1U<<25) |
     (1U<<28) | (1U<<29) |
     (1U<<30) | (1U<<26) |
     (1U<<27) )
   & ~(1U<<19) )
  , ( (1U<<1) |
      (1U<<3) |
      (1U<<7) | (1U<<8) |
      (1U<<9) |
      (1U<<16) |
      (1U<<17) |
      (1U<<4) |
      (1U<<6) | (1U<<11) |
      (1U<<12) | (1U<<13) |
      (1U<<19) |



      (1U<<22) |
      (1U<<29) |
      (1U<<21) |
      (1U<<25) |
      (1U<<31) )
  , ( ( (1U<<31) | (1U<<0) | (1U<<1) | (1U<<3) | (1U<<21) | (1U<<23) ) |
      (1U<<4) |
      (1U<<6) |
      (1U<<7) |
      (1U<<8) |
      (1U<<9) |
      (1U<<24) |
      (1U<<26) |
      (1U<<25) )
  , ( (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) |
      (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) )
  ,
  {
      (OnigCodePoint )'\\'
    , (OnigCodePoint )0
    , (OnigCodePoint )0
    , (OnigCodePoint )0
    , (OnigCodePoint )0
    , (OnigCodePoint )0
  }
};

const OnigSyntaxType* OnigDefaultSyntax = (&OnigSyntaxRuby);

extern void onig_null_warn(const char* s ) { }




static OnigWarnFunc onig_warn = onig_null_warn;





static OnigWarnFunc onig_verb_warn = onig_null_warn;


extern void onig_set_warn_func(OnigWarnFunc f)
{
  onig_warn = f;
}

extern void onig_set_verb_warn_func(OnigWarnFunc f)
{
  onig_verb_warn = f;
}

static void CC_DUP_WARN(ScanEnv *env);


static unsigned int ParseDepthLimit = 4096;

extern unsigned int
onig_get_parse_depth_limit(void)
{
  return ParseDepthLimit;
}

extern int
onig_set_parse_depth_limit(unsigned int depth)
{
  if (depth == 0)
    ParseDepthLimit = 4096;
  else
    ParseDepthLimit = depth;
  return 0;
}


static void
bbuf_free(BBuf* bbuf)
{
  if ((((void*)(bbuf)) != (void*)0)) {
    if ((((void*)(bbuf->p)) != (void*)0)) ruby_xfree(bbuf->p);
    ruby_xfree(bbuf);
  }
}

static int
bbuf_clone(BBuf** rto, BBuf* from)
{
  int r;
  BBuf *to;

  *rto = to = (BBuf* )ruby_xmalloc(sizeof(BBuf));
  if ((((void*)(to)) == (void*)0)) return -5;
  r = onig_bbuf_init((BBuf* )(to), (from->alloc));
  if (r != 0) return r;
  to->used = from->used;
  memcpy(to->p, from->p, from->used);
  return 0;
}
static void
bitset_set_range(ScanEnv *env, BitSetRef bs, int from, int to)
{
  int i;
  for (i = from; i <= to && i < (1 << 8); i++) {
    do { if (((bs)[(int )(i) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(i) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (bs)[(int )(i) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(i) % ((int )sizeof(Bits) * 8))); } while (0);
  }
}
static void
bitset_invert(BitSetRef bs)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { bs[i] = ~(bs[i]); }
}

static void
bitset_invert_to(BitSetRef from, BitSetRef to)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { to[i] = ~(from[i]); }
}

static void
bitset_and(BitSetRef dest, BitSetRef bs)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { dest[i] &= bs[i]; }
}

static void
bitset_or(BitSetRef dest, BitSetRef bs)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { dest[i] |= bs[i]; }
}

static void
bitset_copy(BitSetRef dest, BitSetRef bs)
{
  int i;
  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { dest[i] = bs[i]; }
}
extern void
onig_strcpy(OnigUChar* dest, const OnigUChar* src, const OnigUChar* end)
{
  ptrdiff_t len = end - src;
  if (len > 0) {
    memcpy(dest, src, len);
    dest[len] = (OnigUChar )0;
  }
}


static OnigUChar*
strdup_with_null(OnigEncoding enc, OnigUChar* s, OnigUChar* end)
{
  ptrdiff_t slen;
  int term_len, i;
  OnigUChar *r;

  slen = end - s;
  term_len = ((enc)->min_enc_len);

  r = (OnigUChar* )ruby_xmalloc(slen + term_len);
  if ((((void*)(r)) == (void*)0)) return ((void*)0);
  memcpy(r, s, slen);

  for (i = 0; i < term_len; i++)
    r[slen + i] = (OnigUChar )0;

  return r;
}
static OnigUChar*
strcat_capa(OnigUChar* dest, OnigUChar* dest_end, const OnigUChar* src, const OnigUChar* src_end,
       size_t capa)
{
  OnigUChar* r;

  if (dest)
    r = (OnigUChar* )ruby_xrealloc(dest, capa + 1);
  else
    r = (OnigUChar* )ruby_xmalloc(capa + 1);

  if ((((void*)(r)) == (void*)0)) return ((void*)0);
  onig_strcpy(r + (dest_end - dest), src, src_end);
  return r;
}


static OnigUChar*
strcat_capa_from_static(OnigUChar* dest, OnigUChar* dest_end,
   const OnigUChar* src, const OnigUChar* src_end, size_t capa)
{
  OnigUChar* r;

  r = (OnigUChar* )ruby_xmalloc(capa + 1);
  if ((((void*)(r)) == (void*)0)) return ((void*)0);
  onig_strcpy(r, dest, dest_end);
  onig_strcpy(r + (dest_end - dest), src, src_end);
  return r;
}
typedef struct {
  const OnigUChar* s;
  const OnigUChar* end;
} st_str_end_key;

static int
str_end_cmp(st_data_t xp, st_data_t yp)
{
  const st_str_end_key *x, *y;
  const OnigUChar *p, *q;
  int c;

  x = (const st_str_end_key *)xp;
  y = (const st_str_end_key *)yp;
  if ((x->end - x->s) != (y->end - y->s))
    return 1;

  p = x->s;
  q = y->s;
  while (p < x->end) {
    c = (int )*p - (int )*q;
    if (c != 0) return c;

    p++; q++;
  }

  return 0;
}

static st_index_t
str_end_hash(st_data_t xp)
{
  const st_str_end_key *x = (const st_str_end_key *)xp;
  const OnigUChar *p;
  st_index_t val = 0;

  p = x->s;
  while (p < x->end) {
    val = val * 997 + (int )*p++;
  }

  return val + (val >> 5);
}

extern hash_table_type*
onig_st_init_strend_table_with_size(st_index_t size)
{
  static const struct st_hash_type hashType = {
    str_end_cmp,
    str_end_hash,
  };

  return (hash_table_type* )
           onig_st_init_table_with_size(&hashType, size);
}

extern int
onig_st_lookup_strend(hash_table_type* table, const OnigUChar* str_key,
        const OnigUChar* end_key, hash_data_type *value)
{
  st_str_end_key key;

  key.s = (OnigUChar* )str_key;
  key.end = (OnigUChar* )end_key;

  return onig_st_lookup(table, (st_data_t )(&key), value);
}

extern int
onig_st_insert_strend(hash_table_type* table, const OnigUChar* str_key,
        const OnigUChar* end_key, hash_data_type value)
{
  st_str_end_key* key;
  int result;

  key = (st_str_end_key* )ruby_xmalloc(sizeof(st_str_end_key));
  key->s = (OnigUChar* )str_key;
  key->end = (OnigUChar* )end_key;
  result = onig_st_insert(table, (st_data_t )key, value);
  if (result) {
    ruby_xfree(key);
  }
  return result;
}
typedef struct {
  OnigUChar* name;
  size_t name_len;
  int back_num;
  int back_alloc;
  int back_ref1;
  int* back_refs;
} NameEntry;



typedef st_table NameTable;
typedef st_data_t HashDataType;
static int
i_free_name_entry(OnigUChar* key, NameEntry* e, void* arg )
{
  ruby_xfree(e->name);
  if ((((void*)(e->back_refs)) != (void*)0)) ruby_xfree(e->back_refs);
  ruby_xfree(key);
  ruby_xfree(e);
  return ST_DELETE;
}

static int
names_clear(regex_t* reg)
{
  NameTable* t = (NameTable* )reg->name_table;

  if ((((void*)(t)) != (void*)0)) {
    onig_st_foreach(t, i_free_name_entry, 0);
  }
  return 0;
}

extern int
onig_names_free(regex_t* reg)
{
  int r;
  NameTable* t;

  r = names_clear(reg);
  if (r) return r;

  t = (NameTable* )reg->name_table;
  if ((((void*)(t)) != (void*)0)) onig_st_free_table(t);
  reg->name_table = (void* )((void*)0);
  return 0;
}

static NameEntry*
name_find(regex_t* reg, const OnigUChar* name, const OnigUChar* name_end)
{
  NameEntry* e;
  NameTable* t = (NameTable* )reg->name_table;

  e = (NameEntry* )((void*)0);
  if ((((void*)(t)) != (void*)0)) {
    onig_st_lookup_strend(t, name, name_end, (HashDataType* )((void* )(&e)));
  }
  return e;
}

typedef struct {
  int (*func)(const OnigUChar*, const OnigUChar*,int,int*,regex_t*,void*);
  regex_t* reg;
  void* arg;
  int ret;
  OnigEncoding enc;
} INamesArg;

static int
i_names(OnigUChar* key , NameEntry* e, INamesArg* arg)
{
  int r = (*(arg->func))(e->name,
    e->name + e->name_len,
    e->back_num,
    (e->back_num > 1 ? e->back_refs : &(e->back_ref1)),
    arg->reg, arg->arg);
  if (r != 0) {
    arg->ret = r;
    return ST_STOP;
  }
  return ST_CONTINUE;
}

extern int
onig_foreach_name(regex_t* reg,
  int (*func)(const OnigUChar*, const OnigUChar*,int,int*,regex_t*,void*), void* arg)
{
  INamesArg narg;
  NameTable* t = (NameTable* )reg->name_table;

  narg.ret = 0;
  if ((((void*)(t)) != (void*)0)) {
    narg.func = func;
    narg.reg = reg;
    narg.arg = arg;
    narg.enc = reg->enc;
    onig_st_foreach(t, i_names, (HashDataType )&narg);
  }
  return narg.ret;
}

static int
i_renumber_name(OnigUChar* key , NameEntry* e, GroupNumRemap* map)
{
  int i;

  if (e->back_num > 1) {
    for (i = 0; i < e->back_num; i++) {
      e->back_refs[i] = map[e->back_refs[i]].new_val;
    }
  }
  else if (e->back_num == 1) {
    e->back_ref1 = map[e->back_ref1].new_val;
  }

  return ST_CONTINUE;
}

extern int
onig_renumber_name_table(regex_t* reg, GroupNumRemap* map)
{
  NameTable* t = (NameTable* )reg->name_table;

  if ((((void*)(t)) != (void*)0)) {
    onig_st_foreach(t, i_renumber_name, (HashDataType )map);
  }
  return 0;
}


extern int
onig_number_of_names(const regex_t* reg)
{
  NameTable* t = (NameTable* )reg->name_table;

  if ((((void*)(t)) != (void*)0))
    return (int )t->num_entries;
  else
    return 0;
}
static int
name_add(regex_t* reg, OnigUChar* name, OnigUChar* name_end, int backref, ScanEnv* env)
{
  int alloc;
  NameEntry* e;
  NameTable* t = (NameTable* )reg->name_table;

  if (name_end - name <= 0)
    return -214;

  e = name_find(reg, name, name_end);
  if ((((void*)(e)) == (void*)0)) {

    if ((((void*)(t)) == (void*)0)) {
      t = onig_st_init_strend_table_with_size(5);
      reg->name_table = (void* )t;
    }
    e = (NameEntry* )ruby_xmalloc(sizeof(NameEntry));
    if ((((void*)(e)) == (void*)0)) return -5;

    e->name = strdup_with_null(reg->enc, name, name_end);
    if ((((void*)(e->name)) == (void*)0)) {
      ruby_xfree(e);
      return -5;
    }
    onig_st_insert_strend(t, e->name, (e->name + (name_end - name)),
                          (HashDataType )e);

    e->name_len = name_end - name;
    e->back_num = 0;
    e->back_alloc = 0;
    e->back_refs = (int* )((void*)0);
  }

  if (e->back_num >= 1 &&
      ! (((env->syntax)->behavior & ((1U<<8))) != 0)) {
    onig_scan_env_set_error_string(env, -219,
        name, name_end);
    return -219;
  }

  e->back_num++;
  if (e->back_num == 1) {
    e->back_ref1 = backref;
  }
  else {
    if (e->back_num == 2) {
      alloc = 8;
      e->back_refs = (int* )ruby_xmalloc(sizeof(int) * alloc);
      if ((((void*)(e->back_refs)) == (void*)0)) return -5;
      e->back_alloc = alloc;
      e->back_refs[0] = e->back_ref1;
      e->back_refs[1] = backref;
    }
    else {
      if (e->back_num > e->back_alloc) {
 int* p;
 alloc = e->back_alloc * 2;
 p = (int* )ruby_xrealloc(e->back_refs, sizeof(int) * alloc);
 if ((((void*)(p)) == (void*)0)) return -5;
 e->back_refs = p;
 e->back_alloc = alloc;
      }
      e->back_refs[e->back_num - 1] = backref;
    }
  }

  return 0;
}

extern int
onig_name_to_group_numbers(regex_t* reg, const OnigUChar* name,
      const OnigUChar* name_end, int** nums)
{
  NameEntry* e = name_find(reg, name, name_end);

  if ((((void*)(e)) == (void*)0)) return -217;

  switch (e->back_num) {
  case 0:
    *nums = 0;
    break;
  case 1:
    *nums = &(e->back_ref1);
    break;
  default:
    *nums = e->back_refs;
    break;
  }
  return e->back_num;
}

extern int
onig_name_to_backref_number(regex_t* reg, const OnigUChar* name,
       const OnigUChar* name_end, const OnigRegion *region)
{
  int i, n, *nums;

  n = onig_name_to_group_numbers(reg, name, name_end, &nums);
  if (n < 0)
    return n;
  else if (n == 0)
    return -11;
  else if (n == 1)
    return nums[0];
  else {
    if ((((void*)(region)) != (void*)0)) {
      for (i = n - 1; i >= 0; i--) {
 if (region->beg[nums[i]] != -1)
   return nums[i];
      }
    }
    return nums[n - 1];
  }
}
extern int
onig_noname_group_capture_is_active(const regex_t* reg)
{
  if (((reg->options) & ((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1))))
    return 0;


  if (onig_number_of_names(reg) > 0 &&
      (((reg->syntax)->behavior & ((1U<<7))) != 0) &&
      !((reg->options) & (((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))) {
    return 0;
  }


  return 1;
}




static void
scan_env_clear(ScanEnv* env)
{
  int i;

  (env->capture_history) = 0;
  (env->bt_mem_start) = 0;
  (env->bt_mem_end) = 0;
  (env->backrefed_mem) = 0;
  env->error = (OnigUChar* )((void*)0);
  env->error_end = (OnigUChar* )((void*)0);
  env->num_call = 0;
  env->num_mem = 0;

  env->num_named = 0;

  env->mem_alloc = 0;
  env->mem_nodes_dynamic = (Node** )((void*)0);

  for (i = 0; i < 8; i++)
    env->mem_nodes_static[i] = ((Node* )0);







  env->parse_depth = 0;
  env->warnings_flag = 0;
}

static int
scan_env_add_mem_entry(ScanEnv* env)
{
  int i, need, alloc;
  Node** p;

  need = env->num_mem + 1;
  if (need > 32767)
    return -210;
  if (need >= 8) {
    if (env->mem_alloc <= need) {
      if ((((void*)(env->mem_nodes_dynamic)) == (void*)0)) {
 alloc = 16;
 p = (Node** )ruby_xmalloc(sizeof(Node*) * alloc);
 if ((((void*)(p)) == (void*)0)) return -5;
 memcpy(p, env->mem_nodes_static,
  sizeof(Node*) * 8);
      }
      else {
 alloc = env->mem_alloc * 2;
 p = (Node** )ruby_xrealloc(env->mem_nodes_dynamic, sizeof(Node*) * alloc);
 if ((((void*)(p)) == (void*)0)) return -5;
      }

      for (i = env->num_mem + 1; i < alloc; i++)
 p[i] = ((Node* )0);

      env->mem_nodes_dynamic = p;
      env->mem_alloc = alloc;
    }
  }

  env->num_mem++;
  return env->num_mem;
}

static int
scan_env_set_mem_node(ScanEnv* env, int num, Node* node)
{
  if (env->num_mem >= num)
    ((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[num] = node;
  else
    return -11;
  return 0;
}


extern void
onig_node_free(Node* node)
{
 start:
  if ((((void*)(node)) == (void*)0)) return ;

  switch (((node)->u.base.type)) {
  case 0:
    if ((&((node)->u.str))->capa != 0 &&
 (((void*)((&((node)->u.str))->s)) != (void*)0) && (&((node)->u.str))->s != (&((node)->u.str))->buf) {
      ruby_xfree((&((node)->u.str))->s);
    }
    break;

  case 8:
  case 9:
    onig_node_free(((&((node)->u.cons))->car));
    {
      Node* next_node = ((&((node)->u.cons))->cdr);

      ruby_xfree(node);
      node = next_node;
      goto start;
    }
    break;

  case 1:
    {
      CClassNode* cc = (&((node)->u.cclass));

      if (cc->mbuf)
 bbuf_free(cc->mbuf);
    }
    break;

  case 5:
    if ((&((node)->u.qtfr))->target)
      onig_node_free((&((node)->u.qtfr))->target);
    break;

  case 6:
    if ((&((node)->u.enclose))->target)
      onig_node_free((&((node)->u.enclose))->target);
    break;

  case 4:
    if ((((void*)((&((node)->u.bref))->back_dynamic)) != (void*)0))
      ruby_xfree((&((node)->u.bref))->back_dynamic);
    break;

  case 7:
    if ((&((node)->u.anchor))->target)
      onig_node_free((&((node)->u.anchor))->target);
    break;
  }

  ruby_xfree(node);
}

static Node*
node_new(void)
{
  Node* node;

  node = (Node* )ruby_xmalloc(sizeof(Node));

  return node;
}

static void
initialize_cclass(CClassNode* cc)
{
  do { int i; for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { (cc->bs)[i] = 0; } } while (0);

  cc->flags = 0;
  cc->mbuf = ((void*)0);
}

static Node*
node_new_cclass(void)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 1; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  initialize_cclass((&((node)->u.cclass)));
  return node;
}

static Node*
node_new_ctype(int type, int not, int ascii_range)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 2; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.ctype))->ctype = type;
  (&((node)->u.ctype))->not = not;
  (&((node)->u.ctype))->ascii_range = ascii_range;
  return node;
}

static Node*
node_new_anychar(void)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 3; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  return node;
}

static Node*
node_new_list(Node* left, Node* right)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 8; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  ((&((node)->u.cons))->car) = left;
  ((&((node)->u.cons))->cdr) = right;
  return node;
}

extern Node*
onig_node_new_list(Node* left, Node* right)
{
  return node_new_list(left, right);
}

extern Node*
onig_node_list_add(Node* list, Node* x)
{
  Node *n;

  n = onig_node_new_list(x, ((void*)0));
  if ((((void*)(n)) == (void*)0)) return ((Node* )0);

  if ((((void*)(list)) != (void*)0)) {
    while ((((void*)(((&((list)->u.cons))->cdr))) != (void*)0))
      list = ((&((list)->u.cons))->cdr);

    ((&((list)->u.cons))->cdr) = n;
  }

  return n;
}

extern Node*
onig_node_new_alt(Node* left, Node* right)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 9; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  ((&((node)->u.cons))->car) = left;
  ((&((node)->u.cons))->cdr) = right;
  return node;
}

extern Node*
onig_node_new_anchor(int type)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 7; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.anchor))->type = type;
  (&((node)->u.anchor))->target = ((void*)0);
  (&((node)->u.anchor))->char_len = -1;
  (&((node)->u.anchor))->ascii_range = 0;
  return node;
}

static Node*
node_new_backref(int back_num, int* backrefs, int by_name,

   int exist_level, int nest_level,

   ScanEnv* env)
{
  int i;
  Node* node = node_new();

  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 4; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.bref))->state = 0;
  (&((node)->u.bref))->back_num = back_num;
  (&((node)->u.bref))->back_dynamic = (int* )((void*)0);
  if (by_name != 0)
    (&((node)->u.bref))->state |= (1<<11);


  if (exist_level != 0) {
    (&((node)->u.bref))->state |= (1<<13);
    (&((node)->u.bref))->nest_level = nest_level;
  }


  for (i = 0; i < back_num; i++) {
    if (backrefs[i] <= env->num_mem &&
 (((void*)(((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[backrefs[i]])) == (void*)0)) {
      (&((node)->u.bref))->state |= (1<<7);
      break;
    }
  }

  if (back_num <= 6) {
    for (i = 0; i < back_num; i++)
      (&((node)->u.bref))->back_static[i] = backrefs[i];
  }
  else {
    int* p = (int* )ruby_xmalloc(sizeof(int) * back_num);
    if ((((void*)(p)) == (void*)0)) {
      onig_node_free(node);
      return ((void*)0);
    }
    (&((node)->u.bref))->back_dynamic = p;
    for (i = 0; i < back_num; i++)
      p[i] = backrefs[i];
  }
  return node;
}


static Node*
node_new_call(OnigUChar* name, OnigUChar* name_end, int gnum)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 10; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.call))->state = 0;
  (&((node)->u.call))->target = ((Node* )0);
  (&((node)->u.call))->name = name;
  (&((node)->u.call))->name_end = name_end;
  (&((node)->u.call))->group_num = gnum;
  return node;
}


static Node*
node_new_quantifier(int lower, int upper, int by_number)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 5; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.qtfr))->state = 0;
  (&((node)->u.qtfr))->target = ((void*)0);
  (&((node)->u.qtfr))->lower = lower;
  (&((node)->u.qtfr))->upper = upper;
  (&((node)->u.qtfr))->greedy = 1;
  (&((node)->u.qtfr))->target_empty_info = 0;
  (&((node)->u.qtfr))->head_exact = ((Node* )0);
  (&((node)->u.qtfr))->next_head_exact = ((Node* )0);
  (&((node)->u.qtfr))->is_refered = 0;
  if (by_number != 0)
    (&((node)->u.qtfr))->state |= (1<<14);





  return node;
}

static Node*
node_new_enclose(int type)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 6; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.enclose))->type = type;
  (&((node)->u.enclose))->state = 0;
  (&((node)->u.enclose))->regnum = 0;
  (&((node)->u.enclose))->option = 0;
  (&((node)->u.enclose))->target = ((void*)0);
  (&((node)->u.enclose))->call_addr = -1;
  (&((node)->u.enclose))->opt_count = 0;
  return node;
}

extern Node*
onig_node_new_enclose(int type)
{
  return node_new_enclose(type);
}

static Node*
node_new_enclose_memory(OnigOptionType option, int is_named)
{
  Node* node = node_new_enclose((1<<0));
  if ((((void*)(node)) == (void*)0)) return ((void*)0);
  if (is_named != 0)
    (node)->u.enclose.state |= ((1<<10));


  (&((node)->u.enclose))->option = option;

  return node;
}

static Node*
node_new_option(OnigOptionType option)
{
  Node* node = node_new_enclose((1<<1));
  if ((((void*)(node)) == (void*)0)) return ((void*)0);
  (&((node)->u.enclose))->option = option;
  return node;
}

extern int
onig_node_str_cat(Node* node, const OnigUChar* s, const OnigUChar* end)
{
  ptrdiff_t addlen = end - s;

  if (addlen > 0) {
    ptrdiff_t len = (&((node)->u.str))->end - (&((node)->u.str))->s;

    if ((&((node)->u.str))->capa > 0 || (len + addlen > 24 - 1)) {
      OnigUChar* p;
      ptrdiff_t capa = len + addlen + 16;

      if (capa <= (&((node)->u.str))->capa) {
 onig_strcpy((&((node)->u.str))->s + len, s, end);
      }
      else {
 if ((&((node)->u.str))->s == (&((node)->u.str))->buf)
   p = strcat_capa_from_static((&((node)->u.str))->s, (&((node)->u.str))->end,
          s, end, capa);
 else
   p = strcat_capa((&((node)->u.str))->s, (&((node)->u.str))->end, s, end, capa);

 if ((((void*)(p)) == (void*)0)) return -5;
 (&((node)->u.str))->s = p;
 (&((node)->u.str))->capa = (int )capa;
      }
    }
    else {
      onig_strcpy((&((node)->u.str))->s + len, s, end);
    }
    (&((node)->u.str))->end = (&((node)->u.str))->s + len + addlen;
  }

  return 0;
}

extern int
onig_node_str_set(Node* node, const OnigUChar* s, const OnigUChar* end)
{
  onig_node_str_clear(node);
  return onig_node_str_cat(node, s, end);
}

static int
node_str_cat_char(Node* node, OnigUChar c)
{
  OnigUChar s[1];

  s[0] = c;
  return onig_node_str_cat(node, s, s + 1);
}

static int
node_str_cat_codepoint(Node* node, OnigEncoding enc, OnigCodePoint c)
{
  OnigUChar buf[7];
  int num = (enc)->code_to_mbc(c,buf,enc);
  if (num < 0) return num;
  return onig_node_str_cat(node, buf, buf + num);
}
extern void
onig_node_str_clear(Node* node)
{
  if ((&((node)->u.str))->capa != 0 &&
      (((void*)((&((node)->u.str))->s)) != (void*)0) && (&((node)->u.str))->s != (&((node)->u.str))->buf) {
    ruby_xfree((&((node)->u.str))->s);
  }

  (&((node)->u.str))->capa = 0;
  (&((node)->u.str))->flag = 0;
  (&((node)->u.str))->s = (&((node)->u.str))->buf;
  (&((node)->u.str))->end = (&((node)->u.str))->buf;
}

static Node*
node_new_str(const OnigUChar* s, const OnigUChar* end)
{
  Node* node = node_new();
  if ((((void*)(node)) == (void*)0)) return ((void*)0);

  do { int value = 0; memcpy(&((node)->u.base.type), &value, sizeof(int)); } while (0);
  (&((node)->u.str))->capa = 0;
  (&((node)->u.str))->flag = 0;
  (&((node)->u.str))->s = (&((node)->u.str))->buf;
  (&((node)->u.str))->end = (&((node)->u.str))->buf;
  if (onig_node_str_cat(node, s, end)) {
    onig_node_free(node);
    return ((void*)0);
  }
  return node;
}

extern Node*
onig_node_new_str(const OnigUChar* s, const OnigUChar* end)
{
  return node_new_str(s, end);
}

static Node*
node_new_str_raw(OnigUChar* s, OnigUChar* end)
{
  Node* node = node_new_str(s, end);
  if ((((void*)(node)) != (void*)0))
    (node)->u.str.flag |= (1<<0);
  return node;
}

static Node*
node_new_empty(void)
{
  return node_new_str(((void*)0), ((void*)0));
}

static Node*
node_new_str_raw_char(OnigUChar c)
{
  OnigUChar p[1];

  p[0] = c;
  return node_new_str_raw(p, p + 1);
}

static Node*
str_node_split_last_char(StrNode* sn, OnigEncoding enc)
{
  const OnigUChar *p;
  Node* n = ((Node* )0);

  if (sn->end > sn->s) {
    p = onigenc_get_prev_char_head(enc, sn->s, sn->end, sn->end);
    if (p && p > sn->s) {
      n = node_new_str(p, sn->end);
      if ((((void*)(n)) != (void*)0) && (sn->flag & (1<<0)) != 0)
 (n)->u.str.flag |= (1<<0);
      sn->end = (OnigUChar* )p;
    }
  }
  return n;
}

static int
str_node_can_be_split(StrNode* sn, OnigEncoding enc)
{
  if (sn->end > sn->s) {
    return ((((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(sn->s,sn->end,enc)) < sn->end - sn->s) ? 1 : 0);
  }
  return 0;
}
extern int
onig_scan_unsigned_number(OnigUChar** src, const OnigUChar* end, OnigEncoding enc)
{
  unsigned int num, val;
  OnigCodePoint c;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  num = 0;
  while (!(p < end ? 0 : 1)) {
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if ((enc)->is_code_ctype(c,4,enc)) {
      val = (unsigned int )((c) - '0');
      if ((((1UL << (4 * 8 - 1)) - 1) - val) / 10UL < num)
 return -1;

      num = num * 10 + val;
    }
    else {
      p = pfetch_prev;
      break;
    }
  }
  *src = p;
  return num;
}

static int
scan_unsigned_hexadecimal_number(OnigUChar** src, OnigUChar* end, int minlen,
     int maxlen, OnigEncoding enc)
{
  OnigCodePoint c;
  unsigned int num, val;
  int restlen;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  restlen = maxlen - minlen;
  num = 0;
  while (!(p < end ? 0 : 1) && maxlen-- != 0) {
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if ((enc)->is_code_ctype(c,11,enc)) {
      val = (unsigned int )((enc)->is_code_ctype(c,4,enc) ? ((c) - '0') : ((enc)->is_code_ctype(c,10,enc) ? (c) - 'A' + 10 : (c) - 'a' + 10));
      if ((((1UL << (4 * 8 - 1)) - 1) - val) / 16UL < num)
 return -1;

      num = (num << 4) + ((enc)->is_code_ctype(c,4,enc) ? ((c) - '0') : ((enc)->is_code_ctype(c,10,enc) ? (c) - 'A' + 10 : (c) - 'a' + 10));
    }
    else {
      p = pfetch_prev;
      maxlen++;
      break;
    }
  }
  if (maxlen > restlen)
    return -2;
  *src = p;
  return num;
}

static int
scan_unsigned_octal_number(OnigUChar** src, OnigUChar* end, int maxlen,
      OnigEncoding enc)
{
  OnigCodePoint c;
  unsigned int num, val;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  num = 0;
  while (!(p < end ? 0 : 1) && maxlen-- != 0) {
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if ((enc)->is_code_ctype(c,4,enc) && c < '8') {
      val = ((c) - '0');
      if ((((1UL << (4 * 8 - 1)) - 1) - val) / 8UL < num)
 return -1;

      num = (num << 3) + val;
    }
    else {
      p = pfetch_prev;
      break;
    }
  }
  *src = p;
  return num;
}
static int
new_code_range(BBuf** pbuf)
{

  int r;
  OnigCodePoint n;
  BBuf* bbuf;

  bbuf = *pbuf = (BBuf* )ruby_xmalloc(sizeof(BBuf));
  if ((((void*)(*pbuf)) == (void*)0)) return -5;
  r = onig_bbuf_init((BBuf* )(*pbuf), (((int )sizeof(OnigCodePoint) * 5)));
  if (r) return r;

  n = 0;
  do{ int used = (0) + (int )((int )sizeof(OnigCodePoint)); if ((bbuf)->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { ((bbuf))->alloc *= 2; } while (((bbuf))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc(((bbuf))->p, ((bbuf))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((bbuf))->p = tmp;} while (0); memcpy((bbuf)->p + (0), (&(n)), ((int )sizeof(OnigCodePoint))); if ((bbuf)->used < (unsigned int )used) (bbuf)->used = used;} while (0);
  return 0;
}

static int
add_code_range_to_buf0(BBuf** pbuf, ScanEnv* env, OnigCodePoint from, OnigCodePoint to,
 int checkdup)
{
  int r, inc_n, pos;
  OnigCodePoint low, high, bound, x;
  OnigCodePoint n, *data;
  BBuf* bbuf;

  if (from > to) {
    n = from; from = to; to = n;
  }

  if ((((void*)(*pbuf)) == (void*)0)) {
    r = new_code_range(pbuf);
    if (r) return r;
    bbuf = *pbuf;
    n = 0;
  }
  else {
    bbuf = *pbuf;
    n = *((OnigCodePoint* )(bbuf->p));
  }
  data = (OnigCodePoint* )(bbuf->p);
  data++;

  bound = (from == 0) ? 0 : n;
  for (low = 0; low < bound; ) {
    x = (low + bound) >> 1;
    if (from - 1 > data[x*2 + 1])
      low = x + 1;
    else
      bound = x;
  }

  high = (to == (~((OnigCodePoint )0))) ? n : low;
  for (bound = n; high < bound; ) {
    x = (high + bound) >> 1;
    if (to + 1 >= data[x*2])
      high = x + 1;
    else
      bound = x;
  }




  inc_n = low + 1 - high;
  if (n + inc_n > 10000)
    return -205;

  if (inc_n != 1) {
    if (checkdup && from <= data[low*2+1]
 && (data[low*2] <= from || data[low*2+1] <= to))
      CC_DUP_WARN(env);
    if (from > data[low*2])
      from = data[low*2];
    if (to < data[(high - 1)*2 + 1])
      to = data[(high - 1)*2 + 1];
  }

  if (inc_n != 0) {
    int from_pos = (int )sizeof(OnigCodePoint) * (1 + high * 2);
    int to_pos = (int )sizeof(OnigCodePoint) * (1 + (low + 1) * 2);

    if (inc_n > 0) {
      if (high < n) {
 int size = (n - high) * 2 * (int )sizeof(OnigCodePoint);
 do { if ((unsigned int )((to_pos)+(size)) > (bbuf)->alloc) do{ OnigUChar *tmp; do { ((bbuf))->alloc *= 2; } while (((bbuf))->alloc < (unsigned int )(to_pos) + (size)); tmp = (OnigUChar* )ruby_xrealloc(((bbuf))->p, ((bbuf))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((bbuf))->p = tmp;} while (0); memmove((bbuf)->p + (to_pos), (bbuf)->p + (from_pos), (size)); if ((unsigned int )((to_pos)+(size)) > (bbuf)->used) (bbuf)->used = (to_pos) + (size);} while (0);
      }
    }
    else {
      do { memmove((bbuf)->p + (to_pos), (bbuf)->p + (from_pos), (bbuf)->used - (from_pos)); (bbuf)->used -= (from_pos - to_pos);} while (0);
    }
  }

  pos = (int )sizeof(OnigCodePoint) * (1 + low * 2);
  do{ unsigned int new_alloc = (bbuf)->alloc; while (new_alloc < (unsigned int )(pos + (int )sizeof(OnigCodePoint) * 2)) { new_alloc *= 2; } if ((bbuf)->alloc != new_alloc) { OnigUChar *tmp; tmp = (OnigUChar* )ruby_xrealloc((bbuf)->p, new_alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); (bbuf)->p = tmp; (bbuf)->alloc = new_alloc; }} while (0);
  do{ int used = (pos) + (int )((int )sizeof(OnigCodePoint)); if ((bbuf)->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { ((bbuf))->alloc *= 2; } while (((bbuf))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc(((bbuf))->p, ((bbuf))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((bbuf))->p = tmp;} while (0); memcpy((bbuf)->p + (pos), (&(from)), ((int )sizeof(OnigCodePoint))); if ((bbuf)->used < (unsigned int )used) (bbuf)->used = used;} while (0);
  do{ int used = (pos + (int )sizeof(OnigCodePoint)) + (int )((int )sizeof(OnigCodePoint)); if ((bbuf)->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { ((bbuf))->alloc *= 2; } while (((bbuf))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc(((bbuf))->p, ((bbuf))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((bbuf))->p = tmp;} while (0); memcpy((bbuf)->p + (pos + (int )sizeof(OnigCodePoint)), (&(to)), ((int )sizeof(OnigCodePoint))); if ((bbuf)->used < (unsigned int )used) (bbuf)->used = used;} while (0);
  n += inc_n;
  do{ int used = (0) + (int )((int )sizeof(OnigCodePoint)); if ((bbuf)->alloc < (unsigned int )used) do{ OnigUChar *tmp; do { ((bbuf))->alloc *= 2; } while (((bbuf))->alloc < (unsigned int )used); tmp = (OnigUChar* )ruby_xrealloc(((bbuf))->p, ((bbuf))->alloc); if ((((void*)(tmp)) == (void*)0)) return(-5); ((bbuf))->p = tmp;} while (0); memcpy((bbuf)->p + (0), (&(n)), ((int )sizeof(OnigCodePoint))); if ((bbuf)->used < (unsigned int )used) (bbuf)->used = used;} while (0);

  return 0;
}

static int
add_code_range_to_buf(BBuf** pbuf, ScanEnv* env, OnigCodePoint from, OnigCodePoint to)
{
  return add_code_range_to_buf0(pbuf, env, from, to, 1);
}

static int
add_code_range0(BBuf** pbuf, ScanEnv* env, OnigCodePoint from, OnigCodePoint to, int checkdup)
{
  if (from > to) {
    if ((((env->syntax)->behavior & ((1U<<22))) != 0))
      return 0;
    else
      return -203;
  }

  return add_code_range_to_buf0(pbuf, env, from, to, checkdup);
}

static int
add_code_range(BBuf** pbuf, ScanEnv* env, OnigCodePoint from, OnigCodePoint to)
{
  return add_code_range0(pbuf, env, from, to, 1);
}

static int
not_code_range_buf(OnigEncoding enc, BBuf* bbuf, BBuf** pbuf, ScanEnv* env)
{
  int r, i, n;
  OnigCodePoint pre, from, *data, to = 0;

  *pbuf = (BBuf* )((void*)0);
  if ((((void*)(bbuf)) == (void*)0)) {
  set_all:
    return add_code_range_to_buf(pbuf, env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0)));
  }

  data = (OnigCodePoint* )(bbuf->p);
  n = *((OnigCodePoint* )(data));
  data++;
  if (n <= 0) goto set_all;

  r = 0;
  pre = (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80);
  for (i = 0; i < n; i++) {
    from = data[i*2];
    to = data[i*2+1];
    if (pre <= from - 1) {
      r = add_code_range_to_buf(pbuf, env, pre, from - 1);
      if (r != 0) return r;
    }
    if (to == (~((OnigCodePoint )0))) break;
    pre = to + 1;
  }
  if (to < (~((OnigCodePoint )0))) {
    r = add_code_range_to_buf(pbuf, env, to + 1, (~((OnigCodePoint )0)));
  }
  return r;
}
static int
or_code_range_buf(OnigEncoding enc, BBuf* bbuf1, int not1,
                  BBuf* bbuf2, int not2, BBuf** pbuf, ScanEnv* env)
{
  int r;
  OnigCodePoint i, n1, *data1;
  OnigCodePoint from, to;

  *pbuf = (BBuf* )((void*)0);
  if ((((void*)(bbuf1)) == (void*)0) && (((void*)(bbuf2)) == (void*)0)) {
    if (not1 != 0 || not2 != 0)
      return add_code_range_to_buf(pbuf, env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0)));
    return 0;
  }

  r = 0;
  if ((((void*)(bbuf2)) == (void*)0))
    do { BBuf *tbuf; int tnot; tnot = not1; not1 = not2; not2 = tnot; tbuf = bbuf1; bbuf1 = bbuf2; bbuf2 = tbuf; } while (0);

  if ((((void*)(bbuf1)) == (void*)0)) {
    if (not1 != 0) {
      return add_code_range_to_buf(pbuf, env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0)));
    }
    else {
      if (not2 == 0) {
 return bbuf_clone(pbuf, bbuf2);
      }
      else {
 return not_code_range_buf(enc, bbuf2, pbuf, env);
      }
    }
  }

  if (not1 != 0)
    do { BBuf *tbuf; int tnot; tnot = not1; not1 = not2; not2 = tnot; tbuf = bbuf1; bbuf1 = bbuf2; bbuf2 = tbuf; } while (0);

  data1 = (OnigCodePoint* )(bbuf1->p);
  n1 = *((OnigCodePoint* )(data1));
  data1++;

  if (not2 == 0 && not1 == 0) {
    r = bbuf_clone(pbuf, bbuf2);
  }
  else if (not1 == 0) {
    r = not_code_range_buf(enc, bbuf2, pbuf, env);
  }
  if (r != 0) return r;

  for (i = 0; i < n1; i++) {
    from = data1[i*2];
    to = data1[i*2+1];
    r = add_code_range_to_buf(pbuf, env, from, to);
    if (r != 0) return r;
  }
  return 0;
}

static int
and_code_range1(BBuf** pbuf, ScanEnv* env, OnigCodePoint from1, OnigCodePoint to1,
  OnigCodePoint* data, int n)
{
  int i, r;
  OnigCodePoint from2, to2;

  for (i = 0; i < n; i++) {
    from2 = data[i*2];
    to2 = data[i*2+1];
    if (from2 < from1) {
      if (to2 < from1) continue;
      else {
 from1 = to2 + 1;
      }
    }
    else if (from2 <= to1) {
      if (to2 < to1) {
 if (from1 <= from2 - 1) {
   r = add_code_range_to_buf(pbuf, env, from1, from2-1);
   if (r != 0) return r;
 }
 from1 = to2 + 1;
      }
      else {
 to1 = from2 - 1;
      }
    }
    else {
      from1 = from2;
    }
    if (from1 > to1) break;
  }
  if (from1 <= to1) {
    r = add_code_range_to_buf(pbuf, env, from1, to1);
    if (r != 0) return r;
  }
  return 0;
}

static int
and_code_range_buf(BBuf* bbuf1, int not1, BBuf* bbuf2, int not2, BBuf** pbuf, ScanEnv* env)
{
  int r;
  OnigCodePoint i, j, n1, n2, *data1, *data2;
  OnigCodePoint from, to, from1, to1, from2, to2;

  *pbuf = (BBuf* )((void*)0);
  if ((((void*)(bbuf1)) == (void*)0)) {
    if (not1 != 0 && (((void*)(bbuf2)) != (void*)0))
      return bbuf_clone(pbuf, bbuf2);
    return 0;
  }
  else if ((((void*)(bbuf2)) == (void*)0)) {
    if (not2 != 0)
      return bbuf_clone(pbuf, bbuf1);
    return 0;
  }

  if (not1 != 0)
    do { BBuf *tbuf; int tnot; tnot = not1; not1 = not2; not2 = tnot; tbuf = bbuf1; bbuf1 = bbuf2; bbuf2 = tbuf; } while (0);

  data1 = (OnigCodePoint* )(bbuf1->p);
  data2 = (OnigCodePoint* )(bbuf2->p);
  n1 = *((OnigCodePoint* )(data1));
  n2 = *((OnigCodePoint* )(data2));
  data1++;
  data2++;

  if (not2 == 0 && not1 == 0) {
    for (i = 0; i < n1; i++) {
      from1 = data1[i*2];
      to1 = data1[i*2+1];
      for (j = 0; j < n2; j++) {
 from2 = data2[j*2];
 to2 = data2[j*2+1];
 if (from2 > to1) break;
 if (to2 < from1) continue;
 from = (((from1)<(from2))?(from2):(from1));
 to = (((to1)>(to2))?(to2):(to1));
 r = add_code_range_to_buf(pbuf, env, from, to);
 if (r != 0) return r;
      }
    }
  }
  else if (not1 == 0) {
    for (i = 0; i < n1; i++) {
      from1 = data1[i*2];
      to1 = data1[i*2+1];
      r = and_code_range1(pbuf, env, from1, to1, data2, n2);
      if (r != 0) return r;
    }
  }

  return 0;
}

static int
and_cclass(CClassNode* dest, CClassNode* cc, ScanEnv* env)
{
  OnigEncoding enc = env->enc;
  int r, not1, not2;
  BBuf *buf1, *buf2, *pbuf = 0;
  BitSetRef bsr1, bsr2;
  BitSet bs1, bs2;

  not1 = ((((dest)->flags) & ((1<<0))) != 0);
  bsr1 = dest->bs;
  buf1 = dest->mbuf;
  not2 = ((((cc)->flags) & ((1<<0))) != 0);
  bsr2 = cc->bs;
  buf2 = cc->mbuf;

  if (not1 != 0) {
    bitset_invert_to(bsr1, bs1);
    bsr1 = bs1;
  }
  if (not2 != 0) {
    bitset_invert_to(bsr2, bs2);
    bsr2 = bs2;
  }
  bitset_and(bsr1, bsr2);
  if (bsr1 != dest->bs) {
    bitset_copy(dest->bs, bsr1);
    bsr1 = dest->bs;
  }
  if (not1 != 0) {
    bitset_invert(dest->bs);
  }

  if (! (((enc)->max_enc_len) == 1)) {
    if (not1 != 0 && not2 != 0) {
      r = or_code_range_buf(enc, buf1, 0, buf2, 0, &pbuf, env);
    }
    else {
      r = and_code_range_buf(buf1, not1, buf2, not2, &pbuf, env);
      if (r == 0 && not1 != 0) {
 BBuf *tbuf = 0;
 r = not_code_range_buf(enc, pbuf, &tbuf, env);
 bbuf_free(pbuf);
 pbuf = tbuf;
      }
    }
    if (r != 0) {
      bbuf_free(pbuf);
      return r;
    }

    dest->mbuf = pbuf;
    bbuf_free(buf1);
    return r;
  }
  return 0;
}

static int
or_cclass(CClassNode* dest, CClassNode* cc, ScanEnv* env)
{
  OnigEncoding enc = env->enc;
  int r, not1, not2;
  BBuf *buf1, *buf2, *pbuf = 0;
  BitSetRef bsr1, bsr2;
  BitSet bs1, bs2;

  not1 = ((((dest)->flags) & ((1<<0))) != 0);
  bsr1 = dest->bs;
  buf1 = dest->mbuf;
  not2 = ((((cc)->flags) & ((1<<0))) != 0);
  bsr2 = cc->bs;
  buf2 = cc->mbuf;

  if (not1 != 0) {
    bitset_invert_to(bsr1, bs1);
    bsr1 = bs1;
  }
  if (not2 != 0) {
    bitset_invert_to(bsr2, bs2);
    bsr2 = bs2;
  }
  bitset_or(bsr1, bsr2);
  if (bsr1 != dest->bs) {
    bitset_copy(dest->bs, bsr1);
    bsr1 = dest->bs;
  }
  if (not1 != 0) {
    bitset_invert(dest->bs);
  }

  if (! (((enc)->max_enc_len) == 1)) {
    if (not1 != 0 && not2 != 0) {
      r = and_code_range_buf(buf1, 0, buf2, 0, &pbuf, env);
    }
    else {
      r = or_code_range_buf(enc, buf1, not1, buf2, not2, &pbuf, env);
      if (r == 0 && not1 != 0) {
 BBuf *tbuf = 0;
 r = not_code_range_buf(enc, pbuf, &tbuf, env);
 bbuf_free(pbuf);
 pbuf = tbuf;
      }
    }
    if (r != 0) {
      bbuf_free(pbuf);
      return r;
    }

    dest->mbuf = pbuf;
    bbuf_free(buf1);
    return r;
  }
  else
    return 0;
}

static void UNKNOWN_ESC_WARN(ScanEnv *env, int c);

static OnigCodePoint
conv_backslash_value(OnigCodePoint c, ScanEnv* env)
{
  if ((((env->syntax)->op & ((1U<<26))) != 0)) {
    switch (c) {
    case 'n': return '\n';
    case 't': return '\t';
    case 'r': return '\r';
    case 'f': return '\f';
    case 'a': return '\007';
    case 'b': return '\010';
    case 'e': return '\033';
    case 'v':
      if ((((env->syntax)->op2 & ((1U<<13))) != 0))
 return '\v';
      break;

    default:
      if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
   UNKNOWN_ESC_WARN(env, c);
      break;
    }
  }
  return c;
}
static int
popular_quantifier_num(QtfrNode* q)
{
  if (q->greedy) {
    if (q->lower == 0) {
      if (q->upper == 1) return 0;
      else if (((q->upper) == -1)) return 1;
    }
    else if (q->lower == 1) {
      if (((q->upper) == -1)) return 2;
    }
  }
  else {
    if (q->lower == 0) {
      if (q->upper == 1) return 3;
      else if (((q->upper) == -1)) return 4;
    }
    else if (q->lower == 1) {
      if (((q->upper) == -1)) return 5;
    }
  }
  return -1;
}


enum ReduceType {
  RQ_ASIS = 0,
  RQ_DEL = 1,
  RQ_A,
  RQ_AQ,
  RQ_QQ,
  RQ_P_QQ,
  RQ_PQ_Q
};

static enum ReduceType const ReduceTypeTable[6][6] = {

  {RQ_DEL, RQ_A, RQ_A, RQ_QQ, RQ_AQ, RQ_ASIS},
  {RQ_DEL, RQ_DEL, RQ_DEL, RQ_P_QQ, RQ_P_QQ, RQ_DEL},
  {RQ_A, RQ_A, RQ_DEL, RQ_ASIS, RQ_P_QQ, RQ_DEL},
  {RQ_DEL, RQ_AQ, RQ_AQ, RQ_DEL, RQ_AQ, RQ_AQ},
  {RQ_DEL, RQ_DEL, RQ_DEL, RQ_DEL, RQ_DEL, RQ_DEL},
  {RQ_ASIS, RQ_PQ_Q, RQ_DEL, RQ_AQ, RQ_AQ, RQ_DEL}
};

extern void
onig_reduce_nested_quantifier(Node* pnode, Node* cnode)
{
  int pnum, cnum;
  QtfrNode *p, *c;

  p = (&((pnode)->u.qtfr));
  c = (&((cnode)->u.qtfr));
  pnum = popular_quantifier_num(p);
  cnum = popular_quantifier_num(c);
  if (pnum < 0 || cnum < 0) return ;

  switch (ReduceTypeTable[cnum][pnum]) {
  case RQ_DEL:
    *pnode = *cnode;
    break;
  case RQ_A:
    p->target = c->target;
    p->lower = 0; p->upper = -1; p->greedy = 1;
    break;
  case RQ_AQ:
    p->target = c->target;
    p->lower = 0; p->upper = -1; p->greedy = 0;
    break;
  case RQ_QQ:
    p->target = c->target;
    p->lower = 0; p->upper = 1; p->greedy = 0;
    break;
  case RQ_P_QQ:
    p->target = cnode;
    p->lower = 0; p->upper = 1; p->greedy = 0;
    c->lower = 1; c->upper = -1; c->greedy = 1;
    return ;
    break;
  case RQ_PQ_Q:
    p->target = cnode;
    p->lower = 0; p->upper = 1; p->greedy = 1;
    c->lower = 1; c->upper = -1; c->greedy = 0;
    return ;
    break;
  case RQ_ASIS:
    p->target = cnode;
    return ;
    break;
  }

  c->target = ((Node* )0);
  onig_node_free(cnode);
}


enum TokenSyms {
  TK_EOT = 0,
  TK_RAW_BYTE = 1,
  TK_CHAR,
  TK_STRING,
  TK_CODE_POINT,
  TK_ANYCHAR,
  TK_CHAR_TYPE,
  TK_BACKREF,
  TK_CALL,
  TK_ANCHOR,
  TK_OP_REPEAT,
  TK_INTERVAL,
  TK_ANYCHAR_ANYTIME,
  TK_ALT,
  TK_SUBEXP_OPEN,
  TK_SUBEXP_CLOSE,
  TK_CC_OPEN,
  TK_QUOTE_OPEN,
  TK_CHAR_PROPERTY,
  TK_LINEBREAK,
  TK_EXTENDED_GRAPHEME_CLUSTER,
  TK_KEEP,

  TK_CC_CLOSE,
  TK_CC_RANGE,
  TK_POSIX_BRACKET_OPEN,
  TK_CC_AND,
  TK_CC_CC_OPEN
};

typedef struct {
  enum TokenSyms type;
  int escaped;
  int base;
  OnigUChar* backp;
  union {
    OnigUChar* s;
    int c;
    OnigCodePoint code;
    struct {
      int subtype;
      int ascii_range;
    } anchor;
    struct {
      int lower;
      int upper;
      int greedy;
      int possessive;
    } repeat;
    struct {
      int num;
      int ref1;
      int* refs;
      int by_name;

      int exist_level;
      int level;

    } backref;
    struct {
      OnigUChar* name;
      OnigUChar* name_end;
      int gnum;
      int rel;
    } call;
    struct {
      int ctype;
      int not;
    } prop;
  } u;
} OnigToken;


static int
fetch_range_quantifier(OnigUChar** src, OnigUChar* end, OnigToken* tok, ScanEnv* env)
{
  int low, up, syn_allow, non_low = 0;
  int r = 0;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  syn_allow = (((env->syntax)->behavior & ((1U<<3))) != 0);

  if ((p < end ? 0 : 1)) {
    if (syn_allow)
      return 1;
    else
      return -100;
  }

  if (! syn_allow) {
    c = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
    if (c == ')' || c == '(' || c == '|') {
      return -100;
    }
  }

  low = onig_scan_unsigned_number(&p, end, env->enc);
  if (low < 0) return -201;
  if (low > 100000)
    return -201;

  if (p == *src) {
    if ((((env->syntax)->behavior & ((1U<<4))) != 0)) {

      low = 0;
      non_low = 1;
    }
    else
      goto invalid;
  }

  if ((p < end ? 0 : 1)) goto invalid;
  do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  if (c == ',') {
    OnigUChar* prev = p;
    up = onig_scan_unsigned_number(&p, end, env->enc);
    if (up < 0) return -201;
    if (up > 100000)
      return -201;

    if (p == prev) {
      if (non_low != 0)
 goto invalid;
      up = -1;
    }
  }
  else {
    if (non_low != 0)
      goto invalid;

    p = pfetch_prev;
    up = low;
    r = 2;
  }

  if ((p < end ? 0 : 1)) goto invalid;
  do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  if ((((env->syntax)->op & ((1U<<9))) != 0)) {
    if (c != (env->syntax)->meta_char_table.esc) goto invalid;
    if ((p < end ? 0 : 1)) goto invalid;
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  }
  if (c != '}') goto invalid;

  if (!((up) == -1) && low > up) {
    return -202;
  }

  tok->type = TK_INTERVAL;
  tok->u.repeat.lower = low;
  tok->u.repeat.upper = up;
  *src = p;
  return r;

 invalid:
  if (syn_allow)
    return 1;
  else
    return -123;
}


static int
fetch_escaped_value(OnigUChar** src, OnigUChar* end, ScanEnv* env, OnigCodePoint* val)
{
  int v;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;
  OnigUChar* p = *src;

  if ((p < end ? 0 : 1)) return -104;

  do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  switch (c) {
  case 'M':
    if ((((env->syntax)->op2 & ((1U<<12))) != 0)) {
      if ((p < end ? 0 : 1)) return -105;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c != '-') return -108;
      if ((p < end ? 0 : 1)) return -105;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == (env->syntax)->meta_char_table.esc) {
 v = fetch_escaped_value(&p, end, env, &c);
 if (v < 0) return v;
      }
      c = ((c & 0xff) | 0x80);
    }
    else
      goto backslash;
    break;

  case 'C':
    if ((((env->syntax)->op2 & ((1U<<11))) != 0)) {
      if ((p < end ? 0 : 1)) return -106;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c != '-') return -109;
      goto control;
    }
    else
      goto backslash;

  case 'c':
    if ((((env->syntax)->op & ((1U<<27))) != 0)) {
    control:
      if ((p < end ? 0 : 1)) return -106;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == '?') {
 c = 0177;
      }
      else {
 if (c == (env->syntax)->meta_char_table.esc) {
   v = fetch_escaped_value(&p, end, env, &c);
   if (v < 0) return v;
 }
 c &= 0x9f;
      }
      break;
    }


  default:
    {
    backslash:
      c = conv_backslash_value(c, env);
    }
    break;
  }

  *src = p;
  *val = c;
  return 0;
}

static int fetch_token(OnigToken* tok, OnigUChar** src, OnigUChar* end, ScanEnv* env);

static OnigCodePoint
get_name_end_code_point(OnigCodePoint start)
{
  switch (start) {
  case '<': return (OnigCodePoint )'>'; break;
  case '\'': return (OnigCodePoint )'\''; break;
  case '(': return (OnigCodePoint )')'; break;
  case '{': return (OnigCodePoint )'}'; break;
  default:
    break;
  }

  return (OnigCodePoint )0;
}
static int
fetch_name_with_level(OnigCodePoint start_code, OnigUChar** src, OnigUChar* end,
        OnigUChar** rname_end, ScanEnv* env,
        int* rback_num, int* rlevel)
{
  int r, sign, is_num, exist_level;
  OnigCodePoint end_code;
  OnigCodePoint c = 0;
  OnigEncoding enc = env->enc;
  OnigUChar *name_end;
  OnigUChar *pnum_head;
  OnigUChar *p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  *rback_num = 0;
  is_num = exist_level = 0;
  sign = 1;
  pnum_head = *src;

  end_code = get_name_end_code_point(start_code);

  name_end = end;
  r = 0;
  if ((p < end ? 0 : 1)) {
    return -214;
  }
  else {
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (c == end_code)
      return -214;

    if ((enc)->is_code_ctype(c,4,enc)) {
      is_num = 1;
    }
    else if (c == '-') {
      is_num = 2;
      sign = -1;
      pnum_head = p;
    }
    else if (!1) {
      r = -216;
    }
  }

  while (!(p < end ? 0 : 1)) {
    name_end = p;
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (c == end_code || c == ')' || c == '+' || c == '-') {
      if (is_num == 2) r = -215;
      break;
    }

    if (is_num != 0) {
      if ((enc)->is_code_ctype(c,4,enc)) {
 is_num = 1;
      }
      else {
 r = -215;
 is_num = 0;
      }
    }
    else if (!1) {
      r = -216;
    }
  }

  if (r == 0 && c != end_code) {
    if (c == '+' || c == '-') {
      int level;
      int flag = (c == '-' ? -1 : 1);

      if ((p < end ? 0 : 1)) {
 r = -216;
 goto end;
      }
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (! (enc)->is_code_ctype(c,4,enc)) goto err;
      p = pfetch_prev;
      level = onig_scan_unsigned_number(&p, end, enc);
      if (level < 0) return -200;
      *rlevel = (level * flag);
      exist_level = 1;

      if (!(p < end ? 0 : 1)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (c == end_code)
   goto end;
      }
    }

  err:
    r = -215;
    name_end = end;
  }

 end:
  if (r == 0) {
    if (is_num != 0) {
      *rback_num = onig_scan_unsigned_number(&pnum_head, name_end, enc);
      if (*rback_num < 0) return -200;
      else if (*rback_num == 0) goto err;

      *rback_num *= sign;
    }

    *rname_end = name_end;
    *src = p;
    return (exist_level ? 1 : 0);
  }
  else {
    onig_scan_env_set_error_string(env, r, *src, name_end);
    return r;
  }
}






static int
fetch_name(OnigCodePoint start_code, OnigUChar** src, OnigUChar* end,
    OnigUChar** rname_end, ScanEnv* env, int* rback_num, int ref)
{
  int r, is_num, sign;
  OnigCodePoint end_code;
  OnigCodePoint c = 0;
  OnigEncoding enc = env->enc;
  OnigUChar *name_end;
  OnigUChar *pnum_head;
  OnigUChar *p = *src;

  *rback_num = 0;

  end_code = get_name_end_code_point(start_code);

  name_end = end;
  pnum_head = *src;
  r = 0;
  is_num = 0;
  sign = 1;
  if ((p < end ? 0 : 1)) {
    return -214;
  }
  else {
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (c == end_code)
      return -214;

    if ((enc)->is_code_ctype(c,4,enc)) {
      if (ref == 1)
 is_num = 1;
      else {
 r = -215;
 is_num = 0;
      }
    }
    else if (c == '-') {
      if (ref == 1) {
 is_num = 2;
 sign = -1;
 pnum_head = p;
      }
      else {
 r = -215;
 is_num = 0;
      }
    }
    else if (!1) {
      r = -216;
    }
  }

  if (r == 0) {
    while (!(p < end ? 0 : 1)) {
      name_end = p;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == end_code || c == ')') {
 if (is_num == 2) {
   r = -215;
   goto teardown;
 }
 break;
      }

      if (is_num != 0) {
 if ((enc)->is_code_ctype(c,4,enc)) {
   is_num = 1;
 }
 else {
   if (!(enc)->is_code_ctype(c,12,enc))
     r = -216;
   else
     r = -215;
   goto teardown;
 }
      }
      else {
 if (!1) {
   r = -216;
   goto teardown;
 }
      }
    }

    if (c != end_code) {
      r = -215;
      name_end = end;
      goto err;
    }

    if (is_num != 0) {
      *rback_num = onig_scan_unsigned_number(&pnum_head, name_end, enc);
      if (*rback_num < 0) return -200;
      else if (*rback_num == 0) {
 r = -215;
 goto err;
      }

      *rback_num *= sign;
    }

    *rname_end = name_end;
    *src = p;
    return 0;
  }
  else {
teardown:
    while (!(p < end ? 0 : 1)) {
      name_end = p;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == end_code || c == ')')
 break;
    }
    if ((p < end ? 0 : 1))
      name_end = end;

  err:
    onig_scan_env_set_error_string(env, r, *src, name_end);
    return r;
  }
}
static void
onig_syntax_warn(ScanEnv *env, const char *fmt, ...)
{
    va_list args;
    OnigUChar buf[256];
    __builtin_va_start(args, fmt);
    onig_vsnprintf_with_pattern(buf, 256, env->enc,
  env->pattern, env->pattern_end,
  (const OnigUChar *)fmt, args);
    __builtin_va_end(args);

    if (env->sourcefile == ((void*)0))
      rb_warn("%s", (char *)buf);
    else
      rb_compile_warn(env->sourcefile, env->sourceline, "%s", (char *)buf);



}

static void
CC_ESC_WARN(ScanEnv *env, OnigUChar *c)
{
  if (onig_warn == onig_null_warn) return ;

  if ((((env->syntax)->behavior & ((1U<<24))) != 0) &&
      (((env->syntax)->behavior & ((1U<<21))) != 0)) {
    onig_syntax_warn(env, "character class has '%s' without escape", c);
  }
}

static void
CLOSE_BRACKET_WITHOUT_ESC_WARN(ScanEnv* env, OnigUChar* c)
{
  if (onig_warn == onig_null_warn) return ;

  if ((((env->syntax)->behavior & ((1U<<24))) != 0)) {
    onig_syntax_warn(env, "regular expression has '%s' without escape", c);
  }
}





static void
CC_DUP_WARN(ScanEnv *env)
{
  if (onig_warn == onig_null_warn || !1) return ;

  if ((((env->syntax)->behavior & ((1U<<26))) != 0) &&
      !(env->warnings_flag & (1U<<26))) {
    env->warnings_flag |= (1U<<26);
    onig_syntax_warn(env, "character class has duplicated range");
  }
}

static void
UNKNOWN_ESC_WARN(ScanEnv *env, int c)
{
  if (onig_warn == onig_null_warn || !1) return ;
  onig_syntax_warn(env, "Unknown escape \\%c is ignored", c);
}

static OnigUChar*
find_str_position(OnigCodePoint s[], int n, OnigUChar* from, OnigUChar* to,
    OnigUChar **next, OnigEncoding enc)
{
  int i;
  OnigCodePoint x;
  OnigUChar *q;
  OnigUChar *p = from;

  while (p < to) {
    x = (enc)->mbc_to_code((p),(to),enc);
    q = p + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,to,enc));
    if (x == s[0]) {
      for (i = 1; i < n && q < to; i++) {
 x = (enc)->mbc_to_code((q),(to),enc);
 if (x != s[i]) break;
 q += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(q,to,enc));
      }
      if (i >= n) {
 if ((((void*)(next)) != (void*)0))
   *next = q;
 return p;
      }
    }
    p = q;
  }
  return ((OnigUChar* )0);
}

static int
str_exist_check_with_esc(OnigCodePoint s[], int n, OnigUChar* from, OnigUChar* to,
   OnigCodePoint bad, OnigEncoding enc, const OnigSyntaxType* syn)
{
  int i, in_esc;
  OnigCodePoint x;
  OnigUChar *q;
  OnigUChar *p = from;

  in_esc = 0;
  while (p < to) {
    if (in_esc) {
      in_esc = 0;
      p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,to,enc));
    }
    else {
      x = (enc)->mbc_to_code((p),(to),enc);
      q = p + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,to,enc));
      if (x == s[0]) {
 for (i = 1; i < n && q < to; i++) {
   x = (enc)->mbc_to_code((q),(to),enc);
   if (x != s[i]) break;
   q += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(q,to,enc));
 }
 if (i >= n) return 1;
 p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,to,enc));
      }
      else {
 x = (enc)->mbc_to_code((p),(to),enc);
 if (x == bad) return 0;
 else if (x == (syn)->meta_char_table.esc) in_esc = 1;
 p = q;
      }
    }
  }
  return 0;
}

static int
fetch_token_in_cc(OnigToken* tok, OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int num;
  OnigCodePoint c, c2;
  const OnigSyntaxType* syn = env->syntax;
  OnigEncoding enc = env->enc;
  OnigUChar* prev;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  if ((p < end ? 0 : 1)) {
    tok->type = TK_EOT;
    return tok->type;
  }

  do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  tok->type = TK_CHAR;
  tok->base = 0;
  tok->u.c = c;
  tok->escaped = 0;

  if (c == ']') {
    tok->type = TK_CC_CLOSE;
  }
  else if (c == '-') {
    tok->type = TK_CC_RANGE;
  }
  else if (c == (syn)->meta_char_table.esc) {
    if (! (((syn)->behavior & ((1U<<21))) != 0))
      goto end;

    if ((p < end ? 0 : 1)) return -104;

    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    tok->escaped = 1;
    tok->u.c = c;
    switch (c) {
    case 'w':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 12;
      tok->u.prop.not = 0;
      break;
    case 'W':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 12;
      tok->u.prop.not = 1;
      break;
    case 'd':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 4;
      tok->u.prop.not = 0;
      break;
    case 'D':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 4;
      tok->u.prop.not = 1;
      break;
    case 's':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 9;
      tok->u.prop.not = 0;
      break;
    case 'S':
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 9;
      tok->u.prop.not = 1;
      break;
    case 'h':
      if (! (((syn)->op2 & ((1U<<19))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 11;
      tok->u.prop.not = 0;
      break;
    case 'H':
      if (! (((syn)->op2 & ((1U<<19))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 11;
      tok->u.prop.not = 1;
      break;

    case 'p':
    case 'P':
      if ((p < end ? 0 : 1)) break;

      c2 = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
      if (c2 == '{' &&
   (((syn)->op2 & ((1U<<16))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 tok->type = TK_CHAR_PROPERTY;
 tok->u.prop.not = (c == 'P' ? 1 : 0);

 if (!(p < end ? 0 : 1) && (((syn)->op2 & ((1U<<17))) != 0)) {
   do { c2 = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if (c2 == '^') {
     tok->u.prop.not = (tok->u.prop.not == 0 ? 1 : 0);
   }
   else
     p = pfetch_prev;
 }
      }
      else {
 onig_syntax_warn(env, "invalid Unicode Property \\%c", c);
      }
      break;

    case 'x':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'{') && (((syn)->op & ((1U<<30))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 num = scan_unsigned_hexadecimal_number(&p, end, 0, 8, enc);
 if (num < 0) return -401;
 if (!(p < end ? 0 : 1)) {
   c2 = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
   if ((enc)->is_code_ctype(c2,11,enc))
     return -212;
 }

 if (p > prev + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(prev,end,enc)) && !(p < end ? 0 : 1) && (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'}'))) {
   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   tok->type = TK_CODE_POINT;
   tok->base = 16;
   tok->u.code = (OnigCodePoint )num;
 }
 else {

   p = prev;
 }
      }
      else if ((((syn)->op & ((1U<<29))) != 0)) {
 num = scan_unsigned_hexadecimal_number(&p, end, 0, 2, enc);
 if (num < 0) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_RAW_BYTE;
 tok->base = 16;
 tok->u.c = num;
      }
      break;

    case 'u':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if ((((syn)->op2 & ((1U<<14))) != 0)) {
 num = scan_unsigned_hexadecimal_number(&p, end, 4, 4, enc);
 if (num < -1) return -211;
 else if (num < 0) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_CODE_POINT;
 tok->base = 16;
 tok->u.code = (OnigCodePoint )num;
      }
      break;

    case 'o':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'{') && (((syn)->op & ((1U<<31))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 num = scan_unsigned_octal_number(&p, end, 11, enc);
 if (num < 0) return -401;
 if (!(p < end ? 0 : 1)) {
   c2 = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
   if ((enc)->is_code_ctype(c2,4,enc) && c2 < '8')
     return -212;
 }

 if (p > prev + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(prev,end,enc)) && !(p < end ? 0 : 1) && (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'}'))) {
   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   tok->type = TK_CODE_POINT;
   tok->base = 8;
   tok->u.code = (OnigCodePoint )num;
 }
 else {

   p = prev;
 }
      }
      break;

    case '0':
    case '1': case '2': case '3': case '4': case '5': case '6': case '7':
      if ((((syn)->op & ((1U<<28))) != 0)) {
 p = pfetch_prev;
 prev = p;
 num = scan_unsigned_octal_number(&p, end, 3, enc);
 if (num < 0 || 0xff < num) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_RAW_BYTE;
 tok->base = 8;
 tok->u.c = num;
      }
      break;

    default:
      p = pfetch_prev;
      num = fetch_escaped_value(&p, end, env, &c2);
      if (num < 0) return num;
      if ((OnigCodePoint )tok->u.c != c2) {
 tok->u.code = (OnigCodePoint )c2;
 tok->type = TK_CODE_POINT;
      }
      break;
    }
  }
  else if (c == '[') {
    if ((((syn)->op & ((1U<<24))) != 0) && (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )':'))) {
      OnigCodePoint send[] = { (OnigCodePoint )':', (OnigCodePoint )']' };
      tok->backp = p;
      do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (str_exist_check_with_esc(send, 2, p, end,
                                   (OnigCodePoint )']', enc, syn)) {
 tok->type = TK_POSIX_BRACKET_OPEN;
      }
      else {
 p = pfetch_prev;
 goto cc_in_cc;
      }
    }
    else {
    cc_in_cc:
      if ((((syn)->op2 & ((1U<<6))) != 0)) {
 tok->type = TK_CC_CC_OPEN;
      }
      else {
 CC_ESC_WARN(env, (OnigUChar* )"[");
      }
    }
  }
  else if (c == '&') {
    if ((((syn)->op2 & ((1U<<6))) != 0) &&
 !(p < end ? 0 : 1) && (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'&'))) {
      do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      tok->type = TK_CC_AND;
    }
  }

 end:
  *src = p;
  return tok->type;
}


static int
fetch_named_backref_token(OnigCodePoint c, OnigToken* tok, OnigUChar** src,
     OnigUChar* end, ScanEnv* env)
{
  int r, num;
  const OnigSyntaxType* syn = env->syntax;
  OnigUChar* prev;
  OnigUChar* p = *src;
  OnigUChar* name_end;
  int* backs;
  int back_num;

  prev = p;


  name_end = ((OnigUChar* )0);
  r = fetch_name_with_level(c, &p, end, &name_end,
       env, &back_num, &tok->u.backref.level);
  if (r == 1) tok->u.backref.exist_level = 1;
  else tok->u.backref.exist_level = 0;



  if (r < 0) return r;

  if (back_num != 0) {
    if (back_num < 0) {
      back_num = ((env)->num_mem + 1 + (back_num));
      if (back_num <= 0)
 return -208;
    }

    if ((((syn)->behavior & ((1U<<5))) != 0)) {
      if (back_num > env->num_mem ||
   (((void*)(((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[back_num])) == (void*)0))
 return -208;
    }
    tok->type = TK_BACKREF;
    tok->u.backref.by_name = 0;
    tok->u.backref.num = 1;
    tok->u.backref.ref1 = back_num;
  }
  else {
    num = onig_name_to_group_numbers(env->reg, prev, name_end, &backs);
    if (num <= 0) {
      onig_scan_env_set_error_string(env,
       -217, prev, name_end);
      return -217;
    }
    if ((((syn)->behavior & ((1U<<5))) != 0)) {
      int i;
      for (i = 0; i < num; i++) {
 if (backs[i] > env->num_mem ||
     (((void*)(((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[backs[i]])) == (void*)0))
   return -208;
      }
    }

    tok->type = TK_BACKREF;
    tok->u.backref.by_name = 1;
    if (num == 1 || (((syn)->behavior & ((1U<<11))) != 0)) {
      tok->u.backref.num = 1;
      tok->u.backref.ref1 = backs[0];
    }
    else {
      tok->u.backref.num = num;
      tok->u.backref.refs = backs;
    }
  }
  *src = p;
  return 0;
}


static int
fetch_token(OnigToken* tok, OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r, num;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;
  const OnigSyntaxType* syn = env->syntax;
  OnigUChar* prev;
  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

 start:
  if ((p < end ? 0 : 1)) {
    tok->type = TK_EOT;
    return tok->type;
  }

  tok->type = TK_STRING;
  tok->base = 0;
  tok->backp = p;

  do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
  if (((c) == (syn)->meta_char_table.esc && !((((syn))->op2 & ((1U<<20))) != 0))) {
    if ((p < end ? 0 : 1)) return -104;

    tok->backp = p;
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);

    tok->u.c = c;
    tok->escaped = 1;
    switch (c) {
    case '*':
      if (! (((syn)->op & ((1U<<3))) != 0)) break;
      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 0;
      tok->u.repeat.upper = -1;
      goto greedy_check;
      break;

    case '+':
      if (! (((syn)->op & ((1U<<5))) != 0)) break;
      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 1;
      tok->u.repeat.upper = -1;
      goto greedy_check;
      break;

    case '?':
      if (! (((syn)->op & ((1U<<7))) != 0)) break;
      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 0;
      tok->u.repeat.upper = 1;
    greedy_check:
      if (!(p < end ? 0 : 1) && ((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'?') &&
   (((syn)->op & ((1U<<25))) != 0)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 tok->u.repeat.greedy = 0;
 tok->u.repeat.possessive = 0;
      }
      else {
      possessive_check:
 if (!(p < end ? 0 : 1) && ((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'+') &&
     (((((syn)->op2 & ((1U<<4))) != 0) &&
       tok->type != TK_INTERVAL) ||
      ((((syn)->op2 & ((1U<<5))) != 0) &&
       tok->type == TK_INTERVAL))) {
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   tok->u.repeat.greedy = 1;
   tok->u.repeat.possessive = 1;
 }
 else {
   tok->u.repeat.greedy = 1;
   tok->u.repeat.possessive = 0;
 }
      }
      break;

    case '{':
      if (! (((syn)->op & ((1U<<9))) != 0)) break;
      r = fetch_range_quantifier(&p, end, tok, env);
      if (r < 0) return r;
      if (r == 0) goto greedy_check;
      else if (r == 2) {
 if ((((syn)->behavior & ((1U<<9))) != 0))
   goto possessive_check;

 goto greedy_check;
      }

      break;

    case '|':
      if (! (((syn)->op & ((1U<<11))) != 0)) break;
      tok->type = TK_ALT;
      break;

    case '(':
      if (! (((syn)->op & ((1U<<13))) != 0)) break;
      tok->type = TK_SUBEXP_OPEN;
      break;

    case ')':
      if (! (((syn)->op & ((1U<<13))) != 0)) break;
      tok->type = TK_SUBEXP_CLOSE;
      break;

    case 'w':
      if (! (((syn)->op & ((1U<<18))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 12;
      tok->u.prop.not = 0;
      break;

    case 'W':
      if (! (((syn)->op & ((1U<<18))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 12;
      tok->u.prop.not = 1;
      break;

    case 'b':
      if (! (((syn)->op & ((1U<<20))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<6);
      tok->u.anchor.ascii_range = ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  && ! ((env->option) & (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
      break;

    case 'B':
      if (! (((syn)->op & ((1U<<20))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<7);
      tok->u.anchor.ascii_range = ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
  && ! ((env->option) & (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
      break;


    case '<':
      if (! (((syn)->op & ((1U<<19))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<8);
      tok->u.anchor.ascii_range = ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
      break;

    case '>':
      if (! (((syn)->op & ((1U<<19))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<9);
      tok->u.anchor.ascii_range = ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
      break;


    case 's':
      if (! (((syn)->op & ((1U<<21))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 9;
      tok->u.prop.not = 0;
      break;

    case 'S':
      if (! (((syn)->op & ((1U<<21))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 9;
      tok->u.prop.not = 1;
      break;

    case 'd':
      if (! (((syn)->op & ((1U<<22))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 4;
      tok->u.prop.not = 0;
      break;

    case 'D':
      if (! (((syn)->op & ((1U<<22))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 4;
      tok->u.prop.not = 1;
      break;

    case 'h':
      if (! (((syn)->op2 & ((1U<<19))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 11;
      tok->u.prop.not = 0;
      break;

    case 'H':
      if (! (((syn)->op2 & ((1U<<19))) != 0)) break;
      tok->type = TK_CHAR_TYPE;
      tok->u.prop.ctype = 11;
      tok->u.prop.not = 1;
      break;

    case 'A':
      if (! (((syn)->op & ((1U<<14))) != 0)) break;
    begin_buf:
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<0);
      break;

    case 'Z':
      if (! (((syn)->op & ((1U<<14))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<4);
      break;

    case 'z':
      if (! (((syn)->op & ((1U<<14))) != 0)) break;
    end_buf:
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<3);
      break;

    case 'G':
      if (! (((syn)->op & ((1U<<15))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (1<<2);
      break;

    case '`':
      if (! (((syn)->op2 & ((1U<<15))) != 0)) break;
      goto begin_buf;
      break;

    case '\'':
      if (! (((syn)->op2 & ((1U<<15))) != 0)) break;
      goto end_buf;
      break;

    case 'x':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'{') && (((syn)->op & ((1U<<30))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 num = scan_unsigned_hexadecimal_number(&p, end, 0, 8, enc);
 if (num < 0) return -401;
 if (!(p < end ? 0 : 1)) {
   if ((enc)->is_code_ctype((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0),11,enc))
     return -212;
 }

 if ((p > prev + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(prev,end,enc))) && !(p < end ? 0 : 1) && ((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'}')) {
   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   tok->type = TK_CODE_POINT;
   tok->u.code = (OnigCodePoint )num;
 }
 else {

   p = prev;
 }
      }
      else if ((((syn)->op & ((1U<<29))) != 0)) {
 num = scan_unsigned_hexadecimal_number(&p, end, 0, 2, enc);
 if (num < 0) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_RAW_BYTE;
 tok->base = 16;
 tok->u.c = num;
      }
      break;

    case 'u':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if ((((syn)->op2 & ((1U<<14))) != 0)) {
 num = scan_unsigned_hexadecimal_number(&p, end, 4, 4, enc);
 if (num < -1) return -211;
 else if (num < 0) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_CODE_POINT;
 tok->base = 16;
 tok->u.code = (OnigCodePoint )num;
      }
      break;

    case 'o':
      if ((p < end ? 0 : 1)) break;

      prev = p;
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'{') && (((syn)->op & ((1U<<31))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 num = scan_unsigned_octal_number(&p, end, 11, enc);
 if (num < 0) return -401;
 if (!(p < end ? 0 : 1)) {
   OnigCodePoint c = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
   if ((enc)->is_code_ctype(c,4,enc) && c < '8')
     return -212;
 }

 if ((p > prev + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(prev,end,enc))) && !(p < end ? 0 : 1) && ((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'}')) {
   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   tok->type = TK_CODE_POINT;
   tok->u.code = (OnigCodePoint )num;
 }
 else {

   p = prev;
 }
      }
      break;

    case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
      p = pfetch_prev;
      prev = p;
      num = onig_scan_unsigned_number(&p, end, enc);
      if (num < 0 || num > 1000) {
 goto skip_backref;
      }

      if ((((syn)->op & ((1U<<16))) != 0) &&
   (num <= env->num_mem || num <= 9)) {
 if ((((syn)->behavior & ((1U<<5))) != 0)) {
   if (num > env->num_mem || (((void*)(((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[num])) == (void*)0))
     return -208;
 }

 tok->type = TK_BACKREF;
 tok->u.backref.num = 1;
 tok->u.backref.ref1 = num;
 tok->u.backref.by_name = 0;

 tok->u.backref.exist_level = 0;

 break;
      }

    skip_backref:
      if (c == '8' || c == '9') {

 p = prev; do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 break;
      }

      p = prev;

    case '0':
      if ((((syn)->op & ((1U<<28))) != 0)) {
 prev = p;
 num = scan_unsigned_octal_number(&p, end, (c == '0' ? 2:3), enc);
 if (num < 0 || 0xff < num) return -200;
 if (p == prev) {
   num = 0;
 }
 tok->type = TK_RAW_BYTE;
 tok->base = 8;
 tok->u.c = num;
      }
      else if (c != '0') {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      }
      break;


    case 'k':
      if (!(p < end ? 0 : 1) && (((syn)->op2 & ((1U<<8))) != 0)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (c == '<' || c == '\'') {
   r = fetch_named_backref_token(c, tok, &p, end, env);
   if (r < 0) return r;
 }
 else {
   p = pfetch_prev;
   onig_syntax_warn(env, "invalid back reference");
 }
      }
      break;



    case 'g':

      if (!(p < end ? 0 : 1) && (((syn)->op2 & ((1U<<26))) != 0)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (c == '{') {
   r = fetch_named_backref_token(c, tok, &p, end, env);
   if (r < 0) return r;
 }
 else
   p = pfetch_prev;
      }


      if (!(p < end ? 0 : 1) && (((syn)->op2 & ((1U<<9))) != 0)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (c == '<' || c == '\'') {
   int gnum = -1, rel = 0;
   OnigUChar* name_end;
   OnigCodePoint cnext;

   cnext = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
   if (cnext == '0') {
     do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )get_name_end_code_point(c))) {
       do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
       name_end = p;
       gnum = 0;
     }
   }
   else if (cnext == '+') {
     do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     rel = 1;
   }
   prev = p;
   if (gnum < 0) {
     r = fetch_name((OnigCodePoint )c, &p, end, &name_end, env, &gnum, 1);
     if (r < 0) return r;
   }

   tok->type = TK_CALL;
   tok->u.call.name = prev;
   tok->u.call.name_end = name_end;
   tok->u.call.gnum = gnum;
   tok->u.call.rel = rel;
 }
 else {
   onig_syntax_warn(env, "invalid subexp call");
   p = pfetch_prev;
 }
      }

      break;


    case 'Q':
      if ((((syn)->op2 & ((1U<<0))) != 0)) {
 tok->type = TK_QUOTE_OPEN;
      }
      break;

    case 'p':
    case 'P':
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'{') &&
   (((syn)->op2 & ((1U<<16))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 tok->type = TK_CHAR_PROPERTY;
 tok->u.prop.not = (c == 'P' ? 1 : 0);

 if (!(p < end ? 0 : 1) && (((syn)->op2 & ((1U<<17))) != 0)) {
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if (c == '^') {
     tok->u.prop.not = (tok->u.prop.not == 0 ? 1 : 0);
   }
   else
     p = pfetch_prev;
 }
      }
      else {
 onig_syntax_warn(env, "invalid Unicode Property \\%c", c);
      }
      break;

    case 'R':
      if ((((syn)->op2 & ((1U<<21))) != 0)) {
 tok->type = TK_LINEBREAK;
      }
      break;

    case 'X':
      if ((((syn)->op2 & ((1U<<22))) != 0)) {
 tok->type = TK_EXTENDED_GRAPHEME_CLUSTER;
      }
      break;

    case 'K':
      if ((((syn)->op2 & ((1U<<25))) != 0)) {
 tok->type = TK_KEEP;
      }
      break;

    default:
      {
 OnigCodePoint c2;

 p = pfetch_prev;
 num = fetch_escaped_value(&p, end, env, &c2);
 if (num < 0) return num;

 if ((OnigCodePoint )tok->u.c != c2) {
   tok->type = TK_CODE_POINT;
   tok->u.code = (OnigCodePoint )c2;
 }
 else {
   p = tok->backp + ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(tok->backp,end,enc));
 }
      }
      break;
    }
  }
  else {
    tok->u.c = c;
    tok->escaped = 0;


    if ((c != 0) &&
 (((syn)->op & ((1U<<0))) != 0)) {
      if (c == (syn)->meta_char_table.anychar)
 goto any_char;
      else if (c == (syn)->meta_char_table.anytime)
 goto anytime;
      else if (c == (syn)->meta_char_table.zero_or_one_time)
 goto zero_or_one_time;
      else if (c == (syn)->meta_char_table.one_or_more_time)
 goto one_or_more_time;
      else if (c == (syn)->meta_char_table.anychar_anytime) {
 tok->type = TK_ANYCHAR_ANYTIME;
 goto out;
      }
    }


    switch (c) {
    case '.':
      if (! (((syn)->op & ((1U<<1))) != 0)) break;

    any_char:

      tok->type = TK_ANYCHAR;
      break;

    case '*':
      if (! (((syn)->op & ((1U<<2))) != 0)) break;

    anytime:

      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 0;
      tok->u.repeat.upper = -1;
      goto greedy_check;
      break;

    case '+':
      if (! (((syn)->op & ((1U<<4))) != 0)) break;

    one_or_more_time:

      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 1;
      tok->u.repeat.upper = -1;
      goto greedy_check;
      break;

    case '?':
      if (! (((syn)->op & ((1U<<6))) != 0)) break;

    zero_or_one_time:

      tok->type = TK_OP_REPEAT;
      tok->u.repeat.lower = 0;
      tok->u.repeat.upper = 1;
      goto greedy_check;
      break;

    case '{':
      if (! (((syn)->op & ((1U<<8))) != 0)) break;
      r = fetch_range_quantifier(&p, end, tok, env);
      if (r < 0) return r;
      if (r == 0) goto greedy_check;
      else if (r == 2) {
 if ((((syn)->behavior & ((1U<<9))) != 0))
   goto possessive_check;

 goto greedy_check;
      }

      break;

    case '|':
      if (! (((syn)->op & ((1U<<10))) != 0)) break;
      tok->type = TK_ALT;
      break;

    case '(':
      if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'?') &&
   (((syn)->op2 & ((1U<<1))) != 0)) {
 do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'#')) {
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   while (1) {
     if ((p < end ? 0 : 1)) return -118;
     do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     if (c == (syn)->meta_char_table.esc) {
       if (!(p < end ? 0 : 1)) do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     }
     else {
       if (c == ')') break;
     }
   }
   goto start;
 }


 c = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
 if ((c == '&' || c == 'R' || (enc)->is_code_ctype(c,4,enc)) &&
     (((env->syntax)->op2 & ((1U<<27))) != 0)) {

   int gnum;
   OnigUChar *name;
   OnigUChar *name_end;

   if (c == 'R' || c == '0') {
     do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     if (!((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )')')) return -215;
     do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
     name_end = name = p;
     gnum = 0;
   }
   else {
     int numref = 1;
     if (c == '&') {
       do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
       numref = 0;
     }
     name = p;
     r = fetch_name((OnigCodePoint )'(', &p, end, &name_end, env, &gnum, numref);
     if (r < 0) return r;
   }

   tok->type = TK_CALL;
   tok->u.call.name = name;
   tok->u.call.name_end = name_end;
   tok->u.call.gnum = gnum;
   tok->u.call.rel = 0;
   break;
 }
 else if ((c == '-' || c == '+') &&
     (((env->syntax)->op2 & ((1U<<27))) != 0)) {

   int gnum;
   OnigUChar *name;
   OnigUChar *name_end;
   OnigCodePoint cnext;
   OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   cnext = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0);
   if ((enc)->is_code_ctype(cnext,4,enc)) {
     if (c == '-') p = pfetch_prev;
     name = p;
     r = fetch_name((OnigCodePoint )'(', &p, end, &name_end, env, &gnum, 1);
     if (r < 0) return r;

     tok->type = TK_CALL;
     tok->u.call.name = name;
     tok->u.call.name_end = name_end;
     tok->u.call.gnum = gnum;
     tok->u.call.rel = 1;
     break;
   }
 }


 if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'P') &&
     (((env->syntax)->op2 & ((1U<<30))) != 0)) {
   int gnum;
   OnigUChar *name;
   OnigUChar *name_end;
   OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if ((p < end ? 0 : 1)) return -119;
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if (c == '=') {
     r = fetch_named_backref_token((OnigCodePoint )'(', tok, &p, end, env);
     if (r < 0) return r;
     break;
   }
   else if (c == '>') {
     name = p;
     r = fetch_name((OnigCodePoint )'(', &p, end, &name_end, env, &gnum, 0);
     if (r < 0) return r;

     tok->type = TK_CALL;
     tok->u.call.name = name;
     tok->u.call.name_end = name_end;
     tok->u.call.gnum = gnum;
     tok->u.call.rel = 0;
     break;
   }
 }

 p = pfetch_prev;
      }

      if (! (((syn)->op & ((1U<<12))) != 0)) break;
      tok->type = TK_SUBEXP_OPEN;
      break;

    case ')':
      if (! (((syn)->op & ((1U<<12))) != 0)) break;
      tok->type = TK_SUBEXP_CLOSE;
      break;

    case '^':
      if (! (((syn)->op & ((1U<<23))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (((env->option) & (((1U << 1) << 1) << 1))
          ? (1<<0) : (1<<1));
      break;

    case '$':
      if (! (((syn)->op & ((1U<<23))) != 0)) break;
      tok->type = TK_ANCHOR;
      tok->u.anchor.subtype = (((env->option) & (((1U << 1) << 1) << 1))
          ? (1<<4) : (1<<5));
      break;

    case '[':
      if (! (((syn)->op & ((1U<<17))) != 0)) break;
      tok->type = TK_CC_OPEN;
      break;

    case ']':
      if (*src > env->pattern)
 CLOSE_BRACKET_WITHOUT_ESC_WARN(env, (OnigUChar* )"]");
      break;

    case '#':
      if (((env->option) & (1U << 1))) {
 while (!(p < end ? 0 : 1)) {
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if ((enc)->is_code_ctype(c,0,enc))
     break;
 }
 goto start;
 break;
      }
      break;

    case ' ': case '\t': case '\n': case '\r': case '\f':
      if (((env->option) & (1U << 1)))
 goto start;
      break;

    default:

      break;
    }
  }


 out:

  *src = p;
  return tok->type;
}

static int
add_ctype_to_cc_by_range(CClassNode* cc, int ctype , int not,
                         ScanEnv* env,
                         OnigCodePoint sb_out, const OnigCodePoint mbr[])
{
  int i, r;
  OnigCodePoint j;

  int n = ((int )mbr[0]);

  if (not == 0) {
    for (i = 0; i < n; i++) {
      for (j = mbr[((i)*2) + 1];
   j <= mbr[((i)*2) + 2]; j++) {
 if (j >= sb_out) {
   if (j > mbr[((i)*2) + 1]) {
     r = add_code_range_to_buf(&(cc->mbuf), env, j,
          mbr[((i)*2) + 2]);
     if (r != 0) return r;
     i++;
   }

   goto sb_end;
 }
 do { if (((cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(j) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(j) % ((int )sizeof(Bits) * 8))); } while (0);
      }
    }

  sb_end:
    for ( ; i < n; i++) {
      r = add_code_range_to_buf(&(cc->mbuf), env,
                                mbr[((i)*2) + 1],
                                mbr[((i)*2) + 2]);
      if (r != 0) return r;
    }
  }
  else {
    OnigCodePoint prev = 0;

    for (i = 0; i < n; i++) {
      for (j = prev;
    j < mbr[((i)*2) + 1]; j++) {
 if (j >= sb_out) {
   goto sb_end2;
 }
 do { if (((cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(j) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(j) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      prev = mbr[((i)*2) + 2] + 1;
    }
    for (j = prev; j < sb_out; j++) {
      do { if (((cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(j) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(j) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(j) % ((int )sizeof(Bits) * 8))); } while (0);
    }

  sb_end2:
    prev = sb_out;

    for (i = 0; i < n; i++) {
      if (prev < mbr[((i)*2) + 1]) {
 r = add_code_range_to_buf(&(cc->mbuf), env, prev,
                                  mbr[((i)*2) + 1] - 1);
 if (r != 0) return r;
      }
      prev = mbr[((i)*2) + 2] + 1;
    }
    if (prev < 0x7fffffff) {
      r = add_code_range_to_buf(&(cc->mbuf), env, prev, 0x7fffffff);
      if (r != 0) return r;
    }
  }

  return 0;
}

static int
add_ctype_to_cc(CClassNode* cc, int ctype, int not, int ascii_range, ScanEnv* env)
{
  int maxcode;
  int c, r;
  const OnigCodePoint *ranges;
  OnigCodePoint sb_out;
  OnigEncoding enc = env->enc;

  r = (enc)->get_ctype_code_range(ctype,&sb_out,&ranges,enc);
  if (r == 0) {
    if (ascii_range) {
      CClassNode ccwork;
      initialize_cclass(&ccwork);
      r = add_ctype_to_cc_by_range(&ccwork, ctype, not, env, sb_out,
       ranges);
      if (r == 0) {
 if (not) {
   r = add_code_range_to_buf0(&(ccwork.mbuf), env, 0x80, (~((OnigCodePoint )0)), 0);
 }
 else {
   CClassNode ccascii;
   initialize_cclass(&ccascii);
   if (((env->enc)->min_enc_len) > 1) {
     r = add_code_range(&(ccascii.mbuf), env, 0x00, 0x7F);
   }
   else {
     bitset_set_range(env, ccascii.bs, 0x00, 0x7F);
     r = 0;
   }
   if (r == 0) {
     r = and_cclass(&ccwork, &ccascii, env);
   }
   if ((((void*)(ccascii.mbuf)) != (void*)0)) bbuf_free(ccascii.mbuf);
 }
 if (r == 0) {
   r = or_cclass(cc, &ccwork, env);
 }
 if ((((void*)(ccwork.mbuf)) != (void*)0)) bbuf_free(ccwork.mbuf);
      }
    }
    else {
      r = add_ctype_to_cc_by_range(cc, ctype, not, env, sb_out, ranges);
    }
    return r;
  }
  else if (r != -2) {
    return r;
  }

  maxcode = ascii_range ? 0x80 : (1 << 8);
  r = 0;
  switch (ctype) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 10:
  case 11:
  case 14:
  case 13:
    if (not != 0) {
      for (c = 0; c < (1 << 8); c++) {
 if (! (enc)->is_code_ctype((OnigCodePoint )c,ctype,enc))
   do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      do { if (! (((enc)->max_enc_len) == 1)) { r = add_code_range_to_buf(&(cc->mbuf), env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0))); if (r) return r; }} while (0);
    }
    else {
      for (c = 0; c < (1 << 8); c++) {
 if ((enc)->is_code_ctype((OnigCodePoint )c,ctype,enc))
   do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
    }
    break;

  case 5:
  case 7:
    if (not != 0) {
      for (c = 0; c < (1 << 8); c++) {
 if (! (enc)->is_code_ctype((OnigCodePoint )c,ctype,enc)
     || c >= maxcode)
   do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      if (ascii_range)
 do { if (! (((enc)->max_enc_len) == 1)) { r = add_code_range_to_buf(&(cc->mbuf), env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0))); if (r) return r; }} while (0);
    }
    else {
      for (c = 0; c < maxcode; c++) {
 if ((enc)->is_code_ctype((OnigCodePoint )c,ctype,enc))
   do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      if (! ascii_range)
 do { if (! (((enc)->max_enc_len) == 1)) { r = add_code_range_to_buf(&(cc->mbuf), env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0))); if (r) return r; }} while (0);
    }
    break;

  case 12:
    if (not == 0) {
      for (c = 0; c < maxcode; c++) {
 if ((enc)->is_code_ctype(c,12,enc)) do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      if (! ascii_range)
 do { if (! (((enc)->max_enc_len) == 1)) { r = add_code_range_to_buf(&(cc->mbuf), env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0))); if (r) return r; }} while (0);
    }
    else {
      for (c = 0; c < (1 << 8); c++) {
 if (((enc)->code_to_mbclen(c,enc) > 0)
     && (! (enc)->is_code_ctype(c,12,enc) || c >= maxcode))
   do { if (((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(c) % ((int )sizeof(Bits) * 8))); } while (0);
      }
      if (ascii_range)
 do { if (! (((enc)->max_enc_len) == 1)) { r = add_code_range_to_buf(&(cc->mbuf), env, (OnigCodePoint )(((enc)->min_enc_len) > 1 ? 0 : 0x80), (~((OnigCodePoint )0))); if (r) return r; }} while (0);
    }
    break;

  default:
    return -11;
    break;
  }

  return r;
}

static int
parse_posix_bracket(CClassNode* cc, CClassNode* asc_cc,
      OnigUChar** src, OnigUChar* end, ScanEnv* env)
{



  static const PosixBracketEntryType PBS[] = {
    {(short int )(sizeof("alnum") - 1), ("alnum"), (13)},
    {(short int )(sizeof("alpha") - 1), ("alpha"), (1)},
    {(short int )(sizeof("blank") - 1), ("blank"), (2)},
    {(short int )(sizeof("cntrl") - 1), ("cntrl"), (3)},
    {(short int )(sizeof("digit") - 1), ("digit"), (4)},
    {(short int )(sizeof("graph") - 1), ("graph"), (5)},
    {(short int )(sizeof("lower") - 1), ("lower"), (6)},
    {(short int )(sizeof("print") - 1), ("print"), (7)},
    {(short int )(sizeof("punct") - 1), ("punct"), (8)},
    {(short int )(sizeof("space") - 1), ("space"), (9)},
    {(short int )(sizeof("upper") - 1), ("upper"), (10)},
    {(short int )(sizeof("xdigit") - 1), ("xdigit"), (11)},
    {(short int )(sizeof("ascii") - 1), ("ascii"), (14)},
    {(short int )(sizeof("word") - 1), ("word"), (12)},
  };

  const PosixBracketEntryType *pb;
  int not, i, r;
  int ascii_range;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;
  OnigUChar *p = *src;

  if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'^')) {
    do { p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    not = 1;
  }
  else
    not = 0;

  if (onigenc_strlen(enc, p, end) < 4 + 3)
    goto not_posix_bracket;

  ascii_range = ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) &&
    ! ((env->option) & ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
  for (pb = PBS; pb < PBS + (int )(sizeof(PBS) / sizeof((PBS)[0])); pb++) {
    if (onigenc_with_ascii_strncmp(enc, p, end, pb->name, pb->len) == 0) {
      p = (OnigUChar* )onigenc_step(enc, p, end, pb->len);
      if (onigenc_with_ascii_strncmp(enc, p, end, (OnigUChar* )":]", 2) != 0)
 return -121;

      r = add_ctype_to_cc(cc, pb->ctype, not, ascii_range, env);
      if (r != 0) return r;

      if ((((void*)(asc_cc)) != (void*)0)) {
 if (pb->ctype != 12 &&
     pb->ctype != 14 &&
     !ascii_range)
   r = add_ctype_to_cc(asc_cc, pb->ctype, not, ascii_range, env);
 if (r != 0) return r;
      }

      do { p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0); do { p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      *src = p;
      return 0;
    }
  }

 not_posix_bracket:
  c = 0;
  i = 0;
  while (!(p < end ? 0 : 1) && ((c = (p < end ? (enc)->mbc_to_code((p),(end),enc) : 0)) != ':') && c != ']') {
    do { p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (++i > 20) break;
  }
  if (c == ':' && ! (p < end ? 0 : 1)) {
    do { p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (! (p < end ? 0 : 1)) {
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == ']')
 return -121;
    }
  }

  return 1;
}

static int
fetch_char_property_to_ctype(OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;
  OnigUChar *prev, *start, *p = *src;

  r = 0;
  start = prev = p;

  while (!(p < end ? 0 : 1)) {
    prev = p;
    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if (c == '}') {
      r = (enc)->property_name_to_ctype(enc,start,prev);
      if (r < 0) break;

      *src = p;
      return r;
    }
    else if (c == '(' || c == ')' || c == '{' || c == '|') {
      r = -223;
      break;
    }
  }

  onig_scan_env_set_error_string(env, r, *src, prev);
  return r;
}

static int cclass_case_fold(Node** np, CClassNode* cc, CClassNode* asc_cc, ScanEnv* env);

static int
parse_char_property(Node** np, OnigToken* tok, OnigUChar** src, OnigUChar* end,
      ScanEnv* env)
{
  int r, ctype;
  CClassNode* cc;

  ctype = fetch_char_property_to_ctype(src, end, env);
  if (ctype < 0) return ctype;

  *np = node_new_cclass();
  if ((((void*)(*np)) == (void*)0)) return -5;
  cc = (&((*np)->u.cclass));
  r = add_ctype_to_cc(cc, ctype, 0, 0, env);
  if (r != 0) return r;
  if (tok->u.prop.not != 0) (((cc)->flags) |= ((1<<0)));

  if (((env->option) & 1U)) {
    if (ctype != 14)
      r = cclass_case_fold(np, cc, cc, env);
  }
  return r;
}


enum CCSTATE {
  CCS_VALUE,
  CCS_RANGE,
  CCS_COMPLETE,
  CCS_START
};

enum CCVALTYPE {
  CCV_SB,
  CCV_CODE_POINT,
  CCV_CLASS
};

static int
next_state_class(CClassNode* cc, CClassNode* asc_cc,
   OnigCodePoint* vs, enum CCVALTYPE* type,
   enum CCSTATE* state, ScanEnv* env)
{
  int r;

  if (*state == CCS_RANGE)
    return -110;

  if (*state == CCS_VALUE && *type != CCV_CLASS) {
    if (*type == CCV_SB) {
      do { if (((cc->bs)[(int )((int )(*vs)) / ((int )sizeof(Bits) * 8)] & (1U << ((int )((int )(*vs)) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )((int )(*vs)) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )((int )(*vs)) % ((int )sizeof(Bits) * 8))); } while (0);
      if ((((void*)(asc_cc)) != (void*)0))
 (asc_cc->bs)[(int )((int )(*vs)) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )((int )(*vs)) % ((int )sizeof(Bits) * 8)));
    }
    else if (*type == CCV_CODE_POINT) {
      r = add_code_range(&(cc->mbuf), env, *vs, *vs);
      if (r < 0) return r;
      if ((((void*)(asc_cc)) != (void*)0)) {
 r = add_code_range0(&(asc_cc->mbuf), env, *vs, *vs, 0);
 if (r < 0) return r;
      }
    }
  }

  *state = CCS_VALUE;
  *type = CCV_CLASS;
  return 0;
}

static int
next_state_val(CClassNode* cc, CClassNode* asc_cc,
        OnigCodePoint *from, OnigCodePoint to,
        int* from_israw, int to_israw,
        enum CCVALTYPE intype, enum CCVALTYPE* type,
        enum CCSTATE* state, ScanEnv* env)
{
  int r;

  switch (*state) {
  case CCS_VALUE:
    if (*type == CCV_SB) {
      do { if (((cc->bs)[(int )((int )(*from)) / ((int )sizeof(Bits) * 8)] & (1U << ((int )((int )(*from)) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )((int )(*from)) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )((int )(*from)) % ((int )sizeof(Bits) * 8))); } while (0);
      if ((((void*)(asc_cc)) != (void*)0))
 (asc_cc->bs)[(int )((int )(*from)) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )((int )(*from)) % ((int )sizeof(Bits) * 8)));
    }
    else if (*type == CCV_CODE_POINT) {
      r = add_code_range(&(cc->mbuf), env, *from, *from);
      if (r < 0) return r;
      if ((((void*)(asc_cc)) != (void*)0)) {
 r = add_code_range0(&(asc_cc->mbuf), env, *from, *from, 0);
 if (r < 0) return r;
      }
    }
    break;

  case CCS_RANGE:
    if (intype == *type) {
      if (intype == CCV_SB) {
 if (*from > 0xff || to > 0xff)
   return -400;

 if (*from > to) {
   if ((((env->syntax)->behavior & ((1U<<22))) != 0))
     goto ccs_range_end;
   else
     return -203;
 }
 bitset_set_range(env, cc->bs, (int )*from, (int )to);
 if ((((void*)(asc_cc)) != (void*)0))
   bitset_set_range(env, asc_cc->bs, (int )*from, (int )to);
      }
      else {
 r = add_code_range(&(cc->mbuf), env, *from, to);
 if (r < 0) return r;
 if ((((void*)(asc_cc)) != (void*)0)) {
   r = add_code_range0(&(asc_cc->mbuf), env, *from, to, 0);
   if (r < 0) return r;
 }
      }
    }
    else {
      if (*from > to) {
 if ((((env->syntax)->behavior & ((1U<<22))) != 0))
   goto ccs_range_end;
 else
   return -203;
      }
      bitset_set_range(env, cc->bs, (int )*from, (int )(to < 0xff ? to : 0xff));
      r = add_code_range(&(cc->mbuf), env, (OnigCodePoint )*from, to);
      if (r < 0) return r;
      if ((((void*)(asc_cc)) != (void*)0)) {
 bitset_set_range(env, asc_cc->bs, (int )*from, (int )(to < 0xff ? to : 0xff));
 r = add_code_range0(&(asc_cc->mbuf), env, (OnigCodePoint )*from, to, 0);
 if (r < 0) return r;
      }
    }
  ccs_range_end:
    *state = CCS_COMPLETE;
    break;

  case CCS_COMPLETE:
  case CCS_START:
    *state = CCS_VALUE;
    break;

  default:
    break;
  }

  *from_israw = to_israw;
  *from = to;
  *type = intype;
  return 0;
}

static int
code_exist_check(OnigCodePoint c, OnigUChar* from, OnigUChar* end, int ignore_escaped,
   ScanEnv* env)
{
  int in_esc;
  OnigCodePoint code;
  OnigEncoding enc = env->enc;
  OnigUChar* p = from;

  in_esc = 0;
  while (! (p < end ? 0 : 1)) {
    if (ignore_escaped && in_esc) {
      in_esc = 0;
    }
    else {
      do { code = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (code == c) return 1;
      if (code == (env->syntax)->meta_char_table.esc) in_esc = 1;
    }
  }
  return 0;
}

static int
parse_char_class(Node** np, Node** asc_np, OnigToken* tok, OnigUChar** src, OnigUChar* end,
   ScanEnv* env)
{
  int r, neg, len, fetched, and_start;
  OnigCodePoint v, vs;
  OnigUChar *p;
  Node* node;
  Node* asc_node;
  CClassNode *cc, *prev_cc;
  CClassNode *asc_cc, *asc_prev_cc;
  CClassNode work_cc, asc_work_cc;

  enum CCSTATE state;
  enum CCVALTYPE val_type, in_type;
  int val_israw, in_israw;

  *np = *asc_np = ((Node* )0);
  env->parse_depth++;
  if (env->parse_depth > ParseDepthLimit)
    return -16;
  prev_cc = asc_prev_cc = (CClassNode* )((void*)0);
  r = fetch_token_in_cc(tok, src, end, env);
  if (r == TK_CHAR && tok->u.c == '^' && tok->escaped == 0) {
    neg = 1;
    r = fetch_token_in_cc(tok, src, end, env);
  }
  else {
    neg = 0;
  }

  if (r < 0) return r;
  if (r == TK_CC_CLOSE) {
    if (! code_exist_check((OnigCodePoint )']',
                           *src, env->pattern_end, 1, env))
      return -102;

    CC_ESC_WARN(env, (OnigUChar* )"]");
    r = tok->type = TK_CHAR;
  }

  *np = node = node_new_cclass();
  if ((((void*)(node)) == (void*)0)) return -5;
  cc = (&((node)->u.cclass));

  if (((env->option) & 1U)) {
    *asc_np = asc_node = node_new_cclass();
    if ((((void*)(asc_node)) == (void*)0)) return -5;
    asc_cc = (&((asc_node)->u.cclass));
  }
  else {
    asc_node = ((Node* )0);
    asc_cc = ((void*)0);
  }

  and_start = 0;
  state = CCS_START;
  p = *src;
  while (r != TK_CC_CLOSE) {
    fetched = 0;
    switch (r) {
    case TK_CHAR:
      if ((tok->u.code >= (1 << 8)) ||
   (len = (env->enc)->code_to_mbclen(tok->u.c,env->enc)) > 1) {
 in_type = CCV_CODE_POINT;
      }
      else if (len < 0) {
 r = len;
 goto err;
      }
      else {
      sb_char:
 in_type = CCV_SB;
      }
      v = (OnigCodePoint )tok->u.c;
      in_israw = 0;
      goto val_entry2;
      break;

    case TK_RAW_BYTE:

      if (! (((env->enc)->max_enc_len) == 1) && tok->base != 0) {
 OnigUChar buf[7];
 OnigUChar* bufe = buf + 7;
 OnigUChar* psave = p;
 int i, base = tok->base;

 buf[0] = (OnigUChar )tok->u.c;
 for (i = 1; i < ((env->enc)->max_enc_len); i++) {
   r = fetch_token_in_cc(tok, &p, end, env);
   if (r < 0) goto err;
   if (r != TK_RAW_BYTE || tok->base != base) {
     fetched = 1;
     break;
   }
   buf[i] = (OnigUChar )tok->u.c;
 }

 if (i < ((env->enc)->min_enc_len)) {
   r = -206;
   goto err;
 }

 len = ((env->enc->max_enc_len == env->enc->min_enc_len) ? env->enc->min_enc_len : onigenc_mbclen_approximate(buf,buf + i,env->enc));
 if (i < len) {
   r = -206;
   goto err;
 }
 else if (i > len) {
   p = psave;
   for (i = 1; i < len; i++) {
     (void)fetch_token_in_cc(tok, &p, end, env);

   }
   fetched = 0;
 }

 if (i == 1) {
   v = (OnigCodePoint )buf[0];
   goto raw_single;
 }
 else {
   v = (env->enc)->mbc_to_code((buf),(bufe),env->enc);
   in_type = CCV_CODE_POINT;
 }
      }
      else {
 v = (OnigCodePoint )tok->u.c;
      raw_single:
 in_type = CCV_SB;
      }
      in_israw = 1;
      goto val_entry2;
      break;

    case TK_CODE_POINT:
      v = tok->u.code;
      in_israw = 1;
    val_entry:
      len = (env->enc)->code_to_mbclen(v,env->enc);
      if (len < 0) {
 r = len;
 goto err;
      }
      in_type = (len == 1 ? CCV_SB : CCV_CODE_POINT);
    val_entry2:
      r = next_state_val(cc, asc_cc, &vs, v, &val_israw, in_israw, in_type, &val_type,
    &state, env);
      if (r != 0) goto err;
      break;

    case TK_POSIX_BRACKET_OPEN:
      r = parse_posix_bracket(cc, asc_cc, &p, end, env);
      if (r < 0) goto err;
      if (r == 1) {
 CC_ESC_WARN(env, (OnigUChar* )"[");
 p = tok->backp;
 v = (OnigCodePoint )tok->u.c;
 in_israw = 0;
 goto val_entry;
      }
      goto next_class;
      break;

    case TK_CHAR_TYPE:
      r = add_ctype_to_cc(cc, tok->u.prop.ctype, tok->u.prop.not,
     ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), env);
      if (r != 0) return r;
      if ((((void*)(asc_cc)) != (void*)0)) {
 if (tok->u.prop.ctype != 12)
   r = add_ctype_to_cc(asc_cc, tok->u.prop.ctype, tok->u.prop.not,
         ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), env);
 if (r != 0) return r;
      }

    next_class:
      r = next_state_class(cc, asc_cc, &vs, &val_type, &state, env);
      if (r != 0) goto err;
      break;

    case TK_CHAR_PROPERTY:
      {
 int ctype;

 ctype = fetch_char_property_to_ctype(&p, end, env);
 if (ctype < 0) return ctype;
 r = add_ctype_to_cc(cc, ctype, tok->u.prop.not, 0, env);
 if (r != 0) return r;
 if ((((void*)(asc_cc)) != (void*)0)) {
   if (ctype != 14)
     r = add_ctype_to_cc(asc_cc, ctype, tok->u.prop.not, 0, env);
   if (r != 0) return r;
 }
 goto next_class;
      }
      break;

    case TK_CC_RANGE:
      if (state == CCS_VALUE) {
 r = fetch_token_in_cc(tok, &p, end, env);
 if (r < 0) goto err;
 fetched = 1;
 if (r == TK_CC_CLOSE) {
 range_end_val:
   v = (OnigCodePoint )'-';
   in_israw = 0;
   goto val_entry;
 }
 else if (r == TK_CC_AND) {
   CC_ESC_WARN(env, (OnigUChar* )"-");
   goto range_end_val;
 }

 if (val_type == CCV_CLASS) {
   r = -112;
   goto err;
 }

 state = CCS_RANGE;
      }
      else if (state == CCS_START) {

 v = (OnigCodePoint )tok->u.c;
 in_israw = 0;

 r = fetch_token_in_cc(tok, &p, end, env);
 if (r < 0) goto err;
 fetched = 1;

 if (r == TK_CC_RANGE || and_start != 0)
   CC_ESC_WARN(env, (OnigUChar* )"-");

 goto val_entry;
      }
      else if (state == CCS_RANGE) {
 CC_ESC_WARN(env, (OnigUChar* )"-");
 goto sb_char;
      }
      else {
 r = fetch_token_in_cc(tok, &p, end, env);
 if (r < 0) goto err;
 fetched = 1;
 if (r == TK_CC_CLOSE) goto range_end_val;
 else if (r == TK_CC_AND) {
   CC_ESC_WARN(env, (OnigUChar* )"-");
   goto range_end_val;
 }

 if ((((env->syntax)->behavior & ((1U<<23))) != 0)) {
   CC_ESC_WARN(env, (OnigUChar* )"-");
   goto range_end_val;
 }
 r = -112;
 goto err;
      }
      break;

    case TK_CC_CC_OPEN:
      {
 Node *anode, *aasc_node;
 CClassNode* acc;

 r = parse_char_class(&anode, &aasc_node, tok, &p, end, env);
 if (r == 0) {
   acc = (&((anode)->u.cclass));
   r = or_cclass(cc, acc, env);
 }
 if (r == 0 && (((void*)(aasc_node)) != (void*)0)) {
   acc = (&((aasc_node)->u.cclass));
   r = or_cclass(asc_cc, acc, env);
 }
 onig_node_free(anode);
 onig_node_free(aasc_node);
 if (r != 0) goto err;
      }
      break;

    case TK_CC_AND:
      {
 if (state == CCS_VALUE) {
   r = next_state_val(cc, asc_cc, &vs, 0, &val_israw, 0, val_type,
        &val_type, &state, env);
   if (r != 0) goto err;
 }

 and_start = 1;
 state = CCS_START;

 if ((((void*)(prev_cc)) != (void*)0)) {
   r = and_cclass(prev_cc, cc, env);
   if (r != 0) goto err;
   bbuf_free(cc->mbuf);
   if ((((void*)(asc_cc)) != (void*)0)) {
     r = and_cclass(asc_prev_cc, asc_cc, env);
     if (r != 0) goto err;
     bbuf_free(asc_cc->mbuf);
   }
 }
 else {
   prev_cc = cc;
   cc = &work_cc;
   if ((((void*)(asc_cc)) != (void*)0)) {
     asc_prev_cc = asc_cc;
     asc_cc = &asc_work_cc;
   }
 }
 initialize_cclass(cc);
 if ((((void*)(asc_cc)) != (void*)0))
   initialize_cclass(asc_cc);
      }
      break;

    case TK_EOT:
      r = -103;
      goto err;
      break;
    default:
      r = -11;
      goto err;
      break;
    }

    if (fetched)
      r = tok->type;
    else {
      r = fetch_token_in_cc(tok, &p, end, env);
      if (r < 0) goto err;
    }
  }

  if (state == CCS_VALUE) {
    r = next_state_val(cc, asc_cc, &vs, 0, &val_israw, 0, val_type,
         &val_type, &state, env);
    if (r != 0) goto err;
  }

  if ((((void*)(prev_cc)) != (void*)0)) {
    r = and_cclass(prev_cc, cc, env);
    if (r != 0) goto err;
    bbuf_free(cc->mbuf);
    cc = prev_cc;
    if ((((void*)(asc_cc)) != (void*)0)) {
      r = and_cclass(asc_prev_cc, asc_cc, env);
      if (r != 0) goto err;
      bbuf_free(asc_cc->mbuf);
      asc_cc = asc_prev_cc;
    }
  }

  if (neg != 0) {
    (((cc)->flags) |= ((1<<0)));
    if ((((void*)(asc_cc)) != (void*)0))
      (((asc_cc)->flags) |= ((1<<0)));
  }
  else {
    (((cc)->flags) &= ~((1<<0)));
    if ((((void*)(asc_cc)) != (void*)0))
      (((asc_cc)->flags) &= ~((1<<0)));
  }
  if (((((cc)->flags) & ((1<<0))) != 0) &&
      (((env->syntax)->behavior & ((1U<<20))) != 0)) {
    int is_empty;

    is_empty = ((((void*)(cc->mbuf)) == (void*)0) ? 1 : 0);
    if (is_empty != 0)
      do { int i; is_empty = 1; for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) { if ((cc->bs)[i] != 0) { is_empty = 0; break; } }} while (0);

    if (is_empty == 0) {


      if ((env->enc)->is_code_ctype(0x0a,0,env->enc)) {
 if ((env->enc)->code_to_mbclen(0x0a,env->enc) == 1)
   do { if (((cc->bs)[(int )(0x0a) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(0x0a) % ((int )sizeof(Bits) * 8))))) CC_DUP_WARN(env); (cc->bs)[(int )(0x0a) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(0x0a) % ((int )sizeof(Bits) * 8))); } while (0);
 else {
   r = add_code_range(&(cc->mbuf), env, 0x0a, 0x0a);
   if (r < 0) goto err;
 }
      }
    }
  }
  *src = p;
  env->parse_depth--;
  return 0;

 err:
  if (cc != (&((*np)->u.cclass)))
    bbuf_free(cc->mbuf);
  if ((((void*)(asc_cc)) != (void*)0) && (asc_cc != (&((*asc_np)->u.cclass))))
    bbuf_free(asc_cc->mbuf);
  return r;
}

static int parse_subexp(Node** top, OnigToken* tok, int term,
   OnigUChar** src, OnigUChar* end, ScanEnv* env);

static int
parse_enclose(Node** np, OnigToken* tok, int term, OnigUChar** src, OnigUChar* end,
       ScanEnv* env)
{
  int r = 0, num;
  Node *target, *work1 = ((void*)0), *work2 = ((void*)0);
  OnigOptionType option;
  OnigCodePoint c;
  OnigEncoding enc = env->enc;


  int list_capture;


  OnigUChar* p = *src;
  OnigUChar* pfetch_prev = ((void*)0); (void)pfetch_prev;

  *np = ((void*)0);
  if ((p < end ? 0 : 1)) return -117;

  option = env->option;
  if (((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )'?') &&
      (((env->syntax)->op2 & ((1U<<1))) != 0)) {
    do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    if ((p < end ? 0 : 1)) return -118;

    do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
    switch (c) {
    case ':':
    group:
      r = fetch_token(tok, &p, end, env);
      if (r < 0) return r;
      r = parse_subexp(np, tok, term, &p, end, env);
      if (r < 0) return r;
      *src = p;
      return 1;
      break;

    case '=':
      *np = onig_node_new_anchor((1<<10));
      break;
    case '!':
      *np = onig_node_new_anchor((1<<11));
      break;
    case '>':
      *np = node_new_enclose((1<<2));
      break;
    case '~':
      if ((((env->syntax)->op2 & ((1U<<31))) != 0)) {
 *np = node_new_enclose((1<<4));
      }
      else {
 return -119;
      }
      break;


    case '\'':
      if ((((env->syntax)->op2 & ((1U<<7))) != 0)) {
 goto named_group1;
      }
      else
 return -119;
      break;


    case 'P':
      if (!(p < end ? 0 : 1) &&
   (((env->syntax)->op2 & ((1U<<30))) != 0)) {
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if (c == '<') goto named_group1;
      }
      return -119;
      break;



    case '<':
      if ((p < end ? 0 : 1)) return -117;
      do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      if (c == '=')
 *np = onig_node_new_anchor((1<<12));
      else if (c == '!')
 *np = onig_node_new_anchor((1<<13));

      else {
 if ((((env->syntax)->op2 & ((1U<<7))) != 0)) {
   OnigUChar *name;
   OnigUChar *name_end;

   p = pfetch_prev;
   c = '<';

 named_group1:
   list_capture = 0;


 named_group2:

   name = p;
   r = fetch_name((OnigCodePoint )c, &p, end, &name_end, env, &num, 0);
   if (r < 0) return r;

   num = scan_env_add_mem_entry(env);
   if (num < 0) return num;
   if (list_capture != 0 && num >= (int )(sizeof(BitStatusType) * 8))
     return -222;

   r = name_add(env->reg, name, name_end, num, env);
   if (r != 0) return r;
   *np = node_new_enclose_memory(env->option, 1);
   if ((((void*)(*np)) == (void*)0)) return -5;
   (&((*np)->u.enclose))->regnum = num;
   if (list_capture != 0)
     do { if ((num) < (int )(sizeof(BitStatusType) * 8)) (env->capture_history) |= (1 << (num));} while (0);
   env->num_named++;
 }
 else {
   return -119;
 }
      }





      break;


    case '@':
      if ((((env->syntax)->op2 & ((1U<<10))) != 0)) {

 if (!(p < end ? 0 : 1) &&
     (((env->syntax)->op2 & ((1U<<7))) != 0)) {
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
   if (c == '<' || c == '\'') {
     list_capture = 1;
     goto named_group2;
   }
   p = pfetch_prev;
 }

 *np = node_new_enclose_memory(env->option, 0);
 if ((((void*)(*np)) == (void*)0)) return -5;
 num = scan_env_add_mem_entry(env);
 if (num < 0) return num;
 if (num >= (int )(sizeof(BitStatusType) * 8))
   return -222;

 (&((*np)->u.enclose))->regnum = num;
 do { if ((num) < (int )(sizeof(BitStatusType) * 8)) (env->capture_history) |= (1 << (num));} while (0);
      }
      else {
 return -119;
      }
      break;


    case '(':
      if (!(p < end ? 0 : 1) &&
   (((env->syntax)->op2 & ((1U<<29))) != 0)) {
 OnigUChar *name = ((void*)0);
 OnigUChar *name_end;
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 if ((enc)->is_code_ctype(c,4,enc)) {
   p = pfetch_prev;
   r = fetch_name((OnigCodePoint )'(', &p, end, &name_end, env, &num, 1);
   if (r < 0) return r;
   if ((((env->syntax)->behavior & ((1U<<5))) != 0)) {
     if (num > env->num_mem ||
  (((void*)(((((void*)((env)->mem_nodes_dynamic)) != (void*)0) ? (env)->mem_nodes_dynamic : (env)->mem_nodes_static)[num])) == (void*)0))
     return -208;
   }
 }

 else if (c == '<' || c == '\'') {
   name = p;
   r = fetch_named_backref_token(c, tok, &p, end, env);
   if (r < 0) return r;
   if (!((p < end ? (enc)->mbc_to_code((p),(end),enc) : 0) == (OnigCodePoint )')')) return -119;
   do { pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);

   if ((((env->syntax)->behavior & ((1U<<11))) != 0)) {
     num = tok->u.backref.ref1;
   }
   else {




     int len = tok->u.backref.num;
     num = len > 1 ? tok->u.backref.refs[0] : tok->u.backref.ref1;
   }
 }

 else
   return -124;
 *np = node_new_enclose((1<<3));
 if ((((void*)(*np)) == (void*)0)) return -5;
 (&((*np)->u.enclose))->regnum = num;
 if ((((void*)(name)) != (void*)0)) (&((*np)->u.enclose))->state |= (1<<11);
      }
      else
 return -119;
      break;
    case '^':
      if (!(p < end ? 0 : 1) && (((env->syntax)->op2 & ((1U<<2))) != 0)) {

 (1) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
 (1) ? ((option) &= ~(1U)) : ((option) |= (1U));
 (0) ? ((option) &= ~((((1U << 1) << 1) << 1))) : ((option) |= ((((1U << 1) << 1) << 1)));
 (1) ? ((option) &= ~(((1U << 1) << 1))) : ((option) |= (((1U << 1) << 1)));
 (1) ? ((option) &= ~((1U << 1))) : ((option) |= ((1U << 1)));
 do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
      }
      else {
 return -119;
      }




    case '-': case 'i': case 'm': case 's': case 'x':
    case 'a': case 'd': case 'l': case 'u':
      {
 int neg = 0;

 while (1) {
   switch (c) {
   case ':':
   case ')':
   break;

   case '-': neg = 1; break;
   case 'x': (neg) ? ((option) &= ~((1U << 1))) : ((option) |= ((1U << 1))); break;
   case 'i': (neg) ? ((option) &= ~(1U)) : ((option) |= (1U)); break;
   case 's':
     if ((((env->syntax)->op2 & ((1U<<2))) != 0)) {
       (neg) ? ((option) &= ~(((1U << 1) << 1))) : ((option) |= (((1U << 1) << 1)));
     }
     else
       return -119;
     break;

   case 'm':
     if ((((env->syntax)->op2 & ((1U<<2))) != 0)) {
       ((neg == 0 ? 1 : 0)) ? ((option) &= ~((((1U << 1) << 1) << 1))) : ((option) |= ((((1U << 1) << 1) << 1)));
     }
     else if ((((env->syntax)->op2 & ((1U<<3))) != 0)) {
       (neg) ? ((option) &= ~(((1U << 1) << 1))) : ((option) |= (((1U << 1) << 1)));
     }
     else
       return -119;
     break;






   case 'a':
     if (((((env->syntax)->op2 & ((1U<<2))) != 0) ||
   (((env->syntax)->op2 & ((1U<<3))) != 0)) &&
  (neg == 0)) {
       (0) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (1) ? ((option) &= ~(((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (1) ? ((option) &= ~((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
     }
     else
       return -119;
     break;

   case 'u':
     if (((((env->syntax)->op2 & ((1U<<2))) != 0) ||
   (((env->syntax)->op2 & ((1U<<3))) != 0)) &&
  (neg == 0)) {
       (1) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (1) ? ((option) &= ~(((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (1) ? ((option) &= ~((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
     }
     else
       return -119;
     break;

   case 'd':
     if ((((env->syntax)->op2 & ((1U<<2))) != 0) &&
  (neg == 0)) {
       (1) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
     }
     else if ((((env->syntax)->op2 & ((1U<<3))) != 0) &&
  (neg == 0)) {
       (0) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (0) ? ((option) &= ~(((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= (((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
       (0) ? ((option) &= ~((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
     }
     else
       return -119;
     break;

   case 'l':
     if ((((env->syntax)->op2 & ((1U<<2))) != 0) && (neg == 0)) {
       (1) ? ((option) &= ~((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))) : ((option) |= ((((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
     }
     else
       return -119;
     break;

   default:
     return -119;
   }

   if (c == ')') {
     *np = node_new_option(option);
     if ((((void*)(*np)) == (void*)0)) return -5;
     *src = p;
     return 2;
   }
   else if (c == ':') {
     OnigOptionType prev = env->option;

     env->option = option;
     r = fetch_token(tok, &p, end, env);
     if (r < 0) {
       env->option = prev;
       return r;
     }
     r = parse_subexp(&target, tok, term, &p, end, env);
     env->option = prev;
     if (r < 0) return r;
     *np = node_new_option(option);
     if ((((void*)(*np)) == (void*)0)) return -5;
     (&((*np)->u.enclose))->target = target;
     *src = p;
     return 0;
   }

   if ((p < end ? 0 : 1)) return -118;
   do { c = ((enc->max_enc_len == 1) ? *p : (enc)->mbc_to_code((p),(end),enc)); pfetch_prev = p; p += ((enc->max_enc_len == enc->min_enc_len) ? enc->min_enc_len : onigenc_mbclen_approximate(p,end,enc)); } while (0);
 }
      }
      break;

    default:
      return -119;
    }
  }
  else {
    if (((env->option) & ((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1))))
      goto group;

    *np = node_new_enclose_memory(env->option, 0);
    if ((((void*)(*np)) == (void*)0)) return -5;
    num = scan_env_add_mem_entry(env);
    if (num < 0) return num;
    (&((*np)->u.enclose))->regnum = num;
  }

  if ((((void*)(*np)) == (void*)0)) return -5;
  r = fetch_token(tok, &p, end, env);
  if (r < 0) return r;
  r = parse_subexp(&target, tok, term, &p, end, env);
  if (r < 0) {
    onig_node_free(target);
    return r;
  }

  if (((*np)->u.base.type) == 7)
    (&((*np)->u.anchor))->target = target;
  else {
    (&((*np)->u.enclose))->target = target;
    if ((&((*np)->u.enclose))->type == (1<<0)) {

      r = scan_env_set_mem_node(env, (&((*np)->u.enclose))->regnum, *np);
      if (r != 0) return r;
    }
    else if ((&((*np)->u.enclose))->type == (1<<3)) {
      if (((target)->u.base.type) != 9) {

 work1 = node_new_empty();
 if ((((void*)(work1)) == (void*)0)) goto err;
 work2 = onig_node_new_alt(work1, ((Node* )0));
 if ((((void*)(work2)) == (void*)0)) goto err;
 work1 = onig_node_new_alt(target, work2);
 if ((((void*)(work1)) == (void*)0)) goto err;
 (&((*np)->u.enclose))->target = work1;
      }
    }
  }

  *src = p;
  return 0;

 err:
  onig_node_free(work1);
  onig_node_free(work2);
  onig_node_free(*np);
  *np = ((void*)0);
  return -5;
}

static const char* const PopularQStr[] = {
  "?", "*", "+", "??", "*?", "+?"};

static const char* const ReduceQStr[] = {
  "", "", "*", "*?", "??", "+ and ??", "+? and ?"};

static int
set_quantifier(Node* qnode, Node* target, int group, ScanEnv* env)
{
  QtfrNode* qn;

  qn = (&((qnode)->u.qtfr));
  if (qn->lower == 1 && qn->upper == 1) {
    return 1;
  }

  switch (((target)->u.base.type)) {
  case 0:
    if (! group) {
      StrNode* sn = (&((target)->u.str));
      if (str_node_can_be_split(sn, env->enc)) {
 Node* n = str_node_split_last_char(sn, env->enc);
 if ((((void*)(n)) != (void*)0)) {
   qn->target = n;
   return 2;
 }
      }
    }
    break;

  case 5:
    {

      QtfrNode* qnt = (&((target)->u.qtfr));
      int nestq_num = popular_quantifier_num(qn);
      int targetq_num = popular_quantifier_num(qnt);


      if (nestq_num >= 0 && targetq_num >= 0 &&
   (((env->syntax)->behavior & ((1U<<25))) != 0)) {
 switch (ReduceTypeTable[targetq_num][nestq_num]) {
 case RQ_ASIS:
   break;

 case RQ_DEL:
   if (onig_warn != onig_null_warn) {
     onig_syntax_warn(env, "regular expression has redundant nested repeat operator '%s'",
  PopularQStr[targetq_num]);
   }
   goto warn_exit;
   break;

 default:
   if (onig_warn != onig_null_warn) {
     onig_syntax_warn(env, "nested repeat operator '%s' and '%s' was replaced with '%s' in regular expression",
  PopularQStr[targetq_num], PopularQStr[nestq_num],
  ReduceQStr[ReduceTypeTable[targetq_num][nestq_num]]);
   }
   goto warn_exit;
   break;
 }
      }

    warn_exit:

      if (targetq_num >= 0) {
 if (nestq_num >= 0) {
   onig_reduce_nested_quantifier(qnode, target);
   goto q_exit;
 }
 else if (targetq_num == 1 || targetq_num == 2) {

   if (! ((qn->upper) == -1) && qn->upper > 1 && qn->greedy) {
     qn->upper = (qn->lower == 0 ? 1 : qn->lower);
   }
 }
      }
    }
    break;

  default:
    break;
  }

  qn->target = target;
 q_exit:
  return 0;
}
typedef struct {
  ScanEnv* env;
  CClassNode* cc;
  CClassNode* asc_cc;
  Node* alt_root;
  Node** ptail;
} IApplyCaseFoldArg;

static int
i_apply_case_fold(OnigCodePoint from, OnigCodePoint to[],
    int to_len, void* arg)
{
  IApplyCaseFoldArg* iarg;
  ScanEnv* env;
  CClassNode* cc;
  CClassNode* asc_cc;
  BitSetRef bs;
  int add_flag, r;

  iarg = (IApplyCaseFoldArg* )arg;
  env = iarg->env;
  cc = iarg->cc;
  asc_cc = iarg->asc_cc;
  bs = cc->bs;

  if ((((void*)(asc_cc)) == (void*)0)) {
    add_flag = 0;
  }
  else if (((from) < 0x80) == ((*to) < 0x80)) {
    add_flag = 1;
  }
  else {
    add_flag = onig_is_code_in_cc(env->enc, from, asc_cc);
    if (((((asc_cc)->flags) & ((1<<0))) != 0))
      add_flag = !add_flag;
  }

  if (to_len == 1) {
    int is_in = onig_is_code_in_cc(env->enc, from, cc);

    if ((is_in != 0 && !((((cc)->flags) & ((1<<0))) != 0)) ||
 (is_in == 0 && ((((cc)->flags) & ((1<<0))) != 0))) {
      if (add_flag) {
 if (((env->enc)->min_enc_len) > 1 || *to >= (1 << 8)) {
   r = add_code_range0(&(cc->mbuf), env, *to, *to, 0);
   if (r < 0) return r;
 }
 else {
   (bs)[(int )(*to) / ((int )sizeof(Bits) * 8)] |= (1U << ((int )(*to) % ((int )sizeof(Bits) * 8)));
 }
      }
    }
  }
  else {
    int r, i, len;
    OnigUChar buf[7];
    Node *snode = ((Node* )0);

    if (onig_is_code_in_cc(env->enc, from, cc)

 && !((((cc)->flags) & ((1<<0))) != 0)

 ) {
      for (i = 0; i < to_len; i++) {
 len = (env->enc)->code_to_mbc(to[i],buf,env->enc);
 if (i == 0) {
   snode = onig_node_new_str(buf, buf + len);
   if ((((void*)(snode)) == (void*)0)) return -5;



   (snode)->u.str.flag |= (1<<1);
 }
 else {
   r = onig_node_str_cat(snode, buf, buf + len);
   if (r < 0) {
     onig_node_free(snode);
     return r;
   }
 }
      }

      *(iarg->ptail) = onig_node_new_alt(snode, ((Node* )0));
      if ((((void*)(*(iarg->ptail))) == (void*)0)) return -5;
      iarg->ptail = &(((&(((*(iarg->ptail)))->u.cons))->cdr));
    }
  }

  return 0;
}

static int
cclass_case_fold(Node** np, CClassNode* cc, CClassNode* asc_cc, ScanEnv* env)
{
  int r;
  IApplyCaseFoldArg iarg;

  iarg.env = env;
  iarg.cc = cc;
  iarg.asc_cc = asc_cc;
  iarg.alt_root = ((Node* )0);
  iarg.ptail = &(iarg.alt_root);

  r = (env->enc)->apply_all_case_fold(env->case_fold_flag,i_apply_case_fold,&iarg,env->enc);

  if (r != 0) {
    onig_node_free(iarg.alt_root);
    return r;
  }
  if ((((void*)(iarg.alt_root)) != (void*)0)) {
    Node* work = onig_node_new_alt(*np, iarg.alt_root);
    if ((((void*)(work)) == (void*)0)) {
      onig_node_free(iarg.alt_root);
      return -5;
    }
    *np = work;
  }
  return r;
}

static int
node_linebreak(Node** np, ScanEnv* env)
{

  Node* left = ((void*)0);
  Node* right = ((void*)0);
  Node* target1 = ((void*)0);
  Node* target2 = ((void*)0);
  CClassNode* cc;
  int num1, num2, r;
  OnigUChar buf[7 * 2];


  num1 = (env->enc)->code_to_mbc(0x0D,buf,env->enc);
  if (num1 < 0) return num1;
  num2 = (env->enc)->code_to_mbc(0x0A,buf + num1,env->enc);
  if (num2 < 0) return num2;
  left = node_new_str_raw(buf, buf + num1 + num2);
  if ((((void*)(left)) == (void*)0)) goto err;


  right = node_new_cclass();
  if ((((void*)(right)) == (void*)0)) goto err;
  cc = (&((right)->u.cclass));
  if (((env->enc)->min_enc_len) > 1) {
    r = add_code_range(&(cc->mbuf), env, 0x0A, 0x0D);
    if (r != 0) goto err;
  }
  else {
    bitset_set_range(env, cc->bs, 0x0A, 0x0D);
  }


  if (((env->enc)->flags & 1U)) {

    r = add_code_range(&(cc->mbuf), env, 0x85, 0x85);
    if (r != 0) goto err;
    r = add_code_range(&(cc->mbuf), env, 0x2028, 0x2029);
    if (r != 0) goto err;
  }


  target1 = onig_node_new_alt(right, ((Node* )0));
  if ((((void*)(target1)) == (void*)0)) goto err;
  right = ((void*)0);
  target2 = onig_node_new_alt(left, target1);
  if ((((void*)(target2)) == (void*)0)) goto err;
  left = ((void*)0);
  target1 = ((void*)0);


  *np = node_new_enclose((1<<2));
  if ((((void*)(*np)) == (void*)0)) goto err;
  (&((*np)->u.enclose))->target = target2;
  return 0;

 err:
  onig_node_free(left);
  onig_node_free(right);
  onig_node_free(target1);
  onig_node_free(target2);
  return -5;
}

static int
propname2ctype(ScanEnv* env, const char* propname)
{
  OnigUChar* name = (OnigUChar* )propname;
  int ctype = env->enc->property_name_to_ctype((&OnigEncodingASCII),
      name, name + strlen(propname));
  return ctype;
}

static int
node_extended_grapheme_cluster(Node** np, ScanEnv* env)
{
  Node* tmp = ((void*)0);
  Node* np1 = ((void*)0);
  Node* list = ((void*)0);
  Node* list2 = ((void*)0);
  Node* alt = ((void*)0);
  Node* alt2 = ((void*)0);
  BBuf *pbuf1 = ((void*)0);
  int r = 0;
  int num1;
  OnigUChar buf[7 * 2];
  OnigOptionType option;


  if (((env->enc)->flags & 1U)) {

    CClassNode* cc;
    OnigCodePoint sb_out = (((env->enc)->min_enc_len) > 1) ? 0x00 : 0x80;
    int extend = propname2ctype(env, "Grapheme_Cluster_Break=Extend");






    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, extend, 0, 0, env);
    if (r != 0) goto err;
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=SpacingMark"), 0, 0, env);
    if (r != 0) goto err;
    r = add_code_range(&(cc->mbuf), env, 0x200D, 0x200D);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list = tmp;
    np1 = ((void*)0);



    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=Control"), 1, 0, env);
    if (r != 0) goto err;
    if (((env->enc)->min_enc_len) > 1) {
      BBuf *pbuf2 = ((void*)0);
      r = add_code_range(&pbuf1, env, 0x0a, 0x0a);
      if (r != 0) goto err;
      r = add_code_range(&pbuf1, env, 0x0d, 0x0d);
      if (r != 0) goto err;
      r = and_code_range_buf(cc->mbuf, 0, pbuf1, 1, &pbuf2, env);
      if (r != 0) {
 bbuf_free(pbuf2);
 goto err;
      }
      bbuf_free(pbuf1);
      pbuf1 = ((void*)0);
      bbuf_free(cc->mbuf);
      cc->mbuf = pbuf2;
    }
    else {
      (cc->bs)[(int )(0x0a) / ((int )sizeof(Bits) * 8)] &= ~((1U << ((int )(0x0a) % ((int )sizeof(Bits) * 8))));
      (cc->bs)[(int )(0x0d) / ((int )sizeof(Bits) * 8)] &= ~((1U << ((int )(0x0d) % ((int )sizeof(Bits) * 8))));
    }

    tmp = onig_node_new_alt(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    np1 = ((void*)0);
    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=T"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(1, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = onig_node_new_alt(np1, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    np1 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=L"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(1, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = onig_node_new_alt(np1, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    np1 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=T"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=LVT"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=L"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=T"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=V"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=LV"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=L"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=T"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=V"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(1, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=L"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);





    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Modifier"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, 1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, extend, 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Base_GAZ"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt2 = tmp;
    list2 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, extend, 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    {
      static const OnigCodePoint ranges[] = {
 13,
 0x1F308, 0x1F308,
 0x1F33E, 0x1F33E,
 0x1F373, 0x1F373,
 0x1F393, 0x1F393,
 0x1F3A4, 0x1F3A4,
 0x1F3A8, 0x1F3A8,
 0x1F3EB, 0x1F3EB,
 0x1F3ED, 0x1F3ED,
 0x1F4BB, 0x1F4BC,
 0x1F527, 0x1F527,
 0x1F52C, 0x1F52C,
 0x1F680, 0x1F680,
 0x1F692, 0x1F692,
      };
      r = add_ctype_to_cc_by_range(cc, -1, 0, env, sb_out, ranges);
      if (r != 0) goto err;
    }
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=Glue_After_Zwj"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt2 = tmp;
    list2 = ((void*)0);




    r = (env->enc)->code_to_mbc(0xfe0f,buf,env->enc);
    if (r < 0) goto err;
    np1 = node_new_str_raw(buf, buf + r);
    if ((((void*)(np1)) == (void*)0)) goto err;

    tmp = node_new_quantifier(0, 1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    {
      static const OnigCodePoint ranges[] = {
 4,
 0x2640, 0x2640,
 0x2642, 0x2642,
 0x2695, 0x2696,
 0x2708, 0x2708,
      };
      r = add_ctype_to_cc_by_range(cc, -1, 0, env, sb_out, ranges);
      if (r != 0) goto err;
    }

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt2 = tmp;
    list2 = ((void*)0);

    tmp = node_new_list(alt2, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    alt2 = ((void*)0);


    r = (env->enc)->code_to_mbc(0x200D,buf,env->enc);
    if (r < 0) goto err;
    np1 = node_new_str_raw(buf, buf + r);
    if ((((void*)(np1)) == (void*)0)) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = list2;
    np1 = tmp;
    list2 = ((void*)0);

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Modifier"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, 1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, extend, 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    {
      static const OnigCodePoint ranges[] = {
 8,
 0x1F3C2, 0x1F3C2,
 0x1F3C7, 0x1F3C7,
 0x1F3CC, 0x1F3CC,
 0x1F3F3, 0x1F3F3,
 0x1F441, 0x1F441,
 0x1F46F, 0x1F46F,
 0x1F574, 0x1F574,
 0x1F6CC, 0x1F6CC,
      };
      r = add_ctype_to_cc_by_range(cc, -1, 0, env, sb_out, ranges);
      if (r != 0) goto err;
    }
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Base"), 0, 0, env);
    if (r != 0) goto err;
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Base_GAZ"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);






    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Modifier"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, 1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=Glue_After_Zwj"), 0, 0, env);
    if (r != 0) goto err;
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=E_Base_GAZ"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    r = (env->enc)->code_to_mbc(0x200D,buf,env->enc);
    if (r < 0) goto err;
    np1 = node_new_str_raw(buf, buf + r);
    if ((((void*)(np1)) == (void*)0)) goto err;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_code_range(&(cc->mbuf), env, 0x1F1E6, 0x1F1FF);
    if (r != 0) goto err;

    tmp = node_new_quantifier(2, 2, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);

    tmp = node_new_list(alt, list);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list = tmp;
    alt = ((void*)0);


    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=Prepend"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(0, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list = tmp;
    np1 = ((void*)0);


    np1 = node_new_anychar();
    if ((((void*)(np1)) == (void*)0)) goto err;

    option = env->option;
    (0) ? ((option) &= ~(((1U << 1) << 1))) : ((option) |= (((1U << 1) << 1)));
    tmp = node_new_option(option);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.enclose))->target = np1;
    np1 = tmp;

    tmp = onig_node_new_alt(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    np1 = ((void*)0);


    r = (env->enc)->code_to_mbc(0x200D,buf,env->enc);
    if (r < 0) goto err;
    np1 = node_new_str_raw(buf, buf + r);
    if ((((void*)(np1)) == (void*)0)) goto err;

    tmp = node_new_quantifier(0, 1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, ((Node* )0));
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    np1 = node_new_cclass();
    if ((((void*)(np1)) == (void*)0)) goto err;
    cc = (&((np1)->u.cclass));
    r = add_ctype_to_cc(cc, propname2ctype(env, "Grapheme_Cluster_Break=Prepend"), 0, 0, env);
    if (r != 0) goto err;

    tmp = node_new_quantifier(1, -1, 0);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.qtfr))->target = np1;
    np1 = tmp;

    tmp = node_new_list(np1, list2);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    list2 = tmp;
    np1 = ((void*)0);

    tmp = onig_node_new_alt(list2, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list2 = ((void*)0);

    tmp = onig_node_new_alt(list, alt);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    alt = tmp;
    list = ((void*)0);
  }
  else

  {

    np1 = node_new_anychar();
    if ((((void*)(np1)) == (void*)0)) goto err;

    option = env->option;
    (0) ? ((option) &= ~(((1U << 1) << 1))) : ((option) |= (((1U << 1) << 1)));
    tmp = node_new_option(option);
    if ((((void*)(tmp)) == (void*)0)) goto err;
    (&((tmp)->u.enclose))->target = np1;
    np1 = tmp;

    alt = onig_node_new_alt(np1, ((Node* )0));
    if ((((void*)(alt)) == (void*)0)) goto err;
    np1 = ((void*)0);
  }


  r = (env->enc)->code_to_mbc(0x0D,buf,env->enc);
  if (r < 0) goto err;
  num1 = r;
  r = (env->enc)->code_to_mbc(0x0A,buf + num1,env->enc);
  if (r < 0) goto err;
  np1 = node_new_str_raw(buf, buf + num1 + r);
  if ((((void*)(np1)) == (void*)0)) goto err;

  tmp = onig_node_new_alt(np1, alt);
  if ((((void*)(tmp)) == (void*)0)) goto err;
  alt = tmp;
  np1 = ((void*)0);


  tmp = node_new_enclose((1<<2));
  if ((((void*)(tmp)) == (void*)0)) goto err;
  (&((tmp)->u.enclose))->target = alt;
  np1 = tmp;


  if (((env->enc)->flags & 1U)) {

    option = env->option;
    (1) ? ((option) &= ~(1U)) : ((option) |= (1U));
    *np = node_new_option(option);
    if ((((void*)(*np)) == (void*)0)) goto err;
    (&((*np)->u.enclose))->target = np1;
  }
  else

  {
    *np = np1;
  }
  return 0;

 err:
  onig_node_free(np1);
  onig_node_free(list);
  onig_node_free(list2);
  onig_node_free(alt);
  onig_node_free(alt2);
  bbuf_free(pbuf1);
  return (r == 0) ? -5 : r;
}

static int
countbits(unsigned int bits)
{
  bits = (bits & 0x55555555) + ((bits >> 1) & 0x55555555);
  bits = (bits & 0x33333333) + ((bits >> 2) & 0x33333333);
  bits = (bits & 0x0f0f0f0f) + ((bits >> 4) & 0x0f0f0f0f);
  bits = (bits & 0x00ff00ff) + ((bits >> 8) & 0x00ff00ff);
  return (bits & 0x0000ffff) + ((bits >>16) & 0x0000ffff);
}

static int
is_onechar_cclass(CClassNode* cc, OnigCodePoint* code)
{
  const OnigCodePoint not_found = (~((OnigCodePoint )0));
  OnigCodePoint c = not_found;
  int i;
  BBuf *bbuf = cc->mbuf;

  if (((((cc)->flags) & ((1<<0))) != 0)) return 0;


  if ((((void*)(bbuf)) != (void*)0)) {
    OnigCodePoint n, *data;
    n = *((OnigCodePoint* )(bbuf->p));
    data = (OnigCodePoint* )(bbuf->p) + 1;
    if ((n == 1) && (data[0] == data[1])) {

      c = data[0];
      if (((c < (1 << 8)) && ((cc->bs)[(int )(c) / ((int )sizeof(Bits) * 8)] & (1U << ((int )(c) % ((int )sizeof(Bits) * 8)))))) {

 c = not_found;
      }
    }
    else {
      return 0;
    }
  }


  for (i = 0; i < ((1 << 8) / ((int )sizeof(Bits) * 8)); i++) {
    Bits b1 = cc->bs[i];
    if (b1 != 0) {
      if (((b1 & (b1 - 1)) == 0) && (c == not_found)) {
 c = ((int )sizeof(Bits) * 8) * i + countbits(b1 - 1);
      } else {
 return 0;
      }
    }
  }

  if (c != not_found) {
    *code = c;
    return 1;
  }


  return 0;
}


static int
parse_exp(Node** np, OnigToken* tok, int term,
   OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r, len, group = 0;
  Node* qn;
  Node** targetp;

  *np = ((void*)0);
  if (tok->type == (enum TokenSyms )term)
    goto end_of_token;

  switch (tok->type) {
  case TK_ALT:
  case TK_EOT:
  end_of_token:
    *np = node_new_empty();
    return tok->type;
    break;

  case TK_SUBEXP_OPEN:
    r = parse_enclose(np, tok, TK_SUBEXP_CLOSE, src, end, env);
    if (r < 0) return r;
    if (r == 1) group = 1;
    else if (r == 2) {
      Node* target;
      OnigOptionType prev = env->option;

      env->option = (&((*np)->u.enclose))->option;
      r = fetch_token(tok, src, end, env);
      if (r < 0) {
 env->option = prev;
 return r;
      }
      r = parse_subexp(&target, tok, term, src, end, env);
      env->option = prev;
      if (r < 0) {
 onig_node_free(target);
 return r;
      }
      (&((*np)->u.enclose))->target = target;
      return tok->type;
    }
    break;

  case TK_SUBEXP_CLOSE:
    if (! (((env->syntax)->behavior & ((1U<<2))) != 0))
      return -116;

    if (tok->escaped) goto tk_raw_byte;
    else goto tk_byte;
    break;

  case TK_LINEBREAK:
    r = node_linebreak(np, env);
    if (r < 0) return r;
    break;

  case TK_EXTENDED_GRAPHEME_CLUSTER:
    r = node_extended_grapheme_cluster(np, env);
    if (r < 0) return r;
    break;

  case TK_KEEP:
    *np = onig_node_new_anchor((1<<16));
    if ((((void*)(*np)) == (void*)0)) return -5;
    break;

  case TK_STRING:
  tk_byte:
    {
      *np = node_new_str(tok->backp, *src);
      if ((((void*)(*np)) == (void*)0)) return -5;

    string_loop:
      while (1) {
 r = fetch_token(tok, src, end, env);
 if (r < 0) return r;
 if (r == TK_STRING) {
   r = onig_node_str_cat(*np, tok->backp, *src);
 }

 else if (r == TK_CODE_POINT) {
   r = node_str_cat_codepoint(*np, env->enc, tok->u.code);
 }

 else {
   break;
 }
 if (r < 0) return r;
      }

    string_end:
      targetp = np;
      goto repeat;
    }
    break;

  case TK_RAW_BYTE:
  tk_raw_byte:
    {
      *np = node_new_str_raw_char((OnigUChar )tok->u.c);
      if ((((void*)(*np)) == (void*)0)) return -5;
      len = 1;
      while (1) {
 if (len >= ((env->enc)->min_enc_len)) {
   if (len == ((env->enc->max_enc_len == env->enc->min_enc_len) ? env->enc->min_enc_len : onigenc_mbclen_approximate((&((*np)->u.str))->s,(&((*np)->u.str))->end,env->enc))) {
     r = fetch_token(tok, src, end, env);
     (*np)->u.str.flag &= ~(1<<0);
     goto string_end;
   }
 }

 r = fetch_token(tok, src, end, env);
 if (r < 0) return r;
 if (r != TK_RAW_BYTE) {
   return -206;
 }

 r = node_str_cat_char(*np, (OnigUChar )tok->u.c);
 if (r < 0) return r;

 len++;
      }
    }
    break;

  case TK_CODE_POINT:
    {
      *np = node_new_empty();
      if ((((void*)(*np)) == (void*)0)) return -5;
      r = node_str_cat_codepoint(*np, env->enc, tok->u.code);
      if (r != 0) return r;



      goto string_loop;

    }
    break;

  case TK_QUOTE_OPEN:
    {
      OnigCodePoint end_op[2];
      OnigUChar *qstart, *qend, *nextp;

      end_op[0] = (OnigCodePoint )(env->syntax)->meta_char_table.esc;
      end_op[1] = (OnigCodePoint )'E';
      qstart = *src;
      qend = find_str_position(end_op, 2, qstart, end, &nextp, env->enc);
      if ((((void*)(qend)) == (void*)0)) {
 nextp = qend = end;
      }
      *np = node_new_str(qstart, qend);
      if ((((void*)(*np)) == (void*)0)) return -5;
      *src = nextp;
    }
    break;

  case TK_CHAR_TYPE:
    {
      switch (tok->u.prop.ctype) {
      case 12:
 *np = node_new_ctype(tok->u.prop.ctype, tok->u.prop.not,
        ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)));
 if ((((void*)(*np)) == (void*)0)) return -5;
 break;

      case 9:
      case 4:
      case 11:
 {
   CClassNode* cc;

   *np = node_new_cclass();
   if ((((void*)(*np)) == (void*)0)) return -5;
   cc = (&((*np)->u.cclass));
   r = add_ctype_to_cc(cc, tok->u.prop.ctype, 0,
       ((env->option) & (((((((((((((1U << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), env);
   if (r != 0) return r;
   if (tok->u.prop.not != 0) (((cc)->flags) |= ((1<<0)));
 }
 break;

      default:
 return -11;
 break;
      }
    }
    break;

  case TK_CHAR_PROPERTY:
    r = parse_char_property(np, tok, src, end, env);
    if (r != 0) return r;
    break;

  case TK_CC_OPEN:
    {
      Node *asc_node;
      CClassNode* cc;
      OnigCodePoint code;

      r = parse_char_class(np, &asc_node, tok, src, end, env);
      if (r != 0) {
 onig_node_free(asc_node);
 return r;
      }

      cc = (&((*np)->u.cclass));
      if (is_onechar_cclass(cc, &code)) {
 onig_node_free(*np);
 onig_node_free(asc_node);
 *np = node_new_empty();
 if ((((void*)(*np)) == (void*)0)) return -5;
 r = node_str_cat_codepoint(*np, env->enc, code);
 if (r != 0) return r;
 goto string_loop;
      }
      if (((env->option) & 1U)) {
 r = cclass_case_fold(np, cc, (&((asc_node)->u.cclass)), env);
 if (r != 0) {
   onig_node_free(asc_node);
   return r;
 }
      }
      onig_node_free(asc_node);
    }
    break;

  case TK_ANYCHAR:
    *np = node_new_anychar();
    if ((((void*)(*np)) == (void*)0)) return -5;
    break;

  case TK_ANYCHAR_ANYTIME:
    *np = node_new_anychar();
    if ((((void*)(*np)) == (void*)0)) return -5;
    qn = node_new_quantifier(0, -1, 0);
    if ((((void*)(qn)) == (void*)0)) return -5;
    (&((qn)->u.qtfr))->target = *np;
    *np = qn;
    break;

  case TK_BACKREF:
    len = tok->u.backref.num;
    *np = node_new_backref(len,
     (len > 1 ? tok->u.backref.refs : &(tok->u.backref.ref1)),
      tok->u.backref.by_name,

      tok->u.backref.exist_level,
      tok->u.backref.level,

      env);
    if ((((void*)(*np)) == (void*)0)) return -5;
    break;


  case TK_CALL:
    {
      int gnum = tok->u.call.gnum;

      if (gnum < 0 || tok->u.call.rel != 0) {
 if (gnum > 0) gnum--;
 gnum = ((env)->num_mem + 1 + (gnum));
 if (gnum <= 0)
   return -208;
      }
      *np = node_new_call(tok->u.call.name, tok->u.call.name_end, gnum);
      if ((((void*)(*np)) == (void*)0)) return -5;
      env->num_call++;
    }
    break;


  case TK_ANCHOR:
    *np = onig_node_new_anchor(tok->u.anchor.subtype);
    if ((((void*)(*np)) == (void*)0)) return -5;
    (&((*np)->u.anchor))->ascii_range = tok->u.anchor.ascii_range;
    break;

  case TK_OP_REPEAT:
  case TK_INTERVAL:
    if ((((env->syntax)->behavior & ((1U<<0))) != 0)) {
      if ((((env->syntax)->behavior & ((1U<<1))) != 0))
 return -113;
      else
 *np = node_new_empty();
    }
    else {
      goto tk_byte;
    }
    break;

  default:
    return -11;
    break;
  }

  {
    targetp = np;

  re_entry:
    r = fetch_token(tok, src, end, env);
    if (r < 0) return r;

  repeat:
    if (r == TK_OP_REPEAT || r == TK_INTERVAL) {
      if (0)
 return -114;

      qn = node_new_quantifier(tok->u.repeat.lower, tok->u.repeat.upper,
          (r == TK_INTERVAL ? 1 : 0));
      if ((((void*)(qn)) == (void*)0)) return -5;
      (&((qn)->u.qtfr))->greedy = tok->u.repeat.greedy;
      r = set_quantifier(qn, *targetp, group, env);
      if (r < 0) {
 onig_node_free(qn);
 return r;
      }

      if (tok->u.repeat.possessive != 0) {
 Node* en;
 en = node_new_enclose((1<<2));
 if ((((void*)(en)) == (void*)0)) {
   onig_node_free(qn);
   return -5;
 }
 (&((en)->u.enclose))->target = qn;
 qn = en;
      }

      if (r == 0) {
 *targetp = qn;
      }
      else if (r == 1) {
 onig_node_free(qn);
      }
      else if (r == 2) {
 Node *tmp;

 *targetp = node_new_list(*targetp, ((void*)0));
 if ((((void*)(*targetp)) == (void*)0)) {
   onig_node_free(qn);
   return -5;
 }
 tmp = ((&((*targetp)->u.cons))->cdr) = node_new_list(qn, ((void*)0));
 if ((((void*)(tmp)) == (void*)0)) {
   onig_node_free(qn);
   return -5;
 }
 targetp = &(((&((tmp)->u.cons))->car));
      }
      goto re_entry;
    }
  }

  return r;
}

static int
parse_branch(Node** top, OnigToken* tok, int term,
      OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r;
  Node *node, **headp;

  *top = ((void*)0);
  r = parse_exp(&node, tok, term, src, end, env);
  if (r < 0) {
    onig_node_free(node);
    return r;
  }

  if (r == TK_EOT || r == term || r == TK_ALT) {
    *top = node;
  }
  else {
    *top = node_new_list(node, ((void*)0));
    headp = &(((&((*top)->u.cons))->cdr));
    while (r != TK_EOT && r != term && r != TK_ALT) {
      r = parse_exp(&node, tok, term, src, end, env);
      if (r < 0) {
 onig_node_free(node);
 return r;
      }

      if (((node)->u.base.type) == 8) {
 *headp = node;
 while ((((void*)(((&((node)->u.cons))->cdr))) != (void*)0)) node = ((&((node)->u.cons))->cdr);
 headp = &(((&((node)->u.cons))->cdr));
      }
      else {
 *headp = node_new_list(node, ((void*)0));
 headp = &(((&((*headp)->u.cons))->cdr));
      }
    }
  }

  return r;
}


static int
parse_subexp(Node** top, OnigToken* tok, int term,
      OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r;
  Node *node, **headp;

  *top = ((void*)0);
  env->parse_depth++;
  if (env->parse_depth > ParseDepthLimit)
    return -16;
  r = parse_branch(&node, tok, term, src, end, env);
  if (r < 0) {
    onig_node_free(node);
    return r;
  }

  if (r == term) {
    *top = node;
  }
  else if (r == TK_ALT) {
    *top = onig_node_new_alt(node, ((void*)0));
    headp = &(((&((*top)->u.cons))->cdr));
    while (r == TK_ALT) {
      r = fetch_token(tok, src, end, env);
      if (r < 0) return r;
      r = parse_branch(&node, tok, term, src, end, env);
      if (r < 0) {
 onig_node_free(node);
 return r;
      }

      *headp = onig_node_new_alt(node, ((void*)0));
      headp = &(((&((*headp)->u.cons))->cdr));
    }

    if (tok->type != (enum TokenSyms )term)
      goto err;
  }
  else {
    onig_node_free(node);
  err:
    if (term == TK_SUBEXP_CLOSE)
      return -117;
    else
      return -11;
  }

  env->parse_depth--;
  return r;
}

static int
parse_regexp(Node** top, OnigUChar** src, OnigUChar* end, ScanEnv* env)
{
  int r;
  OnigToken tok;

  r = fetch_token(&tok, src, end, env);
  if (r < 0) return r;
  r = parse_subexp(top, &tok, TK_EOT, src, end, env);
  if (r < 0) return r;


  if (env->num_call > 0) {

    const int num = 0;
    Node* np;
    np = node_new_enclose_memory(env->option, 0);
    if ((((void*)(np)) == (void*)0)) return -5;
    (&((np)->u.enclose))->regnum = num;
    (&((np)->u.enclose))->target = *top;
    r = scan_env_set_mem_node(env, num, np);
    if (r != 0) {
 onig_node_free(np);
 return r;
    }
    *top = np;
  }

  return 0;
}

extern int
onig_parse_make_tree(Node** root, const OnigUChar* pattern, const OnigUChar* end,
       regex_t* reg, ScanEnv* env)
{
  int r;
  OnigUChar* p;


  names_clear(reg);


  scan_env_clear(env);
  env->option = reg->options;
  env->case_fold_flag = reg->case_fold_flag;
  env->enc = reg->enc;
  env->syntax = reg->syntax;
  env->pattern = (OnigUChar* )pattern;
  env->pattern_end = (OnigUChar* )end;
  env->reg = reg;

  *root = ((void*)0);
  p = (OnigUChar* )pattern;
  r = parse_regexp(root, &p, (OnigUChar* )end, env);
  reg->num_mem = env->num_mem;
  return r;
}

extern void
onig_scan_env_set_error_string(ScanEnv* env, int ecode ,
    OnigUChar* arg, OnigUChar* arg_end)
{
  env->error = arg;
  env->error_end = arg_end;
}
