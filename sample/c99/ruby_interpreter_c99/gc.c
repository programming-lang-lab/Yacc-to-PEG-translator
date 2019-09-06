








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



void *rb_thread_call_with_gvl(void *(*func)(void *), void *data1);

void *rb_thread_call_without_gvl(void *(*func)(void *), void *data1,
     rb_unblock_function_t *ubf, void *data2);
void *rb_thread_call_without_gvl2(void *(*func)(void *), void *data1,
      rb_unblock_function_t *ubf, void *data2);









unsigned long ruby_scan_oct(const char *, size_t, size_t *);

unsigned long ruby_scan_hex(const char *, size_t, size_t *);
void ruby_setenv(const char *, const char *);
void ruby_unsetenv(const char *);

char *ruby_strdup(const char *);



char *ruby_getcwd(void);

double ruby_strtod(const char *, char **);



void ruby_each_words(const char *, void (*)(const char*, int, void*), void *);







int rb_profile_frames(int start, int limit, VALUE *buff, int *lines);
VALUE rb_profile_frame_path(VALUE frame);
VALUE rb_profile_frame_absolute_path(VALUE frame);
VALUE rb_profile_frame_label(VALUE frame);
VALUE rb_profile_frame_base_label(VALUE frame);
VALUE rb_profile_frame_full_label(VALUE frame);
VALUE rb_profile_frame_first_lineno(VALUE frame);
VALUE rb_profile_frame_classpath(VALUE frame);
VALUE rb_profile_frame_singleton_method_p(VALUE frame);
VALUE rb_profile_frame_method_name(VALUE frame);
VALUE rb_profile_frame_qualified_method_name(VALUE frame);


typedef struct rb_debug_inspector_struct rb_debug_inspector_t;
typedef VALUE (*rb_debug_inspector_func_t)(const rb_debug_inspector_t *, void *);

VALUE rb_debug_inspector_open(rb_debug_inspector_func_t func, void *data);
VALUE rb_debug_inspector_frame_self_get(const rb_debug_inspector_t *dc, long index);
VALUE rb_debug_inspector_frame_class_get(const rb_debug_inspector_t *dc, long index);
VALUE rb_debug_inspector_frame_binding_get(const rb_debug_inspector_t *dc, long index);
VALUE rb_debug_inspector_frame_iseq_get(const rb_debug_inspector_t *dc, long index);
VALUE rb_debug_inspector_backtrace_locations(const rb_debug_inspector_t *dc);




void rb_add_event_hook(rb_event_hook_func_t func, rb_event_flag_t events, VALUE data);
int rb_remove_event_hook(rb_event_hook_func_t func);

int rb_remove_event_hook_with_data(rb_event_hook_func_t func, VALUE data);
void rb_thread_add_event_hook(VALUE thval, rb_event_hook_func_t func, rb_event_flag_t events, VALUE data);
int rb_thread_remove_event_hook(VALUE thval, rb_event_hook_func_t func);
int rb_thread_remove_event_hook_with_data(VALUE thval, rb_event_hook_func_t func, VALUE data);



VALUE rb_tracepoint_new(VALUE target_thread_not_supported_yet, rb_event_flag_t events, void (*func)(VALUE, void *), void *data);
VALUE rb_tracepoint_enable(VALUE tpval);
VALUE rb_tracepoint_disable(VALUE tpval);
VALUE rb_tracepoint_enabled_p(VALUE tpval);

typedef struct rb_trace_arg_struct rb_trace_arg_t;
rb_trace_arg_t *rb_tracearg_from_tracepoint(VALUE tpval);

rb_event_flag_t rb_tracearg_event_flag(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_event(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_lineno(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_path(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_method_id(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_callee_id(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_defined_class(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_binding(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_self(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_return_value(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_raised_exception(rb_trace_arg_t *trace_arg);
VALUE rb_tracearg_object(rb_trace_arg_t *trace_arg);


typedef void (*rb_postponed_job_func_t)(void *arg);
int rb_postponed_job_register(unsigned int flags, rb_postponed_job_func_t func, void *data);
int rb_postponed_job_register_one(unsigned int flags, rb_postponed_job_func_t func, void *data);



typedef enum {
    RUBY_EVENT_HOOK_FLAG_SAFE = 0x01,
    RUBY_EVENT_HOOK_FLAG_DELETED = 0x02,
    RUBY_EVENT_HOOK_FLAG_RAW_ARG = 0x04
} rb_event_hook_flag_t;

void rb_add_event_hook2(rb_event_hook_func_t func, rb_event_flag_t events, VALUE data, rb_event_hook_flag_t hook_flag);
void rb_thread_add_event_hook2(VALUE thval, rb_event_hook_func_t func, rb_event_flag_t events, VALUE data, rb_event_hook_flag_t hook_flag);





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


static inline void
vm_passed_block_handler_set(rb_execution_context_t *ec, VALUE block_handler)
{
    vm_block_handler_verify(block_handler);
    ec->passed_block_handler = block_handler;
}

static inline void
pass_passed_block_handler(rb_execution_context_t *ec)
{
    VALUE block_handler = rb_vm_frame_block_handler(ec->cfp);
    vm_block_handler_verify(block_handler);
    vm_passed_block_handler_set(ec, block_handler);
    VM_ENV_FLAGS_SET(ec->cfp->ep, VM_FRAME_FLAG_PASSED);
}











static inline int
rb_ec_tag_state(const rb_execution_context_t *ec)
{
    enum ruby_tag_type state = ec->tag->state;
    ec->tag->state = RUBY_TAG_NONE;
    return state;
}

 static inline void rb_ec_tag_jump(const rb_execution_context_t *ec, enum ruby_tag_type st);
static inline void
rb_ec_tag_jump(const rb_execution_context_t *ec, enum ruby_tag_type st)
{
    ec->tag->state = st;
    __builtin_longjmp(((ec->tag->buf)),(1));
}
static inline VALUE
CREF_CLASS(const rb_cref_t *cref)
{
    return cref->klass;
}

static inline rb_cref_t *
CREF_NEXT(const rb_cref_t *cref)
{
    return cref->next;
}

static inline const rb_scope_visibility_t *
CREF_SCOPE_VISI(const rb_cref_t *cref)
{
    return &cref->scope_visi;
}

static inline VALUE
CREF_REFINEMENTS(const rb_cref_t *cref)
{
    return cref->refinements;
}

static inline void
CREF_REFINEMENTS_SET(rb_cref_t *cref, VALUE refs)
{
    ({
;
; int unaligned_member_access_result = (rb_obj_write((VALUE)(cref), (VALUE *)(&cref->refinements), (VALUE)(refs), "./eval_intern.h", 238));
; unaligned_member_access_result; });
}

static inline int
CREF_PUSHED_BY_EVAL(const rb_cref_t *cref)
{
    return cref->flags & ((VALUE)RUBY_FL_USER5);
}

static inline void
CREF_PUSHED_BY_EVAL_SET(rb_cref_t *cref)
{
    cref->flags |= ((VALUE)RUBY_FL_USER5);
}

static inline int
CREF_OMOD_SHARED(const rb_cref_t *cref)
{
    return cref->flags & ((VALUE)RUBY_FL_USER6);
}

static inline void
CREF_OMOD_SHARED_SET(rb_cref_t *cref)
{
    cref->flags |= ((VALUE)RUBY_FL_USER6);
}

static inline void
CREF_OMOD_SHARED_UNSET(rb_cref_t *cref)
{
    cref->flags &= ~((VALUE)RUBY_FL_USER6);
}

void rb_thread_cleanup(void);
void rb_thread_wait_other_threads(void);

enum {
    RAISED_EXCEPTION = 1,
    RAISED_STACKOVERFLOW = 2,
    RAISED_NOMEMORY = 4
};




int rb_ec_set_raised(rb_execution_context_t *ec);
int rb_ec_reset_raised(rb_execution_context_t *ec);
int rb_ec_stack_check(rb_execution_context_t *ec);

VALUE rb_f_eval(int argc, const VALUE *argv, VALUE self);
VALUE rb_make_exception(int argc, const VALUE *argv);

 void rb_method_name_error(VALUE, VALUE);

 void rb_fiber_start(void);

 void rb_print_undef(VALUE, ID, rb_method_visibility_t);
 void rb_print_undef_str(VALUE, VALUE);
 void rb_print_inaccessible(VALUE, ID, rb_method_visibility_t);
 void rb_vm_localjump_error(const char *,VALUE, int);




VALUE rb_vm_make_jump_tag_but_local_jump(int state, VALUE val);
rb_cref_t *rb_vm_cref(void);
rb_cref_t *rb_vm_cref_replace_with_duplicated_cref(void);
VALUE rb_vm_call_cfunc(VALUE recv, VALUE (*func)(VALUE), VALUE arg, VALUE block_handler, VALUE filename);
void rb_vm_set_progname(VALUE filename);
void rb_thread_terminate_all(void);
VALUE rb_vm_cbase(void);


VALUE rb_ec_backtrace_object(const rb_execution_context_t *ec);
VALUE rb_ec_backtrace_str_ary(const rb_execution_context_t *ec, long lev, long n);

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

typedef enum {
    CONST_DEPRECATED = 0x100,

    CONST_VISIBILITY_MASK = 0xff,
    CONST_PUBLIC = 0x00,
    CONST_PRIVATE,
    CONST_VISIBILITY_MAX
} rb_const_flag_t;
typedef struct rb_const_entry_struct {
    rb_const_flag_t flag;
    int line;
    const VALUE value;
    const VALUE file;
} rb_const_entry_t;

VALUE rb_mod_private_constant(int argc, const VALUE *argv, VALUE obj);
VALUE rb_mod_public_constant(int argc, const VALUE *argv, VALUE obj);
VALUE rb_mod_deprecate_constant(int argc, const VALUE *argv, VALUE obj);
void rb_free_const_table(struct rb_id_table *tbl);
VALUE rb_public_const_get(VALUE klass, ID id);
VALUE rb_public_const_get_at(VALUE klass, ID id);
VALUE rb_public_const_get_from(VALUE klass, ID id);
int rb_public_const_defined(VALUE klass, ID id);
int rb_public_const_defined_at(VALUE klass, ID id);
int rb_public_const_defined_from(VALUE klass, ID id);
rb_const_entry_t *rb_const_lookup(VALUE klass, ID id);
int rb_autoloading_value(VALUE mod, ID id, VALUE *value, rb_const_flag_t *flag);





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





enum rb_debug_counter_type {


RB_DEBUG_COUNTER_mc_inline_hit,
RB_DEBUG_COUNTER_mc_inline_miss,
RB_DEBUG_COUNTER_mc_global_hit,
RB_DEBUG_COUNTER_mc_global_miss,
RB_DEBUG_COUNTER_mc_global_state_miss,
RB_DEBUG_COUNTER_mc_class_serial_miss,
RB_DEBUG_COUNTER_mc_cme_complement,
RB_DEBUG_COUNTER_mc_cme_complement_hit,
RB_DEBUG_COUNTER_mc_search_super,


RB_DEBUG_COUNTER_ivar_get_ic_hit,
RB_DEBUG_COUNTER_ivar_get_ic_miss,
RB_DEBUG_COUNTER_ivar_get_ic_miss_serial,
RB_DEBUG_COUNTER_ivar_get_ic_miss_unset,
RB_DEBUG_COUNTER_ivar_get_ic_miss_noobject,
RB_DEBUG_COUNTER_ivar_set_ic_hit,
RB_DEBUG_COUNTER_ivar_set_ic_miss,
RB_DEBUG_COUNTER_ivar_set_ic_miss_serial,
RB_DEBUG_COUNTER_ivar_set_ic_miss_unset,
RB_DEBUG_COUNTER_ivar_set_ic_miss_oorange,
RB_DEBUG_COUNTER_ivar_set_ic_miss_noobject,
RB_DEBUG_COUNTER_ivar_get_base,
RB_DEBUG_COUNTER_ivar_set_base,


RB_DEBUG_COUNTER_lvar_get,
RB_DEBUG_COUNTER_lvar_get_dynamic,
RB_DEBUG_COUNTER_lvar_set,
RB_DEBUG_COUNTER_lvar_set_dynamic,
RB_DEBUG_COUNTER_lvar_set_slowpath,


RB_DEBUG_COUNTER_obj_free,

RB_DEBUG_COUNTER_obj_str_ptr,
RB_DEBUG_COUNTER_obj_str_embed,
RB_DEBUG_COUNTER_obj_str_shared,
RB_DEBUG_COUNTER_obj_str_nofree,
RB_DEBUG_COUNTER_obj_str_fstr,

RB_DEBUG_COUNTER_obj_ary_ptr,
RB_DEBUG_COUNTER_obj_ary_embed,

RB_DEBUG_COUNTER_obj_obj_ptr,
RB_DEBUG_COUNTER_obj_obj_embed,


RB_DEBUG_COUNTER_load_files,
RB_DEBUG_COUNTER_load_path_is_not_realpath,
 RB_DEBUG_COUNTER_MAX

};
extern void *malloc (size_t __size)   ;


extern void *calloc (size_t __nmemb, size_t __size)
  ;






extern void *realloc (void *__ptr, size_t __size)
 ;






extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
 ;


extern void free (void *__ptr) ;


extern void *memalign (size_t __alignment, size_t __size)
  ;


extern void *valloc (size_t __size)   ;



extern void *pvalloc (size_t __size)   ;



extern void *(*__morecore) (ptrdiff_t __size);


extern void *__default_morecore (ptrdiff_t __size)
 ;



struct mallinfo
{
  int arena;
  int ordblks;
  int smblks;
  int hblks;
  int hblkhd;
  int usmblks;
  int fsmblks;
  int uordblks;
  int fordblks;
  int keepcost;
};


extern struct mallinfo mallinfo (void) ;
extern int mallopt (int __param, int __val) ;



extern int malloc_trim (size_t __pad) ;



extern size_t malloc_usable_size (void *__ptr) ;


extern void malloc_stats (void) ;


extern int malloc_info (int __options, FILE *__fp) ;


extern void (*volatile __free_hook) (void *__ptr,
                                                   const void *)
;
extern void *(*volatile __malloc_hook)(size_t __size,
                                                     const void *)
;
extern void *(*volatile __realloc_hook)(void *__ptr,
                                                      size_t __size,
                                                      const void *)
;
extern void *(*volatile __memalign_hook)(size_t __alignment,
                                                       size_t __size,
                                                       const void *)
;
extern void (*volatile __after_morecore_hook) (void);


extern void __malloc_check_init (void)  ;
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



enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};



struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

     union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



     union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

     union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

     union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


     union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

     union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

     union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


     union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

     union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

     union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

     union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

     union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



     union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


     union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};







extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      const struct rlimit *__new_limit,
      struct rlimit *__old_limit) ;
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) ;
typedef enum __rlimit_resource __rlimit_resource_t;
typedef enum __rusage_who __rusage_who_t;
typedef enum __priority_which __priority_which_t;
extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) ;
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) ;






extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) ;
extern int setrlimit64 (__rlimit_resource_t __resource,
   const struct rlimit64 *__rlimits) ;




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) ;





extern int getpriority (__priority_which_t __which, id_t __who) ;



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     ;
typedef struct {
    size_t heap_init_slots;
    size_t heap_free_slots;
    double growth_factor;
    size_t growth_max_slots;

    double heap_free_slots_min_ratio;
    double heap_free_slots_goal_ratio;
    double heap_free_slots_max_ratio;
    double oldobject_limit_factor;

    size_t malloc_limit_min;
    size_t malloc_limit_max;
    double malloc_limit_growth_factor;

    size_t oldmalloc_limit_min;
    size_t oldmalloc_limit_max;
    double oldmalloc_limit_growth_factor;

    VALUE gc_stress;
} ruby_gc_params_t;

static ruby_gc_params_t gc_params = {
    10000,
    4096,
    1.8,
    0,

    0.20,
    0.40,
    0.65,
    2.0,

    (16 * 1024 * 1024 ),
    (32 * 1024 * 1024 ),
    1.4,

    (16 * 1024 * 1024 ),
    (128 * 1024 * 1024 ),
    1.2,

    FALSE,
};
int ruby_rgengc_debug;
typedef enum {
    GPR_FLAG_NONE = 0x000,

    GPR_FLAG_MAJOR_BY_NOFREE = 0x001,
    GPR_FLAG_MAJOR_BY_OLDGEN = 0x002,
    GPR_FLAG_MAJOR_BY_SHADY = 0x004,
    GPR_FLAG_MAJOR_BY_FORCE = 0x008,

    GPR_FLAG_MAJOR_BY_OLDMALLOC = 0x020,

    GPR_FLAG_MAJOR_MASK = 0x0ff,


    GPR_FLAG_NEWOBJ = 0x100,
    GPR_FLAG_MALLOC = 0x200,
    GPR_FLAG_METHOD = 0x400,
    GPR_FLAG_CAPI = 0x800,
    GPR_FLAG_STRESS = 0x1000,


    GPR_FLAG_IMMEDIATE_SWEEP = 0x2000,
    GPR_FLAG_HAVE_FINALIZE = 0x4000
} gc_profile_record_flag;

typedef struct gc_profile_record {
    int flags;

    double gc_time;
    double gc_invoke_time;

    size_t heap_total_objects;
    size_t heap_use_size;
    size_t heap_total_size;
} gc_profile_record;





typedef struct RVALUE {
    union {
 struct {
     VALUE flags;
     struct RVALUE *next;
 } free;
 struct RBasic basic;
 struct RObject object;
 struct RClass klass;
 struct RFloat flonum;
 struct RString string;
 struct RArray array;
 struct RRegexp regexp;
 struct RHash hash;
 struct RData data;
 struct RTypedData typeddata;
 struct RStruct rstruct;
 struct RBignum bignum;
 struct RFile file;
 struct RMatch match;
 struct RRational rational;
 struct RComplex complex;
 union {
     rb_cref_t cref;
     struct vm_svar svar;
     struct vm_throw_data throw_data;
     struct vm_ifunc ifunc;
     struct MEMO memo;
     struct rb_method_entry_struct ment;
     const rb_iseq_t iseq;
     rb_env_t env;
     struct rb_imemo_alloc_struct alloc;
     rb_ast_t ast;
 } imemo;
 struct {
     struct RBasic basic;
     VALUE v1;
     VALUE v2;
     VALUE v3;
 } values;
    } as;




} RVALUE;





typedef uintptr_t bits_t;
enum {
    BITS_SIZE = sizeof(bits_t),
    BITS_BITLENGTH = ( BITS_SIZE * 8 )
};

struct heap_page_header {
    struct heap_page *page;
};

struct heap_page_body {
    struct heap_page_header header;


};

struct gc_list {
    VALUE *varptr;
    struct gc_list *next;
};



typedef struct stack_chunk {
    VALUE data[500];
    struct stack_chunk *next;
} stack_chunk_t;

typedef struct mark_stack {
    stack_chunk_t *chunk;
    stack_chunk_t *cache;
    int index;
    int limit;
    size_t cache_size;
    size_t unused_cache_size;
} mark_stack_t;

typedef struct rb_heap_struct {
    RVALUE *freelist;

    struct heap_page *free_pages;
    struct heap_page *using_page;
    struct heap_page *pages;
    struct heap_page *sweep_pages;

    struct heap_page *pooled_pages;

    size_t total_pages;
    size_t total_slots;
} rb_heap_t;

enum gc_mode {
    gc_mode_none,
    gc_mode_marking,
    gc_mode_sweeping
};

typedef struct rb_objspace {
    struct {
 size_t limit;
 size_t increase;




    } malloc_params;

    struct {
 unsigned int mode : 2;
 unsigned int immediate_sweep : 1;
 unsigned int dont_gc : 1;
 unsigned int dont_incremental : 1;
 unsigned int during_gc : 1;
 unsigned int gc_stressful: 1;
 unsigned int has_hook: 1;

 unsigned int during_minor_gc : 1;


 unsigned int during_incremental_marking : 1;

    } flags;

    rb_event_flag_t hook_events;
    size_t total_allocated_objects;

    rb_heap_t eden_heap;
    rb_heap_t tomb_heap;

    struct {
 rb_atomic_t finalizing;
    } atomic_flags;

    struct mark_func_data_struct {
 void *data;
 void (*mark_func)(VALUE v, void *data);
    } *mark_func_data;

    mark_stack_t mark_stack;
    size_t marked_slots;

    struct {
 struct heap_page **sorted;
 size_t allocated_pages;
 size_t allocatable_pages;
 size_t sorted_length;
 RVALUE *range[2];
 size_t freeable_pages;


 size_t final_slots;
 VALUE deferred_final;
    } heap_pages;

    st_table *finalizer_table;

    struct {
 int run;
 int latest_gc_info;
 gc_profile_record *records;
 gc_profile_record *current_record;
 size_t next_index;
 size_t size;




 double invoke_time;


 size_t minor_gc_count;
 size_t major_gc_count;
 double gc_sweep_start_time;
 size_t total_allocated_objects_at_gc_start;
 size_t heap_used_at_gc_start;


 size_t count;
 size_t total_freed_objects;
 size_t total_allocated_pages;
 size_t total_freed_pages;
    } profile;
    struct gc_list *global_list;

    VALUE gc_stress_mode;


    struct {
 VALUE parent_object;
 int need_major_gc;
 size_t last_major_gc;
 size_t uncollectible_wb_unprotected_objects;
 size_t uncollectible_wb_unprotected_objects_limit;
 size_t old_objects;
 size_t old_objects_limit;


 size_t oldmalloc_increase;
 size_t oldmalloc_increase_limit;






    } rgengc;

    struct {
 size_t pooled_slots;
 size_t step_slots;
    } rincgc;






} rb_objspace_t;







enum {
    HEAP_PAGE_ALIGN = (1UL << 14),
    HEAP_PAGE_ALIGN_MASK = (~(~0UL << 14)),
    REQUIRED_SIZE_BY_MALLOC = (sizeof(size_t) * 5),
    HEAP_PAGE_SIZE = (HEAP_PAGE_ALIGN - REQUIRED_SIZE_BY_MALLOC),
    HEAP_PAGE_OBJ_LIMIT = (unsigned int)((HEAP_PAGE_SIZE - sizeof(struct heap_page_header))/sizeof(struct RVALUE)),
    HEAP_PAGE_BITMAP_LIMIT = ((((((HEAP_PAGE_SIZE) + (sizeof(struct RVALUE)) - 1)/(sizeof(struct RVALUE)))) + (BITS_BITLENGTH) - 1)/(BITS_BITLENGTH)),
    HEAP_PAGE_BITMAP_SIZE = (BITS_SIZE * HEAP_PAGE_BITMAP_LIMIT),
    HEAP_PAGE_BITMAP_PLANES = 1 ? 4 : 1
};

struct heap_page {
    struct heap_page *prev;
    short total_slots;
    short free_slots;
    short final_slots;
    struct {
 unsigned int before_sweep : 1;
 unsigned int has_remembered_objects : 1;
 unsigned int has_uncollectible_shady_objects : 1;
 unsigned int in_tomb : 1;
    } flags;

    struct heap_page *free_next;
    RVALUE *start;
    RVALUE *freelist;
    struct heap_page *next;


    bits_t wb_unprotected_bits[HEAP_PAGE_BITMAP_LIMIT];


    bits_t mark_bits[HEAP_PAGE_BITMAP_LIMIT];

    bits_t uncollectible_bits[HEAP_PAGE_BITMAP_LIMIT];
    bits_t marking_bits[HEAP_PAGE_BITMAP_LIMIT];

};
VALUE *ruby_initial_gc_stress_ptr = &gc_params.gc_stress;
static inline enum gc_mode
gc_mode_verify(enum gc_mode mode)
{
    return mode;
}
struct RZombie {
    struct RBasic basic;
    VALUE next;
    void (*dfree)(void *);
    void *data;
};





int ruby_gc_debug_indent = 0;
VALUE rb_mGC;
int ruby_disable_gc = 0;

void rb_iseq_mark(const rb_iseq_t *iseq);
void rb_iseq_free(const rb_iseq_t *iseq);

void rb_gcdebug_print_obj_condition(VALUE obj);

static void rb_objspace_call_finalizer(rb_objspace_t *objspace);
static VALUE define_final0(VALUE obj, VALUE block);

static void negative_size_allocation_error(const char *);
static void *aligned_malloc(size_t, size_t);
static void aligned_free(void *);

static void init_mark_stack(mark_stack_t *stack);

static int ready_to_gc(rb_objspace_t *objspace);

static int garbage_collect(rb_objspace_t *, int full_mark, int immediate_mark, int immediate_sweep, int reason);

static int gc_start(rb_objspace_t *objspace, const int full_mark, const int immediate_mark, const unsigned int immediate_sweep, int reason);
static void gc_rest(rb_objspace_t *objspace);
static inline void gc_enter(rb_objspace_t *objspace, const char *event);
static inline void gc_exit(rb_objspace_t *objspace, const char *event);

static void gc_marks(rb_objspace_t *objspace, int full_mark);
static void gc_marks_start(rb_objspace_t *objspace, int full);
static int gc_marks_finish(rb_objspace_t *objspace);
static void gc_marks_rest(rb_objspace_t *objspace);

static void gc_marks_step(rb_objspace_t *objspace, int slots);
static void gc_marks_continue(rb_objspace_t *objspace, rb_heap_t *heap);


static void gc_sweep(rb_objspace_t *objspace);
static void gc_sweep_start(rb_objspace_t *objspace);
static void gc_sweep_finish(rb_objspace_t *objspace);
static int gc_sweep_step(rb_objspace_t *objspace, rb_heap_t *heap);
static void gc_sweep_rest(rb_objspace_t *objspace);

static void gc_sweep_continue(rb_objspace_t *objspace, rb_heap_t *heap);


static inline void gc_mark(rb_objspace_t *objspace, VALUE ptr);
static void gc_mark_ptr(rb_objspace_t *objspace, VALUE ptr);
static void gc_mark_maybe(rb_objspace_t *objspace, VALUE ptr);
static void gc_mark_children(rb_objspace_t *objspace, VALUE ptr);

static int gc_mark_stacked_objects_incremental(rb_objspace_t *, size_t count);
static int gc_mark_stacked_objects_all(rb_objspace_t *);
static void gc_grey(rb_objspace_t *objspace, VALUE ptr);

static inline int gc_mark_set(rb_objspace_t *objspace, VALUE obj);
static inline int is_pointer_to_heap(rb_objspace_t *objspace, void *ptr);

static void push_mark_stack(mark_stack_t *, VALUE);
static int pop_mark_stack(mark_stack_t *, VALUE *);
static size_t mark_stack_size(mark_stack_t *stack);
static void shrink_stack_chunk_cache(mark_stack_t *stack);

static size_t obj_memsize_of(VALUE obj, int use_all_types);
static VALUE gc_verify_internal_consistency(VALUE self);
static int gc_verify_heap_page(rb_objspace_t *objspace, struct heap_page *page, VALUE obj);
static int gc_verify_heap_pages(rb_objspace_t *objspace);

static void gc_stress_set(rb_objspace_t *objspace, VALUE flag);

static double getrusage_time(void);
static inline void gc_prof_setup_new_record(rb_objspace_t *objspace, int reason);
static inline void gc_prof_timer_start(rb_objspace_t *);
static inline void gc_prof_timer_stop(rb_objspace_t *);
static inline void gc_prof_mark_timer_start(rb_objspace_t *);
static inline void gc_prof_mark_timer_stop(rb_objspace_t *);
static inline void gc_prof_sweep_timer_start(rb_objspace_t *);
static inline void gc_prof_sweep_timer_stop(rb_objspace_t *);
static inline void gc_prof_set_malloc_info(rb_objspace_t *);
static inline void gc_prof_set_heap_info(rb_objspace_t *);
static void gc_report_body(int level, rb_objspace_t *objspace, const char *fmt, ...) ;
static const char *obj_info(VALUE obj);
static int rgengc_remembered(rb_objspace_t *objspace, VALUE obj);
static int rgengc_remember(rb_objspace_t *objspace, VALUE obj);
static void rgengc_mark_and_rememberset_clear(rb_objspace_t *objspace, rb_heap_t *heap);
static void rgengc_rememberset_mark(rb_objspace_t *objspace, rb_heap_t *heap);

static inline int
RVALUE_FLAGS_AGE(VALUE flags)
{
    return (int)((flags & (((VALUE)RUBY_FL_PROMOTED0) | ((VALUE)RUBY_FL_PROMOTED1))) >> 5);
}





static inline VALUE
check_rvalue_consistency(const VALUE obj)
{
    return obj;
}
static inline int
RVALUE_MARKED(VALUE obj)
{
    check_rvalue_consistency(obj);
    return (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) != 0;
}


static inline int
RVALUE_WB_UNPROTECTED(VALUE obj)
{
    check_rvalue_consistency(obj);
    return (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) != 0;
}

static inline int
RVALUE_MARKING(VALUE obj)
{
    check_rvalue_consistency(obj);
    return (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) != 0;
}

static inline int
RVALUE_REMEMBERED(VALUE obj)
{
    check_rvalue_consistency(obj);
    return (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) != 0;
}

static inline int
RVALUE_UNCOLLECTIBLE(VALUE obj)
{
    check_rvalue_consistency(obj);
    return (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) != 0;
}

static inline int
RVALUE_OLD_P_RAW(VALUE obj)
{
    const VALUE promoted = ((VALUE)RUBY_FL_PROMOTED0) | ((VALUE)RUBY_FL_PROMOTED1);
    return (((struct RBasic*)(obj))->flags & promoted) == promoted;
}

static inline int
RVALUE_OLD_P(VALUE obj)
{
    check_rvalue_consistency(obj);
    return RVALUE_OLD_P_RAW(obj);
}
static inline void
RVALUE_PAGE_OLD_UNCOLLECTIBLE_SET(rb_objspace_t *objspace, struct heap_page *page, VALUE obj)
{
    ((&page->uncollectible_bits[0])[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = (&page->uncollectible_bits[0])[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    objspace->rgengc.old_objects++;





}

static inline void
RVALUE_OLD_UNCOLLECTIBLE_SET(rb_objspace_t *objspace, VALUE obj)
{
    RVALUE_PAGE_OLD_UNCOLLECTIBLE_SET(objspace, ((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page), obj);
}

static inline VALUE
RVALUE_FLAGS_AGE_SET(VALUE flags, int age)
{
    flags &= ~(((VALUE)RUBY_FL_PROMOTED0) | ((VALUE)RUBY_FL_PROMOTED1));
    flags |= (age << 5);
    return flags;
}


static inline void
RVALUE_AGE_INC(rb_objspace_t *objspace, VALUE obj)
{
    VALUE flags = ((struct RBasic*)(obj))->flags;
    int age = RVALUE_FLAGS_AGE(flags);

    if (0 && age == 3) {
 rb_bug("RVALUE_AGE_INC: can not increment age of OLD object %s.", obj_info(obj));
    }

    age++;
    ((struct RBasic*)(obj))->flags = RVALUE_FLAGS_AGE_SET(flags, age);

    if (age == 3) {
 RVALUE_OLD_UNCOLLECTIBLE_SET(objspace, obj);
    }
    check_rvalue_consistency(obj);
}


static inline void
RVALUE_AGE_SET_OLD(rb_objspace_t *objspace, VALUE obj)
{
    check_rvalue_consistency(obj);
    ((void)0);

    ((struct RBasic*)(obj))->flags = RVALUE_FLAGS_AGE_SET(((struct RBasic*)(obj))->flags, 3);
    RVALUE_OLD_UNCOLLECTIBLE_SET(objspace, obj);

    check_rvalue_consistency(obj);
}


static inline void
RVALUE_AGE_SET_CANDIDATE(rb_objspace_t *objspace, VALUE obj)
{
    check_rvalue_consistency(obj);
    ((void)0);

    ((struct RBasic*)(obj))->flags = RVALUE_FLAGS_AGE_SET(((struct RBasic*)(obj))->flags, 3 - 1);

    check_rvalue_consistency(obj);
}

static inline void
RVALUE_DEMOTE_RAW(rb_objspace_t *objspace, VALUE obj)
{
    ((struct RBasic*)(obj))->flags = RVALUE_FLAGS_AGE_SET(((struct RBasic*)(obj))->flags, 0);
    (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
}

static inline void
RVALUE_DEMOTE(rb_objspace_t *objspace, VALUE obj)
{
    check_rvalue_consistency(obj);
    ((void)0);

    if (!((objspace)->flags.during_incremental_marking != FALSE) && RVALUE_REMEMBERED(obj)) {
 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    }

    RVALUE_DEMOTE_RAW(objspace, obj);

    if (RVALUE_MARKED(obj)) {
 objspace->rgengc.old_objects--;
    }

    check_rvalue_consistency(obj);
}

static inline void
RVALUE_AGE_RESET_RAW(VALUE obj)
{
    ((struct RBasic*)(obj))->flags = RVALUE_FLAGS_AGE_SET(((struct RBasic*)(obj))->flags, 0);
}

static inline void
RVALUE_AGE_RESET(VALUE obj)
{
    check_rvalue_consistency(obj);
    ((void)0);

    RVALUE_AGE_RESET_RAW(obj);
    check_rvalue_consistency(obj);
}

static inline int
RVALUE_BLACK_P(VALUE obj)
{
    return RVALUE_MARKED(obj) && !RVALUE_MARKING(obj);
}
static inline int
RVALUE_WHITE_P(VALUE obj)
{
    return RVALUE_MARKED(obj) == FALSE;
}







rb_objspace_t *
rb_objspace_alloc(void)
{

    rb_objspace_t *objspace = calloc(1, sizeof(rb_objspace_t));



    objspace->malloc_params.limit = gc_params.malloc_limit_min;

    return objspace;
}

static void free_stack_chunks(mark_stack_t *);
static void heap_page_free(rb_objspace_t *objspace, struct heap_page *page);

void
rb_objspace_free(rb_objspace_t *objspace)
{
    if ((1 && (((&objspace->eden_heap))->sweep_pages != 0)))
 rb_bug("lazy sweeping underway when freeing object space");

    if (objspace->profile.records) {
 free(objspace->profile.records);
 objspace->profile.records = 0;
    }

    if (objspace->global_list) {
 struct gc_list *list, *next;
 for (list = objspace->global_list; list; list = next) {
     next = list->next;
     ruby_xfree(list);
 }
    }
    if (objspace->heap_pages.sorted) {
 size_t i;
 for (i = 0; i < objspace->heap_pages.allocated_pages; ++i) {
     heap_page_free(objspace, objspace->heap_pages.sorted[i]);
 }
 free(objspace->heap_pages.sorted);
 objspace->heap_pages.allocated_pages = 0;
 objspace->heap_pages.sorted_length = 0;
 objspace->heap_pages.range[0] = 0;
 objspace->heap_pages.range[1] = 0;

 objspace->eden_heap.total_pages = 0;
 objspace->eden_heap.total_slots = 0;
 objspace->eden_heap.pages = ((void*)0);
    }
    free_stack_chunks(&objspace->mark_stack);



    free(objspace);
}

static void
heap_pages_expand_sorted_to(rb_objspace_t *objspace, size_t next_length)
{
    struct heap_page **sorted;
    size_t size = next_length * sizeof(struct heap_page *);

    if (!((0) >= (3))) {} else gc_report_body(3, objspace, "heap_pages_expand_sorted: next_length: %d, size: %d\n", (int)next_length, (int)size);

    if (objspace->heap_pages.sorted_length > 0) {
 sorted = (struct heap_page **)realloc(objspace->heap_pages.sorted, size);
 if (sorted) objspace->heap_pages.sorted = sorted;
    }
    else {
 sorted = objspace->heap_pages.sorted = (struct heap_page **)malloc(size);
    }

    if (sorted == 0) {
 rb_memerror();
    }

    objspace->heap_pages.sorted_length = next_length;
}

static void
heap_pages_expand_sorted(rb_objspace_t *objspace)
{





    size_t next_length = objspace->heap_pages.allocatable_pages;
    next_length += (&objspace->eden_heap)->total_pages;
    next_length += (&objspace->tomb_heap)->total_pages;

    if (next_length > objspace->heap_pages.sorted_length) {
 heap_pages_expand_sorted_to(objspace, next_length);
    }

    ((void)0);
    ((void)0);
}

static void
heap_allocatable_pages_set(rb_objspace_t *objspace, size_t s)
{
    objspace->heap_pages.allocatable_pages = s;
    heap_pages_expand_sorted(objspace);
}


static inline void
heap_page_add_freeobj(rb_objspace_t *objspace, struct heap_page *page, VALUE obj)
{
    RVALUE *p = (RVALUE *)obj;
    p->as.free.flags = 0;
    p->as.free.next = page->freelist;
    page->freelist = p;

    if (0 && !is_pointer_to_heap(objspace, p)) {
 rb_bug("heap_page_add_freeobj: %p is not rvalue.", p);
    }

    if (!((0) >= (3))) {} else gc_report_body(3, objspace, "heap_page_add_freeobj: add %p to freelist\n", (void *)obj);
}

static inline void
heap_add_freepage(rb_objspace_t *objspace, rb_heap_t *heap, struct heap_page *page)
{
    if (page->freelist) {
 page->free_next = heap->free_pages;
 heap->free_pages = page;
    }
}


static inline int
heap_add_poolpage(rb_objspace_t *objspace, rb_heap_t *heap, struct heap_page *page)
{
    if (page->freelist) {
 page->free_next = heap->pooled_pages;
 heap->pooled_pages = page;
 objspace->rincgc.pooled_slots += page->free_slots;
 return TRUE;
    }
    else {
 return FALSE;
    }
}


static void
heap_unlink_page(rb_objspace_t *objspace, rb_heap_t *heap, struct heap_page *page)
{
    if (page->prev) page->prev->next = page->next;
    if (page->next) page->next->prev = page->prev;
    if (heap->pages == page) heap->pages = page->next;
    page->prev = ((void*)0);
    page->next = ((void*)0);
    heap->total_pages--;
    heap->total_slots -= page->total_slots;
}

static void
heap_page_free(rb_objspace_t *objspace, struct heap_page *page)
{
    objspace->heap_pages.allocated_pages--;
    objspace->profile.total_freed_pages++;
    aligned_free(((struct heap_page_body *)((bits_t)(page->start) & ~(HEAP_PAGE_ALIGN_MASK))));
    free(page);
}

static void
heap_pages_free_unused_pages(rb_objspace_t *objspace)
{
    size_t i, j;

    if ((&objspace->tomb_heap)->pages) {
 for (i = j = 1; j < objspace->heap_pages.allocated_pages; i++) {
     struct heap_page *page = objspace->heap_pages.sorted[i];

     if (page->flags.in_tomb && page->free_slots == page->total_slots) {
  heap_unlink_page(objspace, (&objspace->tomb_heap), page);
  heap_page_free(objspace, page);
     }
     else {
  if (i != j) {
      objspace->heap_pages.sorted[j] = page;
  }
  j++;
     }
 }
 ((void)0);
    }
}

static struct heap_page *
heap_page_allocate(rb_objspace_t *objspace)
{
    RVALUE *start, *end, *p;
    struct heap_page *page;
    struct heap_page_body *page_body = 0;
    size_t hi, lo, mid;
    int limit = HEAP_PAGE_OBJ_LIMIT;


    page_body = (struct heap_page_body *)aligned_malloc(HEAP_PAGE_ALIGN, HEAP_PAGE_SIZE);
    if (page_body == 0) {
 rb_memerror();
    }


    page = (struct heap_page *)calloc(1, sizeof(struct heap_page));
    if (page == 0) {
 aligned_free(page_body);
 rb_memerror();
    }


    start = (RVALUE*)((VALUE)page_body + sizeof(struct heap_page_header));
    if ((VALUE)start % sizeof(RVALUE) != 0) {
 int delta = (int)(sizeof(RVALUE) - ((VALUE)start % sizeof(RVALUE)));
 start = (RVALUE*)((VALUE)start + delta);
 limit = (HEAP_PAGE_SIZE - (int)((VALUE)start - (VALUE)page_body))/(int)sizeof(RVALUE);
    }
    end = start + limit;


    lo = 0;
    hi = objspace->heap_pages.allocated_pages;
    while (lo < hi) {
 struct heap_page *mid_page;

 mid = (lo + hi) / 2;
 mid_page = objspace->heap_pages.sorted[mid];
 if (mid_page->start < start) {
     lo = mid + 1;
 }
 else if (mid_page->start > start) {
     hi = mid;
 }
 else {
     rb_bug("same heap page is allocated: %p at %lu", (void *)page_body, (VALUE)mid);
 }
    }

    if (hi < objspace->heap_pages.allocated_pages) {
 memmove((&objspace->heap_pages.sorted[hi+1]), (&objspace->heap_pages.sorted[hi]), sizeof(struct heap_page_header*)*(size_t)(objspace->heap_pages.allocated_pages - hi));
    }

    objspace->heap_pages.sorted[hi] = page;

    objspace->heap_pages.allocated_pages++;

    ((void)0);
    ((void)0);
    ((void)0);

    objspace->profile.total_allocated_pages++;

    if (objspace->heap_pages.allocated_pages > objspace->heap_pages.sorted_length) {
 rb_bug("heap_page_allocate: allocated(%zd) > sorted(%zd)",
        objspace->heap_pages.allocated_pages, objspace->heap_pages.sorted_length);
    }

    if (objspace->heap_pages.range[0] == 0 || objspace->heap_pages.range[0] > start) objspace->heap_pages.range[0] = start;
    if (objspace->heap_pages.range[1] < end) objspace->heap_pages.range[1] = end;

    page->start = start;
    page->total_slots = limit;
    page_body->header.page = page;

    for (p = start; p != end; p++) {
 if (!((0) >= (3))) {} else gc_report_body(3, objspace, "assign_heap_page: %p is added to freelist\n", p);
 heap_page_add_freeobj(objspace, page, (VALUE)p);
    }
    page->free_slots = limit;

    return page;
}

static struct heap_page *
heap_page_resurrect(rb_objspace_t *objspace)
{
    struct heap_page *page = (&objspace->tomb_heap)->pages;

    while (page) {
 if (page->freelist != ((void*)0)) {
     heap_unlink_page(objspace, (&objspace->tomb_heap), page);
     return page;
 }
 page = page->next;
    }



    return ((void*)0);
}

static struct heap_page *
heap_page_create(rb_objspace_t *objspace)
{
    struct heap_page *page;
    const char *method = "recycle";

    objspace->heap_pages.allocatable_pages--;

    page = heap_page_resurrect(objspace);

    if (page == ((void*)0)) {
 page = heap_page_allocate(objspace);
 method = "allocate";
    }
    if (0) fprintf(stderr, "heap_page_create: %s - %p, heap_allocated_pages: %d, heap_allocated_pages: %d, tomb->total_pages: %d\n",
     method, page, (int)objspace->heap_pages.sorted_length, (int)objspace->heap_pages.allocated_pages, (int)(&objspace->tomb_heap)->total_pages);
    return page;
}

static void
heap_add_page(rb_objspace_t *objspace, rb_heap_t *heap, struct heap_page *page)
{
    page->flags.in_tomb = (heap == (&objspace->tomb_heap));
    page->next = heap->pages;
    if (heap->pages) heap->pages->prev = page;
    heap->pages = page;
    heap->total_pages++;
    heap->total_slots += page->total_slots;
}

static void
heap_assign_page(rb_objspace_t *objspace, rb_heap_t *heap)
{
    struct heap_page *page = heap_page_create(objspace);
    heap_add_page(objspace, heap, page);
    heap_add_freepage(objspace, heap, page);
}

static void
heap_add_pages(rb_objspace_t *objspace, rb_heap_t *heap, size_t add)
{
    size_t i;

    heap_allocatable_pages_set(objspace, add);

    for (i = 0; i < add; i++) {
 heap_assign_page(objspace, heap);
    }

    ((void)0);
}

static size_t
heap_extend_pages(rb_objspace_t *objspace, size_t free_slots, size_t total_slots)
{
    double goal_ratio = gc_params.heap_free_slots_goal_ratio;
    size_t used = objspace->heap_pages.allocated_pages + objspace->heap_pages.allocatable_pages;
    size_t next_used;

    if (goal_ratio == 0.0) {
 next_used = (size_t)(used * gc_params.growth_factor);
    }
    else {



 double f = (double)(total_slots - free_slots) / ((1 - goal_ratio) * total_slots);

 if (f > gc_params.growth_factor) f = gc_params.growth_factor;
 if (f < 1.0) f = 1.1;

 next_used = (size_t)(f * used);

 if (0) {
     fprintf(stderr,
      "free_slots(%8zu)/total_slots(%8zu)=%1.2f, G(%1.2f), f(%1.2f), used(%8zu) => next_used(%8zu)\n",
      free_slots, total_slots, free_slots/(double)total_slots,
      goal_ratio, f, used, next_used);
 }
    }

    if (gc_params.growth_max_slots > 0) {
 size_t max_used = (size_t)(used + gc_params.growth_max_slots/HEAP_PAGE_OBJ_LIMIT);
 if (next_used > max_used) next_used = max_used;
    }

    return next_used - used;
}

static void
heap_set_increment(rb_objspace_t *objspace, size_t additional_pages)
{
    size_t used = (&objspace->eden_heap)->total_pages;
    size_t next_used_limit = used + additional_pages;

    if (next_used_limit == objspace->heap_pages.allocated_pages) next_used_limit++;

    heap_allocatable_pages_set(objspace, next_used_limit - used);

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "heap_set_increment: heap_allocatable_pages is %d\n", (int)objspace->heap_pages.allocatable_pages);
}

static int
heap_increment(rb_objspace_t *objspace, rb_heap_t *heap)
{
    if (objspace->heap_pages.allocatable_pages > 0) {
 if (!((0) >= (1))) {} else gc_report_body(1, objspace, "heap_increment: heap_pages_sorted_length: %d, heap_pages_inc: %d, heap->total_pages: %d\n", (int)objspace->heap_pages.sorted_length, (int)objspace->heap_pages.allocatable_pages, (int)heap->total_pages);


 ((void)0);
 ((void)0);

 heap_assign_page(objspace, heap);
 return TRUE;
    }
    return FALSE;
}

static void
heap_prepare(rb_objspace_t *objspace, rb_heap_t *heap)
{
    ((void)0);


    if ((1 && ((heap)->sweep_pages != 0))) {
 gc_sweep_continue(objspace, heap);
    }


    else if (((objspace)->flags.during_incremental_marking != FALSE)) {
 gc_marks_continue(objspace, heap);
    }


    if (heap->free_pages == ((void*)0) &&
 (((objspace)->rgengc.need_major_gc != GPR_FLAG_NONE) || heap_increment(objspace, heap) == FALSE) &&
 gc_start(objspace, FALSE, FALSE, FALSE, GPR_FLAG_NEWOBJ) == FALSE) {
 rb_memerror();
    }
}

static RVALUE *
heap_get_freeobj_from_next_freepage(rb_objspace_t *objspace, rb_heap_t *heap)
{
    struct heap_page *page;
    RVALUE *p;

    while (heap->free_pages == ((void*)0)) {
 heap_prepare(objspace, heap);
    }
    page = heap->free_pages;
    heap->free_pages = page->free_next;
    heap->using_page = page;

    ((void)0);
    p = page->freelist;
    page->freelist = ((void*)0);
    page->free_slots = 0;
    return p;
}

static inline VALUE
heap_get_freeobj_head(rb_objspace_t *objspace, rb_heap_t *heap)
{
    RVALUE *p = heap->freelist;
    if ((__builtin_expect(!!(p != ((void*)0)), 1))) {
 heap->freelist = p->as.free.next;
    }
    return (VALUE)p;
}

static inline VALUE
heap_get_freeobj(rb_objspace_t *objspace, rb_heap_t *heap)
{
    RVALUE *p = heap->freelist;

    while (1) {
 if ((__builtin_expect(!!(p != ((void*)0)), 1))) {
     heap->freelist = p->as.free.next;
     return (VALUE)p;
 }
 else {
     p = heap_get_freeobj_from_next_freepage(objspace, heap);
 }
    }
}

void
rb_objspace_set_event_hook(const rb_event_flag_t event)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    objspace->hook_events = event & 0x7f00000;
    objspace->flags.has_hook = (objspace->hook_events != 0);
}

static void
gc_event_hook_body(rb_execution_context_t *ec, rb_objspace_t *objspace, const rb_event_flag_t event, VALUE data)
{
    do { const rb_event_flag_t flag_arg_ = (event); if ((__builtin_expect(!!(ruby_vm_event_flags & (flag_arg_)), 0))) { rb_exec_event_hook_orig(ec, flag_arg_, ec->cfp->self, 0, 0, 0, data, 0); } } while (0);
}
static inline VALUE
newobj_init(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, int wb_protected, rb_objspace_t *objspace, VALUE obj)
{
    ((void)0);
    ((void)0);


    ((struct RBasic*)(obj))->flags = flags;
    memcpy(&((struct RBasicRaw *)((VALUE)(obj)))->klass, &(klass), sizeof(VALUE));
    ((RVALUE*)(obj))->as.values.v1 = v1;
    ((RVALUE*)(obj))->as.values.v2 = v2;
    ((RVALUE*)(obj))->as.values.v3 = v3;
    if ((__builtin_expect(!!(wb_protected == FALSE), 0))) {
 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    }
    objspace->total_allocated_objects++;

    if (!((0) >= (5))) {} else gc_report_body(5, objspace, "newobj: %s\n", obj_info(obj));
    check_rvalue_consistency(obj);
    return obj;
}

static inline VALUE
newobj_slowpath(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, rb_objspace_t *objspace, int wb_protected)
{
    VALUE obj;

    if ((__builtin_expect(!!(objspace->flags.during_gc || objspace->flags.gc_stressful), 0))) {
 if (objspace->flags.during_gc) {
     objspace->flags.dont_gc = 1;
     objspace->flags.during_gc = 0;
     rb_bug("object allocation during garbage collection phase");
 }

 if (objspace->flags.gc_stressful) {
     if (!garbage_collect(objspace, FALSE, FALSE, FALSE, GPR_FLAG_NEWOBJ)) {
  rb_memerror();
     }
 }
    }

    obj = heap_get_freeobj(objspace, (&objspace->eden_heap));
    newobj_init(klass, flags, v1, v2, v3, wb_protected, objspace, obj);
    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x100000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x100000), (obj)); } } while (0);
    return obj;
}

 static VALUE newobj_slowpath_wb_protected(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, rb_objspace_t *objspace);
 static VALUE newobj_slowpath_wb_unprotected(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, rb_objspace_t *objspace);

static VALUE
newobj_slowpath_wb_protected(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, rb_objspace_t *objspace)
{
    return newobj_slowpath(klass, flags, v1, v2, v3, objspace, TRUE);
}

static VALUE
newobj_slowpath_wb_unprotected(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, rb_objspace_t *objspace)
{
    return newobj_slowpath(klass, flags, v1, v2, v3, objspace, FALSE);
}

static inline VALUE
newobj_of(VALUE klass, VALUE flags, VALUE v1, VALUE v2, VALUE v3, int wb_protected)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE obj;
    if (!(objspace->flags.during_gc ||
   objspace->flags.gc_stressful ||
   ((objspace)->flags.has_hook)) &&
 (obj = heap_get_freeobj_head(objspace, (&objspace->eden_heap))) != ((VALUE)RUBY_Qfalse)) {
 return newobj_init(klass, flags, v1, v2, v3, wb_protected, objspace, obj);
    }
    else {
 return wb_protected ?
   newobj_slowpath_wb_protected(klass, flags, v1, v2, v3, objspace) :
   newobj_slowpath_wb_unprotected(klass, flags, v1, v2, v3, objspace);
    }
}

VALUE
rb_wb_unprotected_newobj_of(VALUE klass, VALUE flags)
{
    ((void)0);
    return newobj_of(klass, flags, 0, 0, 0, FALSE);
}

VALUE
rb_wb_protected_newobj_of(VALUE klass, VALUE flags)
{
    ((void)0);
    return newobj_of(klass, flags, 0, 0, 0, TRUE);
}



VALUE
rb_newobj(void)
{
    return newobj_of(0, RUBY_T_NONE, 0, 0, 0, FALSE);
}

VALUE
rb_newobj_of(VALUE klass, VALUE flags)
{
    return newobj_of(klass, flags & ~((VALUE)RUBY_FL_WB_PROTECTED), 0, 0, 0, flags & ((VALUE)RUBY_FL_WB_PROTECTED));
}







VALUE
rb_imemo_new(enum imemo_type type, VALUE v1, VALUE v2, VALUE v3, VALUE v0)
{
    VALUE flags = RUBY_T_IMEMO | (type << ((VALUE)RUBY_FL_USHIFT));
    return newobj_of(v0, flags, v1, v2, v3, TRUE);
}

rb_imemo_alloc_t *
rb_imemo_alloc_new(VALUE v1, VALUE v2, VALUE v3, VALUE v0)
{
    VALUE flags = RUBY_T_IMEMO | (imemo_alloc << ((VALUE)RUBY_FL_USHIFT));
    return (rb_imemo_alloc_t *)newobj_of(v0, flags, v1, v2, v3, FALSE);
}
VALUE
rb_data_object_wrap(VALUE klass, void *datap, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree)
{
    if (klass) (!( (((RUBY_T_CLASS)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(klass)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_CLASS)) == RUBY_T_TRUE) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_CLASS)) == RUBY_T_FALSE) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_CLASS)) == RUBY_T_NIL) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_CLASS)) == RUBY_T_UNDEF) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_CLASS)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(klass))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_CLASS)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(klass)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == ((RUBY_T_CLASS)))) || ((RUBY_T_CLASS) == RUBY_T_DATA && (((struct RTypedData*)(klass))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(klass), (RUBY_T_CLASS)) : (void)0);
    return newobj_of(klass, RUBY_T_DATA, (VALUE)dmark, (VALUE)dfree, (VALUE)datap, FALSE);
}


VALUE rb_data_object_alloc(VALUE klass, void *datap, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree) ;




VALUE
rb_data_object_zalloc(VALUE klass, size_t size, RUBY_DATA_FUNC dmark, RUBY_DATA_FUNC dfree)
{
    VALUE obj = rb_data_object_wrap(klass, 0, dmark, dfree);
    (((struct RData*)(obj))->data) = ruby_xcalloc(1, size);
    return obj;
}

VALUE
rb_data_typed_object_wrap(VALUE klass, void *datap, const rb_data_type_t *type)
{
    if (klass) (!( (((RUBY_T_CLASS)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(klass)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_CLASS)) == RUBY_T_TRUE) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_CLASS)) == RUBY_T_FALSE) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_CLASS)) == RUBY_T_NIL) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_CLASS)) == RUBY_T_UNDEF) ? (((VALUE)(klass)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_CLASS)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(klass))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_CLASS)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(klass)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(klass)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(klass)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(klass)))->flags & RUBY_T_MASK) == ((RUBY_T_CLASS)))) || ((RUBY_T_CLASS) == RUBY_T_DATA && (((struct RTypedData*)(klass))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(klass), (RUBY_T_CLASS)) : (void)0);
    return newobj_of(klass, RUBY_T_DATA, (VALUE)type, (VALUE)1, (VALUE)datap, type->flags & RUBY_FL_WB_PROTECTED);
}


VALUE rb_data_typed_object_alloc(VALUE klass, void *datap, const rb_data_type_t *type) ;



VALUE
rb_data_typed_object_zalloc(VALUE klass, size_t size, const rb_data_type_t *type)
{
    VALUE obj = rb_data_typed_object_wrap(klass, 0, type);
    (((struct RData*)(obj))->data) = ruby_xcalloc(1, size);
    return obj;
}

size_t
rb_objspace_data_type_memsize(VALUE obj)
{
    if ((((struct RTypedData*)(obj))->typed_flag == 1)) {
 const rb_data_type_t *type = (((struct RTypedData*)(obj))->type);
 const void *ptr = (((struct RTypedData*)(obj))->data);
 if (ptr && type->function.dsize) {
     return type->function.dsize(ptr);
 }
    }
    return 0;
}

const char *
rb_objspace_data_type_name(VALUE obj)
{
    if ((((struct RTypedData*)(obj))->typed_flag == 1)) {
 return (((struct RTypedData*)(obj))->type)->wrap_struct_name;
    }
    else {
 return 0;
    }
}

 static inline int is_pointer_to_heap(rb_objspace_t *objspace, void *ptr);
static inline int
is_pointer_to_heap(rb_objspace_t *objspace, void *ptr)
{
    register RVALUE *p = ((RVALUE*)(ptr));
    register struct heap_page *page;
    register size_t hi, lo, mid;

    if (p < objspace->heap_pages.range[0] || p > objspace->heap_pages.range[1]) return FALSE;
    if ((VALUE)p % sizeof(RVALUE) != 0) return FALSE;


    lo = 0;
    hi = objspace->heap_pages.allocated_pages;
    while (lo < hi) {
 mid = (lo + hi) / 2;
 page = objspace->heap_pages.sorted[mid];
 if (page->start <= p) {
     if (p < page->start + page->total_slots) {
  return TRUE;
     }
     lo = mid + 1;
 }
 else {
     hi = mid;
 }
    }
    return FALSE;
}

static enum rb_id_table_iterator_result
free_const_entry_i(VALUE value, void *data)
{
    rb_const_entry_t *ce = (rb_const_entry_t *)value;
    ruby_xfree(ce);
    return ID_TABLE_CONTINUE;
}

void
rb_free_const_table(struct rb_id_table *tbl)
{
    rb_id_table_foreach_values(tbl, free_const_entry_i, 0);
    rb_id_table_free(tbl);
}

static inline void
make_zombie(rb_objspace_t *objspace, VALUE obj, void (*dfree)(void *), void *data)
{
    struct RZombie *zombie = ((struct RZombie *)(obj));
    zombie->basic.flags = RUBY_T_ZOMBIE;
    zombie->dfree = dfree;
    zombie->data = data;
    zombie->next = objspace->heap_pages.deferred_final;
    objspace->heap_pages.deferred_final = (VALUE)zombie;
}

static inline void
make_io_zombie(rb_objspace_t *objspace, VALUE obj)
{
    rb_io_t *fptr = ((RVALUE*)(obj))->as.file.fptr;
    make_zombie(objspace, obj, (void (*)(void*))rb_io_fptr_finalize, fptr);
}

static int
obj_free(rb_objspace_t *objspace, VALUE obj)
{
    ((void)0);

    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x200000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x200000), (obj)); } } while (0);

    switch ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK)) {
      case RUBY_T_NIL:
      case RUBY_T_FIXNUM:
      case RUBY_T_TRUE:
      case RUBY_T_FALSE:
 rb_bug("obj_free() called for broken object");
 break;
    }

    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_EXIVAR)))):0)) {
 rb_free_generic_ivar((VALUE)obj);
 ((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(obj))->flags &= ~(VALUE)(((VALUE)RUBY_FL_EXIVAR))) : (void)0);
    }


    if (RVALUE_WB_UNPROTECTED(obj)) (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    switch ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK)) {
      case RUBY_T_OBJECT:
 if (!(((RVALUE*)(obj))->as.basic.flags & ROBJECT_EMBED) &&
            ((RVALUE*)(obj))->as.object.as.heap.ivptr) {
     ruby_xfree(((RVALUE*)(obj))->as.object.as.heap.ivptr);
     ((void)0);
 }
 else {
     ((void)0);
 }
 break;
      case RUBY_T_MODULE:
      case RUBY_T_CLASS:
 rb_id_table_free((((struct RClass*)(obj))->m_tbl));
 if (((((struct RClass*)(obj))->ptr)->iv_tbl)) {
     st_free_table(((((struct RClass*)(obj))->ptr)->iv_tbl));
 }
 if (((((struct RClass*)(obj))->ptr)->const_tbl)) {
     rb_free_const_table(((((struct RClass*)(obj))->ptr)->const_tbl));
 }
 if (((((struct RClass*)(obj))->ptr)->iv_index_tbl)) {
     st_free_table(((((struct RClass*)(obj))->ptr)->iv_index_tbl));
 }
 if ((((struct RClass*)(obj))->ptr)->subclasses) {
     if ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_MODULE) {
  rb_class_detach_module_subclasses(obj);
     }
     else {
  rb_class_detach_subclasses(obj);
     }
     (((struct RClass*)(obj))->ptr)->subclasses = ((void*)0);
 }
 rb_class_remove_from_module_subclasses(obj);
 rb_class_remove_from_super_subclasses(obj);
 if (((RVALUE*)(obj))->as.klass.ptr)
     ruby_xfree(((RVALUE*)(obj))->as.klass.ptr);
 ((RVALUE*)(obj))->as.klass.ptr = ((void*)0);
 break;
      case RUBY_T_STRING:
 rb_str_free(obj);
 break;
      case RUBY_T_ARRAY:
 rb_ary_free(obj);
 break;
      case RUBY_T_HASH:
 if (((RVALUE*)(obj))->as.hash.ntbl) {
     st_free_table(((RVALUE*)(obj))->as.hash.ntbl);
 }
 break;
      case RUBY_T_REGEXP:
 if (((RVALUE*)(obj))->as.regexp.ptr) {
     onig_free(((RVALUE*)(obj))->as.regexp.ptr);
 }
 break;
      case RUBY_T_DATA:
 if ((((struct RData*)(obj))->data)) {
     int free_immediately = FALSE;
     void (*dfree)(void *);
     void *data = (((struct RData*)(obj))->data);

     if ((((struct RTypedData*)(obj))->typed_flag == 1)) {
  free_immediately = (((RVALUE*)(obj))->as.typeddata.type->flags & 1) != 0;
  dfree = ((RVALUE*)(obj))->as.typeddata.type->function.dfree;
  if (0 && free_immediately == 0) {

      fprintf(stderr, "not immediate -> %s\n", ((RVALUE*)(obj))->as.typeddata.type->wrap_struct_name);
  }
     }
     else {
  dfree = ((RVALUE*)(obj))->as.data.dfree;
     }

     if (dfree) {
  if (dfree == ((RUBY_DATA_FUNC)-1)) {
      ruby_xfree(data);
  }
  else if (free_immediately) {
      (*dfree)(data);
  }
  else {
      make_zombie(objspace, obj, dfree, data);
      return 1;
  }
     }
 }
 break;
      case RUBY_T_MATCH:
 if (((RVALUE*)(obj))->as.match.rmatch) {
            struct rmatch *rm = ((RVALUE*)(obj))->as.match.rmatch;
     onig_region_free(&rm->regs, 0);
            if (rm->char_offset)
  ruby_xfree(rm->char_offset);
     ruby_xfree(rm);
 }
 break;
      case RUBY_T_FILE:
 if (((RVALUE*)(obj))->as.file.fptr) {
     make_io_zombie(objspace, obj);
     return 1;
 }
 break;
      case RUBY_T_RATIONAL:
      case RUBY_T_COMPLEX:
 break;
      case RUBY_T_ICLASS:

 if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_USER5)))):0)) {
     rb_id_table_free((((struct RClass*)(obj))->m_tbl));
 }
 if (((((struct RClass*)(obj))->ptr)->callable_m_tbl) != ((void*)0)) {
     rb_id_table_free(((((struct RClass*)(obj))->ptr)->callable_m_tbl));
 }
 if ((((struct RClass*)(obj))->ptr)->subclasses) {
     rb_class_detach_subclasses(obj);
     (((struct RClass*)(obj))->ptr)->subclasses = ((void*)0);
 }
 rb_class_remove_from_module_subclasses(obj);
 rb_class_remove_from_super_subclasses(obj);
 ruby_xfree(((RVALUE*)(obj))->as.klass.ptr);
 ((RVALUE*)(obj))->as.klass.ptr = ((void*)0);
 break;

      case RUBY_T_FLOAT:
 break;

      case RUBY_T_BIGNUM:
 if (!(((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) && ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? ((struct RBignum*)(obj))->as.ary : ((struct RBignum*)(obj))->as.heap.digits)) {
     ruby_xfree(((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? ((struct RBignum*)(obj))->as.ary : ((struct RBignum*)(obj))->as.heap.digits));
 }
 break;

      case RUBY_T_NODE:
 rb_bug("obj_free(): GC does not handle T_NODE 0x%x(%p) 0x%lx", (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)(obj), ((struct RBasic*)(obj))->flags);
 break;

      case RUBY_T_STRUCT:
 if ((((struct RBasic*)(obj))->flags & RSTRUCT_EMBED_LEN_MASK) == 0 &&
     ((RVALUE*)(obj))->as.rstruct.as.heap.ptr) {
     ruby_xfree((void *)((RVALUE*)(obj))->as.rstruct.as.heap.ptr);
 }
 break;

      case RUBY_T_SYMBOL:
 {
            rb_gc_free_dsymbol(obj);
 }
 break;

      case RUBY_T_IMEMO:
 switch (imemo_type(obj)) {
   case imemo_ment:
     rb_free_method_entry(&((RVALUE*)(obj))->as.imemo.ment);
     break;
   case imemo_iseq:
     rb_iseq_free(&((RVALUE*)(obj))->as.imemo.iseq);
     break;
   case imemo_env:
     ((void)0);
     ruby_xfree((VALUE *)((RVALUE*)(obj))->as.imemo.env.env);
     break;
   case imemo_alloc:
     ruby_xfree(((RVALUE*)(obj))->as.imemo.alloc.ptr);
     break;
   case imemo_ast:
     rb_ast_free(&((RVALUE*)(obj))->as.imemo.ast);
     break;
   default:
     break;
 }
 return 0;

      default:
 rb_bug("gc_sweep(): unknown data type 0x%x(%p) 0x%lx",
        (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)obj, ((struct RBasic*)(obj))->flags);
    }

    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_FINALIZE)))):0)) {
 make_zombie(objspace, obj, 0, 0);
 return 1;
    }
    else {
 return 0;
    }
}

void
Init_heap(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    gc_stress_set(objspace, gc_params.gc_stress);


    objspace->rgengc.oldmalloc_increase_limit = gc_params.oldmalloc_limit_min;


    heap_add_pages(objspace, (&objspace->eden_heap), gc_params.heap_init_slots / HEAP_PAGE_OBJ_LIMIT);
    init_mark_stack(&objspace->mark_stack);


    {

 rb_thread_t *th = rb_current_thread();
 void *tmp = th->altstack;
 th->altstack = malloc(rb_sigaltstack_size());
 free(tmp);
    }


    objspace->profile.invoke_time = getrusage_time();
    objspace->finalizer_table = st_init_numtable();
}

typedef int each_obj_callback(void *, void *, size_t, void *);

struct each_obj_args {
    each_obj_callback *callback;
    void *data;
};

static VALUE
objspace_each_objects(VALUE arg)
{
    size_t i;
    struct heap_page *page;
    RVALUE *pstart = ((void*)0), *pend;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    struct each_obj_args *args = (struct each_obj_args *)arg;

    i = 0;
    while (i < objspace->heap_pages.allocated_pages) {
 while (0 < i && pstart < objspace->heap_pages.sorted[i-1]->start) i--;
 while (i < objspace->heap_pages.allocated_pages && objspace->heap_pages.sorted[i]->start <= pstart) i++;
 if (objspace->heap_pages.allocated_pages <= i) break;

 page = objspace->heap_pages.sorted[i];

 pstart = page->start;
 pend = pstart + page->total_slots;

 if ((*args->callback)(pstart, pend, sizeof(RVALUE), args->data)) {
     break;
 }
    }

    return ((VALUE)RUBY_Qnil);
}

static VALUE
incremental_enable(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    objspace->flags.dont_incremental = FALSE;
    return ((VALUE)RUBY_Qnil);
}
void
rb_objspace_each_objects(each_obj_callback *callback, void *data)
{
    struct each_obj_args args;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    int prev_dont_incremental = objspace->flags.dont_incremental;

    gc_rest(objspace);
    objspace->flags.dont_incremental = TRUE;

    args.callback = callback;
    args.data = data;

    if (prev_dont_incremental) {
 objspace_each_objects((VALUE)&args);
    }
    else {
 rb_ensure(objspace_each_objects, (VALUE)&args, incremental_enable, ((VALUE)RUBY_Qnil));
    }
}

void
rb_objspace_each_objects_without_setup(each_obj_callback *callback, void *data)
{
    struct each_obj_args args;
    args.callback = callback;
    args.data = data;

    objspace_each_objects((VALUE)&args);
}

struct os_each_struct {
    size_t num;
    VALUE of;
};

static int
internal_object_p(VALUE obj)
{
    RVALUE *p = (RVALUE *)obj;

    if (p->as.basic.flags) {
 switch ((int)(((struct RBasic*)(p))->flags & RUBY_T_MASK)) {
   case RUBY_T_NODE:
     rb_bug("internal_object_p(): GC does not handle T_NODE 0x%x(%p) 0x%lx", (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)(obj), ((struct RBasic*)(obj))->flags);
     break;
   case RUBY_T_NONE:
   case RUBY_T_IMEMO:
   case RUBY_T_ICLASS:
   case RUBY_T_ZOMBIE:
     break;
   case RUBY_T_CLASS:
     if (!p->as.basic.klass) break;
     if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_SINGLETON)))):0)) {
  return rb_singleton_class_internal_p(obj);
     }
     return 0;
   default:
     if (!p->as.basic.klass) break;
     return 0;
 }
    }
    return 1;
}

int
rb_objspace_internal_object_p(VALUE obj)
{
    return internal_object_p(obj);
}

static int
os_obj_of_i(void *vstart, void *vend, size_t stride, void *data)
{
    struct os_each_struct *oes = (struct os_each_struct *)data;
    RVALUE *p = (RVALUE *)vstart, *pend = (RVALUE *)vend;

    for (; p != pend; p++) {
 volatile VALUE v = (VALUE)p;
 if (!internal_object_p(v)) {
     if (!oes->of || rb_obj_is_kind_of(v, oes->of)) {
  rb_yield(v);
  oes->num++;
     }
 }
    }

    return 0;
}

static VALUE
os_obj_of(VALUE of)
{
    struct os_each_struct oes;

    oes.num = 0;
    oes.of = of;
    rb_objspace_each_objects(os_obj_of_i, &oes);
    return rb_ulong2num_inline(oes.num);
}
static VALUE
os_each_obj(int argc, VALUE *argv, VALUE os)
{
    VALUE of;

    if (argc == 0) {
 of = 0;
    }
    else {
 rb_scan_args(argc, argv, "01", &of);
    }
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((os), (rb_id2sym(rb_frame_this_func())), (1), (&of), (rb_enumerator_size_func *)((0))); } while (0);
    return os_obj_of(of);
}
static VALUE
undefine_final(VALUE os, VALUE obj)
{
    return rb_undefine_finalizer(obj);
}

VALUE
rb_undefine_finalizer(VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    st_data_t data = obj;
    ({do { VALUE frozen_obj = (obj); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
    st_delete(objspace->finalizer_table, &data, 0);
    ((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(obj))->flags &= ~(VALUE)(((VALUE)RUBY_FL_FINALIZE))) : (void)0);
    return obj;
}

static void
should_be_callable(VALUE block)
{
    if (!rb_obj_respond_to(block, (__builtin_constant_p("call") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("call")), (long)strlen(("call"))); (ID) rb_intern_id_cache; }) : rb_intern("call")), TRUE)) {
 rb_raise(rb_eArgError, "wrong type argument %li\v (should be callable)",
   rb_obj_class(block));
    }
}
static void
should_be_finalizable(VALUE obj)
{
    if (!(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)) {
 rb_raise(rb_eArgError, "cannot define finalizer for %s",
   rb_obj_classname(obj));
    }
    ({do { VALUE frozen_obj = (obj); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
}
static VALUE
define_final(int argc, VALUE *argv, VALUE os)
{
    VALUE obj, block;

    rb_scan_args(argc, argv, "11", &obj, &block);
    should_be_finalizable(obj);
    if (argc == 1) {
 block = rb_block_proc();
    }
    else {
 should_be_callable(block);
    }

    return define_final0(obj, block);
}

static VALUE
define_final0(VALUE obj, VALUE block)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE table;
    st_data_t data;

    ((struct RBasic*)(obj))->flags |= ((VALUE)RUBY_FL_FINALIZE);

    block =  ({ const VALUE args_to_new_ary[] = {(((VALUE)(rb_safe_level()))<<1 | RUBY_FIXNUM_FLAG), block}; if (__builtin_constant_p(2)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (2)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
    rb_obj_freeze_inline((VALUE)block);

    if (st_lookup(objspace->finalizer_table, obj, &data)) {
 table = (VALUE)data;


 {
     const VALUE *ptr = rb_array_const_ptr(table);
     long len = rb_array_len(table);
     long i;

     for (i = 0; i < len; i++, ptr++) {
  if (rb_funcall(*ptr, idEq, 1, block)) {
      return *ptr;
  }
     }
 }

 rb_ary_push(table, block);
    }
    else {
 table =  ({ const VALUE args_to_new_ary[] = {block}; if (__builtin_constant_p(1)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (1)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
 memset(&(((struct RBasicRaw *)((VALUE)(table)))->klass), 0, sizeof(VALUE));
 st_add_direct(objspace->finalizer_table, obj, table);
    }
    return block;
}

VALUE
rb_define_finalizer(VALUE obj, VALUE block)
{
    should_be_finalizable(obj);
    should_be_callable(block);
    return define_final0(obj, block);
}

void
rb_gc_copy_finalizer(VALUE dest, VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE table;
    st_data_t data;

    if (!((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_FINALIZE)))):0)) return;
    if (st_lookup(objspace->finalizer_table, obj, &data)) {
 table = (VALUE)data;
 st_insert(objspace->finalizer_table, dest, table);
    }
    ((!(((VALUE)(dest) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dest) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dest))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(dest))->flags |= (((VALUE)RUBY_FL_FINALIZE))) : (void)0);
}

static VALUE
run_single_final(VALUE final, VALUE objid)
{
    const VALUE cmd = (rb_array_const_ptr(final)[1]);
    const int level = (!!((!(((VALUE)((cmd)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((cmd)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((cmd)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((cmd))))->flags&((RUBY_FL_TAINT))):0)) ?
 1 : ((int)rb_fix2int((VALUE)((rb_array_const_ptr(final)[0]))));

    rb_set_safe_level_force(level);
    return rb_check_funcall(cmd, idCall, 1, &objid);
}

static void
run_finalizer(rb_objspace_t *objspace, VALUE obj, VALUE table)
{
    long i;
    enum ruby_tag_type state;
    volatile struct {
 VALUE errinfo;
 VALUE objid;
 rb_control_frame_t *cfp;
 long finished;
 int safe;
    } saved;
    rb_execution_context_t * volatile ec = rb_current_execution_context();





    saved.safe = rb_safe_level();
    saved.errinfo = rb_errinfo();
    saved.objid = (VALUE)((long)(obj)|RUBY_FIXNUM_FLAG);
    saved.cfp = ec->cfp;
    saved.finished = 0;

    do { rb_execution_context_t * const _ec = (ec); struct rb_vm_tag _tag; _tag.state = RUBY_TAG_NONE; _tag.tag = ((VALUE)RUBY_Qundef); _tag.prev = _ec->tag;;
    state = (__builtin_setjmp((_tag.buf)) ? rb_ec_tag_state((*(int volatile *)&(_ec))) : ((void)(_ec->tag = &_tag), 0));
    if (state != RUBY_TAG_NONE) {
 ++saved.finished;
    }
    for (i = saved.finished;
  ( ec->cfp = saved.cfp, rb_set_safe_level_force(saved.safe), rb_set_errinfo(saved.errinfo)), i<rb_array_len(table);
  saved.finished = ++i) {
 run_single_final((rb_array_const_ptr(table)[i]), saved.objid);
    }
    _ec->tag = _tag.prev; } while (0);

}

static void
run_final(rb_objspace_t *objspace, VALUE zombie)
{
    st_data_t key, table;

    if (((struct RZombie *)(zombie))->dfree) {
 ((struct RZombie *)(zombie))->dfree(((struct RZombie *)(zombie))->data);
    }

    key = (st_data_t)zombie;
    if (st_delete(objspace->finalizer_table, &key, &table)) {
 run_finalizer(objspace, zombie, (VALUE)table);
    }
}

static void
finalize_list(rb_objspace_t *objspace, VALUE zombie)
{
    while (zombie) {
 VALUE next_zombie = ((struct RZombie *)(zombie))->next;
 struct heap_page *page = ((&((struct heap_page_body *)((bits_t)(zombie) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page);

 run_final(objspace, zombie);

 ((struct RZombie *)(zombie))->basic.flags = 0;
 objspace->heap_pages.final_slots--;
 page->final_slots--;
 page->free_slots++;
 heap_page_add_freeobj(objspace, ((&((struct heap_page_body *)((bits_t)(zombie) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page), zombie);

 objspace->profile.total_freed_objects++;

 zombie = next_zombie;
    }
}

static void
finalize_deferred(rb_objspace_t *objspace)
{
    VALUE zombie;

    while ((zombie = __atomic_exchange_n(&(objspace->heap_pages.deferred_final), (0), 5)) != 0) {
 finalize_list(objspace, zombie);
    }
}

static void
gc_finalize_deferred(void *dmy)
{
    rb_objspace_t *objspace = dmy;
    if (__atomic_exchange_n(&(objspace->atomic_flags.finalizing), (1), 5)) return;
    finalize_deferred(objspace);
    (void)__atomic_exchange_n(&(objspace->atomic_flags.finalizing), (0), 5);
}


void
rb_gc_finalize_deferred(void)
{
    gc_finalize_deferred(0);
}

static void
gc_finalize_deferred_register(rb_objspace_t *objspace)
{
    if (rb_postponed_job_register_one(0, gc_finalize_deferred, objspace) == 0) {
 rb_bug("gc_finalize_deferred_register: can't register finalizer.");
    }
}

struct force_finalize_list {
    VALUE obj;
    VALUE table;
    struct force_finalize_list *next;
};

static int
force_chain_object(st_data_t key, st_data_t val, st_data_t arg)
{
    struct force_finalize_list **prev = (struct force_finalize_list **)arg;
    struct force_finalize_list *curr = ((struct force_finalize_list*)ruby_xmalloc(sizeof(struct force_finalize_list)));
    curr->obj = key;
    curr->table = val;
    curr->next = *prev;
    *prev = curr;
    return ST_CONTINUE;
}

void
rb_gc_call_finalizer_at_exit(void)
{



    rb_objspace_call_finalizer(&(*((rb_current_vm())->objspace)));
}

static void
rb_objspace_call_finalizer(rb_objspace_t *objspace)
{
    RVALUE *p, *pend;
    size_t i;

    gc_rest(objspace);

    if (__atomic_exchange_n(&(objspace->atomic_flags.finalizing), (1), 5)) return;


    finalize_deferred(objspace);
    ((void)0);

    gc_rest(objspace);

    objspace->flags.dont_incremental = 1;


    while (objspace->finalizer_table->num_entries) {
 struct force_finalize_list *list = 0;
 st_foreach(objspace->finalizer_table, force_chain_object, (st_data_t)&list);
 while (list) {
     struct force_finalize_list *curr = list;
     st_data_t obj = (st_data_t)curr->obj;
     run_finalizer(objspace, curr->obj, curr->table);
     st_delete(objspace->finalizer_table, &obj, 0);
     list = curr->next;
     ruby_xfree(curr);
 }
    }


    objspace->flags.dont_gc = 1;


    gc_enter(objspace, "rb_objspace_call_finalizer");


    for (i = 0; i < objspace->heap_pages.allocated_pages; i++) {
 p = objspace->heap_pages.sorted[i]->start; pend = p + objspace->heap_pages.sorted[i]->total_slots;
 while (p < pend) {
     switch ((int)(((struct RBasic*)(p))->flags & RUBY_T_MASK)) {
       case RUBY_T_DATA:
  if (!(((struct RData*)(p))->data) || !((RVALUE*)(p))->as.data.dfree) break;
  if (rb_obj_is_thread((VALUE)p)) break;
  if (rb_obj_is_mutex((VALUE)p)) break;
  if (rb_obj_is_fiber((VALUE)p)) break;
  p->as.free.flags = 0;
  if ((((struct RTypedData*)(p))->typed_flag == 1)) {
      ((struct RData*)(p))->dfree = ((RVALUE*)(p))->as.typeddata.type->function.dfree;
  }
  if (((RVALUE*)(p))->as.data.dfree == (RUBY_DATA_FUNC)-1) {
      ruby_xfree((((struct RData*)(p))->data));
  }
  else if (((RVALUE*)(p))->as.data.dfree) {
      make_zombie(objspace, (VALUE)p, ((RVALUE*)(p))->as.data.dfree, ((RVALUE*)(p))->as.data.data);
  }
  break;
       case RUBY_T_FILE:
  if (((RVALUE*)(p))->as.file.fptr) {
      make_io_zombie(objspace, (VALUE)p);
  }
  break;
     }
     p++;
 }
    }

    gc_exit(objspace, "rb_objspace_call_finalizer");

    if (objspace->heap_pages.deferred_final) {
 finalize_list(objspace, objspace->heap_pages.deferred_final);
    }

    st_free_table(objspace->finalizer_table);
    objspace->finalizer_table = 0;
    (void)__atomic_exchange_n(&(objspace->atomic_flags.finalizing), (0), 5);
}

 static inline int is_id_value(rb_objspace_t *objspace, VALUE ptr);
static inline int
is_id_value(rb_objspace_t *objspace, VALUE ptr)
{
    if (!is_pointer_to_heap(objspace, (void *)ptr)) return FALSE;
    if ((int)(((struct RBasic*)(ptr))->flags & RUBY_T_MASK) > RUBY_T_FIXNUM) return FALSE;
    if ((int)(((struct RBasic*)(ptr))->flags & RUBY_T_MASK) == RUBY_T_ICLASS) return FALSE;
    return TRUE;
}

static inline int
heap_is_swept_object(rb_objspace_t *objspace, rb_heap_t *heap, VALUE ptr)
{
    struct heap_page *page = ((&((struct heap_page_body *)((bits_t)(ptr) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page);
    return page->flags.before_sweep ? FALSE : TRUE;
}

static inline int
is_swept_object(rb_objspace_t *objspace, VALUE ptr)
{
    if (heap_is_swept_object(objspace, (&objspace->eden_heap), ptr)) {
 return TRUE;
    }
    else {
 return FALSE;
    }
}


static inline int
is_garbage_object(rb_objspace_t *objspace, VALUE ptr)
{
    if (!(1 && (((&objspace->eden_heap))->sweep_pages != 0)) ||
 is_swept_object(objspace, ptr) ||
 (((&((&((struct heap_page_body *)((bits_t)(ptr) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(ptr) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(ptr) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {

 return FALSE;
    }
    else {
 return TRUE;
    }
}

static inline int
is_live_object(rb_objspace_t *objspace, VALUE ptr)
{
    switch ((int)(((struct RBasic*)(ptr))->flags & RUBY_T_MASK)) {
      case RUBY_T_NONE:
      case RUBY_T_ZOMBIE:
 return FALSE;
    }

    if (!is_garbage_object(objspace, ptr)) {
 return TRUE;
    }
    else {
 return FALSE;
    }
}

static inline int
is_markable_object(rb_objspace_t *objspace, VALUE obj)
{
    if ( ({ VALUE special_const_obj = (obj); (int)((((VALUE)(special_const_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(special_const_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)); })) return FALSE;
    check_rvalue_consistency(obj);
    return TRUE;
}

int
rb_objspace_markable_object_p(VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return is_markable_object(objspace, obj) && is_live_object(objspace, obj);
}

int
rb_objspace_garbage_object_p(VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return is_garbage_object(objspace, obj);
}
static VALUE
id2ref(VALUE obj, VALUE objid)
{





    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE ptr;
    void *p0;

    ptr = rb_num2ulong_inline(objid);
    p0 = (void *)ptr;

    if (ptr == ((VALUE)RUBY_Qtrue)) return ((VALUE)RUBY_Qtrue);
    if (ptr == ((VALUE)RUBY_Qfalse)) return ((VALUE)RUBY_Qfalse);
    if (ptr == ((VALUE)RUBY_Qnil)) return ((VALUE)RUBY_Qnil);
    if ((((int)(long)(ptr))&RUBY_FIXNUM_FLAG)) return (VALUE)ptr;
    if (((((int)(long)(ptr))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) return (VALUE)ptr;
    ptr = ((objid) ^ RUBY_FIXNUM_FLAG);

    if ((ptr % sizeof(RVALUE)) == (4 << 2)) {
        ID symid = ptr / sizeof(RVALUE);
        if (rb_id2str(symid) == 0)
     rb_raise(rb_eRangeError, "%p is not symbol id value", p0);
 return (rb_id2sym(symid));
    }

    if (!is_id_value(objspace, ptr)) {
 rb_raise(rb_eRangeError, "%p is not id value", p0);
    }
    if (!is_live_object(objspace, ptr)) {
 rb_raise(rb_eRangeError, "%p is recycled object", p0);
    }
    if (((struct RBasic*)(ptr))->klass == 0) {
 rb_raise(rb_eRangeError, "%p is internal object", p0);
    }
    return (VALUE)ptr;
}
VALUE
rb_obj_id(VALUE obj)
{
    if ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) {
        return ((rb_sym2id(obj)) * sizeof(RVALUE) + (4 << 2)) | RUBY_FIXNUM_FLAG;
    }
    else if (((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) {

 return rb_long2num_inline((long)obj);



    }
    else if ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return rb_long2num_inline((long)obj);
    }
    return (VALUE)((long)(obj)|RUBY_FIXNUM_FLAG);
}


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

extern int onig_compile_ruby(regex_t* reg, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigErrorInfo* einfo, const char *sourcefile, int sourceline);

extern void onig_transfer(regex_t* to, regex_t* from);
extern int onig_is_code_in_cc(OnigEncoding enc, OnigCodePoint code, CClassNode* cc);
extern int onig_is_code_in_cc_len(int enclen, OnigCodePoint code, CClassNode* cc);


typedef void hash_table_type;





typedef st_data_t hash_data_type;

extern hash_table_type* onig_st_init_strend_table_with_size(st_index_t size);
extern int onig_st_lookup_strend(hash_table_type* table, const OnigUChar* str_key, const OnigUChar* end_key, hash_data_type *value);
extern int onig_st_insert_strend(hash_table_type* table, const OnigUChar* str_key, const OnigUChar* end_key, hash_data_type value);


extern size_t onig_memsize(const regex_t *reg);
extern size_t onig_region_memsize(const struct re_registers *regs);



static size_t
obj_memsize_of(VALUE obj, int use_all_types)
{
    size_t size = 0;

    if ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 return 0;
    }

    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_EXIVAR)))):0)) {
 size += rb_generic_ivar_memsize(obj);
    }

    switch ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK)) {
      case RUBY_T_OBJECT:
 if (!(((struct RBasic*)(obj))->flags & ROBJECT_EMBED) &&
     ((struct RObject*)(obj))->as.heap.ivptr) {
     size += ((struct RObject*)(obj))->as.heap.numiv * sizeof(VALUE);
 }
 break;
      case RUBY_T_MODULE:
      case RUBY_T_CLASS:
 if ((((struct RClass*)(obj))->m_tbl)) {
     size += rb_id_table_memsize((((struct RClass*)(obj))->m_tbl));
 }
 if ((((struct RClass*)(obj))->ptr)) {
     if (((((struct RClass*)(obj))->ptr)->iv_tbl)) {
  size += st_memsize(((((struct RClass*)(obj))->ptr)->iv_tbl));
     }
     if (((((struct RClass*)(obj))->ptr)->iv_index_tbl)) {
  size += st_memsize(((((struct RClass*)(obj))->ptr)->iv_index_tbl));
     }
     if (((struct RClass*)(obj))->ptr->iv_tbl) {
  size += st_memsize(((struct RClass*)(obj))->ptr->iv_tbl);
     }
     if (((struct RClass*)(obj))->ptr->const_tbl) {
  size += rb_id_table_memsize(((struct RClass*)(obj))->ptr->const_tbl);
     }
     size += sizeof(rb_classext_t);
 }
 break;
      case RUBY_T_ICLASS:
 if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_USER5)))):0)) {
     if ((((struct RClass*)(obj))->m_tbl)) {
  size += rb_id_table_memsize((((struct RClass*)(obj))->m_tbl));
     }
 }
 break;
      case RUBY_T_STRING:
 size += rb_str_memsize(obj);
 break;
      case RUBY_T_ARRAY:
 size += rb_ary_memsize(obj);
 break;
      case RUBY_T_HASH:
 if (((struct RHash*)(obj))->ntbl) {
     size += st_memsize(((struct RHash*)(obj))->ntbl);
 }
 break;
      case RUBY_T_REGEXP:
 if ((((struct RRegexp*)(obj))->ptr)) {
     size += onig_memsize((((struct RRegexp*)(obj))->ptr));
 }
 break;
      case RUBY_T_DATA:
 if (use_all_types) size += rb_objspace_data_type_memsize(obj);
 break;
      case RUBY_T_MATCH:
 if (((struct RMatch*)(obj))->rmatch) {
            struct rmatch *rm = ((struct RMatch*)(obj))->rmatch;
     size += onig_region_memsize(&rm->regs);
     size += sizeof(struct rmatch_offset) * rm->char_offset_num_allocated;
     size += sizeof(struct rmatch);
 }
 break;
      case RUBY_T_FILE:
 if (((struct RFile*)(obj))->fptr) {
     size += rb_io_memsize(((struct RFile*)(obj))->fptr);
 }
 break;
      case RUBY_T_RATIONAL:
      case RUBY_T_COMPLEX:
      case RUBY_T_IMEMO:
 if (imemo_type_p(obj, imemo_alloc)) {
     size += ((RVALUE*)(obj))->as.imemo.alloc.cnt * sizeof(VALUE);
 }
 break;

      case RUBY_T_FLOAT:
      case RUBY_T_SYMBOL:
 break;

      case RUBY_T_BIGNUM:
 if (!(((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) && ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? ((struct RBignum*)(obj))->as.ary : ((struct RBignum*)(obj))->as.heap.digits)) {
     size += ((((struct RBasic*)(obj))->flags & ((VALUE)((VALUE)RUBY_FL_USER2))) ? (size_t)((((struct RBasic*)(obj))->flags >> (((VALUE)RUBY_FL_USHIFT)+3)) & (((VALUE)(((VALUE)RUBY_FL_USER5)|((VALUE)RUBY_FL_USER4)|((VALUE)RUBY_FL_USER3))) >> (((VALUE)RUBY_FL_USHIFT)+3))) : ((struct RBignum*)(obj))->as.heap.len) * sizeof(unsigned int);
 }
 break;

      case RUBY_T_NODE:
 rb_bug("obj_memsize_of(): GC does not handle T_NODE 0x%x(%p) 0x%lx", (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)(obj), ((struct RBasic*)(obj))->flags);
 break;

      case RUBY_T_STRUCT:
 if ((((struct RBasic*)(obj))->flags & RSTRUCT_EMBED_LEN_MASK) == 0 &&
     ((struct RStruct*)(obj))->as.heap.ptr) {
     size += sizeof(VALUE) * rb_struct_len(obj);
 }
 break;

      case RUBY_T_ZOMBIE:
 break;

      default:
 rb_bug("objspace/memsize_of(): unknown data type 0x%x(%p)",
        (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)obj);
    }

    return size + sizeof(RVALUE);
}

size_t
rb_obj_memsize_of(VALUE obj)
{
    return obj_memsize_of(obj, 1);
}

static int
set_zero(st_data_t key, st_data_t val, st_data_t arg)
{
    VALUE k = (VALUE)key;
    VALUE hash = (VALUE)arg;
    rb_hash_aset(hash, k, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    return ST_CONTINUE;
}
static VALUE
count_objects(int argc, VALUE *argv, VALUE os)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    size_t counts[RUBY_T_MASK+1];
    size_t freed = 0;
    size_t total = 0;
    size_t i;
    VALUE hash;

    if (rb_scan_args(argc, argv, "01", &hash) == 1) {
        if (!( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(hash))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((hash) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((hash) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((hash) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((hash) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(hash)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(hash))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == (RUBY_T_HASH))))
            rb_raise(rb_eTypeError, "non-hash given");
    }

    for (i = 0; i <= RUBY_T_MASK; i++) {
        counts[i] = 0;
    }

    for (i = 0; i < objspace->heap_pages.allocated_pages; i++) {
 struct heap_page *page = objspace->heap_pages.sorted[i];
 RVALUE *p, *pend;

 p = page->start; pend = p + page->total_slots;
 for (;p < pend; p++) {
     if (p->as.basic.flags) {
  counts[(int)(((struct RBasic*)(p))->flags & RUBY_T_MASK)]++;
     }
     else {
  freed++;
     }
 }
 total += page->total_slots;
    }

    if (hash == ((VALUE)RUBY_Qnil)) {
        hash = rb_hash_new();
    }
    else if (!((((struct RHash*)(hash))->ntbl ? ((struct RHash*)(hash))->ntbl->num_entries : (st_index_t)0) == 0)) {
        st_foreach(rb_hash_tbl_raw(hash), set_zero, hash);
    }
    rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("TOTAL") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("TOTAL")), (long)strlen(("TOTAL"))); (ID) rb_intern_id_cache; }) : rb_intern("TOTAL")))), rb_ulong2num_inline(total));
    rb_hash_aset(hash, (rb_id2sym((__builtin_constant_p("FREE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("FREE")), (long)strlen(("FREE"))); (ID) rb_intern_id_cache; }) : rb_intern("FREE")))), rb_ulong2num_inline(freed));

    for (i = 0; i <= RUBY_T_MASK; i++) {
        VALUE type;
        switch (i) {

     case (RUBY_T_NONE): type = (rb_id2sym((__builtin_constant_p("T_NONE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_NONE")), (long)strlen(("T_NONE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_NONE")))); break;;
     case (RUBY_T_OBJECT): type = (rb_id2sym((__builtin_constant_p("T_OBJECT") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_OBJECT")), (long)strlen(("T_OBJECT"))); (ID) rb_intern_id_cache; }) : rb_intern("T_OBJECT")))); break;;
     case (RUBY_T_CLASS): type = (rb_id2sym((__builtin_constant_p("T_CLASS") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_CLASS")), (long)strlen(("T_CLASS"))); (ID) rb_intern_id_cache; }) : rb_intern("T_CLASS")))); break;;
     case (RUBY_T_MODULE): type = (rb_id2sym((__builtin_constant_p("T_MODULE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_MODULE")), (long)strlen(("T_MODULE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_MODULE")))); break;;
     case (RUBY_T_FLOAT): type = (rb_id2sym((__builtin_constant_p("T_FLOAT") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_FLOAT")), (long)strlen(("T_FLOAT"))); (ID) rb_intern_id_cache; }) : rb_intern("T_FLOAT")))); break;;
     case (RUBY_T_STRING): type = (rb_id2sym((__builtin_constant_p("T_STRING") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_STRING")), (long)strlen(("T_STRING"))); (ID) rb_intern_id_cache; }) : rb_intern("T_STRING")))); break;;
     case (RUBY_T_REGEXP): type = (rb_id2sym((__builtin_constant_p("T_REGEXP") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_REGEXP")), (long)strlen(("T_REGEXP"))); (ID) rb_intern_id_cache; }) : rb_intern("T_REGEXP")))); break;;
     case (RUBY_T_ARRAY): type = (rb_id2sym((__builtin_constant_p("T_ARRAY") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_ARRAY")), (long)strlen(("T_ARRAY"))); (ID) rb_intern_id_cache; }) : rb_intern("T_ARRAY")))); break;;
     case (RUBY_T_HASH): type = (rb_id2sym((__builtin_constant_p("T_HASH") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_HASH")), (long)strlen(("T_HASH"))); (ID) rb_intern_id_cache; }) : rb_intern("T_HASH")))); break;;
     case (RUBY_T_STRUCT): type = (rb_id2sym((__builtin_constant_p("T_STRUCT") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_STRUCT")), (long)strlen(("T_STRUCT"))); (ID) rb_intern_id_cache; }) : rb_intern("T_STRUCT")))); break;;
     case (RUBY_T_BIGNUM): type = (rb_id2sym((__builtin_constant_p("T_BIGNUM") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_BIGNUM")), (long)strlen(("T_BIGNUM"))); (ID) rb_intern_id_cache; }) : rb_intern("T_BIGNUM")))); break;;
     case (RUBY_T_FILE): type = (rb_id2sym((__builtin_constant_p("T_FILE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_FILE")), (long)strlen(("T_FILE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_FILE")))); break;;
     case (RUBY_T_DATA): type = (rb_id2sym((__builtin_constant_p("T_DATA") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_DATA")), (long)strlen(("T_DATA"))); (ID) rb_intern_id_cache; }) : rb_intern("T_DATA")))); break;;
     case (RUBY_T_MATCH): type = (rb_id2sym((__builtin_constant_p("T_MATCH") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_MATCH")), (long)strlen(("T_MATCH"))); (ID) rb_intern_id_cache; }) : rb_intern("T_MATCH")))); break;;
     case (RUBY_T_COMPLEX): type = (rb_id2sym((__builtin_constant_p("T_COMPLEX") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_COMPLEX")), (long)strlen(("T_COMPLEX"))); (ID) rb_intern_id_cache; }) : rb_intern("T_COMPLEX")))); break;;
     case (RUBY_T_RATIONAL): type = (rb_id2sym((__builtin_constant_p("T_RATIONAL") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_RATIONAL")), (long)strlen(("T_RATIONAL"))); (ID) rb_intern_id_cache; }) : rb_intern("T_RATIONAL")))); break;;
     case (RUBY_T_NIL): type = (rb_id2sym((__builtin_constant_p("T_NIL") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_NIL")), (long)strlen(("T_NIL"))); (ID) rb_intern_id_cache; }) : rb_intern("T_NIL")))); break;;
     case (RUBY_T_TRUE): type = (rb_id2sym((__builtin_constant_p("T_TRUE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_TRUE")), (long)strlen(("T_TRUE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_TRUE")))); break;;
     case (RUBY_T_FALSE): type = (rb_id2sym((__builtin_constant_p("T_FALSE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_FALSE")), (long)strlen(("T_FALSE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_FALSE")))); break;;
     case (RUBY_T_SYMBOL): type = (rb_id2sym((__builtin_constant_p("T_SYMBOL") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_SYMBOL")), (long)strlen(("T_SYMBOL"))); (ID) rb_intern_id_cache; }) : rb_intern("T_SYMBOL")))); break;;
     case (RUBY_T_FIXNUM): type = (rb_id2sym((__builtin_constant_p("T_FIXNUM") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_FIXNUM")), (long)strlen(("T_FIXNUM"))); (ID) rb_intern_id_cache; }) : rb_intern("T_FIXNUM")))); break;;
     case (RUBY_T_IMEMO): type = (rb_id2sym((__builtin_constant_p("T_IMEMO") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_IMEMO")), (long)strlen(("T_IMEMO"))); (ID) rb_intern_id_cache; }) : rb_intern("T_IMEMO")))); break;;
     case (RUBY_T_UNDEF): type = (rb_id2sym((__builtin_constant_p("T_UNDEF") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_UNDEF")), (long)strlen(("T_UNDEF"))); (ID) rb_intern_id_cache; }) : rb_intern("T_UNDEF")))); break;;
     case (RUBY_T_ICLASS): type = (rb_id2sym((__builtin_constant_p("T_ICLASS") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_ICLASS")), (long)strlen(("T_ICLASS"))); (ID) rb_intern_id_cache; }) : rb_intern("T_ICLASS")))); break;;
     case (RUBY_T_ZOMBIE): type = (rb_id2sym((__builtin_constant_p("T_ZOMBIE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("T_ZOMBIE")), (long)strlen(("T_ZOMBIE"))); (ID) rb_intern_id_cache; }) : rb_intern("T_ZOMBIE")))); break;;

          default: type = (((VALUE)((int)(i)))<<1 | RUBY_FIXNUM_FLAG); break;
        }
        if (counts[i])
            rb_hash_aset(hash, type, rb_ulong2num_inline(counts[i]));
    }

    return hash;
}







static size_t
objspace_available_slots(rb_objspace_t *objspace)
{
    return (&objspace->eden_heap)->total_slots + (&objspace->tomb_heap)->total_slots;
}

static size_t
objspace_live_slots(rb_objspace_t *objspace)
{
    return (objspace->total_allocated_objects - objspace->profile.total_freed_objects) - objspace->heap_pages.final_slots;
}

static size_t
objspace_free_slots(rb_objspace_t *objspace)
{
    return objspace_available_slots(objspace) - objspace_live_slots(objspace) - objspace->heap_pages.final_slots;
}

static void
gc_setup_mark_bits(struct heap_page *page)
{


    memcpy(&page->mark_bits[0], &page->uncollectible_bits[0], HEAP_PAGE_BITMAP_SIZE);




}

static inline int
gc_page_sweep(rb_objspace_t *objspace, rb_heap_t *heap, struct heap_page *sweep_page)
{
    int i;
    int empty_slots = 0, freed_slots = 0, final_slots = 0;
    RVALUE *p, *pend,*offset;
    bits_t *bits, bitset;

    if (!((0) >= (2))) {} else gc_report_body(2, objspace, "page_sweep: start.\n");

    sweep_page->flags.before_sweep = 0;

    p = sweep_page->start; pend = p + sweep_page->total_slots;
    offset = p - (((bits_t)(p) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE));
    bits = sweep_page->mark_bits;


    bits[((((bits_t)(p) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] |= ((bits_t)1 << ((((bits_t)(p) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))-1;
    bits[((((bits_t)(pend) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] |= ~(((bits_t)1 << ((((bits_t)(pend) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))) - 1);

    for (i=0; i < HEAP_PAGE_BITMAP_LIMIT; i++) {
 bitset = ~bits[i];
 if (bitset) {
     p = offset + i * BITS_BITLENGTH;
     do {
  if (bitset & 1) {
      switch ((int)(((struct RBasic*)(p))->flags & RUBY_T_MASK)) {
        default: {
     if (!((0) >= (2))) {} else gc_report_body(2, objspace, "page_sweep: free %p\n", (void *)p);






     if (obj_free(objspace, (VALUE)p)) {
         final_slots++;
     }
     else {
         (void)0;
         heap_page_add_freeobj(objspace, sweep_page, (VALUE)p);
         if (!((0) >= (3))) {} else gc_report_body(3, objspace, "page_sweep: %s is added to freelist\n", obj_info((VALUE)p));
         freed_slots++;
     }
     break;
        }


        case RUBY_T_ZOMBIE:

   break;
        case RUBY_T_NONE:
   empty_slots++;
   break;
      }
  }
  p++;
  bitset >>= 1;
     } while (bitset);
 }
    }

    gc_setup_mark_bits(sweep_page);
    if (0) fprintf(stderr, "gc_page_sweep(%d): total_slots: %d, freed_slots: %d, empty_slots: %d, final_slots: %d\n",
     (int)rb_gc_count(),
     (int)sweep_page->total_slots,
     freed_slots, empty_slots, final_slots);

    sweep_page->free_slots = freed_slots + empty_slots;
    objspace->profile.total_freed_objects += freed_slots;
    objspace->heap_pages.final_slots += final_slots;
    sweep_page->final_slots += final_slots;

    if (objspace->heap_pages.deferred_final && !objspace->atomic_flags.finalizing) {
        rb_thread_t *th = rb_current_thread();
        if (th) {
     gc_finalize_deferred_register(objspace);
        }
    }

    if (!((0) >= (2))) {} else gc_report_body(2, objspace, "page_sweep: end.\n");

    return freed_slots + empty_slots;
}


static void
gc_heap_prepare_minimum_pages(rb_objspace_t *objspace, rb_heap_t *heap)
{
    if (!heap->free_pages && heap_increment(objspace, heap) == 0) {

 heap_set_increment(objspace, 1);
 if (!heap_increment(objspace, heap)) {
     rb_memerror();
 }
    }
}

static const char *
gc_mode_name(enum gc_mode mode)
{
    switch (mode) {
      case gc_mode_none: return "none";
      case gc_mode_marking: return "marking";
      case gc_mode_sweeping: return "sweeping";
      default: rb_bug("gc_mode_name: unknown mode: %d", (int)mode);
    }
}

static void
gc_mode_transition(rb_objspace_t *objspace, enum gc_mode mode)
{
    if (0) fprintf(stderr, "gc_mode_transition: %s->%s\n", gc_mode_name(gc_mode_verify((enum gc_mode)(objspace)->flags.mode)), gc_mode_name(mode));
    ((objspace)->flags.mode = (unsigned int)gc_mode_verify(mode));
}

static void
gc_sweep_start_heap(rb_objspace_t *objspace, rb_heap_t *heap)
{
    heap->sweep_pages = heap->pages;
    heap->free_pages = ((void*)0);

    heap->pooled_pages = ((void*)0);
    objspace->rincgc.pooled_slots = 0;

    if (heap->using_page) {
 RVALUE **p = &heap->using_page->freelist;
 while (*p) {
     p = &(*p)->as.free.next;
 }
 *p = heap->freelist;
 heap->using_page = ((void*)0);
    }
    heap->freelist = ((void*)0);
}




static void
gc_sweep_start(rb_objspace_t *objspace)
{
    gc_mode_transition(objspace, gc_mode_sweeping);
    gc_sweep_start_heap(objspace, (&objspace->eden_heap));
}

static void
gc_sweep_finish(rb_objspace_t *objspace)
{
    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_sweep_finish\n");

    gc_prof_set_heap_info(objspace);
    heap_pages_free_unused_pages(objspace);


    if (objspace->heap_pages.allocatable_pages < (&objspace->tomb_heap)->total_pages) {
 heap_allocatable_pages_set(objspace, (&objspace->tomb_heap)->total_pages);
    }

    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x1000000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x1000000), (0)); } } while (0);
    gc_mode_transition(objspace, gc_mode_none);




}

static int
gc_sweep_step(rb_objspace_t *objspace, rb_heap_t *heap)
{
    struct heap_page *sweep_page = heap->sweep_pages;
    int unlink_limit = 3;

    int need_pool = ((objspace)->rgengc.need_major_gc != GPR_FLAG_NONE) ? 1 : 0;

    if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_sweep_step (need_pool: %d)\n", need_pool);




    if (sweep_page == ((void*)0)) return 0;


    gc_prof_sweep_timer_start(objspace);


    while (sweep_page) {
 struct heap_page *next_sweep_page = heap->sweep_pages = sweep_page->next;
 int free_slots = gc_page_sweep(objspace, heap, sweep_page);

 if (sweep_page->final_slots + free_slots == sweep_page->total_slots &&
     objspace->heap_pages.freeable_pages > 0 &&
     unlink_limit > 0) {
     objspace->heap_pages.freeable_pages--;
     unlink_limit--;

     heap_unlink_page(objspace, heap, sweep_page);
     heap_add_page(objspace, (&objspace->tomb_heap), sweep_page);
 }
 else if (free_slots > 0) {

     if (need_pool) {
  if (heap_add_poolpage(objspace, heap, sweep_page)) {
      need_pool = 0;
  }
     }
     else {
  heap_add_freepage(objspace, heap, sweep_page);
  break;
     }




 }
 else {
     sweep_page->free_next = ((void*)0);
 }

 sweep_page = next_sweep_page;
    }

    if (heap->sweep_pages == ((void*)0)) {
 gc_sweep_finish(objspace);
    }


    gc_prof_sweep_timer_stop(objspace);


    return heap->free_pages != ((void*)0);
}

static void
gc_sweep_rest(rb_objspace_t *objspace)
{
    rb_heap_t *heap = (&objspace->eden_heap);

    while (((heap)->sweep_pages != 0)) {
 gc_sweep_step(objspace, heap);
    }
}


static void
gc_sweep_continue(rb_objspace_t *objspace, rb_heap_t *heap)
{
    ((void)0);

    gc_enter(objspace, "sweep_continue");

    if (objspace->rgengc.need_major_gc == GPR_FLAG_NONE && heap_increment(objspace, heap)) {
 if (!((0) >= (3))) {} else gc_report_body(3, objspace, "gc_sweep_continue: success heap_increment().\n");
    }

    gc_sweep_step(objspace, heap);
    gc_exit(objspace, "sweep_continue");
}


static void
gc_sweep(rb_objspace_t *objspace)
{
    const unsigned int immediate_sweep = objspace->flags.immediate_sweep;

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_sweep: immediate: %d\n", immediate_sweep);

    if (immediate_sweep) {



 gc_sweep_start(objspace);
 gc_sweep_rest(objspace);



    }
    else {
 struct heap_page *page;
 gc_sweep_start(objspace);
 page = (&objspace->eden_heap)->sweep_pages;
 while (page) {
     page->flags.before_sweep = 1;
     page = page->next;
 }
 gc_sweep_step(objspace, (&objspace->eden_heap));
    }

    gc_heap_prepare_minimum_pages(objspace, (&objspace->eden_heap));
}



static stack_chunk_t *
stack_chunk_alloc(void)
{
    stack_chunk_t *res;

    res = malloc(sizeof(stack_chunk_t));
    if (!res)
        rb_memerror();

    return res;
}

static inline int
is_mark_stack_empty(mark_stack_t *stack)
{
    return stack->chunk == ((void*)0);
}

static size_t
mark_stack_size(mark_stack_t *stack)
{
    size_t size = stack->index;
    stack_chunk_t *chunk = stack->chunk ? stack->chunk->next : ((void*)0);

    while (chunk) {
 size += stack->limit;
 chunk = chunk->next;
    }
    return size;
}

static void
add_stack_chunk_cache(mark_stack_t *stack, stack_chunk_t *chunk)
{
    chunk->next = stack->cache;
    stack->cache = chunk;
    stack->cache_size++;
}

static void
shrink_stack_chunk_cache(mark_stack_t *stack)
{
    stack_chunk_t *chunk;

    if (stack->unused_cache_size > (stack->cache_size/2)) {
        chunk = stack->cache;
        stack->cache = stack->cache->next;
        stack->cache_size--;
        free(chunk);
    }
    stack->unused_cache_size = stack->cache_size;
}

static void
push_mark_stack_chunk(mark_stack_t *stack)
{
    stack_chunk_t *next;

    ((void)0);

    if (stack->cache_size > 0) {
        next = stack->cache;
        stack->cache = stack->cache->next;
        stack->cache_size--;
        if (stack->unused_cache_size > stack->cache_size)
            stack->unused_cache_size = stack->cache_size;
    }
    else {
        next = stack_chunk_alloc();
    }
    next->next = stack->chunk;
    stack->chunk = next;
    stack->index = 0;
}

static void
pop_mark_stack_chunk(mark_stack_t *stack)
{
    stack_chunk_t *prev;

    prev = stack->chunk->next;
    ((void)0);
    add_stack_chunk_cache(stack, stack->chunk);
    stack->chunk = prev;
    stack->index = stack->limit;
}

static void
free_stack_chunks(mark_stack_t *stack)
{
    stack_chunk_t *chunk = stack->chunk;
    stack_chunk_t *next = ((void*)0);

    while (chunk != ((void*)0)) {
        next = chunk->next;
        free(chunk);
        chunk = next;
    }
}

static void
push_mark_stack(mark_stack_t *stack, VALUE data)
{
    if (stack->index == stack->limit) {
        push_mark_stack_chunk(stack);
    }
    stack->chunk->data[stack->index++] = data;
}

static int
pop_mark_stack(mark_stack_t *stack, VALUE *data)
{
    if (is_mark_stack_empty(stack)) {
        return 0;
    }
    if (stack->index == 1) {
        *data = stack->chunk->data[--stack->index];
        pop_mark_stack_chunk(stack);
    }
    else {
 *data = stack->chunk->data[--stack->index];
    }
    return 1;
}


static int
invalidate_mark_stack_chunk(stack_chunk_t *chunk, int limit, VALUE obj)
{
    int i;
    for (i=0; i<limit; i++) {
 if (chunk->data[i] == obj) {
     chunk->data[i] = ((VALUE)RUBY_Qundef);
     return 1;
 }
    }
    return 0;
}

static void
invalidate_mark_stack(mark_stack_t *stack, VALUE obj)
{
    stack_chunk_t *chunk = stack->chunk;
    int limit = stack->index;

    while (chunk) {
 if (invalidate_mark_stack_chunk(chunk, limit, obj)) return;
 chunk = chunk->next;
 limit = stack->limit;
    }
    rb_bug("invalid_mark_stack: unreachable");
}


static void
init_mark_stack(mark_stack_t *stack)
{
    int i;

    memset((stack), 0, sizeof(mark_stack_t)*(size_t)(1));
    stack->index = stack->limit = 500;
    stack->cache_size = 0;

    for (i=0; i < 4; i++) {
        add_stack_chunk_cache(stack, stack_chunk_alloc());
    }
    stack->unused_cache_size = stack->cache_size;
}
size_t
ruby_stack_length(VALUE **p)
{
    rb_execution_context_t *ec = rb_current_execution_context();
    ;
    if (p) *p = ((ec->machine.stack_end));
    return (size_t)((ec->machine.stack_start) - (ec->machine.stack_end));
}
static int
stack_check(rb_execution_context_t *ec, int water_mark)
{
    int ret;
    ;
    ret = (size_t)((ec->machine.stack_start) - (ec->machine.stack_end)) > (ec->machine.stack_maxsize/sizeof(VALUE)) - water_mark;






    return ret;
}






int
rb_ec_stack_check(rb_execution_context_t *ec)
{
    return stack_check(ec, 838);
}

int
ruby_stack_check(void)
{
    return stack_check(rb_current_execution_context(), 838);
}


static void
mark_locations_array(rb_objspace_t *objspace, register const VALUE *x, register long n)
{
    VALUE v;
    while (n--) {
        v = *x;
 gc_mark_maybe(objspace, v);
 x++;
    }
}

static void
gc_mark_locations(rb_objspace_t *objspace, const VALUE *start, const VALUE *end)
{
    long n;

    if (end <= start) return;
    n = end - start;
    mark_locations_array(objspace, start, n);
}

void
rb_gc_mark_locations(const VALUE *start, const VALUE *end)
{
    gc_mark_locations(&(*((rb_current_vm())->objspace)), start, end);
}

static void
gc_mark_values(rb_objspace_t *objspace, long n, const VALUE *values)
{
    long i;

    for (i=0; i<n; i++) {
 gc_mark(objspace, values[i]);
    }
}

void
rb_gc_mark_values(long n, const VALUE *values)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    gc_mark_values(objspace, n, values);
}

static int
mark_entry(st_data_t key, st_data_t value, st_data_t data)
{
    rb_objspace_t *objspace = (rb_objspace_t *)data;
    gc_mark(objspace, (VALUE)value);
    return ST_CONTINUE;
}

static void
mark_tbl(rb_objspace_t *objspace, st_table *tbl)
{
    if (!tbl || tbl->num_entries == 0) return;
    st_foreach(tbl, mark_entry, (st_data_t)objspace);
}

static int
mark_key(st_data_t key, st_data_t value, st_data_t data)
{
    rb_objspace_t *objspace = (rb_objspace_t *)data;
    gc_mark(objspace, (VALUE)key);
    return ST_CONTINUE;
}

static void
mark_set(rb_objspace_t *objspace, st_table *tbl)
{
    if (!tbl) return;
    st_foreach(tbl, mark_key, (st_data_t)objspace);
}

void
rb_mark_set(st_table *tbl)
{
    mark_set(&(*((rb_current_vm())->objspace)), tbl);
}

static int
mark_keyvalue(st_data_t key, st_data_t value, st_data_t data)
{
    rb_objspace_t *objspace = (rb_objspace_t *)data;

    gc_mark(objspace, (VALUE)key);
    gc_mark(objspace, (VALUE)value);
    return ST_CONTINUE;
}

static void
mark_hash(rb_objspace_t *objspace, st_table *tbl)
{
    if (!tbl) return;
    st_foreach(tbl, mark_keyvalue, (st_data_t)objspace);
}

void
rb_mark_hash(st_table *tbl)
{
    mark_hash(&(*((rb_current_vm())->objspace)), tbl);
}

static void
mark_method_entry(rb_objspace_t *objspace, const rb_method_entry_t *me)
{
    const rb_method_definition_t *def = me->def;

    gc_mark(objspace, me->owner);
    gc_mark(objspace, me->defined_class);

    if (def) {
 switch (def->type) {
   case VM_METHOD_TYPE_ISEQ:
     if (def->body.iseq.iseqptr) gc_mark(objspace, (VALUE)def->body.iseq.iseqptr);
     gc_mark(objspace, (VALUE)def->body.iseq.cref);
     break;
   case VM_METHOD_TYPE_ATTRSET:
   case VM_METHOD_TYPE_IVAR:
     gc_mark(objspace, def->body.attr.location);
     break;
   case VM_METHOD_TYPE_BMETHOD:
     gc_mark(objspace, def->body.proc);
     break;
   case VM_METHOD_TYPE_ALIAS:
     gc_mark(objspace, (VALUE)def->body.alias.original_me);
     return;
   case VM_METHOD_TYPE_REFINED:
     gc_mark(objspace, (VALUE)def->body.refined.orig_me);
     gc_mark(objspace, (VALUE)def->body.refined.owner);
     break;
   case VM_METHOD_TYPE_CFUNC:
   case VM_METHOD_TYPE_ZSUPER:
   case VM_METHOD_TYPE_MISSING:
   case VM_METHOD_TYPE_OPTIMIZED:
   case VM_METHOD_TYPE_UNDEF:
   case VM_METHOD_TYPE_NOTIMPLEMENTED:
     break;
 }
    }
}

static enum rb_id_table_iterator_result
mark_method_entry_i(VALUE me, void *data)
{
    rb_objspace_t *objspace = (rb_objspace_t *)data;

    gc_mark(objspace, me);
    return ID_TABLE_CONTINUE;
}

static void
mark_m_tbl(rb_objspace_t *objspace, struct rb_id_table *tbl)
{
    if (tbl) {
 rb_id_table_foreach_values(tbl, mark_method_entry_i, objspace);
    }
}

static enum rb_id_table_iterator_result
mark_const_entry_i(VALUE value, void *data)
{
    const rb_const_entry_t *ce = (const rb_const_entry_t *)value;
    rb_objspace_t *objspace = data;

    gc_mark(objspace, ce->value);
    gc_mark(objspace, ce->file);
    return ID_TABLE_CONTINUE;
}

static void
mark_const_tbl(rb_objspace_t *objspace, struct rb_id_table *tbl)
{
    if (!tbl) return;
    rb_id_table_foreach_values(tbl, mark_const_entry_i, objspace);
}
static void mark_stack_locations(rb_objspace_t *objspace, const rb_execution_context_t *ec,
     const VALUE *stack_start, const VALUE *stack_end);

static void
mark_current_machine_context(rb_objspace_t *objspace, rb_execution_context_t *ec)
{
    union {
 rb_jmpbuf_t j;
 VALUE v[sizeof(rb_jmpbuf_t) / sizeof(VALUE)];
    } save_regs_gc_mark;
    VALUE *stack_start, *stack_end;

    ((void)0);

    __builtin_setjmp((save_regs_gc_mark.j));




    ;
    ((stack_start) = (ec->machine.stack_end), (stack_end) = (ec->machine.stack_start));

    mark_locations_array(objspace, save_regs_gc_mark.v, ((int)(sizeof(save_regs_gc_mark.v) / sizeof((save_regs_gc_mark.v)[0]))));

    mark_stack_locations(objspace, ec, stack_start, stack_end);
}

void
rb_gc_mark_machine_stack(const rb_execution_context_t *ec)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE *stack_start, *stack_end;

    ((stack_start) = (ec->machine.stack_end), (stack_end) = (ec->machine.stack_start));
    mark_stack_locations(objspace, ec, stack_start, stack_end);
}

static void
mark_stack_locations(rb_objspace_t *objspace, const rb_execution_context_t *ec,
       const VALUE *stack_start, const VALUE *stack_end)
{

    gc_mark_locations(objspace, stack_start, stack_end);
}

void
rb_mark_tbl(st_table *tbl)
{
    mark_tbl(&(*((rb_current_vm())->objspace)), tbl);
}

static void
gc_mark_maybe(rb_objspace_t *objspace, VALUE obj)
{
    (void)0;
    if (is_pointer_to_heap(objspace, (void *)obj)) {
 int type = (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK);
 if (type != RUBY_T_ZOMBIE && type != RUBY_T_NONE) {
     gc_mark_ptr(objspace, obj);
 }
    }
}

void
rb_gc_mark_maybe(VALUE obj)
{
    gc_mark_maybe(&(*((rb_current_vm())->objspace)), obj);
}

static inline int
gc_mark_set(rb_objspace_t *objspace, VALUE obj)
{
    if (RVALUE_MARKED(obj)) return 0;
    (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    return 1;
}


static int
gc_remember_unprotected(rb_objspace_t *objspace, VALUE obj)
{
    struct heap_page *page = ((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page);
    bits_t *uncollectible_bits = &page->uncollectible_bits[0];

    if (!((uncollectible_bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
 page->flags.has_uncollectible_shady_objects = 1;
 ((uncollectible_bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = (uncollectible_bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
 objspace->rgengc.uncollectible_wb_unprotected_objects++;







 return 1;
    }
    else {
 return 0;
    }
}


static void
rgengc_check_relation(rb_objspace_t *objspace, VALUE obj)
{

    const VALUE old_parent = objspace->rgengc.parent_object;

    if (old_parent) {
 if (RVALUE_WB_UNPROTECTED(obj)) {
     if (gc_remember_unprotected(objspace, obj)) {
  if (!((0) >= (2))) {} else gc_report_body(2, objspace, "relation: (O->S) %s -> %s\n", obj_info(old_parent), obj_info(obj));
     }
 }
 else {
     if (!RVALUE_OLD_P(obj)) {
  if (RVALUE_MARKED(obj)) {

      if (!((0) >= (2))) {} else gc_report_body(2, objspace, "relation: (O->unmarked Y) %s -> %s\n", obj_info(old_parent), obj_info(obj));
      RVALUE_AGE_SET_OLD(objspace, obj);
      if (((objspace)->flags.during_incremental_marking != 0)) {
   if (!RVALUE_MARKING(obj)) {
       gc_grey(objspace, obj);
   }
      }
      else {
   rgengc_remember(objspace, obj);
      }
  }
  else {
      if (!((0) >= (2))) {} else gc_report_body(2, objspace, "relation: (O->Y) %s -> %s\n", obj_info(old_parent), obj_info(obj));
      RVALUE_AGE_SET_CANDIDATE(objspace, obj);
  }
     }
 }
    }

    ((void)0);

}

static void
gc_grey(rb_objspace_t *objspace, VALUE obj)
{






    if (((objspace)->flags.during_incremental_marking != 0)) {
 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    }


    push_mark_stack(&objspace->mark_stack, obj);
}

static void
gc_aging(rb_objspace_t *objspace, VALUE obj)
{

    struct heap_page *page = ((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page);

    ((void)0);
    check_rvalue_consistency(obj);

    if (!(((page)->wb_unprotected_bits)[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
 if (!RVALUE_OLD_P(obj)) {
     if (!((0) >= (3))) {} else gc_report_body(3, objspace, "gc_aging: YOUNG: %s\n", obj_info(obj));
     RVALUE_AGE_INC(objspace, obj);
 }
 else if (((objspace)->flags.during_minor_gc == 0)) {
     ((void)0);
     RVALUE_PAGE_OLD_UNCOLLECTIBLE_SET(objspace, page, obj);
 }
    }
    check_rvalue_consistency(obj);


    objspace->marked_slots++;
}

 static void gc_mark_ptr(rb_objspace_t *objspace, VALUE obj);

static void
gc_mark_ptr(rb_objspace_t *objspace, VALUE obj)
{
    if ((__builtin_expect(!!(objspace->mark_func_data == ((void*)0)), 1))) {
 rgengc_check_relation(objspace, obj);
 if (!gc_mark_set(objspace, obj)) return;
 gc_aging(objspace, obj);
 gc_grey(objspace, obj);
    }
    else {
 objspace->mark_func_data->mark_func(obj, objspace->mark_func_data->data);
    }
}

static inline void
gc_mark(rb_objspace_t *objspace, VALUE obj)
{
    if (!is_markable_object(objspace, obj)) return;
    gc_mark_ptr(objspace, obj);
}

void
rb_gc_mark(VALUE ptr)
{
    gc_mark(&(*((rb_current_vm())->objspace)), ptr);
}





int
rb_objspace_marked_object_p(VALUE obj)
{
    return RVALUE_MARKED(obj) ? 1 : 0;
}

static inline void
gc_mark_set_parent(rb_objspace_t *objspace, VALUE obj)
{

    if (RVALUE_OLD_P(obj)) {
 objspace->rgengc.parent_object = obj;
    }
    else {
 objspace->rgengc.parent_object = ((VALUE)RUBY_Qfalse);
    }

}

static void
gc_mark_imemo(rb_objspace_t *objspace, VALUE obj)
{
    switch (imemo_type(obj)) {
      case imemo_env:
 {
     const rb_env_t *env = (const rb_env_t *)obj;
     ((void)0);
     gc_mark_values(objspace, (long)env->env_size, env->env);
     VM_ENV_FLAGS_SET(env->ep, VM_ENV_FLAG_WB_REQUIRED);
     gc_mark(objspace, (VALUE)rb_vm_env_prev_env(env));
     gc_mark(objspace, (VALUE)env->iseq);
 }
 return;
      case imemo_cref:
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.cref.klass);
 gc_mark(objspace, (VALUE)((RVALUE*)(obj))->as.imemo.cref.next);
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.cref.refinements);
 return;
      case imemo_svar:
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.svar.cref_or_me);
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.svar.lastline);
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.svar.backref);
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.svar.others);
 return;
      case imemo_throw_data:
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.throw_data.throw_obj);
 return;
      case imemo_ifunc:
 gc_mark_maybe(objspace, (VALUE)((RVALUE*)(obj))->as.imemo.ifunc.data);
 return;
      case imemo_memo:
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.memo.v1);
 gc_mark(objspace, ((RVALUE*)(obj))->as.imemo.memo.v2);
 gc_mark_maybe(objspace, ((RVALUE*)(obj))->as.imemo.memo.u3.value);
 return;
      case imemo_ment:
 mark_method_entry(objspace, &((RVALUE*)(obj))->as.imemo.ment);
 return;
      case imemo_iseq:
 rb_iseq_mark((rb_iseq_t *)obj);
 return;
      case imemo_alloc:
 {
     const rb_imemo_alloc_t *m = &((RVALUE*)(obj))->as.imemo.alloc;
     do {
  rb_gc_mark_locations(m->ptr, m->ptr + m->cnt);
     } while ((m = m->next) != ((void*)0));
 }
 return;
      case imemo_ast:
 rb_ast_mark(&((RVALUE*)(obj))->as.imemo.ast);
 return;
      case imemo_parser_strterm:
 rb_strterm_mark(obj);
 return;




    }
}

static void
gc_mark_children(rb_objspace_t *objspace, VALUE obj)
{
    register RVALUE *any = ((RVALUE*)(obj));
    gc_mark_set_parent(objspace, obj);

    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_EXIVAR)))):0)) {
 rb_mark_generic_ivar(obj);
    }

    switch ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK)) {
      case RUBY_T_NIL:
      case RUBY_T_FIXNUM:
 rb_bug("rb_gc_mark() called for broken object");
 break;

      case RUBY_T_NODE:
 rb_bug("rb_gc_mark(): GC does not handle T_NODE 0x%x(%p) 0x%lx", (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)(obj), ((struct RBasic*)(obj))->flags);
 break;

      case RUBY_T_IMEMO:
 gc_mark_imemo(objspace, obj);
 return;
    }

    gc_mark(objspace, any->as.basic.klass);

    switch ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK)) {
      case RUBY_T_CLASS:
      case RUBY_T_MODULE:
 mark_m_tbl(objspace, (((struct RClass*)(obj))->m_tbl));
 if (!(((struct RClass*)(obj))->ptr)) break;
 mark_tbl(objspace, ((((struct RClass*)(obj))->ptr)->iv_tbl));
 mark_const_tbl(objspace, ((((struct RClass*)(obj))->ptr)->const_tbl));
 gc_mark(objspace, RCLASS_SUPER((VALUE)obj));
 break;

      case RUBY_T_ICLASS:
 if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_USER5)))):0)) {
     mark_m_tbl(objspace, (((struct RClass*)(obj))->m_tbl));
 }
 if (!(((struct RClass*)(obj))->ptr)) break;
 mark_m_tbl(objspace, ((((struct RClass*)(obj))->ptr)->callable_m_tbl));
 gc_mark(objspace, RCLASS_SUPER((VALUE)obj));
 break;

      case RUBY_T_ARRAY:
 if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((RUBY_ELTS_SHARED))):0)) {
     gc_mark(objspace, any->as.array.as.heap.aux.shared);
 }
 else {
     long i, len = rb_array_len(obj);
     const VALUE *ptr = rb_array_const_ptr(obj);
     for (i=0; i < len; i++) {
  gc_mark(objspace, *ptr++);
     }
 }
 break;

      case RUBY_T_HASH:
 mark_hash(objspace, any->as.hash.ntbl);
 gc_mark(objspace, any->as.hash.ifnone);
 break;

      case RUBY_T_STRING:
 if (((((struct RBasic*)(((obj))))->flags&((((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) == (((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) {
     gc_mark(objspace, any->as.string.as.heap.aux.shared);
 }
 break;

      case RUBY_T_DATA:
 {
     void *const ptr = (((struct RData*)(obj))->data);
     if (ptr) {
  RUBY_DATA_FUNC mark_func = (((struct RTypedData*)(obj))->typed_flag == 1) ?
      any->as.typeddata.type->function.dmark :
      any->as.data.dmark;
  if (mark_func) (*mark_func)(ptr);
     }
 }
 break;

      case RUBY_T_OBJECT:
        {
            uint32_t i, len = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ROBJECT_EMBED_LEN_MAX : ((struct RObject*)(obj))->as.heap.numiv);
     VALUE *ptr = ((((struct RBasic*)(obj))->flags & ROBJECT_EMBED) ? ((struct RObject*)(obj))->as.ary : ((struct RObject*)(obj))->as.heap.ivptr);
            for (i = 0; i < len; i++) {
  gc_mark(objspace, *ptr++);
            }
        }
 break;

      case RUBY_T_FILE:
        if (any->as.file.fptr) {
            gc_mark(objspace, any->as.file.fptr->pathv);
            gc_mark(objspace, any->as.file.fptr->tied_io_for_writing);
            gc_mark(objspace, any->as.file.fptr->writeconv_asciicompat);
            gc_mark(objspace, any->as.file.fptr->writeconv_pre_ecopts);
            gc_mark(objspace, any->as.file.fptr->encs.ecopts);
            gc_mark(objspace, any->as.file.fptr->write_lock);
        }
        break;

      case RUBY_T_REGEXP:
        gc_mark(objspace, any->as.regexp.src);
 break;

      case RUBY_T_FLOAT:
      case RUBY_T_BIGNUM:
      case RUBY_T_SYMBOL:
 break;

      case RUBY_T_MATCH:
 gc_mark(objspace, any->as.match.regexp);
 if (any->as.match.str) {
     gc_mark(objspace, any->as.match.str);
 }
 break;

      case RUBY_T_RATIONAL:
 gc_mark(objspace, any->as.rational.num);
 gc_mark(objspace, any->as.rational.den);
 break;

      case RUBY_T_COMPLEX:
 gc_mark(objspace, any->as.complex.real);
 gc_mark(objspace, any->as.complex.imag);
 break;

      case RUBY_T_STRUCT:
 {
     long len = rb_struct_len(obj);
     const VALUE *ptr = rb_struct_const_ptr(obj);

     while (len--) {
  gc_mark(objspace, *ptr++);
     }
 }
 break;

      default:



 if ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_NONE) rb_bug("rb_gc_mark(): %p is T_NONE", (void *)obj);
 if ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_ZOMBIE) rb_bug("rb_gc_mark(): %p is T_ZOMBIE", (void *)obj);
 rb_bug("rb_gc_mark(): unknown data type 0x%x(%p) %s",
        (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), any,
        is_pointer_to_heap(objspace, any) ? "corrupted object": "non object");
    }
}





static inline int
gc_mark_stacked_objects(rb_objspace_t *objspace, int incremental, size_t count)
{
    mark_stack_t *mstack = &objspace->mark_stack;
    VALUE obj;

    size_t marked_slots_at_the_beginning = objspace->marked_slots;
    size_t popped_count = 0;


    while (pop_mark_stack(mstack, &obj)) {
 if (obj == ((VALUE)RUBY_Qundef)) continue;

 if (0 && !RVALUE_MARKED(obj)) {
     rb_bug("gc_mark_stacked_objects: %s is not marked.", obj_info(obj));
 }
        gc_mark_children(objspace, obj);


 if (incremental) {
     if (0 && !RVALUE_MARKING(obj)) {
  rb_bug("gc_mark_stacked_objects: incremental, but marking bit is 0");
     }
     (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
     popped_count++;

     if (popped_count + (objspace->marked_slots - marked_slots_at_the_beginning) > count) {
  break;
     }
 }
 else {

 }

    }

    if (0 >= 3) gc_verify_internal_consistency(((VALUE)RUBY_Qnil));

    if (is_mark_stack_empty(mstack)) {
 shrink_stack_chunk_cache(mstack);
 return 1;
    }
    else {
 return 0;
    }
}

static int
gc_mark_stacked_objects_incremental(rb_objspace_t *objspace, size_t count)
{
    return gc_mark_stacked_objects(objspace, 1, count);
}

static int
gc_mark_stacked_objects_all(rb_objspace_t *objspace)
{
    return gc_mark_stacked_objects(objspace, 0, 0);
}
static void
gc_mark_roots(rb_objspace_t *objspace, const char **categoryp)
{
    struct gc_list *list;
    rb_execution_context_t *ec = rb_current_execution_context();
    rb_vm_t *vm = rb_ec_vm_ptr(ec);
    if (categoryp) *categoryp = "xxx";


    objspace->rgengc.parent_object = ((VALUE)RUBY_Qfalse);
    do { if (categoryp) *categoryp = "vm"; ; } while (0);
    ;
    rb_vm_mark(vm);
    if (vm->self) gc_mark(objspace, vm->self);

    do { if (categoryp) *categoryp = "finalizers"; ; } while (0);
    mark_tbl(objspace, objspace->finalizer_table);

    do { if (categoryp) *categoryp = "machine_context"; ; } while (0);
    mark_current_machine_context(objspace, ec);

    do { if (categoryp) *categoryp = "encodings"; ; } while (0);
    rb_gc_mark_encodings();


    do { if (categoryp) *categoryp = "global_list"; ; } while (0);
    for (list = objspace->global_list; list; list = list->next) {
 rb_gc_mark_maybe(*list->varptr);
    }

    do { if (categoryp) *categoryp = "end_proc"; ; } while (0);
    rb_mark_end_proc();

    do { if (categoryp) *categoryp = "global_tbl"; ; } while (0);
    rb_gc_mark_global_tbl();

    if (0) rb_gc_mark(0);

    do { if (categoryp) *categoryp = "finish"; ; } while (0);

}
struct verify_internal_consistency_struct {
    rb_objspace_t *objspace;
    int err_count;
    size_t live_object_count;
    size_t zombie_object_count;


    VALUE parent;
    size_t old_object_count;
    size_t remembered_shady_count;

};


static void
check_generation_i(const VALUE child, void *ptr)
{
    struct verify_internal_consistency_struct *data = (struct verify_internal_consistency_struct *)ptr;
    const VALUE parent = data->parent;

    if (0) ((void)0);

    if (!RVALUE_OLD_P(child)) {
 if (!RVALUE_REMEMBERED(parent) &&
     !RVALUE_REMEMBERED(child) &&
     !RVALUE_UNCOLLECTIBLE(child)) {
     fprintf(stderr, "verify_internal_consistency_reachable_i: WB miss (O->Y) %s -> %s\n", obj_info(parent), obj_info(child));
     data->err_count++;
 }
    }
}

static void
check_color_i(const VALUE child, void *ptr)
{
    struct verify_internal_consistency_struct *data = (struct verify_internal_consistency_struct *)ptr;
    const VALUE parent = data->parent;

    if (!RVALUE_WB_UNPROTECTED(parent) && RVALUE_WHITE_P(child)) {
 fprintf(stderr, "verify_internal_consistency_reachable_i: WB miss (B->W) - %s -> %s\n",
  obj_info(parent), obj_info(child));
 data->err_count++;
    }
}


static void
check_children_i(const VALUE child, void *ptr)
{
    check_rvalue_consistency(child);
}

static int
verify_internal_consistency_i(void *page_start, void *page_end, size_t stride, void *ptr)
{
    struct verify_internal_consistency_struct *data = (struct verify_internal_consistency_struct *)ptr;
    VALUE obj;
    rb_objspace_t *objspace = data->objspace;

    for (obj = (VALUE)page_start; obj != (VALUE)page_end; obj += stride) {
 if (is_live_object(objspace, obj)) {

     data->live_object_count++;

     rb_objspace_reachable_objects_from(obj, check_children_i, (void *)data);



     data->parent = obj;

     if (RVALUE_OLD_P(obj)) data->old_object_count++;
     if (RVALUE_WB_UNPROTECTED(obj) && RVALUE_UNCOLLECTIBLE(obj)) data->remembered_shady_count++;

     if (!(gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_marking) && RVALUE_OLD_P(obj)) {

  data->parent = obj;
  rb_objspace_reachable_objects_from(obj, check_generation_i, (void *)data);
     }

     if (((objspace)->flags.during_incremental_marking != 0)) {
  if (RVALUE_BLACK_P(obj)) {

      data->parent = obj;
      rb_objspace_reachable_objects_from(obj, check_color_i, (void *)data);
  }
     }

 }
 else {
     if ((int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_ZOMBIE) {
  ((void)0);
  data->zombie_object_count++;
     }
 }
    }

    return 0;
}

static int
gc_verify_heap_page(rb_objspace_t *objspace, struct heap_page *page, VALUE obj)
{

    int i;
    unsigned int has_remembered_shady = 0;
    unsigned int has_remembered_old = 0;
    int rememberd_old_objects = 0;
    int free_objects = 0;
    int zombie_objects = 0;

    for (i=0; i<page->total_slots; i++) {
 VALUE val = (VALUE)&page->start[i];
 if (((struct RBasic*)(val)) == 0) free_objects++;
 if ((int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == RUBY_T_ZOMBIE) zombie_objects++;
 if ((((page)->uncollectible_bits)[((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) && (((page)->wb_unprotected_bits)[((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
     has_remembered_shady = 1;
 }
 if ((((page)->marking_bits)[((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
     has_remembered_old = 1;
     rememberd_old_objects++;
 }
    }

    if (!((objspace)->flags.during_incremental_marking != 0) &&
 page->flags.has_remembered_objects == 0 && has_remembered_old == 1) {

 for (i=0; i<page->total_slots; i++) {
     VALUE val = (VALUE)&page->start[i];
     if ((((page)->marking_bits)[((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((val)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
  fprintf(stderr, "marking -> %s\n", obj_info(val));
     }
 }
 rb_bug("page %p's has_remembered_objects should be false, but there are remembered old objects (%d). %s",
        page, rememberd_old_objects, obj ? obj_info(obj) : "");
    }

    if (page->flags.has_uncollectible_shady_objects == 0 && has_remembered_shady == 1) {
 rb_bug("page %p's has_remembered_shady should be false, but there are remembered shady objects. %s",
        page, obj ? obj_info(obj) : "");
    }

    if (0) {

 if (page->free_slots != free_objects) {
     rb_bug("page %p's free_slots should be %d, but %d\n", page, (int)page->free_slots, free_objects);
 }
    }
    if (page->final_slots != zombie_objects) {
 rb_bug("page %p's final_slots should be %d, but %d\n", page, (int)page->final_slots, zombie_objects);
    }

    return rememberd_old_objects;



}

static int
gc_verify_heap_pages_(rb_objspace_t *objspace, struct heap_page *page)
{
    int rememberd_old_objects = 0;

    while (page) {
 if (page->flags.has_remembered_objects == 0) {
     rememberd_old_objects += gc_verify_heap_page(objspace, page, ((VALUE)RUBY_Qfalse));
 }
 page = page->next;
    }

    return rememberd_old_objects;
}

static int
gc_verify_heap_pages(rb_objspace_t *objspace)
{
    int rememberd_old_objects = 0;
    rememberd_old_objects = gc_verify_heap_pages_(objspace, (&objspace->eden_heap)->pages);
    rememberd_old_objects = gc_verify_heap_pages_(objspace, (&objspace->tomb_heap)->pages);
    return rememberd_old_objects;
}
static VALUE
gc_verify_internal_consistency(VALUE dummy)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    struct verify_internal_consistency_struct data = {0};
    struct each_obj_args eo_args;

    data.objspace = objspace;
    if (!((0) >= (5))) {} else gc_report_body(5, objspace, "gc_verify_internal_consistency: start\n");



    eo_args.callback = verify_internal_consistency_i;
    eo_args.data = (void *)&data;
    objspace_each_objects((VALUE)&eo_args);

    if (data.err_count != 0) {





 rb_bug("gc_verify_internal_consistency: found internal inconsistency.");
    }


    gc_verify_heap_pages(objspace);



    if (!(1 && (((&objspace->eden_heap))->sweep_pages != 0)) && !objspace->atomic_flags.finalizing) {
 if (objspace_live_slots(objspace) != data.live_object_count) {
     fprintf(stderr, "heap_pages_final_slots: %d, objspace->profile.total_freed_objects: %d\n",
      (int)objspace->heap_pages.final_slots, (int)objspace->profile.total_freed_objects);
     rb_bug("inconsistent live slot number: expect %zu, but %zu.", objspace_live_slots(objspace), data.live_object_count);
 }
    }


    if (!(gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_marking)) {
 if (objspace->rgengc.old_objects != data.old_object_count) {
     rb_bug("inconsistent old slot number: expect %zu, but %zu.", objspace->rgengc.old_objects, data.old_object_count);
 }
 if (objspace->rgengc.uncollectible_wb_unprotected_objects != data.remembered_shady_count) {
     rb_bug("inconsistent old slot number: expect %zu, but %zu.", objspace->rgengc.uncollectible_wb_unprotected_objects, data.remembered_shady_count);
 }
    }


    if (!objspace->atomic_flags.finalizing) {
 size_t list_count = 0;

 {
     VALUE z = objspace->heap_pages.deferred_final;
     while (z) {
  list_count++;
  z = ((struct RZombie *)(z))->next;
     }
 }

 if (objspace->heap_pages.final_slots != data.zombie_object_count ||
     objspace->heap_pages.final_slots != list_count) {

     rb_bug("inconsistent finalizing object count:\n  expect %zu\n  but    %zu zombies\n  heap_pages_deferred_final list has %zu items.",
     objspace->heap_pages.final_slots,
     data.zombie_object_count,
     list_count);
 }
    }

    if (!((0) >= (5))) {} else gc_report_body(5, objspace, "gc_verify_internal_consistency: OK\n");

    return ((VALUE)RUBY_Qnil);
}

void
rb_gc_verify_internal_consistency(void)
{
    gc_verify_internal_consistency(((VALUE)RUBY_Qnil));
}



static void
gc_marks_start(rb_objspace_t *objspace, int full_mark)
{

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_start: (%s)\n", full_mark ? "full": "minor");
    gc_mode_transition(objspace, gc_mode_marking);


    if (full_mark) {

 objspace->rincgc.step_slots = (objspace->marked_slots * 2) / ((objspace->rincgc.pooled_slots / HEAP_PAGE_OBJ_LIMIT) + 1);

 if (0) fprintf(stderr, "objspace->marked_slots: %d, objspace->rincgc.pooled_page_num: %d, objspace->rincgc.step_slots: %d, \n",
         (int)objspace->marked_slots, (int)objspace->rincgc.pooled_slots, (int)objspace->rincgc.step_slots);

 objspace->flags.during_minor_gc = 0;
 objspace->profile.major_gc_count++;
 objspace->rgengc.uncollectible_wb_unprotected_objects = 0;
 objspace->rgengc.old_objects = 0;
 objspace->rgengc.last_major_gc = objspace->profile.count;
 objspace->marked_slots = 0;
 rgengc_mark_and_rememberset_clear(objspace, (&objspace->eden_heap));
    }
    else {
 objspace->flags.during_minor_gc = 1;
 objspace->marked_slots =
   objspace->rgengc.old_objects + objspace->rgengc.uncollectible_wb_unprotected_objects;
 objspace->profile.minor_gc_count++;
 rgengc_rememberset_mark(objspace, (&objspace->eden_heap));
    }


    gc_mark_roots(objspace, ((void*)0));

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_start: (%s) end, stack in %d\n", full_mark ? "full": "minor", (int)mark_stack_size(&objspace->mark_stack));
}


static void
gc_marks_wb_unprotected_objects(rb_objspace_t *objspace)
{
    struct heap_page *page = (&objspace->eden_heap)->pages;

    while (page) {
 bits_t *mark_bits = page->mark_bits;
 bits_t *wbun_bits = page->wb_unprotected_bits;
 RVALUE *p = page->start;
 RVALUE *offset = p - (((bits_t)(p) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE));
 size_t j;

 for (j=0; j<HEAP_PAGE_BITMAP_LIMIT; j++) {
     bits_t bits = mark_bits[j] & wbun_bits[j];

     if (bits) {
  p = offset + j * BITS_BITLENGTH;

  do {
      if (bits & 1) {
   if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_marks_wb_unprotected_objects: marked shady: %s\n", obj_info((VALUE)p));
   ((void)0);
   ((void)0);
   gc_mark_children(objspace, (VALUE)p);
      }
      p++;
      bits >>= 1;
  } while (bits);
     }
 }

 page = page->next;
    }

    gc_mark_stacked_objects_all(objspace);
}

static struct heap_page *
heap_move_pooled_pages_to_free_pages(rb_heap_t *heap)
{
    struct heap_page *page = heap->pooled_pages;

    if (page) {
 heap->pooled_pages = page->free_next;
 page->free_next = heap->free_pages;
 heap->free_pages = page;
    }

    return page;
}


static int
gc_marks_finish(rb_objspace_t *objspace)
{


    if (((objspace)->flags.during_incremental_marking != 0)) {
 if ((&objspace->eden_heap)->pooled_pages) {
     heap_move_pooled_pages_to_free_pages((&objspace->eden_heap));
     if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_finish: pooled pages are exists. retry.\n");
     return 0;
 }

 if (0 && is_mark_stack_empty(&objspace->mark_stack) == 0) {
     rb_bug("gc_marks_finish: mark stack is not empty (%d).", (int)mark_stack_size(&objspace->mark_stack));
 }

 gc_mark_roots(objspace, 0);

 if (is_mark_stack_empty(&objspace->mark_stack) == 0) {
     if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_finish: not empty (%d). retry.\n", (int)mark_stack_size(&objspace->mark_stack));
     return 0;
 }







 objspace->flags.during_incremental_marking = 0;

 gc_marks_wb_unprotected_objects(objspace);
    }







    if (((objspace)->flags.during_minor_gc == 0)) {

 const double r = gc_params.oldobject_limit_factor;
 objspace->rgengc.uncollectible_wb_unprotected_objects_limit = (size_t)(objspace->rgengc.uncollectible_wb_unprotected_objects * r);
 objspace->rgengc.old_objects_limit = (size_t)(objspace->rgengc.old_objects * r);
    }






    {

 rb_heap_t *heap = (&objspace->eden_heap);
 size_t total_slots = objspace->heap_pages.allocatable_pages * HEAP_PAGE_OBJ_LIMIT + heap->total_slots;
 size_t sweep_slots = total_slots - objspace->marked_slots;
 size_t max_free_slots = (size_t)(total_slots * gc_params.heap_free_slots_max_ratio);
 size_t min_free_slots = (size_t)(total_slots * gc_params.heap_free_slots_min_ratio);
 int full_marking = ((objspace)->flags.during_minor_gc == 0);

 ((void)0);


 if (max_free_slots < gc_params.heap_init_slots) max_free_slots = gc_params.heap_init_slots;

 if (sweep_slots > max_free_slots) {
     objspace->heap_pages.freeable_pages = (sweep_slots - max_free_slots) / HEAP_PAGE_OBJ_LIMIT;
 }
 else {
     objspace->heap_pages.freeable_pages = 0;
 }


 if (min_free_slots < gc_params.heap_free_slots) min_free_slots = gc_params.heap_free_slots;


 if (sweep_slots < min_free_slots) {
     if (!full_marking) {
  if (objspace->profile.count - objspace->rgengc.last_major_gc < 3) {
      full_marking = 1;

      goto increment;
  }
  else {
      if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_finish: next is full GC!!)\n");
      objspace->rgengc.need_major_gc |= GPR_FLAG_MAJOR_BY_NOFREE;
  }
     }
     else {
       increment:
  if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_finish: heap_set_increment!!\n");
  heap_set_increment(objspace, heap_extend_pages(objspace, sweep_slots, total_slots));
  heap_increment(objspace, heap);
     }
 }

 if (full_marking) {

     const double r = gc_params.oldobject_limit_factor;
     objspace->rgengc.uncollectible_wb_unprotected_objects_limit = (size_t)(objspace->rgengc.uncollectible_wb_unprotected_objects * r);
     objspace->rgengc.old_objects_limit = (size_t)(objspace->rgengc.old_objects * r);
 }

 if (objspace->rgengc.uncollectible_wb_unprotected_objects > objspace->rgengc.uncollectible_wb_unprotected_objects_limit) {
     objspace->rgengc.need_major_gc |= GPR_FLAG_MAJOR_BY_SHADY;
 }
 if (objspace->rgengc.old_objects > objspace->rgengc.old_objects_limit) {
     objspace->rgengc.need_major_gc |= GPR_FLAG_MAJOR_BY_OLDGEN;
 }
 if (0) {
     objspace->rgengc.need_major_gc = GPR_FLAG_MAJOR_BY_FORCE;
 }

 if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_finish (marks %d objects, old %d objects, total %d slots, sweep %d slots, increment: %d, next GC: %s)\n", (int)objspace->marked_slots, (int)objspace->rgengc.old_objects, (int)heap->total_slots, (int)sweep_slots, (int)objspace->heap_pages.allocatable_pages, objspace->rgengc.need_major_gc ? "major": "minor");
    }

    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x800000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x800000), (0)); } } while (0);

    return 1;
}


static void
gc_marks_step(rb_objspace_t *objspace, int slots)
{
    ((void)0);

    if (gc_mark_stacked_objects_incremental(objspace, slots)) {
 if (gc_marks_finish(objspace)) {

     gc_sweep(objspace);
 }
    }
    if (0) fprintf(stderr, "objspace->marked_slots: %d\n", (int)objspace->marked_slots);
}


static void
gc_marks_rest(rb_objspace_t *objspace)
{
    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_marks_rest\n");


    (&objspace->eden_heap)->pooled_pages = ((void*)0);


    if (((objspace)->flags.during_incremental_marking != 0)) {
 do {
     while (gc_mark_stacked_objects_incremental(objspace, 2147483647) == 0);
 } while (gc_marks_finish(objspace) == 0);
    }
    else {
 gc_mark_stacked_objects_all(objspace);
 gc_marks_finish(objspace);
    }


    gc_sweep(objspace);
}


static void
gc_marks_continue(rb_objspace_t *objspace, rb_heap_t *heap)
{
    int slots = 0;
    const char *from;

    ((void)0);

    gc_enter(objspace, "marks_continue");

    do { struct mark_func_data_struct *prev_mark_func_data = objspace->mark_func_data; objspace->mark_func_data = (((void*)0));;
    {
 if (heap->pooled_pages) {
     while (heap->pooled_pages && slots < HEAP_PAGE_OBJ_LIMIT) {
  struct heap_page *page = heap_move_pooled_pages_to_free_pages(heap);
  slots += page->free_slots;
     }
     from = "pooled-pages";
 }
 else if (heap_increment(objspace, heap)) {
     slots = heap->free_pages->free_slots;
     from = "incremented-pages";
 }

 if (slots > 0) {
     if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_marks_continue: provide %d slots from %s.\n", slots, from);
     gc_marks_step(objspace, (int)objspace->rincgc.step_slots);
 }
 else {
     if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_marks_continue: no more pooled pages (stack depth: %d).\n", (int)mark_stack_size(&objspace->mark_stack));
     gc_marks_rest(objspace);
 }
    }
    objspace->mark_func_data = prev_mark_func_data;} while (0);

    gc_exit(objspace, "marks_continue");
}


static void
gc_marks(rb_objspace_t *objspace, int full_mark)
{
    gc_prof_mark_timer_start(objspace);

    do { struct mark_func_data_struct *prev_mark_func_data = objspace->mark_func_data; objspace->mark_func_data = (((void*)0));;
    {



 gc_marks_start(objspace, full_mark);
 if (!((objspace)->flags.during_incremental_marking != 0)) {
     gc_marks_rest(objspace);
 }
    }
    objspace->mark_func_data = prev_mark_func_data;} while (0);
    gc_prof_mark_timer_stop(objspace);
}



static void
gc_report_body(int level, rb_objspace_t *objspace, const char *fmt, ...)
{
    if (level <= 0) {
 char buf[1024];
 FILE *out = stderr;
 va_list args;
 const char *status = " ";


 if (objspace->flags.during_gc) {
     status = ((objspace)->flags.during_minor_gc == 0) ? "+": "-";
 }
 else {
     if ((1 && (((&objspace->eden_heap))->sweep_pages != 0))) {
  status = "S";
     }
     if (((objspace)->flags.during_incremental_marking != 0)) {
  status = "M";
     }
 }


 __builtin_va_start(args, fmt);
 ruby_vsnprintf(buf, 1024, fmt, args);
 __builtin_va_end(args);

 fprintf(out, "%s|", status);
 fputs(buf, out);
    }
}





static int
rgengc_remembersetbits_get(rb_objspace_t *objspace, VALUE obj)
{
    return RVALUE_REMEMBERED(obj);
}

static int
rgengc_remembersetbits_set(rb_objspace_t *objspace, VALUE obj)
{
    struct heap_page *page = ((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page);
    bits_t *bits = &page->marking_bits[0];

    ((void)0);

    if (((bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
 return 0;
    }
    else {
 page->flags.has_remembered_objects = 1;
 ((bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = (bits)[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
 return 1;
    }
}




static int
rgengc_remember(rb_objspace_t *objspace, VALUE obj)
{
    if (!((0) >= (6))) {} else gc_report_body(6, objspace, "rgengc_remember: %s %s\n", obj_info(obj), rgengc_remembersetbits_get(objspace, obj) ? "was already remembered": "is remembered now");


    check_rvalue_consistency(obj);

    if (0) {
 if (RVALUE_WB_UNPROTECTED(obj)) rb_bug("rgengc_remember: %s is not wb protected.", obj_info(obj));
    }
    return rgengc_remembersetbits_set(objspace, obj);
}

static int
rgengc_remembered(rb_objspace_t *objspace, VALUE obj)
{
    int result = rgengc_remembersetbits_get(objspace, obj);
    check_rvalue_consistency(obj);
    if (!((0) >= (6))) {} else gc_report_body(6, objspace, "rgengc_remembered: %s\n", obj_info(obj));
    return result;
}





static void
rgengc_rememberset_mark(rb_objspace_t *objspace, rb_heap_t *heap)
{
    size_t j;
    struct heap_page *page = heap->pages;



    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "rgengc_rememberset_mark: start\n");

    while (page) {
 if (page->flags.has_remembered_objects | page->flags.has_uncollectible_shady_objects) {
     RVALUE *p = page->start;
     RVALUE *offset = p - (((bits_t)(p) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE));
     bits_t bitset, bits[HEAP_PAGE_BITMAP_LIMIT];
     bits_t *marking_bits = page->marking_bits;
     bits_t *uncollectible_bits = page->uncollectible_bits;
     bits_t *wb_unprotected_bits = page->wb_unprotected_bits;





     for (j=0; j<HEAP_PAGE_BITMAP_LIMIT; j++) {
  bits[j] = marking_bits[j] | (uncollectible_bits[j] & wb_unprotected_bits[j]);
  marking_bits[j] = 0;
     }
     page->flags.has_remembered_objects = 0;

     for (j=0; j < HEAP_PAGE_BITMAP_LIMIT; j++) {
  bitset = bits[j];

  if (bitset) {
      p = offset + j * BITS_BITLENGTH;

      do {
   if (bitset & 1) {
       VALUE obj = (VALUE)p;
       if (!((0) >= (2))) {} else gc_report_body(2, objspace, "rgengc_rememberset_mark: mark %s\n", obj_info(obj));
       ((void)0);
       ((void)0);

       gc_mark_children(objspace, obj);
   }
   p++;
   bitset >>= 1;
      } while (bitset);
  }
     }
 }






 page = page->next;
    }




    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "rgengc_rememberset_mark: finished\n");
}

static void
rgengc_mark_and_rememberset_clear(rb_objspace_t *objspace, rb_heap_t *heap)
{
    struct heap_page *page = heap->pages;

    while (page) {
 memset(&page->mark_bits[0], 0, HEAP_PAGE_BITMAP_SIZE);
 memset(&page->marking_bits[0], 0, HEAP_PAGE_BITMAP_SIZE);
 memset(&page->uncollectible_bits[0], 0, HEAP_PAGE_BITMAP_SIZE);
 page->flags.has_uncollectible_shady_objects = 0;
 page->flags.has_remembered_objects = 0;
 page = page->next;
    }
}



 static void gc_writebarrier_generational(VALUE a, VALUE b, rb_objspace_t *objspace);

static void
gc_writebarrier_generational(VALUE a, VALUE b, rb_objspace_t *objspace)
{
    if (0) {
 if (!RVALUE_OLD_P(a)) rb_bug("gc_writebarrier_generational: %s is not an old object.", obj_info(a));
 if ( RVALUE_OLD_P(b)) rb_bug("gc_writebarrier_generational: %s is an old object.", obj_info(b));
 if (((objspace)->flags.during_incremental_marking != 0)) rb_bug("gc_writebarrier_generational: called while incremental marking: %s -> %s", obj_info(a), obj_info(b));
    }



    if (!rgengc_remembered(objspace, a)) {
 rgengc_remember(objspace, a);
 if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_writebarrier_generational: %s (remembered) -> %s\n", obj_info(a), obj_info(b));
    }
    check_rvalue_consistency(a);
    check_rvalue_consistency(b);
}


static void
gc_mark_from(rb_objspace_t *objspace, VALUE obj, VALUE parent)
{
    gc_mark_set_parent(objspace, parent);
    rgengc_check_relation(objspace, obj);
    if (gc_mark_set(objspace, obj) == 0) return;
    gc_aging(objspace, obj);
    gc_grey(objspace, obj);
}

 static void gc_writebarrier_incremental(VALUE a, VALUE b, rb_objspace_t *objspace);

static void
gc_writebarrier_incremental(VALUE a, VALUE b, rb_objspace_t *objspace)
{
    if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_writebarrier_incremental: [LG] %p -> %s\n", (void *)a, obj_info(b));

    if (RVALUE_BLACK_P(a)) {
 if (RVALUE_WHITE_P(b)) {
     if (!RVALUE_WB_UNPROTECTED(a)) {
  if (!((0) >= (2))) {} else gc_report_body(2, objspace, "gc_writebarrier_incremental: [IN] %p -> %s\n", (void *)a, obj_info(b));
  gc_mark_from(objspace, b, a);
     }
 }
 else if (RVALUE_OLD_P(a) && !RVALUE_OLD_P(b)) {
     if (!RVALUE_WB_UNPROTECTED(b)) {
  if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_writebarrier_incremental: [GN] %p -> %s\n", (void *)a, obj_info(b));
  RVALUE_AGE_SET_OLD(objspace, b);

  if (RVALUE_BLACK_P(b)) {
      gc_grey(objspace, b);
  }
     }
     else {
  if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_writebarrier_incremental: [LL] %p -> %s\n", (void *)a, obj_info(b));
  gc_remember_unprotected(objspace, b);
     }
 }
    }
}




void
rb_gc_writebarrier(VALUE a, VALUE b)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    if (0 && (((VALUE)(a) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(a) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) rb_bug("rb_gc_writebarrier: a is special const");
    if (0 && (((VALUE)(b) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(b) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) rb_bug("rb_gc_writebarrier: b is special const");

    if (!((objspace)->flags.during_incremental_marking != 0)) {
 if (!RVALUE_OLD_P(a) || RVALUE_OLD_P(b)) {
     return;
 }
 else {
     gc_writebarrier_generational(a, b, objspace);
 }
    }
    else {
 gc_writebarrier_incremental(a, b, objspace);
    }
}

void
rb_gc_writebarrier_unprotect(VALUE obj)
{
    if (RVALUE_WB_UNPROTECTED(obj)) {
 return;
    }
    else {
 rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

 if (!((0) >= (2))) {} else gc_report_body(2, objspace, "rb_gc_writebarrier_unprotect: %s %s\n", obj_info(obj), rgengc_remembered(objspace, obj) ? " (already remembered)": "");


 if (RVALUE_OLD_P(obj)) {
     if (!((0) >= (1))) {} else gc_report_body(1, objspace, "rb_gc_writebarrier_unprotect: %s\n", obj_info(obj));
     RVALUE_DEMOTE(objspace, obj);
     gc_mark_set(objspace, obj);
     gc_remember_unprotected(objspace, obj);







 }
 else {
     RVALUE_AGE_RESET(obj);
 }

 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    }
}




void
rb_gc_writebarrier_remember(VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "rb_gc_writebarrier_remember: %s\n", obj_info(obj));

    if (((objspace)->flags.during_incremental_marking != 0)) {
 if (RVALUE_BLACK_P(obj)) {
     gc_grey(objspace, obj);
 }
    }
    else {
 if (RVALUE_OLD_P(obj)) {
     rgengc_remember(objspace, obj);
 }
    }
}

static st_table *rgengc_unprotect_logging_table;

static int
rgengc_unprotect_logging_exit_func_i(st_data_t key, st_data_t val, st_data_t arg)
{
    fprintf(stderr, "%s\t%d\n", (char *)key, (int)val);
    return ST_CONTINUE;
}

static void
rgengc_unprotect_logging_exit_func(void)
{
    st_foreach(rgengc_unprotect_logging_table, rgengc_unprotect_logging_exit_func_i, 0);
}

void
rb_gc_unprotect_logging(void *objptr, const char *filename, int line)
{
    VALUE obj = (VALUE)objptr;

    if (rgengc_unprotect_logging_table == 0) {
 rgengc_unprotect_logging_table = st_init_strtable();
 atexit(rgengc_unprotect_logging_exit_func);
    }

    if (RVALUE_WB_UNPROTECTED(obj) == 0) {
 char buff[0x100];
 st_data_t cnt = 1;
 char *ptr = buff;

 ruby_snprintf(ptr, 0x100 - 1, "%s|%s:%d", obj_info(obj), filename, line);

 if (st_lookup(rgengc_unprotect_logging_table, (st_data_t)ptr, &cnt)) {
     cnt++;
 }
 else {
     ptr = (strdup)(buff);
     if (!ptr) rb_memerror();
 }
 st_insert(rgengc_unprotect_logging_table, (st_data_t)ptr, cnt);
    }
}


void
rb_copy_wb_protected_attribute(VALUE dest, VALUE obj)
{

    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    if (RVALUE_WB_UNPROTECTED(obj) && !RVALUE_WB_UNPROTECTED(dest)) {
 if (!RVALUE_OLD_P(dest)) {
     (((&((&((struct heap_page_body *)((bits_t)(dest) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(dest) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(dest) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(dest) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] | ((bits_t)1 << ((((bits_t)(dest) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
     RVALUE_AGE_RESET_RAW(dest);
 }
 else {
     RVALUE_DEMOTE(objspace, dest);
 }
    }

    check_rvalue_consistency(dest);

}



VALUE
rb_obj_rgengc_writebarrier_protected_p(VALUE obj)
{

    return RVALUE_WB_UNPROTECTED(obj) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);



}

VALUE
rb_obj_rgengc_promoted_p(VALUE obj)
{
    return ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? 0 : ((((struct RBasic*)((obj)))->flags&((RUBY_FL_PROMOTED))) == (RUBY_FL_PROMOTED))) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}

size_t
rb_obj_gc_flags(VALUE obj, ID* flags, size_t max)
{
    size_t n = 0;
    static ID ID_marked;

    static ID ID_wb_protected, ID_old, ID_marking, ID_uncollectible;


    if (!ID_marked) {

 ID_marked = (__builtin_constant_p("marked") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("marked")), (long)strlen(("marked"))); (ID) rb_intern_id_cache; }) : rb_intern("marked"));;

 ID_wb_protected = (__builtin_constant_p("wb_protected") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("wb_protected")), (long)strlen(("wb_protected"))); (ID) rb_intern_id_cache; }) : rb_intern("wb_protected"));;
 ID_old = (__builtin_constant_p("old") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("old")), (long)strlen(("old"))); (ID) rb_intern_id_cache; }) : rb_intern("old"));;
 ID_marking = (__builtin_constant_p("marking") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("marking")), (long)strlen(("marking"))); (ID) rb_intern_id_cache; }) : rb_intern("marking"));;
 ID_uncollectible = (__builtin_constant_p("uncollectible") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("uncollectible")), (long)strlen(("uncollectible"))); (ID) rb_intern_id_cache; }) : rb_intern("uncollectible"));;


    }


    if (RVALUE_WB_UNPROTECTED(obj) == 0 && n<max) flags[n++] = ID_wb_protected;
    if (RVALUE_OLD_P(obj) && n<max) flags[n++] = ID_old;
    if (RVALUE_UNCOLLECTIBLE(obj) && n<max) flags[n++] = ID_uncollectible;
    if ((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) && n<max) flags[n++] = ID_marking;

    if ((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1)))) && n<max) flags[n++] = ID_marked;
    return n;
}



void
rb_gc_force_recycle(VALUE obj)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));


    int is_old = RVALUE_OLD_P(obj);

    if (!((0) >= (2))) {} else gc_report_body(2, objspace, "rb_gc_force_recycle: %s\n", obj_info(obj));

    if (is_old) {
 if (RVALUE_MARKED(obj)) {
     objspace->rgengc.old_objects--;
 }
    }
    (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));


    if (((objspace)->flags.during_incremental_marking != 0)) {
 if ((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) {
     invalidate_mark_stack(&objspace->mark_stack, obj);
     (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
 }
 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
    }
    else {

 if (is_old || !((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->flags.before_sweep) {
     (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));
 }
 (((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] = ((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ~((bits_t)1 << ((((bits_t)(obj) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))));

    }



    objspace->profile.total_freed_objects++;

    heap_page_add_freeobj(objspace, ((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page), obj);






}





void
rb_gc_register_mark_object(VALUE obj)
{
    VALUE ary_ary = rb_current_vm()->mark_object_ary;
    VALUE ary = rb_ary_last(0, 0, ary_ary);

    if (ary == ((VALUE)RUBY_Qnil) || rb_array_len(ary) >= 1024) {
 ary = rb_ary_tmp_new(1024);
 rb_ary_push(ary_ary, ary);
    }

    rb_ary_push(ary, obj);
}

void
rb_gc_register_address(VALUE *addr)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    struct gc_list *tmp;

    tmp = ((struct gc_list*)ruby_xmalloc(sizeof(struct gc_list)));
    tmp->next = objspace->global_list;
    tmp->varptr = addr;
    objspace->global_list = tmp;
}

void
rb_gc_unregister_address(VALUE *addr)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    struct gc_list *tmp = objspace->global_list;

    if (tmp->varptr == addr) {
 objspace->global_list = tmp->next;
 ruby_xfree(tmp);
 return;
    }
    while (tmp->next) {
 if (tmp->next->varptr == addr) {
     struct gc_list *t = tmp->next;

     tmp->next = tmp->next->next;
     ruby_xfree(t);
     break;
 }
 tmp = tmp->next;
    }
}

void
rb_global_variable(VALUE *var)
{
    rb_gc_register_address(var);
}



enum {
    gc_stress_no_major,
    gc_stress_no_immediate_sweep,
    gc_stress_full_mark_after_malloc,
    gc_stress_max
};




static void
heap_ready_to_gc(rb_objspace_t *objspace, rb_heap_t *heap)
{
    if (!heap->freelist && !heap->free_pages) {
 if (!heap_increment(objspace, heap)) {
     heap_set_increment(objspace, 1);
     heap_increment(objspace, heap);
 }
    }
}

static int
ready_to_gc(rb_objspace_t *objspace)
{
    if (objspace->flags.dont_gc || objspace->flags.during_gc || ruby_disable_gc) {
 heap_ready_to_gc(objspace, (&objspace->eden_heap));
 return 0;
    }
    else {
 return 1;
    }
}

static void
gc_reset_malloc_info(rb_objspace_t *objspace)
{
    gc_prof_set_malloc_info(objspace);
    {
 size_t inc = __atomic_exchange_n(&(objspace->malloc_params.increase), (0), 5);
 size_t old_limit = objspace->malloc_params.limit;

 if (inc > objspace->malloc_params.limit) {
     objspace->malloc_params.limit = (size_t)(inc * gc_params.malloc_limit_growth_factor);
     if (gc_params.malloc_limit_max > 0 &&
  objspace->malloc_params.limit > gc_params.malloc_limit_max) {
  objspace->malloc_params.limit = gc_params.malloc_limit_max;
     }
 }
 else {
     objspace->malloc_params.limit = (size_t)(objspace->malloc_params.limit * 0.98);
     if (objspace->malloc_params.limit < gc_params.malloc_limit_min) {
  objspace->malloc_params.limit = gc_params.malloc_limit_min;
     }
 }

 if (0) {
     if (old_limit != objspace->malloc_params.limit) {
  fprintf(stderr, "[%zu] malloc_limit: %zu -> %zu\n",
   rb_gc_count(), old_limit, objspace->malloc_params.limit);
     }
     else {
  fprintf(stderr, "[%zu] malloc_limit: not changed (%zu)\n",
   rb_gc_count(), objspace->malloc_params.limit);
     }
 }
    }



    if (!((objspace)->flags.during_minor_gc == 0)) {
 if (objspace->rgengc.oldmalloc_increase > objspace->rgengc.oldmalloc_increase_limit) {
     objspace->rgengc.need_major_gc |= GPR_FLAG_MAJOR_BY_OLDMALLOC;
     objspace->rgengc.oldmalloc_increase_limit =
       (size_t)(objspace->rgengc.oldmalloc_increase_limit * gc_params.oldmalloc_limit_growth_factor);

     if (objspace->rgengc.oldmalloc_increase_limit > gc_params.oldmalloc_limit_max) {
  objspace->rgengc.oldmalloc_increase_limit = gc_params.oldmalloc_limit_max;
     }
 }

 if (0) fprintf(stderr, "%d\t%d\t%u\t%u\t%d\n",
         (int)rb_gc_count(),
         (int)objspace->rgengc.need_major_gc,
         (unsigned int)objspace->rgengc.oldmalloc_increase,
         (unsigned int)objspace->rgengc.oldmalloc_increase_limit,
         (unsigned int)gc_params.oldmalloc_limit_max);
    }
    else {

 objspace->rgengc.oldmalloc_increase = 0;

 if ((objspace->profile.latest_gc_info & GPR_FLAG_MAJOR_BY_OLDMALLOC) == 0) {
     objspace->rgengc.oldmalloc_increase_limit =
       (size_t)(objspace->rgengc.oldmalloc_increase_limit / ((gc_params.oldmalloc_limit_growth_factor - 1)/10 + 1));
     if (objspace->rgengc.oldmalloc_increase_limit < gc_params.oldmalloc_limit_min) {
  objspace->rgengc.oldmalloc_increase_limit = gc_params.oldmalloc_limit_min;
     }
 }
    }

}

static int
garbage_collect(rb_objspace_t *objspace, int full_mark, int immediate_mark, int immediate_sweep, int reason)
{




    gc_rest(objspace);





    return gc_start(objspace, full_mark, immediate_mark, immediate_sweep, reason);
}

static int
gc_start(rb_objspace_t *objspace, const int full_mark, const int immediate_mark, const unsigned int immediate_sweep, int reason)
{
    int do_full_mark = full_mark;
    objspace->flags.immediate_sweep = immediate_sweep;

    if (!objspace->heap_pages.allocated_pages) return 0;
    if (reason != GPR_FLAG_METHOD && !ready_to_gc(objspace)) return 1;

    ((void)0);
    ((void)0);
    ((void)0);




    gc_enter(objspace, "gc_start");

    if (objspace->flags.gc_stressful) {
 int flag = (((int)(long)(objspace->gc_stress_mode))&RUBY_FIXNUM_FLAG) ? ((int)rb_fix2int((VALUE)(objspace->gc_stress_mode))) : 0;

 if ((flag & (1<<gc_stress_no_major)) == 0) {
     do_full_mark = 1;
 }

 objspace->flags.immediate_sweep = !(flag & (1<<gc_stress_no_immediate_sweep));
    }
    else {

 if (objspace->rgengc.need_major_gc) {
     reason |= objspace->rgengc.need_major_gc;
     do_full_mark = 1;
 }
 else if (0) {
     reason = GPR_FLAG_MAJOR_BY_FORCE;
     do_full_mark = 1;
 }

 objspace->rgengc.need_major_gc = GPR_FLAG_NONE;

    }

    if (do_full_mark && (reason & GPR_FLAG_MAJOR_MASK) == 0) {
 reason |= GPR_FLAG_MAJOR_BY_FORCE;
    }


    if (!1 || objspace->flags.dont_incremental || immediate_mark) {
 objspace->flags.during_incremental_marking = 0;
    }
    else {
 objspace->flags.during_incremental_marking = do_full_mark;
    }


    if (!1 || objspace->flags.dont_incremental) {
 objspace->flags.immediate_sweep = 1;
    }

    if (objspace->flags.immediate_sweep) reason |= GPR_FLAG_IMMEDIATE_SWEEP;

    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_start(%d, %d, %d, reason: %d) => %d, %d, %d\n", full_mark, immediate_mark, immediate_sweep, reason, do_full_mark, !((objspace)->flags.during_incremental_marking != 0), objspace->flags.immediate_sweep);



    objspace->profile.count++;
    objspace->profile.latest_gc_info = reason;
    objspace->profile.total_allocated_objects_at_gc_start = objspace->total_allocated_objects;
    objspace->profile.heap_used_at_gc_start = objspace->heap_pages.allocated_pages;
    gc_prof_setup_new_record(objspace, reason);
    gc_reset_malloc_info(objspace);

    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x400000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x400000), (0)); } } while (0);
    ((void)0);

    gc_prof_timer_start(objspace);
    {
 gc_marks(objspace, do_full_mark);
    }
    gc_prof_timer_stop(objspace);

    gc_exit(objspace, "gc_start");
    return 1;
}

static void
gc_rest(rb_objspace_t *objspace)
{
    int marking = ((objspace)->flags.during_incremental_marking != 0);
    int sweeping = (1 && (((&objspace->eden_heap))->sweep_pages != 0));

    if (marking || sweeping) {
 gc_enter(objspace, "gc_rest");

 if (0 >= 2) gc_verify_internal_consistency(((VALUE)RUBY_Qnil));

 if (((objspace)->flags.during_incremental_marking != 0)) {
     do { struct mark_func_data_struct *prev_mark_func_data = objspace->mark_func_data; objspace->mark_func_data = (((void*)0));;
     gc_marks_rest(objspace);
     objspace->mark_func_data = prev_mark_func_data;} while (0);
 }
 if ((1 && (((&objspace->eden_heap))->sweep_pages != 0))) {
     gc_sweep_rest(objspace);
 }
 gc_exit(objspace, "gc_rest");
    }
}

struct objspace_and_reason {
    rb_objspace_t *objspace;
    int reason;
    int full_mark;
    int immediate_mark;
    int immediate_sweep;
};

static void
gc_current_status_fill(rb_objspace_t *objspace, char *buff)
{
    int i = 0;
    if ((gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_marking)) {
 buff[i++] = 'M';

 if (((objspace)->flags.during_minor_gc == 0)) buff[i++] = 'F';

 if (((objspace)->flags.during_incremental_marking != 0)) buff[i++] = 'I';


    }
    else if ((gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_sweeping)) {
 buff[i++] = 'S';
 if ((1 && (((&objspace->eden_heap))->sweep_pages != 0))) buff[i++] = 'L';
    }
    else {
 buff[i++] = 'N';
    }
    buff[i] = '\0';
}

static const char *
gc_current_status(rb_objspace_t *objspace)
{
    static char buff[0x10];
    gc_current_status_fill(objspace, buff);
    return buff;
}
static inline void
gc_record(rb_objspace_t *objspace, int direction, const char *event)
{

}


static inline void
gc_enter(rb_objspace_t *objspace, const char *event)
{
    ((void)0);
    if (0 >= 3) gc_verify_internal_consistency(((VALUE)RUBY_Qnil));

    objspace->flags.during_gc = 1;
    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_entr: %s [%s]\n", event, gc_current_status(objspace));
    gc_record(objspace, 0, event);
    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x2000000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x2000000), (0)); } } while (0);
}

static inline void
gc_exit(rb_objspace_t *objspace, const char *event)
{
    ((void)0);

    do { if ((__builtin_expect(!!(((objspace)->hook_events & (0x4000000))), 0))) { gc_event_hook_body(rb_current_execution_context(), (objspace), (0x4000000), (0)); } } while (0);
    gc_record(objspace, 1, event);
    if (!((0) >= (1))) {} else gc_report_body(1, objspace, "gc_exit: %s [%s]\n", event, gc_current_status(objspace));
    objspace->flags.during_gc = 0;
}

static void *
gc_with_gvl(void *ptr)
{
    struct objspace_and_reason *oar = (struct objspace_and_reason *)ptr;
    return (void *)(VALUE)garbage_collect(oar->objspace, oar->full_mark, oar->immediate_mark, oar->immediate_sweep, oar->reason);
}

static int
garbage_collect_with_gvl(rb_objspace_t *objspace, int full_mark, int immediate_mark, int immediate_sweep, int reason)
{
    if (objspace->flags.dont_gc) return 1;
    if (ruby_thread_has_gvl_p()) {
 return garbage_collect(objspace, full_mark, immediate_mark, immediate_sweep, reason);
    }
    else {
 if (ruby_native_thread_p()) {
     struct objspace_and_reason oar;
     oar.objspace = objspace;
     oar.reason = reason;
     oar.full_mark = full_mark;
     oar.immediate_mark = immediate_mark;
     oar.immediate_sweep = immediate_sweep;
     return (int)(VALUE)rb_thread_call_with_gvl(gc_with_gvl, (void *)&oar);
 }
 else {

     fprintf(stderr, "[FATAL] failed to allocate memory\n");
     exit(1);
 }
    }
}



void
Init_stack(volatile VALUE *addr)
{
    ruby_init_stack(addr);
}
static VALUE
gc_start_internal(int argc, VALUE *argv, VALUE self)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    int full_mark = 1, immediate_mark = 1, immediate_sweep = 1;
    VALUE opt = ((VALUE)RUBY_Qnil);
    static ID keyword_ids[3];

    rb_scan_args(argc, argv, "0:", &opt);

    if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) {
 VALUE kwvals[3];

 if (!keyword_ids[0]) {
     keyword_ids[0] = (__builtin_constant_p("full_mark") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("full_mark")), (long)strlen(("full_mark"))); (ID) rb_intern_id_cache; }) : rb_intern("full_mark"));
     keyword_ids[1] = (__builtin_constant_p("immediate_mark") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("immediate_mark")), (long)strlen(("immediate_mark"))); (ID) rb_intern_id_cache; }) : rb_intern("immediate_mark"));
     keyword_ids[2] = (__builtin_constant_p("immediate_sweep") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("immediate_sweep")), (long)strlen(("immediate_sweep"))); (ID) rb_intern_id_cache; }) : rb_intern("immediate_sweep"));
 }

 rb_get_kwargs(opt, keyword_ids, 0, 3, kwvals);

 if (kwvals[0] != ((VALUE)RUBY_Qundef)) full_mark = !(((VALUE)(kwvals[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
 if (kwvals[1] != ((VALUE)RUBY_Qundef)) immediate_mark = !(((VALUE)(kwvals[1]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
 if (kwvals[2] != ((VALUE)RUBY_Qundef)) immediate_sweep = !(((VALUE)(kwvals[2]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
    }

    garbage_collect(objspace, full_mark, immediate_mark, immediate_sweep, GPR_FLAG_METHOD);
    gc_finalize_deferred(objspace);

    return ((VALUE)RUBY_Qnil);
}

VALUE
rb_gc_start(void)
{
    rb_gc();
    return ((VALUE)RUBY_Qnil);
}

void
rb_gc(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    garbage_collect(objspace, 1, 1, 1, GPR_FLAG_CAPI);
    gc_finalize_deferred(objspace);
}

int
rb_during_gc(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return objspace->flags.during_gc;
}
size_t
rb_gc_count(void)
{
    return (*((rb_current_vm())->objspace)).profile.count;
}
static VALUE
gc_count(VALUE self)
{
    return rb_ulong2num_inline(rb_gc_count());
}

static VALUE
gc_info_decode(rb_objspace_t *objspace, const VALUE hash_or_key, const int orig_flags)
{
    static VALUE sym_major_by = ((VALUE)RUBY_Qnil), sym_gc_by, sym_immediate_sweep, sym_have_finalizer, sym_state;
    static VALUE sym_nofree, sym_oldgen, sym_shady, sym_force, sym_stress;

    static VALUE sym_oldmalloc;

    static VALUE sym_newobj, sym_malloc, sym_method, sym_capi;
    static VALUE sym_none, sym_marking, sym_sweeping;
    VALUE hash = ((VALUE)RUBY_Qnil), key = ((VALUE)RUBY_Qnil);
    VALUE major_by;
    VALUE flags = orig_flags ? orig_flags : objspace->profile.latest_gc_info;

    if (((((VALUE)(hash_or_key)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash_or_key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_key))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 key = hash_or_key;
    }
    else if (( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(hash_or_key))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((hash_or_key) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((hash_or_key) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((hash_or_key) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((hash_or_key) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(hash_or_key)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash_or_key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_key))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(hash_or_key))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(hash_or_key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_key))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(hash_or_key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_key))->flags & RUBY_T_MASK) == (RUBY_T_HASH)))) {
 hash = hash_or_key;
    }
    else {
 rb_raise(rb_eTypeError, "non-hash or symbol given");
    }

    if (sym_major_by == ((VALUE)RUBY_Qnil)) {

 sym_major_by = (rb_id2sym((__builtin_constant_p("major_by") ?  (rb_intern2(("major_by"), (long)strlen("major_by"))) : (rb_intern)("major_by"))));
 sym_gc_by = (rb_id2sym((__builtin_constant_p("gc_by") ?  (rb_intern2(("gc_by"), (long)strlen("gc_by"))) : (rb_intern)("gc_by"))));
 sym_immediate_sweep = (rb_id2sym((__builtin_constant_p("immediate_sweep") ?  (rb_intern2(("immediate_sweep"), (long)strlen("immediate_sweep"))) : (rb_intern)("immediate_sweep"))));
 sym_have_finalizer = (rb_id2sym((__builtin_constant_p("have_finalizer") ?  (rb_intern2(("have_finalizer"), (long)strlen("have_finalizer"))) : (rb_intern)("have_finalizer"))));
 sym_state = (rb_id2sym((__builtin_constant_p("state") ?  (rb_intern2(("state"), (long)strlen("state"))) : (rb_intern)("state"))));

 sym_stress = (rb_id2sym((__builtin_constant_p("stress") ?  (rb_intern2(("stress"), (long)strlen("stress"))) : (rb_intern)("stress"))));
 sym_nofree = (rb_id2sym((__builtin_constant_p("nofree") ?  (rb_intern2(("nofree"), (long)strlen("nofree"))) : (rb_intern)("nofree"))));
 sym_oldgen = (rb_id2sym((__builtin_constant_p("oldgen") ?  (rb_intern2(("oldgen"), (long)strlen("oldgen"))) : (rb_intern)("oldgen"))));
 sym_shady = (rb_id2sym((__builtin_constant_p("shady") ?  (rb_intern2(("shady"), (long)strlen("shady"))) : (rb_intern)("shady"))));
 sym_force = (rb_id2sym((__builtin_constant_p("force") ?  (rb_intern2(("force"), (long)strlen("force"))) : (rb_intern)("force"))));

 sym_oldmalloc = (rb_id2sym((__builtin_constant_p("oldmalloc") ?  (rb_intern2(("oldmalloc"), (long)strlen("oldmalloc"))) : (rb_intern)("oldmalloc"))));

 sym_newobj = (rb_id2sym((__builtin_constant_p("newobj") ?  (rb_intern2(("newobj"), (long)strlen("newobj"))) : (rb_intern)("newobj"))));
 sym_malloc = (rb_id2sym((__builtin_constant_p("malloc") ?  (rb_intern2(("malloc"), (long)strlen("malloc"))) : (rb_intern)("malloc"))));
 sym_method = (rb_id2sym((__builtin_constant_p("method") ?  (rb_intern2(("method"), (long)strlen("method"))) : (rb_intern)("method"))));
 sym_capi = (rb_id2sym((__builtin_constant_p("capi") ?  (rb_intern2(("capi"), (long)strlen("capi"))) : (rb_intern)("capi"))));

 sym_none = (rb_id2sym((__builtin_constant_p("none") ?  (rb_intern2(("none"), (long)strlen("none"))) : (rb_intern)("none"))));
 sym_marking = (rb_id2sym((__builtin_constant_p("marking") ?  (rb_intern2(("marking"), (long)strlen("marking"))) : (rb_intern)("marking"))));
 sym_sweeping = (rb_id2sym((__builtin_constant_p("sweeping") ?  (rb_intern2(("sweeping"), (long)strlen("sweeping"))) : (rb_intern)("sweeping"))));

    }







    major_by =
      (flags & GPR_FLAG_MAJOR_BY_NOFREE) ? sym_nofree :
      (flags & GPR_FLAG_MAJOR_BY_OLDGEN) ? sym_oldgen :
      (flags & GPR_FLAG_MAJOR_BY_SHADY) ? sym_shady :
      (flags & GPR_FLAG_MAJOR_BY_FORCE) ? sym_force :

      (flags & GPR_FLAG_MAJOR_BY_OLDMALLOC) ? sym_oldmalloc :

      ((VALUE)RUBY_Qnil);
    if (key == sym_major_by) return (major_by); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, sym_major_by, (major_by));;

    if (key == sym_gc_by) return ((flags & GPR_FLAG_NEWOBJ) ? sym_newobj : (flags & GPR_FLAG_MALLOC) ? sym_malloc : (flags & GPR_FLAG_METHOD) ? sym_method : (flags & GPR_FLAG_CAPI) ? sym_capi : (flags & GPR_FLAG_STRESS) ? sym_stress : ((VALUE)RUBY_Qnil)); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, sym_gc_by, ((flags & GPR_FLAG_NEWOBJ) ? sym_newobj : (flags & GPR_FLAG_MALLOC) ? sym_malloc : (flags & GPR_FLAG_METHOD) ? sym_method : (flags & GPR_FLAG_CAPI) ? sym_capi : (flags & GPR_FLAG_STRESS) ? sym_stress : ((VALUE)RUBY_Qnil)));;
    if (key == sym_have_finalizer) return ((flags & GPR_FLAG_HAVE_FINALIZE) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, sym_have_finalizer, ((flags & GPR_FLAG_HAVE_FINALIZE) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)));;
    if (key == sym_immediate_sweep) return ((flags & GPR_FLAG_IMMEDIATE_SWEEP) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, sym_immediate_sweep, ((flags & GPR_FLAG_IMMEDIATE_SWEEP) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)));;

    if (orig_flags == 0) {
 if (key == sym_state) return (gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_none ? sym_none : gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_marking ? sym_marking : sym_sweeping); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, sym_state, (gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_none ? sym_none : gc_mode_verify((enum gc_mode)(objspace)->flags.mode) == gc_mode_marking ? sym_marking : sym_sweeping));;

    }


    if (!!((VALUE)(key) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eArgError, "unknown key: %li\v", rb_sym2str(key));
    }

    return hash;
}

VALUE
rb_gc_latest_gc_info(VALUE key)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return gc_info_decode(objspace, key, 0);
}
static VALUE
gc_latest_gc_info(int argc, VALUE *argv, VALUE self)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE arg = ((VALUE)RUBY_Qnil);

    if (rb_scan_args(argc, argv, "01", &arg) == 1) {
 if (!((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) && !( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(arg))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((arg) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((arg) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((arg) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((arg) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(arg))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_HASH)))) {
     rb_raise(rb_eTypeError, "non-hash or symbol given");
 }
    }

    if (arg == ((VALUE)RUBY_Qnil)) {
 arg = rb_hash_new();
    }

    return gc_info_decode(objspace, arg, 0);
}

enum gc_stat_sym {
    gc_stat_sym_count,
    gc_stat_sym_heap_allocated_pages,
    gc_stat_sym_heap_sorted_length,
    gc_stat_sym_heap_allocatable_pages,
    gc_stat_sym_heap_available_slots,
    gc_stat_sym_heap_live_slots,
    gc_stat_sym_heap_free_slots,
    gc_stat_sym_heap_final_slots,
    gc_stat_sym_heap_marked_slots,
    gc_stat_sym_heap_eden_pages,
    gc_stat_sym_heap_tomb_pages,
    gc_stat_sym_total_allocated_pages,
    gc_stat_sym_total_freed_pages,
    gc_stat_sym_total_allocated_objects,
    gc_stat_sym_total_freed_objects,
    gc_stat_sym_malloc_increase_bytes,
    gc_stat_sym_malloc_increase_bytes_limit,

    gc_stat_sym_minor_gc_count,
    gc_stat_sym_major_gc_count,
    gc_stat_sym_remembered_wb_unprotected_objects,
    gc_stat_sym_remembered_wb_unprotected_objects_limit,
    gc_stat_sym_old_objects,
    gc_stat_sym_old_objects_limit,

    gc_stat_sym_oldmalloc_increase_bytes,
    gc_stat_sym_oldmalloc_increase_bytes_limit,
    gc_stat_sym_last
};

enum gc_stat_compat_sym {
    gc_stat_compat_sym_gc_stat_heap_used,
    gc_stat_compat_sym_heap_eden_page_length,
    gc_stat_compat_sym_heap_tomb_page_length,
    gc_stat_compat_sym_heap_increment,
    gc_stat_compat_sym_heap_length,
    gc_stat_compat_sym_heap_live_slot,
    gc_stat_compat_sym_heap_free_slot,
    gc_stat_compat_sym_heap_final_slot,
    gc_stat_compat_sym_heap_swept_slot,

    gc_stat_compat_sym_remembered_shady_object,
    gc_stat_compat_sym_remembered_shady_object_limit,
    gc_stat_compat_sym_old_object,
    gc_stat_compat_sym_old_object_limit,

    gc_stat_compat_sym_total_allocated_object,
    gc_stat_compat_sym_total_freed_object,
    gc_stat_compat_sym_malloc_increase,
    gc_stat_compat_sym_malloc_limit,

    gc_stat_compat_sym_oldmalloc_increase,
    gc_stat_compat_sym_oldmalloc_limit,

    gc_stat_compat_sym_last
};

static VALUE gc_stat_symbols[gc_stat_sym_last];
static VALUE gc_stat_compat_symbols[gc_stat_compat_sym_last];
static VALUE gc_stat_compat_table;

static void
setup_gc_stat_symbols(void)
{
    if (gc_stat_symbols[0] == 0) {

 gc_stat_symbols[gc_stat_sym_count] = (rb_id2sym((__builtin_constant_p("count") ?  (rb_intern2(("count"), (long)strlen("count"))) : (rb_intern)("count"))));
 gc_stat_symbols[gc_stat_sym_heap_allocated_pages] = (rb_id2sym((__builtin_constant_p("heap_allocated_pages") ?  (rb_intern2(("heap_allocated_pages"), (long)strlen("heap_allocated_pages"))) : (rb_intern)("heap_allocated_pages"))));
 gc_stat_symbols[gc_stat_sym_heap_sorted_length] = (rb_id2sym((__builtin_constant_p("heap_sorted_length") ?  (rb_intern2(("heap_sorted_length"), (long)strlen("heap_sorted_length"))) : (rb_intern)("heap_sorted_length"))));
 gc_stat_symbols[gc_stat_sym_heap_allocatable_pages] = (rb_id2sym((__builtin_constant_p("heap_allocatable_pages") ?  (rb_intern2(("heap_allocatable_pages"), (long)strlen("heap_allocatable_pages"))) : (rb_intern)("heap_allocatable_pages"))));
 gc_stat_symbols[gc_stat_sym_heap_available_slots] = (rb_id2sym((__builtin_constant_p("heap_available_slots") ?  (rb_intern2(("heap_available_slots"), (long)strlen("heap_available_slots"))) : (rb_intern)("heap_available_slots"))));
 gc_stat_symbols[gc_stat_sym_heap_live_slots] = (rb_id2sym((__builtin_constant_p("heap_live_slots") ?  (rb_intern2(("heap_live_slots"), (long)strlen("heap_live_slots"))) : (rb_intern)("heap_live_slots"))));
 gc_stat_symbols[gc_stat_sym_heap_free_slots] = (rb_id2sym((__builtin_constant_p("heap_free_slots") ?  (rb_intern2(("heap_free_slots"), (long)strlen("heap_free_slots"))) : (rb_intern)("heap_free_slots"))));
 gc_stat_symbols[gc_stat_sym_heap_final_slots] = (rb_id2sym((__builtin_constant_p("heap_final_slots") ?  (rb_intern2(("heap_final_slots"), (long)strlen("heap_final_slots"))) : (rb_intern)("heap_final_slots"))));
 gc_stat_symbols[gc_stat_sym_heap_marked_slots] = (rb_id2sym((__builtin_constant_p("heap_marked_slots") ?  (rb_intern2(("heap_marked_slots"), (long)strlen("heap_marked_slots"))) : (rb_intern)("heap_marked_slots"))));
 gc_stat_symbols[gc_stat_sym_heap_eden_pages] = (rb_id2sym((__builtin_constant_p("heap_eden_pages") ?  (rb_intern2(("heap_eden_pages"), (long)strlen("heap_eden_pages"))) : (rb_intern)("heap_eden_pages"))));
 gc_stat_symbols[gc_stat_sym_heap_tomb_pages] = (rb_id2sym((__builtin_constant_p("heap_tomb_pages") ?  (rb_intern2(("heap_tomb_pages"), (long)strlen("heap_tomb_pages"))) : (rb_intern)("heap_tomb_pages"))));
 gc_stat_symbols[gc_stat_sym_total_allocated_pages] = (rb_id2sym((__builtin_constant_p("total_allocated_pages") ?  (rb_intern2(("total_allocated_pages"), (long)strlen("total_allocated_pages"))) : (rb_intern)("total_allocated_pages"))));
 gc_stat_symbols[gc_stat_sym_total_freed_pages] = (rb_id2sym((__builtin_constant_p("total_freed_pages") ?  (rb_intern2(("total_freed_pages"), (long)strlen("total_freed_pages"))) : (rb_intern)("total_freed_pages"))));
 gc_stat_symbols[gc_stat_sym_total_allocated_objects] = (rb_id2sym((__builtin_constant_p("total_allocated_objects") ?  (rb_intern2(("total_allocated_objects"), (long)strlen("total_allocated_objects"))) : (rb_intern)("total_allocated_objects"))));
 gc_stat_symbols[gc_stat_sym_total_freed_objects] = (rb_id2sym((__builtin_constant_p("total_freed_objects") ?  (rb_intern2(("total_freed_objects"), (long)strlen("total_freed_objects"))) : (rb_intern)("total_freed_objects"))));
 gc_stat_symbols[gc_stat_sym_malloc_increase_bytes] = (rb_id2sym((__builtin_constant_p("malloc_increase_bytes") ?  (rb_intern2(("malloc_increase_bytes"), (long)strlen("malloc_increase_bytes"))) : (rb_intern)("malloc_increase_bytes"))));
 gc_stat_symbols[gc_stat_sym_malloc_increase_bytes_limit] = (rb_id2sym((__builtin_constant_p("malloc_increase_bytes_limit") ?  (rb_intern2(("malloc_increase_bytes_limit"), (long)strlen("malloc_increase_bytes_limit"))) : (rb_intern)("malloc_increase_bytes_limit"))));

 gc_stat_symbols[gc_stat_sym_minor_gc_count] = (rb_id2sym((__builtin_constant_p("minor_gc_count") ?  (rb_intern2(("minor_gc_count"), (long)strlen("minor_gc_count"))) : (rb_intern)("minor_gc_count"))));
 gc_stat_symbols[gc_stat_sym_major_gc_count] = (rb_id2sym((__builtin_constant_p("major_gc_count") ?  (rb_intern2(("major_gc_count"), (long)strlen("major_gc_count"))) : (rb_intern)("major_gc_count"))));
 gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects] = (rb_id2sym((__builtin_constant_p("remembered_wb_unprotected_objects") ?  (rb_intern2(("remembered_wb_unprotected_objects"), (long)strlen("remembered_wb_unprotected_objects"))) : (rb_intern)("remembered_wb_unprotected_objects"))));
 gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects_limit] = (rb_id2sym((__builtin_constant_p("remembered_wb_unprotected_objects_limit") ?  (rb_intern2(("remembered_wb_unprotected_objects_limit"), (long)strlen("remembered_wb_unprotected_objects_limit"))) : (rb_intern)("remembered_wb_unprotected_objects_limit"))));
 gc_stat_symbols[gc_stat_sym_old_objects] = (rb_id2sym((__builtin_constant_p("old_objects") ?  (rb_intern2(("old_objects"), (long)strlen("old_objects"))) : (rb_intern)("old_objects"))));
 gc_stat_symbols[gc_stat_sym_old_objects_limit] = (rb_id2sym((__builtin_constant_p("old_objects_limit") ?  (rb_intern2(("old_objects_limit"), (long)strlen("old_objects_limit"))) : (rb_intern)("old_objects_limit"))));

 gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes] = (rb_id2sym((__builtin_constant_p("oldmalloc_increase_bytes") ?  (rb_intern2(("oldmalloc_increase_bytes"), (long)strlen("oldmalloc_increase_bytes"))) : (rb_intern)("oldmalloc_increase_bytes"))));
 gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes_limit] = (rb_id2sym((__builtin_constant_p("oldmalloc_increase_bytes_limit") ?  (rb_intern2(("oldmalloc_increase_bytes_limit"), (long)strlen("oldmalloc_increase_bytes_limit"))) : (rb_intern)("oldmalloc_increase_bytes_limit"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_gc_stat_heap_used] = (rb_id2sym((__builtin_constant_p("gc_stat_heap_used") ?  (rb_intern2(("gc_stat_heap_used"), (long)strlen("gc_stat_heap_used"))) : (rb_intern)("gc_stat_heap_used"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_eden_page_length] = (rb_id2sym((__builtin_constant_p("heap_eden_page_length") ?  (rb_intern2(("heap_eden_page_length"), (long)strlen("heap_eden_page_length"))) : (rb_intern)("heap_eden_page_length"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_tomb_page_length] = (rb_id2sym((__builtin_constant_p("heap_tomb_page_length") ?  (rb_intern2(("heap_tomb_page_length"), (long)strlen("heap_tomb_page_length"))) : (rb_intern)("heap_tomb_page_length"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_increment] = (rb_id2sym((__builtin_constant_p("heap_increment") ?  (rb_intern2(("heap_increment"), (long)strlen("heap_increment"))) : (rb_intern)("heap_increment"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_length] = (rb_id2sym((__builtin_constant_p("heap_length") ?  (rb_intern2(("heap_length"), (long)strlen("heap_length"))) : (rb_intern)("heap_length"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_live_slot] = (rb_id2sym((__builtin_constant_p("heap_live_slot") ?  (rb_intern2(("heap_live_slot"), (long)strlen("heap_live_slot"))) : (rb_intern)("heap_live_slot"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_free_slot] = (rb_id2sym((__builtin_constant_p("heap_free_slot") ?  (rb_intern2(("heap_free_slot"), (long)strlen("heap_free_slot"))) : (rb_intern)("heap_free_slot"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_final_slot] = (rb_id2sym((__builtin_constant_p("heap_final_slot") ?  (rb_intern2(("heap_final_slot"), (long)strlen("heap_final_slot"))) : (rb_intern)("heap_final_slot"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_heap_swept_slot] = (rb_id2sym((__builtin_constant_p("heap_swept_slot") ?  (rb_intern2(("heap_swept_slot"), (long)strlen("heap_swept_slot"))) : (rb_intern)("heap_swept_slot"))));






 gc_stat_compat_symbols[gc_stat_compat_sym_total_allocated_object] = (rb_id2sym((__builtin_constant_p("total_allocated_object") ?  (rb_intern2(("total_allocated_object"), (long)strlen("total_allocated_object"))) : (rb_intern)("total_allocated_object"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_total_freed_object] = (rb_id2sym((__builtin_constant_p("total_freed_object") ?  (rb_intern2(("total_freed_object"), (long)strlen("total_freed_object"))) : (rb_intern)("total_freed_object"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_malloc_increase] = (rb_id2sym((__builtin_constant_p("malloc_increase") ?  (rb_intern2(("malloc_increase"), (long)strlen("malloc_increase"))) : (rb_intern)("malloc_increase"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_malloc_limit] = (rb_id2sym((__builtin_constant_p("malloc_limit") ?  (rb_intern2(("malloc_limit"), (long)strlen("malloc_limit"))) : (rb_intern)("malloc_limit"))));

 gc_stat_compat_symbols[gc_stat_compat_sym_oldmalloc_increase] = (rb_id2sym((__builtin_constant_p("oldmalloc_increase") ?  (rb_intern2(("oldmalloc_increase"), (long)strlen("oldmalloc_increase"))) : (rb_intern)("oldmalloc_increase"))));
 gc_stat_compat_symbols[gc_stat_compat_sym_oldmalloc_limit] = (rb_id2sym((__builtin_constant_p("oldmalloc_limit") ?  (rb_intern2(("oldmalloc_limit"), (long)strlen("oldmalloc_limit"))) : (rb_intern)("oldmalloc_limit"))));



 {
     VALUE table = gc_stat_compat_table = rb_hash_new();
     rb_obj_hide(table);
     rb_gc_register_mark_object(table);




     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_gc_stat_heap_used], gc_stat_symbols[gc_stat_sym_heap_allocated_pages]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_eden_page_length], gc_stat_symbols[gc_stat_sym_heap_eden_pages]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_tomb_page_length], gc_stat_symbols[gc_stat_sym_heap_tomb_pages]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_increment], gc_stat_symbols[gc_stat_sym_heap_allocatable_pages]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_length], gc_stat_symbols[gc_stat_sym_heap_sorted_length]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_live_slot], gc_stat_symbols[gc_stat_sym_heap_live_slots]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_free_slot], gc_stat_symbols[gc_stat_sym_heap_free_slots]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_heap_final_slot], gc_stat_symbols[gc_stat_sym_heap_final_slots]);






     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_total_allocated_object], gc_stat_symbols[gc_stat_sym_total_allocated_objects]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_total_freed_object], gc_stat_symbols[gc_stat_sym_total_freed_objects]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_malloc_increase], gc_stat_symbols[gc_stat_sym_malloc_increase_bytes]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_malloc_limit], gc_stat_symbols[gc_stat_sym_malloc_increase_bytes_limit]);

     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_oldmalloc_increase], gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes]);
     rb_hash_aset(table, gc_stat_compat_symbols[gc_stat_compat_sym_oldmalloc_limit], gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes_limit]);



     rb_obj_freeze(table);
 }
    }
}

static VALUE
compat_key(VALUE key)
{
    VALUE new_key = rb_hash_lookup(gc_stat_compat_table, key);

    if (!!((VALUE)(new_key) != ((VALUE)RUBY_Qnil))) {
 static int warned = 0;
 if (warned == 0) {
     rb_warn("GC.stat keys were changed from Ruby 2.1. In this case, you refer to obsolete `%li\v' (new key is `%li\v'). Please check <https://bugs.ruby-lang.org/issues/9924> for more information.",
      key, new_key);
     warned = 1;
 }
    }

    return new_key;
}

static VALUE
default_proc_for_compat_func(VALUE hash, VALUE dmy, int argc, VALUE *argv)
{
    VALUE key, new_key;

    (!( (((RUBY_T_HASH)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(hash)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_HASH)) == RUBY_T_TRUE) ? (((VALUE)(hash)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_HASH)) == RUBY_T_FALSE) ? (((VALUE)(hash)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_HASH)) == RUBY_T_NIL) ? (((VALUE)(hash)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_HASH)) == RUBY_T_UNDEF) ? (((VALUE)(hash)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_HASH)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(hash))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(hash)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(hash)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(hash)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_HASH)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(hash)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(hash)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(hash)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(hash)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(hash)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(hash)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(hash)))->flags & RUBY_T_MASK) == ((RUBY_T_HASH)))) || ((RUBY_T_HASH) == RUBY_T_DATA && (((struct RTypedData*)(hash))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(hash), (RUBY_T_HASH)) : (void)0);
    rb_check_arity(argc, 2, 2);
    key = argv[1];

    if ((new_key = compat_key(key)) != ((VALUE)RUBY_Qnil)) {
 return rb_hash_lookup(hash, new_key);
    }

    return ((VALUE)RUBY_Qnil);
}

static size_t
gc_stat_internal(VALUE hash_or_sym)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    VALUE hash = ((VALUE)RUBY_Qnil), key = ((VALUE)RUBY_Qnil);

    setup_gc_stat_symbols();

    if (( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(hash_or_sym))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((hash_or_sym) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((hash_or_sym) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((hash_or_sym) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((hash_or_sym) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(hash_or_sym)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash_or_sym) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_sym) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_sym))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(hash_or_sym))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(hash_or_sym) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_sym) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_sym))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(hash_or_sym) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_sym) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_sym))->flags & RUBY_T_MASK) == (RUBY_T_HASH)))) {
 hash = hash_or_sym;

 if (!((VALUE)((((struct RHash*)(hash))->ifnone)) != ((VALUE)RUBY_Qnil))) {
     static VALUE default_proc_for_compat = 0;
     if (default_proc_for_compat == 0) {
  default_proc_for_compat = rb_proc_new(default_proc_for_compat_func, ((VALUE)RUBY_Qnil));
  rb_gc_register_mark_object(default_proc_for_compat);
     }
     rb_hash_set_default_proc(hash, default_proc_for_compat);
 }
    }
    else if (((((VALUE)(hash_or_sym)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash_or_sym) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash_or_sym) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash_or_sym))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 key = hash_or_sym;
    }
    else {
 rb_raise(rb_eTypeError, "non-hash or symbol argument");
    }







  again:
    if (key == gc_stat_symbols[gc_stat_sym_count]) return objspace->profile.count; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_count], rb_ulong2num_inline(objspace->profile.count));;


    if (key == gc_stat_symbols[gc_stat_sym_heap_allocated_pages]) return objspace->heap_pages.allocated_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_allocated_pages], rb_ulong2num_inline(objspace->heap_pages.allocated_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_sorted_length]) return objspace->heap_pages.sorted_length; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_sorted_length], rb_ulong2num_inline(objspace->heap_pages.sorted_length));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_allocatable_pages]) return objspace->heap_pages.allocatable_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_allocatable_pages], rb_ulong2num_inline(objspace->heap_pages.allocatable_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_available_slots]) return objspace_available_slots(objspace); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_available_slots], rb_ulong2num_inline(objspace_available_slots(objspace)));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_live_slots]) return objspace_live_slots(objspace); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_live_slots], rb_ulong2num_inline(objspace_live_slots(objspace)));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_free_slots]) return objspace_free_slots(objspace); else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_free_slots], rb_ulong2num_inline(objspace_free_slots(objspace)));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_final_slots]) return objspace->heap_pages.final_slots; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_final_slots], rb_ulong2num_inline(objspace->heap_pages.final_slots));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_marked_slots]) return objspace->marked_slots; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_marked_slots], rb_ulong2num_inline(objspace->marked_slots));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_eden_pages]) return (&objspace->eden_heap)->total_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_eden_pages], rb_ulong2num_inline((&objspace->eden_heap)->total_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_heap_tomb_pages]) return (&objspace->tomb_heap)->total_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_heap_tomb_pages], rb_ulong2num_inline((&objspace->tomb_heap)->total_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_total_allocated_pages]) return objspace->profile.total_allocated_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_total_allocated_pages], rb_ulong2num_inline(objspace->profile.total_allocated_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_total_freed_pages]) return objspace->profile.total_freed_pages; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_total_freed_pages], rb_ulong2num_inline(objspace->profile.total_freed_pages));;
    if (key == gc_stat_symbols[gc_stat_sym_total_allocated_objects]) return objspace->total_allocated_objects; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_total_allocated_objects], rb_ulong2num_inline(objspace->total_allocated_objects));;
    if (key == gc_stat_symbols[gc_stat_sym_total_freed_objects]) return objspace->profile.total_freed_objects; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_total_freed_objects], rb_ulong2num_inline(objspace->profile.total_freed_objects));;
    if (key == gc_stat_symbols[gc_stat_sym_malloc_increase_bytes]) return objspace->malloc_params.increase; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_malloc_increase_bytes], rb_ulong2num_inline(objspace->malloc_params.increase));;
    if (key == gc_stat_symbols[gc_stat_sym_malloc_increase_bytes_limit]) return objspace->malloc_params.limit; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_malloc_increase_bytes_limit], rb_ulong2num_inline(objspace->malloc_params.limit));;

    if (key == gc_stat_symbols[gc_stat_sym_minor_gc_count]) return objspace->profile.minor_gc_count; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_minor_gc_count], rb_ulong2num_inline(objspace->profile.minor_gc_count));;
    if (key == gc_stat_symbols[gc_stat_sym_major_gc_count]) return objspace->profile.major_gc_count; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_major_gc_count], rb_ulong2num_inline(objspace->profile.major_gc_count));;
    if (key == gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects]) return objspace->rgengc.uncollectible_wb_unprotected_objects; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects], rb_ulong2num_inline(objspace->rgengc.uncollectible_wb_unprotected_objects));;
    if (key == gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects_limit]) return objspace->rgengc.uncollectible_wb_unprotected_objects_limit; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_remembered_wb_unprotected_objects_limit], rb_ulong2num_inline(objspace->rgengc.uncollectible_wb_unprotected_objects_limit));;
    if (key == gc_stat_symbols[gc_stat_sym_old_objects]) return objspace->rgengc.old_objects; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_old_objects], rb_ulong2num_inline(objspace->rgengc.old_objects));;
    if (key == gc_stat_symbols[gc_stat_sym_old_objects_limit]) return objspace->rgengc.old_objects_limit; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_old_objects_limit], rb_ulong2num_inline(objspace->rgengc.old_objects_limit));;

    if (key == gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes]) return objspace->rgengc.oldmalloc_increase; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes], rb_ulong2num_inline(objspace->rgengc.oldmalloc_increase));;
    if (key == gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes_limit]) return objspace->rgengc.oldmalloc_increase_limit; else if (hash != ((VALUE)RUBY_Qnil)) rb_hash_aset(hash, gc_stat_symbols[gc_stat_sym_oldmalloc_increase_bytes_limit], rb_ulong2num_inline(objspace->rgengc.oldmalloc_increase_limit));;
    if (!!((VALUE)(key) != ((VALUE)RUBY_Qnil))) {
 VALUE new_key;
 if ((new_key = compat_key(key)) != ((VALUE)RUBY_Qnil)) {
     key = new_key;
     goto again;
 }
 rb_raise(rb_eArgError, "unknown key: %li\v", rb_sym2str(key));
    }
    return 0;
}
static VALUE
gc_stat(int argc, VALUE *argv, VALUE self)
{
    VALUE arg = ((VALUE)RUBY_Qnil);

    if (rb_scan_args(argc, argv, "01", &arg) == 1) {
 if (((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
     size_t value = gc_stat_internal(arg);
     return rb_ulong2num_inline(value);
 }
 else if (!( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(arg))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((arg) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((arg) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((arg) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((arg) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(arg))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_HASH)))) {
     rb_raise(rb_eTypeError, "non-hash or symbol given");
 }
    }

    if (arg == ((VALUE)RUBY_Qnil)) {
        arg = rb_hash_new();
    }
    gc_stat_internal(arg);
    return arg;
}

size_t
rb_gc_stat(VALUE key)
{
    if (((((VALUE)(key)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(key) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(key) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(key))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 size_t value = gc_stat_internal(key);
 return value;
    }
    else {
 gc_stat_internal(key);
 return 0;
    }
}
static VALUE
gc_stress_get(VALUE self)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return objspace->gc_stress_mode;
}

static void
gc_stress_set(rb_objspace_t *objspace, VALUE flag)
{
    objspace->flags.gc_stressful = !(((VALUE)(flag) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
    objspace->gc_stress_mode = flag;
}
static VALUE
gc_stress_set_m(VALUE self, VALUE flag)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    gc_stress_set(objspace, flag);
    return flag;
}
VALUE
rb_gc_enable(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    int old = objspace->flags.dont_gc;

    objspace->flags.dont_gc = 0;
    return old ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
VALUE
rb_gc_disable(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    int old = objspace->flags.dont_gc;

    gc_rest(objspace);

    objspace->flags.dont_gc = 1;
    return old ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}

static int
get_envparam_size(const char *name, size_t *default_value, size_t lower_bound)
{
    char *ptr = getenv(name);
    ssize_t val;

    if (ptr != ((void*)0) && *ptr) {
 size_t unit = 0;
 char *end;

 val = strtoll(ptr, &end, 0);



 switch (*end) {
   case 'k': case 'K':
     unit = 1024;
     ++end;
     break;
   case 'm': case 'M':
     unit = 1024*1024;
     ++end;
     break;
   case 'g': case 'G':
     unit = 1024*1024*1024;
     ++end;
     break;
 }
 while (*end && ((*__ctype_b_loc ())[(int) (((unsigned char)*end))] & (unsigned short int) _ISspace)) end++;
 if (*end) {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) fprintf(stderr, "invalid string for %s: %s\n", name, ptr);
     return 0;
 }
 if (unit > 0) {
     if (val < -(ssize_t)((18446744073709551615UL) / 2 / unit) || (ssize_t)((18446744073709551615UL) / 2 / unit) < val) {
  if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) fprintf(stderr, "%s=%s is ignored because it overflows\n", name, ptr);
  return 0;
     }
     val *= unit;
 }
 if (val > 0 && (size_t)val > lower_bound) {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
  fprintf(stderr, "%s=%zd (default value: %zu)\n", name, val, *default_value);
     }
     *default_value = (size_t)val;
     return 1;
 }
 else {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
  fprintf(stderr, "%s=%zd (default value: %zu) is ignored because it must be greater than %zu.\n",
   name, val, *default_value, lower_bound);
     }
     return 0;
 }
    }
    return 0;
}

static int
get_envparam_double(const char *name, double *default_value, double lower_bound, double upper_bound, int accept_zero)
{
    char *ptr = getenv(name);
    double val;

    if (ptr != ((void*)0) && *ptr) {
 char *end;
 val = ruby_strtod((ptr),(&end));
 if (!*ptr || *end) {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) fprintf(stderr, "invalid string for %s: %s\n", name, ptr);
     return 0;
 }

 if (accept_zero && val == 0.0) {
     goto accept;
 }
 else if (val <= lower_bound) {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
  fprintf(stderr, "%s=%f (default value: %f) is ignored because it must be greater than %f.\n",
   name, val, *default_value, lower_bound);
     }
 }
 else if (upper_bound != 0.0 &&
   val > upper_bound) {
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
  fprintf(stderr, "%s=%f (default value: %f) is ignored because it must be lower than %f.\n",
   name, val, *default_value, upper_bound);
     }
 }
 else {
   accept:
     if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) fprintf(stderr, "%s=%f (default value: %f)\n", name, val, *default_value);
     *default_value = val;
     return 1;
 }
    }
    return 0;
}

static void
gc_set_initial_pages(void)
{
    size_t min_pages;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    min_pages = gc_params.heap_init_slots / HEAP_PAGE_OBJ_LIMIT;
    if (min_pages > (&objspace->eden_heap)->total_pages) {
 heap_add_pages(objspace, (&objspace->eden_heap), min_pages - (&objspace->eden_heap)->total_pages);
    }
}
void
ruby_gc_set_params(int safe_level)
{
    if (safe_level > 0) return;


    if (get_envparam_size("RUBY_GC_HEAP_FREE_SLOTS", &gc_params.heap_free_slots, 0)) {

    }
    else if (get_envparam_size("RUBY_FREE_MIN", &gc_params.heap_free_slots, 0)) {
 rb_warn("RUBY_FREE_MIN is obsolete. Use RUBY_GC_HEAP_FREE_SLOTS instead.");
    }


    if (get_envparam_size("RUBY_GC_HEAP_INIT_SLOTS", &gc_params.heap_init_slots, 0)) {
 gc_set_initial_pages();
    }
    else if (get_envparam_size("RUBY_HEAP_MIN_SLOTS", &gc_params.heap_init_slots, 0)) {
 rb_warn("RUBY_HEAP_MIN_SLOTS is obsolete. Use RUBY_GC_HEAP_INIT_SLOTS instead.");
 gc_set_initial_pages();
    }

    get_envparam_double("RUBY_GC_HEAP_GROWTH_FACTOR", &gc_params.growth_factor, 1.0, 0.0, 0);
    get_envparam_size ("RUBY_GC_HEAP_GROWTH_MAX_SLOTS", &gc_params.growth_max_slots, 0);
    get_envparam_double("RUBY_GC_HEAP_FREE_SLOTS_MIN_RATIO", &gc_params.heap_free_slots_min_ratio,
   0.0, 1.0, 0);
    get_envparam_double("RUBY_GC_HEAP_FREE_SLOTS_MAX_RATIO", &gc_params.heap_free_slots_max_ratio,
   gc_params.heap_free_slots_min_ratio, 1.0, 0);
    get_envparam_double("RUBY_GC_HEAP_FREE_SLOTS_GOAL_RATIO", &gc_params.heap_free_slots_goal_ratio,
   gc_params.heap_free_slots_min_ratio, gc_params.heap_free_slots_max_ratio, 1);
    get_envparam_double("RUBY_GC_HEAP_OLDOBJECT_LIMIT_FACTOR", &gc_params.oldobject_limit_factor, 0.0, 0.0, 1);

    get_envparam_size ("RUBY_GC_MALLOC_LIMIT", &gc_params.malloc_limit_min, 0);
    get_envparam_size ("RUBY_GC_MALLOC_LIMIT_MAX", &gc_params.malloc_limit_max, 0);
    get_envparam_double("RUBY_GC_MALLOC_LIMIT_GROWTH_FACTOR", &gc_params.malloc_limit_growth_factor, 1.0, 0.0, 0);


    if (get_envparam_size("RUBY_GC_OLDMALLOC_LIMIT", &gc_params.oldmalloc_limit_min, 0)) {
 rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
 objspace->rgengc.oldmalloc_increase_limit = gc_params.oldmalloc_limit_min;
    }
    get_envparam_size ("RUBY_GC_OLDMALLOC_LIMIT_MAX", &gc_params.oldmalloc_limit_max, 0);
    get_envparam_double("RUBY_GC_OLDMALLOC_LIMIT_GROWTH_FACTOR", &gc_params.oldmalloc_limit_growth_factor, 1.0, 0.0, 0);

}

void
rb_objspace_reachable_objects_from(VALUE obj, void (func)(VALUE, void *), void *data)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    if (is_markable_object(objspace, obj)) {
 struct mark_func_data_struct mfd;
 mfd.mark_func = func;
 mfd.data = data;
 do { struct mark_func_data_struct *prev_mark_func_data = objspace->mark_func_data; objspace->mark_func_data = (&mfd);;
 gc_mark_children(objspace, obj);
 objspace->mark_func_data = prev_mark_func_data;} while (0);
    }
}

struct root_objects_data {
    const char *category;
    void (*func)(const char *category, VALUE, void *);
    void *data;
};

static void
root_objects_from(VALUE obj, void *ptr)
{
    const struct root_objects_data *data = (struct root_objects_data *)ptr;
    (*data->func)(data->category, obj, data->data);
}

void
rb_objspace_reachable_objects_from_root(void (func)(const char *category, VALUE, void *), void *passing_data)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    struct root_objects_data data;
    struct mark_func_data_struct mfd;

    data.func = func;
    data.data = passing_data;

    mfd.mark_func = root_objects_from;
    mfd.data = &data;

    do { struct mark_func_data_struct *prev_mark_func_data = objspace->mark_func_data; objspace->mark_func_data = (&mfd);;
    gc_mark_roots(objspace, &data.category);
    objspace->mark_func_data = prev_mark_func_data;} while (0);
}





static void objspace_xfree(rb_objspace_t *objspace, void *ptr, size_t size);

static void *
negative_size_allocation_error_with_gvl(void *ptr)
{
    rb_raise(rb_eNoMemError, "%s", (const char *)ptr);
    return 0;
}

static void
negative_size_allocation_error(const char *msg)
{
    if (ruby_thread_has_gvl_p()) {
 rb_raise(rb_eNoMemError, "%s", msg);
    }
    else {
 if (ruby_native_thread_p()) {
     rb_thread_call_with_gvl(negative_size_allocation_error_with_gvl, (void *)msg);
 }
 else {
     fprintf(stderr, "[FATAL] %s\n", msg);
     exit(1);
 }
    }
}

static void *
ruby_memerror_body(void *dummy)
{
    rb_memerror();
    return 0;
}

static void
ruby_memerror(void)
{
    if (ruby_thread_has_gvl_p()) {
 rb_memerror();
    }
    else {
 if (ruby_native_thread_p()) {
     rb_thread_call_with_gvl(ruby_memerror_body, 0);
 }
 else {

     fprintf(stderr, "[FATAL] failed to allocate memory\n");
     exit(1);
 }
    }
}

void
rb_memerror(void)
{
    rb_execution_context_t *ec = rb_current_execution_context();
    rb_objspace_t *objspace = ((rb_ec_vm_ptr(ec))->objspace);
    VALUE exc;

    if (objspace->flags.during_gc) gc_exit(objspace, "rb_memerror");

    exc = rb_current_vm()->special_exceptions[ruby_error_nomemory];
    if (!exc ||
 (((ec)->raised_flag & (RAISED_NOMEMORY)) != 0)) {
 fprintf(stderr, "[FATAL] failed to allocate memory\n");
 exit(1);
    }
    if ((((ec)->raised_flag & (RAISED_NOMEMORY)) != 0)) {
 ((ec)->raised_flag = 0);
    }
    else {
 ((ec)->raised_flag |= (RAISED_NOMEMORY));
 exc = ruby_vm_special_exception_copy(exc);
    }
    ec->errinfo = exc;
    rb_ec_tag_jump(ec, RUBY_TAG_RAISE);
}

static void *
aligned_malloc(size_t alignment, size_t size)
{
    void *res;







    if (posix_memalign(&res, alignment, size) == 0) {
        return res;
    }
    else {
        return ((void*)0);
    }
    ((void)0);
    ((void)0);
    return res;
}

static void
aligned_free(void *ptr)
{





    free(ptr);



}

static inline size_t
objspace_malloc_size(rb_objspace_t *objspace, void *ptr, size_t hint)
{

    return malloc_usable_size(ptr);



}

enum memop_type {
    MEMOP_TYPE_MALLOC = 1,
    MEMOP_TYPE_FREE = 2,
    MEMOP_TYPE_REALLOC = 3
};

static inline void
atomic_sub_nounderflow(size_t *var, size_t sub)
{
    if (sub == 0) return;

    while (1) {
 size_t val = *var;
 if (val < sub) sub = val;
 if (({ int oldvaldup = (val); __atomic_compare_exchange_n(&(*var), &oldvaldup, (val-sub), 0, 5, 5); oldvaldup; }) == val) break;
    }
}

static void
objspace_malloc_gc_stress(rb_objspace_t *objspace)
{
    if (objspace->flags.gc_stressful && ruby_native_thread_p()) {
 garbage_collect_with_gvl(objspace, ((((int)(long)(objspace->gc_stress_mode))&RUBY_FIXNUM_FLAG) && (((long)(((long)(objspace->gc_stress_mode))>>(int)(1))) & (1<<gc_stress_full_mark_after_malloc))), 1, 1, GPR_FLAG_STRESS | GPR_FLAG_MALLOC);
    }
}

static void
objspace_malloc_increase(rb_objspace_t *objspace, void *mem, size_t new_size, size_t old_size, enum memop_type type)
{
    if (new_size > old_size) {
 __atomic_fetch_add(&(objspace->malloc_params.increase), (new_size - old_size), 5);

 __atomic_fetch_add(&(objspace->rgengc.oldmalloc_increase), (new_size - old_size), 5);

    }
    else {
 atomic_sub_nounderflow(&objspace->malloc_params.increase, old_size - new_size);

 atomic_sub_nounderflow(&objspace->rgengc.oldmalloc_increase, old_size - new_size);

    }

    if (type == MEMOP_TYPE_MALLOC) {
      retry:
 if (objspace->malloc_params.increase > objspace->malloc_params.limit && ruby_native_thread_p() && !objspace->flags.dont_gc) {
     if (ruby_thread_has_gvl_p() && (1 && (((&objspace->eden_heap))->sweep_pages != 0))) {
  gc_rest(objspace);
  goto retry;
     }
     garbage_collect_with_gvl(objspace, 0, 0, 0, GPR_FLAG_MALLOC);
 }
    }
}

static inline size_t
objspace_malloc_prepare(rb_objspace_t *objspace, size_t size)
{
    if (size == 0) size = 1;





    return size;
}

static inline void *
objspace_malloc_fixup(rb_objspace_t *objspace, void *mem, size_t size)
{
    size = objspace_malloc_size(objspace, mem, size);
    objspace_malloc_increase(objspace, mem, size, 0, MEMOP_TYPE_MALLOC);






    return mem;
}
static void *
objspace_xmalloc0(rb_objspace_t *objspace, size_t size)
{
    void *mem;

    size = objspace_malloc_prepare(objspace, size);
    do { objspace_malloc_gc_stress(objspace); if (!(mem = malloc(size)) && (!garbage_collect_with_gvl(objspace, 1, 1, 1, GPR_FLAG_MALLOC) || !(mem = malloc(size)))) { ruby_memerror(); } } while (0);
    return objspace_malloc_fixup(objspace, mem, size);
}

static inline size_t
xmalloc2_size(const size_t count, const size_t elsize)
{
    size_t ret;
    if (rb_mul_size_overflow(count, elsize, 9223372036854775807L, &ret)) {
 ruby_malloc_size_overflow(count, elsize);
    }
    return ret;
}

static void *
objspace_xrealloc(rb_objspace_t *objspace, void *ptr, size_t new_size, size_t old_size)
{
    void *mem;

    if (!ptr) return objspace_xmalloc0(objspace, new_size);






    if (new_size == 0) {
 objspace_xfree(objspace, ptr, old_size);
 return 0;
    }







    old_size = objspace_malloc_size(objspace, ptr, old_size);
    do { objspace_malloc_gc_stress(objspace); if (!(mem = realloc(ptr, new_size)) && (!garbage_collect_with_gvl(objspace, 1, 1, 1, GPR_FLAG_MALLOC) || !(mem = realloc(ptr, new_size)))) { ruby_memerror(); } } while (0);
    new_size = objspace_malloc_size(objspace, mem, new_size);






    objspace_malloc_increase(objspace, mem, new_size, old_size, MEMOP_TYPE_REALLOC);

    return mem;
}

static void
objspace_xfree(rb_objspace_t *objspace, void *ptr, size_t old_size)
{




    old_size = objspace_malloc_size(objspace, ptr, old_size);

    free(ptr);

    objspace_malloc_increase(objspace, ptr, 0, old_size, MEMOP_TYPE_FREE);
}

static void *
ruby_xmalloc0(size_t size)
{
    return objspace_xmalloc0(&(*((rb_current_vm())->objspace)), size);
}

void *
ruby_xmalloc(size_t size)
{
    if ((ssize_t)size < 0) {
 negative_size_allocation_error("too large allocation size");
    }
    return ruby_xmalloc0(size);
}

void
ruby_malloc_size_overflow(size_t count, size_t elsize)
{
    rb_raise(rb_eArgError,
      "malloc: possible integer overflow (%zu*%zu)",
      count, elsize);
}

void *
ruby_xmalloc2(size_t n, size_t size)
{
    return objspace_xmalloc0(&(*((rb_current_vm())->objspace)), xmalloc2_size(n, size));
}

static void *
objspace_xcalloc(rb_objspace_t *objspace, size_t size)
{
    void *mem;

    size = objspace_malloc_prepare(objspace, size);
    do { objspace_malloc_gc_stress(objspace); if (!(mem = calloc(1, size)) && (!garbage_collect_with_gvl(objspace, 1, 1, 1, GPR_FLAG_MALLOC) || !(mem = calloc(1, size)))) { ruby_memerror(); } } while (0);
    return objspace_malloc_fixup(objspace, mem, size);
}

void *
ruby_xcalloc(size_t n, size_t size)
{
    return objspace_xcalloc(&(*((rb_current_vm())->objspace)), xmalloc2_size(n, size));
}




void *
ruby_sized_xrealloc(void *ptr, size_t new_size, size_t old_size)
{
    if ((ssize_t)new_size < 0) {
 negative_size_allocation_error("too large allocation size");
    }

    return objspace_xrealloc(&(*((rb_current_vm())->objspace)), ptr, new_size, old_size);
}

void *
ruby_xrealloc(void *ptr, size_t new_size)
{
    return ruby_sized_xrealloc(ptr, new_size, 0);
}




void *
ruby_sized_xrealloc2(void *ptr, size_t n, size_t size, size_t old_n)
{
    size_t len = size * n;
    if (n != 0 && size != len / n) {
 rb_raise(rb_eArgError, "realloc: possible integer overflow");
    }
    return objspace_xrealloc(&(*((rb_current_vm())->objspace)), ptr, len, old_n * size);
}

void *
ruby_xrealloc2(void *ptr, size_t n, size_t size)
{
    return ruby_sized_xrealloc2(ptr, n, size, 0);
}




void
ruby_sized_xfree(void *x, size_t size)
{
    if (x) {
 objspace_xfree(&(*((rb_current_vm())->objspace)), x, size);
    }
}

void
ruby_xfree(void *x)
{
    ruby_sized_xfree(x, 0);
}




void *
ruby_mimmalloc(size_t size)
{
    void *mem;



    mem = malloc(size);





    return mem;
}

void
ruby_mimfree(void *ptr)
{
    size_t *mem = (size_t *)ptr;



    free(mem);
}

void *
rb_alloc_tmp_buffer_with_count(volatile VALUE *store, size_t size, size_t cnt)
{
    rb_imemo_alloc_t *s;
    void *ptr;

    s = rb_imemo_alloc_new(0, 0, 0, 0);
    ptr = ruby_xmalloc0(size);
    s->ptr = (VALUE*)ptr;
    s->cnt = cnt;
    *store = (VALUE)s;
    return ptr;
}

void *
rb_alloc_tmp_buffer(volatile VALUE *store, long len)
{
    long cnt;

    if (len < 0 || (cnt = (long)(((len) + (sizeof(VALUE)) - 1) / (sizeof(VALUE)))) < 0) {
 rb_raise(rb_eArgError, "negative buffer size (or size too big)");
    }

    return rb_alloc_tmp_buffer_with_count(store, len, cnt);
}

void
rb_free_tmp_buffer(volatile VALUE *store)
{
    rb_imemo_alloc_t *s = (rb_imemo_alloc_t*)__atomic_exchange_n(&(*store), (0), 5);
    if (s) {
 void *ptr = __atomic_exchange_n(&(s->ptr), (0), 5);
 s->cnt = 0;
 ruby_xfree(ptr);
    }
}
void
rb_gc_adjust_memory_usage(ssize_t diff)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    if (diff > 0) {
 objspace_malloc_increase(objspace, 0, diff, 0, MEMOP_TYPE_REALLOC);
    }
    else if (diff < 0) {
 objspace_malloc_increase(objspace, 0, 0, -diff, MEMOP_TYPE_REALLOC);
    }
}





struct weakmap {
    st_table *obj2wmap;
    st_table *wmap2obj;
    VALUE final;
};
static void
wmap_mark(void *ptr)
{
    struct weakmap *w = ptr;



    rb_gc_mark(w->final);
}

static int
wmap_free_map(st_data_t key, st_data_t val, st_data_t arg)
{
    VALUE *ptr = (VALUE *)val;
    ruby_sized_xfree(ptr, (ptr[0] + 1) * sizeof(VALUE));
    return ST_CONTINUE;
}

static void
wmap_free(void *ptr)
{
    struct weakmap *w = ptr;
    st_foreach(w->obj2wmap, wmap_free_map, 0);
    st_free_table(w->obj2wmap);
    st_free_table(w->wmap2obj);
}

static int
wmap_memsize_map(st_data_t key, st_data_t val, st_data_t arg)
{
    VALUE *ptr = (VALUE *)val;
    *(size_t *)arg += (ptr[0] + 1) * sizeof(VALUE);
    return ST_CONTINUE;
}

static size_t
wmap_memsize(const void *ptr)
{
    size_t size;
    const struct weakmap *w = ptr;
    size = sizeof(*w);
    size += st_memsize(w->obj2wmap);
    size += st_memsize(w->wmap2obj);
    st_foreach(w->obj2wmap, wmap_memsize_map, (st_data_t)&size);
    return size;
}

static const rb_data_type_t weakmap_type = {
    "weakmap",
    {
 wmap_mark,
 wmap_free,
 wmap_memsize,
    },
    0, 0, 1
};

static VALUE
wmap_allocate(VALUE klass)
{
    struct weakmap *w;
    VALUE obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct weakmap), &weakmap_type); (void)((w) = (struct weakmap *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });
    w->obj2wmap = st_init_numtable();
    w->wmap2obj = st_init_numtable();
    w->final = rb_obj_method(obj, (rb_id2sym((__builtin_constant_p("finalize") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("finalize")), (long)strlen(("finalize"))); (ID) rb_intern_id_cache; }) : rb_intern("finalize")))));
    return obj;
}

static int
wmap_final_func(st_data_t *key, st_data_t *value, st_data_t arg, int existing)
{
    VALUE wmap, *ptr, size, i, j;
    if (!existing) return ST_STOP;
    wmap = (VALUE)arg, ptr = (VALUE *)*value;
    for (i = j = 1, size = ptr[0]; i <= size; ++i) {
 if (ptr[i] != wmap) {
     ptr[j++] = ptr[i];
 }
    }
    if (j == 1) {
 ruby_sized_xfree(ptr, i * sizeof(VALUE));
 return ST_DELETE;
    }
    if (j < i) {
 ptr = ruby_sized_xrealloc2(ptr, j + 1, sizeof(VALUE), i);
 ptr[0] = j;
 *value = (st_data_t)ptr;
    }
    return ST_CONTINUE;
}

static VALUE
wmap_finalize(VALUE self, VALUE objid)
{
    st_data_t orig, wmap, data;
    VALUE obj, *rids, i, size;
    struct weakmap *w;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));

    obj = ((objid) ^ RUBY_FIXNUM_FLAG);


    orig = (st_data_t)obj;
    if (st_delete(w->obj2wmap, &orig, &data)) {
 rids = (VALUE *)data;
 size = *rids++;
 for (i = 0; i < size; ++i) {
     wmap = (st_data_t)rids[i];
     st_delete(w->wmap2obj, &wmap, ((void*)0));
 }
 ruby_sized_xfree((VALUE *)data, (size + 1) * sizeof(VALUE));
    }

    wmap = (st_data_t)obj;
    if (st_delete(w->wmap2obj, &wmap, &orig)) {
 wmap = (st_data_t)obj;
 st_update(w->obj2wmap, orig, wmap_final_func, wmap);
    }
    return self;
}

struct wmap_iter_arg {
    rb_objspace_t *objspace;
    VALUE value;
};

static int
wmap_inspect_i(st_data_t key, st_data_t val, st_data_t arg)
{
    VALUE str = (VALUE)arg;
    VALUE k = (VALUE)key, v = (VALUE)val;

    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0] == '#') {
  ({ (__builtin_constant_p(", ")) ? rb_str_cat((str), (", "), (long)strlen(", ")) : rb_str_cat_cstr((str), (", ")); });
    }
    else {
  ({ (__builtin_constant_p(": ")) ? rb_str_cat((str), (": "), (long)strlen(": ")) : rb_str_cat_cstr((str), (": ")); });
 (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0] = '#';
    }
    k = (((VALUE)(k) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(k) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? rb_inspect(k) : rb_any_to_s(k);
    rb_str_append(str, k);
     ({ (__builtin_constant_p(" => ")) ? rb_str_cat((str), (" => "), (long)strlen(" => ")) : rb_str_cat_cstr((str), (" => ")); });
    v = (((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? rb_inspect(v) : rb_any_to_s(v);
    rb_str_append(str, v);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(k) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(k) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(k))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(k))->flags&(RUBY_FL_TAINT)))) : (void)0);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(v))->flags&(RUBY_FL_TAINT)))) : (void)0);

    return ST_CONTINUE;
}

static VALUE
wmap_inspect(VALUE self)
{
    VALUE str;
    VALUE c = rb_class_name(rb_class_of((VALUE)(self)));
    struct weakmap *w;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    str = rb_sprintf("-<%li\v:%p", c, (void *)self);
    if (w->wmap2obj) {
 st_foreach(w->wmap2obj, wmap_inspect_i, str);
    }
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0] = '#';
     ({ (__builtin_constant_p(">")) ? rb_str_cat((str), (">"), (long)strlen(">")) : rb_str_cat_cstr((str), (">")); });
    return str;
}

static int
wmap_each_i(st_data_t key, st_data_t val, st_data_t arg)
{
    rb_objspace_t *objspace = (rb_objspace_t *)arg;
    VALUE obj = (VALUE)val;
    if (is_id_value(objspace, obj) && is_live_object(objspace, obj)) {
 rb_yield_values(2, (VALUE)key, obj);
    }
    return ST_CONTINUE;
}


static VALUE
wmap_each(VALUE self)
{
    struct weakmap *w;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    st_foreach(w->wmap2obj, wmap_each_i, (st_data_t)objspace);
    return self;
}

static int
wmap_each_key_i(st_data_t key, st_data_t val, st_data_t arg)
{
    rb_objspace_t *objspace = (rb_objspace_t *)arg;
    VALUE obj = (VALUE)val;
    if (is_id_value(objspace, obj) && is_live_object(objspace, obj)) {
 rb_yield((VALUE)key);
    }
    return ST_CONTINUE;
}


static VALUE
wmap_each_key(VALUE self)
{
    struct weakmap *w;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    st_foreach(w->wmap2obj, wmap_each_key_i, (st_data_t)objspace);
    return self;
}

static int
wmap_each_value_i(st_data_t key, st_data_t val, st_data_t arg)
{
    rb_objspace_t *objspace = (rb_objspace_t *)arg;
    VALUE obj = (VALUE)val;
    if (is_id_value(objspace, obj) && is_live_object(objspace, obj)) {
 rb_yield(obj);
    }
    return ST_CONTINUE;
}


static VALUE
wmap_each_value(VALUE self)
{
    struct weakmap *w;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    st_foreach(w->wmap2obj, wmap_each_value_i, (st_data_t)objspace);
    return self;
}

static int
wmap_keys_i(st_data_t key, st_data_t val, st_data_t arg)
{
    struct wmap_iter_arg *argp = (struct wmap_iter_arg *)arg;
    rb_objspace_t *objspace = argp->objspace;
    VALUE ary = argp->value;
    VALUE obj = (VALUE)val;
    if (is_id_value(objspace, obj) && is_live_object(objspace, obj)) {
 rb_ary_push(ary, (VALUE)key);
    }
    return ST_CONTINUE;
}


static VALUE
wmap_keys(VALUE self)
{
    struct weakmap *w;
    struct wmap_iter_arg args;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    args.objspace = &(*((rb_current_vm())->objspace));
    args.value = rb_ary_new();
    st_foreach(w->wmap2obj, wmap_keys_i, (st_data_t)&args);
    return args.value;
}

static int
wmap_values_i(st_data_t key, st_data_t val, st_data_t arg)
{
    struct wmap_iter_arg *argp = (struct wmap_iter_arg *)arg;
    rb_objspace_t *objspace = argp->objspace;
    VALUE ary = argp->value;
    VALUE obj = (VALUE)val;
    if (is_id_value(objspace, obj) && is_live_object(objspace, obj)) {
 rb_ary_push(ary, obj);
    }
    return ST_CONTINUE;
}


static VALUE
wmap_values(VALUE self)
{
    struct weakmap *w;
    struct wmap_iter_arg args;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    args.objspace = &(*((rb_current_vm())->objspace));
    args.value = rb_ary_new();
    st_foreach(w->wmap2obj, wmap_values_i, (st_data_t)&args);
    return args.value;
}

static int
wmap_aset_update(st_data_t *key, st_data_t *val, st_data_t arg, int existing)
{
    VALUE size, *ptr, *optr;
    if (existing) {
 size = (ptr = optr = (VALUE *)*val)[0];
 ++size;
 ptr = ruby_sized_xrealloc2(ptr, size + 1, sizeof(VALUE), size);
    }
    else {
 optr = 0;
 size = 1;
 ptr = ruby_xmalloc0(2 * sizeof(VALUE));
    }
    ptr[0] = size;
    ptr[size] = (VALUE)arg;
    if (ptr == optr) return ST_STOP;
    *val = (st_data_t)ptr;
    return ST_CONTINUE;
}


static VALUE
wmap_aset(VALUE self, VALUE wmap, VALUE orig)
{
    struct weakmap *w;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    should_be_finalizable(orig);
    should_be_finalizable(wmap);
    define_final0(orig, w->final);
    define_final0(wmap, w->final);
    st_update(w->obj2wmap, (st_data_t)orig, wmap_aset_update, wmap);
    st_insert(w->wmap2obj, (st_data_t)wmap, (st_data_t)orig);
    return (VALUE)((long)(orig)|RUBY_FIXNUM_FLAG);
}


static VALUE
wmap_aref(VALUE self, VALUE wmap)
{
    st_data_t data;
    VALUE obj;
    struct weakmap *w;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    if (!st_lookup(w->wmap2obj, (st_data_t)wmap, &data)) return ((VALUE)RUBY_Qnil);
    obj = (VALUE)data;
    if (!is_id_value(objspace, obj)) return ((VALUE)RUBY_Qnil);
    if (!is_live_object(objspace, obj)) return ((VALUE)RUBY_Qnil);
    return obj;
}


static VALUE
wmap_has_key(VALUE self, VALUE key)
{
    return !((VALUE)(wmap_aref(self, key)) != ((VALUE)RUBY_Qnil)) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
}

static VALUE
wmap_size(VALUE self)
{
    struct weakmap *w;
    st_index_t n;

    ((w) = (struct weakmap*)rb_check_typeddata((self), (&weakmap_type)));
    n = w->wmap2obj->num_entries;

    return rb_ulong2num_inline(n);



}
static double
getrusage_time(void)
{

    {
        static int try_clock_gettime = 1;
        struct timespec ts;
        if (try_clock_gettime && clock_gettime(2, &ts) == 0) {
            return ts.tv_sec + ts.tv_nsec * 1e-9;
        }
        else {
            try_clock_gettime = 0;
        }
    }



    {
        struct rusage usage;
        struct timeval time;
        if (getrusage(RUSAGE_SELF, &usage) == 0) {
            time = usage.ru_utime;
            return time.tv_sec + time.tv_usec * 1e-6;
        }
    }
    return 0.0;
}

static inline void
gc_prof_setup_new_record(rb_objspace_t *objspace, int reason)
{
    if (objspace->profile.run) {
 size_t index = objspace->profile.next_index;
 gc_profile_record *record;


 objspace->profile.next_index++;

 if (!objspace->profile.records) {
     objspace->profile.size = 100;
     objspace->profile.records = malloc(sizeof(gc_profile_record) * objspace->profile.size);
 }
 if (index >= objspace->profile.size) {
     void *ptr;
     objspace->profile.size += 1000;
     ptr = realloc(objspace->profile.records, sizeof(gc_profile_record) * objspace->profile.size);
     if (!ptr) rb_memerror();
     objspace->profile.records = ptr;
 }
 if (!objspace->profile.records) {
     rb_bug("gc_profile malloc or realloc miss");
 }
 record = objspace->profile.current_record = &objspace->profile.records[objspace->profile.next_index - 1];
 memset((record), 0, sizeof(gc_profile_record)*(size_t)(1));


 record->flags = reason | (objspace->flags.gc_stressful ? GPR_FLAG_STRESS : 0);
    }
}

static inline void
gc_prof_timer_start(rb_objspace_t *objspace)
{
    if (((objspace)->profile.run && (objspace)->profile.current_record)) {
 gc_profile_record *record = (objspace)->profile.current_record;



 record->gc_time = 0;
 record->gc_invoke_time = getrusage_time();
    }
}

static double
elapsed_time_from(double time)
{
    double now = getrusage_time();
    if (now > time) {
 return now - time;
    }
    else {
 return 0;
    }
}

static inline void
gc_prof_timer_stop(rb_objspace_t *objspace)
{
    if (((objspace)->profile.run && (objspace)->profile.current_record)) {
 gc_profile_record *record = (objspace)->profile.current_record;
 record->gc_time = elapsed_time_from(record->gc_invoke_time);
 record->gc_invoke_time -= objspace->profile.invoke_time;
    }
}



static inline void
gc_prof_mark_timer_start(rb_objspace_t *objspace)
{
    do {if (0) do {} while (0);} while (0);





}

static inline void
gc_prof_mark_timer_stop(rb_objspace_t *objspace)
{
    do {if (0) do {} while (0);} while (0);






}

static inline void
gc_prof_sweep_timer_start(rb_objspace_t *objspace)
{
    do {if (0) do {} while (0);} while (0);
    if (((objspace)->profile.run && (objspace)->profile.current_record)) {
 gc_profile_record *record = (objspace)->profile.current_record;

 if (record->gc_time > 0 || 0) {
     objspace->profile.gc_sweep_start_time = getrusage_time();
 }
    }
}

static inline void
gc_prof_sweep_timer_stop(rb_objspace_t *objspace)
{
    do {if (0) do {} while (0);} while (0);

    if (((objspace)->profile.run && (objspace)->profile.current_record)) {
 double sweep_time;
 gc_profile_record *record = (objspace)->profile.current_record;

 if (record->gc_time > 0) {
     sweep_time = elapsed_time_from(objspace->profile.gc_sweep_start_time);

     record->gc_time += sweep_time;
 }
 else if (0) {
     sweep_time = elapsed_time_from(objspace->profile.gc_sweep_start_time);
 }





 if (objspace->heap_pages.deferred_final) objspace->profile.latest_gc_info |= GPR_FLAG_HAVE_FINALIZE;
    }
}

static inline void
gc_prof_set_malloc_info(rb_objspace_t *objspace)
{







}

static inline void
gc_prof_set_heap_info(rb_objspace_t *objspace)
{
    if (((objspace)->profile.run && (objspace)->profile.current_record)) {
 gc_profile_record *record = (objspace)->profile.current_record;
 size_t live = objspace->profile.total_allocated_objects_at_gc_start - objspace->profile.total_freed_objects;
 size_t total = objspace->profile.heap_used_at_gc_start * HEAP_PAGE_OBJ_LIMIT;







 record->heap_total_objects = total;
 record->heap_use_size = live * sizeof(RVALUE);
 record->heap_total_size = total * sizeof(RVALUE);
    }
}
static VALUE
gc_profile_clear(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    if (100 * 2 < objspace->profile.size) {
        objspace->profile.size = 100 * 2;
        objspace->profile.records = realloc(objspace->profile.records, sizeof(gc_profile_record) * objspace->profile.size);
        if (!objspace->profile.records) {
            rb_memerror();
        }
    }
    memset((objspace->profile.records), 0, sizeof(gc_profile_record)*(size_t)(objspace->profile.size));
    objspace->profile.next_index = 0;
    objspace->profile.current_record = 0;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
gc_profile_record_get(void)
{
    VALUE prof;
    VALUE gc_profile = rb_ary_new();
    size_t i;
    rb_objspace_t *objspace = (&(*((rb_current_vm())->objspace)));

    if (!objspace->profile.run) {
 return ((VALUE)RUBY_Qnil);
    }

    for (i =0; i < objspace->profile.next_index; i++) {
 gc_profile_record *record = &objspace->profile.records[i];

 prof = rb_hash_new();
 rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("GC_FLAGS") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("GC_FLAGS")), (long)strlen(("GC_FLAGS"))); (ID) rb_intern_id_cache; }) : rb_intern("GC_FLAGS")))), gc_info_decode(0, rb_hash_new(), record->flags));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("GC_TIME") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("GC_TIME")), (long)strlen(("GC_TIME"))); (ID) rb_intern_id_cache; }) : rb_intern("GC_TIME")))), rb_float_new_inline(record->gc_time));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("GC_INVOKE_TIME") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("GC_INVOKE_TIME")), (long)strlen(("GC_INVOKE_TIME"))); (ID) rb_intern_id_cache; }) : rb_intern("GC_INVOKE_TIME")))), rb_float_new_inline(record->gc_invoke_time));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("HEAP_USE_SIZE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("HEAP_USE_SIZE")), (long)strlen(("HEAP_USE_SIZE"))); (ID) rb_intern_id_cache; }) : rb_intern("HEAP_USE_SIZE")))), rb_ulong2num_inline(record->heap_use_size));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("HEAP_TOTAL_SIZE") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("HEAP_TOTAL_SIZE")), (long)strlen(("HEAP_TOTAL_SIZE"))); (ID) rb_intern_id_cache; }) : rb_intern("HEAP_TOTAL_SIZE")))), rb_ulong2num_inline(record->heap_total_size));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("HEAP_TOTAL_OBJECTS") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("HEAP_TOTAL_OBJECTS")), (long)strlen(("HEAP_TOTAL_OBJECTS"))); (ID) rb_intern_id_cache; }) : rb_intern("HEAP_TOTAL_OBJECTS")))), rb_ulong2num_inline(record->heap_total_objects));
        rb_hash_aset(prof, (rb_id2sym((__builtin_constant_p("GC_IS_MARKED") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("GC_IS_MARKED")), (long)strlen(("GC_IS_MARKED"))); (ID) rb_intern_id_cache; }) : rb_intern("GC_IS_MARKED")))), ((VALUE)RUBY_Qtrue));
 rb_ary_push(gc_profile, prof);
    }

    return gc_profile;
}
static void
gc_profile_dump_on(VALUE out, VALUE (*append)(VALUE, VALUE))
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    size_t count = objspace->profile.next_index;




    if (objspace->profile.run && count ) {
 size_t i;
 const gc_profile_record *record;

 append(out, rb_sprintf("GC %zu invokes.\n", objspace->profile.count));
 append(out,  ({ (__builtin_constant_p("Index    Invoke Time(sec)       Use Size(byte)     Total Size(byte)         Total Object                    GC Time(ms)\n")) ? rb_str_new_static(("Index    Invoke Time(sec)       Use Size(byte)     Total Size(byte)         Total Object                    GC Time(ms)\n"), (long)strlen("Index    Invoke Time(sec)       Use Size(byte)     Total Size(byte)         Total Object                    GC Time(ms)\n")) : rb_str_new_cstr("Index    Invoke Time(sec)       Use Size(byte)     Total Size(byte)         Total Object                    GC Time(ms)\n"); }));

 for (i = 0; i < count; i++) {
     record = &objspace->profile.records[i];
     append(out, rb_sprintf("%5zu %19.3f %20zu %20zu %20zu %30.20f\n",
       i+1, record->gc_invoke_time, record->heap_use_size,
       record->heap_total_size, record->heap_total_objects, record->gc_time*1000));
 }
    }
}
static VALUE
gc_profile_result(void)
{
    VALUE str = rb_str_buf_new(0);
    gc_profile_dump_on(str, rb_str_buf_append);
    return str;
}
static VALUE
gc_profile_report(int argc, VALUE *argv, VALUE self)
{
    VALUE out;

    if (argc == 0) {
 out = rb_stdout;
    }
    else {
 rb_scan_args(argc, argv, "01", &out);
    }
    gc_profile_dump_on(out, rb_io_write);

    return ((VALUE)RUBY_Qnil);
}
static VALUE
gc_profile_total_time(VALUE self)
{
    double time = 0;
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    if (objspace->profile.run && objspace->profile.next_index > 0) {
 size_t i;
 size_t count = objspace->profile.next_index;

 for (i = 0; i < count; i++) {
     time += objspace->profile.records[i].gc_time;
 }
    }
    return rb_float_new_inline(time);
}
static VALUE
gc_profile_enable_get(VALUE self)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    return objspace->profile.run ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static VALUE
gc_profile_enable(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));
    objspace->profile.run = 1;
    objspace->profile.current_record = 0;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
gc_profile_disable(void)
{
    rb_objspace_t *objspace = &(*((rb_current_vm())->objspace));

    objspace->profile.run = 0;
    objspace->profile.current_record = 0;
    return ((VALUE)RUBY_Qnil);
}





static const char *
type_name(int type, VALUE obj)
{
    switch (type) {

     case (RUBY_T_NONE): return "T_NONE";;
     case (RUBY_T_OBJECT): return "T_OBJECT";;
     case (RUBY_T_CLASS): return "T_CLASS";;
     case (RUBY_T_MODULE): return "T_MODULE";;
     case (RUBY_T_FLOAT): return "T_FLOAT";;
     case (RUBY_T_STRING): return "T_STRING";;
     case (RUBY_T_REGEXP): return "T_REGEXP";;
     case (RUBY_T_ARRAY): return "T_ARRAY";;
     case (RUBY_T_HASH): return "T_HASH";;
     case (RUBY_T_STRUCT): return "T_STRUCT";;
     case (RUBY_T_BIGNUM): return "T_BIGNUM";;
     case (RUBY_T_FILE): return "T_FILE";;
     case (RUBY_T_MATCH): return "T_MATCH";;
     case (RUBY_T_COMPLEX): return "T_COMPLEX";;
     case (RUBY_T_RATIONAL): return "T_RATIONAL";;
     case (RUBY_T_NIL): return "T_NIL";;
     case (RUBY_T_TRUE): return "T_TRUE";;
     case (RUBY_T_FALSE): return "T_FALSE";;
     case (RUBY_T_SYMBOL): return "T_SYMBOL";;
     case (RUBY_T_FIXNUM): return "T_FIXNUM";;
     case (RUBY_T_UNDEF): return "T_UNDEF";;
     case (RUBY_T_IMEMO): return "T_IMEMO";;
     case (RUBY_T_ICLASS): return "T_ICLASS";;
     case (RUBY_T_ZOMBIE): return "T_ZOMBIE";;
      case RUBY_T_DATA:
 if (obj && rb_objspace_data_type_name(obj)) {
     return rb_objspace_data_type_name(obj);
 }
 return "T_DATA";

    }
    return "unknown";
}

static const char *
obj_type_name(VALUE obj)
{
    return type_name(rb_type((VALUE)(obj)), obj);
}

static const char *
method_type_name(rb_method_type_t type)
{
    switch (type) {
      case VM_METHOD_TYPE_ISEQ: return "iseq";
      case VM_METHOD_TYPE_ATTRSET: return "attrest";
      case VM_METHOD_TYPE_IVAR: return "ivar";
      case VM_METHOD_TYPE_BMETHOD: return "bmethod";
      case VM_METHOD_TYPE_ALIAS: return "alias";
      case VM_METHOD_TYPE_REFINED: return "refined";
      case VM_METHOD_TYPE_CFUNC: return "cfunc";
      case VM_METHOD_TYPE_ZSUPER: return "zsuper";
      case VM_METHOD_TYPE_MISSING: return "missing";
      case VM_METHOD_TYPE_OPTIMIZED: return "optimized";
      case VM_METHOD_TYPE_UNDEF: return "undef";
      case VM_METHOD_TYPE_NOTIMPLEMENTED: return "notimplemented";
    }
    rb_bug("method_type_name: unreachable (type: %d)", type);
}
static void
rb_raw_iseq_info(char *buff, const int buff_size, const rb_iseq_t *iseq)
{
    if (iseq->body && iseq->body->location.label) {
 VALUE path = rb_iseq_path(iseq);
 VALUE n = iseq->body->location.first_lineno;
 ruby_snprintf(buff, buff_size, "%s %s@%s:%d", buff,
   (!(((struct RBasic*)(iseq->body->location.label))->flags & RSTRING_NOEMBED) ? ((struct RString*)(iseq->body->location.label))->as.ary : ((struct RString*)(iseq->body->location.label))->as.heap.ptr),
   (!(((struct RBasic*)(path))->flags & RSTRING_NOEMBED) ? ((struct RString*)(path))->as.ary : ((struct RString*)(path))->as.heap.ptr),
   n ? ((int)rb_fix2int((VALUE)(n))) : 0 );
    }
}

const char *
rb_raw_obj_info(char *buff, const int buff_size, VALUE obj)
{
    if ((((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
 ruby_snprintf(buff, buff_size, "%s", obj_type_name(obj));
    }
    else {


 const int type = (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK);

 const int age = RVALUE_FLAGS_AGE(((struct RBasic*)(obj))->flags);

 ruby_snprintf(buff, buff_size, "%p [%d%s%s%s%s] %s",
   (void *)obj, age,
   (((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->uncollectible_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) != 0 ? ("L") : " "),
   (((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->mark_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) != 0 ? ("M") : " "),
   (((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->marking_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) != 0 ? ("R") : " "),
   (((((&((&((struct heap_page_body *)((bits_t)(obj) & ~(HEAP_PAGE_ALIGN_MASK)))->header)->page)->wb_unprotected_bits[0]))[((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) / BITS_BITLENGTH )] & ((bits_t)1 << ((((bits_t)((obj)) & HEAP_PAGE_ALIGN_MASK)/sizeof(RVALUE)) & (BITS_BITLENGTH-1))))) != 0 ? ("U") : " "),
   obj_type_name(obj));







 if (internal_object_p(obj)) {

 }
 else if (((struct RBasic*)(obj))->klass == 0) {
     ruby_snprintf(buff, buff_size, "%s (temporary internal)", buff);
 }
 else {
     VALUE class_path = rb_class_path_cached(((struct RBasic*)(obj))->klass);
     if (!!((VALUE)(class_path) != ((VALUE)RUBY_Qnil))) {
  ruby_snprintf(buff, buff_size, "%s (%s)", buff, (!(((struct RBasic*)(class_path))->flags & RSTRING_NOEMBED) ? ((struct RString*)(class_path))->as.ary : ((struct RString*)(class_path))->as.heap.ptr));
     }
 }





 switch (type) {
   case RUBY_T_NODE:
     rb_bug("rb_raw_obj_info(): GC does not handle T_NODE 0x%x(%p) 0x%lx", (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK), (void*)(obj), ((struct RBasic*)(obj))->flags);
     break;
   case RUBY_T_ARRAY:
     ruby_snprintf(buff, buff_size, "%s [%s%s] len: %d", buff,
       (((((void)0), ((!(((VALUE)((obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((obj)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((obj))))->flags&(((VALUE)RARRAY_EMBED_FLAG))):0)!=0)) != 0 ? ("E") : " "),
       (((((void)0), ((!(((VALUE)((obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((obj)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((obj))))->flags&((RUBY_ELTS_SHARED))):0)!=0)) != 0 ? ("S") : " "),
       (int)rb_array_len(obj));
     break;
   case RUBY_T_STRING: {
     ruby_snprintf(buff, buff_size, "%s %s", buff, (!(((struct RBasic*)(obj))->flags & RSTRING_NOEMBED) ? ((struct RString*)(obj))->as.ary : ((struct RString*)(obj))->as.heap.ptr));
     break;
   }
   case RUBY_T_CLASS: {
     VALUE class_path = rb_class_path_cached(obj);
     if (!!((VALUE)(class_path) != ((VALUE)RUBY_Qnil))) {
  ruby_snprintf(buff, buff_size, "%s %s", buff, (!(((struct RBasic*)(class_path))->flags & RSTRING_NOEMBED) ? ((struct RString*)(class_path))->as.ary : ((struct RString*)(class_path))->as.heap.ptr));
     }
     break;
   }
   case RUBY_T_DATA: {
     const struct rb_block *block;
     const rb_iseq_t *iseq;
     if (rb_obj_is_proc(obj) &&
  (block = vm_proc_block(obj)) != ((void*)0) &&
  (vm_block_type(block) == block_type_iseq) &&
  (iseq = vm_block_iseq(block)) != ((void*)0)) {
  rb_raw_iseq_info(buff, buff_size, iseq);
     }
     else {
  const char * const type_name = rb_objspace_data_type_name(obj);
  if (type_name) {
      ruby_snprintf(buff, buff_size, "%s %s", buff, type_name);
  }
     }
     break;
   }
   case RUBY_T_IMEMO: {
     const char *imemo_name = "\0";
     switch (imemo_type(obj)) {

  case imemo_env: imemo_name = "env"; break;;
  case imemo_cref: imemo_name = "cref"; break;;
  case imemo_svar: imemo_name = "svar"; break;;
  case imemo_throw_data: imemo_name = "throw_data"; break;;
  case imemo_ifunc: imemo_name = "ifunc"; break;;
  case imemo_memo: imemo_name = "memo"; break;;
  case imemo_ment: imemo_name = "ment"; break;;
  case imemo_iseq: imemo_name = "iseq"; break;;
  case imemo_alloc: imemo_name = "alloc"; break;;

       default: __builtin_unreachable();
     }
     ruby_snprintf(buff, buff_size, "%s %s", buff, imemo_name);

     switch (imemo_type(obj)) {
       case imemo_ment: {
  const rb_method_entry_t *me = &((RVALUE*)(obj))->as.imemo.ment;
  if (me->def) {
      ruby_snprintf(buff, buff_size, "%s (called_id: %s, type: %s, alias: %d, owner: %s, defined_class: %s)", buff,
        rb_id2name(me->called_id),
        method_type_name(me->def->type),
        me->def->alias_count,
        obj_info(me->owner),
        obj_info(me->defined_class));
  }
  else {
      ruby_snprintf(buff, buff_size, "%s", rb_id2name(me->called_id));
  }
  break;
       }
       case imemo_iseq: {
  const rb_iseq_t *iseq = (const rb_iseq_t *)obj;
  rb_raw_iseq_info(buff, buff_size, iseq);
  break;
       }
       default:
  break;
     }
   }
   default:
     break;
 }


    }
    return buff;
}
static const char *
obj_info(VALUE obj)
{
    return obj_type_name(obj);
}


const char *
rb_obj_info(VALUE obj)
{
    if (! ({ VALUE special_const_obj = (obj); (int)((((VALUE)(special_const_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(special_const_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)); })) {
 return obj_info(obj);
    }
    else {
 return obj_type_name(obj);
    }
}

void
rb_obj_info_dump(VALUE obj)
{
    char buff[0x100];
    fprintf(stderr, "rb_obj_info_dump: %s\n", rb_raw_obj_info(buff, 0x100, obj));
}
void
Init_GC(void)
{

    VALUE rb_mObjSpace;
    VALUE rb_mProfiler;
    VALUE gc_constants;

    rb_mGC = rb_define_module("GC");
    rb_define_singleton_method(rb_mGC, "start", gc_start_internal, -1);
    rb_define_singleton_method(rb_mGC, "enable", rb_gc_enable, 0);
    rb_define_singleton_method(rb_mGC, "disable", rb_gc_disable, 0);
    rb_define_singleton_method(rb_mGC, "stress", gc_stress_get, 0);
    rb_define_singleton_method(rb_mGC, "stress=", gc_stress_set_m, 1);
    rb_define_singleton_method(rb_mGC, "count", gc_count, 0);
    rb_define_singleton_method(rb_mGC, "stat", gc_stat, -1);
    rb_define_singleton_method(rb_mGC, "latest_gc_info", gc_latest_gc_info, -1);
    rb_define_method(rb_mGC, "garbage_collect", gc_start_internal, -1);

    gc_constants = rb_hash_new();
    rb_hash_aset(gc_constants, (rb_id2sym(rb_intern("RVALUE_SIZE"))), rb_ulong2num_inline(sizeof(RVALUE)));
    rb_hash_aset(gc_constants, (rb_id2sym(rb_intern("HEAP_PAGE_OBJ_LIMIT"))), rb_ulong2num_inline(HEAP_PAGE_OBJ_LIMIT));
    rb_hash_aset(gc_constants, (rb_id2sym(rb_intern("HEAP_PAGE_BITMAP_SIZE"))), rb_ulong2num_inline(HEAP_PAGE_BITMAP_SIZE));
    rb_hash_aset(gc_constants, (rb_id2sym(rb_intern("HEAP_PAGE_BITMAP_PLANES"))), rb_ulong2num_inline(HEAP_PAGE_BITMAP_PLANES));
    rb_obj_freeze_inline((VALUE)gc_constants);
    rb_define_const(rb_mGC, "INTERNAL_CONSTANTS", gc_constants);

    rb_mProfiler = rb_define_module_under(rb_mGC, "Profiler");
    rb_define_singleton_method(rb_mProfiler, "enabled?", gc_profile_enable_get, 0);
    rb_define_singleton_method(rb_mProfiler, "enable", gc_profile_enable, 0);
    rb_define_singleton_method(rb_mProfiler, "raw_data", gc_profile_record_get, 0);
    rb_define_singleton_method(rb_mProfiler, "disable", gc_profile_disable, 0);
    rb_define_singleton_method(rb_mProfiler, "clear", gc_profile_clear, 0);
    rb_define_singleton_method(rb_mProfiler, "result", gc_profile_result, 0);
    rb_define_singleton_method(rb_mProfiler, "report", gc_profile_report, -1);
    rb_define_singleton_method(rb_mProfiler, "total_time", gc_profile_total_time, 0);

    rb_mObjSpace = rb_define_module("ObjectSpace");
    rb_define_module_function(rb_mObjSpace, "each_object", os_each_obj, -1);
    rb_define_module_function(rb_mObjSpace, "garbage_collect", gc_start_internal, -1);

    rb_define_module_function(rb_mObjSpace, "define_finalizer", define_final, -1);
    rb_define_module_function(rb_mObjSpace, "undefine_finalizer", undefine_final, 1);

    rb_define_module_function(rb_mObjSpace, "_id2ref", id2ref, 1);

    rb_vm_register_special_exception_str(ruby_error_nomemory, rb_eNoMemError, rb_usascii_str_new_static(("failed to allocate memory"), (long)(sizeof("failed to allocate memory") - 1)));

    rb_define_method(rb_cBasicObject, "__id__", rb_obj_id, 0);
    rb_define_method(rb_mKernel, "object_id", rb_obj_id, 0);

    rb_define_module_function(rb_mObjSpace, "count_objects", count_objects, -1);

    {
 VALUE rb_cWeakMap = rb_define_class_under(rb_mObjSpace, "WeakMap", rb_cObject);
 rb_define_alloc_func(rb_cWeakMap, wmap_allocate);
 rb_define_method(rb_cWeakMap, "[]=", wmap_aset, 2);
 rb_define_method(rb_cWeakMap, "[]", wmap_aref, 1);
 rb_define_method(rb_cWeakMap, "include?", wmap_has_key, 1);
 rb_define_method(rb_cWeakMap, "member?", wmap_has_key, 1);
 rb_define_method(rb_cWeakMap, "key?", wmap_has_key, 1);
 rb_define_method(rb_cWeakMap, "inspect", wmap_inspect, 0);
 rb_define_method(rb_cWeakMap, "each", wmap_each, 0);
 rb_define_method(rb_cWeakMap, "each_pair", wmap_each, 0);
 rb_define_method(rb_cWeakMap, "each_key", wmap_each_key, 0);
 rb_define_method(rb_cWeakMap, "each_value", wmap_each_value, 0);
 rb_define_method(rb_cWeakMap, "keys", wmap_keys, 0);
 rb_define_method(rb_cWeakMap, "values", wmap_values, 0);
 rb_define_method(rb_cWeakMap, "size", wmap_size, 0);
 rb_define_method(rb_cWeakMap, "length", wmap_size, 0);
 rb_define_private_method(rb_cWeakMap, "finalize", wmap_finalize, 1);
 rb_include_module(rb_cWeakMap, rb_mEnumerable);
    }


    rb_define_singleton_method(rb_mGC, "verify_internal_consistency", gc_verify_internal_consistency, 0);
    {
 VALUE opts;
 rb_define_const(rb_mGC, "OPTS", opts = rb_ary_new());

 if (0) rb_ary_push(opts, rb_fstring_new(("GC_DEBUG"), (sizeof("GC_DEBUG") - 1)));
 if (1) rb_ary_push(opts, rb_fstring_new(("USE_RGENGC"), (sizeof("USE_RGENGC") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("RGENGC_DEBUG"), (sizeof("RGENGC_DEBUG") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("RGENGC_CHECK_MODE"), (sizeof("RGENGC_CHECK_MODE") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("RGENGC_PROFILE"), (sizeof("RGENGC_PROFILE") - 1)));
 if (1) rb_ary_push(opts, rb_fstring_new(("RGENGC_ESTIMATE_OLDMALLOC"), (sizeof("RGENGC_ESTIMATE_OLDMALLOC") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("GC_PROFILE_MORE_DETAIL"), (sizeof("GC_PROFILE_MORE_DETAIL") - 1)));
 if (1) rb_ary_push(opts, rb_fstring_new(("GC_ENABLE_LAZY_SWEEP"), (sizeof("GC_ENABLE_LAZY_SWEEP") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("CALC_EXACT_MALLOC_SIZE"), (sizeof("CALC_EXACT_MALLOC_SIZE") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("MALLOC_ALLOCATED_SIZE"), (sizeof("MALLOC_ALLOCATED_SIZE") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("MALLOC_ALLOCATED_SIZE_CHECK"), (sizeof("MALLOC_ALLOCATED_SIZE_CHECK") - 1)));
 if (0) rb_ary_push(opts, rb_fstring_new(("GC_PROFILE_DETAIL_MEMORY"), (sizeof("GC_PROFILE_DETAIL_MEMORY") - 1)));

 rb_obj_freeze_inline((VALUE)opts);
    }
}
