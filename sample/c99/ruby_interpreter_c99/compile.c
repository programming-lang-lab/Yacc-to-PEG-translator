








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













extern int *__errno_location (void)  ;







extern char *program_invocation_name;
extern char *program_invocation_short_name;





typedef int error_t;







typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };
extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);
extern int ppoll (struct pollfd *__fds, nfds_t __nfds,
    const struct timespec *__timeout,
    const __sigset_t *__ss);

struct rb_io_buffer_t { char *ptr; int off; int len; int capa;} ;





typedef struct rb_io_buffer_t rb_io_buffer_t;

typedef struct rb_io_t {
    FILE *stdio_file;
    int fd;
    int mode;
    pid_t pid;
    int lineno;
    VALUE pathv;
    void (*finalize)(struct rb_io_t*,int);

    rb_io_buffer_t wbuf, rbuf;

    VALUE tied_io_for_writing;







    struct rb_io_enc_t {
        rb_encoding *enc;
        rb_encoding *enc2;
        int ecflags;
        VALUE ecopts;
    } encs;

    rb_econv_t *readconv;
    rb_io_buffer_t cbuf;

    rb_econv_t *writeconv;
    VALUE writeconv_asciicompat;
    int writeconv_initialized;
    int writeconv_pre_ecflags;
    VALUE writeconv_pre_ecopts;

    VALUE write_lock;
} rb_io_t;
rb_io_t *rb_io_make_open_file(VALUE obj);

FILE *rb_io_stdio_file(rb_io_t *fptr);

FILE *rb_fdopen(int, const char*);
int rb_io_modestr_fmode(const char *modestr);
int rb_io_modestr_oflags(const char *modestr);
 int rb_io_oflags_fmode(int oflags);
void rb_io_check_writable(rb_io_t*);
void rb_io_check_readable(rb_io_t*);
void rb_io_check_char_readable(rb_io_t *fptr);
void rb_io_check_byte_readable(rb_io_t *fptr);
int rb_io_fptr_finalize(rb_io_t*);
void rb_io_synchronized(rb_io_t*);
void rb_io_check_initialized(rb_io_t*);
void rb_io_check_closed(rb_io_t*);
VALUE rb_io_get_io(VALUE io);
VALUE rb_io_check_io(VALUE io);
VALUE rb_io_get_write_io(VALUE io);
VALUE rb_io_set_write_io(VALUE io, VALUE w);
int rb_io_wait_readable(int);
int rb_io_wait_writable(int);
int rb_wait_for_single_fd(int fd, int events, struct timeval *tv);
void rb_io_set_nonblock(rb_io_t *fptr);
int rb_io_extract_encoding_option(VALUE opt, rb_encoding **enc_p, rb_encoding **enc2_p, int *fmode_p);
ssize_t rb_io_bufwrite(VALUE io, const void *buf, size_t size);





VALUE rb_io_taint_check(VALUE);
 void rb_eof_error(void);

void rb_io_read_check(rb_io_t*);
int rb_io_read_pending(rb_io_t*);

struct stat;
VALUE rb_stat_new(const struct stat *);



static inline unsigned int
nlz_int(unsigned int x)
{

    if (x == 0) return 4 * 8;
    return (unsigned int)__builtin_clz(x);
}

static inline unsigned int
nlz_long(unsigned long x)
{

    if (x == 0) return 8 * 8;
    return (unsigned int)__builtin_clzl(x);
}


static inline unsigned int
nlz_long_long(unsigned long long x)
{

    if (x == 0) return 8 * 8;
    return (unsigned int)__builtin_clzll(x);
}



static inline unsigned int
nlz_int128(unsigned int x)
{
    unsigned int y;
    unsigned int n = 128;
    y = x >> 64; if (y) {n -= 64; x = y;}
    y = x >> 32; if (y) {n -= 32; x = y;}
    y = x >> 16; if (y) {n -= 16; x = y;}
    y = x >> 8; if (y) {n -= 8; x = y;}
    y = x >> 4; if (y) {n -= 4; x = y;}
    y = x >> 2; if (y) {n -= 2; x = y;}
    y = x >> 1; if (y) {return n - 2;}
    return (unsigned int)(n - x);
}


static inline unsigned int
nlz_intptr(uintptr_t x)
{

    return nlz_long_long(x);



}

static inline unsigned int
rb_popcount32(uint32_t x)
{

    return (unsigned int)__builtin_popcount(x);







}

static inline int
rb_popcount64(uint64_t x)
{

    return __builtin_popcountll(x);
}

static inline int
rb_popcount_intptr(uintptr_t x)
{

    return rb_popcount64(x);



}

static inline int
ntz_int32(uint32_t x)
{

    return __builtin_ctz(x);



}

static inline int
ntz_int64(uint64_t x)
{

    return __builtin_ctzll(x);



}

static inline int
ntz_intptr(uintptr_t x)
{

    return ntz_int64(x);



}







VALUE rb_int128t2big(int n);


static inline long
rb_overflowed_fix_to_int(long x)
{
    return (long)((unsigned long)(x >> 1) ^ (1LU << (8 * 8 - 1)));
}

static inline VALUE
rb_fix_plus_fix(VALUE x, VALUE y)
{

    long lz;
    if (__builtin_add_overflow((long)x, (long)y-1, &lz)) {
 return rb_int2big(rb_overflowed_fix_to_int(lz));
    }
    else {
 return (VALUE)lz;
    }




}

static inline VALUE
rb_fix_minus_fix(VALUE x, VALUE y)
{

    long lz;
    if (__builtin_sub_overflow((long)x, (long)y-1, &lz)) {
 return rb_int2big(rb_overflowed_fix_to_int(lz));
    }
    else {
 return (VALUE)lz;
    }




}


static inline VALUE
rb_fix_mul_fix(VALUE x, VALUE y)
{
    long lx = ((long)(((long)(x))>>(int)(1)));
    long ly = ((long)(((long)(y))>>(int)(1)));

    return (((((int)lx * (int)ly) < (9223372036854775807L>>1)+1) && (((int)lx * (int)ly) >= (((long)(-9223372036854775807L -1L))>>(int)(1)))) ? (((VALUE)((int)lx * (int)ly))<<1 | RUBY_FIXNUM_FLAG) : rb_int128t2big((int)lx * (int)ly));
}





static inline void
rb_fix_divmod_fix(VALUE a, VALUE b, VALUE *divp, VALUE *modp)
{




    long x = ((long)(((long)(a))>>(int)(1)));
    long y = ((long)(((long)(b))>>(int)(1)));
    long div, mod;
    if (x == (((long)(-9223372036854775807L -1L))>>(int)(1)) && y == -1) {
 if (divp) *divp = rb_long2num_inline(-(((long)(-9223372036854775807L -1L))>>(int)(1)));
 if (modp) *modp = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 return;
    }
    div = x / y;
    mod = x % y;
    if (y > 0 ? mod < 0 : mod > 0) {
 mod += y;
 div -= 1;
    }
    if (divp) *divp = (((VALUE)(div))<<1 | RUBY_FIXNUM_FLAG);
    if (modp) *modp = (((VALUE)(mod))<<1 | RUBY_FIXNUM_FLAG);
}




static inline VALUE
rb_fix_div_fix(VALUE x, VALUE y)
{
    VALUE div;
    rb_fix_divmod_fix(x, y, &div, ((void*)0));
    return div;
}




static inline VALUE
rb_fix_mod_fix(VALUE x, VALUE y)
{
    VALUE mod;
    rb_fix_divmod_fix(x, y, ((void*)0), &mod);
    return mod;
}
struct RBignum {
    struct RBasic basic;
    union {
        struct {
            size_t len;
            unsigned int *digits;
        } heap;
        unsigned int ary[(8*3/4)];
    } as;
};
struct RRational {
    struct RBasic basic;
    const VALUE num;
    const VALUE den;
};





struct RFloat {
    struct RBasic basic;
    double float_value;
};



struct RComplex {
    struct RBasic basic;
    const VALUE real;
    const VALUE imag;
};
struct RHash {
    struct RBasic basic;
    struct st_table *ntbl;
    int iter_lev;
    const VALUE ifnone;
};
extern void ruby_init_setproctitle(int argc, char *argv[]);





enum {
    RSTRUCT_EMBED_LEN_MAX = 3,
    RSTRUCT_EMBED_LEN_MASK = (RUBY_FL_USER2|RUBY_FL_USER1),
    RSTRUCT_EMBED_LEN_SHIFT = (RUBY_FL_USHIFT+1),

    RSTRUCT_ENUM_END
};

struct RStruct {
    struct RBasic basic;
    union {
 struct {
     long len;
     const VALUE *ptr;
 } heap;
 const VALUE ary[RSTRUCT_EMBED_LEN_MAX];
    } as;
};
static inline long
rb_struct_len(VALUE st)
{
    return (((struct RBasic*)(st))->flags & RSTRUCT_EMBED_LEN_MASK) ?
 (long)((((struct RBasic*)(st))->flags >> RSTRUCT_EMBED_LEN_SHIFT) & (RSTRUCT_EMBED_LEN_MASK >> RSTRUCT_EMBED_LEN_SHIFT)) : ((struct RStruct*)(st))->as.heap.len;
}

static inline const VALUE *
rb_struct_const_ptr(VALUE st)
{
    return ((((struct RBasic*)(st))->flags & RSTRUCT_EMBED_LEN_MASK) ? ((struct RStruct*)(st))->as.ary : ((struct RStruct*)(st))->as.heap.ptr);

}



struct rb_deprecated_classext_struct {
    char conflict[sizeof(VALUE) * 3];
};

struct rb_subclass_entry;
typedef struct rb_subclass_entry rb_subclass_entry_t;

struct rb_subclass_entry {
    VALUE klass;
    rb_subclass_entry_t *next;
};


typedef unsigned long long rb_serial_t;
struct rb_classext_struct {
    struct st_table *iv_index_tbl;
    struct st_table *iv_tbl;
    struct rb_id_table *const_tbl;
    struct rb_id_table *callable_m_tbl;
    rb_subclass_entry_t *subclasses;
    rb_subclass_entry_t **parent_subclasses;





    rb_subclass_entry_t **module_subclasses;
    rb_serial_t class_serial;
    const VALUE origin_;
    VALUE refined_class;
    rb_alloc_func_t allocator;
};

typedef struct rb_classext_struct rb_classext_t;


struct RClass {
    struct RBasic basic;
    VALUE super;
    rb_classext_t *ptr;
    struct rb_id_table *m_tbl;
};

void rb_class_subclass_add(VALUE super, VALUE klass);
void rb_class_remove_from_super_subclasses(VALUE);
int rb_singleton_class_internal_p(VALUE sklass);
static inline void
RCLASS_SET_ORIGIN(VALUE klass, VALUE origin)
{
    rb_obj_write((VALUE)(klass), (VALUE *)(&((((struct RClass*)(klass))->ptr)->origin_)), (VALUE)(origin), "./internal.h", 809);
    if (klass != origin) ((!(((VALUE)(origin) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(origin) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(origin))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(origin))->flags |= (((VALUE)RUBY_FL_USER5))) : (void)0);
}


static inline VALUE
RCLASS_SUPER(VALUE klass)
{
    return ((struct RClass*)(klass))->super;
}

static inline VALUE
RCLASS_SET_SUPER(VALUE klass, VALUE super)
{
    if (super) {
 rb_class_remove_from_super_subclasses(klass);
 rb_class_subclass_add(super, klass);
    }
    rb_obj_write((VALUE)(klass), (VALUE *)(&((struct RClass*)(klass))->super), (VALUE)(super), "./internal.h", 827);
    return super;
}






struct RIMemo {
    VALUE flags;
    VALUE v0;
    VALUE v1;
    VALUE v2;
    VALUE v3;
};

enum imemo_type {
    imemo_env = 0,
    imemo_cref = 1,
    imemo_svar = 2,
    imemo_throw_data = 3,
    imemo_ifunc = 4,
    imemo_memo = 5,
    imemo_ment = 6,
    imemo_iseq = 7,
    imemo_alloc = 8,
    imemo_ast = 9,
    imemo_parser_strterm = 10
};


static inline enum imemo_type
imemo_type(VALUE imemo)
{
    return (((struct RBasic*)(imemo))->flags >> ((VALUE)RUBY_FL_USHIFT)) & 0x0f;
}

static inline int
imemo_type_p(VALUE imemo, enum imemo_type imemo_type)
{
    if ((__builtin_expect(!!(!(((VALUE)(imemo) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(imemo) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))), 1))) {

 const VALUE mask = (0x0f << ((VALUE)RUBY_FL_USHIFT)) | RUBY_T_MASK;
 const VALUE expected_type = (imemo_type << ((VALUE)RUBY_FL_USHIFT)) | RUBY_T_IMEMO;

 return expected_type == (((struct RBasic*)(imemo))->flags & mask);
    }
    else {
 return 0;
    }
}
struct vm_svar {
    VALUE flags;
    const VALUE cref_or_me;
    const VALUE lastline;
    const VALUE backref;
    const VALUE others;
};





struct vm_throw_data {
    VALUE flags;
    VALUE reserved;
    const VALUE throw_obj;
    const struct rb_control_frame_struct *catch_frame;
    VALUE throw_state;
};





struct vm_ifunc_argc {




    int min, max;

};


struct vm_ifunc {
    VALUE flags;
    VALUE reserved;
    VALUE (*func)();
    const void *data;
    struct vm_ifunc_argc argc;
};


struct vm_ifunc *rb_vm_ifunc_new(VALUE (*func)(), const void *data, int min_argc, int max_argc);
static inline struct vm_ifunc *
rb_vm_ifunc_proc_new(VALUE (*func)(), const void *data)
{
    return rb_vm_ifunc_new(func, data, 0, (-1));
}

typedef struct rb_imemo_alloc_struct {
    VALUE flags;
    VALUE reserved;
    VALUE *ptr;
    struct rb_imemo_alloc_struct *next;
    size_t cnt;
} rb_imemo_alloc_t;

rb_imemo_alloc_t *rb_imemo_alloc_new(VALUE, VALUE, VALUE, VALUE);

void rb_strterm_mark(VALUE obj);





struct MEMO {
    VALUE flags;
    VALUE reserved;
    const VALUE v1;
    const VALUE v2;
    union {
 long cnt;
 long state;
 const VALUE value;
 VALUE (*func)();
    } u3;
};
enum {
    cmp_opt_Fixnum,
    cmp_opt_String,
    cmp_opt_Float,
    cmp_optimizable_count
};

struct cmp_opt_data {
    unsigned int opt_methods;
    unsigned int opt_inited;
};
struct rb_global_entry {
    struct rb_global_variable *var;
    ID id;
};

struct rb_global_entry *rb_global_entry(ID);
VALUE rb_gvar_get(struct rb_global_entry *);
VALUE rb_gvar_set(struct rb_global_entry *, VALUE);
VALUE rb_gvar_defined(struct rb_global_entry *);

struct vtm;


VALUE rb_ary_last(int, const VALUE *, VALUE);
void rb_ary_set_len(VALUE, long);
void rb_ary_delete_same(VALUE, VALUE);
VALUE rb_ary_tmp_new_fill(long capa);
VALUE rb_ary_at(VALUE, VALUE);
VALUE rb_ary_aref1(VALUE ary, VALUE i);
VALUE rb_ary_aref2(VALUE ary, VALUE b, VALUE e);
size_t rb_ary_memsize(VALUE);
VALUE rb_to_array_type(VALUE obj);
extern const char ruby_digitmap[];
double rb_big_fdiv_double(VALUE x, VALUE y);
VALUE rb_big_uminus(VALUE x);
VALUE rb_big_hash(VALUE);
VALUE rb_big_odd_p(VALUE);
VALUE rb_big_even_p(VALUE);
size_t rb_big_size(VALUE);
VALUE rb_integer_float_cmp(VALUE x, VALUE y);
VALUE rb_integer_float_eq(VALUE x, VALUE y);
VALUE rb_cstr_parse_inum(const char *str, ssize_t len, char **endp, int base);
VALUE rb_big_comp(VALUE x);
VALUE rb_big_aref(VALUE x, VALUE y);
VALUE rb_big_abs(VALUE x);
VALUE rb_big_size_m(VALUE big);
VALUE rb_big_bit_length(VALUE big);
VALUE rb_big_remainder(VALUE x, VALUE y);
VALUE rb_big_gt(VALUE x, VALUE y);
VALUE rb_big_ge(VALUE x, VALUE y);
VALUE rb_big_lt(VALUE x, VALUE y);
VALUE rb_big_le(VALUE x, VALUE y);
VALUE rb_int_powm(int const argc, VALUE * const argv, VALUE const num);


VALUE rb_class_boot(VALUE);
VALUE rb_class_inherited(VALUE, VALUE);
VALUE rb_make_metaclass(VALUE, VALUE);
VALUE rb_include_class_new(VALUE, VALUE);
void rb_class_foreach_subclass(VALUE klass, void (*f)(VALUE, VALUE), VALUE);
void rb_class_detach_subclasses(VALUE);
void rb_class_detach_module_subclasses(VALUE);
void rb_class_remove_from_module_subclasses(VALUE);
VALUE rb_obj_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_protected_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_private_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_obj_public_methods(int argc, const VALUE *argv, VALUE obj);
VALUE rb_special_singleton_class(VALUE);
VALUE rb_singleton_class_clone_and_attach(VALUE obj, VALUE attach);
VALUE rb_singleton_class_get(VALUE obj);
void Init_class_hierarchy(void);

int rb_class_has_methods(VALUE c);
void rb_undef_methods_from(VALUE klass, VALUE super);


VALUE rb_invcmp(VALUE, VALUE);


struct rb_block;
int rb_dvar_defined(ID, const struct rb_block *);
int rb_local_defined(ID, const struct rb_block *);
const char * rb_insns_name(int i);
VALUE rb_insns_name_array(void);


VALUE rb_complex_plus(VALUE, VALUE);
VALUE rb_complex_mul(VALUE, VALUE);
VALUE rb_complex_abs(VALUE x);
VALUE rb_complex_sqrt(VALUE x);


VALUE rb_obj_is_fiber(VALUE);
void rb_fiber_reset_root_local_storage(VALUE);
void ruby_register_rollback_func_for_ensure(VALUE (*ensure_func)(), VALUE (*rollback_func)());


void ruby_debug_printf(const char*, ...) ;


VALUE rb_dir_getwd_ospath(void);


void Init_enc(void);
void Init_ext(void);


ID rb_id_encoding(void);
void rb_gc_mark_encodings(void);
rb_encoding *rb_enc_get_from_index(int index);
rb_encoding *rb_enc_check_str(VALUE str1, VALUE str2);
int rb_encdb_replicate(const char *alias, const char *orig);
int rb_encdb_alias(const char *alias, const char *orig);
int rb_encdb_dummy(const char *name);
void rb_encdb_declare(const char *name);
void rb_enc_set_base(const char *name, const char *orig);
int rb_enc_set_dummy(int index);
void rb_encdb_set_unicode(int index);
 int rb_data_is_encoding(VALUE obj);


VALUE rb_f_send(int argc, VALUE *argv, VALUE recv);
VALUE rb_nmin_run(VALUE obj, VALUE num, int by, int rev, int ary);


extern VALUE rb_eEAGAIN;
extern VALUE rb_eEWOULDBLOCK;
extern VALUE rb_eEINPROGRESS;
void rb_report_bug_valist(VALUE file, int line, const char *fmt, va_list args);
VALUE rb_syntax_error_append(VALUE, VALUE, int, int, rb_encoding*, const char*, va_list);
VALUE rb_check_backtrace(VALUE);
 void rb_async_bug_errno(const char *,int);
const char *rb_builtin_type_name(int t);
const char *rb_builtin_class_name(VALUE x);
void rb_sys_warn(const char *fmt, ...) ;
void rb_syserr_warn(int err, const char *fmt, ...) ;
void rb_enc_warn(rb_encoding *enc, const char *fmt, ...) ;
void rb_sys_enc_warn(rb_encoding *enc, const char *fmt, ...) ;
void rb_syserr_enc_warn(int err, rb_encoding *enc, const char *fmt, ...) ;
void rb_sys_warning(const char *fmt, ...) ;
void rb_syserr_warning(int err, const char *fmt, ...) ;
void rb_enc_warning(rb_encoding *enc, const char *fmt, ...) ;
void rb_sys_enc_warning(rb_encoding *enc, const char *fmt, ...) ;
void rb_syserr_enc_warning(int err, rb_encoding *enc, const char *fmt, ...) ;






VALUE rb_name_err_new(VALUE mesg, VALUE recv, VALUE method);




VALUE rb_key_err_new(VALUE mesg, VALUE recv, VALUE name);


 void ruby_deprecated_internal_feature(const char *);


VALUE rb_warning_warn(VALUE mod, VALUE str);
VALUE rb_warning_string(const char *fmt, ...);


VALUE rb_refinement_module_get_refined_class(VALUE module);


VALUE rb_get_backtrace(VALUE info);


void rb_call_end_proc(VALUE data);
void rb_mark_end_proc(void);


VALUE rb_home_dir_of(VALUE user, VALUE result);
VALUE rb_default_home_dir(VALUE result);
VALUE rb_realpath_internal(VALUE basedir, VALUE path, int strict);
VALUE rb_check_realpath(VALUE basedir, VALUE path);
void rb_file_const(const char*, VALUE);
int rb_file_load_ok(const char *);
VALUE rb_file_expand_path_fast(VALUE, VALUE);
VALUE rb_file_expand_path_internal(VALUE, VALUE, int, int, VALUE);
VALUE rb_get_path_check_to_string(VALUE, int);
VALUE rb_get_path_check_convert(VALUE, VALUE, int);
VALUE rb_get_path_check(VALUE, int);
void Init_File(void);
int ruby_is_fd_loadable(int fd);




 void rb_sys_fail_path_in(const char *func_name, VALUE path);
 void rb_syserr_fail_path_in(const char *func_name, int err, VALUE path);

extern VALUE *ruby_initial_gc_stress_ptr;
extern int ruby_disable_gc;
void Init_heap(void);
void *ruby_mimmalloc(size_t size);
void ruby_mimfree(void *ptr);
void rb_objspace_set_event_hook(const rb_event_flag_t event);

void rb_gc_writebarrier_remember(VALUE obj);



void ruby_gc_set_params(int safe_level);
void rb_copy_wb_protected_attribute(VALUE dest, VALUE obj);
struct st_table *rb_hash_tbl_raw(VALUE hash);
VALUE rb_hash_new_with_size(st_index_t size);
VALUE rb_hash_new_compare_by_id(void);
VALUE rb_hash_has_key(VALUE hash, VALUE key);
VALUE rb_hash_default_value(VALUE hash, VALUE key);
VALUE rb_hash_set_default_proc(VALUE hash, VALUE proc);
long rb_objid_hash(st_index_t index);
long rb_dbl_long_hash(double d);
st_table *rb_init_identtable(void);
st_table *rb_init_identtable_with_size(st_index_t size);
VALUE rb_hash_compare_by_id_p(VALUE hash);
VALUE rb_to_hash_type(VALUE obj);


VALUE rb_hash_keys(VALUE hash);
VALUE rb_hash_values(VALUE hash);
VALUE rb_hash_rehash(VALUE hash);
int rb_hash_add_new_element(VALUE hash, VALUE key, VALUE val);



void rb_call_inits(void);


const char *ruby_get_inplace_mode(void);
void ruby_set_inplace_mode(const char *);
ssize_t rb_io_bufread(VALUE io, void *buf, size_t size);
void rb_stdio_set_default_encoding(void);
VALUE rb_io_flush_raw(VALUE, int);
size_t rb_io_memsize(const rb_io_t *);
int rb_stderr_tty_p(void);


VALUE rb_get_load_path(void);
VALUE rb_get_expanded_load_path(void);
int rb_require_internal(VALUE fname, int safe);
 void rb_load_fail(VALUE, const char*);


extern const char ruby_exec_prefix[];
extern const char ruby_initial_load_paths[];


int Init_enc_set_filesystem_encoding(void);


VALUE rb_math_atan2(VALUE, VALUE);
VALUE rb_math_cos(VALUE);
VALUE rb_math_cosh(VALUE);
VALUE rb_math_exp(VALUE);
VALUE rb_math_hypot(VALUE, VALUE);
VALUE rb_math_log(int argc, const VALUE *argv);
VALUE rb_math_sin(VALUE);
VALUE rb_math_sinh(VALUE);
VALUE rb_math_sqrt(VALUE);


void Init_newline(void);
enum ruby_num_rounding_mode {
    RUBY_NUM_ROUND_HALF_UP,
    RUBY_NUM_ROUND_HALF_EVEN,
    RUBY_NUM_ROUND_HALF_DOWN,
    RUBY_NUM_ROUND_DEFAULT = RUBY_NUM_ROUND_HALF_UP
};
int rb_num_to_uint(VALUE val, unsigned int *ret);
VALUE ruby_num_interval_step_size(VALUE from, VALUE to, VALUE step, int excl);
int ruby_float_step(VALUE from, VALUE to, VALUE step, int excl);
double ruby_float_mod(double x, double y);
int rb_num_negative_p(VALUE);
VALUE rb_int_succ(VALUE num);
VALUE rb_int_pred(VALUE num);
VALUE rb_int_uminus(VALUE num);
VALUE rb_float_uminus(VALUE num);
VALUE rb_int_plus(VALUE x, VALUE y);
VALUE rb_int_minus(VALUE x, VALUE y);
VALUE rb_int_mul(VALUE x, VALUE y);
VALUE rb_int_idiv(VALUE x, VALUE y);
VALUE rb_int_modulo(VALUE x, VALUE y);
VALUE rb_int_round(VALUE num, int ndigits, enum ruby_num_rounding_mode mode);
VALUE rb_int2str(VALUE num, int base);
VALUE rb_dbl_hash(double d);
VALUE rb_fix_plus(VALUE x, VALUE y);
VALUE rb_int_gt(VALUE x, VALUE y);
int rb_float_cmp(VALUE x, VALUE y);
VALUE rb_float_gt(VALUE x, VALUE y);
VALUE rb_int_ge(VALUE x, VALUE y);
enum ruby_num_rounding_mode rb_num_get_rounding_option(VALUE opts);
double rb_int_fdiv_double(VALUE x, VALUE y);
VALUE rb_int_pow(VALUE x, VALUE y);
VALUE rb_float_pow(VALUE x, VALUE y);
VALUE rb_int_cmp(VALUE x, VALUE y);
VALUE rb_int_equal(VALUE x, VALUE y);
VALUE rb_int_divmod(VALUE x, VALUE y);
VALUE rb_int_and(VALUE x, VALUE y);
VALUE rb_int_lshift(VALUE x, VALUE y);
VALUE rb_int_div(VALUE x, VALUE y);
VALUE rb_int_abs(VALUE num);
VALUE rb_int_odd_p(VALUE num);

static inline VALUE
rb_num_compare_with_zero(VALUE num, ID mid)
{
    VALUE zero = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    VALUE r = rb_check_funcall(num, mid, 1, &zero);
    if (r == ((VALUE)RUBY_Qundef)) {
 rb_cmperr(num, zero);
    }
    return r;
}

static inline int
rb_num_positive_int_p(VALUE num)
{
    const ID mid = '>';

    if ((((int)(long)(num))&RUBY_FIXNUM_FLAG)) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((long)(num) > (long)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    }
    else if (( ((RUBY_T_BIGNUM) == RUBY_T_FIXNUM) ? (((int)(long)(num))&RUBY_FIXNUM_FLAG) : ((RUBY_T_BIGNUM) == RUBY_T_TRUE) ? ((num) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_BIGNUM) == RUBY_T_FALSE) ? ((num) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_BIGNUM) == RUBY_T_NIL) ? ((num) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_BIGNUM) == RUBY_T_UNDEF) ? ((num) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_BIGNUM) == RUBY_T_SYMBOL) ? ((((VALUE)(num)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_BIGNUM) == RUBY_T_FLOAT) ? ( ((((int)(long)(num))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_BIGNUM)))) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((((struct RBasic*)(num))->flags & ((VALUE)((VALUE)RUBY_FL_USER1))) != 0);
    }
    return !(((VALUE)(rb_num_compare_with_zero(num, mid)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
}


static inline int
rb_num_negative_int_p(VALUE num)
{
    const ID mid = '<';

    if ((((int)(long)(num))&RUBY_FIXNUM_FLAG)) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return ((long)(num) < 0);
    }
    else if (( ((RUBY_T_BIGNUM) == RUBY_T_FIXNUM) ? (((int)(long)(num))&RUBY_FIXNUM_FLAG) : ((RUBY_T_BIGNUM) == RUBY_T_TRUE) ? ((num) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_BIGNUM) == RUBY_T_FALSE) ? ((num) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_BIGNUM) == RUBY_T_NIL) ? ((num) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_BIGNUM) == RUBY_T_UNDEF) ? ((num) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_BIGNUM) == RUBY_T_SYMBOL) ? ((((VALUE)(num)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_BIGNUM) == RUBY_T_FLOAT) ? ( ((((int)(long)(num))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(num) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(num) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(num))->flags & RUBY_T_MASK) == (RUBY_T_BIGNUM)))) {
 if (rb_method_basic_definition_p(rb_cInteger, mid))
     return (!((((struct RBasic*)(num))->flags & ((VALUE)((VALUE)RUBY_FL_USER1))) != 0));
    }
    return !(((VALUE)(rb_num_compare_with_zero(num, mid)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
}


VALUE rb_float_abs(VALUE flt);
VALUE rb_float_equal(VALUE x, VALUE y);
VALUE rb_float_eql(VALUE x, VALUE y);






static inline double
rb_float_flonum_value(VALUE v)
{

    if (v != (VALUE)0x8000000000000002) {
 union {
     double d;
     VALUE v;
 } t;

 VALUE b63 = (v >> 63);



 t.v = ((((2 - b63) | (v & ~(VALUE)0x03)) >> (3)) | (((2 - b63) | (v & ~(VALUE)0x03)) << ((sizeof((2 - b63) | (v & ~(VALUE)0x03)) * 8) - 3)));
 return t.d;
    }

    return 0.0;
}

static inline double
rb_float_noflonum_value(VALUE v)
{
    return ((struct RFloat *)v)->float_value;
}

static inline double
rb_float_value_inline(VALUE v)
{
    if (((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) {
 return rb_float_flonum_value(v);
    }
    return rb_float_noflonum_value(v);
}

static inline VALUE
rb_float_new_inline(double d)
{

    union {
 double d;
 VALUE v;
    } t;
    int bits;

    t.d = d;
    bits = (int)((VALUE)(t.v >> 60) & 0x7);





    if (t.v != 0x3000000000000000 &&
 !((bits-3) & ~0x01)) {
 return ((((t.v) << (3)) | ((t.v) >> ((sizeof(t.v) * 8) - 3))) & ~(VALUE)0x01) | 0x02;
    }
    else if (t.v == (VALUE)0) {

 return 0x8000000000000002;
    }


    return rb_float_new_in_heap(d);
}





void rb_obj_copy_ivar(VALUE dest, VALUE obj);
 VALUE rb_obj_equal(VALUE obj1, VALUE obj2);
 VALUE rb_obj_not(VALUE obj);
VALUE rb_class_search_ancestor(VALUE klass, VALUE super);
 void rb_undefined_alloc(VALUE klass);
double rb_num_to_dbl(VALUE val);
VALUE rb_obj_dig(int argc, VALUE *argv, VALUE self, VALUE notfound);
VALUE rb_immutable_obj_clone(int, VALUE *, VALUE);
VALUE rb_obj_not_equal(VALUE obj1, VALUE obj2);
VALUE rb_convert_type_with_id(VALUE,int,const char*,ID);
VALUE rb_check_convert_type_with_id(VALUE,int,const char*,ID);

struct RBasicRaw {
    VALUE flags;
    VALUE klass;
};
VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);
VALUE rb_parser_set_context(VALUE, const struct rb_block *, int);
void *rb_parser_load_file(VALUE parser, VALUE name);
int rb_is_const_name(VALUE name);
int rb_is_class_name(VALUE name);
int rb_is_global_name(VALUE name);
int rb_is_instance_name(VALUE name);
int rb_is_attrset_name(VALUE name);
int rb_is_local_name(VALUE name);
int rb_is_method_name(VALUE name);
int rb_is_junk_name(VALUE name);
 int rb_is_const_sym(VALUE sym);
 int rb_is_class_sym(VALUE sym);
 int rb_is_global_sym(VALUE sym);
 int rb_is_instance_sym(VALUE sym);
 int rb_is_attrset_sym(VALUE sym);
 int rb_is_local_sym(VALUE sym);
 int rb_is_method_sym(VALUE sym);
 int rb_is_junk_sym(VALUE sym);
ID rb_make_internal_id(void);
void rb_gc_free_dsymbol(VALUE);
ID rb_id_attrget(ID id);


VALUE rb_proc_location(VALUE self);
st_index_t rb_hash_proc(st_index_t hash, VALUE proc);
int rb_block_arity(void);
int rb_block_min_max_arity(int *max);
VALUE rb_func_proc_new(rb_block_call_func_t func, VALUE val);
VALUE rb_func_lambda_new(rb_block_call_func_t func, VALUE val, int min_argc, int max_argc);
VALUE rb_block_to_s(VALUE self, const struct rb_block *block, const char *additional_info);




struct rb_execarg {
    union {
        struct {
            VALUE shell_script;
        } sh;
        struct {
            VALUE command_name;
            VALUE command_abspath;
            VALUE argv_str;
            VALUE argv_buf;
        } cmd;
    } invoke;
    VALUE redirect_fds;
    VALUE envp_str;
    VALUE envp_buf;
    VALUE dup2_tmpbuf;
    unsigned use_shell : 1;
    unsigned pgroup_given : 1;
    unsigned umask_given : 1;
    unsigned unsetenv_others_given : 1;
    unsigned unsetenv_others_do : 1;
    unsigned close_others_given : 1;
    unsigned close_others_do : 1;
    unsigned chdir_given : 1;
    unsigned new_pgroup_given : 1;
    unsigned new_pgroup_flag : 1;
    unsigned uid_given : 1;
    unsigned gid_given : 1;
    pid_t pgroup_pgid;
    VALUE rlimit_limits;
    mode_t umask_mask;
    uid_t uid;
    gid_t gid;
    int close_others_maxhint;
    VALUE fd_dup2;
    VALUE fd_close;
    VALUE fd_open;
    VALUE fd_dup2_child;
    VALUE env_modification;
    VALUE path_env;
    VALUE chdir_dir;
};
pid_t rb_fork_ruby(int *status);
void rb_last_status_clear(void);


VALUE rb_rational_uminus(VALUE self);
VALUE rb_rational_plus(VALUE self, VALUE other);
VALUE rb_lcm(VALUE x, VALUE y);
VALUE rb_rational_reciprocal(VALUE x);
VALUE rb_cstr_to_rat(const char *, int);
VALUE rb_rational_abs(VALUE self);
VALUE rb_rational_cmp(VALUE self, VALUE other);
VALUE rb_numeric_quo(VALUE x, VALUE y);


VALUE rb_reg_compile(VALUE str, int options, const char *sourcefile, int sourceline);
VALUE rb_reg_check_preprocess(VALUE);
long rb_reg_search0(VALUE, VALUE, long, int, int);
VALUE rb_reg_match_p(VALUE re, VALUE str, long pos);
signed char rb_reg_start_with_p(VALUE re, VALUE str);
void rb_backref_set_string(VALUE string, long pos, long len);
int rb_match_count(VALUE match);
int rb_match_nth_defined(int nth, VALUE match);


extern int ruby_enable_coredump;
int rb_get_next_signal(void);
int rb_sigaltstack_size(void);


extern void rb_hash_bulk_insert(long, const VALUE *, VALUE);



VALUE rb_strftime_timespec(const char *format, size_t format_len, rb_encoding *enc,
      const struct vtm *vtm, struct timespec *ts, int gmt);
VALUE rb_strftime(const char *format, size_t format_len, rb_encoding *enc,
    const struct vtm *vtm, VALUE timev, int gmt);



VALUE rb_fstring(VALUE);
VALUE rb_fstring_new(const char *ptr, long len);


VALUE rb_fstring_cstr(const char *str);
VALUE rb_fstring_enc_new(const char *ptr, long len, rb_encoding *enc);


VALUE rb_fstring_enc_cstr(const char *ptr, rb_encoding *enc);
int rb_str_buf_cat_escaped_char(VALUE result, unsigned int c, int unicode_p);
int rb_str_symname_p(VALUE);
VALUE rb_str_quote_unprintable(VALUE);
VALUE rb_id_quote_unprintable(ID);


char *rb_str_fill_terminator(VALUE str, const int termlen);
void rb_str_change_terminator_length(VALUE str, const int oldtermlen, const int termlen);
VALUE rb_str_locktmp_ensure(VALUE str, VALUE (*func)(VALUE), VALUE arg);
VALUE rb_str_tmp_frozen_acquire(VALUE str);
void rb_str_tmp_frozen_release(VALUE str, VALUE tmp);
VALUE rb_str_chomp_string(VALUE str, VALUE chomp);

VALUE rb_external_str_with_enc(VALUE str, rb_encoding *eenc);
VALUE rb_str_cat_conv_enc_opts(VALUE newstr, long ofs, const char *ptr, long len,
          rb_encoding *from, int ecflags, VALUE ecopts);
VALUE rb_enc_str_scrub(rb_encoding *enc, VALUE str, VALUE repl);
VALUE rb_str_initialize(VALUE str, const char *ptr, long len, rb_encoding *enc);







size_t rb_str_memsize(VALUE);
VALUE rb_sym_proc_call(ID mid, int argc, const VALUE *argv, VALUE passed_proc);
VALUE rb_sym_to_proc(VALUE sym);
char *rb_str_to_cstr(VALUE str);
VALUE rb_str_eql(VALUE str1, VALUE str2);



VALUE rb_sym_intern(const char *ptr, long len, rb_encoding *enc);
VALUE rb_sym_intern_cstr(const char *ptr, rb_encoding *enc);
VALUE rb_sym_intern_ascii(const char *ptr, long len);
VALUE rb_sym_intern_ascii_cstr(const char *ptr);
VALUE rb_to_symbol_type(VALUE obj);


VALUE rb_struct_init_copy(VALUE copy, VALUE s);
VALUE rb_struct_lookup(VALUE s, VALUE idx);
VALUE rb_struct_s_keyword_init(VALUE klass);


struct timeval rb_time_timeval(VALUE);
VALUE rb_obj_is_mutex(VALUE obj);
VALUE rb_suppress_tracing(VALUE (*func)(VALUE), VALUE arg);
void rb_thread_execute_interrupts(VALUE th);
void rb_clear_trace_func(void);
VALUE rb_get_coverages(void);
VALUE rb_default_coverage(int);
VALUE rb_thread_shield_new(void);
VALUE rb_thread_shield_wait(VALUE self);
VALUE rb_thread_shield_release(VALUE self);
VALUE rb_thread_shield_destroy(VALUE self);
int rb_thread_to_be_killed(VALUE thread);
void rb_mutex_allow_trap(VALUE self, int val);
VALUE rb_uninterruptible(VALUE (*b_proc)(), VALUE data);
VALUE rb_mutex_owned_p(VALUE self);


int rb_divert_reserved_fd(int fd);


extern VALUE rb_cEncodingConverter;
size_t rb_econv_memsize(rb_econv_t *);


extern rb_encoding OnigEncodingUS_ASCII;


char *ruby_dtoa(double d_, int mode, int ndigits, int *decpt, int *sign, char **rve);
char *ruby_hdtoa(double d, const char *xdigs, int ndigits, int *decpt, int *sign, char **rve);


extern rb_encoding OnigEncodingUTF_8;


void rb_gc_mark_global_tbl(void);
size_t rb_generic_ivar_memsize(VALUE);
VALUE rb_search_class_path(VALUE);
VALUE rb_attr_delete(VALUE, ID);
VALUE rb_ivar_lookup(VALUE obj, ID id, VALUE undef);
void rb_autoload_str(VALUE mod, ID id, VALUE file);
void rb_deprecate_constant(VALUE mod, const char *name);


extern const char ruby_engine[];


rb_serial_t rb_next_class_serial(void);


VALUE rb_obj_is_thread(VALUE obj);
void rb_vm_mark(void *ptr);
void Init_BareVM(void);
void Init_vm_objects(void);
 VALUE rb_vm_top_self(void);
void rb_thread_recycle_stack_release(VALUE *);
void rb_vm_change_state(void);
void rb_vm_inc_const_missing_count(void);
const void **rb_vm_get_insns_address_table(void);
VALUE rb_source_location(int *pline);
const char *rb_source_location_cstr(int *pline);
void rb_vm_pop_cfunc_frame(void);
int rb_vm_add_root_module(ID id, VALUE module);
void rb_vm_check_redefinition_by_prepend(VALUE klass);
VALUE rb_yield_refine_block(VALUE refinement, VALUE refinements);
VALUE ruby_vm_special_exception_copy(VALUE);
 st_table *rb_vm_fstring_table(void);



void rb_print_backtrace(void);


void Init_vm_eval(void);
VALUE rb_current_realfilepath(void);
VALUE rb_check_block_call(VALUE, ID, int, const VALUE *, rb_block_call_func_t, VALUE);
typedef void rb_check_funcall_hook(int, VALUE, ID, int, const VALUE *, VALUE);
VALUE rb_check_funcall_with_hook(VALUE recv, ID mid, int argc, const VALUE *argv,
     rb_check_funcall_hook *hook, VALUE arg);
const char *rb_type_str(enum ruby_value_type type);
VALUE rb_check_funcall_default(VALUE, ID, int, const VALUE *, VALUE);
VALUE rb_yield_1(VALUE val);
VALUE rb_yield_force_blockarg(VALUE values);
VALUE rb_lambda_call(VALUE obj, ID mid, int argc, const VALUE *argv,
       rb_block_call_func_t bl_proc, int min_argc, int max_argc,
       VALUE data2);


VALUE rb_equal_opt(VALUE obj1, VALUE obj2);
VALUE rb_eql_opt(VALUE obj1, VALUE obj2);


void Init_eval_method(void);
int rb_method_defined_by(VALUE obj, ID mid, VALUE (*cfunc)());


void Init_prelude(void);


void Init_vm_backtrace(void);
VALUE rb_vm_thread_backtrace(int argc, const VALUE *argv, VALUE thval);
VALUE rb_vm_thread_backtrace_locations(int argc, const VALUE *argv, VALUE thval);

VALUE rb_make_backtrace(void);
void rb_backtrace_print_as_bugreport(void);
int rb_backtrace_p(VALUE obj);
VALUE rb_backtrace_to_str_ary(VALUE obj);
VALUE rb_backtrace_to_location_ary(VALUE obj);
void rb_backtrace_each(VALUE (*iter)(VALUE recv, VALUE str), VALUE output);

const char *rb_objspace_data_type_name(VALUE obj);


VALUE rb_thread_io_blocking_region(rb_blocking_function_t *func, void *data1, int fd);


VALUE rb_big_mul_normal(VALUE x, VALUE y);
VALUE rb_big_mul_balance(VALUE x, VALUE y);
VALUE rb_big_mul_karatsuba(VALUE x, VALUE y);
VALUE rb_big_mul_toom3(VALUE x, VALUE y);
VALUE rb_big_sq_fast(VALUE x);
VALUE rb_big_divrem_normal(VALUE x, VALUE y);
VALUE rb_big2str_poweroftwo(VALUE x, int base);
VALUE rb_big2str_generic(VALUE x, int base);
VALUE rb_str2big_poweroftwo(VALUE arg, int base, int badcheck);
VALUE rb_str2big_normal(VALUE arg, int base, int badcheck);
VALUE rb_str2big_karatsuba(VALUE arg, int base, int badcheck);






enum rb_int_parse_flags {
    RB_INT_PARSE_SIGN = 0x01,
    RB_INT_PARSE_UNDERSCORE = 0x02,
    RB_INT_PARSE_PREFIX = 0x04,
    RB_INT_PARSE_ALL = 0x07,
    RB_INT_PARSE_DEFAULT = 0x07
};
VALUE rb_int_parse_cstr(const char *str, ssize_t len, char **endp, size_t *ndigits, int base, int flags);


int rb_bug_reporter_add(void (*func)(FILE *, void *), void *data);
 void rb_unexpected_type(VALUE,int);
VALUE rb_readlink(VALUE path, rb_encoding *enc);






VALUE rb_hash_delete_entry(VALUE hash, VALUE key);
VALUE rb_ident_hash_new(void);


void rb_maygvl_fd_fix_cloexec(int fd);
int rb_gc_for_fd(int err);
void rb_write_error_str(VALUE mesg);


VALUE rb_int_positive_pow(long x, unsigned long y);


int rb_exec_async_signal_safe(const struct rb_execarg *e, char *errmsg, size_t errmsg_buflen);
pid_t rb_fork_async_signal_safe(int *status, int (*chfunc)(void*, char *, size_t), void *charg, VALUE fds, char *errmsg, size_t errmsg_buflen);
VALUE rb_execarg_new(int argc, const VALUE *argv, int accept_shell);
struct rb_execarg *rb_execarg_get(VALUE execarg_obj);
VALUE rb_execarg_init(int argc, const VALUE *argv, int accept_shell, VALUE execarg_obj);
int rb_execarg_addopt(VALUE execarg_obj, VALUE key, VALUE val);
void rb_execarg_parent_start(VALUE execarg_obj);
void rb_execarg_parent_end(VALUE execarg_obj);
int rb_execarg_run_options(const struct rb_execarg *e, struct rb_execarg *s, char* errmsg, size_t errmsg_buflen);
VALUE rb_execarg_extract_options(VALUE execarg_obj, VALUE opthash);
void rb_execarg_setenv(VALUE execarg_obj, VALUE env);


VALUE rb_gcd(VALUE x, VALUE y);
VALUE rb_gcd_normal(VALUE self, VALUE other);







VALUE rb_setup_fake_str(struct RString *fake_str, const char *name, long len, rb_encoding *enc);



int ruby_thread_has_gvl_p(void);


extern const signed char ruby_digit36_to_number_table[];
extern const char ruby_hexdigits[];
extern unsigned long ruby_scan_digits(const char *str, ssize_t len, int base, size_t *retlen, int *overflow);


void rb_mark_generic_ivar(VALUE);
VALUE rb_const_missing(VALUE klass, VALUE name);
int rb_class_ivar_set(VALUE klass, ID vid, VALUE value);
st_table *rb_st_copy(VALUE obj, struct st_table *orig_tbl);


VALUE rb_wb_protected_newobj_of(VALUE, VALUE);
VALUE rb_wb_unprotected_newobj_of(VALUE, VALUE);

size_t rb_obj_memsize_of(VALUE);
void rb_gc_verify_internal_consistency(void);


size_t rb_obj_gc_flags(VALUE, ID[], size_t);
void rb_gc_mark_values(long n, const VALUE *values);





VALUE rb_imemo_new(enum imemo_type type, VALUE v1, VALUE v2, VALUE v3, VALUE v0);





extern OnigEncoding OnigEncDefaultCharEncoding;







typedef struct re_pattern_buffer Regexp;

struct rmatch_offset {
    long beg;
    long end;
};

struct rmatch {
    struct re_registers regs;

    int char_offset_updated;
    int char_offset_num_allocated;
    struct rmatch_offset *char_offset;
};

struct RMatch {
    struct RBasic basic;
    VALUE str;
    struct rmatch *rmatch;
    VALUE regexp;
};




VALUE rb_reg_regcomp(VALUE);
long rb_reg_search(VALUE, VALUE, long, int);
VALUE rb_reg_regsub(VALUE, VALUE, struct re_registers *, VALUE);
long rb_reg_adjust_startpos(VALUE, VALUE, long, int);
void rb_match_busy(VALUE);
VALUE rb_reg_quote(VALUE);
regex_t *rb_reg_prepare_re(VALUE re, VALUE str);
int rb_reg_region_copy(struct re_registers *, const struct re_registers *);

enum ruby_preserved_encindex {
    RUBY_ENCINDEX_ASCII,
    RUBY_ENCINDEX_UTF_8,
    RUBY_ENCINDEX_US_ASCII,


    RUBY_ENCINDEX_UTF_16BE,
    RUBY_ENCINDEX_UTF_16LE,
    RUBY_ENCINDEX_UTF_32BE,
    RUBY_ENCINDEX_UTF_32LE,
    RUBY_ENCINDEX_UTF_16,
    RUBY_ENCINDEX_UTF_32,
    RUBY_ENCINDEX_UTF8_MAC,


    RUBY_ENCINDEX_EUC_JP,
    RUBY_ENCINDEX_Windows_31J,

    RUBY_ENCINDEX_BUILTIN_MAX
};
int rb_enc_find_index2(const char *name, long len);



 void rb_assert_failure(const char *, int, const char *, const char *);
enum node_type {
    NODE_SCOPE,

    NODE_BLOCK,

    NODE_IF,

    NODE_UNLESS,

    NODE_CASE,

    NODE_CASE2,

    NODE_WHEN,

    NODE_WHILE,

    NODE_UNTIL,

    NODE_ITER,

    NODE_FOR,

    NODE_BREAK,

    NODE_NEXT,

    NODE_REDO,

    NODE_RETRY,

    NODE_BEGIN,

    NODE_RESCUE,

    NODE_RESBODY,

    NODE_ENSURE,

    NODE_AND,

    NODE_OR,

    NODE_MASGN,

    NODE_LASGN,

    NODE_DASGN,

    NODE_DASGN_CURR,

    NODE_GASGN,

    NODE_IASGN,

    NODE_CDECL,

    NODE_CVASGN,

    NODE_OP_ASGN1,

    NODE_OP_ASGN2,

    NODE_OP_ASGN_AND,

    NODE_OP_ASGN_OR,

    NODE_OP_CDECL,

    NODE_CALL,

    NODE_OPCALL,

    NODE_FCALL,

    NODE_VCALL,

    NODE_QCALL,

    NODE_SUPER,

    NODE_ZSUPER,

    NODE_ARRAY,

    NODE_ZARRAY,

    NODE_VALUES,

    NODE_HASH,

    NODE_RETURN,

    NODE_YIELD,

    NODE_LVAR,

    NODE_DVAR,

    NODE_GVAR,

    NODE_IVAR,

    NODE_CONST,

    NODE_CVAR,

    NODE_NTH_REF,

    NODE_BACK_REF,

    NODE_MATCH,

    NODE_MATCH2,

    NODE_MATCH3,

    NODE_LIT,

    NODE_STR,

    NODE_DSTR,

    NODE_XSTR,

    NODE_DXSTR,

    NODE_EVSTR,

    NODE_DREGX,

    NODE_ARGS,

    NODE_ARGS_AUX,

    NODE_OPT_ARG,

    NODE_KW_ARG,

    NODE_POSTARG,

    NODE_ARGSCAT,

    NODE_ARGSPUSH,

    NODE_SPLAT,

    NODE_BLOCK_PASS,

    NODE_DEFN,

    NODE_DEFS,

    NODE_ALIAS,

    NODE_VALIAS,

    NODE_UNDEF,

    NODE_CLASS,

    NODE_MODULE,

    NODE_SCLASS,

    NODE_COLON2,

    NODE_COLON3,

    NODE_DOT2,

    NODE_DOT3,

    NODE_FLIP2,

    NODE_FLIP3,

    NODE_SELF,

    NODE_NIL,

    NODE_TRUE,

    NODE_FALSE,

    NODE_ERRINFO,

    NODE_DEFINED,

    NODE_POSTEXE,

    NODE_DSYM,

    NODE_ATTRASGN,

    NODE_PRELUDE,

    NODE_LAMBDA,

    NODE_LAST

};

typedef struct rb_code_location_struct {
    int lineno;
    int column;
} rb_code_location_t;

typedef struct rb_code_range_struct {
    rb_code_location_t first_loc;
    rb_code_location_t last_loc;
} rb_code_range_t;

typedef struct RNode {
    VALUE flags;
    union {
 struct RNode *node;
 ID id;
 VALUE value;
 VALUE (*cfunc)();
 ID *tbl;
    } u1;
    union {
 struct RNode *node;
 ID id;
 long argc;
 VALUE value;
    } u2;
    union {
 struct RNode *node;
 ID id;
 long state;
 struct rb_global_entry *entry;
 struct rb_args_info *args;
 long cnt;
 VALUE value;
    } u3;
    rb_code_range_t nd_loc;
} NODE;

typedef struct node_buffer_struct node_buffer_t;

typedef struct rb_ast_struct {
    VALUE flags;
    VALUE reserved1;
    NODE *root;
    node_buffer_t *node_buffer;
    VALUE mark_ary;
} rb_ast_t;
rb_ast_t *rb_ast_new();
void rb_ast_mark(rb_ast_t*);
void rb_ast_dispose(rb_ast_t*);
void rb_ast_free(rb_ast_t*);
void rb_ast_add_mark_object(rb_ast_t*, VALUE);
void rb_ast_delete_mark_object(rb_ast_t*, VALUE);
NODE *rb_ast_newnode(rb_ast_t*);
void rb_ast_delete_node(rb_ast_t*, NODE *n);

VALUE rb_parser_new(void);
VALUE rb_parser_end_seen_p(VALUE);
VALUE rb_parser_encoding(VALUE);
VALUE rb_parser_get_yydebug(VALUE);
VALUE rb_parser_set_yydebug(VALUE, VALUE);
VALUE rb_parser_dump_tree(NODE *node, int comment);
void rb_parser_set_options(VALUE, int, int, int, int);

rb_ast_t *rb_parser_compile_cstr(VALUE, const char*, const char*, int, int);
rb_ast_t *rb_parser_compile_string(VALUE, const char*, VALUE, int);
rb_ast_t *rb_parser_compile_file(VALUE, const char*, VALUE, int);
rb_ast_t *rb_parser_compile_string_path(VALUE vparser, VALUE fname, VALUE src, int line);
rb_ast_t *rb_parser_compile_file_path(VALUE vparser, VALUE fname, VALUE input, int line);

rb_ast_t *rb_compile_cstr(const char*, const char*, int, int);
rb_ast_t *rb_compile_string(const char*, VALUE, int);
rb_ast_t *rb_compile_file(const char*, VALUE, int);

void rb_node_init(NODE *n, enum node_type type, VALUE a0, VALUE a1, VALUE a2);

const struct kwtable *rb_reserved_word(const char *, unsigned int);

struct rb_args_info {
    NODE *pre_init;
    NODE *post_init;

    int pre_args_num;
    int post_args_num;

    ID first_post_arg;

    ID rest_arg;
    ID block_arg;

    NODE *kw_args;
    NODE *kw_rest_arg;

    NODE *opt_args;
};

struct parser_params;
void *rb_parser_malloc(struct parser_params *, size_t);
void *rb_parser_realloc(struct parser_params *, void *, size_t);
void *rb_parser_calloc(struct parser_params *, size_t, size_t);
void rb_parser_free(struct parser_params *, void *);
void rb_parser_printf(struct parser_params *parser, const char *fmt, ...);









VALUE ruby_debug_print_value(int level, int debug_level, const char *header, VALUE v);
ID ruby_debug_print_id(int level, int debug_level, const char *header, ID id);
NODE *ruby_debug_print_node(int level, int debug_level, const char *header, const NODE *node);
int ruby_debug_print_indent(int level, int debug_level, int indent_level);
void ruby_debug_breakpoint(void);
void ruby_debug_gc_check_func(void);
void ruby_set_debug_option(const char *str);

enum ruby_id_types {
    RUBY_ID_STATIC_SYM = 0x01,
    RUBY_ID_LOCAL = 0x00,
    RUBY_ID_INSTANCE = (0x01<<1),
    RUBY_ID_GLOBAL = (0x03<<1),
    RUBY_ID_ATTRSET = (0x04<<1),
    RUBY_ID_CONST = (0x05<<1),
    RUBY_ID_CLASS = (0x06<<1),
    RUBY_ID_JUNK = (0x07<<1),
    RUBY_ID_INTERNAL = RUBY_ID_JUNK,
    RUBY_ID_SCOPE_SHIFT = 4,
    RUBY_ID_SCOPE_MASK = (~(~0U<<(RUBY_ID_SCOPE_SHIFT-1))<<1)
};
enum ruby_method_ids {
    idDot2 = 128,
    idDot3 = 129,
    idUPlus = 130,
    idUMinus = 131,
    idPow = 132,
    idCmp = 133,
    idPLUS = '+',
    idMINUS = '-',
    idMULT = '*',
    idDIV = '/',
    idMOD = '%',
    idLTLT = 134,
    idGTGT = 135,
    idLT = '<',
    idLE = 136,
    idGT = '>',
    idGE = 137,
    idEq = 138,
    idEqq = 139,
    idNeq = 140,
    idNot = '!',
    idBackquote = '`',
    idEqTilde = 141,
    idNeqTilde = 142,
    idAREF = 143,
    idASET = 144,
    idCOLON2 = 145,
    idANDOP = 146,
    idOROP = 147,
    idANDDOT = 148,
    tPRESERVED_ID_BEGIN = 148,
    idNULL,
    idEmptyP,
    idEqlP,
    idRespond_to,
    idRespond_to_missing,
    idIFUNC,
    idCFUNC,
    id_core_set_method_alias,
    id_core_set_variable_alias,
    id_core_undef_method,
    id_core_define_method,
    id_core_define_singleton_method,
    id_core_set_postexe,
    id_core_hash_from_ary,
    id_core_hash_merge_ary,
    id_core_hash_merge_ptr,
    id_core_hash_merge_kwd,
    id_debug_created_info,
    tPRESERVED_ID_END,
    tTOKEN_LOCAL_BEGIN = tPRESERVED_ID_END-1,
    tMax,
    tMin,
    tFreeze,
    tInspect,
    tIntern,
    tObject_id,
    tConst_missing,
    tMethodMissing,
    tMethod_added,
    tSingleton_method_added,
    tMethod_removed,
    tSingleton_method_removed,
    tMethod_undefined,
    tSingleton_method_undefined,
    tLength,
    tSize,
    tGets,
    tSucc,
    tEach,
    tProc,
    tLambda,
    tSend,
    t__send__,
    t__attached__,
    tInitialize,
    tInitialize_copy,
    tInitialize_clone,
    tInitialize_dup,
    tTo_int,
    tTo_ary,
    tTo_str,
    tTo_sym,
    tTo_hash,
    tTo_proc,
    tTo_io,
    tTo_a,
    tTo_s,
    tTo_i,
    tTo_r,
    tBt,
    tBt_locations,
    tCall,
    tMesg,
    tException,
    tNOT,
    tAND,
    tOR,
    tUScore,
    tTOKEN_LOCAL_END,
    tTOKEN_INSTANCE_BEGIN = tTOKEN_LOCAL_END-1,
    tTOKEN_INSTANCE_END,
    tTOKEN_GLOBAL_BEGIN = tTOKEN_INSTANCE_END-1,
    tLASTLINE,
    tBACKREF,
    tTOKEN_GLOBAL_END,
    tTOKEN_CONST_BEGIN = tTOKEN_GLOBAL_END-1,
    tTOKEN_CONST_END,
    tTOKEN_CLASS_BEGIN = tTOKEN_CONST_END-1,
    tTOKEN_CLASS_END,
    tTOKEN_ATTRSET_BEGIN = tTOKEN_CLASS_END-1,
    tTOKEN_ATTRSET_END,
    tNEXT_ID = tTOKEN_ATTRSET_END,

    idMax = ((tMax<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMin = ((tMin<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idFreeze = ((tFreeze<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInspect = ((tInspect<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idIntern = ((tIntern<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idObject_id = ((tObject_id<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idConst_missing = ((tConst_missing<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethodMissing = ((tMethodMissing<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_added = ((tMethod_added<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_added = ((tSingleton_method_added<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_removed = ((tMethod_removed<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_removed = ((tSingleton_method_removed<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMethod_undefined = ((tMethod_undefined<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSingleton_method_undefined = ((tSingleton_method_undefined<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idLength = ((tLength<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSize = ((tSize<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idGets = ((tGets<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSucc = ((tSucc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idEach = ((tEach<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idProc = ((tProc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idLambda = ((tLambda<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idSend = ((tSend<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    id__send__ = ((t__send__<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    id__attached__ = ((t__attached__<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize = ((tInitialize<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_copy = ((tInitialize_copy<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_clone = ((tInitialize_clone<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idInitialize_dup = ((tInitialize_dup<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_int = ((tTo_int<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_ary = ((tTo_ary<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_str = ((tTo_str<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_sym = ((tTo_sym<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_hash = ((tTo_hash<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_proc = ((tTo_proc<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_io = ((tTo_io<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_a = ((tTo_a<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_s = ((tTo_s<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_i = ((tTo_i<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idTo_r = ((tTo_r<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idBt = ((tBt<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idBt_locations = ((tBt_locations<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idCall = ((tCall<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idMesg = ((tMesg<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idException = ((tException<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idNOT = ((tNOT<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idAND = ((tAND<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idOR = ((tOR<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),
    idUScore = ((tUScore<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_LOCAL|RUBY_ID_STATIC_SYM),


    idLASTLINE = ((tLASTLINE<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_GLOBAL|RUBY_ID_STATIC_SYM),
    idBACKREF = ((tBACKREF<<RUBY_ID_SCOPE_SHIFT)|RUBY_ID_GLOBAL|RUBY_ID_STATIC_SYM),



    tLAST_OP_ID = tPRESERVED_ID_END-1,
    idLAST_OP_ID = tLAST_OP_ID >> RUBY_ID_SCOPE_SHIFT
};
typedef enum {
    METHOD_VISI_UNDEF = 0x00,
    METHOD_VISI_PUBLIC = 0x01,
    METHOD_VISI_PRIVATE = 0x02,
    METHOD_VISI_PROTECTED = 0x03,

    METHOD_VISI_MASK = 0x03
} rb_method_visibility_t;

typedef struct rb_scope_visi_struct {
    rb_method_visibility_t method_visi : 3;
    unsigned int module_func : 1;
} rb_scope_visibility_t;


typedef struct rb_cref_struct {
    VALUE flags;
    const VALUE refinements;
    const VALUE klass;
    struct rb_cref_struct * const next;
    const rb_scope_visibility_t scope_visi;
} rb_cref_t;



typedef struct rb_method_entry_struct {
    VALUE flags;
    const VALUE defined_class;
    struct rb_method_definition_struct * const def;
    ID called_id;
    const VALUE owner;
} rb_method_entry_t;

typedef struct rb_callable_method_entry_struct {
    VALUE flags;
    const VALUE defined_class;
    struct rb_method_definition_struct * const def;
    ID called_id;
    const VALUE owner;
} rb_callable_method_entry_t;






static inline void
METHOD_ENTRY_VISI_SET(rb_method_entry_t *me, rb_method_visibility_t visi)
{
    ((void)0);
    me->flags = (me->flags & ~(((VALUE)RUBY_FL_USER4) | ((VALUE)RUBY_FL_USER5))) | (visi << ((((VALUE)RUBY_FL_USHIFT) + 4)+0));
}
static inline void
METHOD_ENTRY_BASIC_SET(rb_method_entry_t *me, unsigned int basic)
{
    ((void)0);
    me->flags = (me->flags & ~(((VALUE)RUBY_FL_USER6) )) | (basic << ((((VALUE)RUBY_FL_USHIFT) + 4)+2));
}
static inline void
METHOD_ENTRY_FLAGS_SET(rb_method_entry_t *me, rb_method_visibility_t visi, unsigned int basic)
{
    ((void)0);
    ((void)0);
    me->flags =
      (me->flags & ~(((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6))) |
 ((visi << ((((VALUE)RUBY_FL_USHIFT) + 4)+0)) | (basic << ((((VALUE)RUBY_FL_USHIFT) + 4)+2)));
}
static inline void
METHOD_ENTRY_FLAGS_COPY(rb_method_entry_t *dst, const rb_method_entry_t *src)
{
    dst->flags =
      (dst->flags & ~(((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6))) |
 (src->flags & (((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER6)));
}

typedef enum {
    VM_METHOD_TYPE_ISEQ,
    VM_METHOD_TYPE_CFUNC,
    VM_METHOD_TYPE_ATTRSET,
    VM_METHOD_TYPE_IVAR,
    VM_METHOD_TYPE_BMETHOD,
    VM_METHOD_TYPE_ZSUPER,
    VM_METHOD_TYPE_ALIAS,
    VM_METHOD_TYPE_UNDEF,
    VM_METHOD_TYPE_NOTIMPLEMENTED,
    VM_METHOD_TYPE_OPTIMIZED,
    VM_METHOD_TYPE_MISSING,
    VM_METHOD_TYPE_REFINED,

    END_OF_VM_METHOD_TYPE_PLACEHOLDER = 0
} rb_method_type_t;


typedef struct rb_iseq_struct rb_iseq_t;



typedef struct rb_method_iseq_struct {
    const rb_iseq_t * const iseqptr;
    rb_cref_t * const cref;
} rb_method_iseq_t;

typedef struct rb_method_cfunc_struct {
    VALUE (*func)();
    VALUE (*invoker)(VALUE (*func)(), VALUE recv, int argc, const VALUE *argv);
    int argc;
} rb_method_cfunc_t;

typedef struct rb_method_attr_struct {
    ID id;
    const VALUE location;
} rb_method_attr_t;

typedef struct rb_method_alias_struct {
    const struct rb_method_entry_struct * const original_me;
} rb_method_alias_t;

typedef struct rb_method_refined_struct {
    const struct rb_method_entry_struct * const orig_me;
    const VALUE owner;
} rb_method_refined_t;

enum method_optimized_type {
    OPTIMIZED_METHOD_TYPE_SEND,
    OPTIMIZED_METHOD_TYPE_CALL,
    OPTIMIZED_METHOD_TYPE__MAX
};

struct rb_method_definition_struct { unsigned int type : 4; int alias_count : 28; int complemented_count : 28; union { rb_method_iseq_t iseq; rb_method_cfunc_t cfunc; rb_method_attr_t attr; rb_method_alias_t alias; rb_method_refined_t refined; const VALUE proc; enum method_optimized_type optimize_type; } body; ID original_id;} ;
typedef struct rb_method_definition_struct rb_method_definition_t;






void rb_add_method_cfunc(VALUE klass, ID mid, VALUE (*func)(), int argc, rb_method_visibility_t visi);
void rb_add_method_iseq(VALUE klass, ID mid, const rb_iseq_t *iseq, rb_cref_t *cref, rb_method_visibility_t visi);
void rb_add_refined_method_entry(VALUE refined_class, ID mid);

rb_method_entry_t *rb_add_method(VALUE klass, ID mid, rb_method_type_t type, void *option, rb_method_visibility_t visi);
rb_method_entry_t *rb_method_entry_set(VALUE klass, ID mid, const rb_method_entry_t *, rb_method_visibility_t noex);
rb_method_entry_t *rb_method_entry_create(ID called_id, VALUE klass, rb_method_visibility_t visi, const rb_method_definition_t *def);

const rb_method_entry_t *rb_method_entry_at(VALUE obj, ID id);

const rb_method_entry_t *rb_method_entry(VALUE klass, ID id);
const rb_method_entry_t *rb_method_entry_without_refinements(VALUE klass, ID id, VALUE *defined_class);
const rb_method_entry_t *rb_resolve_refined_method(VALUE refinements, const rb_method_entry_t *me);
const rb_method_entry_t *rb_resolve_me_location(const rb_method_entry_t *, VALUE[5]);

const rb_callable_method_entry_t *rb_callable_method_entry(VALUE klass, ID id);
const rb_callable_method_entry_t *rb_callable_method_entry_with_refinements(VALUE klass, ID id, VALUE *defined_class);
const rb_callable_method_entry_t *rb_callable_method_entry_without_refinements(VALUE klass, ID id, VALUE *defined_class);

int rb_method_entry_arity(const rb_method_entry_t *me);
int rb_method_entry_eq(const rb_method_entry_t *m1, const rb_method_entry_t *m2);
st_index_t rb_hash_method_entry(st_index_t hash, const rb_method_entry_t *me);

VALUE rb_method_entry_location(const rb_method_entry_t *me);
VALUE rb_mod_method_location(VALUE mod, ID id);
VALUE rb_obj_method_location(VALUE obj, ID id);

void rb_free_method_entry(const rb_method_entry_t *me);
void rb_sweep_method_entry(void *vm);

const rb_method_entry_t *rb_method_entry_clone(const rb_method_entry_t *me);
const rb_callable_method_entry_t *rb_method_entry_complement_defined_class(const rb_method_entry_t *src_me, ID called_id, VALUE defined_class);
void rb_method_entry_copy(rb_method_entry_t *dst, const rb_method_entry_t *src);

void rb_scope_visibility_set(rb_method_visibility_t);





typedef unsigned int rb_atomic_t;



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
      ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
      ;




extern void __assert (const char *__assertion, const char *__file, int __line)
      ;



static inline char *container_of_or_null_(void *member_ptr, size_t offset)
{
 return member_ptr ? (char *)member_ptr - offset : ((void*)0);
}
struct list_node
{
 struct list_node *next, *prev;
};
struct list_head
{
 struct list_node n;
};
static inline void list_head_init(struct list_head *h)
{
 h->n.next = h->n.prev = &h->n;
}
static inline void list_node_init(struct list_node *n)
{
 n->next = n->prev = n;
}
static inline void list_add_after_(struct list_head *h,
       struct list_node *p,
       struct list_node *n,
       const char *abortstr)
{
 n->next = p->next;
 n->prev = p;
 p->next->prev = n;
 p->next = n;
 (void)((void)abortstr, h);
}
static inline void list_add_(struct list_head *h,
        struct list_node *n,
        const char *abortstr)
{
 list_add_after_(h, &h->n, n, abortstr);
}
static inline void list_add_before_(struct list_head *h,
        struct list_node *p,
        struct list_node *n,
        const char *abortstr)
{
 n->next = p;
 n->prev = p->prev;
 p->prev->next = n;
 p->prev = n;
 (void)((void)abortstr, h);
}
static inline void list_add_tail_(struct list_head *h,
      struct list_node *n,
      const char *abortstr)
{
 list_add_before_(h, &h->n, n, abortstr);
}
static inline int list_empty_(const struct list_head *h, const char* abortstr)
{
 (void)((void)abortstr, h);
 return h->n.next == &h->n;
}
static inline void list_del_(struct list_node *n, const char* abortstr)
{
 (void)((void)abortstr, n);
 n->next->prev = n->prev;
 n->prev->next = n->next;




}
static inline void list_del_init_(struct list_node *n, const char *abortstr)
{
 list_del_(n, abortstr);
 list_node_init(n);
}
static inline void list_del_from(struct list_head *h, struct list_node *n)
{
 ((!list_empty_(h, "./ccan/list/list.h:313")) ? (void) (0) : __assert_fail ("!list_empty(h)", "./ccan/list/list.h", 313,  __PRETTY_FUNCTION__));
 list_del_(n, "./ccan/list/list.h:314");
}
static inline void list_swap_(struct list_node *o,
         struct list_node *n,
         const char* abortstr)
{
 (void)((void)abortstr, o);
 *n = *o;
 n->next->prev = n;
 n->prev->next = n;




}
static inline const void *list_top_(const struct list_head *h, size_t off)
{
 if (list_empty_(h, "./ccan/list/list.h:384"))
  return ((void*)0);
 return (const char *)h->n.next - off;
}
static inline const void *list_pop_(const struct list_head *h, size_t off)
{
 struct list_node *n;

 if (list_empty_(h, "./ccan/list/list.h:410"))
  return ((void*)0);
 n = h->n.next;
 list_del_(n, "./ccan/list/list.h:413");
 return (const char *)n - off;
}
static inline const void *list_tail_(const struct list_head *h, size_t off)
{
 if (list_empty_(h, "./ccan/list/list.h:436"))
  return ((void*)0);
 return (const char *)h->n.prev - off;
}
static inline void list_append_list_(struct list_head *to,
         struct list_head *from,
         const char *abortstr)
{
 struct list_node *from_tail = ((void)abortstr, from)->n.prev;
 struct list_node *to_tail = ((void)abortstr, to)->n.prev;


 to->n.prev = from_tail;
 from_tail->next = &to->n;
 to_tail->next = &from->n;
 from->n.prev = to_tail;


 list_del_(&from->n, "./ccan/list/list.h:585");
 list_head_init(from);
}
static inline void list_prepend_list_(struct list_head *to,
          struct list_head *from,
          const char *abortstr)
{
 struct list_node *from_tail = ((void)abortstr, from)->n.prev;
 struct list_node *to_head = ((void)abortstr, to)->n.next;


 to->n.next = &from->n;
 from->n.prev = &to->n;
 to_head->prev = from_tail;
 from_tail->next = to_head;


 list_del_(&from->n, "./ccan/list/list.h:617");
 list_head_init(from);
}
static inline void *list_node_to_off_(struct list_node *node, size_t off)
{
 return (void *)((char *)node - off);
}
static inline struct list_node *list_node_from_off_(void *ptr, size_t off)
{
 return (struct list_node *)((char *)ptr + off);
}
static inline void *list_entry_or_null(const struct list_head *h,
           const struct list_node *n,
           size_t off)
{
 if (n == &h->n)
  return ((void*)0);
 return (char *)n - off;
}

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
typedef pthread_t rb_nativethread_id_t;
typedef pthread_mutex_t rb_nativethread_lock_t;







rb_nativethread_id_t rb_nativethread_self();

void rb_nativethread_lock_initialize(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_destroy(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_lock(rb_nativethread_lock_t *lock);
void rb_nativethread_lock_unlock(rb_nativethread_lock_t *lock);




typedef struct rb_thread_cond_struct {
    pthread_cond_t cond;

    clockid_t clockid;

} rb_nativethread_cond_t;

typedef struct native_thread_data_struct {
    struct list_node ubf_list;
    rb_nativethread_cond_t sleep_cond;
} native_thread_data_t;






typedef struct rb_global_vm_lock_struct {

    unsigned long acquired;
    rb_nativethread_lock_t lock;


    volatile unsigned long waiting;
    rb_nativethread_cond_t cond;


    rb_nativethread_cond_t switch_cond;
    rb_nativethread_cond_t switch_wait_cond;
    int need_yield;
    int wait_yield;
} rb_global_vm_lock_t;


struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };


typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) ;




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) ;



extern int _setjmp (struct __jmp_buf_tag __env[1]) ;
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
      ;





extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
      ;







typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
      ;








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
typedef unsigned long rb_num_t;

enum ruby_tag_type {
    RUBY_TAG_NONE = 0x0,
    RUBY_TAG_RETURN = 0x1,
    RUBY_TAG_BREAK = 0x2,
    RUBY_TAG_NEXT = 0x3,
    RUBY_TAG_RETRY = 0x4,
    RUBY_TAG_REDO = 0x5,
    RUBY_TAG_RAISE = 0x6,
    RUBY_TAG_THROW = 0x7,
    RUBY_TAG_FATAL = 0x8,
    RUBY_TAG_MASK = 0xf
};
enum ruby_vm_throw_flags {
    VM_THROW_NO_ESCAPE_FLAG = 0x8000,
    VM_THROW_LEVEL_SHIFT = 16,
    VM_THROW_STATE_MASK = 0xff
};


struct rb_thread_struct;
struct rb_control_frame_struct;


typedef struct rb_compile_option_struct rb_compile_option_t;

struct iseq_inline_cache_entry {
    rb_serial_t ic_serial;
    const rb_cref_t *ic_cref;
    union {
 size_t index;
 VALUE value;
    } ic_value;
};

union iseq_inline_storage_entry {
    struct {
 struct rb_thread_struct *running_thread;
 VALUE value;
    } once;
    struct iseq_inline_cache_entry cache;
};

enum method_missing_reason {
    MISSING_NOENTRY = 0x00,
    MISSING_PRIVATE = 0x01,
    MISSING_PROTECTED = 0x02,
    MISSING_FCALL = 0x04,
    MISSING_VCALL = 0x08,
    MISSING_SUPER = 0x10,
    MISSING_MISSING = 0x20,
    MISSING_NONE = 0x40
};

struct rb_call_info {

    ID mid;
    unsigned int flag;
    int orig_argc;
};

struct rb_call_info_kw_arg {
    int keyword_len;
    VALUE keywords[1];
};

struct rb_call_info_with_kwarg {
    struct rb_call_info ci;
    struct rb_call_info_kw_arg *kw_arg;
};

struct rb_calling_info {
    VALUE block_handler;
    VALUE recv;
    int argc;
};

struct rb_call_cache;
struct rb_execution_context_struct;
typedef VALUE (*vm_call_handler)(struct rb_execution_context_struct *ec, struct rb_control_frame_struct *cfp, struct rb_calling_info *calling, const struct rb_call_info *ci, struct rb_call_cache *cc);

struct rb_call_cache {

    rb_serial_t method_state;
    rb_serial_t class_serial;


    const rb_callable_method_entry_t *me;

    vm_call_handler call;

    union {
 unsigned int index;
 enum method_missing_reason method_missing_reason;
 int inc_sp;
    } aux;
};
typedef struct rb_iseq_location_struct {
    VALUE pathobj;
    VALUE base_label;
    VALUE label;
    VALUE first_lineno;
    rb_code_range_t code_range;
} rb_iseq_location_t;




static inline VALUE
pathobj_path(VALUE pathobj)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pathobj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pathobj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pathobj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pathobj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pathobj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pathobj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pathobj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return pathobj;
    }
    else {
 ((void)0);
 return (rb_array_const_ptr(pathobj)[0]);
    }
}

static inline VALUE
pathobj_realpath(VALUE pathobj)
{
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pathobj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pathobj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pathobj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pathobj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pathobj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pathobj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pathobj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pathobj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pathobj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pathobj))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return pathobj;
    }
    else {
 ((void)0);
 return (rb_array_const_ptr(pathobj)[1]);
    }
}

struct rb_iseq_constant_body {
    enum iseq_type {
 ISEQ_TYPE_TOP,
 ISEQ_TYPE_METHOD,
 ISEQ_TYPE_BLOCK,
 ISEQ_TYPE_CLASS,
 ISEQ_TYPE_RESCUE,
 ISEQ_TYPE_ENSURE,
 ISEQ_TYPE_EVAL,
 ISEQ_TYPE_MAIN,
 ISEQ_TYPE_DEFINED_GUARD
    } type;

    unsigned int iseq_size;
    const VALUE *iseq_encoded;
    struct {
 struct {
     unsigned int has_lead : 1;
     unsigned int has_opt : 1;
     unsigned int has_rest : 1;
     unsigned int has_post : 1;
     unsigned int has_kw : 1;
     unsigned int has_kwrest : 1;
     unsigned int has_block : 1;

     unsigned int ambiguous_param0 : 1;
 } flags;

 unsigned int size;

 int lead_num;
 int opt_num;
 int rest_start;
 int post_start;
 int post_num;
 int block_start;

 const VALUE *opt_table;
 const struct rb_iseq_param_keyword {
     int num;
     int required_num;
     int bits_start;
     int rest_start;
     const ID *table;
     const VALUE *default_values;
 } *keyword;
    } param;

    rb_iseq_location_t location;


    const struct iseq_insn_info_entry *insns_info;

    const ID *local_table;


    const struct iseq_catch_table *catch_table;


    const struct rb_iseq_struct *parent_iseq;
    struct rb_iseq_struct *local_iseq;

    union iseq_inline_storage_entry *is_entries;
    struct rb_call_info *ci_entries;




    struct rb_call_cache *cc_entries;

    VALUE mark_ary;

    unsigned int local_table_size;
    unsigned int is_size;
    unsigned int ci_size;
    unsigned int ci_kw_size;
    unsigned int insns_info_size;
    unsigned int stack_max;
};



struct rb_iseq_struct {
    VALUE flags;
    VALUE reserved1;
    struct rb_iseq_constant_body *body;

    union {
 struct iseq_compile_data *compile_data;

 struct {
     VALUE obj;
     int index;
 } loader;

 rb_event_flag_t trace_events;
    } aux;
};
static inline const rb_iseq_t *
rb_iseq_check(const rb_iseq_t *iseq)
{





    return iseq;
}

enum ruby_special_exceptions {
    ruby_error_reenter,
    ruby_error_nomemory,
    ruby_error_sysstack,
    ruby_error_stackfatal,
    ruby_error_stream_closed,
    ruby_special_error_count
};

enum ruby_basic_operators {
    BOP_PLUS,
    BOP_MINUS,
    BOP_MULT,
    BOP_DIV,
    BOP_MOD,
    BOP_EQ,
    BOP_EQQ,
    BOP_LT,
    BOP_LE,
    BOP_LTLT,
    BOP_AREF,
    BOP_ASET,
    BOP_LENGTH,
    BOP_SIZE,
    BOP_EMPTY_P,
    BOP_SUCC,
    BOP_GT,
    BOP_GE,
    BOP_NOT,
    BOP_NEQ,
    BOP_MATCH,
    BOP_FREEZE,
    BOP_UMINUS,
    BOP_MAX,
    BOP_MIN,

    BOP_LAST_
};




struct rb_vm_struct;
typedef void rb_vm_at_exit_func(struct rb_vm_struct*);

typedef struct rb_at_exit_list {
    rb_vm_at_exit_func *func;
    struct rb_at_exit_list *next;
} rb_at_exit_list;

struct rb_objspace;
struct rb_objspace *rb_objspace_alloc(void);
void rb_objspace_free(struct rb_objspace *);

typedef struct rb_hook_list_struct {
    struct rb_event_hook_struct *hooks;
    rb_event_flag_t events;
    int need_clean;
} rb_hook_list_t;

typedef struct rb_vm_struct {
    VALUE self;

    rb_global_vm_lock_t gvl;
    rb_nativethread_lock_t thread_destruct_lock;

    struct rb_thread_struct *main_thread;
    struct rb_thread_struct *running_thread;

    struct list_head waiting_fds;
    struct list_head living_threads;
    size_t living_thread_num;
    VALUE thgroup_default;

    unsigned int running: 1;
    unsigned int thread_abort_on_exception: 1;
    unsigned int thread_report_on_exception: 1;
    int trace_running;
    volatile int sleeper;


    VALUE mark_object_ary;
    const VALUE special_exceptions[ruby_special_error_count];


    VALUE top_self;
    VALUE load_path;
    VALUE load_path_snapshot;
    VALUE load_path_check_cache;
    VALUE expanded_load_path;
    VALUE loaded_features;
    VALUE loaded_features_snapshot;
    struct st_table *loaded_features_index;
    struct st_table *loading_table;


    struct {
 VALUE cmd[(64 + 1)];
 unsigned char safe[(64 + 1)];
    } trap_list;


    rb_hook_list_t event_hooks;


    struct st_table *ensure_rollback_table;


    struct rb_postponed_job_struct *postponed_job_buffer;
    int postponed_job_index;

    int src_encoding_index;

    VALUE verbose, debug, orig_progname, progname;
    VALUE coverages;
    int coverage_mode;

    VALUE defined_module_hash;

    struct rb_objspace *objspace;

    rb_at_exit_list *at_exit;

    VALUE *defined_strings;
    st_table *frozen_strings;


    struct {
 size_t thread_vm_stack_size;
 size_t thread_machine_stack_size;
 size_t fiber_vm_stack_size;
 size_t fiber_machine_stack_size;
    } default_params;

    short redefined_flag[BOP_LAST_];
} rb_vm_t;
struct rb_captured_block {
    VALUE self;
    const VALUE *ep;
    union {
 const rb_iseq_t *iseq;
 const struct vm_ifunc *ifunc;
 VALUE val;
    } code;
};

enum rb_block_handler_type {
    block_handler_type_iseq,
    block_handler_type_ifunc,
    block_handler_type_symbol,
    block_handler_type_proc
};

enum rb_block_type {
    block_type_iseq,
    block_type_ifunc,
    block_type_symbol,
    block_type_proc
};

struct rb_block {
    union {
 struct rb_captured_block captured;
 VALUE symbol;
 VALUE proc;
    } as;
    enum rb_block_type type;
};

typedef struct rb_control_frame_struct {
    const VALUE *pc;
    VALUE *sp;
    const rb_iseq_t *iseq;
    VALUE self;
    const VALUE *ep;
    const void *block_code;




} rb_control_frame_t;

extern const rb_data_type_t ruby_threadptr_data_type;

static inline struct rb_thread_struct *
rb_thread_ptr(VALUE thval)
{
    return (struct rb_thread_struct *)rb_check_typeddata(thval, &ruby_threadptr_data_type);
}

enum rb_thread_status {
    THREAD_RUNNABLE,
    THREAD_STOPPED,
    THREAD_STOPPED_FOREVER,
    THREAD_KILLED
};

typedef jmp_buf rb_jmpbuf_t;





struct rb_vm_tag {
    VALUE tag;
    VALUE retval;
    rb_jmpbuf_t buf;
    struct rb_vm_tag *prev;
    enum ruby_tag_type state;
};

extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (__builtin_offsetof() > 0) ? 2 : -1; })];
extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (__builtin_offsetof() + sizeof(rb_jmpbuf_t) < sizeof(struct rb_vm_tag)) ? 2 : -1; })];



struct rb_vm_protect_tag {
    struct rb_vm_protect_tag *prev;
};

struct rb_unblock_callback {
    rb_unblock_function_t *func;
    void *arg;
};

struct rb_mutex_struct;

typedef struct rb_thread_list_struct{
    struct rb_thread_list_struct *next;
    struct rb_thread_struct *th;
} rb_thread_list_t;

typedef struct rb_ensure_entry {
    VALUE marker;
    VALUE (*e_proc)();
    VALUE data2;
} rb_ensure_entry_t;

typedef struct rb_ensure_list {
    struct rb_ensure_list *next;
    struct rb_ensure_entry entry;
} rb_ensure_list_t;

typedef char rb_thread_id_string_t[sizeof(rb_nativethread_id_t) * 2 + 3];

typedef struct rb_fiber_struct rb_fiber_t;

typedef struct rb_execution_context_struct {

    VALUE *vm_stack;
    size_t vm_stack_size;
    rb_control_frame_t *cfp;

    struct rb_vm_tag *tag;
    struct rb_vm_protect_tag *protect_tag;
    int safe_level;
    int raised_flag;


    rb_atomic_t interrupt_flag;
    unsigned long interrupt_mask;

    rb_fiber_t *fiber_ptr;
    struct rb_thread_struct *thread_ptr;


    st_table *local_storage;
    VALUE local_storage_recursive_hash;
    VALUE local_storage_recursive_hash_for_trace;


    const VALUE *root_lep;
    VALUE root_svar;


    rb_ensure_list_t *ensure_list;


    struct rb_trace_arg_struct *trace_arg;


    VALUE errinfo;
    VALUE passed_block_handler;
    const rb_callable_method_entry_t *passed_bmethod_me;
    enum method_missing_reason method_missing_reason;


    struct {
 VALUE *stack_start;
 VALUE *stack_end;
 size_t stack_maxsize;





 jmp_buf regs;
    } machine;
} rb_execution_context_t;

void ec_set_vm_stack(rb_execution_context_t *ec, VALUE *stack, size_t size);

typedef struct rb_thread_struct {
    struct list_node vmlt_node;
    VALUE self;
    rb_vm_t *vm;

    rb_execution_context_t *ec;

    VALUE last_status;


    struct rb_calling_info *calling;


    VALUE top_self;
    VALUE top_wrapper;


    rb_nativethread_id_t thread_id;



    enum rb_thread_status status;
    int to_kill;
    int priority;

    native_thread_data_t native_thread_data;
    void *blocking_region_buffer;

    VALUE thgroup;
    VALUE value;







    VALUE pending_interrupt_queue;
    VALUE pending_interrupt_mask_stack;
    int pending_interrupt_queue_checked;


    rb_nativethread_lock_t interrupt_lock;
    struct rb_unblock_callback unblock;
    VALUE locking_mutex;
    struct rb_mutex_struct *keeping_mutexes;

    rb_thread_list_t *join_list;

    VALUE first_proc;
    VALUE first_args;
    VALUE (*first_func)();


    VALUE stat_insn_usage;


    rb_fiber_t *root_fiber;
    rb_jmpbuf_t root_jmpbuf;


    unsigned int abort_on_exception: 1;
    unsigned int report_on_exception: 1;

    void *altstack;

    uint32_t running_time_us;
    VALUE name;
} rb_thread_t;

typedef enum {
    VM_DEFINECLASS_TYPE_CLASS = 0x00,
    VM_DEFINECLASS_TYPE_SINGLETON_CLASS = 0x01,
    VM_DEFINECLASS_TYPE_MODULE = 0x02,

    VM_DEFINECLASS_TYPE_MASK = 0x07
} rb_vm_defineclass_type_t;


rb_iseq_t *rb_iseq_new (const NODE *node, VALUE name, VALUE path, VALUE realpath, const rb_iseq_t *parent, enum iseq_type);
rb_iseq_t *rb_iseq_new_top (const NODE *node, VALUE name, VALUE path, VALUE realpath, const rb_iseq_t *parent);
rb_iseq_t *rb_iseq_new_main (const NODE *node, VALUE path, VALUE realpath, const rb_iseq_t *parent);
rb_iseq_t *rb_iseq_new_with_opt(const NODE *node, VALUE name, VALUE path, VALUE realpath, VALUE first_lineno,
    const rb_iseq_t *parent, enum iseq_type, const rb_compile_option_t*);


rb_iseq_t *rb_iseq_compile(VALUE src, VALUE file, VALUE line);
rb_iseq_t *rb_iseq_compile_on_base(VALUE src, VALUE file, VALUE line, const struct rb_block *base_block);
rb_iseq_t *rb_iseq_compile_with_option(VALUE src, VALUE file, VALUE realpath, VALUE line, const struct rb_block *base_block, VALUE opt);

VALUE rb_iseq_disasm(const rb_iseq_t *iseq);
int rb_iseq_disasm_insn(VALUE str, const VALUE *iseqval, size_t pos, const rb_iseq_t *iseq, VALUE child);
const char *ruby_node_name(int node);

VALUE rb_iseq_coverage(const rb_iseq_t *iseq);

extern VALUE rb_cISeq;
extern VALUE rb_cRubyVM;
extern VALUE rb_mRubyVMFrozenCore;




typedef struct {
    const struct rb_block block;
    int8_t safe_level;
    int8_t is_from_method;
    int8_t is_lambda;
} rb_proc_t;

typedef struct {
    VALUE flags;
    const rb_iseq_t *iseq;
    const VALUE *ep;
    const VALUE *env;
    unsigned int env_size;
} rb_env_t;

extern const rb_data_type_t ruby_binding_data_type;




typedef struct {
    const struct rb_block block;
    const VALUE pathobj;
    unsigned short first_lineno;
} rb_binding_t;



enum vm_check_match_type {
    VM_CHECKMATCH_TYPE_WHEN = 1,
    VM_CHECKMATCH_TYPE_CASE = 2,
    VM_CHECKMATCH_TYPE_RESCUE = 3
};




enum vm_call_flag_bits {
    VM_CALL_ARGS_SPLAT_bit,
    VM_CALL_ARGS_BLOCKARG_bit,
    VM_CALL_ARGS_BLOCKARG_BLOCKPARAM_bit,
    VM_CALL_FCALL_bit,
    VM_CALL_VCALL_bit,
    VM_CALL_ARGS_SIMPLE_bit,
    VM_CALL_BLOCKISEQ_bit,
    VM_CALL_KWARG_bit,
    VM_CALL_KW_SPLAT_bit,
    VM_CALL_TAILCALL_bit,
    VM_CALL_SUPER_bit,
    VM_CALL_OPT_SEND_bit,
    VM_CALL__END
};
enum vm_special_object_type {
    VM_SPECIAL_OBJECT_VMCORE = 1,
    VM_SPECIAL_OBJECT_CBASE,
    VM_SPECIAL_OBJECT_CONST_BASE
};

enum vm_svar_index {
    VM_SVAR_LASTLINE = 0,
    VM_SVAR_BACKREF = 1,

    VM_SVAR_EXTRA_START = 2,
    VM_SVAR_FLIPFLOP_START = 2
};


typedef struct iseq_inline_cache_entry *IC;
typedef struct rb_call_info *CALL_INFO;
typedef struct rb_call_cache *CALL_CACHE;

void rb_vm_change_state(void);

typedef VALUE CDHASH;





typedef rb_control_frame_t *
  (*rb_insn_func_t)(rb_execution_context_t *, rb_control_frame_t *);
enum {
    VM_FRAME_MAGIC_METHOD = 0x11110001,
    VM_FRAME_MAGIC_BLOCK = 0x22220001,
    VM_FRAME_MAGIC_CLASS = 0x33330001,
    VM_FRAME_MAGIC_TOP = 0x44440001,
    VM_FRAME_MAGIC_CFUNC = 0x55550001,
    VM_FRAME_MAGIC_IFUNC = 0x66660001,
    VM_FRAME_MAGIC_EVAL = 0x77770001,
    VM_FRAME_MAGIC_RESCUE = 0x88880001,
    VM_FRAME_MAGIC_DUMMY = 0x99990001,

    VM_FRAME_MAGIC_MASK = 0xffff0001,


    VM_FRAME_FLAG_PASSED = 0x0010,
    VM_FRAME_FLAG_FINISH = 0x0020,
    VM_FRAME_FLAG_BMETHOD = 0x0040,
    VM_FRAME_FLAG_CFRAME = 0x0080,
    VM_FRAME_FLAG_LAMBDA = 0x0100,
    VM_FRAME_FLAG_MODIFIED_BLOCK_PARAM = 0x0200,


    VM_ENV_FLAG_LOCAL = 0x0002,
    VM_ENV_FLAG_ESCAPED = 0x0004,
    VM_ENV_FLAG_WB_REQUIRED = 0x0008
};
static inline void VM_FORCE_WRITE_SPECIAL_CONST(const VALUE *ptr, VALUE special_const_value);

static inline void
VM_ENV_FLAGS_SET(const VALUE *ep, VALUE flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    VM_FORCE_WRITE_SPECIAL_CONST(&ep[( 0)], flags | flag);
}

static inline void
VM_ENV_FLAGS_UNSET(const VALUE *ep, VALUE flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    VM_FORCE_WRITE_SPECIAL_CONST(&ep[( 0)], flags & ~flag);
}

static inline unsigned long
VM_ENV_FLAGS(const VALUE *ep, long flag)
{
    VALUE flags = ep[( 0)];
    ((void)0);
    return flags & flag;
}

static inline unsigned long
VM_FRAME_TYPE(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_MAGIC_MASK);
}

static inline int
VM_FRAME_LAMBDA_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_LAMBDA) != 0;
}

static inline int
VM_FRAME_FINISHED_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_FINISH) != 0;
}

static inline int
VM_FRAME_BMETHOD_P(const rb_control_frame_t *cfp)
{
    return VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_BMETHOD) != 0;
}

static inline int
rb_obj_is_iseq(VALUE iseq)
{
    return imemo_type_p(iseq, imemo_iseq);
}





static inline int
VM_FRAME_CFRAME_P(const rb_control_frame_t *cfp)
{
    int cframe_p = VM_ENV_FLAGS(cfp->ep, VM_FRAME_FLAG_CFRAME) != 0;
    ((void)0);
    return cframe_p;
}

static inline int
VM_FRAME_RUBYFRAME_P(const rb_control_frame_t *cfp)
{
    return !VM_FRAME_CFRAME_P(cfp);
}







static inline int
VM_ENV_LOCAL_P(const VALUE *ep)
{
    return VM_ENV_FLAGS(ep, VM_ENV_FLAG_LOCAL) ? 1 : 0;
}

static inline const VALUE *
VM_ENV_PREV_EP(const VALUE *ep)
{
    ((void)0);
    return ((void *)(((ep[(-1)])) & ~0x03));
}

static inline VALUE
VM_ENV_BLOCK_HANDLER(const VALUE *ep)
{
    ((void)0);
    return ep[(-1)];
}





static inline int
VM_ENV_ESCAPED_P(const VALUE *ep)
{
    ((void)0);
    return VM_ENV_FLAGS(ep, VM_ENV_FLAG_ESCAPED) ? 1 : 0;
}
static inline VALUE
VM_ENV_ENVVAL(const VALUE *ep)
{
    VALUE envval = ep[( 1)];
    ((void)0);
    ((void)0);
    return envval;
}

static inline const rb_env_t *
VM_ENV_ENVVAL_PTR(const VALUE *ep)
{
    return (const rb_env_t *)VM_ENV_ENVVAL(ep);
}

static inline VALUE
VM_ENV_PROCVAL(const VALUE *ep)
{
    ((void)0);
    ((void)0);
    ((void)0);

    return ep[( 2)];
}

static inline const rb_env_t *
vm_env_new(VALUE *env_ep, VALUE *env_body, unsigned int env_size, const rb_iseq_t *iseq)
{
    rb_env_t *env = (rb_env_t *)rb_imemo_new(imemo_env, (VALUE)env_ep, (VALUE)env_body, 0, (VALUE)iseq);
    env->env_size = env_size;
    env_ep[( 1)] = (VALUE)env;
    return env;
}

static inline void
VM_FORCE_WRITE(const VALUE *ptr, VALUE v)
{
    *((VALUE *)ptr) = v;
}

static inline void
VM_FORCE_WRITE_SPECIAL_CONST(const VALUE *ptr, VALUE special_const_value)
{
    ((void)0);
    VM_FORCE_WRITE(ptr, special_const_value);
}

static inline void
VM_STACK_ENV_WRITE(const VALUE *ep, int index, VALUE v)
{
    ((void)0);
    VM_FORCE_WRITE(&ep[index], v);
}

const VALUE *rb_vm_ep_local_ep(const VALUE *ep);
const VALUE *rb_vm_proc_local_ep(VALUE proc);
void rb_vm_block_ep_update(VALUE obj, const struct rb_block *dst, const VALUE *ep);
void rb_vm_block_copy(VALUE obj, const struct rb_block *dst, const struct rb_block *src);

VALUE rb_vm_frame_block_handler(const rb_control_frame_t *cfp);







static inline const rb_control_frame_t *
RUBY_VM_END_CONTROL_FRAME(const rb_execution_context_t *ec)
{
    return (rb_control_frame_t *)(ec->vm_stack + ec->vm_stack_size);
}

static inline int
RUBY_VM_CONTROL_FRAME_STACK_OVERFLOW_P(const rb_execution_context_t *ec, const rb_control_frame_t *cfp)
{
    return !((void *)(RUBY_VM_END_CONTROL_FRAME(ec)) > (void *)(cfp));
}

static inline int
VM_BH_ISEQ_BLOCK_P(VALUE block_handler)
{
    if ((block_handler & 0x03) == 0x01) {




 return 1;
    }
    else {
 return 0;
    }
}

static inline VALUE
VM_BH_FROM_ISEQ_BLOCK(const struct rb_captured_block *captured)
{
    VALUE block_handler = ((VALUE)(captured) | (0x01));
    ((void)0);
    return block_handler;
}

static inline const struct rb_captured_block *
VM_BH_TO_ISEQ_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}

static inline int
VM_BH_IFUNC_P(VALUE block_handler)
{
    if ((block_handler & 0x03) == 0x03) {




 return 1;
    }
    else {
 return 0;
    }
}

static inline VALUE
VM_BH_FROM_IFUNC_BLOCK(const struct rb_captured_block *captured)
{
    VALUE block_handler = ((VALUE)(captured) | (0x03));
    ((void)0);
    return block_handler;
}

static inline const struct rb_captured_block *
VM_BH_TO_IFUNC_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}

static inline const struct rb_captured_block *
VM_BH_TO_CAPT_BLOCK(VALUE block_handler)
{
    struct rb_captured_block *captured = ((void *)((block_handler) & ~0x03));
    ((void)0);
    return captured;
}

static inline enum rb_block_handler_type
vm_block_handler_type(VALUE block_handler)
{
    if (VM_BH_ISEQ_BLOCK_P(block_handler)) {
 return block_handler_type_iseq;
    }
    else if (VM_BH_IFUNC_P(block_handler)) {
 return block_handler_type_ifunc;
    }
    else if (((((VALUE)(block_handler)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(block_handler) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(block_handler) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(block_handler))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return block_handler_type_symbol;
    }
    else {
 ((void)0);
 return block_handler_type_proc;
    }
}

static inline void
vm_block_handler_verify( VALUE block_handler)
{
    ((void)0);

}

static inline enum rb_block_type
vm_block_type(const struct rb_block *block)
{
    return block->type;
}

static inline void
vm_block_type_set(const struct rb_block *block, enum rb_block_type type)
{
    struct rb_block *mb = (struct rb_block *)block;
    mb->type = type;
}

static inline const struct rb_block *
vm_proc_block(VALUE procval)
{
    ((void)0);
    return &((rb_proc_t *)(((struct RTypedData*)(procval))->data))->block;
}

static inline const rb_iseq_t *vm_block_iseq(const struct rb_block *block);
static inline const VALUE *vm_block_ep(const struct rb_block *block);

static inline const rb_iseq_t *
vm_proc_iseq(VALUE procval)
{
    return vm_block_iseq(vm_proc_block(procval));
}

static inline const VALUE *
vm_proc_ep(VALUE procval)
{
    return vm_block_ep(vm_proc_block(procval));
}

static inline const rb_iseq_t *
vm_block_iseq(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq: return rb_iseq_check(block->as.captured.code.iseq);
      case block_type_proc: return vm_proc_iseq(block->as.proc);
      case block_type_ifunc:
      case block_type_symbol: return ((void*)0);
    }
    __builtin_unreachable();
    return ((void*)0);
}

static inline const VALUE *
vm_block_ep(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq:
      case block_type_ifunc: return block->as.captured.ep;
      case block_type_proc: return vm_proc_ep(block->as.proc);
      case block_type_symbol: return ((void*)0);
    }
    __builtin_unreachable();
    return ((void*)0);
}

static inline VALUE
vm_block_self(const struct rb_block *block)
{
    switch (vm_block_type(block)) {
      case block_type_iseq:
      case block_type_ifunc:
 return block->as.captured.self;
      case block_type_proc:
 return vm_block_self(vm_proc_block(block->as.proc));
      case block_type_symbol:
 return ((VALUE)RUBY_Qundef);
    }
    __builtin_unreachable();
    return ((VALUE)RUBY_Qundef);
}

static inline VALUE
VM_BH_TO_SYMBOL(VALUE block_handler)
{
    ((void)0);
    return block_handler;
}

static inline VALUE
VM_BH_FROM_SYMBOL(VALUE symbol)
{
    ((void)0);
    return symbol;
}

static inline VALUE
VM_BH_TO_PROC(VALUE block_handler)
{
    ((void)0);
    return block_handler;
}

static inline VALUE
VM_BH_FROM_PROC(VALUE procval)
{
    ((void)0);
    return procval;
}


VALUE rb_thread_alloc(VALUE klass);
VALUE rb_proc_alloc(VALUE klass);
VALUE rb_binding_alloc(VALUE klass);


extern void rb_vmdebug_stack_dump_raw(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
extern void rb_vmdebug_debug_print_pre(const rb_execution_context_t *ec, const rb_control_frame_t *cfp, const VALUE *_pc);
extern void rb_vmdebug_debug_print_post(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);



void rb_vm_bugreport(const void *);
 void rb_bug_context(const void *, const char *fmt, ...);


VALUE rb_iseq_eval(const rb_iseq_t *iseq);
VALUE rb_iseq_eval_main(const rb_iseq_t *iseq);
VALUE rb_iseq_path(const rb_iseq_t *iseq);
VALUE rb_iseq_realpath(const rb_iseq_t *iseq);

VALUE rb_iseq_pathobj_new(VALUE path, VALUE realpath);
void rb_iseq_pathobj_set(const rb_iseq_t *iseq, VALUE path, VALUE realpath);

int rb_ec_frame_method_id_and_class(const rb_execution_context_t *ec, ID *idp, ID *called_idp, VALUE *klassp);
void rb_ec_setup_exception(const rb_execution_context_t *ec, VALUE mesg, VALUE cause);

VALUE rb_vm_invoke_proc(rb_execution_context_t *ec, rb_proc_t *proc, int argc, const VALUE *argv, VALUE block_handler);

VALUE rb_vm_make_proc_lambda(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass, int8_t is_lambda);
static inline VALUE
rb_vm_make_proc(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass)
{
    return rb_vm_make_proc_lambda(ec, captured, klass, 0);
}

static inline VALUE
rb_vm_make_lambda(const rb_execution_context_t *ec, const struct rb_captured_block *captured, VALUE klass)
{
    return rb_vm_make_proc_lambda(ec, captured, klass, 1);
}

VALUE rb_vm_make_binding(const rb_execution_context_t *ec, const rb_control_frame_t *src_cfp);
VALUE rb_vm_env_local_variables(const rb_env_t *env);
const rb_env_t *rb_vm_env_prev_env(const rb_env_t *env);
const VALUE *rb_binding_add_dynavars(VALUE bindval, rb_binding_t *bind, int dyncount, const ID *dynvars);
void rb_vm_inc_const_missing_count(void);
void rb_vm_gvl_destroy(rb_vm_t *vm);
VALUE rb_vm_call(rb_execution_context_t *ec, VALUE recv, VALUE id, int argc,
   const VALUE *argv, const rb_callable_method_entry_t *me);
void rb_vm_pop_frame(rb_execution_context_t *ec);

void rb_thread_start_timer_thread(void);
void rb_thread_stop_timer_thread(void);
void rb_thread_reset_timer_thread(void);
void rb_thread_wakeup_timer_thread(void);

static inline void
rb_vm_living_threads_init(rb_vm_t *vm)
{
    list_head_init(&vm->waiting_fds);
    list_head_init(&vm->living_threads);
    vm->living_thread_num = 0;
}

static inline void
rb_vm_living_threads_insert(rb_vm_t *vm, rb_thread_t *th)
{
    list_add_tail_(&vm->living_threads, &th->vmlt_node, "./vm_core.h:1535");
    vm->living_thread_num++;
}

static inline void
rb_vm_living_threads_remove(rb_vm_t *vm, rb_thread_t *th)
{
    list_del_(&th->vmlt_node, "./vm_core.h:1542");
    vm->living_thread_num--;
}

typedef int rb_backtrace_iter_func(void *, VALUE, int, VALUE);
rb_control_frame_t *rb_vm_get_ruby_level_next_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
rb_control_frame_t *rb_vm_get_binding_creatable_next_cfp(const rb_execution_context_t *ec, const rb_control_frame_t *cfp);
int rb_vm_get_sourceline(const rb_control_frame_t *);
VALUE rb_name_err_mesg_new(VALUE mesg, VALUE recv, VALUE method);
void rb_vm_stack_to_heap(rb_execution_context_t *ec);
void ruby_thread_init_stack(rb_thread_t *th);
int rb_vm_control_frame_id_and_class(const rb_control_frame_t *cfp, ID *idp, ID *called_idp, VALUE *klassp);
void rb_vm_rewind_cfp(rb_execution_context_t *ec, rb_control_frame_t *cfp);
VALUE rb_vm_bh_to_procval(const rb_execution_context_t *ec, VALUE block_handler);

void rb_vm_register_special_exception_str(enum ruby_special_exceptions sp, VALUE exception_class, VALUE mesg);




void rb_gc_mark_machine_stack(const rb_execution_context_t *ec);

void rb_vm_rewrite_cref(rb_cref_t *node, VALUE old_klass, VALUE new_klass, rb_cref_t **new_cref_ptr);

const rb_callable_method_entry_t *rb_vm_frame_method_entry(const rb_control_frame_t *cfp);
VALUE rb_catch_protect(VALUE t, rb_block_call_func *func, VALUE data, enum ruby_tag_type *stateptr);





extern rb_vm_t *ruby_current_vm_ptr;
extern rb_execution_context_t *ruby_current_execution_context_ptr;
extern rb_event_flag_t ruby_vm_event_flags;
extern rb_event_flag_t ruby_vm_event_enabled_flags;






static inline rb_thread_t *
rb_ec_thread_ptr(const rb_execution_context_t *ec)
{
    return ec->thread_ptr;
}

static inline rb_vm_t *
rb_ec_vm_ptr(const rb_execution_context_t *ec)
{
    const rb_thread_t *th = rb_ec_thread_ptr(ec);
    if (th) {
 return th->vm;
    }
    else {
 return ((void*)0);
    }
}

static inline rb_execution_context_t *
rb_current_execution_context(void)
{
    return ruby_current_execution_context_ptr;
}

static inline rb_thread_t *
rb_current_thread(void)
{
    const rb_execution_context_t *ec = rb_current_execution_context();
    return rb_ec_thread_ptr(ec);
}

static inline rb_vm_t *
rb_current_vm(void)
{
    ((void)0);



    return ruby_current_vm_ptr;
}
enum {
    TIMER_INTERRUPT_MASK = 0x01,
    PENDING_INTERRUPT_MASK = 0x02,
    POSTPONED_JOB_INTERRUPT_MASK = 0x04,
    TRAP_INTERRUPT_MASK = 0x08
};
VALUE rb_exc_set_backtrace(VALUE exc, VALUE bt);
int rb_signal_buff_size(void);
void rb_signal_exec(rb_thread_t *th, int sig);
void rb_threadptr_check_signal(rb_thread_t *mth);
void rb_threadptr_signal_raise(rb_thread_t *th, int sig);
void rb_threadptr_signal_exit(rb_thread_t *th);
void rb_threadptr_execute_interrupts(rb_thread_t *, int);
void rb_threadptr_interrupt(rb_thread_t *th);
void rb_threadptr_unlock_all_locking_mutexes(rb_thread_t *th);
void rb_threadptr_pending_interrupt_clear(rb_thread_t *th);
void rb_threadptr_pending_interrupt_enque(rb_thread_t *th, VALUE v);
void rb_ec_error_print(rb_execution_context_t * volatile ec, volatile VALUE errinfo);
void rb_execution_context_mark(const rb_execution_context_t *ec);
void rb_fiber_close(rb_fiber_t *fib);
void Init_native_thread(rb_thread_t *th);


static inline void
rb_vm_check_ints(rb_execution_context_t *ec)
{
    ((void)0);
    if ((__builtin_expect(!!(((ec)->interrupt_flag & ~(ec)->interrupt_mask)), 0))) {
 rb_threadptr_execute_interrupts(rb_ec_thread_ptr(ec), 0);
    }
}


struct rb_trace_arg_struct {
    rb_event_flag_t event;
    rb_execution_context_t *ec;
    const rb_control_frame_t *cfp;
    VALUE self;
    ID id;
    ID called_id;
    VALUE klass;
    VALUE data;

    int klass_solved;


    int lineno;
    VALUE path;
};

void rb_exec_event_hooks(struct rb_trace_arg_struct *trace_arg, int pop_p);
static inline void
rb_exec_event_hook_orig(rb_execution_context_t *ec, const rb_event_flag_t flag,
   VALUE self, ID id, ID called_id, VALUE klass, VALUE data, int pop_p)
{
    struct rb_trace_arg_struct trace_arg;

    ((void)0);
    ((void)0);

    trace_arg.event = flag;
    trace_arg.ec = ec;
    trace_arg.cfp = ec->cfp;
    trace_arg.self = self;
    trace_arg.id = id;
    trace_arg.called_id = called_id;
    trace_arg.klass = klass;
    trace_arg.data = data;
    trace_arg.path = ((VALUE)RUBY_Qundef);
    trace_arg.klass_solved = 0;
    rb_exec_event_hooks(&trace_arg, pop_p);
}








int rb_thread_check_trap_pending(void);





extern VALUE rb_get_coverages(void);
extern void rb_set_coverages(VALUE, int, VALUE);
extern void rb_reset_coverages(void);

void rb_postponed_job_flush(rb_vm_t *vm);









extern const int ruby_api_version[3];
extern const char ruby_version[];
extern const char ruby_release_date[];
extern const char ruby_platform[];
extern const int ruby_patchlevel;
extern const char ruby_description[];
extern const char ruby_copyright[];
extern const char ruby_engine[];

static inline size_t
rb_call_info_kw_arg_bytes(int keyword_len)
{
    return sizeof(struct rb_call_info_kw_arg) + sizeof(VALUE) * (keyword_len - 1);
}

enum iseq_mark_ary_index {
    ISEQ_MARK_ARY_COVERAGE,
    ISEQ_MARK_ARY_FLIP_CNT,
    ISEQ_MARK_ARY_ORIGINAL_ISEQ,
    ISEQ_MARK_ARY_INITIAL_SIZE
};

static inline VALUE
iseq_mark_ary_create(int flip_cnt)
{
    VALUE ary = rb_ary_tmp_new(ISEQ_MARK_ARY_INITIAL_SIZE);
    rb_ary_push(ary, ((VALUE)RUBY_Qnil));
    rb_ary_push(ary, (((VALUE)(flip_cnt))<<1 | RUBY_FIXNUM_FLAG));
    rb_ary_push(ary, ((VALUE)RUBY_Qnil));
    return ary;
}
static inline int
ISEQ_FLIP_CNT_INCREMENT(const rb_iseq_t *iseq)
{
    int cnt = ((int)rb_fix2int((VALUE)((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_FLIP_CNT]))));
    do { const VALUE _ary = ((iseq)->body->mark_ary); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[ISEQ_MARK_ARY_FLIP_CNT]), (VALUE)(((((VALUE)(cnt+1))<<1 | RUBY_FIXNUM_FLAG))), "./iseq.h", 61); ; } while (0);
    return cnt;
}

static inline VALUE *
ISEQ_ORIGINAL_ISEQ(const rb_iseq_t *iseq)
{
    VALUE str = (rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_ORIGINAL_ISEQ]);
    if (!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) return (VALUE *)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    return ((void*)0);
}

static inline void
ISEQ_ORIGINAL_ISEQ_CLEAR(const rb_iseq_t *iseq)
{
    do { const VALUE _ary = ((iseq)->body->mark_ary); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[ISEQ_MARK_ARY_ORIGINAL_ISEQ]), (VALUE)((((VALUE)RUBY_Qnil))), "./iseq.h", 76); ; } while (0);
}

static inline VALUE *
ISEQ_ORIGINAL_ISEQ_ALLOC(const rb_iseq_t *iseq, long size)
{
    VALUE str = rb_str_tmp_new(size * sizeof(VALUE));
    do { const VALUE _ary = ((iseq)->body->mark_ary); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[ISEQ_MARK_ARY_ORIGINAL_ISEQ]), (VALUE)((str)), "./iseq.h", 83); ; } while (0);
    return (VALUE *)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
}
struct iseq_compile_data {

    const VALUE err_info;
    VALUE mark_ary;
    const VALUE catch_table_ary;


    struct iseq_label_data *start_label;
    struct iseq_label_data *end_label;
    struct iseq_label_data *redo_label;
    const rb_iseq_t *current_block;
    VALUE ensure_node;
    VALUE for_iseq;
    struct iseq_compile_data_ensure_node_stack *ensure_node_stack;
    int loopval_popped;
    int cached_const;
    struct iseq_compile_data_storage *storage_head;
    struct iseq_compile_data_storage *storage_current;
    int last_line;
    int label_no;
    int node_level;
    unsigned int ci_index;
    unsigned int ci_kw_index;
    const rb_compile_option_t *option;
    struct rb_id_table *ivar_cache_table;



};

static inline struct iseq_compile_data *
ISEQ_COMPILE_DATA(const rb_iseq_t *iseq)
{
    if (iseq->flags & ((VALUE)RUBY_FL_USER6)) {
 return iseq->aux.compile_data;
    }
    else {
 return ((void*)0);
    }
}

static inline void
ISEQ_COMPILE_DATA_ALLOC(rb_iseq_t *iseq)
{
    iseq->flags |= ((VALUE)RUBY_FL_USER6);
    iseq->aux.compile_data = (((struct iseq_compile_data*)ruby_xcalloc((size_t)(1),sizeof(struct iseq_compile_data))));
}

static inline void
ISEQ_COMPILE_DATA_CLEAR(rb_iseq_t *iseq)
{
    iseq->flags &= ~((VALUE)RUBY_FL_USER6);
    iseq->aux.compile_data = ((void*)0);
}

static inline rb_iseq_t *
iseq_imemo_alloc(void)
{
    return (rb_iseq_t *)rb_imemo_new(imemo_iseq, 0, 0, 0, 0);
}

VALUE iseq_ibf_dump(const rb_iseq_t *iseq, VALUE opt);
void ibf_load_iseq_complete(rb_iseq_t *iseq);
const rb_iseq_t *iseq_ibf_load(VALUE str);
VALUE iseq_ibf_load_extra_data(VALUE str);



VALUE rb_iseq_compile_node(rb_iseq_t *iseq, const NODE *node);
int rb_iseq_translate_threaded_code(rb_iseq_t *iseq);
VALUE *rb_iseq_original_iseq(const rb_iseq_t *iseq);
void rb_iseq_build_from_ary(rb_iseq_t *iseq, VALUE misc,
       VALUE locals, VALUE args,
       VALUE exception, VALUE body);


void rb_iseq_add_mark_object(const rb_iseq_t *iseq, VALUE obj);
VALUE rb_iseq_load(VALUE data, VALUE parent, VALUE opt);
VALUE rb_iseq_parameters(const rb_iseq_t *iseq, int is_proc);
struct st_table *ruby_insn_make_insn_table(void);
unsigned int rb_iseq_line_no(const rb_iseq_t *iseq, size_t pos);
void rb_iseq_trace_set(const rb_iseq_t *iseq, rb_event_flag_t turnon_events);
void rb_iseq_trace_set_all(rb_event_flag_t turnon_events);
void rb_iseq_trace_on_all(void);

VALUE rb_iseqw_new(const rb_iseq_t *iseq);
const rb_iseq_t *rb_iseqw_to_iseq(VALUE iseqw);

VALUE rb_iseq_absolute_path(const rb_iseq_t *iseq);
VALUE rb_iseq_label(const rb_iseq_t *iseq);
VALUE rb_iseq_base_label(const rb_iseq_t *iseq);
VALUE rb_iseq_first_lineno(const rb_iseq_t *iseq);
VALUE rb_iseq_method_name(const rb_iseq_t *iseq);
void rb_iseq_code_range(const rb_iseq_t *iseq, int *first_lineno, int *first_column, int *last_lineno, int *last_column);


const rb_iseq_t *rb_method_iseq(VALUE body);
const rb_iseq_t *rb_proc_get_iseq(VALUE proc, int *is_proc);

struct rb_compile_option_struct {
    unsigned int inline_const_cache: 1;
    unsigned int peephole_optimization: 1;
    unsigned int tailcall_optimization: 1;
    unsigned int specialized_instruction: 1;
    unsigned int operands_unification: 1;
    unsigned int instructions_unification: 1;
    unsigned int stack_caching: 1;
    unsigned int frozen_string_literal: 1;
    unsigned int debug_frozen_string_literal: 1;
    unsigned int coverage_enabled: 1;
    int debug_level;
};

struct iseq_insn_info_entry {
    unsigned int position;
    int line_no;
    rb_event_flag_t events;
};

struct iseq_catch_table_entry {
    enum catch_type {
 CATCH_TYPE_RESCUE = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_ENSURE = (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_RETRY = (((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_BREAK = (((VALUE)(4))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_REDO = (((VALUE)(5))<<1 | RUBY_FIXNUM_FLAG),
 CATCH_TYPE_NEXT = (((VALUE)(6))<<1 | RUBY_FIXNUM_FLAG)
    } type;
    const rb_iseq_t *iseq;

    unsigned int start;
    unsigned int end;
    unsigned int cont;
    unsigned int sp;
};

struct iseq_catch_table { unsigned int size; struct iseq_catch_table_entry entries[1];} ;




static inline int
iseq_catch_table_bytes(int n)
{
    enum {
 catch_table_entries_max = (2147483647 - sizeof(struct iseq_catch_table)) / sizeof(struct iseq_catch_table_entry)
    };
    if (n > catch_table_entries_max) rb_fatal("too large iseq_catch_table - %d", n);
    return (int)(sizeof(struct iseq_catch_table) +
   (n - 1) * sizeof(struct iseq_catch_table_entry));
}



struct iseq_compile_data_storage {
    struct iseq_compile_data_storage *next;
    unsigned int pos;
    unsigned int size;
    char buff[1];
};







enum defined_type {
    DEFINED_NIL = 1,
    DEFINED_IVAR,
    DEFINED_LVAR,
    DEFINED_GVAR,
    DEFINED_CVAR,
    DEFINED_CONST,
    DEFINED_METHOD,
    DEFINED_YIELD,
    DEFINED_ZSUPER,
    DEFINED_SELF,
    DEFINED_TRUE,
    DEFINED_FALSE,
    DEFINED_ASGN,
    DEFINED_EXPR,
    DEFINED_IVAR2,
    DEFINED_REF,
    DEFINED_FUNC
};

VALUE rb_iseq_defined_string(enum defined_type type);
void rb_iseq_make_compile_option(struct rb_compile_option_struct *option, VALUE opt);


VALUE rb_iseq_local_variables(const rb_iseq_t *iseq);

enum ruby_vminsn_type {
    YARVINSN_nop,
    YARVINSN_getlocal,
    YARVINSN_setlocal,
    YARVINSN_getblockparam,
    YARVINSN_setblockparam,
    YARVINSN_getspecial,
    YARVINSN_setspecial,
    YARVINSN_getinstancevariable,
    YARVINSN_setinstancevariable,
    YARVINSN_getclassvariable,
    YARVINSN_setclassvariable,
    YARVINSN_getconstant,
    YARVINSN_setconstant,
    YARVINSN_getglobal,
    YARVINSN_setglobal,
    YARVINSN_putnil,
    YARVINSN_putself,
    YARVINSN_putobject,
    YARVINSN_putspecialobject,
    YARVINSN_putiseq,
    YARVINSN_putstring,
    YARVINSN_concatstrings,
    YARVINSN_tostring,
    YARVINSN_freezestring,
    YARVINSN_toregexp,
    YARVINSN_intern,
    YARVINSN_newarray,
    YARVINSN_duparray,
    YARVINSN_expandarray,
    YARVINSN_concatarray,
    YARVINSN_splatarray,
    YARVINSN_newhash,
    YARVINSN_newrange,
    YARVINSN_pop,
    YARVINSN_dup,
    YARVINSN_dupn,
    YARVINSN_swap,
    YARVINSN_reverse,
    YARVINSN_reput,
    YARVINSN_topn,
    YARVINSN_setn,
    YARVINSN_adjuststack,
    YARVINSN_defined,
    YARVINSN_checkmatch,
    YARVINSN_checkkeyword,
    YARVINSN_tracecoverage,
    YARVINSN_defineclass,
    YARVINSN_send,
    YARVINSN_opt_str_freeze,
    YARVINSN_opt_str_uminus,
    YARVINSN_opt_newarray_max,
    YARVINSN_opt_newarray_min,
    YARVINSN_opt_send_without_block,
    YARVINSN_invokesuper,
    YARVINSN_invokeblock,
    YARVINSN_leave,
    YARVINSN_throw,
    YARVINSN_jump,
    YARVINSN_branchif,
    YARVINSN_branchunless,
    YARVINSN_branchnil,
    YARVINSN_branchiftype,
    YARVINSN_getinlinecache,
    YARVINSN_setinlinecache,
    YARVINSN_once,
    YARVINSN_opt_case_dispatch,
    YARVINSN_opt_plus,
    YARVINSN_opt_minus,
    YARVINSN_opt_mult,
    YARVINSN_opt_div,
    YARVINSN_opt_mod,
    YARVINSN_opt_eq,
    YARVINSN_opt_neq,
    YARVINSN_opt_lt,
    YARVINSN_opt_le,
    YARVINSN_opt_gt,
    YARVINSN_opt_ge,
    YARVINSN_opt_ltlt,
    YARVINSN_opt_aref,
    YARVINSN_opt_aset,
    YARVINSN_opt_aset_with,
    YARVINSN_opt_aref_with,
    YARVINSN_opt_length,
    YARVINSN_opt_size,
    YARVINSN_opt_empty_p,
    YARVINSN_opt_succ,
    YARVINSN_opt_not,
    YARVINSN_opt_regexpmatch1,
    YARVINSN_opt_regexpmatch2,
    YARVINSN_opt_call_c_function,
    YARVINSN_bitblt,
    YARVINSN_answer,
    YARVINSN_getlocal_OP__WC__0,
    YARVINSN_getlocal_OP__WC__1,
    YARVINSN_setlocal_OP__WC__0,
    YARVINSN_setlocal_OP__WC__1,
    YARVINSN_putobject_OP_INT2FIX_O_0_C_,
    YARVINSN_putobject_OP_INT2FIX_O_1_C_,
    YARVINSN_trace_nop,
    YARVINSN_trace_getlocal,
    YARVINSN_trace_setlocal,
    YARVINSN_trace_getblockparam,
    YARVINSN_trace_setblockparam,
    YARVINSN_trace_getspecial,
    YARVINSN_trace_setspecial,
    YARVINSN_trace_getinstancevariable,
    YARVINSN_trace_setinstancevariable,
    YARVINSN_trace_getclassvariable,
    YARVINSN_trace_setclassvariable,
    YARVINSN_trace_getconstant,
    YARVINSN_trace_setconstant,
    YARVINSN_trace_getglobal,
    YARVINSN_trace_setglobal,
    YARVINSN_trace_putnil,
    YARVINSN_trace_putself,
    YARVINSN_trace_putobject,
    YARVINSN_trace_putspecialobject,
    YARVINSN_trace_putiseq,
    YARVINSN_trace_putstring,
    YARVINSN_trace_concatstrings,
    YARVINSN_trace_tostring,
    YARVINSN_trace_freezestring,
    YARVINSN_trace_toregexp,
    YARVINSN_trace_intern,
    YARVINSN_trace_newarray,
    YARVINSN_trace_duparray,
    YARVINSN_trace_expandarray,
    YARVINSN_trace_concatarray,
    YARVINSN_trace_splatarray,
    YARVINSN_trace_newhash,
    YARVINSN_trace_newrange,
    YARVINSN_trace_pop,
    YARVINSN_trace_dup,
    YARVINSN_trace_dupn,
    YARVINSN_trace_swap,
    YARVINSN_trace_reverse,
    YARVINSN_trace_reput,
    YARVINSN_trace_topn,
    YARVINSN_trace_setn,
    YARVINSN_trace_adjuststack,
    YARVINSN_trace_defined,
    YARVINSN_trace_checkmatch,
    YARVINSN_trace_checkkeyword,
    YARVINSN_trace_tracecoverage,
    YARVINSN_trace_defineclass,
    YARVINSN_trace_send,
    YARVINSN_trace_opt_str_freeze,
    YARVINSN_trace_opt_str_uminus,
    YARVINSN_trace_opt_newarray_max,
    YARVINSN_trace_opt_newarray_min,
    YARVINSN_trace_opt_send_without_block,
    YARVINSN_trace_invokesuper,
    YARVINSN_trace_invokeblock,
    YARVINSN_trace_leave,
    YARVINSN_trace_throw,
    YARVINSN_trace_jump,
    YARVINSN_trace_branchif,
    YARVINSN_trace_branchunless,
    YARVINSN_trace_branchnil,
    YARVINSN_trace_branchiftype,
    YARVINSN_trace_getinlinecache,
    YARVINSN_trace_setinlinecache,
    YARVINSN_trace_once,
    YARVINSN_trace_opt_case_dispatch,
    YARVINSN_trace_opt_plus,
    YARVINSN_trace_opt_minus,
    YARVINSN_trace_opt_mult,
    YARVINSN_trace_opt_div,
    YARVINSN_trace_opt_mod,
    YARVINSN_trace_opt_eq,
    YARVINSN_trace_opt_neq,
    YARVINSN_trace_opt_lt,
    YARVINSN_trace_opt_le,
    YARVINSN_trace_opt_gt,
    YARVINSN_trace_opt_ge,
    YARVINSN_trace_opt_ltlt,
    YARVINSN_trace_opt_aref,
    YARVINSN_trace_opt_aset,
    YARVINSN_trace_opt_aset_with,
    YARVINSN_trace_opt_aref_with,
    YARVINSN_trace_opt_length,
    YARVINSN_trace_opt_size,
    YARVINSN_trace_opt_empty_p,
    YARVINSN_trace_opt_succ,
    YARVINSN_trace_opt_not,
    YARVINSN_trace_opt_regexpmatch1,
    YARVINSN_trace_opt_regexpmatch2,
    YARVINSN_trace_opt_call_c_function,
    YARVINSN_trace_bitblt,
    YARVINSN_trace_answer,
    YARVINSN_trace_getlocal_OP__WC__0,
    YARVINSN_trace_getlocal_OP__WC__1,
    YARVINSN_trace_setlocal_OP__WC__0,
    YARVINSN_trace_setlocal_OP__WC__1,
    YARVINSN_trace_putobject_OP_INT2FIX_O_0_C_,
    YARVINSN_trace_putobject_OP_INT2FIX_O_1_C_,
    VM_INSTRUCTION_SIZE
};
static const unsigned short insn_name_info_offset[] = {
    0,
    4,
    13,
    22,
    36,
    50,
    61,
    72,
    92,
    112,
    129,
    146,
    158,
    170,
    180,
    190,
    197,
    205,
    215,
    232,
    240,
    250,
    264,
    273,
    286,
    295,
    302,
    311,
    320,
    332,
    344,
    355,
    363,
    372,
    376,
    380,
    385,
    390,
    398,
    404,
    409,
    414,
    426,
    434,
    445,
    458,
    472,
    484,
    489,
    504,
    519,
    536,
    553,
    576,
    588,
    600,
    606,
    612,
    617,
    626,
    639,
    649,
    662,
    677,
    692,
    697,
    715,
    724,
    734,
    743,
    751,
    759,
    766,
    774,
    781,
    788,
    795,
    802,
    811,
    820,
    829,
    843,
    857,
    868,
    877,
    889,
    898,
    906,
    923,
    940,
    960,
    967,
    974,
    993,
    1012,
    1031,
    1050,
    1078,
    1106,
    1116,
    1131,
    1146,
    1166,
    1186,
    1203,
    1220,
    1246,
    1272,
    1295,
    1318,
    1336,
    1354,
    1370,
    1386,
    1399,
    1413,
    1429,
    1452,
    1466,
    1482,
    1502,
    1517,
    1536,
    1551,
    1564,
    1579,
    1594,
    1612,
    1630,
    1647,
    1661,
    1676,
    1686,
    1696,
    1707,
    1718,
    1732,
    1744,
    1755,
    1766,
    1784,
    1798,
    1815,
    1834,
    1854,
    1872,
    1883,
    1904,
    1925,
    1948,
    1971,
    2000,
    2018,
    2036,
    2048,
    2060,
    2071,
    2086,
    2105,
    2121,
    2140,
    2161,
    2182,
    2193,
    2217,
    2232,
    2248,
    2263,
    2277,
    2291,
    2304,
    2318,
    2331,
    2344,
    2357,
    2370,
    2385,
    2400,
    2415,
    2435,
    2455,
    2472,
    2487,
    2505,
    2520,
    2534,
    2557,
    2580,
    2606,
    2619,
    2632,
    2657,
    2682,
    2707,
    2732,
    2766,
};

extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(insn_name_info_offset) / sizeof((insn_name_info_offset)[0]))) == VM_INSTRUCTION_SIZE) ? 2 : -1; })];

static const char insn_name_info_base[2800] = "nop\0getlocal\0setlocal\0getblockparam\0setblockparam\0getspecial\0setspecial\0getinstancevariable\0setinstancevariable\0getclassvariable\0setclassvariable\0getconstant\0setconstant\0getglobal\0setglobal\0putnil\0putself\0putobject\0putspecialobject\0putiseq\0putstring\0concatstrings\0tostring\0freezestring\0toregexp\0intern\0newarray\0duparray\0expandarray\0concatarray\0splatarray\0newhash\0newrange\0pop\0dup\0dupn\0swap\0reverse\0reput\0topn\0setn\0adjuststack\0defined\0checkmatch\0checkkeyword\0tracecoverage\0defineclass\0send\0opt_str_freeze\0opt_str_uminus\0opt_newarray_max\0opt_newarray_min\0opt_send_without_block\0invokesuper\0invokeblock\0leave\0throw\0jump\0branchif\0branchunless\0branchnil\0branchiftype\0getinlinecache\0setinlinecache\0once\0opt_case_dispatch\0opt_plus\0opt_minus\0opt_mult\0opt_div\0opt_mod\0opt_eq\0opt_neq\0opt_lt\0opt_le\0opt_gt\0opt_ge\0opt_ltlt\0opt_aref\0opt_aset\0opt_aset_with\0opt_aref_with\0opt_length\0opt_size\0opt_empty_p\0opt_succ\0opt_not\0opt_regexpmatch1\0opt_regexpmatch2\0opt_call_c_function\0bitblt\0answer\0getlocal_OP__WC__0\0getlocal_OP__WC__1\0setlocal_OP__WC__0\0setlocal_OP__WC__1\0putobject_OP_INT2FIX_O_0_C_\0putobject_OP_INT2FIX_O_1_C_\0trace_nop\0trace_getlocal\0trace_setlocal\0trace_getblockparam\0trace_setblockparam\0trace_getspecial\0trace_setspecial\0trace_getinstancevariable\0trace_setinstancevariable\0trace_getclassvariable\0trace_setclassvariable\0trace_getconstant\0trace_setconstant\0trace_getglobal\0trace_setglobal\0trace_putnil\0trace_putself\0trace_putobject\0trace_putspecialobject\0trace_putiseq\0trace_putstring\0trace_concatstrings\0trace_tostring\0trace_freezestring\0trace_toregexp\0trace_intern\0trace_newarray\0trace_duparray\0trace_expandarray\0trace_concatarray\0trace_splatarray\0trace_newhash\0trace_newrange\0trace_pop\0trace_dup\0trace_dupn\0trace_swap\0trace_reverse\0trace_reput\0trace_topn\0trace_setn\0trace_adjuststack\0trace_defined\0trace_checkmatch\0trace_checkkeyword\0trace_tracecoverage\0trace_defineclass\0trace_send\0trace_opt_str_freeze\0trace_opt_str_uminus\0trace_opt_newarray_max\0trace_opt_newarray_min\0trace_opt_send_without_block\0trace_invokesuper\0trace_invokeblock\0trace_leave\0trace_throw\0trace_jump\0trace_branchif\0trace_branchunless\0trace_branchnil\0trace_branchiftype\0trace_getinlinecache\0trace_setinlinecache\0trace_once\0trace_opt_case_dispatch\0trace_opt_plus\0trace_opt_minus\0trace_opt_mult\0trace_opt_div\0trace_opt_mod\0trace_opt_eq\0trace_opt_neq\0trace_opt_lt\0trace_opt_le\0trace_opt_gt\0trace_opt_ge\0trace_opt_ltlt\0trace_opt_aref\0trace_opt_aset\0trace_opt_aset_with\0trace_opt_aref_with\0trace_opt_length\0trace_opt_size\0trace_opt_empty_p\0trace_opt_succ\0trace_opt_not\0trace_opt_regexpmatch1\0trace_opt_regexpmatch2\0trace_opt_call_c_function\0trace_bitblt\0trace_answer\0trace_getlocal_OP__WC__0\0trace_getlocal_OP__WC__1\0trace_setlocal_OP__WC__0\0trace_setlocal_OP__WC__1\0trace_putobject_OP_INT2FIX_O_0_C_\0trace_putobject_OP_INT2FIX_O_1_C_\0";



static const char insn_operand_info[][8] = {
    "\1",
    "\3LN",
    "\3LN",
    "\3LN",
    "\3LN",
    "\3NN",
    "\2N",
    "\3IK",
    "\3IK",
    "\2I",
    "\2I",
    "\2I",
    "\2I",
    "\2G",
    "\2G",
    "\1",
    "\1",
    "\2V",
    "\2N",
    "\2S",
    "\2V",
    "\2N",
    "\1",
    "\2V",
    "\3NN",
    "\1",
    "\2N",
    "\2V",
    "\3NN",
    "\1",
    "\2V",
    "\2N",
    "\2N",
    "\1",
    "\1",
    "\2N",
    "\1",
    "\2N",
    "\1",
    "\2N",
    "\2N",
    "\2N",
    "\4NVV",
    "\2N",
    "\3LL",
    "\3NV",
    "\4ISN",
    "\4CES",
    "\2V",
    "\2V",
    "\2N",
    "\2N",
    "\3CE",
    "\4CES",
    "\2C",
    "\1",
    "\2N",
    "\2O",
    "\2O",
    "\2O",
    "\2O",
    "\3NO",
    "\3OK",
    "\2K",
    "\3SK",
    "\3HO",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\5CECE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\4CEV",
    "\4CEV",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\2V",
    "\3CE",
    "\2F",
    "\1",
    "\1",
    "\2L",
    "\2L",
    "\2L",
    "\2L",
    "\1",
    "\1",
    "\1",
    "\3LN",
    "\3LN",
    "\3LN",
    "\3LN",
    "\3NN",
    "\2N",
    "\3IK",
    "\3IK",
    "\2I",
    "\2I",
    "\2I",
    "\2I",
    "\2G",
    "\2G",
    "\1",
    "\1",
    "\2V",
    "\2N",
    "\2S",
    "\2V",
    "\2N",
    "\1",
    "\2V",
    "\3NN",
    "\1",
    "\2N",
    "\2V",
    "\3NN",
    "\1",
    "\2V",
    "\2N",
    "\2N",
    "\1",
    "\1",
    "\2N",
    "\1",
    "\2N",
    "\1",
    "\2N",
    "\2N",
    "\2N",
    "\4NVV",
    "\2N",
    "\3LL",
    "\3NV",
    "\4ISN",
    "\4CES",
    "\2V",
    "\2V",
    "\2N",
    "\2N",
    "\3CE",
    "\4CES",
    "\2C",
    "\1",
    "\2N",
    "\2O",
    "\2O",
    "\2O",
    "\2O",
    "\3NO",
    "\3OK",
    "\2K",
    "\3SK",
    "\3HO",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\5CECE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\4CEV",
    "\4CEV",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\3CE",
    "\2V",
    "\3CE",
    "\2F",
    "\1",
    "\1",
    "\2L",
    "\2L",
    "\2L",
    "\2L",
    "\1",
    "\1",
};

extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(insn_operand_info) / sizeof((insn_operand_info)[0]))) == VM_INSTRUCTION_SIZE) ? 2 : -1; })];
static int
insn_stack_increase(int depth, int insn, VALUE *opes)
{
    switch (insn) {
      case YARVINSN_nop: {
 return depth + 0;
      }
      case YARVINSN_getlocal: {
 return depth + 1;
      }
      case YARVINSN_setlocal: {
 return depth + -1;
      }
      case YARVINSN_getblockparam: {
 return depth + 1;
      }
      case YARVINSN_setblockparam: {
 return depth + -1;
      }
      case YARVINSN_getspecial: {
 return depth + 1;
      }
      case YARVINSN_setspecial: {
 return depth + -1;
      }
      case YARVINSN_getinstancevariable: {
 return depth + 1;
      }
      case YARVINSN_setinstancevariable: {
 return depth + -1;
      }
      case YARVINSN_getclassvariable: {
 return depth + 1;
      }
      case YARVINSN_setclassvariable: {
 return depth + -1;
      }
      case YARVINSN_getconstant: {
 return depth + 0;
      }
      case YARVINSN_setconstant: {
 return depth + -2;
      }
      case YARVINSN_getglobal: {
 return depth + 1;
      }
      case YARVINSN_setglobal: {
 return depth + -1;
      }
      case YARVINSN_putnil: {
 return depth + 1;
      }
      case YARVINSN_putself: {
 return depth + 1;
      }
      case YARVINSN_putobject: {
 return depth + 1;
      }
      case YARVINSN_putspecialobject: {
 return depth + 1;
      }
      case YARVINSN_putiseq: {
 return depth + 1;
      }
      case YARVINSN_putstring: {
 return depth + 1;
      }
      case YARVINSN_concatstrings: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_tostring: {
 return depth + -1;
      }
      case YARVINSN_freezestring: {
 return depth + 0;
      }
      case YARVINSN_toregexp: {
 int inc = 0;
        int cnt = ((int)rb_fix2int((VALUE)(opes[1])));
        inc += 1 - cnt;;
        return depth + inc;
      }
      case YARVINSN_intern: {
 return depth + 0;
      }
      case YARVINSN_newarray: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_duparray: {
 return depth + 1;
      }
      case YARVINSN_expandarray: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        int flag = ((int)rb_fix2int((VALUE)(opes[1])));
        inc += num - 1 + (flag & 1 ? 1 : 0);;
        return depth + inc;
      }
      case YARVINSN_concatarray: {
 return depth + -1;
      }
      case YARVINSN_splatarray: {
 return depth + 0;
      }
      case YARVINSN_newhash: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_newrange: {
 return depth + -1;
      }
      case YARVINSN_pop: {
 return depth + -1;
      }
      case YARVINSN_dup: {
 return depth + 1;
      }
      case YARVINSN_dupn: {
 int inc = 0;
        int n = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += n;;
        return depth + inc;
      }
      case YARVINSN_swap: {
 return depth + 0;
      }
      case YARVINSN_reverse: {
 int inc = 0;
        inc += 0;;
        return depth + inc;
      }
      case YARVINSN_reput: {
 int inc = 0;
        inc += 0;;
        return depth + inc;
      }
      case YARVINSN_topn: {
 int inc = 0;
        inc += 1;;
        return depth + inc;
      }
      case YARVINSN_setn: {
 int inc = 0;
        inc += 0;
        return depth + inc;
      }
      case YARVINSN_adjuststack: {
 int inc = 0;
        int n = ((int)rb_fix2int((VALUE)(opes[0])));
        inc -= n;
        return depth + inc;
      }
      case YARVINSN_defined: {
 return depth + 0;
      }
      case YARVINSN_checkmatch: {
 return depth + -1;
      }
      case YARVINSN_checkkeyword: {
 return depth + 1;
      }
      case YARVINSN_tracecoverage: {
 return depth + 0;
      }
      case YARVINSN_defineclass: {
 return depth + -1;
      }
      case YARVINSN_send: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += - (int)(ci->orig_argc + ((ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) ? 1 : 0));;
        return depth + inc;
      }
      case YARVINSN_opt_str_freeze: {
 return depth + 1;
      }
      case YARVINSN_opt_str_uminus: {
 return depth + 1;
      }
      case YARVINSN_opt_newarray_max: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_opt_newarray_min: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_opt_send_without_block: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += -ci->orig_argc;;
        return depth + inc;
      }
      case YARVINSN_invokesuper: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += - (int)(ci->orig_argc + ((ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) ? 1 : 0));;
        return depth + inc;
      }
      case YARVINSN_invokeblock: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += 1 - ci->orig_argc;;
        return depth + inc;
      }
      case YARVINSN_leave: {
 return depth + 0;
      }
      case YARVINSN_throw: {
 return depth + 0;
      }
      case YARVINSN_jump: {
 return depth + 0;
      }
      case YARVINSN_branchif: {
 return depth + -1;
      }
      case YARVINSN_branchunless: {
 return depth + -1;
      }
      case YARVINSN_branchnil: {
 return depth + -1;
      }
      case YARVINSN_branchiftype: {
 return depth + -1;
      }
      case YARVINSN_getinlinecache: {
 return depth + 1;
      }
      case YARVINSN_setinlinecache: {
 return depth + 0;
      }
      case YARVINSN_once: {
 return depth + 1;
      }
      case YARVINSN_opt_case_dispatch: {
 int inc = 0;
        inc += -1;;
        return depth + inc;
      }
      case YARVINSN_opt_plus: {
 return depth + -1;
      }
      case YARVINSN_opt_minus: {
 return depth + -1;
      }
      case YARVINSN_opt_mult: {
 return depth + -1;
      }
      case YARVINSN_opt_div: {
 return depth + -1;
      }
      case YARVINSN_opt_mod: {
 return depth + -1;
      }
      case YARVINSN_opt_eq: {
 return depth + -1;
      }
      case YARVINSN_opt_neq: {
 return depth + -1;
      }
      case YARVINSN_opt_lt: {
 return depth + -1;
      }
      case YARVINSN_opt_le: {
 return depth + -1;
      }
      case YARVINSN_opt_gt: {
 return depth + -1;
      }
      case YARVINSN_opt_ge: {
 return depth + -1;
      }
      case YARVINSN_opt_ltlt: {
 return depth + -1;
      }
      case YARVINSN_opt_aref: {
 return depth + -1;
      }
      case YARVINSN_opt_aset: {
 return depth + -2;
      }
      case YARVINSN_opt_aset_with: {
 return depth + -1;
      }
      case YARVINSN_opt_aref_with: {
 return depth + 0;
      }
      case YARVINSN_opt_length: {
 return depth + 0;
      }
      case YARVINSN_opt_size: {
 return depth + 0;
      }
      case YARVINSN_opt_empty_p: {
 return depth + 0;
      }
      case YARVINSN_opt_succ: {
 return depth + 0;
      }
      case YARVINSN_opt_not: {
 return depth + 0;
      }
      case YARVINSN_opt_regexpmatch1: {
 return depth + 0;
      }
      case YARVINSN_opt_regexpmatch2: {
 return depth + -1;
      }
      case YARVINSN_opt_call_c_function: {
 return depth + 0;
      }
      case YARVINSN_bitblt: {
 return depth + 1;
      }
      case YARVINSN_answer: {
 return depth + 1;
      }
      case YARVINSN_getlocal_OP__WC__0: {
 return depth + 1;
      }
      case YARVINSN_getlocal_OP__WC__1: {
 return depth + 1;
      }
      case YARVINSN_setlocal_OP__WC__0: {
 return depth + -1;
      }
      case YARVINSN_setlocal_OP__WC__1: {
 return depth + -1;
      }
      case YARVINSN_putobject_OP_INT2FIX_O_0_C_: {
 return depth + 1;
      }
      case YARVINSN_putobject_OP_INT2FIX_O_1_C_: {
 return depth + 1;
      }
      case YARVINSN_trace_nop: {
 return depth + 0;
      }
      case YARVINSN_trace_getlocal: {
 return depth + 1;
      }
      case YARVINSN_trace_setlocal: {
 return depth + -1;
      }
      case YARVINSN_trace_getblockparam: {
 return depth + 1;
      }
      case YARVINSN_trace_setblockparam: {
 return depth + -1;
      }
      case YARVINSN_trace_getspecial: {
 return depth + 1;
      }
      case YARVINSN_trace_setspecial: {
 return depth + -1;
      }
      case YARVINSN_trace_getinstancevariable: {
 return depth + 1;
      }
      case YARVINSN_trace_setinstancevariable: {
 return depth + -1;
      }
      case YARVINSN_trace_getclassvariable: {
 return depth + 1;
      }
      case YARVINSN_trace_setclassvariable: {
 return depth + -1;
      }
      case YARVINSN_trace_getconstant: {
 return depth + 0;
      }
      case YARVINSN_trace_setconstant: {
 return depth + -2;
      }
      case YARVINSN_trace_getglobal: {
 return depth + 1;
      }
      case YARVINSN_trace_setglobal: {
 return depth + -1;
      }
      case YARVINSN_trace_putnil: {
 return depth + 1;
      }
      case YARVINSN_trace_putself: {
 return depth + 1;
      }
      case YARVINSN_trace_putobject: {
 return depth + 1;
      }
      case YARVINSN_trace_putspecialobject: {
 return depth + 1;
      }
      case YARVINSN_trace_putiseq: {
 return depth + 1;
      }
      case YARVINSN_trace_putstring: {
 return depth + 1;
      }
      case YARVINSN_trace_concatstrings: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_trace_tostring: {
 return depth + -1;
      }
      case YARVINSN_trace_freezestring: {
 return depth + 0;
      }
      case YARVINSN_trace_toregexp: {
 int inc = 0;
        int cnt = ((int)rb_fix2int((VALUE)(opes[1])));
        inc += 1 - cnt;;
        return depth + inc;
      }
      case YARVINSN_trace_intern: {
 return depth + 0;
      }
      case YARVINSN_trace_newarray: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_trace_duparray: {
 return depth + 1;
      }
      case YARVINSN_trace_expandarray: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        int flag = ((int)rb_fix2int((VALUE)(opes[1])));
        inc += num - 1 + (flag & 1 ? 1 : 0);;
        return depth + inc;
      }
      case YARVINSN_trace_concatarray: {
 return depth + -1;
      }
      case YARVINSN_trace_splatarray: {
 return depth + 0;
      }
      case YARVINSN_trace_newhash: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_trace_newrange: {
 return depth + -1;
      }
      case YARVINSN_trace_pop: {
 return depth + -1;
      }
      case YARVINSN_trace_dup: {
 return depth + 1;
      }
      case YARVINSN_trace_dupn: {
 int inc = 0;
        int n = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += n;;
        return depth + inc;
      }
      case YARVINSN_trace_swap: {
 return depth + 0;
      }
      case YARVINSN_trace_reverse: {
 int inc = 0;
        inc += 0;;
        return depth + inc;
      }
      case YARVINSN_trace_reput: {
 int inc = 0;
        inc += 0;;
        return depth + inc;
      }
      case YARVINSN_trace_topn: {
 int inc = 0;
        inc += 1;;
        return depth + inc;
      }
      case YARVINSN_trace_setn: {
 int inc = 0;
        inc += 0;
        return depth + inc;
      }
      case YARVINSN_trace_adjuststack: {
 int inc = 0;
        int n = ((int)rb_fix2int((VALUE)(opes[0])));
        inc -= n;
        return depth + inc;
      }
      case YARVINSN_trace_defined: {
 return depth + 0;
      }
      case YARVINSN_trace_checkmatch: {
 return depth + -1;
      }
      case YARVINSN_trace_checkkeyword: {
 return depth + 1;
      }
      case YARVINSN_trace_tracecoverage: {
 return depth + 0;
      }
      case YARVINSN_trace_defineclass: {
 return depth + -1;
      }
      case YARVINSN_trace_send: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += - (int)(ci->orig_argc + ((ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) ? 1 : 0));;
        return depth + inc;
      }
      case YARVINSN_trace_opt_str_freeze: {
 return depth + 1;
      }
      case YARVINSN_trace_opt_str_uminus: {
 return depth + 1;
      }
      case YARVINSN_trace_opt_newarray_max: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_trace_opt_newarray_min: {
 int inc = 0;
        int num = ((int)rb_fix2int((VALUE)(opes[0])));
        inc += 1 - num;;
        return depth + inc;
      }
      case YARVINSN_trace_opt_send_without_block: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += -ci->orig_argc;;
        return depth + inc;
      }
      case YARVINSN_trace_invokesuper: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += - (int)(ci->orig_argc + ((ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) ? 1 : 0));;
        return depth + inc;
      }
      case YARVINSN_trace_invokeblock: {
 int inc = 0;
        CALL_INFO ci = (CALL_INFO)(opes[0]);
        inc += 1 - ci->orig_argc;;
        return depth + inc;
      }
      case YARVINSN_trace_leave: {
 return depth + 0;
      }
      case YARVINSN_trace_throw: {
 return depth + 0;
      }
      case YARVINSN_trace_jump: {
 return depth + 0;
      }
      case YARVINSN_trace_branchif: {
 return depth + -1;
      }
      case YARVINSN_trace_branchunless: {
 return depth + -1;
      }
      case YARVINSN_trace_branchnil: {
 return depth + -1;
      }
      case YARVINSN_trace_branchiftype: {
 return depth + -1;
      }
      case YARVINSN_trace_getinlinecache: {
 return depth + 1;
      }
      case YARVINSN_trace_setinlinecache: {
 return depth + 0;
      }
      case YARVINSN_trace_once: {
 return depth + 1;
      }
      case YARVINSN_trace_opt_case_dispatch: {
 int inc = 0;
        inc += -1;;
        return depth + inc;
      }
      case YARVINSN_trace_opt_plus: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_minus: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_mult: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_div: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_mod: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_eq: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_neq: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_lt: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_le: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_gt: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_ge: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_ltlt: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_aref: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_aset: {
 return depth + -2;
      }
      case YARVINSN_trace_opt_aset_with: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_aref_with: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_length: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_size: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_empty_p: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_succ: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_not: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_regexpmatch1: {
 return depth + 0;
      }
      case YARVINSN_trace_opt_regexpmatch2: {
 return depth + -1;
      }
      case YARVINSN_trace_opt_call_c_function: {
 return depth + 0;
      }
      case YARVINSN_trace_bitblt: {
 return depth + 1;
      }
      case YARVINSN_trace_answer: {
 return depth + 1;
      }
      case YARVINSN_trace_getlocal_OP__WC__0: {
 return depth + 1;
      }
      case YARVINSN_trace_getlocal_OP__WC__1: {
 return depth + 1;
      }
      case YARVINSN_trace_setlocal_OP__WC__0: {
 return depth + -1;
      }
      case YARVINSN_trace_setlocal_OP__WC__1: {
 return depth + -1;
      }
      case YARVINSN_trace_putobject_OP_INT2FIX_O_0_C_: {
 return depth + 1;
      }
      case YARVINSN_trace_putobject_OP_INT2FIX_O_1_C_: {
 return depth + 1;
      }
      default:
 rb_bug("insn_sp_increase: unreachable");
    }
    return 0;
}




static int
insn_len(VALUE insn)
{
    return (unsigned char)insn_operand_info[(int)insn][0];
}

static const char *
insn_name(VALUE insn)
{
    return insn_name_info_base+insn_name_info_offset[(int)insn];
}

static const char *
insn_op_types(VALUE insn)
{
    return insn_operand_info[(int)insn]+1;
}

static int
insn_op_type(VALUE insn, long pos)
{
    int len = insn_len(insn) - 1;
    if (pos < len) {
 return insn_operand_info[(int)insn][pos+1];
    }
    else{
 return 0;
    }
}




struct rb_id_table;


enum rb_id_table_iterator_result {
    ID_TABLE_CONTINUE = ST_CONTINUE,
    ID_TABLE_STOP = ST_STOP,
    ID_TABLE_DELETE = ST_DELETE,
    ID_TABLE_ITERATOR_RESULT_END
};

struct rb_id_table *rb_id_table_create(size_t size);
void rb_id_table_free(struct rb_id_table *tbl);
void rb_id_table_clear(struct rb_id_table *tbl);

size_t rb_id_table_size(const struct rb_id_table *tbl);
size_t rb_id_table_memsize(const struct rb_id_table *tbl);

int rb_id_table_insert(struct rb_id_table *tbl, ID id, VALUE val);
int rb_id_table_lookup(struct rb_id_table *tbl, ID id, VALUE *valp);
int rb_id_table_delete(struct rb_id_table *tbl, ID id);

typedef enum rb_id_table_iterator_result rb_id_table_foreach_func_t(ID id, VALUE val, void *data);
typedef enum rb_id_table_iterator_result rb_id_table_foreach_values_func_t(VALUE val, void *data);
void rb_id_table_foreach(struct rb_id_table *tbl, rb_id_table_foreach_func_t *func, void *data);
void rb_id_table_foreach_values(struct rb_id_table *tbl, rb_id_table_foreach_values_func_t *func, void *data);
const char *rb_obj_info(VALUE obj);
const char *rb_raw_obj_info(char *buff, const int buff_size, VALUE obj);
void rb_obj_info_dump(VALUE obj);

struct rb_thread_struct;



size_t rb_objspace_data_type_memsize(VALUE obj);
void rb_objspace_reachable_objects_from(VALUE obj, void (func)(VALUE, void *), void *data);
void rb_objspace_reachable_objects_from_root(void (func)(const char *category, VALUE, void *), void *data);
int rb_objspace_markable_object_p(VALUE obj);
int rb_objspace_internal_object_p(VALUE obj);
int rb_objspace_marked_object_p(VALUE obj);
int rb_objspace_garbage_object_p(VALUE obj);

void rb_objspace_each_objects(
    int (*callback)(void *start, void *end, size_t stride, void *data),
    void *data);

void rb_objspace_each_objects_without_setup(
    int (*callback)(void *, void *, size_t, void *),
    void *data);





extern void _dl_mcount_wrapper_check (void *__selfpc) ;
typedef long int Lmid_t;
extern void *dlopen (const char *__file, int __mode) ;



extern int dlclose (void *__handle)  ;



extern void *dlsym (void *restrict __handle,
      const char *restrict __name)  ;



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) ;



extern void *dlvsym (void *restrict __handle,
       const char *restrict __name,
       const char *restrict __version)
      ;





extern char *dlerror (void) ;





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
      ;


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags)  ;




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *restrict __handle,
     int __request, void *restrict __arg)
      ;


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;
typedef struct iseq_link_element {
    enum {
 ISEQ_ELEMENT_LABEL,
 ISEQ_ELEMENT_INSN,
 ISEQ_ELEMENT_ADJUST,
 ISEQ_ELEMENT_TRACE
    } type;
    struct iseq_link_element *next;
    struct iseq_link_element *prev;
} LINK_ELEMENT;

typedef struct iseq_link_anchor {
    LINK_ELEMENT anchor;
    LINK_ELEMENT *last;
} LINK_ANCHOR;

typedef enum {
    LABEL_RESCUE_NONE,
    LABEL_RESCUE_BEG,
    LABEL_RESCUE_END,
    LABEL_RESCUE_TYPE_MAX
} LABEL_RESCUE_TYPE;

typedef struct iseq_label_data {
    LINK_ELEMENT link;
    int label_no;
    int position;
    int sc_state;
    int sp;
    int refcnt;
    unsigned int set: 1;
    unsigned int rescued: 2;
    unsigned int unremovable: 1;
} LABEL;

typedef struct iseq_insn_data {
    LINK_ELEMENT link;
    enum ruby_vminsn_type insn_id;
    int operand_size;
    int sc_state;
    VALUE *operands;
    struct {
 int line_no;
 rb_event_flag_t events;
    } insn_info;
} INSN;

typedef struct iseq_adjust_data {
    LINK_ELEMENT link;
    LABEL *label;
    int line_no;
} ADJUST;

typedef struct iseq_trace_data {
    LINK_ELEMENT link;
    rb_event_flag_t event;
} TRACE;

struct ensure_range {
    LABEL *begin;
    LABEL *end;
    struct ensure_range *next;
};

struct iseq_compile_data_ensure_node_stack {
    const NODE *ensure_node;
    struct iseq_compile_data_ensure_node_stack *prev;
    struct ensure_range *erange;
};
static void iseq_add_getlocal(rb_iseq_t *iseq, LINK_ANCHOR *const seq, int line, int idx, int level);
static void iseq_add_setlocal(rb_iseq_t *iseq, LINK_ANCHOR *const seq, int line, int idx, int level);
static void
append_compile_error(rb_iseq_t *iseq, int line, const char *fmt, ...)
{
    VALUE err_info = ISEQ_COMPILE_DATA(iseq)->err_info;
    VALUE file = rb_iseq_path(iseq);
    VALUE err = err_info == ((VALUE)RUBY_Qtrue) ? ((VALUE)RUBY_Qfalse) : err_info;
    va_list args;

    __builtin_va_start(args, fmt);
    err = rb_syntax_error_append(err, file, line, -1, ((void*)0), fmt, args);
    __builtin_va_end(args);
    if (!((VALUE)(err_info) != ((VALUE)RUBY_Qnil))) {
 rb_obj_write((VALUE)(iseq), (VALUE *)(&ISEQ_COMPILE_DATA(iseq)->err_info), (VALUE)(err), "compile.c", 379);
 rb_set_errinfo(err);
    }
    else if (!err_info) {
 rb_obj_write((VALUE)(iseq), (VALUE *)(&ISEQ_COMPILE_DATA(iseq)->err_info), (VALUE)(((VALUE)RUBY_Qtrue)), "compile.c", 383);
    }
    if (0) rb_exc_fatal(err);
}
static inline VALUE
freeze_hide_obj(VALUE obj)
{
    rb_obj_freeze_inline((VALUE)obj);
    memset(&(((struct RBasicRaw *)((VALUE)(obj)))->klass), 0, sizeof(VALUE));
    return obj;
}


static INSN *
insn_operands_unification(INSN *insnobj)
{


    switch(insnobj->insn_id){
      case YARVINSN_getlocal:
 if (
     insnobj->operands[1] == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_getlocal_OP__WC__0;
     insnobj->operand_size = 1;
     break;
 }
 if (
     insnobj->operands[1] == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_getlocal_OP__WC__1;
     insnobj->operand_size = 1;
     break;
 }
 break;
      case YARVINSN_setlocal:
 if (
     insnobj->operands[1] == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_setlocal_OP__WC__0;
     insnobj->operand_size = 1;
     break;
 }
 if (
     insnobj->operands[1] == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_setlocal_OP__WC__1;
     insnobj->operand_size = 1;
     break;
 }
 break;
      case YARVINSN_putobject:
 if (
     insnobj->operands[0] == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_putobject_OP_INT2FIX_O_0_C_;
     insnobj->operand_size = 0;
     break;
 }
 if (
     insnobj->operands[0] == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG) &&
     1) {
     insnobj->insn_id = YARVINSN_putobject_OP_INT2FIX_O_1_C_;
     insnobj->operand_size = 0;
     break;
 }
 break;

      default:
                 ;
 break;
    }

    return insnobj;
}

int
rb_insn_unified_local_var_level(VALUE insn)
{


    switch (insn) {
      case YARVINSN_getlocal_OP__WC__0:
 return 0;
      case YARVINSN_getlocal_OP__WC__1:
 return 1;
      case YARVINSN_setlocal_OP__WC__0:
 return 0;
      case YARVINSN_setlocal_OP__WC__1:
 return 1;
      case YARVINSN_putobject_OP_INT2FIX_O_0_C_:
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
      case YARVINSN_putobject_OP_INT2FIX_O_1_C_:
 return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);

      default:
                 ;
 break;
    }

    return -1;
}
static void dump_disasm_list_with_cursor(const LINK_ELEMENT *link, const LINK_ELEMENT *curr, const LABEL *dest);
static void dump_disasm_list(const LINK_ELEMENT *elem);

static int insn_data_length(INSN *iobj);
static int calc_sp_depth(int depth, INSN *iobj);

static INSN *new_insn_body(rb_iseq_t *iseq, int line_no, enum ruby_vminsn_type insn_id, int argc, ...);
static LABEL *new_label_body(rb_iseq_t *iseq, long line);
static ADJUST *new_adjust_body(rb_iseq_t *iseq, LABEL *label, int line);
static TRACE *new_trace_body(rb_iseq_t *iseq, rb_event_flag_t event);


static int iseq_compile_each(rb_iseq_t *iseq, LINK_ANCHOR *anchor, const NODE *n, int);
static int iseq_setup(rb_iseq_t *iseq, LINK_ANCHOR *const anchor);
static int iseq_optimize(rb_iseq_t *iseq, LINK_ANCHOR *const anchor);
static int iseq_insns_unification(rb_iseq_t *iseq, LINK_ANCHOR *const anchor);

static int iseq_set_local_table(rb_iseq_t *iseq, const ID *tbl);
static int iseq_set_exception_local_table(rb_iseq_t *iseq);
static int iseq_set_arguments(rb_iseq_t *iseq, LINK_ANCHOR *const anchor, const NODE *const node);

static int iseq_set_sequence_stackcaching(rb_iseq_t *iseq, LINK_ANCHOR *const anchor);
static int iseq_set_sequence(rb_iseq_t *iseq, LINK_ANCHOR *const anchor);
static int iseq_set_exception_table(rb_iseq_t *iseq);
static int iseq_set_optargs_table(rb_iseq_t *iseq);

static int compile_defined_expr(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, VALUE needstr);





static void
verify_list( const char *info, LINK_ANCHOR *const anchor)
{
}







static void
ADD_ELEM( LINK_ANCHOR *const anchor, LINK_ELEMENT *elem)
{
    elem->prev = anchor->last;
    anchor->last->next = elem;
    anchor->last = elem;
    verify_list("add", anchor);
}




static void
APPEND_ELEM( LINK_ANCHOR *const anchor, LINK_ELEMENT *before, LINK_ELEMENT *elem)
{
    elem->prev = before;
    elem->next = before->next;
    elem->next->prev = elem;
    before->next = elem;
    if (before == anchor->last) anchor->last = elem;
    verify_list("add", anchor);
}





static int
iseq_add_mark_object(const rb_iseq_t *iseq, VALUE v)
{
    if (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 rb_iseq_add_mark_object(iseq, v);
    }
    return 1;
}

static int
iseq_add_mark_object_compile_time(const rb_iseq_t *iseq, VALUE v)
{
    if (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 rb_ary_push(ISEQ_COMPILE_DATA(iseq)->mark_ary, v);
    }
    return 1;
}

static inline VALUE
freeze_literal(rb_iseq_t *iseq, VALUE lit)
{
    lit = rb_fstring(lit);
    rb_ary_push(ISEQ_COMPILE_DATA(iseq)->mark_ary, lit);
    return lit;
}

static int
validate_label(st_data_t name, st_data_t label, st_data_t arg)
{
    rb_iseq_t *iseq = (rb_iseq_t *)arg;
    LABEL *lobj = (LABEL *)label;
    if (!lobj->link.next) {
 do {
     append_compile_error(iseq, lobj->position,
     "%li\v: undefined label",
     rb_sym2str((VALUE)name));
 } while (0);
    }
    return ST_CONTINUE;
}

static void
validate_labels(rb_iseq_t *iseq, st_table *labels_table)
{
    st_foreach(labels_table, validate_label, (st_data_t)iseq);
    st_free_table(labels_table);
}

VALUE
rb_iseq_compile_node(rb_iseq_t *iseq, const NODE *node)
{
    LINK_ANCHOR ret[1] = {{{0,},}};
    (ret->last = &ret->anchor);

    if (node == 0) {
 ((iseq_compile_each(iseq, (ret), (node), 0)));
 iseq_set_local_table(iseq, 0);
    }
    else if (imemo_type_p((VALUE)node, imemo_ifunc)) {
 const struct vm_ifunc *ifunc = (struct vm_ifunc *)node;

 (*ifunc->func)(iseq, ret, ifunc->data);
    }

    else if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE) {

 iseq_set_local_table(iseq, node->u1.tbl);
 iseq_set_arguments(iseq, ret, node->u3.node);

 switch (iseq->body->type) {
   case ISEQ_TYPE_BLOCK:
     {
  LABEL *start = ISEQ_COMPILE_DATA(iseq)->start_label = new_label_body(iseq, (0));
  LABEL *end = ISEQ_COMPILE_DATA(iseq)->end_label = new_label_body(iseq, (0));

  start->rescued = LABEL_RESCUE_BEG;
  end->rescued = LABEL_RESCUE_END;

  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0100)));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (((int)rb_fix2int((VALUE)(iseq->body->location.first_lineno)))), YARVINSN_nop, 0));
  ADD_ELEM((ret), (LINK_ELEMENT *) (start));
  if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {;return 0;};
  ADD_ELEM((ret), (LINK_ELEMENT *) (end));
  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0200)));
  ISEQ_COMPILE_DATA(iseq)->last_line = iseq->body->location.code_range.last_loc.lineno;


  do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_REDO), (VALUE)(start) | 1, (VALUE)(end) | 1, (VALUE)(((void*)0)), (VALUE)(start) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((start) ? (((start)->refcnt++), (start)->unremovable=1) : 0); ((end)->refcnt++); ((start)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
  do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_NEXT), (VALUE)(start) | 1, (VALUE)(end) | 1, (VALUE)(((void*)0)), (VALUE)(end) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((start) ? (((start)->refcnt++), (start)->unremovable=1) : 0); ((end)->refcnt++); ((end)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
  break;
     }
   case ISEQ_TYPE_CLASS:
     {
  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0002)));
  if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {;return 0;};
  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0004)));
  ISEQ_COMPILE_DATA(iseq)->last_line = (int)(((long)(node)->flags)>>(8 +7));
  break;
     }
   case ISEQ_TYPE_METHOD:
     {
  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0008)));
  if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {;return 0;};
  ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0010)));
  ISEQ_COMPILE_DATA(iseq)->last_line = (int)(((long)(node)->flags)>>(8 +7));
  break;
     }
   default: {
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {;return 0;};
     break;
   }
 }
    }
    else {
 const char *m;


 switch (iseq->body->type) {
   case ISEQ_TYPE_METHOD: m = "METHOD"; goto invalid_iseq_type;
   case ISEQ_TYPE_CLASS: m = "CLASS"; goto invalid_iseq_type;
   case ISEQ_TYPE_BLOCK: m = "BLOCK"; goto invalid_iseq_type;
   case ISEQ_TYPE_EVAL: m = "EVAL"; goto invalid_iseq_type;
   case ISEQ_TYPE_MAIN: m = "MAIN"; goto invalid_iseq_type;
   case ISEQ_TYPE_TOP: m = "TOP"; goto invalid_iseq_type;

   case ISEQ_TYPE_RESCUE:
     iseq_set_exception_local_table(iseq);
     if (!(((iseq_compile_each(iseq, (ret), (node), 0))))) {;return 0;};
     break;
   case ISEQ_TYPE_ENSURE:
     iseq_set_exception_local_table(iseq);
     if (!(((iseq_compile_each(iseq, (ret), (node), 1))))) {;return 0;};
     break;
   case ISEQ_TYPE_DEFINED_GUARD:
     iseq_set_exception_local_table(iseq);
     if (!(((iseq_compile_each(iseq, (ret), (node), 0))))) {;return 0;};
     break;
   default:
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "unknown scope: %d", iseq->body->type);
     return 0;
   invalid_iseq_type:
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "compile/ISEQ_TYPE_%s should not be reached", m);
     return 0;
 }
    }

    if (iseq->body->type == ISEQ_TYPE_RESCUE || iseq->body->type == ISEQ_TYPE_ENSURE) {
 iseq_add_getlocal(iseq, (ret), (0), ((1)), (0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (0), YARVINSN_throw, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
    }
    else {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (ISEQ_COMPILE_DATA(iseq)->last_line), YARVINSN_leave, 0));
    }
    return iseq_setup(iseq, ret);
}

int
rb_iseq_translate_threaded_code(rb_iseq_t *iseq)
{

    const void * const *table = rb_vm_get_insns_address_table();
    unsigned int i;
    VALUE *encoded = (VALUE *)iseq->body->iseq_encoded;

    for (i = 0; i < iseq->body->iseq_size; ) {
 int insn = (int)iseq->body->iseq_encoded[i];
 int len = insn_len(insn);
 encoded[i] = (VALUE)table[insn];
 i += len;
    }

    return 1;
}


static int
rb_vm_insn_addr2insn(const void *addr)
{
    int insn;
    const void * const *table = rb_vm_get_insns_address_table();

    for (insn = 0; insn < VM_INSTRUCTION_SIZE; insn++) {
 if (table[insn] == addr) {
     return insn;
 }
    }
    rb_bug("rb_vm_insn_addr2insn: invalid insn address: %p", addr);
}


VALUE *
rb_iseq_original_iseq(const rb_iseq_t *iseq)
{
    VALUE *original_code;

    if (ISEQ_ORIGINAL_ISEQ(iseq)) return ISEQ_ORIGINAL_ISEQ(iseq);
    original_code = ISEQ_ORIGINAL_ISEQ_ALLOC(iseq, iseq->body->iseq_size);
    memcpy((original_code), (iseq->body->iseq_encoded), sizeof(VALUE)*(size_t)(iseq->body->iseq_size));


    {
 unsigned int i;

 for (i = 0; i < iseq->body->iseq_size; ) {
     const void *addr = (const void *)original_code[i];
     const int insn = rb_vm_insn_addr2insn(addr);

     original_code[i] = insn;
     i += insn_len(insn);
 }
    }

    return original_code;
}
static void *
compile_data_alloc(rb_iseq_t *iseq, size_t size)
{
    void *ptr = 0;
    struct iseq_compile_data_storage *storage =
 ISEQ_COMPILE_DATA(iseq)->storage_current;



    const size_t padding = 0;


    if (size >= 2147483647 - padding) rb_memerror();
    if (storage->pos + size + padding > storage->size) {
 unsigned int alloc_size = storage->size;

 while (alloc_size < size + 0) {
     if (alloc_size >= 2147483647 / 2) rb_memerror();
     alloc_size *= 2;
 }
 storage->next = (void *)((char*)ruby_xmalloc2((size_t)(alloc_size + (sizeof(struct iseq_compile_data_storage) - 1)),sizeof(char)));

 storage = ISEQ_COMPILE_DATA(iseq)->storage_current = storage->next;
 storage->next = 0;
 storage->pos = 0;
 storage->size = alloc_size;



    }





    ptr = (void *)&storage->buff[storage->pos];
    storage->pos += (int)size;
    return ptr;
}

static INSN *
compile_data_alloc_insn(rb_iseq_t *iseq)
{
    return (INSN *)compile_data_alloc(iseq, sizeof(INSN));
}

static LABEL *
compile_data_alloc_label(rb_iseq_t *iseq)
{
    return (LABEL *)compile_data_alloc(iseq, sizeof(LABEL));
}

static ADJUST *
compile_data_alloc_adjust(rb_iseq_t *iseq)
{
    return (ADJUST *)compile_data_alloc(iseq, sizeof(ADJUST));
}

static TRACE *
compile_data_alloc_trace(rb_iseq_t *iseq)
{
    return (TRACE *)compile_data_alloc(iseq, sizeof(TRACE));
}




static void
ELEM_INSERT_NEXT(LINK_ELEMENT *elem1, LINK_ELEMENT *elem2)
{
    elem2->next = elem1->next;
    elem2->prev = elem1;
    elem1->next = elem2;
    if (elem2->next) {
 elem2->next->prev = elem2;
    }
}




static void
ELEM_INSERT_PREV(LINK_ELEMENT *elem1, LINK_ELEMENT *elem2)
{
    elem2->prev = elem1->prev;
    elem2->next = elem1;
    elem1->prev = elem2;
    if (elem2->prev) {
 elem2->prev->next = elem2;
    }
}




static void
ELEM_REPLACE(LINK_ELEMENT *elem1, LINK_ELEMENT *elem2)
{
    elem2->prev = elem1->prev;
    elem2->next = elem1->next;
    if (elem1->prev) {
 elem1->prev->next = elem2;
    }
    if (elem1->next) {
 elem1->next->prev = elem2;
    }
}

static void
ELEM_REMOVE(LINK_ELEMENT *elem)
{
    elem->prev->next = elem->next;
    if (elem->next) {
 elem->next->prev = elem->prev;
    }
}

static LINK_ELEMENT *
FIRST_ELEMENT(const LINK_ANCHOR *const anchor)
{
    return anchor->anchor.next;
}

static LINK_ELEMENT *
LAST_ELEMENT(LINK_ANCHOR *const anchor)
{
    return anchor->last;
}

static LINK_ELEMENT *
POP_ELEMENT( LINK_ANCHOR *const anchor)
{
    LINK_ELEMENT *elem = anchor->last;
    anchor->last = anchor->last->prev;
    anchor->last->next = 0;
    verify_list("pop", anchor);
    return elem;
}




static LINK_ELEMENT *
ELEM_FIRST_INSN(LINK_ELEMENT *elem)
{
    while (elem) {
 switch (elem->type) {
   case ISEQ_ELEMENT_INSN:
   case ISEQ_ELEMENT_ADJUST:
     return elem;
   default:
     elem = elem->next;
 }
    }
    return ((void*)0);
}

static int
LIST_INSN_SIZE_ONE(const LINK_ANCHOR *const anchor)
{
    LINK_ELEMENT *first_insn = ELEM_FIRST_INSN(FIRST_ELEMENT(anchor));
    if (first_insn != ((void*)0) &&
 ELEM_FIRST_INSN(first_insn->next) == ((void*)0)) {
 return TRUE;
    }
    else {
 return FALSE;
    }
}

static int
LIST_INSN_SIZE_ZERO(const LINK_ANCHOR *const anchor)
{
    if (ELEM_FIRST_INSN(FIRST_ELEMENT(anchor)) == ((void*)0)) {
 return TRUE;
    }
    else {
 return FALSE;
    }
}
static void
APPEND_LIST( LINK_ANCHOR *const anc1, LINK_ANCHOR *const anc2)
{
    if (anc2->anchor.next) {
 anc1->last->next = anc2->anchor.next;
 anc2->anchor.next->prev = anc1->last;
 anc1->last = anc2->last;
    }
    verify_list("append", anc1);
}
static void
INSERT_LIST( LINK_ANCHOR *const anc1, LINK_ANCHOR *const anc2)
{
    if (anc2->anchor.next) {
 LINK_ELEMENT *first = anc1->anchor.next;
 anc1->anchor.next = anc2->anchor.next;
 anc1->anchor.next->prev = &anc1->anchor;
 anc2->last->next = first;
 if (first) {
     first->prev = anc2->last;
 }
 else {
     anc1->last = anc2->last;
 }
    }

    verify_list("append", anc1);
}
static TRACE *
new_trace_body(rb_iseq_t *iseq, rb_event_flag_t event)
{
    TRACE *trace = compile_data_alloc_trace(iseq);

    trace->link.type = ISEQ_ELEMENT_TRACE;
    trace->link.next = ((void*)0);
    trace->event = event;

    return trace;
}

static LABEL *
new_label_body(rb_iseq_t *iseq, long line)
{
    LABEL *labelobj = compile_data_alloc_label(iseq);

    labelobj->link.type = ISEQ_ELEMENT_LABEL;
    labelobj->link.next = 0;

    labelobj->label_no = ISEQ_COMPILE_DATA(iseq)->label_no++;
    labelobj->sc_state = 0;
    labelobj->sp = -1;
    labelobj->refcnt = 0;
    labelobj->set = 0;
    labelobj->rescued = LABEL_RESCUE_NONE;
    labelobj->unremovable = 0;
    return labelobj;
}

static ADJUST *
new_adjust_body(rb_iseq_t *iseq, LABEL *label, int line)
{
    ADJUST *adjust = compile_data_alloc_adjust(iseq);
    adjust->link.type = ISEQ_ELEMENT_ADJUST;
    adjust->link.next = 0;
    adjust->label = label;
    adjust->line_no = line;
    ((label) ? (((label)->refcnt++), (label)->unremovable=1) : 0);
    return adjust;
}

static INSN *
new_insn_core(rb_iseq_t *iseq, int line_no,
       int insn_id, int argc, VALUE *argv)
{
    INSN *iobj = compile_data_alloc_insn(iseq);



    iobj->link.type = ISEQ_ELEMENT_INSN;
    iobj->link.next = 0;
    iobj->insn_id = insn_id;
    iobj->insn_info.line_no = line_no;
    iobj->insn_info.events = 0;
    iobj->operands = argv;
    iobj->operand_size = argc;
    iobj->sc_state = 0;
    return iobj;
}

static INSN *
new_insn_body(rb_iseq_t *iseq, int line_no, enum ruby_vminsn_type insn_id, int argc, ...)
{
    VALUE *operands = 0;
    va_list argv;
    if (argc > 0) {
 int i;
 __builtin_va_start((argv), (argc));
 operands = (VALUE *)compile_data_alloc(iseq, sizeof(VALUE) * argc);
 for (i = 0; i < argc; i++) {
     VALUE v = __builtin_va_arg();
     operands[i] = v;
 }
 __builtin_va_end(argv);
    }
    return new_insn_core(iseq, line_no, insn_id, argc, operands);
}

static struct rb_call_info *
new_callinfo(rb_iseq_t *iseq, ID mid, int argc, unsigned int flag, struct rb_call_info_kw_arg *kw_arg, int has_blockiseq)
{
    size_t size = kw_arg != ((void*)0) ? sizeof(struct rb_call_info_with_kwarg) : sizeof(struct rb_call_info);
    struct rb_call_info *ci = (struct rb_call_info *)compile_data_alloc(iseq, size);
    struct rb_call_info_with_kwarg *ci_kw = (struct rb_call_info_with_kwarg *)ci;

    ci->mid = mid;
    ci->flag = flag;
    ci->orig_argc = argc;

    if (kw_arg) {
 ci->flag |= (0x01 << VM_CALL_KWARG_bit);
 ci_kw->kw_arg = kw_arg;
 ci->orig_argc += kw_arg->keyword_len;
 iseq->body->ci_kw_size++;
    }
    else {
 iseq->body->ci_size++;
    }

    if (!(ci->flag & ((0x01 << VM_CALL_ARGS_SPLAT_bit) | (0x01 << VM_CALL_ARGS_BLOCKARG_bit) | (0x01 << VM_CALL_KW_SPLAT_bit))) &&
 kw_arg == ((void*)0) && !has_blockiseq) {
 ci->flag |= (0x01 << VM_CALL_ARGS_SIMPLE_bit);
    }
    return ci;
}

static INSN *
new_insn_send(rb_iseq_t *iseq, int line_no, ID id, VALUE argc, const rb_iseq_t *blockiseq, VALUE flag, struct rb_call_info_kw_arg *keywords)
{
    VALUE *operands = (VALUE *)compile_data_alloc(iseq, sizeof(VALUE) * 3);
    operands[0] = (VALUE)new_callinfo(iseq, id, ((int)rb_fix2int((VALUE)(argc))), ((int)rb_fix2int((VALUE)(flag))), keywords, blockiseq != ((void*)0));
    operands[1] = ((VALUE)RUBY_Qfalse);
    operands[2] = (VALUE)blockiseq;
    return new_insn_core(iseq, line_no, YARVINSN_send, 3, operands);
}

static rb_iseq_t *
new_child_iseq(rb_iseq_t *iseq, const NODE *const node,
        VALUE name, const rb_iseq_t *parent, enum iseq_type type, int line_no)
{
    rb_iseq_t *ret_iseq;

    if(0)printf("[new_child_iseq]> ---------------------------------------\n");
    ret_iseq = rb_iseq_new_with_opt(node, name,
        rb_iseq_path(iseq), rb_iseq_realpath(iseq),
        (((VALUE)(line_no))<<1 | RUBY_FIXNUM_FLAG), parent, type, ISEQ_COMPILE_DATA(iseq)->option);
    if(0)printf("[new_child_iseq]< ---------------------------------------\n");
    iseq_add_mark_object(iseq, (VALUE)ret_iseq);
    return ret_iseq;
}

static int
iseq_setup(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    if (!(((VALUE)(ISEQ_COMPILE_DATA(iseq)->err_info) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
 return 0;



    if (0 > 5)
 dump_disasm_list(FIRST_ELEMENT(anchor));

    if(0)printf("[compile step 3.1 (iseq_optimize)]\n");
    iseq_optimize(iseq, anchor);

    if (0 > 5)
 dump_disasm_list(FIRST_ELEMENT(anchor));

    if (ISEQ_COMPILE_DATA(iseq)->option->instructions_unification) {
 if(0)printf("[compile step 3.2 (iseq_insns_unification)]\n");
 iseq_insns_unification(iseq, anchor);
 if (0 > 5)
     dump_disasm_list(FIRST_ELEMENT(anchor));
    }

    if (ISEQ_COMPILE_DATA(iseq)->option->stack_caching) {
 if(0)printf("[compile step 3.3 (iseq_set_sequence_stackcaching)]\n");
 iseq_set_sequence_stackcaching(iseq, anchor);
 if (0 > 5)
     dump_disasm_list(FIRST_ELEMENT(anchor));
    }

    if(0)printf("[compile step 4.1 (iseq_set_sequence)]\n");
    if (!iseq_set_sequence(iseq, anchor)) return 0;
    if (0 > 5)
 dump_disasm_list(FIRST_ELEMENT(anchor));

    if(0)printf("[compile step 4.2 (iseq_set_exception_table)]\n");
    if (!iseq_set_exception_table(iseq)) return 0;

    if(0)printf("[compile step 4.3 (set_optargs_table)] \n");
    if (!iseq_set_optargs_table(iseq)) return 0;

    if(0)printf("[compile step 5 (iseq_translate_threaded_code)] \n");
    if (!rb_iseq_translate_threaded_code(iseq)) return 0;

    if (0 > 1) {
 VALUE str = rb_iseq_disasm(iseq);
 printf("%s\n", rb_string_value_cstr(&(str)));
    }
    if(0)printf("[compile step: finish]\n");

    return 1;
}

static int
iseq_set_exception_local_table(rb_iseq_t *iseq)
{



    ID id_dollar_bang;
    ID *ids = (ID *)((ID*)ruby_xmalloc2((size_t)(1),sizeof(ID)));

    do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("#$!")), (long)strlen(("#$!"))); (id_dollar_bang) = rb_intern_id_cache; } while (0);
    iseq->body->local_table_size = 1;
    ids[0] = id_dollar_bang;
    iseq->body->local_table = ids;
    return 1;
}

static int
get_lvar_level(const rb_iseq_t *iseq)
{
    int lev = 0;
    while (iseq != iseq->body->local_iseq) {
 lev++;
 iseq = iseq->body->parent_iseq;
    }
    return lev;
}

static int
get_dyna_var_idx_at_raw(const rb_iseq_t *iseq, ID id)
{
    unsigned int i;

    for (i = 0; i < iseq->body->local_table_size; i++) {
 if (iseq->body->local_table[i] == id) {
     return (int)i;
 }
    }
    return -1;
}

static int
get_local_var_idx(const rb_iseq_t *iseq, ID id)
{
    int idx = get_dyna_var_idx_at_raw(iseq->body->local_iseq, id);

    if (idx < 0) {
 rb_bug("get_local_var_idx: %d", idx);
    }

    return idx;
}

static int
get_dyna_var_idx(const rb_iseq_t *iseq, ID id, int *level, int *ls)
{
    int lv = 0, idx = -1;

    while (iseq) {
 idx = get_dyna_var_idx_at_raw(iseq, id);
 if (idx >= 0) {
     break;
 }
 iseq = iseq->body->parent_iseq;
 lv++;
    }

    if (idx < 0) {
 rb_bug("get_dyna_var_idx: -1");
    }

    *level = lv;
    *ls = iseq->body->local_table_size;
    return idx;
}

static int
iseq_local_block_param_p(const rb_iseq_t *iseq, unsigned int idx, unsigned int level)
{
    while (level > 0) {
 iseq = iseq->body->parent_iseq;
 level--;
    }
    if (iseq->body->local_iseq == iseq &&
 iseq->body->param.flags.has_block &&
 iseq->body->local_table_size - iseq->body->param.block_start == idx) {
 return TRUE;
    }
    else {
 return FALSE;
    }
}

static void
iseq_add_getlocal(rb_iseq_t *iseq, LINK_ANCHOR *const seq, int line, int idx, int level)
{
    if (iseq_local_block_param_p(iseq, idx, level)) {
 ADD_ELEM((seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getblockparam, 2, (VALUE)((((VALUE)((idx) + ( 3) - 1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(level))<<1 | RUBY_FIXNUM_FLAG))));
    }
    else {
 ADD_ELEM((seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getlocal, 2, (VALUE)((((VALUE)((idx) + ( 3) - 1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(level))<<1 | RUBY_FIXNUM_FLAG))));
    }
}

static void
iseq_add_setlocal(rb_iseq_t *iseq, LINK_ANCHOR *const seq, int line, int idx, int level)
{
    if (iseq_local_block_param_p(iseq, idx, level)) {
 ADD_ELEM((seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setblockparam, 2, (VALUE)((((VALUE)((idx) + ( 3) - 1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(level))<<1 | RUBY_FIXNUM_FLAG))));
    }
    else {
 ADD_ELEM((seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setlocal, 2, (VALUE)((((VALUE)((idx) + ( 3) - 1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(level))<<1 | RUBY_FIXNUM_FLAG))));
    }
}



static void
iseq_calc_param_size(rb_iseq_t *iseq)
{
    if (iseq->body->param.flags.has_opt ||
 iseq->body->param.flags.has_post ||
 iseq->body->param.flags.has_rest ||
 iseq->body->param.flags.has_block ||
 iseq->body->param.flags.has_kw ||
 iseq->body->param.flags.has_kwrest) {

 if (iseq->body->param.flags.has_block) {
     iseq->body->param.size = iseq->body->param.block_start + 1;
 }
 else if (iseq->body->param.flags.has_kwrest) {
     iseq->body->param.size = iseq->body->param.keyword->rest_start + 1;
 }
 else if (iseq->body->param.flags.has_kw) {
     iseq->body->param.size = iseq->body->param.keyword->bits_start + 1;
 }
 else if (iseq->body->param.flags.has_post) {
     iseq->body->param.size = iseq->body->param.post_start + iseq->body->param.post_num;
 }
 else if (iseq->body->param.flags.has_rest) {
     iseq->body->param.size = iseq->body->param.rest_start + 1;
 }
 else if (iseq->body->param.flags.has_opt) {
     iseq->body->param.size = iseq->body->param.lead_num + iseq->body->param.opt_num;
 }
 else {
     rb_bug("unreachable");
 }
    }
    else {
 iseq->body->param.size = iseq->body->param.lead_num;
    }
}

static void
iseq_set_arguments_keywords(rb_iseq_t *iseq, LINK_ANCHOR *const optargs,
       const struct rb_args_info *args)
{
    const NODE *node = args->kw_args;
    struct rb_iseq_param_keyword *keyword;
    const VALUE default_values = rb_ary_tmp_new(1);
    const VALUE complex_mark = rb_str_tmp_new(0);
    int kw = 0, rkw = 0, di = 0, i;

    iseq->body->param.flags.has_kw = TRUE;
    iseq->body->param.keyword = keyword = ((struct rb_iseq_param_keyword*)ruby_xcalloc((size_t)(1),sizeof(struct rb_iseq_param_keyword)));
    keyword->bits_start = get_dyna_var_idx_at_raw(iseq, args->kw_rest_arg->u2.id);

    while (node) {
 const NODE *val_node = node->u2.node->u2.node;
 VALUE dv;

 if (val_node == (const NODE *)-1) {
     ++rkw;
 }
 else {
     switch (((int) (((val_node)->flags & (((VALUE)0x7f)<<8))>>8))) {
       case NODE_LIT:
  dv = val_node->u1.value;
  iseq_add_mark_object(iseq, dv);
  break;
       case NODE_NIL:
  dv = ((VALUE)RUBY_Qnil);
  break;
       case NODE_TRUE:
  dv = ((VALUE)RUBY_Qtrue);
  break;
       case NODE_FALSE:
  dv = ((VALUE)RUBY_Qfalse);
  break;
       default:
  ((iseq_compile_each(iseq, (optargs), (node), 1)));
  dv = complex_mark;
     }

     keyword->num = ++di;
     rb_ary_push(default_values, dv);
 }

 kw++;
 node = node->u3.node;
    }

    keyword->num = kw;

    if (args->kw_rest_arg->u1.id != 0) {
 keyword->rest_start = get_dyna_var_idx_at_raw(iseq, args->kw_rest_arg->u1.id);
 iseq->body->param.flags.has_kwrest = TRUE;
    }
    keyword->required_num = rkw;
    keyword->table = &iseq->body->local_table[keyword->bits_start - keyword->num];

    {
 VALUE *dvs = ((VALUE*)ruby_xmalloc2((size_t)(rb_array_len(default_values)),sizeof(VALUE)));

 for (i = 0; i < rb_array_len(default_values); i++) {
     VALUE dv = (rb_array_const_ptr(default_values)[i]);
     if (dv == complex_mark) dv = ((VALUE)RUBY_Qundef);
     dvs[i] = dv;
 }

 keyword->default_values = dvs;
    }
}

static int
iseq_set_arguments(rb_iseq_t *iseq, LINK_ANCHOR *const optargs, const NODE *const node_args)
{
    if(0)printf("iseq_set_arguments: %s\n", node_args ? "": "0");

    if (node_args) {
 struct rb_args_info *args = node_args->u3.args;
 ID rest_id = 0;
 int last_comma = 0;
 ID block_id = 0;

 do { const NODE *error_node = (node_args); enum node_type error_type = ((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)); if (error_type != (NODE_ARGS)) { append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "iseq_set_arguments: NODE_ARGS is expected, but %s", ruby_node_name(error_type)); return 0; } } while (0);

 iseq->body->param.lead_num = (int)args->pre_args_num;
 if (iseq->body->param.lead_num > 0) iseq->body->param.flags.has_lead = TRUE;
 if(0)printf("  - argc: %d\n", iseq->body->param.lead_num);

 rest_id = args->rest_arg;
 if (rest_id == 1) {
     last_comma = 1;
     rest_id = 0;
 }
 block_id = args->block_arg;

 if (args->first_post_arg) {
     iseq->body->param.post_start = get_dyna_var_idx_at_raw(iseq, args->first_post_arg);
     iseq->body->param.post_num = args->post_args_num;
     iseq->body->param.flags.has_post = TRUE;
 }

 if (args->opt_args) {
     const NODE *node = args->opt_args;
     LABEL *label;
     VALUE labels = rb_ary_tmp_new(1);
     VALUE *opt_table;
     int i = 0, j;

     while (node) {
  label = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));
  rb_ary_push(labels, (VALUE)label | 1);
  ADD_ELEM((optargs), (LINK_ELEMENT *) (label));
  ((iseq_compile_each(iseq, (optargs), (node->u2.node), 1)));
  node = node->u3.node;
  i += 1;
     }


     label = new_label_body(iseq, ((int)(((long)(node_args)->flags)>>(8 +7))));
     rb_ary_push(labels, (VALUE)label | 1);
     ADD_ELEM((optargs), (LINK_ELEMENT *) (label));

     opt_table = ((VALUE*)ruby_xmalloc2((size_t)(i+1),sizeof(VALUE)));

     memcpy((opt_table), (rb_array_const_ptr(labels)), sizeof(VALUE)*(size_t)(i+1));
     for (j = 0; j < i+1; j++) {
  opt_table[j] &= ~1;
     }
     rb_ary_clear(labels);

     iseq->body->param.flags.has_opt = TRUE;
     iseq->body->param.opt_num = i;
     iseq->body->param.opt_table = opt_table;
 }

 if (args->kw_args) {
     iseq_set_arguments_keywords(iseq, optargs, args);
 }
 else if (args->kw_rest_arg) {
     struct rb_iseq_param_keyword *keyword = ((struct rb_iseq_param_keyword*)ruby_xcalloc((size_t)(1),sizeof(struct rb_iseq_param_keyword)));
     keyword->rest_start = get_dyna_var_idx_at_raw(iseq, args->kw_rest_arg->u1.id);
     iseq->body->param.keyword = keyword;
     iseq->body->param.flags.has_kwrest = TRUE;
 }

 if (args->pre_init) {
     ((iseq_compile_each(iseq, (optargs), (args->pre_init), 1)));
 }
 if (args->post_init) {
     ((iseq_compile_each(iseq, (optargs), (args->post_init), 1)));
 }

 if (rest_id) {
     iseq->body->param.rest_start = get_dyna_var_idx_at_raw(iseq, rest_id);
     iseq->body->param.flags.has_rest = TRUE;
     ((iseq->body->param.rest_start != -1) ? (void) (0) : __assert_fail ("iseq->body->param.rest_start != -1", "compile.c", 1591,  __PRETTY_FUNCTION__));

     if (iseq->body->param.post_start == 0) {
  iseq->body->param.post_start = iseq->body->param.rest_start + 1;
     }
 }

 if (block_id) {
     iseq->body->param.block_start = get_dyna_var_idx_at_raw(iseq, block_id);
     iseq->body->param.flags.has_block = TRUE;
 }

 iseq_calc_param_size(iseq);

 if (iseq->body->type == ISEQ_TYPE_BLOCK) {
     if (iseq->body->param.flags.has_opt == FALSE &&
  iseq->body->param.flags.has_post == FALSE &&
  iseq->body->param.flags.has_rest == FALSE &&
  iseq->body->param.flags.has_kw == FALSE &&
  iseq->body->param.flags.has_kwrest == FALSE) {

  if (iseq->body->param.lead_num == 1 && last_comma == 0) {

      iseq->body->param.flags.ambiguous_param0 = TRUE;
  }
     }
 }
    }

    return 1;
}

static int
iseq_set_local_table(rb_iseq_t *iseq, const ID *tbl)
{
    unsigned int size;

    if (tbl) {
 size = (unsigned int)*tbl;
 tbl++;
    }
    else {
 size = 0;
    }

    if (size > 0) {
 ID *ids = (ID *)((ID*)ruby_xmalloc2((size_t)(size),sizeof(ID)));
 memcpy((ids), (tbl), sizeof(ID)*(size_t)(size));
 iseq->body->local_table = ids;
    }
    iseq->body->local_table_size = size;

    if(0)printf("iseq_set_local_table: %u\n", iseq->body->local_table_size);
    return 1;
}

static int
cdhash_cmp(VALUE val, VALUE lit)
{
    if (val == lit) return 0;
    if ((((VALUE)(lit) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(lit) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return val != lit;
    }
    if ((((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) || (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) != (int)(((struct RBasic*)(lit))->flags & RUBY_T_MASK)) {
 return -1;
    }
    if ((int)(((struct RBasic*)(lit))->flags & RUBY_T_MASK) == RUBY_T_STRING) {
 return rb_str_hash_cmp(lit, val);
    }
    return !rb_eql(lit, val);
}

static st_index_t
cdhash_hash(VALUE a)
{
    if ((((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) return (st_index_t)a;
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(a))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((a) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((a) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((a) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((a) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(a)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(a))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(a))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) return rb_str_hash(a);
    {
 VALUE hval = rb_hash(a);
 return (st_index_t)((long)(((long)(hval))>>(int)(1)));
    }
}

static const struct st_hash_type cdhash_type = {
    cdhash_cmp,
    cdhash_hash,
};

struct cdhash_set_label_struct {
    VALUE hash;
    int pos;
    int len;
};

static int
cdhash_set_label_i(VALUE key, VALUE val, void *ptr)
{
    struct cdhash_set_label_struct *data = (struct cdhash_set_label_struct *)ptr;
    LABEL *lobj = (LABEL *)(val & ~1);
    rb_hash_aset(data->hash, key, (((VALUE)(lobj->position - (data->pos+data->len)))<<1 | RUBY_FIXNUM_FLAG));
    return ST_CONTINUE;
}


static inline VALUE
get_ivar_ic_value(rb_iseq_t *iseq,ID id)
{
    VALUE val;
    struct rb_id_table *tbl = ISEQ_COMPILE_DATA(iseq)->ivar_cache_table;
    if (tbl) {
 if (rb_id_table_lookup(tbl,id,&val)) {
     return val;
 }
    }
    else {
 tbl = rb_id_table_create(1);
 ISEQ_COMPILE_DATA(iseq)->ivar_cache_table = tbl;
    }
    val = (((VALUE)(iseq->body->is_size++))<<1 | RUBY_FIXNUM_FLAG);
    rb_id_table_insert(tbl,id,val);
    return val;
}
static int
fix_sp_depth(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    int stack_max = 0, sp = 0, line = 0;
    LINK_ELEMENT *list;

    for (list = FIRST_ELEMENT(anchor); list; list = list->next) {
 if (list->type == ISEQ_ELEMENT_LABEL) {
     LABEL *lobj = (LABEL *)list;
     lobj->set = TRUE;
 }
    }

    for (list = FIRST_ELEMENT(anchor); list; list = list->next) {
 switch (list->type) {
   case ISEQ_ELEMENT_INSN:
     {
  int j, len, insn;
  const char *types;
  VALUE *operands;
  INSN *iobj = (INSN *)list;


  sp = calc_sp_depth(sp, iobj);
  if (sp < 0) {
      dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0));
      append_compile_error(iseq, iobj->insn_info.line_no,
      "argument stack underflow (%d)", sp);
      return -1;
  }
  if (sp > stack_max) {
      stack_max = sp;
  }

  line = iobj->insn_info.line_no;

  operands = iobj->operands;
  insn = iobj->insn_id;
  types = insn_op_types(insn);
  len = insn_len(insn);


  if (iobj->operand_size != len - 1) {

      dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0));
      append_compile_error(iseq, iobj->insn_info.line_no,
      "operand size miss! (%d for %d)",
      iobj->operand_size, len - 1);
      return -1;
  }

  for (j = 0; types[j]; j++) {
      if (types[j] == 'O') {

   LABEL *lobj = (LABEL *)operands[j];
   if (!lobj->set) {
       dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0));
       append_compile_error(iseq, iobj->insn_info.line_no,
       "unknown label: <L%03d>", lobj->label_no);
       return -1;
   }
   if (lobj->sp == -1) {
       lobj->sp = sp;
   }
      }
  }
  break;
     }
   case ISEQ_ELEMENT_LABEL:
     {
  LABEL *lobj = (LABEL *)list;
  if (lobj->sp == -1) {
      lobj->sp = sp;
  }
  else {
      sp = lobj->sp;
  }
  break;
     }
   case ISEQ_ELEMENT_TRACE:
     {

  break;
     }
   case ISEQ_ELEMENT_ADJUST:
     {
  ADJUST *adjust = (ADJUST *)list;
  int orig_sp = sp;

  sp = adjust->label ? adjust->label->sp : 0;
  if (adjust->line_no != -1 && orig_sp - sp < 0) {
      dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0));
      append_compile_error(iseq, adjust->line_no,
      "iseq_set_sequence: adjust bug %d < %d",
      orig_sp, sp);
      return -1;
  }
  break;
     }
   default:
     dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0));
     append_compile_error(iseq, line, "unknown list type: %d", list->type);
     return -1;
 }
    }
    return stack_max;
}

static int
add_insn_info(struct iseq_insn_info_entry *insns_info, int insns_info_index, int code_index, LINK_ELEMENT *list)
{
    if (list->type == ISEQ_ELEMENT_INSN) {
 INSN *iobj = (INSN *)list;
 if (insns_info_index == 0 ||
     insns_info[insns_info_index-1].line_no != iobj->insn_info.line_no ||
     insns_info[insns_info_index-1].events != iobj->insn_info.events) {
     insns_info[insns_info_index].position = code_index;
     insns_info[insns_info_index].line_no = iobj->insn_info.line_no;
     insns_info[insns_info_index].events = iobj->insn_info.events;
     return TRUE;
 }
 else {
     return FALSE;
 }
    }
    else if (list->type == ISEQ_ELEMENT_ADJUST) {
 ADJUST *adjust = (ADJUST *)list;
 if (insns_info_index > 0 ||
     insns_info[insns_info_index-1].line_no != adjust->line_no) {
     insns_info[insns_info_index].position = code_index;
     insns_info[insns_info_index].line_no = adjust->line_no;
     insns_info[insns_info_index].events = 0;
     return TRUE;
 }
 else {
     return FALSE;
 }
    }
    else {
 __builtin_unreachable();
    }
}




static int
iseq_set_sequence(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    struct iseq_insn_info_entry *insns_info;
    LINK_ELEMENT *list;
    VALUE *generated_iseq;
    rb_event_flag_t events = 0;

    int insn_num, code_index, insns_info_index, sp = 0;
    int stack_max = fix_sp_depth(iseq, anchor);

    if (stack_max < 0) return 0;


    list = FIRST_ELEMENT(anchor);
    insn_num = code_index = 0;
    while (list) {
 switch (list->type) {
   case ISEQ_ELEMENT_INSN:
     {
  INSN *iobj = (INSN *)list;

  sp = calc_sp_depth(sp, iobj);
  code_index += insn_data_length(iobj);
  insn_num++;
  iobj->insn_info.events |= events;
  events = 0;
  break;
     }
   case ISEQ_ELEMENT_LABEL:
     {
  LABEL *lobj = (LABEL *)list;
  lobj->position = code_index;
  sp = lobj->sp;
  break;
     }
   case ISEQ_ELEMENT_TRACE:
     {
  TRACE *trace = (TRACE *)list;
  events |= trace->event;
  break;
     }
   case ISEQ_ELEMENT_ADJUST:
     {
  ADJUST *adjust = (ADJUST *)list;
  if (adjust->line_no != -1) {
      int orig_sp = sp;
      sp = adjust->label ? adjust->label->sp : 0;
      if (orig_sp - sp > 0) {
   if (orig_sp - sp > 1) code_index++;
   code_index++;
   insn_num++;
      }
  }
  break;
     }
 }
 list = list->next;
    }


    generated_iseq = ((VALUE*)ruby_xmalloc2((size_t)(code_index),sizeof(VALUE)));
    insns_info = ((struct iseq_insn_info_entry*)ruby_xmalloc2((size_t)(insn_num),sizeof(struct iseq_insn_info_entry)));
    iseq->body->is_entries = ((union iseq_inline_storage_entry*)ruby_xcalloc((size_t)(iseq->body->is_size),sizeof(union iseq_inline_storage_entry)));
    iseq->body->ci_entries = (struct rb_call_info *)ruby_xmalloc(sizeof(struct rb_call_info) * iseq->body->ci_size +
         sizeof(struct rb_call_info_with_kwarg) * iseq->body->ci_kw_size);
    memset((iseq->body->ci_entries + iseq->body->ci_size), 0, sizeof(struct rb_call_info_with_kwarg)*(size_t)(iseq->body->ci_kw_size));
    iseq->body->cc_entries = ((struct rb_call_cache*)ruby_xcalloc((size_t)(iseq->body->ci_size + iseq->body->ci_kw_size),sizeof(struct rb_call_cache)));

    ISEQ_COMPILE_DATA(iseq)->ci_index = ISEQ_COMPILE_DATA(iseq)->ci_kw_index = 0;

    list = FIRST_ELEMENT(anchor);
    insns_info_index = code_index = sp = 0;

    while (list) {
 switch (list->type) {
   case ISEQ_ELEMENT_INSN:
     {
  int j, len, insn;
  const char *types;
  VALUE *operands;
  INSN *iobj = (INSN *)list;


  sp = calc_sp_depth(sp, iobj);

  operands = iobj->operands;
  insn = iobj->insn_id;
  generated_iseq[code_index] = insn;
  types = insn_op_types(insn);
  len = insn_len(insn);

  for (j = 0; types[j]; j++) {
      char type = types[j];

      switch (type) {
        case 'O':
   {

       LABEL *lobj = (LABEL *)operands[j];
       generated_iseq[code_index + 1 + j] = lobj->position - (code_index + len);
       break;
   }
        case 'H':
   {
       VALUE map = operands[j];
       struct cdhash_set_label_struct data;
                            data.hash = map;
                            data.pos = code_index;
                            data.len = len;
       rb_hash_foreach(map, cdhash_set_label_i, (VALUE)&data);

       rb_hash_rehash(map);
       freeze_hide_obj(map);
       generated_iseq[code_index + 1 + j] = map;
       break;
   }
        case 'L':
        case 'N':
   generated_iseq[code_index + 1 + j] = ((int)rb_fix2int((VALUE)(operands[j])));
   break;
        case 'S':
   {
       VALUE v = operands[j];
       generated_iseq[code_index + 1 + j] = v;
       break;
   }
        case 'V':
   {
       VALUE v = operands[j];
       generated_iseq[code_index + 1 + j] = v;

       iseq_add_mark_object(iseq, v);
       break;
   }
        case 'K':
   {
       unsigned int ic_index = ((unsigned int)rb_fix2uint(operands[j]));
       IC ic = (IC)&iseq->body->is_entries[ic_index];
       if ((__builtin_expect(!!(ic_index >= iseq->body->is_size), 0))) {
    rb_bug("iseq_set_sequence: ic_index overflow: index: %d, size: %d", ic_index, iseq->body->is_size);
       }
       generated_iseq[code_index + 1 + j] = (VALUE)ic;
       break;
   }
        case 'C':
   {
       struct rb_call_info *base_ci = (struct rb_call_info *)operands[j];
       struct rb_call_info *ci;

       if (base_ci->flag & (0x01 << VM_CALL_KWARG_bit)) {
    struct rb_call_info_with_kwarg *ci_kw_entries = (struct rb_call_info_with_kwarg *)&iseq->body->ci_entries[iseq->body->ci_size];
    struct rb_call_info_with_kwarg *ci_kw = &ci_kw_entries[ISEQ_COMPILE_DATA(iseq)->ci_kw_index++];
    *ci_kw = *((struct rb_call_info_with_kwarg *)base_ci);
    ci = (struct rb_call_info *)ci_kw;
    ((ISEQ_COMPILE_DATA(iseq)->ci_kw_index <= iseq->body->ci_kw_size) ? (void) (0) : __assert_fail ("ISEQ_COMPILE_DATA(iseq)->ci_kw_index <= iseq->body->ci_kw_size", "compile.c", 2024,  __PRETTY_FUNCTION__));
       }
       else {
    ci = &iseq->body->ci_entries[ISEQ_COMPILE_DATA(iseq)->ci_index++];
    *ci = *base_ci;
    ((ISEQ_COMPILE_DATA(iseq)->ci_index <= iseq->body->ci_size) ? (void) (0) : __assert_fail ("ISEQ_COMPILE_DATA(iseq)->ci_index <= iseq->body->ci_size", "compile.c", 2029,  __PRETTY_FUNCTION__));
       }

       generated_iseq[code_index + 1 + j] = (VALUE)ci;
       break;
   }
        case 'E':
   {
       struct rb_call_cache *cc = &iseq->body->cc_entries[ISEQ_COMPILE_DATA(iseq)->ci_index + ISEQ_COMPILE_DATA(iseq)->ci_kw_index - 1];
       generated_iseq[code_index + 1 + j] = (VALUE)cc;
       break;
   }
        case 'I':
   generated_iseq[code_index + 1 + j] = (rb_sym2id(operands[j]));
   break;
        case 'G':
   {
       struct rb_global_entry *entry =
    (struct rb_global_entry *)(operands[j] & (~1));
       generated_iseq[code_index + 1 + j] = (VALUE)entry;
   }
   break;
        case 'F':
   generated_iseq[code_index + 1 + j] = operands[j];
   break;
        default:
   (ruby_xfree(generated_iseq), ruby_xfree(insns_info), dump_disasm_list_with_cursor(&anchor->anchor, list, ((void*)0)), append_compile_error)(iseq, iobj->insn_info.line_no,
          "unknown operand type: %c", type);
   return 0;
      }
  }
  if (add_insn_info(insns_info, insns_info_index, code_index, (LINK_ELEMENT *)iobj)) insns_info_index++;
  code_index += len;
  break;
     }
   case ISEQ_ELEMENT_LABEL:
     {
  LABEL *lobj = (LABEL *)list;
  sp = lobj->sp;
  break;
     }
   case ISEQ_ELEMENT_ADJUST:
     {
  ADJUST *adjust = (ADJUST *)list;
  int orig_sp = sp;

  if (adjust->label) {
      sp = adjust->label->sp;
  }
  else {
      sp = 0;
  }

  if (adjust->line_no != -1) {
      const int diff = orig_sp - sp;
      if (diff > 0) {
   if (add_insn_info(insns_info, insns_info_index, code_index, (LINK_ELEMENT *)adjust)) insns_info_index++;
      }
      if (diff > 1) {
   generated_iseq[code_index++] = YARVINSN_adjuststack;
   generated_iseq[code_index++] = orig_sp - sp;
      }
      else if (diff == 1) {
   generated_iseq[code_index++] = YARVINSN_pop;
      }
      else if (diff < 0) {
   int label_no = adjust->label ? adjust->label->label_no : -1;
   ruby_xfree(generated_iseq);
   ruby_xfree(insns_info);
   ((void)0);
   append_compile_error(iseq, adjust->line_no,
          "iseq_set_sequence: adjust bug to %d %d < %d",
          label_no, orig_sp, sp);
   return 0;
      }
  }
  break;
     }
   default:

     break;
 }
 list = list->next;
    }

    iseq->body->iseq_encoded = (void *)generated_iseq;
    iseq->body->iseq_size = code_index;
    iseq->body->stack_max = stack_max;


    iseq->body->insns_info = insns_info;

    ((insns_info)=(struct iseq_insn_info_entry*)ruby_xrealloc2((char*)(insns_info),(size_t)(insns_info_index),sizeof(struct iseq_insn_info_entry)));
    iseq->body->insns_info = insns_info;
    iseq->body->insns_info_size = insns_info_index;

    return 1;
}

static int
label_get_position(LABEL *lobj)
{
    return lobj->position;
}

static int
label_get_sp(LABEL *lobj)
{
    return lobj->sp;
}

static int
iseq_set_exception_table(rb_iseq_t *iseq)
{
    const VALUE *tptr, *ptr;
    unsigned int tlen, i;
    struct iseq_catch_table_entry *entry;

    tlen = (int)rb_array_len(ISEQ_COMPILE_DATA(iseq)->catch_table_ary);
    tptr = rb_array_const_ptr(ISEQ_COMPILE_DATA(iseq)->catch_table_ary);

    if (tlen > 0) {
 struct iseq_catch_table *table = ruby_xmalloc(iseq_catch_table_bytes(tlen));
 table->size = tlen;

 for (i = 0; i < table->size; i++) {
     ptr = rb_array_const_ptr(tptr[i]);
     entry = &table->entries[i];
     entry->type = (enum catch_type)(ptr[0] & 0xffff);
     entry->start = label_get_position((LABEL *)(ptr[1] & ~1));
     entry->end = label_get_position((LABEL *)(ptr[2] & ~1));
     entry->iseq = (rb_iseq_t *)ptr[3];


     if (entry->iseq != 0) {
  iseq_add_mark_object(iseq, (VALUE)entry->iseq);
     }


     if (ptr[4]) {
  LABEL *lobj = (LABEL *)(ptr[4] & ~1);
  entry->cont = label_get_position(lobj);
  entry->sp = label_get_sp(lobj);


  if (entry->type == CATCH_TYPE_RESCUE ||
      entry->type == CATCH_TYPE_BREAK ||
      entry->type == CATCH_TYPE_NEXT) {
      entry->sp--;
  }
     }
     else {
  entry->cont = 0;
     }
 }
 iseq->body->catch_table = table;
 rb_obj_write((VALUE)(iseq), (VALUE *)(&ISEQ_COMPILE_DATA(iseq)->catch_table_ary), (VALUE)(0), "compile.c", 2185);
    }
    else {
 iseq->body->catch_table = ((void*)0);
    }

    return 1;
}
static int
iseq_set_optargs_table(rb_iseq_t *iseq)
{
    int i;
    VALUE *opt_table = (VALUE *)iseq->body->param.opt_table;

    if (iseq->body->param.flags.has_opt) {
 for (i = 0; i < iseq->body->param.opt_num + 1; i++) {
     opt_table[i] = label_get_position((LABEL *)opt_table[i]);
 }
    }
    return 1;
}

static LINK_ELEMENT *
get_destination_insn(INSN *iobj)
{
    LABEL *lobj = (LABEL *)(((INSN*)(iobj))->operands[(0)]);
    LINK_ELEMENT *list;
    rb_event_flag_t events = 0;

    list = lobj->link.next;
    while (list) {
 switch (list->type) {
   case ISEQ_ELEMENT_INSN:
   case ISEQ_ELEMENT_ADJUST:
     goto found;
   case ISEQ_ELEMENT_LABEL:

     break;
   case ISEQ_ELEMENT_TRACE:
     {
  TRACE *trace = (TRACE *)list;
  events |= trace->event;
     }
     break;
 }
 list = list->next;
    }
  found:
    if (list && ((list)->type == ISEQ_ELEMENT_INSN)) {
 INSN *iobj = (INSN *)list;
 iobj->insn_info.events |= events;
    }
    return list;
}

static LINK_ELEMENT *
get_next_insn(INSN *iobj)
{
    LINK_ELEMENT *list = iobj->link.next;

    while (list) {
 if (((list)->type == ISEQ_ELEMENT_INSN) || ((list)->type == ISEQ_ELEMENT_ADJUST)) {
     return list;
 }
 list = list->next;
    }
    return 0;
}

static LINK_ELEMENT *
get_prev_insn(INSN *iobj)
{
    LINK_ELEMENT *list = iobj->link.prev;

    while (list) {
 if (((list)->type == ISEQ_ELEMENT_INSN) || ((list)->type == ISEQ_ELEMENT_ADJUST)) {
     return list;
 }
 list = list->prev;
    }
    return 0;
}

static void
unref_destination(INSN *iobj, int pos)
{
    LABEL *lobj = (LABEL *)(((INSN*)(iobj))->operands[(pos)]);
    --lobj->refcnt;
    if (!lobj->refcnt) ELEM_REMOVE(&lobj->link);
}

static void
replace_destination(INSN *dobj, INSN *nobj)
{
    VALUE n = (((INSN*)(nobj))->operands[(0)]);
    LABEL *dl = (LABEL *)(((INSN*)(dobj))->operands[(0)]);
    LABEL *nl = (LABEL *)n;
    --dl->refcnt;
    ++nl->refcnt;
    (((INSN*)(dobj))->operands[(0)]) = n;
    if (!dl->refcnt) ELEM_REMOVE(&dl->link);
}

static LABEL*
find_destination(INSN *i)
{
    int pos, len = insn_len(i->insn_id);
    for (pos = 0; pos < len; ++pos) {
 if (insn_op_types(i->insn_id)[pos] == 'O') {
     return (LABEL *)(((INSN*)(i))->operands[(pos)]);
 }
    }
    return 0;
}

static int
remove_unreachable_chunk(rb_iseq_t *iseq, LINK_ELEMENT *i)
{
    LINK_ELEMENT *first = i, *end;
    int *unref_counts = 0, nlabels = ISEQ_COMPILE_DATA(iseq)->label_no;

    if (!i) return 0;
    unref_counts = ((int*)__builtin_alloca (sizeof(int)*(nlabels)));
    memset((unref_counts), 0, sizeof(int)*(size_t)(nlabels));
    end = i;
    do {
 LABEL *lab;
 if (((i)->type == ISEQ_ELEMENT_INSN)) {
     if (((((INSN*)(i))->insn_id) == YARVINSN_leave)) {
  end = i;
  break;
     }
     else if ((lab = find_destination((INSN *)i)) != 0) {
  if (lab->unremovable) break;
  unref_counts[lab->label_no]++;
     }
 }
 else if (((i)->type == ISEQ_ELEMENT_LABEL)) {
     lab = (LABEL *)i;
     if (lab->unremovable) return 0;
     if (lab->refcnt > unref_counts[lab->label_no]) {
  if (i == first) return 0;
  break;
     }
     continue;
 }
 else if (((i)->type == ISEQ_ELEMENT_TRACE)) {

 }
 else if (((i)->type == ISEQ_ELEMENT_ADJUST)) {
     LABEL *dest = ((ADJUST *)i)->label;
     if (dest && dest->unremovable) return 0;
 }
 end = i;
    } while ((i = i->next) != 0);
    i = first;
    do {
 if (((i)->type == ISEQ_ELEMENT_INSN)) {
     struct rb_iseq_constant_body *body = iseq->body;
     VALUE insn = (((INSN*)(i))->insn_id);
     int pos, len = insn_len(insn);
     for (pos = 0; pos < len; ++pos) {
  switch (insn_op_types(insn)[pos]) {
    case 'O':
      unref_destination((INSN *)i, pos);
      break;
    case 'C':
      if (((struct rb_call_info *)(((INSN*)(i))->operands[(pos)]))->flag & (0x01 << VM_CALL_KWARG_bit))
   --(body->ci_kw_size);
      else
   --(body->ci_size);
      break;
  }
     }
 }
 ELEM_REMOVE(i);
    } while ((i != end) && (i = i->next) != 0);
    return 1;
}

static int
iseq_pop_newarray(rb_iseq_t *iseq, INSN *iobj)
{
    switch ((((INSN*)(iobj))->operands[(0)])) {
      case (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG):
 ELEM_REMOVE(&iobj->link);
 return TRUE;
      case (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG):
 ELEM_REMOVE(&iobj->link);
 return FALSE;
      default:
 iobj->insn_id = YARVINSN_adjuststack;
 return TRUE;
    }
}

static int
same_debug_pos_p(LINK_ELEMENT *iobj1, LINK_ELEMENT *iobj2)
{
    VALUE debug1 = (((INSN*)(iobj1))->operands[(0)]);
    VALUE debug2 = (((INSN*)(iobj2))->operands[(0)]);
    if (debug1 == debug2) return TRUE;
    if (!( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(debug1))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((debug1) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((debug1) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((debug1) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((debug1) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(debug1)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(debug1) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug1) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug1))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(debug1))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(debug1) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug1) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug1))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(debug1) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug1) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug1))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) return FALSE;
    if (!( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(debug2))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((debug2) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((debug2) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((debug2) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((debug2) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(debug2)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(debug2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug2))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(debug2))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(debug2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug2))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(debug2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(debug2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(debug2))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) return FALSE;
    if (rb_array_len(debug1) != 2) return FALSE;
    if (rb_array_len(debug2) != 2) return FALSE;
    if ((rb_array_const_ptr(debug1)[0]) != (rb_array_const_ptr(debug2)[0])) return FALSE;
    if ((rb_array_const_ptr(debug1)[1]) != (rb_array_const_ptr(debug2)[1])) return FALSE;
    return TRUE;
}

static int
iseq_peephole_optimize(rb_iseq_t *iseq, LINK_ELEMENT *list, const int do_tailcallopt)
{
    INSN *const iobj = (INSN *)list;
  again:
    if (((((INSN*)(iobj))->insn_id) == YARVINSN_jump)) {
 INSN *niobj, *diobj, *piobj;
 diobj = (INSN *)get_destination_insn(iobj);
 niobj = (INSN *)get_next_insn(iobj);

 if (diobj == niobj) {






     unref_destination(iobj, 0);
     ELEM_REMOVE(&iobj->link);
     return 1;
 }
 else if (iobj != diobj && ((((INSN*)(diobj))->insn_id) == YARVINSN_jump) &&
   (((INSN*)(iobj))->operands[(0)]) != (((INSN*)(diobj))->operands[(0)])) {
     replace_destination(iobj, diobj);
     remove_unreachable_chunk(iseq, iobj->link.next);
     goto again;
 }
 else if (((((INSN*)(diobj))->insn_id) == YARVINSN_leave)) {
     INSN *pop;
     unref_destination(iobj, 0);
     iobj->insn_id = YARVINSN_leave;
     iobj->operand_size = 0;
     iobj->insn_info = diobj->insn_info;

     pop = new_insn_body(iseq, diobj->insn_info.line_no, YARVINSN_pop, 0);
     ELEM_INSERT_NEXT(&iobj->link, &pop->link);
     goto again;
 }
 else if ((piobj = (INSN *)get_prev_insn(iobj)) != 0 &&
   (((((INSN*)(piobj))->insn_id) == YARVINSN_branchif) ||
    ((((INSN*)(piobj))->insn_id) == YARVINSN_branchunless))) {
     INSN *pdiobj = (INSN *)get_destination_insn(piobj);
     if (niobj == pdiobj) {
  piobj->insn_id = (((((INSN*)(piobj))->insn_id) == YARVINSN_branchif))
    ? YARVINSN_branchunless : YARVINSN_branchif;
  replace_destination(piobj, iobj);
  ELEM_REMOVE(&iobj->link);
  return 1;
     }
     else if (diobj == pdiobj) {
  INSN *popiobj = new_insn_core(iseq, iobj->insn_info.line_no,
           YARVINSN_pop, 0, 0);
  ELEM_REPLACE(&piobj->link, &popiobj->link);
     }
 }
 if (remove_unreachable_chunk(iseq, iobj->link.next)) {
     goto again;
 }
    }
    if (((((INSN*)(iobj))->insn_id) == YARVINSN_checkmatch)) {
 INSN *range = (INSN *)get_prev_insn(iobj);
 INSN *beg, *end;

 if (range && ((((INSN*)(range))->insn_id) == YARVINSN_newrange) &&
  (end = (INSN *)get_prev_insn(range)) != 0 &&
  ((((INSN*)(end))->insn_id) == YARVINSN_putstring) &&
  (beg = (INSN *)get_prev_insn(end)) != 0 &&
  ((((INSN*)(beg))->insn_id) == YARVINSN_putstring)) {
     VALUE str_beg = (((INSN*)(beg))->operands[(0)]);
     VALUE str_end = (((INSN*)(end))->operands[(0)]);
     int excl = ((int)rb_fix2int((VALUE)((((INSN*)(range))->operands[(0)]))));
     VALUE lit_range = rb_range_new(str_beg, str_end, excl);

     iseq_add_mark_object_compile_time(iseq, lit_range);
     ELEM_REMOVE(&beg->link);
     ELEM_REMOVE(&end->link);
     range->insn_id = YARVINSN_putobject;
     (((INSN*)(range))->operands[(0)]) = lit_range;
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_leave)) {
 remove_unreachable_chunk(iseq, iobj->link.next);
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_branchif) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_branchnil) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_branchunless)) {
 INSN *nobj = (INSN *)get_destination_insn(iobj);
 INSN *pobj = (INSN *)iobj->link.prev;
 int prev_dup = 0;
 if (pobj) {
     if (!((&pobj->link)->type == ISEQ_ELEMENT_INSN))
  pobj = 0;
     else if (((((INSN*)(pobj))->insn_id) == YARVINSN_dup))
  prev_dup = 1;
 }

 for (;;) {
     if (((((INSN*)(nobj))->insn_id) == YARVINSN_jump)) {
  replace_destination(iobj, nobj);
     }
     else if (prev_dup && ((((INSN*)(nobj))->insn_id) == YARVINSN_dup) &&
       !!(nobj = (INSN *)nobj->link.next) &&

       nobj->insn_id == iobj->insn_id) {
  replace_destination(iobj, nobj);
     }
     else if (pobj) {
  int cond;
  if (prev_dup && ((pobj->link.prev)->type == ISEQ_ELEMENT_INSN)) {
      pobj = (INSN *)pobj->link.prev;
  }
  if (((((INSN*)(pobj))->insn_id) == YARVINSN_putobject)) {
      cond = (((((INSN*)(iobj))->insn_id) == YARVINSN_branchif) ?
       (((INSN*)(pobj))->operands[(0)]) != ((VALUE)RUBY_Qfalse) :
       ((((INSN*)(iobj))->insn_id) == YARVINSN_branchunless) ?
       (((INSN*)(pobj))->operands[(0)]) == ((VALUE)RUBY_Qfalse) :
       FALSE);
  }
  else if (((((INSN*)(pobj))->insn_id) == YARVINSN_putstring) ||
    ((((INSN*)(pobj))->insn_id) == YARVINSN_duparray) ||
    ((((INSN*)(pobj))->insn_id) == YARVINSN_newarray)) {
      cond = ((((INSN*)(iobj))->insn_id) == YARVINSN_branchif);
  }
  else if (((((INSN*)(pobj))->insn_id) == YARVINSN_putnil)) {
      cond = !((((INSN*)(iobj))->insn_id) == YARVINSN_branchif);
  }
  else break;
  if (prev_dup || !((((INSN*)(pobj))->insn_id) == YARVINSN_newarray)) {
      ELEM_REMOVE(iobj->link.prev);
  }
  else if (!iseq_pop_newarray(iseq, pobj)) {
      pobj = new_insn_core(iseq, pobj->insn_info.line_no, YARVINSN_pop, 0, ((void*)0));
      ELEM_INSERT_NEXT(&iobj->link, &pobj->link);
  }
  if (cond) {
      iobj->insn_id = YARVINSN_jump;
      goto again;
  }
  else {
      unref_destination(iobj, 0);
      ELEM_REMOVE(&iobj->link);
  }
  break;
     }
     else break;
     nobj = (INSN *)get_destination_insn(nobj);
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_pop)) {






 LINK_ELEMENT *prev = iobj->link.prev;
 if (((prev)->type == ISEQ_ELEMENT_INSN)) {
     enum ruby_vminsn_type previ = ((INSN *)prev)->insn_id;
     if (previ == YARVINSN_putobject || previ == YARVINSN_putnil ||
  previ == YARVINSN_putself || previ == YARVINSN_putstring ||
  previ == YARVINSN_duparray) {


  ELEM_REMOVE(prev);
  ELEM_REMOVE(&iobj->link);
     }
     else if (previ == YARVINSN_newarray && iseq_pop_newarray(iseq, (INSN*)prev)) {
  ELEM_REMOVE(&iobj->link);
     }
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_newarray) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_duparray) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_expandarray) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_concatarray) ||
 ((((INSN*)(iobj))->insn_id) == YARVINSN_splatarray) ||
 0) {







 LINK_ELEMENT *next = iobj->link.next;
 if (((next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(next))->insn_id) == YARVINSN_splatarray)) {

     ELEM_REMOVE(next);
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_tostring)) {
 LINK_ELEMENT *next = iobj->link.next;






 if (((next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(next))->insn_id) == YARVINSN_concatstrings) &&
     (((INSN*)(next))->operands[(0)]) == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)) {
     ELEM_REMOVE(next);
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_putstring) ||
 (((((INSN*)(iobj))->insn_id) == YARVINSN_putobject) && ( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)((((INSN*)(iobj))->operands[(0)])))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? (((((INSN*)(iobj))->operands[(0)])) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? (((((INSN*)(iobj))->operands[(0)])) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? (((((INSN*)(iobj))->operands[(0)])) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? (((((INSN*)(iobj))->operands[(0)])) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)((((INSN*)(iobj))->operands[(0)]))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((((INSN*)(iobj))->operands[(0)])))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)((((INSN*)(iobj))->operands[(0)])))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((((INSN*)(iobj))->operands[(0)])))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((((INSN*)(iobj))->operands[(0)])) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((((INSN*)(iobj))->operands[(0)])))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))) {






 if (((&iobj->link)->next && (((&iobj->link)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((&iobj->link)->next))->insn_id) == YARVINSN_concatstrings)) &&
     (!(((struct RBasic*)((((INSN*)(iobj))->operands[(0)])))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((((INSN*)(iobj))->operands[(0)])))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((((INSN*)(iobj))->operands[(0)])))->as.heap.len) == 0) {
     INSN *next = (INSN *)iobj->link.next;
     if (((((INSN*)(next))->operands[(0)]) = (((((INSN*)(next))->operands[(0)]))+((((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG))) == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)) {
  ELEM_REMOVE(&next->link);
     }
     ELEM_REMOVE(&iobj->link);
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_concatstrings)) {






 LINK_ELEMENT *next = iobj->link.next, *freeze = 0;
 INSN *jump = 0;
 if (((next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(next))->insn_id) == YARVINSN_freezestring))
     next = (freeze = next)->next;
 if (((next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(next))->insn_id) == YARVINSN_jump))
     next = get_destination_insn(jump = (INSN *)next);
 if (((next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(next))->insn_id) == YARVINSN_concatstrings)) {
     int n = ((int)rb_fix2int((VALUE)((((INSN*)(iobj))->operands[(0)])))) + ((int)rb_fix2int((VALUE)((((INSN*)(next))->operands[(0)])))) - 1;
     (((INSN*)(iobj))->operands[(0)]) = (((VALUE)(n))<<1 | RUBY_FIXNUM_FLAG);
     if (jump) {
  LABEL *label = ((LABEL *)(((INSN*)(jump))->operands[(0)]));
  if (!--label->refcnt) {
      ELEM_REMOVE(&label->link);
  }
  else {
      label = new_label_body(iseq, (0));
      (((INSN*)(jump))->operands[(0)]) = (VALUE)label;
  }
  label->refcnt++;
  if (freeze && ((next)->next && (((next)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((next)->next))->insn_id) == YARVINSN_freezestring))) {
      if (same_debug_pos_p(freeze, next->next)) {
   ELEM_REMOVE(freeze);
      }
      else {
   next = next->next;
      }
  }
  ELEM_INSERT_NEXT(next, &label->link);
  if (!(iseq_peephole_optimize(iseq, get_next_insn(jump), do_tailcallopt))) {;return 0;};
     }
     else {
  if (freeze) ELEM_REMOVE(freeze);
  ELEM_REMOVE(next);
     }
 }
    }

    if (do_tailcallopt &&
 (((((INSN*)(iobj))->insn_id) == YARVINSN_send) ||
  ((((INSN*)(iobj))->insn_id) == YARVINSN_opt_aref_with) ||
  ((((INSN*)(iobj))->insn_id) == YARVINSN_opt_aset_with) ||
  ((((INSN*)(iobj))->insn_id) == YARVINSN_invokesuper))) {







 INSN *piobj = ((void*)0);
 if (iobj->link.next) {
     LINK_ELEMENT *next = iobj->link.next;
     do {
  if (!((next)->type == ISEQ_ELEMENT_INSN)) {
      next = next->next;
      continue;
  }
  switch ((((INSN*)(next))->insn_id)) {
    case YARVINSN_nop:
      next = next->next;
      break;
    case YARVINSN_jump:




      next = get_destination_insn((INSN *)next);
      break;
    case YARVINSN_leave:
      piobj = iobj;
    default:
      next = ((void*)0);
      break;
  }
     } while (next);
 }

 if (piobj) {
     struct rb_call_info *ci = (struct rb_call_info *)piobj->operands[0];
     if (((((INSN*)(piobj))->insn_id) == YARVINSN_send) || ((((INSN*)(piobj))->insn_id) == YARVINSN_invokesuper)) {
  if (piobj->operands[2] == 0) {
      ci->flag |= (0x01 << VM_CALL_TAILCALL_bit);
  }
     }
     else {
  ci->flag |= (0x01 << VM_CALL_TAILCALL_bit);
     }
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_dup)) {
 if (((&iobj->link)->next && (((&iobj->link)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((&iobj->link)->next))->insn_id) == YARVINSN_setlocal))) {
     LINK_ELEMENT *set1 = iobj->link.next, *set2 = ((void*)0);
     if (((set1)->next && (((set1)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((set1)->next))->insn_id) == YARVINSN_setlocal))) {
  set2 = set1->next;
  if ((((INSN*)(set1))->operands[(0)]) == (((INSN*)(set2))->operands[(0)]) &&
      (((INSN*)(set1))->operands[(1)]) == (((INSN*)(set2))->operands[(1)])) {
      ELEM_REMOVE(set1);
      ELEM_REMOVE(&iobj->link);
  }
     }
     else if (((set1)->next && (((set1)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((set1)->next))->insn_id) == YARVINSN_dup)) &&
       ((set1->next)->next && (((set1->next)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((set1->next)->next))->insn_id) == YARVINSN_setlocal))) {
  set2 = set1->next->next;
  if ((((INSN*)(set1))->operands[(0)]) == (((INSN*)(set2))->operands[(0)]) &&
      (((INSN*)(set1))->operands[(1)]) == (((INSN*)(set2))->operands[(1)])) {
      ELEM_REMOVE(set1->next);
      ELEM_REMOVE(set2);
  }
     }
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_getlocal)) {
 LINK_ELEMENT *niobj = &iobj->link;
 if (((niobj)->next && (((niobj)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((niobj)->next))->insn_id) == YARVINSN_dup))) {
     niobj = niobj->next;
 }
 if (((niobj)->next && (((niobj)->next)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)((niobj)->next))->insn_id) == YARVINSN_setlocal))) {
     LINK_ELEMENT *set1 = niobj->next;
     if ((((INSN*)(iobj))->operands[(0)]) == (((INSN*)(set1))->operands[(0)]) &&
  (((INSN*)(iobj))->operands[(1)]) == (((INSN*)(set1))->operands[(1)])) {
  ELEM_REMOVE(set1);
  ELEM_REMOVE(niobj);
     }
 }
    }

    return 1;
}

static int
insn_set_specialized_instruction(rb_iseq_t *iseq, INSN *iobj, int insn_id)
{
    iobj->insn_id = insn_id;
    iobj->operand_size = insn_len(insn_id) - 1;

    if (insn_id == YARVINSN_opt_neq) {
 VALUE *old_operands = iobj->operands;
 iobj->operand_size = 4;
 iobj->operands = (VALUE *)compile_data_alloc(iseq, iobj->operand_size * sizeof(VALUE));
 iobj->operands[0] = old_operands[0];
 iobj->operands[1] = ((VALUE)RUBY_Qfalse);
 iobj->operands[2] = (VALUE)new_callinfo(iseq, idEq, 1, 0, ((void*)0), FALSE);
 iobj->operands[3] = ((VALUE)RUBY_Qfalse);
    }

    return 1;
}

static int
iseq_specialized_instruction(rb_iseq_t *iseq, INSN *iobj)
{
    if (((((INSN*)(iobj))->insn_id) == YARVINSN_newarray) && iobj->link.next &&
 ((iobj->link.next)->type == ISEQ_ELEMENT_INSN)) {



 INSN *niobj = (INSN *)iobj->link.next;
 if (((((INSN*)(niobj))->insn_id) == YARVINSN_send)) {
     struct rb_call_info *ci = (struct rb_call_info *)(((INSN*)(niobj))->operands[(0)]);
     if ((ci->flag & (0x01 << VM_CALL_ARGS_SIMPLE_bit)) && ci->orig_argc == 0) {
  switch (ci->mid) {
    case idMax:
      iobj->insn_id = YARVINSN_opt_newarray_max;
      ELEM_REMOVE(&niobj->link);
      return 1;
    case idMin:
      iobj->insn_id = YARVINSN_opt_newarray_min;
      ELEM_REMOVE(&niobj->link);
      return 1;
  }
     }
 }
    }

    if (((((INSN*)(iobj))->insn_id) == YARVINSN_send)) {
 struct rb_call_info *ci = (struct rb_call_info *)(((INSN*)(iobj))->operands[(0)]);
 const rb_iseq_t *blockiseq = (rb_iseq_t *)(((INSN*)(iobj))->operands[(2)]);


 if (ci->flag & (0x01 << VM_CALL_ARGS_SIMPLE_bit)) {
     switch (ci->orig_argc) {
       case 0:
  switch (ci->mid) {
    case idLength: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_length); return 1;
    case idSize: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_size); return 1;
    case idEmptyP: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_empty_p);return 1;
    case idSucc: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_succ); return 1;
    case idNot: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_not); return 1;
  }
  break;
       case 1:
  switch (ci->mid) {
    case idPLUS: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_plus); return 1;
    case idMINUS: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_minus); return 1;
    case idMULT: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_mult); return 1;
    case idDIV: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_div); return 1;
    case idMOD: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_mod); return 1;
    case idEq: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_eq); return 1;
    case idNeq: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_neq); return 1;
    case idLT: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_lt); return 1;
    case idLE: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_le); return 1;
    case idGT: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_gt); return 1;
    case idGE: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_ge); return 1;
    case idLTLT: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_ltlt); return 1;
    case idAREF: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_aref); return 1;
  }
  break;
       case 2:
  switch (ci->mid) {
    case idASET: insn_set_specialized_instruction(iseq, iobj, YARVINSN_opt_aset); return 1;
  }
  break;
     }
 }

 if ((ci->flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) == 0 && blockiseq == ((void*)0)) {
     iobj->insn_id = YARVINSN_opt_send_without_block;
     iobj->operand_size = insn_len(iobj->insn_id) - 1;
 }
    }


    return 1;
}

static inline int
tailcallable_p(rb_iseq_t *iseq)
{
    switch (iseq->body->type) {
      case ISEQ_TYPE_TOP:
      case ISEQ_TYPE_EVAL:
      case ISEQ_TYPE_MAIN:

      case ISEQ_TYPE_RESCUE:
      case ISEQ_TYPE_ENSURE:

 return FALSE;
      default:
 return TRUE;
    }
}

static int
iseq_optimize(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    LINK_ELEMENT *list;
    const int do_peepholeopt = ISEQ_COMPILE_DATA(iseq)->option->peephole_optimization;
    const int do_tailcallopt = tailcallable_p(iseq) &&
 ISEQ_COMPILE_DATA(iseq)->option->tailcall_optimization;
    const int do_si = ISEQ_COMPILE_DATA(iseq)->option->specialized_instruction;
    const int do_ou = ISEQ_COMPILE_DATA(iseq)->option->operands_unification;
    int rescue_level = 0;
    int tailcallopt = do_tailcallopt;

    list = FIRST_ELEMENT(anchor);

    while (list) {
 if (((list)->type == ISEQ_ELEMENT_INSN)) {
     if (do_peepholeopt) {
  iseq_peephole_optimize(iseq, list, tailcallopt);
     }
     if (do_si) {
  iseq_specialized_instruction(iseq, (INSN *)list);
     }
     if (do_ou) {
  insn_operands_unification((INSN *)list);
     }
 }
 if (((list)->type == ISEQ_ELEMENT_LABEL)) {
     switch (((LABEL *)list)->rescued) {
       case LABEL_RESCUE_BEG:
  rescue_level++;
  tailcallopt = FALSE;
  break;
       case LABEL_RESCUE_END:
  if (!--rescue_level) tailcallopt = do_tailcallopt;
  break;
     }
 }
 list = list->next;
    }
    return 1;
}
static int
iseq_insns_unification(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    return 1;
}
static int
iseq_set_sequence_stackcaching(rb_iseq_t *iseq, LINK_ANCHOR *const anchor)
{
    return 1;
}

static int
all_string_result_p(const NODE *node)
{
    if (!node) return FALSE;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_STR: case NODE_DSTR:
 return TRUE;
      case NODE_IF: case NODE_UNLESS:
 if (!node->u2.node || !node->u3.node) return FALSE;
 if (all_string_result_p(node->u2.node))
     return all_string_result_p(node->u3.node);
 return FALSE;
      case NODE_AND: case NODE_OR:
 if (!node->u2.node)
     return all_string_result_p(node->u1.node);
 if (!all_string_result_p(node->u1.node))
     return FALSE;
 return all_string_result_p(node->u2.node);
      default:
 return FALSE;
    }
}

static int
compile_dstr_fragments(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int *cntp)
{
    const NODE *list = node->u3.node;
    VALUE lit = node->u1.value;
    LINK_ELEMENT *first_lit = 0;
    int cnt = 0;

    ((void)0);
    if (!!((VALUE)(lit) != ((VALUE)RUBY_Qnil))) {
 cnt++;
 if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(lit))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((lit) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((lit) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((lit) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((lit) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(lit)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(lit) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(lit) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(lit))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(lit))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(lit) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(lit) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(lit))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(lit) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(lit) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(lit))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "dstr: must be string: %s",
     rb_builtin_type_name(rb_type((VALUE)(lit))));
     return 0;
 }
 lit = freeze_literal(iseq, lit);
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(lit)));
 if ((!(((struct RBasic*)(lit))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(lit))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(lit))->as.heap.len) == 0) first_lit = LAST_ELEMENT(ret);
    }

    while (list) {
 const NODE *const head = list->u1.node;
 if (((int) (((head)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
     lit = freeze_literal(iseq, head->u1.value);
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(head)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(lit)));
     lit = ((VALUE)RUBY_Qnil);
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (head), 0))))) {;return 0;};
 }
 cnt++;
 list = list->u3.node;
    }
    if (!((VALUE)(lit) != ((VALUE)RUBY_Qnil)) && first_lit) {
 ELEM_REMOVE(first_lit);
 --cnt;
    }
    *cntp = cnt;

    return 1;
}

static int
compile_dstr(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node)
{
    int cnt;
    if (!(compile_dstr_fragments(iseq, ret, node, &cnt))) {;return 0;};
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_concatstrings, 1, (VALUE)((((VALUE)(cnt))<<1 | RUBY_FIXNUM_FLAG))));
    return 1;
}

static int
compile_dregx(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node)
{
    int cnt;
    if (!(compile_dstr_fragments(iseq, ret, node, &cnt))) {;return 0;};
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_toregexp, 2, (VALUE)((((VALUE)(node->u2.id))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(cnt))<<1 | RUBY_FIXNUM_FLAG))));
    return 1;
}

static int
compile_flip_flop(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int again,
    LABEL *then_label, LABEL *else_label)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    LABEL *lend = new_label_body(iseq, (line));
    rb_num_t cnt = ISEQ_FLIP_CNT_INCREMENT(iseq->body->local_iseq)
 + VM_SVAR_FLIPFLOP_START;
    VALUE key = (((VALUE)(cnt))<<1 | RUBY_FIXNUM_FLAG);

    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getspecial, 2, (VALUE)(key), (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(lend))), ((lend)->refcnt++));


    if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(else_label))), ((else_label)->refcnt++));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qtrue))));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setspecial, 1, (VALUE)(key)));
    if (!again) {
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(then_label))), ((then_label)->refcnt++));
    }


    ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
    if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {;return 0;};
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(then_label))), ((then_label)->refcnt++));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setspecial, 1, (VALUE)(key)));
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(then_label))), ((then_label)->refcnt++));

    return 1;
}

static int
compile_branch_condition(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *cond,
    LABEL *then_label, LABEL *else_label)
{
  again:
    switch (((int) (((cond)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_AND:
 {
     LABEL *label = new_label_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))));
     if (!(compile_branch_condition(iseq, ret, cond->u1.node, label, else_label))) {;return 0;};

     if (!label->refcnt) break;
     ADD_ELEM((ret), (LINK_ELEMENT *) (label));
     cond = cond->u2.node;
     goto again;
 }
      case NODE_OR:
 {
     LABEL *label = new_label_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))));
     if (!(compile_branch_condition(iseq, ret, cond->u1.node, then_label, label))) {;return 0;};

     if (!label->refcnt) break;
     ADD_ELEM((ret), (LINK_ELEMENT *) (label));
     cond = cond->u2.node;
     goto again;
 }
      case NODE_LIT:
      case NODE_TRUE:
      case NODE_STR:
      case NODE_ZARRAY:
      case NODE_LAMBDA:

 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))), YARVINSN_jump, 1, (VALUE)(then_label))), ((then_label)->refcnt++));
 break;
      case NODE_FALSE:
      case NODE_NIL:

 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))), YARVINSN_jump, 1, (VALUE)(else_label))), ((else_label)->refcnt++));
 break;
      case NODE_FLIP2:
 if (!(compile_flip_flop(iseq, ret, cond, TRUE, then_label, else_label))) {;return 0;};
 break;
      case NODE_FLIP3:
 if (!(compile_flip_flop(iseq, ret, cond, FALSE, then_label, else_label))) {;return 0;};
 break;
      case NODE_DEFINED:
 if (!(compile_defined_expr(iseq, ret, cond, ((VALUE)RUBY_Qfalse)))) {;return 0;};
 goto branch;
      default:
 if (!(((iseq_compile_each(iseq, (ret), (cond), 0))))) {;return 0;};
      branch:
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))), YARVINSN_branchunless, 1, (VALUE)(else_label))), ((else_label)->refcnt++));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cond)->flags)>>(8 +7))), YARVINSN_jump, 1, (VALUE)(then_label))), ((then_label)->refcnt++));
 break;
    }
    return 1;
}

static int
compile_array_keyword_arg(rb_iseq_t *iseq, LINK_ANCHOR *const ret,
     const NODE *const root_node,
     struct rb_call_info_kw_arg **const kw_arg_ptr,
     unsigned int *flag)
{
    if (kw_arg_ptr == ((void*)0)) return FALSE;

    if (((int) (((root_node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_HASH && root_node->u1.node && ((int) (((root_node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) {
 const NODE *node = root_node->u1.node;

 while (node) {
     const NODE *key_node = node->u1.node;

     ((((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) ? (void) (0) : __assert_fail ("nd_type(node) == NODE_ARRAY", "compile.c", 3474,  __PRETTY_FUNCTION__));
     if (!key_node) {
  if (flag && !root_node->u2.argc) *flag |= (0x01 << VM_CALL_KW_SPLAT_bit);
  return FALSE;
     }
     else if (((int) (((key_node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_LIT && ( ((RUBY_T_SYMBOL) == RUBY_T_FIXNUM) ? (((int)(long)(key_node->u1.value))&RUBY_FIXNUM_FLAG) : ((RUBY_T_SYMBOL) == RUBY_T_TRUE) ? ((key_node->u1.value) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_SYMBOL) == RUBY_T_FALSE) ? ((key_node->u1.value) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_SYMBOL) == RUBY_T_NIL) ? ((key_node->u1.value) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_SYMBOL) == RUBY_T_UNDEF) ? ((key_node->u1.value) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_SYMBOL) == RUBY_T_SYMBOL) ? ((((VALUE)(key_node->u1.value)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(key_node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key_node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key_node->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_SYMBOL) == RUBY_T_FLOAT) ? ( ((((int)(long)(key_node->u1.value))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(key_node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key_node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key_node->u1.value))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(key_node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key_node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key_node->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {

     }
     else {
  return FALSE;
     }
     node = node->u3.node;
     node = node->u3.node;
 }


 node = root_node->u1.node;
 {
     int len = (int)node->u2.argc / 2;
     struct rb_call_info_kw_arg *kw_arg = (struct rb_call_info_kw_arg *)ruby_xmalloc(sizeof(struct rb_call_info_kw_arg) + sizeof(VALUE) * (len - 1));
     VALUE *keywords = kw_arg->keywords;
     int i = 0;
     kw_arg->keyword_len = len;

     *kw_arg_ptr = kw_arg;

     for (i=0; node != ((void*)0); i++, node = node->u3.node->u3.node) {
  const NODE *key_node = node->u1.node;
  const NODE *val_node = node->u3.node->u1.node;
  keywords[i] = key_node->u1.value;
  ((iseq_compile_each(iseq, (ret), (val_node), 0)));
     }
     ((i == len) ? (void) (0) : __assert_fail ("i == len", "compile.c", 3506,  __PRETTY_FUNCTION__));
     return TRUE;
 }
    }
    return FALSE;
}

enum compile_array_type_t {
    COMPILE_ARRAY_TYPE_ARRAY,
    COMPILE_ARRAY_TYPE_HASH,
    COMPILE_ARRAY_TYPE_ARGS
};

static inline int
static_literal_node_p(const NODE *node)
{
    node = node->u1.node;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_LIT:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
 return TRUE;
      default:
 return FALSE;
    }
}

static inline VALUE
static_literal_value(const NODE *node)
{
    node = node->u1.node;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_NIL:
 return ((VALUE)RUBY_Qnil);
      case NODE_TRUE:
 return ((VALUE)RUBY_Qtrue);
      case NODE_FALSE:
 return ((VALUE)RUBY_Qfalse);
      default:
 return node->u1.value;
    }
}

static int
compile_array(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node_root,
       enum compile_array_type_t type, struct rb_call_info_kw_arg **keywords_ptr,
       unsigned int *flag, int popped)
{
    const NODE *node = node_root;
    int line = (int)(int)(((long)(node)->flags)>>(8 +7));
    int len = 0;

    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ZARRAY) {
 if (!popped) {
     switch (type) {
       case COMPILE_ARRAY_TYPE_ARRAY: ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)))); break;
       case COMPILE_ARRAY_TYPE_HASH: ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newhash, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)))); break;
       case COMPILE_ARRAY_TYPE_ARGS: break;
     }
 }
    }
    else {
 int opt_p = 1;
 int first = 1, i;

 while (node) {
     const NODE *start_node = node, *end_node;
     const NODE *kw = 0;
     const int max = 0x100;
     LINK_ANCHOR anchor[1] = {{{0,},}};
     (anchor->last = &anchor->anchor);

     for (i=0; i<max && node; i++, len++, node = node->u3.node) {
  if (0 > 0) {
      do { const NODE *error_node = (node); enum node_type error_type = ((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)); if (error_type != (NODE_ARRAY)) { append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "compile_array: NODE_ARRAY is expected, but %s", ruby_node_name(error_type)); return -1; } } while (0);
  }

  if (type != COMPILE_ARRAY_TYPE_ARRAY && !node->u1.node) {
      kw = node->u3.node;
      node = 0;
      if (kw) {
   opt_p = 0;
   node = kw->u3.node;
   kw = kw->u1.node;
      }
      break;
  }
  if (opt_p && !static_literal_node_p(node)) {
      opt_p = 0;
  }

  if (type == COMPILE_ARRAY_TYPE_ARGS &&
      node->u3.node == ((void*)0) &&
      compile_array_keyword_arg(iseq, anchor, node->u1.node, keywords_ptr, flag)) {
      len--;
  }
  else {
      ((iseq_compile_each(iseq, (anchor), (node->u1.node), (popped))));
  }
     }

     if (opt_p && type != COMPILE_ARRAY_TYPE_ARGS) {
  if (!popped) {
      VALUE ary = rb_ary_tmp_new(i);

      end_node = node;
      node = start_node;

      while (node != end_node) {
   rb_ary_push(ary, static_literal_value(node));
   node = node->u3.node;
      }
      while (node && node->u3.node &&
      static_literal_node_p(node) &&
      static_literal_node_p(node->u3.node)) {
   VALUE elem[2];
   elem[0] = static_literal_value(node);
   elem[1] = static_literal_value(node->u3.node);
   rb_ary_cat(ary, elem, 2);
   node = node->u3.node->u3.node;
   len++;
      }

      rb_obj_freeze_inline((VALUE)ary);

      iseq_add_mark_object_compile_time(iseq, ary);

      if (first) {
   first = 0;
   if (type == COMPILE_ARRAY_TYPE_ARRAY) {
       ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_duparray, 1, (VALUE)(ary)));
   }
   else {
       ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
       ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(ary)));
       ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_hash_from_ary)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
   }
      }
      else {
   if (type == COMPILE_ARRAY_TYPE_ARRAY) {
       ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(ary)));
       ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
   }
   else {






       append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "core#hash_merge_ary");
       return -1;

   }
      }
  }
     }
     else {
  if (!popped || kw) {
      switch (type) {
        case COMPILE_ARRAY_TYPE_ARRAY:
   ADD_ELEM((anchor), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(i))<<1 | RUBY_FIXNUM_FLAG))));

   if (first) {
       first = 0;
   }
   else {
       ADD_ELEM((anchor), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
   }

   APPEND_LIST(ret, anchor);
   break;
        case COMPILE_ARRAY_TYPE_HASH:
   if (i > 0) {
       if (first) {
    if (!popped) {
        ADD_ELEM((anchor), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newhash, 1, (VALUE)((((VALUE)(i))<<1 | RUBY_FIXNUM_FLAG))));
    }
    APPEND_LIST(ret, anchor);
       }
       else {
    if (!popped) {
        ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
        ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
    }
    APPEND_LIST(ret, anchor);
    if (!popped) {
        ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_hash_merge_ptr)), (VALUE)(((((VALUE)(i + 1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
    }
       }
   }
   if (kw) {
       VALUE nhash = (i > 0 || !first) ? (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG) : (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
       if (!popped) {
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
    if (i > 0 || !first) ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
       }
       ((iseq_compile_each(iseq, (ret), (kw), 0)));
       if (popped) {
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
       }
       else {
    ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_hash_merge_kwd)), (VALUE)((nhash)), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
    if (nhash == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)) ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), (((__builtin_constant_p("dup") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("dup")), (long)strlen(("dup"))); (ID) rb_intern_id_cache; }) : rb_intern("dup")))), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
       }
   }
   first = 0;
   break;
        case COMPILE_ARRAY_TYPE_ARGS:
   APPEND_LIST(ret, anchor);
   break;
      }
  }
  else {

      APPEND_LIST(ret, anchor);
  }
     }
 }
    }
    return len;
}

static VALUE
case_when_optimizable_literal(const NODE *const node)
{
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_LIT: {
 VALUE v = node->u1.value;
 double ival;
 if (( ((RUBY_T_FLOAT) == RUBY_T_FIXNUM) ? (((int)(long)(v))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FLOAT) == RUBY_T_TRUE) ? ((v) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FLOAT) == RUBY_T_FALSE) ? ((v) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FLOAT) == RUBY_T_NIL) ? ((v) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FLOAT) == RUBY_T_UNDEF) ? ((v) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FLOAT) == RUBY_T_SYMBOL) ? ((((VALUE)(v)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FLOAT) == RUBY_T_FLOAT) ? ( ((((int)(long)(v))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_FLOAT))) &&
     modf(rb_float_value_inline(v), &ival) == 0.0) {
     return (((ival) < (9223372036854775807L>>1)+1) && ((ival) >= (((long)(-9223372036854775807L -1L))>>(int)(1)))) ? (((VALUE)((long)ival))<<1 | RUBY_FIXNUM_FLAG) : rb_dbl2big(ival);
 }
 if (((((VALUE)(v)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) || rb_obj_is_kind_of(v, rb_cNumeric)) {
     return v;
 }
 break;
      }
      case NODE_NIL:
 return ((VALUE)RUBY_Qnil);
      case NODE_TRUE:
 return ((VALUE)RUBY_Qtrue);
      case NODE_FALSE:
 return ((VALUE)RUBY_Qfalse);
      case NODE_STR:
 return rb_fstring(node->u1.value);
    }
    return ((VALUE)RUBY_Qundef);
}

static int
when_vals(rb_iseq_t *iseq, LINK_ANCHOR *const cond_seq, const NODE *vals,
   LABEL *l1, int only_special_literals, VALUE literals)
{
    while (vals) {
 const NODE *val = vals->u1.node;
 VALUE lit = case_when_optimizable_literal(val);

 if (lit == ((VALUE)RUBY_Qundef)) {
     only_special_literals = 0;
 }
 else {
     if (rb_hash_lookup(literals, lit) != ((VALUE)RUBY_Qnil)) {
  VALUE file = rb_iseq_path(iseq);
  rb_compile_warning((!(((struct RBasic*)(file))->flags & RSTRING_NOEMBED) ? ((struct RString*)(file))->as.ary : ((struct RString*)(file))->as.heap.ptr), (int)(((long)(val)->flags)>>(8 +7)),
       "duplicated when clause is ignored");
     }
     else {
  rb_hash_aset(literals, lit, (VALUE)(l1) | 1);
     }
 }

 ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(val)->flags)>>(8 +7))), YARVINSN_dup, 0));

 if (((int) (((val)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
     ((void)0);
     lit = freeze_literal(iseq, val->u1.value);
     ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(val)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(lit)));
 }
 else {
     ((iseq_compile_each(iseq, (cond_seq), (val), 0)));
 }

 ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_CASE))<<1 | RUBY_FIXNUM_FLAG))));
 (ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(val)->flags)>>(8 +7))), YARVINSN_branchif, 1, (VALUE)(l1))), ((l1)->refcnt++));
 vals = vals->u3.node;
    }
    return only_special_literals;
}

static int
compile_massign_lhs(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node)
{
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_ATTRASGN: {
 INSN *iobj;
 struct rb_call_info *ci;
 VALUE dupidx;
 int line = (int)(((long)(node)->flags)>>(8 +7));

 if (!(((iseq_compile_each(iseq, (ret), (node), 1))))) {;return 0;};

 iobj = (INSN *)get_prev_insn((INSN *)LAST_ELEMENT(ret));
 ci = (struct rb_call_info *)iobj->operands[0];
 ci->orig_argc += 1;
 dupidx = (((VALUE)(ci->orig_argc))<<1 | RUBY_FIXNUM_FLAG);

 ELEM_INSERT_PREV(&(iobj)->link, (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)(dupidx)));
 if (ci->flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
     --ci->orig_argc;
     ELEM_INSERT_PREV(&(iobj)->link, (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     ELEM_INSERT_PREV(&(iobj)->link, (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 break;
      }
      case NODE_MASGN: {
 LINK_ANCHOR anchor[1] = {{{0,},}};
 (anchor->last = &anchor->anchor);
 if (!(((iseq_compile_each(iseq, (anchor), (node), 1))))) {;return 0;};
 ELEM_REMOVE(FIRST_ELEMENT(anchor));
 APPEND_LIST((ret), (anchor));
 break;
      }
      default: {
 LINK_ANCHOR anchor[1] = {{{0,},}};
 (anchor->last = &anchor->anchor);
 if (!(((iseq_compile_each(iseq, (anchor), (node), 1))))) {;return 0;};
 ELEM_REMOVE(FIRST_ELEMENT(anchor));
 APPEND_LIST((ret), (anchor));
      }
    }

    return 1;
}

static int
compile_massign_opt_lhs(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *lhsn)
{
    if (lhsn) {
 if (!(compile_massign_opt_lhs(iseq, ret, lhsn->u3.node))) {;return 0;};
 if (!(compile_massign_lhs(iseq, ret, lhsn->u1.node))) {;return 0;};
    }
    return 1;
}

static int
compile_massign_opt(rb_iseq_t *iseq, LINK_ANCHOR *const ret,
      const NODE *rhsn, const NODE *orig_lhsn)
{
    VALUE mem[64];
    const int memsize = ((int)(sizeof(mem) / sizeof((mem)[0])));
    int memindex = 0;
    int llen = 0, rlen = 0;
    int i;
    const NODE *lhsn = orig_lhsn;
    if (rhsn == 0 || ((int) (((rhsn)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_ARRAY) {
 return 0;
    }

    while (lhsn) {
 const NODE *ln = lhsn->u1.node;
 switch (((int) (((ln)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_LASGN:
     { int i; if (memindex == memsize) return 0; for (i=0; i<memindex; i++) { if (mem[i] == (ln->u1.id)) return 0; } mem[memindex++] = (ln->u1.id); };
     break;
   case NODE_DASGN:
   case NODE_DASGN_CURR:
   case NODE_IASGN:
   case NODE_CVASGN:
     { int i; if (memindex == memsize) return 0; for (i=0; i<memindex; i++) { if (mem[i] == (ln->u1.id)) return 0; } mem[memindex++] = (ln->u1.id); };
     break;
   default:
     return 0;
 }
 lhsn = lhsn->u3.node;
 llen++;
    }

    while (rhsn) {
 if (llen <= rlen) {
     ((iseq_compile_each(iseq, (ret), (rhsn->u1.node), 1)));
 }
 else {
     ((iseq_compile_each(iseq, (ret), (rhsn->u1.node), 0)));
 }
 rhsn = rhsn->u3.node;
 rlen++;
    }

    if (llen > rlen) {
 for (i=0; i<llen-rlen; i++) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_lhsn)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 }
    }

    compile_massign_opt_lhs(iseq, ret, orig_lhsn);
    return 1;
}

static void
adjust_stack(rb_iseq_t *iseq, LINK_ANCHOR *const ret, int line, int rlen, int llen)
{
    if (rlen < llen) {
 do {ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));} while (++rlen < llen);
    }
    else if (rlen > llen) {
 do {ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));} while (--rlen > llen);
    }
}

static int
compile_massign(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const NODE *rhsn = node->u2.node;
    const NODE *splatn = node->u3.node;
    const NODE *lhsn = node->u1.node;
    int lhs_splat = (splatn && splatn != ((NODE *)-1)) ? 1 : 0;

    if (!popped || splatn || !compile_massign_opt(iseq, ret, rhsn, lhsn)) {
 int llen = 0;
 int expand = 1;
 LINK_ANCHOR lhsseq[1] = {{{0,},}};

 (lhsseq->last = &lhsseq->anchor);

 while (lhsn) {
     if (!(compile_massign_lhs(iseq, lhsseq, lhsn->u1.node))) {;return 0;};
     llen += 1;
     lhsn = lhsn->u3.node;
 }

 ((iseq_compile_each(iseq, (ret), (rhsn), 0)));

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_dup, 0));
 }
 else if (!lhs_splat) {
     INSN *last = (INSN*)ret->last;
     if (((&last->link)->type == ISEQ_ELEMENT_INSN) &&
  ((((INSN*)(last))->insn_id) == YARVINSN_newarray) &&
  last->operand_size == 1) {
  int rlen = ((int)rb_fix2int((VALUE)((((INSN*)(last))->operands[(0)]))));

  if (llen == 2) {
      POP_ELEMENT(ret);
      adjust_stack(iseq, ret, (int)(((long)(node)->flags)>>(8 +7)), rlen, llen);
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_swap, 0));
      expand = 0;
  }
  else if (llen > 2 && llen != rlen) {
      POP_ELEMENT(ret);
      adjust_stack(iseq, ret, (int)(((long)(node)->flags)>>(8 +7)), rlen, llen);
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_reverse, 1, (VALUE)((((VALUE)(llen))<<1 | RUBY_FIXNUM_FLAG))));
      expand = 0;
  }
  else if (llen > 2) {
      last->insn_id = YARVINSN_reverse;
      expand = 0;
  }
     }
 }
 if (expand) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_expandarray, 2, (VALUE)((((VALUE)(llen))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(lhs_splat))<<1 | RUBY_FIXNUM_FLAG))));

 }
 APPEND_LIST((ret), (lhsseq));

 if (lhs_splat) {
     if (((int) (((splatn)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_POSTARG) {

  const NODE *postn = splatn->u2.node;
  const NODE *restn = splatn->u1.node;
  int num = (int)postn->u2.argc;
  int flag = 0x02 | ((restn == ((NODE *)-1)) ? 0x00 : 0x01);

  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(splatn)->flags)>>(8 +7))), YARVINSN_expandarray, 2, (VALUE)((((VALUE)(num))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))));


  if (restn != ((NODE *)-1)) {
      if (!(compile_massign_lhs(iseq, ret, restn))) {;return 0;};
  }
  while (postn) {
      if (!(compile_massign_lhs(iseq, ret, postn->u1.node))) {;return 0;};
      postn = postn->u3.node;
  }
     }
     else {

  if (!(compile_massign_lhs(iseq, ret, splatn))) {;return 0;};
     }
 }
    }
    return 1;
}

static int
compile_const_prefix(rb_iseq_t *iseq, const NODE *const node,
       LINK_ANCHOR *const pref, LINK_ANCHOR *const body)
{
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_CONST:
 ((void)0);
 ADD_ELEM((body), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u1.id)))));
 break;
      case NODE_COLON3:
 ((void)0);
 ADD_ELEM((body), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_pop, 0));
 ADD_ELEM((body), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(rb_cObject)));
 ADD_ELEM((body), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u2.id)))));
 break;
      case NODE_COLON2:
 if (!(compile_const_prefix(iseq, node->u1.node, pref, body))) {;return 0;};
 ((void)0);
 ADD_ELEM((body), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u2.id)))));
 break;
      default:
 if (!(((iseq_compile_each(iseq, (pref), (node), 0))))) {;return 0;};
 break;
    }
    return 1;
}

static int
compile_cpath(LINK_ANCHOR *const ret, rb_iseq_t *iseq, const NODE *cpath)
{
    if (((int) (((cpath)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_COLON3) {

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cpath)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(rb_cObject)));
 return 0x08;
    }
    else if (cpath->u1.node) {

 ((iseq_compile_each(iseq, (ret), (cpath->u1.node), 0)));
 return 0x08;
    }
    else {

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(cpath)->flags)>>(8 +7))), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_CONST_BASE))<<1 | RUBY_FIXNUM_FLAG))));

 return 0;
    }
}


static int
defined_expr(rb_iseq_t *iseq, LINK_ANCHOR *const ret,
      const NODE *const node, LABEL **lfinish, VALUE needstr);

static int
defined_expr0(rb_iseq_t *iseq, LINK_ANCHOR *const ret,
       const NODE *const node, LABEL **lfinish, VALUE needstr)
{
    enum defined_type expr_type = 0;
    enum node_type type;

    switch (type = ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {


      case NODE_NIL:
 expr_type = DEFINED_NIL;
 break;
      case NODE_SELF:
 expr_type = DEFINED_SELF;
 break;
      case NODE_TRUE:
 expr_type = DEFINED_TRUE;
 break;
      case NODE_FALSE:
 expr_type = DEFINED_FALSE;
 break;

      case NODE_ARRAY:{
 const NODE *vals = node;

 do {
     defined_expr0(iseq, ret, vals->u1.node, lfinish, ((VALUE)RUBY_Qfalse));

     if (!lfinish[1]) {
  lfinish[1] = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));
     }
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_branchunless, 1, (VALUE)(lfinish[1]))), ((lfinish[1])->refcnt++));
 } while ((vals = vals->u3.node) != ((void*)0));
      }
      case NODE_STR:
      case NODE_LIT:
      case NODE_ZARRAY:
      case NODE_AND:
      case NODE_OR:
      default:
 expr_type = DEFINED_EXPR;
 break;


      case NODE_LVAR:
      case NODE_DVAR:
 expr_type = DEFINED_LVAR;
 break;

      case NODE_IVAR:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_IVAR))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u1.id))), (VALUE)(needstr)));

 return 1;

      case NODE_GVAR:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_GVAR))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u3.entry->id))), (VALUE)(needstr)));

 return 1;

      case NODE_CVAR:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_CVAR))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u1.id))), (VALUE)(needstr)));

 return 1;

      case NODE_CONST:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_CONST))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u1.id))), (VALUE)(needstr)));

 return 1;
      case NODE_COLON2:
 if (!lfinish[1]) {
     lfinish[1] = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));
 }
 defined_expr0(iseq, ret, node->u1.node, lfinish, ((VALUE)RUBY_Qfalse));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_branchunless, 1, (VALUE)(lfinish[1]))), ((lfinish[1])->refcnt++));
 ((iseq_compile_each(iseq, (ret), (node->u1.node), 0)));

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((rb_is_const_id(node->u2.id) ? (((VALUE)(DEFINED_CONST))<<1 | RUBY_FIXNUM_FLAG) : (((VALUE)(DEFINED_METHOD))<<1 | RUBY_FIXNUM_FLAG))), (VALUE)((rb_id2sym(node->u2.id))), (VALUE)(needstr)));



 return 1;
      case NODE_COLON3:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(rb_cObject)));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_CONST))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u2.id))), (VALUE)(needstr)));

 return 1;


      case NODE_CALL:
      case NODE_OPCALL:
      case NODE_VCALL:
      case NODE_FCALL:
      case NODE_ATTRASGN:{
 const int explicit_receiver =
     (type == NODE_CALL || type == NODE_OPCALL ||
      (type == NODE_ATTRASGN && !(((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF)));

 if (!lfinish[1] && (node->u3.node || explicit_receiver)) {
     lfinish[1] = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));
 }
 if (node->u3.node) {
     defined_expr0(iseq, ret, node->u3.node, lfinish, ((VALUE)RUBY_Qfalse));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_branchunless, 1, (VALUE)(lfinish[1]))), ((lfinish[1])->refcnt++));
 }
 if (explicit_receiver) {
     defined_expr0(iseq, ret, node->u1.node, lfinish, ((VALUE)RUBY_Qfalse));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_branchunless, 1, (VALUE)(lfinish[1]))), ((lfinish[1])->refcnt++));
     ((iseq_compile_each(iseq, (ret), (node->u1.node), 0)));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_METHOD))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u2.id))), (VALUE)(needstr)));

 }
 else {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putself, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_FUNC))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(node->u2.id))), (VALUE)(needstr)));

 }
 return 1;
      }

      case NODE_YIELD:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_YIELD))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)(0), (VALUE)(needstr)));

 return 1;

      case NODE_BACK_REF:
      case NODE_NTH_REF:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_REF))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)((node->u2.argc << 1) | (type == NODE_BACK_REF)))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)(needstr)));


 return 1;

      case NODE_SUPER:
      case NODE_ZSUPER:
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_ZSUPER))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)(0), (VALUE)(needstr)));

 return 1;

      case NODE_OP_ASGN1:
      case NODE_OP_ASGN2:
      case NODE_OP_ASGN_OR:
      case NODE_OP_ASGN_AND:
      case NODE_MASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
 expr_type = DEFINED_ASGN;
 break;
    }

    if (expr_type) {
 if (needstr != ((VALUE)RUBY_Qfalse)) {
     VALUE str = rb_iseq_defined_string(expr_type);
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(str)));
 }
 else {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qtrue))));
 }
 return 1;
    }
    return 0;
}

static int
defined_expr(rb_iseq_t *iseq, LINK_ANCHOR *const ret,
      const NODE *const node, LABEL **lfinish, VALUE needstr)
{
    LINK_ELEMENT *lcur = ret->last;
    int done = defined_expr0(iseq, ret, node, lfinish, needstr);
    if (lfinish[1]) {
 int line = (int)(((long)(node)->flags)>>(8 +7));
 LABEL *lstart = new_label_body(iseq, (line));
 LABEL *lend = new_label_body(iseq, (line));
 const rb_iseq_t *rescue;
 NODE tmp_node, *node = &tmp_node;
 rb_node_init(node, NODE_NIL, 0, 0, 0);
 rescue = new_child_iseq(iseq, (node), rb_fstring(rb_str_concat( ({ (__builtin_constant_p("defined guard in ")) ? rb_str_new_static(("defined guard in "), (long)strlen("defined guard in ")) : rb_str_new_cstr("defined guard in "); }), iseq->body->location.label)), iseq, (ISEQ_TYPE_DEFINED_GUARD), (0));




 lstart->rescued = LABEL_RESCUE_BEG;
 lend->rescued = LABEL_RESCUE_END;
 APPEND_ELEM((ret), (lcur), (LINK_ELEMENT *) (lstart));
 ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
 do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_RESCUE), (VALUE)(lstart) | 1, (VALUE)(lend) | 1, (VALUE)(rescue), (VALUE)(lfinish[1]) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((lstart) ? (((lstart)->refcnt++), (lstart)->unremovable=1) : 0); ((lend)->refcnt++); ((lfinish[1])->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
    }
    return done;
}

static int
compile_defined_expr(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, VALUE needstr)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    if (!node->u1.node) {
 VALUE str = rb_iseq_defined_string(DEFINED_NIL);
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(str)));
    }
    else {
 LABEL *lfinish[2];
 LINK_ELEMENT *last = ret->last;
 lfinish[0] = new_label_body(iseq, (line));
 lfinish[1] = 0;
 defined_expr(iseq, ret, node->u1.node, lfinish, needstr);
 if (lfinish[1]) {
     ELEM_INSERT_NEXT(last, &new_insn_body(iseq, line, YARVINSN_putnil, 0)->link);
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) (lfinish[1]));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) (lfinish[0]));
    }
    return 1;
}

static VALUE
make_name_for_block(const rb_iseq_t *orig_iseq)
{
    int level = 1;
    const rb_iseq_t *iseq = orig_iseq;

    if (orig_iseq->body->parent_iseq != 0) {
 while (orig_iseq->body->local_iseq != iseq) {
     if (iseq->body->type == ISEQ_TYPE_BLOCK) {
  level++;
     }
     iseq = iseq->body->parent_iseq;
 }
    }

    if (level == 1) {
 return rb_sprintf("block in %li\v", iseq->body->location.label);
    }
    else {
 return rb_sprintf("block (%d levels) in %li\v", level, iseq->body->location.label);
    }
}

static void
push_ensure_entry(rb_iseq_t *iseq,
    struct iseq_compile_data_ensure_node_stack *enl,
    struct ensure_range *er, const NODE *const node)
{
    enl->ensure_node = node;
    enl->prev = ISEQ_COMPILE_DATA(iseq)->ensure_node_stack;
    enl->erange = er;
    ISEQ_COMPILE_DATA(iseq)->ensure_node_stack = enl;
}

static void
add_ensure_range(rb_iseq_t *iseq, struct ensure_range *erange,
   LABEL *lstart, LABEL *lend)
{
    struct ensure_range *ne =
 compile_data_alloc(iseq, sizeof(struct ensure_range));

    while (erange->next != 0) {
 erange = erange->next;
    }
    ne->next = 0;
    ne->begin = lend;
    ne->end = erange->end;
    erange->end = lstart;

    erange->next = ne;
}

static void
add_ensure_iseq(LINK_ANCHOR *const ret, rb_iseq_t *iseq, int is_return)
{
    struct iseq_compile_data_ensure_node_stack *enlp =
 ISEQ_COMPILE_DATA(iseq)->ensure_node_stack;
    struct iseq_compile_data_ensure_node_stack *prev_enlp = enlp;
    LINK_ANCHOR ensure[1] = {{{0,},}};

    (ensure->last = &ensure->anchor);
    while (enlp) {
 if (enlp->erange != ((void*)0)) {
     LINK_ANCHOR ensure_part[1] = {{{0,},}};
     LABEL *lstart = new_label_body(iseq, (0));
     LABEL *lend = new_label_body(iseq, (0));
     (ensure_part->last = &ensure_part->anchor);

     add_ensure_range(iseq, enlp->erange, lstart, lend);

     ISEQ_COMPILE_DATA(iseq)->ensure_node_stack = enlp->prev;
     ADD_ELEM((ensure_part), (LINK_ELEMENT *) (lstart));
     ((iseq_compile_each(iseq, (ensure_part), (enlp->ensure_node), 1)));
     ADD_ELEM((ensure_part), (LINK_ELEMENT *) (lend));
     APPEND_LIST((ensure), (ensure_part));
 }
 else {
     if (!is_return) {
  break;
     }
 }
 enlp = enlp->prev;
    }
    ISEQ_COMPILE_DATA(iseq)->ensure_node_stack = prev_enlp;
    APPEND_LIST((ret), (ensure));
}

static VALUE
setup_args(rb_iseq_t *iseq, LINK_ANCHOR *const args, const NODE *argn,
    unsigned int *flag, struct rb_call_info_kw_arg **keywords)
{
    VALUE argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    int nsplat = 0;
    LINK_ANCHOR arg_block[1] = {{{0,},}};
    LINK_ANCHOR args_splat[1] = {{{0,},}};

    (arg_block->last = &arg_block->anchor);
    (args_splat->last = &args_splat->anchor);
    if (argn && ((int) (((argn)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BLOCK_PASS) {
 ((iseq_compile_each(iseq, (arg_block), (argn->u2.node), 0)));
 *flag |= (0x01 << VM_CALL_ARGS_BLOCKARG_bit);
 argn = argn->u1.node;
    }

  setup_argn:
    if (argn) {
 switch (((int) (((argn)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_SPLAT: {
     ((iseq_compile_each(iseq, (args), (argn->u1.node), 0)));
     ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(argn)->flags)>>(8 +7))), YARVINSN_splatarray, 1, (VALUE)(nsplat ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse))));
     argc = (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
     nsplat++;
     *flag |= (0x01 << VM_CALL_ARGS_SPLAT_bit);
     break;
   }
   case NODE_ARGSCAT:
   case NODE_ARGSPUSH: {
     int next_is_array = (((int) (((argn->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY);
     LINK_ANCHOR tmp[1] = {{{0,},}};

     (tmp->last = &tmp->anchor);
     ((iseq_compile_each(iseq, (tmp), (argn->u2.node), 0)));
     if (((int) (((argn)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARGSCAT) {
  ADD_ELEM((tmp), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(argn)->flags)>>(8 +7))), YARVINSN_splatarray, 1, (VALUE)(nsplat ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse))));
     }
     else {
  ADD_ELEM((tmp), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(argn)->flags)>>(8 +7))), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     }
     INSERT_LIST(args_splat, tmp);
     nsplat++;
     *flag |= (0x01 << VM_CALL_ARGS_SPLAT_bit);
     if (((int) (((argn->u2.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_HASH)
  *flag |= (0x01 << VM_CALL_KW_SPLAT_bit);

     if (next_is_array) {
  int len = compile_array(iseq, args, argn->u1.node, COMPILE_ARRAY_TYPE_ARGS, ((void*)0), flag, FALSE);
  if (len < 0) return ((VALUE)RUBY_Qnil);
  argc = (((VALUE)(len + 1))<<1 | RUBY_FIXNUM_FLAG);
     }
     else {
  argn = argn->u1.node;
  goto setup_argn;
     }
     break;
   }
   case NODE_ARRAY:
     {
  int len = compile_array(iseq, args, argn, COMPILE_ARRAY_TYPE_ARGS, keywords, flag, FALSE);
  if (len < 0) return ((VALUE)RUBY_Qnil);
  argc = (((VALUE)(len))<<1 | RUBY_FIXNUM_FLAG);
  break;
     }
   default: {
     do { const NODE *error_node = (argn); append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "setup_arg: unknown node (%s)", ruby_node_name(((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)))); return ((VALUE)RUBY_Qnil); } while (0);
   }
 }
    }

    if (nsplat > 1) {
 int i;
 for (i=1; i<nsplat; i++) {
     ADD_ELEM((args_splat), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(argn)->flags)>>(8 +7))), YARVINSN_concatarray, 0));
 }
    }

    if (!LIST_INSN_SIZE_ZERO(args_splat)) {
 APPEND_LIST((args), (args_splat));
    }

    if (*flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) {
 if (LIST_INSN_SIZE_ONE(arg_block)) {
     LINK_ELEMENT *elem = FIRST_ELEMENT(arg_block);
     if (elem->type == ISEQ_ELEMENT_INSN) {
  INSN *iobj = (INSN *)elem;
  if (iobj->insn_id == YARVINSN_getblockparam) {
      iobj->insn_id = YARVINSN_getlocal;
      *flag |= (0x01 << VM_CALL_ARGS_BLOCKARG_BLOCKPARAM_bit);
  }
     }
 }
 APPEND_LIST((args), (arg_block));
    }
    return argc;
}

static VALUE
build_postexe_iseq(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *body)
{
    int line = (int)(((long)(body)->flags)>>(8 +7));
    VALUE argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    const rb_iseq_t *block = new_child_iseq(iseq, (body), rb_fstring(make_name_for_block(iseq->body->parent_iseq)), iseq, (ISEQ_TYPE_BLOCK), (line));

    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
    ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_set_postexe)), (VALUE)((argc)), ((block)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
    iseq_set_local_table(iseq, 0);
    return ((VALUE)RUBY_Qnil);
}

static void
compile_named_capture_assign(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node)
{
    const NODE *vars;
    LINK_ELEMENT *last;
    int line = (int)(((long)(node)->flags)>>(8 +7));
    LABEL *fail_label = new_label_body(iseq, (line)), *end_label = new_label_body(iseq, (line));


    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getglobal, 1, (VALUE)(((VALUE)rb_global_entry(idBACKREF) | 1))));



    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(fail_label))), ((fail_label)->refcnt++));

    for (vars = node; vars; vars = vars->u3.node) {
 INSN *cap;
 if (vars->u3.node) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 last = ret->last;
 ((iseq_compile_each(iseq, (ret), (vars->u1.node), 1)));
 last = last->next;
 cap = new_insn_send(iseq, line, idAREF, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG),
       ((void*)0), (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), ((void*)0));
 ELEM_INSERT_PREV(last->next, (LINK_ELEMENT *)cap);

 if (!vars->u3.node && vars == node) {

     LINK_ANCHOR nom[1] = {{{0,},}};

     (nom->last = &nom->anchor);
     (ADD_ELEM((nom), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
     ADD_ELEM((nom), (LINK_ELEMENT *) (fail_label));




     ADD_ELEM((nom), (LINK_ELEMENT *) (end_label));
     (nom->last->next = cap->link.next)->prev = nom->last;
     (cap->link.next = nom->anchor.next)->prev = &cap->link;
     return;
 }

    }
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
    ADD_ELEM((ret), (LINK_ELEMENT *) (fail_label));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    for (vars = node; vars; vars = vars->u3.node) {
 last = ret->last;
 ((iseq_compile_each(iseq, (ret), (vars->u1.node), 1)));
 last = last->next;
 ((INSN*)last)->insn_id = YARVINSN_putnil;
 ((INSN*)last)->operand_size = 0;
    }
    ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
}

static int
number_literal_p(const NODE *n)
{
    return (n && ((int) (((n)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_LIT &&  ({ const VALUE integer_type_obj = (n->u1.value); ((((int)(long)(integer_type_obj))&RUBY_FIXNUM_FLAG) || (!(((VALUE)(integer_type_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(integer_type_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(integer_type_obj))->flags & RUBY_T_MASK) == RUBY_T_BIGNUM)); }));
}

static int
compile_if(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped, const enum node_type type)
{
    const NODE *const node_body = type == NODE_IF ? node->u2.node : node->u3.node;
    const NODE *const node_else = type == NODE_IF ? node->u3.node : node->u2.node;

    const int line = (int)(((long)(node)->flags)>>(8 +7));
    const int lineno = ((int)((node)->nd_loc.first_loc.lineno));
    const int column = ((int)((node)->nd_loc.first_loc.column));
    const int last_lineno = ((int)((node)->nd_loc.last_loc.lineno));
    const int last_column = ((int)((node)->nd_loc.last_loc.column));
    LINK_ANCHOR cond_seq[1] = {{{0,},}};
    LINK_ANCHOR then_seq[1] = {{{0,},}};
    LINK_ANCHOR else_seq[1] = {{{0,},}};
    LABEL *then_label, *else_label, *end_label;
    VALUE branches = 0;

    (cond_seq->last = &cond_seq->anchor);
    (then_seq->last = &then_seq->anchor);
    (else_seq->last = &else_seq->anchor);
    then_label = new_label_body(iseq, (line));
    else_label = new_label_body(iseq, (line));
    end_label = 0;

    compile_branch_condition(iseq, cond_seq, node->u1.node,
        then_label, else_label);
    if (!(((iseq_compile_each(iseq, (then_seq), (node_body), (popped)))))) {;return 0;};
    if (!(((iseq_compile_each(iseq, (else_seq), (node_else), (popped)))))) {;return 0;};

    APPEND_LIST((ret), (cond_seq));

    if (then_label->refcnt && else_label->refcnt) {
 do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (lineno) > 0) { VALUE structure = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[0]); branches = rb_ary_tmp_new(0); rb_ary_push(structure, branches); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p(type == NODE_IF ? "if": "unless") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((type == NODE_IF ? "if": "unless")), (long)strlen((type == NODE_IF ? "if": "unless"))); (ID) rb_intern_id_cache; }) : rb_intern(type == NODE_IF ? "if": "unless"))))); rb_ary_push(branches, (((VALUE)(lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(last_column))<<1 | RUBY_FIXNUM_FLAG)); } } while (0);
    }

    if (then_label->refcnt) {
 ADD_ELEM((ret), (LINK_ELEMENT *) (then_label));
 if (else_label->refcnt) {
     do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node_body ? ((int)((node_body)->nd_loc.first_loc.lineno)) : lineno) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p(type == NODE_IF ? "then": "else") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((type == NODE_IF ? "then": "else")), (long)strlen((type == NODE_IF ? "then": "else"))); (ID) rb_intern_id_cache; }) : rb_intern(type == NODE_IF ? "then": "else"))))); rb_ary_push(branches, (((VALUE)(node_body ? ((int)((node_body)->nd_loc.first_loc.lineno)) : lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_body ? ((int)((node_body)->nd_loc.first_loc.column)) : column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_body ? ((int)((node_body)->nd_loc.last_loc.lineno)) : last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_body ? ((int)((node_body)->nd_loc.last_loc.column)) : last_column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((node_body ? ((int)((node_body)->nd_loc.first_loc.lineno)) : lineno)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







 }
 APPEND_LIST((ret), (then_seq));
 end_label = new_label_body(iseq, (line));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
    }

    if (else_label->refcnt) {
 ADD_ELEM((ret), (LINK_ELEMENT *) (else_label));
 if (then_label->refcnt) {
     do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node_else ? ((int)((node_else)->nd_loc.first_loc.lineno)) : lineno) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p(type == NODE_IF ? "else": "then") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((type == NODE_IF ? "else": "then")), (long)strlen((type == NODE_IF ? "else": "then"))); (ID) rb_intern_id_cache; }) : rb_intern(type == NODE_IF ? "else": "then"))))); rb_ary_push(branches, (((VALUE)(node_else ? ((int)((node_else)->nd_loc.first_loc.lineno)) : lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_else ? ((int)((node_else)->nd_loc.first_loc.column)) : column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_else ? ((int)((node_else)->nd_loc.last_loc.lineno)) : last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node_else ? ((int)((node_else)->nd_loc.last_loc.column)) : last_column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((node_else ? ((int)((node_else)->nd_loc.first_loc.lineno)) : lineno)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







 }
 APPEND_LIST((ret), (else_seq));
    }

    if (end_label) {
 ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
    }

    return 1;
}

static int
compile_case(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const orig_node, int popped)
{
    const NODE *vals;
    const NODE *node = orig_node;
    LABEL *endlabel, *elselabel;
    LINK_ANCHOR head[1] = {{{0,},}};
    LINK_ANCHOR body_seq[1] = {{{0,},}};
    LINK_ANCHOR cond_seq[1] = {{{0,},}};
    int only_special_literals = 1;
    VALUE literals = rb_hash_new();
    int line, lineno, column, last_lineno, last_column;
    enum node_type type;
    VALUE branches = 0;

    (head->last = &head->anchor);
    (body_seq->last = &body_seq->anchor);
    (cond_seq->last = &cond_seq->anchor);

    rb_hash_tbl_raw(literals)->type = &cdhash_type;

    if (!(((iseq_compile_each(iseq, (head), (node->u1.node), 0))))) {;return 0;};

    do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((node)->nd_loc.first_loc.lineno))) > 0) { VALUE structure = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[0]); branches = rb_ary_tmp_new(0); rb_ary_push(structure, branches); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("case") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("case")), (long)strlen(("case"))); (ID) rb_intern_id_cache; }) : rb_intern("case"))))); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); } } while (0);

    node = node->u2.node;
    type = ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8));
    line = (int)(((long)(node)->flags)>>(8 +7));
    lineno = ((int)((node)->nd_loc.first_loc.lineno));
    column = ((int)((node)->nd_loc.first_loc.column));
    last_lineno = ((int)((node)->nd_loc.last_loc.lineno));
    last_column = ((int)((node)->nd_loc.last_loc.column));

    if (type != NODE_WHEN) {
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "NODE_CASE: unexpected node. must be NODE_WHEN, but %s", ruby_node_name(type));
 return 0;
    }

    endlabel = new_label_body(iseq, (line));
    elselabel = new_label_body(iseq, (line));

    APPEND_LIST((ret), (head));

    while (type == NODE_WHEN) {
 LABEL *l1;

 l1 = new_label_body(iseq, (line));
 ADD_ELEM((body_seq), (LINK_ELEMENT *) (l1));
 ADD_ELEM((body_seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("when") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("when")), (long)strlen(("when"))); (ID) rb_intern_id_cache; }) : rb_intern("when"))))); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.column)) : column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.lineno)) : last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.column)) : last_column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((body_seq)), (LINK_ELEMENT *) new_insn_body(iseq, ((node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







 if (!(((iseq_compile_each(iseq, (body_seq), (node->u2.node), (popped)))))) {;return 0;};
 (ADD_ELEM((body_seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(endlabel))), ((endlabel)->refcnt++));

 vals = node->u1.node;
 if (vals) {
     switch (((int) (((vals)->flags & (((VALUE)0x7f)<<8))>>8))) {
       case NODE_ARRAY:
  only_special_literals = when_vals(iseq, cond_seq, vals, l1, only_special_literals, literals);
  break;
       case NODE_SPLAT:
       case NODE_ARGSCAT:
       case NODE_ARGSPUSH:
  only_special_literals = 0;
  ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_dup, 0));
  if (!(((iseq_compile_each(iseq, (cond_seq), (vals), 0))))) {;return 0;};
  ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_CASE | 0x04))<<1 | RUBY_FIXNUM_FLAG))));
  (ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_branchif, 1, (VALUE)(l1))), ((l1)->refcnt++));
  break;
       default:
  do { const NODE *error_node = (vals); append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "NODE_CASE: unknown node (%s)", ruby_node_name(((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)))); return 0; } while (0);
     }
 }
 else {
     do { append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "NODE_CASE: must be NODE_ARRAY, but 0"); return 0; } while (0);
 }

 node = node->u3.node;
 if (!node) {
     break;
 }
 type = ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8));
 line = (int)(((long)(node)->flags)>>(8 +7));
 lineno = ((int)((node)->nd_loc.first_loc.lineno));
 column = ((int)((node)->nd_loc.first_loc.column));
 last_lineno = ((int)((node)->nd_loc.last_loc.lineno));
 last_column = ((int)((node)->nd_loc.last_loc.column));
    }

    if (node) {
 ADD_ELEM((cond_seq), (LINK_ELEMENT *) (elselabel));
 ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((node)->nd_loc.first_loc.lineno))) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("else") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("else")), (long)strlen(("else"))); (ID) rb_intern_id_cache; }) : rb_intern("else"))))); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((cond_seq)), (LINK_ELEMENT *) new_insn_body(iseq, ((((int)((node)->nd_loc.first_loc.lineno)))), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);
 if (!(((iseq_compile_each(iseq, (cond_seq), (node), (popped)))))) {;return 0;};
 (ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(endlabel))), ((endlabel)->refcnt++));
    }
    else {
 if(0)printf("== else (implicit)\n");
 ADD_ELEM((cond_seq), (LINK_ELEMENT *) (elselabel));
 ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_pop, 0));
 do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((orig_node)->nd_loc.first_loc.lineno))) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("else") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("else")), (long)strlen(("else"))); (ID) rb_intern_id_cache; }) : rb_intern("else"))))); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((cond_seq)), (LINK_ELEMENT *) new_insn_body(iseq, ((((int)((orig_node)->nd_loc.first_loc.lineno)))), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);
 if (!popped) {
     ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_putnil, 0));
 }
 (ADD_ELEM((cond_seq), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_jump, 1, (VALUE)(endlabel))), ((endlabel)->refcnt++));
    }

    if (only_special_literals) {
 iseq_add_mark_object(iseq, literals);

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_dup, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_opt_case_dispatch, 2, (VALUE)(literals), (VALUE)(elselabel)));
 ((elselabel)->refcnt++);
    }

    APPEND_LIST((ret), (cond_seq));
    APPEND_LIST((ret), (body_seq));
    ADD_ELEM((ret), (LINK_ELEMENT *) (endlabel));
    return 1;
}

static int
compile_case2(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const orig_node, int popped)
{
    const NODE *vals;
    const NODE *val;
    const NODE *node = orig_node->u2.node;
    LABEL *endlabel;
    LINK_ANCHOR body_seq[1] = {{{0,},}};
    VALUE branches = 0;

    do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((orig_node)->nd_loc.first_loc.lineno))) > 0) { VALUE structure = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[0]); branches = rb_ary_tmp_new(0); rb_ary_push(structure, branches); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("case") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("case")), (long)strlen(("case"))); (ID) rb_intern_id_cache; }) : rb_intern("case"))))); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((orig_node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); } } while (0);

    (body_seq->last = &body_seq->anchor);
    endlabel = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));

    while (node && ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_WHEN) {
 const int line = (int)(((long)(node)->flags)>>(8 +7));
 const int lineno = ((int)((node)->nd_loc.first_loc.lineno));
 const int column = ((int)((node)->nd_loc.first_loc.column));
 const int last_lineno = ((int)((node)->nd_loc.last_loc.lineno));
 const int last_column = ((int)((node)->nd_loc.last_loc.column));
 LABEL *l1 = new_label_body(iseq, (line));
 ADD_ELEM((body_seq), (LINK_ELEMENT *) (l1));
 do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("when") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("when")), (long)strlen(("when"))); (ID) rb_intern_id_cache; }) : rb_intern("when"))))); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.column)) : column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.lineno)) : last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.column)) : last_column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((body_seq)), (LINK_ELEMENT *) new_insn_body(iseq, ((node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







 if (!(((iseq_compile_each(iseq, (body_seq), (node->u2.node), (popped)))))) {;return 0;};
 (ADD_ELEM((body_seq), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(endlabel))), ((endlabel)->refcnt++));

 vals = node->u1.node;
 if (!vals) {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "NODE_WHEN: must be NODE_ARRAY, but 0");
     return 0;
 }
 switch (((int) (((vals)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_ARRAY:
     while (vals) {
  val = vals->u1.node;
  if (!(((iseq_compile_each(iseq, (ret), (val), 0))))) {;return 0;};
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(val)->flags)>>(8 +7))), YARVINSN_branchif, 1, (VALUE)(l1))), ((l1)->refcnt++));
  vals = vals->u3.node;
     }
     break;
   case NODE_SPLAT:
   case NODE_ARGSCAT:
   case NODE_ARGSPUSH:
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_putnil, 0));
     if (!(((iseq_compile_each(iseq, (ret), (vals), 0))))) {;return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_WHEN | 0x04))<<1 | RUBY_FIXNUM_FLAG))));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(vals)->flags)>>(8 +7))), YARVINSN_branchif, 1, (VALUE)(l1))), ((l1)->refcnt++));
     break;
   default:
     do { const NODE *error_node = (vals); append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "NODE_WHEN: unknown node (%s)", ruby_node_name(((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)))); return 0; } while (0);
 }
 node = node->u3.node;
    }

    do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node ? ((int)((node)->nd_loc.first_loc.lineno)) : ((int)((orig_node)->nd_loc.first_loc.lineno))) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("else") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("else")), (long)strlen(("else"))); (ID) rb_intern_id_cache; }) : rb_intern("else"))))); rb_ary_push(branches, (((VALUE)(node ? ((int)((node)->nd_loc.first_loc.lineno)) : ((int)((orig_node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node ? ((int)((node)->nd_loc.first_loc.column)) : ((int)((orig_node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node ? ((int)((node)->nd_loc.last_loc.lineno)) : ((int)((orig_node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node ? ((int)((node)->nd_loc.last_loc.column)) : ((int)((orig_node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((node ? ((int)((node)->nd_loc.first_loc.lineno)) : ((int)((orig_node)->nd_loc.first_loc.lineno)))), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







    if (!(((iseq_compile_each(iseq, (ret), (node), (popped)))))) {;return 0;};
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(orig_node)->flags)>>(8 +7))), YARVINSN_jump, 1, (VALUE)(endlabel))), ((endlabel)->refcnt++));

    APPEND_LIST((ret), (body_seq));
    ADD_ELEM((ret), (LINK_ELEMENT *) (endlabel));
    return 1;
}

static int
compile_loop(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped, const enum node_type type)
{
    const int line = (int)(int)(((long)(node)->flags)>>(8 +7));
    const int lineno = ((int)((node)->nd_loc.first_loc.lineno));
    const int column = ((int)((node)->nd_loc.first_loc.column));
    const int last_lineno = ((int)((node)->nd_loc.last_loc.lineno));
    const int last_column = ((int)((node)->nd_loc.last_loc.column));
    LABEL *prev_start_label = ISEQ_COMPILE_DATA(iseq)->start_label;
    LABEL *prev_end_label = ISEQ_COMPILE_DATA(iseq)->end_label;
    LABEL *prev_redo_label = ISEQ_COMPILE_DATA(iseq)->redo_label;
    int prev_loopval_popped = ISEQ_COMPILE_DATA(iseq)->loopval_popped;
    VALUE branches = 0;

    struct iseq_compile_data_ensure_node_stack enl;

    LABEL *next_label = ISEQ_COMPILE_DATA(iseq)->start_label = new_label_body(iseq, (line));
    LABEL *redo_label = ISEQ_COMPILE_DATA(iseq)->redo_label = new_label_body(iseq, (line));
    LABEL *break_label = ISEQ_COMPILE_DATA(iseq)->end_label = new_label_body(iseq, (line));
    LABEL *end_label = new_label_body(iseq, (line));
    LABEL *adjust_label = new_label_body(iseq, (line));

    LABEL *next_catch_label = new_label_body(iseq, (line));
    LABEL *tmp_label = ((void*)0);

    ISEQ_COMPILE_DATA(iseq)->loopval_popped = 0;
    push_ensure_entry(iseq, &enl, ((void*)0), ((void*)0));

    if (node->u3.state == 1) {
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(next_label))), ((next_label)->refcnt++));
    }
    else {
 tmp_label = new_label_body(iseq, (line));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(tmp_label))), ((tmp_label)->refcnt++));
    }
    ADD_ELEM((ret), (LINK_ELEMENT *) (adjust_label));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
    ADD_ELEM((ret), (LINK_ELEMENT *) (next_catch_label));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(next_label))), ((next_label)->refcnt++));
    if (tmp_label) ADD_ELEM((ret), (LINK_ELEMENT *) (tmp_label));

    ADD_ELEM((ret), (LINK_ELEMENT *) (redo_label));
    do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (lineno) > 0) { VALUE structure = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[0]); branches = rb_ary_tmp_new(0); rb_ary_push(structure, branches); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p(type == NODE_WHILE ? "while": "until") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((type == NODE_WHILE ? "while": "until")), (long)strlen((type == NODE_WHILE ? "while": "until"))); (ID) rb_intern_id_cache; }) : rb_intern(type == NODE_WHILE ? "while": "until"))))); rb_ary_push(branches, (((VALUE)(lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(last_column))<<1 | RUBY_FIXNUM_FLAG)); } } while (0);
    do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("body") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("body")), (long)strlen(("body"))); (ID) rb_intern_id_cache; }) : rb_intern("body"))))); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.column)) : column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.lineno)) : last_lineno))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(node->u2.node ? ((int)((node->u2.node)->nd_loc.last_loc.column)) : last_column))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((node->u2.node ? ((int)((node->u2.node)->nd_loc.first_loc.lineno)) : lineno)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);







    if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 1))))) {;return 0;};
    ADD_ELEM((ret), (LINK_ELEMENT *) (next_label));

    if (type == NODE_WHILE) {
 compile_branch_condition(iseq, ret, node->u1.node,
     redo_label, end_label);
    }
    else {

 compile_branch_condition(iseq, ret, node->u1.node,
     end_label, redo_label);
    }

    ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (adjust_label), -1));

    if (node->u3.state == ((VALUE)RUBY_Qundef)) {

 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "unsupported: putundef");
 return 0;
    }
    else {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
    }

    ADD_ELEM((ret), (LINK_ELEMENT *) (break_label));

    if (popped) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    }

    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_BREAK), (VALUE)(redo_label) | 1, (VALUE)(break_label) | 1, (VALUE)(((void*)0)), (VALUE)(break_label) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((redo_label) ? (((redo_label)->refcnt++), (redo_label)->unremovable=1) : 0); ((break_label)->refcnt++); ((break_label)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);

    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_NEXT), (VALUE)(redo_label) | 1, (VALUE)(break_label) | 1, (VALUE)(((void*)0)), (VALUE)(next_catch_label) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((redo_label) ? (((redo_label)->refcnt++), (redo_label)->unremovable=1) : 0); ((break_label)->refcnt++); ((next_catch_label)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);

    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_REDO), (VALUE)(redo_label) | 1, (VALUE)(break_label) | 1, (VALUE)(((void*)0)), (VALUE)(ISEQ_COMPILE_DATA(iseq)->redo_label) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((redo_label) ? (((redo_label)->refcnt++), (redo_label)->unremovable=1) : 0); ((break_label)->refcnt++); ((ISEQ_COMPILE_DATA(iseq)->redo_label)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);


    ISEQ_COMPILE_DATA(iseq)->start_label = prev_start_label;
    ISEQ_COMPILE_DATA(iseq)->end_label = prev_end_label;
    ISEQ_COMPILE_DATA(iseq)->redo_label = prev_redo_label;
    ISEQ_COMPILE_DATA(iseq)->loopval_popped = prev_loopval_popped;
    ISEQ_COMPILE_DATA(iseq)->ensure_node_stack = ISEQ_COMPILE_DATA(iseq)->ensure_node_stack->prev;
    return 1;
}

static int
compile_iter(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    const rb_iseq_t *prevblock = ISEQ_COMPILE_DATA(iseq)->current_block;
    LABEL *retry_label = new_label_body(iseq, (line));
    LABEL *retry_end_l = new_label_body(iseq, (line));
    const rb_iseq_t *child_iseq;

    ADD_ELEM((ret), (LINK_ELEMENT *) (retry_label));
    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_FOR) {
 if (!(((iseq_compile_each(iseq, (ret), (node->u3.node), 0))))) {;return 0;};

 ISEQ_COMPILE_DATA(iseq)->current_block = child_iseq =
     new_child_iseq(iseq, (node->u2.node), rb_fstring(make_name_for_block(iseq)), iseq, (ISEQ_TYPE_BLOCK), (line));

 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idEach)), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), ((child_iseq)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
    }
    else {
 ISEQ_COMPILE_DATA(iseq)->current_block = child_iseq =
     new_child_iseq(iseq, (node->u2.node), rb_fstring(make_name_for_block(iseq)), iseq, (ISEQ_TYPE_BLOCK), (line));

 if (!(((iseq_compile_each(iseq, (ret), (node->u3.node), 0))))) {;return 0;};
    }
    ADD_ELEM((ret), (LINK_ELEMENT *) (retry_end_l));

    if (popped) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    }

    ISEQ_COMPILE_DATA(iseq)->current_block = prevblock;

    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_BREAK), (VALUE)(retry_label) | 1, (VALUE)(retry_end_l) | 1, (VALUE)(child_iseq), (VALUE)(retry_end_l) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((retry_label) ? (((retry_label)->refcnt++), (retry_label)->unremovable=1) : 0); ((retry_end_l)->refcnt++); ((retry_end_l)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
    return 1;
}

static int
compile_for(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    if (node->u1.node) {



 const NODE *var = node->u1.node;
 LABEL *not_single = new_label_body(iseq, ((int)(((long)(var)->flags)>>(8 +7))));
 LABEL *not_ary = new_label_body(iseq, ((int)(((long)(var)->flags)>>(8 +7))));
 if (!(((iseq_compile_each(iseq, (ret), (var), 0))))) {;return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idLength)), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idEq)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(not_single))), ((not_single)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idAREF)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(rb_cArray)));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idEqq)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(not_ary))), ((not_ary)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) (not_ary));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) (not_single));
 return 1;
    }
    else {
 return compile_iter(iseq, ret, node, popped);
    }
}

static int
compile_break(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    unsigned long level = 0;

    if (ISEQ_COMPILE_DATA(iseq)->redo_label != 0) {

 LABEL *splabel = new_label_body(iseq, (0));
 ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (ISEQ_COMPILE_DATA(iseq)->redo_label), (line)));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), (ISEQ_COMPILE_DATA(iseq)->loopval_popped)))))) {;return 0;};

 add_ensure_iseq(ret, iseq, 0);
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(ISEQ_COMPILE_DATA(iseq)->end_label))), ((ISEQ_COMPILE_DATA(iseq)->end_label)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    else if (iseq->body->type == ISEQ_TYPE_BLOCK) {
      break_by_insn:

 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_throw, 1, (VALUE)((((VALUE)(level | RUBY_TAG_BREAK))<<1 | RUBY_FIXNUM_FLAG))));
 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
    }
    else if (iseq->body->type == ISEQ_TYPE_EVAL) {
      break_in_eval:
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Can't escape from eval with break");
 return 0;
    }
    else {
 const rb_iseq_t *ip = iseq->body->parent_iseq;

 while (ip) {
     if (!ISEQ_COMPILE_DATA(ip)) {
  ip = 0;
  break;
     }

     level++;
     if (ISEQ_COMPILE_DATA(ip)->redo_label != 0) {
  level = VM_THROW_NO_ESCAPE_FLAG;
  goto break_by_insn;
     }
     else if (ip->body->type == ISEQ_TYPE_BLOCK) {
  level <<= VM_THROW_LEVEL_SHIFT;
  goto break_by_insn;
     }
     else if (ip->body->type == ISEQ_TYPE_EVAL) {
  goto break_in_eval;
     }

     ip = ip->body->parent_iseq;
 }
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Invalid break");
 return 0;
    }
    return 1;
}

static int
compile_next(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    unsigned long level = 0;

    if (ISEQ_COMPILE_DATA(iseq)->redo_label != 0) {
 LABEL *splabel = new_label_body(iseq, (0));
 if(0)printf("next in while loop\n");
 ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
 add_ensure_iseq(ret, iseq, 0);
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (ISEQ_COMPILE_DATA(iseq)->redo_label), (line)));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(ISEQ_COMPILE_DATA(iseq)->start_label))), ((ISEQ_COMPILE_DATA(iseq)->start_label)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    else if (ISEQ_COMPILE_DATA(iseq)->end_label) {
 LABEL *splabel = new_label_body(iseq, (0));
 if(0)printf("next in block\n");
 ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (ISEQ_COMPILE_DATA(iseq)->start_label), (line)));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
 add_ensure_iseq(ret, iseq, 0);
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(ISEQ_COMPILE_DATA(iseq)->end_label))), ((ISEQ_COMPILE_DATA(iseq)->end_label)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));
 splabel->unremovable = FALSE;

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    else if (iseq->body->type == ISEQ_TYPE_EVAL) {
      next_in_eval:
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Can't escape from eval with next");
 return 0;
    }
    else {
 const rb_iseq_t *ip = iseq;

 while (ip) {
     if (!ISEQ_COMPILE_DATA(ip)) {
  ip = 0;
  break;
     }

     level = VM_THROW_NO_ESCAPE_FLAG;
     if (ISEQ_COMPILE_DATA(ip)->redo_label != 0) {

  break;
     }
     else if (ip->body->type == ISEQ_TYPE_BLOCK) {
  break;
     }
     else if (ip->body->type == ISEQ_TYPE_EVAL) {
  goto next_in_eval;
     }

     ip = ip->body->parent_iseq;
 }
 if (ip != 0) {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_throw, 1, (VALUE)((((VALUE)(level | RUBY_TAG_NEXT))<<1 | RUBY_FIXNUM_FLAG))));

     if (popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
 }
 else {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Invalid next");
     return 0;
 }
    }
    return 1;
}

static int
compile_redo(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));

    if (ISEQ_COMPILE_DATA(iseq)->redo_label) {
 LABEL *splabel = new_label_body(iseq, (0));
 if(0)printf("redo in while");
 ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (ISEQ_COMPILE_DATA(iseq)->redo_label), (line)));
 add_ensure_iseq(ret, iseq, 0);
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(ISEQ_COMPILE_DATA(iseq)->redo_label))), ((ISEQ_COMPILE_DATA(iseq)->redo_label)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    else if (iseq->body->type == ISEQ_TYPE_EVAL) {
      redo_in_eval:
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Can't escape from eval with redo");
 return 0;
    }
    else if (ISEQ_COMPILE_DATA(iseq)->start_label) {
 LABEL *splabel = new_label_body(iseq, (0));

 if(0)printf("redo in block");
 ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
 add_ensure_iseq(ret, iseq, 0);
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (ISEQ_COMPILE_DATA(iseq)->start_label), (line)));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(ISEQ_COMPILE_DATA(iseq)->start_label))), ((ISEQ_COMPILE_DATA(iseq)->start_label)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    else {
 const rb_iseq_t *ip = iseq;
 const unsigned long level = VM_THROW_NO_ESCAPE_FLAG;

 while (ip) {
     if (!ISEQ_COMPILE_DATA(ip)) {
  ip = 0;
  break;
     }

     if (ISEQ_COMPILE_DATA(ip)->redo_label != 0) {
  break;
     }
     else if (ip->body->type == ISEQ_TYPE_BLOCK) {
  break;
     }
     else if (ip->body->type == ISEQ_TYPE_EVAL) {
  goto redo_in_eval;
     }

     ip = ip->body->parent_iseq;
 }
 if (ip != 0) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_throw, 1, (VALUE)((((VALUE)(level | RUBY_TAG_REDO))<<1 | RUBY_FIXNUM_FLAG))));

     if (popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
 }
 else {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Invalid redo");
     return 0;
 }
    }
    return 1;
}

static int
compile_retry(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));

    if (iseq->body->type == ISEQ_TYPE_RESCUE) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_throw, 1, (VALUE)((((VALUE)(RUBY_TAG_RETRY))<<1 | RUBY_FIXNUM_FLAG))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
    }
    else {
 append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Invalid retry");
 return 0;
    }
    return 1;
}

static int
compile_rescue(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    LABEL *lstart = new_label_body(iseq, (line));
    LABEL *lend = new_label_body(iseq, (line));
    LABEL *lcont = new_label_body(iseq, (line));
    const rb_iseq_t *rescue = new_child_iseq(iseq, (node->u2.node), rb_fstring(rb_str_concat( ({ (__builtin_constant_p("rescue in ")) ? rb_str_new_static(("rescue in "), (long)strlen("rescue in ")) : rb_str_new_cstr("rescue in "); }), iseq->body->location.label)), iseq, (ISEQ_TYPE_RESCUE), (line));



    lstart->rescued = LABEL_RESCUE_BEG;
    lend->rescued = LABEL_RESCUE_END;
    ADD_ELEM((ret), (LINK_ELEMENT *) (lstart));
    if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {;return 0;};
    ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
    if (node->u3.node) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 if (!(((iseq_compile_each(iseq, (ret), (node->u3.node), 0))))) {;return 0;};
    }
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_nop, 0));
    ADD_ELEM((ret), (LINK_ELEMENT *) (lcont));

    if (popped) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    }


    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_RESCUE), (VALUE)(lstart) | 1, (VALUE)(lend) | 1, (VALUE)(rescue), (VALUE)(lcont) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((lstart) ? (((lstart)->refcnt++), (lstart)->unremovable=1) : 0); ((lend)->refcnt++); ((lcont)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
    do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_RETRY), (VALUE)(lend) | 1, (VALUE)(lcont) | 1, (VALUE)(((void*)0)), (VALUE)(lstart) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((lend) ? (((lend)->refcnt++), (lend)->unremovable=1) : 0); ((lcont)->refcnt++); ((lstart)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);
    return 1;
}

static int
compile_resbody(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    const NODE *resq = node;
    const NODE *narg;
    LABEL *label_miss, *label_hit;

    while (resq) {
 label_miss = new_label_body(iseq, (line));
 label_hit = new_label_body(iseq, (line));

 narg = resq->u3.node;
 if (narg) {
     switch (((int) (((narg)->flags & (((VALUE)0x7f)<<8))>>8))) {
       case NODE_ARRAY:
  while (narg) {
      iseq_add_getlocal(iseq, (ret), (line), ((1)), (0));
      if (!(((iseq_compile_each(iseq, (ret), (narg->u1.node), 0))))) {;return 0;};
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_RESCUE))<<1 | RUBY_FIXNUM_FLAG))));
      (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(label_hit))), ((label_hit)->refcnt++));
      narg = narg->u3.node;
  }
  break;
       case NODE_SPLAT:
       case NODE_ARGSCAT:
       case NODE_ARGSPUSH:
  iseq_add_getlocal(iseq, (ret), (line), ((1)), (0));
  if (!(((iseq_compile_each(iseq, (ret), (narg), 0))))) {;return 0;};
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_RESCUE | 0x04))<<1 | RUBY_FIXNUM_FLAG))));
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(label_hit))), ((label_hit)->refcnt++));
  break;
       default:
  do { const NODE *error_node = (narg); append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "NODE_RESBODY: unknown node (%s)", ruby_node_name(((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)))); return 0; } while (0);
     }
 }
 else {
     iseq_add_getlocal(iseq, (ret), (line), ((1)), (0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(rb_eStandardError)));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_checkmatch, 1, (VALUE)((((VALUE)(VM_CHECKMATCH_TYPE_RESCUE))<<1 | RUBY_FIXNUM_FLAG))));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(label_hit))), ((label_hit)->refcnt++));
 }
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(label_miss))), ((label_miss)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) (label_hit));
 if (!(((iseq_compile_each(iseq, (ret), (resq->u2.node), 0))))) {;return 0;};
 if (ISEQ_COMPILE_DATA(iseq)->option->tailcall_optimization) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_nop, 0));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_leave, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) (label_miss));
 resq = resq->u1.node;
    }
    return 1;
}

static int
compile_ensure(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));
    LINK_ANCHOR ensr[1] = {{{0,},}};
    const rb_iseq_t *ensure = new_child_iseq(iseq, (node->u3.node), rb_fstring(rb_str_concat( ({ (__builtin_constant_p("ensure in ")) ? rb_str_new_static(("ensure in "), (long)strlen("ensure in ")) : rb_str_new_cstr("ensure in "); }), iseq->body->location.label)), iseq, (ISEQ_TYPE_ENSURE), (line));


    LABEL *lstart = new_label_body(iseq, (line));
    LABEL *lend = new_label_body(iseq, (line));
    LABEL *lcont = new_label_body(iseq, (line));
    LINK_ELEMENT *last;
    int last_leave = 0;
    struct ensure_range er;
    struct iseq_compile_data_ensure_node_stack enl;
    struct ensure_range *erange;

    (ensr->last = &ensr->anchor);
    if (!(((iseq_compile_each(iseq, (ensr), (node->u3.node), 1))))) {;return 0;};
    last = ensr->last;
    last_leave = last && ((last)->type == ISEQ_ELEMENT_INSN) && ((((INSN*)(last))->insn_id) == YARVINSN_leave);

    er.begin = lstart;
    er.end = lend;
    er.next = 0;
    push_ensure_entry(iseq, &enl, &er, node->u3.node);

    ADD_ELEM((ret), (LINK_ELEMENT *) (lstart));
    if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), ((popped | last_leave))))))) {;return 0;};
    ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
    if (LIST_INSN_SIZE_ZERO(ensr)) {
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_nop, 0));
    }
    else {
 APPEND_LIST((ret), (ensr));
 if (!popped && last_leave) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
    }
    ADD_ELEM((ret), (LINK_ELEMENT *) (lcont));
    if (last_leave) ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));

    erange = ISEQ_COMPILE_DATA(iseq)->ensure_node_stack->erange;
    if (lstart->link.next != &lend->link) {
 while (erange) {
     do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(CATCH_TYPE_ENSURE), (VALUE)(erange->begin) | 1, (VALUE)(erange->end) | 1, (VALUE)(ensure), (VALUE)(lcont) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((erange->begin) ? (((erange->begin)->refcnt++), (erange->begin)->unremovable=1) : 0); ((erange->end)->refcnt++); ((lcont)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);

     erange = erange->next;
 }
    }

    ISEQ_COMPILE_DATA(iseq)->ensure_node_stack = enl.prev;
    return 1;
}

static int
compile_return(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *const node, int popped)
{
    const int line = (int)(((long)(node)->flags)>>(8 +7));

    if (iseq) {
 enum iseq_type type = iseq->body->type;
 const rb_iseq_t *is = iseq;
 enum iseq_type t = type;
 const NODE *retval = node->u1.node;
 LABEL *splabel = 0;

 while (t == ISEQ_TYPE_RESCUE || t == ISEQ_TYPE_ENSURE) {
     if (!(is = is->body->parent_iseq)) break;
     t = is->body->type;
 }
 switch (t) {
   case ISEQ_TYPE_TOP:
   case ISEQ_TYPE_MAIN:
     if (is == iseq) {

  type = ISEQ_TYPE_METHOD;
     }
     break;
   default:
     break;
 }

 if (type == ISEQ_TYPE_METHOD) {
     splabel = new_label_body(iseq, (0));
     ADD_ELEM((ret), (LINK_ELEMENT *) (splabel));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (0), (line)));
 }

 if (!(((iseq_compile_each(iseq, (ret), (retval), 0))))) {;return 0;};

 if (type == ISEQ_TYPE_METHOD) {
     add_ensure_iseq(ret, iseq, 1);
     ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0010)));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_leave, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_adjust_body(iseq, (splabel), -1));

     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
     }
 }
 else {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_throw, 1, (VALUE)((((VALUE)(RUBY_TAG_RETURN))<<1 | RUBY_FIXNUM_FLAG))));
     if (popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
 }
    }
    return 1;
}

static int iseq_compile_each0(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *node, int popped);







static int
iseq_compile_each(rb_iseq_t *iseq, LINK_ANCHOR *ret, const NODE *node, int popped)
{
    if (node == 0) {
 if (!popped) {
     int lineno = ISEQ_COMPILE_DATA(iseq)->last_line;
     if (lineno == 0) lineno = ((int)rb_fix2int((VALUE)(rb_iseq_first_lineno(iseq))));
     if(0)printf("node: NODE_NIL(implicit)\n");
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (lineno), YARVINSN_putnil, 0));
 }
 return 1;
    }
    return iseq_compile_each0(iseq, ret, node, popped);
}

static int
iseq_compile_each0(rb_iseq_t *iseq, LINK_ANCHOR *const ret, const NODE *node, int popped)
{
    const int line = (int)(int)(((long)(node)->flags)>>(8 +7));
    const enum node_type type = ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8));

    if (ISEQ_COMPILE_DATA(iseq)->last_line == line) {

    }
    else {
 if (node->flags & (((VALUE)1)<<7)) {
     ISEQ_COMPILE_DATA(iseq)->last_line = line;
     do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[0]) && (line) > 0) { do { const VALUE _ary = ((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[0])); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[(line) - 1]), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), "compile.c", 5475); ; } while (0); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((line)), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x010000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(line))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);
     ADD_ELEM((ret), (LINK_ELEMENT *)new_trace_body(iseq, (0x0001)));
 }
    }

    ((void)0);



    switch (type) {
      case NODE_BLOCK:{
 while (node && ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BLOCK) {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), ((node->u3.node ? 1 : popped))))))) {((void)0);return 0;};

     node = node->u3.node;
 }
 if (node) {
     if (!(((iseq_compile_each(iseq, (ret), (node->u3.node), (popped)))))) {((void)0);return 0;};
 }
 break;
      }
      case NODE_IF:
      case NODE_UNLESS:
 if (!(compile_if(iseq, ret, node, popped, type))) {((void)0);return 0;};
 break;
      case NODE_CASE:
 if (!(compile_case(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_CASE2:
 if (!(compile_case2(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_WHILE:
      case NODE_UNTIL:
 if (!(compile_loop(iseq, ret, node, popped, type))) {((void)0);return 0;};
 break;
      case NODE_FOR:
 if (!(compile_for(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_ITER:
 if (!(compile_iter(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_BREAK:
 if (!(compile_break(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_NEXT:
 if (!(compile_next(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_REDO:
 if (!(compile_redo(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_RETRY:
 if (!(compile_retry(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_BEGIN:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), (popped)))))) {((void)0);return 0;};
 break;
      }
      case NODE_RESCUE:
 if (!(compile_rescue(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_RESBODY:
 if (!(compile_resbody(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_ENSURE:
 if (!(compile_ensure(iseq, ret, node, popped))) {((void)0);return 0;};
 break;

      case NODE_AND:
      case NODE_OR:{
 LABEL *end_label = new_label_body(iseq, (line));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 if (type == NODE_AND) {
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
 }
 else {
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
 }
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), (popped)))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
 break;
      }

      case NODE_MASGN:{
 compile_massign(iseq, ret, node, popped);
 break;
      }

      case NODE_LASGN:{
 ID id = node->u1.id;
 int idx = iseq->body->local_iseq->body->local_table_size - get_local_var_idx(iseq, id);

 if(0)printf("lvar: %s idx: %d\n", rb_id2name(id), idx);
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 iseq_add_setlocal(iseq, (ret), (line), (idx), (get_lvar_level(iseq)));
 break;
      }
      case NODE_DASGN:
      case NODE_DASGN_CURR:{
 int idx, lv, ls;
 ID id = node->u1.id;
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 ((void)0);

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }

 idx = get_dyna_var_idx(iseq, id, &lv, &ls);

 if (idx < 0) {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "NODE_DASGN(_CURR): unknown id (%li\v)",
     rb_id2str(id));
     goto ng;
 }
 iseq_add_setlocal(iseq, (ret), (line), (ls - idx), (lv));
 break;
      }
      case NODE_GASGN:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setglobal, 1, (VALUE)(((VALUE)node->u3.entry | 1))));

 break;
      }
      case NODE_IASGN:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setinstancevariable, 2, (VALUE)((rb_id2sym(node->u1.id))), (VALUE)(get_ivar_ic_value(iseq,node->u1.id))));


 break;
      }
      case NODE_CDECL:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }

 if (node->u1.id) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_CONST_BASE))<<1 | RUBY_FIXNUM_FLAG))));

     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setconstant, 1, (VALUE)((rb_id2sym(node->u1.id)))));
 }
 else {
     compile_cpath(ret, iseq, node->u3.node);
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setconstant, 1, (VALUE)((rb_id2sym(node->u3.node->u2.id)))));
 }
 break;
      }
      case NODE_CVASGN:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setclassvariable, 1, (VALUE)((rb_id2sym(node->u1.id)))));

 break;
      }
      case NODE_OP_ASGN1: {
 LINK_ANCHOR args[1] = {{{0,},}};
 VALUE argc;
 unsigned int flag = 0;
 unsigned int asgnflag = 0;
 ID id = node->u2.id;
 int boff = 0;
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
 asgnflag = ((((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF) ? (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putself, 0)), (0x01 << VM_CALL_FCALL_bit)) : (((iseq_compile_each(iseq, (ret), (node->u1.node), 0))), 0));
 switch (((int) (((node->u3.node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_ZARRAY:
     argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
     break;
   case NODE_BLOCK_PASS:
     boff = 1;
   default:
     (args->last = &args->anchor);
     argc = setup_args(iseq, args, node->u3.node->u1.node, &flag, ((void*)0));
     if (!(!!((VALUE)(argc) != ((VALUE)RUBY_Qnil)))) {((void)0);return 0;};
     APPEND_LIST((ret), (args));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dupn, 1, (VALUE)(((argc)+((((VALUE)(1 + boff))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idAREF)), (VALUE)((argc)), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
 flag |= asgnflag;

 if (id == 0 || id == 1) {
     LABEL *label = new_label_body(iseq, (line));
     LABEL *lfin = new_label_body(iseq, (line));

     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     if (id == 0) {

  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(label))), ((label)->refcnt++));
     }
     else {

  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(label))), ((label)->refcnt++));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));

     if (!(((iseq_compile_each(iseq, (ret), (node->u3.node->u2.node), 0))))) {((void)0);return 0;};
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(2+boff))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
     }
     if (flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
  if (boff > 0) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dupn, 1, (VALUE)((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
  }
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
  if (boff > 0) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
  }
  ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idASET)), (VALUE)((argc)), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     }
     else {
  if (boff > 0)
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
  ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idASET)), (VALUE)((((argc)+((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(lfin))), ((lfin)->refcnt++));
     ADD_ELEM((ret), (LINK_ELEMENT *) (label));
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(2+boff))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_adjuststack, 1, (VALUE)(((argc)+((((VALUE)(2+boff))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
     ADD_ELEM((ret), (LINK_ELEMENT *) (lfin));
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (node->u3.node->u2.node), 0))))) {((void)0);return 0;};
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(2+boff))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
     }
     if (flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
  if (boff > 0) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dupn, 1, (VALUE)((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
  }
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
  if (boff > 0) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
  }
  ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idASET)), (VALUE)((argc)), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     }
     else {
  if (boff > 0)
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
  ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idASET)), (VALUE)((((argc)+((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }

 break;
      }
      case NODE_OP_ASGN2:{
 ID atype = node->u3.node->u2.id;
 ID vid = node->u3.node->u1.id, aid = rb_id_attrset(vid);
 VALUE asgnflag;
 LABEL *lfin = new_label_body(iseq, (line));
 LABEL *lcfin = new_label_body(iseq, (line));
 LABEL *lskip = 0;
 asgnflag = ((((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF) ? (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putself, 0)), (0x01 << VM_CALL_FCALL_bit)) : (((iseq_compile_each(iseq, (ret), (node->u1.node), 0))), 0));
 if (node->u3.node->u3.id) {
     lskip = new_label_body(iseq, (line));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchnil, 1, (VALUE)(lskip))), ((lskip)->refcnt++));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((vid)), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (atype == 0 || atype == 1) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     if (atype == 0) {
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(lcfin))), ((lcfin)->refcnt++));
     }
     else {
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(lcfin))), ((lcfin)->refcnt++));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((aid)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)((((VALUE)(asgnflag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(lfin))), ((lfin)->refcnt++));

     ADD_ELEM((ret), (LINK_ELEMENT *) (lcfin));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));

     ADD_ELEM((ret), (LINK_ELEMENT *) (lfin));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (lskip) {
  ADD_ELEM((ret), (LINK_ELEMENT *) (lskip));
     }
     if (popped) {

  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((atype)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     }
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((aid)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)((((VALUE)(asgnflag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
     if (lskip && popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) (lskip));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (lskip && !popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) (lskip));
     }
 }
 break;
      }
      case NODE_OP_CDECL: {
 LABEL *lfin = 0;
 LABEL *lassign = 0;
 ID mid;

 switch (((int) (((node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_COLON3:
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(rb_cObject)));
     break;
   case NODE_COLON2:
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node->u1.node), 0))))) {((void)0);return 0;};
     break;
   default:
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "%s: invalid node in NODE_OP_CDECL",
     ruby_node_name(((int) (((node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8))));
     goto ng;
 }
 mid = node->u1.node->u2.id;

 if (node->u3.id == 0) {
     lassign = new_label_body(iseq, (line));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_defined, 3, (VALUE)((((VALUE)(DEFINED_CONST))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((rb_id2sym(mid))), (VALUE)(((VALUE)RUBY_Qfalse))));

     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(lassign))), ((lassign)->refcnt++));
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(mid)))));

 if (node->u3.id == 0 || node->u3.id == 1) {
     lfin = new_label_body(iseq, (line));
     if (!popped) ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     if (node->u3.id == 0)
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(lfin))), ((lfin)->refcnt++));
     else
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(lfin))), ((lfin)->refcnt++));

     if (!popped) ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (lassign) ADD_ELEM((ret), (LINK_ELEMENT *) (lassign));
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

     if (popped)
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     else {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dupn, 1, (VALUE)((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG))));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setconstant, 1, (VALUE)((rb_id2sym(mid)))));
     ADD_ELEM((ret), (LINK_ELEMENT *) (lfin));
     if (!popped) ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((node->u3.id)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setconstant, 1, (VALUE)((rb_id2sym(mid)))));
 }
 break;
      }
      case NODE_OP_ASGN_AND:
      case NODE_OP_ASGN_OR:{
 LABEL *lfin = new_label_body(iseq, (line));
 LABEL *lassign;

 if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_OP_ASGN_OR) {
     LABEL *lfinish[2];
     lfinish[0] = lfin;
     lfinish[1] = 0;
     defined_expr(iseq, ret, node->u1.node, lfinish, ((VALUE)RUBY_Qfalse));
     lassign = lfinish[1];
     if (!lassign) {
  lassign = new_label_body(iseq, (line));
     }
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(lassign))), ((lassign)->refcnt++));
 }
 else {
     lassign = new_label_body(iseq, (line));
 }

 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));

 if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_OP_ASGN_AND) {
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchunless, 1, (VALUE)(lfin))), ((lfin)->refcnt++));
 }
 else {
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(lfin))), ((lfin)->refcnt++));
 }

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) (lassign));
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) (lfin));

 if (popped) {

     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_CALL:
      case NODE_OPCALL:



 if (node->u1.node && ((int) (((node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR &&
     (node->u2.id == idFreeze || node->u2.id == idUMinus) &&
     node->u3.node == ((void*)0) &&
     ISEQ_COMPILE_DATA(iseq)->current_block == ((void*)0) &&
     ISEQ_COMPILE_DATA(iseq)->option->specialized_instruction) {
     VALUE str = freeze_literal(iseq, node->u1.node->u1.value);
     if (node->u2.id == idUMinus) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_str_uminus, 1, (VALUE)(str)));
     }
     else {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_str_freeze, 1, (VALUE)(str)));
     }
     if (popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
     break;
 }



 if (node->u2.id == idAREF && !(((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF) && node->u3.node &&
     ((int) (((node->u3.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY && node->u3.node->u2.argc == 1 &&
     ((int) (((node->u3.node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR &&
     ISEQ_COMPILE_DATA(iseq)->current_block == ((void*)0) &&
     ISEQ_COMPILE_DATA(iseq)->option->specialized_instruction) {
     VALUE str = freeze_literal(iseq, node->u3.node->u1.node->u1.value);
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_aref_with, 3, (VALUE)(new_callinfo(iseq, idAREF, 1, 0, ((void*)0), FALSE)), (VALUE)(((void*)0)), (VALUE)(str)));


     if (popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
     break;
 }
      case NODE_QCALL:
      case NODE_FCALL:
      case NODE_VCALL:{





 LINK_ANCHOR recv[1] = {{{0,},}};
 LINK_ANCHOR args[1] = {{{0,},}};
 LABEL *else_label = 0;
 LABEL *end_label = 0;
 VALUE branches = 0;
 ID mid = node->u2.id;
 VALUE argc;
 unsigned int flag = 0;
 struct rb_call_info_kw_arg *keywords = ((void*)0);
 const rb_iseq_t *parent_block = ISEQ_COMPILE_DATA(iseq)->current_block;
 ISEQ_COMPILE_DATA(iseq)->current_block = ((void*)0);

 (recv->last = &recv->anchor);
 (args->last = &args->anchor);
 if (type == NODE_CALL || type == NODE_OPCALL || type == NODE_QCALL) {
     if (!(((iseq_compile_each(iseq, (recv), (node->u1.node), 0))))) {((void)0);return 0;};
     if (type == NODE_QCALL) {
  else_label = new_label_body(iseq, (line));
  end_label = new_label_body(iseq, (line));

  do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((node)->nd_loc.first_loc.lineno))) > 0) { VALUE structure = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[0]); branches = rb_ary_tmp_new(0); rb_ary_push(structure, branches); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("&.") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("&.")), (long)strlen(("&."))); (ID) rb_intern_id_cache; }) : rb_intern("&."))))); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); } } while (0);
  ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
  (ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchnil, 1, (VALUE)(else_label))), ((else_label)->refcnt++));
  do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((node)->nd_loc.first_loc.lineno))) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("then") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("then")), (long)strlen(("then"))); (ID) rb_intern_id_cache; }) : rb_intern("then"))))); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((recv)), (LINK_ELEMENT *) new_insn_body(iseq, ((((int)((node)->nd_loc.first_loc.lineno)))), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);
     }
 }
 else if (type == NODE_FCALL || type == NODE_VCALL) {
     ADD_ELEM(((recv)), (LINK_ELEMENT *) new_insn_body(iseq, ((line)), YARVINSN_putself, 0));
 }


 if (type != NODE_VCALL) {
     argc = setup_args(iseq, args, node->u3.node, &flag, &keywords);
     if (!(!!((VALUE)(argc) != ((VALUE)RUBY_Qnil)))) {((void)0);return 0;};
 }
 else {
     argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 }

 APPEND_LIST((ret), (recv));
 APPEND_LIST((ret), (args));

 ((void)0);
 ((void)0);

 switch ((int)type) {
   case NODE_VCALL:
     flag |= (0x01 << VM_CALL_VCALL_bit);

   case NODE_FCALL:
     flag |= (0x01 << VM_CALL_FCALL_bit);
 }

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_send(iseq, (line), (mid), (VALUE)(argc), (parent_block), (VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG)), (keywords)));

 if (else_label && end_label) {
     (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
     ADD_ELEM((ret), (LINK_ELEMENT *) (else_label));
     do { if ((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]) && (rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]) && (((int)((node)->nd_loc.first_loc.lineno))) > 0) { VALUE counters = (rb_array_const_ptr((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[1]))[1]); long counter_idx = rb_array_len(counters); rb_ary_push(counters, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (rb_id2sym((__builtin_constant_p("else") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("else")), (long)strlen(("else"))); (ID) rb_intern_id_cache; }) : rb_intern("else"))))); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.first_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.lineno))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(((int)((node)->nd_loc.last_loc.column))))<<1 | RUBY_FIXNUM_FLAG)); rb_ary_push(branches, (((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)); ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((((int)((node)->nd_loc.first_loc.lineno)))), YARVINSN_tracecoverage, 2, (VALUE)((((VALUE)(0x020000))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(counter_idx))<<1 | RUBY_FIXNUM_FLAG)))); } } while (0);
     ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
 }
 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_SUPER:
      case NODE_ZSUPER:{
 LINK_ANCHOR args[1] = {{{0,},}};
 int argc;
 unsigned int flag = 0;
 struct rb_call_info_kw_arg *keywords = ((void*)0);
 const rb_iseq_t *parent_block = ISEQ_COMPILE_DATA(iseq)->current_block;

 (args->last = &args->anchor);
 ISEQ_COMPILE_DATA(iseq)->current_block = ((void*)0);
 if (type == NODE_SUPER) {
     VALUE vargc = setup_args(iseq, args, node->u3.node, &flag, &keywords);
     if (!(!!((VALUE)(vargc) != ((VALUE)RUBY_Qnil)))) {((void)0);return 0;};
     argc = ((int)rb_fix2int((VALUE)(vargc)));
 }
 else {

     int i;
     const rb_iseq_t *liseq = iseq->body->local_iseq;
     int lvar_level = get_lvar_level(iseq);

     argc = liseq->body->param.lead_num;


     for (i = 0; i < liseq->body->param.lead_num; i++) {
  int idx = liseq->body->local_table_size - i;
  iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
     }

     if (liseq->body->param.flags.has_opt) {

  int j;
  for (j = 0; j < liseq->body->param.opt_num; j++) {
      int idx = liseq->body->local_table_size - (i + j);
      iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
  }
  i += j;
  argc = i;
     }
     if (liseq->body->param.flags.has_rest) {

  int idx = liseq->body->local_table_size - liseq->body->param.rest_start;

  iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
  ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_splatarray, 1, (VALUE)(((VALUE)RUBY_Qfalse))));

  argc = liseq->body->param.rest_start + 1;
  flag |= (0x01 << VM_CALL_ARGS_SPLAT_bit);
     }
     if (liseq->body->param.flags.has_post) {

  int post_len = liseq->body->param.post_num;
  int post_start = liseq->body->param.post_start;

  if (liseq->body->param.flags.has_rest) {
      int j;
      for (j=0; j<post_len; j++) {
   int idx = liseq->body->local_table_size - (post_start + j);
   iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
      }
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(j))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));

  }
  else {
      int j;
      for (j=0; j<post_len; j++) {
   int idx = liseq->body->local_table_size - (post_start + j);
   iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
      }
      argc = post_len + post_start;
  }
     }

     if (liseq->body->param.flags.has_kw) {
  int local_size = liseq->body->local_table_size;
  argc++;

  ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));

  if (liseq->body->param.flags.has_kwrest) {
      int idx = liseq->body->local_table_size - liseq->body->param.keyword->rest_start;
      iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
      ADD_ELEM(((args)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), (((__builtin_constant_p("dup") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("dup")), (long)strlen(("dup"))); (ID) rb_intern_id_cache; }) : rb_intern("dup")))), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
  }
  else {
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newhash, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
  }
  for (i = 0; i < liseq->body->param.keyword->num; ++i) {
      ID id = liseq->body->param.keyword->table[i];
      int idx = local_size - get_local_var_idx(liseq, id);
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((rb_id2sym(id)))));
      iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));
  }
  ADD_ELEM(((args)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_hash_merge_ptr)), (VALUE)(((((VALUE)(i * 2 + 1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
  if (liseq->body->param.flags.has_rest) {
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
      --argc;
  }
     }
     else if (liseq->body->param.flags.has_kwrest) {
  int idx = liseq->body->local_table_size - liseq->body->param.keyword->rest_start;
  iseq_add_getlocal(iseq, (args), (line), (idx), (lvar_level));

  ADD_ELEM(((args)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), (((__builtin_constant_p("dup") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("dup")), (long)strlen(("dup"))); (ID) rb_intern_id_cache; }) : rb_intern("dup")))), (VALUE)(((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
  if (liseq->body->param.flags.has_rest) {
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((args), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
  }
  else {
      argc++;
  }
     }
 }


 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(type == NODE_ZSUPER ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue))));
 APPEND_LIST((ret), (args));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_invokesuper, 3, (VALUE)(new_callinfo(iseq, 0, argc, flag | (0x01 << VM_CALL_SUPER_bit) | (0x01 << VM_CALL_FCALL_bit), keywords, parent_block != ((void*)0))), (VALUE)(((VALUE)RUBY_Qnil)), (VALUE)(parent_block)));




 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_ARRAY:{
 if (!(compile_array(iseq, ret, node, COMPILE_ARRAY_TYPE_ARRAY, ((void*)0), ((void*)0), popped) >= 0)) {((void)0);return 0;};
 break;
      }
      case NODE_ZARRAY:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
 }
 break;
      }
      case NODE_VALUES:{
 const NODE *n = node;
 if (popped) {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "NODE_VALUES: must not be popped");
 }
 while (n) {
     if (!(((iseq_compile_each(iseq, (ret), (n->u1.node), 0))))) {((void)0);return 0;};
     n = n->u3.node;
 }
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(node->u2.argc))<<1 | RUBY_FIXNUM_FLAG))));
 break;
      }
      case NODE_HASH:{
 LINK_ANCHOR list[1] = {{{0,},}};
 enum node_type type = node->u1.node ? ((int) (((node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) : NODE_ZARRAY;

 (list->last = &list->anchor);
 switch (type) {
   case NODE_ARRAY:
     if (!(compile_array(iseq, list, node->u1.node, COMPILE_ARRAY_TYPE_HASH, ((void*)0), ((void*)0), popped) >= 0)) {((void)0);return 0;};
     APPEND_LIST((ret), (list));
     break;

   case NODE_ZARRAY:
     if (popped) break;
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newhash, 1, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));
     break;

   default:
     append_compile_error(iseq, (int)(((long)(node->u1.node)->flags)>>(8 +7)), "can't make hash with this node: %s",
     ruby_node_name(type));
     goto ng;
 }
 break;
      }
      case NODE_RETURN:
 if (!(compile_return(iseq, ret, node, popped))) {((void)0);return 0;};
 break;
      case NODE_YIELD:{
 LINK_ANCHOR args[1] = {{{0,},}};
 VALUE argc;
 unsigned int flag = 0;
 struct rb_call_info_kw_arg *keywords = ((void*)0);

 (args->last = &args->anchor);
 if (iseq->body->type == ISEQ_TYPE_TOP ||
     iseq->body->type == ISEQ_TYPE_MAIN) {
     append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "Invalid yield");
     goto ng;
 }

 if (node->u1.node) {
     argc = setup_args(iseq, args, node->u1.node, &flag, &keywords);
     if (!(!!((VALUE)(argc) != ((VALUE)RUBY_Qnil)))) {((void)0);return 0;};
 }
 else {
     argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
 }

 APPEND_LIST((ret), (args));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_invokeblock, 1, (VALUE)(new_callinfo(iseq, 0, ((int)rb_fix2int((VALUE)(argc))), flag, keywords, FALSE))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_LVAR:{
 if (!popped) {
     ID id = node->u1.id;
     int idx = iseq->body->local_iseq->body->local_table_size - get_local_var_idx(iseq, id);

     if(0)printf("id: %s idx: %d\n", rb_id2name(id), idx);
     iseq_add_getlocal(iseq, (ret), (line), (idx), (get_lvar_level(iseq)));
 }
 break;
      }
      case NODE_DVAR:{
 int lv, idx, ls;
 ((void)0);
 if (!popped) {
     idx = get_dyna_var_idx(iseq, node->u1.id, &lv, &ls);
     if (idx < 0) {
  append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "unknown dvar (%li\v)",
         rb_id2str(node->u1.id));
  goto ng;
     }
     iseq_add_getlocal(iseq, (ret), (line), (ls - idx), (lv));
 }
 break;
      }
      case NODE_GVAR:{
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getglobal, 1, (VALUE)(((VALUE)node->u3.entry | 1))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_IVAR:{
 ((void)0);
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getinstancevariable, 2, (VALUE)((rb_id2sym(node->u1.id))), (VALUE)(get_ivar_ic_value(iseq,node->u1.id))));


 }
 break;
      }
      case NODE_CONST:{
 ((void)0);

 if (ISEQ_COMPILE_DATA(iseq)->option->inline_const_cache) {
     LABEL *lend = new_label_body(iseq, (line));
     int ic_index = iseq->body->is_size++;

     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getinlinecache, 2, (VALUE)(lend), (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u1.id)))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setinlinecache, 1, (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
 }
 else {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u1.id)))));
 }

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_CVAR:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getclassvariable, 1, (VALUE)((rb_id2sym(node->u1.id)))));

 }
 break;
      }
      case NODE_NTH_REF:{
        if (!popped) {
     if (!node->u2.argc) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
  break;
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getspecial, 2, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(node->u2.argc << 1))<<1 | RUBY_FIXNUM_FLAG))));

 }
 break;
      }
      case NODE_BACK_REF:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getspecial, 2, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(0x01 | (node->u2.argc << 1)))<<1 | RUBY_FIXNUM_FLAG))));

 }
 break;
      }
      case NODE_MATCH:
      case NODE_MATCH2:
      case NODE_MATCH3:{
 LINK_ANCHOR recv[1] = {{{0,},}};
 LINK_ANCHOR val[1] = {{{0,},}};

 (recv->last = &recv->anchor);
 (val->last = &val->anchor);
 switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_MATCH:
     ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(node->u1.value)));
     ADD_ELEM((val), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getspecial, 2, (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG))));

     break;
   case NODE_MATCH2:
     if (!(((iseq_compile_each(iseq, (recv), (node->u1.node), 0))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (val), (node->u2.node), 0))))) {((void)0);return 0;};
     break;
   case NODE_MATCH3:
     if (!(((iseq_compile_each(iseq, (recv), (node->u2.node), 0))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (val), (node->u1.node), 0))))) {((void)0);return 0;};
     break;
 }

 if (ISEQ_COMPILE_DATA(iseq)->option->specialized_instruction) {

     if (recv->last == recv->anchor.next &&
  (((INSN*)(recv->last))->insn_id) == YARVINSN_putobject &&
  ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_MATCH2) {
  APPEND_LIST((ret), (val));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_regexpmatch1, 1, (VALUE)((((INSN*)(recv->last))->operands[(0)]))));

     }
     else {
  APPEND_LIST((ret), (recv));
  APPEND_LIST((ret), (val));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_regexpmatch2, 2, (VALUE)(new_callinfo(iseq, idEqTilde, 1, 0, ((void*)0), FALSE)), (VALUE)(((VALUE)RUBY_Qnil))));
     }
 }
 else {
     APPEND_LIST((ret), (recv));
     APPEND_LIST((ret), (val));
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idEqTilde)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 }

 if (node->u3.node) {
     compile_named_capture_assign(iseq, ret, node->u3.node);
 }

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_LIT:{
 ((void)0);
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(node->u1.value)));
 }
 break;
      }
      case NODE_STR:{
 ((void)0);
 if (!popped) {
     VALUE lit = node->u1.value;
     if (!ISEQ_COMPILE_DATA(iseq)->option->frozen_string_literal) {
  lit = freeze_literal(iseq, lit);
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putstring, 1, (VALUE)(lit)));
     }
     else {
  if (ISEQ_COMPILE_DATA(iseq)->option->debug_frozen_string_literal || !(((VALUE)((*rb_ruby_debug_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
      VALUE debug_info =  ({ const VALUE args_to_new_ary[] = {rb_iseq_path(iseq), (((VALUE)(line))<<1 | RUBY_FIXNUM_FLAG)}; if (__builtin_constant_p(2)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (2)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
      lit = rb_str_dup(lit);
      rb_ivar_set(lit, id_debug_created_info, rb_obj_freeze(debug_info));
      lit = rb_str_freeze(lit);
  }
  else {
      lit = rb_fstring(lit);
  }
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(lit)));
  iseq_add_mark_object_compile_time(iseq, lit);
     }
 }
 break;
      }
      case NODE_DSTR:{
 compile_dstr(iseq, ret, node);

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 else {
     if (ISEQ_COMPILE_DATA(iseq)->option->frozen_string_literal) {
  VALUE debug_info = ((VALUE)RUBY_Qnil);
  if (ISEQ_COMPILE_DATA(iseq)->option->debug_frozen_string_literal || !(((VALUE)((*rb_ruby_debug_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
      debug_info =  ({ const VALUE args_to_new_ary[] = {rb_iseq_path(iseq), (((VALUE)(line))<<1 | RUBY_FIXNUM_FLAG)}; if (__builtin_constant_p(2)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (2)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
      iseq_add_mark_object_compile_time(iseq, rb_obj_freeze(debug_info));
  }
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_freezestring, 1, (VALUE)(debug_info)));
     }
 }
 break;
      }
      case NODE_XSTR:{
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((line)), YARVINSN_putself, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(freeze_literal(iseq, node->u1.value))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idBackquote)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_DXSTR:{
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((line)), YARVINSN_putself, 0));
 compile_dstr(iseq, ret, node);
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idBackquote)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_EVSTR:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 else if (!all_string_result_p(node->u2.node)) {
     const unsigned int flag = (0x01 << VM_CALL_FCALL_bit);
     LABEL *isstr = new_label_body(iseq, (line));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchiftype, 2, (VALUE)((((VALUE)(RUBY_T_STRING))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)(isstr)));
     ((isstr)->refcnt++);
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_send(iseq, (line), (idTo_s), (VALUE)((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0)), (VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_tostring, 0));
     ADD_ELEM((ret), (LINK_ELEMENT *) (isstr));
 }
 break;
      }
      case NODE_DREGX:{
 compile_dregx(iseq, ret, node);

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_SCOPE:{
 int ic_index = iseq->body->is_size++;
 const rb_iseq_t *block_iseq = new_child_iseq(iseq, (node), rb_fstring(make_name_for_block(iseq)), iseq, (ISEQ_TYPE_DEFINED_GUARD), (line));


 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_once, 2, (VALUE)(block_iseq), (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_ARGSCAT:{
 if (popped) {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_splatarray, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_splatarray, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
 }
 break;
      }
      case NODE_ARGSPUSH:{
 if (popped) {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_splatarray, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), (popped)))))) {((void)0);return 0;};
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), (popped)))))) {((void)0);return 0;};
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newarray, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_concatarray, 0));
 }
 break;
      }
      case NODE_SPLAT:{
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_splatarray, 1, (VALUE)(((VALUE)RUBY_Qtrue))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_DEFN:{
 const rb_iseq_t *method_iseq = new_child_iseq(iseq, (node->u3.node), rb_fstring(rb_id2str(node->u2.id)), 0, (ISEQ_TYPE_METHOD), (line));



 ((void)0);

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((rb_id2sym(node->u2.id)))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putiseq, 1, (VALUE)(method_iseq)));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_define_method)), (VALUE)(((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }

 break;
      }
      case NODE_DEFS:{
 const rb_iseq_t * singleton_method = new_child_iseq(iseq, (node->u3.node), rb_fstring(rb_id2str(node->u2.id)), 0, (ISEQ_TYPE_METHOD), (line));



 ((void)0);

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((rb_id2sym(node->u2.id)))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putiseq, 1, (VALUE)(singleton_method)));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_define_singleton_method)), (VALUE)(((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_ALIAS:{
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_CBASE))<<1 | RUBY_FIXNUM_FLAG))));
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_set_method_alias)), (VALUE)(((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_VALIAS:{
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((rb_id2sym(node->u1.id)))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((rb_id2sym(node->u2.id)))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_set_variable_alias)), (VALUE)(((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_UNDEF:{
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_CBASE))<<1 | RUBY_FIXNUM_FLAG))));
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 0))))) {((void)0);return 0;};
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((id_core_undef_method)), (VALUE)(((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_CLASS:{
 const rb_iseq_t *class_iseq = new_child_iseq(iseq, (node->u2.node), rb_fstring(rb_sprintf("<class:%li\v>", rb_id2str(node->u1.node->u2.id))), iseq, (ISEQ_TYPE_CLASS), (line));


 const int flags = VM_DEFINECLASS_TYPE_CLASS |
     (node->u3.node ? 0x10 : 0) |
     compile_cpath(ret, iseq, node->u1.node);

 if (!(((iseq_compile_each(iseq, (ret), (node->u3.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_defineclass, 3, (VALUE)((rb_id2sym(node->u1.node->u2.id))), (VALUE)(class_iseq), (VALUE)((((VALUE)(flags))<<1 | RUBY_FIXNUM_FLAG))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_MODULE:{
        const rb_iseq_t *module_iseq = new_child_iseq(iseq, (node->u2.node), rb_fstring(rb_sprintf("<module:%li\v>", rb_id2str(node->u1.node->u2.id))), iseq, (ISEQ_TYPE_CLASS), (line));


 const int flags = VM_DEFINECLASS_TYPE_MODULE |
     compile_cpath(ret, iseq, node->u1.node);

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_defineclass, 3, (VALUE)((rb_id2sym(node->u1.node->u2.id))), (VALUE)(module_iseq), (VALUE)((((VALUE)(flags))<<1 | RUBY_FIXNUM_FLAG))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_SCLASS:{
 ID singletonclass;
 const rb_iseq_t *singleton_class = new_child_iseq(iseq, (node->u2.node), rb_fstring( ({ (__builtin_constant_p("singleton class")) ? rb_fstring_new(("singleton class"), (long)strlen("singleton class")) : rb_fstring_cstr("singleton class"); })), 0, (ISEQ_TYPE_CLASS), (line));


 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("singletonclass")), (long)strlen(("singletonclass"))); (singletonclass) = rb_intern_id_cache; } while (0);
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_defineclass, 3, (VALUE)((rb_id2sym(singletonclass))), (VALUE)(singleton_class), (VALUE)((((VALUE)(VM_DEFINECLASS_TYPE_SINGLETON_CLASS))<<1 | RUBY_FIXNUM_FLAG))));



 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_COLON2:{
 if (rb_is_const_id(node->u2.id)) {

     LABEL *lend = new_label_body(iseq, (line));
     int ic_index = iseq->body->is_size++;

     LINK_ANCHOR pref[1] = {{{0,},}};
     LINK_ANCHOR body[1] = {{{0,},}};

     (pref->last = &pref->anchor);
     (body->last = &body->anchor);
     if (!(compile_const_prefix(iseq, node, pref, body))) {((void)0);return 0;};
     if (LIST_INSN_SIZE_ZERO(pref)) {
  if (ISEQ_COMPILE_DATA(iseq)->option->inline_const_cache) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getinlinecache, 2, (VALUE)(lend), (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
  }
  else {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
  }

  APPEND_LIST((ret), (body));

  if (ISEQ_COMPILE_DATA(iseq)->option->inline_const_cache) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setinlinecache, 1, (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
  }
     }
     else {
  APPEND_LIST((ret), (pref));
  APPEND_LIST((ret), (body));
     }
 }
 else {

     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_body(iseq, ((line)), YARVINSN_putself, 0));
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((node->u2.id)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
 }
 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_COLON3:{
 LABEL *lend = new_label_body(iseq, (line));
 int ic_index = iseq->body->is_size++;

 ((void)0);


 if (ISEQ_COMPILE_DATA(iseq)->option->inline_const_cache) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getinlinecache, 2, (VALUE)(lend), (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(rb_cObject)));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_getconstant, 1, (VALUE)((rb_id2sym(node->u2.id)))));

 if (ISEQ_COMPILE_DATA(iseq)->option->inline_const_cache) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setinlinecache, 1, (VALUE)((((VALUE)(ic_index))<<1 | RUBY_FIXNUM_FLAG))));
     ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
 }

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_DOT2:
      case NODE_DOT3:{
 int excl = type == NODE_DOT3;
 VALUE flag = (((VALUE)(excl))<<1 | RUBY_FIXNUM_FLAG);
 const NODE *b = node->u1.node;
 const NODE *e = node->u2.node;
 if (number_literal_p(b) && number_literal_p(e)) {
     if (!popped) {
  VALUE val = rb_range_new(b->u1.value, e->u1.value, excl);
  iseq_add_mark_object_compile_time(iseq, val);
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(val)));
     }
 }
 else {
     if (!(((iseq_compile_each(iseq, (ret), (b), (popped)))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (ret), (e), (popped)))))) {((void)0);return 0;};
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_newrange, 1, (VALUE)(flag)));
     }
 }
 break;
      }
      case NODE_FLIP2:
      case NODE_FLIP3:{
 LABEL *lend = new_label_body(iseq, (line));
 LABEL *ltrue = new_label_body(iseq, (line));
 LABEL *lfalse = new_label_body(iseq, (line));
 if (!(compile_flip_flop(iseq, ret, node, type == NODE_FLIP2, ltrue, lfalse))) {((void)0);return 0;};

 ADD_ELEM((ret), (LINK_ELEMENT *) (ltrue));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qtrue))));
 (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_jump, 1, (VALUE)(lend))), ((lend)->refcnt++));
 ADD_ELEM((ret), (LINK_ELEMENT *) (lfalse));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
 ADD_ELEM((ret), (LINK_ELEMENT *) (lend));
 break;
      }
      case NODE_SELF:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putself, 0));
 }
 break;
      }
      case NODE_NIL:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
 }
 break;
      }
      case NODE_TRUE:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qtrue))));
 }
 break;
      }
      case NODE_FALSE:{
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(((VALUE)RUBY_Qfalse))));
 }
 break;
      }
      case NODE_ERRINFO:{
 if (!popped) {
     if (iseq->body->type == ISEQ_TYPE_RESCUE) {
  iseq_add_getlocal(iseq, (ret), (line), ((1)), (0));
     }
     else {
  const rb_iseq_t *ip = iseq;
  int level = 0;
  while (ip) {
      if (ip->body->type == ISEQ_TYPE_RESCUE) {
   break;
      }
      ip = ip->body->parent_iseq;
      level++;
  }
  if (ip) {
      iseq_add_getlocal(iseq, (ret), (line), ((1)), (level));
  }
  else {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
  }
     }
 }
 break;
      }
      case NODE_DEFINED:
 if (!popped) {
     if (!(compile_defined_expr(iseq, ret, node, ((VALUE)RUBY_Qtrue)))) {((void)0);return 0;};
 }
 break;
      case NODE_POSTEXE:{



 int is_index = iseq->body->is_size++;
 const rb_iseq_t *once_iseq = new_child_iseq(iseq, ((const NODE *)((struct vm_ifunc *)rb_imemo_new(imemo_ifunc, (VALUE)(build_postexe_iseq), (VALUE)(node->u2.node), (VALUE)(0), 0))), rb_fstring(make_name_for_block(iseq)), iseq, (ISEQ_TYPE_BLOCK), (line));


 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_once, 2, (VALUE)(once_iseq), (VALUE)((((VALUE)(is_index))<<1 | RUBY_FIXNUM_FLAG))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_KW_ARG:
 {
     LABEL *end_label = new_label_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))));
     const NODE *default_value = node->u2.node->u2.node;

     if (default_value == (const NODE *)-1) {

  append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "unreachable");
  goto ng;
     }
     else if (((int) (((default_value)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_LIT ||
       ((int) (((default_value)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_NIL ||
       ((int) (((default_value)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_TRUE ||
       ((int) (((default_value)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_FALSE) {
  append_compile_error(iseq, (int)(((long)(node)->flags)>>(8 +7)), "unreachable");
  goto ng;
     }
     else {




  int kw_bits_idx = iseq->body->local_table_size - iseq->body->param.keyword->bits_start;
  int keyword_idx = iseq->body->param.keyword->num;

  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_checkkeyword, 2, (VALUE)((((VALUE)(kw_bits_idx + ( 3) - 1))<<1 | RUBY_FIXNUM_FLAG)), (VALUE)((((VALUE)(keyword_idx))<<1 | RUBY_FIXNUM_FLAG))));
  (ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchif, 1, (VALUE)(end_label))), ((end_label)->refcnt++));
  if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), 1))))) {((void)0);return 0;};
  ADD_ELEM((ret), (LINK_ELEMENT *) (end_label));
     }

     break;
 }
      case NODE_DSYM:{
 compile_dstr(iseq, ret, node);
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_intern, 0));
 }
 else {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      case NODE_ATTRASGN:{
 LINK_ANCHOR recv[1] = {{{0,},}};
 LINK_ANCHOR args[1] = {{{0,},}};
 unsigned int flag = 0;
 ID mid = node->u2.id;
 LABEL *lskip = 0;
 VALUE argc;




 if (mid == idASET && !(((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF) && node->u3.node &&
     ((int) (((node->u3.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY && node->u3.node->u2.argc == 2 &&
     ((int) (((node->u3.node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR &&
     ISEQ_COMPILE_DATA(iseq)->current_block == ((void*)0) &&
     ISEQ_COMPILE_DATA(iseq)->option->specialized_instruction)
 {
     VALUE str = freeze_literal(iseq, node->u3.node->u1.node->u1.value);
     if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 0))))) {((void)0);return 0;};
     if (!(((iseq_compile_each(iseq, (ret), (node->u3.node->u3.node->u1.node), 0))))) {((void)0);return 0;};
     if (!popped) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_swap, 0));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
     }
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_aset_with, 3, (VALUE)(new_callinfo(iseq, idASET, 2, 0, ((void*)0), FALSE)), (VALUE)(((void*)0)), (VALUE)(str)));


     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     break;
 }

 (recv->last = &recv->anchor);
 (args->last = &args->anchor);
 argc = setup_args(iseq, args, node->u3.node, &flag, ((void*)0));
 if (!(!!((VALUE)(argc) != ((VALUE)RUBY_Qnil)))) {((void)0);return 0;};

 flag |= ((((int) ((((node)->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF) ? (ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, ((int)(((long)(node)->flags)>>(8 +7))), YARVINSN_putself, 0)), (0x01 << VM_CALL_FCALL_bit)) : (((iseq_compile_each(iseq, (recv), (node->u1.node), 0))), 0));

 ((void)0);
 ((void)0);

 if (!rb_is_attrset_id(mid)) {

     mid = rb_id_attrset(mid);
     ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
     lskip = new_label_body(iseq, (line));
     (ADD_ELEM((recv), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_branchnil, 1, (VALUE)(lskip))), ((lskip)->refcnt++));
 }
 if (!popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putnil, 0));
     APPEND_LIST((ret), (recv));
     APPEND_LIST((ret), (args));

     if (flag & (0x01 << VM_CALL_ARGS_BLOCKARG_bit)) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_topn, 1, (VALUE)((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))));
  if (flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
      ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG))));
      ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idAREF)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
  }
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
     else if (flag & (0x01 << VM_CALL_ARGS_SPLAT_bit)) {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_dup, 0));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)((((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG))));
  ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idAREF)), (VALUE)(((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0)), (VALUE)((VALUE)(((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
     }
     else {
  ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_setn, 1, (VALUE)(((argc)+((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)&~RUBY_FIXNUM_FLAG)))));
     }
 }
 else {
     APPEND_LIST((ret), (recv));
     APPEND_LIST((ret), (args));
 }
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((mid)), (VALUE)((argc)), (((void*)0)), (VALUE)((VALUE)((((VALUE)(flag))<<1 | RUBY_FIXNUM_FLAG))), (((void*)0))));
 if (lskip) ADD_ELEM((ret), (LINK_ELEMENT *) (lskip));
 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));

 break;
      }
      case NODE_PRELUDE:{
 const rb_compile_option_t *orig_opt = ISEQ_COMPILE_DATA(iseq)->option;
 rb_compile_option_t new_opt = *orig_opt;
 if (node->u3.value) {
     rb_iseq_make_compile_option(&new_opt, node->u3.value);
     ISEQ_COMPILE_DATA(iseq)->option = &new_opt;
 }
 if (!new_opt.coverage_enabled) do { const VALUE _ary = ((iseq)->body->mark_ary); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[ISEQ_MARK_ARY_COVERAGE]), (VALUE)((((VALUE)RUBY_Qfalse))), "compile.c", 7100); ; } while (0);
 if (!(((iseq_compile_each(iseq, (ret), (node->u1.node), 1))))) {((void)0);return 0;};
 if (!(((iseq_compile_each(iseq, (ret), (node->u2.node), (popped)))))) {((void)0);return 0;};
 ISEQ_COMPILE_DATA(iseq)->option = orig_opt;







 break;
      }
      case NODE_LAMBDA:{

 const rb_iseq_t *block = new_child_iseq(iseq, (node->u2.node), rb_fstring(make_name_for_block(iseq)), iseq, (ISEQ_TYPE_BLOCK), (line));
 VALUE argc = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);

 ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putspecialobject, 1, (VALUE)((((VALUE)(VM_SPECIAL_OBJECT_VMCORE))<<1 | RUBY_FIXNUM_FLAG))));
 ADD_ELEM(((ret)), (LINK_ELEMENT *) new_insn_send(iseq, ((line)), ((idLambda)), (VALUE)((argc)), ((block)), (VALUE)((VALUE)(((VALUE)((0x01 << VM_CALL_FCALL_bit)))<<1 | RUBY_FIXNUM_FLAG)), (((void*)0))));

 if (popped) {
     ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
 }
 break;
      }
      default:
 do { const NODE *error_node = (node); append_compile_error(iseq, (int)(((long)(error_node)->flags)>>(8 +7)), "iseq_compile_each: unknown node (%s)", ruby_node_name(((int) (((error_node)->flags & (((VALUE)0x7f)<<8))>>8)))); return 0; } while (0);
      ng:
 ((void)0);
 return 0;
    }


    if (((ret->last)->type == ISEQ_ELEMENT_TRACE) && ((TRACE*) ret->last)->event == 0x0001) {
 LINK_ELEMENT *insn = ret->last->prev;
 if (((insn)->type == ISEQ_ELEMENT_INSN) &&
     ((((INSN*)(insn))->insn_id) == YARVINSN_tracecoverage) &&
     ((long)(((long)((((INSN*)(insn))->operands[(0)])))>>(int)(1))) == 0x010000
 ) {
     ELEM_REMOVE(insn);
     do { const VALUE _ary = ((rb_array_const_ptr((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE]))[0])); VALUE *ptr = (VALUE *)((VALUE *)rb_array_const_ptr(_ary)); rb_obj_write((VALUE)(_ary), (VALUE *)(&ptr[line - 1]), (VALUE)((((VALUE)RUBY_Qnil))), "compile.c", 7141); ; } while (0);
 }
    }

    ((void)0);
    return 1;
}





static int
insn_data_length(INSN *iobj)
{
    return insn_len(iobj->insn_id);
}

static int
calc_sp_depth(int depth, INSN *insn)
{
    return insn_stack_increase(depth, insn->insn_id, insn->operands);
}

static VALUE
opobj_inspect(VALUE obj)
{
    struct RBasic *r = (struct RBasic *) obj;
    if (!(((VALUE)(r) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(r) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && r->klass == 0) {
 switch ((int)(((struct RBasic*)(r))->flags & RUBY_T_MASK)) {
   case RUBY_T_STRING:
     obj =  ({ (__builtin_constant_p((!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr))) ? rb_str_new_static(((!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr)), (long)strlen((!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr))) : rb_str_new_cstr((!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr)); });
     break;
   case RUBY_T_ARRAY:
     obj = rb_ary_dup(obj);
     break;
 }
    }
    return rb_inspect(obj);
}



static VALUE
insn_data_to_s_detail(INSN *iobj)
{
    VALUE str = rb_sprintf("%-20s ", insn_name(iobj->insn_id));

    if (iobj->operands) {
 const char *types = insn_op_types(iobj->insn_id);
 int j;

 for (j = 0; types[j]; j++) {
     char type = types[j];

     switch (type) {
       case 'O':
  {
      LABEL *lobj = (LABEL *)(((INSN*)(iobj))->operands[(j)]);
      rb_str_catf(str, "<L%03d>", lobj->label_no);
      break;
  }
  break;
       case 'S':
  {
      rb_iseq_t *iseq = (rb_iseq_t *)(((INSN*)(iobj))->operands[(j)]);
      VALUE val = ((VALUE)RUBY_Qnil);
      if (0 && iseq) {
   val = (VALUE)iseq;
      }
      rb_str_concat(str, opobj_inspect(val));
  }
  break;
       case 'L':
       case 'N':
       case 'V':
  {
      VALUE v = (((INSN*)(iobj))->operands[(j)]);
      rb_str_concat(str, opobj_inspect(v));
      break;
  }
       case 'I':
  rb_str_concat(str, opobj_inspect((((INSN*)(iobj))->operands[(j)])));
  break;
       case 'G':
  {
      struct rb_global_entry *entry = (struct rb_global_entry *)
        ((((INSN*)(iobj))->operands[(j)]) & (~1));
      rb_str_append(str, rb_id2str(entry->id));
      break;
  }
       case 'K':
  rb_str_catf(str, "<ic:%d>", ((int)rb_fix2int((VALUE)((((INSN*)(iobj))->operands[(j)])))));
  break;
       case 'C':
  {
      struct rb_call_info *ci = (struct rb_call_info *)(((INSN*)(iobj))->operands[(j)]);
       ({ (__builtin_constant_p("<callinfo:")) ? rb_str_cat((str), ("<callinfo:"), (long)strlen("<callinfo:")) : rb_str_cat_cstr((str), ("<callinfo:")); });
      if (ci->mid) rb_str_catf(str, "%li\v", rb_id2str(ci->mid));
      rb_str_catf(str, ", %d>", ci->orig_argc);
      break;
  }
       case 'E':
  {
      rb_str_catf(str, "<call cache>");
      break;
  }
       case 'H':
   ({ (__builtin_constant_p("<ch>")) ? rb_str_cat((str), ("<ch>"), (long)strlen("<ch>")) : rb_str_cat_cstr((str), ("<ch>")); });
  break;
       case 'F':
  {
      rb_insn_func_t func = (rb_insn_func_t)(((INSN*)(iobj))->operands[(j)]);

      Dl_info info;
      if (dladdr(func, &info) && info.dli_sname) {
    ({ (__builtin_constant_p(info.dli_sname)) ? rb_str_cat((str), (info.dli_sname), (long)strlen(info.dli_sname)) : rb_str_cat_cstr((str), (info.dli_sname)); });
   break;
      }

      rb_str_catf(str, "<%p>", func);
  }
  break;
       default:{
  rb_raise(rb_eSyntaxError, "unknown operand type: %c", type);
       }
     }
     if (types[j + 1]) {
   ({ (__builtin_constant_p(", ")) ? rb_str_cat((str), (", "), (long)strlen(", ")) : rb_str_cat_cstr((str), (", ")); });
     }
 }
    }
    return str;
}

static void
dump_disasm_list(const LINK_ELEMENT *link)
{
    dump_disasm_list_with_cursor(link, ((void*)0), ((void*)0));
}

static void
dump_disasm_list_with_cursor(const LINK_ELEMENT *link, const LINK_ELEMENT *curr, const LABEL *dest)
{
    int pos = 0;
    INSN *iobj;
    LABEL *lobj;
    VALUE str;

    printf("-- raw disasm--------\n");

    while (link) {
 if (curr) printf(curr == link ? "*": " ");
 switch (link->type) {
   case ISEQ_ELEMENT_INSN:
     {
  iobj = (INSN *)link;
  str = insn_data_to_s_detail(iobj);
  printf("%04d %-65s(%4u)\n", pos, rb_string_value_cstr(&(str)), iobj->insn_info.line_no);
  pos += insn_data_length(iobj);
  break;
     }
   case ISEQ_ELEMENT_LABEL:
     {
  lobj = (LABEL *)link;
  printf("<L%03d>%s\n", lobj->label_no, dest == lobj ? " <---": "");
  break;
     }
   case ISEQ_ELEMENT_TRACE:
     {
  TRACE *trace = (TRACE *)link;
  printf("trace: %0x\n", trace->event);
  break;
     }
   case ISEQ_ELEMENT_ADJUST:
     {
  ADJUST *adjust = (ADJUST *)link;
  printf("adjust: [label: %d]\n", adjust->label ? adjust->label->label_no : -1);
  break;
     }
   default:

     rb_raise(rb_eSyntaxError, "dump_disasm_list error: %ld\n", ((long)(((long)(link->type))>>(int)(1))));
 }
 link = link->next;
    }
    printf("---------------------\n");
    fflush(stdout);
}

const char *
rb_insns_name(int i)
{
    return insn_name_info_base+insn_name_info_offset[i];
}

VALUE
rb_insns_name_array(void)
{
    VALUE ary = rb_ary_new();
    int i;
    for (i = 0; i < VM_INSTRUCTION_SIZE; i++) {
 rb_ary_push(ary,  ({ (__builtin_constant_p(insn_name_info_base+insn_name_info_offset[i])) ? rb_fstring_new((insn_name_info_base+insn_name_info_offset[i]), (long)strlen(insn_name_info_base+insn_name_info_offset[i])) : rb_fstring_cstr(insn_name_info_base+insn_name_info_offset[i]); }));
    }
    return rb_obj_freeze(ary);
}

static LABEL *
register_label(rb_iseq_t *iseq, struct st_table *labels_table, VALUE obj)
{
    LABEL *label = 0;
    st_data_t tmp;
    obj = rb_to_symbol_type(obj);

    if (st_lookup(labels_table, obj, &tmp) == 0) {
 label = new_label_body(iseq, (0));
 st_insert(labels_table, obj, (st_data_t)label);
    }
    else {
 label = (LABEL *)tmp;
    }
    ((label)->refcnt++);
    return label;
}

static VALUE
get_exception_sym2type(VALUE sym)
{


    static VALUE symRescue, symEnsure, symRetry;
    static VALUE symBreak, symRedo, symNext;

    if (symRescue == 0) {
 symRescue = (rb_id2sym((__builtin_constant_p("rescue") ?  (rb_intern2(("rescue"), (long)strlen("rescue"))) : (rb_intern)("rescue"))));
 symEnsure = (rb_id2sym((__builtin_constant_p("ensure") ?  (rb_intern2(("ensure"), (long)strlen("ensure"))) : (rb_intern)("ensure"))));
 symRetry = (rb_id2sym((__builtin_constant_p("retry") ?  (rb_intern2(("retry"), (long)strlen("retry"))) : (rb_intern)("retry"))));
 symBreak = (rb_id2sym((__builtin_constant_p("break") ?  (rb_intern2(("break"), (long)strlen("break"))) : (rb_intern)("break"))));
 symRedo = (rb_id2sym((__builtin_constant_p("redo") ?  (rb_intern2(("redo"), (long)strlen("redo"))) : (rb_intern)("redo"))));
 symNext = (rb_id2sym((__builtin_constant_p("next") ?  (rb_intern2(("next"), (long)strlen("next"))) : (rb_intern)("next"))));
    }

    if (sym == symRescue) return CATCH_TYPE_RESCUE;
    if (sym == symEnsure) return CATCH_TYPE_ENSURE;
    if (sym == symRetry) return CATCH_TYPE_RETRY;
    if (sym == symBreak) return CATCH_TYPE_BREAK;
    if (sym == symRedo) return CATCH_TYPE_REDO;
    if (sym == symNext) return CATCH_TYPE_NEXT;
    rb_raise(rb_eSyntaxError, "invalid exception symbol: %+li\v", sym);
    return 0;
}

static int
iseq_build_from_ary_exception(rb_iseq_t *iseq, struct st_table *labels_table,
       VALUE exception)
{
    int i;

    for (i=0; i<rb_array_len(exception); i++) {
 const rb_iseq_t *eiseq;
 VALUE v, type;
 const VALUE *ptr;
 LABEL *lstart, *lend, *lcont;
 unsigned int sp;

 v = rb_to_array_type((rb_array_const_ptr(exception)[i]));
 if (rb_array_len(v) != 6) {
     rb_raise(rb_eSyntaxError, "wrong exception entry");
 }
 ptr = rb_array_const_ptr(v);
 type = get_exception_sym2type(ptr[0]);
 if (ptr[1] == ((VALUE)RUBY_Qnil)) {
     eiseq = ((void*)0);
 }
 else {
     eiseq = rb_iseqw_to_iseq(rb_iseq_load(ptr[1], (VALUE)iseq, ((VALUE)RUBY_Qnil)));
 }

 lstart = register_label(iseq, labels_table, ptr[2]);
 lend = register_label(iseq, labels_table, ptr[3]);
 lcont = register_label(iseq, labels_table, ptr[4]);
 sp = ((unsigned int)rb_num2uint(ptr[5]));


 if (type == CATCH_TYPE_RESCUE ||
     type == CATCH_TYPE_BREAK ||
     type == CATCH_TYPE_NEXT) {
     ++sp;
 }

 lcont->sp = sp;

 do { VALUE _e =  ({ const VALUE args_to_new_ary[] = {(type), (VALUE)(lstart) | 1, (VALUE)(lend) | 1, (VALUE)(eiseq), (VALUE)(lcont) | 1}; if (__builtin_constant_p(5)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (5)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); }); ((lstart) ? (((lstart)->refcnt++), (lstart)->unremovable=1) : 0); ((lend)->refcnt++); ((lcont)->refcnt++); rb_ary_push(ISEQ_COMPILE_DATA(iseq)->catch_table_ary, freeze_hide_obj(_e)); } while (0);

 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(v); ; rb_gc_guarded_ptr; }));
    }
    return 1;
}

static struct st_table *
insn_make_insn_table(void)
{
    struct st_table *table;
    int i;
    table = st_init_numtable();

    for (i=0; i<VM_INSTRUCTION_SIZE; i++) {
 st_insert(table, (rb_id2sym((__builtin_constant_p(insn_name(i)) ?  (rb_intern2((insn_name(i)), (long)strlen(insn_name(i)))) : (rb_intern)(insn_name(i))))), i);
    }

    return table;
}

static const rb_iseq_t *
iseq_build_load_iseq(const rb_iseq_t *iseq, VALUE op)
{
    VALUE iseqw;
    const rb_iseq_t *loaded_iseq;

    if (( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(op))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((op) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((op) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((op) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((op) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(op)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(op) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(op) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(op))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(op))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(op) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(op) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(op))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(op) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(op) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(op))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) {
 iseqw = rb_iseq_load(op, (VALUE)iseq, ((VALUE)RUBY_Qnil));
    }
    else if (rb_class_of((VALUE)(op)) == rb_cISeq) {
 iseqw = op;
    }
    else {
 rb_raise(rb_eSyntaxError, "ISEQ is required");
    }

    loaded_iseq = rb_iseqw_to_iseq(iseqw);
    iseq_add_mark_object(iseq, (VALUE)loaded_iseq);
    return loaded_iseq;
}

static VALUE
iseq_build_callinfo_from_hash(rb_iseq_t *iseq, VALUE op)
{
    ID mid = 0;
    int orig_argc = 0;
    unsigned int flag = 0;
    struct rb_call_info_kw_arg *kw_arg = 0;

    if (!!((VALUE)(op) != ((VALUE)RUBY_Qnil))) {
 VALUE vmid = rb_hash_aref(op, (rb_id2sym((__builtin_constant_p("mid") ?  (rb_intern2(("mid"), (long)strlen("mid"))) : (rb_intern)("mid")))));
 VALUE vflag = rb_hash_aref(op, (rb_id2sym((__builtin_constant_p("flag") ?  (rb_intern2(("flag"), (long)strlen("flag"))) : (rb_intern)("flag")))));
 VALUE vorig_argc = rb_hash_aref(op, (rb_id2sym((__builtin_constant_p("orig_argc") ?  (rb_intern2(("orig_argc"), (long)strlen("orig_argc"))) : (rb_intern)("orig_argc")))));
 VALUE vkw_arg = rb_hash_aref(op, (rb_id2sym((__builtin_constant_p("kw_arg") ?  (rb_intern2(("kw_arg"), (long)strlen("kw_arg"))) : (rb_intern)("kw_arg")))));

 if (!!((VALUE)(vmid) != ((VALUE)RUBY_Qnil))) mid = (rb_sym2id(vmid));
 if (!!((VALUE)(vflag) != ((VALUE)RUBY_Qnil))) flag = ((unsigned int)rb_num2uint(vflag));
 if (!!((VALUE)(vorig_argc) != ((VALUE)RUBY_Qnil))) orig_argc = ((int)rb_fix2int((VALUE)(vorig_argc)));

 if (!!((VALUE)(vkw_arg) != ((VALUE)RUBY_Qnil))) {
     int i;
     int len = rb_long2int_inline(rb_array_len(vkw_arg));
     size_t n = rb_call_info_kw_arg_bytes(len);

     kw_arg = ruby_xmalloc(n);
     kw_arg->keyword_len = len;
     for (i = 0; i < len; i++) {
  VALUE kw = (rb_array_const_ptr(vkw_arg)[i]);
  (rb_sym2id(kw));
  kw_arg->keywords[i] = kw;
     }
 }
    }

    return (VALUE)new_callinfo(iseq, mid, orig_argc, flag, kw_arg, (flag & (0x01 << VM_CALL_ARGS_SIMPLE_bit)) == 0);
}

static rb_event_flag_t
event_name_to_flag(VALUE sym)
{

  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_LINE") ?  (rb_intern2(("RUBY_EVENT_LINE"), (long)strlen("RUBY_EVENT_LINE"))) : (rb_intern)("RUBY_EVENT_LINE"))))) return 0x0001;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_CLASS") ?  (rb_intern2(("RUBY_EVENT_CLASS"), (long)strlen("RUBY_EVENT_CLASS"))) : (rb_intern)("RUBY_EVENT_CLASS"))))) return 0x0002;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_END") ?  (rb_intern2(("RUBY_EVENT_END"), (long)strlen("RUBY_EVENT_END"))) : (rb_intern)("RUBY_EVENT_END"))))) return 0x0004;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_CALL") ?  (rb_intern2(("RUBY_EVENT_CALL"), (long)strlen("RUBY_EVENT_CALL"))) : (rb_intern)("RUBY_EVENT_CALL"))))) return 0x0008;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_RETURN") ?  (rb_intern2(("RUBY_EVENT_RETURN"), (long)strlen("RUBY_EVENT_RETURN"))) : (rb_intern)("RUBY_EVENT_RETURN"))))) return 0x0010;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_B_CALL") ?  (rb_intern2(("RUBY_EVENT_B_CALL"), (long)strlen("RUBY_EVENT_B_CALL"))) : (rb_intern)("RUBY_EVENT_B_CALL"))))) return 0x0100;;
  if (sym == (rb_id2sym((__builtin_constant_p("RUBY_EVENT_B_RETURN") ?  (rb_intern2(("RUBY_EVENT_B_RETURN"), (long)strlen("RUBY_EVENT_B_RETURN"))) : (rb_intern)("RUBY_EVENT_B_RETURN"))))) return 0x0200;;

    return 0x0000;
}

static int
iseq_build_from_ary_body(rb_iseq_t *iseq, LINK_ANCHOR *const anchor,
    VALUE body, VALUE labels_wrapper)
{

    const VALUE *ptr = rb_array_const_ptr(body);
    long i, len = rb_array_len(body);
    struct st_table *labels_table = (((struct RData*)(labels_wrapper))->data);
    int j;
    int line_no = 0;
    int ret = 1;




    static struct st_table *insn_table;

    if (insn_table == 0) {
 insn_table = insn_make_insn_table();
    }

    for (i=0; i<len; i++) {
 VALUE obj = ptr[i];

 if (((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
     rb_event_flag_t event;
     if ((event = event_name_to_flag(obj)) != 0x0000) {
  ADD_ELEM((anchor), (LINK_ELEMENT *)new_trace_body(iseq, (event)));
     }
     else {
  LABEL *label = register_label(iseq, labels_table, obj);
  ADD_ELEM((anchor), (LINK_ELEMENT *) (label));
     }
 }
 else if ((((int)(long)(obj))&RUBY_FIXNUM_FLAG)) {
     line_no = rb_num2int_inline(obj);
 }
 else if (( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) {
     VALUE *argv = 0;
     int argc = rb_long2int_inline(rb_array_len(obj)) - 1;
     st_data_t insn_id;
     VALUE insn;

     insn = (argc < 0) ? ((VALUE)RUBY_Qnil) : (rb_array_const_ptr(obj)[0]);
     if (st_lookup(insn_table, (st_data_t)insn, &insn_id) == 0) {

  append_compile_error(iseq, line_no,
         "unknown instruction: %+li\v", insn);
  ret = 0;
  break;
     }

     if (argc != insn_len((VALUE)insn_id)-1) {
  append_compile_error(iseq, line_no,
         "operand size mismatch");
  ret = 0;
  break;
     }

     if (argc > 0) {
  argv = compile_data_alloc(iseq, sizeof(VALUE) * argc);
  for (j=0; j<argc; j++) {
      VALUE op = rb_ary_entry(obj, j+1);
      switch (insn_op_type((VALUE)insn_id, j)) {
        case 'O': {
   LABEL *label = register_label(iseq, labels_table, op);
   argv[j] = (VALUE)label;
   break;
        }
        case 'L':
        case 'N':
   (void)rb_num2int_inline(op);
   argv[j] = op;
   break;
        case 'V':
   argv[j] = op;
   iseq_add_mark_object(iseq, op);
   break;
        case 'S':
   {
       if (op != ((VALUE)RUBY_Qnil)) {
    argv[j] = (VALUE)iseq_build_load_iseq(iseq, op);
       }
       else {
    argv[j] = 0;
       }
   }
   break;
        case 'G':
   op = rb_to_symbol_type(op);
   argv[j] = (VALUE)rb_global_entry((rb_sym2id(op)));
   break;
        case 'K':
   argv[j] = op;
   if (((unsigned int)rb_num2uint(op)) >= iseq->body->is_size) {
       iseq->body->is_size = rb_num2int_inline(op) + 1;
   }
   break;
        case 'C':
   argv[j] = iseq_build_callinfo_from_hash(iseq, op);
   break;
        case 'E':
   argv[j] = ((VALUE)RUBY_Qfalse);
   break;
        case 'I':
   argv[j] = rb_to_symbol_type(op);
   break;
        case 'H':
   {
       int i;
       VALUE map = rb_hash_new_with_size(rb_array_len(op)/2);

       rb_hash_tbl_raw(map)->type = &cdhash_type;
       op = rb_to_array_type(op);
       for (i=0; i<rb_array_len(op); i+=2) {
    VALUE key = (rb_array_const_ptr(op)[i]);
    VALUE sym = (rb_array_const_ptr(op)[i+1]);
    LABEL *label =
      register_label(iseq, labels_table, sym);
    rb_hash_aset(map, key, (VALUE)label | 1);
       }
       (* ({ volatile VALUE *rb_gc_guarded_ptr = &(op); ; rb_gc_guarded_ptr; }));
       argv[j] = map;
       rb_iseq_add_mark_object(iseq, map);
   }
   break;
        case 'F':
   {

       long funcptr = rb_num2long_inline(op);



       argv[j] = (VALUE)funcptr;
   }
   break;
        default:
   rb_raise(rb_eSyntaxError, "unknown operand: %c", insn_op_type((VALUE)insn_id, j));
      }
  }
     }
     ADD_ELEM(anchor,
       (LINK_ELEMENT*)new_insn_core(iseq, line_no,
        (enum ruby_vminsn_type)insn_id, argc, argv));
 }
 else {
     rb_raise(rb_eTypeError, "unexpected object for instruction");
 }
    }
    (((struct RData*)(labels_wrapper))->data) = 0;
    validate_labels(iseq, labels_table);
    if (!ret) return ret;
    return iseq_setup(iseq, anchor);
}




static int
int_param(int *dst, VALUE param, VALUE sym)
{
    VALUE val = rb_hash_aref(param, sym);
    if ((((int)(long)(val))&RUBY_FIXNUM_FLAG)) {
 *dst = ((int)rb_fix2int((VALUE)(val)));
 return TRUE;
    }
    else if (!!((VALUE)(val) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eTypeError, "invalid %+li\v Fixnum: %+li\v",
   sym, val);
    }
    return FALSE;
}

static const struct rb_iseq_param_keyword *
iseq_build_kw(rb_iseq_t *iseq, VALUE params, VALUE keywords)
{
    int i, j;
    int len = rb_long2int_inline(rb_array_len(keywords));
    int default_len;
    VALUE key, sym, default_val;
    VALUE *dvs;
    ID *ids;
    struct rb_iseq_param_keyword *keyword = (((struct rb_iseq_param_keyword*)ruby_xcalloc((size_t)(1),sizeof(struct rb_iseq_param_keyword))));

    iseq->body->param.flags.has_kw = TRUE;

    keyword->num = len;

    (void)int_param(&keyword->bits_start, params, (rb_id2sym((__builtin_constant_p("kwbits") ?  (rb_intern2(("kwbits"), (long)strlen("kwbits"))) : (rb_intern)("kwbits")))));
    i = keyword->bits_start - keyword->num;
    ids = (ID *)&iseq->body->local_table[i];



    for (i = 0; i < len; i++) {
 VALUE val = (rb_array_const_ptr(keywords)[i]);

 if (!((((VALUE)(val)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
     goto default_values;
 }
 ids[i] = (rb_sym2id(val));
 keyword->required_num++;
    }

  default_values:
    default_len = len - i;
    if (default_len == 0) {
 keyword->table = ids;
 return keyword;
    }

    dvs = ((VALUE*)ruby_xmalloc2((size_t)((unsigned int)default_len),sizeof(VALUE)));

    for (j = 0; i < len; i++, j++) {
 key = (rb_array_const_ptr(keywords)[i]);
 rb_to_array_type(key);

 switch (rb_array_len(key)) {
   case 1:
     sym = (rb_array_const_ptr(key)[0]);
     default_val = ((VALUE)RUBY_Qundef);
     break;
   case 2:
     sym = (rb_array_const_ptr(key)[0]);
     default_val = (rb_array_const_ptr(key)[1]);
     break;
   default:
     rb_raise(rb_eTypeError, "keyword default has unsupported len %+li\v", key);
 }
 ids[i] = (rb_sym2id(sym));
 dvs[j] = default_val;
    }

    keyword->table = ids;
    keyword->default_values = dvs;

    return keyword;
}

void
rb_iseq_build_from_ary(rb_iseq_t *iseq, VALUE misc, VALUE locals, VALUE params,
    VALUE exception, VALUE body)
{

    int i, len;
    unsigned int arg_size, local_size, stack_max;
    ID *tbl;
    struct st_table *labels_table = st_init_numtable();
    VALUE labels_wrapper = rb_data_object_wrap((0),(labels_table),(RUBY_DATA_FUNC)(0),(RUBY_DATA_FUNC)(st_free_table));
    VALUE arg_opt_labels = rb_hash_aref(params, (rb_id2sym((__builtin_constant_p("opt") ?  (rb_intern2(("opt"), (long)strlen("opt"))) : (rb_intern)("opt")))));
    VALUE keywords = rb_hash_aref(params, (rb_id2sym((__builtin_constant_p("keyword") ?  (rb_intern2(("keyword"), (long)strlen("keyword"))) : (rb_intern)("keyword")))));
    VALUE sym_arg_rest = (rb_id2sym((__builtin_constant_p("#arg_rest") ?  (rb_intern2(("#arg_rest"), (long)strlen("#arg_rest"))) : (rb_intern)("#arg_rest"))));
    LINK_ANCHOR anchor[1] = {{{0,},}};
    (anchor->last = &anchor->anchor);

    len = rb_long2int_inline(rb_array_len(locals));
    iseq->body->local_table_size = len;
    iseq->body->local_table = tbl = len > 0 ? (ID *)((ID*)ruby_xmalloc2((size_t)(iseq->body->local_table_size),sizeof(ID))) : ((void*)0);

    for (i = 0; i < len; i++) {
 VALUE lv = (rb_array_const_ptr(locals)[i]);

 if (sym_arg_rest == lv) {
     tbl[i] = 0;
 }
 else {
     tbl[i] = (((int)(long)(lv))&RUBY_FIXNUM_FLAG) ? (ID)((long)(((long)(lv))>>(int)(1))) : (rb_sym2id(rb_to_symbol_type(lv)));
 }
    }


    if (int_param(&iseq->body->param.lead_num, params, (rb_id2sym((__builtin_constant_p("lead_num") ?  (rb_intern2(("lead_num"), (long)strlen("lead_num"))) : (rb_intern)("lead_num")))))) {
 iseq->body->param.flags.has_lead = TRUE;
    }
    if (int_param(&iseq->body->param.post_num, params, (rb_id2sym((__builtin_constant_p("post_num") ?  (rb_intern2(("post_num"), (long)strlen("post_num"))) : (rb_intern)("post_num")))))) iseq->body->param.flags.has_post = TRUE;
    if (int_param(&iseq->body->param.post_start, params, (rb_id2sym((__builtin_constant_p("post_start") ?  (rb_intern2(("post_start"), (long)strlen("post_start"))) : (rb_intern)("post_start")))))) iseq->body->param.flags.has_post = TRUE;
    if (int_param(&iseq->body->param.rest_start, params, (rb_id2sym((__builtin_constant_p("rest_start") ?  (rb_intern2(("rest_start"), (long)strlen("rest_start"))) : (rb_intern)("rest_start")))))) iseq->body->param.flags.has_rest = TRUE;
    if (int_param(&iseq->body->param.block_start, params, (rb_id2sym((__builtin_constant_p("block_start") ?  (rb_intern2(("block_start"), (long)strlen("block_start"))) : (rb_intern)("block_start")))))) iseq->body->param.flags.has_block = TRUE;

    {

 int x;
 arg_size = (int_param(&x, misc, (rb_id2sym((__builtin_constant_p("arg_size") ?  (rb_intern2(("arg_size"), (long)strlen("arg_size"))) : (rb_intern)("arg_size"))))) ? (unsigned int)x : 0);
 local_size = (int_param(&x, misc, (rb_id2sym((__builtin_constant_p("local_size") ?  (rb_intern2(("local_size"), (long)strlen("local_size"))) : (rb_intern)("local_size"))))) ? (unsigned int)x : 0);
 stack_max = (int_param(&x, misc, (rb_id2sym((__builtin_constant_p("stack_max") ?  (rb_intern2(("stack_max"), (long)strlen("stack_max"))) : (rb_intern)("stack_max"))))) ? (unsigned int)x : 0);

    }

    if (( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(arg_opt_labels))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((arg_opt_labels) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((arg_opt_labels) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((arg_opt_labels) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((arg_opt_labels) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(arg_opt_labels)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg_opt_labels) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg_opt_labels) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg_opt_labels))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(arg_opt_labels))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(arg_opt_labels) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg_opt_labels) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg_opt_labels))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(arg_opt_labels) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg_opt_labels) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg_opt_labels))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) {
 len = rb_long2int_inline(rb_array_len(arg_opt_labels));
 iseq->body->param.flags.has_opt = !!(len - 1 >= 0);

 if (iseq->body->param.flags.has_opt) {
     VALUE *opt_table = ((VALUE*)ruby_xmalloc2((size_t)(len),sizeof(VALUE)));

     for (i = 0; i < len; i++) {
  VALUE ent = (rb_array_const_ptr(arg_opt_labels)[i]);
  LABEL *label = register_label(iseq, labels_table, ent);
  opt_table[i] = (VALUE)label;
     }

     iseq->body->param.opt_num = len - 1;
     iseq->body->param.opt_table = opt_table;
 }
    }
    else if (!!((VALUE)(arg_opt_labels) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eTypeError, ":opt param is not an array: %+li\v",
   arg_opt_labels);
    }

    if (( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(keywords))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((keywords) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((keywords) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((keywords) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((keywords) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(keywords)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(keywords) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(keywords) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(keywords))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(keywords))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(keywords) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(keywords) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(keywords))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(keywords) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(keywords) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(keywords))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) {
 iseq->body->param.keyword = iseq_build_kw(iseq, params, keywords);
    }
    else if (!!((VALUE)(keywords) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eTypeError, ":keywords param is not an array: %+li\v",
   keywords);
    }

    if (((VALUE)RUBY_Qtrue) == rb_hash_aref(params, (rb_id2sym((__builtin_constant_p("ambiguous_param0") ?  (rb_intern2(("ambiguous_param0"), (long)strlen("ambiguous_param0"))) : (rb_intern)("ambiguous_param0")))))) {
 iseq->body->param.flags.ambiguous_param0 = TRUE;
    }

    if (int_param(&i, params, (rb_id2sym((__builtin_constant_p("kwrest") ?  (rb_intern2(("kwrest"), (long)strlen("kwrest"))) : (rb_intern)("kwrest")))))) {
 struct rb_iseq_param_keyword *keyword = (struct rb_iseq_param_keyword *)iseq->body->param.keyword;
 if (keyword == ((void*)0)) {
     iseq->body->param.keyword = keyword = (((struct rb_iseq_param_keyword*)ruby_xcalloc((size_t)(1),sizeof(struct rb_iseq_param_keyword))));
 }
 keyword->rest_start = i;
 iseq->body->param.flags.has_kwrest = TRUE;
    }

    iseq_calc_param_size(iseq);


    iseq_build_from_ary_exception(iseq, labels_table, exception);


    iseq_build_from_ary_body(iseq, anchor, body, labels_wrapper);

    iseq->body->param.size = arg_size;
    iseq->body->local_table_size = local_size;
    iseq->body->stack_max = stack_max;
}



int
rb_dvar_defined(ID id, const struct rb_block *base_block)
{
    const rb_iseq_t *iseq;

    if (base_block && (iseq = vm_block_iseq(base_block)) != ((void*)0)) {
 while (iseq->body->type == ISEQ_TYPE_BLOCK ||
        iseq->body->type == ISEQ_TYPE_RESCUE ||
        iseq->body->type == ISEQ_TYPE_ENSURE ||
        iseq->body->type == ISEQ_TYPE_EVAL ||
        iseq->body->type == ISEQ_TYPE_MAIN
        ) {
     unsigned int i;

     for (i = 0; i < iseq->body->local_table_size; i++) {
  if (iseq->body->local_table[i] == id) {
      return 1;
  }
     }
     iseq = iseq->body->parent_iseq;
 }
    }
    return 0;
}

int
rb_local_defined(ID id, const struct rb_block *base_block)
{
    const rb_iseq_t *iseq;

    if (base_block && (iseq = vm_block_iseq(base_block)) != ((void*)0)) {
 unsigned int i;
 iseq = iseq->body->local_iseq;

 for (i=0; i<iseq->body->local_table_size; i++) {
     if (iseq->body->local_table[i] == id) {
  return 1;
     }
 }
    }
    return 0;
}

static int
caller_location(VALUE *path, VALUE *realpath)
{
    const rb_execution_context_t *ec = rb_current_execution_context();
    const rb_control_frame_t *const cfp =
        rb_vm_get_ruby_level_next_cfp(ec, ec->cfp);

    if (cfp) {
 int line = rb_vm_get_sourceline(cfp);
 *path = rb_iseq_path(cfp->iseq);
 *realpath = rb_iseq_realpath(cfp->iseq);
 return line;
    }
    else {
 *path =  ({ (__builtin_constant_p("<compiled>")) ? rb_fstring_new(("<compiled>"), (long)strlen("<compiled>")) : rb_fstring_cstr("<compiled>"); });
 *realpath = *path;
 return 1;
    }
}

typedef struct {
    VALUE arg;
    rb_insn_func_t func;
    int line;
} accessor_args;

static const rb_iseq_t *
method_for_self(VALUE name, VALUE arg, rb_insn_func_t func,
  VALUE (*build)(rb_iseq_t *, LINK_ANCHOR *const, VALUE))
{
    VALUE path, realpath;
    accessor_args acc;

    acc.arg = arg;
    acc.func = func;
    acc.line = caller_location(&path, &realpath);
    return rb_iseq_new_with_opt((const NODE *)((struct vm_ifunc *)rb_imemo_new(imemo_ifunc, (VALUE)(build), (VALUE)((VALUE)&acc), (VALUE)(0), 0)),
    rb_sym2str(name), path, realpath,
    (((VALUE)(acc.line))<<1 | RUBY_FIXNUM_FLAG), 0, ISEQ_TYPE_METHOD, 0);
}

static VALUE
for_self_aref(rb_iseq_t *iseq, LINK_ANCHOR *const ret, VALUE a)
{
    const accessor_args *const args = (void *)a;
    const int line = args->line;

    iseq_set_local_table(iseq, 0);
    iseq->body->param.lead_num = 0;
    iseq->body->param.size = 0;

    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(args->arg)));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_call_c_function, 1, (VALUE)((VALUE)args->func)));
    return ((VALUE)RUBY_Qnil);
}

static VALUE
for_self_aset(rb_iseq_t *iseq, LINK_ANCHOR *const ret, VALUE a)
{
    const accessor_args *const args = (void *)a;
    const int line = args->line;
    static const ID vars[] = {1, idUScore};

    iseq_set_local_table(iseq, vars);
    iseq->body->param.lead_num = 1;
    iseq->body->param.size = 1;

    iseq_add_getlocal(iseq, (ret), (line), (((int)(sizeof(vars) / sizeof((vars)[0])))-1), (0));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_putobject, 1, (VALUE)(args->arg)));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_opt_call_c_function, 1, (VALUE)((VALUE)args->func)));
    ADD_ELEM((ret), (LINK_ELEMENT *) new_insn_body(iseq, (line), YARVINSN_pop, 0));
    return ((VALUE)RUBY_Qnil);
}




const rb_iseq_t *
rb_method_for_self_aref(VALUE name, VALUE arg, rb_insn_func_t func)
{
    return method_for_self(name, arg, func, for_self_aref);
}




const rb_iseq_t *
rb_method_for_self_aset(VALUE name, VALUE arg, rb_insn_func_t func)
{
    return method_for_self(name, arg, func, for_self_aset);
}



typedef unsigned int ibf_offset_t;


struct ibf_header {
    char magic[4];
    unsigned int major_version;
    unsigned int minor_version;
    unsigned int size;
    unsigned int extra_size;

    unsigned int iseq_list_size;
    unsigned int id_list_size;
    unsigned int object_list_size;

    ibf_offset_t iseq_list_offset;
    ibf_offset_t id_list_offset;
    ibf_offset_t object_list_offset;
};

struct ibf_id_entry {
    enum {
 ibf_id_enc_ascii,
 ibf_id_enc_utf8,
 ibf_id_enc_other
    } enc : 2;
    char body[1];
};

struct ibf_dump {
    VALUE str;
    VALUE iseq_list;
    VALUE obj_list;
    st_table *iseq_table;
    st_table *id_table;
};

rb_iseq_t * iseq_alloc(void);

struct ibf_load {
    const char *buff;
    const struct ibf_header *header;
    ID *id_list;
    VALUE iseq_list;
    VALUE obj_list;
    VALUE loader_obj;
    VALUE str;
    rb_iseq_t *iseq;
};

static ibf_offset_t
ibf_dump_pos(struct ibf_dump *dump)
{
    return (unsigned int)rb_str_strlen(dump->str);
}

static ibf_offset_t
ibf_dump_write(struct ibf_dump *dump, const void *buff, unsigned long size)
{
    ibf_offset_t pos = ibf_dump_pos(dump);
    rb_str_cat(dump->str, (const char *)buff, size);

    return pos;
}

static void
ibf_dump_overwrite(struct ibf_dump *dump, void *buff, unsigned int size, long offset)
{
    VALUE str = dump->str;
    char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    if ((unsigned long)(size + offset) > (unsigned long)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len))
 rb_bug("ibf_dump_overwrite: overflow");
    memcpy(ptr + offset, buff, size);
}

static void *
ibf_load_alloc(const struct ibf_load *load, ibf_offset_t offset, int size)
{
    void *buff = ruby_xmalloc(size);
    memcpy(buff, load->buff + offset, size);
    return buff;
}






static int
ibf_table_lookup(struct st_table *table, st_data_t key)
{
    st_data_t val;

    if (st_lookup(table, key, &val)) {
 return (int)val;
    }
    else {
 return -1;
    }
}

static int
ibf_table_index(struct st_table *table, st_data_t key)
{
    int index = ibf_table_lookup(table, key);

    if (index < 0) {
 index = (int)table->num_entries;
 st_insert(table, key, (st_data_t)index);
    }

    return index;
}



static VALUE ibf_load_object(const struct ibf_load *load, VALUE object_index);
static rb_iseq_t *ibf_load_iseq(const struct ibf_load *load, const rb_iseq_t *index_iseq);

static VALUE
ibf_dump_object(struct ibf_dump *dump, VALUE obj)
{
    long index = rb_array_len(dump->obj_list);
    long i;
    for (i=0; i<index; i++) {
 if ((rb_array_const_ptr(dump->obj_list)[i]) == obj) return (VALUE)i;
    }
    rb_ary_push(dump->obj_list, obj);
    return (VALUE)index;
}

static VALUE
ibf_dump_id(struct ibf_dump *dump, ID id)
{
    return (VALUE)ibf_table_index(dump->id_table, (st_data_t)id);
}

static ID
ibf_load_id(const struct ibf_load *load, const ID id_index)
{
    ID id;

    if (id_index == 0) {
 id = 0;
    }
    else {
 id = load->id_list[(long)id_index];

 if (id == 0) {
     long *indices = (long *)(load->buff + load->header->id_list_offset);
     VALUE str = ibf_load_object(load, indices[id_index]);
     id = !((VALUE)(str) != ((VALUE)RUBY_Qnil)) ? 0 : rb_intern_str(str);
     load->id_list[(long)id_index] = id;
 }
    }

    return id;
}



static VALUE
ibf_dump_callinfo(struct ibf_dump *dump, const struct rb_call_info *ci)
{
    return (ci->flag & (0x01 << VM_CALL_KWARG_bit)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}

static ibf_offset_t ibf_dump_iseq_each(struct ibf_dump *dump, const rb_iseq_t *iseq);

static rb_iseq_t *
ibf_dump_iseq(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    if (iseq == ((void*)0)) {
 return (rb_iseq_t *)-1;
    }
    else {
 int iseq_index = ibf_table_lookup(dump->iseq_table, (st_data_t)iseq);
 if (iseq_index < 0) {
     iseq_index = ibf_table_index(dump->iseq_table, (st_data_t)iseq);
     rb_ary_store(dump->iseq_list, iseq_index, rb_long2num_inline(ibf_dump_iseq_each(dump, rb_iseq_check(iseq))));
 }
 return (rb_iseq_t *)(VALUE)iseq_index;
    }
}

static VALUE
ibf_dump_gentry(struct ibf_dump *dump, const struct rb_global_entry *entry)
{
    return (VALUE)ibf_dump_id(dump, entry->id);
}

static VALUE
ibf_load_gentry(const struct ibf_load *load, const struct rb_global_entry *entry)
{
    ID gid = ibf_load_id(load, (ID)(VALUE)entry);
    return (VALUE)rb_global_entry(gid);
}

static VALUE *
ibf_dump_code(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    const int iseq_size = iseq->body->iseq_size;
    int code_index;
    VALUE *code;
    const VALUE *orig_code = rb_iseq_original_iseq(iseq);

    code = ((VALUE*)__builtin_alloca (sizeof(VALUE)*(iseq_size)));

    for (code_index=0; code_index<iseq_size;) {
 const VALUE insn = orig_code[code_index];
 const char *types = insn_op_types(insn);
 int op_index;

 code[code_index++] = (VALUE)insn;

 for (op_index=0; types[op_index]; op_index++, code_index++) {
     VALUE op = orig_code[code_index];
     switch (types[op_index]) {
       case 'H':
       case 'V':
  code[code_index] = ibf_dump_object(dump, op);
  break;
       case 'S':
  code[code_index] = (VALUE)ibf_dump_iseq(dump, (const rb_iseq_t *)op);
  break;
       case 'K':
  {
      unsigned int i;
      for (i=0; i<iseq->body->is_size; i++) {
   if (op == (VALUE)&iseq->body->is_entries[i]) {
       break;
   }
      }
      code[code_index] = i;
  }
  break;
       case 'C':
  code[code_index] = ibf_dump_callinfo(dump, (const struct rb_call_info *)op);
  break;
       case 'E':
  code[code_index] = 0;
  break;
       case 'I':
  code[code_index] = ibf_dump_id(dump, (ID)op);
  break;
       case 'G':
  code[code_index] = ibf_dump_gentry(dump, (const struct rb_global_entry *)op);
  break;
       case 'F':
  rb_raise(rb_eRuntimeError, "TS_FUNCPTR is not supported");
  break;
       default:
  code[code_index] = op;
  break;
     }
 }
 ((insn_len(insn) == op_index+1) ? (void) (0) : __assert_fail ("insn_len(insn) == op_index+1", "compile.c", 8264,  __PRETTY_FUNCTION__));
    }

    return (VALUE *)(VALUE)ibf_dump_write(dump, (code), sizeof(VALUE) * (iseq_size));
}

static VALUE *
ibf_load_code(const struct ibf_load *load, const rb_iseq_t *iseq, const struct rb_iseq_constant_body *body)
{
    const int iseq_size = body->iseq_size;
    int code_index;
    VALUE *code = (VALUE *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->iseq_encoded)), sizeof(VALUE) * (iseq_size));

    struct rb_call_info *ci_entries = iseq->body->ci_entries;
    struct rb_call_info_with_kwarg *ci_kw_entries = (struct rb_call_info_with_kwarg *)&iseq->body->ci_entries[iseq->body->ci_size];
    struct rb_call_cache *cc_entries = iseq->body->cc_entries;
    union iseq_inline_storage_entry *is_entries = iseq->body->is_entries;

    for (code_index=0; code_index<iseq_size;) {
 const VALUE insn = code[code_index++];
 const char *types = insn_op_types(insn);
 int op_index;

 for (op_index=0; types[op_index]; op_index++, code_index++) {
     VALUE op = code[code_index];

     switch (types[op_index]) {
       case 'H':
       case 'V':
  code[code_index] = ibf_load_object(load, op);
  break;
       case 'S':
  code[code_index] = (VALUE)ibf_load_iseq(load, (const rb_iseq_t *)op);
  break;
       case 'K':
  code[code_index] = (VALUE)&is_entries[(int)op];
  break;
       case 'C':
  code[code_index] = op ? (VALUE)ci_kw_entries++ : (VALUE)ci_entries++;
  break;
       case 'E':
  code[code_index] = (VALUE)cc_entries++;
  break;
       case 'I':
  code[code_index] = ibf_load_id(load, (ID)op);
  break;
       case 'G':
  code[code_index] = ibf_load_gentry(load, (const struct rb_global_entry *)op);
  break;
       case 'F':
  rb_raise(rb_eRuntimeError, "TS_FUNCPTR is not supported");
  break;
       default:

  break;
     }
 }
 if (insn_len(insn) != op_index+1) {
     rb_raise(rb_eRuntimeError, "operand size mismatch");
 }
    }


    return code;
}

static VALUE *
ibf_dump_param_opt_table(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    int opt_num = iseq->body->param.opt_num;

    if (opt_num > 0) {
 return (VALUE *)(VALUE)ibf_dump_write(dump, (iseq->body->param.opt_table), sizeof(VALUE) * (opt_num + 1));
    }
    else {
 return ((void*)0);
    }
}

static VALUE *
ibf_load_param_opt_table(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    int opt_num = body->param.opt_num;

    if (opt_num > 0) {
 ibf_offset_t offset = ((ibf_offset_t)(VALUE)(body->param.opt_table));
 VALUE *table = ((VALUE*)ruby_xmalloc2((size_t)(opt_num+1),sizeof(VALUE)));
 memcpy((table), (load->buff + offset), sizeof(VALUE)*(size_t)(opt_num+1));
 return table;
    }
    else {
 return ((void*)0);
    }
}

static struct rb_iseq_param_keyword *
ibf_dump_param_keyword(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    const struct rb_iseq_param_keyword *kw = iseq->body->param.keyword;

    if (kw) {
 struct rb_iseq_param_keyword dump_kw = *kw;
 int dv_num = kw->num - kw->required_num;
 ID *ids = kw->num > 0 ? ((ID*)__builtin_alloca (sizeof(ID)*(kw->num))) : ((void*)0);
 VALUE *dvs = dv_num > 0 ? ((VALUE*)__builtin_alloca (sizeof(VALUE)*(dv_num))) : ((void*)0);
 int i;

 for (i=0; i<kw->num; i++) ids[i] = (ID)ibf_dump_id(dump, kw->table[i]);
 for (i=0; i<dv_num; i++) dvs[i] = (VALUE)ibf_dump_object(dump, kw->default_values[i]);

 dump_kw.table = (ID *)(VALUE)ibf_dump_write(dump, (ids), sizeof(ID) * (kw->num));
 dump_kw.default_values = (VALUE *)(VALUE)ibf_dump_write(dump, (dvs), sizeof(VALUE) * (dv_num));
 return (struct rb_iseq_param_keyword *)(VALUE)ibf_dump_write(dump, (&dump_kw), sizeof(struct rb_iseq_param_keyword) * (1));
    }
    else {
 return ((void*)0);
    }
}

static const struct rb_iseq_param_keyword *
ibf_load_param_keyword(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    if (body->param.keyword) {
 struct rb_iseq_param_keyword *kw = (struct rb_iseq_param_keyword *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->param.keyword)), sizeof(struct rb_iseq_param_keyword) * (1));
 ID *ids = (ID *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(kw->table)), sizeof(ID) * (kw->num));
 int dv_num = kw->num - kw->required_num;
 VALUE *dvs = (VALUE *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(kw->default_values)), sizeof(VALUE) * (dv_num));
 int i;

 for (i=0; i<kw->num; i++) {
     ids[i] = ibf_load_id(load, ids[i]);
 }
 for (i=0; i<dv_num; i++) {
     dvs[i] = ibf_load_object(load, dvs[i]);
 }

 kw->table = ids;
 kw->default_values = dvs;
 return kw;
    }
    else {
 return ((void*)0);
    }
}

static struct iseq_insn_info_entry *
ibf_dump_insns_info(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    return (struct iseq_insn_info_entry *)(VALUE)ibf_dump_write(dump, (iseq->body->insns_info), sizeof(struct iseq_insn_info_entry) * (iseq->body->insns_info_size));
}

static struct iseq_insn_info_entry *
ibf_load_insns_info(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    return (struct iseq_insn_info_entry *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->insns_info)), sizeof(struct iseq_insn_info_entry) * (body->insns_info_size));
}

static ID *
ibf_dump_local_table(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    const int size = iseq->body->local_table_size;
    ID *table = ((ID*)__builtin_alloca (sizeof(ID)*(size)));
    int i;

    for (i=0; i<size; i++) {
 table[i] = ibf_dump_id(dump, iseq->body->local_table[i]);
    }

    return (ID *)(VALUE)ibf_dump_write(dump, (table), sizeof(ID) * (size));
}

static ID *
ibf_load_local_table(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    const int size = body->local_table_size;

    if (size > 0) {
 ID *table = (ID *)ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->local_table)), sizeof(ID) * (size));
 int i;

 for (i=0; i<size; i++) {
     table[i] = ibf_load_id(load, table[i]);
 }
 return table;
    }
    else {
 return ((void*)0);
    }
}

static struct iseq_catch_table *
ibf_dump_catch_table(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    const struct iseq_catch_table *table = iseq->body->catch_table;

    if (table) {
 int byte_size = iseq_catch_table_bytes(iseq->body->catch_table->size);
 struct iseq_catch_table *dump_table = (struct iseq_catch_table *)((char*)__builtin_alloca (sizeof(char)*(byte_size)));
 unsigned int i;
 dump_table->size = table->size;
 for (i=0; i<table->size; i++) {
     dump_table->entries[i] = table->entries[i];
     dump_table->entries[i].iseq = ibf_dump_iseq(dump, table->entries[i].iseq);
 }
 return (struct iseq_catch_table *)(VALUE)ibf_dump_write(dump, dump_table, byte_size);
    }
    else {
 return ((void*)0);
    }
}

static struct iseq_catch_table *
ibf_load_catch_table(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    if (body->catch_table) {
 struct iseq_catch_table *table;
 unsigned int i;
 unsigned int size;
 size = *(unsigned int *)(load->buff + ((ibf_offset_t)(VALUE)(body->catch_table)));
 table = ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->catch_table)), iseq_catch_table_bytes(size));
 for (i=0; i<size; i++) {
     table->entries[i].iseq = ibf_load_iseq(load, table->entries[i].iseq);
 }
 return table;
    }
    else {
 return ((void*)0);
    }
}

static struct rb_call_info *
ibf_dump_ci_entries(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    const unsigned int ci_size = iseq->body->ci_size;
    const unsigned int ci_kw_size = iseq->body->ci_kw_size;
    const struct rb_call_info *ci_entries = iseq->body->ci_entries;
    struct rb_call_info *dump_ci_entries;
    struct rb_call_info_with_kwarg *dump_ci_kw_entries;
    int byte_size = ci_size * sizeof(struct rb_call_info) +
                    ci_kw_size * sizeof(struct rb_call_info_with_kwarg);
    unsigned int i;

    dump_ci_entries = (struct rb_call_info *)((char*)__builtin_alloca (sizeof(char)*(byte_size)));
    dump_ci_kw_entries = (struct rb_call_info_with_kwarg *)&dump_ci_entries[ci_size];
    memcpy(dump_ci_entries, ci_entries, byte_size);

    for (i=0; i<ci_size; i++) {
 dump_ci_entries[i].mid = ibf_dump_id(dump, dump_ci_entries[i].mid);
    }
    for (i=0; i<ci_kw_size; i++) {
 const struct rb_call_info_kw_arg *kw_arg = dump_ci_kw_entries[i].kw_arg;
 int j;
 VALUE *keywords = ((VALUE*)__builtin_alloca (sizeof(VALUE)*(kw_arg->keyword_len)));
 for (j=0; j<kw_arg->keyword_len; j++) {
     keywords[j] = (VALUE)ibf_dump_object(dump, kw_arg->keywords[j]);
 }
 dump_ci_kw_entries[i].kw_arg = (struct rb_call_info_kw_arg *)(VALUE)ibf_dump_write(dump, &kw_arg->keyword_len, sizeof(int));
 ibf_dump_write(dump, keywords, sizeof(VALUE) * kw_arg->keyword_len);

 dump_ci_kw_entries[i].ci.mid = ibf_dump_id(dump, dump_ci_kw_entries[i].ci.mid);
    }
    return (struct rb_call_info *)(VALUE)ibf_dump_write(dump, dump_ci_entries, byte_size);
}

static struct rb_call_info *
ibf_load_ci_entries(const struct ibf_load *load, const struct rb_iseq_constant_body *body)
{
    unsigned int i;
    const unsigned int ci_size = body->ci_size;
    const unsigned int ci_kw_size = body->ci_kw_size;
    struct rb_call_info *ci_entries = ibf_load_alloc(load, ((ibf_offset_t)(VALUE)(body->ci_entries)),
           sizeof(struct rb_call_info) * body->ci_size +
           sizeof(struct rb_call_info_with_kwarg) * body->ci_kw_size);
    struct rb_call_info_with_kwarg *ci_kw_entries = (struct rb_call_info_with_kwarg *)&ci_entries[ci_size];

    for (i=0; i<ci_size; i++) {
 ci_entries[i].mid = ibf_load_id(load, ci_entries[i].mid);
    }
    for (i=0; i<ci_kw_size; i++) {
 int j;
 ibf_offset_t kw_arg_offset = ((ibf_offset_t)(VALUE)(ci_kw_entries[i].kw_arg));
 const int keyword_len = *(int *)(load->buff + kw_arg_offset);
 const VALUE *keywords = (VALUE *)(load->buff + kw_arg_offset + sizeof(int));
 struct rb_call_info_kw_arg *kw_arg = ruby_xmalloc(sizeof(struct rb_call_info_kw_arg) + sizeof(VALUE) * (keyword_len - 1));
 kw_arg->keyword_len = keyword_len;
 for (j=0; j<kw_arg->keyword_len; j++) {
     kw_arg->keywords[j] = (VALUE)ibf_load_object(load, keywords[j]);
 }
 ci_kw_entries[i].kw_arg = kw_arg;
 ci_kw_entries[i].ci.mid = ibf_load_id(load, ci_kw_entries[i].ci.mid);
    }

    return ci_entries;
}

static ibf_offset_t
ibf_dump_iseq_each(struct ibf_dump *dump, const rb_iseq_t *iseq)
{
    struct rb_iseq_constant_body dump_body;
    dump_body = *iseq->body;

    dump_body.location.pathobj = ibf_dump_object(dump, dump_body.location.pathobj);
    dump_body.location.base_label = ibf_dump_object(dump, dump_body.location.base_label);
    dump_body.location.label = ibf_dump_object(dump, dump_body.location.label);

    dump_body.iseq_encoded = ibf_dump_code(dump, iseq);
    dump_body.param.opt_table = ibf_dump_param_opt_table(dump, iseq);
    dump_body.param.keyword = ibf_dump_param_keyword(dump, iseq);
    dump_body.insns_info = ibf_dump_insns_info(dump, iseq);
    dump_body.local_table = ibf_dump_local_table(dump, iseq);
    dump_body.catch_table = ibf_dump_catch_table(dump, iseq);
    dump_body.parent_iseq = ibf_dump_iseq(dump, iseq->body->parent_iseq);
    dump_body.local_iseq = ibf_dump_iseq(dump, iseq->body->local_iseq);
    dump_body.is_entries = ((void*)0);
    dump_body.ci_entries = ibf_dump_ci_entries(dump, iseq);
    dump_body.cc_entries = ((void*)0);
    dump_body.mark_ary = ((int)rb_fix2int((VALUE)((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_FLIP_CNT]))));

    return ibf_dump_write(dump, &dump_body, sizeof(dump_body));
}

static VALUE
ibf_load_location_str(const struct ibf_load *load, VALUE str_index)
{
    VALUE str = ibf_load_object(load, str_index);
    if (str != ((VALUE)RUBY_Qnil)) {
 str = rb_fstring(str);
    }
    return str;
}

static void
ibf_load_iseq_each(const struct ibf_load *load, rb_iseq_t *iseq, ibf_offset_t offset)
{
    struct rb_iseq_constant_body *load_body = iseq->body = (((struct rb_iseq_constant_body*)ruby_xcalloc((size_t)(1),sizeof(struct rb_iseq_constant_body))));
    const struct rb_iseq_constant_body *body = (struct rb_iseq_constant_body *)(load->buff + offset);


    load_body->type = body->type;
    load_body->stack_max = body->stack_max;
    load_body->iseq_size = body->iseq_size;
    load_body->param = body->param;
    load_body->local_table_size = body->local_table_size;
    load_body->is_size = body->is_size;
    load_body->ci_size = body->ci_size;
    load_body->ci_kw_size = body->ci_kw_size;
    load_body->insns_info_size = body->insns_info_size;

    rb_obj_write((VALUE)(iseq), (VALUE *)(&load_body->mark_ary), (VALUE)(iseq_mark_ary_create((int)body->mark_ary)), "compile.c", 8612);

    {
 VALUE realpath = ((VALUE)RUBY_Qnil), path = ibf_load_object(load, body->location.pathobj);
 if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(path))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((path) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((path) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((path) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((path) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(path)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(path))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
     realpath = path = rb_fstring(path);
 }
 else if (( ((RUBY_T_ARRAY) == RUBY_T_FIXNUM) ? (((int)(long)(path))&RUBY_FIXNUM_FLAG) : ((RUBY_T_ARRAY) == RUBY_T_TRUE) ? ((path) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_ARRAY) == RUBY_T_FALSE) ? ((path) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_ARRAY) == RUBY_T_NIL) ? ((path) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_ARRAY) == RUBY_T_UNDEF) ? ((path) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_ARRAY) == RUBY_T_SYMBOL) ? ((((VALUE)(path)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_ARRAY) == RUBY_T_FLOAT) ? ( ((((int)(long)(path))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(path) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(path) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(path))->flags & RUBY_T_MASK) == (RUBY_T_ARRAY)))) {
     VALUE pathobj = path;
     if (rb_array_len(pathobj) != 2) {
  rb_raise(rb_eRuntimeError, "path object size mismatch");
     }
     path = rb_fstring((rb_array_const_ptr(pathobj)[0]));
     realpath = rb_fstring((rb_array_const_ptr(pathobj)[1]));
 }
 else {
     rb_raise(rb_eRuntimeError, "unexpected path object");
 }
 rb_iseq_pathobj_set(iseq, path, realpath);
    }

    rb_obj_write((VALUE)(iseq), (VALUE *)(&load_body->location.base_label), (VALUE)(ibf_load_location_str(load, body->location.base_label)), "compile.c", 8633);
    rb_obj_write((VALUE)(iseq), (VALUE *)(&load_body->location.label), (VALUE)(ibf_load_location_str(load, body->location.label)), "compile.c", 8634);
    load_body->location.first_lineno = body->location.first_lineno;
    load_body->location.code_range = body->location.code_range;

    load_body->is_entries = ((union iseq_inline_storage_entry*)ruby_xcalloc((size_t)(body->is_size),sizeof(union iseq_inline_storage_entry)));
    load_body->ci_entries = ibf_load_ci_entries(load, body);
    load_body->cc_entries = ((struct rb_call_cache*)ruby_xcalloc((size_t)(body->ci_size + body->ci_kw_size),sizeof(struct rb_call_cache)));
    load_body->param.opt_table = ibf_load_param_opt_table(load, body);
    load_body->param.keyword = ibf_load_param_keyword(load, body);
    load_body->insns_info = ibf_load_insns_info(load, body);
    load_body->local_table = ibf_load_local_table(load, body);
    load_body->catch_table = ibf_load_catch_table(load, body);
    load_body->parent_iseq = ibf_load_iseq(load, body->parent_iseq);
    load_body->local_iseq = ibf_load_iseq(load, body->local_iseq);

    load_body->iseq_encoded = ibf_load_code(load, iseq, body);

    rb_iseq_translate_threaded_code(iseq);
}


static void
ibf_dump_iseq_list(struct ibf_dump *dump, struct ibf_header *header)
{
    const long size = rb_array_len(dump->iseq_list);
    ibf_offset_t *list = ((ibf_offset_t*)__builtin_alloca (sizeof(ibf_offset_t)*(size)));
    long i;

    for (i=0; i<size; i++) {
 list[i] = (ibf_offset_t)rb_num2long_inline(rb_ary_entry(dump->iseq_list, i));
    }

    header->iseq_list_offset = ibf_dump_write(dump, list, sizeof(ibf_offset_t) * size);
    header->iseq_list_size = (unsigned int)size;
}

struct ibf_dump_id_list_i_arg {
    struct ibf_dump *dump;
    long *list;
    int current_i;
};

static int
ibf_dump_id_list_i(st_data_t key, st_data_t val, st_data_t ptr)
{
    struct ibf_dump_id_list_i_arg *arg = (struct ibf_dump_id_list_i_arg *)ptr;
    int i = (int)val;
    ID id = (ID)key;
    ((arg->current_i == i) ? (void) (0) : __assert_fail ("arg->current_i == i", "compile.c", 8682,  __PRETTY_FUNCTION__));
    arg->current_i++;

    if (rb_id2name(id)) {
 arg->list[i] = (long)ibf_dump_object(arg->dump, rb_id2str(id));
    }
    else {
 arg->list[i] = 0;
    }

    return ST_CONTINUE;
}

static void
ibf_dump_id_list(struct ibf_dump *dump, struct ibf_header *header)
{
    const long size = dump->id_table->num_entries;
    struct ibf_dump_id_list_i_arg arg;
    arg.list = ((long*)__builtin_alloca (sizeof(long)*(size)));
    arg.dump = dump;
    arg.current_i = 0;

    st_foreach(dump->id_table, ibf_dump_id_list_i, (st_data_t)&arg);

    header->id_list_offset = ibf_dump_write(dump, arg.list, sizeof(long) * size);
    header->id_list_size = (unsigned int)size;
}
struct ibf_object_header {
    unsigned int type: 5;
    unsigned int special_const: 1;
    unsigned int frozen: 1;
    unsigned int internal: 1;
};

enum ibf_object_class_index {
    IBF_OBJECT_CLASS_OBJECT,
    IBF_OBJECT_CLASS_ARRAY,
    IBF_OBJECT_CLASS_STANDARD_ERROR
};

struct ibf_object_string {
    long encindex;
    long len;
    char ptr[1];
};

struct ibf_object_regexp {
    long srcstr;
    char option;
};

struct ibf_object_array {
    long len;
    long ary[1];
};

struct ibf_object_hash {
    long len;
    long keyval[1];
};

struct ibf_object_struct_range {
    long class_index;
    long len;
    long beg;
    long end;
    int excl;
};

struct ibf_object_bignum {
    ssize_t slen;
    unsigned int digits[1];
};

enum ibf_object_data_type {
    IBF_OBJECT_DATA_ENCODING
};

struct ibf_object_complex_rational {
    long a, b;
};

struct ibf_object_symbol {
    long str;
};




static void
ibf_dump_object_unsupported(struct ibf_dump *dump, VALUE obj)
{
    rb_obj_info_dump(obj);
    rb_bug("ibf_dump_object_unsupported: unsupported");
}

static VALUE
ibf_load_object_unsupported(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    rb_bug("unsupported");
    return ((VALUE)RUBY_Qnil);
}

static void
ibf_dump_object_class(struct ibf_dump *dump, VALUE obj)
{
    enum ibf_object_class_index cindex;
    if (obj == rb_cObject) {
 cindex = IBF_OBJECT_CLASS_OBJECT;
    }
    else if (obj == rb_cArray) {
 cindex = IBF_OBJECT_CLASS_ARRAY;
    }
    else if (obj == rb_eStandardError) {
 cindex = IBF_OBJECT_CLASS_STANDARD_ERROR;
    }
    else {
 rb_obj_info_dump(obj);
 rb_p(obj);
 rb_bug("unsupported class");
    }
    ibf_dump_write(dump, &cindex, sizeof(cindex));
}

static VALUE
ibf_load_object_class(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    enum ibf_object_class_index *cindexp = (enum ibf_object_class_index *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    enum ibf_object_class_index cindex = *cindexp;

    switch (cindex) {
      case IBF_OBJECT_CLASS_OBJECT:
 return rb_cObject;
      case IBF_OBJECT_CLASS_ARRAY:
 return rb_cArray;
      case IBF_OBJECT_CLASS_STANDARD_ERROR:
 return rb_eStandardError;
    }

    rb_bug("ibf_load_object_class: unknown class (%d)", (int)cindex);
}


static void
ibf_dump_object_float(struct ibf_dump *dump, VALUE obj)
{
    double dbl = rb_float_value_inline(obj);
    ibf_dump_write(dump, &dbl, sizeof(dbl));
}

static VALUE
ibf_load_object_float(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    double *dblp = (double *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    return rb_float_new_inline(*dblp);
}

static void
ibf_dump_object_string(struct ibf_dump *dump, VALUE obj)
{
    long encindex = (long)rb_enc_get_index(obj);
    long len = (!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(obj))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(obj))->as.heap.len);
    const char *ptr = (!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr);

    if (encindex > RUBY_ENCINDEX_BUILTIN_MAX) {
 rb_encoding *enc = rb_enc_from_index((int)encindex);
 const char *enc_name = (enc)->name;
 encindex = RUBY_ENCINDEX_BUILTIN_MAX + ibf_dump_object(dump,  ({ (__builtin_constant_p(enc_name)) ? rb_str_new_static((enc_name), (long)strlen(enc_name)) : rb_str_new_cstr(enc_name); }));
    }

    ibf_dump_write(dump, &(encindex), sizeof(encindex));
    ibf_dump_write(dump, &(len), sizeof(len));
    ibf_dump_write(dump, (ptr), sizeof(char) * (len));
}

static VALUE
ibf_load_object_string(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_string *string = (struct ibf_object_string *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE str =  ({ (__builtin_constant_p(string->ptr) && __builtin_constant_p(string->len)) ? rb_str_new_static((string->ptr), (string->len)) : rb_str_new((string->ptr), (string->len)); });
    int encindex = (int)string->encindex;

    if (encindex > RUBY_ENCINDEX_BUILTIN_MAX) {
 VALUE enc_name_str = ibf_load_object(load, encindex - RUBY_ENCINDEX_BUILTIN_MAX);
 encindex = rb_enc_find_index((!(((struct RBasic*)(enc_name_str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(enc_name_str))->as.ary : ((struct RString*)(enc_name_str))->as.heap.ptr));
    }
    rb_enc_associate_index(str, encindex);

    if (header->internal) rb_obj_hide(str);
    if (header->frozen) str = rb_fstring(str);

    return str;
}

static void
ibf_dump_object_regexp(struct ibf_dump *dump, VALUE obj)
{
    struct ibf_object_regexp regexp;
    regexp.srcstr = (((struct RRegexp*)(obj))->src);
    regexp.option = (char)rb_reg_options(obj);
    regexp.srcstr = (long)ibf_dump_object(dump, regexp.srcstr);
    ibf_dump_write(dump, &(regexp), sizeof(regexp));
}

static VALUE
ibf_load_object_regexp(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_regexp *regexp = (struct ibf_object_regexp *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE srcstr = ibf_load_object(load, regexp->srcstr);
    VALUE reg = rb_reg_compile(srcstr, (int)regexp->option, ((void*)0), 0);

    if (header->internal) rb_obj_hide(reg);
    if (header->frozen) rb_obj_freeze(reg);

    return reg;
}

static void
ibf_dump_object_array(struct ibf_dump *dump, VALUE obj)
{
    long i, len = (int)rb_array_len(obj);
    ibf_dump_write(dump, &(len), sizeof(len));
    for (i=0; i<len; i++) {
 long index = (long)ibf_dump_object(dump, (rb_array_const_ptr(obj)[i]));
 ibf_dump_write(dump, &(index), sizeof(index));
    }
}

static VALUE
ibf_load_object_array(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_array *array = (struct ibf_object_array *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE ary = rb_ary_new_capa(array->len);
    int i;

    for (i=0; i<array->len; i++) {
 rb_ary_push(ary, ibf_load_object(load, array->ary[i]));
    }

    if (header->internal) rb_obj_hide(ary);
    if (header->frozen) rb_obj_freeze(ary);

    return ary;
}

static int
ibf_dump_object_hash_i(st_data_t key, st_data_t val, st_data_t ptr)
{
    struct ibf_dump *dump = (struct ibf_dump *)ptr;
    long key_index = (long)ibf_dump_object(dump, (VALUE)key);
    long val_index = (long)ibf_dump_object(dump, (VALUE)val);
    ibf_dump_write(dump, &(key_index), sizeof(key_index));
    ibf_dump_write(dump, &(val_index), sizeof(val_index));
    return ST_CONTINUE;
}

static void
ibf_dump_object_hash(struct ibf_dump *dump, VALUE obj)
{
    long len = (((struct RHash*)(obj))->ntbl ? ((struct RHash*)(obj))->ntbl->num_entries : (st_index_t)0);
    ibf_dump_write(dump, &(len), sizeof(len));
    if (len > 0) st_foreach(((struct RHash*)(obj))->ntbl, ibf_dump_object_hash_i, (st_data_t)dump);
}

static VALUE
ibf_load_object_hash(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_hash *hash = (struct ibf_object_hash *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE obj = rb_hash_new_with_size(hash->len);
    int i;

    for (i=0; i<hash->len; i++) {
 VALUE key = ibf_load_object(load, hash->keyval[i*2 ]);
 VALUE val = ibf_load_object(load, hash->keyval[i*2+1]);
 rb_hash_aset(obj, key, val);
    }
    rb_hash_rehash(obj);

    if (header->internal) rb_obj_hide(obj);
    if (header->frozen) rb_obj_freeze(obj);

    return obj;
}

static void
ibf_dump_object_struct(struct ibf_dump *dump, VALUE obj)
{
    if (rb_obj_is_kind_of(obj, rb_cRange)) {
 struct ibf_object_struct_range range;
 VALUE beg, end;
 range.len = 3;
 range.class_index = 0;

 rb_range_values(obj, &beg, &end, &range.excl);
 range.beg = (long)ibf_dump_object(dump, beg);
 range.end = (long)ibf_dump_object(dump, end);

 ibf_dump_write(dump, &(range), sizeof(range));
    }
    else {
 rb_bug("ibf_dump_object_struct: unsupported class");
    }
}

static VALUE
ibf_load_object_struct(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_struct_range *range = (struct ibf_object_struct_range *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE beg = ibf_load_object(load, range->beg);
    VALUE end = ibf_load_object(load, range->end);
    VALUE obj = rb_range_new(beg, end, range->excl);
    if (header->internal) rb_obj_hide(obj);
    if (header->frozen) rb_obj_freeze(obj);
    return obj;
}

static void
ibf_dump_object_bignum(struct ibf_dump *dump, VALUE obj)
{
    ssize_t len = ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? (size_t)((((struct RBasic*)(obj))->flags >> (((VALUE)RUBY_FL_USHIFT)+3)) & (((VALUE)(((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER3))) >> (((VALUE)RUBY_FL_USHIFT)+3))) : ((struct RBignum*)(obj))->as.heap.len);
    ssize_t slen = ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER1))) != 0) > 0 ? len : len * -1;
    unsigned int *d = ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? ((struct RBignum*)(obj))->as.ary : ((struct RBignum*)(obj))->as.heap.digits);

    ibf_dump_write(dump, &(slen), sizeof(slen));
    ibf_dump_write(dump, (d), sizeof(unsigned int) * (len));
}

static VALUE
ibf_load_object_bignum(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_bignum *bignum = (struct ibf_object_bignum *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    int sign = bignum->slen > 0;
    ssize_t len = sign > 0 ? bignum->slen : -1 * bignum->slen;
    VALUE obj = rb_integer_unpack(bignum->digits, len * 2, 2, 0,
      (0x02 | 0x20) | (sign == 0 ? 0x200 : 0));
    if (header->internal) rb_obj_hide(obj);
    if (header->frozen) rb_obj_freeze(obj);
    return obj;
}

static void
ibf_dump_object_data(struct ibf_dump *dump, VALUE obj)
{
    if (rb_data_is_encoding(obj)) {
 rb_encoding *enc = rb_to_encoding(obj);
 const char *name = (enc)->name;
 enum ibf_object_data_type type = IBF_OBJECT_DATA_ENCODING;
 long len = strlen(name) + 1;
 ibf_dump_write(dump, &(type), sizeof(type));
 ibf_dump_write(dump, &(len), sizeof(len));
 ibf_dump_write(dump, (name), sizeof(char) * (strlen(name) + 1));
    }
    else {
 ibf_dump_object_unsupported(dump, obj);
    }
}

static VALUE
ibf_load_object_data(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const enum ibf_object_data_type *typep = (enum ibf_object_data_type *)(load->buff + sizeof(struct ibf_object_header) + (offset));

    const char *data = (char *)(load->buff + sizeof(struct ibf_object_header) + (offset + sizeof(enum ibf_object_data_type) + sizeof(long)));

    switch (*typep) {
      case IBF_OBJECT_DATA_ENCODING:
 {
     VALUE encobj = rb_enc_from_encoding(rb_enc_find(data));
     return encobj;
 }
    }

    return ibf_load_object_unsupported(load, header, offset);
}

static void
ibf_dump_object_complex_rational(struct ibf_dump *dump, VALUE obj)
{
    long real = (long)ibf_dump_object(dump, ((struct RComplex*)(obj))->real);
    long imag = (long)ibf_dump_object(dump, ((struct RComplex*)(obj))->imag);

    ibf_dump_write(dump, &(real), sizeof(real));
    ibf_dump_write(dump, &(imag), sizeof(imag));
}

static VALUE
ibf_load_object_complex_rational(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{
    const struct ibf_object_complex_rational *nums = (struct ibf_object_complex_rational *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE a = ibf_load_object(load, nums->a);
    VALUE b = ibf_load_object(load, nums->b);
    VALUE obj = header->type == RUBY_T_COMPLEX ?
      rb_complex_new(a, b) : rb_rational_new(a, b);

    if (header->internal) rb_obj_hide(obj);
    if (header->frozen) rb_obj_freeze(obj);
    return obj;
}

static void
ibf_dump_object_symbol(struct ibf_dump *dump, VALUE obj)
{
    VALUE str = rb_sym2str(obj);
    long str_index = (long)ibf_dump_object(dump, str);
    ibf_dump_write(dump, &(str_index), sizeof(str_index));
}

static VALUE
ibf_load_object_symbol(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t offset)
{

    const struct ibf_object_symbol *symbol = (struct ibf_object_symbol *)(load->buff + sizeof(struct ibf_object_header) + (offset));
    VALUE str = ibf_load_object(load, symbol->str);
    ID id = rb_intern_str(str);
    return (rb_id2sym(id));
}

typedef void (*ibf_dump_object_function)(struct ibf_dump *dump, VALUE obj);
static ibf_dump_object_function dump_object_functions[RUBY_T_MASK+1] = {
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_class,
    ibf_dump_object_unsupported,
    ibf_dump_object_float,
    ibf_dump_object_string,
    ibf_dump_object_regexp,
    ibf_dump_object_array,
    ibf_dump_object_hash,
    ibf_dump_object_struct,
    ibf_dump_object_bignum,
    ibf_dump_object_unsupported,
    ibf_dump_object_data,
    ibf_dump_object_unsupported,
    ibf_dump_object_complex_rational,
    ibf_dump_object_complex_rational,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_symbol,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported,
    ibf_dump_object_unsupported
};

static ibf_offset_t
lbf_dump_object_object(struct ibf_dump *dump, VALUE obj)
{
    struct ibf_object_header obj_header;
    ibf_offset_t current_offset = ibf_dump_pos(dump);
    obj_header.type = rb_type((VALUE)(obj));

    if ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 if (( ((RUBY_T_SYMBOL) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_SYMBOL) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_SYMBOL) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_SYMBOL) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_SYMBOL) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_SYMBOL) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_SYMBOL) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) ||
     ( ((RUBY_T_FLOAT) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FLOAT) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FLOAT) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FLOAT) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FLOAT) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FLOAT) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FLOAT) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_FLOAT)))) {
     obj_header.internal = FALSE;
     goto dump_object;
 }
 obj_header.special_const = TRUE;
 obj_header.frozen = TRUE;
 obj_header.internal = TRUE;
 ibf_dump_write(dump, &(obj_header), sizeof(obj_header));
 ibf_dump_write(dump, &(obj), sizeof(obj));
    }
    else {
 obj_header.internal = ((((struct RBasic*)(obj))->klass) == 0) ? TRUE : FALSE;
      dump_object:
 obj_header.special_const = FALSE;
 obj_header.frozen = ((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_FREEZE)))):0) ? TRUE : FALSE;
 ibf_dump_write(dump, &(obj_header), sizeof(obj_header));
 (*dump_object_functions[obj_header.type])(dump, obj);
    }

    return current_offset;
}

typedef VALUE (*ibf_load_object_function)(const struct ibf_load *load, const struct ibf_object_header *header, ibf_offset_t);
static ibf_load_object_function load_object_functions[RUBY_T_MASK+1] = {
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_class,
    ibf_load_object_unsupported,
    ibf_load_object_float,
    ibf_load_object_string,
    ibf_load_object_regexp,
    ibf_load_object_array,
    ibf_load_object_hash,
    ibf_load_object_struct,
    ibf_load_object_bignum,
    ibf_load_object_unsupported,
    ibf_load_object_data,
    ibf_load_object_unsupported,
    ibf_load_object_complex_rational,
    ibf_load_object_complex_rational,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_symbol,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported,
    ibf_load_object_unsupported
};

static VALUE
ibf_load_object(const struct ibf_load *load, VALUE object_index)
{
    if (object_index == 0) {
 return ((VALUE)RUBY_Qnil);
    }
    else if (object_index >= load->header->object_list_size) {
 rb_raise(rb_eIndexError, "object index out of range: %ld", object_index);
    }
    else {
 VALUE obj = rb_ary_entry(load->obj_list, (long)object_index);
 if (obj == ((VALUE)RUBY_Qnil)) {
     ibf_offset_t *offsets = (ibf_offset_t *)(load->header->object_list_offset + load->buff);
     ibf_offset_t offset = offsets[object_index];
     const struct ibf_object_header *header = (struct ibf_object_header *)(load->buff + (offset));

     if (header->special_const) {
  VALUE *vp = (VALUE *)(load->buff + sizeof(struct ibf_object_header) + (offset));
  obj = *vp;
     }
     else {
  obj = (*load_object_functions[header->type])(load, header, offset);
     }

     rb_ary_store(load->obj_list, (long)object_index, obj);
 }
 iseq_add_mark_object(load->iseq, obj);
 return obj;
    }
}

static void
ibf_dump_object_list(struct ibf_dump *dump, struct ibf_header *header)
{
    VALUE list = rb_ary_tmp_new(rb_array_len(dump->obj_list));
    int i, size;

    for (i=0; i<rb_array_len(dump->obj_list); i++) {
 VALUE obj = (rb_array_const_ptr(dump->obj_list)[i]);
 ibf_offset_t offset = lbf_dump_object_object(dump, obj);
 rb_ary_push(list, (((VALUE)((unsigned int)(offset)))<<1 | RUBY_FIXNUM_FLAG));
    }
    size = i;
    header->object_list_offset = ibf_dump_pos(dump);

    for (i=0; i<size; i++) {
 ibf_offset_t offset = ((unsigned int)rb_num2uint((rb_array_const_ptr(list)[i])));
 ibf_dump_write(dump, &(offset), sizeof(offset));
    }

    header->object_list_size = size;
}

static void
ibf_dump_mark(void *ptr)
{
    struct ibf_dump *dump = (struct ibf_dump *)ptr;
    rb_gc_mark(dump->str);
    rb_gc_mark(dump->iseq_list);
    rb_gc_mark(dump->obj_list);
}

static void
ibf_dump_free(void *ptr)
{
    struct ibf_dump *dump = (struct ibf_dump *)ptr;
    if (dump->iseq_table) {
 st_free_table(dump->iseq_table);
 dump->iseq_table = 0;
    }
    if (dump->id_table) {
 st_free_table(dump->id_table);
 dump->id_table = 0;
    }
    ruby_xfree(dump);
}

static size_t
ibf_dump_memsize(const void *ptr)
{
    struct ibf_dump *dump = (struct ibf_dump *)ptr;
    size_t size = sizeof(*dump);
    if (dump->iseq_table) size += st_memsize(dump->iseq_table);
    if (dump->id_table) size += st_memsize(dump->id_table);
    return size;
}

static const rb_data_type_t ibf_dump_type = {
    "ibf_dump",
    {ibf_dump_mark, ibf_dump_free, ibf_dump_memsize,},
    0, 0, RUBY_FL_WB_PROTECTED | 1
};

static void
ibf_dump_setup(struct ibf_dump *dump, VALUE dumper_obj)
{
    rb_obj_write((VALUE)(dumper_obj), (VALUE *)(&dump->str), (VALUE)( ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); })), "compile.c", 9307);
    rb_obj_write((VALUE)(dumper_obj), (VALUE *)(&dump->iseq_list), (VALUE)(rb_ary_tmp_new(0)), "compile.c", 9308);
    rb_obj_write((VALUE)(dumper_obj), (VALUE *)(&dump->obj_list), (VALUE)(rb_ary_tmp_new(1)), "compile.c", 9309);
    rb_ary_push(dump->obj_list, ((VALUE)RUBY_Qnil));
    dump->iseq_table = st_init_numtable();
    dump->id_table = st_init_numtable();

    ibf_table_index(dump->id_table, 0);
}

VALUE
iseq_ibf_dump(const rb_iseq_t *iseq, VALUE opt)
{
    struct ibf_dump *dump;
    struct ibf_header header = {{0}};
    VALUE dump_obj;
    VALUE str;

    if (iseq->body->parent_iseq != ((void*)0) ||
 iseq->body->local_iseq != iseq) {
 rb_raise(rb_eRuntimeError, "should be top of iseq");
    }
    if (!(((VALUE)((rb_array_const_ptr((iseq)->body->mark_ary)[ISEQ_MARK_ARY_COVERAGE])) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 rb_raise(rb_eRuntimeError, "should not compile with coverage");
    }

    dump_obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(0, sizeof(struct ibf_dump), &ibf_dump_type); (void)((dump) = (struct ibf_dump *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });
    ibf_dump_setup(dump, dump_obj);

    ibf_dump_write(dump, &header, sizeof(header));
    ibf_dump_write(dump, "x86_64-linux", strlen("x86_64-linux") + 1);
    ibf_dump_iseq(dump, iseq);

    header.magic[0] = 'Y';
    header.magic[1] = 'A';
    header.magic[2] = 'R';
    header.magic[3] = 'B';
    header.major_version = 2;
    header.minor_version = 5;
    ibf_dump_iseq_list(dump, &header);
    ibf_dump_id_list(dump, &header);
    ibf_dump_object_list(dump, &header);
    header.size = ibf_dump_pos(dump);

    if (!(((VALUE)(opt) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 VALUE opt_str = opt;
 const char *ptr = rb_string_value_ptr(&(opt_str));
 header.extra_size = rb_long2int_inline((!(((struct RBasic*)(opt_str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(opt_str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(opt_str))->as.heap.len));
 ibf_dump_write(dump, ptr, header.extra_size);
    }
    else {
 header.extra_size = 0;
    }

    ibf_dump_overwrite(dump, &header, sizeof(header), 0);

    str = dump->str;
    ibf_dump_free(dump);
    (((struct RData*)(dump_obj))->data) = ((void*)0);
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(dump_obj); ; rb_gc_guarded_ptr; }));
    return str;
}

static const ibf_offset_t *
ibf_iseq_list(const struct ibf_load *load)
{
    return (ibf_offset_t *)(load->buff + load->header->iseq_list_offset);
}

void
ibf_load_iseq_complete(rb_iseq_t *iseq)
{
    struct ibf_load *load = (((struct RTypedData*)(iseq->aux.loader.obj))->data);
    rb_iseq_t *prev_src_iseq = load->iseq;
    load->iseq = iseq;
    ibf_load_iseq_each(load, iseq, ibf_iseq_list(load)[iseq->aux.loader.index]);
    ISEQ_COMPILE_DATA_CLEAR(iseq);
    ((!(((VALUE)(iseq) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(iseq) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(iseq))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(iseq))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER5))) : (void)0);
    load->iseq = prev_src_iseq;
}
static rb_iseq_t *
ibf_load_iseq(const struct ibf_load *load, const rb_iseq_t *index_iseq)
{
    int iseq_index = (int)(VALUE)index_iseq;

    if (iseq_index == -1) {
 return ((void*)0);
    }
    else {
 VALUE iseqv = rb_ary_entry(load->iseq_list, iseq_index);

 if (iseqv != ((VALUE)RUBY_Qnil)) {
     return (rb_iseq_t *)iseqv;
 }
 else {
     rb_iseq_t *iseq = iseq_imemo_alloc();
     ((!(((VALUE)(iseq) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(iseq) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(iseq))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(iseq))->flags |= (((VALUE)RUBY_FL_USER5))) : (void)0);
     iseq->aux.loader.obj = load->loader_obj;
     iseq->aux.loader.index = iseq_index;
     rb_ary_store(load->iseq_list, iseq_index, (VALUE)iseq);


     ibf_load_iseq_complete(iseq);


     if (load->iseq) {
  iseq_add_mark_object(load->iseq, (VALUE)iseq);
     }
     return iseq;
 }
    }
}

static void
ibf_load_setup(struct ibf_load *load, VALUE loader_obj, VALUE str)
{
    rb_check_safe_obj(str);

    if (rb_long2int_inline((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) < (int)sizeof(struct ibf_header)) {
 rb_raise(rb_eRuntimeError, "broken binary format");
    }
    rb_obj_write((VALUE)(loader_obj), (VALUE *)(&load->str), (VALUE)(str), "compile.c", 9438);
    load->loader_obj = loader_obj;
    load->buff = rb_string_value_ptr(&(str));
    load->header = (struct ibf_header *)load->buff;
    rb_obj_write((VALUE)(loader_obj), (VALUE *)(&load->iseq_list), (VALUE)(rb_ary_tmp_new(0)), "compile.c", 9442);
    rb_obj_write((VALUE)(loader_obj), (VALUE *)(&load->obj_list), (VALUE)(rb_ary_tmp_new(0)), "compile.c", 9443);
    load->id_list = ((ID*)ruby_xcalloc((size_t)(load->header->id_list_size),sizeof(ID)));
    load->iseq = ((void*)0);

    if (rb_long2int_inline((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) < (int)load->header->size) {
 rb_raise(rb_eRuntimeError, "broken binary format");
    }
    if (strncmp(load->header->magic, "YARB", 4) != 0) {
 rb_raise(rb_eRuntimeError, "unknown binary format");
    }
    if (load->header->major_version != 2 ||
 load->header->minor_version != 5) {
 rb_raise(rb_eRuntimeError, "unmatched version file (%u.%u for %u.%u)",
   load->header->major_version, load->header->minor_version, 2, 5);
    }
    if (strcmp(load->buff + sizeof(struct ibf_header), "x86_64-linux") != 0) {
 rb_raise(rb_eRuntimeError, "unmatched platform");
    }
}

static void
ibf_loader_mark(void *ptr)
{
    struct ibf_load *load = (struct ibf_load *)ptr;
    rb_gc_mark(load->str);
    rb_gc_mark(load->iseq_list);
    rb_gc_mark(load->obj_list);
}

static void
ibf_loader_free(void *ptr)
{
    struct ibf_load *load = (struct ibf_load *)ptr;
    ruby_xfree(load->id_list);
    ruby_xfree(load);
}

static size_t
ibf_loader_memsize(const void *ptr)
{
    struct ibf_load *load = (struct ibf_load *)ptr;
    return sizeof(struct ibf_load) + load->header->id_list_size * sizeof(ID);
}

static const rb_data_type_t ibf_load_type = {
    "ibf_loader",
    {ibf_loader_mark, ibf_loader_free, ibf_loader_memsize,},
    0, 0, RUBY_FL_WB_PROTECTED | 1
};

const rb_iseq_t *
iseq_ibf_load(VALUE str)
{
    struct ibf_load *load;
    const rb_iseq_t *iseq;
    VALUE loader_obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(0, sizeof(struct ibf_load), &ibf_load_type); (void)((load) = (struct ibf_load *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });

    ibf_load_setup(load, loader_obj, str);
    iseq = ibf_load_iseq(load, 0);

    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(loader_obj); ; rb_gc_guarded_ptr; }));
    return iseq;
}

VALUE
iseq_ibf_load_extra_data(VALUE str)
{
    struct ibf_load *load;
    VALUE loader_obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(0, sizeof(struct ibf_load), &ibf_load_type); (void)((load) = (struct ibf_load *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });
    VALUE extra_str;

    ibf_load_setup(load, loader_obj, str);
    extra_str =  ({ (__builtin_constant_p(load->buff + load->header->size) && __builtin_constant_p(load->header->extra_size)) ? rb_str_new_static((load->buff + load->header->size), (load->header->extra_size)) : rb_str_new((load->buff + load->header->size), (load->header->extra_size)); });
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(loader_obj); ; rb_gc_guarded_ptr; }));
    return extra_str;
}
