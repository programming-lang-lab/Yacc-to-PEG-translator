












typedef long unsigned int size_t;



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
typedef __off_t off_t;






typedef __off64_t off64_t;






typedef __ssize_t ssize_t;






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
typedef __pid_t pid_t;





typedef __id_t id_t;
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
typedef long int ptrdiff_t;














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
typedef unsigned long VALUE;
typedef unsigned long ID;
typedef char ruby_check_sizeof_int[4 == sizeof(int) ? 1 : -1];
typedef char ruby_check_sizeof_long[8 == sizeof(long) ? 1 : -1];

typedef char ruby_check_sizeof_long_long[8 == sizeof(long long) ? 1 : -1];

typedef char ruby_check_sizeof_voidp[8 == sizeof(void*) ? 1 : -1];






VALUE rb_int2inum(long);


VALUE rb_uint2inum(VALUE);




VALUE rb_ll2inum(long long);

VALUE rb_ull2inum(unsigned long long);
 void rb_out_of_int(long num);



static inline int
rb_long2int_inline(long n)
{
    int i = (int)n;
    if ((long)i != n)
 rb_out_of_int(n);

    return i;
}
static inline long
rb_fix2long(VALUE x)
{
    return ((long)(((long)(x))>>(int)(1)));
}

static inline unsigned long
rb_fix2ulong(VALUE x)
{
    return ((unsigned long)((long)(((long)(x))>>(int)(1))));
}
ID rb_sym2id(VALUE);
VALUE rb_id2sym(ID);
enum ruby_special_consts {

    RUBY_Qfalse = 0x00,
    RUBY_Qtrue = 0x14,
    RUBY_Qnil = 0x08,
    RUBY_Qundef = 0x34,

    RUBY_IMMEDIATE_MASK = 0x07,
    RUBY_FIXNUM_FLAG = 0x01,
    RUBY_FLONUM_MASK = 0x03,
    RUBY_FLONUM_FLAG = 0x02,
    RUBY_SYMBOL_FLAG = 0x0c,
    RUBY_SPECIAL_SHIFT = 8
};
enum ruby_value_type {
    RUBY_T_NONE = 0x00,

    RUBY_T_OBJECT = 0x01,
    RUBY_T_CLASS = 0x02,
    RUBY_T_MODULE = 0x03,
    RUBY_T_FLOAT = 0x04,
    RUBY_T_STRING = 0x05,
    RUBY_T_REGEXP = 0x06,
    RUBY_T_ARRAY = 0x07,
    RUBY_T_HASH = 0x08,
    RUBY_T_STRUCT = 0x09,
    RUBY_T_BIGNUM = 0x0a,
    RUBY_T_FILE = 0x0b,
    RUBY_T_DATA = 0x0c,
    RUBY_T_MATCH = 0x0d,
    RUBY_T_COMPLEX = 0x0e,
    RUBY_T_RATIONAL = 0x0f,

    RUBY_T_NIL = 0x11,
    RUBY_T_TRUE = 0x12,
    RUBY_T_FALSE = 0x13,
    RUBY_T_SYMBOL = 0x14,
    RUBY_T_FIXNUM = 0x15,
    RUBY_T_UNDEF = 0x16,

    RUBY_T_IMEMO = 0x1a,
    RUBY_T_NODE = 0x1b,
    RUBY_T_ICLASS = 0x1c,
    RUBY_T_ZOMBIE = 0x1d,

    RUBY_T_MASK = 0x1f
};
static inline int rb_type(VALUE obj);
void rb_check_type(VALUE,int);


VALUE rb_str_to_str(VALUE);
VALUE rb_string_value(volatile VALUE*);
char *rb_string_value_ptr(volatile VALUE*);
char *rb_string_value_cstr(volatile VALUE*);





void rb_check_safe_obj(VALUE);
VALUE rb_str_export(VALUE);




VALUE rb_str_export_locale(VALUE);

VALUE rb_get_path(VALUE);


VALUE rb_get_path_no_checksafe(VALUE);



void rb_secure(int);
int rb_safe_level(void);
void rb_set_safe_level(int);
void rb_set_safe_level_force(int);
void rb_secure_update(VALUE);
 void rb_insecure_operation(void);

VALUE rb_errinfo(void);
void rb_set_errinfo(VALUE);

long rb_num2long(VALUE);
unsigned long rb_num2ulong(VALUE);
static inline long
rb_num2long_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((long)(((long)(x))>>(int)(1)));
    else
 return rb_num2long(x);
}


static inline unsigned long
rb_num2ulong_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((unsigned long)((long)(((long)(x))>>(int)(1))));
    else
 return rb_num2ulong(x);
}



long rb_num2int(VALUE);
long rb_fix2int(VALUE);


static inline int
rb_num2int_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return (int)rb_fix2int(x);
    else
 return (int)rb_num2int(x);
}


unsigned long rb_num2uint(VALUE);

unsigned long rb_fix2uint(VALUE);
short rb_num2short(VALUE);
unsigned short rb_num2ushort(VALUE);
short rb_fix2short(VALUE);
unsigned short rb_fix2ushort(VALUE);


static inline short
rb_num2short_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return rb_fix2short(x);
    else
 return rb_num2short(x);
}







long long rb_num2ll(VALUE);
unsigned long long rb_num2ull(VALUE);
static inline long long
rb_num2ll_inline(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((long)(((long)(x))>>(int)(1)));
    else
 return rb_num2ll(x);
}
double rb_num2dbl(VALUE);


VALUE rb_uint2big(VALUE);
VALUE rb_int2big(long);

VALUE rb_newobj(void);
VALUE rb_newobj_of(VALUE, VALUE);
VALUE rb_obj_setup(VALUE obj, VALUE klass, VALUE type);


enum ruby_fl_type {
    RUBY_FL_WB_PROTECTED = (1<<5),
    RUBY_FL_PROMOTED0 = (1<<5),
    RUBY_FL_PROMOTED1 = (1<<6),
    RUBY_FL_PROMOTED = RUBY_FL_PROMOTED0|RUBY_FL_PROMOTED1,
    RUBY_FL_FINALIZE = (1<<7),
    RUBY_FL_TAINT = (1<<8),
    RUBY_FL_UNTRUSTED = RUBY_FL_TAINT,
    RUBY_FL_EXIVAR = (1<<10),
    RUBY_FL_FREEZE = (1<<11),

    RUBY_FL_USHIFT = 12,


    RUBY_FL_USER0 = (1<<(RUBY_FL_USHIFT+0)),
    RUBY_FL_USER1 = (1<<(RUBY_FL_USHIFT+1)),
    RUBY_FL_USER2 = (1<<(RUBY_FL_USHIFT+2)),
    RUBY_FL_USER3 = (1<<(RUBY_FL_USHIFT+3)),
    RUBY_FL_USER4 = (1<<(RUBY_FL_USHIFT+4)),
    RUBY_FL_USER5 = (1<<(RUBY_FL_USHIFT+5)),
    RUBY_FL_USER6 = (1<<(RUBY_FL_USHIFT+6)),
    RUBY_FL_USER7 = (1<<(RUBY_FL_USHIFT+7)),
    RUBY_FL_USER8 = (1<<(RUBY_FL_USHIFT+8)),
    RUBY_FL_USER9 = (1<<(RUBY_FL_USHIFT+9)),
    RUBY_FL_USER10 = (1<<(RUBY_FL_USHIFT+10)),
    RUBY_FL_USER11 = (1<<(RUBY_FL_USHIFT+11)),
    RUBY_FL_USER12 = (1<<(RUBY_FL_USHIFT+12)),
    RUBY_FL_USER13 = (1<<(RUBY_FL_USHIFT+13)),
    RUBY_FL_USER14 = (1<<(RUBY_FL_USHIFT+14)),
    RUBY_FL_USER15 = (1<<(RUBY_FL_USHIFT+15)),
    RUBY_FL_USER16 = (1<<(RUBY_FL_USHIFT+16)),
    RUBY_FL_USER17 = (1<<(RUBY_FL_USHIFT+17)),
    RUBY_FL_USER18 = (1<<(RUBY_FL_USHIFT+18)),

    RUBY_FL_USER19 = (1<<(RUBY_FL_USHIFT+19)),




    RUBY_ELTS_SHARED = RUBY_FL_USER2,
    RUBY_FL_DUPPED = (RUBY_T_MASK|RUBY_FL_EXIVAR|RUBY_FL_TAINT),
    RUBY_FL_SINGLETON = RUBY_FL_USER0
};

struct RBasic {
    VALUE flags;
    const VALUE klass;
}

    

;

VALUE rb_obj_hide(VALUE obj);
VALUE rb_obj_reveal(VALUE obj, VALUE klass);
enum ruby_robject_flags {
    ROBJECT_EMBED_LEN_MAX = 3,
    ROBJECT_EMBED = RUBY_FL_USER1,

    ROBJECT_ENUM_END
};

struct RObject {
    struct RBasic basic;
    union {
 struct {
     uint32_t numiv;
     VALUE *ivptr;
            void *iv_index_tbl;
 } heap;
 VALUE ary[ROBJECT_EMBED_LEN_MAX];
    } as;
};
enum ruby_rmodule_flags {
    RMODULE_IS_OVERLAID = RUBY_FL_USER2,
    RMODULE_IS_REFINEMENT = RUBY_FL_USER3,
    RMODULE_INCLUDED_INTO_REFINEMENT = RUBY_FL_USER4,

    RMODULE_ENUM_END
};

 double rb_float_value(VALUE);
VALUE rb_float_new(double);
VALUE rb_float_new_in_heap(double);
enum ruby_rstring_flags {
    RSTRING_NOEMBED = RUBY_FL_USER1,
    RSTRING_EMBED_LEN_MASK = (RUBY_FL_USER2|RUBY_FL_USER3|RUBY_FL_USER4|
         RUBY_FL_USER5|RUBY_FL_USER6),
    RSTRING_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+2),
    RSTRING_EMBED_LEN_MAX = (int)((sizeof(VALUE)*3)/sizeof(char)-1),
    RSTRING_FSTR = RUBY_FL_USER17,

    RSTRING_ENUM_END
};
struct RString {
    struct RBasic basic;
    union {
 struct {
     long len;
     char *ptr;
     union {
  long capa;
  VALUE shared;
     } aux;
 } heap;
 char ary[RSTRING_EMBED_LEN_MAX + 1];
    } as;
};
enum ruby_rarray_flags {
    RARRAY_EMBED_LEN_MAX = 3,
    RARRAY_EMBED_FLAG = RUBY_FL_USER1,

    RARRAY_EMBED_LEN_MASK = (RUBY_FL_USER4|RUBY_FL_USER3),
    RARRAY_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+3),

    RARRAY_ENUM_END
};




struct RArray {
    struct RBasic basic;
    union {
 struct {
     long len;
     union {
  long capa;
  VALUE shared;
     } aux;
     const VALUE *ptr;
 } heap;
 const VALUE ary[RARRAY_EMBED_LEN_MAX];
    } as;
};
struct RRegexp {
    struct RBasic basic;
    struct re_pattern_buffer *ptr;
    const VALUE src;
    unsigned long usecnt;
};
struct RFile {
    struct RBasic basic;
    struct rb_io_t *fptr;
};




struct RData {
    struct RBasic basic;
    void (*dmark)(void*);
    void (*dfree)(void*);
    void *data;
};

typedef struct rb_data_type_struct rb_data_type_t;

struct rb_data_type_struct {
    const char *wrap_struct_name;
    struct {
 void (*dmark)(void*);
 void (*dfree)(void*);
 size_t (*dsize)(const void *);
 void *reserved[2];

    } function;
    const rb_data_type_t *parent;
    void *data;

    VALUE flags;
};





struct RTypedData {
    struct RBasic basic;
    const rb_data_type_t *type;
    VALUE typed_flag;
    void *data;
};
typedef void (*RUBY_DATA_FUNC)(void*);
VALUE rb_data_object_wrap(VALUE,void*,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
VALUE rb_data_object_zalloc(VALUE,size_t,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
VALUE rb_data_typed_object_wrap(VALUE klass, void *datap, const rb_data_type_t *);
VALUE rb_data_typed_object_zalloc(VALUE klass, size_t size, const rb_data_type_t *type);
int rb_typeddata_inherited_p(const rb_data_type_t *child, const rb_data_type_t *parent);
int rb_typeddata_is_kind_of(VALUE, const rb_data_type_t *);
void *rb_check_typeddata(VALUE, const rb_data_type_t *);
int rb_big_sign(VALUE);
void rb_freeze_singleton_class(VALUE klass);

static inline void
rb_obj_freeze_inline(VALUE x)
{
    if ((!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) != RUBY_T_NODE)) {
 (void)(((struct RBasic*)(x))->flags |= RUBY_FL_FREEZE);
 if ((((struct RBasic*)(x))->klass) && !(((struct RBasic*)(x))->flags & RUBY_FL_SINGLETON)) {
     rb_freeze_singleton_class(x);
 }
    }
}
static inline void *
rb_data_object_get(VALUE obj)
{
    rb_check_type((VALUE)(obj),(RUBY_T_DATA));
    return ((struct RData *)obj)->data;
}
static inline VALUE
rb_data_object_make(VALUE klass, RUBY_DATA_FUNC mark_func, RUBY_DATA_FUNC free_func, void **datap, size_t size)
{
    VALUE result = rb_data_object_zalloc((klass), (size), (RUBY_DATA_FUNC)(mark_func), (RUBY_DATA_FUNC)(free_func)); (void)((*datap) = (void *)(((struct RData*)(result))->data));;
    return result;
}

static inline VALUE
rb_data_typed_object_make(VALUE klass, const rb_data_type_t *type, void **datap, size_t size)
{
    VALUE result = rb_data_typed_object_zalloc(klass, size, type); (void)((*datap) = (void *)(((struct RData*)(result))->data));;
    return result;
}


 static inline VALUE rb_data_object_alloc(VALUE,void*,RUBY_DATA_FUNC,RUBY_DATA_FUNC);
static inline VALUE
rb_data_object_alloc(VALUE klass, void *data, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree)
{
    return rb_data_object_wrap(klass, data, dmark, dfree);
}



 static inline VALUE rb_data_typed_object_alloc(VALUE,void*,const rb_data_type_t*);
static inline VALUE
rb_data_typed_object_alloc(VALUE klass, void *datap, const rb_data_type_t *type)
{
    return rb_data_typed_object_wrap(klass, datap, type);
}
void rb_gc_writebarrier(VALUE a, VALUE b);
void rb_gc_writebarrier_unprotect(VALUE obj);
static inline VALUE
rb_obj_wb_unprotect(VALUE x, const char *filename , int line )
{




    rb_gc_writebarrier_unprotect(x);

    return x;
}

static inline VALUE
rb_obj_written(VALUE a, VALUE oldv , VALUE b, const char *filename , int line )
{





    if (!(((VALUE)(b) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(b) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 rb_gc_writebarrier(a, b);
    }


    return a;
}

static inline VALUE
rb_obj_write(VALUE a, VALUE *slot, VALUE b, const char *filename , int line )
{




    *slot = b;


    rb_obj_written(a, ((VALUE)RUBY_Qundef) , b, filename, line);

    return a;
}
static inline VALUE
rb_long2num_inline(long v)
{
    if ((((v) < (9223372036854775807L>>1)+1) && ((v) >= (((long)(-9223372036854775807L -1L))>>(int)(1)))))
 return (((VALUE)(v))<<1 | RUBY_FIXNUM_FLAG);
    else
 return rb_int2big(v);
}


static inline VALUE
rb_ulong2num_inline(unsigned long v)
{
    if (((v) < (9223372036854775807L>>1)+1))
 return (((VALUE)(v))<<1 | RUBY_FIXNUM_FLAG);
    else
 return rb_uint2big(v);
}


static inline char
rb_num2char_inline(VALUE x)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(x))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((x) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((x) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((x) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((x) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(x)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(x))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && ((!(((struct RBasic*)(x))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(x))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(x))->as.heap.len)>=1))
 return (!(((struct RBasic*)(x))->flags & RSTRING_NOEMBED) ? ((struct RString*)(x))->as.ary : ((struct RString*)(x))->as.heap.ptr)[0];
    else
 return (char)(rb_num2int_inline(x) & 0xff);
}
void *rb_alloc_tmp_buffer(volatile VALUE *store, long len) ;
void *rb_alloc_tmp_buffer_with_count(volatile VALUE *store, size_t len,size_t count) ;
void rb_free_tmp_buffer(volatile VALUE *store);
 void ruby_malloc_size_overflow(size_t, size_t);





static inline int
rb_mul_size_overflow(size_t a, size_t b, size_t max, size_t *c)
{


    

    unsigned int c2 = (unsigned int)a * (unsigned int)b;
    if (c2 > max) return 1;
    *c = (size_t)c2;




    return 0;
}
static inline void *
rb_alloc_tmp_buffer2(volatile VALUE *store, long count, size_t elsize)
{
    size_t cnt = (size_t)count;
    if (elsize == sizeof(VALUE)) {
 if ((__builtin_expect(!!(cnt > 9223372036854775807L / sizeof(VALUE)), 0))) {
     ruby_malloc_size_overflow(cnt, elsize);
 }
    }
    else {
 size_t size, max = 9223372036854775807L - sizeof(VALUE) + 1;
 if ((__builtin_expect(!!(rb_mul_size_overflow(cnt, elsize, max, &size)), 0))) {
     ruby_malloc_size_overflow(cnt, elsize);
 }
 cnt = (size + sizeof(VALUE) - 1) / sizeof(VALUE);
    }
    return rb_alloc_tmp_buffer_with_count(store, cnt * sizeof(VALUE), cnt);
}
void rb_obj_infect(VALUE victim, VALUE carrier);

typedef int ruby_glob_func(const char*,VALUE, void*);
void rb_glob(const char*,void(*)(const char*,VALUE,void*),VALUE);
int ruby_glob(const char*,int,ruby_glob_func*,VALUE);
int ruby_brace_glob(const char*,int,ruby_glob_func*,VALUE);

VALUE rb_define_class(const char*,VALUE);
VALUE rb_define_module(const char*);
VALUE rb_define_class_under(VALUE, const char*, VALUE);
VALUE rb_define_module_under(VALUE, const char*);

void rb_include_module(VALUE,VALUE);
void rb_extend_object(VALUE,VALUE);
void rb_prepend_module(VALUE,VALUE);

struct rb_global_variable;

typedef VALUE rb_gvar_getter_t(ID id, void *data, struct rb_global_variable *gvar);
typedef void rb_gvar_setter_t(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
typedef void rb_gvar_marker_t(VALUE *var);

VALUE rb_gvar_undef_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_undef_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_undef_marker(VALUE *var);

VALUE rb_gvar_val_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_val_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_val_marker(VALUE *var);

VALUE rb_gvar_var_getter(ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_var_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);
void rb_gvar_var_marker(VALUE *var);

 void rb_gvar_readonly_setter(VALUE val, ID id, void *data, struct rb_global_variable *gvar);

void rb_define_variable(const char*,VALUE*);
void rb_define_virtual_variable(const char*,VALUE(*)(),void(*)());
void rb_define_hooked_variable(const char*,VALUE*,VALUE(*)(),void(*)());
void rb_define_readonly_variable(const char*,const VALUE*);
void rb_define_const(VALUE,const char*,VALUE);
void rb_define_global_const(const char*,VALUE);


void rb_define_method(VALUE,const char*,VALUE(*)(),int);
void rb_define_module_function(VALUE,const char*,VALUE(*)(),int);
void rb_define_global_function(const char*,VALUE(*)(),int);

void rb_undef_method(VALUE,const char*);
void rb_define_alias(VALUE,const char*,const char*);
void rb_define_attr(VALUE,const char*,int,int);

void rb_global_variable(VALUE*);
void rb_gc_register_mark_object(VALUE);
void rb_gc_register_address(VALUE*);
void rb_gc_unregister_address(VALUE*);

ID rb_intern(const char*);
ID rb_intern2(const char*, long);
ID rb_intern_str(VALUE str);
const char *rb_id2name(ID);
ID rb_check_id(volatile VALUE *);
ID rb_to_id(VALUE);
VALUE rb_id2str(ID);
VALUE rb_sym2str(VALUE);
VALUE rb_to_symbol(VALUE name);
VALUE rb_check_symbol(volatile VALUE *namep);
 int rb_varargs_bad_length(int,int);
const char *rb_class2name(VALUE);
const char *rb_obj_classname(VALUE);

void rb_p(VALUE);

VALUE rb_eval_string(const char*);
VALUE rb_eval_string_protect(const char*, int*);
VALUE rb_eval_string_wrap(const char*, int*);
VALUE rb_funcall(VALUE, ID, int, ...);
VALUE rb_funcallv(VALUE, ID, int, const VALUE*);
VALUE rb_funcallv_public(VALUE, ID, int, const VALUE*);


VALUE rb_funcall_passing_block(VALUE, ID, int, const VALUE*);
VALUE rb_funcall_with_block(VALUE, ID, int, const VALUE*, VALUE);
int rb_scan_args(int, const VALUE*, const char*, ...);
VALUE rb_call_super(int, const VALUE*);
VALUE rb_current_receiver(void);
int rb_get_kwargs(VALUE keyword_hash, const ID *table, int required, int optional, VALUE *);
VALUE rb_extract_keywords(VALUE *orighash);




VALUE rb_gv_set(const char*, VALUE);
VALUE rb_gv_get(const char*);
VALUE rb_iv_get(VALUE, const char*);
VALUE rb_iv_set(VALUE, const char*, VALUE);

VALUE rb_equal(VALUE,VALUE);

VALUE *rb_ruby_verbose_ptr(void);
VALUE *rb_ruby_debug_ptr(void);




enum rb_io_wait_readwrite {RB_IO_WAIT_READABLE, RB_IO_WAIT_WRITABLE};



 void rb_raise(VALUE, const char*, ...) ;
 void rb_fatal(const char*, ...) ;
 void rb_bug(const char*, ...) ;
 void rb_bug_errno(const char*, int);
 void rb_sys_fail(const char*);
 void rb_sys_fail_str(VALUE);
 void rb_mod_sys_fail(VALUE, const char*);
 void rb_mod_sys_fail_str(VALUE, VALUE);
 void rb_readwrite_sys_fail(enum rb_io_wait_readwrite, const char*);
 void rb_iter_break(void);
 void rb_iter_break_value(VALUE);
 void rb_exit(int);
 void rb_notimplement(void);
VALUE rb_syserr_new(int, const char *);
VALUE rb_syserr_new_str(int n, VALUE arg);
 void rb_syserr_fail(int, const char*);
 void rb_syserr_fail_str(int, VALUE);
 void rb_mod_syserr_fail(VALUE, int, const char*);
 void rb_mod_syserr_fail_str(VALUE, int, VALUE);
 void rb_readwrite_syserr_fail(enum rb_io_wait_readwrite, int, const char*);


void rb_warning(const char*, ...) ;
void rb_compile_warning(const char *, int, const char*, ...) ;
void rb_sys_warning(const char*, ...) ;

void rb_warn(const char*, ...) ;
void rb_compile_warn(const char *, int, const char*, ...) ;




typedef VALUE rb_block_call_func(VALUE yielded_arg, VALUE callback_arg, int argc, const VALUE *argv, VALUE blockarg);




typedef VALUE (*rb_block_call_func_t)();


VALUE rb_each(VALUE);
VALUE rb_yield(VALUE);
VALUE rb_yield_values(int n, ...);
VALUE rb_yield_values2(int n, const VALUE *argv);
VALUE rb_yield_splat(VALUE);
VALUE rb_yield_block(VALUE, VALUE, int, const VALUE *, VALUE);
int rb_block_given_p(void);
void rb_need_block(void);
VALUE rb_iterate(VALUE(*)(VALUE),VALUE,VALUE(*)(),VALUE);
VALUE rb_block_call(VALUE,ID,int,const VALUE*,rb_block_call_func_t,VALUE);
VALUE rb_rescue(VALUE(*)(),VALUE,VALUE(*)(),VALUE);
VALUE rb_rescue2(VALUE(*)(),VALUE,VALUE(*)(),VALUE,...);
VALUE rb_ensure(VALUE(*)(),VALUE,VALUE(*)(),VALUE);
VALUE rb_catch(const char*,VALUE(*)(),VALUE);
VALUE rb_catch_obj(VALUE,VALUE(*)(),VALUE);
 void rb_throw(const char*,VALUE);
 void rb_throw_obj(VALUE,VALUE);

VALUE rb_require(const char*);

extern VALUE rb_mKernel;
extern VALUE rb_mComparable;
extern VALUE rb_mEnumerable;
extern VALUE rb_mErrno;
extern VALUE rb_mFileTest;
extern VALUE rb_mGC;
extern VALUE rb_mMath;
extern VALUE rb_mProcess;
extern VALUE rb_mWaitReadable;
extern VALUE rb_mWaitWritable;

extern VALUE rb_cBasicObject;
extern VALUE rb_cObject;
extern VALUE rb_cArray;



extern VALUE rb_cBinding;
extern VALUE rb_cClass;
extern VALUE rb_cCont;
extern VALUE rb_cDir;
extern VALUE rb_cData;
extern VALUE rb_cFalseClass;
extern VALUE rb_cEncoding;
extern VALUE rb_cEnumerator;
extern VALUE rb_cFile;



extern VALUE rb_cFloat;
extern VALUE rb_cHash;
extern VALUE rb_cInteger;
extern VALUE rb_cIO;
extern VALUE rb_cMatch;
extern VALUE rb_cMethod;
extern VALUE rb_cModule;
extern VALUE rb_cNameErrorMesg;
extern VALUE rb_cNilClass;
extern VALUE rb_cNumeric;
extern VALUE rb_cProc;
extern VALUE rb_cRandom;
extern VALUE rb_cRange;
extern VALUE rb_cRational;
extern VALUE rb_cComplex;
extern VALUE rb_cRegexp;
extern VALUE rb_cStat;
extern VALUE rb_cString;
extern VALUE rb_cStruct;
extern VALUE rb_cSymbol;
extern VALUE rb_cThread;
extern VALUE rb_cTime;
extern VALUE rb_cTrueClass;
extern VALUE rb_cUnboundMethod;

extern VALUE rb_eException;
extern VALUE rb_eStandardError;
extern VALUE rb_eSystemExit;
extern VALUE rb_eInterrupt;
extern VALUE rb_eSignal;
extern VALUE rb_eFatal;
extern VALUE rb_eArgError;
extern VALUE rb_eEOFError;
extern VALUE rb_eIndexError;
extern VALUE rb_eStopIteration;
extern VALUE rb_eKeyError;
extern VALUE rb_eRangeError;
extern VALUE rb_eIOError;
extern VALUE rb_eRuntimeError;
extern VALUE rb_eFrozenError;
extern VALUE rb_eSecurityError;
extern VALUE rb_eSystemCallError;
extern VALUE rb_eThreadError;
extern VALUE rb_eTypeError;
extern VALUE rb_eZeroDivError;
extern VALUE rb_eNotImpError;
extern VALUE rb_eNoMemError;
extern VALUE rb_eNoMethodError;
extern VALUE rb_eFloatDomainError;
extern VALUE rb_eLocalJumpError;
extern VALUE rb_eSysStackError;
extern VALUE rb_eRegexpError;
extern VALUE rb_eEncodingError;
extern VALUE rb_eEncCompatError;

extern VALUE rb_eScriptError;
extern VALUE rb_eNameError;
extern VALUE rb_eSyntaxError;
extern VALUE rb_eLoadError;

extern VALUE rb_eMathDomainError;

extern VALUE rb_stdin, rb_stdout, rb_stderr;

static inline VALUE
rb_class_of(VALUE obj)
{
    if (((VALUE)(obj) & RUBY_IMMEDIATE_MASK)) {
 if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) return rb_cInteger;
 if (((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) return rb_cFloat;
 if (obj == ((VALUE)RUBY_Qtrue)) return rb_cTrueClass;
 if ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) return rb_cSymbol;
    }
    else if (!!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 if (obj == ((VALUE)RUBY_Qnil)) return rb_cNilClass;
 if (obj == ((VALUE)RUBY_Qfalse)) return rb_cFalseClass;
    }
    return ((struct RBasic*)(obj))->klass;
}

static inline int
rb_type(VALUE obj)
{
    if (((VALUE)(obj) & RUBY_IMMEDIATE_MASK)) {
 if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) return RUBY_T_FIXNUM;
        if (((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) return RUBY_T_FLOAT;
        if (obj == ((VALUE)RUBY_Qtrue)) return RUBY_T_TRUE;
 if ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) return RUBY_T_SYMBOL;
 if (obj == ((VALUE)RUBY_Qundef)) return RUBY_T_UNDEF;
    }
    else if (!!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 if (obj == ((VALUE)RUBY_Qnil)) return RUBY_T_NIL;
 if (obj == ((VALUE)RUBY_Qfalse)) return RUBY_T_FALSE;
    }
    return (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK);
}


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

st_table *st_init_table(const struct st_hash_type *);
st_table *st_init_table_with_size(const struct st_hash_type *, st_index_t);
st_table *st_init_numtable(void);
st_table *st_init_numtable_with_size(st_index_t);
st_table *st_init_strtable(void);
st_table *st_init_strtable_with_size(st_index_t);
st_table *st_init_strcasetable(void);
st_table *st_init_strcasetable_with_size(st_index_t);
int st_delete(st_table *, st_data_t *, st_data_t *);
int st_delete_safe(st_table *, st_data_t *, st_data_t *, st_data_t);
int st_shift(st_table *, st_data_t *, st_data_t *);
int st_insert(st_table *, st_data_t, st_data_t);
int st_insert2(st_table *, st_data_t, st_data_t, st_data_t (*)(st_data_t));
int st_lookup(st_table *, st_data_t, st_data_t *);
int st_get_key(st_table *, st_data_t, st_data_t *);
typedef int st_update_callback_func(st_data_t *key, st_data_t *value, st_data_t arg, int existing);



int st_update(st_table *table, st_data_t key, st_update_callback_func *func, st_data_t arg);
int st_foreach(st_table *, int (*)(), st_data_t);
int st_foreach_check(st_table *, int (*)(), st_data_t, st_data_t);
st_index_t st_keys(st_table *table, st_data_t *keys, st_index_t size);
st_index_t st_keys_check(st_table *table, st_data_t *keys, st_index_t size, st_data_t never);
st_index_t st_values(st_table *table, st_data_t *values, st_index_t size);
st_index_t st_values_check(st_table *table, st_data_t *values, st_index_t size, st_data_t never);
void st_add_direct(st_table *, st_data_t, st_data_t);
void st_free_table(st_table *);
void st_cleanup_safe(st_table *, st_data_t);
void st_clear(st_table *);
st_table *st_copy(st_table *);
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



void rb_mem_clear(register VALUE*, register long);
VALUE rb_assoc_new(VALUE, VALUE);
VALUE rb_check_array_type(VALUE);
VALUE rb_ary_new(void);
VALUE rb_ary_new_capa(long capa);
VALUE rb_ary_new_from_args(long n, ...);
VALUE rb_ary_new_from_values(long n, const VALUE *elts);
VALUE rb_ary_tmp_new(long);
void rb_ary_free(VALUE);
void rb_ary_modify(VALUE);
VALUE rb_ary_freeze(VALUE);
VALUE rb_ary_shared_with_p(VALUE, VALUE);
VALUE rb_ary_aref(int, const VALUE*, VALUE);
VALUE rb_ary_subseq(VALUE, long, long);
void rb_ary_store(VALUE, long, VALUE);
VALUE rb_ary_dup(VALUE);
VALUE rb_ary_resurrect(VALUE ary);
VALUE rb_ary_to_ary(VALUE);
VALUE rb_ary_to_s(VALUE);
VALUE rb_ary_cat(VALUE, const VALUE *, long);
VALUE rb_ary_push(VALUE, VALUE);
VALUE rb_ary_pop(VALUE);
VALUE rb_ary_shift(VALUE);
VALUE rb_ary_unshift(VALUE, VALUE);
VALUE rb_ary_entry(VALUE, long);
VALUE rb_ary_each(VALUE);
VALUE rb_ary_join(VALUE, VALUE);
VALUE rb_ary_reverse(VALUE);
VALUE rb_ary_rotate(VALUE, long);
VALUE rb_ary_sort(VALUE);
VALUE rb_ary_sort_bang(VALUE);
VALUE rb_ary_delete(VALUE, VALUE);
VALUE rb_ary_delete_at(VALUE, long);
VALUE rb_ary_clear(VALUE);
VALUE rb_ary_plus(VALUE, VALUE);
VALUE rb_ary_concat(VALUE, VALUE);
VALUE rb_ary_assoc(VALUE, VALUE);
VALUE rb_ary_rassoc(VALUE, VALUE);
VALUE rb_ary_includes(VALUE, VALUE);
VALUE rb_ary_cmp(VALUE, VALUE);
VALUE rb_ary_replace(VALUE copy, VALUE orig);
VALUE rb_get_values_at(VALUE, long, int, const VALUE*, VALUE(*)(VALUE,long));
VALUE rb_ary_resize(VALUE ary, long len);




VALUE rb_big_new(size_t, int);
int rb_bigzero_p(VALUE x);
VALUE rb_big_clone(VALUE);
void rb_big_2comp(VALUE);
VALUE rb_big_norm(VALUE);
void rb_big_resize(VALUE big, size_t len);
VALUE rb_cstr_to_inum(const char*, int, int);
VALUE rb_str_to_inum(VALUE, int, int);
VALUE rb_cstr2inum(const char*, int);
VALUE rb_str2inum(VALUE, int);
VALUE rb_big2str(VALUE, int);
long rb_big2long(VALUE);

unsigned long rb_big2ulong(VALUE);


long long rb_big2ll(VALUE);
unsigned long long rb_big2ull(VALUE);

void rb_big_pack(VALUE val, unsigned long *buf, long num_longs);
VALUE rb_big_unpack(unsigned long *buf, long num_longs);
int rb_uv_to_utf8(char[6],unsigned long);
VALUE rb_dbl2big(double);
double rb_big2dbl(VALUE);
VALUE rb_big_cmp(VALUE, VALUE);
VALUE rb_big_eq(VALUE, VALUE);
VALUE rb_big_eql(VALUE, VALUE);
VALUE rb_big_plus(VALUE, VALUE);
VALUE rb_big_minus(VALUE, VALUE);
VALUE rb_big_mul(VALUE, VALUE);
VALUE rb_big_div(VALUE, VALUE);
VALUE rb_big_idiv(VALUE, VALUE);
VALUE rb_big_modulo(VALUE, VALUE);
VALUE rb_big_divmod(VALUE, VALUE);
VALUE rb_big_pow(VALUE, VALUE);
VALUE rb_big_and(VALUE, VALUE);
VALUE rb_big_or(VALUE, VALUE);
VALUE rb_big_xor(VALUE, VALUE);
VALUE rb_big_lshift(VALUE, VALUE);
VALUE rb_big_rshift(VALUE, VALUE);
int rb_integer_pack(VALUE val, void *words, size_t numwords, size_t wordsize, size_t nails, int flags);
VALUE rb_integer_unpack(const void *words, size_t numwords, size_t wordsize, size_t nails, int flags);
size_t rb_absint_size(VALUE val, int *nlz_bits_ret);
size_t rb_absint_numwords(VALUE val, size_t word_numbits, size_t *nlz_bits_ret);
int rb_absint_singlebit_p(VALUE val);


VALUE rb_rational_raw(VALUE, VALUE);


VALUE rb_rational_new(VALUE, VALUE);


VALUE rb_Rational(VALUE, VALUE);


VALUE rb_rational_num(VALUE rat);
VALUE rb_rational_den(VALUE rat);
VALUE rb_flt_rationalize_with_prec(VALUE, VALUE);
VALUE rb_flt_rationalize(VALUE);

VALUE rb_complex_raw(VALUE, VALUE);


VALUE rb_complex_new(VALUE, VALUE);


VALUE rb_complex_polar(VALUE, VALUE);
VALUE rb_Complex(VALUE, VALUE);



VALUE rb_class_new(VALUE);
VALUE rb_mod_init_copy(VALUE, VALUE);
VALUE rb_singleton_class_clone(VALUE);
void rb_singleton_class_attached(VALUE,VALUE);
void rb_check_inheritable(VALUE);
VALUE rb_define_class_id(ID, VALUE);
VALUE rb_define_class_id_under(VALUE, ID, VALUE);
VALUE rb_module_new(void);
VALUE rb_define_module_id(ID);
VALUE rb_define_module_id_under(VALUE, ID);
VALUE rb_mod_included_modules(VALUE);
VALUE rb_mod_include_p(VALUE, VALUE);
VALUE rb_mod_ancestors(VALUE);
VALUE rb_class_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_public_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_protected_instance_methods(int, const VALUE*, VALUE);
VALUE rb_class_private_instance_methods(int, const VALUE*, VALUE);
VALUE rb_obj_singleton_methods(int, const VALUE*, VALUE);
void rb_define_method_id(VALUE, ID, VALUE (*)(), int);
void rb_frozen_class_p(VALUE);
void rb_undef(VALUE, ID);
void rb_define_protected_method(VALUE, const char*, VALUE (*)(), int);
void rb_define_private_method(VALUE, const char*, VALUE (*)(), int);
void rb_define_singleton_method(VALUE, const char*, VALUE(*)(), int);
VALUE rb_singleton_class(VALUE);

int rb_cmpint(VALUE, VALUE, VALUE);
 void rb_cmperr(VALUE, VALUE);

VALUE rb_fiber_new(VALUE (*)(), VALUE);
VALUE rb_fiber_resume(VALUE fib, int argc, const VALUE *argv);
VALUE rb_fiber_yield(int argc, const VALUE *argv);
VALUE rb_fiber_current(void);
VALUE rb_fiber_alive_p(VALUE);

VALUE rb_enum_values_pack(int, const VALUE*);

VALUE rb_enumeratorize(VALUE, VALUE, int, const VALUE *);
typedef VALUE rb_enumerator_size_func(VALUE, VALUE, VALUE);
VALUE rb_enumeratorize_with_size(VALUE, VALUE, int, const VALUE *, rb_enumerator_size_func *);
VALUE rb_exc_new(VALUE, const char*, long);
VALUE rb_exc_new_cstr(VALUE, const char*);
VALUE rb_exc_new_str(VALUE, VALUE);


 void rb_loaderror(const char*, ...) ;
 void rb_loaderror_with_path(VALUE path, const char*, ...) ;
 void rb_name_error(ID, const char*, ...) ;
 void rb_name_error_str(VALUE, const char*, ...) ;
 void rb_invalid_str(const char*, const char*);
 void rb_error_frozen(const char*);
 void rb_error_frozen_object(VALUE);
void rb_error_untrusted(VALUE);
void rb_check_frozen(VALUE);
void rb_check_trusted(VALUE);
void rb_check_copyable(VALUE obj, VALUE orig);






int rb_sourceline(void);
const char *rb_sourcefile(void);
VALUE rb_check_funcall(VALUE, ID, int, const VALUE*);

 void rb_error_arity(int, int, int);
static inline int
rb_check_arity(int argc, int min, int max)
{
    if ((argc < min) || (max != (-1) && argc > max))
 rb_error_arity(argc, min, max);
    return argc;
}



typedef struct {
    int maxfd;
    fd_set *fdset;
} rb_fdset_t;

void rb_fd_init(rb_fdset_t *);
void rb_fd_term(rb_fdset_t *);
void rb_fd_zero(rb_fdset_t *);
void rb_fd_set(int, rb_fdset_t *);
void rb_fd_clr(int, rb_fdset_t *);
int rb_fd_isset(int, const rb_fdset_t *);
void rb_fd_copy(rb_fdset_t *, const fd_set *, int);
void rb_fd_dup(rb_fdset_t *dst, const rb_fdset_t *src);

struct timeval;
int rb_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *, struct timeval *);
 void rb_exc_raise(VALUE);
 void rb_exc_fatal(VALUE);
 VALUE rb_f_exit(int, const VALUE*);
 VALUE rb_f_abort(int, const VALUE*);
void rb_remove_method(VALUE, const char*);
void rb_remove_method_id(VALUE, ID);

typedef VALUE (*rb_alloc_func_t)(VALUE);
void rb_define_alloc_func(VALUE, rb_alloc_func_t);
void rb_undef_alloc_func(VALUE);
rb_alloc_func_t rb_get_alloc_func(VALUE);
void rb_clear_constant_cache(void);
void rb_clear_method_cache_by_class(VALUE);
void rb_alias(VALUE, ID, ID);
void rb_attr(VALUE,ID,int,int,int);
int rb_method_boundp(VALUE, ID, int);
int rb_method_basic_definition_p(VALUE, ID);
VALUE rb_eval_cmd(VALUE, VALUE, int);
int rb_obj_respond_to(VALUE, ID, int);
int rb_respond_to(VALUE, ID);
 VALUE rb_f_notimplement(int argc, const VALUE *argv, VALUE obj);




 void rb_interrupt(void);
VALUE rb_apply(VALUE, ID, VALUE);
void rb_backtrace(void);
ID rb_frame_this_func(void);
VALUE rb_obj_instance_eval(int, const VALUE*, VALUE);
VALUE rb_obj_instance_exec(int, const VALUE*, VALUE);
VALUE rb_mod_module_eval(int, const VALUE*, VALUE);
VALUE rb_mod_module_exec(int, const VALUE*, VALUE);
void rb_load(VALUE, int);
void rb_load_protect(VALUE, int, int*);
 void rb_jump_tag(int);
int rb_provided(const char*);
int rb_feature_provided(const char *, const char **);
void rb_provide(const char*);
VALUE rb_f_require(VALUE, VALUE);
VALUE rb_require_safe(VALUE, int);
void rb_obj_call_init(VALUE, int, const VALUE*);
VALUE rb_class_new_instance(int, const VALUE*, VALUE);
VALUE rb_block_proc(void);
VALUE rb_block_lambda(void);
VALUE rb_proc_new(VALUE (*)( ), VALUE);
VALUE rb_obj_is_proc(VALUE);
VALUE rb_proc_call(VALUE, VALUE);
VALUE rb_proc_call_with_block(VALUE, int argc, const VALUE *argv, VALUE);
int rb_proc_arity(VALUE);
VALUE rb_proc_lambda_p(VALUE);
VALUE rb_binding_new(void);
VALUE rb_obj_method(VALUE, VALUE);
VALUE rb_obj_is_method(VALUE);
VALUE rb_method_call(int, const VALUE*, VALUE);
VALUE rb_method_call_with_block(int, const VALUE *, VALUE, VALUE);
int rb_mod_method_arity(VALUE, ID);
int rb_obj_method_arity(VALUE, ID);
VALUE rb_protect(VALUE (*)(VALUE), VALUE, int*);
void rb_set_end_proc(void (*)(VALUE), VALUE);
void rb_exec_end_proc(void);
void rb_thread_schedule(void);
void rb_thread_wait_fd(int);
int rb_thread_fd_writable(int);
void rb_thread_fd_close(int);
int rb_thread_alone(void);
void rb_thread_sleep(int);
void rb_thread_sleep_forever(void);
void rb_thread_sleep_deadly(void);
VALUE rb_thread_stop(void);
VALUE rb_thread_wakeup(VALUE);
VALUE rb_thread_wakeup_alive(VALUE);
VALUE rb_thread_run(VALUE);
VALUE rb_thread_kill(VALUE);
VALUE rb_thread_create(VALUE (*)(), void*);
int rb_thread_fd_select(int, rb_fdset_t *, rb_fdset_t *, rb_fdset_t *, struct timeval *);
void rb_thread_wait_for(struct timeval);
VALUE rb_thread_current(void);
VALUE rb_thread_main(void);
VALUE rb_thread_local_aref(VALUE, ID);
VALUE rb_thread_local_aset(VALUE, ID, VALUE);
void rb_thread_atfork(void);
void rb_thread_atfork_before_exec(void);
VALUE rb_exec_recursive(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE);
VALUE rb_exec_recursive_paired(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE,VALUE);
VALUE rb_exec_recursive_outer(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE);
VALUE rb_exec_recursive_paired_outer(VALUE(*)(VALUE, VALUE, int),VALUE,VALUE,VALUE);

VALUE rb_dir_getwd(void);

VALUE rb_file_s_expand_path(int, const VALUE *);
VALUE rb_file_expand_path(VALUE, VALUE);
VALUE rb_file_s_absolute_path(int, const VALUE *);
VALUE rb_file_absolute_path(VALUE, VALUE);
VALUE rb_file_dirname(VALUE fname);
int rb_find_file_ext_safe(VALUE*, const char* const*, int);
VALUE rb_find_file_safe(VALUE, int);
int rb_find_file_ext(VALUE*, const char* const*);
VALUE rb_find_file(VALUE);
VALUE rb_file_directory_p(VALUE,VALUE);
VALUE rb_str_encode_ospath(VALUE);
int rb_is_absolute_path(const char *);

 void rb_memerror(void);
 int rb_during_gc(void);
void rb_gc_mark_locations(const VALUE*, const VALUE*);
void rb_mark_tbl(struct st_table*);
void rb_mark_set(struct st_table*);
void rb_mark_hash(struct st_table*);
void rb_gc_mark_maybe(VALUE);
void rb_gc_mark(VALUE);
void rb_gc_force_recycle(VALUE);
void rb_gc(void);
void rb_gc_copy_finalizer(VALUE,VALUE);
void rb_gc_finalize_deferred(void);
void rb_gc_call_finalizer_at_exit(void);
VALUE rb_gc_enable(void);
VALUE rb_gc_disable(void);
VALUE rb_gc_start(void);
VALUE rb_define_finalizer(VALUE, VALUE);
VALUE rb_undefine_finalizer(VALUE);
size_t rb_gc_count(void);
size_t rb_gc_stat(VALUE);
VALUE rb_gc_latest_gc_info(VALUE);
void rb_gc_adjust_memory_usage(ssize_t);

void st_foreach_safe(struct st_table *, int (*)(), st_data_t);
VALUE rb_check_hash_type(VALUE);
void rb_hash_foreach(VALUE, int (*)(), VALUE);
VALUE rb_hash(VALUE);
VALUE rb_hash_new(void);
VALUE rb_hash_dup(VALUE);
VALUE rb_hash_freeze(VALUE);
VALUE rb_hash_aref(VALUE, VALUE);
VALUE rb_hash_lookup(VALUE, VALUE);
VALUE rb_hash_lookup2(VALUE, VALUE, VALUE);
VALUE rb_hash_fetch(VALUE, VALUE);
VALUE rb_hash_aset(VALUE, VALUE, VALUE);
VALUE rb_hash_clear(VALUE);
VALUE rb_hash_delete_if(VALUE);
VALUE rb_hash_delete(VALUE,VALUE);
VALUE rb_hash_set_ifnone(VALUE hash, VALUE ifnone);
typedef VALUE rb_hash_update_func(VALUE newkey, VALUE oldkey, VALUE value);
VALUE rb_hash_update_by(VALUE hash1, VALUE hash2, rb_hash_update_func *func);
struct st_table *rb_hash_tbl(VALUE);
int rb_path_check(const char*);
int rb_env_path_tainted(void);
VALUE rb_env_clear(void);
VALUE rb_hash_size(VALUE);


extern VALUE rb_fs;
extern VALUE rb_output_fs;
extern VALUE rb_rs;
extern VALUE rb_default_rs;
extern VALUE rb_output_rs;
VALUE rb_io_write(VALUE, VALUE);
VALUE rb_io_gets(VALUE);
VALUE rb_io_getbyte(VALUE);
VALUE rb_io_ungetc(VALUE, VALUE);
VALUE rb_io_ungetbyte(VALUE, VALUE);
VALUE rb_io_close(VALUE);
VALUE rb_io_flush(VALUE);
VALUE rb_io_eof(VALUE);
VALUE rb_io_binmode(VALUE);
VALUE rb_io_ascii8bit_binmode(VALUE);
VALUE rb_io_addstr(VALUE, VALUE);
VALUE rb_io_printf(int, const VALUE*, VALUE);
VALUE rb_io_print(int, const VALUE*, VALUE);
VALUE rb_io_puts(int, const VALUE*, VALUE);
VALUE rb_io_fdopen(int, int, const char*);
VALUE rb_io_get_io(VALUE);
VALUE rb_file_open(const char*, const char*);
VALUE rb_file_open_str(VALUE, const char*);
VALUE rb_gets(void);
void rb_write_error(const char*);
void rb_write_error2(const char*, long);
void rb_close_before_exec(int lowfd, int maxhint, VALUE noclose_fds);
int rb_pipe(int *pipes);
int rb_reserved_fd_p(int fd);
int rb_cloexec_open(const char *pathname, int flags, mode_t mode);
int rb_cloexec_dup(int oldfd);
int rb_cloexec_dup2(int oldfd, int newfd);
int rb_cloexec_pipe(int fildes[2]);
int rb_cloexec_fcntl_dupfd(int fd, int minfd);

void rb_update_max_fd(int fd);
void rb_fd_fix_cloexec(int fd);

VALUE rb_marshal_dump(VALUE, VALUE);
VALUE rb_marshal_load(VALUE);
void rb_marshal_define_compat(VALUE newclass, VALUE oldclass, VALUE (*dumper)(VALUE), VALUE (*loader)(VALUE, VALUE));

 void rb_num_zerodiv(void);

VALUE rb_num_coerce_bin(VALUE, VALUE, ID);
VALUE rb_num_coerce_cmp(VALUE, VALUE, ID);
VALUE rb_num_coerce_relop(VALUE, VALUE, ID);
VALUE rb_num_coerce_bit(VALUE, VALUE, ID);
VALUE rb_num2fix(VALUE);
VALUE rb_fix2str(VALUE, int);
 VALUE rb_dbl_cmp(double, double);

int rb_eql(VALUE, VALUE);
VALUE rb_any_to_s(VALUE);
VALUE rb_inspect(VALUE);
VALUE rb_obj_is_instance_of(VALUE, VALUE);
VALUE rb_obj_is_kind_of(VALUE, VALUE);
VALUE rb_obj_alloc(VALUE);
VALUE rb_obj_clone(VALUE);
VALUE rb_obj_dup(VALUE);
VALUE rb_obj_init_copy(VALUE,VALUE);
VALUE rb_obj_taint(VALUE);
 VALUE rb_obj_tainted(VALUE);
VALUE rb_obj_untaint(VALUE);
VALUE rb_obj_untrust(VALUE);
 VALUE rb_obj_untrusted(VALUE);
VALUE rb_obj_trust(VALUE);
VALUE rb_obj_freeze(VALUE);
 VALUE rb_obj_frozen_p(VALUE);
VALUE rb_obj_id(VALUE);
VALUE rb_obj_class(VALUE);
 VALUE rb_class_real(VALUE);
 VALUE rb_class_inherited_p(VALUE, VALUE);
VALUE rb_class_superclass(VALUE);
VALUE rb_class_get_superclass(VALUE);
VALUE rb_convert_type(VALUE,int,const char*,const char*);
VALUE rb_check_convert_type(VALUE,int,const char*,const char*);
VALUE rb_check_to_integer(VALUE, const char *);
VALUE rb_check_to_float(VALUE);
VALUE rb_to_int(VALUE);
VALUE rb_check_to_int(VALUE);
VALUE rb_Integer(VALUE);
VALUE rb_to_float(VALUE);
VALUE rb_Float(VALUE);
VALUE rb_String(VALUE);
VALUE rb_Array(VALUE);
VALUE rb_Hash(VALUE);
double rb_cstr_to_dbl(const char*, int);
double rb_str_to_dbl(VALUE, int);

ID rb_id_attrset(ID);
 int rb_is_const_id(ID);
 int rb_is_global_id(ID);
 int rb_is_instance_id(ID);
 int rb_is_attrset_id(ID);
 int rb_is_class_id(ID);
 int rb_is_local_id(ID);
 int rb_is_junk_id(ID);
int rb_symname_p(const char*);
int rb_sym_interned_p(VALUE);
VALUE rb_backref_get(void);
void rb_backref_set(VALUE);
VALUE rb_lastline_get(void);
void rb_lastline_set(VALUE);

void rb_last_status_set(int status, pid_t pid);
VALUE rb_last_status_get(void);
int rb_proc_exec(const char*);
 VALUE rb_f_exec(int, const VALUE*);
pid_t rb_waitpid(pid_t pid, int *status, int flags);
void rb_syswait(pid_t pid);
pid_t rb_spawn(int, const VALUE*);
pid_t rb_spawn_err(int, const VALUE*, char*, size_t);
VALUE rb_proc_times(VALUE);
VALUE rb_detach_process(pid_t pid);

VALUE rb_range_new(VALUE, VALUE, int);
VALUE rb_range_beg_len(VALUE, long*, long*, long, int);
int rb_range_values(VALUE range, VALUE *begp, VALUE *endp, int *exclp);

unsigned int rb_genrand_int32(void);
double rb_genrand_real(void);
void rb_reset_random_seed(void);
VALUE rb_random_bytes(VALUE rnd, long n);
VALUE rb_random_int(VALUE rnd, VALUE max);
unsigned int rb_random_int32(VALUE rnd);
double rb_random_real(VALUE rnd);
unsigned long rb_random_ulong_limited(VALUE rnd, unsigned long limit);
unsigned long rb_genrand_ulong_limited(unsigned long i);


int rb_memcicmp(const void*,const void*,long);
void rb_match_busy(VALUE);
VALUE rb_reg_nth_defined(int, VALUE);
VALUE rb_reg_nth_match(int, VALUE);
int rb_reg_backref_number(VALUE match, VALUE backref);
VALUE rb_reg_last_match(VALUE);
VALUE rb_reg_match_pre(VALUE);
VALUE rb_reg_match_post(VALUE);
VALUE rb_reg_match_last(VALUE);

VALUE rb_reg_new_str(VALUE, int);
VALUE rb_reg_new(const char *, long, int);
VALUE rb_reg_alloc(void);
VALUE rb_reg_init_str(VALUE re, VALUE s, int options);
VALUE rb_reg_match(VALUE, VALUE);
VALUE rb_reg_match2(VALUE);
int rb_reg_options(VALUE);


extern VALUE rb_argv0;
VALUE rb_get_argv(void);
void *rb_load_file(const char*);
void *rb_load_file_str(VALUE);

VALUE rb_f_kill(int, const VALUE*);


void (*ruby_posix_signal(int, void (*)(int)))(int);

void rb_trap_exit(void);
void rb_trap_exec(void);
const char *ruby_signal_name(int);
void ruby_default_signal(int);

VALUE rb_f_sprintf(int, const VALUE*);
VALUE rb_sprintf(const char*, ...) ;
VALUE rb_vsprintf(const char*, va_list);
VALUE rb_str_catf(VALUE, const char*, ...) ;
VALUE rb_str_vcatf(VALUE, const char*, va_list);
VALUE rb_str_format(int, const VALUE *, VALUE);

VALUE rb_str_new(const char*, long);
VALUE rb_str_new_cstr(const char*);
VALUE rb_str_new_shared(VALUE);
VALUE rb_str_new_frozen(VALUE);
VALUE rb_str_new_with_class(VALUE, const char*, long);
VALUE rb_tainted_str_new_cstr(const char*);
VALUE rb_tainted_str_new(const char*, long);
VALUE rb_external_str_new(const char*, long);
VALUE rb_external_str_new_cstr(const char*);
VALUE rb_locale_str_new(const char*, long);
VALUE rb_locale_str_new_cstr(const char*);
VALUE rb_filesystem_str_new(const char*, long);
VALUE rb_filesystem_str_new_cstr(const char*);
VALUE rb_str_buf_new(long);
VALUE rb_str_buf_new_cstr(const char*);
VALUE rb_str_buf_new2(const char*);
VALUE rb_str_tmp_new(long);
VALUE rb_usascii_str_new(const char*, long);
VALUE rb_usascii_str_new_cstr(const char*);
VALUE rb_utf8_str_new(const char*, long);
VALUE rb_utf8_str_new_cstr(const char*);
VALUE rb_str_new_static(const char *, long);
VALUE rb_usascii_str_new_static(const char *, long);
VALUE rb_utf8_str_new_static(const char *, long);
void rb_str_free(VALUE);
void rb_str_shared_replace(VALUE, VALUE);
VALUE rb_str_buf_append(VALUE, VALUE);
VALUE rb_str_buf_cat(VALUE, const char*, long);
VALUE rb_str_buf_cat2(VALUE, const char*);
VALUE rb_str_buf_cat_ascii(VALUE, const char*);
VALUE rb_obj_as_string(VALUE);
VALUE rb_check_string_type(VALUE);
void rb_must_asciicompat(VALUE);
VALUE rb_str_dup(VALUE);
VALUE rb_str_resurrect(VALUE str);
VALUE rb_str_locktmp(VALUE);
VALUE rb_str_unlocktmp(VALUE);
VALUE rb_str_dup_frozen(VALUE);

VALUE rb_str_plus(VALUE, VALUE);
VALUE rb_str_times(VALUE, VALUE);
long rb_str_sublen(VALUE, long);
VALUE rb_str_substr(VALUE, long, long);
VALUE rb_str_subseq(VALUE, long, long);
char *rb_str_subpos(VALUE, long, long*);
void rb_str_modify(VALUE);
void rb_str_modify_expand(VALUE, long);
VALUE rb_str_freeze(VALUE);
void rb_str_set_len(VALUE, long);
VALUE rb_str_resize(VALUE, long);
VALUE rb_str_cat(VALUE, const char*, long);
VALUE rb_str_cat_cstr(VALUE, const char*);
VALUE rb_str_cat2(VALUE, const char*);
VALUE rb_str_append(VALUE, VALUE);
VALUE rb_str_concat(VALUE, VALUE);
st_index_t rb_memhash(const void *ptr, long len);
st_index_t rb_hash_start(st_index_t);
st_index_t rb_hash_uint32(st_index_t, uint32_t);
st_index_t rb_hash_uint(st_index_t, st_index_t);
st_index_t rb_hash_end(st_index_t);



st_index_t rb_str_hash(VALUE);
int rb_str_hash_cmp(VALUE,VALUE);
int rb_str_comparable(VALUE, VALUE);
int rb_str_cmp(VALUE, VALUE);
VALUE rb_str_equal(VALUE str1, VALUE str2);
VALUE rb_str_drop_bytes(VALUE, long);
void rb_str_update(VALUE, long, long, VALUE);
VALUE rb_str_replace(VALUE, VALUE);
VALUE rb_str_inspect(VALUE);
VALUE rb_str_dump(VALUE);
VALUE rb_str_split(VALUE, const char*);
void rb_str_setter(VALUE, ID, VALUE*);
VALUE rb_str_intern(VALUE);
VALUE rb_sym_to_s(VALUE);
long rb_str_strlen(VALUE);
VALUE rb_str_length(VALUE);
long rb_str_offset(VALUE, long);
 size_t rb_str_capacity(VALUE);
VALUE rb_str_ellipsize(VALUE, long);
VALUE rb_str_scrub(VALUE, VALUE);

VALUE rb_sym_all_symbols(void);
VALUE rb_struct_new(VALUE, ...);
VALUE rb_struct_define(const char*, ...);
VALUE rb_struct_define_under(VALUE, const char*, ...);
VALUE rb_struct_alloc(VALUE, VALUE);
VALUE rb_struct_initialize(VALUE, VALUE);
VALUE rb_struct_aref(VALUE, VALUE);
VALUE rb_struct_aset(VALUE, VALUE, VALUE);
VALUE rb_struct_getmember(VALUE, ID);
VALUE rb_struct_s_members(VALUE);
VALUE rb_struct_members(VALUE);
VALUE rb_struct_size(VALUE s);
VALUE rb_struct_alloc_noinit(VALUE);
VALUE rb_struct_define_without_accessor(const char *, VALUE, rb_alloc_func_t, ...);
VALUE rb_struct_define_without_accessor_under(VALUE outer, const char *class_name, VALUE super, rb_alloc_func_t alloc, ...);


typedef void rb_unblock_function_t(void *);
typedef VALUE rb_blocking_function_t(void *);
void rb_thread_check_ints(void);
int rb_thread_interrupted(VALUE thval);



VALUE rb_mutex_new(void);
VALUE rb_mutex_locked_p(VALUE mutex);
VALUE rb_mutex_trylock(VALUE mutex);
VALUE rb_mutex_lock(VALUE mutex);
VALUE rb_mutex_unlock(VALUE mutex);
VALUE rb_mutex_sleep(VALUE self, VALUE timeout);
VALUE rb_mutex_synchronize(VALUE mutex, VALUE (*func)(VALUE arg), VALUE arg);

void rb_timespec_now(struct timespec *);
VALUE rb_time_new(time_t, long);
VALUE rb_time_nano_new(time_t, long);
VALUE rb_time_timespec_new(const struct timespec *, int);
VALUE rb_time_num_new(VALUE, VALUE);
struct timeval rb_time_interval(VALUE num);
struct timeval rb_time_timeval(VALUE time);
struct timespec rb_time_timespec(VALUE time);
VALUE rb_time_utc_offset(VALUE time);

VALUE rb_mod_name(VALUE);
VALUE rb_class_path(VALUE);
VALUE rb_class_path_cached(VALUE);
void rb_set_class_path(VALUE, VALUE, const char*);
void rb_set_class_path_string(VALUE, VALUE, VALUE);
VALUE rb_path_to_class(VALUE);
VALUE rb_path2class(const char*);
void rb_name_class(VALUE, ID);
VALUE rb_class_name(VALUE);
VALUE rb_autoload_load(VALUE, ID);
VALUE rb_autoload_p(VALUE, ID);
VALUE rb_f_trace_var(int, const VALUE*);
VALUE rb_f_untrace_var(int, const VALUE*);
VALUE rb_f_global_variables(void);
void rb_alias_variable(ID, ID);
void rb_copy_generic_ivar(VALUE,VALUE);
void rb_free_generic_ivar(VALUE);
VALUE rb_ivar_get(VALUE, ID);
VALUE rb_ivar_set(VALUE, ID, VALUE);
VALUE rb_ivar_defined(VALUE, ID);
void rb_ivar_foreach(VALUE, int (*)(), st_data_t);
st_index_t rb_ivar_count(VALUE);
VALUE rb_attr_get(VALUE, ID);
VALUE rb_obj_instance_variables(VALUE);
VALUE rb_obj_remove_instance_variable(VALUE, VALUE);
void *rb_mod_const_at(VALUE, void*);
void *rb_mod_const_of(VALUE, void*);
VALUE rb_const_list(void*);
VALUE rb_mod_constants(int, const VALUE *, VALUE);
VALUE rb_mod_remove_const(VALUE, VALUE);
int rb_const_defined(VALUE, ID);
int rb_const_defined_at(VALUE, ID);
int rb_const_defined_from(VALUE, ID);
VALUE rb_const_get(VALUE, ID);
VALUE rb_const_get_at(VALUE, ID);
VALUE rb_const_get_from(VALUE, ID);
void rb_const_set(VALUE, ID, VALUE);
VALUE rb_const_remove(VALUE, ID);
 VALUE rb_mod_const_missing(VALUE,VALUE);
VALUE rb_cvar_defined(VALUE, ID);
void rb_cvar_set(VALUE, ID, VALUE);
VALUE rb_cvar_get(VALUE, ID);
void rb_cv_set(VALUE, const char*, VALUE);
VALUE rb_cv_get(VALUE, const char*);
void rb_define_class_variable(VALUE, const char*, VALUE);
VALUE rb_mod_class_variables(int, const VALUE*, VALUE);
VALUE rb_mod_remove_cvar(VALUE, VALUE);

ID rb_frame_callee(void);
VALUE rb_str_succ(VALUE);
VALUE rb_time_succ(VALUE);
VALUE rb_make_backtrace(void);
VALUE rb_make_exception(int, const VALUE*);


static inline void
rb_clone_setup(VALUE clone, VALUE obj)
{
    rb_obj_setup(clone, rb_singleton_class_clone(obj),
                 ((struct RBasic*)(obj))->flags & ~(((VALUE)RUBY_FL_PROMOTED0)|((VALUE)RUBY_FL_PROMOTED1)|((VALUE)RUBY_FL_FINALIZE)));
    rb_singleton_class_attached((((struct RBasic*)(clone))->klass), clone);
    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((RUBY_FL_EXIVAR))):0)) rb_copy_generic_ivar(clone, obj);
}

static inline void
rb_dup_setup(VALUE dup, VALUE obj)
{
    rb_obj_setup(dup, rb_obj_class(obj), (((struct RBasic*)(obj))->flags&(RUBY_FL_DUPPED)));
    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((RUBY_FL_EXIVAR))):0)) rb_copy_generic_ivar(dup, obj);
}

static inline long
rb_array_len(VALUE a)
{
    return (((struct RBasic*)(a))->flags & (VALUE)RARRAY_EMBED_FLAG) ?
 (long)((((struct RBasic*)(a))->flags >> RARRAY_EMBED_LEN_SHIFT) & ((VALUE)RARRAY_EMBED_LEN_MASK >> RARRAY_EMBED_LEN_SHIFT)) : ((struct RArray*)(a))->as.heap.len;
}
static inline const VALUE *
rb_array_const_ptr(VALUE a)
{
    return ((((struct RBasic*)(a))->flags & (VALUE)RARRAY_EMBED_FLAG) ? ((struct RArray*)(a))->as.ary : ((struct RArray*)(a))->as.heap.ptr);

}
int ruby_native_thread_p(void);
typedef uint32_t rb_event_flag_t;
typedef void (*rb_event_hook_func_t)(rb_event_flag_t evflag, VALUE data, VALUE self, ID mid, VALUE klass);


void rb_add_event_hook(rb_event_hook_func_t func, rb_event_flag_t events, VALUE data);
int rb_remove_event_hook(rb_event_hook_func_t func);



static inline int rb_isascii(int c){ return '\0' <= c && c <= '\x7f'; }
static inline int rb_isupper(int c){ return 'A' <= c && c <= 'Z'; }
static inline int rb_islower(int c){ return 'a' <= c && c <= 'z'; }
static inline int rb_isalpha(int c){ return rb_isupper(c) || rb_islower(c); }
static inline int rb_isdigit(int c){ return '0' <= c && c <= '9'; }
static inline int rb_isalnum(int c){ return rb_isalpha(c) || rb_isdigit(c); }
static inline int rb_isxdigit(int c){ return rb_isdigit(c) || ('A' <= c && c <= 'F') || ('a' <= c && c <= 'f'); }
static inline int rb_isblank(int c){ return c == ' ' || c == '\t'; }
static inline int rb_isspace(int c){ return c == ' ' || ('\t' <= c && c <= '\r'); }
static inline int rb_iscntrl(int c){ return ('\0' <= c && c < ' ') || c == '\x7f'; }
static inline int rb_isprint(int c){ return ' ' <= c && c <= '\x7e'; }
static inline int rb_ispunct(int c){ return !rb_isalnum(c); }
static inline int rb_isgraph(int c){ return '!' <= c && c <= '\x7e'; }
static inline int rb_tolower(int c) { return rb_isupper(c) ? (c|0x20) : c; }
static inline int rb_toupper(int c) { return rb_islower(c) ? (c&0x5f) : c; }
int st_locale_insensitive_strcasecmp(const char *s1, const char *s2);
int st_locale_insensitive_strncasecmp(const char *s1, const char *s2, size_t n);



unsigned long ruby_strtoul(const char *str, char **endptr, int base);




int ruby_snprintf(char *str, size_t n, char const *fmt, ...) ;
int ruby_vsnprintf(char *str, size_t n, char const *fmt, va_list ap);
void ruby_sysinit(int *argc, char ***argv);
void ruby_init(void);
void* ruby_options(int argc, char** argv);
int ruby_executable_node(void *n, int *status);
int ruby_run_node(void *n);


void ruby_show_version(void);
void ruby_show_copyright(void);
void ruby_init_stack(volatile VALUE*);



int ruby_setup(void);
int ruby_cleanup(volatile int);

void ruby_finalize(void);
 void ruby_stop(int);

void ruby_set_stack_size(size_t);
int ruby_stack_check(void);
size_t ruby_stack_length(VALUE**);

int ruby_exec_node(void *n);

void ruby_script(const char* name);
void ruby_set_script_name(VALUE name);

void ruby_prog_init(void);
void ruby_set_argv(int, char**);
void *ruby_process_options(int, char**);
void ruby_init_loadpath(void);
void ruby_incpush(const char*);
void ruby_sig_finalize(void);










 struct RClassDeprecated { struct RBasic basic;};
   void rb_complex_set_real(void);
   void rb_complex_set_imag(void);


   void rb_disable_super(void);
   void rb_enable_super(void);


   void rb_hash_iter_lev(void);
   void rb_hash_ifnone(void);


   void rb_str_associate(void);
   void rb_str_associated(void);


 void rb_autoload(VALUE, ID, const char*);


   void rb_clear_cache(void);
   void rb_frame_pop(void);





   void rb_compile_error(void);
   void rb_compile_error_with_enc(void);
   void rb_compile_error_append(void);


   void rb_struct_ptr(void);


   void rb_generic_ivar_table(void);


 int rb_frame_method_id_and_class(ID *idp, VALUE *klassp);







 static inline int ruby_show_copyright_to_die(int);
static inline int
ruby_show_copyright_to_die(int exitcode)
{
    ruby_show_copyright();
    return exitcode;
}













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



enum ruby_encoding_consts {
    RUBY_ENCODING_INLINE_MAX = 127,
    RUBY_ENCODING_SHIFT = (RUBY_FL_USHIFT+10),
    RUBY_ENCODING_MASK = (RUBY_ENCODING_INLINE_MAX<<RUBY_ENCODING_SHIFT
                                         ),
    RUBY_ENCODING_MAXNAMELEN = 42
};
enum ruby_coderange_type {
    RUBY_ENC_CODERANGE_UNKNOWN = 0,
    RUBY_ENC_CODERANGE_7BIT = ((int)RUBY_FL_USER8),
    RUBY_ENC_CODERANGE_VALID = ((int)RUBY_FL_USER9),
    RUBY_ENC_CODERANGE_BROKEN = ((int)(RUBY_FL_USER8|RUBY_FL_USER9)),
    RUBY_ENC_CODERANGE_MASK = (RUBY_ENC_CODERANGE_7BIT|
       RUBY_ENC_CODERANGE_VALID|
       RUBY_ENC_CODERANGE_BROKEN)
};

static inline int
rb_enc_coderange_clean_p(int cr)
{
    return (cr ^ (cr >> 1)) & RUBY_ENC_CODERANGE_7BIT;
}
typedef const OnigEncodingType rb_encoding;

int rb_char_to_option_kcode(int c, int *option, int *kcode);

int rb_enc_replicate(const char *, rb_encoding *);
int rb_define_dummy_encoding(const char *);
 int rb_enc_dummy_p(rb_encoding *enc);
 int rb_enc_to_index(rb_encoding *enc);
int rb_enc_get_index(VALUE obj);
void rb_enc_set_index(VALUE obj, int encindex);
int rb_enc_find_index(const char *name);
int rb_to_encoding_index(VALUE);
rb_encoding *rb_to_encoding(VALUE);
rb_encoding *rb_find_encoding(VALUE);
rb_encoding *rb_enc_get(VALUE);
rb_encoding *rb_enc_compatible(VALUE,VALUE);
rb_encoding *rb_enc_check(VALUE,VALUE);
VALUE rb_enc_associate_index(VALUE, int);
VALUE rb_enc_associate(VALUE, rb_encoding*);
void rb_enc_copy(VALUE dst, VALUE src);

VALUE rb_enc_str_new(const char*, long, rb_encoding*);
VALUE rb_enc_str_new_cstr(const char*, rb_encoding*);
VALUE rb_enc_str_new_static(const char*, long, rb_encoding*);
VALUE rb_enc_reg_new(const char*, long, rb_encoding*, int);
VALUE rb_enc_sprintf(rb_encoding *, const char*, ...) ;
VALUE rb_enc_vsprintf(rb_encoding *, const char*, va_list);
long rb_enc_strlen(const char*, const char*, rb_encoding*);
char* rb_enc_nth(const char*, const char*, long, rb_encoding*);
VALUE rb_obj_encoding(VALUE);
VALUE rb_enc_str_buf_cat(VALUE str, const char *ptr, long len, rb_encoding *enc);
VALUE rb_enc_uint_chr(unsigned int code, rb_encoding *enc);

VALUE rb_external_str_new_with_enc(const char *ptr, long len, rb_encoding *);
VALUE rb_str_export_to_enc(VALUE, rb_encoding *);
VALUE rb_str_conv_enc(VALUE str, rb_encoding *from, rb_encoding *to);
VALUE rb_str_conv_enc_opts(VALUE str, rb_encoding *from, rb_encoding *to, int ecflags, VALUE ecopts);
 void rb_enc_raise(rb_encoding *, VALUE, const char*, ...) ;


rb_encoding *rb_enc_from_index(int idx);


rb_encoding *rb_enc_find(const char *name);
int rb_enc_mbclen(const char *p, const char *e, rb_encoding *enc);


int rb_enc_fast_mbclen(const char *p, const char *e, rb_encoding *enc);


int rb_enc_precise_mbclen(const char *p, const char *e, rb_encoding *enc);







int rb_enc_ascget(const char *p, const char *e, int *len, rb_encoding *enc);



unsigned int rb_enc_codepoint_len(const char *p, const char *e, int *len, rb_encoding *enc);


unsigned int rb_enc_codepoint(const char *p, const char *e, rb_encoding *enc);





int rb_enc_codelen(int code, rb_encoding *enc);

int rb_enc_code_to_mbclen(int code, rb_encoding *enc);
static inline int
rb_enc_asciicompat_inline(rb_encoding *enc)
{
    return (enc)->min_enc_len==1 && !rb_enc_dummy_p(enc);
}


int rb_enc_casefold(char *to, const char *p, const char *e, rb_encoding *enc);
 int rb_enc_toupper(int c, rb_encoding *enc);
 int rb_enc_tolower(int c, rb_encoding *enc);
ID rb_intern3(const char*, long, rb_encoding*);
ID rb_interned_id_p(const char *, long, rb_encoding *);
int rb_enc_symname_p(const char*, rb_encoding*);
int rb_enc_symname2_p(const char*, long, rb_encoding*);
int rb_enc_str_coderange(VALUE);
long rb_str_coderange_scan_restartable(const char*, const char*, rb_encoding*, int*);
int rb_enc_str_asciionly_p(VALUE);

VALUE rb_enc_from_encoding(rb_encoding *enc);
 int rb_enc_unicode_p(rb_encoding *enc);
rb_encoding *rb_ascii8bit_encoding(void);
rb_encoding *rb_utf8_encoding(void);
rb_encoding *rb_usascii_encoding(void);
rb_encoding *rb_locale_encoding(void);
rb_encoding *rb_filesystem_encoding(void);
rb_encoding *rb_default_external_encoding(void);
rb_encoding *rb_default_internal_encoding(void);

 int rb_ascii8bit_encindex(void);


 int rb_utf8_encindex(void);


 int rb_usascii_encindex(void);

int rb_locale_encindex(void);
int rb_filesystem_encindex(void);
VALUE rb_enc_default_external(void);
VALUE rb_enc_default_internal(void);
void rb_enc_set_default_external(VALUE encoding);
void rb_enc_set_default_internal(VALUE encoding);
VALUE rb_locale_charmap(VALUE klass);
long rb_memsearch(const void*,long,const void*,long,rb_encoding*);
char *rb_enc_path_next(const char *,const char *,rb_encoding*);
char *rb_enc_path_skip_prefix(const char *,const char *,rb_encoding*);
char *rb_enc_path_last_separator(const char *,const char *,rb_encoding*);
char *rb_enc_path_end(const char *,const char *,rb_encoding*);
const char *ruby_enc_find_basename(const char *name, long *baselen, long *alllen, rb_encoding *enc);
const char *ruby_enc_find_extname(const char *name, long *len, rb_encoding *enc);
ID rb_check_id_cstr(const char *ptr, long len, rb_encoding *enc);
VALUE rb_check_symbol_cstr(const char *ptr, long len, rb_encoding *enc);

extern VALUE rb_cEncoding;



typedef enum {
    econv_invalid_byte_sequence,
    econv_undefined_conversion,
    econv_destination_buffer_full,
    econv_source_buffer_empty,
    econv_finished,
    econv_after_output,
    econv_incomplete_input
} rb_econv_result_t;

typedef struct rb_econv_t rb_econv_t;

VALUE rb_str_encode(VALUE str, VALUE to, int ecflags, VALUE ecopts);
int rb_econv_has_convpath_p(const char* from_encoding, const char* to_encoding);

int rb_econv_prepare_options(VALUE opthash, VALUE *ecopts, int ecflags);
int rb_econv_prepare_opts(VALUE opthash, VALUE *ecopts);

rb_econv_t *rb_econv_open(const char *source_encoding, const char *destination_encoding, int ecflags);
rb_econv_t *rb_econv_open_opts(const char *source_encoding, const char *destination_encoding, int ecflags, VALUE ecopts);

rb_econv_result_t rb_econv_convert(rb_econv_t *ec,
    const unsigned char **source_buffer_ptr, const unsigned char *source_buffer_end,
    unsigned char **destination_buffer_ptr, unsigned char *destination_buffer_end,
    int flags);
void rb_econv_close(rb_econv_t *ec);


int rb_econv_set_replacement(rb_econv_t *ec, const unsigned char *str, size_t len, const char *encname);


int rb_econv_decorate_at_first(rb_econv_t *ec, const char *decorator_name);
int rb_econv_decorate_at_last(rb_econv_t *ec, const char *decorator_name);

VALUE rb_econv_open_exc(const char *senc, const char *denc, int ecflags);


int rb_econv_insert_output(rb_econv_t *ec,
    const unsigned char *str, size_t len, const char *str_encoding);


const char *rb_econv_encoding_to_insert_output(rb_econv_t *ec);


void rb_econv_check_error(rb_econv_t *ec);


VALUE rb_econv_make_exception(rb_econv_t *ec);

int rb_econv_putbackable(rb_econv_t *ec);
void rb_econv_putback(rb_econv_t *ec, unsigned char *p, int n);



const char *rb_econv_asciicompat_encoding(const char *encname);

VALUE rb_econv_str_convert(rb_econv_t *ec, VALUE src, int flags);
VALUE rb_econv_substr_convert(rb_econv_t *ec, VALUE src, long byteoff, long bytesize, int flags);
VALUE rb_econv_str_append(rb_econv_t *ec, VALUE src, VALUE dst, int flags);
VALUE rb_econv_substr_append(rb_econv_t *ec, VALUE src, long byteoff, long bytesize, VALUE dst, int flags);
VALUE rb_econv_append(rb_econv_t *ec, const char *bytesrc, long bytesize, VALUE dst, int flags);

void rb_econv_binmode(rb_econv_t *ec);

enum ruby_econv_flag_type {

    RUBY_ECONV_ERROR_HANDLER_MASK = 0x000000ff,

    RUBY_ECONV_INVALID_MASK = 0x0000000f,
    RUBY_ECONV_INVALID_REPLACE = 0x00000002,

    RUBY_ECONV_UNDEF_MASK = 0x000000f0,
    RUBY_ECONV_UNDEF_REPLACE = 0x00000020,
    RUBY_ECONV_UNDEF_HEX_CHARREF = 0x00000030,

    RUBY_ECONV_DECORATOR_MASK = 0x0000ff00,
    RUBY_ECONV_NEWLINE_DECORATOR_MASK = 0x00003f00,
    RUBY_ECONV_NEWLINE_DECORATOR_READ_MASK = 0x00000f00,
    RUBY_ECONV_NEWLINE_DECORATOR_WRITE_MASK = 0x00003000,

    RUBY_ECONV_UNIVERSAL_NEWLINE_DECORATOR = 0x00000100,
    RUBY_ECONV_CRLF_NEWLINE_DECORATOR = 0x00001000,
    RUBY_ECONV_CR_NEWLINE_DECORATOR = 0x00002000,
    RUBY_ECONV_XML_TEXT_DECORATOR = 0x00004000,
    RUBY_ECONV_XML_ATTR_CONTENT_DECORATOR = 0x00008000,

    RUBY_ECONV_STATEFUL_DECORATOR_MASK = 0x00f00000,
    RUBY_ECONV_XML_ATTR_QUOTE_DECORATOR = 0x00100000,

    RUBY_ECONV_DEFAULT_NEWLINE_DECORATOR =



 0,
    RUBY_ECONV_PARTIAL_INPUT = 0x00010000,
    RUBY_ECONV_AFTER_OUTPUT = 0x00020000,



RUBY_ECONV_FLAGS_PLACEHOLDER};






unsigned long ruby_scan_oct(const char *, size_t, size_t *);

unsigned long ruby_scan_hex(const char *, size_t, size_t *);
void ruby_setenv(const char *, const char *);
void ruby_unsetenv(const char *);

char *ruby_strdup(const char *);



char *ruby_getcwd(void);

double ruby_strtod(const char *, char **);



void ruby_each_words(const char *, void (*)(const char*, int, void*), void *);





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

struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *restrict __tv,
    __timezone_ptr_t __tz)  ;




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     ;





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) ;




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };




typedef enum __itimer_which __itimer_which_t;






extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) ;




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *restrict __new,
        struct itimerval *restrict __old) ;




extern int utimes (const char *__file, const struct timeval __tvp[2])
      ;



extern int lutimes (const char *__file, const struct timeval __tvp[2])
      ;


extern int futimes (int __fd, const struct timeval __tvp[2]) ;






extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) ;










static ID id_cmp, id_le_p, id_ge_p, id_eqeq_p;
static VALUE cDate, cDateTime;
static VALUE half_days_in_day, day_in_nanoseconds;
static double positive_inf, negative_inf;
inline static int
f_cmp(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG)) {
 long c = ((long)(((long)(x))>>(int)(1))) - ((long)(((long)(y))>>(int)(1)));
 if (c > 0)
     return 1;
 else if (c < 0)
     return -1;
 return 0;
    }
    return rb_cmpint(rb_funcallv(x, id_cmp, 1, &y), x, y);
}

inline static VALUE
f_lt_p(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) < ((long)(((long)(y))>>(int)(1)))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, '<', 1, y);
}

inline static VALUE
f_gt_p(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) > ((long)(((long)(y))>>(int)(1)))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, '>', 1, y);
}

inline static VALUE
f_le_p(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) <= ((long)(((long)(y))>>(int)(1)))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, id_le_p, 1, y);
}

inline static VALUE
f_ge_p(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) >= ((long)(((long)(y))>>(int)(1)))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, (__builtin_constant_p(">=") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((">=")), (long)strlen((">="))); (ID) rb_intern_id_cache; }) : rb_intern(">=")), 1, y);
}

inline static VALUE
f_eqeq_p(VALUE x, VALUE y)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG) && (((int)(long)(y))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) == ((long)(((long)(y))>>(int)(1)))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, (__builtin_constant_p("==") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("==")), (long)strlen(("=="))); (ID) rb_intern_id_cache; }) : rb_intern("==")), 1, y);
}

inline static VALUE
f_zero_p(VALUE x)
{
    switch (rb_type((VALUE)(x))) {
      case RUBY_T_FIXNUM:
 return ((((long)(((long)(x))>>(int)(1))) == 0) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
      case RUBY_T_BIGNUM:
 return ((VALUE)RUBY_Qfalse);
      case RUBY_T_RATIONAL:
 {
     VALUE num = rb_rational_num(x);
     return (((((int)(long)(num))&RUBY_FIXNUM_FLAG) && ((long)(((long)(num))>>(int)(1))) == 0) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
 }
    }
    return rb_funcall(x, id_eqeq_p, 1, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
}



inline static VALUE
f_negative_p(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return ((((long)(((long)(x))>>(int)(1))) < 0) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
    return rb_funcall(x, '<', 1, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
}
struct SimpleDateData
{
    unsigned flags;
    VALUE nth;
    int jd;



    float sg;

    int year;
    unsigned pc;

};

struct ComplexDateData
{
    unsigned flags;
    VALUE nth;
    int jd;
    int df;
    VALUE sf;
    int of;
    float sg;

    int year;
    unsigned pc;

};

union DateData {
    unsigned flags;
    struct SimpleDateData s;
    struct ComplexDateData c;
};
inline static VALUE
canon(VALUE x)
{
    if (( ((RUBY_T_RATIONAL) == RUBY_T_FIXNUM) ? (((int)(long)(x))&RUBY_FIXNUM_FLAG) : ((RUBY_T_RATIONAL) == RUBY_T_TRUE) ? ((x) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_RATIONAL) == RUBY_T_FALSE) ? ((x) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_RATIONAL) == RUBY_T_NIL) ? ((x) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_RATIONAL) == RUBY_T_UNDEF) ? ((x) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_RATIONAL) == RUBY_T_SYMBOL) ? ((((VALUE)(x)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_RATIONAL) == RUBY_T_FLOAT) ? ( ((((int)(long)(x))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(x) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(x) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(x))->flags & RUBY_T_MASK) == (RUBY_T_RATIONAL)))) {
 VALUE den = rb_rational_den(x);
 if ((((int)(long)(den))&RUBY_FIXNUM_FLAG) && ((long)(((long)(den))>>(int)(1))) == 1)
     return rb_rational_num(x);
    }
    return x;
}
static int c_valid_civil_p(int, int, int, double,
      int *, int *, int *, int *);

static int
c_find_fdoy(int y, double sg, int *rjd, int *ns)
{
    int d, rm, rd;

    for (d = 1; d < 31; d++)
 if (c_valid_civil_p(y, 1, d, sg, &rm, &rd, rjd, ns))
     return 1;
    return 0;
}

static int
c_find_ldoy(int y, double sg, int *rjd, int *ns)
{
    int i, rm, rd;

    for (i = 0; i < 30; i++)
 if (c_valid_civil_p(y, 12, 31 - i, sg, &rm, &rd, rjd, ns))
     return 1;
    return 0;
}
static int
c_find_ldom(int y, int m, double sg, int *rjd, int *ns)
{
    int i, rm, rd;

    for (i = 0; i < 30; i++)
 if (c_valid_civil_p(y, m, 31 - i, sg, &rm, &rd, rjd, ns))
     return 1;
    return 0;
}

static void
c_civil_to_jd(int y, int m, int d, double sg, int *rjd, int *ns)
{
    double a, b, jd;

    if (m <= 2) {
 y -= 1;
 m += 12;
    }
    a = floor(y / 100.0);
    b = 2 - a + floor(a / 4.0);
    jd = floor(365.25 * (y + 4716)) +
 floor(30.6001 * (m + 1)) +
 d + b - 1524;
    if (jd < sg) {
 jd -= b;
 *ns = 0;
    }
    else
 *ns = 1;

    *rjd = (int)jd;
}

static void
c_jd_to_civil(int jd, double sg, int *ry, int *rm, int *rdom)
{
    double x, a, b, c, d, e, y, m, dom;

    if (jd < sg)
 a = jd;
    else {
 x = floor((jd - 1867216.25) / 36524.25);
 a = jd + 1 + x - floor(x / 4.0);
    }
    b = a + 1524;
    c = floor((b - 122.1) / 365.25);
    d = floor(365.25 * c);
    e = floor((b - d) / 30.6001);
    dom = b - d - floor(30.6001 * e);
    if (e <= 13) {
 m = e - 1;
 y = c - 4716;
    }
    else {
 m = e - 13;
 y = c - 4715;
    }

    *ry = (int)y;
    *rm = (int)m;
    *rdom = (int)dom;
}

static void
c_ordinal_to_jd(int y, int d, double sg, int *rjd, int *ns)
{
    int ns2;

    c_find_fdoy(y, sg, rjd, &ns2);
    *rjd += d - 1;
    *ns = (*rjd < sg) ? 0 : 1;
}

static void
c_jd_to_ordinal(int jd, double sg, int *ry, int *rd)
{
    int rm2, rd2, rjd, ns;

    c_jd_to_civil(jd, sg, ry, &rm2, &rd2);
    c_find_fdoy(*ry, sg, &rjd, &ns);
    *rd = (jd - rjd) + 1;
}

static void
c_commercial_to_jd(int y, int w, int d, double sg, int *rjd, int *ns)
{
    int rjd2, ns2;

    c_find_fdoy(y, sg, &rjd2, &ns2);
    rjd2 += 3;
    *rjd =
 (rjd2 - (((rjd2 - 1) + 1)<0 ? (((7))-(-((((rjd2 - 1) + 1))+1)%((7)))-1) : ((rjd2 - 1) + 1)%(7))) +
 7 * (w - 1) +
 (d - 1);
    *ns = (*rjd < sg) ? 0 : 1;
}

static void
c_jd_to_commercial(int jd, double sg, int *ry, int *rw, int *rd)
{
    int ry2, rm2, rd2, a, rjd2, ns2;

    c_jd_to_civil(jd - 3, sg, &ry2, &rm2, &rd2);
    a = ry2;
    c_commercial_to_jd(a + 1, 1, 1, sg, &rjd2, &ns2);
    if (jd >= rjd2)
 *ry = a + 1;
    else {
 c_commercial_to_jd(a, 1, 1, sg, &rjd2, &ns2);
 *ry = a;
    }
    *rw = 1 + ((jd - rjd2)<0 ? (-(-(((jd - rjd2))+1)/((7)))-1) : (jd - rjd2)/(7));
    *rd = ((jd + 1)<0 ? (((7))-(-(((jd + 1))+1)%((7)))-1) : (jd + 1)%(7));
    if (*rd == 0)
 *rd = 7;
}

static void
c_weeknum_to_jd(int y, int w, int d, int f, double sg, int *rjd, int *ns)
{
    int rjd2, ns2;

    c_find_fdoy(y, sg, &rjd2, &ns2);
    rjd2 += 6;
    *rjd = (rjd2 - ((((rjd2 - f) + 1))<0 ? (((7))-(-(((((rjd2 - f) + 1)))+1)%((7)))-1) : (((rjd2 - f) + 1))%(7)) - 7) + 7 * w + d;
    *ns = (*rjd < sg) ? 0 : 1;
}

static void
c_jd_to_weeknum(int jd, int f, double sg, int *ry, int *rw, int *rd)
{
    int rm, rd2, rjd, ns, j;

    c_jd_to_civil(jd, sg, ry, &rm, &rd2);
    c_find_fdoy(*ry, sg, &rjd, &ns);
    rjd += 6;
    j = jd - (rjd - (((rjd - f) + 1)<0 ? (((7))-(-((((rjd - f) + 1))+1)%((7)))-1) : ((rjd - f) + 1)%(7))) + 7;
    *rw = (int)((j)<0 ? (-(-(((j))+1)/((7)))-1) : (j)/(7));
    *rd = (int)((j)<0 ? (((7))-(-(((j))+1)%((7)))-1) : (j)%(7));
}
inline static int
c_jd_to_wday(int jd)
{
    return ((jd + 1)<0 ? (((7))-(-(((jd + 1))+1)%((7)))-1) : (jd + 1)%(7));
}
static int
c_valid_ordinal_p(int y, int d, double sg,
    int *rd, int *rjd, int *ns)
{
    int ry2, rd2;

    if (d < 0) {
 int rjd2, ns2;

 if (!c_find_ldoy(y, sg, &rjd2, &ns2))
     return 0;
 c_jd_to_ordinal(rjd2 + d + 1, sg, &ry2, &rd2);
 if (ry2 != y)
     return 0;
 d = rd2;
    }
    c_ordinal_to_jd(y, d, sg, rjd, ns);
    c_jd_to_ordinal(*rjd, sg, &ry2, &rd2);
    if (ry2 != y || rd2 != d)
 return 0;
    return 1;
}

static const int monthtab[2][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }
};

inline static int
c_julian_leap_p(int y)
{
    return ((y)<0 ? (((4))-(-(((y))+1)%((4)))-1) : (y)%(4)) == 0;
}

inline static int
c_gregorian_leap_p(int y)
{
    return (((y)<0 ? (((4))-(-(((y))+1)%((4)))-1) : (y)%(4)) == 0 && y % 100 != 0) || ((y)<0 ? (((400))-(-(((y))+1)%((400)))-1) : (y)%(400)) == 0;
}

static int
c_julian_last_day_of_month(int y, int m)
{
    ((void) (0));
    return monthtab[c_julian_leap_p(y) ? 1 : 0][m];
}

static int
c_gregorian_last_day_of_month(int y, int m)
{
    ((void) (0));
    return monthtab[c_gregorian_leap_p(y) ? 1 : 0][m];
}

static int
c_valid_julian_p(int y, int m, int d, int *rm, int *rd)
{
    int last;

    if (m < 0)
 m += 13;
    if (m < 1 || m > 12)
 return 0;
    last = c_julian_last_day_of_month(y, m);
    if (d < 0)
 d = last + d + 1;
    if (d < 1 || d > last)
 return 0;
    *rm = m;
    *rd = d;
    return 1;
}

static int
c_valid_gregorian_p(int y, int m, int d, int *rm, int *rd)
{
    int last;

    if (m < 0)
 m += 13;
    if (m < 1 || m > 12)
 return 0;
    last = c_gregorian_last_day_of_month(y, m);
    if (d < 0)
 d = last + d + 1;
    if (d < 1 || d > last)
 return 0;
    *rm = m;
    *rd = d;
    return 1;
}

static int
c_valid_civil_p(int y, int m, int d, double sg,
  int *rm, int *rd, int *rjd, int *ns)
{
    int ry;

    if (m < 0)
 m += 13;
    if (d < 0) {
 if (!c_find_ldom(y, m, sg, rjd, ns))
     return 0;
 c_jd_to_civil(*rjd + d + 1, sg, &ry, rm, rd);
 if (ry != y || *rm != m)
     return 0;
 d = *rd;
    }
    c_civil_to_jd(y, m, d, sg, rjd, ns);
    c_jd_to_civil(*rjd, sg, &ry, rm, rd);
    if (ry != y || *rm != m || *rd != d)
 return 0;
    return 1;
}

static int
c_valid_commercial_p(int y, int w, int d, double sg,
       int *rw, int *rd, int *rjd, int *ns)
{
    int ns2, ry2, rw2, rd2;

    if (d < 0)
 d += 8;
    if (w < 0) {
 int rjd2;

 c_commercial_to_jd(y + 1, 1, 1, sg, &rjd2, &ns2);
 c_jd_to_commercial(rjd2 + w * 7, sg, &ry2, &rw2, &rd2);
 if (ry2 != y)
     return 0;
 w = rw2;
    }
    c_commercial_to_jd(y, w, d, sg, rjd, ns);
    c_jd_to_commercial(*rjd, sg, &ry2, rw, rd);
    if (y != ry2 || w != *rw || d != *rd)
 return 0;
    return 1;
}

static int
c_valid_weeknum_p(int y, int w, int d, int f, double sg,
    int *rw, int *rd, int *rjd, int *ns)
{
    int ns2, ry2, rw2, rd2;

    if (d < 0)
 d += 7;
    if (w < 0) {
 int rjd2;

 c_weeknum_to_jd(y + 1, 1, f, f, sg, &rjd2, &ns2);
 c_jd_to_weeknum(rjd2 + w * 7, f, sg, &ry2, &rw2, &rd2);
 if (ry2 != y)
     return 0;
 w = rw2;
    }
    c_weeknum_to_jd(y, w, d, f, sg, rjd, ns);
    c_jd_to_weeknum(*rjd, f, sg, &ry2, rw, rd);
    if (y != ry2 || w != *rw || d != *rd)
 return 0;
    return 1;
}
static int
c_valid_time_p(int h, int min, int s, int *rh, int *rmin, int *rs)
{
    if (h < 0)
 h += 24;
    if (min < 0)
 min += 60;
    if (s < 0)
 s += 60;
    *rh = h;
    *rmin = min;
    *rs = s;
    return !(h < 0 || h > 24 ||
      min < 0 || min > 59 ||
      s < 0 || s > 59 ||
      (h == 24 && (min > 0 || s > 0)));
}

inline static int
c_valid_start_p(double sg)
{
    if ((sizeof ((sg)) == sizeof (float) ? __isnanf (sg) : sizeof ((sg)) == sizeof (double) ? __isnan (sg) : __isnanl (sg)))
 return 0;
    if ((sizeof ((sg)) == sizeof (float) ? __isinff (sg) : sizeof ((sg)) == sizeof (double) ? __isinf (sg) : __isinfl (sg)))
 return 1;
    if (sg < 2298874 || sg > 2426355)
 return 0;
    return 1;
}

inline static int
df_local_to_utc(int df, int of)
{
    df -= of;
    if (df < 0)
 df += 86400;
    else if (df >= 86400)
 df -= 86400;
    return df;
}

inline static int
df_utc_to_local(int df, int of)
{
    df += of;
    if (df < 0)
 df += 86400;
    else if (df >= 86400)
 df -= 86400;
    return df;
}

inline static int
jd_local_to_utc(int jd, int df, int of)
{
    df -= of;
    if (df < 0)
 jd -= 1;
    else if (df >= 86400)
 jd += 1;
    return jd;
}

inline static int
jd_utc_to_local(int jd, int df, int of)
{
    df += of;
    if (df < 0)
 jd -= 1;
    else if (df >= 86400)
 jd += 1;
    return jd;
}

inline static int
time_to_df(int h, int min, int s)
{
    return h * 3600 + min * 60 + s;
}

inline static void
df_to_time(int df, int *h, int *min, int *s)
{
    *h = df / 3600;
    df %= 3600;
    *min = df / 60;
    *s = df % 60;
}

static VALUE
sec_to_day(VALUE s)
{
    if ((((int)(long)(s))&RUBY_FIXNUM_FLAG))
 return rb_rational_new((s), ((((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG)));
    return rb_funcall(s, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));
}

inline static VALUE
isec_to_day(int s)
{
    return sec_to_day((((VALUE)(s))<<1 | RUBY_FIXNUM_FLAG));
}

static VALUE
ns_to_day(VALUE n)
{
    if ((((int)(long)(n))&RUBY_FIXNUM_FLAG))
 return rb_rational_new((n), (day_in_nanoseconds));
    return rb_funcall(n, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, day_in_nanoseconds);
}
static VALUE
ns_to_sec(VALUE n)
{
    if ((((int)(long)(n))&RUBY_FIXNUM_FLAG))
 return rb_rational_new((n), ((((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG)));
    return rb_funcall(n, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
}
static int
safe_mul_p(VALUE x, long m)
{
    long ix;

    if (!(((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return 0;
    ix = ((long)(((long)(x))>>(int)(1)));
    if (ix < 0) {
 if (ix <= ((((long)(-9223372036854775807L -1L))>>(int)(1)) / m))
     return 0;
    }
    else {
 if (ix >= ((9223372036854775807L>>1) / m))
     return 0;
    }
    return 1;
}

static VALUE
day_to_sec(VALUE d)
{
    if (safe_mul_p(d, 86400))
 return (((VALUE)(((long)(((long)(d))>>(int)(1))) * 86400))<<1 | RUBY_FIXNUM_FLAG);
    return rb_funcall(d, '*', 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));
}
static VALUE
sec_to_ms(VALUE s)
{
    if (safe_mul_p(s, 1000))
 return (((VALUE)(((long)(((long)(s))>>(int)(1))) * 1000))<<1 | RUBY_FIXNUM_FLAG);
    return rb_funcall(s, '*', 1, (((VALUE)(1000))<<1 | RUBY_FIXNUM_FLAG));
}

static VALUE
sec_to_ns(VALUE s)
{
    if (safe_mul_p(s, 1000000000))
 return (((VALUE)(((long)(((long)(s))>>(int)(1))) * 1000000000))<<1 | RUBY_FIXNUM_FLAG);
    return rb_funcall(s, '*', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
}
static VALUE
div_day(VALUE d, VALUE *f)
{
    if (f)
 *f = rb_funcall(d, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    return rb_funcall(d, (__builtin_constant_p("floor") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("floor")), (long)strlen(("floor"))); (ID) rb_intern_id_cache; }) : rb_intern("floor")), 0);
}

static VALUE
div_df(VALUE d, VALUE *f)
{
    VALUE s = day_to_sec(d);

    if (f)
 *f = rb_funcall(s, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    return rb_funcall(s, (__builtin_constant_p("floor") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("floor")), (long)strlen(("floor"))); (ID) rb_intern_id_cache; }) : rb_intern("floor")), 0);
}
static void
decode_day(VALUE d, VALUE *jd, VALUE *df, VALUE *sf)
{
    VALUE f;

    *jd = div_day(d, &f);
    *df = div_df(f, &f);
    *sf = sec_to_ns(f);
}

inline static double
s_virtual_sg(union DateData *x)
{
    if ((sizeof ((x->s.sg)) == sizeof (float) ? __isinff (x->s.sg) : sizeof ((x->s.sg)) == sizeof (double) ? __isinf (x->s.sg) : __isinfl (x->s.sg)))
 return x->s.sg;
    if (f_zero_p(x->s.nth))
 return x->s.sg;
    else if (f_negative_p(x->s.nth))
 return positive_inf;
    return negative_inf;
}

inline static double
c_virtual_sg(union DateData *x)
{
    if ((sizeof ((x->c.sg)) == sizeof (float) ? __isinff (x->c.sg) : sizeof ((x->c.sg)) == sizeof (double) ? __isinf (x->c.sg) : __isinfl (x->c.sg)))
 return x->c.sg;
    if (f_zero_p(x->c.nth))
 return x->c.sg;
    else if (f_negative_p(x->c.nth))
 return positive_inf;
    return negative_inf;
}

inline static double
m_virtual_sg(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return s_virtual_sg(x);
    else
 return c_virtual_sg(x);
}
inline static void
canonicalize_s_jd(VALUE obj, union DateData *x)
{
    int j = x->s.jd;
    VALUE nth = x->s.nth;
    ((void) (0));
    { if (x->s.jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); x->s.jd += (0xfffffff / 71149239 * 71149239); } if (x->s.jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); x->s.jd -= (0xfffffff / 71149239 * 71149239); }};
    rb_obj_write((VALUE)(obj), (VALUE *)(&x->s.nth), (VALUE)(nth), "ext/date/date_core.c", 1130);
    if (x->s.jd != j)
 x->flags &= ~(1 << 2);
}

inline static void
get_s_jd(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 0))) {
 int jd, ns;

 ((void) (0));




 c_civil_to_jd(x->s.year, (((x->s.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1)), (((x->s.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1)),
        s_virtual_sg(x), &jd, &ns);

 x->s.jd = jd;
 x->s.flags |= (1 << 0);
    }
}

inline static void
get_s_civil(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 2))) {
 int y, m, d;

 ((void) (0));
 c_jd_to_civil(x->s.jd, s_virtual_sg(x), &y, &m, &d);
 x->s.year = y;




 x->s.pc = (((m) << (5 + 5 + 6 + 6)) | ((d) << (5 + 6 + 6)));

 x->s.flags |= (1 << 2);
    }
}

inline static void
get_c_df(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 1))) {
 ((void) (0));




 x->c.df = df_local_to_utc(time_to_df((((x->c.pc) >> (6 + 6)) & ((1 << (5)) - 1)),
          (((x->c.pc) >> 6) & ((1 << (6)) - 1)),
          (((x->c.pc) >> 0) & ((1 << (6)) - 1))),
      x->c.of);

 x->c.flags |= (1 << 1);
    }
}

inline static void
get_c_time(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 3))) {







 int r, m, d, h, min, s;

 ((void) (0));
 m = (((x->c.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1));
 d = (((x->c.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1));
 r = df_utc_to_local(x->c.df, x->c.of);
 df_to_time(r, &h, &min, &s);
 x->c.pc = (((m) << (5 + 5 + 6 + 6)) | ((d) << (5 + 6 + 6)) | ((h) << (6 + 6)) | ((min) << 6) | ((s) << 0));
 x->c.flags |= (1 << 3);

    }
}

inline static void
canonicalize_c_jd(VALUE obj, union DateData *x)
{
    int j = x->c.jd;
    VALUE nth = x->c.nth;
    ((void) (0));
    { if (x->c.jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); x->c.jd += (0xfffffff / 71149239 * 71149239); } if (x->c.jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); x->c.jd -= (0xfffffff / 71149239 * 71149239); }};
    rb_obj_write((VALUE)(obj), (VALUE *)(&x->c.nth), (VALUE)(nth), "ext/date/date_core.c", 1226);
    if (x->c.jd != j)
 x->flags &= ~(1 << 2);
}

inline static void
get_c_jd(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 0))) {
 int jd, ns;

 ((void) (0));




 c_civil_to_jd(x->c.year, (((x->c.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1)), (((x->c.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1)),
        c_virtual_sg(x), &jd, &ns);


 get_c_time(x);





 x->c.jd = jd_local_to_utc(jd,
      time_to_df((((x->c.pc) >> (6 + 6)) & ((1 << (5)) - 1)),
          (((x->c.pc) >> 6) & ((1 << (6)) - 1)),
          (((x->c.pc) >> 0) & ((1 << (6)) - 1))),
      x->c.of);

 x->c.flags |= (1 << 0);
    }
}

inline static void
get_c_civil(union DateData *x)
{
    ((void) (0));
    if (!((x)->flags & (1 << 2))) {



 int jd, y, m, d, h, min, s;


 ((void) (0));
 get_c_df(x);
 jd = jd_utc_to_local(x->c.jd, x->c.df, x->c.of);
 c_jd_to_civil(jd, c_virtual_sg(x), &y, &m, &d);
 x->c.year = y;




 h = (((x->c.pc) >> (6 + 6)) & ((1 << (5)) - 1));
 min = (((x->c.pc) >> 6) & ((1 << (6)) - 1));
 s = (((x->c.pc) >> 0) & ((1 << (6)) - 1));
 x->c.pc = (((m) << (5 + 5 + 6 + 6)) | ((d) << (5 + 6 + 6)) | ((h) << (6 + 6)) | ((min) << 6) | ((s) << 0));

 x->c.flags |= (1 << 2);
    }
}

inline static int
local_jd(union DateData *x)
{
    ((void) (0));
    ((void) (0));
    ((void) (0));
    return jd_utc_to_local(x->c.jd, x->c.df, x->c.of);
}

inline static int
local_df(union DateData *x)
{
    ((void) (0));
    ((void) (0));
    return df_utc_to_local(x->c.df, x->c.of);
}

static void
decode_year(VALUE y, double style,
     VALUE *nth, int *ry)
{
    int period;
    VALUE t;

    period = (style < 0) ?
 ((0xfffffff / 71149239 * 71149239) / 146097 * 400) :
 ((0xfffffff / 71149239 * 71149239) / 1461 * 4);
    if ((((int)(long)(y))&RUBY_FIXNUM_FLAG)) {
 long iy, it, inth;

 iy = ((long)(((long)(y))>>(int)(1)));
 if (iy >= ((9223372036854775807L>>1) - 4712))
     goto big;
 it = iy + 4712;
 inth = ((it)<0 ? (-(-(((it))+1)/((((long)period))))-1) : (it)/(((long)period)));
 *nth = (((VALUE)(inth))<<1 | RUBY_FIXNUM_FLAG);
 if (inth)
     it = ((it)<0 ? (((((long)period)))-(-(((it))+1)%((((long)period))))-1) : (it)%(((long)period)));
 *ry = (int)it - 4712;
 return;
    }
  big:
    t = rb_funcall(y, '+', 1, (((VALUE)(4712))<<1 | RUBY_FIXNUM_FLAG));
    *nth = rb_funcall(t, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(period))<<1 | RUBY_FIXNUM_FLAG));
    if ((!f_zero_p(*nth)))
 t = rb_funcall(t, '%', 1, (((VALUE)(period))<<1 | RUBY_FIXNUM_FLAG));
    *ry = ((int)rb_fix2int((VALUE)(t))) - 4712;
}

static void
encode_year(VALUE nth, int y, double style,
     VALUE *ry)
{
    int period;
    VALUE t;

    period = (style < 0) ?
 ((0xfffffff / 71149239 * 71149239) / 146097 * 400) :
 ((0xfffffff / 71149239 * 71149239) / 1461 * 4);
    if (f_zero_p(nth))
 *ry = (((VALUE)(y))<<1 | RUBY_FIXNUM_FLAG);
    else {
 t = rb_funcall((((VALUE)(period))<<1 | RUBY_FIXNUM_FLAG), '*', 1, nth);
 t = rb_funcall(t, '+', 1, (((VALUE)(y))<<1 | RUBY_FIXNUM_FLAG));
 *ry = t;
    }
}

static void
decode_jd(VALUE jd, VALUE *nth, int *rjd)
{
    *nth = rb_funcall(jd, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG));
    if (f_zero_p(*nth)) {
 *rjd = ((int)rb_fix2int((VALUE)(jd)));
 return;
    }
    *rjd = ((int)rb_fix2int((VALUE)(rb_funcall(jd, '%', 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG)))));
}

static void
encode_jd(VALUE nth, int jd, VALUE *rjd)
{
    if (f_zero_p(nth)) {
 *rjd = (((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG);
 return;
    }
    *rjd = rb_funcall(rb_funcall((((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG), '*', 1, nth), '+', 1, (((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG));
}

inline static double
guess_style(VALUE y, double sg)
{
    double style = 0;

    if ((sizeof ((sg)) == sizeof (float) ? __isinff (sg) : sizeof ((sg)) == sizeof (double) ? __isinf (sg) : __isinfl (sg)))
 style = sg;
    else if (!(((int)(long)(y))&RUBY_FIXNUM_FLAG))
 style = (!f_negative_p(y)) ? negative_inf : positive_inf;
    else {
 long iy = ((long)(((long)(y))>>(int)(1)));

 ((void) (0));
 if (iy < 1582)
     style = positive_inf;
 else if (iy > 1930)
     style = negative_inf;
    }
    return style;
}

inline static void
m_canonicalize_jd(VALUE obj, union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_jd(x);
 canonicalize_s_jd(obj, x);
    }
    else {
 get_c_jd(x);
 canonicalize_c_jd(obj, x);
    }
}

inline static VALUE
m_nth(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return x->s.nth;
    else {
 get_c_civil(x);
 return x->c.nth;
    }
}

inline static int
m_jd(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_jd(x);
 return x->s.jd;
    }
    else {
 get_c_jd(x);
 return x->c.jd;
    }
}

static VALUE
m_real_jd(union DateData *x)
{
    VALUE nth, rjd;
    int jd;

    nth = m_nth(x);
    jd = m_jd(x);

    encode_jd(nth, jd, &rjd);
    return rjd;
}

static int
m_local_jd(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_jd(x);
 return x->s.jd;
    }
    else {
 get_c_jd(x);
 get_c_df(x);
 return local_jd(x);
    }
}

static VALUE
m_real_local_jd(union DateData *x)
{
    VALUE nth, rjd;
    int jd;

    nth = m_nth(x);
    jd = m_local_jd(x);

    encode_jd(nth, jd, &rjd);
    return rjd;
}

inline static int
m_df(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_df(x);
 return x->c.df;
    }
}
static int
m_local_df(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_df(x);
 return local_df(x);
    }
}
inline static VALUE
m_sf(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    else
 return x->c.sf;
}
static VALUE
m_sf_in_sec(union DateData *x)
{
    return ns_to_sec(m_sf(x));
}

static VALUE
m_fr(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    else {
 int df;
 VALUE sf, fr;

 df = m_local_df(x);
 sf = m_sf(x);
 fr = isec_to_day(df);
 if ((!f_zero_p(sf)))
     fr = rb_funcall(fr, '+', 1, ns_to_day(sf));
 return fr;
    }
}



static VALUE
m_ajd(union DateData *x)
{
    VALUE r, sf;
    int df;

    if ((!((x)->flags & (1 << 7)))) {
 r = m_real_jd(x);
 if ((((int)(long)(r))&RUBY_FIXNUM_FLAG) && ((long)(((long)(r))>>(int)(1))) <= ((9223372036854775807L>>1) / 2)) {
     long ir = ((long)(((long)(r))>>(int)(1)));
     ir = ir * 2 - 1;
     return rb_rational_new(((((VALUE)(ir))<<1 | RUBY_FIXNUM_FLAG)), ((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG)));
 }
 else
     return rb_rational_new((rb_funcall(rb_funcall(r, '*', 1, (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG)), '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), ((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG)));



    }

    r = m_real_jd(x);
    df = m_df(x);
    df -= (86400 / 2);
    if (df)
 r = rb_funcall(r, '+', 1, isec_to_day(df));
    sf = m_sf(x);
    if ((!f_zero_p(sf)))
 r = rb_funcall(r, '+', 1, ns_to_day(sf));

    return r;
}

static VALUE
m_amjd(union DateData *x)
{
    VALUE r, sf;
    int df;

    r = m_real_jd(x);
    if ((((int)(long)(r))&RUBY_FIXNUM_FLAG) && ((long)(((long)(r))>>(int)(1))) >= ((((long)(-9223372036854775807L -1L))>>(int)(1)) + 2400001)) {
 long ir = ((long)(((long)(r))>>(int)(1)));
 ir -= 2400001;
 r = rb_rational_new(((((VALUE)(ir))<<1 | RUBY_FIXNUM_FLAG)), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    }
    else
 r = rb_rational_new((rb_funcall(m_real_jd(x), '-', 1, (((VALUE)(2400001))<<1 | RUBY_FIXNUM_FLAG))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));


    if ((!((x)->flags & (1 << 7))))
 return r;

    df = m_df(x);
    if (df)
 r = rb_funcall(r, '+', 1, isec_to_day(df));
    sf = m_sf(x);
    if ((!f_zero_p(sf)))
 r = rb_funcall(r, '+', 1, ns_to_day(sf));

    return r;
}

inline static int
m_of(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_jd(x);
 return x->c.of;
    }
}

static VALUE
m_of_in_day(union DateData *x)
{
    return isec_to_day(m_of(x));
}

inline static double
m_sg(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return x->s.sg;
    else {
 get_c_jd(x);
 return x->c.sg;
    }
}

static int
m_julian_p(union DateData *x)
{
    int jd;
    double sg;

    if ((!((x)->flags & (1 << 7)))) {
 get_s_jd(x);
 jd = x->s.jd;
 sg = s_virtual_sg(x);
    }
    else {
 get_c_jd(x);
 jd = x->c.jd;
 sg = c_virtual_sg(x);
    }
    if ((sizeof ((sg)) == sizeof (float) ? __isinff (sg) : sizeof ((sg)) == sizeof (double) ? __isinf (sg) : __isinfl (sg)))
 return sg == positive_inf;
    return jd < sg;
}

inline static int
m_gregorian_p(union DateData *x)
{
    return !m_julian_p(x);
}

inline static int
m_proleptic_julian_p(union DateData *x)
{
    double sg;

    sg = m_sg(x);
    if ((sizeof ((sg)) == sizeof (float) ? __isinff (sg) : sizeof ((sg)) == sizeof (double) ? __isinf (sg) : __isinfl (sg)) && sg > 0)
 return 1;
    return 0;
}

inline static int
m_proleptic_gregorian_p(union DateData *x)
{
    double sg;

    sg = m_sg(x);
    if ((sizeof ((sg)) == sizeof (float) ? __isinff (sg) : sizeof ((sg)) == sizeof (double) ? __isinf (sg) : __isinfl (sg)) && sg < 0)
 return 1;
    return 0;
}

inline static int
m_year(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_civil(x);
 return x->s.year;
    }
    else {
 get_c_civil(x);
 return x->c.year;
    }
}

static VALUE
m_real_year(union DateData *x)
{
    VALUE nth, ry;
    int year;

    nth = m_nth(x);
    year = m_year(x);

    if (f_zero_p(nth))
 return (((VALUE)(year))<<1 | RUBY_FIXNUM_FLAG);

    encode_year(nth, year,
  m_gregorian_p(x) ? -1 : +1,
  &ry);
    return ry;
}

inline static int
m_mon(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_civil(x);



 return (((x->s.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1));

    }
    else {
 get_c_civil(x);



 return (((x->c.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1));

    }
}

inline static int
m_mday(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_civil(x);



 return (((x->s.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1));

    }
    else {
 get_c_civil(x);



 return (((x->c.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1));

    }
}

static const int yeartab[2][13] = {
    { 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 },
    { 0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335 }
};

static int
c_julian_to_yday(int y, int m, int d)
{
    ((void) (0));
    return yeartab[c_julian_leap_p(y) ? 1 : 0][m] + d;
}

static int
c_gregorian_to_yday(int y, int m, int d)
{
    ((void) (0));
    return yeartab[c_gregorian_leap_p(y) ? 1 : 0][m] + d;
}

static int
m_yday(union DateData *x)
{
    int jd, ry, rd;
    double sg;

    jd = m_local_jd(x);
    sg = m_virtual_sg(x);

    if (m_proleptic_gregorian_p(x) ||
 (jd - sg) > 366)
 return c_gregorian_to_yday(m_year(x), m_mon(x), m_mday(x));
    if (m_proleptic_julian_p(x))
 return c_julian_to_yday(m_year(x), m_mon(x), m_mday(x));
    c_jd_to_ordinal(jd, sg, &ry, &rd);
    return rd;
}

static int
m_wday(union DateData *x)
{
    return c_jd_to_wday(m_local_jd(x));
}

static int
m_cwyear(union DateData *x)
{
    int ry, rw, rd;

    c_jd_to_commercial(m_local_jd(x), m_virtual_sg(x),
         &ry, &rw, &rd);
    return ry;
}

static VALUE
m_real_cwyear(union DateData *x)
{
    VALUE nth, ry;
    int year;

    nth = m_nth(x);
    year = m_cwyear(x);

    if (f_zero_p(nth))
 return (((VALUE)(year))<<1 | RUBY_FIXNUM_FLAG);

    encode_year(nth, year,
  m_gregorian_p(x) ? -1 : +1,
  &ry);
    return ry;
}

static int
m_cweek(union DateData *x)
{
    int ry, rw, rd;

    c_jd_to_commercial(m_local_jd(x), m_virtual_sg(x),
         &ry, &rw, &rd);
    return rw;
}

static int
m_cwday(union DateData *x)
{
    int w;

    w = m_wday(x);
    if (w == 0)
 w = 7;
    return w;
}

static int
m_wnumx(union DateData *x, int f)
{
    int ry, rw, rd;

    c_jd_to_weeknum(m_local_jd(x), f, m_virtual_sg(x),
      &ry, &rw, &rd);
    return rw;
}

static int
m_wnum0(union DateData *x)
{
    return m_wnumx(x, 0);
}

static int
m_wnum1(union DateData *x)
{
    return m_wnumx(x, 1);
}

inline static int
m_hour(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_time(x);



 return (((x->c.pc) >> (6 + 6)) & ((1 << (5)) - 1));

    }
}

inline static int
m_min(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_time(x);



 return (((x->c.pc) >> 6) & ((1 << (6)) - 1));

    }
}

inline static int
m_sec(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return 0;
    else {
 get_c_time(x);



 return (((x->c.pc) >> 0) & ((1 << (6)) - 1));

    }
}
static VALUE
of2str(int of)
{
    int s, h, m;

    { int a; s = (of < 0) ? '-' : '+'; a = (of < 0) ? -of : of; h = a / 3600; m = a % 3600 / 60;};
    return rb_enc_sprintf(rb_usascii_encoding(), "%c%02d:%02d", s, h, m);
}

static VALUE
m_zone(union DateData *x)
{
    if ((!((x)->flags & (1 << 7))))
 return  ({ (__builtin_constant_p("+00:00")) ? rb_usascii_str_new_static(("+00:00"), (long)strlen("+00:00")) : rb_usascii_str_new_cstr("+00:00"); });
    return of2str(m_of(x));
}

inline static VALUE
f_kind_of_p(VALUE x, VALUE c)
{
    return rb_obj_is_kind_of(x, c);
}

inline static VALUE
k_date_p(VALUE x)
{
    return f_kind_of_p(x, cDate);
}

inline static VALUE
k_numeric_p(VALUE x)
{
    return f_kind_of_p(x, rb_cNumeric);
}

inline static VALUE
k_rational_p(VALUE x)
{
    return f_kind_of_p(x, rb_cRational);
}

static inline void
expect_numeric(VALUE x)
{
    if (!k_numeric_p(x))
 rb_raise(rb_eTypeError, "expected numeric");
}
static int
valid_ordinal_p(VALUE y, int d, double sg,
  VALUE *nth, int *ry,
  int *rd, int *rjd,
  int *ns)
{
    double style = guess_style(y, sg);
    int r;

    if (style == 0) {
 int jd;

 r = c_valid_ordinal_p(((int)rb_fix2int((VALUE)(y))), d, sg, rd, &jd, ns);
 if (!r)
     return 0;
 decode_jd((((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG), nth, rjd);
 if (f_zero_p(*nth))
     *ry = ((int)rb_fix2int((VALUE)(y)));
 else {
     VALUE nth2;
     decode_year(y, *ns ? -1 : +1, &nth2, ry);
 }
    }
    else {
 decode_year(y, style, nth, ry);
 r = c_valid_ordinal_p(*ry, d, style, rd, rjd, ns);
    }
    return r;
}

static int
valid_gregorian_p(VALUE y, int m, int d,
    VALUE *nth, int *ry,
    int *rm, int *rd)
{
    decode_year(y, -1, nth, ry);
    return c_valid_gregorian_p(*ry, m, d, rm, rd);
}

static int
valid_civil_p(VALUE y, int m, int d, double sg,
       VALUE *nth, int *ry,
       int *rm, int *rd, int *rjd,
       int *ns)
{
    double style = guess_style(y, sg);
    int r;

    if (style == 0) {
 int jd;

 r = c_valid_civil_p(((int)rb_fix2int((VALUE)(y))), m, d, sg, rm, rd, &jd, ns);
 if (!r)
     return 0;
 decode_jd((((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG), nth, rjd);
 if (f_zero_p(*nth))
     *ry = ((int)rb_fix2int((VALUE)(y)));
 else {
     VALUE nth2;
     decode_year(y, *ns ? -1 : +1, &nth2, ry);
 }
    }
    else {
 decode_year(y, style, nth, ry);
 if (style < 0)
     r = c_valid_gregorian_p(*ry, m, d, rm, rd);
 else
     r = c_valid_julian_p(*ry, m, d, rm, rd);
 if (!r)
     return 0;
 c_civil_to_jd(*ry, *rm, *rd, style, rjd, ns);
    }
    return r;
}

static int
valid_commercial_p(VALUE y, int w, int d, double sg,
     VALUE *nth, int *ry,
     int *rw, int *rd, int *rjd,
     int *ns)
{
    double style = guess_style(y, sg);
    int r;

    if (style == 0) {
 int jd;

 r = c_valid_commercial_p(((int)rb_fix2int((VALUE)(y))), w, d, sg, rw, rd, &jd, ns);
 if (!r)
     return 0;
 decode_jd((((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG), nth, rjd);
 if (f_zero_p(*nth))
     *ry = ((int)rb_fix2int((VALUE)(y)));
 else {
     VALUE nth2;
     decode_year(y, *ns ? -1 : +1, &nth2, ry);
 }
    }
    else {
 decode_year(y, style, nth, ry);
 r = c_valid_commercial_p(*ry, w, d, style, rw, rd, rjd, ns);
    }
    return r;
}

static int
valid_weeknum_p(VALUE y, int w, int d, int f, double sg,
  VALUE *nth, int *ry,
  int *rw, int *rd, int *rjd,
  int *ns)
{
    double style = guess_style(y, sg);
    int r;

    if (style == 0) {
 int jd;

 r = c_valid_weeknum_p(((int)rb_fix2int((VALUE)(y))), w, d, f, sg, rw, rd, &jd, ns);
 if (!r)
     return 0;
 decode_jd((((VALUE)(jd))<<1 | RUBY_FIXNUM_FLAG), nth, rjd);
 if (f_zero_p(*nth))
     *ry = ((int)rb_fix2int((VALUE)(y)));
 else {
     VALUE nth2;
     decode_year(y, *ns ? -1 : +1, &nth2, ry);
 }
    }
    else {
 decode_year(y, style, nth, ry);
 r = c_valid_weeknum_p(*ry, w, d, f, style, rw, rd, rjd, ns);
    }
    return r;
}
VALUE date_zone_to_diff(VALUE);

static int
offset_to_sec(VALUE vof, int *rof)
{
    switch (rb_type((VALUE)(vof))) {
      case RUBY_T_FIXNUM:
 {
     long n;

     n = ((long)(((long)(vof))>>(int)(1)));
     if (n != -1 && n != 0 && n != 1)
  return 0;
     *rof = (int)n * 86400;
     return 1;
 }
      case RUBY_T_FLOAT:
 {
     double n;

     n = rb_float_value(vof) * 86400;
     if (n < -86400 || n > 86400)
  return 0;
     *rof = (int)round(n);
     if (*rof != n)
  rb_warning("fraction of offset is ignored");
     return 1;
 }
      default:
 expect_numeric(vof);
 vof = rb_funcall(vof, (__builtin_constant_p("to_r") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_r")), (long)strlen(("to_r"))); (ID) rb_intern_id_cache; }) : rb_intern("to_r")), 0);

 if (!k_rational_p(vof))
     return offset_to_sec(vof, rof);


      case RUBY_T_RATIONAL:
 {
     VALUE vs, vn, vd;
     long n;

     vs = day_to_sec(vof);


     if (!k_rational_p(vs)) {
  if (!(((int)(long)(vs))&RUBY_FIXNUM_FLAG))
      return 0;
  n = ((long)(((long)(vs))>>(int)(1)));
  if (n < -86400 || n > 86400)
      return 0;
  *rof = (int)n;
  return 1;
     }

     vn = rb_rational_num(vs);
     vd = rb_rational_den(vs);

     if ((((int)(long)(vn))&RUBY_FIXNUM_FLAG) && (((int)(long)(vd))&RUBY_FIXNUM_FLAG) && (((long)(((long)(vd))>>(int)(1))) == 1))
  n = ((long)(((long)(vn))>>(int)(1)));
     else {
  vn = rb_funcall(vs, (__builtin_constant_p("round") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("round")), (long)strlen(("round"))); (ID) rb_intern_id_cache; }) : rb_intern("round")), 0);
  if (!f_eqeq_p(vn, vs))
      rb_warning("fraction of offset is ignored");
  if (!(((int)(long)(vn))&RUBY_FIXNUM_FLAG))
      return 0;
  n = ((long)(((long)(vn))>>(int)(1)));
  if (n < -86400 || n > 86400)
      return 0;
     }
     *rof = (int)n;
     return 1;
 }
      case RUBY_T_STRING:
 {
     VALUE vs = date_zone_to_diff(vof);
     long n;

     if (!(((int)(long)(vs))&RUBY_FIXNUM_FLAG))
  return 0;
     n = ((long)(((long)(vs))>>(int)(1)));
     if (n < -86400 || n > 86400)
  return 0;
     *rof = (int)n;
     return 1;
 }
    }
    return 0;
}
static VALUE
valid_jd_sub(int argc, VALUE *argv, VALUE klass, int need_jd)
{
    double sg = rb_num2dbl((VALUE)(argv[1]));
    { if (!c_valid_start_p(sg)) { sg = 0; rb_warning("invalid start is ignored"); }};
    return argv[0];
}
static VALUE
date_s_valid_jd_p(int argc, VALUE *argv, VALUE klass)
{
    VALUE vjd, vsg;
    VALUE argv2[2];

    rb_scan_args(argc, argv, "11", &vjd, &vsg);

    argv2[0] = vjd;
    if (argc < 2)
 argv2[1] = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    else
 argv2[1] = vsg;

    if (!((VALUE)(valid_jd_sub(2, argv2, klass, 0)) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}

static VALUE
valid_civil_sub(int argc, VALUE *argv, VALUE klass, int need_jd)
{
    VALUE nth, y;
    int m, d, ry, rm, rd;
    double sg;

    y = argv[0];
    m = rb_num2int_inline(argv[1]);
    d = rb_num2int_inline(argv[2]);
    sg = rb_num2dbl((VALUE)(argv[3]));

    { if (!c_valid_start_p(sg)) { sg = 0; rb_warning("invalid start is ignored"); }};

    if (!need_jd && (guess_style(y, sg) < 0)) {
 if (!valid_gregorian_p(y, m, d,
          &nth, &ry,
          &rm, &rd))
     return ((VALUE)RUBY_Qnil);
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 int rjd, ns;
 VALUE rjd2;

 if (!valid_civil_p(y, m, d, sg,
      &nth, &ry,
      &rm, &rd, &rjd,
      &ns))
     return ((VALUE)RUBY_Qnil);
 if (!need_jd)
     return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 encode_jd(nth, rjd, &rjd2);
 return rjd2;
    }
}
static VALUE
date_s_valid_civil_p(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vm, vd, vsg;
    VALUE argv2[4];

    rb_scan_args(argc, argv, "31", &vy, &vm, &vd, &vsg);

    argv2[0] = vy;
    argv2[1] = vm;
    argv2[2] = vd;
    if (argc < 4)
 argv2[3] = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    else
 argv2[3] = vsg;

    if (!((VALUE)(valid_civil_sub(4, argv2, klass, 0)) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}

static VALUE
valid_ordinal_sub(int argc, VALUE *argv, VALUE klass, int need_jd)
{
    VALUE nth, y;
    int d, ry, rd;
    double sg;

    y = argv[0];
    d = rb_num2int_inline(argv[1]);
    sg = rb_num2dbl((VALUE)(argv[2]));

    { if (!c_valid_start_p(sg)) { sg = 0; rb_warning("invalid start is ignored"); }};

    {
 int rjd, ns;
 VALUE rjd2;

 if (!valid_ordinal_p(y, d, sg,
        &nth, &ry,
        &rd, &rjd,
        &ns))
     return ((VALUE)RUBY_Qnil);
 if (!need_jd)
     return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 encode_jd(nth, rjd, &rjd2);
 return rjd2;
    }
}
static VALUE
date_s_valid_ordinal_p(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vd, vsg;
    VALUE argv2[3];

    rb_scan_args(argc, argv, "21", &vy, &vd, &vsg);

    argv2[0] = vy;
    argv2[1] = vd;
    if (argc < 3)
 argv2[2] = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    else
 argv2[2] = vsg;

    if (!((VALUE)(valid_ordinal_sub(3, argv2, klass, 0)) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}

static VALUE
valid_commercial_sub(int argc, VALUE *argv, VALUE klass, int need_jd)
{
    VALUE nth, y;
    int w, d, ry, rw, rd;
    double sg;

    y = argv[0];
    w = rb_num2int_inline(argv[1]);
    d = rb_num2int_inline(argv[2]);
    sg = rb_num2dbl((VALUE)(argv[3]));

    { if (!c_valid_start_p(sg)) { sg = 0; rb_warning("invalid start is ignored"); }};

    {
 int rjd, ns;
 VALUE rjd2;

 if (!valid_commercial_p(y, w, d, sg,
    &nth, &ry,
    &rw, &rd, &rjd,
    &ns))
     return ((VALUE)RUBY_Qnil);
 if (!need_jd)
     return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 encode_jd(nth, rjd, &rjd2);
 return rjd2;
    }
}
static VALUE
date_s_valid_commercial_p(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vw, vd, vsg;
    VALUE argv2[4];

    rb_scan_args(argc, argv, "31", &vy, &vw, &vd, &vsg);

    argv2[0] = vy;
    argv2[1] = vw;
    argv2[2] = vd;
    if (argc < 4)
 argv2[3] = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    else
 argv2[3] = vsg;

    if (!((VALUE)(valid_commercial_sub(4, argv2, klass, 0)) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}
static VALUE
date_s_julian_leap_p(VALUE klass, VALUE y)
{
    VALUE nth;
    int ry;

    decode_year(y, +1, &nth, &ry);
    return ((c_julian_leap_p(ry)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}
static VALUE
date_s_gregorian_leap_p(VALUE klass, VALUE y)
{
    VALUE nth;
    int ry;

    decode_year(y, -1, &nth, &ry);
    return ((c_gregorian_leap_p(ry)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}

static void
d_lite_gc_mark(void *ptr)
{
    union DateData *dat = ptr;
    if ((!((dat)->flags & (1 << 7))))
 rb_gc_mark(dat->s.nth);
    else {
 rb_gc_mark(dat->c.nth);
 rb_gc_mark(dat->c.sf);
    }
}

static size_t
d_lite_memsize(const void *ptr)
{
    const union DateData *dat = ptr;
    return ((dat)->flags & (1 << 7)) ? sizeof(struct ComplexDateData) : sizeof(struct SimpleDateData);
}

static const rb_data_type_t d_lite_type = {
    "Date",
    {d_lite_gc_mark, ((RUBY_DATA_FUNC)-1), d_lite_memsize,},
    0, 0,
    1|RUBY_FL_WB_PROTECTED,
};

inline static VALUE
d_simple_new_internal(VALUE klass,
        VALUE nth, int jd,
        double sg,
        int y, int m, int d,
        unsigned flags)
{
    struct SimpleDateData *dat;
    VALUE obj;

    obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct SimpleDateData), &d_lite_type); (void)((dat) = (struct SimpleDateData *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });

    { rb_obj_write((VALUE)((obj)), (VALUE *)(&(dat)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 2971); (dat)->jd = jd; (dat)->sg = (float)(sg); (dat)->year = y; (dat)->pc = (((m) << (5 + 5 + 6 + 6)) | ((d) << (5 + 6 + 6))); (dat)->flags = flags & ~(1 << 7);};

    ((void) (0));

    return obj;
}

inline static VALUE
d_complex_new_internal(VALUE klass,
         VALUE nth, int jd,
         int df, VALUE sf,
         int of, double sg,
         int y, int m, int d,
         int h, int min, int s,
         unsigned flags)
{
    struct ComplexDateData *dat;
    VALUE obj;

    obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct ComplexDateData), &d_lite_type); (void)((dat) = (struct ComplexDateData *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });

    { rb_obj_write((VALUE)((obj)), (VALUE *)(&(dat)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 2993); (dat)->jd = jd; (dat)->df = df; rb_obj_write((VALUE)((obj)), (VALUE *)(&(dat)->sf), (VALUE)(canon(sf)), "ext/date/date_core.c", 2993); (dat)->of = of; (dat)->sg = (float)(sg); (dat)->year = y; (dat)->pc = (((m) << (5 + 5 + 6 + 6)) | ((d) << (5 + 6 + 6)) | ((h) << (6 + 6)) | ((min) << 6) | ((s) << 0)); (dat)->flags = flags | (1 << 7);};


    ((void) (0));
    ((void) (0));

    return obj;
}

static VALUE
d_lite_s_alloc_simple(VALUE klass)
{
    return d_simple_new_internal(klass,
     (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), 0,
     2299161,
     0, 0, 0,
     (1 << 0));
}

static VALUE
d_lite_s_alloc_complex(VALUE klass)
{
    return d_complex_new_internal(klass,
      (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), 0,
      0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
      0, 2299161,
      0, 0, 0,
      0, 0, 0,
      (1 << 0) | (1 << 1));
}

static VALUE
d_lite_s_alloc(VALUE klass)
{
    return d_lite_s_alloc_complex(klass);
}

static void
old_to_new(VALUE ajd, VALUE of, VALUE sg,
    VALUE *rnth, int *rjd, int *rdf, VALUE *rsf,
    int *rof, double *rsg)
{
    VALUE jd, df, sf, of2, t;

    decode_day(rb_funcall(ajd, '+', 1, half_days_in_day),
        &jd, &df, &sf);
    t = day_to_sec(of);
    of2 = rb_funcall(t, (__builtin_constant_p("round") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("round")), (long)strlen(("round"))); (ID) rb_intern_id_cache; }) : rb_intern("round")), 0);

    if (!f_eqeq_p(of2, t))
 rb_warning("fraction of offset is ignored");

    decode_jd(jd, rnth, rjd);

    *rdf = rb_num2int_inline(df);
    *rsf = sf;
    *rof = rb_num2int_inline(of2);
    *rsg = rb_num2dbl((VALUE)(sg));

    if (*rdf < 0 || *rdf >= 86400)
 rb_raise(rb_eArgError, "invalid day fraction");

    if (f_lt_p(*rsf, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)) ||
 f_ge_p(*rsf, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG)))

    if (*rof < -86400 || *rof > 86400) {
 *rof = 0;
 rb_warning("invalid offset is ignored");
    }

    if (!c_valid_start_p(*rsg)) {
 *rsg = 2299161;
 rb_warning("invalid start is ignored");
    }
}
inline static int
wholenum_p(VALUE x)
{
    if ((((int)(long)(x))&RUBY_FIXNUM_FLAG))
 return 1;
    switch (rb_type((VALUE)(x))) {
      case RUBY_T_BIGNUM:
 return 1;
      case RUBY_T_FLOAT:
 {
     double d = rb_float_value(x);
     return round(d) == d;
 }
 break;
      case RUBY_T_RATIONAL:
 {
     VALUE den = rb_rational_den(x);
     return (((int)(long)(den))&RUBY_FIXNUM_FLAG) && ((long)(((long)(den))>>(int)(1))) == 1;
 }
 break;
    }
    return 0;
}

inline static VALUE
to_integer(VALUE x)
{
    if ( ({ const VALUE integer_type_obj = (x); ((((int)(long)(integer_type_obj))&RUBY_FIXNUM_FLAG) || (!(((VALUE)(integer_type_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(integer_type_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(integer_type_obj))->flags & RUBY_T_MASK) == RUBY_T_BIGNUM)); }))
 return x;
    return rb_funcall(x, (__builtin_constant_p("to_i") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_i")), (long)strlen(("to_i"))); (ID) rb_intern_id_cache; }) : rb_intern("to_i")), 0);
}

inline static VALUE
d_trunc(VALUE d, VALUE *fr)
{
    VALUE rd;

    if (wholenum_p(d)) {
 rd = to_integer(d);
 *fr = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 rd = rb_funcall(d, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(d, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    }
    return rd;
}




inline static VALUE
h_trunc(VALUE h, VALUE *fr)
{
    VALUE rh;

    if (wholenum_p(h)) {
 rh = to_integer(h);
 *fr = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 rh = rb_funcall(h, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(h, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(*fr, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, (((VALUE)(24))<<1 | RUBY_FIXNUM_FLAG));
    }
    return rh;
}

inline static VALUE
min_trunc(VALUE min, VALUE *fr)
{
    VALUE rmin;

    if (wholenum_p(min)) {
 rmin = to_integer(min);
 *fr = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 rmin = rb_funcall(min, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(min, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(*fr, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, (((VALUE)(1440))<<1 | RUBY_FIXNUM_FLAG));
    }
    return rmin;
}

inline static VALUE
s_trunc(VALUE s, VALUE *fr)
{
    VALUE rs;

    if (wholenum_p(s)) {
 rs = to_integer(s);
 *fr = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    }
    else {
 rs = rb_funcall(s, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(s, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 *fr = rb_funcall(*fr, (__builtin_constant_p("quo") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("quo")), (long)strlen(("quo"))); (ID) rb_intern_id_cache; }) : rb_intern("quo")), 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));
    }
    return rs;
}
static VALUE d_lite_plus(VALUE, VALUE);
static VALUE
date_s_jd(int argc, VALUE *argv, VALUE klass)
{
    VALUE vjd, vsg, jd, fr, fr2, ret;
    double sg;

    rb_scan_args(argc, argv, "02", &vjd, &vsg);

    jd = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    sg = 2299161;

    switch (argc) {
      case 2:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 1:
 { jd = d_trunc(vjd, &fr); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
    }

    {
 VALUE nth;
 int rjd;

 decode_jd(jd, &nth, &rjd);
 ret = d_simple_new_internal(klass,
        nth, rjd,
        sg,
        0, 0, 0,
        (1 << 0));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
date_s_ordinal(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vd, vsg, y, fr, fr2, ret;
    int d;
    double sg;

    rb_scan_args(argc, argv, "03", &vy, &vd, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    d = 1;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    sg = 2299161;

    switch (argc) {
      case 3:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 2:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 1:
 y = vy;
    }

    {
 VALUE nth;
 int ry, rd, rjd, ns;

 if (!valid_ordinal_p(y, d, sg,
        &nth, &ry,
        &rd, &rjd,
        &ns))
     rb_raise(rb_eArgError, "invalid date");

 ret = d_simple_new_internal(klass,
         nth, rjd,
         sg,
         0, 0, 0,
         (1 << 0));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
date_s_civil(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vm, vd, vsg, y, fr, fr2, ret;
    int m, d;
    double sg;

    rb_scan_args(argc, argv, "04", &vy, &vm, &vd, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    m = 1;
    d = 1;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    sg = 2299161;

    switch (argc) {
      case 4:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 3:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 m = rb_num2int_inline(vm);
      case 1:
 y = vy;
    }

    if (guess_style(y, sg) < 0) {
 VALUE nth;
 int ry, rm, rd;

 if (!valid_gregorian_p(y, m, d,
          &nth, &ry,
          &rm, &rd))
     rb_raise(rb_eArgError, "invalid date");

 ret = d_simple_new_internal(klass,
        nth, 0,
        sg,
        ry, rm, rd,
        (1 << 2));
    }
    else {
 VALUE nth;
 int ry, rm, rd, rjd, ns;

 if (!valid_civil_p(y, m, d, sg,
      &nth, &ry,
      &rm, &rd, &rjd,
      &ns))
     rb_raise(rb_eArgError, "invalid date");

 ret = d_simple_new_internal(klass,
        nth, rjd,
        sg,
        ry, rm, rd,
        (1 << 0) | (1 << 2));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
date_s_commercial(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vw, vd, vsg, y, fr, fr2, ret;
    int w, d;
    double sg;

    rb_scan_args(argc, argv, "04", &vy, &vw, &vd, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    w = 1;
    d = 1;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    sg = 2299161;

    switch (argc) {
      case 4:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 3:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 w = rb_num2int_inline(vw);
      case 1:
 y = vy;
    }

    {
 VALUE nth;
 int ry, rw, rd, rjd, ns;

 if (!valid_commercial_p(y, w, d, sg,
    &nth, &ry,
    &rw, &rd, &rjd,
    &ns))
     rb_raise(rb_eArgError, "invalid date");

 ret = d_simple_new_internal(klass,
        nth, rjd,
        sg,
        0, 0, 0,
        (1 << 0));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static void set_sg(union DateData *, double);
static VALUE
date_s_today(int argc, VALUE *argv, VALUE klass)
{
    VALUE vsg, nth, ret;
    double sg;
    time_t t;
    struct tm tm;
    int y, ry, m, d;

    rb_scan_args(argc, argv, "01", &vsg);

    if (argc < 1)
 sg = 2299161;
    else
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};

    if (time(&t) == -1)
 rb_sys_fail("time");
    tzset();
    if (!localtime_r(&t, &tm))
 rb_sys_fail("localtime");

    y = tm.tm_year + 1900;
    m = tm.tm_mon + 1;
    d = tm.tm_mday;

    decode_year((((VALUE)(y))<<1 | RUBY_FIXNUM_FLAG), -1, &nth, &ry);

    ret = d_simple_new_internal(klass,
    nth, 0,
    negative_inf,
    ry, m, d,
    (1 << 2));
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((ret), (&d_lite_type)));;
 set_sg(dat, sg);
    }
    return ret;
}
static VALUE
rt_rewrite_frags(VALUE hash)
{
    VALUE seconds;

    seconds = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("seconds") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("seconds")), (long)strlen(("seconds"))); (ID) rb_intern_id_cache; }) : rb_intern("seconds")))));
    if (!!((VALUE)(seconds) != ((VALUE)RUBY_Qnil))) {
 VALUE offset, d, h, min, s, fr;

 offset = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("offset") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("offset")), (long)strlen(("offset"))); (ID) rb_intern_id_cache; }) : rb_intern("offset")))));
 if (!!((VALUE)(offset) != ((VALUE)RUBY_Qnil)))
     seconds = rb_funcall(seconds, '+', 1, offset);

 d = rb_funcall(seconds, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));
 fr = rb_funcall(seconds, '%', 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));

 h = rb_funcall(fr, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(3600))<<1 | RUBY_FIXNUM_FLAG));
 fr = rb_funcall(fr, '%', 1, (((VALUE)(3600))<<1 | RUBY_FIXNUM_FLAG));

 min = rb_funcall(fr, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(60))<<1 | RUBY_FIXNUM_FLAG));
 fr = rb_funcall(fr, '%', 1, (((VALUE)(60))<<1 | RUBY_FIXNUM_FLAG));

 s = rb_funcall(fr, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 fr = rb_funcall(fr, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));

 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))), rb_funcall((((VALUE)(2440588))<<1 | RUBY_FIXNUM_FLAG), '+', 1, d));
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))), h);
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))), min);
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))), s);
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec_fraction") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec_fraction")), (long)strlen(("sec_fraction"))); (ID) rb_intern_id_cache; }) : rb_intern("sec_fraction")))), fr);
 rb_hash_delete(hash, (rb_id2sym((__builtin_constant_p("seconds") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("seconds")), (long)strlen(("seconds"))); (ID) rb_intern_id_cache; }) : rb_intern("seconds")))));
    }
    return hash;
}



static VALUE d_lite_year(VALUE);
static VALUE d_lite_wday(VALUE);
static VALUE d_lite_jd(VALUE);

static VALUE
rt_complete_frags(VALUE klass, VALUE hash)
{
    static VALUE tab = ((VALUE)RUBY_Qnil);
    int g;
    long e;
    VALUE k, a, d;

    if (!((VALUE)(tab) != ((VALUE)RUBY_Qnil))) {
 tab = rb_ary_new_from_args(11,
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("time") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("time")), (long)strlen(("time"))); (ID) rb_intern_id_cache; }) : rb_intern("time")))),
          rb_ary_new_from_args(3,
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          ((VALUE)RUBY_Qnil),
          rb_ary_new_from_args(1,
        (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("ordinal") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("ordinal")), (long)strlen(("ordinal"))); (ID) rb_intern_id_cache; }) : rb_intern("ordinal")))),
          rb_ary_new_from_args(5,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("civil") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("civil")), (long)strlen(("civil"))); (ID) rb_intern_id_cache; }) : rb_intern("civil")))),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))),
        (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("commercial") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("commercial")), (long)strlen(("commercial"))); (ID) rb_intern_id_cache; }) : rb_intern("commercial")))),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("cwyear") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwyear")), (long)strlen(("cwyear"))); (ID) rb_intern_id_cache; }) : rb_intern("cwyear")))),
        (rb_id2sym((__builtin_constant_p("cweek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cweek")), (long)strlen(("cweek"))); (ID) rb_intern_id_cache; }) : rb_intern("cweek")))),
        (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))),
          rb_ary_new_from_args(4,
        (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))),
        (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))),
        (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          ((VALUE)RUBY_Qnil),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("cwyear") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwyear")), (long)strlen(("cwyear"))); (ID) rb_intern_id_cache; }) : rb_intern("cwyear")))),
        (rb_id2sym((__builtin_constant_p("cweek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cweek")), (long)strlen(("cweek"))); (ID) rb_intern_id_cache; }) : rb_intern("cweek")))),
        (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          ((VALUE)RUBY_Qnil),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))),
        (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
     rb_ary_new_from_args(2,
          ((VALUE)RUBY_Qnil),
          rb_ary_new_from_args(6,
        (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))),
        (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))),
        (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))),
        (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))),
        (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))),
        (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))));
 rb_gc_register_mark_object(tab);
    }

    {
 long i, eno = 0, idx = 0;

 for (i = 0; i < rb_array_len(tab); i++) {
     VALUE x, a;

     x = (rb_array_const_ptr(tab)[i]);
     a = (rb_array_const_ptr(x)[1]);

     {
  long j, n = 0;

  for (j = 0; j < rb_array_len(a); j++)
      if (!!((VALUE)(rb_hash_aref(hash, (rb_array_const_ptr(a)[j]))) != ((VALUE)RUBY_Qnil)))
   n++;
  if (n > eno) {
      eno = n;
      idx = i;
  }
     }
 }
 if (eno == 0)
     g = 0;
 else {
     g = 1;
     k = (rb_array_const_ptr((rb_array_const_ptr(tab)[idx]))[0]);
     a = (rb_array_const_ptr((rb_array_const_ptr(tab)[idx]))[1]);
     e = eno;
 }
    }

    d = ((VALUE)RUBY_Qnil);

    if (g && !!((VALUE)(k) != ((VALUE)RUBY_Qnil)) && (rb_array_len(a) - e)) {
 if (k == (rb_id2sym((__builtin_constant_p("ordinal") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("ordinal")), (long)strlen(("ordinal"))); (ID) rb_intern_id_cache; }) : rb_intern("ordinal"))))) {
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil))) {
  if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
      d = date_s_today(0, (VALUE *)0, cDate);
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))), d_lite_year(d));
     }
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (k == (rb_id2sym((__builtin_constant_p("civil") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("civil")), (long)strlen(("civil"))); (ID) rb_intern_id_cache; }) : rb_intern("civil"))))) {
     long i;

     for (i = 0; i < rb_array_len(a); i++) {
  VALUE e = (rb_array_const_ptr(a)[i]);

  if (!!((VALUE)(rb_hash_aref(hash, e)) != ((VALUE)RUBY_Qnil)))
      break;
  if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
      d = date_s_today(0, (VALUE *)0, cDate);
  rb_hash_aset(hash, e, rb_funcall(d, (rb_sym2id(e)), 0));
     }
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (k == (rb_id2sym((__builtin_constant_p("commercial") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("commercial")), (long)strlen(("commercial"))); (ID) rb_intern_id_cache; }) : rb_intern("commercial"))))) {
     long i;

     for (i = 0; i < rb_array_len(a); i++) {
  VALUE e = (rb_array_const_ptr(a)[i]);

  if (!!((VALUE)(rb_hash_aref(hash, e)) != ((VALUE)RUBY_Qnil)))
      break;
  if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
      d = date_s_today(0, (VALUE *)0, cDate);
  rb_hash_aset(hash, e, rb_funcall(d, (rb_sym2id(e)), 0));
     }
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cweek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cweek")), (long)strlen(("cweek"))); (ID) rb_intern_id_cache; }) : rb_intern("cweek")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("cweek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cweek")), (long)strlen(("cweek"))); (ID) rb_intern_id_cache; }) : rb_intern("cweek")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (k == (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday"))))) {
     if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
  d = date_s_today(0, (VALUE *)0, cDate);
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))), d_lite_jd(rb_funcall(rb_funcall(d, '-', 1, d_lite_wday(d)), '+', 1, rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday"))))))));


 }
 else if (k == (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0"))))) {
     long i;

     for (i = 0; i < rb_array_len(a); i++) {
  VALUE e = (rb_array_const_ptr(a)[i]);

  if (!!((VALUE)(rb_hash_aref(hash, e)) != ((VALUE)RUBY_Qnil)))
      break;
  if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
      d = date_s_today(0, (VALUE *)0, cDate);
  rb_hash_aset(hash, e, rb_funcall(d, (rb_sym2id(e)), 0));
     }
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (k == (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1"))))) {
     long i;

     for (i = 0; i < rb_array_len(a); i++) {
  VALUE e = (rb_array_const_ptr(a)[i]);

  if (!!((VALUE)(rb_hash_aref(hash, e)) != ((VALUE)RUBY_Qnil)))
      break;
  if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
      d = date_s_today(0, (VALUE *)0, cDate);
  rb_hash_aset(hash, e, rb_funcall(d, (rb_sym2id(e)), 0));
     }
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 }
    }

    if (g && k == (rb_id2sym((__builtin_constant_p("time") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("time")), (long)strlen(("time"))); (ID) rb_intern_id_cache; }) : rb_intern("time"))))) {
 if (f_le_p(klass, cDateTime)) {
     if (!((VALUE)(d) != ((VALUE)RUBY_Qnil)))
  d = date_s_today(0, (VALUE *)0, cDate);
     if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))))) != ((VALUE)RUBY_Qnil)))
  rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))), d_lite_jd(d));
 }
    }

    if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))))) != ((VALUE)RUBY_Qnil)))
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))))) != ((VALUE)RUBY_Qnil)))
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))) != ((VALUE)RUBY_Qnil)))
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    else if (f_gt_p(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec"))))), (((VALUE)(59))<<1 | RUBY_FIXNUM_FLAG)))
 rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))), (((VALUE)(59))<<1 | RUBY_FIXNUM_FLAG));

    return hash;
}

static VALUE
rt__valid_jd_p(VALUE jd, VALUE sg)
{
    return jd;
}

static VALUE
rt__valid_ordinal_p(VALUE y, VALUE d, VALUE sg)
{
    VALUE nth, rjd2;
    int ry, rd, rjd, ns;

    if (!valid_ordinal_p(y, rb_num2int_inline(d), rb_num2dbl((VALUE)(sg)),
    &nth, &ry,
    &rd, &rjd,
    &ns))
 return ((VALUE)RUBY_Qnil);
    encode_jd(nth, rjd, &rjd2);
    return rjd2;
}

static VALUE
rt__valid_civil_p(VALUE y, VALUE m, VALUE d, VALUE sg)
{
    VALUE nth, rjd2;
    int ry, rm, rd, rjd, ns;

    if (!valid_civil_p(y, rb_num2int_inline(m), rb_num2int_inline(d), rb_num2dbl((VALUE)(sg)),
         &nth, &ry,
         &rm, &rd, &rjd,
         &ns))
 return ((VALUE)RUBY_Qnil);
    encode_jd(nth, rjd, &rjd2);
    return rjd2;
}

static VALUE
rt__valid_commercial_p(VALUE y, VALUE w, VALUE d, VALUE sg)
{
    VALUE nth, rjd2;
    int ry, rw, rd, rjd, ns;

    if (!valid_commercial_p(y, rb_num2int_inline(w), rb_num2int_inline(d), rb_num2dbl((VALUE)(sg)),
       &nth, &ry,
       &rw, &rd, &rjd,
       &ns))
 return ((VALUE)RUBY_Qnil);
    encode_jd(nth, rjd, &rjd2);
    return rjd2;
}

static VALUE
rt__valid_weeknum_p(VALUE y, VALUE w, VALUE d, VALUE f, VALUE sg)
{
    VALUE nth, rjd2;
    int ry, rw, rd, rjd, ns;

    if (!valid_weeknum_p(y, rb_num2int_inline(w), rb_num2int_inline(d), rb_num2int_inline(f), rb_num2dbl((VALUE)(sg)),
    &nth, &ry,
    &rw, &rd, &rjd,
    &ns))
 return ((VALUE)RUBY_Qnil);
    encode_jd(nth, rjd, &rjd2);
    return rjd2;
}

static VALUE
rt__valid_date_frags_p(VALUE hash, VALUE sg)
{
    {
 VALUE vjd;

 if (!!((VALUE)(vjd = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_jd_p(vjd, sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }

    {
 VALUE year, yday;

 if (!!((VALUE)(yday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(year = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_ordinal_p(year, yday, sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }

    {
 VALUE year, mon, mday;

 if (!!((VALUE)(mday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(mon = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(year = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_civil_p(year, mon, mday, sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }

    {
 VALUE year, week, wday;

 wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))));
 if (!((VALUE)(wday) != ((VALUE)RUBY_Qnil))) {
     wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))));
     if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)))
  if (f_zero_p(wday))
      wday = (((VALUE)(7))<<1 | RUBY_FIXNUM_FLAG);
 }

 if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(week = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cweek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cweek")), (long)strlen(("cweek"))); (ID) rb_intern_id_cache; }) : rb_intern("cweek")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(year = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cwyear") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwyear")), (long)strlen(("cwyear"))); (ID) rb_intern_id_cache; }) : rb_intern("cwyear")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_commercial_p(year, week, wday, sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }

    {
 VALUE year, week, wday;

 wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))));
 if (!((VALUE)(wday) != ((VALUE)RUBY_Qnil))) {
     wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))));
     if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)))
  if (f_eqeq_p(wday, (((VALUE)(7))<<1 | RUBY_FIXNUM_FLAG)))
      wday = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 }

 if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(week = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wnum0") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum0")), (long)strlen(("wnum0"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum0")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(year = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_weeknum_p(year, week, wday, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }

    {
 VALUE year, week, wday;

 wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wday")), (long)strlen(("wday"))); (ID) rb_intern_id_cache; }) : rb_intern("wday")))));
 if (!((VALUE)(wday) != ((VALUE)RUBY_Qnil)))
     wday = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("cwday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("cwday")), (long)strlen(("cwday"))); (ID) rb_intern_id_cache; }) : rb_intern("cwday")))));
 if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)))
     wday = rb_funcall(rb_funcall(wday, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)), '%', 1, (((VALUE)(7))<<1 | RUBY_FIXNUM_FLAG));


 if (!!((VALUE)(wday) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(week = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("wnum1") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wnum1")), (long)strlen(("wnum1"))); (ID) rb_intern_id_cache; }) : rb_intern("wnum1")))))) != ((VALUE)RUBY_Qnil)) &&
     !!((VALUE)(year = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil))) {
     VALUE jd = rt__valid_weeknum_p(year, week, wday, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG), sg);
     if (!!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
  return jd;
 }
    }
    return ((VALUE)RUBY_Qnil);
}

static VALUE
d_new_by_frags(VALUE klass, VALUE hash, VALUE sg)
{
    VALUE jd;

    if (!c_valid_start_p(rb_num2dbl((VALUE)(sg)))) {
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
 rb_warning("invalid start is ignored");
    }

    if (!((VALUE)(hash) != ((VALUE)RUBY_Qnil)))
 rb_raise(rb_eArgError, "invalid date");

    if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))))) != ((VALUE)RUBY_Qnil)) &&
 !((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))))) != ((VALUE)RUBY_Qnil)))
 jd = rt__valid_civil_p(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year"))))),
          rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon"))))),
          rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday"))))), sg);
    else {
 hash = rt_rewrite_frags(hash);
 hash = rt_complete_frags(klass, hash);
 jd = rt__valid_date_frags_p(hash, sg);
    }

    if (!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
 rb_raise(rb_eArgError, "invalid date");
    {
 VALUE nth;
 int rjd;

 decode_jd(jd, &nth, &rjd);
 return d_simple_new_internal(klass,
         nth, rjd,
         rb_num2dbl((VALUE)(sg)),
         0, 0, 0,
         (1 << 0));
    }
}

VALUE date__strptime(const char *str, size_t slen,
       const char *fmt, size_t flen, VALUE hash);

static VALUE
date_s__strptime_internal(int argc, VALUE *argv, VALUE klass,
     const char *default_fmt)
{
    VALUE vstr, vfmt, hash;
    const char *str, *fmt;
    size_t slen, flen;

    rb_scan_args(argc, argv, "11", &vstr, &vfmt);

    rb_string_value(&(vstr));
    if (!rb_enc_asciicompat_inline(rb_enc_get(vstr)))
 rb_raise(rb_eArgError,
   "string should have ASCII compatible encoding");
    str = (!(((struct RBasic*)(vstr))->flags & RSTRING_NOEMBED) ? ((struct RString*)(vstr))->as.ary : ((struct RString*)(vstr))->as.heap.ptr);
    slen = (!(((struct RBasic*)(vstr))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(vstr))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(vstr))->as.heap.len);
    if (argc < 2) {
 fmt = default_fmt;
 flen = strlen(default_fmt);
    }
    else {
 rb_string_value(&(vfmt));
 if (!rb_enc_asciicompat_inline(rb_enc_get(vfmt)))
     rb_raise(rb_eArgError,
       "format should have ASCII compatible encoding");
 fmt = (!(((struct RBasic*)(vfmt))->flags & RSTRING_NOEMBED) ? ((struct RString*)(vfmt))->as.ary : ((struct RString*)(vfmt))->as.heap.ptr);
 flen = (!(((struct RBasic*)(vfmt))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(vfmt))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(vfmt))->as.heap.len);
    }
    hash = rb_hash_new();
    if (!((VALUE)(date__strptime(str, slen, fmt, flen, hash)) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qnil);

    {
 VALUE zone = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("zone") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("zone")), (long)strlen(("zone"))); (ID) rb_intern_id_cache; }) : rb_intern("zone")))));
 VALUE left = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("leftover") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("leftover")), (long)strlen(("leftover"))); (ID) rb_intern_id_cache; }) : rb_intern("leftover")))));

 if (!!((VALUE)(zone) != ((VALUE)RUBY_Qnil))) {
     rb_enc_copy(zone, vstr);
     ( (((!(((VALUE)(zone) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(zone) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(vstr) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(vstr) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(vstr))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(zone))->flags |= ((((struct RBasic*)(vstr))->flags&(RUBY_FL_TAINT)))) : (void)0);
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("zone") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("zone")), (long)strlen(("zone"))); (ID) rb_intern_id_cache; }) : rb_intern("zone")))), zone);
 }
 if (!!((VALUE)(left) != ((VALUE)RUBY_Qnil))) {
     rb_enc_copy(left, vstr);
     ( (((!(((VALUE)(left) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(left) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(left))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(left))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(left))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(vstr) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(vstr) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(vstr))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(left))->flags |= ((((struct RBasic*)(vstr))->flags&(RUBY_FL_TAINT)))) : (void)0);
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("leftover") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("leftover")), (long)strlen(("leftover"))); (ID) rb_intern_id_cache; }) : rb_intern("leftover")))), left);
 }
    }

    return hash;
}
static VALUE
date_s__strptime(int argc, VALUE *argv, VALUE klass)
{
    return date_s__strptime_internal(argc, argv, klass, "%F");
}
static VALUE
date_s_strptime(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, fmt, sg;

    rb_scan_args(argc, argv, "03", &str, &fmt, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01")) ? rb_str_new_static(("-4712-01-01"), (long)strlen("-4712-01-01")) : rb_str_new_cstr("-4712-01-01"); });
      case 1:
 fmt =  ({ (__builtin_constant_p("%F")) ? rb_str_new_static(("%F"), (long)strlen("%F")) : rb_str_new_cstr("%F"); });
      case 2:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE argv2[2], hash;

 argv2[0] = str;
 argv2[1] = fmt;
 hash = date_s__strptime(2, argv2, klass);
 return d_new_by_frags(klass, hash, sg);
    }
}

VALUE date__parse(VALUE str, VALUE comp);

static VALUE
date_s__parse_internal(int argc, VALUE *argv, VALUE klass)
{
    VALUE vstr, vcomp, hash;

    rb_scan_args(argc, argv, "11", &vstr, &vcomp);
    rb_string_value(&(vstr));
    if (!rb_enc_asciicompat_inline(rb_enc_get(vstr)))
 rb_raise(rb_eArgError,
   "string should have ASCII compatible encoding");
    if (argc < 2)
 vcomp = ((VALUE)RUBY_Qtrue);

    hash = date__parse(vstr, vcomp);

    {
 VALUE zone = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("zone") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("zone")), (long)strlen(("zone"))); (ID) rb_intern_id_cache; }) : rb_intern("zone")))));

 if (!!((VALUE)(zone) != ((VALUE)RUBY_Qnil))) {
     rb_enc_copy(zone, vstr);
     ( (((!(((VALUE)(zone) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(zone) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(zone))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(vstr) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(vstr) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(vstr))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(zone))->flags |= ((((struct RBasic*)(vstr))->flags&(RUBY_FL_TAINT)))) : (void)0);
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("zone") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("zone")), (long)strlen(("zone"))); (ID) rb_intern_id_cache; }) : rb_intern("zone")))), zone);
 }
    }

    return hash;
}
static VALUE
date_s__parse(int argc, VALUE *argv, VALUE klass)
{
    return date_s__parse_internal(argc, argv, klass);
}
static VALUE
date_s_parse(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, comp, sg;

    rb_scan_args(argc, argv, "03", &str, &comp, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01")) ? rb_str_new_static(("-4712-01-01"), (long)strlen("-4712-01-01")) : rb_str_new_cstr("-4712-01-01"); });
      case 1:
 comp = ((VALUE)RUBY_Qtrue);
      case 2:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE argv2[2], hash;

 argv2[0] = str;
 argv2[1] = comp;
 hash = date_s__parse(2, argv2, klass);
 return d_new_by_frags(klass, hash, sg);
    }
}

VALUE date__iso8601(VALUE);
VALUE date__rfc3339(VALUE);
VALUE date__xmlschema(VALUE);
VALUE date__rfc2822(VALUE);
VALUE date__httpdate(VALUE);
VALUE date__jisx0301(VALUE);







static VALUE
date_s__iso8601(VALUE klass, VALUE str)
{
    return date__iso8601(str);
}
static VALUE
date_s_iso8601(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01")) ? rb_str_new_static(("-4712-01-01"), (long)strlen("-4712-01-01")) : rb_str_new_cstr("-4712-01-01"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__iso8601(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}







static VALUE
date_s__rfc3339(VALUE klass, VALUE str)
{
    return date__rfc3339(str);
}
static VALUE
date_s_rfc3339(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__rfc3339(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}







static VALUE
date_s__xmlschema(VALUE klass, VALUE str)
{
    return date__xmlschema(str);
}
static VALUE
date_s_xmlschema(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01")) ? rb_str_new_static(("-4712-01-01"), (long)strlen("-4712-01-01")) : rb_str_new_cstr("-4712-01-01"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__xmlschema(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}
static VALUE
date_s__rfc2822(VALUE klass, VALUE str)
{
    return date__rfc2822(str);
}
static VALUE
date_s_rfc2822(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("Mon, 1 Jan -4712 00:00:00 +0000")) ? rb_str_new_static(("Mon, 1 Jan -4712 00:00:00 +0000"), (long)strlen("Mon, 1 Jan -4712 00:00:00 +0000")) : rb_str_new_cstr("Mon, 1 Jan -4712 00:00:00 +0000"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__rfc2822(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}







static VALUE
date_s__httpdate(VALUE klass, VALUE str)
{
    return date__httpdate(str);
}
static VALUE
date_s_httpdate(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("Mon, 01 Jan -4712 00:00:00 GMT")) ? rb_str_new_static(("Mon, 01 Jan -4712 00:00:00 GMT"), (long)strlen("Mon, 01 Jan -4712 00:00:00 GMT")) : rb_str_new_cstr("Mon, 01 Jan -4712 00:00:00 GMT"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__httpdate(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}







static VALUE
date_s__jisx0301(VALUE klass, VALUE str)
{
    return date__jisx0301(str);
}
static VALUE
date_s_jisx0301(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01")) ? rb_str_new_static(("-4712-01-01"), (long)strlen("-4712-01-01")) : rb_str_new_cstr("-4712-01-01"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__jisx0301(klass, str);
 return d_new_by_frags(klass, hash, sg);
    }
}

static VALUE
dup_obj(VALUE self)
{
    union DateData *adat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if ((!((adat)->flags & (1 << 7)))) {
 VALUE new = d_lite_s_alloc_simple(rb_obj_class(self));
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->s = adat->s;
     rb_obj_written((VALUE)(new), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(bdat->s.nth), "ext/date/date_core.c", 4651);
     return new;
 }
    }
    else {
 VALUE new = d_lite_s_alloc_complex(rb_obj_class(self));
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->c = adat->c;
     rb_obj_written((VALUE)(new), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(bdat->c.nth), "ext/date/date_core.c", 4660);
     rb_obj_written((VALUE)(new), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(bdat->c.sf), "ext/date/date_core.c", 4661);
     return new;
 }
    }
}

static VALUE
dup_obj_as_complex(VALUE self)
{
    union DateData *adat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if ((!((adat)->flags & (1 << 7)))) {
 VALUE new = d_lite_s_alloc_complex(rb_obj_class(self));
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     { rb_obj_write((VALUE)((new)), (VALUE *)(&(&bdat->c)->nth), (VALUE)((&adat->s)->nth), "ext/date/date_core.c", 4676); (&bdat->c)->jd = (&adat->s)->jd; (&bdat->c)->df = 0; rb_obj_write((VALUE)((new)), (VALUE *)(&(&bdat->c)->sf), (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), "ext/date/date_core.c", 4676); (&bdat->c)->of = 0; (&bdat->c)->sg = (float)((&adat->s)->sg); (&bdat->c)->year = (&adat->s)->year; (&bdat->c)->pc = (((((((&adat->s)->pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1))) << (5 + 5 + 6 + 6)) | ((((((&adat->s)->pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1))) << (5 + 6 + 6)) | ((0) << (6 + 6)) | ((0) << 6) | ((0) << 0)); (&bdat->c)->flags = (&adat->s)->flags;};
     bdat->c.flags |= (1 << 1) | (1 << 7);
     return new;
 }
    }
    else {
 VALUE new = d_lite_s_alloc_complex(rb_obj_class(self));
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->c = adat->c;
     rb_obj_written((VALUE)(new), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(bdat->c.nth), "ext/date/date_core.c", 4686);
     rb_obj_written((VALUE)(new), (VALUE)(((VALUE)RUBY_Qundef)), (VALUE)(bdat->c.sf), "ext/date/date_core.c", 4687);
     return new;
 }
    }
}
static VALUE
d_lite_initialize_copy(VALUE copy, VALUE date)
{
    ({do { VALUE frozen_obj = (copy); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
    ({((void) 0);});

    if (copy == date)
 return copy;
    {
 union DateData *adat, *bdat; ((adat) = (union DateData*)rb_check_typeddata((copy), (&d_lite_type))); ((bdat) = (union DateData*)rb_check_typeddata((date), (&d_lite_type)));;
 if ((!((bdat)->flags & (1 << 7)))) {
     adat->s = bdat->s;
     adat->s.flags &= ~(1 << 7);
 }
 else {
     if (!((adat)->flags & (1 << 7)))
  rb_raise(rb_eArgError,
    "cannot load complex into simple");

     adat->c = bdat->c;
     adat->c.flags |= (1 << 7);
 }
    }
    return copy;
}
static VALUE
d_lite_ajd(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_ajd(dat);
}
static VALUE
d_lite_amjd(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_amjd(dat);
}
static VALUE
d_lite_jd(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_real_local_jd(dat);
}
static VALUE
d_lite_mjd(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return rb_funcall(m_real_local_jd(dat), '-', 1, (((VALUE)(2400001))<<1 | RUBY_FIXNUM_FLAG));
}
static VALUE
d_lite_ld(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return rb_funcall(m_real_local_jd(dat), '-', 1, (((VALUE)(2299160))<<1 | RUBY_FIXNUM_FLAG));
}
static VALUE
d_lite_year(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_real_year(dat);
}
static VALUE
d_lite_yday(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_yday(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_mon(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_mon(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_mday(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_mday(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_day_fraction(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    if ((!((dat)->flags & (1 << 7))))
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    return m_fr(dat);
}
static VALUE
d_lite_cwyear(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_real_cwyear(dat);
}
static VALUE
d_lite_cweek(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_cweek(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_cwday(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_cwday(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_wday(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_wday(dat)))<<1 | RUBY_FIXNUM_FLAG);
}







static VALUE
d_lite_sunday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 0) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_monday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 1) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_tuesday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 2) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_wednesday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 3) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_thursday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 4) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_friday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 5) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}







static VALUE
d_lite_saturday_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_wday(dat) == 6) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}
static VALUE
d_lite_hour(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_hour(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_min(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_min(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_sec(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return (((VALUE)(m_sec(dat)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
d_lite_sec_fraction(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_sf_in_sec(dat);
}
static VALUE
d_lite_offset(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_of_in_day(dat);
}
static VALUE
d_lite_zone(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return m_zone(dat);
}
static VALUE
d_lite_julian_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_julian_p(dat)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}
static VALUE
d_lite_gregorian_p(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return ((m_gregorian_p(dat)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}
static VALUE
d_lite_leap_p(VALUE self)
{
    int rjd, ns, ry, rm, rd;

    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    if (m_gregorian_p(dat))
 return ((c_gregorian_leap_p(m_year(dat))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));

    c_civil_to_jd(m_year(dat), 3, 1, m_virtual_sg(dat),
    &rjd, &ns);
    c_jd_to_civil(rjd - 1, m_virtual_sg(dat), &ry, &rm, &rd);
    return ((rd == 29) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse));
}
static VALUE
d_lite_start(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return rb_float_new(m_sg(dat));
}

static void
clear_civil(union DateData *x)
{
    if ((!((x)->flags & (1 << 7)))) {
 x->s.year = 0;




 x->s.pc = 0;

 x->s.flags &= ~(1 << 2);
    }
    else {
 x->c.year = 0;







 x->c.pc = 0;

 x->c.flags &= ~((1 << 2) | (1 << 3));
    }
}

static void
set_sg(union DateData *x, double sg)
{
    if ((!((x)->flags & (1 << 7)))) {
 get_s_jd(x);
 clear_civil(x);
 x->s.sg = (float)sg;
    } else {
 get_c_jd(x);
 get_c_df(x);
 clear_civil(x);
 x->c.sg = (float)sg;
    }
}

static VALUE
dup_obj_with_new_start(VALUE obj, double sg)
{
    volatile VALUE dup = dup_obj(obj);
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((dup), (&d_lite_type)));;
 set_sg(dat, sg);
    }
    return dup;
}
static VALUE
d_lite_new_start(int argc, VALUE *argv, VALUE self)
{
    VALUE vsg;
    double sg;

    rb_scan_args(argc, argv, "01", &vsg);

    sg = 2299161;
    if (argc >= 1)
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};

    return dup_obj_with_new_start(self, sg);
}







static VALUE
d_lite_italy(VALUE self)
{
    return dup_obj_with_new_start(self, 2299161);
}







static VALUE
d_lite_england(VALUE self)
{
    return dup_obj_with_new_start(self, 2361222);
}







static VALUE
d_lite_julian(VALUE self)
{
    return dup_obj_with_new_start(self, positive_inf);
}







static VALUE
d_lite_gregorian(VALUE self)
{
    return dup_obj_with_new_start(self, negative_inf);
}

static void
set_of(union DateData *x, int of)
{
    ((void) (0));
    get_c_jd(x);
    get_c_df(x);
    clear_civil(x);
    x->c.of = of;
}

static VALUE
dup_obj_with_new_offset(VALUE obj, int of)
{
    volatile VALUE dup = dup_obj_as_complex(obj);
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((dup), (&d_lite_type)));;
 set_of(dat, of);
    }
    return dup;
}
static VALUE
d_lite_new_offset(int argc, VALUE *argv, VALUE self)
{
    VALUE vof;
    int rof;

    rb_scan_args(argc, argv, "01", &vof);

    rof = 0;
    if (argc >= 1)
 { if (!offset_to_sec(vof, &rof)) { rof = 0; rb_warning("invalid offset is ignored"); }};

    return dup_obj_with_new_offset(self, rof);
}
static VALUE
d_lite_plus(VALUE self, VALUE other)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    switch (rb_type((VALUE)(other))) {
      case RUBY_T_FIXNUM:
 {
     VALUE nth;
     long t;
     int jd;

     nth = m_nth(dat);
     t = ((long)(((long)(other))>>(int)(1)));
     if (((t)<0 ? (-(-(((t))+1)/(((0xfffffff / 71149239 * 71149239))))-1) : (t)/((0xfffffff / 71149239 * 71149239)))) {
  nth = rb_funcall(nth, '+', 1, (((VALUE)(((t)<0 ? (-(-(((t))+1)/(((0xfffffff / 71149239 * 71149239))))-1) : (t)/((0xfffffff / 71149239 * 71149239)))))<<1 | RUBY_FIXNUM_FLAG));
  t = ((t)<0 ? ((((0xfffffff / 71149239 * 71149239)))-(-(((t))+1)%(((0xfffffff / 71149239 * 71149239))))-1) : (t)%((0xfffffff / 71149239 * 71149239)));
     }

     if (!t)
  jd = m_jd(dat);
     else {
  jd = m_jd(dat) + (int)t;
  { if (jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd += (0xfffffff / 71149239 * 71149239); } if (jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd -= (0xfffffff / 71149239 * 71149239); }};
     }

     if ((!((dat)->flags & (1 << 7))))
  return d_simple_new_internal(rb_obj_class(self),
          nth, jd,
          dat->s.sg,
          0, 0, 0,
          (dat->s.flags | (1 << 0)) &
          ~(1 << 2));
     else
  return d_complex_new_internal(rb_obj_class(self),
           nth, jd,
           dat->c.df, dat->c.sf,
           dat->c.of, dat->c.sg,
           0, 0, 0,





           (((dat->c.pc) >> (6 + 6)) & ((1 << (5)) - 1)),
           (((dat->c.pc) >> 6) & ((1 << (6)) - 1)),
           (((dat->c.pc) >> 0) & ((1 << (6)) - 1)),

           (dat->c.flags | (1 << 0)) &
           ~(1 << 2));
 }
 break;
      case RUBY_T_BIGNUM:
 {
     VALUE nth;
     int jd, s;

     if ((!f_negative_p(other)))
  s = +1;
     else {
  s = -1;
  other = rb_funcall(other, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
     }

     nth = rb_funcall(other, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG));
     jd = ((int)rb_fix2int((VALUE)(rb_funcall(other, '%', 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG)))));

     if (s < 0) {
  nth = rb_funcall(nth, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
  jd = -jd;
     }

     if (!jd)
  jd = m_jd(dat);
     else {
  jd = m_jd(dat) + jd;
  { if (jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd += (0xfffffff / 71149239 * 71149239); } if (jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd -= (0xfffffff / 71149239 * 71149239); }};
     }

     if (f_zero_p(nth))
  nth = m_nth(dat);
     else
  nth = rb_funcall(m_nth(dat), '+', 1, nth);

     if ((!((dat)->flags & (1 << 7))))
  return d_simple_new_internal(rb_obj_class(self),
          nth, jd,
          dat->s.sg,
          0, 0, 0,
          (dat->s.flags | (1 << 0)) &
          ~(1 << 2));
     else
  return d_complex_new_internal(rb_obj_class(self),
           nth, jd,
           dat->c.df, dat->c.sf,
           dat->c.of, dat->c.sg,
           0, 0, 0,





           (((dat->c.pc) >> (6 + 6)) & ((1 << (5)) - 1)),
           (((dat->c.pc) >> 6) & ((1 << (6)) - 1)),
           (((dat->c.pc) >> 0) & ((1 << (6)) - 1)),

           (dat->c.flags | (1 << 0)) &
           ~(1 << 2));
 }
 break;
      case RUBY_T_FLOAT:
 {
     double jd, o, tmp;
     int s, df;
     VALUE nth, sf;

     o = rb_float_value(other);

     if (o > 0)
  s = +1;
     else {
  s = -1;
  o = -o;
     }

     o = modf(o, &tmp);

     if (!floor(tmp / (0xfffffff / 71149239 * 71149239))) {
  nth = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
  jd = (int)tmp;
     }
     else {
  double i, f;

  f = modf(tmp / (0xfffffff / 71149239 * 71149239), &i);
  nth = rb_funcall(rb_float_new(i), (__builtin_constant_p("floor") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("floor")), (long)strlen(("floor"))); (ID) rb_intern_id_cache; }) : rb_intern("floor")), 0);
  jd = (int)(f * (0xfffffff / 71149239 * 71149239));
     }

     o *= 86400;
     o = modf(o, &tmp);
     df = (int)tmp;
     o *= 1000000000;
     sf = (((VALUE)((int)round(o)))<<1 | RUBY_FIXNUM_FLAG);

     if (s < 0) {
  jd = -jd;
  df = -df;
  sf = rb_funcall(sf, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
     }

     if (f_zero_p(sf))
  sf = m_sf(dat);
     else {
  sf = rb_funcall(m_sf(dat), '+', 1, sf);
  if (f_lt_p(sf, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))) {
      df -= 1;
      sf = rb_funcall(sf, '+', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
  }
  else if (f_ge_p(sf, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG))) {
      df += 1;
      sf = rb_funcall(sf, '-', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
  }
     }

     if (!df)
  df = m_df(dat);
     else {
  df = m_df(dat) + df;
  if (df < 0) {
      jd -= 1;
      df += 86400;
  }
  else if (df >= 86400) {
      jd += 1;
      df -= 86400;
  }
     }

     if (!jd)
  jd = m_jd(dat);
     else {
  jd = m_jd(dat) + jd;
  { if (jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd += (0xfffffff / 71149239 * 71149239); } if (jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd -= (0xfffffff / 71149239 * 71149239); }};
     }

     if (f_zero_p(nth))
  nth = m_nth(dat);
     else
  nth = rb_funcall(m_nth(dat), '+', 1, nth);

     if (!df && f_zero_p(sf) && !m_of(dat))
  return d_simple_new_internal(rb_obj_class(self),
          nth, (int)jd,
          m_sg(dat),
          0, 0, 0,
          (dat->s.flags | (1 << 0)) &
          ~((1 << 2) | (1 << 3) |
            (1 << 7)));
     else
  return d_complex_new_internal(rb_obj_class(self),
           nth, (int)jd,
           df, sf,
           m_of(dat), m_sg(dat),
           0, 0, 0,
           0, 0, 0,
           (dat->c.flags |
            (1 << 0) | (1 << 1)) &
           ~((1 << 2) | (1 << 3)));
 }
 break;
      default:
 expect_numeric(other);
 other = rb_funcall(other, (__builtin_constant_p("to_r") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_r")), (long)strlen(("to_r"))); (ID) rb_intern_id_cache; }) : rb_intern("to_r")), 0);

 if (!k_rational_p(other))
     return d_lite_plus(self, other);


      case RUBY_T_RATIONAL:
 {
     VALUE nth, sf, t;
     int jd, df, s;

     if (wholenum_p(other))
  return d_lite_plus(self, rb_rational_num(other));

     if ((!f_negative_p(other)))
  s = +1;
     else {
  s = -1;
  other = rb_funcall(other, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
     }

     nth = rb_funcall(other, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG));
     t = rb_funcall(other, '%', 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG));

     jd = ((int)rb_fix2int((VALUE)(rb_funcall(t, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)))));
     t = rb_funcall(t, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));

     t = rb_funcall(t, '*', 1, (((VALUE)(86400))<<1 | RUBY_FIXNUM_FLAG));
     df = ((int)rb_fix2int((VALUE)(rb_funcall(t, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)))));
     t = rb_funcall(t, '%', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));

     sf = rb_funcall(t, '*', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));

     if (s < 0) {
  nth = rb_funcall(nth, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
  jd = -jd;
  df = -df;
  sf = rb_funcall(sf, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0);
     }

     if (f_zero_p(sf))
  sf = m_sf(dat);
     else {
  sf = rb_funcall(m_sf(dat), '+', 1, sf);
  if (f_lt_p(sf, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))) {
      df -= 1;
      sf = rb_funcall(sf, '+', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
  }
  else if (f_ge_p(sf, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG))) {
      df += 1;
      sf = rb_funcall(sf, '-', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
  }
     }

     if (!df)
  df = m_df(dat);
     else {
  df = m_df(dat) + df;
  if (df < 0) {
      jd -= 1;
      df += 86400;
  }
  else if (df >= 86400) {
      jd += 1;
      df -= 86400;
  }
     }

     if (!jd)
  jd = m_jd(dat);
     else {
  jd = m_jd(dat) + jd;
  { if (jd < 0) { nth = rb_funcall(nth, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd += (0xfffffff / 71149239 * 71149239); } if (jd >= (0xfffffff / 71149239 * 71149239)) { nth = rb_funcall(nth, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); jd -= (0xfffffff / 71149239 * 71149239); }};
     }

     if (f_zero_p(nth))
  nth = m_nth(dat);
     else
  nth = rb_funcall(m_nth(dat), '+', 1, nth);

     if (!df && f_zero_p(sf) && !m_of(dat))
  return d_simple_new_internal(rb_obj_class(self),
          nth, jd,
          m_sg(dat),
          0, 0, 0,
          (dat->s.flags | (1 << 0)) &
          ~((1 << 2) | (1 << 3) |
            (1 << 7)));
     else
  return d_complex_new_internal(rb_obj_class(self),
           nth, jd,
           df, sf,
           m_of(dat), m_sg(dat),
           0, 0, 0,
           0, 0, 0,
           (dat->c.flags |
            (1 << 0) | (1 << 1)) &
           ~((1 << 2) | (1 << 3)));
 }
 break;
    }
}

static VALUE
minus_dd(VALUE self, VALUE other)
{
    union DateData *adat, *bdat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type))); ((bdat) = (union DateData*)rb_check_typeddata((other), (&d_lite_type)));;

    {
 int d, df;
 VALUE n, sf, r;

 n = rb_funcall(m_nth(adat), '-', 1, m_nth(bdat));
 d = m_jd(adat) - m_jd(bdat);
 df = m_df(adat) - m_df(bdat);
 sf = rb_funcall(m_sf(adat), '-', 1, m_sf(bdat));
 { if (d < 0) { n = rb_funcall(n, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); d += (0xfffffff / 71149239 * 71149239); } if (d >= (0xfffffff / 71149239 * 71149239)) { n = rb_funcall(n, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); d -= (0xfffffff / 71149239 * 71149239); }};

 if (df < 0) {
     d -= 1;
     df += 86400;
 }
 else if (df >= 86400) {
     d += 1;
     df -= 86400;
 }

 if (f_lt_p(sf, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))) {
     df -= 1;
     sf = rb_funcall(sf, '+', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (f_ge_p(sf, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG))) {
     df += 1;
     sf = rb_funcall(sf, '-', 1, (((VALUE)(1000000000))<<1 | RUBY_FIXNUM_FLAG));
 }

 if (f_zero_p(n))
     r = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 else
     r = rb_funcall(n, '*', 1, (((VALUE)((0xfffffff / 71149239 * 71149239)))<<1 | RUBY_FIXNUM_FLAG));

 if (d)
     r = rb_funcall(r, '+', 1, rb_rational_new(((((VALUE)(d))<<1 | RUBY_FIXNUM_FLAG)), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)));
 if (df)
     r = rb_funcall(r, '+', 1, isec_to_day(df));
 if ((!f_zero_p(sf)))
     r = rb_funcall(r, '+', 1, ns_to_day(sf));

 if (( ((RUBY_T_RATIONAL) == RUBY_T_FIXNUM) ? (((int)(long)(r))&RUBY_FIXNUM_FLAG) : ((RUBY_T_RATIONAL) == RUBY_T_TRUE) ? ((r) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_RATIONAL) == RUBY_T_FALSE) ? ((r) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_RATIONAL) == RUBY_T_NIL) ? ((r) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_RATIONAL) == RUBY_T_UNDEF) ? ((r) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_RATIONAL) == RUBY_T_SYMBOL) ? ((((VALUE)(r)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(r) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(r) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(r))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_RATIONAL) == RUBY_T_FLOAT) ? ( ((((int)(long)(r))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(r) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(r) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(r))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(r) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(r) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(r))->flags & RUBY_T_MASK) == (RUBY_T_RATIONAL))))
     return r;
 return rb_rational_new((r), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    }
}
static VALUE
d_lite_minus(VALUE self, VALUE other)
{
    if (k_date_p(other))
 return minus_dd(self, other);

    switch (rb_type((VALUE)(other))) {
      case RUBY_T_FIXNUM:
 return d_lite_plus(self, rb_long2num_inline(-((long)(((long)(other))>>(int)(1)))));
      case RUBY_T_FLOAT:
 return d_lite_plus(self, rb_float_new(-rb_float_value(other)));
      default:
 expect_numeric(other);

      case RUBY_T_BIGNUM:
      case RUBY_T_RATIONAL:
 return d_lite_plus(self, rb_funcall(other, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0));
    }
}







static VALUE
d_lite_next_day(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_plus(self, n);
}







static VALUE
d_lite_prev_day(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_minus(self, n);
}
static VALUE
d_lite_next(VALUE self)
{
    return d_lite_next_day(0, (VALUE *)((void*)0), self);
}
static VALUE
d_lite_rshift(VALUE self, VALUE other)
{
    VALUE t, y, nth, rjd2;
    int m, d, rjd;
    double sg;

    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    t = rb_funcall(rb_funcall(rb_funcall(m_real_year(dat), '*', 1, (((VALUE)(12))<<1 | RUBY_FIXNUM_FLAG)), '+', 1, (((VALUE)(m_mon(dat) - 1))<<1 | RUBY_FIXNUM_FLAG)), '+', 1, other);


    if ((((int)(long)(t))&RUBY_FIXNUM_FLAG)) {
 long it = ((long)(((long)(t))>>(int)(1)));
 y = rb_long2num_inline(((it)<0 ? (-(-(((it))+1)/((12)))-1) : (it)/(12)));
 it = ((it)<0 ? (((12))-(-(((it))+1)%((12)))-1) : (it)%(12));
 m = (int)it + 1;
    }
    else {
 y = rb_funcall(t, (__builtin_constant_p("div") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("div")), (long)strlen(("div"))); (ID) rb_intern_id_cache; }) : rb_intern("div")), 1, (((VALUE)(12))<<1 | RUBY_FIXNUM_FLAG));
 t = rb_funcall(t, '%', 1, (((VALUE)(12))<<1 | RUBY_FIXNUM_FLAG));
 m = ((int)rb_fix2int((VALUE)(t))) + 1;
    }
    d = m_mday(dat);
    sg = m_sg(dat);

    while (1) {
 int ry, rm, rd, ns;

 if (valid_civil_p(y, m, d, sg,
     &nth, &ry,
     &rm, &rd, &rjd, &ns))
     break;
 if (--d < 1)
     rb_raise(rb_eArgError, "invalid date");
    }
    encode_jd(nth, rjd, &rjd2);
    return d_lite_plus(self, rb_funcall(rjd2, '-', 1, m_real_local_jd(dat)));
}
static VALUE
d_lite_lshift(VALUE self, VALUE other)
{
    expect_numeric(other);
    return d_lite_rshift(self, rb_funcall(other, (__builtin_constant_p("-@") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("-@")), (long)strlen(("-@"))); (ID) rb_intern_id_cache; }) : rb_intern("-@")), 0));
}
static VALUE
d_lite_next_month(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_rshift(self, n);
}
static VALUE
d_lite_prev_month(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_lshift(self, n);
}
static VALUE
d_lite_next_year(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_rshift(self, rb_funcall(n, '*', 1, (((VALUE)(12))<<1 | RUBY_FIXNUM_FLAG)));
}
static VALUE
d_lite_prev_year(int argc, VALUE *argv, VALUE self)
{
    VALUE n;

    rb_scan_args(argc, argv, "01", &n);
    if (argc < 1)
 n = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return d_lite_lshift(self, rb_funcall(n, '*', 1, (((VALUE)(12))<<1 | RUBY_FIXNUM_FLAG)));
}

static VALUE d_lite_cmp(VALUE, VALUE);
static VALUE
d_lite_step(int argc, VALUE *argv, VALUE self)
{
    VALUE limit, step, date;
    int c;

    rb_scan_args(argc, argv, "11", &limit, &step);

    if (argc < 2)
 step = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);






    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((self), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);

    date = self;
    c = f_cmp(step, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    if (c < 0) {
 while (((int)rb_fix2int((VALUE)(d_lite_cmp(date, limit)))) >= 0) {
     rb_yield(date);
     date = d_lite_plus(date, step);
 }
    }
    else if (c == 0) {
 while (1)
     rb_yield(date);
    }
    else {
 while (((int)rb_fix2int((VALUE)(d_lite_cmp(date, limit)))) <= 0) {
     rb_yield(date);
     date = d_lite_plus(date, step);
 }
    }
    return self;
}
static VALUE
d_lite_upto(VALUE self, VALUE max)
{
    VALUE date;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((self), (rb_id2sym(rb_frame_this_func())), (1), (&max), (rb_enumerator_size_func *)((0))); } while (0);

    date = self;
    while (((int)rb_fix2int((VALUE)(d_lite_cmp(date, max)))) <= 0) {
 rb_yield(date);
 date = d_lite_plus(date, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    }
    return self;
}
static VALUE
d_lite_downto(VALUE self, VALUE min)
{
    VALUE date;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((self), (rb_id2sym(rb_frame_this_func())), (1), (&min), (rb_enumerator_size_func *)((0))); } while (0);

    date = self;
    while (((int)rb_fix2int((VALUE)(d_lite_cmp(date, min)))) >= 0) {
 rb_yield(date);
 date = d_lite_plus(date, (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG));
    }
    return self;
}

static VALUE
cmp_gen(VALUE self, VALUE other)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if (k_numeric_p(other))
 return (((VALUE)(f_cmp(m_ajd(dat), other)))<<1 | RUBY_FIXNUM_FLAG);
    else if (k_date_p(other))
 return (((VALUE)(f_cmp(m_ajd(dat), rb_funcall(other, (__builtin_constant_p("ajd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("ajd")), (long)strlen(("ajd"))); (ID) rb_intern_id_cache; }) : rb_intern("ajd")), 0))))<<1 | RUBY_FIXNUM_FLAG);
    return rb_num_coerce_cmp(self, other, (__builtin_constant_p("<=>") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("<=>")), (long)strlen(("<=>"))); (ID) rb_intern_id_cache; }) : rb_intern("<=>")));
}

static VALUE
cmp_dd(VALUE self, VALUE other)
{
    union DateData *adat, *bdat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type))); ((bdat) = (union DateData*)rb_check_typeddata((other), (&d_lite_type)));;

    {
 VALUE a_nth, b_nth,
     a_sf, b_sf;
 int a_jd, b_jd,
     a_df, b_df;

 m_canonicalize_jd(self, adat);
 m_canonicalize_jd(other, bdat);
 a_nth = m_nth(adat);
 b_nth = m_nth(bdat);
 if (f_eqeq_p(a_nth, b_nth)) {
     a_jd = m_jd(adat);
     b_jd = m_jd(bdat);
     if (a_jd == b_jd) {
  a_df = m_df(adat);
  b_df = m_df(bdat);
  if (a_df == b_df) {
      a_sf = m_sf(adat);
      b_sf = m_sf(bdat);
      if (f_eqeq_p(a_sf, b_sf)) {
   return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
      }
      else if (f_lt_p(a_sf, b_sf)) {
   return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
      }
      else {
   return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
      }
  }
  else if (a_df < b_df) {
      return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
  }
  else {
      return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
  }
     }
     else if (a_jd < b_jd) {
  return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
     }
     else {
  return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
     }
 }
 else if (f_lt_p(a_nth, b_nth)) {
     return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
 }
 else {
     return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
 }
    }
}
static VALUE
d_lite_cmp(VALUE self, VALUE other)
{
    if (!k_date_p(other))
 return cmp_gen(self, other);

    {
 union DateData *adat, *bdat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type))); ((bdat) = (union DateData*)rb_check_typeddata((other), (&d_lite_type)));;

 if (!((!((adat)->flags & (1 << 7))) && (!((bdat)->flags & (1 << 7))) &&
       m_gregorian_p(adat) == m_gregorian_p(bdat)))
     return cmp_dd(self, other);

 {
     VALUE a_nth, b_nth;
     int a_jd, b_jd;

     m_canonicalize_jd(self, adat);
     m_canonicalize_jd(other, bdat);
     a_nth = m_nth(adat);
     b_nth = m_nth(bdat);
     if (f_eqeq_p(a_nth, b_nth)) {
  a_jd = m_jd(adat);
  b_jd = m_jd(bdat);
  if (a_jd == b_jd) {
      return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
  }
  else if (a_jd < b_jd) {
      return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
  }
  else {
      return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
  }
     }
     else if (f_lt_p(a_nth, b_nth)) {
  return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
     }
     else {
  return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
     }
 }
    }
}

static VALUE
equal_gen(VALUE self, VALUE other)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if (k_numeric_p(other))
 return f_eqeq_p(m_real_local_jd(dat), other);
    else if (k_date_p(other))
 return f_eqeq_p(m_real_local_jd(dat), rb_funcall(other, (__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")), 0));
    return rb_num_coerce_cmp(self, other, (__builtin_constant_p("==") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("==")), (long)strlen(("=="))); (ID) rb_intern_id_cache; }) : rb_intern("==")));
}
static VALUE
d_lite_equal(VALUE self, VALUE other)
{
    if (!k_date_p(other))
 return equal_gen(self, other);

    {
 union DateData *adat, *bdat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type))); ((bdat) = (union DateData*)rb_check_typeddata((other), (&d_lite_type)));;

 if (!(m_gregorian_p(adat) == m_gregorian_p(bdat)))
     return equal_gen(self, other);

 {
     VALUE a_nth, b_nth;
     int a_jd, b_jd;

     m_canonicalize_jd(self, adat);
     m_canonicalize_jd(other, bdat);
     a_nth = m_nth(adat);
     b_nth = m_nth(bdat);
     a_jd = m_local_jd(adat);
     b_jd = m_local_jd(bdat);
     if (f_eqeq_p(a_nth, b_nth) &&
  a_jd == b_jd)
  return ((VALUE)RUBY_Qtrue);
     return ((VALUE)RUBY_Qfalse);
 }
    }
}


static VALUE
d_lite_eql_p(VALUE self, VALUE other)
{
    if (!k_date_p(other))
 return ((VALUE)RUBY_Qfalse);
    return f_zero_p(d_lite_cmp(self, other));
}


static VALUE
d_lite_hash(VALUE self)
{
    st_index_t v, h[4];

    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    h[0] = m_nth(dat);
    h[1] = m_jd(dat);
    h[2] = m_df(dat);
    h[3] = m_sf(dat);
    v = rb_memhash(h, sizeof(h));
    return (((VALUE)((long)(v)))<<1 | RUBY_FIXNUM_FLAG);
}





struct tmx_funcs {
    VALUE (*year)(void *dat);
    int (*yday)(void *dat);
    int (*mon)(void *dat);
    int (*mday)(void *dat);
    VALUE (*cwyear)(void *dat);
    int (*cweek)(void *dat);
    int (*cwday)(void *dat);
    int (*wnum0)(void *dat);
    int (*wnum1)(void *dat);
    int (*wday)(void *dat);
    int (*hour)(void *dat);
    int (*min)(void *dat);
    int (*sec)(void *dat);
    VALUE (*sec_fraction)(void *dat);
    VALUE (*secs)(void *dat);
    VALUE (*msecs)(void *dat);
    int (*offset)(void *dat);
    char *(*zone)(void *dat);
};
struct tmx {
    void *dat;
    const struct tmx_funcs *funcs;
};
static void set_tmx(VALUE, struct tmx *);
static VALUE strftimev(const char *, VALUE,
         void (*)(VALUE, struct tmx *));
static VALUE
d_lite_to_s(VALUE self)
{
    return strftimev("%Y-%m-%d", self, set_tmx);
}
static VALUE
mk_inspect(union DateData *x, VALUE klass, VALUE to_s)
{
    return rb_enc_sprintf(rb_usascii_encoding(),
     "#<%li\v: %li\v ((%+li\vj,%ds,%+li\vn),%+ds,%.0fj)>",
     klass, to_s,
     m_real_jd(x), m_df(x), m_sf(x),
     m_of(x), m_sg(x));
}
static VALUE
d_lite_inspect(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    return mk_inspect(dat, rb_obj_class(self), self);
}














extern int *__errno_location (void)  ;







extern char *program_invocation_name;
extern char *program_invocation_short_name;





typedef int error_t;


size_t date_strftime(char *s, size_t maxsize, const char *format,
       const struct tmx *tmx);


static size_t
date_strftime_alloc(char **buf, const char *format,
      struct tmx *tmx)
{
    size_t size, len, flen;

    (*buf)[0] = '\0';
    flen = strlen(format);
    if (flen == 0) {
 return 0;
    }
    (*__errno_location ()) = 0;
    len = date_strftime(*buf, 100, format, tmx);
    if (len != 0 || (**buf == '\0' && (*__errno_location ()) != 34)) return len;
    for (size=1024; ; size*=2) {
 *buf = ruby_xmalloc(size);
 (*buf)[0] = '\0';
 len = date_strftime(*buf, size, format, tmx);







 if (len > 0) break;
 ruby_xfree(*buf);
 if (size >= 1024 * flen) {
     rb_sys_fail(format);
     break;
 }
    }
    return len;
}

static VALUE
tmx_m_secs(union DateData *x)
{
    VALUE s;
    int df;

    s = day_to_sec(rb_funcall(m_real_jd(x), '-', 1, (((VALUE)(2440588))<<1 | RUBY_FIXNUM_FLAG)));

    if ((!((x)->flags & (1 << 7))))
 return s;
    df = m_df(x);
    if (df)
 s = rb_funcall(s, '+', 1, (((VALUE)(df))<<1 | RUBY_FIXNUM_FLAG));
    return s;
}



static VALUE
tmx_m_msecs(union DateData *x)
{
    VALUE s, sf;

    s = sec_to_ms(tmx_m_secs(x));
    if ((!((x)->flags & (1 << 7))))
 return s;
    sf = m_sf(x);
    if ((!f_zero_p(sf)))
 s = rb_funcall(s, '+', 1, rb_funcall(sf, '/', 1, (((VALUE)(1000000))<<1 | RUBY_FIXNUM_FLAG)));
    return s;
}

static int
tmx_m_of(union DateData *x)
{
    return m_of(x);
}

static char *
tmx_m_zone(union DateData *x)
{
    return (!(((struct RBasic*)(m_zone(x)))->flags & RSTRING_NOEMBED) ? ((struct RString*)(m_zone(x)))->as.ary : ((struct RString*)(m_zone(x)))->as.heap.ptr);
}

static const struct tmx_funcs tmx_funcs = {
    (VALUE (*)(void *))m_real_year,
    (int (*)(void *))m_yday,
    (int (*)(void *))m_mon,
    (int (*)(void *))m_mday,
    (VALUE (*)(void *))m_real_cwyear,
    (int (*)(void *))m_cweek,
    (int (*)(void *))m_cwday,
    (int (*)(void *))m_wnum0,
    (int (*)(void *))m_wnum1,
    (int (*)(void *))m_wday,
    (int (*)(void *))m_hour,
    (int (*)(void *))m_min,
    (int (*)(void *))m_sec,
    (VALUE (*)(void *))m_sf_in_sec,
    (VALUE (*)(void *))tmx_m_secs,
    (VALUE (*)(void *))tmx_m_msecs,
    (int (*)(void *))tmx_m_of,
    (char *(*)(void *))tmx_m_zone
};

static void
set_tmx(VALUE self, struct tmx *tmx)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    tmx->dat = (void *)dat;
    tmx->funcs = &tmx_funcs;
}

static VALUE
date_strftime_internal(int argc, VALUE *argv, VALUE self,
         const char *default_fmt,
         void (*func)(VALUE, struct tmx *))
{
    VALUE vfmt;
    const char *fmt;
    long len;
    char buffer[100], *buf = buffer;
    struct tmx tmx;
    VALUE str;

    rb_scan_args(argc, argv, "01", &vfmt);

    if (argc < 1)
 vfmt =  ({ (__builtin_constant_p(default_fmt)) ? rb_usascii_str_new_static((default_fmt), (long)strlen(default_fmt)) : rb_usascii_str_new_cstr(default_fmt); });
    else {
 rb_string_value(&(vfmt));
 if (!rb_enc_asciicompat_inline(rb_enc_get(vfmt))) {
     rb_raise(rb_eArgError,
       "format should have ASCII compatible encoding");
 }
    }
    fmt = (!(((struct RBasic*)(vfmt))->flags & RSTRING_NOEMBED) ? ((struct RString*)(vfmt))->as.ary : ((struct RString*)(vfmt))->as.heap.ptr);
    len = (!(((struct RBasic*)(vfmt))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(vfmt))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(vfmt))->as.heap.len);
    (*func)(self, &tmx);
    if (memchr(fmt, '\0', len)) {

 const char *p = fmt, *pe = fmt + len;

 str =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
 while (p < pe) {
     len = date_strftime_alloc(&buf, p, &tmx);
     rb_str_cat(str, buf, len);
     p += strlen(p);
     if (buf != buffer) {
  ruby_xfree(buf);
  buf = buffer;
     }
     for (fmt = p; p < pe && !*p; ++p);
     if (p > fmt) rb_str_cat(str, fmt, p - fmt);
 }
 rb_enc_copy(str, vfmt);
 ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(vfmt) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(vfmt) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(vfmt))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(vfmt))->flags&(RUBY_FL_TAINT)))) : (void)0);
 return str;
    }
    else
 len = date_strftime_alloc(&buf, fmt, &tmx);

    str =  ({ (__builtin_constant_p(buf) && __builtin_constant_p(len)) ? rb_str_new_static((buf), (len)) : rb_str_new((buf), (len)); });
    if (buf != buffer) ruby_xfree(buf);
    rb_enc_copy(str, vfmt);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(vfmt) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(vfmt) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(vfmt))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(vfmt))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}
static VALUE
d_lite_strftime(int argc, VALUE *argv, VALUE self)
{
    return date_strftime_internal(argc, argv, self,
      "%Y-%m-%d", set_tmx);
}

static VALUE
strftimev(const char *fmt, VALUE self,
   void (*func)(VALUE, struct tmx *))
{
    char buffer[100], *buf = buffer;
    struct tmx tmx;
    long len;
    VALUE str;

    (*func)(self, &tmx);
    len = date_strftime_alloc(&buf, fmt, &tmx);
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(self); ; rb_gc_guarded_ptr; }));
    str =  ({ (__builtin_constant_p(buf) && __builtin_constant_p(len)) ? rb_usascii_str_new_static((buf), (len)) : rb_usascii_str_new((buf), (len)); });
    if (buf != buffer) ruby_xfree(buf);
    return str;
}
static VALUE
d_lite_asctime(VALUE self)
{
    return strftimev("%a %b %e %H:%M:%S %Y", self, set_tmx);
}
static VALUE
d_lite_iso8601(VALUE self)
{
    return strftimev("%Y-%m-%d", self, set_tmx);
}







static VALUE
d_lite_rfc3339(VALUE self)
{
    return strftimev("%Y-%m-%dT%H:%M:%S%:z", self, set_tmx);
}
static VALUE
d_lite_rfc2822(VALUE self)
{
    return strftimev("%a, %-d %b %Y %T %z", self, set_tmx);
}
static VALUE
d_lite_httpdate(VALUE self)
{
    volatile VALUE dup = dup_obj_with_new_offset(self, 0);
    return strftimev("%a, %d %b %Y %T GMT", dup, set_tmx);
}

enum {
    DECIMAL_SIZE_OF_LONG = (((8*sizeof(long)) * 3010 + 9998) / 9999),
    JISX0301_DATE_SIZE = DECIMAL_SIZE_OF_LONG+8
};

static const char *
jisx0301_date_format(char *fmt, size_t size, VALUE jd, VALUE y)
{
    if ((((int)(long)(jd))&RUBY_FIXNUM_FLAG)) {
 long d = ((int)rb_fix2int((VALUE)(jd)));
 long s;
 char c;
 if (d < 2405160)
     return "%Y-%m-%d";
 if (d < 2419614) {
     c = 'M';
     s = 1867;
 }
 else if (d < 2424875) {
     c = 'T';
     s = 1911;
 }
 else if (d < 2447535) {
     c = 'S';
     s = 1925;
 }
 else {
     c = 'H';
     s = 1988;
 }
 ruby_snprintf(fmt, size, "%c%02ld.%%m.%%d", c, ((int)rb_fix2int((VALUE)(y))) - s);
 return fmt;
    }
    return "%Y-%m-%d";
}
static VALUE
d_lite_jisx0301(VALUE self)
{
    char fmtbuf[JISX0301_DATE_SIZE];
    const char *fmt;

    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;
    fmt = jisx0301_date_format(fmtbuf, sizeof(fmtbuf),
          m_real_local_jd(dat),
          m_real_year(dat));
    return strftimev(fmt, self, set_tmx);
}
static VALUE
d_lite_marshal_dump(VALUE self)
{
    VALUE a;

    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    a = rb_ary_new_from_args(6,
      m_nth(dat),
      (((VALUE)(m_jd(dat)))<<1 | RUBY_FIXNUM_FLAG),
      (((VALUE)(m_df(dat)))<<1 | RUBY_FIXNUM_FLAG),
      m_sf(dat),
      (((VALUE)(m_of(dat)))<<1 | RUBY_FIXNUM_FLAG),
      rb_float_new(m_sg(dat)));

    if (((!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((self)))->flags&((((VALUE)RUBY_FL_EXIVAR)))):0)) {
 rb_copy_generic_ivar(a, self);
 ((!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(a))->flags |= (((VALUE)RUBY_FL_EXIVAR))) : (void)0);
    }

    return a;
}


static VALUE
d_lite_marshal_load(VALUE self, VALUE a)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    ({do { VALUE frozen_obj = (self); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
    ({((void) 0);});

    if (!( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(a))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((a) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((a) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((a) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((a) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(a)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(a))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY))))
 rb_raise(rb_eTypeError, "expected an array");

    switch (rb_array_len(a)) {
      case 2:
      case 3:
 {
     VALUE ajd, of, sg, nth, sf;
     int jd, df, rof;
     double rsg;


     if (rb_array_len(a) == 2) {
  ajd = rb_funcall((rb_array_const_ptr(a)[0]), '-', 1, half_days_in_day);
  of = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
  sg = (rb_array_const_ptr(a)[1]);
  if (!k_numeric_p(sg))
      sg = rb_float_new(!(((VALUE)(sg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) ? negative_inf : positive_inf);
     }
     else {
  ajd = (rb_array_const_ptr(a)[0]);
  of = (rb_array_const_ptr(a)[1]);
  sg = (rb_array_const_ptr(a)[2]);
     }

     old_to_new(ajd, of, sg,
         &nth, &jd, &df, &sf, &rof, &rsg);

     if (!df && f_zero_p(sf) && !rof) {
  { rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->s)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 7136); (&dat->s)->jd = jd; (&dat->s)->sg = (float)(rsg); (&dat->s)->year = 0; (&dat->s)->pc = (((0) << (5 + 5 + 6 + 6)) | ((0) << (5 + 6 + 6))); (&dat->s)->flags = (1 << 0);};
     } else {
  if (!((dat)->flags & (1 << 7)))
      rb_raise(rb_eArgError,
        "cannot load complex into simple");

  { rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->c)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 7144); (&dat->c)->jd = jd; (&dat->c)->df = df; rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->c)->sf), (VALUE)(canon(sf)), "ext/date/date_core.c", 7144); (&dat->c)->of = rof; (&dat->c)->sg = (float)(rsg); (&dat->c)->year = 0; (&dat->c)->pc = (((0) << (5 + 5 + 6 + 6)) | ((0) << (5 + 6 + 6)) | ((0) << (6 + 6)) | ((0) << 6) | ((0) << 0)); (&dat->c)->flags = (1 << 0) | (1 << 1) | (1 << 7);};


     }
 }
 break;
      case 6:
 {
     VALUE nth, sf;
     int jd, df, of;
     double sg;

     nth = (rb_array_const_ptr(a)[0]);
     jd = rb_num2int_inline((rb_array_const_ptr(a)[1]));
     df = rb_num2int_inline((rb_array_const_ptr(a)[2]));
     sf = (rb_array_const_ptr(a)[3]);
     of = rb_num2int_inline((rb_array_const_ptr(a)[4]));
     sg = rb_num2dbl((VALUE)((rb_array_const_ptr(a)[5])));
     if (!df && f_zero_p(sf) && !of) {
  { rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->s)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 7161); (&dat->s)->jd = jd; (&dat->s)->sg = (float)(sg); (&dat->s)->year = 0; (&dat->s)->pc = (((0) << (5 + 5 + 6 + 6)) | ((0) << (5 + 6 + 6))); (&dat->s)->flags = (1 << 0);};
     } else {
  if (!((dat)->flags & (1 << 7)))
      rb_raise(rb_eArgError,
        "cannot load complex into simple");

  { rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->c)->nth), (VALUE)(canon(nth)), "ext/date/date_core.c", 7169); (&dat->c)->jd = jd; (&dat->c)->df = df; rb_obj_write((VALUE)((self)), (VALUE *)(&(&dat->c)->sf), (VALUE)(canon(sf)), "ext/date/date_core.c", 7169); (&dat->c)->of = of; (&dat->c)->sg = (float)(sg); (&dat->c)->year = 0; (&dat->c)->pc = (((0) << (5 + 5 + 6 + 6)) | ((0) << (5 + 6 + 6)) | ((0) << (6 + 6)) | ((0) << 6) | ((0) << 0)); (&dat->c)->flags = (1 << 0) | (1 << 1) | (1 << 7);};


     }
 }
 break;
      default:
 rb_raise(rb_eTypeError, "invalid size");
 break;
    }

    if (((!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((a)))->flags&((((VALUE)RUBY_FL_EXIVAR)))):0)) {
 rb_copy_generic_ivar(self, a);
 ((!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(self))->flags |= (((VALUE)RUBY_FL_EXIVAR))) : (void)0);
    }

    return self;
}


static VALUE
date_s__load(VALUE klass, VALUE s)
{
    VALUE a, obj;

    a = rb_marshal_load(s);
    obj = d_lite_s_alloc(klass);
    return d_lite_marshal_load(obj, a);
}
static VALUE
datetime_s_jd(int argc, VALUE *argv, VALUE klass)
{
    VALUE vjd, vh, vmin, vs, vof, vsg, jd, fr, fr2, ret;
    int h, min, s, rof;
    double sg;

    rb_scan_args(argc, argv, "06", &vjd, &vh, &vmin, &vs, &vof, &vsg);

    jd = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);

    h = min = s = 0;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    rof = 0;
    sg = 2299161;

    switch (argc) {
      case 6:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 5:
 { if (!offset_to_sec(vof, &rof)) { rof = 0; rb_warning("invalid offset is ignored"); }};
      case 4:
 { s = rb_num2int_inline(s_trunc(vs, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 3:
 { min = rb_num2int_inline(min_trunc(vmin, &fr)); if ((!f_zero_p(fr))) { if (argc > 3) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 { h = rb_num2int_inline(h_trunc(vh, &fr)); if ((!f_zero_p(fr))) { if (argc > 2) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 1:
 { jd = d_trunc(vjd, &fr); if ((!f_zero_p(fr))) { if (argc > 1) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
    }

    {
 VALUE nth;
 int rh, rmin, rs, rjd, rjd2;

 if (!c_valid_time_p(h, min, s, &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");
 { if (rh == 24) { rh = 0; fr2 = rb_funcall(fr2, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); }};

 decode_jd(jd, &nth, &rjd);
 rjd2 = jd_local_to_utc(rjd,
          time_to_df(rh, rmin, rs),
          rof);

 ret = d_complex_new_internal(klass,
         nth, rjd2,
         0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
         rof, sg,
         0, 0, 0,
         rh, rmin, rs,
         (1 << 0) | (1 << 3));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
datetime_s_ordinal(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vd, vh, vmin, vs, vof, vsg, y, fr, fr2, ret;
    int d, h, min, s, rof;
    double sg;

    rb_scan_args(argc, argv, "07", &vy, &vd, &vh, &vmin, &vs, &vof, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    d = 1;

    h = min = s = 0;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    rof = 0;
    sg = 2299161;

    switch (argc) {
      case 7:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 6:
 { if (!offset_to_sec(vof, &rof)) { rof = 0; rb_warning("invalid offset is ignored"); }};
      case 5:
 { s = rb_num2int_inline(s_trunc(vs, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 4:
 { min = rb_num2int_inline(min_trunc(vmin, &fr)); if ((!f_zero_p(fr))) { if (argc > 4) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 3:
 { h = rb_num2int_inline(h_trunc(vh, &fr)); if ((!f_zero_p(fr))) { if (argc > 3) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > 2) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 1:
 y = vy;
    }

    {
 VALUE nth;
 int ry, rd, rh, rmin, rs, rjd, rjd2, ns;

 if (!valid_ordinal_p(y, d, sg,
        &nth, &ry,
        &rd, &rjd,
        &ns))
     rb_raise(rb_eArgError, "invalid date");
 if (!c_valid_time_p(h, min, s, &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");
 { if (rh == 24) { rh = 0; fr2 = rb_funcall(fr2, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); }};

 rjd2 = jd_local_to_utc(rjd,
          time_to_df(rh, rmin, rs),
          rof);

 ret = d_complex_new_internal(klass,
         nth, rjd2,
         0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
         rof, sg,
         0, 0, 0,
         rh, rmin, rs,
         (1 << 0) | (1 << 3));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
datetime_s_civil(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vm, vd, vh, vmin, vs, vof, vsg, y, fr, fr2, ret;
    int m, d, h, min, s, rof;
    double sg;

    rb_scan_args(argc, argv, "08", &vy, &vm, &vd, &vh, &vmin, &vs, &vof, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    m = 1;
    d = 1;

    h = min = s = 0;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    rof = 0;
    sg = 2299161;

    switch (argc) {
      case 8:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 7:
 { if (!offset_to_sec(vof, &rof)) { rof = 0; rb_warning("invalid offset is ignored"); }};
      case 6:
 { s = rb_num2int_inline(s_trunc(vs, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 5:
 { min = rb_num2int_inline(min_trunc(vmin, &fr)); if ((!f_zero_p(fr))) { if (argc > 5) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 4:
 { h = rb_num2int_inline(h_trunc(vh, &fr)); if ((!f_zero_p(fr))) { if (argc > 4) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 3:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > 3) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 m = rb_num2int_inline(vm);
      case 1:
 y = vy;
    }

    if (guess_style(y, sg) < 0) {
 VALUE nth;
 int ry, rm, rd, rh, rmin, rs;

 if (!valid_gregorian_p(y, m, d,
          &nth, &ry,
          &rm, &rd))
     rb_raise(rb_eArgError, "invalid date");
 if (!c_valid_time_p(h, min, s, &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");
 { if (rh == 24) { rh = 0; fr2 = rb_funcall(fr2, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); }};

 ret = d_complex_new_internal(klass,
         nth, 0,
         0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
         rof, sg,
         ry, rm, rd,
         rh, rmin, rs,
         (1 << 2) | (1 << 3));
    }
    else {
 VALUE nth;
 int ry, rm, rd, rh, rmin, rs, rjd, rjd2, ns;

 if (!valid_civil_p(y, m, d, sg,
      &nth, &ry,
      &rm, &rd, &rjd,
      &ns))
     rb_raise(rb_eArgError, "invalid date");
 if (!c_valid_time_p(h, min, s, &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");
 { if (rh == 24) { rh = 0; fr2 = rb_funcall(fr2, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); }};

 rjd2 = jd_local_to_utc(rjd,
          time_to_df(rh, rmin, rs),
          rof);

 ret = d_complex_new_internal(klass,
         nth, rjd2,
         0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
         rof, sg,
         ry, rm, rd,
         rh, rmin, rs,
         (1 << 0) | (1 << 2) | (1 << 3));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
datetime_s_commercial(int argc, VALUE *argv, VALUE klass)
{
    VALUE vy, vw, vd, vh, vmin, vs, vof, vsg, y, fr, fr2, ret;
    int w, d, h, min, s, rof;
    double sg;

    rb_scan_args(argc, argv, "08", &vy, &vw, &vd, &vh, &vmin, &vs, &vof, &vsg);

    y = (((VALUE)(-4712))<<1 | RUBY_FIXNUM_FLAG);
    w = 1;
    d = 1;

    h = min = s = 0;
    fr2 = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    rof = 0;
    sg = 2299161;

    switch (argc) {
      case 8:
 { sg = rb_num2dbl((VALUE)(vsg)); if (!c_valid_start_p(sg)) { sg = 2299161; rb_warning("invalid start is ignored"); }};
      case 7:
 { if (!offset_to_sec(vof, &rof)) { rof = 0; rb_warning("invalid offset is ignored"); }};
      case 6:
 { s = rb_num2int_inline(s_trunc(vs, &fr)); if ((!f_zero_p(fr))) { if (argc > positive_inf) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 5:
 { min = rb_num2int_inline(min_trunc(vmin, &fr)); if ((!f_zero_p(fr))) { if (argc > 5) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 4:
 { h = rb_num2int_inline(h_trunc(vh, &fr)); if ((!f_zero_p(fr))) { if (argc > 4) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 3:
 { d = rb_num2int_inline(d_trunc(vd, &fr)); if ((!f_zero_p(fr))) { if (argc > 3) rb_raise(rb_eArgError, "invalid fraction"); fr2 = fr; }};
      case 2:
 w = rb_num2int_inline(vw);
      case 1:
 y = vy;
    }

    {
 VALUE nth;
 int ry, rw, rd, rh, rmin, rs, rjd, rjd2, ns;

 if (!valid_commercial_p(y, w, d, sg,
    &nth, &ry,
    &rw, &rd, &rjd,
    &ns))
     rb_raise(rb_eArgError, "invalid date");
 if (!c_valid_time_p(h, min, s, &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");
 { if (rh == 24) { rh = 0; fr2 = rb_funcall(fr2, '+', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)); }};

 rjd2 = jd_local_to_utc(rjd,
          time_to_df(rh, rmin, rs),
          rof);

 ret = d_complex_new_internal(klass,
         nth, rjd2,
         0, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG),
         rof, sg,
         0, 0, 0,
         rh, rmin, rs,
         (1 << 0) | (1 << 3));
    }
    { if ((!f_zero_p(fr2))) ret = d_lite_plus(ret, fr2);};
    return ret;
}
static VALUE
datetime_s_now(int argc, VALUE *argv, VALUE klass)
{
    VALUE vsg, nth, ret;
    double sg;

    struct timespec ts;



    time_t sec;
    struct tm tm;
    long sf, of;
    int y, ry, m, d, h, min, s;

    rb_scan_args(argc, argv, "01", &vsg);

    if (argc < 1)
 sg = 2299161;
    else
 sg = rb_num2dbl((VALUE)(vsg));


    if (clock_gettime(0, &ts) == -1)
 rb_sys_fail("clock_gettime");
    sec = ts.tv_sec;





    tzset();
    if (!localtime_r(&sec, &tm))
 rb_sys_fail("localtime");

    y = tm.tm_year + 1900;
    m = tm.tm_mon + 1;
    d = tm.tm_mday;
    h = tm.tm_hour;
    min = tm.tm_min;
    s = tm.tm_sec;
    if (s == 60)
 s = 59;

    of = tm.tm_gmtoff;
    sf = ts.tv_nsec;




    if (of < -86400 || of > 86400) {
 of = 0;
 rb_warning("invalid offset is ignored");
    }

    decode_year((((VALUE)(y))<<1 | RUBY_FIXNUM_FLAG), -1, &nth, &ry);

    ret = d_complex_new_internal(klass,
     nth, 0,
     0, rb_long2num_inline(sf),
     (int)of, negative_inf,
     ry, m, d,
     h, min, s,
     (1 << 2) | (1 << 3));
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((ret), (&d_lite_type)));;
 set_sg(dat, sg);
    }
    return ret;
}

static VALUE
dt_new_by_frags(VALUE klass, VALUE hash, VALUE sg)
{
    VALUE jd, sf, t;
    int df, of;

    if (!c_valid_start_p(rb_num2dbl((VALUE)(sg)))) {
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
 rb_warning("invalid start is ignored");
    }

    if (!((VALUE)(hash) != ((VALUE)RUBY_Qnil)))
 rb_raise(rb_eArgError, "invalid date");

    if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("jd") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("jd")), (long)strlen(("jd"))); (ID) rb_intern_id_cache; }) : rb_intern("jd")))))) != ((VALUE)RUBY_Qnil)) &&
 !((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("yday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("yday")), (long)strlen(("yday"))); (ID) rb_intern_id_cache; }) : rb_intern("yday")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")))))) != ((VALUE)RUBY_Qnil)) &&
 !!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")))))) != ((VALUE)RUBY_Qnil))) {
 jd = rt__valid_civil_p(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year"))))),
          rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon"))))),
          rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday"))))), sg);

 if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))))) != ((VALUE)RUBY_Qnil)))
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
 if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))))) != ((VALUE)RUBY_Qnil)))
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
 if (!((VALUE)(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))) != ((VALUE)RUBY_Qnil)))
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
 else if (f_eqeq_p(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec"))))), (((VALUE)(60))<<1 | RUBY_FIXNUM_FLAG)))
     rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))), (((VALUE)(59))<<1 | RUBY_FIXNUM_FLAG));
    }
    else {
 hash = rt_rewrite_frags(hash);
 hash = rt_complete_frags(klass, hash);
 jd = rt__valid_date_frags_p(hash, sg);
    }

    if (!((VALUE)(jd) != ((VALUE)RUBY_Qnil)))
 rb_raise(rb_eArgError, "invalid date");

    {
 int rh, rmin, rs;

 if (!c_valid_time_p(rb_num2int_inline(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")))))),
       rb_num2int_inline(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")))))),
       rb_num2int_inline(rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")))))),
       &rh, &rmin, &rs))
     rb_raise(rb_eArgError, "invalid date");

 df = time_to_df(rh, rmin, rs);
    }

    t = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("sec_fraction") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec_fraction")), (long)strlen(("sec_fraction"))); (ID) rb_intern_id_cache; }) : rb_intern("sec_fraction")))));
    if (!((VALUE)(t) != ((VALUE)RUBY_Qnil)))
 sf = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    else
 sf = sec_to_ns(t);

    t = rb_hash_aref(hash, (rb_id2sym((__builtin_constant_p("offset") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("offset")), (long)strlen(("offset"))); (ID) rb_intern_id_cache; }) : rb_intern("offset")))));
    if (!((VALUE)(t) != ((VALUE)RUBY_Qnil)))
 of = 0;
    else {
 of = rb_num2int_inline(t);
 if (of < -86400 || of > 86400) {
     of = 0;
     rb_warning("invalid offset is ignored");
 }
    }
    {
 VALUE nth;
 int rjd, rjd2;

 decode_jd(jd, &nth, &rjd);
 rjd2 = jd_local_to_utc(rjd, df, of);
 df = df_local_to_utc(df, of);

 return d_complex_new_internal(klass,
          nth, rjd2,
          df, sf,
          of, rb_num2dbl((VALUE)(sg)),
          0, 0, 0,
          0, 0, 0,
          (1 << 0) | (1 << 1));
    }
}
static VALUE
datetime_s__strptime(int argc, VALUE *argv, VALUE klass)
{
    return date_s__strptime_internal(argc, argv, klass, "%FT%T%z");
}
static VALUE
datetime_s_strptime(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, fmt, sg;

    rb_scan_args(argc, argv, "03", &str, &fmt, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 fmt =  ({ (__builtin_constant_p("%FT%T%z")) ? rb_str_new_static(("%FT%T%z"), (long)strlen("%FT%T%z")) : rb_str_new_cstr("%FT%T%z"); });
      case 2:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE argv2[2], hash;

 argv2[0] = str;
 argv2[1] = fmt;
 hash = date_s__strptime(2, argv2, klass);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_parse(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, comp, sg;

    rb_scan_args(argc, argv, "03", &str, &comp, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 comp = ((VALUE)RUBY_Qtrue);
      case 2:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE argv2[2], hash;

 argv2[0] = str;
 argv2[1] = comp;
 hash = date_s__parse(2, argv2, klass);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_iso8601(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__iso8601(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_rfc3339(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__rfc3339(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_xmlschema(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__xmlschema(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_rfc2822(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("Mon, 1 Jan -4712 00:00:00 +0000")) ? rb_str_new_static(("Mon, 1 Jan -4712 00:00:00 +0000"), (long)strlen("Mon, 1 Jan -4712 00:00:00 +0000")) : rb_str_new_cstr("Mon, 1 Jan -4712 00:00:00 +0000"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__rfc2822(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_httpdate(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("Mon, 01 Jan -4712 00:00:00 GMT")) ? rb_str_new_static(("Mon, 01 Jan -4712 00:00:00 GMT"), (long)strlen("Mon, 01 Jan -4712 00:00:00 GMT")) : rb_str_new_cstr("Mon, 01 Jan -4712 00:00:00 GMT"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__httpdate(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
datetime_s_jisx0301(int argc, VALUE *argv, VALUE klass)
{
    VALUE str, sg;

    rb_scan_args(argc, argv, "02", &str, &sg);

    switch (argc) {
      case 0:
 str =  ({ (__builtin_constant_p("-4712-01-01T00:00:00+00:00")) ? rb_str_new_static(("-4712-01-01T00:00:00+00:00"), (long)strlen("-4712-01-01T00:00:00+00:00")) : rb_str_new_cstr("-4712-01-01T00:00:00+00:00"); });
      case 1:
 sg = (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG);
    }

    {
 VALUE hash = date_s__jisx0301(klass, str);
 return dt_new_by_frags(klass, hash, sg);
    }
}
static VALUE
dt_lite_to_s(VALUE self)
{
    return strftimev("%Y-%m-%dT%H:%M:%S%:z", self, set_tmx);
}
static VALUE
dt_lite_strftime(int argc, VALUE *argv, VALUE self)
{
    return date_strftime_internal(argc, argv, self,
      "%Y-%m-%dT%H:%M:%S%:z", set_tmx);
}

static VALUE
iso8601_timediv(VALUE self, long n)
{
    static const char timefmt[] = "T%H:%M:%S";
    static const char zone[] = "%:z";
    char fmt[sizeof(timefmt) + sizeof(zone) + (sizeof(".%N") - 1) +
      DECIMAL_SIZE_OF_LONG];
    char *p = fmt;

    memcpy(p, timefmt, sizeof(timefmt)-1);
    p += sizeof(timefmt)-1;
    if (n > 0) p += ruby_snprintf(p, fmt+sizeof(fmt)-p, ".%%%ldN", n);
    memcpy(p, zone, sizeof(zone));
    return strftimev(fmt, self, set_tmx);
}
static VALUE
dt_lite_iso8601(int argc, VALUE *argv, VALUE self)
{
    long n = 0;

    rb_check_arity(argc, 0, 1);
    if (argc >= 1)
 n = rb_num2long_inline(argv[0]);

    return rb_str_append(strftimev("%Y-%m-%d", self, set_tmx),
    iso8601_timediv(self, n));
}
static VALUE
dt_lite_rfc3339(int argc, VALUE *argv, VALUE self)
{
    return dt_lite_iso8601(argc, argv, self);
}
static VALUE
dt_lite_jisx0301(int argc, VALUE *argv, VALUE self)
{
    long n = 0;

    rb_check_arity(argc, 0, 1);
    if (argc >= 1)
 n = rb_num2long_inline(argv[0]);

    return rb_str_append(d_lite_jisx0301(self),
    iso8601_timediv(self, n));
}
static VALUE
time_to_time(VALUE self)
{
    return self;
}







static VALUE
time_to_date(VALUE self)
{
    VALUE y, nth, ret;
    int ry, m, d;

    y = rb_funcall(self, (__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")), 0);
    m = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")), 0))));
    d = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")), 0))));

    decode_year(y, -1, &nth, &ry);

    ret = d_simple_new_internal(cDate,
    nth, 0,
    negative_inf,
    ry, m, d,
    (1 << 2));
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((ret), (&d_lite_type)));;
 set_sg(dat, 2299161);
    }
    return ret;
}







static VALUE
time_to_datetime(VALUE self)
{
    VALUE y, sf, nth, ret;
    int ry, m, d, h, min, s, of;

    y = rb_funcall(self, (__builtin_constant_p("year") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("year")), (long)strlen(("year"))); (ID) rb_intern_id_cache; }) : rb_intern("year")), 0);
    m = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("mon") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mon")), (long)strlen(("mon"))); (ID) rb_intern_id_cache; }) : rb_intern("mon")), 0))));
    d = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("mday") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mday")), (long)strlen(("mday"))); (ID) rb_intern_id_cache; }) : rb_intern("mday")), 0))));

    h = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("hour") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("hour")), (long)strlen(("hour"))); (ID) rb_intern_id_cache; }) : rb_intern("hour")), 0))));
    min = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("min") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("min")), (long)strlen(("min"))); (ID) rb_intern_id_cache; }) : rb_intern("min")), 0))));
    s = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("sec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("sec")), (long)strlen(("sec"))); (ID) rb_intern_id_cache; }) : rb_intern("sec")), 0))));
    if (s == 60)
 s = 59;

    sf = sec_to_ns(rb_funcall(self, (__builtin_constant_p("subsec") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("subsec")), (long)strlen(("subsec"))); (ID) rb_intern_id_cache; }) : rb_intern("subsec")), 0));
    of = ((int)rb_fix2int((VALUE)(rb_funcall(self, (__builtin_constant_p("utc_offset") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("utc_offset")), (long)strlen(("utc_offset"))); (ID) rb_intern_id_cache; }) : rb_intern("utc_offset")), 0))));

    decode_year(y, -1, &nth, &ry);

    ret = d_complex_new_internal(cDateTime,
     nth, 0,
     0, sf,
     of, 2299161,
     ry, m, d,
     h, min, s,
     (1 << 2) | (1 << 3));
    {
 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((ret), (&d_lite_type)));;
 set_sg(dat, 2299161);
    }
    return ret;
}







static VALUE
date_to_time(VALUE self)
{
    union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    return rb_funcall(rb_cTime, (__builtin_constant_p("local") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("local")), (long)strlen(("local"))); (ID) rb_intern_id_cache; }) : rb_intern("local")), 3, m_real_year(dat), (((VALUE)(m_mon(dat)))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)(m_mday(dat)))<<1 | RUBY_FIXNUM_FLAG));



}







static VALUE
date_to_date(VALUE self)
{
    return self;
}







static VALUE
date_to_datetime(VALUE self)
{
    union DateData *adat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if ((!((adat)->flags & (1 << 7)))) {
 VALUE new = d_lite_s_alloc_simple(cDateTime);
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->s = adat->s;
     return new;
 }
    }
    else {
 VALUE new = d_lite_s_alloc_complex(cDateTime);
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->c = adat->c;
     bdat->c.df = 0;
     rb_obj_write((VALUE)(new), (VALUE *)(&bdat->c.sf), (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), "ext/date/date_core.c", 8577);





     bdat->c.pc = ((((((adat->c.pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1))) << (5 + 5 + 6 + 6)) | (((((adat->c.pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1))) << (5 + 6 + 6)) | ((0) << (6 + 6)) | ((0) << 6) | ((0) << 0));

     bdat->c.flags |= (1 << 1) | (1 << 3);

     return new;
 }
    }
}







static VALUE
datetime_to_time(VALUE self)
{
    volatile VALUE dup = dup_obj(self);
    {
 VALUE t;

 union DateData *dat; ((dat) = (union DateData*)rb_check_typeddata((dup), (&d_lite_type)));;

 t = rb_funcall(rb_cTime,
     (__builtin_constant_p("new") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("new")), (long)strlen(("new"))); (ID) rb_intern_id_cache; }) : rb_intern("new")),
                   7,
     m_real_year(dat),
     (((VALUE)(m_mon(dat)))<<1 | RUBY_FIXNUM_FLAG),
     (((VALUE)(m_mday(dat)))<<1 | RUBY_FIXNUM_FLAG),
     (((VALUE)(m_hour(dat)))<<1 | RUBY_FIXNUM_FLAG),
     (((VALUE)(m_min(dat)))<<1 | RUBY_FIXNUM_FLAG),
     rb_funcall((((VALUE)(m_sec(dat)))<<1 | RUBY_FIXNUM_FLAG), '+', 1, m_sf_in_sec(dat)),

     (((VALUE)(m_of(dat)))<<1 | RUBY_FIXNUM_FLAG));
 return t;
    }
}







static VALUE
datetime_to_date(VALUE self)
{
    union DateData *adat; ((adat) = (union DateData*)rb_check_typeddata((self), (&d_lite_type)));;

    if ((!((adat)->flags & (1 << 7)))) {
 VALUE new = d_lite_s_alloc_simple(cDate);
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     bdat->s = adat->s;
     bdat->s.jd = m_local_jd(adat);
     return new;
 }
    }
    else {
 VALUE new = d_lite_s_alloc_simple(cDate);
 {
     union DateData *bdat; ((bdat) = (union DateData*)rb_check_typeddata((new), (&d_lite_type)));;
     { rb_obj_write((VALUE)((new)), (VALUE *)(&(&bdat->s)->nth), (VALUE)((&adat->c)->nth), "ext/date/date_core.c", 8646); (&bdat->s)->jd = (&adat->c)->jd; (&bdat->s)->sg = (float)((&adat->c)->sg); (&bdat->s)->year = (&adat->c)->year; (&bdat->s)->pc = (((((((&adat->c)->pc) >> (5 + 5 + 6 + 6)) & ((1 << (4)) - 1))) << (5 + 5 + 6 + 6)) | ((((((&adat->c)->pc) >> (5 + 6 + 6)) & ((1 << (5)) - 1))) << (5 + 6 + 6))); (&bdat->s)->flags = (&adat->c)->flags;}
     bdat->s.jd = m_local_jd(adat);
     bdat->s.flags &= ~((1 << 1) | (1 << 3) | (1 << 7));
     return new;
 }
    }
}







static VALUE
datetime_to_datetime(VALUE self)
{
    return self;
}
static const char *monthnames[] = {
    ((void*)0),
    "January", "February", "March",
    "April", "May", "June",
    "July", "August", "September",
    "October", "November", "December"};

static const char *abbr_monthnames[] = {
    ((void*)0),
    "Jan", "Feb", "Mar", "Apr",
    "May", "Jun", "Jul", "Aug",
    "Sep", "Oct", "Nov", "Dec"};

static const char *daynames[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"};

static const char *abbr_daynames[] = {
    "Sun", "Mon", "Tue", "Wed",
    "Thu", "Fri", "Sat"};

static VALUE
mk_ary_of_str(long len, const char *a[])
{
    VALUE o;
    long i;

    o = rb_ary_new_capa(len);
    for (i = 0; i < len; i++) {
 VALUE e;

 if (!a[i])
     e = ((VALUE)RUBY_Qnil);
 else {
     e =  ({ (__builtin_constant_p(a[i])) ? rb_usascii_str_new_static((a[i]), (long)strlen(a[i])) : rb_usascii_str_new_cstr(a[i]); });
     rb_obj_freeze(e);
 }
 rb_ary_push(o, e);
    }
    rb_obj_freeze(o);
    return o;
}

void
Init_date_core(void)
{



    ((void) (0));

    id_cmp = (__builtin_constant_p("<=>") ?  (rb_intern2(("<=>"), (long)strlen("<=>"))) : (rb_intern)("<=>"));
    id_le_p = (__builtin_constant_p("<=") ?  (rb_intern2(("<="), (long)strlen("<="))) : (rb_intern)("<="));
    id_ge_p = (__builtin_constant_p(">=") ?  (rb_intern2((">="), (long)strlen(">="))) : (rb_intern)(">="));
    id_eqeq_p = (__builtin_constant_p("==") ?  (rb_intern2(("=="), (long)strlen("=="))) : (rb_intern)("=="));

    half_days_in_day = rb_rational_new(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)), ((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG)));


    day_in_nanoseconds = rb_long2num_inline((long)86400 * 1000000000);
    rb_gc_register_mark_object(half_days_in_day);
    rb_gc_register_mark_object(day_in_nanoseconds);

    positive_inf = +(__builtin_inff ());
    negative_inf = -(__builtin_inff ());
    cDate = rb_define_class("Date", rb_cObject);

    rb_include_module(cDate, rb_mComparable);




    rb_define_const(cDate, "MONTHNAMES", mk_ary_of_str(13, monthnames));




    rb_define_const(cDate, "ABBR_MONTHNAMES",
      mk_ary_of_str(13, abbr_monthnames));




    rb_define_const(cDate, "DAYNAMES", mk_ary_of_str(7, daynames));




    rb_define_const(cDate, "ABBR_DAYNAMES", mk_ary_of_str(7, abbr_daynames));




    rb_define_const(cDate, "ITALY", (((VALUE)(2299161))<<1 | RUBY_FIXNUM_FLAG));




    rb_define_const(cDate, "ENGLAND", (((VALUE)(2361222))<<1 | RUBY_FIXNUM_FLAG));




    rb_define_const(cDate, "JULIAN", rb_float_new(positive_inf));




    rb_define_const(cDate, "GREGORIAN", rb_float_new(negative_inf));

    rb_define_alloc_func(cDate, d_lite_s_alloc);
    rb_define_singleton_method(cDate, "valid_jd?", date_s_valid_jd_p, -1);
    rb_define_singleton_method(cDate, "valid_ordinal?",
          date_s_valid_ordinal_p, -1);
    rb_define_singleton_method(cDate, "valid_civil?", date_s_valid_civil_p, -1);
    rb_define_singleton_method(cDate, "valid_date?", date_s_valid_civil_p, -1);
    rb_define_singleton_method(cDate, "valid_commercial?",
          date_s_valid_commercial_p, -1);
    rb_define_singleton_method(cDate, "julian_leap?", date_s_julian_leap_p, 1);
    rb_define_singleton_method(cDate, "gregorian_leap?",
          date_s_gregorian_leap_p, 1);
    rb_define_singleton_method(cDate, "leap?",
          date_s_gregorian_leap_p, 1);
    rb_define_singleton_method(cDate, "jd", date_s_jd, -1);
    rb_define_singleton_method(cDate, "ordinal", date_s_ordinal, -1);
    rb_define_singleton_method(cDate, "civil", date_s_civil, -1);
    rb_define_singleton_method(cDate, "new", date_s_civil, -1);
    rb_define_singleton_method(cDate, "commercial", date_s_commercial, -1);






    rb_define_singleton_method(cDate, "today", date_s_today, -1);
    rb_define_singleton_method(cDate, "_strptime", date_s__strptime, -1);
    rb_define_singleton_method(cDate, "strptime", date_s_strptime, -1);
    rb_define_singleton_method(cDate, "_parse", date_s__parse, -1);
    rb_define_singleton_method(cDate, "parse", date_s_parse, -1);
    rb_define_singleton_method(cDate, "_iso8601", date_s__iso8601, 1);
    rb_define_singleton_method(cDate, "iso8601", date_s_iso8601, -1);
    rb_define_singleton_method(cDate, "_rfc3339", date_s__rfc3339, 1);
    rb_define_singleton_method(cDate, "rfc3339", date_s_rfc3339, -1);
    rb_define_singleton_method(cDate, "_xmlschema", date_s__xmlschema, 1);
    rb_define_singleton_method(cDate, "xmlschema", date_s_xmlschema, -1);
    rb_define_singleton_method(cDate, "_rfc2822", date_s__rfc2822, 1);
    rb_define_singleton_method(cDate, "_rfc822", date_s__rfc2822, 1);
    rb_define_singleton_method(cDate, "rfc2822", date_s_rfc2822, -1);
    rb_define_singleton_method(cDate, "rfc822", date_s_rfc2822, -1);
    rb_define_singleton_method(cDate, "_httpdate", date_s__httpdate, 1);
    rb_define_singleton_method(cDate, "httpdate", date_s_httpdate, -1);
    rb_define_singleton_method(cDate, "_jisx0301", date_s__jisx0301, 1);
    rb_define_singleton_method(cDate, "jisx0301", date_s_jisx0301, -1);





    rb_define_method(cDate, "initialize_copy", d_lite_initialize_copy, 1);





    rb_define_method(cDate, "ajd", d_lite_ajd, 0);
    rb_define_method(cDate, "amjd", d_lite_amjd, 0);
    rb_define_method(cDate, "jd", d_lite_jd, 0);
    rb_define_method(cDate, "mjd", d_lite_mjd, 0);
    rb_define_method(cDate, "ld", d_lite_ld, 0);

    rb_define_method(cDate, "year", d_lite_year, 0);
    rb_define_method(cDate, "yday", d_lite_yday, 0);
    rb_define_method(cDate, "mon", d_lite_mon, 0);
    rb_define_method(cDate, "month", d_lite_mon, 0);
    rb_define_method(cDate, "mday", d_lite_mday, 0);
    rb_define_method(cDate, "day", d_lite_mday, 0);
    rb_define_method(cDate, "day_fraction", d_lite_day_fraction, 0);

    rb_define_method(cDate, "cwyear", d_lite_cwyear, 0);
    rb_define_method(cDate, "cweek", d_lite_cweek, 0);
    rb_define_method(cDate, "cwday", d_lite_cwday, 0);






    rb_define_method(cDate, "wday", d_lite_wday, 0);

    rb_define_method(cDate, "sunday?", d_lite_sunday_p, 0);
    rb_define_method(cDate, "monday?", d_lite_monday_p, 0);
    rb_define_method(cDate, "tuesday?", d_lite_tuesday_p, 0);
    rb_define_method(cDate, "wednesday?", d_lite_wednesday_p, 0);
    rb_define_method(cDate, "thursday?", d_lite_thursday_p, 0);
    rb_define_method(cDate, "friday?", d_lite_friday_p, 0);
    rb_define_method(cDate, "saturday?", d_lite_saturday_p, 0);





    rb_define_private_method(cDate, "hour", d_lite_hour, 0);
    rb_define_private_method(cDate, "min", d_lite_min, 0);
    rb_define_private_method(cDate, "minute", d_lite_min, 0);
    rb_define_private_method(cDate, "sec", d_lite_sec, 0);
    rb_define_private_method(cDate, "second", d_lite_sec, 0);
    rb_define_private_method(cDate, "sec_fraction", d_lite_sec_fraction, 0);
    rb_define_private_method(cDate, "second_fraction", d_lite_sec_fraction, 0);
    rb_define_private_method(cDate, "offset", d_lite_offset, 0);
    rb_define_private_method(cDate, "zone", d_lite_zone, 0);

    rb_define_method(cDate, "julian?", d_lite_julian_p, 0);
    rb_define_method(cDate, "gregorian?", d_lite_gregorian_p, 0);
    rb_define_method(cDate, "leap?", d_lite_leap_p, 0);

    rb_define_method(cDate, "start", d_lite_start, 0);
    rb_define_method(cDate, "new_start", d_lite_new_start, -1);
    rb_define_method(cDate, "italy", d_lite_italy, 0);
    rb_define_method(cDate, "england", d_lite_england, 0);
    rb_define_method(cDate, "julian", d_lite_julian, 0);
    rb_define_method(cDate, "gregorian", d_lite_gregorian, 0);

    rb_define_private_method(cDate, "new_offset", d_lite_new_offset, -1);

    rb_define_method(cDate, "+", d_lite_plus, 1);
    rb_define_method(cDate, "-", d_lite_minus, 1);

    rb_define_method(cDate, "next_day", d_lite_next_day, -1);
    rb_define_method(cDate, "prev_day", d_lite_prev_day, -1);
    rb_define_method(cDate, "next", d_lite_next, 0);
    rb_define_method(cDate, "succ", d_lite_next, 0);

    rb_define_method(cDate, ">>", d_lite_rshift, 1);
    rb_define_method(cDate, "<<", d_lite_lshift, 1);

    rb_define_method(cDate, "next_month", d_lite_next_month, -1);
    rb_define_method(cDate, "prev_month", d_lite_prev_month, -1);
    rb_define_method(cDate, "next_year", d_lite_next_year, -1);
    rb_define_method(cDate, "prev_year", d_lite_prev_year, -1);

    rb_define_method(cDate, "step", d_lite_step, -1);
    rb_define_method(cDate, "upto", d_lite_upto, 1);
    rb_define_method(cDate, "downto", d_lite_downto, 1);

    rb_define_method(cDate, "<=>", d_lite_cmp, 1);
    rb_define_method(cDate, "===", d_lite_equal, 1);
    rb_define_method(cDate, "eql?", d_lite_eql_p, 1);
    rb_define_method(cDate, "hash", d_lite_hash, 0);

    rb_define_method(cDate, "to_s", d_lite_to_s, 0);



    rb_define_method(cDate, "inspect", d_lite_inspect, 0);

    rb_define_method(cDate, "strftime", d_lite_strftime, -1);

    rb_define_method(cDate, "asctime", d_lite_asctime, 0);
    rb_define_method(cDate, "ctime", d_lite_asctime, 0);
    rb_define_method(cDate, "iso8601", d_lite_iso8601, 0);
    rb_define_method(cDate, "xmlschema", d_lite_iso8601, 0);
    rb_define_method(cDate, "rfc3339", d_lite_rfc3339, 0);
    rb_define_method(cDate, "rfc2822", d_lite_rfc2822, 0);
    rb_define_method(cDate, "rfc822", d_lite_rfc2822, 0);
    rb_define_method(cDate, "httpdate", d_lite_httpdate, 0);
    rb_define_method(cDate, "jisx0301", d_lite_jisx0301, 0);




    rb_define_method(cDate, "marshal_dump", d_lite_marshal_dump, 0);
    rb_define_method(cDate, "marshal_load", d_lite_marshal_load, 1);
    rb_define_singleton_method(cDate, "_load", date_s__load, 1);
    cDateTime = rb_define_class("DateTime", cDate);

    rb_define_singleton_method(cDateTime, "jd", datetime_s_jd, -1);
    rb_define_singleton_method(cDateTime, "ordinal", datetime_s_ordinal, -1);
    rb_define_singleton_method(cDateTime, "civil", datetime_s_civil, -1);
    rb_define_singleton_method(cDateTime, "new", datetime_s_civil, -1);
    rb_define_singleton_method(cDateTime, "commercial",
          datetime_s_commercial, -1);
    rb_undef_method(rb_class_of((VALUE)(cDateTime)), "today");

    rb_define_singleton_method(cDateTime, "now", datetime_s_now, -1);
    rb_define_singleton_method(cDateTime, "_strptime",
          datetime_s__strptime, -1);
    rb_define_singleton_method(cDateTime, "strptime",
          datetime_s_strptime, -1);
    rb_define_singleton_method(cDateTime, "parse",
          datetime_s_parse, -1);
    rb_define_singleton_method(cDateTime, "iso8601",
          datetime_s_iso8601, -1);
    rb_define_singleton_method(cDateTime, "rfc3339",
          datetime_s_rfc3339, -1);
    rb_define_singleton_method(cDateTime, "xmlschema",
          datetime_s_xmlschema, -1);
    rb_define_singleton_method(cDateTime, "rfc2822",
          datetime_s_rfc2822, -1);
    rb_define_singleton_method(cDateTime, "rfc822",
          datetime_s_rfc2822, -1);
    rb_define_singleton_method(cDateTime, "httpdate",
          datetime_s_httpdate, -1);
    rb_define_singleton_method(cDateTime, "jisx0301",
          datetime_s_jisx0301, -1);




    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("hour") ?  (rb_intern2(("hour"), (long)strlen("hour"))) : (rb_intern)("hour")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("min") ?  (rb_intern2(("min"), (long)strlen("min"))) : (rb_intern)("min")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("minute") ?  (rb_intern2(("minute"), (long)strlen("minute"))) : (rb_intern)("minute")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("sec") ?  (rb_intern2(("sec"), (long)strlen("sec"))) : (rb_intern)("sec")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("second") ?  (rb_intern2(("second"), (long)strlen("second"))) : (rb_intern)("second")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("sec_fraction") ?  (rb_intern2(("sec_fraction"), (long)strlen("sec_fraction"))) : (rb_intern)("sec_fraction")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("second_fraction") ?  (rb_intern2(("second_fraction"), (long)strlen("second_fraction"))) : (rb_intern)("second_fraction")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("offset") ?  (rb_intern2(("offset"), (long)strlen("offset"))) : (rb_intern)("offset")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("zone") ?  (rb_intern2(("zone"), (long)strlen("zone"))) : (rb_intern)("zone")))));
    rb_funcall(cDateTime, (__builtin_constant_p("public") ?  (rb_intern2(("public"), (long)strlen("public"))) : (rb_intern)("public")), 1, (rb_id2sym((__builtin_constant_p("new_offset") ?  (rb_intern2(("new_offset"), (long)strlen("new_offset"))) : (rb_intern)("new_offset")))));

    rb_define_method(cDateTime, "to_s", dt_lite_to_s, 0);

    rb_define_method(cDateTime, "strftime", dt_lite_strftime, -1);

    rb_define_method(cDateTime, "iso8601", dt_lite_iso8601, -1);
    rb_define_method(cDateTime, "xmlschema", dt_lite_iso8601, -1);
    rb_define_method(cDateTime, "rfc3339", dt_lite_rfc3339, -1);
    rb_define_method(cDateTime, "jisx0301", dt_lite_jisx0301, -1);



    rb_define_method(rb_cTime, "to_time", time_to_time, 0);
    rb_define_method(rb_cTime, "to_date", time_to_date, 0);
    rb_define_method(rb_cTime, "to_datetime", time_to_datetime, 0);

    rb_define_method(cDate, "to_time", date_to_time, 0);
    rb_define_method(cDate, "to_date", date_to_date, 0);
    rb_define_method(cDate, "to_datetime", date_to_datetime, 0);

    rb_define_method(cDateTime, "to_time", datetime_to_time, 0);
    rb_define_method(cDateTime, "to_date", datetime_to_date, 0);
    rb_define_method(cDateTime, "to_datetime", datetime_to_datetime, 0);
}
