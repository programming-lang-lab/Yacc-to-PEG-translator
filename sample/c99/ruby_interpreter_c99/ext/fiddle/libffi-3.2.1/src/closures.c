typedef unsigned long ffi_arg;
typedef signed long ffi_sarg;



typedef enum ffi_abi {
  FFI_FIRST_ABI = 0,
  FFI_SYSV,
  FFI_UNIX64,
  FFI_THISCALL,
  FFI_FASTCALL,
  FFI_STDCALL,
  FFI_PASCAL,
  FFI_REGISTER,
  FFI_LAST_ABI,



  FFI_DEFAULT_ABI = FFI_UNIX64


} ffi_abi;







typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;






typedef struct _ffi_type
{
  size_t size;
  unsigned short alignment;
  unsigned short type;
  struct _ffi_type **elements;
} ffi_type;
extern ffi_type ffi_type_void;
extern ffi_type ffi_type_uint8;
extern ffi_type ffi_type_sint8;
extern ffi_type ffi_type_uint16;
extern ffi_type ffi_type_sint16;
extern ffi_type ffi_type_uint32;
extern ffi_type ffi_type_sint32;
extern ffi_type ffi_type_uint64;
extern ffi_type ffi_type_sint64;
extern ffi_type ffi_type_float;
extern ffi_type ffi_type_double;
extern ffi_type ffi_type_pointer;


extern ffi_type ffi_type_longdouble;





extern ffi_type ffi_type_complex_float;
extern ffi_type ffi_type_complex_double;

extern ffi_type ffi_type_complex_longdouble;






typedef enum {
  FFI_OK = 0,
  FFI_BAD_TYPEDEF,
  FFI_BAD_ABI
} ffi_status;

typedef unsigned FFI_TYPE;

typedef struct {
  ffi_abi abi;
  unsigned nargs;
  ffi_type **arg_types;
  ffi_type *rtype;
  unsigned bytes;
  unsigned flags;



} ffi_cif;







ffi_status ffi_prep_cif_core(ffi_cif *cif,
        ffi_abi abi,
        unsigned int isvariadic,
        unsigned int nfixedargs,
        unsigned int ntotalargs,
        ffi_type *rtype,
        ffi_type **atypes);
typedef union {
  ffi_sarg sint;
  ffi_arg uint;
  float flt;
  char data[8];
  void* ptr;
} ffi_raw;
typedef ffi_raw ffi_java_raw;



void ffi_raw_call (ffi_cif *cif,
     void (*fn)(void),
     void *rvalue,
     ffi_raw *avalue);

void ffi_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_raw *raw);
void ffi_raw_to_ptrarray (ffi_cif *cif, ffi_raw *raw, void **args);
size_t ffi_raw_size (ffi_cif *cif);





void ffi_java_raw_call (ffi_cif *cif,
   void (*fn)(void),
   void *rvalue,
   ffi_java_raw *avalue);

void ffi_java_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_java_raw *raw);
void ffi_java_raw_to_ptrarray (ffi_cif *cif, ffi_java_raw *raw, void **args);
size_t ffi_java_raw_size (ffi_cif *cif);
typedef struct {




  char tramp[24];

  ffi_cif *cif;
  void (*fun)(ffi_cif*,void*,void**,void*);
  void *user_data;

} ffi_closure ;







void *ffi_closure_alloc (size_t size, void **code);
void ffi_closure_free (void *);

ffi_status
ffi_prep_closure (ffi_closure*,
    ffi_cif *,
    void (*fun)(ffi_cif*,void*,void**,void*),
    void *user_data);

ffi_status
ffi_prep_closure_loc (ffi_closure*,
        ffi_cif *,
        void (*fun)(ffi_cif*,void*,void**,void*),
        void *user_data,
        void*codeloc);




typedef struct {




  char tramp[24];

  ffi_cif *cif;







  void (*translate_args)(ffi_cif*,void*,void**,void*);
  void *this_closure;



  void (*fun)(ffi_cif*,void*,ffi_raw*,void*);
  void *user_data;

} ffi_raw_closure;

typedef struct {




  char tramp[24];


  ffi_cif *cif;







  void (*translate_args)(ffi_cif*,void*,void**,void*);
  void *this_closure;



  void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*);
  void *user_data;

} ffi_java_raw_closure;

ffi_status
ffi_prep_raw_closure (ffi_raw_closure*,
        ffi_cif *cif,
        void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
        void *user_data);

ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure*,
     ffi_cif *cif,
     void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
     void *user_data,
     void *codeloc);

ffi_status
ffi_prep_java_raw_closure (ffi_java_raw_closure*,
             ffi_cif *cif,
             void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
             void *user_data);

ffi_status
ffi_prep_java_raw_closure_loc (ffi_java_raw_closure*,
          ffi_cif *cif,
          void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
          void *user_data,
          void *codeloc);





ffi_status ffi_prep_cif(ffi_cif *cif,
   ffi_abi abi,
   unsigned int nargs,
   ffi_type *rtype,
   ffi_type **atypes);

ffi_status ffi_prep_cif_var(ffi_cif *cif,
       ffi_abi abi,
       unsigned int nfixedargs,
       unsigned int ntotalargs,
       ffi_type *rtype,
       ffi_type **atypes);

void ffi_call(ffi_cif *cif,
       void (*fn)(void),
       void *rvalue,
       void **avalue);












extern void *alloca (size_t __size) ;














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
ffi_status ffi_prep_cif_machdep(ffi_cif *cif);
ffi_status ffi_prep_cif_machdep_var(ffi_cif *cif,
  unsigned int nfixedargs, unsigned int ntotalargs);


typedef struct
{
  ffi_cif *cif;
  void *rvalue;
  void **avalue;
} extended_cif;
typedef unsigned int UINT8 ;
typedef signed int SINT8 ;
typedef unsigned int UINT16 ;
typedef signed int SINT16 ;
typedef unsigned int UINT32 ;
typedef signed int SINT32 ;
typedef unsigned int UINT64 ;
typedef signed int SINT64 ;


typedef float FLOAT32;


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
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };






struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };



struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    ;






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
      size_t __count, unsigned int __flags);





extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
    __off64_t *__offout, size_t __len,
    unsigned int __flags);





extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
        unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) ;





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int open64 (const char *__file, int __oflag, ...) ;
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     ;
extern int creat (const char *__file, mode_t __mode) ;
extern int creat64 (const char *__file, mode_t __mode) ;
extern int lockf (int __fd, int __cmd, off_t __len);
extern int lockf64 (int __fd, int __cmd, off64_t __len);







extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);












extern int *__errno_location (void)  ;







extern char *program_invocation_name;
extern char *program_invocation_short_name;





typedef int error_t;




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


struct mntent
  {
    char *mnt_fsname;
    char *mnt_dir;
    char *mnt_type;
    char *mnt_opts;
    int mnt_freq;
    int mnt_passno;
  };




extern FILE *setmntent (const char *__file, const char *__mode) ;




extern struct mntent *getmntent (FILE *__stream) ;



extern struct mntent *getmntent_r (FILE *restrict __stream,
       struct mntent *restrict __result,
       char *restrict __buffer,
       int __bufsize) ;




extern int addmntent (FILE *restrict __stream,
        const struct mntent *restrict __mnt) ;


extern int endmntent (FILE *__stream) ;



extern char *hasmntopt (const struct mntent *__mnt,
   const char *__opt) ;













typedef __sig_atomic_t sig_atomic_t;




union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;

     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,
  SI_TKILL = -6,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};









typedef __sigval_t sigval_t;






typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     ;






extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;
extern int kill (__pid_t __pid, int __sig) ;






extern int killpg (__pid_t __pgrp, int __sig) ;



extern int raise (int __sig) ;



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigpause (int __sig) ;
extern int sigblock (int __mask)  ;


extern int sigsetmask (int __mask)  ;


extern int siggetmask (void)  ;
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set)  ;


extern int sigfillset (sigset_t *__set)  ;


extern int sigaddset (sigset_t *__set, int __signo)  ;


extern int sigdelset (sigset_t *__set, int __signo)  ;


extern int sigismember (const sigset_t *__set, int __signo)
      ;



extern int sigisemptyset (const sigset_t *__set)  ;


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right)  ;


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right)  ;





struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };


extern int sigprocmask (int __how, const sigset_t *restrict __set,
   sigset_t *restrict __oset) ;






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *restrict __act,
        struct sigaction *restrict __oact) ;


extern int sigpending (sigset_t *__set)  ;







extern int sigwait (const sigset_t *restrict __set, int *restrict __sig)
     ;







extern int sigwaitinfo (const sigset_t *restrict __set,
   siginfo_t *restrict __info) ;






extern int sigtimedwait (const sigset_t *restrict __set,
    siginfo_t *restrict __info,
    const struct timespec *restrict __timeout)
     ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;
extern const char *const _sys_siglist[(64 + 1)];
extern const char *const sys_siglist[(64 + 1)];




struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
   union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};


extern int sigreturn (struct sigcontext *__scp) ;










typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;


 typedef long long int greg_t;
typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
     unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;







extern int siginterrupt (int __sig, int __interrupt) ;


enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};



extern int sigaltstack (const stack_t *restrict __ss,
   stack_t *restrict __oss) ;





struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
      ;






extern int sighold (int __sig) ;


extern int sigrelse (int __sig) ;


extern int sigignore (int __sig) ;


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) ;







extern int pthread_sigmask (int __how,
       const __sigset_t *restrict __newmask,
       __sigset_t *restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) ;






extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;






struct sched_param
{
  int sched_priority;
};





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) ;


extern int unshare (int __flags) ;


extern int sched_getcpu (void) ;


extern int setns (int __fd, int __nstype) ;
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     ;
extern cpu_set_t *__sched_cpualloc (size_t __count)  ;
extern void __sched_cpufree (cpu_set_t *__set) ;
extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     ;


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) ;


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) ;


extern int sched_getscheduler (__pid_t __pid) ;


extern int sched_yield (void) ;


extern int sched_get_priority_max (int __algorithm) ;


extern int sched_get_priority_min (int __algorithm) ;


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) ;
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) ;


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) ;



struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) ;











struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};















struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
struct sigevent;
extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
      ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *restrict __s, size_t __maxsize,
   const char *restrict __format,
   const struct tm *restrict __tp) ;




extern char *strptime (const char *restrict __s,
         const char *restrict __fmt, struct tm *__tp)
     ;






extern size_t strftime_l (char *restrict __s, size_t __maxsize,
     const char *restrict __format,
     const struct tm *restrict __tp,
     locale_t __loc) ;



extern char *strptime_l (const char *restrict __s,
    const char *restrict __fmt, struct tm *__tp,
    locale_t __loc) ;





extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;




extern struct tm *gmtime_r (const time_t *restrict __timer,
       struct tm *restrict __tp) ;



extern struct tm *localtime_r (const time_t *restrict __timer,
          struct tm *restrict __tp) ;




extern char *asctime (const struct tm *__tp) ;


extern char *ctime (const time_t *__timer) ;






extern char *asctime_r (const struct tm *restrict __tp,
   char *restrict __buf) ;


extern char *ctime_r (const time_t *restrict __timer,
        char *restrict __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) ;
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year)  ;
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *restrict __evp,
    timer_t *restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *restrict __value,
     struct itimerspec *restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;





extern int timespec_get (struct timespec *__ts, int __base)
      ;
extern int getdate_err;
extern struct tm *getdate (const char *__string);
extern int getdate_r (const char *restrict __string,
        struct tm *restrict __resbufp);






typedef long int __jmp_buf[8];




enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
extern int pthread_create (pthread_t *restrict __newthread,
      const pthread_attr_t *restrict __attr,
      void *(*__start_routine) (void *),
      void *restrict __arg)  ;





extern void pthread_exit (void *__retval) ;







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) ;







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) ;



extern pthread_t pthread_self (void)  ;


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
   ;







extern int pthread_attr_init (pthread_attr_t *__attr)  ;


extern int pthread_attr_destroy (pthread_attr_t *__attr)
      ;


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
      ;


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
      ;



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
      ;


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
      ;



extern int pthread_attr_getschedparam (const pthread_attr_t *restrict __attr,
           struct sched_param *restrict __param)
      ;


extern int pthread_attr_setschedparam (pthread_attr_t *restrict __attr,
           const struct sched_param *restrict
           __param)  ;


extern int pthread_attr_getschedpolicy (const pthread_attr_t *restrict
     __attr, int *restrict __policy)
      ;


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
      ;


extern int pthread_attr_getinheritsched (const pthread_attr_t *restrict
      __attr, int *restrict __inherit)
      ;


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
      ;



extern int pthread_attr_getscope (const pthread_attr_t *restrict __attr,
      int *restrict __scope)
      ;


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
      ;


extern int pthread_attr_getstackaddr (const pthread_attr_t *restrict
          __attr, void **restrict __stackaddr)
       ;





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
       ;


extern int pthread_attr_getstacksize (const pthread_attr_t *restrict
          __attr, size_t *restrict __stacksize)
      ;




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
      ;



extern int pthread_attr_getstack (const pthread_attr_t *restrict __attr,
      void **restrict __stackaddr,
      size_t *restrict __stacksize)
      ;




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize)  ;





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
      ;



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
      ;


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
      ;



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
      ;




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
      ;







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
      ;


extern int pthread_getschedparam (pthread_t __target_thread,
      int *restrict __policy,
      struct sched_param *restrict __param)
      ;


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     ;




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
      ;


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
      ;





extern int pthread_getconcurrency (void) ;


extern int pthread_setconcurrency (int __level) ;







extern int pthread_yield (void) ;




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
      ;


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
      ;
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) ;
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t ;
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
                            ;
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
                         ;
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
                            ;
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
                         ;



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
                             

     

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) ;





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
      ;


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
      ;


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
      ;


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
      ;



extern int pthread_mutex_timedlock (pthread_mutex_t *restrict __mutex,
        const struct timespec *restrict
        __abstime)  ;



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
      ;



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      restrict __mutex,
      int *restrict __prioceiling)
      ;



extern int pthread_mutex_setprioceiling (pthread_mutex_t *restrict __mutex,
      int __prioceiling,
      int *restrict __old_ceiling)
      ;




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
      ;

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
      ;
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
      ;


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
      ;


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      restrict __attr,
      int *restrict __pshared)
      ;


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
      ;



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *restrict
          __attr, int *restrict __kind)
      ;




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
      ;



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       restrict __attr,
       int *restrict __protocol)
      ;



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
      ;


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          restrict __attr,
          int *restrict __prioceiling)
      ;


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
      ;



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
      ;

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
      ;



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
      ;

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
      ;
extern int pthread_rwlock_init (pthread_rwlock_t *restrict __rwlock,
    const pthread_rwlockattr_t *restrict
    __attr)  ;


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
   ;



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *restrict __rwlock,
           const struct timespec *restrict
           __abstime)  ;



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
      ;



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *restrict __rwlock,
           const struct timespec *restrict
           __abstime)  ;



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
      ;





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
      ;


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
      ;


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       restrict __attr,
       int *restrict __pshared)
      ;


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
      ;


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       restrict __attr,
       int *restrict __pref)
      ;


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref)  ;







extern int pthread_cond_init (pthread_cond_t *restrict __cond,
         const pthread_condattr_t *restrict __cond_attr)
      ;


extern int pthread_cond_destroy (pthread_cond_t *__cond)
      ;


extern int pthread_cond_signal (pthread_cond_t *__cond)
      ;


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
      ;






extern int pthread_cond_wait (pthread_cond_t *restrict __cond,
         pthread_mutex_t *restrict __mutex)
     ;
extern int pthread_cond_timedwait (pthread_cond_t *restrict __cond,
       pthread_mutex_t *restrict __mutex,
       const struct timespec *restrict __abstime)
     ;




extern int pthread_condattr_init (pthread_condattr_t *__attr)
      ;


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
      ;


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     restrict __attr,
     int *restrict __pshared)
      ;


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared)  ;



extern int pthread_condattr_getclock (const pthread_condattr_t *
          restrict __attr,
          __clockid_t *restrict __clock_id)
      ;


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
      ;
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
      ;


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
      ;






extern int pthread_barrier_init (pthread_barrier_t *restrict __barrier,
     const pthread_barrierattr_t *restrict
     __attr, unsigned int __count)
      ;


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
      ;


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
      ;



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
      ;


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
      ;


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        restrict __attr,
        int *restrict __pshared)
      ;


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
      ;
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
      ;


extern int pthread_key_delete (pthread_key_t __key) ;


extern void *pthread_getspecific (pthread_key_t __key) ;


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer)  ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
      ;
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) ;



int memfd_create (const char *__name, unsigned int __flags) ;



int mlock2 (const void *__addr, size_t __length, unsigned int __flags) ;





int pkey_alloc (unsigned int __flags, unsigned int __access_rights) ;



int pkey_set (int __key, unsigned int __access_rights) ;



int pkey_get (int __key) ;



int pkey_free (int __key) ;



int pkey_mprotect (void *__addr, size_t __len, int __prot, int __pkey) ;
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) ;
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) ;




extern int munmap (void *__addr, size_t __len) ;




extern int mprotect (void *__addr, size_t __len, int __prot) ;







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) ;



extern int posix_madvise (void *__addr, size_t __len, int __advice) ;




extern int mlock (const void *__addr, size_t __len) ;


extern int munlock (const void *__addr, size_t __len) ;




extern int mlockall (int __flags) ;



extern int munlockall (void) ;







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     ;
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) ;



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) ;




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);



struct statfs
  {
    __fsword_t f_type;
    __fsword_t f_bsize;

    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;







    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };


struct statfs64
  {
    __fsword_t f_type;
    __fsword_t f_bsize;
    __fsblkcnt64_t f_blocks;
    __fsblkcnt64_t f_bfree;
    __fsblkcnt64_t f_bavail;
    __fsfilcnt64_t f_files;
    __fsfilcnt64_t f_ffree;
    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };





extern int statfs (const char *__file, struct statfs *__buf)
      ;
extern int statfs64 (const char *__file, struct statfs64 *__buf)
      ;





extern int fstatfs (int __fildes, struct statfs *__buf)
      ;
extern int fstatfs64 (int __fildes, struct statfs64 *__buf)
      ;












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

static int selinux_enabled = -1;

static int
selinux_enabled_check (void)
{
  struct statfs sfs;
  FILE *f;
  char *buf = ((void*)0);
  size_t len = 0;

  if (statfs ("/selinux", &sfs) >= 0
      && (unsigned int) sfs.f_type == 0xf97cff8cU)
    return 1;
  f = fopen ("/proc/mounts", "r");
  if (f == ((void*)0))
    return 0;
  while (getline (&buf, &len, f) >= 0)
    {
      char *p = strchr (buf, ' ');
      if (p == ((void*)0))
        break;
      p = strchr (p + 1, ' ');
      if (p == ((void*)0))
        break;
      if (strncmp (p + 1, "selinuxfs ", 10) == 0)
        {
          free (buf);
          fclose (f);
          return 1;
        }
    }
  free (buf);
  fclose (f);
  return 0;
}
static void *dlmalloc(size_t);
static void dlfree(void*);
static void *dlcalloc(size_t, size_t) ;
static void *dlrealloc(void *, size_t) ;
static void *dlmemalign(size_t, size_t) ;
static void *dlvalloc(size_t) ;
static int dlmallopt(int, int) ;
static size_t dlmalloc_footprint(void) ;
static size_t dlmalloc_max_footprint(void) ;
static void** dlindependent_calloc(size_t, size_t, void**) ;
static void** dlindependent_comalloc(size_t, size_t*, void**) ;
static void *dlpvalloc(size_t) ;
static int dlmalloc_trim(size_t) ;
static size_t dlmalloc_usable_size(void*) ;
static void dlmalloc_stats(void) ;



static void *dlmmap(void *, size_t, int, int, int, off_t);
static int dlmunmap(void *, size_t);






void* dlmalloc(size_t);
void dlfree(void*);






void* dlcalloc(size_t, size_t);
void* dlrealloc(void*, size_t);
void* dlmemalign(size_t, size_t);






void* dlvalloc(size_t);
int dlmallopt(int, int);
size_t dlmalloc_footprint(void);
size_t dlmalloc_max_footprint(void);
void** dlindependent_calloc(size_t, size_t, void**);
void** dlindependent_comalloc(size_t, size_t*, void**);







void* dlpvalloc(size_t);
int dlmalloc_trim(size_t);
size_t dlmalloc_usable_size(void*);
void dlmalloc_stats(void);
static pthread_mutex_t magic_init_mutex = { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } };
struct malloc_chunk {
  size_t prev_foot;
  size_t head;
  struct malloc_chunk* fd;
  struct malloc_chunk* bk;
};

typedef struct malloc_chunk mchunk;
typedef struct malloc_chunk* mchunkptr;
typedef struct malloc_chunk* sbinptr;
typedef size_t bindex_t;
typedef unsigned int binmap_t;
typedef unsigned int flag_t;
struct malloc_tree_chunk {

  size_t prev_foot;
  size_t head;
  struct malloc_tree_chunk* fd;
  struct malloc_tree_chunk* bk;

  struct malloc_tree_chunk* child[2];
  struct malloc_tree_chunk* parent;
  bindex_t index;
};

typedef struct malloc_tree_chunk tchunk;
typedef struct malloc_tree_chunk* tchunkptr;
typedef struct malloc_tree_chunk* tbinptr;
struct malloc_segment {
  char* base;
  size_t size;
  struct malloc_segment* next;
  ptrdiff_t exec_offset;
};




typedef struct malloc_segment msegment;
typedef struct malloc_segment* msegmentptr;
struct malloc_state {
  binmap_t smallmap;
  binmap_t treemap;
  size_t dvsize;
  size_t topsize;
  char* least_addr;
  mchunkptr dv;
  mchunkptr top;
  size_t trim_check;
  size_t magic;
  mchunkptr smallbins[((32U)+1)*2];
  tbinptr treebins[(32U)];
  size_t footprint;
  size_t max_footprint;
  flag_t mflags;

  pthread_mutex_t mutex;

  msegment seg;
};

typedef struct malloc_state* mstate;
struct malloc_params {
  size_t magic;
  size_t page_size;
  size_t granularity;
  size_t mmap_threshold;
  size_t trim_threshold;
  flag_t default_mflags;
};

static struct malloc_params mparams;


static struct malloc_state _gm_;
static msegmentptr segment_holding(mstate m, char* addr) {
  msegmentptr sp = &m->seg;
  for (;;) {
    if (addr >= sp->base && addr < sp->base + sp->size)
      return sp;
    if ((sp = sp->next) == 0)
      return 0;
  }
}


static int has_segment_link(mstate m, msegmentptr ss) {
  msegmentptr sp = &m->seg;
  for (;;) {
    if ((char*)sp >= ss->base && (char*)sp < ss->base + ss->size)
      return 1;
    if ((sp = sp->next) == 0)
      return 0;
  }
}
static int init_mparams(void) {
  if (mparams.page_size == 0) {
    size_t s;

    mparams.mmap_threshold = (~(size_t)0);
    mparams.trim_threshold = ((size_t)2U * (size_t)1024U * (size_t)1024U);



    mparams.default_mflags = (2U)|(((size_t)1))|(4U);
    s = (size_t)0x58585858U;

    pthread_mutex_lock(&magic_init_mutex);;
    if (mparams.magic == 0) {
      mparams.magic = s;

      pthread_mutex_init(&(&_gm_)->mutex, ((void*)0));
      (&_gm_)->mflags = mparams.default_mflags;
    }
    pthread_mutex_unlock(&magic_init_mutex);;


    mparams.page_size = sysconf(_SC_PAGESIZE);
    mparams.granularity = ((((size_t)sysconf(_SC_PAGESIZE)) != 0)?
                           ((size_t)sysconf(_SC_PAGESIZE)) : mparams.page_size);
    if ((sizeof(size_t) != sizeof(char*)) ||
        ((~(size_t)0) < (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) ||
        (sizeof(int) < 4) ||
        (((size_t)8U) < (size_t)8U) ||
        ((((size_t)8U) & (((size_t)8U)-((size_t)1))) != 0) ||
        (((sizeof(mchunk)) & ((sizeof(mchunk))-((size_t)1))) != 0) ||
        ((mparams.granularity & (mparams.granularity-((size_t)1))) != 0) ||
        ((mparams.page_size & (mparams.page_size-((size_t)1))) != 0))
      abort();
  }
  return 0;
}


static int change_mparam(int param_number, int value) {
  size_t val = (size_t)value;
  init_mparams();
  switch(param_number) {
  case (-1):
    mparams.trim_threshold = val;
    return 1;
  case (-2):
    if (val >= mparams.page_size && ((val & (val-1)) == 0)) {
      mparams.granularity = val;
      return 1;
    }
    else
      return 0;
  case (-3):
    mparams.mmap_threshold = val;
    return 1;
  default:
    return 0;
  }
}
static void internal_malloc_stats(mstate m) {
  if (!(((mparams.page_size == 0 && init_mparams()) || ((m)->mflags & (2U)))? pthread_mutex_lock(&(m)->mutex) : 0)) {
    size_t maxfp = 0;
    size_t fp = 0;
    size_t used = 0;
                         ;
    if (((m)->top != 0)) {
      msegmentptr s = &m->seg;
      maxfp = m->max_footprint;
      fp = m->footprint;
      used = fp - (m->topsize + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))));

      while (s != 0) {
        mchunkptr q = (mchunkptr)((s->base) + ((((size_t)(((void*)((char*)(s->base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(s->base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1)))));
        while (((char*)(q) >= s->base && (char*)(q) < s->base + s->size) &&
               q != m->top && q->head != (((((size_t)1))|(((size_t)2)))|(sizeof(size_t)))) {
          if (!((q)->head & (((size_t)2))))
            used -= ((q)->head & ~(((((size_t)1))|(((size_t)2)))));
          q = ((mchunkptr)( ((char*)(q)) + ((q)->head & ~((((size_t)1))|(((size_t)2))))));
        }
        s = s->next;
      }
    }

    fprintf(stderr, "max system bytes = %10lu\n", (unsigned long)(maxfp));
    fprintf(stderr, "system bytes     = %10lu\n", (unsigned long)(fp));
    fprintf(stderr, "in use bytes     = %10lu\n", (unsigned long)(used));

    { if (((m)->mflags & (2U))) pthread_mutex_unlock(&(m)->mutex); };
  }
}
static void* mmap_alloc(mstate m, size_t nb) {
  size_t mmsize = (((nb + (((sizeof(size_t))<<2)+((sizeof(size_t))<<1)) + (((size_t)8U) - ((size_t)1))) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
  if (mmsize > nb) {
    char* mm = (char*)(dlmmap(0, (mmsize), (0x1|0x2), (0x02|0x20), -1, 0));
    if (mm != ((char*)(((void*)((~(size_t)0)))))) {
      size_t offset = ((((size_t)(((void*)((char*)(mm) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(mm) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))));
      size_t psize = mmsize - offset - (((sizeof(size_t))<<2));
      mchunkptr p = (mchunkptr)(mm + offset);
      p->prev_foot = offset | (((size_t)1));
      (p)->head = (psize|(((size_t)2)));
                                  ;
      ((mchunkptr)(((char*)(p)) + (psize)))->head = (((((size_t)1))|(((size_t)2)))|(sizeof(size_t)));
      ((mchunkptr)(((char*)(p)) + (psize+(sizeof(size_t)))))->head = 0;

      if (mm < m->least_addr)
        m->least_addr = mm;
      if ((m->footprint += mmsize) > m->max_footprint)
        m->max_footprint = m->footprint;
                                      ;
                               ;
      return ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
    }
  }
  return 0;
}


static mchunkptr mmap_resize(mstate m, mchunkptr oldp, size_t nb) {
  size_t oldsize = ((oldp)->head & ~(((((size_t)1))|(((size_t)2)))));
  if ((((nb) >> (3U)) < (32U)))
    return 0;

  if (oldsize >= nb + (sizeof(size_t)) &&
      (oldsize - nb) <= (mparams.granularity << 1))
    return oldp;
  else {
    size_t offset = oldp->prev_foot & ~(((size_t)1));
    size_t oldmmsize = oldsize + offset + (((sizeof(size_t))<<2));
    size_t newmmsize = (((nb + (((sizeof(size_t))<<2)+((sizeof(size_t))<<1)) + (((size_t)8U) - ((size_t)1))) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));

    char* cp = (char*)((void*)((~(size_t)0)));

    if (cp != ((char*)(((void*)((~(size_t)0)))))) {
      mchunkptr newp = (mchunkptr)(cp + offset);
      size_t psize = newmmsize - offset - (((sizeof(size_t))<<2));
      newp->head = (psize|(((size_t)2)));
                                     ;
      ((mchunkptr)(((char*)(newp)) + (psize)))->head = (((((size_t)1))|(((size_t)2)))|(sizeof(size_t)));
      ((mchunkptr)(((char*)(newp)) + (psize+(sizeof(size_t)))))->head = 0;

      if (cp < m->least_addr)
        m->least_addr = cp;
      if ((m->footprint += newmmsize - oldmmsize) > m->max_footprint)
        m->max_footprint = m->footprint;
                                  ;
      return newp;
    }
  }
  return 0;
}




static void init_top(mstate m, mchunkptr p, size_t psize) {

  size_t offset = ((((size_t)(((void*)((char*)(p) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(p) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))));
  p = (mchunkptr)((char*)p + offset);
  psize -= offset;

  m->top = p;
  m->topsize = psize;
  p->head = psize | (((size_t)1));

  ((mchunkptr)(((char*)(p)) + (psize)))->head = (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
  m->trim_check = mparams.trim_threshold;
}


static void init_bins(mstate m) {

  bindex_t i;
  for (i = 0; i < (32U); ++i) {
    sbinptr bin = ((sbinptr)((char*)&((m)->smallbins[(i)<<1])));
    bin->fd = bin->bk = bin;
  }
}
static void* prepend_alloc(mstate m, char* newbase, char* oldbase,
                           size_t nb) {
  mchunkptr p = (mchunkptr)((newbase) + ((((size_t)(((void*)((char*)(newbase) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(newbase) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1)))));
  mchunkptr oldfirst = (mchunkptr)((oldbase) + ((((size_t)(((void*)((char*)(oldbase) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(oldbase) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1)))));
  size_t psize = (char*)oldfirst - (char*)p;
  mchunkptr q = ((mchunkptr)(((char*)(p)) + (nb)));
  size_t qsize = psize - nb;
  ((p)->head = (nb|(((size_t)1))|(((size_t)2))));

                                    ;
                          ;
                                 ;


  if (oldfirst == m->top) {
    size_t tsize = m->topsize += qsize;
    m->top = q;
    q->head = tsize | (((size_t)1));
                         ;
  }
  else if (oldfirst == m->dv) {
    size_t dsize = m->dvsize += qsize;
    m->dv = q;
    ((q)->head = (dsize|(((size_t)1))), (((mchunkptr)((char*)(q) + (dsize)))->prev_foot = (dsize)));
  }
  else {
    if (!((oldfirst)->head & (((size_t)2)))) {
      size_t nsize = ((oldfirst)->head & ~(((((size_t)1))|(((size_t)2)))));
      if ((((nsize) >> (3U)) < (32U))) { mchunkptr F = oldfirst->fd; mchunkptr B = oldfirst->bk; bindex_t I = ((nsize) >> (3U)); ; ; ; if (F == B) ((m)->smallmap &= ~((binmap_t)(1) << (I))); else if (__builtin_expect((F == ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))) || ((char*)(F) >= (m)->least_addr)) && (B == ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))) || ((char*)(B) >= (m)->least_addr)), 1)) { F->bk = B; B->fd = F; } else { abort(); }} else { tchunkptr TP = (tchunkptr)(oldfirst); { tchunkptr XP = TP->parent; tchunkptr R; if (TP->bk != TP) { tchunkptr F = TP->fd; R = TP->bk; if (__builtin_expect(((char*)(F) >= (m)->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(TP->child[1]))) != 0) || ((R = *(RP = &(TP->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= (m)->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&((m)->treebins[TP->index])); if (TP == *H) { if ((*H = R) == 0) ((m)->treemap &= ~((binmap_t)(1) << (TP->index))); } else if (__builtin_expect(((char*)(XP) >= (m)->least_addr), 1)) { if (XP->child[0] == TP) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= (m)->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = TP->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= (m)->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = TP->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= (m)->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }}; };
      oldfirst = ((mchunkptr)(((char*)(oldfirst)) + (nsize)));
      qsize += nsize;
    }
    (((oldfirst)->head &= ~(((size_t)1))), ((q)->head = (qsize|(((size_t)1))), (((mchunkptr)((char*)(q) + (qsize)))->prev_foot = (qsize))));
    if ((((qsize) >> (3U)) < (32U))) { bindex_t I = ((qsize) >> (3U)); mchunkptr B = ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!((m)->smallmap & ((binmap_t)(1) << (I)))) ((m)->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= (m)->least_addr), 1)) F = B->fd; else { abort(); } B->fd = q; F->bk = q; q->fd = F; q->bk = B;} else { tchunkptr TP = (tchunkptr)(q); { tbinptr* H; bindex_t I; { size_t X = qsize >> (8U); if (X == 0) I = 0; else if (X > 0xFFFF) I = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); I = (K << 1) + ((qsize >> (K + ((8U)-1)) & 1)); }}; H = (&((m)->treebins[I])); TP->index = I; TP->child[0] = TP->child[1] = 0; if (!((m)->treemap & ((binmap_t)(1) << (I)))) { ((m)->treemap |= ((binmap_t)(1) << (I))); *H = TP; TP->parent = (tchunkptr)H; TP->fd = TP->bk = TP; } else { tchunkptr T = *H; size_t K = qsize << ((I == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((I) >> 1) + (8U) - 2))); for (;;) { if (((T)->head & ~(((((size_t)1))|(((size_t)2))))) != qsize) { tchunkptr* C = &(T->child[(K >> ((sizeof(size_t) << 3)-((size_t)1))) & 1]); K <<= 1; if (*C != 0) T = *C; else if (__builtin_expect(((char*)(C) >= (m)->least_addr), 1)) { *C = TP; TP->parent = T; TP->fd = TP->bk = TP; break; } else { abort(); break; } } else { tchunkptr F = T->fd; if (__builtin_expect(((char*)(T) >= (m)->least_addr) && ((char*)(F) >= (m)->least_addr), 1)) { T->fd = F->bk = TP; TP->fd = F; TP->bk = T; TP->parent = 0; break; } else { abort(); break; } } } }}; };
                          ;
  }

                                           ;
  return ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
}



static void add_segment(mstate m, char* tbase, size_t tsize, flag_t mmapped) {

  char* old_top = (char*)m->top;
  msegmentptr oldsp = segment_holding(m, old_top);
  char* old_end = oldsp->base + oldsp->size;
  size_t ssize = (((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)));
  char* rawsp = old_end - (ssize + ((sizeof(size_t))<<2) + (((size_t)8U) - ((size_t)1)));
  size_t offset = ((((size_t)(((void*)((char*)(rawsp) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(rawsp) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))));
  char* asp = rawsp + offset;
  char* csp = (asp < (old_top + (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))))? old_top : asp;
  mchunkptr sp = (mchunkptr)csp;
  msegmentptr ss = (msegmentptr)(((void*)((char*)(sp) + ((sizeof(size_t))<<1))));
  mchunkptr tnext = ((mchunkptr)(((char*)(sp)) + (ssize)));
  mchunkptr p = tnext;
  int nfences = 0;


  init_top(m, (mchunkptr)tbase, tsize - (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))));


                        ;
  ((sp)->head = (ssize|(((size_t)1))|(((size_t)2))));
  *ss = m->seg;
  m->seg.base = tbase;
  m->seg.size = tsize;
  (void)(((mmapped) != (((size_t)1))) ? (abort(), (mmapped)) : (((&m->seg)->exec_offset = (*(ptrdiff_t*)(((&m->seg)->base)+((&m->seg)->size)-sizeof(ptrdiff_t)))), ((*(ptrdiff_t*)(((&m->seg)->base + (&m->seg)->exec_offset)+((&m->seg)->size)-sizeof(ptrdiff_t))) != (&m->seg)->exec_offset) ? (abort(), (mmapped)) : ((*(ptrdiff_t*)(((&m->seg)->base)+((&m->seg)->size)-sizeof(ptrdiff_t))) = 0), (mmapped)));
  m->seg.next = ss;


  for (;;) {
    mchunkptr nextp = ((mchunkptr)(((char*)(p)) + ((sizeof(size_t)))));
    p->head = (((((size_t)1))|(((size_t)2)))|(sizeof(size_t)));
    ++nfences;
    if ((char*)(&(nextp->head)) < old_end)
      p = nextp;
    else
      break;
  }
                      ;


  if (csp != old_top) {
    mchunkptr q = (mchunkptr)old_top;
    size_t psize = csp - old_top;
    mchunkptr tn = ((mchunkptr)(((char*)(q)) + (psize)));
    (((tn)->head &= ~(((size_t)1))), ((q)->head = (psize|(((size_t)1))), (((mchunkptr)((char*)(q) + (psize)))->prev_foot = (psize))));
    if ((((psize) >> (3U)) < (32U))) { bindex_t I = ((psize) >> (3U)); mchunkptr B = ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!((m)->smallmap & ((binmap_t)(1) << (I)))) ((m)->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= (m)->least_addr), 1)) F = B->fd; else { abort(); } B->fd = q; F->bk = q; q->fd = F; q->bk = B;} else { tchunkptr TP = (tchunkptr)(q); { tbinptr* H; bindex_t I; { size_t X = psize >> (8U); if (X == 0) I = 0; else if (X > 0xFFFF) I = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); I = (K << 1) + ((psize >> (K + ((8U)-1)) & 1)); }}; H = (&((m)->treebins[I])); TP->index = I; TP->child[0] = TP->child[1] = 0; if (!((m)->treemap & ((binmap_t)(1) << (I)))) { ((m)->treemap |= ((binmap_t)(1) << (I))); *H = TP; TP->parent = (tchunkptr)H; TP->fd = TP->bk = TP; } else { tchunkptr T = *H; size_t K = psize << ((I == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((I) >> 1) + (8U) - 2))); for (;;) { if (((T)->head & ~(((((size_t)1))|(((size_t)2))))) != psize) { tchunkptr* C = &(T->child[(K >> ((sizeof(size_t) << 3)-((size_t)1))) & 1]); K <<= 1; if (*C != 0) T = *C; else if (__builtin_expect(((char*)(C) >= (m)->least_addr), 1)) { *C = TP; TP->parent = T; TP->fd = TP->bk = TP; break; } else { abort(); break; } } else { tchunkptr F = T->fd; if (__builtin_expect(((char*)(T) >= (m)->least_addr) && ((char*)(F) >= (m)->least_addr), 1)) { T->fd = F->bk = TP; TP->fd = F; TP->bk = T; TP->parent = 0; break; } else { abort(); break; } } } }}; };
  }

                            ;
}




static void* sys_alloc(mstate m, size_t nb) {
  char* tbase = ((char*)(((void*)((~(size_t)0)))));
  size_t tsize = 0;
  flag_t mmap_flag = 0;

  init_mparams();


  if (((m)->mflags & (((size_t)1))) && nb >= mparams.mmap_threshold) {
    void* mem = mmap_alloc(m, nb);
    if (mem != 0)
      return mem;
  }
  if (0 && !((m)->mflags & (4U))) {
    char* br = ((char*)(((void*)((~(size_t)0)))));
    msegmentptr ss = (m->top == 0)? 0 : segment_holding(m, (char*)m->top);
    size_t asize = 0;
                           ;

    if (ss == 0) {
      char* base = (char*)((void*)((~(size_t)0)));
      if (base != ((char*)(((void*)((~(size_t)0)))))) {
        asize = (((nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));

        if (!(((size_t)(base) & (mparams.page_size - ((size_t)1))) == 0))
          asize += (((((size_t)base) + (mparams.page_size)) & ~(mparams.page_size - ((size_t)1))) - (size_t)base);

        if (asize < ((~(size_t)0) / 2U) &&
            (br = (char*)(((void*)((~(size_t)0))))) == base) {
          tbase = base;
          tsize = asize;
        }
      }
    }
    else {

      asize = (((nb - m->topsize + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));

      if (asize < ((~(size_t)0) / 2U) &&
          (br = (char*)(((void*)((~(size_t)0))))) == ss->base+ss->size) {
        tbase = br;
        tsize = asize;
      }
    }

    if (tbase == ((char*)(((void*)((~(size_t)0)))))) {
      if (br != ((char*)(((void*)((~(size_t)0)))))) {
        if (asize < ((~(size_t)0) / 2U) &&
            asize < nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) {
          size_t esize = (((nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1) - asize) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
          if (esize < ((~(size_t)0) / 2U)) {
            char* end = (char*)((void*)((~(size_t)0)));
            if (end != ((char*)(((void*)((~(size_t)0))))))
              asize += esize;
            else {
              (void)((void*)((~(size_t)0)));
              br = ((char*)(((void*)((~(size_t)0)))));
            }
          }
        }
      }
      if (br != ((char*)(((void*)((~(size_t)0)))))) {
        tbase = br;
        tsize = asize;
      }
      else
        ((m)->mflags |= (4U));
    }

                           ;
  }

  if (1 && tbase == ((char*)(((void*)((~(size_t)0)))))) {
    size_t req = nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1);
    size_t rsize = (((req) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
    if (rsize > nb) {
      char* mp = (char*)(dlmmap(0, (rsize), (0x1|0x2), (0x02|0x20), -1, 0));
      if (mp != ((char*)(((void*)((~(size_t)0)))))) {
        tbase = mp;
        tsize = rsize;
        mmap_flag = (((size_t)1));
      }
    }
  }

  if (0 && tbase == ((char*)(((void*)((~(size_t)0)))))) {
    size_t asize = (((nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
    if (asize < ((~(size_t)0) / 2U)) {
      char* br = ((char*)(((void*)((~(size_t)0)))));
      char* end = ((char*)(((void*)((~(size_t)0)))));
                             ;
      br = (char*)(((void*)((~(size_t)0))));
      end = (char*)(((void*)((~(size_t)0))));
                             ;
      if (br != ((char*)(((void*)((~(size_t)0))))) && end != ((char*)(((void*)((~(size_t)0))))) && br < end) {
        size_t ssize = end - br;
        if (ssize > nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))) {
          tbase = br;
          tsize = ssize;
        }
      }
    }
  }

  if (tbase != ((char*)(((void*)((~(size_t)0)))))) {

    if ((m->footprint += tsize) > m->max_footprint)
      m->max_footprint = m->footprint;

    if (!((m)->top != 0)) {
      m->seg.base = m->least_addr = tbase;
      m->seg.size = tsize;
      (void)(((mmap_flag) != (((size_t)1))) ? (abort(), (mmap_flag)) : (((&m->seg)->exec_offset = (*(ptrdiff_t*)(((&m->seg)->base)+((&m->seg)->size)-sizeof(ptrdiff_t)))), ((*(ptrdiff_t*)(((&m->seg)->base + (&m->seg)->exec_offset)+((&m->seg)->size)-sizeof(ptrdiff_t))) != (&m->seg)->exec_offset) ? (abort(), (mmap_flag)) : ((*(ptrdiff_t*)(((&m->seg)->base)+((&m->seg)->size)-sizeof(ptrdiff_t))) = 0), (mmap_flag)));
      m->magic = mparams.magic;
      init_bins(m);
      if (((m) == &_gm_))
        init_top(m, (mchunkptr)tbase, tsize - (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))));
      else {

        mchunkptr mn = ((mchunkptr)( ((char*)(((mchunkptr)((char*)(m) - ((sizeof(size_t))<<1))))) + ((((mchunkptr)((char*)(m) - ((sizeof(size_t))<<1))))->head & ~((((size_t)1))|(((size_t)2))))));
        init_top(m, mn, (size_t)((tbase + tsize) - (char*)mn) -(((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))));
      }
    }

    else {

      msegmentptr sp = &m->seg;
      while (sp != 0 && tbase != sp->base + sp->size)
        sp = sp->next;
      if (sp != 0 &&
          !(((((size_t)1))) & (8U)) &&
   ((*(ptrdiff_t*)(((tbase))+((tsize))-sizeof(ptrdiff_t))) == (sp)->exec_offset) &&
          (((((size_t)1))) & (((size_t)1))) == mmap_flag &&
          ((char*)(m->top) >= sp->base && (char*)(m->top) < sp->base + sp->size)) {
        sp->size += tsize;
        init_top(m, m->top, m->topsize + tsize);
      }
      else {
        if (tbase < m->least_addr)
          m->least_addr = tbase;
        sp = &m->seg;
        while (sp != 0 && sp->base != tbase + tsize)
          sp = sp->next;
        if (sp != 0 &&
            !(((((size_t)1))) & (8U)) &&
     ((*(ptrdiff_t*)(((tbase))+((tsize))-sizeof(ptrdiff_t))) == (sp)->exec_offset) &&
            (((((size_t)1))) & (((size_t)1))) == mmap_flag) {
          char* oldbase = sp->base;
          sp->base = tbase;
          sp->size += tsize;
          return prepend_alloc(m, tbase, oldbase, nb);
        }
        else
          add_segment(m, tbase, tsize, mmap_flag);
      }
    }

    if (nb < m->topsize) {
      size_t rsize = m->topsize -= nb;
      mchunkptr p = m->top;
      mchunkptr r = m->top = ((mchunkptr)(((char*)(p)) + (nb)));
      r->head = rsize | (((size_t)1));
      ((p)->head = (nb|(((size_t)1))|(((size_t)2))));
                                ;
                                               ;
      return ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
    }
  }

  (*__errno_location ()) = 12;;
  return 0;
}




static size_t release_unused_segments(mstate m) {
  size_t released = 0;
  msegmentptr pred = &m->seg;
  msegmentptr sp = pred->next;
  while (sp != 0) {
    char* base = sp->base;
    size_t size = sp->size;
    msegmentptr next = sp->next;
    if ((((((size_t)1))) & (((size_t)1))) && !(((((size_t)1))) & (8U))) {
      mchunkptr p = (mchunkptr)((base) + ((((size_t)(((void*)((char*)(base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1)))));
      size_t psize = ((p)->head & ~(((((size_t)1))|(((size_t)2)))));

      if (!((p)->head & (((size_t)2))) && (char*)p + psize >= base + size - (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))) {
        tchunkptr tp = (tchunkptr)p;
                                            ;
        if (p == m->dv) {
          m->dv = 0;
          m->dvsize = 0;
        }
        else {
          { tchunkptr XP = tp->parent; tchunkptr R; if (tp->bk != tp) { tchunkptr F = tp->fd; R = tp->bk; if (__builtin_expect(((char*)(F) >= (m)->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(tp->child[1]))) != 0) || ((R = *(RP = &(tp->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= (m)->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&((m)->treebins[tp->index])); if (tp == *H) { if ((*H = R) == 0) ((m)->treemap &= ~((binmap_t)(1) << (tp->index))); } else if (__builtin_expect(((char*)(XP) >= (m)->least_addr), 1)) { if (XP->child[0] == tp) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= (m)->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = tp->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= (m)->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = tp->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= (m)->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }};
        }
        if (dlmunmap((base), (size)) == 0) {
          released += size;
          m->footprint -= size;

          sp = pred;
          sp->next = next;
        }
        else {
          { tbinptr* H; bindex_t I; { size_t X = psize >> (8U); if (X == 0) I = 0; else if (X > 0xFFFF) I = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); I = (K << 1) + ((psize >> (K + ((8U)-1)) & 1)); }}; H = (&((m)->treebins[I])); tp->index = I; tp->child[0] = tp->child[1] = 0; if (!((m)->treemap & ((binmap_t)(1) << (I)))) { ((m)->treemap |= ((binmap_t)(1) << (I))); *H = tp; tp->parent = (tchunkptr)H; tp->fd = tp->bk = tp; } else { tchunkptr T = *H; size_t K = psize << ((I == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((I) >> 1) + (8U) - 2))); for (;;) { if (((T)->head & ~(((((size_t)1))|(((size_t)2))))) != psize) { tchunkptr* C = &(T->child[(K >> ((sizeof(size_t) << 3)-((size_t)1))) & 1]); K <<= 1; if (*C != 0) T = *C; else if (__builtin_expect(((char*)(C) >= (m)->least_addr), 1)) { *C = tp; tp->parent = T; tp->fd = tp->bk = tp; break; } else { abort(); break; } } else { tchunkptr F = T->fd; if (__builtin_expect(((char*)(T) >= (m)->least_addr) && ((char*)(F) >= (m)->least_addr), 1)) { T->fd = F->bk = tp; tp->fd = F; tp->bk = T; tp->parent = 0; break; } else { abort(); break; } } } }};
        }
      }
    }
    pred = sp;
    sp = next;
  }
  return released;
}

static int sys_trim(mstate m, size_t pad) {
  size_t released = 0;
  if (pad < ((-(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) << 2) && ((m)->top != 0)) {
    pad += (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));

    if (m->topsize > pad) {

      size_t unit = mparams.granularity;
      size_t extra = ((m->topsize - pad + (unit - ((size_t)1))) / unit -
                      ((size_t)1)) * unit;
      msegmentptr sp = segment_holding(m, (char*)m->top);

      if (!(((((size_t)1))) & (8U))) {
        if ((((((size_t)1))) & (((size_t)1)))) {
          if (1 &&
              sp->size >= extra &&
              !has_segment_link(m, sp)) {
            size_t newsize = sp->size - extra;

            if ((((void*)((~(size_t)0))) != ((void*)((~(size_t)0)))) ||
                (dlmunmap((sp->base + newsize), (extra)) == 0)) {
              released = extra;
            }
          }
        }
        else if (0) {
          if (extra >= ((~(size_t)0) / 2U))
            extra = (((~(size_t)0) / 2U)) + ((size_t)1) - unit;
                                 ;
          {

            char* old_br = (char*)(((void*)((~(size_t)0))));
            if (old_br == sp->base + sp->size) {
              char* rel_br = (char*)(((void*)((~(size_t)0))));
              char* new_br = (char*)(((void*)((~(size_t)0))));
              if (rel_br != ((char*)(((void*)((~(size_t)0))))) && new_br < old_br)
                released = old_br - new_br;
            }
          }
                                 ;
        }
      }

      if (released != 0) {
        sp->size -= released;
        m->footprint -= released;
        init_top(m, m->top, m->topsize - released);
                                  ;
      }
    }


    if (1)
      released += release_unused_segments(m);


    if (released == 0)
      m->trim_check = (~(size_t)0);
  }

  return (released != 0)? 1 : 0;
}




static void* tmalloc_large(mstate m, size_t nb) {
  tchunkptr v = 0;
  size_t rsize = -nb;
  tchunkptr t;
  bindex_t idx;
  { size_t X = nb >> (8U); if (X == 0) idx = 0; else if (X > 0xFFFF) idx = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); idx = (K << 1) + ((nb >> (K + ((8U)-1)) & 1)); }};

  if ((t = *(&((m)->treebins[idx]))) != 0) {

    size_t sizebits = nb << ((idx == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((idx) >> 1) + (8U) - 2)));
    tchunkptr rst = 0;
    for (;;) {
      tchunkptr rt;
      size_t trem = ((t)->head & ~(((((size_t)1))|(((size_t)2))))) - nb;
      if (trem < rsize) {
        v = t;
        if ((rsize = trem) == 0)
          break;
      }
      rt = t->child[1];
      t = t->child[(sizebits >> ((sizeof(size_t) << 3)-((size_t)1))) & 1];
      if (rt != 0 && rt != t)
        rst = rt;
      if (t == 0) {
        t = rst;
        break;
      }
      sizebits <<= 1;
    }
  }

  if (t == 0 && v == 0) {
    binmap_t leftbits = ((((binmap_t)(1) << (idx))<<1) | -(((binmap_t)(1) << (idx))<<1)) & m->treemap;
    if (leftbits != 0) {
      bindex_t i;
      binmap_t leastbit = ((leftbits) & -(leftbits));
      i = ffs(leastbit)-1;
      t = *(&((m)->treebins[i]));
    }
  }

  while (t != 0) {
    size_t trem = ((t)->head & ~(((((size_t)1))|(((size_t)2))))) - nb;
    if (trem < rsize) {
      rsize = trem;
      v = t;
    }
    t = ((t)->child[0] != 0? (t)->child[0] : (t)->child[1]);
  }


  if (v != 0 && rsize < (size_t)(m->dvsize - nb)) {
    if (__builtin_expect(((char*)(v) >= (m)->least_addr), 1)) {
      mchunkptr r = ((mchunkptr)(((char*)(v)) + (nb)));
                                        ;
      if (__builtin_expect(((char*)(v) < (char*)(r)), 1)) {
        { tchunkptr XP = v->parent; tchunkptr R; if (v->bk != v) { tchunkptr F = v->fd; R = v->bk; if (__builtin_expect(((char*)(F) >= (m)->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(v->child[1]))) != 0) || ((R = *(RP = &(v->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= (m)->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&((m)->treebins[v->index])); if (v == *H) { if ((*H = R) == 0) ((m)->treemap &= ~((binmap_t)(1) << (v->index))); } else if (__builtin_expect(((char*)(XP) >= (m)->least_addr), 1)) { if (XP->child[0] == v) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= (m)->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = v->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= (m)->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = v->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= (m)->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }};
        if (rsize < (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))
          ((v)->head = ((rsize + nb)|(((size_t)1))|(((size_t)2))), ((mchunkptr)(((char*)(v)) + ((rsize + nb))))->head |= (((size_t)1)));
        else {
          ((v)->head = (nb|(((size_t)1))|(((size_t)2))));
          ((r)->head = (rsize|(((size_t)1))), (((mchunkptr)((char*)(r) + (rsize)))->prev_foot = (rsize)));
          if ((((rsize) >> (3U)) < (32U))) { bindex_t I = ((rsize) >> (3U)); mchunkptr B = ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!((m)->smallmap & ((binmap_t)(1) << (I)))) ((m)->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= (m)->least_addr), 1)) F = B->fd; else { abort(); } B->fd = r; F->bk = r; r->fd = F; r->bk = B;} else { tchunkptr TP = (tchunkptr)(r); { tbinptr* H; bindex_t I; { size_t X = rsize >> (8U); if (X == 0) I = 0; else if (X > 0xFFFF) I = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); I = (K << 1) + ((rsize >> (K + ((8U)-1)) & 1)); }}; H = (&((m)->treebins[I])); TP->index = I; TP->child[0] = TP->child[1] = 0; if (!((m)->treemap & ((binmap_t)(1) << (I)))) { ((m)->treemap |= ((binmap_t)(1) << (I))); *H = TP; TP->parent = (tchunkptr)H; TP->fd = TP->bk = TP; } else { tchunkptr T = *H; size_t K = rsize << ((I == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((I) >> 1) + (8U) - 2))); for (;;) { if (((T)->head & ~(((((size_t)1))|(((size_t)2))))) != rsize) { tchunkptr* C = &(T->child[(K >> ((sizeof(size_t) << 3)-((size_t)1))) & 1]); K <<= 1; if (*C != 0) T = *C; else if (__builtin_expect(((char*)(C) >= (m)->least_addr), 1)) { *C = TP; TP->parent = T; TP->fd = TP->bk = TP; break; } else { abort(); break; } } else { tchunkptr F = T->fd; if (__builtin_expect(((char*)(T) >= (m)->least_addr) && ((char*)(F) >= (m)->least_addr), 1)) { T->fd = F->bk = TP; TP->fd = F; TP->bk = T; TP->parent = 0; break; } else { abort(); break; } } } }}; };
        }
        return ((void*)((char*)(v) + ((sizeof(size_t))<<1)));
      }
    }
    abort();
  }
  return 0;
}


static void* tmalloc_small(mstate m, size_t nb) {
  tchunkptr t, v;
  size_t rsize;
  bindex_t i;
  binmap_t leastbit = ((m->treemap) & -(m->treemap));
  i = ffs(leastbit)-1;

  v = t = *(&((m)->treebins[i]));
  rsize = ((t)->head & ~(((((size_t)1))|(((size_t)2))))) - nb;

  while ((t = ((t)->child[0] != 0? (t)->child[0] : (t)->child[1])) != 0) {
    size_t trem = ((t)->head & ~(((((size_t)1))|(((size_t)2))))) - nb;
    if (trem < rsize) {
      rsize = trem;
      v = t;
    }
  }

  if (__builtin_expect(((char*)(v) >= (m)->least_addr), 1)) {
    mchunkptr r = ((mchunkptr)(((char*)(v)) + (nb)));
                                      ;
    if (__builtin_expect(((char*)(v) < (char*)(r)), 1)) {
      { tchunkptr XP = v->parent; tchunkptr R; if (v->bk != v) { tchunkptr F = v->fd; R = v->bk; if (__builtin_expect(((char*)(F) >= (m)->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(v->child[1]))) != 0) || ((R = *(RP = &(v->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= (m)->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&((m)->treebins[v->index])); if (v == *H) { if ((*H = R) == 0) ((m)->treemap &= ~((binmap_t)(1) << (v->index))); } else if (__builtin_expect(((char*)(XP) >= (m)->least_addr), 1)) { if (XP->child[0] == v) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= (m)->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = v->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= (m)->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = v->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= (m)->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }};
      if (rsize < (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))
        ((v)->head = ((rsize + nb)|(((size_t)1))|(((size_t)2))), ((mchunkptr)(((char*)(v)) + ((rsize + nb))))->head |= (((size_t)1)));
      else {
        ((v)->head = (nb|(((size_t)1))|(((size_t)2))));
        ((r)->head = (rsize|(((size_t)1))), (((mchunkptr)((char*)(r) + (rsize)))->prev_foot = (rsize)));
        { size_t DVS = m->dvsize; if (DVS != 0) { mchunkptr DV = m->dv; ; { bindex_t I = ((DVS) >> (3U)); mchunkptr B = ((sbinptr)((char*)&((m)->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!((m)->smallmap & ((binmap_t)(1) << (I)))) ((m)->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= (m)->least_addr), 1)) F = B->fd; else { abort(); } B->fd = DV; F->bk = DV; DV->fd = F; DV->bk = B;}; } m->dvsize = rsize; m->dv = r;};
      }
      return ((void*)((char*)(v) + ((sizeof(size_t))<<1)));
    }
  }

  abort();
  return 0;
}



static void* internal_realloc(mstate m, void* oldmem, size_t bytes) {
  if (bytes >= ((-(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) << 2)) {
    (*__errno_location ()) = 12;;
    return 0;
  }
  if (!(((mparams.page_size == 0 && init_mparams()) || ((m)->mflags & (2U)))? pthread_mutex_lock(&(m)->mutex) : 0)) {
    mchunkptr oldp = ((mchunkptr)((char*)(oldmem) - ((sizeof(size_t))<<1)));
    size_t oldsize = ((oldp)->head & ~(((((size_t)1))|(((size_t)2)))));
    mchunkptr next = ((mchunkptr)(((char*)(oldp)) + (oldsize)));
    mchunkptr newp = 0;
    void* extra = 0;



    if (__builtin_expect(((char*)(oldp) >= (m)->least_addr) && ((oldp)->head & (((size_t)2))) && ((char*)(oldp) < (char*)(next)) && ((next)->head & (((size_t)1))), 1)) {

      size_t nb = (((bytes) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((bytes) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
      if ((!((oldp)->head & (((size_t)1))) && ((oldp)->prev_foot & (((size_t)1)))))
        newp = mmap_resize(m, oldp, nb);
      else if (oldsize >= nb) {
        size_t rsize = oldsize - nb;
        newp = oldp;
        if (rsize >= (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) {
          mchunkptr remainder = ((mchunkptr)(((char*)(newp)) + (nb)));
          ((newp)->head = (((newp)->head & (((size_t)1)))|nb|(((size_t)2))), ((mchunkptr)(((char*)(newp)) + (nb)))->head |= (((size_t)1)));
          ((remainder)->head = (((remainder)->head & (((size_t)1)))|rsize|(((size_t)2))), ((mchunkptr)(((char*)(remainder)) + (rsize)))->head |= (((size_t)1)));
          extra = ((void*)((char*)(remainder) + ((sizeof(size_t))<<1)));
        }
      }
      else if (next == m->top && oldsize + m->topsize > nb) {

        size_t newsize = oldsize + m->topsize;
        size_t newtopsize = newsize - nb;
        mchunkptr newtop = ((mchunkptr)(((char*)(oldp)) + (nb)));
        ((oldp)->head = (((oldp)->head & (((size_t)1)))|nb|(((size_t)2))), ((mchunkptr)(((char*)(oldp)) + (nb)))->head |= (((size_t)1)));
        newtop->head = newtopsize |(((size_t)1));
        m->top = newtop;
        m->topsize = newtopsize;
        newp = oldp;
      }
    }
    else {
      abort();
      { if (((m)->mflags & (2U))) pthread_mutex_unlock(&(m)->mutex); };
      return 0;
    }

    { if (((m)->mflags & (2U))) pthread_mutex_unlock(&(m)->mutex); };

    if (newp != 0) {
      if (extra != 0) {
        dlfree(extra);
      }
                                ;
      return ((void*)((char*)(newp) + ((sizeof(size_t))<<1)));
    }
    else {
      void* newmem = dlmalloc(bytes);
      if (newmem != 0) {
        size_t oc = oldsize - ((!((oldp)->head & (((size_t)1))) && ((oldp)->prev_foot & (((size_t)1))))? (((sizeof(size_t))<<1)) : ((sizeof(size_t))));
        memcpy(newmem, oldmem, (oc < bytes)? oc : bytes);
        dlfree(oldmem);
      }
      return newmem;
    }
  }
  return 0;
}



static void* internal_memalign(mstate m, size_t alignment, size_t bytes) {
  if (alignment <= ((size_t)8U))
    return dlmalloc(bytes);
  if (alignment < (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))
    alignment = (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)));
  if ((alignment & (alignment-((size_t)1))) != 0) {
    size_t a = ((size_t)8U) << 1;
    while (a < alignment) a <<= 1;
    alignment = a;
  }

  if (bytes >= ((-(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) << 2) - alignment) {
    if (m != 0) {
      (*__errno_location ()) = 12;;
    }
  }
  else {
    size_t nb = (((bytes) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((bytes) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
    size_t req = nb + alignment + (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t)));
    char* mem = (char*)dlmalloc(req);
    if (mem != 0) {
      void* leader = 0;
      void* trailer = 0;
      mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));

      if ((((mparams.page_size == 0 && init_mparams()) || ((m)->mflags & (2U)))? pthread_mutex_lock(&(m)->mutex) : 0)) return 0;
      if ((((size_t)(mem)) % alignment) != 0) {
        char* br = (char*)((mchunkptr)((char*)((size_t)(((size_t)(mem + alignment - ((size_t)1))) & -alignment)) - ((sizeof(size_t))<<1)));



        char* pos = ((size_t)(br - (char*)(p)) >= (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))?
          br : br+alignment;
        mchunkptr newp = (mchunkptr)pos;
        size_t leadsize = pos - (char*)(p);
        size_t newsize = ((p)->head & ~(((((size_t)1))|(((size_t)2))))) - leadsize;

        if ((!((p)->head & (((size_t)1))) && ((p)->prev_foot & (((size_t)1))))) {
          newp->prev_foot = p->prev_foot + leadsize;
          newp->head = (newsize|(((size_t)2)));
        }
        else {
          ((newp)->head = (((newp)->head & (((size_t)1)))|newsize|(((size_t)2))), ((mchunkptr)(((char*)(newp)) + (newsize)))->head |= (((size_t)1)));
          ((p)->head = (((p)->head & (((size_t)1)))|leadsize|(((size_t)2))), ((mchunkptr)(((char*)(p)) + (leadsize)))->head |= (((size_t)1)));
          leader = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
        }
        p = newp;
      }


      if (!(!((p)->head & (((size_t)1))) && ((p)->prev_foot & (((size_t)1))))) {
        size_t size = ((p)->head & ~(((((size_t)1))|(((size_t)2)))));
        if (size > nb + (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) {
          size_t remainder_size = size - nb;
          mchunkptr remainder = ((mchunkptr)(((char*)(p)) + (nb)));
          ((p)->head = (((p)->head & (((size_t)1)))|nb|(((size_t)2))), ((mchunkptr)(((char*)(p)) + (nb)))->head |= (((size_t)1)));
          ((remainder)->head = (((remainder)->head & (((size_t)1)))|remainder_size|(((size_t)2))), ((mchunkptr)(((char*)(remainder)) + (remainder_size)))->head |= (((size_t)1)));
          trailer = ((void*)((char*)(remainder) + ((sizeof(size_t))<<1)));
        }
      }

                                 ;
                                                         ;
                             ;
      { if (((m)->mflags & (2U))) pthread_mutex_unlock(&(m)->mutex); };
      if (leader != 0) {
        dlfree(leader);
      }
      if (trailer != 0) {
        dlfree(trailer);
      }
      return ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
    }
  }
  return 0;
}



static void** ialloc(mstate m,
                     size_t n_elements,
                     size_t* sizes,
                     int opts,
                     void* chunks[]) {
  size_t element_size;
  size_t contents_size;
  size_t array_size;
  void* mem;
  mchunkptr p;
  size_t remainder_size;
  void** marray;
  mchunkptr array_chunk;
  flag_t was_enabled;
  size_t size;
  size_t i;


  if (chunks != 0) {
    if (n_elements == 0)
      return chunks;
    marray = chunks;
    array_size = 0;
  }
  else {

    if (n_elements == 0)
      return (void**)dlmalloc(0);
    marray = 0;
    array_size = (((n_elements * (sizeof(void*))) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((n_elements * (sizeof(void*))) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
  }


  if (opts & 0x1) {
    element_size = (((*sizes) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((*sizes) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
    contents_size = n_elements * element_size;
  }
  else {
    element_size = 0;
    contents_size = 0;
    for (i = 0; i != n_elements; ++i)
      contents_size += (((sizes[i]) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((sizes[i]) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
  }

  size = contents_size + array_size;






  was_enabled = ((m)->mflags & (((size_t)1)));
  ((m)->mflags &= ~(((size_t)1)));
  mem = dlmalloc(size - ((sizeof(size_t))));
  if (was_enabled)
    ((m)->mflags |= (((size_t)1)));
  if (mem == 0)
    return 0;

  if ((((mparams.page_size == 0 && init_mparams()) || ((m)->mflags & (2U)))? pthread_mutex_lock(&(m)->mutex) : 0)) return 0;
  p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));
  remainder_size = ((p)->head & ~(((((size_t)1))|(((size_t)2)))));

                        ;

  if (opts & 0x2) {
    memset((size_t*)mem, 0, remainder_size - (sizeof(size_t)) - array_size);
  }


  if (marray == 0) {
    size_t array_chunk_size;
    array_chunk = ((mchunkptr)(((char*)(p)) + (contents_size)));
    array_chunk_size = remainder_size - contents_size;
    marray = (void**) (((void*)((char*)(array_chunk) + ((sizeof(size_t))<<1))));
    ((array_chunk)->head = (array_chunk_size|(((size_t)1))|(((size_t)2))));
    remainder_size = contents_size;
  }


  for (i = 0; ; ++i) {
    marray[i] = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
    if (i != n_elements-1) {
      if (element_size != 0)
        size = element_size;
      else
        size = (((sizes[i]) < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((sizes[i]) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
      remainder_size -= size;
      ((p)->head = (size|(((size_t)1))|(((size_t)2))));
      p = ((mchunkptr)(((char*)(p)) + (size)));
    }
    else {
      ((p)->head = (remainder_size|(((size_t)1))|(((size_t)2))));
      break;
    }
  }
  { if (((m)->mflags & (2U))) pthread_mutex_unlock(&(m)->mutex); };
  return marray;
}






void* dlmalloc(size_t bytes) {
  if (!(((mparams.page_size == 0 && init_mparams()) || (((&_gm_))->mflags & (2U)))? pthread_mutex_lock(&((&_gm_))->mutex) : 0)) {
    void* mem;
    size_t nb;
    if (bytes <= (((((size_t)1) << (8U)) - ((size_t)1)) - (((size_t)8U) - ((size_t)1)) - ((sizeof(size_t))))) {
      bindex_t idx;
      binmap_t smallbits;
      nb = (bytes < ((((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) - ((sizeof(size_t))) - ((size_t)1)))? (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))) : (((bytes) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)));
      idx = ((nb) >> (3U));
      smallbits = (&_gm_)->smallmap >> idx;

      if ((smallbits & 0x3U) != 0) {
        mchunkptr b, p;
        idx += ~smallbits & 1;
        b = ((sbinptr)((char*)&(((&_gm_))->smallbins[(idx)<<1])));
        p = b->fd;
                                                     ;
        { mchunkptr F = p->fd; ; ; ; if (b == F) (((&_gm_))->smallmap &= ~((binmap_t)(1) << (idx))); else if (__builtin_expect(((char*)(F) >= ((&_gm_))->least_addr), 1)) { b->fd = F; F->bk = b; } else { abort(); }};
        ((p)->head = (((idx) << (3U))|(((size_t)1))|(((size_t)2))), ((mchunkptr)(((char*)(p)) + (((idx) << (3U)))))->head |= (((size_t)1)));
        mem = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
                                         ;
        goto postaction;
      }

      else if (nb > (&_gm_)->dvsize) {
        if (smallbits != 0) {
          mchunkptr b, p, r;
          size_t rsize;
          bindex_t i;
          binmap_t leftbits = (smallbits << idx) & ((((binmap_t)(1) << (idx))<<1) | -(((binmap_t)(1) << (idx))<<1));
          binmap_t leastbit = ((leftbits) & -(leftbits));
          i = ffs(leastbit)-1;
          b = ((sbinptr)((char*)&(((&_gm_))->smallbins[(i)<<1])));
          p = b->fd;
                                                     ;
          { mchunkptr F = p->fd; ; ; ; if (b == F) (((&_gm_))->smallmap &= ~((binmap_t)(1) << (i))); else if (__builtin_expect(((char*)(F) >= ((&_gm_))->least_addr), 1)) { b->fd = F; F->bk = b; } else { abort(); }};
          rsize = ((i) << (3U)) - nb;

          if ((sizeof(size_t)) != 4 && rsize < (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))))
            ((p)->head = (((i) << (3U))|(((size_t)1))|(((size_t)2))), ((mchunkptr)(((char*)(p)) + (((i) << (3U)))))->head |= (((size_t)1)));
          else {
            ((p)->head = (nb|(((size_t)1))|(((size_t)2))));
            r = ((mchunkptr)(((char*)(p)) + (nb)));
            ((r)->head = (rsize|(((size_t)1))), (((mchunkptr)((char*)(r) + (rsize)))->prev_foot = (rsize)));
            { size_t DVS = (&_gm_)->dvsize; if (DVS != 0) { mchunkptr DV = (&_gm_)->dv; ; { bindex_t I = ((DVS) >> (3U)); mchunkptr B = ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!(((&_gm_))->smallmap & ((binmap_t)(1) << (I)))) (((&_gm_))->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= ((&_gm_))->least_addr), 1)) F = B->fd; else { abort(); } B->fd = DV; F->bk = DV; DV->fd = F; DV->bk = B;}; } (&_gm_)->dvsize = rsize; (&_gm_)->dv = r;};
          }
          mem = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
                                           ;
          goto postaction;
        }

        else if ((&_gm_)->treemap != 0 && (mem = tmalloc_small((&_gm_), nb)) != 0) {
                                           ;
          goto postaction;
        }
      }
    }
    else if (bytes >= ((-(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) << 2))
      nb = (~(size_t)0);
    else {
      nb = (((bytes) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)));
      if ((&_gm_)->treemap != 0 && (mem = tmalloc_large((&_gm_), nb)) != 0) {
                                         ;
        goto postaction;
      }
    }

    if (nb <= (&_gm_)->dvsize) {
      size_t rsize = (&_gm_)->dvsize - nb;
      mchunkptr p = (&_gm_)->dv;
      if (rsize >= (((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) {
        mchunkptr r = (&_gm_)->dv = ((mchunkptr)(((char*)(p)) + (nb)));
        (&_gm_)->dvsize = rsize;
        ((r)->head = (rsize|(((size_t)1))), (((mchunkptr)((char*)(r) + (rsize)))->prev_foot = (rsize)));
        ((p)->head = (nb|(((size_t)1))|(((size_t)2))));
      }
      else {
        size_t dvs = (&_gm_)->dvsize;
        (&_gm_)->dvsize = 0;
        (&_gm_)->dv = 0;
        ((p)->head = (dvs|(((size_t)1))|(((size_t)2))), ((mchunkptr)(((char*)(p)) + (dvs)))->head |= (((size_t)1)));
      }
      mem = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
                                       ;
      goto postaction;
    }

    else if (nb < (&_gm_)->topsize) {
      size_t rsize = (&_gm_)->topsize -= nb;
      mchunkptr p = (&_gm_)->top;
      mchunkptr r = (&_gm_)->top = ((mchunkptr)(((char*)(p)) + (nb)));
      r->head = rsize | (((size_t)1));
      ((p)->head = (nb|(((size_t)1))|(((size_t)2))));
      mem = ((void*)((char*)(p) + ((sizeof(size_t))<<1)));
                                  ;
                                       ;
      goto postaction;
    }

    mem = sys_alloc((&_gm_), nb);

  postaction:
    { if ((((&_gm_))->mflags & (2U))) pthread_mutex_unlock(&((&_gm_))->mutex); };
    return mem;
  }

  return 0;
}

void dlfree(void* mem) {






  if (mem != 0) {
    mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));
    if (!(((mparams.page_size == 0 && init_mparams()) || (((&_gm_))->mflags & (2U)))? pthread_mutex_lock(&((&_gm_))->mutex) : 0)) {
                              ;
      if (__builtin_expect(((char*)(p) >= ((&_gm_))->least_addr) && ((p)->head & (((size_t)2))), 1)) {
        size_t psize = ((p)->head & ~(((((size_t)1))|(((size_t)2)))));
        mchunkptr next = ((mchunkptr)(((char*)(p)) + (psize)));
        if (!((p)->head & (((size_t)1)))) {
          size_t prevsize = p->prev_foot;
          if ((prevsize & (((size_t)1))) != 0) {
            prevsize &= ~(((size_t)1));
            psize += prevsize + (((sizeof(size_t))<<2));
            if (dlmunmap(((char*)p - prevsize), (psize)) == 0)
              (&_gm_)->footprint -= psize;
            goto postaction;
          }
          else {
            mchunkptr prev = ((mchunkptr)(((char*)(p)) - (prevsize)));
            psize += prevsize;
            p = prev;
            if (__builtin_expect(((char*)(prev) >= ((&_gm_))->least_addr), 1)) {
              if (p != (&_gm_)->dv) {
                if ((((prevsize) >> (3U)) < (32U))) { mchunkptr F = p->fd; mchunkptr B = p->bk; bindex_t I = ((prevsize) >> (3U)); ; ; ; if (F == B) (((&_gm_))->smallmap &= ~((binmap_t)(1) << (I))); else if (__builtin_expect((F == ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))) || ((char*)(F) >= ((&_gm_))->least_addr)) && (B == ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))) || ((char*)(B) >= ((&_gm_))->least_addr)), 1)) { F->bk = B; B->fd = F; } else { abort(); }} else { tchunkptr TP = (tchunkptr)(p); { tchunkptr XP = TP->parent; tchunkptr R; if (TP->bk != TP) { tchunkptr F = TP->fd; R = TP->bk; if (__builtin_expect(((char*)(F) >= ((&_gm_))->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(TP->child[1]))) != 0) || ((R = *(RP = &(TP->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= ((&_gm_))->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&(((&_gm_))->treebins[TP->index])); if (TP == *H) { if ((*H = R) == 0) (((&_gm_))->treemap &= ~((binmap_t)(1) << (TP->index))); } else if (__builtin_expect(((char*)(XP) >= ((&_gm_))->least_addr), 1)) { if (XP->child[0] == TP) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= ((&_gm_))->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = TP->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= ((&_gm_))->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = TP->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= ((&_gm_))->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }}; };
              }
              else if ((next->head & ((((size_t)1))|(((size_t)2)))) == ((((size_t)1))|(((size_t)2)))) {
                (&_gm_)->dvsize = psize;
                (((next)->head &= ~(((size_t)1))), ((p)->head = (psize|(((size_t)1))), (((mchunkptr)((char*)(p) + (psize)))->prev_foot = (psize))));
                goto postaction;
              }
            }
            else
              goto erroraction;
          }
        }

        if (__builtin_expect(((char*)(p) < (char*)(next)) && ((next)->head & (((size_t)1))), 1)) {
          if (!((next)->head & (((size_t)2)))) {
            if (next == (&_gm_)->top) {
              size_t tsize = (&_gm_)->topsize += psize;
              (&_gm_)->top = p;
              p->head = tsize | (((size_t)1));
              if (p == (&_gm_)->dv) {
                (&_gm_)->dv = 0;
                (&_gm_)->dvsize = 0;
              }
              if (((tsize) > ((&_gm_))->trim_check))
                sys_trim((&_gm_), 0);
              goto postaction;
            }
            else if (next == (&_gm_)->dv) {
              size_t dsize = (&_gm_)->dvsize += psize;
              (&_gm_)->dv = p;
              ((p)->head = (dsize|(((size_t)1))), (((mchunkptr)((char*)(p) + (dsize)))->prev_foot = (dsize)));
              goto postaction;
            }
            else {
              size_t nsize = ((next)->head & ~(((((size_t)1))|(((size_t)2)))));
              psize += nsize;
              if ((((nsize) >> (3U)) < (32U))) { mchunkptr F = next->fd; mchunkptr B = next->bk; bindex_t I = ((nsize) >> (3U)); ; ; ; if (F == B) (((&_gm_))->smallmap &= ~((binmap_t)(1) << (I))); else if (__builtin_expect((F == ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))) || ((char*)(F) >= ((&_gm_))->least_addr)) && (B == ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))) || ((char*)(B) >= ((&_gm_))->least_addr)), 1)) { F->bk = B; B->fd = F; } else { abort(); }} else { tchunkptr TP = (tchunkptr)(next); { tchunkptr XP = TP->parent; tchunkptr R; if (TP->bk != TP) { tchunkptr F = TP->fd; R = TP->bk; if (__builtin_expect(((char*)(F) >= ((&_gm_))->least_addr), 1)) { F->bk = R; R->fd = F; } else { abort(); } } else { tchunkptr* RP; if (((R = *(RP = &(TP->child[1]))) != 0) || ((R = *(RP = &(TP->child[0]))) != 0)) { tchunkptr* CP; while ((*(CP = &(R->child[1])) != 0) || (*(CP = &(R->child[0])) != 0)) { R = *(RP = CP); } if (__builtin_expect(((char*)(RP) >= ((&_gm_))->least_addr), 1)) *RP = 0; else { abort(); } } } if (XP != 0) { tbinptr* H = (&(((&_gm_))->treebins[TP->index])); if (TP == *H) { if ((*H = R) == 0) (((&_gm_))->treemap &= ~((binmap_t)(1) << (TP->index))); } else if (__builtin_expect(((char*)(XP) >= ((&_gm_))->least_addr), 1)) { if (XP->child[0] == TP) XP->child[0] = R; else XP->child[1] = R; } else abort(); if (R != 0) { if (__builtin_expect(((char*)(R) >= ((&_gm_))->least_addr), 1)) { tchunkptr C0, C1; R->parent = XP; if ((C0 = TP->child[0]) != 0) { if (__builtin_expect(((char*)(C0) >= ((&_gm_))->least_addr), 1)) { R->child[0] = C0; C0->parent = R; } else abort(); } if ((C1 = TP->child[1]) != 0) { if (__builtin_expect(((char*)(C1) >= ((&_gm_))->least_addr), 1)) { R->child[1] = C1; C1->parent = R; } else abort(); } } else abort(); } }}; };
              ((p)->head = (psize|(((size_t)1))), (((mchunkptr)((char*)(p) + (psize)))->prev_foot = (psize)));
              if (p == (&_gm_)->dv) {
                (&_gm_)->dvsize = psize;
                goto postaction;
              }
            }
          }
          else
            (((next)->head &= ~(((size_t)1))), ((p)->head = (psize|(((size_t)1))), (((mchunkptr)((char*)(p) + (psize)))->prev_foot = (psize))));
          if ((((psize) >> (3U)) < (32U))) { bindex_t I = ((psize) >> (3U)); mchunkptr B = ((sbinptr)((char*)&(((&_gm_))->smallbins[(I)<<1]))); mchunkptr F = B; ; if (!(((&_gm_))->smallmap & ((binmap_t)(1) << (I)))) (((&_gm_))->smallmap |= ((binmap_t)(1) << (I))); else if (__builtin_expect(((char*)(B->fd) >= ((&_gm_))->least_addr), 1)) F = B->fd; else { abort(); } B->fd = p; F->bk = p; p->fd = F; p->bk = B;} else { tchunkptr TP = (tchunkptr)(p); { tbinptr* H; bindex_t I; { size_t X = psize >> (8U); if (X == 0) I = 0; else if (X > 0xFFFF) I = (32U)-1; else { unsigned int Y = (unsigned int)X; unsigned int N = ((Y - 0x100) >> 16) & 8; unsigned int K = (((Y <<= N) - 0x1000) >> 16) & 4; N += K; N += K = (((Y <<= K) - 0x4000) >> 16) & 2; K = 14 - N + ((Y <<= K) >> 15); I = (K << 1) + ((psize >> (K + ((8U)-1)) & 1)); }}; H = (&(((&_gm_))->treebins[I])); TP->index = I; TP->child[0] = TP->child[1] = 0; if (!(((&_gm_))->treemap & ((binmap_t)(1) << (I)))) { (((&_gm_))->treemap |= ((binmap_t)(1) << (I))); *H = TP; TP->parent = (tchunkptr)H; TP->fd = TP->bk = TP; } else { tchunkptr T = *H; size_t K = psize << ((I == (32U)-1)? 0 : (((sizeof(size_t) << 3)-((size_t)1)) - (((I) >> 1) + (8U) - 2))); for (;;) { if (((T)->head & ~(((((size_t)1))|(((size_t)2))))) != psize) { tchunkptr* C = &(T->child[(K >> ((sizeof(size_t) << 3)-((size_t)1))) & 1]); K <<= 1; if (*C != 0) T = *C; else if (__builtin_expect(((char*)(C) >= ((&_gm_))->least_addr), 1)) { *C = TP; TP->parent = T; TP->fd = TP->bk = TP; break; } else { abort(); break; } } else { tchunkptr F = T->fd; if (__builtin_expect(((char*)(T) >= ((&_gm_))->least_addr) && ((char*)(F) >= ((&_gm_))->least_addr), 1)) { T->fd = F->bk = TP; TP->fd = F; TP->bk = T; TP->parent = 0; break; } else { abort(); break; } } } }}; };
                                 ;
          goto postaction;
        }
      }
    erroraction:
      abort();
    postaction:
      { if ((((&_gm_))->mflags & (2U))) pthread_mutex_unlock(&((&_gm_))->mutex); };
    }
  }



}

void* dlcalloc(size_t n_elements, size_t elem_size) {
  void* mem;
  size_t req = 0;
  if (n_elements != 0) {
    req = n_elements * elem_size;
    if (((n_elements | elem_size) & ~(size_t)0xffff) &&
        (req / n_elements != elem_size))
      req = (~(size_t)0);
  }
  mem = dlmalloc(req);
  if (mem != 0 && (!(!((((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1))))->head & (((size_t)1))) && ((((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1))))->prev_foot & (((size_t)1))))))
    memset(mem, 0, req);
  return mem;
}

void* dlrealloc(void* oldmem, size_t bytes) {
  if (oldmem == 0)
    return dlmalloc(bytes);






  else {

    mstate m = (&_gm_);







    return internal_realloc(m, oldmem, bytes);
  }
}

void* dlmemalign(size_t alignment, size_t bytes) {
  return internal_memalign((&_gm_), alignment, bytes);
}

void** dlindependent_calloc(size_t n_elements, size_t elem_size,
                                 void* chunks[]) {
  size_t sz = elem_size;
  return ialloc((&_gm_), n_elements, &sz, 3, chunks);
}

void** dlindependent_comalloc(size_t n_elements, size_t sizes[],
                                   void* chunks[]) {
  return ialloc((&_gm_), n_elements, sizes, 0, chunks);
}

void* dlvalloc(size_t bytes) {
  size_t pagesz;
  init_mparams();
  pagesz = mparams.page_size;
  return dlmemalign(pagesz, bytes);
}

void* dlpvalloc(size_t bytes) {
  size_t pagesz;
  init_mparams();
  pagesz = mparams.page_size;
  return dlmemalign(pagesz, (bytes + pagesz - ((size_t)1)) & ~(pagesz - ((size_t)1)));
}

int dlmalloc_trim(size_t pad) {
  int result = 0;
  if (!(((mparams.page_size == 0 && init_mparams()) || (((&_gm_))->mflags & (2U)))? pthread_mutex_lock(&((&_gm_))->mutex) : 0)) {
    result = sys_trim((&_gm_), pad);
    { if ((((&_gm_))->mflags & (2U))) pthread_mutex_unlock(&((&_gm_))->mutex); };
  }
  return result;
}

size_t dlmalloc_footprint(void) {
  return (&_gm_)->footprint;
}

size_t dlmalloc_max_footprint(void) {
  return (&_gm_)->max_footprint;
}







void dlmalloc_stats() {
  internal_malloc_stats((&_gm_));
}

size_t dlmalloc_usable_size(void* mem) {
  if (mem != 0) {
    mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));
    if (((p)->head & (((size_t)2))))
      return ((p)->head & ~(((((size_t)1))|(((size_t)2))))) - ((!((p)->head & (((size_t)1))) && ((p)->prev_foot & (((size_t)1))))? (((sizeof(size_t))<<1)) : ((sizeof(size_t))));
  }
  return 0;
}

int dlmallopt(int param_number, int value) {
  return change_mparam(param_number, value);
}







static pthread_mutex_t open_temp_exec_file_mutex = { { 0, 0, 0, 0, 0, 0, 0, { 0, 0 } } };



static int execfd = -1;


static size_t execsize = 0;


static int
open_temp_exec_file_name (char *name, int flags)
{
  int fd;


  fd = mkostemp (name, flags);




  if (fd != -1)
    unlink (name);

  return fd;
}


static int
open_temp_exec_file_dir (const char *dir)
{
  static const char suffix[] = "/ffiXXXXXX";
  int lendir, flags;
  char *tempname;

  int fd;



  flags = 02000000;





  fd = open (dir, flags | 02 | 0200 | (020000000 | 0200000), 0700);

  if (fd != -1 || ((*__errno_location ()) != 22 && (*__errno_location ()) != 21 && (*__errno_location ()) != 95)) {
    return fd;
  } else {
    (*__errno_location ()) = 0;
  }


  lendir = strlen (dir);
  tempname = __builtin_alloca (lendir + sizeof (suffix));

  if (!tempname)
    return -1;

  memcpy (tempname, dir, lendir);
  memcpy (tempname + lendir, suffix, sizeof (suffix));

  return open_temp_exec_file_name (tempname, flags);
}



static int
open_temp_exec_file_env (const char *envvar)
{
  const char *value = getenv (envvar);

  if (!value)
    return -1;

  return open_temp_exec_file_dir (value);
}






static int
open_temp_exec_file_mnt (const char *mounts)
{
  static const char *last_mounts;
  static FILE *last_mntent;

  if (mounts != last_mounts)
    {
      if (last_mntent)
 endmntent (last_mntent);

      last_mounts = mounts;

      if (mounts)
 last_mntent = setmntent (mounts, "r");
      else
 last_mntent = ((void*)0);
    }

  if (!last_mntent)
    return -1;

  for (;;)
    {
      int fd;
      struct mntent mnt;
      char buf[4096 * 3];

      if (getmntent_r (last_mntent, &mnt, buf, sizeof (buf)) == ((void*)0))
 return -1;

      if (hasmntopt (&mnt, "ro")
   || hasmntopt (&mnt, "noexec")
   || access (mnt.mnt_dir, 2))
 continue;

      fd = open_temp_exec_file_dir (mnt.mnt_dir);

      if (fd != -1)
 return fd;
    }
}




static struct
{
  int (*func)(const char *);
  const char *arg;
  int repeat;
} open_temp_exec_file_opts[] = {
  { open_temp_exec_file_env, "TMPDIR", 0 },
  { open_temp_exec_file_dir, "/tmp", 0 },
  { open_temp_exec_file_dir, "/var/tmp", 0 },
  { open_temp_exec_file_dir, "/dev/shm", 0 },
  { open_temp_exec_file_env, "HOME", 0 },

  { open_temp_exec_file_mnt, "/etc/mtab", 1 },
  { open_temp_exec_file_mnt, "/proc/mounts", 1 },

};


static int open_temp_exec_file_opts_idx = 0;




static int
open_temp_exec_file_opts_next (void)
{
  if (open_temp_exec_file_opts[open_temp_exec_file_opts_idx].repeat)
    open_temp_exec_file_opts[open_temp_exec_file_opts_idx].func (((void*)0));

  open_temp_exec_file_opts_idx++;
  if (open_temp_exec_file_opts_idx
      == (sizeof (open_temp_exec_file_opts)
   / sizeof (*open_temp_exec_file_opts)))
    {
      open_temp_exec_file_opts_idx = 0;
      return 1;
    }

  return 0;
}



static int
open_temp_exec_file (void)
{
  int fd;

  do
    {
      fd = open_temp_exec_file_opts[open_temp_exec_file_opts_idx].func
 (open_temp_exec_file_opts[open_temp_exec_file_opts_idx].arg);

      if (!open_temp_exec_file_opts[open_temp_exec_file_opts_idx].repeat
   || fd == -1)
 {
   if (open_temp_exec_file_opts_next ())
     break;
 }
    }
  while (fd == -1);

  return fd;
}






static void *
dlmmap_locked (void *start, size_t length, int prot, int flags, off_t offset)
{
  void *ptr;

  if (execfd == -1)
    {
      open_temp_exec_file_opts_idx = 0;
    retry_open:
      execfd = open_temp_exec_file ();
      if (execfd == -1)
 return ((void*)((~(size_t)0)));
    }

  offset = execsize;

  if (ftruncate (execfd, offset + length))
    return ((void*)((~(size_t)0)));

  flags &= ~(0x02 | 0x20);
  flags |= 0x01;

  ptr = mmap (((void*)0), length, (prot & ~0x2) | 0x4,
       flags, execfd, offset);
  if (ptr == ((void*)((~(size_t)0))))
    {
      if (!offset)
 {
   close (execfd);
   goto retry_open;
 }
      ftruncate (execfd, offset);
      return ((void*)((~(size_t)0)));
    }
  else if (!offset
    && open_temp_exec_file_opts[open_temp_exec_file_opts_idx].repeat)
    open_temp_exec_file_opts_next ();

  start = mmap (start, length, prot, flags, execfd, offset);

  if (start == ((void*)((~(size_t)0))))
    {
      munmap (ptr, length);
      ftruncate (execfd, offset);
      return start;
    }

  (*(ptrdiff_t*)(((char *)start)+(length)-sizeof(ptrdiff_t))) = (char*)ptr - (char*)start;

  execsize += length;

  return start;
}



static void *
dlmmap (void *start, size_t length, int prot,
 int flags, int fd, off_t offset)
{
  void *ptr;




                              ;





  if (execfd == -1 && 0)
    {
      ptr = mmap (start, length, prot & ~0x4, flags, fd, offset);
      return ptr;
    }

  if (execfd == -1 && !(selinux_enabled >= 0 ? selinux_enabled : (selinux_enabled = selinux_enabled_check ())))
    {
      ptr = mmap (start, length, prot | 0x4, flags, fd, offset);

      if (ptr != ((void*)((~(size_t)0))) || ((*__errno_location ()) != 1 && (*__errno_location ()) != 13))

 return ptr;




    }

  if (execsize == 0 || execfd == -1)
    {
      pthread_mutex_lock (&open_temp_exec_file_mutex);
      ptr = dlmmap_locked (start, length, prot, flags, offset);
      pthread_mutex_unlock (&open_temp_exec_file_mutex);

      return ptr;
    }

  return dlmmap_locked (start, length, prot, flags, offset);
}



static int
dlmunmap (void *start, size_t length)
{






  msegmentptr seg = segment_holding ((&_gm_), start);
  void *code;





  if (seg && (code = ((char*)(start) + (seg)->exec_offset)) != start)
    {
      int ret = munmap (code, length);
      if (ret)
 return ret;
    }

  return munmap (start, length);
}
void *
ffi_closure_alloc (size_t size, void **code)
{
  void *ptr;

  if (!code)
    return ((void*)0);

  ptr = dlmalloc (size);

  if (ptr)
    {
      msegmentptr seg = segment_holding ((&_gm_), ptr);

      *code = ((char*)(ptr) + (seg)->exec_offset);
    }

  return ptr;
}





void
ffi_closure_free (void *ptr)
{







  dlfree (ptr);
}
