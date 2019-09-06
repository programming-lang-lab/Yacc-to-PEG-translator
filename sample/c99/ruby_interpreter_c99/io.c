








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




void *rb_thread_call_with_gvl(void *(*func)(void *), void *data1);

void *rb_thread_call_without_gvl(void *(*func)(void *), void *data1,
     rb_unblock_function_t *ubf, void *data2);
void *rb_thread_call_without_gvl2(void *(*func)(void *), void *data1,
      rb_unblock_function_t *ubf, void *data2);












char *dln_find_exe_r(const char*,const char*,char*,size_t );
char *dln_find_file_r(const char*,const char*,char*,size_t );





void *dln_load(const char*);

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






typedef unsigned int rb_atomic_t;


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };





enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
typedef unsigned short int sa_family_t;


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,



    MSG_TRYHARD = MSG_DONTROUTE,


    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_ZEROCOPY = 0x4000000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

     unsigned char __cmsg_data [];

  };
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) ;
enum
  {
    SCM_RIGHTS = 0x01


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
};




struct linger
  {
    int l_onoff;
    int l_linger;
  };







struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
typedef union { struct sockaddr *restrict __sockaddr__; struct sockaddr_at *restrict __sockaddr_at__; struct sockaddr_ax25 *restrict __sockaddr_ax25__; struct sockaddr_dl *restrict __sockaddr_dl__; struct sockaddr_eon *restrict __sockaddr_eon__; struct sockaddr_in *restrict __sockaddr_in__; struct sockaddr_in6 *restrict __sockaddr_in6__; struct sockaddr_inarp *restrict __sockaddr_inarp__; struct sockaddr_ipx *restrict __sockaddr_ipx__; struct sockaddr_iso *restrict __sockaddr_iso__; struct sockaddr_ns *restrict __sockaddr_ns__; struct sockaddr_un *restrict __sockaddr_un__; struct sockaddr_x25 *restrict __sockaddr_x25__;
       } __SOCKADDR_ARG ;


typedef union { const struct sockaddr *restrict __sockaddr__; const struct sockaddr_at *restrict __sockaddr_at__; const struct sockaddr_ax25 *restrict __sockaddr_ax25__; const struct sockaddr_dl *restrict __sockaddr_dl__; const struct sockaddr_eon *restrict __sockaddr_eon__; const struct sockaddr_in *restrict __sockaddr_in__; const struct sockaddr_in6 *restrict __sockaddr_in6__; const struct sockaddr_inarp *restrict __sockaddr_inarp__; const struct sockaddr_ipx *restrict __sockaddr_ipx__; const struct sockaddr_iso *restrict __sockaddr_iso__; const struct sockaddr_ns *restrict __sockaddr_ns__; const struct sockaddr_un *restrict __sockaddr_un__; const struct sockaddr_x25 *restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG ;





struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;

  };






extern int socket (int __domain, int __type, int __protocol) ;





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) ;


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     ;


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *restrict __len) ;
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *restrict __len) ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
extern ssize_t recvfrom (int __fd, void *restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
    socklen_t *restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);







extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags);







extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);







extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       struct timespec *__tmo);






extern int getsockopt (int __fd, int __level, int __optname,
         void *restrict __optval,
         socklen_t *restrict __optlen) ;




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) ;





extern int listen (int __fd, int __n) ;
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *restrict __addr_len, int __flags);
extern int shutdown (int __fd, int __how) ;




extern int sockatmark (int __fd) ;







extern int isfdtype (int __fd, int __fdtype) ;












struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };


struct termio
  {
    unsigned short int c_iflag;
    unsigned short int c_oflag;
    unsigned short int c_cflag;
    unsigned short int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
};










extern int ioctl (int __fd, unsigned long int __request, ...) ;


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
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
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

















extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
       ;
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
       ;
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;
extern ssize_t preadv64 (int __fd, const struct iovec *__iovec, int __count,
    __off64_t __offset) ;
extern ssize_t pwritev64 (int __fd, const struct iovec *__iovec, int __count,
     __off64_t __offset) ;







extern ssize_t preadv2 (int __fp, const struct iovec *__iovec, int __count,
   __off_t __offset, int ___flags) ;


extern ssize_t pwritev2 (int __fd, const struct iovec *__iodev, int __count,
    __off_t __offset, int __flags) ;
extern ssize_t preadv64v2 (int __fp, const struct iovec *__iovec,
      int __count, __off64_t __offset,
      int ___flags) ;


extern ssize_t pwritev64v2 (int __fd, const struct iovec *__iodev,
       int __count, __off64_t __offset,
       int __flags) ;
extern ssize_t process_vm_readv (pid_t __pid, const struct iovec *__lvec,
     unsigned long int __liovcnt,
     const struct iovec *__rvec,
     unsigned long int __riovcnt,
     unsigned long int __flags)
  ;


extern ssize_t process_vm_writev (pid_t __pid, const struct iovec *__lvec,
      unsigned long int __liovcnt,
      const struct iovec *__rvec,
      unsigned long int __riovcnt,
      unsigned long int __flags)
  ;



extern __pid_t wait (int *__stat_loc);
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);






struct rusage;






extern __pid_t wait3 (int *__stat_loc, int __options,
        struct rusage * __usage) ;




extern __pid_t wait4 (__pid_t __pid, int *__stat_loc, int __options,
        struct rusage *__usage) ;







unsigned long ruby_scan_oct(const char *, size_t, size_t *);

unsigned long ruby_scan_hex(const char *, size_t, size_t *);
void ruby_setenv(const char *, const char *);
void ruby_unsetenv(const char *);

char *ruby_strdup(const char *);



char *ruby_getcwd(void);

double ruby_strtod(const char *, char **);



void ruby_each_words(const char *, void (*)(const char*, int, void*), void *);

VALUE rb_cIO;
VALUE rb_eEOFError;
VALUE rb_eIOError;
VALUE rb_mWaitReadable;
VALUE rb_mWaitWritable;

static VALUE rb_eEAGAINWaitReadable;
static VALUE rb_eEAGAINWaitWritable;
static VALUE rb_eEWOULDBLOCKWaitReadable;
static VALUE rb_eEWOULDBLOCKWaitWritable;
static VALUE rb_eEINPROGRESSWaitWritable;
static VALUE rb_eEINPROGRESSWaitReadable;

VALUE rb_stdin, rb_stdout, rb_stderr;
static VALUE orig_stdout, orig_stderr;

VALUE rb_output_fs;
VALUE rb_rs;
VALUE rb_output_rs;
VALUE rb_default_rs;

static VALUE argf;


static ID id_write, id_read, id_getc, id_flush, id_readpartial, id_set_encoding;
static VALUE sym_mode, sym_perm, sym_flags, sym_extenc, sym_intenc, sym_encoding, sym_open_args;
static VALUE sym_textmode, sym_binmode, sym_autoclose;
static VALUE sym_SET, sym_CUR, sym_END;
static VALUE sym_wait_readable, sym_wait_writable;

static VALUE sym_DATA;


static VALUE sym_HOLE;


struct argf {
    VALUE filename, current_file;
    long last_lineno;
    long lineno;
    VALUE argv;
    VALUE inplace;
    struct rb_io_enc_t encs;
    int8_t init_p, next_p, binmode;
};

static rb_atomic_t max_file_descriptor = 256;
void
rb_update_max_fd(int fd)
{
    struct stat buf;
    rb_atomic_t afd = (rb_atomic_t)fd;
    rb_atomic_t max_fd = max_file_descriptor;

    if (afd <= max_fd)
        return;

    if (fstat(fd, &buf) != 0 && (*__errno_location ()) == 9) {
        rb_bug("rb_update_max_fd: invalid fd (%d) given.", fd);
    }

    while (max_fd < afd) {
 max_fd = ({ int oldvaldup = (max_fd); __atomic_compare_exchange_n(&(max_file_descriptor), &oldvaldup, (afd), 0, 5, 5); oldvaldup; });
    }
}

void
rb_maygvl_fd_fix_cloexec(int fd)
{


    int flags, flags2, ret;
    flags = fcntl(fd, 1);
    if (flags == -1) {
        rb_bug("rb_maygvl_fd_fix_cloexec: fcntl(%d, F_GETFD) failed: %s", fd, strerror((*__errno_location ())));
    }
    if (fd <= 2)
        flags2 = flags & ~1;
    else
        flags2 = flags | 1;
    if (flags != flags2) {
        ret = fcntl(fd, 2, flags2);
        if (ret == -1) {
            rb_bug("rb_maygvl_fd_fix_cloexec: fcntl(%d, F_SETFD, %d) failed: %s", fd, flags2, strerror((*__errno_location ())));
        }
    }

}

void
rb_fd_fix_cloexec(int fd)
{
    rb_maygvl_fd_fix_cloexec(fd);
    rb_update_max_fd(fd);
}


static int
rb_fix_detect_o_cloexec(int fd)
{

    int flags = fcntl(fd, 1);

    if (flags == -1)
        rb_bug("rb_fix_detect_o_cloexec: fcntl(%d, F_GETFD) failed: %s", fd, strerror((*__errno_location ())));

    if (flags & 1)
 return 1;

    rb_maygvl_fd_fix_cloexec(fd);
    return 0;
}

int
rb_cloexec_open(const char *pathname, int flags, mode_t mode)
{
    int ret;
    static int o_cloexec_state = -1;



    flags |= 02000000;



    ret = open(pathname, flags, mode);
    if (ret == -1) return -1;
    if (ret <= 2 || o_cloexec_state == 0) {
 rb_maygvl_fd_fix_cloexec(ret);
    }
    else if (o_cloexec_state > 0) {
 return ret;
    }
    else {
 o_cloexec_state = rb_fix_detect_o_cloexec(ret);
    }
    return ret;
}

int
rb_cloexec_dup(int oldfd)
{

    return rb_cloexec_fcntl_dupfd(oldfd, 3);
}

int
rb_cloexec_dup2(int oldfd, int newfd)
{
    int ret;



    if (oldfd == newfd) {
        ret = newfd;
    }
    else {

        static int try_dup3 = 1;
        if (2 < newfd && try_dup3) {
            ret = dup3(oldfd, newfd, 02000000);
            if (ret != -1)
                return ret;

            if ((*__errno_location ()) == 38) {
                try_dup3 = 0;
                ret = dup2(oldfd, newfd);
            }
        }
        else {
            ret = dup2(oldfd, newfd);
        }



        if (ret == -1) return -1;
    }
    rb_maygvl_fd_fix_cloexec(ret);
    return ret;
}

int
rb_cloexec_pipe(int fildes[2])
{
    int ret;


    static int try_pipe2 = 1;
    if (try_pipe2) {
        ret = pipe2(fildes, 02000000);
        if (ret != -1)
            return ret;

        if ((*__errno_location ()) == 38) {
            try_pipe2 = 0;
            ret = pipe(fildes);
        }
    }
    else {
        ret = pipe(fildes);
    }



    if (ret == -1) return -1;
    rb_maygvl_fd_fix_cloexec(fildes[0]);
    rb_maygvl_fd_fix_cloexec(fildes[1]);
    return ret;
}

int
rb_cloexec_fcntl_dupfd(int fd, int minfd)
{
    int ret;


    static int try_dupfd_cloexec = 1;
    if (try_dupfd_cloexec) {
        ret = fcntl(fd, 1030, minfd);
        if (ret != -1) {
            if (ret <= 2)
                rb_maygvl_fd_fix_cloexec(ret);
            return ret;
        }

        if ((*__errno_location ()) == 22) {
            ret = fcntl(fd, 0, minfd);
            if (ret != -1) {
                try_dupfd_cloexec = 0;
            }
        }
    }
    else {
        ret = fcntl(fd, 0, minfd);
    }
    if (ret == -1) return -1;
    rb_maygvl_fd_fix_cloexec(ret);
    return ret;
}
static int io_fflush(rb_io_t *);
static rb_io_t *flush_before_seek(rb_io_t *fptr);
static int
is_socket(int fd, VALUE path)
{
    struct stat sbuf;
    if (fstat(fd, &sbuf) < 0)
        rb_sys_fail_path_in(__func__, path);
    return ((((sbuf.st_mode)) & 0170000) == (0140000));
}


static const char closed_stream[] = "closed stream";

void
rb_eof_error(void)
{
    rb_raise(rb_eEOFError, "end of file reached");
}

VALUE
rb_io_taint_check(VALUE io)
{
    ({do { VALUE frozen_obj = (io); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
    return io;
}

void
rb_io_check_initialized(rb_io_t *fptr)
{
    if (!fptr) {
 rb_raise(rb_eIOError, "uninitialized stream");
    }
}

void
rb_io_check_closed(rb_io_t *fptr)
{
    rb_io_check_initialized(fptr);
    if (fptr->fd < 0) {
 rb_raise(rb_eIOError, closed_stream);
    }
}

static rb_io_t *
rb_io_get_fptr(VALUE io)
{
    rb_io_t *fptr = ((struct RFile*)(io))->fptr;
    rb_io_check_initialized(fptr);
    return fptr;
}

VALUE
rb_io_get_io(VALUE io)
{
    return rb_convert_type_with_id(io, RUBY_T_FILE, "IO", idTo_io);
}

VALUE
rb_io_check_io(VALUE io)
{
    return rb_check_convert_type_with_id(io, RUBY_T_FILE, "IO", idTo_io);
}

VALUE
rb_io_get_write_io(VALUE io)
{
    VALUE write_io;
    write_io = rb_io_get_fptr(io)->tied_io_for_writing;
    if (write_io) {
        return write_io;
    }
    return io;
}

VALUE
rb_io_set_write_io(VALUE io, VALUE w)
{
    VALUE write_io;
    rb_io_t *fptr = rb_io_get_fptr(io);
    if (!!(((VALUE)(w) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 w = 0;
    }
    else {
 rb_io_get_write_io(w);
    }
    write_io = fptr->tied_io_for_writing;
    fptr->tied_io_for_writing = w;
    return write_io ? write_io : ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_s_try_convert(VALUE dummy, VALUE io)
{
    return rb_io_check_io(io);
}


static void
io_unread(rb_io_t *fptr)
{
    off_t r;
    rb_io_check_closed(fptr);
    if (fptr->rbuf.len == 0 || fptr->mode & 0x00000020)
        return;

    (*__errno_location ()) = 0;
    r = lseek(fptr->fd, -fptr->rbuf.len, 1);
    if (r < 0 && (*__errno_location ())) {
        if ((*__errno_location ()) == 29)
            fptr->mode |= 0x00000020;
        return;
    }
    fptr->rbuf.off = 0;
    fptr->rbuf.len = 0;
    return;
}


static rb_encoding *io_input_encoding(rb_io_t *fptr);

static void
io_ungetbyte(VALUE str, rb_io_t *fptr)
{
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    if (fptr->rbuf.ptr == ((void*)0)) {
        const int min_capa = (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000)) ? (128*1024) : 8192);
        fptr->rbuf.off = 0;
        fptr->rbuf.len = 0;

 if (len > 2147483647)
     rb_raise(rb_eIOError, "ungetbyte failed");

 if (len > min_capa)
     fptr->rbuf.capa = (int)len;
 else
     fptr->rbuf.capa = min_capa;
        fptr->rbuf.ptr = ((char*)ruby_xmalloc2((size_t)(fptr->rbuf.capa),sizeof(char)));
    }
    if (fptr->rbuf.capa < len + fptr->rbuf.len) {
 rb_raise(rb_eIOError, "ungetbyte failed");
    }
    if (fptr->rbuf.off < len) {
        memmove((fptr->rbuf.ptr+fptr->rbuf.capa-fptr->rbuf.len), (fptr->rbuf.ptr+fptr->rbuf.off), sizeof(char)*(size_t)(fptr->rbuf.len));


        fptr->rbuf.off = fptr->rbuf.capa-fptr->rbuf.len;
    }
    fptr->rbuf.off-=(int)len;
    fptr->rbuf.len+=(int)len;
    memmove((fptr->rbuf.ptr+fptr->rbuf.off), ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)), sizeof(char)*(size_t)(len));
}

static rb_io_t *
flush_before_seek(rb_io_t *fptr)
{
    if (io_fflush(fptr) < 0)
        rb_sys_fail(0);
    io_unread(fptr);
    (*__errno_location ()) = 0;
    return fptr;
}
void
rb_io_check_char_readable(rb_io_t *fptr)
{
    rb_io_check_closed(fptr);
    if (!(fptr->mode & 0x00000001)) {
 rb_raise(rb_eIOError, "not opened for reading");
    }
    if (fptr->wbuf.len) {
        if (io_fflush(fptr) < 0)
            rb_sys_fail(0);
    }
    if (fptr->tied_io_for_writing) {
 rb_io_t *wfptr;
 rb_io_check_closed((wfptr) = ((struct RFile*)(rb_io_taint_check(fptr->tied_io_for_writing)))->fptr);
        if (io_fflush(wfptr) < 0)
            rb_sys_fail(0);
    }
}

void
rb_io_check_byte_readable(rb_io_t *fptr)
{
    rb_io_check_char_readable(fptr);
    if (((fptr)->cbuf.len)) {
 rb_raise(rb_eIOError, "byte oriented read for character buffered IO");
    }
}

void
rb_io_check_readable(rb_io_t *fptr)
{
    rb_io_check_byte_readable(fptr);
}

static rb_encoding*
io_read_encoding(rb_io_t *fptr)
{
    if (fptr->encs.enc) {
 return fptr->encs.enc;
    }
    return rb_default_external_encoding();
}

static rb_encoding*
io_input_encoding(rb_io_t *fptr)
{
    if (fptr->encs.enc2) {
 return fptr->encs.enc2;
    }
    return io_read_encoding(fptr);
}

void
rb_io_check_writable(rb_io_t *fptr)
{
    rb_io_check_closed(fptr);
    if (!(fptr->mode & 0x00000002)) {
 rb_raise(rb_eIOError, "not opened for writing");
    }
    if (fptr->rbuf.len) {
        io_unread(fptr);
    }
}

int
rb_io_read_pending(rb_io_t *fptr)
{

    if (((fptr)->cbuf.len))
        return 1;
    return ((fptr)->rbuf.len);
}

void
rb_io_read_check(rb_io_t *fptr)
{
    if (!((fptr)->rbuf.len)) {
 rb_thread_wait_fd(fptr->fd);
    }
    return;
}

int
rb_gc_for_fd(int err)
{
    if (err == 24 || err == 23 || err == 12) {
 rb_gc();
 return 1;
    }
    return 0;
}

static int
ruby_dup(int orig)
{
    int fd;

    fd = rb_cloexec_dup(orig);
    if (fd < 0) {
 int e = (*__errno_location ());
 if (rb_gc_for_fd(e)) {
     fd = rb_cloexec_dup(orig);
 }
 if (fd < 0) {
     rb_syserr_fail(e, 0);
 }
    }
    rb_update_max_fd(fd);
    return fd;
}

static VALUE
io_alloc(VALUE klass)
{
    struct RFile *(io) = (struct RFile*)(((RUBY_T_FILE) & ((VALUE)RUBY_FL_WB_PROTECTED)) ? rb_wb_protected_newobj_of(klass, (RUBY_T_FILE) & ~((VALUE)RUBY_FL_WB_PROTECTED)) : rb_wb_unprotected_newobj_of(klass, RUBY_T_FILE));

    io->fptr = 0;

    return (VALUE)io;
}





struct io_internal_read_struct {
    int fd;
    void *buf;
    size_t capa;
};

struct io_internal_write_struct {
    int fd;
    const void *buf;
    size_t capa;
};


struct io_internal_writev_struct {
    int fd;
    int iovcnt;
    const struct iovec *iov;
};


static VALUE
internal_read_func(void *ptr)
{
    struct io_internal_read_struct *iis = ptr;
    return read(iis->fd, iis->buf, iis->capa);
}

static VALUE
internal_write_func(void *ptr)
{
    struct io_internal_write_struct *iis = ptr;
    return write(iis->fd, iis->buf, iis->capa);
}

static void*
internal_write_func2(void *ptr)
{
    struct io_internal_write_struct *iis = ptr;
    return (void*)(intptr_t)write(iis->fd, iis->buf, iis->capa);
}


static VALUE
internal_writev_func(void *ptr)
{
    struct io_internal_writev_struct *iis = ptr;
    return writev(iis->fd, iis->iov, iis->iovcnt);
}


static ssize_t
rb_read_internal(int fd, void *buf, size_t count)
{
    struct io_internal_read_struct iis;
    iis.fd = fd;
    iis.buf = buf;
    iis.capa = count;

    return (ssize_t)rb_thread_io_blocking_region(internal_read_func, &iis, fd);
}

static ssize_t
rb_write_internal(int fd, const void *buf, size_t count)
{
    struct io_internal_write_struct iis;
    iis.fd = fd;
    iis.buf = buf;
    iis.capa = count;

    return (ssize_t)rb_thread_io_blocking_region(internal_write_func, &iis, fd);
}

static ssize_t
rb_write_internal2(int fd, const void *buf, size_t count)
{
    struct io_internal_write_struct iis;
    iis.fd = fd;
    iis.buf = buf;
    iis.capa = count;

    return (ssize_t)rb_thread_call_without_gvl2(internal_write_func2, &iis,
      ((rb_unblock_function_t *)-1), ((void*)0));
}


static ssize_t
rb_writev_internal(int fd, const struct iovec *iov, int iovcnt)
{
    struct io_internal_writev_struct iis;
    iis.fd = fd;
    iis.iov = iov;
    iis.iovcnt = iovcnt;

    return (ssize_t)rb_thread_io_blocking_region(internal_writev_func, &iis, fd);
}


static VALUE
io_flush_buffer_sync(void *arg)
{
    rb_io_t *fptr = arg;
    long l = fptr->wbuf.len;
    ssize_t r = write(fptr->fd, fptr->wbuf.ptr+fptr->wbuf.off, (size_t)l);

    if (fptr->wbuf.len <= r) {
 fptr->wbuf.off = 0;
 fptr->wbuf.len = 0;
 return 0;
    }
    if (0 <= r) {
 fptr->wbuf.off += (int)r;
 fptr->wbuf.len -= (int)r;
 (*__errno_location ()) = 11;
    }
    return (VALUE)-1;
}

static void*
io_flush_buffer_sync2(void *arg)
{
    VALUE result = io_flush_buffer_sync(arg);





    return !result ? (void*)1 : (void*)result;
}

static VALUE
io_flush_buffer_async(VALUE arg)
{
    rb_io_t *fptr = (rb_io_t *)arg;
    return rb_thread_io_blocking_region(io_flush_buffer_sync, fptr, fptr->fd);
}

static VALUE
io_flush_buffer_async2(VALUE arg)
{
    rb_io_t *fptr = (rb_io_t *)arg;
    VALUE ret;

    ret = (VALUE)rb_thread_call_without_gvl2(io_flush_buffer_sync2, fptr,
          ((rb_unblock_function_t *)-1), ((void*)0));

    if (!ret) {

 (*__errno_location ()) = 11;
 return -1;
    }
    else if (ret == 1) {
 return 0;
    }
    return ret;
}

static inline int
io_flush_buffer(rb_io_t *fptr)
{
    if (fptr->write_lock) {
 if (rb_mutex_owned_p(fptr->write_lock))
     return (int)io_flush_buffer_async2((VALUE)fptr);
 else
     return (int)rb_mutex_synchronize(fptr->write_lock, io_flush_buffer_async2, (VALUE)fptr);
    }
    else {
 return (int)io_flush_buffer_async((VALUE)fptr);
    }
}

static int
io_fflush(rb_io_t *fptr)
{
    rb_io_check_closed(fptr);
    if (fptr->wbuf.len == 0)
        return 0;
    rb_io_check_closed(fptr);
    while (fptr->wbuf.len > 0 && io_flush_buffer(fptr) != 0) {
 if (!rb_io_wait_writable(fptr->fd))
     return -1;
        rb_io_check_closed(fptr);
    }
    return 0;
}

int
rb_io_wait_readable(int f)
{
    if (f < 0) {
 rb_raise(rb_eIOError, closed_stream);
    }
    switch ((*__errno_location ())) {
      case 4:

      case 85:

 rb_thread_check_ints();
 return TRUE;

      case 11:



 rb_thread_wait_fd(f);
 return TRUE;

      default:
 return FALSE;
    }
}

int
rb_io_wait_writable(int f)
{
    if (f < 0) {
 rb_raise(rb_eIOError, closed_stream);
    }
    switch ((*__errno_location ())) {
      case 4:

      case 85:
 rb_thread_check_ints();
 return TRUE;

      case 11:



 rb_thread_fd_writable(f);
 return TRUE;

      default:
 return FALSE;
    }
}

static void
make_writeconv(rb_io_t *fptr)
{
    if (!fptr->writeconv_initialized) {
        const char *senc, *denc;
        rb_encoding *enc;
        int ecflags;
        VALUE ecopts;

        fptr->writeconv_initialized = 1;

        ecflags = fptr->encs.ecflags & ~RUBY_ECONV_NEWLINE_DECORATOR_READ_MASK;
        ecopts = fptr->encs.ecopts;

        if (!fptr->encs.enc || (fptr->encs.enc == rb_ascii8bit_encoding() && !fptr->encs.enc2)) {

            fptr->writeconv_pre_ecflags = 0;
            fptr->writeconv_pre_ecopts = ((VALUE)RUBY_Qnil);
            fptr->writeconv = rb_econv_open_opts("", "", ecflags, ecopts);
            if (!fptr->writeconv)
                rb_exc_raise(rb_econv_open_exc("", "", ecflags));
            fptr->writeconv_asciicompat = ((VALUE)RUBY_Qnil);
        }
        else {
            enc = fptr->encs.enc2 ? fptr->encs.enc2 : fptr->encs.enc;
            senc = rb_econv_asciicompat_encoding((enc)->name);
            if (!senc && !(fptr->encs.ecflags & RUBY_ECONV_STATEFUL_DECORATOR_MASK)) {

                fptr->writeconv_pre_ecflags = ecflags;
                fptr->writeconv_pre_ecopts = ecopts;
                fptr->writeconv = ((void*)0);
                fptr->writeconv_asciicompat = ((VALUE)RUBY_Qnil);
            }
            else {

                fptr->writeconv_pre_ecflags = ecflags & ~RUBY_ECONV_STATEFUL_DECORATOR_MASK;
                fptr->writeconv_pre_ecopts = ecopts;
                if (senc) {
                    denc = (enc)->name;
                    fptr->writeconv_asciicompat =  ({ (__builtin_constant_p(senc)) ? rb_str_new_static((senc), (long)strlen(senc)) : rb_str_new_cstr(senc); });
                }
                else {
                    senc = denc = "";
                    fptr->writeconv_asciicompat =  ({ (__builtin_constant_p((enc)->name)) ? rb_str_new_static(((enc)->name), (long)strlen((enc)->name)) : rb_str_new_cstr((enc)->name); });
                }
                ecflags = fptr->encs.ecflags & (RUBY_ECONV_ERROR_HANDLER_MASK|RUBY_ECONV_STATEFUL_DECORATOR_MASK);
                ecopts = fptr->encs.ecopts;
                fptr->writeconv = rb_econv_open_opts(senc, denc, ecflags, ecopts);
                if (!fptr->writeconv)
                    rb_exc_raise(rb_econv_open_exc(senc, denc, ecflags));
            }
        }
    }
}


struct binwrite_arg {
    rb_io_t *fptr;
    VALUE str;
    const char *ptr;
    long length;
};

struct write_arg {
    VALUE io;
    VALUE str;
    int nosync;
};


static VALUE
io_binwrite_string(VALUE arg)
{
    struct binwrite_arg *p = (struct binwrite_arg *)arg;
    rb_io_t *fptr = p->fptr;
    long r;

    if (fptr->wbuf.len) {
 struct iovec iov[2];

 iov[0].iov_base = fptr->wbuf.ptr+fptr->wbuf.off;
 iov[0].iov_len = fptr->wbuf.len;
 iov[1].iov_base = (char *)p->ptr;
 iov[1].iov_len = p->length;

 r = rb_writev_internal(fptr->fd, iov, 2);

        if (r == -1)
            return -1;

 if (fptr->wbuf.len <= r) {
     r -= fptr->wbuf.len;
     fptr->wbuf.off = 0;
     fptr->wbuf.len = 0;
 }
 else {
     fptr->wbuf.off += (int)r;
     fptr->wbuf.len -= (int)r;
     r = 0L;
 }
    }
    else {
 r = rb_write_internal(fptr->fd, p->ptr, p->length);
    }

    return r;
}
static long
io_binwrite(VALUE str, const char *ptr, long len, rb_io_t *fptr, int nosync)
{
    long n, r, offset = 0;


    rb_thread_check_ints();

    if ((n = len) <= 0) return n;
    if (fptr->wbuf.ptr == ((void*)0) && !(!nosync && (fptr->mode & 0x00000008))) {
        fptr->wbuf.off = 0;
        fptr->wbuf.len = 0;
        fptr->wbuf.capa = 8192;
        fptr->wbuf.ptr = ((char*)ruby_xmalloc2((size_t)(fptr->wbuf.capa),sizeof(char)));
 fptr->write_lock = rb_mutex_new();
 rb_mutex_allow_trap(fptr->write_lock, 1);
    }
    if ((!nosync && (fptr->mode & (0x00000008|0x00000010))) ||
        (fptr->wbuf.ptr && fptr->wbuf.capa <= fptr->wbuf.len + len)) {
 struct binwrite_arg arg;

 arg.fptr = fptr;
 arg.str = str;
      retry:
 arg.ptr = ptr + offset;
 arg.length = n;
 if (fptr->write_lock) {
     r = rb_mutex_synchronize(fptr->write_lock, io_binwrite_string, (VALUE)&arg);
 }
 else {
     r = io_binwrite_string((VALUE)&arg);
 }

        if (r == n) return len;
        if (0 <= r) {
            offset += r;
            n -= r;
            (*__errno_location ()) = 11;
 }
 if (r == -2L)
     return -1L;
        if (rb_io_wait_writable(fptr->fd)) {
            rb_io_check_closed(fptr);
     if (offset < len)
  goto retry;
        }
        return -1L;
    }

    if (fptr->wbuf.off) {
        if (fptr->wbuf.len)
            memmove((fptr->wbuf.ptr), (fptr->wbuf.ptr+fptr->wbuf.off), sizeof(char)*(size_t)(fptr->wbuf.len));
        fptr->wbuf.off = 0;
    }
    memmove((fptr->wbuf.ptr+fptr->wbuf.off+fptr->wbuf.len), (ptr+offset), sizeof(char)*(size_t)(len));
    fptr->wbuf.len += (int)len;
    return len;
}



static VALUE
do_writeconv(VALUE str, rb_io_t *fptr, int *converted)
{
    if ((((fptr)->encs.enc != ((void*)0) && (fptr)->encs.enc != rb_ascii8bit_encoding()) || ((fptr)->mode & 0x00001000) || ((fptr)->encs.ecflags & (RUBY_ECONV_DECORATOR_MASK|RUBY_ECONV_STATEFUL_DECORATOR_MASK)))) {
        VALUE common_encoding = ((VALUE)RUBY_Qnil);
 (void)(fptr);

        make_writeconv(fptr);

        if (fptr->writeconv) {

            if (!!((VALUE)(fptr->writeconv_asciicompat) != ((VALUE)RUBY_Qnil)))
                common_encoding = fptr->writeconv_asciicompat;
            else if ((((fptr->mode) & 0x00000004) ? (0) : ((fptr->mode) & 0x00001000) ? (1) : (0)) && !rb_enc_asciicompat_inline(rb_enc_get(str))) {
                rb_raise(rb_eArgError, "ASCII incompatible string written for text mode IO without encoding conversion: %s",
                         (rb_enc_get(str))->name);
            }

        }
        else {
            if (fptr->encs.enc2)
                common_encoding = rb_enc_from_encoding(fptr->encs.enc2);
            else if (fptr->encs.enc != rb_ascii8bit_encoding())
                common_encoding = rb_enc_from_encoding(fptr->encs.enc);
        }

        if (!!((VALUE)(common_encoding) != ((VALUE)RUBY_Qnil))) {
            str = rb_str_encode(str, common_encoding,
                fptr->writeconv_pre_ecflags, fptr->writeconv_pre_ecopts);
     *converted = 1;
        }

        if (fptr->writeconv) {
            str = rb_econv_str_convert(fptr->writeconv, str, RUBY_ECONV_PARTIAL_INPUT);
     *converted = 1;
        }
    }
    return str;
}

static long
io_fwrite(VALUE str, rb_io_t *fptr, int nosync)
{
    int converted = 0;
    VALUE tmp;
    long n, len;
    const char *ptr;






    str = do_writeconv(str, fptr, &converted);
    if (converted)
 rb_obj_freeze_inline((VALUE)str);

    tmp = rb_str_tmp_frozen_acquire(str);
    (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(tmp))->as.ary, (len) = (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(tmp))->as.heap.ptr, (len) = ((struct RString*)(tmp))->as.heap.len));
    n = io_binwrite(tmp, ptr, len, fptr, nosync);
    rb_str_tmp_frozen_release(str, tmp);

    return n;
}

ssize_t
rb_io_bufwrite(VALUE io, const void *buf, size_t size)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);
    return (ssize_t)io_binwrite(0, buf, (long)size, fptr, 0);
}

static VALUE
io_write(VALUE io, VALUE str, int nosync)
{
    rb_io_t *fptr;
    long n;
    VALUE tmp;

    io = rb_io_get_write_io(io);
    str = rb_obj_as_string(str);
    tmp = rb_io_check_io(io);
    if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {

 return rb_funcall(io, id_write, 1, str);
    }
    io = tmp;
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);

    n = io_fwrite(str, fptr, nosync);
    if (n == -1L) rb_sys_fail_path_in(__func__, fptr->pathv);

    return (((VALUE)(n))<<1 | RUBY_FIXNUM_FLAG);
}


struct binwritev_arg {
    rb_io_t *fptr;
    const struct iovec *iov;
    int iovcnt;
};

static VALUE
call_writev_internal(VALUE arg)
{
    struct binwritev_arg *p = (struct binwritev_arg *)arg;
    return rb_writev_internal(p->fptr->fd, p->iov, p->iovcnt);
}

static long
io_binwritev(struct iovec *iov, int iovcnt, rb_io_t *fptr)
{
    int i;
    long r, total = 0, written_len = 0;


    rb_thread_check_ints();

    if (iovcnt == 0) return 0;
    for (i = 1; i < iovcnt; i++) total += iov[i].iov_len;

    if (fptr->wbuf.ptr == ((void*)0) && !(fptr->mode & 0x00000008)) {
 fptr->wbuf.off = 0;
 fptr->wbuf.len = 0;
 fptr->wbuf.capa = 8192;
 fptr->wbuf.ptr = ((char*)ruby_xmalloc2((size_t)(fptr->wbuf.capa),sizeof(char)));
 fptr->write_lock = rb_mutex_new();
 rb_mutex_allow_trap(fptr->write_lock, 1);
    }

    if (fptr->wbuf.ptr && fptr->wbuf.len) {
 long offset = fptr->wbuf.off + fptr->wbuf.len;
 if (offset + total <= fptr->wbuf.capa) {
     for (i = 1; i < iovcnt; i++) {
  memcpy(fptr->wbuf.ptr+offset, iov[i].iov_base, iov[i].iov_len);
  offset += iov[i].iov_len;
     }
     fptr->wbuf.len += total;
     return total;
 }
 else {
     iov[0].iov_base = fptr->wbuf.ptr + fptr->wbuf.off;
     iov[0].iov_len = fptr->wbuf.len;
 }
    }
    else {
 iov++;
 if (!--iovcnt) return 0;
    }

  retry:
    if (fptr->write_lock) {
 struct binwritev_arg arg;
 arg.fptr = fptr;
 arg.iov = iov;
 arg.iovcnt = iovcnt;
 r = rb_mutex_synchronize(fptr->write_lock, call_writev_internal, (VALUE)&arg);
    }
    else {
 r = rb_writev_internal(fptr->fd, iov, iovcnt);
    }

    if (r >= 0) {
 written_len += r;
 if (fptr->wbuf.ptr && fptr->wbuf.len) {
     if (written_len < fptr->wbuf.len) {
  fptr->wbuf.off += r;
  fptr->wbuf.len -= r;
     }
     else {
  written_len -= fptr->wbuf.len;
  fptr->wbuf.off = 0;
  fptr->wbuf.len = 0;
     }
 }
 if (written_len == total) return total;

 while (r >= (ssize_t)iov->iov_len) {

     r -= iov->iov_len;
     iov->iov_len = 0;
     iov++;
     if (!--iovcnt) return total;

 }
 iov->iov_base = (char *)iov->iov_base + r;
 iov->iov_len -= r;

 (*__errno_location ()) = 11;
    }
    if (rb_io_wait_writable(fptr->fd)) {
 rb_io_check_closed(fptr);
 goto retry;
    }

    return -1L;
}

static long
io_fwritev(int argc, VALUE *argv, rb_io_t *fptr)
{
    int i, converted, iovcnt = argc + 1;
    long n;
    VALUE v1, v2, str, tmp, *tmp_array;
    struct iovec *iov;

    iov = ((struct iovec*)(((size_t)(iovcnt) < 1024 / sizeof(struct iovec)) ? ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(v1); ; rb_gc_guarded_ptr; })) = 0, __builtin_alloca ((size_t)(iovcnt) * sizeof(struct iovec))) : rb_alloc_tmp_buffer2(&(v1), (long)(iovcnt), sizeof(struct iovec))));
    tmp_array = ((VALUE*)(((size_t)(argc) < 1024 / sizeof(VALUE)) ? ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(v2); ; rb_gc_guarded_ptr; })) = 0, __builtin_alloca ((size_t)(argc) * sizeof(VALUE))) : rb_alloc_tmp_buffer2(&(v2), (long)(argc), sizeof(VALUE))));

    for (i = 0; i < argc; i++) {
 str = rb_obj_as_string(argv[i]);
 converted = 0;
 str = do_writeconv(str, fptr, &converted);
 if (converted)
     rb_obj_freeze_inline((VALUE)str);

 tmp = rb_str_tmp_frozen_acquire(str);
 tmp_array[i] = tmp;

 iov[i+1].iov_base = (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr);
 iov[i+1].iov_len = (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len);
    }

    n = io_binwritev(iov, iovcnt, fptr);
    if (v1) rb_free_tmp_buffer(&(v1));

    for (i = 0; i < argc; i++) {
 rb_str_tmp_frozen_release(argv[i], tmp_array[i]);
    }

    if (v2) rb_free_tmp_buffer(&(v2));

    return n;
}


static VALUE
io_writev(int argc, VALUE *argv, VALUE io)
{
    rb_io_t *fptr;
    long n;
    VALUE tmp, total = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    int i, cnt = 1;

    io = rb_io_get_write_io(io);
    tmp = rb_io_check_io(io);
    if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {

 return rb_funcallv(io, id_write, argc, argv);
    }
    io = tmp;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);

    for (i = 0; i < argc; i += cnt) {

 if ((fptr->mode & (0x00000008|0x00000010)) && ((cnt = argc - i) < 1024)) {
     n = io_fwritev(cnt, &argv[i], fptr);
 }
 else

 {
     cnt = 1;

     n = io_fwrite(rb_obj_as_string(argv[i]), fptr, (i < argc-1));
 }
 if (n == -1L) rb_sys_fail_path_in(__func__, fptr->pathv);
 total = rb_fix_plus((((VALUE)(n))<<1 | RUBY_FIXNUM_FLAG), total);
    }

    return total;
}
static VALUE
io_write_m(int argc, VALUE *argv, VALUE io)
{
    if (argc > 1) {
 return io_writev(argc, argv, io);
    }
    else {
 VALUE str = argv[0];
 return io_write(io, str, 0);
    }
}

VALUE
rb_io_write(VALUE io, VALUE str)
{
    return rb_funcallv(io, id_write, 1, &str);
}

static VALUE
rb_io_writev(VALUE io, int argc, VALUE *argv)
{
    if (argc > 1 && rb_obj_method_arity(io, id_write) == 1) {
 if (io != rb_stderr && !(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
     VALUE klass = rb_class_of((VALUE)(io));
     char sep = ((!(((VALUE)(klass) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(klass) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(klass))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((klass)))->flags&((((VALUE)RUBY_FL_SINGLETON)))):0) ? (klass = io, '.') : '#';
     rb_warning("%+li\v%cwrite is outdated interface which accepts just one argument",
         klass, sep);
 }
 do rb_io_write(io, *argv++); while (--argc);
 return argv[0];
    }
    return rb_funcallv(io, id_write, argc, argv);
}
VALUE
rb_io_addstr(VALUE io, VALUE str)
{
    rb_io_write(io, str);
    return io;
}


static VALUE
nogvl_fsync(void *ptr)
{
    rb_io_t *fptr = ptr;





    return (VALUE)fsync(fptr->fd);
}


VALUE
rb_io_flush_raw(VALUE io, int sync)
{
    rb_io_t *fptr;

    if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
        return rb_funcall(io, id_flush, 0);
    }

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);

    if (fptr->mode & 0x00000002) {
        if (io_fflush(fptr) < 0)
            rb_sys_fail(0);
    }
    if (fptr->mode & 0x00000001) {
        io_unread(fptr);
    }

    return io;
}
VALUE
rb_io_flush(VALUE io)
{
    return rb_io_flush_raw(io, 1);
}
static VALUE
rb_io_tell(VALUE io)
{
    rb_io_t *fptr;
    off_t pos;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    pos = lseek(flush_before_seek(fptr)->fd, 0, 1);
    if (pos < 0 && (*__errno_location ())) rb_sys_fail_path_in(__func__, fptr->pathv);
    pos -= fptr->rbuf.len;
    return rb_long2num_inline(pos);
}

static VALUE
rb_io_seek(VALUE io, VALUE offset, int whence)
{
    rb_io_t *fptr;
    off_t pos;

    pos = rb_num2long_inline(offset);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    pos = ((*__errno_location ()) = 0, lseek(flush_before_seek(fptr)->fd, (pos), (whence)));
    if (pos < 0 && (*__errno_location ())) rb_sys_fail_path_in(__func__, fptr->pathv);

    return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
}

static int
interpret_seek_whence(VALUE vwhence)
{
    if (vwhence == sym_SET)
        return 0;
    if (vwhence == sym_CUR)
        return 1;
    if (vwhence == sym_END)
        return 2;

    if (vwhence == sym_DATA)
        return 3;


    if (vwhence == sym_HOLE)
        return 4;

    return rb_num2int_inline(vwhence);
}
static VALUE
rb_io_seek_m(int argc, VALUE *argv, VALUE io)
{
    VALUE offset, ptrname;
    int whence = 0;

    if (rb_scan_args(argc, argv, "11", &offset, &ptrname) == 2) {
 whence = interpret_seek_whence(ptrname);
    }

    return rb_io_seek(io, offset, whence);
}
static VALUE
rb_io_set_pos(VALUE io, VALUE offset)
{
    rb_io_t *fptr;
    off_t pos;

    pos = rb_num2long_inline(offset);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    pos = ((*__errno_location ()) = 0, lseek(flush_before_seek(fptr)->fd, (pos), (0)));
    if (pos < 0 && (*__errno_location ())) rb_sys_fail_path_in(__func__, fptr->pathv);

    return rb_long2num_inline(pos);
}

static void clear_readconv(rb_io_t *fptr);
static VALUE
rb_io_rewind(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (((*__errno_location ()) = 0, lseek(flush_before_seek(fptr)->fd, (0L), (0))) < 0 && (*__errno_location ())) rb_sys_fail_path_in(__func__, fptr->pathv);
    if (io == (*(struct argf *)(((struct RData*)(argf))->data)).current_file) {
 (*(struct argf *)(((struct RData*)(argf))->data)).lineno -= fptr->lineno;
    }
    fptr->lineno = 0;
    if (fptr->readconv) {
 clear_readconv(fptr);
    }

    return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
}

static int
io_fillbuf(rb_io_t *fptr)
{
    ssize_t r;

    if (fptr->rbuf.ptr == ((void*)0)) {
        fptr->rbuf.off = 0;
        fptr->rbuf.len = 0;
        fptr->rbuf.capa = (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000)) ? (128*1024) : 8192);
        fptr->rbuf.ptr = ((char*)ruby_xmalloc2((size_t)(fptr->rbuf.capa),sizeof(char)));



    }
    if (fptr->rbuf.len == 0) {
      retry:
 {
     r = rb_read_internal(fptr->fd, fptr->rbuf.ptr, fptr->rbuf.capa);
 }
        if (r < 0) {
            if (rb_io_wait_readable(fptr->fd))
                goto retry;
     {
  int e = (*__errno_location ());
  VALUE path = rb_sprintf("fd:%d ", fptr->fd);
  if (!!((VALUE)(fptr->pathv) != ((VALUE)RUBY_Qnil))) {
      rb_str_append(path, fptr->pathv);
  }
  rb_syserr_fail_path_in(__func__, (e), (path));
     }
        }
 if (r > 0) rb_io_check_closed(fptr);
        fptr->rbuf.off = 0;
        fptr->rbuf.len = (int)r;
        if (r == 0)
            return -1;
    }
    return 0;
}
VALUE
rb_io_eof(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);

    if (((fptr)->cbuf.len)) return ((VALUE)RUBY_Qfalse);
    if (((fptr)->rbuf.len)) return ((VALUE)RUBY_Qfalse);
    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);





    if (io_fillbuf(fptr) < 0) {
 return ((VALUE)RUBY_Qtrue);
    }
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_io_sync(VALUE io)
{
    rb_io_t *fptr;

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    return (fptr->mode & 0x00000008) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_io_set_sync(VALUE io, VALUE sync)
{
    rb_io_t *fptr;

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (!(((VALUE)(sync) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 fptr->mode |= 0x00000008;
    }
    else {
 fptr->mode &= ~0x00000008;
    }
    return sync;
}
static VALUE
rb_io_fsync(VALUE io)
{
    rb_io_t *fptr;

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);

    if (io_fflush(fptr) < 0)
        rb_sys_fail(0);
    if ((int)rb_thread_io_blocking_region(nogvl_fsync, fptr, fptr->fd) < 0)
 rb_sys_fail_path_in(__func__, fptr->pathv);
    return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
nogvl_fdatasync(void *ptr)
{
    rb_io_t *fptr = ptr;





    return (VALUE)fdatasync(fptr->fd);
}
static VALUE
rb_io_fdatasync(VALUE io)
{
    rb_io_t *fptr;

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);

    if (io_fflush(fptr) < 0)
        rb_sys_fail(0);

    if ((int)rb_thread_io_blocking_region(nogvl_fdatasync, fptr, fptr->fd) == 0)
 return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);


    return rb_io_fsync(io);
}
static VALUE
rb_io_fileno(VALUE io)
{
    rb_io_t *fptr = ((struct RFile*)(io))->fptr;
    int fd;

    rb_io_check_closed(fptr);
    fd = fptr->fd;
    return (((VALUE)(fd))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_pid(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (!fptr->pid)
 return ((VALUE)RUBY_Qnil);
    return (((VALUE)((int)(fptr->pid)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_inspect(VALUE obj)
{
    rb_io_t *fptr;
    VALUE result;
    static const char closed[] = " (closed)";

    fptr = ((struct RFile*)(obj))->fptr;
    if (!fptr) return rb_any_to_s(obj);
    result =  ({ (__builtin_constant_p("#<")) ? rb_str_new_static(("#<"), (long)strlen("#<")) : rb_str_new_cstr("#<"); });
    rb_str_append(result, rb_class_name(rb_class_of((VALUE)(obj))));
     ({ (__builtin_constant_p(":")) ? rb_str_cat((result), (":"), (long)strlen(":")) : rb_str_cat_cstr((result), (":")); });
    if (!((VALUE)(fptr->pathv) != ((VALUE)RUBY_Qnil))) {
        if (fptr->fd < 0) {
     rb_str_cat(result, closed+1, strlen(closed)-1);
        }
        else {
     rb_str_catf(result, "fd %d", fptr->fd);
        }
    }
    else {
 rb_str_append(result, fptr->pathv);
        if (fptr->fd < 0) {
     rb_str_cat(result, closed, strlen(closed));
        }
    }
    return  ({ (__builtin_constant_p(">")) ? rb_str_cat((result), (">"), (long)strlen(">")) : rb_str_cat_cstr((result), (">")); });
}
static VALUE
rb_io_to_io(VALUE io)
{
    return io;
}


static long
read_buffered_data(char *ptr, long len, rb_io_t *fptr)
{
    int n;

    n = ((fptr)->rbuf.len);
    if (n <= 0) return 0;
    if (n > len) n = (int)len;
    memmove((ptr), (fptr->rbuf.ptr+fptr->rbuf.off), sizeof(char)*(size_t)(n));
    fptr->rbuf.off += n;
    fptr->rbuf.len -= n;
    return n;
}

static long
io_bufread(char *ptr, long len, rb_io_t *fptr)
{
    long offset = 0;
    long n = len;
    long c;

    if (((fptr)->rbuf.len) == 0) {
 while (n > 0) {
          again:
     c = rb_read_internal(fptr->fd, ptr+offset, n);
     if (c == 0) break;
     if (c < 0) {
                if (rb_io_wait_readable(fptr->fd))
                    goto again;
  return -1;
     }
     offset += c;
     if ((n -= c) <= 0) break;
 }
 return len - n;
    }

    while (n > 0) {
 c = read_buffered_data(ptr+offset, n, fptr);
 if (c > 0) {
     offset += c;
     if ((n -= c) <= 0) break;
 }
 rb_io_check_closed(fptr);
 if (io_fillbuf(fptr) < 0) {
     break;
 }
    }
    return len - n;
}

static int io_setstrbuf(VALUE *str, long len);

struct bufread_arg {
    char *str_ptr;
    long len;
    rb_io_t *fptr;
};

static VALUE
bufread_call(VALUE arg)
{
    struct bufread_arg *p = (struct bufread_arg *)arg;
    p->len = io_bufread(p->str_ptr, p->len, p->fptr);
    return ((VALUE)RUBY_Qundef);
}

static long
io_fread(VALUE str, long offset, long size, rb_io_t *fptr)
{
    long len;
    struct bufread_arg arg;

    io_setstrbuf(&str, offset + size);
    arg.str_ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + offset;
    arg.len = size;
    arg.fptr = fptr;
    rb_str_locktmp_ensure(str, bufread_call, (VALUE)&arg);
    len = arg.len;
    if (len < 0) rb_sys_fail_path_in(__func__, fptr->pathv);
    return len;
}

ssize_t
rb_io_bufread(VALUE io, void *buf, size_t size)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_readable(fptr);
    return (ssize_t)io_bufread(buf, (long)size, fptr);
}

static long
remain_size(rb_io_t *fptr)
{
    struct stat st;
    off_t siz = ((fptr)->rbuf.len);
    off_t pos;

    if (fstat(fptr->fd, &st) == 0 && ((((st.st_mode)) & 0170000) == (0100000))



 )
    {
        if (io_fflush(fptr) < 0)
            rb_sys_fail(0);
 pos = lseek(fptr->fd, 0, 1);
 if (st.st_size >= pos && pos >= 0) {
     siz += st.st_size - pos;
     if (siz > 9223372036854775807L) {
  rb_raise(rb_eIOError, "file too big for single read");
     }
 }
    }
    else {
 siz += 8192;
    }
    return (long)siz;
}

static VALUE
io_enc_str(VALUE str, rb_io_t *fptr)
{
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    rb_enc_associate(str, io_read_encoding(fptr));
    return str;
}

static void
make_readconv(rb_io_t *fptr, int size)
{
    if (!fptr->readconv) {
        int ecflags;
        VALUE ecopts;
        const char *sname, *dname;
        ecflags = fptr->encs.ecflags & ~RUBY_ECONV_NEWLINE_DECORATOR_WRITE_MASK;
        ecopts = fptr->encs.ecopts;
        if (fptr->encs.enc2) {
            sname = (fptr->encs.enc2)->name;
            dname = (fptr->encs.enc)->name;
        }
        else {
            sname = dname = "";
        }
        fptr->readconv = rb_econv_open_opts(sname, dname, ecflags, ecopts);
        if (!fptr->readconv)
            rb_exc_raise(rb_econv_open_exc(sname, dname, ecflags));
        fptr->cbuf.off = 0;
        fptr->cbuf.len = 0;
 if (size < (128*1024)) size = (128*1024);
        fptr->cbuf.capa = size;
        fptr->cbuf.ptr = ((char*)ruby_xmalloc2((size_t)(fptr->cbuf.capa),sizeof(char)));
    }
}



static VALUE
fill_cbuf(rb_io_t *fptr, int ec_flags)
{
    const unsigned char *ss, *sp, *se;
    unsigned char *ds, *dp, *de;
    rb_econv_result_t res;
    int putbackable;
    int cbuf_len0;
    VALUE exc;

    ec_flags |= RUBY_ECONV_PARTIAL_INPUT;

    if (fptr->cbuf.len == fptr->cbuf.capa)
        return ((VALUE)RUBY_Qtrue);
    if (fptr->cbuf.len == 0)
        fptr->cbuf.off = 0;
    else if (fptr->cbuf.off + fptr->cbuf.len == fptr->cbuf.capa) {
        memmove(fptr->cbuf.ptr, fptr->cbuf.ptr+fptr->cbuf.off, fptr->cbuf.len);
        fptr->cbuf.off = 0;
    }

    cbuf_len0 = fptr->cbuf.len;

    while (1) {
        ss = sp = (const unsigned char *)fptr->rbuf.ptr + fptr->rbuf.off;
        se = sp + fptr->rbuf.len;
        ds = dp = (unsigned char *)fptr->cbuf.ptr + fptr->cbuf.off + fptr->cbuf.len;
        de = (unsigned char *)fptr->cbuf.ptr + fptr->cbuf.capa;
        res = rb_econv_convert(fptr->readconv, &sp, se, &dp, de, ec_flags);
        fptr->rbuf.off += (int)(sp - ss);
        fptr->rbuf.len -= (int)(sp - ss);
        fptr->cbuf.len += (int)(dp - ds);

        putbackable = rb_econv_putbackable(fptr->readconv);
        if (putbackable) {
            rb_econv_putback(fptr->readconv, (unsigned char *)fptr->rbuf.ptr + fptr->rbuf.off - putbackable, putbackable);
            fptr->rbuf.off -= putbackable;
            fptr->rbuf.len += putbackable;
        }

        exc = rb_econv_make_exception(fptr->readconv);
        if (!!((VALUE)(exc) != ((VALUE)RUBY_Qnil)))
            return exc;

        if (cbuf_len0 != fptr->cbuf.len)
            return ((VALUE)RUBY_Qtrue);

        if (res == econv_finished) {
            return ((VALUE)RUBY_Qnil);
 }

        if (res == econv_source_buffer_empty) {
            if (fptr->rbuf.len == 0) {
  do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
                if (io_fillbuf(fptr) == -1) {
      if (!fptr->readconv) {
   return ((VALUE)RUBY_Qnil);
      }
                    ds = dp = (unsigned char *)fptr->cbuf.ptr + fptr->cbuf.off + fptr->cbuf.len;
                    de = (unsigned char *)fptr->cbuf.ptr + fptr->cbuf.capa;
                    res = rb_econv_convert(fptr->readconv, ((void*)0), ((void*)0), &dp, de, 0);
                    fptr->cbuf.len += (int)(dp - ds);
                    rb_econv_check_error(fptr->readconv);
      break;
                }
            }
        }
    }
    if (cbuf_len0 != fptr->cbuf.len)
 return ((VALUE)RUBY_Qtrue);

    return ((VALUE)RUBY_Qnil);
}

static VALUE
more_char(rb_io_t *fptr)
{
    VALUE v;
    v = fill_cbuf(fptr, RUBY_ECONV_AFTER_OUTPUT);
    if (v != ((VALUE)RUBY_Qtrue) && v != ((VALUE)RUBY_Qnil))
        rb_exc_raise(v);
    return v;
}

static VALUE
io_shift_cbuf(rb_io_t *fptr, int len, VALUE *strp)
{
    VALUE str = ((VALUE)RUBY_Qnil);
    if (strp) {
 str = *strp;
 if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
     *strp = str =  ({ (__builtin_constant_p(fptr->cbuf.ptr+fptr->cbuf.off) && __builtin_constant_p(len)) ? rb_str_new_static((fptr->cbuf.ptr+fptr->cbuf.off), (len)) : rb_str_new((fptr->cbuf.ptr+fptr->cbuf.off), (len)); });
 }
 else {
     rb_str_cat(str, fptr->cbuf.ptr+fptr->cbuf.off, len);
 }
 (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
 rb_enc_associate(str, fptr->encs.enc);
    }
    fptr->cbuf.off += len;
    fptr->cbuf.len -= len;

    if (fptr->cbuf.len == 0)
        fptr->cbuf.off = 0;
    else if (fptr->cbuf.capa/2 < fptr->cbuf.off) {
        memmove(fptr->cbuf.ptr, fptr->cbuf.ptr+fptr->cbuf.off, fptr->cbuf.len);
        fptr->cbuf.off = 0;
    }
    return str;
}

static int
io_setstrbuf(VALUE *str, long len)
{



    if (!((VALUE)(*str) != ((VALUE)RUBY_Qnil))) {
 *str =  ({ (__builtin_constant_p(0) && __builtin_constant_p(len)) ? rb_str_new_static((0), (len)) : rb_str_new((0), (len)); });
 return TRUE;
    }
    else {
 VALUE s = rb_string_value(&(*str));
 long clen = (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len);
 if (clen >= len) {
     rb_str_modify(s);
     return FALSE;
 }
 len -= clen;
    }
    rb_str_modify_expand(*str, len);
    return FALSE;
}


static void
io_shrink_read_string(VALUE str, long n)
{
    if (rb_str_capacity(str) - n > 4096) {
 rb_str_resize(str, n);
    }
}

static void
io_set_read_length(VALUE str, long n, int shrinkable)
{
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) != n) {
 rb_str_modify(str);
 rb_str_set_len(str, n);
 if (shrinkable) io_shrink_read_string(str, n);
    }
}

static VALUE
read_all(rb_io_t *fptr, long siz, VALUE str)
{
    long bytes;
    long n;
    long pos;
    rb_encoding *enc;
    int cr;
    int shrinkable;

    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 int first = !!((VALUE)(str) != ((VALUE)RUBY_Qnil));
 (void)(fptr);
 shrinkable = io_setstrbuf(&str,0);
        make_readconv(fptr, 0);
        while (1) {
            VALUE v;
            if (fptr->cbuf.len) {
  if (first) rb_str_set_len(str, first = 0);
                io_shift_cbuf(fptr, fptr->cbuf.len, &str);
            }
            v = fill_cbuf(fptr, 0);
            if (v != ((VALUE)RUBY_Qtrue) && v != ((VALUE)RUBY_Qnil)) {
                if (fptr->cbuf.len) {
      if (first) rb_str_set_len(str, first = 0);
                    io_shift_cbuf(fptr, fptr->cbuf.len, &str);
                }
                rb_exc_raise(v);
            }
            if (v == ((VALUE)RUBY_Qnil)) {
                clear_readconv(fptr);
  if (first) rb_str_set_len(str, first = 0);
  if (shrinkable) io_shrink_read_string(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
                return io_enc_str(str, fptr);
            }
        }
    }

    (void)(fptr);
    bytes = 0;
    pos = 0;

    enc = io_read_encoding(fptr);
    cr = 0;

    if (siz == 0) siz = 8192;
    shrinkable = io_setstrbuf(&str, siz);
    for (;;) {
 do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
 n = io_fread(str, bytes, siz - bytes, fptr);
 if (n == 0 && bytes == 0) {
     rb_str_set_len(str, 0);
     break;
 }
 bytes += n;
 rb_str_set_len(str, bytes);
 if (cr != RUBY_ENC_CODERANGE_BROKEN)
     pos += rb_str_coderange_scan_restartable((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + pos, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + bytes, enc, &cr);
 if (bytes < siz) break;
 siz += 8192;
 rb_str_modify_expand(str, 8192);
    }
    if (shrinkable) io_shrink_read_string(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    str = io_enc_str(str, fptr);
    ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    return str;
}

void
rb_io_set_nonblock(rb_io_t *fptr)
{





    int oflags;

    oflags = fcntl(fptr->fd, 3);
    if (oflags == -1) {
        rb_sys_fail_path_in(__func__, fptr->pathv);
    }



    if ((oflags & 04000) == 0) {
        oflags |= 04000;
        if (fcntl(fptr->fd, 4, oflags) == -1) {
            rb_sys_fail_path_in(__func__, fptr->pathv);
        }
    }

}

struct read_internal_arg {
    int fd;
    char *str_ptr;
    long len;
};

static VALUE
read_internal_call(VALUE arg)
{
    struct read_internal_arg *p = (struct read_internal_arg *)arg;
    p->len = rb_read_internal(p->fd, p->str_ptr, p->len);
    return ((VALUE)RUBY_Qundef);
}

static int
no_exception_p(VALUE opts)
{
    VALUE except;
    ID id = idException;

    rb_get_kwargs(opts, &id, 0, 1, &except);
    return except == ((VALUE)RUBY_Qfalse);
}

static VALUE
io_getpartial(int argc, VALUE *argv, VALUE io, VALUE opts, int nonblock)
{
    rb_io_t *fptr;
    VALUE length, str;
    long n, len;
    struct read_internal_arg arg;
    int shrinkable;

    rb_scan_args(argc, argv, "11", &length, &str);

    if ((len = rb_num2long_inline(length)) < 0) {
 rb_raise(rb_eArgError, "negative length %ld given", len);
    }

    shrinkable = io_setstrbuf(&str, len);
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);

    if (len == 0)
 return str;

    if (!nonblock)
        do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    n = read_buffered_data((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), len, fptr);
    if (n <= 0) {
      again:
        if (nonblock) {
            rb_io_set_nonblock(fptr);
        }
 io_setstrbuf(&str, len);
 arg.fd = fptr->fd;
 arg.str_ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 arg.len = len;
 rb_str_locktmp_ensure(str, read_internal_call, (VALUE)&arg);
 n = arg.len;
        if (n < 0) {
     int e = (*__errno_location ());
            if (!nonblock && rb_io_wait_readable(fptr->fd))
                goto again;
     if (nonblock && (e == 11 || e == 11)) {
                if (no_exception_p(opts))
                    return sym_wait_readable;
                else
      rb_readwrite_syserr_fail(RB_IO_WAIT_READABLE,
          e, "read would block");
            }
            rb_syserr_fail_path_in(__func__, (e), (fptr->pathv));
        }
    }
    io_set_read_length(str, n, shrinkable);

    if (n == 0)
        return ((VALUE)RUBY_Qnil);
    else
        return str;
}
static VALUE
io_readpartial(int argc, VALUE *argv, VALUE io)
{
    VALUE ret;

    ret = io_getpartial(argc, argv, io, ((VALUE)RUBY_Qnil), 0);
    if (!((VALUE)(ret) != ((VALUE)RUBY_Qnil)))
        rb_eof_error();
    return ret;
}

static VALUE
io_nonblock_eof(VALUE opts)
{
    if (!no_exception_p(opts)) {
        rb_eof_error();
    }
    return ((VALUE)RUBY_Qnil);
}


static VALUE
io_read_nonblock(VALUE io, VALUE length, VALUE str, VALUE ex)
{
    rb_io_t *fptr;
    long n, len;
    struct read_internal_arg arg;
    int shrinkable;

    if ((len = rb_num2long_inline(length)) < 0) {
 rb_raise(rb_eArgError, "negative length %ld given", len);
    }

    shrinkable = io_setstrbuf(&str, len);
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);

    if (len == 0)
 return str;

    n = read_buffered_data((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), len, fptr);
    if (n <= 0) {
 rb_io_set_nonblock(fptr);
 shrinkable |= io_setstrbuf(&str, len);
 arg.fd = fptr->fd;
 arg.str_ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 arg.len = len;
 rb_str_locktmp_ensure(str, read_internal_call, (VALUE)&arg);
 n = arg.len;
        if (n < 0) {
     int e = (*__errno_location ());
     if ((e == 11 || e == 11)) {
                if (ex == ((VALUE)RUBY_Qfalse)) return sym_wait_readable;
  rb_readwrite_syserr_fail(RB_IO_WAIT_READABLE,
      e, "read would block");
            }
            rb_syserr_fail_path_in(__func__, (e), (fptr->pathv));
        }
    }
    io_set_read_length(str, n, shrinkable);

    if (n == 0) {
 if (ex == ((VALUE)RUBY_Qfalse)) return ((VALUE)RUBY_Qnil);
 rb_eof_error();
    }

    return str;
}


static VALUE
io_write_nonblock(VALUE io, VALUE str, VALUE ex)
{
    rb_io_t *fptr;
    long n;

    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))
 str = rb_obj_as_string(str);

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);

    if (io_fflush(fptr) < 0)
        rb_sys_fail(0);

    rb_io_set_nonblock(fptr);
    n = write(fptr->fd, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));

    if (n == -1) {
 int e = (*__errno_location ());
 if (e == 11 || e == 11) {
     if (ex == ((VALUE)RUBY_Qfalse)) {
  return sym_wait_writable;
     }
     else {
  rb_readwrite_syserr_fail(RB_IO_WAIT_WRITABLE, e, "write would block");
     }
 }
 rb_syserr_fail_path_in(__func__, (e), (fptr->pathv));
    }

    return (((VALUE)(n))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
io_read(int argc, VALUE *argv, VALUE io)
{
    rb_io_t *fptr;
    long n, len;
    VALUE length, str;
    int shrinkable;




    rb_scan_args(argc, argv, "02", &length, &str);

    if (!((VALUE)(length) != ((VALUE)RUBY_Qnil))) {
 rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
 rb_io_check_char_readable(fptr);
 return read_all(fptr, remain_size(fptr), str);
    }
    len = rb_num2long_inline(length);
    if (len < 0) {
 rb_raise(rb_eArgError, "negative length %ld given", len);
    }

    shrinkable = io_setstrbuf(&str,len);

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);
    if (len == 0) {
 io_set_read_length(str, 0, shrinkable);
 return str;
    }

    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);



    n = io_fread(str, 0, len, fptr);
    io_set_read_length(str, n, shrinkable);





    if (n == 0) return ((VALUE)RUBY_Qnil);
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);

    return str;
}

static void
rscheck(const char *rsptr, long rslen, VALUE rs)
{
    if (!rs) return;
    if ((!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr) != rsptr && (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len) != rslen)
 rb_raise(rb_eRuntimeError, "rs modified");
}

static int
appendline(rb_io_t *fptr, int delim, VALUE *strp, long *lp)
{
    VALUE str = *strp;
    long limit = *lp;

    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 (void)(fptr);
        make_readconv(fptr, 0);
        do {
            const char *p, *e;
            int searchlen = ((fptr)->cbuf.len);
            if (searchlen) {
                p = ((fptr)->cbuf.ptr+(fptr)->cbuf.off);
                if (0 < limit && limit < searchlen)
                    searchlen = (int)limit;
                e = memchr(p, delim, searchlen);
                if (e) {
      int len = (int)(e-p+1);
                    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil)))
                        *strp = str =  ({ (__builtin_constant_p(p) && __builtin_constant_p(len)) ? rb_str_new_static((p), (len)) : rb_str_new((p), (len)); });
                    else
                        rb_str_cat(str, p, len);
                    fptr->cbuf.off += len;
                    fptr->cbuf.len -= len;
                    limit -= len;
                    *lp = limit;
                    return delim;
                }

                if (!((VALUE)(str) != ((VALUE)RUBY_Qnil)))
                    *strp = str =  ({ (__builtin_constant_p(p) && __builtin_constant_p(searchlen)) ? rb_str_new_static((p), (searchlen)) : rb_str_new((p), (searchlen)); });
                else
                    rb_str_cat(str, p, searchlen);
                fptr->cbuf.off += searchlen;
                fptr->cbuf.len -= searchlen;
                limit -= searchlen;

                if (limit == 0) {
                    *lp = limit;
                    return (unsigned char)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-1];
                }
            }
        } while (more_char(fptr) != ((VALUE)RUBY_Qnil));
        clear_readconv(fptr);
        *lp = limit;
        return (-1);
    }

    (void)(fptr);
    do {
 long pending = ((fptr)->rbuf.len);
 if (pending > 0) {
     const char *p = ((fptr)->rbuf.ptr+(fptr)->rbuf.off);
     const char *e;
     long last;

     if (limit > 0 && pending > limit) pending = limit;
     e = memchr(p, delim, pending);
     if (e) pending = e - p + 1;
     if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
  last = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
  rb_str_resize(str, last + pending);
     }
     else {
                last = 0;
  *strp = str = rb_str_buf_new(pending);
  rb_str_set_len(str, pending);
     }
     read_buffered_data((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + last, pending, fptr);
     limit -= pending;
     *lp = limit;
     if (e) return delim;
     if (limit == 0)
  return (unsigned char)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-1];
 }
 do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    } while (io_fillbuf(fptr) >= 0);
    *lp = limit;
    return (-1);
}

static inline int
swallow(rb_io_t *fptr, int term)
{
    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 rb_encoding *enc = io_read_encoding(fptr);
 int needconv = (enc)->min_enc_len != 1;
 (void)(fptr);
 make_readconv(fptr, 0);
 do {
     size_t cnt;
     while ((cnt = ((fptr)->cbuf.len)) > 0) {
  const char *p = ((fptr)->cbuf.ptr+(fptr)->cbuf.off);
  int i;
  if (!needconv) {
      if (*p != term) return TRUE;
      i = (int)cnt;
      while (--i && *++p == term);
  }
  else {
      const char *e = p + cnt;
      if (rb_enc_ascget(p, e, &i, enc) != term) return TRUE;
      while ((p += i) < e && rb_enc_ascget(p, e, &i, enc) == term);
      i = (int)(e - p);
  }
  io_shift_cbuf(fptr, (int)cnt - i, ((void*)0));
     }
 } while (more_char(fptr) != ((VALUE)RUBY_Qnil));
 return FALSE;
    }

    (void)(fptr);
    do {
 size_t cnt;
 while ((cnt = ((fptr)->rbuf.len)) > 0) {
     char buf[1024];
     const char *p = ((fptr)->rbuf.ptr+(fptr)->rbuf.off);
     int i;
     if (cnt > sizeof buf) cnt = sizeof buf;
     if (*p != term) return TRUE;
     i = (int)cnt;
     while (--i && *++p == term);
     if (!read_buffered_data(buf, cnt - i, fptr))
  rb_sys_fail_path_in(__func__, fptr->pathv);
 }
 do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    } while (io_fillbuf(fptr) == 0);
    return FALSE;
}

static VALUE
rb_io_getline_fast(rb_io_t *fptr, rb_encoding *enc, int chomp)
{
    VALUE str = ((VALUE)RUBY_Qnil);
    int len = 0;
    long pos = 0;
    int cr = 0;

    do {
 int pending = ((fptr)->rbuf.len);

 if (pending > 0) {
     const char *p = ((fptr)->rbuf.ptr+(fptr)->rbuf.off);
     const char *e;
     int chomplen = 0;

     e = memchr(p, '\n', pending);
     if (e) {
                pending = (int)(e - p + 1);
  if (chomp) {
      chomplen = (pending > 1 && *(e-1) == '\r') + 1;
  }
     }
     if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
  str =  ({ (__builtin_constant_p(p) && __builtin_constant_p(pending - chomplen)) ? rb_str_new_static((p), (pending - chomplen)) : rb_str_new((p), (pending - chomplen)); });
  fptr->rbuf.off += pending;
  fptr->rbuf.len -= pending;
     }
     else {
  rb_str_resize(str, len + pending - chomplen);
  read_buffered_data((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)+len, pending - chomplen, fptr);
  fptr->rbuf.off += chomplen;
  fptr->rbuf.len -= chomplen;
     }
     len += pending - chomplen;
     if (cr != RUBY_ENC_CODERANGE_BROKEN)
  pos += rb_str_coderange_scan_restartable((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + pos, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + len, enc, &cr);
     if (e) break;
 }
 do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    } while (io_fillbuf(fptr) >= 0);
    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);

    str = io_enc_str(str, fptr);
    ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    fptr->lineno++;

    return str;
}

struct getline_arg {
    VALUE io;
    VALUE rs;
    long limit;
    unsigned int chomp: 1;
};

static void
extract_getline_opts(VALUE opts, struct getline_arg *args)
{
    int chomp = FALSE;
    if (!!((VALUE)(opts) != ((VALUE)RUBY_Qnil))) {
 static ID kwds[1];
 VALUE vchomp;
 if (!kwds[0]) {
     kwds[0] = (__builtin_constant_p("chomp") ?  (rb_intern2(("chomp"), (long)strlen("chomp"))) : (rb_intern)("chomp"));
 }
 rb_get_kwargs(opts, kwds, 0, -2, &vchomp);
 chomp = (vchomp != ((VALUE)RUBY_Qundef)) && !(((VALUE)(vchomp) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
    }
    args->chomp = chomp;
}

static void
extract_getline_args(int argc, VALUE *argv, struct getline_arg *args)
{
    VALUE rs = rb_rs, lim = ((VALUE)RUBY_Qnil);

    if (argc == 1) {
        VALUE tmp = ((VALUE)RUBY_Qnil);

        if (!((VALUE)(argv[0]) != ((VALUE)RUBY_Qnil)) || !!((VALUE)(tmp = rb_check_string_type(argv[0])) != ((VALUE)RUBY_Qnil))) {
            rs = tmp;
        }
        else {
            lim = argv[0];
        }
    }
    else if (2 <= argc) {
 rs = argv[0], lim = argv[1];
        if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil)))
            rb_string_value(&(rs));
    }
    args->rs = rs;
    args->limit = !((VALUE)(lim) != ((VALUE)RUBY_Qnil)) ? -1L : rb_num2long_inline(lim);
}

static void
check_getline_args(VALUE *rsp, long *limit, VALUE io)
{
    rb_io_t *fptr;
    VALUE rs = *rsp;

    if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) {
 rb_encoding *enc_rs, *enc_io;

 rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
 enc_rs = rb_enc_get(rs);
 enc_io = io_read_encoding(fptr);
 if (enc_io != enc_rs &&
     (rb_enc_str_coderange(rs) != RUBY_ENC_CODERANGE_7BIT ||
      ((!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len) > 0 && !rb_enc_asciicompat_inline(enc_io)))) {
            if (rs == rb_default_rs) {
                rs =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), (enc_io)) : rb_enc_str_new((0), (0), (enc_io)); });
                rb_str_buf_cat_ascii(rs, "\n");
  *rsp = rs;
            }
            else {
                rb_raise(rb_eArgError, "encoding mismatch: %s IO with %s RS",
                         (enc_io)->name,
                         (enc_rs)->name);
            }
 }
    }
}

static void
prepare_getline_args(int argc, VALUE *argv, struct getline_arg *args, VALUE io)
{
    VALUE opts;
    argc = rb_scan_args(argc, argv, "02:", ((void*)0), ((void*)0), &opts);
    extract_getline_args(argc, argv, args);
    extract_getline_opts(opts, args);
    check_getline_args(&args->rs, &args->limit, io);
}

static VALUE
rb_io_getline_0(VALUE rs, long limit, int chomp, rb_io_t *fptr)
{
    VALUE str = ((VALUE)RUBY_Qnil);
    int nolimit = 0;
    rb_encoding *enc;

    rb_io_check_char_readable(fptr);
    if (!((VALUE)(rs) != ((VALUE)RUBY_Qnil)) && limit < 0) {
 str = read_all(fptr, 0, ((VALUE)RUBY_Qnil));
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return ((VALUE)RUBY_Qnil);
 if (chomp) rb_str_chomp_string(str, rb_default_rs);
    }
    else if (limit == 0) {
 return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), (io_read_encoding(fptr))) : rb_enc_str_new((0), (0), (io_read_encoding(fptr))); });
    }
    else if (rs == rb_default_rs && limit < 0 && !((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000)) &&
             rb_enc_asciicompat_inline(enc = io_read_encoding(fptr))) {
 (void)(fptr);
 return rb_io_getline_fast(fptr, enc, chomp);
    }
    else {
 int c, newline = -1;
 const char *rsptr = 0;
 long rslen = 0;
 int rspara = 0;
        int extra_limit = 16;
 int chomp_cr = chomp;

 (void)(fptr);
        enc = io_read_encoding(fptr);

 if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) {
     rslen = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len);
     if (rslen == 0) {
  rsptr = "\n\n";
  rslen = 2;
  rspara = 1;
  swallow(fptr, '\n');
  rs = 0;
  if (!rb_enc_asciicompat_inline(enc)) {
      rs =  ({ (__builtin_constant_p(rsptr) && __builtin_constant_p(rslen)) ? rb_usascii_str_new_static((rsptr), (rslen)) : rb_usascii_str_new((rsptr), (rslen)); });
      rs = rb_str_encode(rs, rb_enc_from_encoding(enc), 0, ((VALUE)RUBY_Qnil));
      rb_obj_freeze_inline((VALUE)rs);
      rsptr = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr);
      rslen = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len);
  }
     }
     else {
  rsptr = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr);
     }
     newline = (unsigned char)rsptr[rslen - 1];
     chomp_cr = chomp && rslen == 1 && newline == '\n';
 }


 while ((c = appendline(fptr, newline, &str, &limit)) != (-1)) {
            const char *s, *p, *pp, *e;

     if (c == newline) {
  if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < rslen) continue;
  s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
                e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
  p = e - rslen;
  pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(p),(OnigUChar*)(e)));
  if (pp != p) continue;
  if (!rspara) rscheck(rsptr, rslen, rs);
  if (memcmp(p, rsptr, rslen) == 0) {
      if (chomp) {
   if (chomp_cr && p > s && *(p-1) == '\r') --p;
   rb_str_set_len(str, p - s);
      }
      break;
  }
     }
     if (limit == 0) {
  s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
  p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
  pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(p-1),(OnigUChar*)(p)));
                if (extra_limit &&
                    ((rb_enc_precise_mbclen(pp, p, enc)) < -1)) {


                    limit = 1;
                    extra_limit--;
                }
                else {
                    nolimit = 1;
                    break;
                }
     }
 }

 if (rspara && c != (-1))
     swallow(fptr, '\n');
 if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil)))
            str = io_enc_str(str, fptr);
    }

    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil)) && !nolimit) {
 fptr->lineno++;
    }

    return str;
}

static VALUE
rb_io_getline_1(VALUE rs, long limit, int chomp, VALUE io)
{
    rb_io_t *fptr;
    int old_lineno, new_lineno;
    VALUE str;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    old_lineno = fptr->lineno;
    str = rb_io_getline_0(rs, limit, chomp, fptr);
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil)) && (new_lineno = fptr->lineno) != old_lineno) {
 if (io == (*(struct argf *)(((struct RData*)(argf))->data)).current_file) {
     (*(struct argf *)(((struct RData*)(argf))->data)).lineno += new_lineno - old_lineno;
     (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
 }
 else {
     (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = new_lineno;
 }
    }

    return str;
}

static VALUE
rb_io_getline(int argc, VALUE *argv, VALUE io)
{
    struct getline_arg args;

    prepare_getline_args(argc, argv, &args, io);
    return rb_io_getline_1(args.rs, args.limit, args.chomp, io);
}

VALUE
rb_io_gets(VALUE io)
{
    return rb_io_getline_1(rb_default_rs, -1, FALSE, io);
}

VALUE
rb_io_gets_internal(VALUE io)
{
    rb_io_t *fptr;
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    return rb_io_getline_0(rb_default_rs, -1, FALSE, fptr);
}
static VALUE
rb_io_gets_m(int argc, VALUE *argv, VALUE io)
{
    VALUE str;

    str = rb_io_getline(argc, argv, io);
    rb_lastline_set(str);

    return str;
}
static VALUE
rb_io_lineno(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);
    return (((VALUE)((int)(fptr->lineno)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_set_lineno(VALUE io, VALUE lineno)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);
    fptr->lineno = rb_num2int_inline(lineno);
    return lineno;
}
static VALUE
rb_io_readline(int argc, VALUE *argv, VALUE io)
{
    VALUE line = rb_io_gets_m(argc, argv, io);

    if (!((VALUE)(line) != ((VALUE)RUBY_Qnil))) {
 rb_eof_error();
    }
    return line;
}

static VALUE io_readlines(const struct getline_arg *arg, VALUE io);
static VALUE
rb_io_readlines(int argc, VALUE *argv, VALUE io)
{
    struct getline_arg args;

    prepare_getline_args(argc, argv, &args, io);
    return io_readlines(&args, io);
}

static VALUE
io_readlines(const struct getline_arg *arg, VALUE io)
{
    VALUE line, ary;

    if (arg->limit == 0)
 rb_raise(rb_eArgError, "invalid limit: 0 for readlines");
    ary = rb_ary_new();
    while (!!((VALUE)(line = rb_io_getline_1(arg->rs, arg->limit, arg->chomp, io)) != ((VALUE)RUBY_Qnil))) {
 rb_ary_push(ary, line);
    }
    return ary;
}
static VALUE
rb_io_each_line(int argc, VALUE *argv, VALUE io)
{
    VALUE str;
    struct getline_arg args;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((io), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
    prepare_getline_args(argc, argv, &args, io);
    if (args.limit == 0)
 rb_raise(rb_eArgError, "invalid limit: 0 for each_line");
    while (!!((VALUE)(str = rb_io_getline_1(args.rs, args.limit, args.chomp, io)) != ((VALUE)RUBY_Qnil))) {
 rb_yield(str);
    }
    return io;
}





static VALUE
rb_io_lines(int argc, VALUE *argv, VALUE io)
{
    rb_warn("IO#lines is deprecated; use #each_line instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(io, (rb_id2sym((__builtin_constant_p("each_line") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_line")), (long)strlen(("each_line"))); (ID) rb_intern_id_cache; }) : rb_intern("each_line")))), argc, argv);
    return rb_io_each_line(argc, argv, io);
}
static VALUE
rb_io_each_byte(VALUE io)
{
    rb_io_t *fptr;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((io), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);

    do {
 while (fptr->rbuf.len > 0) {
     char *p = fptr->rbuf.ptr + fptr->rbuf.off++;
     fptr->rbuf.len--;
     rb_yield((((VALUE)(*p & 0xff))<<1 | RUBY_FIXNUM_FLAG));
     (*__errno_location ()) = 0;
 }
 rb_io_check_byte_readable(fptr);
 do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    } while (io_fillbuf(fptr) >= 0);
    return io;
}





static VALUE
rb_io_bytes(VALUE io)
{
    rb_warn("IO#bytes is deprecated; use #each_byte instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(io, (rb_id2sym((__builtin_constant_p("each_byte") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_byte")), (long)strlen(("each_byte"))); (ID) rb_intern_id_cache; }) : rb_intern("each_byte")))), 0, 0);
    return rb_io_each_byte(io);
}

static VALUE
io_getc(rb_io_t *fptr, rb_encoding *enc)
{
    int r, n, cr = 0;
    VALUE str;

    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 rb_encoding *read_enc = io_read_encoding(fptr);

 str = ((VALUE)RUBY_Qnil);
 (void)(fptr);
        make_readconv(fptr, 0);

        while (1) {
            if (fptr->cbuf.len) {
  r = rb_enc_precise_mbclen(fptr->cbuf.ptr+fptr->cbuf.off,
   fptr->cbuf.ptr+fptr->cbuf.off+fptr->cbuf.len,
   read_enc);
                if (!((r) < -1))
                    break;
                if (fptr->cbuf.len == fptr->cbuf.capa) {
                    rb_raise(rb_eIOError, "too long character");
                }
            }

            if (more_char(fptr) == ((VALUE)RUBY_Qnil)) {
                if (fptr->cbuf.len == 0) {
      clear_readconv(fptr);
      return ((VALUE)RUBY_Qnil);
  }

  str =  ({ (__builtin_constant_p(fptr->cbuf.ptr+fptr->cbuf.off) && __builtin_constant_p(1)) ? rb_enc_str_new_static((fptr->cbuf.ptr+fptr->cbuf.off), (1), (read_enc)) : rb_enc_str_new((fptr->cbuf.ptr+fptr->cbuf.off), (1), (read_enc)); });
  fptr->cbuf.off += 1;
  fptr->cbuf.len -= 1;
                if (fptr->cbuf.len == 0) clear_readconv(fptr);
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_BROKEN));
  return str;
            }
        }
        if (((r) == -1)) {
            r = rb_enc_mbclen(fptr->cbuf.ptr+fptr->cbuf.off,
                              fptr->cbuf.ptr+fptr->cbuf.off+fptr->cbuf.len,
                              read_enc);
            io_shift_cbuf(fptr, r, &str);
     cr = RUBY_ENC_CODERANGE_BROKEN;
 }
 else {
     io_shift_cbuf(fptr, (r), &str);
     cr = RUBY_ENC_CODERANGE_VALID;
     if ((r) == 1 && rb_enc_asciicompat_inline(read_enc) &&
  rb_isascii((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0])) {
  cr = RUBY_ENC_CODERANGE_7BIT;
     }
 }
 str = io_enc_str(str, fptr);
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
 return str;
    }

    (void)(fptr);
    if (io_fillbuf(fptr) < 0) {
 return ((VALUE)RUBY_Qnil);
    }
    if (rb_enc_asciicompat_inline(enc) && rb_isascii(fptr->rbuf.ptr[fptr->rbuf.off])) {
 str =  ({ (__builtin_constant_p(fptr->rbuf.ptr+fptr->rbuf.off) && __builtin_constant_p(1)) ? rb_str_new_static((fptr->rbuf.ptr+fptr->rbuf.off), (1)) : rb_str_new((fptr->rbuf.ptr+fptr->rbuf.off), (1)); });
 fptr->rbuf.off += 1;
 fptr->rbuf.len -= 1;
 cr = RUBY_ENC_CODERANGE_7BIT;
    }
    else {
 r = rb_enc_precise_mbclen(fptr->rbuf.ptr+fptr->rbuf.off, fptr->rbuf.ptr+fptr->rbuf.off+fptr->rbuf.len, enc);
 if ((0 < (r)) &&
     (n = (r)) <= fptr->rbuf.len) {
     str =  ({ (__builtin_constant_p(fptr->rbuf.ptr+fptr->rbuf.off) && __builtin_constant_p(n)) ? rb_str_new_static((fptr->rbuf.ptr+fptr->rbuf.off), (n)) : rb_str_new((fptr->rbuf.ptr+fptr->rbuf.off), (n)); });
     fptr->rbuf.off += n;
     fptr->rbuf.len -= n;
     cr = RUBY_ENC_CODERANGE_VALID;
 }
 else if (((r) < -1)) {
     str =  ({ (__builtin_constant_p(fptr->rbuf.ptr+fptr->rbuf.off) && __builtin_constant_p(fptr->rbuf.len)) ? rb_str_new_static((fptr->rbuf.ptr+fptr->rbuf.off), (fptr->rbuf.len)) : rb_str_new((fptr->rbuf.ptr+fptr->rbuf.off), (fptr->rbuf.len)); });
     fptr->rbuf.len = 0;
   getc_needmore:
     if (io_fillbuf(fptr) != -1) {
  rb_str_cat(str, fptr->rbuf.ptr+fptr->rbuf.off, 1);
  fptr->rbuf.off++;
  fptr->rbuf.len--;
  r = rb_enc_precise_mbclen((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)+(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), enc);
  if (((r) < -1)) {
      goto getc_needmore;
  }
  else if ((0 < (r))) {
      cr = RUBY_ENC_CODERANGE_VALID;
  }
     }
 }
 else {
     str =  ({ (__builtin_constant_p(fptr->rbuf.ptr+fptr->rbuf.off) && __builtin_constant_p(1)) ? rb_str_new_static((fptr->rbuf.ptr+fptr->rbuf.off), (1)) : rb_str_new((fptr->rbuf.ptr+fptr->rbuf.off), (1)); });
     fptr->rbuf.off++;
     fptr->rbuf.len--;
 }
    }
    if (!cr) cr = RUBY_ENC_CODERANGE_BROKEN;
    str = io_enc_str(str, fptr);
    ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    return str;
}
static VALUE
rb_io_each_char(VALUE io)
{
    rb_io_t *fptr;
    rb_encoding *enc;
    VALUE c;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((io), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);

    enc = io_input_encoding(fptr);
    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    while (!!((VALUE)(c = io_getc(fptr, enc)) != ((VALUE)RUBY_Qnil))) {
        rb_yield(c);
    }
    return io;
}





static VALUE
rb_io_chars(VALUE io)
{
    rb_warn("IO#chars is deprecated; use #each_char instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(io, (rb_id2sym((__builtin_constant_p("each_char") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_char")), (long)strlen(("each_char"))); (ID) rb_intern_id_cache; }) : rb_intern("each_char")))), 0, 0);
    return rb_io_each_char(io);
}
static VALUE
rb_io_each_codepoint(VALUE io)
{
    rb_io_t *fptr;
    rb_encoding *enc;
    unsigned int c;
    int r, n;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((io), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);

    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 (void)(fptr);
 r = 1;
 for (;;) {
     make_readconv(fptr, 0);
     for (;;) {
  if (fptr->cbuf.len) {
      if (fptr->encs.enc)
   r = rb_enc_precise_mbclen(fptr->cbuf.ptr+fptr->cbuf.off,
        fptr->cbuf.ptr+fptr->cbuf.off+fptr->cbuf.len,
        fptr->encs.enc);
      else
   r = (1);
      if (!((r) < -1))
   break;
      if (fptr->cbuf.len == fptr->cbuf.capa) {
   rb_raise(rb_eIOError, "too long character");
      }
  }
  if (more_char(fptr) == ((VALUE)RUBY_Qnil)) {
                    clear_readconv(fptr);
      if (!(0 < (r))) {
   enc = fptr->encs.enc;
   goto invalid;
      }
      return io;
  }
     }
     if (((r) == -1)) {
  enc = fptr->encs.enc;
  goto invalid;
     }
     n = (r);
     if (fptr->encs.enc) {
  c = rb_enc_codepoint_len((fptr->cbuf.ptr+fptr->cbuf.off),(fptr->cbuf.ptr+fptr->cbuf.off+fptr->cbuf.len),0,(fptr->encs.enc));


     }
     else {
  c = (unsigned char)fptr->cbuf.ptr[fptr->cbuf.off];
     }
     fptr->cbuf.off += n;
     fptr->cbuf.len -= n;
     rb_yield((((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
 }
    }
    (void)(fptr);
    enc = io_input_encoding(fptr);
    while (io_fillbuf(fptr) >= 0) {
 r = rb_enc_precise_mbclen(fptr->rbuf.ptr+fptr->rbuf.off,
      fptr->rbuf.ptr+fptr->rbuf.off+fptr->rbuf.len, enc);
 if ((0 < (r)) &&
     (n = (r)) <= fptr->rbuf.len) {
     c = rb_enc_codepoint_len((fptr->rbuf.ptr+fptr->rbuf.off),(fptr->rbuf.ptr+fptr->rbuf.off+fptr->rbuf.len),0,(enc));

     fptr->rbuf.off += n;
     fptr->rbuf.len -= n;
     rb_yield((((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
 }
 else if (((r) == -1)) {
   invalid:
     rb_raise(rb_eArgError, "invalid byte sequence in %s", (enc)->name);
 }
 else if (((r) < -1)) {
     char cbuf[8], *p = cbuf;
     int more = (-1-(r));
     if (more > ((int)(sizeof(cbuf) / sizeof((cbuf)[0])))) goto invalid;
     more += n = fptr->rbuf.len;
     if (more > ((int)(sizeof(cbuf) / sizeof((cbuf)[0])))) goto invalid;
     while ((n = (int)read_buffered_data(p, more, fptr)) > 0 &&
     (p += n, (more -= n) > 0)) {
  if (io_fillbuf(fptr) < 0) goto invalid;
  if ((n = fptr->rbuf.len) > more) n = more;
     }
     r = rb_enc_precise_mbclen(cbuf, p, enc);
     if (!(0 < (r))) goto invalid;
     c = rb_enc_codepoint_len((cbuf),(p),0,(enc));
     rb_yield((((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
 }
 else {
     continue;
 }
    }
    return io;
}





static VALUE
rb_io_codepoints(VALUE io)
{
    rb_warn("IO#codepoints is deprecated; use #each_codepoint instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(io, (rb_id2sym((__builtin_constant_p("each_codepoint") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_codepoint")), (long)strlen(("each_codepoint"))); (ID) rb_intern_id_cache; }) : rb_intern("each_codepoint")))), 0, 0);
    return rb_io_each_codepoint(io);
}
static VALUE
rb_io_getc(VALUE io)
{
    rb_io_t *fptr;
    rb_encoding *enc;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);

    enc = io_input_encoding(fptr);
    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    return io_getc(fptr, enc);
}
static VALUE
rb_io_readchar(VALUE io)
{
    VALUE c = rb_io_getc(io);

    if (!((VALUE)(c) != ((VALUE)RUBY_Qnil))) {
 rb_eof_error();
    }
    return c;
}
VALUE
rb_io_getbyte(VALUE io)
{
    rb_io_t *fptr;
    int c;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);
    do { if (!((fptr)->rbuf.len)) { ; rb_io_check_closed(fptr); }} while(0);
    if (fptr->fd == 0 && (fptr->mode & 0x00000010) && ( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(rb_stdout))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((rb_stdout) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((rb_stdout) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((rb_stdout) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((rb_stdout) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(rb_stdout)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(rb_stdout))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
        rb_io_t *ofp;
        rb_io_check_closed((ofp) = ((struct RFile*)(rb_io_taint_check(rb_stdout)))->fptr);
        if (ofp->mode & 0x00000010) {
            rb_io_flush(rb_stdout);
        }
    }
    if (io_fillbuf(fptr) < 0) {
 return ((VALUE)RUBY_Qnil);
    }
    fptr->rbuf.off++;
    fptr->rbuf.len--;
    c = (unsigned char)fptr->rbuf.ptr[fptr->rbuf.off-1];
    return (((VALUE)(c & 0xff))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_readbyte(VALUE io)
{
    VALUE c = rb_io_getbyte(io);

    if (!((VALUE)(c) != ((VALUE)RUBY_Qnil))) {
 rb_eof_error();
    }
    return c;
}
VALUE
rb_io_ungetbyte(VALUE io, VALUE b)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);
    if (!((VALUE)(b) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    if ((((int)(long)(b))&RUBY_FIXNUM_FLAG)) {
 char cc = ((int)rb_fix2int((VALUE)(b)));
 b =  ({ (__builtin_constant_p(&cc) && __builtin_constant_p(1)) ? rb_str_new_static((&cc), (1)) : rb_str_new((&cc), (1)); });
    }
    else {
 do { rb_string_value(&(b)); rb_check_safe_obj(b);} while (0);
    }
    io_ungetbyte(b, fptr);
    return ((VALUE)RUBY_Qnil);
}
VALUE
rb_io_ungetc(VALUE io, VALUE c)
{
    rb_io_t *fptr;
    long len;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_char_readable(fptr);
    if (!((VALUE)(c) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    if ((((int)(long)(c))&RUBY_FIXNUM_FLAG)) {
 c = rb_enc_uint_chr(((unsigned int)rb_fix2uint(c)), io_read_encoding(fptr));
    }
    else if (( ((RUBY_T_BIGNUM) == RUBY_T_FIXNUM) ? (((int)(long)(c))&RUBY_FIXNUM_FLAG) : ((RUBY_T_BIGNUM) == RUBY_T_TRUE) ? ((c) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_BIGNUM) == RUBY_T_FALSE) ? ((c) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_BIGNUM) == RUBY_T_NIL) ? ((c) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_BIGNUM) == RUBY_T_UNDEF) ? ((c) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_BIGNUM) == RUBY_T_SYMBOL) ? ((((VALUE)(c)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(c) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(c) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(c))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_BIGNUM) == RUBY_T_FLOAT) ? ( ((((int)(long)(c))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(c) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(c) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(c))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(c) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(c) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(c))->flags & RUBY_T_MASK) == (RUBY_T_BIGNUM)))) {
 c = rb_enc_uint_chr(((unsigned int)rb_num2uint(c)), io_read_encoding(fptr));
    }
    else {
 do { rb_string_value(&(c)); rb_check_safe_obj(c);} while (0);
    }
    if (((fptr)->encs.enc2 != ((void*)0) || ((fptr)->mode & 0x00001000))) {
 (void)(fptr);
        len = (!(((struct RBasic*)(c))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(c))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(c))->as.heap.len);

 if (len > 2147483647)
     rb_raise(rb_eIOError, "ungetc failed");

        make_readconv(fptr, (int)len);
        if (fptr->cbuf.capa - fptr->cbuf.len < len)
            rb_raise(rb_eIOError, "ungetc failed");
        if (fptr->cbuf.off < len) {
            memmove((fptr->cbuf.ptr+fptr->cbuf.capa-fptr->cbuf.len), (fptr->cbuf.ptr+fptr->cbuf.off), sizeof(char)*(size_t)(fptr->cbuf.len));


            fptr->cbuf.off = fptr->cbuf.capa-fptr->cbuf.len;
        }
        fptr->cbuf.off -= (int)len;
        fptr->cbuf.len += (int)len;
        memmove((fptr->cbuf.ptr+fptr->cbuf.off), ((!(((struct RBasic*)(c))->flags & RSTRING_NOEMBED) ? ((struct RString*)(c))->as.ary : ((struct RString*)(c))->as.heap.ptr)), sizeof(char)*(size_t)(len));
    }
    else {
 (void)(fptr);
        io_ungetbyte(c, fptr);
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_isatty(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (isatty(fptr->fd) == 0)
 return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_io_close_on_exec_p(VALUE io)
{
    rb_io_t *fptr;
    VALUE write_io;
    int fd, ret;

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
        rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
        if (fptr && 0 <= (fd = fptr->fd)) {
            if ((ret = fcntl(fd, 1)) == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
            if (!(ret & 1)) return ((VALUE)RUBY_Qfalse);
        }
    }

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (fptr && 0 <= (fd = fptr->fd)) {
        if ((ret = fcntl(fd, 1)) == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
        if (!(ret & 1)) return ((VALUE)RUBY_Qfalse);
    }
    return ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_io_set_close_on_exec(VALUE io, VALUE arg)
{
    int flag = !(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) ? 1 : 0;
    rb_io_t *fptr;
    VALUE write_io;
    int fd, ret;

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
        rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
        if (fptr && 0 <= (fd = fptr->fd)) {
            if ((ret = fcntl(fptr->fd, 1)) == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
            if ((ret & 1) != flag) {
                ret = (ret & ~1) | flag;
                ret = fcntl(fd, 2, ret);
                if (ret == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
            }
        }

    }

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (fptr && 0 <= (fd = fptr->fd)) {
        if ((ret = fcntl(fd, 1)) == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
        if ((ret & 1) != flag) {
            ret = (ret & ~1) | flag;
            ret = fcntl(fd, 2, ret);
            if (ret == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
        }
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
finish_writeconv(rb_io_t *fptr, int noalloc)
{
    unsigned char *ds, *dp, *de;
    rb_econv_result_t res;

    if (!fptr->wbuf.ptr) {
        unsigned char buf[1024];
        long r;

        res = econv_destination_buffer_full;
        while (res == econv_destination_buffer_full) {
            ds = dp = buf;
            de = buf + sizeof(buf);
            res = rb_econv_convert(fptr->writeconv, ((void*)0), ((void*)0), &dp, de, 0);
            while (dp-ds) {
              retry:
  if (fptr->write_lock && rb_mutex_owned_p(fptr->write_lock))
      r = rb_write_internal2(fptr->fd, ds, dp-ds);
  else
      r = rb_write_internal(fptr->fd, ds, dp-ds);
                if (r == dp-ds)
                    break;
                if (0 <= r) {
                    ds += r;
                }
                if (rb_io_wait_writable(fptr->fd)) {
                    if (fptr->fd < 0)
                        return noalloc ? ((VALUE)RUBY_Qtrue) : rb_exc_new_str(rb_eIOError,  ({ (__builtin_constant_p(closed_stream)) ? rb_str_new_static((closed_stream), (long)strlen(closed_stream)) : rb_str_new_cstr(closed_stream); }));
                    goto retry;
                }
                return noalloc ? ((VALUE)RUBY_Qtrue) : (((VALUE)((int)((*__errno_location ()))))<<1 | RUBY_FIXNUM_FLAG);
            }
            if (res == econv_invalid_byte_sequence ||
                res == econv_incomplete_input ||
                res == econv_undefined_conversion) {
                return noalloc ? ((VALUE)RUBY_Qtrue) : rb_econv_make_exception(fptr->writeconv);
            }
        }

        return ((VALUE)RUBY_Qnil);
    }

    res = econv_destination_buffer_full;
    while (res == econv_destination_buffer_full) {
        if (fptr->wbuf.len == fptr->wbuf.capa) {
            if (io_fflush(fptr) < 0)
                return noalloc ? ((VALUE)RUBY_Qtrue) : (((VALUE)((int)((*__errno_location ()))))<<1 | RUBY_FIXNUM_FLAG);
        }

        ds = dp = (unsigned char *)fptr->wbuf.ptr + fptr->wbuf.off + fptr->wbuf.len;
        de = (unsigned char *)fptr->wbuf.ptr + fptr->wbuf.capa;
        res = rb_econv_convert(fptr->writeconv, ((void*)0), ((void*)0), &dp, de, 0);
        fptr->wbuf.len += (int)(dp - ds);
        if (res == econv_invalid_byte_sequence ||
            res == econv_incomplete_input ||
            res == econv_undefined_conversion) {
            return noalloc ? ((VALUE)RUBY_Qtrue) : rb_econv_make_exception(fptr->writeconv);
        }
    }
    return ((VALUE)RUBY_Qnil);
}

struct finish_writeconv_arg {
    rb_io_t *fptr;
    int noalloc;
};

static VALUE
finish_writeconv_sync(VALUE arg)
{
    struct finish_writeconv_arg *p = (struct finish_writeconv_arg *)arg;
    return finish_writeconv(p->fptr, p->noalloc);
}

static void*
nogvl_close(void *ptr)
{
    int *fd = ptr;

    return (void*)(intptr_t)close(*fd);
}

static int
maygvl_close(int fd, int keepgvl)
{
    if (keepgvl)
 return close(fd);





    return (int)(intptr_t)rb_thread_call_without_gvl(nogvl_close, &fd, ((rb_unblock_function_t *)-1), 0);
}

static void*
nogvl_fclose(void *ptr)
{
    FILE *file = ptr;

    return (void*)(intptr_t)fclose(file);
}

static int
maygvl_fclose(FILE *file, int keepgvl)
{
    if (keepgvl)
 return fclose(file);

    return (int)(intptr_t)rb_thread_call_without_gvl(nogvl_fclose, file, ((rb_unblock_function_t *)-1), 0);
}

static void free_io_buffer(rb_io_buffer_t *buf);
static void clear_codeconv(rb_io_t *fptr);

static void
fptr_finalize_flush(rb_io_t *fptr, int noraise, int keepgvl)
{
    VALUE err = ((VALUE)RUBY_Qnil);
    int fd = fptr->fd;
    FILE *stdio_file = fptr->stdio_file;
    int mode = fptr->mode;

    if (fptr->writeconv) {
 if (fptr->write_lock && !noraise) {
            struct finish_writeconv_arg arg;
            arg.fptr = fptr;
            arg.noalloc = noraise;
            err = rb_mutex_synchronize(fptr->write_lock, finish_writeconv_sync, (VALUE)&arg);
 }
 else {
     err = finish_writeconv(fptr, noraise);
 }
    }
    if (fptr->wbuf.len) {
 if (noraise) {
     if ((int)io_flush_buffer_sync(fptr) < 0 && !((VALUE)(err) != ((VALUE)RUBY_Qnil)))
  err = ((VALUE)RUBY_Qtrue);
 }
 else {
     if (io_fflush(fptr) < 0 && !((VALUE)(err) != ((VALUE)RUBY_Qnil)))
  err = (((VALUE)((int)((*__errno_location ()))))<<1 | RUBY_FIXNUM_FLAG);
 }
    }

    fptr->fd = -1;
    fptr->stdio_file = 0;
    fptr->mode &= ~(0x00000001|0x00000002);

    if (((fptr)->mode & (1<<16)) || fd <= 2) {

    }
    else if (stdio_file) {


 if ((maygvl_fclose(stdio_file, noraise) < 0) && !((VALUE)(err) != ((VALUE)RUBY_Qnil)))
     err = noraise ? ((VALUE)RUBY_Qtrue) : (((VALUE)((int)((*__errno_location ()))))<<1 | RUBY_FIXNUM_FLAG);
    }
    else if (0 <= fd) {





 keepgvl |= !(mode & 0x00000002);
 keepgvl |= noraise;
 if ((maygvl_close(fd, keepgvl) < 0) && !((VALUE)(err) != ((VALUE)RUBY_Qnil)))
     err = noraise ? ((VALUE)RUBY_Qtrue) : (((VALUE)((int)((*__errno_location ()))))<<1 | RUBY_FIXNUM_FLAG);
    }

    if (!!((VALUE)(err) != ((VALUE)RUBY_Qnil)) && !noraise) {
 if ( ({ const VALUE integer_type_obj = (err); ((((int)(long)(integer_type_obj))&RUBY_FIXNUM_FLAG) || (!(((VALUE)(integer_type_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(integer_type_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(integer_type_obj))->flags & RUBY_T_MASK) == RUBY_T_BIGNUM)); }))
     rb_syserr_fail_path_in(__func__, (rb_num2int_inline(err)), (fptr->pathv));
 else
     rb_exc_raise(err);
    }
}

static void
fptr_finalize(rb_io_t *fptr, int noraise)
{
    fptr_finalize_flush(fptr, noraise, FALSE);
    free_io_buffer(&fptr->rbuf);
    free_io_buffer(&fptr->wbuf);
    clear_codeconv(fptr);
}

static void
rb_io_fptr_cleanup(rb_io_t *fptr, int noraise)
{
    if (fptr->finalize) {
 (*fptr->finalize)(fptr, noraise);
    }
    else {
 fptr_finalize(fptr, noraise);
    }
}

static void
free_io_buffer(rb_io_buffer_t *buf)
{
    if (buf->ptr) {
        ruby_xfree(buf->ptr);
        buf->ptr = ((void*)0);
    }
}

static void
clear_readconv(rb_io_t *fptr)
{
    if (fptr->readconv) {
        rb_econv_close(fptr->readconv);
        fptr->readconv = ((void*)0);
    }
    free_io_buffer(&fptr->cbuf);
}

static void
clear_writeconv(rb_io_t *fptr)
{
    if (fptr->writeconv) {
        rb_econv_close(fptr->writeconv);
        fptr->writeconv = ((void*)0);
    }
    fptr->writeconv_initialized = 0;
}

static void
clear_codeconv(rb_io_t *fptr)
{
    clear_readconv(fptr);
    clear_writeconv(fptr);
}

int
rb_io_fptr_finalize(rb_io_t *fptr)
{
    if (!fptr) return 0;
    fptr->pathv = ((VALUE)RUBY_Qnil);
    if (0 <= fptr->fd)
 rb_io_fptr_cleanup(fptr, TRUE);
    fptr->write_lock = 0;
    free_io_buffer(&fptr->rbuf);
    free_io_buffer(&fptr->wbuf);
    clear_codeconv(fptr);
    ruby_xfree(fptr);
    return 1;
}

 extern size_t
rb_io_memsize(const rb_io_t *fptr)
{
    size_t size = sizeof(rb_io_t);
    size += fptr->rbuf.capa;
    size += fptr->wbuf.capa;
    size += fptr->cbuf.capa;
    if (fptr->readconv) size += rb_econv_memsize(fptr->readconv);
    if (fptr->writeconv) size += rb_econv_memsize(fptr->writeconv);
    return size;
}
int rb_notify_fd_close(int fd);
static rb_io_t *
io_close_fptr(VALUE io)
{
    rb_io_t *fptr;
    int fd;
    VALUE write_io;
    rb_io_t *write_fptr;
    int busy;

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
        write_fptr = ((struct RFile*)(write_io))->fptr;
        if (write_fptr && 0 <= write_fptr->fd) {
            rb_io_fptr_cleanup(write_fptr, TRUE);
        }
    }

    fptr = ((struct RFile*)(io))->fptr;
    if (!fptr) return 0;
    if (fptr->fd < 0) return 0;

    fd = fptr->fd;
    busy = rb_notify_fd_close(fd);
    if (busy) {
 fptr_finalize_flush(fptr, FALSE, FALSE);
 do rb_thread_schedule(); while (rb_notify_fd_close(fd));
    }
    rb_io_fptr_cleanup(fptr, FALSE);
    return fptr;
}

static void
fptr_waitpid(rb_io_t *fptr, int nohang)
{
    int status;
    if (fptr->pid) {
 rb_last_status_clear();
 rb_waitpid(fptr->pid, &status, nohang ? 1 : 0);
 fptr->pid = 0;
    }
}

VALUE
rb_io_close(VALUE io)
{
    rb_io_t *fptr = io_close_fptr(io);
    if (fptr) fptr_waitpid(fptr, 0);
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_close_m(VALUE io)
{
    rb_io_t *fptr = rb_io_get_fptr(io);
    if (fptr->fd < 0) {
        return ((VALUE)RUBY_Qnil);
    }
    rb_io_close(io);
    return ((VALUE)RUBY_Qnil);
}

static VALUE
io_call_close(VALUE io)
{
    rb_check_funcall(io, (__builtin_constant_p("close") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("close")), (long)strlen(("close"))); (ID) rb_intern_id_cache; }) : rb_intern("close")), 0, 0);
    return io;
}

static VALUE
ignore_closed_stream(VALUE io, VALUE exc)
{
    enum {mesg_len = sizeof(closed_stream)-1};
    VALUE mesg = rb_attr_get(exc, (__builtin_constant_p("mesg") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("mesg")), (long)strlen(("mesg"))); (ID) rb_intern_id_cache; }) : rb_intern("mesg")));
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(mesg))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((mesg) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((mesg) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((mesg) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((mesg) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(mesg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(mesg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mesg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mesg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(mesg))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(mesg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mesg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mesg))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(mesg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(mesg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(mesg))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) ||
 (!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(mesg))->as.heap.len) != mesg_len ||
 memcmp((!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(mesg))->as.ary : ((struct RString*)(mesg))->as.heap.ptr), closed_stream, mesg_len)) {
 rb_exc_raise(exc);
    }
    return io;
}

static VALUE
io_close(VALUE io)
{
    VALUE closed = rb_check_funcall(io, (__builtin_constant_p("closed?") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("closed?")), (long)strlen(("closed?"))); (ID) rb_intern_id_cache; }) : rb_intern("closed?")), 0, 0);
    if (closed != ((VALUE)RUBY_Qundef) && !(((VALUE)(closed) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) return io;
    rb_rescue2(io_call_close, io, ignore_closed_stream, io,
        rb_eIOError, (VALUE)0);
    return io;
}
static VALUE
rb_io_closed(VALUE io)
{
    rb_io_t *fptr;
    VALUE write_io;
    rb_io_t *write_fptr;

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
        write_fptr = ((struct RFile*)(write_io))->fptr;
        if (write_fptr && 0 <= write_fptr->fd) {
            return ((VALUE)RUBY_Qfalse);
        }
    }

    fptr = rb_io_get_fptr(io);
    return 0 <= fptr->fd ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_io_close_read(VALUE io)
{
    rb_io_t *fptr;
    VALUE write_io;

    fptr = rb_io_get_fptr(rb_io_taint_check(io));
    if (fptr->fd < 0) return ((VALUE)RUBY_Qnil);
    if (is_socket(fptr->fd, fptr->pathv)) {



        if (shutdown(fptr->fd, SHUT_RD) < 0)
            rb_sys_fail_path_in(__func__, fptr->pathv);
        fptr->mode &= ~0x00000001;
        if (!(fptr->mode & 0x00000002))
            return rb_io_close(io);
        return ((VALUE)RUBY_Qnil);
    }

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
 rb_io_t *wfptr;
 wfptr = rb_io_get_fptr(rb_io_taint_check(write_io));
 wfptr->pid = fptr->pid;
 fptr->pid = 0;
        ((struct RFile*)(io))->fptr = wfptr;

 fptr->tied_io_for_writing = 0;
 ((struct RFile*)(write_io))->fptr = fptr;
 rb_io_fptr_cleanup(fptr, FALSE);

        return ((VALUE)RUBY_Qnil);
    }

    if ((fptr->mode & (0x00000020|0x00000002)) == 0x00000002) {
 rb_raise(rb_eIOError, "closing non-duplex IO for reading");
    }
    return rb_io_close(io);
}
static VALUE
rb_io_close_write(VALUE io)
{
    rb_io_t *fptr;
    VALUE write_io;

    write_io = rb_io_get_write_io(io);
    fptr = rb_io_get_fptr(rb_io_taint_check(write_io));
    if (fptr->fd < 0) return ((VALUE)RUBY_Qnil);
    if (is_socket(fptr->fd, fptr->pathv)) {



        if (shutdown(fptr->fd, SHUT_WR) < 0)
            rb_sys_fail_path_in(__func__, fptr->pathv);
        fptr->mode &= ~0x00000002;
        if (!(fptr->mode & 0x00000001))
     return rb_io_close(write_io);
        return ((VALUE)RUBY_Qnil);
    }

    if ((fptr->mode & (0x00000020|0x00000001)) == 0x00000001) {
 rb_raise(rb_eIOError, "closing non-duplex IO for writing");
    }

    if (io != write_io) {
 fptr = rb_io_get_fptr(rb_io_taint_check(io));
 fptr->tied_io_for_writing = 0;
    }
    rb_io_close(write_io);
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_sysseek(int argc, VALUE *argv, VALUE io)
{
    VALUE offset, ptrname;
    int whence = 0;
    rb_io_t *fptr;
    off_t pos;

    if (rb_scan_args(argc, argv, "11", &offset, &ptrname) == 2) {
 whence = interpret_seek_whence(ptrname);
    }
    pos = rb_num2long_inline(offset);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if ((fptr->mode & 0x00000001) &&
        (((fptr)->rbuf.len) || ((fptr)->cbuf.len))) {
 rb_raise(rb_eIOError, "sysseek for buffered IO");
    }
    if ((fptr->mode & 0x00000002) && fptr->wbuf.len) {
 rb_warn("sysseek for buffered IO");
    }
    (*__errno_location ()) = 0;
    pos = lseek(fptr->fd, pos, whence);
    if (pos == -1 && (*__errno_location ())) rb_sys_fail_path_in(__func__, fptr->pathv);

    return rb_long2num_inline(pos);
}
static VALUE
rb_io_syswrite(VALUE io, VALUE str)
{
    VALUE tmp;
    rb_io_t *fptr;
    long n, len;
    const char *ptr;

    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))
 str = rb_obj_as_string(str);

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);

    if (fptr->wbuf.len) {
 rb_warn("syswrite for buffered IO");
    }

    tmp = rb_str_tmp_frozen_acquire(str);
    (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(tmp))->as.ary, (len) = (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(tmp))->as.heap.ptr, (len) = ((struct RString*)(tmp))->as.heap.len));
    n = rb_write_internal(fptr->fd, ptr, len);
    if (n == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
    rb_str_tmp_frozen_release(str, tmp);

    return (((VALUE)(n))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_sysread(int argc, VALUE *argv, VALUE io)
{
    VALUE len, str;
    rb_io_t *fptr;
    long n, ilen;
    struct read_internal_arg arg;
    int shrinkable;

    rb_scan_args(argc, argv, "11", &len, &str);
    ilen = rb_num2long_inline(len);

    shrinkable = io_setstrbuf(&str, ilen);
    if (ilen == 0) return str;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);

    if (((fptr)->rbuf.len)) {
 rb_raise(rb_eIOError, "sysread for buffered IO");
    }
    rb_thread_wait_fd(fptr->fd);

    rb_io_check_closed(fptr);

    io_setstrbuf(&str, ilen);
    rb_str_locktmp(str);
    arg.fd = fptr->fd;
    arg.str_ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    arg.len = ilen;
    rb_ensure(read_internal_call, (VALUE)&arg, rb_str_unlocktmp, str);
    n = arg.len;

    if (n == -1) {
 rb_sys_fail_path_in(__func__, fptr->pathv);
    }
    io_set_read_length(str, n, shrinkable);
    if (n == 0 && ilen > 0) {
 rb_eof_error();
    }
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);

    return str;
}


struct prdwr_internal_arg {
    int fd;
    void *buf;
    size_t count;
    off_t offset;
};



static VALUE
internal_pread_func(void *arg)
{
    struct prdwr_internal_arg *p = arg;
    return (VALUE)pread(p->fd, p->buf, p->count, p->offset);
}

static VALUE
pread_internal_call(VALUE arg)
{
    struct prdwr_internal_arg *p = (struct prdwr_internal_arg *)arg;
    return rb_thread_io_blocking_region(internal_pread_func, p, p->fd);
}
static VALUE
rb_io_pread(int argc, VALUE *argv, VALUE io)
{
    VALUE len, offset, str;
    rb_io_t *fptr;
    ssize_t n;
    struct prdwr_internal_arg arg;
    int shrinkable;

    rb_scan_args(argc, argv, "21", &len, &offset, &str);
    arg.count = rb_num2ulong_inline(len);
    arg.offset = rb_num2long_inline(offset);

    shrinkable = io_setstrbuf(&str, (long)arg.count);
    if (arg.count == 0) return str;
    arg.buf = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_byte_readable(fptr);

    arg.fd = fptr->fd;
    rb_io_check_closed(fptr);

    rb_str_locktmp(str);
    n = (ssize_t)rb_ensure(pread_internal_call, (VALUE)&arg, rb_str_unlocktmp, str);

    if (n == -1) {
 rb_sys_fail_path_in(__func__, fptr->pathv);
    }
    io_set_read_length(str, n, shrinkable);
    if (n == 0 && arg.count > 0) {
 rb_eof_error();
    }
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);

    return str;
}





static VALUE
internal_pwrite_func(void *ptr)
{
    struct prdwr_internal_arg *arg = ptr;

    return (VALUE)pwrite(arg->fd, arg->buf, arg->count, arg->offset);
}
static VALUE
rb_io_pwrite(VALUE io, VALUE str, VALUE offset)
{
    rb_io_t *fptr;
    ssize_t n;
    struct prdwr_internal_arg arg;
    VALUE tmp;

    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))
 str = rb_obj_as_string(str);

    arg.offset = rb_num2long_inline(offset);

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_writable(fptr);
    arg.fd = fptr->fd;

    tmp = rb_str_tmp_frozen_acquire(str);
    arg.buf = (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr);
    arg.count = (size_t)(!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len);

    n = (ssize_t)rb_thread_io_blocking_region(internal_pwrite_func, &arg, fptr->fd);
    if (n == -1) rb_sys_fail_path_in(__func__, fptr->pathv);
    rb_str_tmp_frozen_release(str, tmp);

    return rb_long2num_inline(n);
}




VALUE
rb_io_binmode(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (fptr->readconv)
        rb_econv_binmode(fptr->readconv);
    if (fptr->writeconv)
        rb_econv_binmode(fptr->writeconv);
    fptr->mode |= 0x00000004;
    fptr->mode &= ~0x00001000;
    fptr->writeconv_pre_ecflags &= ~RUBY_ECONV_NEWLINE_DECORATOR_MASK;
    return io;
}

static void
io_ascii8bit_binmode(rb_io_t *fptr)
{
    if (fptr->readconv) {
        rb_econv_close(fptr->readconv);
        fptr->readconv = ((void*)0);
    }
    if (fptr->writeconv) {
        rb_econv_close(fptr->writeconv);
        fptr->writeconv = ((void*)0);
    }
    fptr->mode |= 0x00000004;
    fptr->mode &= ~0x00001000;
    (void)(fptr);

    fptr->encs.enc = rb_ascii8bit_encoding();
    fptr->encs.enc2 = ((void*)0);
    fptr->encs.ecflags = 0;
    fptr->encs.ecopts = ((VALUE)RUBY_Qnil);
    clear_codeconv(fptr);
}

VALUE
rb_io_ascii8bit_binmode(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    io_ascii8bit_binmode(fptr);

    return io;
}
static VALUE
rb_io_binmode_m(VALUE io)
{
    VALUE write_io;

    rb_io_ascii8bit_binmode(io);

    write_io = rb_io_get_write_io(io);
    if (write_io != io)
        rb_io_ascii8bit_binmode(write_io);
    return io;
}







static VALUE
rb_io_binmode_p(VALUE io)
{
    rb_io_t *fptr;
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    return fptr->mode & 0x00000004 ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}

static const char*
rb_io_fmode_modestr(int fmode)
{
    if (fmode & 0x00000040) {
 if ((fmode & (0x00000001|0x00000002)) == (0x00000001|0x00000002)) {
     return ((fmode & 0x00000004) ? ("ab+") : (fmode & 0x00001000) ? ("at+") : ("a+"));
 }
 return ((fmode & 0x00000004) ? ("ab") : (fmode & 0x00001000) ? ("at") : ("a"));
    }
    switch (fmode & (0x00000001|0x00000002)) {
      default:
 rb_raise(rb_eArgError, "invalid access fmode 0x%x", fmode);
      case 0x00000001:
 return ((fmode & 0x00000004) ? ("rb") : (fmode & 0x00001000) ? ("rt") : ("r"));
      case 0x00000002:
 return ((fmode & 0x00000004) ? ("wb") : (fmode & 0x00001000) ? ("wt") : ("w"));
      case (0x00000001|0x00000002):
 if (fmode & 0x00000080) {
     return ((fmode & 0x00000004) ? ("wb+") : (fmode & 0x00001000) ? ("wt+") : ("w+"));
 }
 return ((fmode & 0x00000004) ? ("rb+") : (fmode & 0x00001000) ? ("rt+") : ("r+"));
    }
}

static const char bom_prefix[] = "bom|";
static const char utf_prefix[] = "utf-";
enum {bom_prefix_len = (int)sizeof(bom_prefix) - 1};
enum {utf_prefix_len = (int)sizeof(utf_prefix) - 1};

static int
io_encname_bom_p(const char *name, long len)
{
    return len > bom_prefix_len && (st_locale_insensitive_strncasecmp((name), (bom_prefix), (bom_prefix_len))) == 0;
}

int
rb_io_modestr_fmode(const char *modestr)
{
    int fmode = 0;
    const char *m = modestr, *p = ((void*)0);

    switch (*m++) {
      case 'r':
 fmode |= 0x00000001;
 break;
      case 'w':
 fmode |= 0x00000002 | 0x00000800 | 0x00000080;
 break;
      case 'a':
 fmode |= 0x00000002 | 0x00000040 | 0x00000080;
 break;
      default:
      error:
 rb_raise(rb_eArgError, "invalid access mode %s", modestr);
    }

    while (*m) {
        switch (*m++) {
   case 'b':
            fmode |= 0x00000004;
            break;
   case 't':
            fmode |= 0x00001000;
            break;
   case '+':
            fmode |= (0x00000001|0x00000002);
            break;
   default:
            goto error;
   case ':':
     p = strchr(m, ':');
     if (io_encname_bom_p(m, p ? (long)(p - m) : (long)strlen(m)))
  fmode |= 0x00100000;
            goto finished;
        }
    }

  finished:
    if ((fmode & 0x00000004) && (fmode & 0x00001000))
        goto error;

    return fmode;
}

int
rb_io_oflags_fmode(int oflags)
{
    int fmode = 0;

    switch (oflags & 0003) {
      case 00:
 fmode = 0x00000001;
 break;
      case 01:
 fmode = 0x00000002;
 break;
      case 02:
 fmode = (0x00000001|0x00000002);
 break;
    }

    if (oflags & 02000) {
 fmode |= 0x00000040;
    }
    if (oflags & 01000) {
 fmode |= 0x00000800;
    }
    if (oflags & 0100) {
 fmode |= 0x00000080;
    }






    return fmode;
}

static int
rb_io_fmode_oflags(int fmode)
{
    int oflags = 0;

    switch (fmode & (0x00000001|0x00000002)) {
      case 0x00000001:
        oflags |= 00;
        break;
      case 0x00000002:
        oflags |= 01;
        break;
      case (0x00000001|0x00000002):
        oflags |= 02;
        break;
    }

    if (fmode & 0x00000040) {
        oflags |= 02000;
    }
    if (fmode & 0x00000800) {
        oflags |= 01000;
    }
    if (fmode & 0x00000080) {
        oflags |= 0100;
    }






    return oflags;
}

int
rb_io_modestr_oflags(const char *modestr)
{
    return rb_io_fmode_oflags(rb_io_modestr_fmode(modestr));
}

static const char*
rb_io_oflags_modestr(int oflags)
{





    int accmode = oflags & (00|01|02);
    if (oflags & 02000) {
 if (accmode == 01) {
     return ("a");
 }
 if (accmode == 02) {
     return ("a+");
 }
    }
    switch (oflags & (00|01|02)) {
      default:
 rb_raise(rb_eArgError, "invalid access oflags 0x%x", oflags);
      case 00:
 return ("r");
      case 01:
 return ("w");
      case 02:
 if (oflags & 01000) {
     return ("w+");
 }
 return ("r+");
    }
}






static void
rb_io_ext_int_to_encs(rb_encoding *ext, rb_encoding *intern, rb_encoding **enc, rb_encoding **enc2, int fmode)
{
    int default_ext = 0;

    if (ext == ((void*)0)) {
 ext = rb_default_external_encoding();
 default_ext = 1;
    }
    if (ext == rb_ascii8bit_encoding()) {

 intern = ((void*)0);
    }
    else if (intern == ((void*)0)) {
 intern = rb_default_internal_encoding();
    }
    if (intern == ((void*)0) || intern == (rb_encoding *)((VALUE)RUBY_Qnil) ||
 (!(fmode & 0x00100000) && (intern == ext))) {

 *enc = (default_ext && intern != ext) ? ((void*)0) : ext;
 *enc2 = ((void*)0);
    }
    else {
 *enc = intern;
 *enc2 = ext;
    }
}

static void
unsupported_encoding(const char *name, rb_encoding *enc)
{
    rb_enc_warn(enc, "Unsupported encoding %s ignored", name);
}

static void
parse_mode_enc(const char *estr, rb_encoding *estr_enc,
        rb_encoding **enc_p, rb_encoding **enc2_p, int *fmode_p)
{
    const char *p;
    char encname[RUBY_ENCODING_MAXNAMELEN+1];
    int idx, idx2;
    int fmode = fmode_p ? *fmode_p : 0;
    rb_encoding *ext_enc, *int_enc;
    long len;



    p = strrchr(estr, ':');
    len = p ? (p++ - estr) : (long)strlen(estr);
    if ((fmode & 0x00100000) || io_encname_bom_p(estr, len)) {
 estr += bom_prefix_len;
 len -= bom_prefix_len;
 if (!(st_locale_insensitive_strncasecmp((estr), (utf_prefix), (utf_prefix_len)))) {
     fmode |= 0x00100000;
 }
 else {
     rb_enc_warn(estr_enc, "BOM with non-UTF encoding %s is nonsense", estr);
     fmode &= ~0x00100000;
 }
    }
    if (len == 0 || len > RUBY_ENCODING_MAXNAMELEN) {
 idx = -1;
    }
    else {
 if (p) {
     memcpy(encname, estr, len);
     encname[len] = '\0';
     estr = encname;
 }
 idx = rb_enc_find_index(estr);
    }
    if (fmode_p) *fmode_p = fmode;

    if (idx >= 0)
 ext_enc = rb_enc_from_index(idx);
    else {
 if (idx != -2)
     unsupported_encoding(estr, estr_enc);
 ext_enc = ((void*)0);
    }

    int_enc = ((void*)0);
    if (p) {
 if (*p == '-' && *(p+1) == '\0') {

     int_enc = (rb_encoding *)((VALUE)RUBY_Qnil);
 }
 else {
     idx2 = rb_enc_find_index(p);
     if (idx2 < 0)
  unsupported_encoding(p, estr_enc);
     else if (!(fmode & 0x00100000) && (idx2 == idx)) {
  int_enc = (rb_encoding *)((VALUE)RUBY_Qnil);
     }
     else
  int_enc = rb_enc_from_index(idx2);
 }
    }

    rb_io_ext_int_to_encs(ext_enc, int_enc, enc_p, enc2_p, fmode);
}

int
rb_io_extract_encoding_option(VALUE opt, rb_encoding **enc_p, rb_encoding **enc2_p, int *fmode_p)
{
    VALUE encoding=((VALUE)RUBY_Qnil), extenc=((VALUE)RUBY_Qundef), intenc=((VALUE)RUBY_Qundef), tmp;
    int extracted = 0;
    rb_encoding *extencoding = ((void*)0);
    rb_encoding *intencoding = ((void*)0);

    if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) {
 VALUE v;
 v = rb_hash_lookup2(opt, sym_encoding, ((VALUE)RUBY_Qnil));
 if (v != ((VALUE)RUBY_Qnil)) encoding = v;
 v = rb_hash_lookup2(opt, sym_extenc, ((VALUE)RUBY_Qundef));
 if (v != ((VALUE)RUBY_Qnil)) extenc = v;
 v = rb_hash_lookup2(opt, sym_intenc, ((VALUE)RUBY_Qundef));
 if (v != ((VALUE)RUBY_Qundef)) intenc = v;
    }
    if ((extenc != ((VALUE)RUBY_Qundef) || intenc != ((VALUE)RUBY_Qundef)) && !!((VALUE)(encoding) != ((VALUE)RUBY_Qnil))) {
 if (!!((VALUE)((*rb_ruby_verbose_ptr())) != ((VALUE)RUBY_Qnil))) {
     int idx = rb_to_encoding_index(encoding);
     if (idx >= 0) encoding = rb_enc_from_encoding(rb_enc_from_index(idx));
     rb_warn("Ignoring encoding parameter '%li\v': %s_encoding is used",
      encoding, extenc == ((VALUE)RUBY_Qundef) ? "internal": "external");
 }
 encoding = ((VALUE)RUBY_Qnil);
    }
    if (extenc != ((VALUE)RUBY_Qundef) && !!((VALUE)(extenc) != ((VALUE)RUBY_Qnil))) {
 extencoding = rb_to_encoding(extenc);
    }
    if (intenc != ((VALUE)RUBY_Qundef)) {
 if (!((VALUE)(intenc) != ((VALUE)RUBY_Qnil))) {

     intencoding = (rb_encoding *)((VALUE)RUBY_Qnil);
 }
 else if (!!((VALUE)(tmp = rb_check_string_type(intenc)) != ((VALUE)RUBY_Qnil))) {
     char *p = rb_string_value_cstr(&(tmp));

     if (*p == '-' && *(p+1) == '\0') {

  intencoding = (rb_encoding *)((VALUE)RUBY_Qnil);
     }
     else {
  intencoding = rb_to_encoding(intenc);
     }
 }
 else {
     intencoding = rb_to_encoding(intenc);
 }
 if (extencoding == intencoding) {
     intencoding = (rb_encoding *)((VALUE)RUBY_Qnil);
 }
    }
    if (!!((VALUE)(encoding) != ((VALUE)RUBY_Qnil))) {
 extracted = 1;
 if (!!((VALUE)(tmp = rb_check_string_type(encoding)) != ((VALUE)RUBY_Qnil))) {
     parse_mode_enc(rb_string_value_cstr(&(tmp)), rb_enc_get(tmp),
      enc_p, enc2_p, fmode_p);
 }
 else {
     rb_io_ext_int_to_encs(rb_to_encoding(encoding), ((void*)0), enc_p, enc2_p, 0);
 }
    }
    else if (extenc != ((VALUE)RUBY_Qundef) || intenc != ((VALUE)RUBY_Qundef)) {
        extracted = 1;
 rb_io_ext_int_to_encs(extencoding, intencoding, enc_p, enc2_p, 0);
    }
    return extracted;
}

typedef struct rb_io_enc_t convconfig_t;

static void
validate_enc_binmode(int *fmode_p, int ecflags, rb_encoding *enc, rb_encoding *enc2)
{
    int fmode = *fmode_p;

    if ((fmode & 0x00000001) &&
        !enc2 &&
        !(fmode & 0x00000004) &&
        !rb_enc_asciicompat_inline(enc ? enc : rb_default_external_encoding()))
        rb_raise(rb_eArgError, "ASCII incompatible encoding needs binmode");

    if ((fmode & 0x00000004) && (ecflags & RUBY_ECONV_NEWLINE_DECORATOR_MASK)) {
 rb_raise(rb_eArgError, "newline decorator with binary mode");
    }
    if (!(fmode & 0x00000004) &&
 (0 || (ecflags & RUBY_ECONV_NEWLINE_DECORATOR_MASK))) {
 fmode |= 0x00001000;
 *fmode_p = fmode;
    }

    else if (!(ecflags & RUBY_ECONV_NEWLINE_DECORATOR_MASK)) {
 fmode &= ~0x00001000;
 *fmode_p = fmode;
    }

}

static void
extract_binmode(VALUE opthash, int *fmode)
{
    if (!!((VALUE)(opthash) != ((VALUE)RUBY_Qnil))) {
 VALUE v;
 v = rb_hash_aref(opthash, sym_textmode);
 if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
     if (*fmode & 0x00001000)
  rb_raise(rb_eArgError, "textmode specified twice");
     if (*fmode & 0x00000004)
  rb_raise(rb_eArgError, "both textmode and binmode specified");
     if (!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
  *fmode |= 0x00001000;
 }
 v = rb_hash_aref(opthash, sym_binmode);
 if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
     if (*fmode & 0x00000004)
  rb_raise(rb_eArgError, "binmode specified twice");
     if (*fmode & 0x00001000)
  rb_raise(rb_eArgError, "both textmode and binmode specified");
     if (!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
  *fmode |= 0x00000004;
 }

 if ((*fmode & 0x00000004) && (*fmode & 0x00001000))
     rb_raise(rb_eArgError, "both textmode and binmode specified");
    }
}

static void
rb_io_extract_modeenc(VALUE *vmode_p, VALUE *vperm_p, VALUE opthash,
        int *oflags_p, int *fmode_p, convconfig_t *convconfig_p)
{
    VALUE vmode;
    int oflags, fmode;
    rb_encoding *enc, *enc2;
    int ecflags;
    VALUE ecopts;
    int has_enc = 0, has_vmode = 0;
    VALUE intmode;

    vmode = *vmode_p;


    rb_io_ext_int_to_encs(((void*)0), ((void*)0), &enc, &enc2, 0);

  vmode_handle:
    if (!((VALUE)(vmode) != ((VALUE)RUBY_Qnil))) {
        fmode = 0x00000001;
        oflags = 00;
    }
    else if (!!((VALUE)(intmode = rb_check_to_integer(vmode, "to_int")) != ((VALUE)RUBY_Qnil))) {
        vmode = intmode;
        oflags = rb_num2int_inline(intmode);
        fmode = rb_io_oflags_fmode(oflags);
    }
    else {
        const char *p;

        do { rb_string_value(&(vmode)); rb_check_safe_obj(vmode);} while (0);
        p = rb_string_value_cstr(&(vmode));
        fmode = rb_io_modestr_fmode(p);
        oflags = rb_io_fmode_oflags(fmode);
        p = strchr(p, ':');
        if (p) {
            has_enc = 1;
            parse_mode_enc(p+1, rb_enc_get(vmode), &enc, &enc2, &fmode);
        }
 else {
     rb_encoding *e;

     e = (fmode & 0x00000004) ? rb_ascii8bit_encoding() : ((void*)0);
     rb_io_ext_int_to_encs(e, ((void*)0), &enc, &enc2, fmode);
 }
    }

    if (!((VALUE)(opthash) != ((VALUE)RUBY_Qnil))) {
 ecflags = (fmode & 0x00000001) ?
     ((fmode & 0x00000004) ? (0) : (fmode & 0x00001000) ? (RUBY_ECONV_UNIVERSAL_NEWLINE_DECORATOR) : (RUBY_ECONV_DEFAULT_NEWLINE_DECORATOR)) : 0;






 ((void)(enc2), (void)(ecflags));
        ecopts = ((VALUE)RUBY_Qnil);
    }
    else {
 VALUE v;
 if (!has_vmode) {
     v = rb_hash_aref(opthash, sym_mode);
     if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
  if (!!((VALUE)(vmode) != ((VALUE)RUBY_Qnil))) {
      rb_raise(rb_eArgError, "mode specified twice");
  }
  has_vmode = 1;
  vmode = v;
  goto vmode_handle;
     }
 }
 v = rb_hash_aref(opthash, sym_flags);
 if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
     v = rb_to_int(v);
     oflags |= rb_num2int_inline(v);
     vmode = (((VALUE)((int)(oflags)))<<1 | RUBY_FIXNUM_FLAG);
     fmode = rb_io_oflags_fmode(oflags);
 }
 extract_binmode(opthash, &fmode);
 if (fmode & 0x00000004) {



     if (!has_enc)
  rb_io_ext_int_to_encs(rb_ascii8bit_encoding(), ((void*)0), &enc, &enc2, fmode);
 }





 v = rb_hash_aref(opthash, sym_perm);
 if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
     if (vperm_p) {
  if (!!((VALUE)(*vperm_p) != ((VALUE)RUBY_Qnil))) {
      rb_raise(rb_eArgError, "perm specified twice");
  }
  *vperm_p = v;
     }
     else {

     }
 }
 ecflags = (fmode & 0x00000001) ?
     ((fmode & 0x00000004) ? (0) : (fmode & 0x00001000) ? (RUBY_ECONV_UNIVERSAL_NEWLINE_DECORATOR) : (RUBY_ECONV_DEFAULT_NEWLINE_DECORATOR)) : 0;







        if (rb_io_extract_encoding_option(opthash, &enc, &enc2, &fmode)) {
            if (has_enc) {
                rb_raise(rb_eArgError, "encoding specified twice");
            }
        }
 ((void)(enc2), (void)(ecflags));
 ecflags = rb_econv_prepare_options(opthash, &ecopts, ecflags);
    }

    validate_enc_binmode(&fmode, ecflags, enc, enc2);

    *vmode_p = vmode;

    *oflags_p = oflags;
    *fmode_p = fmode;
    convconfig_p->enc = enc;
    convconfig_p->enc2 = enc2;
    convconfig_p->ecflags = ecflags;
    convconfig_p->ecopts = ecopts;
}

struct sysopen_struct {
    VALUE fname;
    int oflags;
    mode_t perm;
};

static void *
sysopen_func(void *ptr)
{
    const struct sysopen_struct *data = ptr;
    const char *fname = (!(((struct RBasic*)(data->fname))->flags & RSTRING_NOEMBED) ? ((struct RString*)(data->fname))->as.ary : ((struct RString*)(data->fname))->as.heap.ptr);
    return (void *)(VALUE)rb_cloexec_open(fname, data->oflags, data->perm);
}

static inline int
rb_sysopen_internal(struct sysopen_struct *data)
{
    int fd;
    fd = (int)(VALUE)rb_thread_call_without_gvl(sysopen_func, data, ((rb_unblock_function_t *)-1), 0);
    if (0 <= fd)
        rb_update_max_fd(fd);
    return fd;
}

static int
rb_sysopen(VALUE fname, int oflags, mode_t perm)
{
    int fd;
    struct sysopen_struct data;

    data.fname = rb_str_encode_ospath(fname);
    rb_string_value_cstr(&(data.fname));
    data.oflags = oflags;
    data.perm = perm;

    fd = rb_sysopen_internal(&data);
    if (fd < 0) {
 int e = (*__errno_location ());
 if (rb_gc_for_fd(e)) {
     fd = rb_sysopen_internal(&data);
 }
 if (fd < 0) {
     rb_syserr_fail_path_in(__func__, (e), (fname));
 }
    }
    return fd;
}

FILE *
rb_fdopen(int fd, const char *modestr)
{
    FILE *file;




    file = fdopen(fd, modestr);
    if (!file) {
 int e = (*__errno_location ());
 if (rb_gc_for_fd(e)) {
     file = fdopen(fd, modestr);
 }
 if (!file) {





     rb_syserr_fail(e, 0);
 }
    }






    return file;
}

static int
io_check_tty(rb_io_t *fptr)
{
    int t = isatty(fptr->fd);
    if (t)
        fptr->mode |= 0x00000010|0x00000020;
    return t;
}

static VALUE rb_io_internal_encoding(VALUE);
static void io_encoding_set(rb_io_t *, VALUE, VALUE, VALUE);

static int
io_strip_bom(VALUE io)
{
    VALUE b1, b2, b3, b4;
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (!(fptr->mode & 0x00000001)) return 0;
    if (!((VALUE)(b1 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) return 0;
    switch (b1) {
      case (((VALUE)(0xEF))<<1 | RUBY_FIXNUM_FLAG):
 if (!((VALUE)(b2 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) break;
 if (b2 == (((VALUE)(0xBB))<<1 | RUBY_FIXNUM_FLAG) && !!((VALUE)(b3 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) {
     if (b3 == (((VALUE)(0xBF))<<1 | RUBY_FIXNUM_FLAG)) {
  return RUBY_ENCINDEX_UTF_8;
     }
     rb_io_ungetbyte(io, b3);
 }
 rb_io_ungetbyte(io, b2);
 break;

      case (((VALUE)(0xFE))<<1 | RUBY_FIXNUM_FLAG):
 if (!((VALUE)(b2 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) break;
 if (b2 == (((VALUE)(0xFF))<<1 | RUBY_FIXNUM_FLAG)) {
     return RUBY_ENCINDEX_UTF_16BE;
 }
 rb_io_ungetbyte(io, b2);
 break;

      case (((VALUE)(0xFF))<<1 | RUBY_FIXNUM_FLAG):
 if (!((VALUE)(b2 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) break;
 if (b2 == (((VALUE)(0xFE))<<1 | RUBY_FIXNUM_FLAG)) {
     b3 = rb_io_getbyte(io);
     if (b3 == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG) && !!((VALUE)(b4 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) {
  if (b4 == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)) {
      return RUBY_ENCINDEX_UTF_32LE;
  }
  rb_io_ungetbyte(io, b4);
  rb_io_ungetbyte(io, b3);
     }
     else {
  rb_io_ungetbyte(io, b3);
  return RUBY_ENCINDEX_UTF_16LE;
     }
 }
 rb_io_ungetbyte(io, b2);
 break;

      case (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG):
 if (!((VALUE)(b2 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) break;
 if (b2 == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG) && !!((VALUE)(b3 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) {
     if (b3 == (((VALUE)(0xFE))<<1 | RUBY_FIXNUM_FLAG) && !!((VALUE)(b4 = rb_io_getbyte(io)) != ((VALUE)RUBY_Qnil))) {
  if (b4 == (((VALUE)(0xFF))<<1 | RUBY_FIXNUM_FLAG)) {
      return RUBY_ENCINDEX_UTF_32BE;
  }
  rb_io_ungetbyte(io, b4);
     }
     rb_io_ungetbyte(io, b3);
 }
 rb_io_ungetbyte(io, b2);
 break;
    }
    rb_io_ungetbyte(io, b1);
    return 0;
}

static void
io_set_encoding_by_bom(VALUE io)
{
    int idx = io_strip_bom(io);
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (idx) {
 io_encoding_set(fptr, rb_enc_from_encoding(rb_enc_from_index(idx)),
  rb_io_internal_encoding(io), ((VALUE)RUBY_Qnil));
    }
    else {
 fptr->encs.enc2 = ((void*)0);
    }
}

static VALUE
rb_file_open_generic(VALUE io, VALUE filename, int oflags, int fmode,
       const convconfig_t *convconfig, mode_t perm)
{
    VALUE pathv;
    rb_io_t *fptr;
    convconfig_t cc;
    if (!convconfig) {

 rb_io_ext_int_to_encs(((void*)0), ((void*)0), &cc.enc, &cc.enc2, fmode);
        cc.ecflags = 0;
        cc.ecopts = ((VALUE)RUBY_Qnil);
        convconfig = &cc;
    }
    validate_enc_binmode(&fmode, convconfig->ecflags,
    convconfig->enc, convconfig->enc2);

    do { (fptr) = rb_io_make_open_file(io);} while (0);
    fptr->mode = fmode;
    fptr->encs = *convconfig;
    pathv = rb_str_new_frozen(filename);

    if (!(oflags & (020000000 | 0200000))) {
        fptr->pathv = pathv;
    }



    fptr->fd = rb_sysopen(pathv, oflags, perm);
    io_check_tty(fptr);
    if (fmode & 0x00100000) io_set_encoding_by_bom(io);

    return io;
}

static VALUE
rb_file_open_internal(VALUE io, VALUE filename, const char *modestr)
{
    int fmode = rb_io_modestr_fmode(modestr);
    const char *p = strchr(modestr, ':');
    convconfig_t convconfig;

    if (p) {
        parse_mode_enc(p+1, rb_usascii_encoding(),
         &convconfig.enc, &convconfig.enc2, &fmode);
    }
    else {
 rb_encoding *e;


 e = (fmode & 0x00000004) ? rb_ascii8bit_encoding() : ((void*)0);
 rb_io_ext_int_to_encs(e, ((void*)0), &convconfig.enc, &convconfig.enc2, fmode);
        convconfig.ecflags = 0;
        convconfig.ecopts = ((VALUE)RUBY_Qnil);
    }

    return rb_file_open_generic(io, filename,
            rb_io_fmode_oflags(fmode),
            fmode,
            &convconfig,
            0666);
}

VALUE
rb_file_open_str(VALUE fname, const char *modestr)
{
    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; })) = rb_get_path(fname));
    return rb_file_open_internal(io_alloc(rb_cFile), fname, modestr);
}

VALUE
rb_file_open(const char *fname, const char *modestr)
{
    return rb_file_open_internal(io_alloc(rb_cFile),  ({ (__builtin_constant_p(fname)) ? rb_str_new_static((fname), (long)strlen(fname)) : rb_str_new_cstr(fname); }), modestr);
}
void
rb_io_synchronized(rb_io_t *fptr)
{
    rb_io_check_initialized(fptr);
    fptr->mode |= 0x00000008;
}

void
rb_io_unbuffered(rb_io_t *fptr)
{
    rb_io_synchronized(fptr);
}

int
rb_pipe(int *pipes)
{
    int ret;
    ret = rb_cloexec_pipe(pipes);
    if (ret == -1) {
        if (rb_gc_for_fd((*__errno_location ()))) {
            ret = rb_cloexec_pipe(pipes);
        }
    }
    if (ret == 0) {
        rb_update_max_fd(pipes[0]);
        rb_update_max_fd(pipes[1]);
    }
    return ret;
}
struct popen_arg {
    VALUE execarg_obj;
    struct rb_execarg *eargp;
    int modef;
    int pair[2];
    int write_pair[2];
};



static void
popen_redirect(struct popen_arg *p)
{
    if ((p->modef & 0x00000001) && (p->modef & 0x00000002)) {
        close(p->write_pair[1]);
        if (p->write_pair[0] != 0) {
            dup2(p->write_pair[0], 0);
            close(p->write_pair[0]);
        }
        close(p->pair[0]);
        if (p->pair[1] != 1) {
            dup2(p->pair[1], 1);
            close(p->pair[1]);
        }
    }
    else if (p->modef & 0x00000001) {
        close(p->pair[0]);
        if (p->pair[1] != 1) {
            dup2(p->pair[1], 1);
            close(p->pair[1]);
        }
    }
    else {
        close(p->pair[1]);
        if (p->pair[0] != 0) {
            dup2(p->pair[0], 0);
            close(p->pair[0]);
        }
    }
}
static int
linux_get_maxfd(void)
{
    int fd;
    char buf[4096], *p, *np, *e;
    ssize_t ss;
    fd = rb_cloexec_open("/proc/self/status", 00|0400, 0);
    if (fd == -1) return -1;
    ss = read(fd, buf, sizeof(buf));
    if (ss == -1) goto err;
    p = buf;
    e = buf + ss;
    while ((int)sizeof("FDSize:\t0\n")-1 <= e-p &&
           (np = memchr(p, '\n', e-p)) != ((void*)0)) {
        if (memcmp(p, "FDSize:", sizeof("FDSize:")-1) == 0) {
            int fdsize;
            p += sizeof("FDSize:")-1;
            *np = '\0';
            fdsize = (int)ruby_strtoul(p, (char **)((void*)0), 10);
            close(fd);
            return fdsize;
        }
        p = np+1;
    }


  err:
    close(fd);
    return -1;
}



void
rb_close_before_exec(int lowfd, int maxhint, VALUE noclose_fds)
{

    int fd, ret;
    int max = (int)max_file_descriptor;






    ret = linux_get_maxfd();
    if (maxhint < ret)
        maxhint = ret;


    if (max < maxhint)
        max = maxhint;
    for (fd = lowfd; fd <= max; fd++) {
        if (!!((VALUE)(noclose_fds) != ((VALUE)RUBY_Qnil)) &&
            !(((VALUE)(rb_hash_lookup(noclose_fds, (((VALUE)(fd))<<1 | RUBY_FIXNUM_FLAG))) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
            continue;
 ret = fcntl(fd, 1);
 if (ret != -1 && !(ret & 1)) {
            fcntl(fd, 2, ret|1);
        }

        if (ret != -1) {
     if (max < fd + 20)
  max = fd + 20;
 }
    }

}

static int
popen_exec(void *pp, char *errmsg, size_t errmsg_len)
{
    struct popen_arg *p = (struct popen_arg*)pp;

    return rb_exec_async_signal_safe(p->eargp, errmsg, errmsg_len);
}



static VALUE
rb_execarg_fixup_v(VALUE execarg_obj)
{
    rb_execarg_parent_start(execarg_obj);
    return ((VALUE)RUBY_Qnil);
}




static VALUE
pipe_open(VALUE execarg_obj, const char *modestr, int fmode,
   const convconfig_t *convconfig)
{
    struct rb_execarg *eargp = !((VALUE)(execarg_obj) != ((VALUE)RUBY_Qnil)) ? ((void*)0) : rb_execarg_get(execarg_obj);
    VALUE prog = eargp ? (eargp->use_shell ? eargp->invoke.sh.shell_script : eargp->invoke.cmd.command_name) : ((VALUE)RUBY_Qfalse) ;
    pid_t pid = 0;
    rb_io_t *fptr;
    VALUE port;
    rb_io_t *write_fptr;
    VALUE write_port;

    int status;
    char errmsg[80] = { '\0' };


    int state;
    struct popen_arg arg;

    int e = 0;
    FILE *fp = 0;
    int fd = -1;
    int write_fd = -1;
    arg.execarg_obj = execarg_obj;
    arg.eargp = eargp;
    arg.modef = fmode;
    arg.pair[0] = arg.pair[1] = -1;
    arg.write_pair[0] = arg.write_pair[1] = -1;





    switch (fmode & (0x00000001|0x00000002)) {
      case 0x00000001|0x00000002:
        if (rb_pipe(arg.write_pair) < 0)
            rb_sys_fail_str(prog);
        if (rb_pipe(arg.pair) < 0) {
            e = (*__errno_location ());
            close(arg.write_pair[0]);
            close(arg.write_pair[1]);
            rb_syserr_fail_str(e, prog);
        }
        if (eargp) {
            rb_execarg_addopt(execarg_obj, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)(arg.write_pair[0]))<<1 | RUBY_FIXNUM_FLAG));
            rb_execarg_addopt(execarg_obj, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)(arg.pair[1]))<<1 | RUBY_FIXNUM_FLAG));
        }
 break;
      case 0x00000001:
        if (rb_pipe(arg.pair) < 0)
            rb_sys_fail_str(prog);
        if (eargp)
            rb_execarg_addopt(execarg_obj, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)(arg.pair[1]))<<1 | RUBY_FIXNUM_FLAG));
 break;
      case 0x00000002:
        if (rb_pipe(arg.pair) < 0)
            rb_sys_fail_str(prog);
        if (eargp)
            rb_execarg_addopt(execarg_obj, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)(arg.pair[0]))<<1 | RUBY_FIXNUM_FLAG));
 break;
      default:
        rb_sys_fail_str(prog);
    }
    if (!!((VALUE)(execarg_obj) != ((VALUE)RUBY_Qnil))) {
        rb_protect(rb_execarg_fixup_v, execarg_obj, &state);
        if (state) {
            if (0 <= arg.write_pair[0]) close(arg.write_pair[0]);
            if (0 <= arg.write_pair[1]) close(arg.write_pair[1]);
            if (0 <= arg.pair[0]) close(arg.pair[0]);
            if (0 <= arg.pair[1]) close(arg.pair[1]);
            rb_execarg_parent_end(execarg_obj);
            rb_jump_tag(state);
        }


 pid = rb_fork_async_signal_safe(&status, popen_exec, &arg, arg.eargp->redirect_fds, errmsg, sizeof(errmsg));
        rb_execarg_parent_end(execarg_obj);
    }
    else {

 pid = rb_fork_ruby(&status);
 if (pid == 0) {
     rb_thread_atfork();
     popen_redirect(&arg);
     rb_io_synchronized(((struct RFile*)(orig_stdout))->fptr);
     rb_io_synchronized(((struct RFile*)(orig_stderr))->fptr);
     return ((VALUE)RUBY_Qnil);
 }



    }


    if (pid == -1) {

 e = (*__errno_location ());

 close(arg.pair[0]);
 close(arg.pair[1]);
        if ((fmode & (0x00000001|0x00000002)) == (0x00000001|0x00000002)) {
            close(arg.write_pair[0]);
            close(arg.write_pair[1]);
        }

        if (errmsg[0])
     rb_syserr_fail(e, errmsg);

 rb_syserr_fail_str(e, prog);
    }
    if ((fmode & 0x00000001) && (fmode & 0x00000002)) {
        close(arg.pair[1]);
        fd = arg.pair[0];
        close(arg.write_pair[0]);
        write_fd = arg.write_pair[1];
    }
    else if (fmode & 0x00000001) {
        close(arg.pair[1]);
        fd = arg.pair[0];
    }
    else {
        close(arg.pair[0]);
        fd = arg.pair[1];
    }
    port = io_alloc(rb_cIO);
    do { (fptr) = rb_io_make_open_file(port);} while (0);
    fptr->fd = fd;
    fptr->stdio_file = fp;
    fptr->mode = fmode | 0x00000008|0x00000020;
    if (convconfig) {
        fptr->encs = *convconfig;





    }
    else {
 if (((fptr)->mode & 0x00001000)) {
     fptr->encs.ecflags |= RUBY_ECONV_UNIVERSAL_NEWLINE_DECORATOR;
 }





    }
    fptr->pid = pid;

    if (0 <= write_fd) {
        write_port = io_alloc(rb_cIO);
        do { (write_fptr) = rb_io_make_open_file(write_port);} while (0);
        write_fptr->fd = write_fd;
        write_fptr->mode = (fmode & ~0x00000001)| 0x00000008|0x00000020;
        fptr->mode &= ~0x00000002;
        fptr->tied_io_for_writing = write_port;
        rb_ivar_set(port, (__builtin_constant_p("@tied_io_for_writing") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("@tied_io_for_writing")), (long)strlen(("@tied_io_for_writing"))); (ID) rb_intern_id_cache; }) : rb_intern("@tied_io_for_writing")), write_port);
    }





    return port;
}

static int
is_popen_fork(VALUE prog)
{
    if ((!(((struct RBasic*)(prog))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(prog))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(prog))->as.heap.len) == 1 && (!(((struct RBasic*)(prog))->flags & RSTRING_NOEMBED) ? ((struct RString*)(prog))->as.ary : ((struct RString*)(prog))->as.heap.ptr)[0] == '-') {




 return TRUE;

    }
    return FALSE;
}

static VALUE
pipe_open_s(VALUE prog, const char *modestr, int fmode,
     const convconfig_t *convconfig)
{
    int argc = 1;
    VALUE *argv = &prog;
    VALUE execarg_obj = ((VALUE)RUBY_Qnil);

    if (!is_popen_fork(prog))
 execarg_obj = rb_execarg_new(argc, argv, TRUE);
    return pipe_open(execarg_obj, modestr, fmode, convconfig);
}

static VALUE
pipe_close(VALUE io)
{
    rb_io_t *fptr = io_close_fptr(io);
    if (fptr) {
 fptr_waitpid(fptr, rb_thread_to_be_killed(rb_thread_current()));
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_s_popen(int argc, VALUE *argv, VALUE klass)
{
    const char *modestr;
    VALUE pname, pmode = ((VALUE)RUBY_Qnil), port, tmp, opt = ((VALUE)RUBY_Qnil), env = ((VALUE)RUBY_Qnil), execarg_obj = ((VALUE)RUBY_Qnil);
    int oflags, fmode;
    convconfig_t convconfig;

    if (argc > 1 && !!((VALUE)(opt = rb_check_hash_type(argv[argc-1])) != ((VALUE)RUBY_Qnil))) --argc;
    if (argc > 1 && !!((VALUE)(env = rb_check_hash_type(argv[0])) != ((VALUE)RUBY_Qnil))) --argc, ++argv;
    switch (argc) {
      case 2:
 pmode = argv[1];
      case 1:
 pname = argv[0];
 break;
      default:
 {
     int ex = !!((VALUE)(opt) != ((VALUE)RUBY_Qnil));
     rb_error_arity(argc + ex, 1 + ex, 2 + ex);
 }
    }

    tmp = rb_check_array_type(pname);
    if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
 long len = rb_array_len(tmp);

 if (len > 2147483647) {
     rb_raise(rb_eArgError, "too many arguments");
 }

 execarg_obj = rb_execarg_new((int)len, rb_array_const_ptr(tmp), FALSE);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(tmp); ; rb_gc_guarded_ptr; }));
    }
    else {
 do { rb_string_value(&(pname)); rb_check_safe_obj(pname);} while (0);
 execarg_obj = ((VALUE)RUBY_Qnil);
 if (!is_popen_fork(pname))
     execarg_obj = rb_execarg_new(1, &pname, TRUE);
    }
    if (!!((VALUE)(execarg_obj) != ((VALUE)RUBY_Qnil))) {
 if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil)))
     opt = rb_execarg_extract_options(execarg_obj, opt);
 if (!!((VALUE)(env) != ((VALUE)RUBY_Qnil)))
     rb_execarg_setenv(execarg_obj, env);
    }
    rb_io_extract_modeenc(&pmode, 0, opt, &oflags, &fmode, &convconfig);
    modestr = rb_io_oflags_modestr(oflags);

    port = pipe_open(execarg_obj, modestr, fmode, &convconfig);
    if (!((VALUE)(port) != ((VALUE)RUBY_Qnil))) {

 if (rb_block_given_p()) {
     rb_yield(((VALUE)RUBY_Qnil));
            rb_io_flush(rb_stdout);
            rb_io_flush(rb_stderr);
     _exit(0);
 }
 return ((VALUE)RUBY_Qnil);
    }
    do { VALUE _obj_ = (port); rb_obj_write((VALUE)(_obj_), (VALUE *)(&((struct RBasicRaw *)(_obj_))->klass), (VALUE)(klass), "io.c", 6797); } while (0);
    if (rb_block_given_p()) {
 return rb_ensure(rb_yield, port, pipe_close, port);
    }
    return port;
}

static void
rb_scan_open_args(int argc, const VALUE *argv,
        VALUE *fname_p, int *oflags_p, int *fmode_p,
        convconfig_t *convconfig_p, mode_t *perm_p)
{
    VALUE opt, fname, vmode, vperm;
    int oflags, fmode;
    mode_t perm;

    argc = rb_scan_args(argc, argv, "12:", &fname, &vmode, &vperm, &opt);
    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; })) = rb_get_path(fname));

    rb_io_extract_modeenc(&vmode, &vperm, opt, &oflags, &fmode, convconfig_p);

    perm = !((VALUE)(vperm) != ((VALUE)RUBY_Qnil)) ? 0666 : ((unsigned int)rb_num2uint(vperm));

    *fname_p = fname;
    *oflags_p = oflags;
    *fmode_p = fmode;
    *perm_p = perm;
}

static VALUE
rb_open_file(int argc, const VALUE *argv, VALUE io)
{
    VALUE fname;
    int oflags, fmode;
    convconfig_t convconfig;
    mode_t perm;

    rb_scan_open_args(argc, argv, &fname, &oflags, &fmode, &convconfig, &perm);
    rb_file_open_generic(io, fname, oflags, fmode, &convconfig, perm);

    return io;
}
static VALUE
rb_io_s_open(int argc, VALUE *argv, VALUE klass)
{
    VALUE io = rb_class_new_instance(argc, argv, klass);

    if (rb_block_given_p()) {
 return rb_ensure(rb_yield, io, io_close, io);
    }

    return io;
}
static VALUE
rb_io_s_sysopen(int argc, VALUE *argv)
{
    VALUE fname, vmode, vperm;
    VALUE intmode;
    int oflags, fd;
    mode_t perm;

    rb_scan_args(argc, argv, "12", &fname, &vmode, &vperm);
    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; })) = rb_get_path(fname));

    if (!((VALUE)(vmode) != ((VALUE)RUBY_Qnil)))
        oflags = 00;
    else if (!!((VALUE)(intmode = rb_check_to_integer(vmode, "to_int")) != ((VALUE)RUBY_Qnil)))
        oflags = rb_num2int_inline(intmode);
    else {
 do { rb_string_value(&(vmode)); rb_check_safe_obj(vmode);} while (0);
 oflags = rb_io_modestr_oflags(rb_string_value_cstr(&(vmode)));
    }
    if (!((VALUE)(vperm) != ((VALUE)RUBY_Qnil))) perm = 0666;
    else perm = ((unsigned int)rb_num2uint(vperm));

    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; })) = rb_str_new_frozen(fname);
    fd = rb_sysopen(fname, oflags, perm);
    return (((VALUE)((int)(fd)))<<1 | RUBY_FIXNUM_FLAG);
}

static VALUE
check_pipe_command(VALUE filename_or_command)
{
    char *s = (!(((struct RBasic*)(filename_or_command))->flags & RSTRING_NOEMBED) ? ((struct RString*)(filename_or_command))->as.ary : ((struct RString*)(filename_or_command))->as.heap.ptr);
    long l = (!(((struct RBasic*)(filename_or_command))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(filename_or_command))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(filename_or_command))->as.heap.len);
    char *e = s + l;
    int chlen;

    if (rb_enc_ascget(s, e, &chlen, rb_enc_get(filename_or_command)) == '|') {
        VALUE cmd =  ({ (__builtin_constant_p(s+chlen) && __builtin_constant_p(l-chlen)) ? rb_str_new_static((s+chlen), (l-chlen)) : rb_str_new((s+chlen), (l-chlen)); });
        ( (((!(((VALUE)(cmd) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(cmd) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(cmd))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(cmd))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(cmd))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(filename_or_command) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(filename_or_command) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(filename_or_command))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(cmd))->flags |= ((((struct RBasic*)(filename_or_command))->flags&(RUBY_FL_TAINT)))) : (void)0);
        return cmd;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_f_open(int argc, VALUE *argv)
{
    ID to_open = 0;
    int redirect = FALSE;

    if (argc >= 1) {
 do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_open")), (long)strlen(("to_open"))); (to_open) = rb_intern_id_cache; } while (0);
 if (rb_respond_to(argv[0], to_open)) {
     redirect = TRUE;
 }
 else {
     VALUE tmp = argv[0];
     ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(tmp); ; rb_gc_guarded_ptr; })) = rb_get_path(tmp));
     if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
  redirect = TRUE;
     }
     else {
                VALUE cmd = check_pipe_command(tmp);
                if (!!((VALUE)(cmd) != ((VALUE)RUBY_Qnil))) {
      argv[0] = cmd;
      return rb_io_s_popen(argc, argv, rb_cIO);
  }
     }
 }
    }
    if (redirect) {
 VALUE io = rb_funcallv(argv[0], to_open, argc-1, argv+1);

 if (rb_block_given_p()) {
     return rb_ensure(rb_yield, io, io_close, io);
 }
 return io;
    }
    return rb_io_s_open(argc, argv, rb_cFile);
}

static VALUE rb_io_open_generic(VALUE, VALUE, int, int, const convconfig_t *, mode_t);

static VALUE
rb_io_open(VALUE io, VALUE filename, VALUE vmode, VALUE vperm, VALUE opt)
{
    int oflags, fmode;
    convconfig_t convconfig;
    mode_t perm;

    rb_io_extract_modeenc(&vmode, &vperm, opt, &oflags, &fmode, &convconfig);
    perm = !((VALUE)(vperm) != ((VALUE)RUBY_Qnil)) ? 0666 : ((unsigned int)rb_num2uint(vperm));
    return rb_io_open_generic(io, filename, oflags, fmode, &convconfig, perm);
}

static VALUE
rb_io_open_generic(VALUE klass, VALUE filename, int oflags, int fmode,
     const convconfig_t *convconfig, mode_t perm)
{
    VALUE cmd;
    const int warn = klass == rb_cFile;
    if ((warn || klass == rb_cIO) && !!((VALUE)(cmd = check_pipe_command(filename)) != ((VALUE)RUBY_Qnil))) {
 if (warn) {
     rb_warn("IO.%li\v called on File to invoke external command",
      rb_id2str(rb_frame_this_func()));
 }
 return pipe_open_s(cmd, rb_io_oflags_modestr(oflags), fmode, convconfig);
    }
    else {
 return rb_file_open_generic(io_alloc(klass), filename,
        oflags, fmode, convconfig, perm);
    }
}

static VALUE
io_reopen(VALUE io, VALUE nfile)
{
    rb_io_t *fptr, *orig;
    int fd, fd2;
    off_t pos = 0;

    nfile = rb_io_get_io(nfile);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    rb_io_check_closed((orig) = ((struct RFile*)(rb_io_taint_check(nfile)))->fptr);

    if (fptr == orig) return io;
    if (((fptr)->mode & (1<<16))) {
        if ((fptr->stdio_file == stdin && !(orig->mode & 0x00000001)) ||
            (fptr->stdio_file == stdout && !(orig->mode & 0x00000002)) ||
            (fptr->stdio_file == stderr && !(orig->mode & 0x00000002))) {
     rb_raise(rb_eArgError,
       "%s can't change access mode from \"%s\" to \"%s\"",
       ((!(((struct RBasic*)((fptr)->pathv))->flags & RSTRING_NOEMBED) ? ((struct RString*)((fptr)->pathv))->as.ary : ((struct RString*)((fptr)->pathv))->as.heap.ptr)), rb_io_fmode_modestr(fptr->mode),
       rb_io_fmode_modestr(orig->mode));
 }
    }
    if (fptr->mode & 0x00000002) {
        if (io_fflush(fptr) < 0)
            rb_sys_fail(0);
    }
    else {
 lseek(flush_before_seek(fptr)->fd, 0, 1);
    }
    if (orig->mode & 0x00000001) {
 pos = lseek(flush_before_seek(orig)->fd, 0, 1);
    }
    if (orig->mode & 0x00000002) {
        if (io_fflush(orig) < 0)
            rb_sys_fail(0);
    }


    fptr->mode = orig->mode | (fptr->mode & (1<<16));
    fptr->pid = orig->pid;
    fptr->lineno = orig->lineno;
    if (!(((VALUE)(orig->pathv) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) fptr->pathv = orig->pathv;
    else if (!((fptr)->mode & (1<<16))) fptr->pathv = ((VALUE)RUBY_Qnil);
    fptr->finalize = orig->finalize;





    fd = fptr->fd;
    fd2 = orig->fd;
    if (fd != fd2) {
 if (((fptr)->mode & (1<<16)) || fd <= 2 || !fptr->stdio_file) {

     if (rb_cloexec_dup2(fd2, fd) < 0)
  rb_sys_fail_path_in(__func__, orig->pathv);
            rb_update_max_fd(fd);
 }
 else {
            fclose(fptr->stdio_file);
            fptr->stdio_file = 0;
            fptr->fd = -1;
            if (rb_cloexec_dup2(fd2, fd) < 0)
                rb_sys_fail_path_in(__func__, orig->pathv);
            rb_update_max_fd(fd);
            fptr->fd = fd;
 }
 rb_notify_fd_close(fd);
 if ((orig->mode & 0x00000001) && pos >= 0) {
     if (((*__errno_location ()) = 0, lseek(flush_before_seek(fptr)->fd, (pos), (0))) < 0 && (*__errno_location ())) {
  rb_sys_fail_path_in(__func__, fptr->pathv);
     }
     if (((*__errno_location ()) = 0, lseek(flush_before_seek(orig)->fd, (pos), (0))) < 0 && (*__errno_location ())) {
  rb_sys_fail_path_in(__func__, orig->pathv);
     }
 }
    }

    if (fptr->mode & 0x00000004) {
 rb_io_binmode(io);
    }

    do { VALUE _obj_ = (io); rb_obj_write((VALUE)(_obj_), (VALUE *)(&((struct RBasicRaw *)(_obj_))->klass), (VALUE)(rb_obj_class(nfile)), "io.c", 7192); } while (0);
    return io;
}




static int
rb_freopen(VALUE fname, const char *mode, FILE *fp)
{
    if (!freopen((!(((struct RBasic*)(fname))->flags & RSTRING_NOEMBED) ? ((struct RString*)(fname))->as.ary : ((struct RString*)(fname))->as.heap.ptr), mode, fp)) {
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; }));
 return (*__errno_location ());
    }
    return 0;
}
static VALUE
rb_io_reopen(int argc, VALUE *argv, VALUE file)
{
    VALUE fname, nmode, opt;
    int oflags;
    rb_io_t *fptr;

    if (rb_scan_args(argc, argv, "11:", &fname, &nmode, &opt) == 1) {
 VALUE tmp = rb_io_check_io(fname);
 if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     return io_reopen(file, tmp);
 }
    }

    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(fname); ; rb_gc_guarded_ptr; })) = rb_get_path(fname));
    rb_io_taint_check(file);
    fptr = ((struct RFile*)(file))->fptr;
    if (!fptr) {
 fptr = ((struct RFile*)(file))->fptr = (((rb_io_t*)ruby_xcalloc((size_t)(1),sizeof(rb_io_t))));
    }

    if (!!((VALUE)(nmode) != ((VALUE)RUBY_Qnil)) || !!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) {
 int fmode;
 convconfig_t convconfig;

 rb_io_extract_modeenc(&nmode, 0, opt, &oflags, &fmode, &convconfig);
 if (((fptr)->mode & (1<<16)) &&
            ((fptr->mode & (0x00000001|0x00000002)) & (fmode & (0x00000001|0x00000002))) !=
            (fptr->mode & (0x00000001|0x00000002))) {
     rb_raise(rb_eArgError,
       "%s can't change access mode from \"%s\" to \"%s\"",
       ((!(((struct RBasic*)((fptr)->pathv))->flags & RSTRING_NOEMBED) ? ((struct RString*)((fptr)->pathv))->as.ary : ((struct RString*)((fptr)->pathv))->as.heap.ptr)), rb_io_fmode_modestr(fptr->mode),
       rb_io_fmode_modestr(fmode));
 }
 fptr->mode = fmode;
 fptr->encs = convconfig;
    }
    else {
 oflags = rb_io_fmode_oflags(fptr->mode);
    }

    fptr->pathv = fname;
    if (fptr->fd < 0) {
        fptr->fd = rb_sysopen(fptr->pathv, oflags, 0666);
 fptr->stdio_file = 0;
 return file;
    }

    if (fptr->mode & 0x00000002) {
        if (io_fflush(fptr) < 0)
            rb_sys_fail(0);
    }
    fptr->rbuf.off = fptr->rbuf.len = 0;

    if (fptr->stdio_file) {
 int e = rb_freopen(rb_str_encode_ospath(fptr->pathv),
      rb_io_oflags_modestr(oflags),
      fptr->stdio_file);
 if (e) rb_syserr_fail_path_in(__func__, (e), (fptr->pathv));
        fptr->fd = fileno(fptr->stdio_file);
        rb_fd_fix_cloexec(fptr->fd);




        if (fptr->stdio_file == stderr) {
            if (setvbuf(fptr->stdio_file, ((void*)0), 2, 8192) != 0)
                rb_warn("setvbuf() can't be honoured for %li\v", fptr->pathv);
        }
        else if (fptr->stdio_file == stdout && isatty(fptr->fd)) {
            if (setvbuf(fptr->stdio_file, ((void*)0), 1, 8192) != 0)
                rb_warn("setvbuf() can't be honoured for %li\v", fptr->pathv);
        }
    }
    else {
 int tmpfd = rb_sysopen(fptr->pathv, oflags, 0666);
 int err = 0;
 if (rb_cloexec_dup2(tmpfd, fptr->fd) < 0)
     err = (*__errno_location ());
 (void)close(tmpfd);
 if (err) {
     rb_syserr_fail_path_in(__func__, (err), (fptr->pathv));
 }
    }

    return file;
}


static VALUE
rb_io_init_copy(VALUE dest, VALUE io)
{
    rb_io_t *fptr, *orig;
    int fd;
    VALUE write_io;
    off_t pos;

    io = rb_io_get_io(io);
    if (!((dest) != (io) && (rb_obj_init_copy((dest), (io)), 1))) return dest;
    rb_io_check_closed((orig) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    do { (fptr) = rb_io_make_open_file(dest);} while (0);

    rb_io_flush(io);


    fptr->mode = orig->mode & ~(1<<16);
    fptr->encs = orig->encs;
    fptr->pid = orig->pid;
    fptr->lineno = orig->lineno;
    if (!!((VALUE)(orig->pathv) != ((VALUE)RUBY_Qnil))) fptr->pathv = orig->pathv;
    fptr->finalize = orig->finalize;





    fd = ruby_dup(orig->fd);
    fptr->fd = fd;
    pos = lseek(flush_before_seek(orig)->fd, 0, 1);
    if (0 <= pos)
        ((*__errno_location ()) = 0, lseek(flush_before_seek(fptr)->fd, (pos), (0)));
    if (fptr->mode & 0x00000004) {
 rb_io_binmode(dest);
    }

    write_io = rb_io_get_write_io(io);
    if (io != write_io) {
        write_io = rb_obj_dup(write_io);
        fptr->tied_io_for_writing = write_io;
        rb_ivar_set(dest, (__builtin_constant_p("@tied_io_for_writing") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("@tied_io_for_writing")), (long)strlen(("@tied_io_for_writing"))); (ID) rb_intern_id_cache; }) : rb_intern("@tied_io_for_writing")), write_io);
    }

    return dest;
}
VALUE
rb_io_printf(int argc, const VALUE *argv, VALUE out)
{
    rb_io_write(out, rb_f_sprintf(argc, argv));
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_f_printf(int argc, VALUE *argv)
{
    VALUE out;

    if (argc == 0) return ((VALUE)RUBY_Qnil);
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(argv[0]))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((argv[0]) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((argv[0]) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((argv[0]) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((argv[0]) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(argv[0])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(argv[0]))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 out = rb_stdout;
    }
    else {
 out = argv[0];
 argv++;
 argc--;
    }
    rb_io_write(out, rb_f_sprintf(argc, argv));

    return ((VALUE)RUBY_Qnil);
}
VALUE
rb_io_print(int argc, const VALUE *argv, VALUE out)
{
    int i;
    VALUE line;


    if (argc == 0) {
 argc = 1;
 line = rb_lastline_get();
 argv = &line;
    }
    for (i=0; i<argc; i++) {
 if (!!((VALUE)(rb_output_fs) != ((VALUE)RUBY_Qnil)) && i>0) {
     rb_io_write(out, rb_output_fs);
 }
 rb_io_write(out, argv[i]);
    }
    if (argc > 0 && !!((VALUE)(rb_output_rs) != ((VALUE)RUBY_Qnil))) {
 rb_io_write(out, rb_output_rs);
    }

    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_f_print(int argc, const VALUE *argv)
{
    rb_io_print(argc, argv, rb_stdout);
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_putc(VALUE io, VALUE ch)
{
    VALUE str;
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(ch))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((ch) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((ch) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((ch) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((ch) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(ch)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(ch) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ch) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ch))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(ch))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(ch) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ch) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ch))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(ch) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ch) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ch))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 str = rb_str_substr(ch, 0, 1);
    }
    else {
 char c = rb_num2char_inline(ch);
 str =  ({ (__builtin_constant_p(&c) && __builtin_constant_p(1)) ? rb_str_new_static((&c), (1)) : rb_str_new((&c), (1)); });
    }
    rb_io_write(io, str);
    return ch;
}
static VALUE
rb_f_putc(VALUE recv, VALUE ch)
{
    if (recv == rb_stdout) {
 return rb_io_putc(recv, ch);
    }
    return rb_funcallv(rb_stdout, (__builtin_constant_p("putc") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("putc")), (long)strlen(("putc"))); (ID) rb_intern_id_cache; }) : rb_intern("putc")), 1, &ch);
}


int
rb_str_end_with_asciichar(VALUE str, int c)
{
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    const char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    rb_encoding *enc = rb_enc_from_index(((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)));
    int n;

    if (len == 0) return 0;
    if ((n = (enc)->min_enc_len) == 1) {
 return ptr[len - 1] == c;
    }
    return rb_enc_ascget(ptr + ((len - 1) / n) * n, ptr + len, &n, enc) == c;
}

static VALUE
io_puts_ary(VALUE ary, VALUE out, int recur)
{
    VALUE tmp;
    long i;

    if (recur) {
 tmp =  ({ (__builtin_constant_p("[...]")) ? rb_str_new_static(("[...]"), (long)strlen("[...]")) : rb_str_new_cstr("[...]"); });
 rb_io_puts(1, &tmp, out);
 return ((VALUE)RUBY_Qtrue);
    }
    ary = rb_check_array_type(ary);
    if (!((VALUE)(ary) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qfalse);
    for (i=0; i<rb_array_len(ary); i++) {
 tmp = (rb_array_const_ptr(ary)[i]);
 rb_io_puts(1, &tmp, out);
    }
    return ((VALUE)RUBY_Qtrue);
}
VALUE
rb_io_puts(int argc, const VALUE *argv, VALUE out)
{
    int i, n;
    VALUE line, args[2];


    if (argc == 0) {
 rb_io_write(out, rb_default_rs);
 return ((VALUE)RUBY_Qnil);
    }
    for (i=0; i<argc; i++) {
 if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(argv[i]))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((argv[i]) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((argv[i]) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((argv[i]) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((argv[i]) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(argv[i])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[i]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[i]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[i]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(argv[i]))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(argv[i]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[i]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[i]))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(argv[i]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[i]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[i]))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
     line = argv[i];
     goto string;
 }
 if (rb_exec_recursive(io_puts_ary, argv[i], out)) {
     continue;
 }
 line = rb_obj_as_string(argv[i]);
      string:
 n = 0;
 args[n++] = line;
 if ((!(((struct RBasic*)(line))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(line))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(line))->as.heap.len) == 0 ||
            !rb_str_end_with_asciichar(line, '\n')) {
     args[n++] = rb_default_rs;
 }
 rb_io_writev(out, n, args);
    }

    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_f_puts(int argc, VALUE *argv, VALUE recv)
{
    if (recv == rb_stdout) {
 return rb_io_puts(argc, argv, recv);
    }
    return rb_funcallv(rb_stdout, (__builtin_constant_p("puts") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("puts")), (long)strlen(("puts"))); (ID) rb_intern_id_cache; }) : rb_intern("puts")), argc, argv);
}

void
rb_p(VALUE obj)
{
    VALUE args[2];
    args[0] = rb_obj_as_string(rb_inspect(obj));
    args[1] = rb_default_rs;
    if (( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(rb_stdout))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((rb_stdout) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((rb_stdout) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((rb_stdout) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((rb_stdout) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(rb_stdout)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(rb_stdout))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_FILE))) &&
        rb_method_basic_definition_p(rb_class_of((VALUE)(rb_stdout)), id_write)) {
 io_writev(2, args, rb_stdout);
    }
    else {
 rb_io_writev(rb_stdout, 2, args);
    }
}

struct rb_f_p_arg {
    int argc;
    VALUE *argv;
};

static VALUE
rb_f_p_internal(VALUE arg)
{
    struct rb_f_p_arg *arg1 = (struct rb_f_p_arg*)arg;
    int argc = arg1->argc;
    VALUE *argv = arg1->argv;
    int i;
    VALUE ret = ((VALUE)RUBY_Qnil);

    for (i=0; i<argc; i++) {
 rb_p(argv[i]);
    }
    if (argc == 1) {
 ret = argv[0];
    }
    else if (argc > 1) {
 ret = rb_ary_new_from_values(argc, argv);
    }
    if (( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(rb_stdout))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((rb_stdout) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((rb_stdout) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((rb_stdout) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((rb_stdout) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(rb_stdout)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(rb_stdout))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
 rb_io_flush(rb_stdout);
    }
    return ret;
}
static VALUE
rb_f_p(int argc, VALUE *argv, VALUE self)
{
    struct rb_f_p_arg arg;
    arg.argc = argc;
    arg.argv = argv;

    return rb_uninterruptible(rb_f_p_internal, (VALUE)&arg);
}
static VALUE
rb_obj_display(int argc, VALUE *argv, VALUE self)
{
    VALUE out;

    if (argc == 0) {
 out = rb_stdout;
    }
    else {
 rb_scan_args(argc, argv, "01", &out);
    }
    rb_io_write(out, self);

    return ((VALUE)RUBY_Qnil);
}

void
rb_write_error2(const char *mesg, long len)
{
    if (rb_stderr == orig_stderr || ((struct RFile*)(orig_stderr))->fptr->fd < 0) {





 if (fwrite(mesg, sizeof(char), (size_t)len, stderr) < (size_t)len) {

     return;
 }
    }
    else {
 rb_io_write(rb_stderr,  ({ (__builtin_constant_p(mesg) && __builtin_constant_p(len)) ? rb_str_new_static((mesg), (len)) : rb_str_new((mesg), (len)); }));
    }
}

void
rb_write_error(const char *mesg)
{
    rb_write_error2(mesg, strlen(mesg));
}

void
rb_write_error_str(VALUE mesg)
{

    if (rb_stderr == orig_stderr || ((struct RFile*)(orig_stderr))->fptr->fd < 0) {
 size_t len = (size_t)(!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(mesg))->as.heap.len);





 if (fwrite((!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(mesg))->as.ary : ((struct RString*)(mesg))->as.heap.ptr), sizeof(char), len, stderr) < len) {
     (* ({ volatile VALUE *rb_gc_guarded_ptr = &(mesg); ; rb_gc_guarded_ptr; }));
     return;
 }
    }
    else {

 rb_io_write(rb_stderr, mesg);
    }
}

int
rb_stderr_tty_p(void)
{
    if (rb_stderr == orig_stderr || ((struct RFile*)(orig_stderr))->fptr->fd < 0)
 return isatty(fileno(stderr));
    return 0;
}

static void
must_respond_to(ID mid, VALUE val, ID id)
{
    if (!rb_respond_to(val, mid)) {
 rb_raise(rb_eTypeError, "%li\v must have %li\v method, %li\v given",
   rb_id2str(id), rb_id2str(mid),
   rb_obj_class(val));
    }
}

static void
stdout_setter(VALUE val, ID id, VALUE *variable)
{
    must_respond_to(id_write, val, id);
    *variable = val;
}

static VALUE
prep_io(int fd, int fmode, VALUE klass, const char *path)
{
    rb_io_t *fp;
    VALUE io = io_alloc(klass);

    do { (fp) = rb_io_make_open_file(io);} while (0);
    fp->fd = fd;
    fp->mode = fmode;
    if (!io_check_tty(fp)) {




    }
    if (path) fp->pathv = rb_obj_freeze( ({ (__builtin_constant_p(path)) ? rb_str_new_static((path), (long)strlen(path)) : rb_str_new_cstr(path); }));
    rb_update_max_fd(fd);

    return io;
}

VALUE
rb_io_fdopen(int fd, int oflags, const char *path)
{
    VALUE klass = rb_cIO;

    if (path && strcmp(path, "-")) klass = rb_cFile;
    return prep_io(fd, rb_io_oflags_fmode(oflags), klass, path);
}

static VALUE
prep_stdio(FILE *f, int fmode, VALUE klass, const char *path)
{
    rb_io_t *fptr;
    VALUE io = prep_io(fileno(f), fmode|(1<<16)|0, klass, path);

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    fptr->encs.ecflags |= RUBY_ECONV_DEFAULT_NEWLINE_DECORATOR;






    fptr->stdio_file = f;

    return io;
}

FILE *
rb_io_stdio_file(rb_io_t *fptr)
{
    if (!fptr->stdio_file) {
        int oflags = rb_io_fmode_oflags(fptr->mode);
        fptr->stdio_file = rb_fdopen(fptr->fd, rb_io_oflags_modestr(oflags));
    }
    return fptr->stdio_file;
}

static inline void
rb_io_buffer_init(rb_io_buffer_t *buf)
{
    buf->ptr = ((void*)0);
    buf->off = 0;
    buf->len = 0;
    buf->capa = 0;
}

static inline rb_io_t *
rb_io_fptr_new(void)
{
    rb_io_t *fp = ((rb_io_t*)ruby_xmalloc(sizeof(rb_io_t)));
    fp->fd = -1;
    fp->stdio_file = ((void*)0);
    fp->mode = 0;
    fp->pid = 0;
    fp->lineno = 0;
    fp->pathv = ((VALUE)RUBY_Qnil);
    fp->finalize = 0;
    rb_io_buffer_init(&fp->wbuf);
    rb_io_buffer_init(&fp->rbuf);
    rb_io_buffer_init(&fp->cbuf);
    fp->readconv = ((void*)0);
    fp->writeconv = ((void*)0);
    fp->writeconv_asciicompat = ((VALUE)RUBY_Qnil);
    fp->writeconv_pre_ecflags = 0;
    fp->writeconv_pre_ecopts = ((VALUE)RUBY_Qnil);
    fp->writeconv_initialized = 0;
    fp->tied_io_for_writing = 0;
    fp->encs.enc = ((void*)0);
    fp->encs.enc2 = ((void*)0);
    fp->encs.ecflags = 0;
    fp->encs.ecopts = ((VALUE)RUBY_Qnil);
    fp->write_lock = 0;
    return fp;
}

rb_io_t *
rb_io_make_open_file(VALUE obj)
{
    rb_io_t *fp = 0;

    (!( (((RUBY_T_FILE)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(obj)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_FILE)) == RUBY_T_TRUE) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_FILE)) == RUBY_T_FALSE) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_FILE)) == RUBY_T_NIL) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_FILE)) == RUBY_T_UNDEF) ? (((VALUE)(obj)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_FILE)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(obj))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_FILE)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(obj)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(obj)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(obj)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(obj)))->flags & RUBY_T_MASK) == ((RUBY_T_FILE)))) || ((RUBY_T_FILE) == RUBY_T_DATA && (((struct RTypedData*)(obj))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(obj), (RUBY_T_FILE)) : (void)0);
    if (((struct RFile*)(obj))->fptr) {
 rb_io_close(obj);
 rb_io_fptr_finalize(((struct RFile*)(obj))->fptr);
 ((struct RFile*)(obj))->fptr = 0;
    }
    fp = rb_io_fptr_new();
    ((struct RFile*)(obj))->fptr = fp;
    return fp;
}
static VALUE
rb_io_initialize(int argc, VALUE *argv, VALUE io)
{
    VALUE fnum, vmode;
    rb_io_t *fp;
    int fd, fmode, oflags = 00;
    convconfig_t convconfig;
    VALUE opt;

    int ofmode;





    argc = rb_scan_args(argc, argv, "11:", &fnum, &vmode, &opt);
    rb_io_extract_modeenc(&vmode, 0, opt, &oflags, &fmode, &convconfig);

    fd = rb_num2int_inline(fnum);
    if (rb_reserved_fd_p(fd)) {
 rb_raise(rb_eArgError, "The given fd is not accessible because RubyVM reserves it");
    }

    oflags = fcntl(fd, 3);
    if (oflags == -1) rb_sys_fail(0);



    rb_update_max_fd(fd);

    ofmode = rb_io_oflags_fmode(oflags);
    if (!((VALUE)(vmode) != ((VALUE)RUBY_Qnil))) {
 fmode = ofmode;
    }
    else if ((~ofmode & fmode) & (0x00000001|0x00000002)) {
 VALUE error = (((VALUE)(22))<<1 | RUBY_FIXNUM_FLAG);
 rb_exc_raise(rb_class_new_instance(1, &error, rb_eSystemCallError));
    }

    if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil)) && rb_hash_aref(opt, sym_autoclose) == ((VALUE)RUBY_Qfalse)) {
 fmode |= (1<<16);
    }
    do { (fp) = rb_io_make_open_file(io);} while (0);
    fp->fd = fd;
    fp->mode = fmode;
    fp->encs = convconfig;
    clear_codeconv(fp);
    io_check_tty(fp);
    if (fileno(stdin) == fd)
 fp->stdio_file = stdin;
    else if (fileno(stdout) == fd)
 fp->stdio_file = stdout;
    else if (fileno(stderr) == fd)
 fp->stdio_file = stderr;

    if (fmode & 0x00100000) io_set_encoding_by_bom(io);
    return io;
}
static VALUE
rb_file_initialize(int argc, VALUE *argv, VALUE io)
{
    if (((struct RFile*)(io))->fptr) {
 rb_raise(rb_eRuntimeError, "reinitializing File");
    }
    if (0 < argc && argc < 3) {
 VALUE fd = rb_check_to_int(argv[0]);

 if (!!((VALUE)(fd) != ((VALUE)RUBY_Qnil))) {
     argv[0] = fd;
     return rb_io_initialize(argc, argv, io);
 }
    }
    rb_open_file(argc, argv, io);

    return io;
}


static VALUE
rb_io_s_new(int argc, VALUE *argv, VALUE klass)
{
    if (rb_block_given_p()) {
 VALUE cname = rb_obj_as_string(klass);

 rb_warn("%li\v::new() does not take block; use %li\v::open() instead",
  cname, cname);
    }
    return rb_class_new_instance(argc, argv, klass);
}
static VALUE
rb_io_s_for_fd(int argc, VALUE *argv, VALUE klass)
{
    VALUE io = rb_obj_alloc(klass);
    rb_io_initialize(argc, argv, io);
    return io;
}
static VALUE
rb_io_autoclose_p(VALUE io)
{
    rb_io_t *fptr = ((struct RFile*)(io))->fptr;
    rb_io_check_closed(fptr);
    return (fptr->mode & (1<<16)) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_io_set_autoclose(VALUE io, VALUE autoclose)
{
    rb_io_t *fptr;
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (!!(((VALUE)(autoclose) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))
 fptr->mode |= (1<<16);
    else
 fptr->mode &= ~(1<<16);
    return io;
}

static void
argf_mark(void *ptr)
{
    struct argf *p = ptr;
    rb_gc_mark(p->filename);
    rb_gc_mark(p->current_file);
    rb_gc_mark(p->argv);
    rb_gc_mark(p->inplace);
    rb_gc_mark(p->encs.ecopts);
}

static size_t
argf_memsize(const void *ptr)
{
    const struct argf *p = ptr;
    size_t size = sizeof(*p);
    return size;
}

static const rb_data_type_t argf_type = {
    "ARGF",
    {argf_mark, ((RUBY_DATA_FUNC)-1), argf_memsize},
    0, 0, 1
};

static inline void
argf_init(struct argf *p, VALUE v)
{
    p->filename = ((VALUE)RUBY_Qnil);
    p->current_file = ((VALUE)RUBY_Qnil);
    p->lineno = 0;
    p->argv = v;
}

static VALUE
argf_alloc(VALUE klass)
{
    struct argf *p;
    VALUE argf = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct argf), &argf_type); (void)((p) = (struct argf *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });

    argf_init(p, ((VALUE)RUBY_Qnil));
    return argf;
}




static VALUE
argf_initialize(VALUE argf, VALUE argv)
{
    memset(&(*(struct argf *)(((struct RData*)(argf))->data)), 0, sizeof((*(struct argf *)(((struct RData*)(argf))->data))));
    argf_init(&(*(struct argf *)(((struct RData*)(argf))->data)), argv);

    return argf;
}


static VALUE
argf_initialize_copy(VALUE argf, VALUE orig)
{
    if (!((argf) != (orig) && (rb_obj_init_copy((argf), (orig)), 1))) return argf;
    (*(struct argf *)(((struct RData*)(argf))->data)) = (*(struct argf *)(((struct RData*)(orig))->data));
    (*(struct argf *)(((struct RData*)(argf))->data)).argv = rb_obj_dup((*(struct argf *)(((struct RData*)(argf))->data)).argv);
    return argf;
}
static VALUE
argf_set_lineno(VALUE argf, VALUE val)
{
    (*(struct argf *)(((struct RData*)(argf))->data)).lineno = rb_num2int_inline(val);
    (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
argf_lineno(VALUE argf)
{
    return (((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).lineno))<<1 | RUBY_FIXNUM_FLAG);
}

static VALUE
argf_forward(int argc, VALUE *argv, VALUE argf)
{
    return rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, rb_frame_this_func(), argc, argv);
}
static void
argf_close(VALUE argf)
{
    VALUE file = (*(struct argf *)(((struct RData*)(argf))->data)).current_file;
    if (file == rb_stdin) return;
    if (( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(file))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
 rb_io_set_write_io(file, ((VALUE)RUBY_Qnil));
    }
    io_close(file);
    (*(struct argf *)(((struct RData*)(argf))->data)).init_p = -1;
}

static int
argf_next_argv(VALUE argf)
{
    char *fn;
    rb_io_t *fptr;
    int stdout_binmode = 0;
    int fmode;

    if (( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(rb_stdout))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((rb_stdout) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((rb_stdout) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((rb_stdout) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((rb_stdout) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(rb_stdout)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(rb_stdout))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
        rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(rb_stdout)))->fptr);
        if (fptr->mode & 0x00000004)
            stdout_binmode = 1;
    }

    if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p == 0) {
 if (!!((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).argv) != ((VALUE)RUBY_Qnil)) && rb_array_len((*(struct argf *)(((struct RData*)(argf))->data)).argv) > 0) {
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 }
 else {
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = -1;
 }
 (*(struct argf *)(((struct RData*)(argf))->data)).init_p = 1;
    }
    else {
 if (!((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).argv) != ((VALUE)RUBY_Qnil))) {
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = -1;
 }
 else if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p == -1 && rb_array_len((*(struct argf *)(((struct RData*)(argf))->data)).argv) > 0) {
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 }
    }

    if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p == 1) {
 if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p == 1) argf_close(argf);
      retry:
 if (rb_array_len((*(struct argf *)(((struct RData*)(argf))->data)).argv) > 0) {
     VALUE filename = rb_ary_shift((*(struct argf *)(((struct RData*)(argf))->data)).argv);
     ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(filename); ; rb_gc_guarded_ptr; })) = rb_get_path(filename));
     (*(struct argf *)(((struct RData*)(argf))->data)).filename = filename;
     fn = rb_string_value_cstr(&(filename));
     if ((!(((struct RBasic*)(filename))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(filename))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(filename))->as.heap.len) == 1 && fn[0] == '-') {
  (*(struct argf *)(((struct RData*)(argf))->data)).current_file = rb_stdin;
  if ((*(struct argf *)(((struct RData*)(argf))->data)).inplace) {
      rb_warn("Can't do inplace edit for stdio; skipping");
      goto retry;
  }
     }
     else {
  VALUE write_io = ((VALUE)RUBY_Qnil);
  int fr = rb_sysopen(filename, 00, 0);

  if ((*(struct argf *)(((struct RData*)(argf))->data)).inplace) {
      struct stat st;

      struct stat st2;

      VALUE str;
      int fw;

      if (( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(rb_stdout))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((rb_stdout) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((rb_stdout) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((rb_stdout) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((rb_stdout) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(rb_stdout)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(rb_stdout))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(rb_stdout) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(rb_stdout) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(rb_stdout))->flags & RUBY_T_MASK) == (RUBY_T_FILE))) && rb_stdout != orig_stdout) {
   rb_io_close(rb_stdout);
      }
      fstat(fr, &st);
      str = filename;
      if (!!((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).inplace) != ((VALUE)RUBY_Qnil))) {
   VALUE suffix = (*(struct argf *)(((struct RData*)(argf))->data)).inplace;
   str = rb_str_dup(str);
   if (!((VALUE)(rb_str_cat_conv_enc_opts(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), (!(((struct RBasic*)(suffix))->flags & RSTRING_NOEMBED) ? ((struct RString*)(suffix))->as.ary : ((struct RString*)(suffix))->as.heap.ptr), (!(((struct RBasic*)(suffix))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(suffix))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(suffix))->as.heap.len), rb_enc_get(suffix), 0, ((VALUE)RUBY_Qnil))) != ((VALUE)RUBY_Qnil))) {


       rb_str_append(str, suffix);
   }
   if (rename(fn, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) < 0) {
       rb_warn("Can't rename %li\v to %li\v: %s, skipping file",
        filename, str, strerror((*__errno_location ())));
       close(fr);
       goto retry;
   }

      }
      else {



   if (unlink(fn) < 0) {
       rb_warn("Can't remove %li\v: %s, skipping file",
        filename, strerror((*__errno_location ())));
       close(fr);
       goto retry;
   }

      }
      fw = rb_sysopen(filename, 01|0100|01000, 0666);

      fstat(fw, &st2);

      fchmod(fw, st.st_mode);



      if (st.st_uid!=st2.st_uid || st.st_gid!=st2.st_gid) {
   int err;

   err = fchown(fw, st.st_uid, st.st_gid);



   if (err && getuid() == 0 && st2.st_uid == 0) {
       const char *wkfn = (!(((struct RBasic*)(filename))->flags & RSTRING_NOEMBED) ? ((struct RString*)(filename))->as.ary : ((struct RString*)(filename))->as.heap.ptr);
       rb_warn("Can't set owner/group of %li\v to same as %li\v: %s, skipping file",
        filename, str, strerror((*__errno_location ())));
       (void)close(fr);
       (void)close(fw);
       (void)unlink(wkfn);
       goto retry;
   }
      }

      write_io = prep_io(fw, 0x00000002, rb_cFile, fn);
      rb_stdout = write_io;
      if (stdout_binmode) rb_io_binmode(rb_stdout);
  }
  fmode = 0x00000001;
  if (!(*(struct argf *)(((struct RData*)(argf))->data)).binmode) {
      fmode |= 0;
  }
  (*(struct argf *)(((struct RData*)(argf))->data)).current_file = prep_io(fr, fmode, rb_cFile, fn);
  if (!!((VALUE)(write_io) != ((VALUE)RUBY_Qnil))) {
      rb_io_set_write_io((*(struct argf *)(((struct RData*)(argf))->data)).current_file, write_io);
  }
     }
     if ((*(struct argf *)(((struct RData*)(argf))->data)).binmode) rb_io_ascii8bit_binmode((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check((*(struct argf *)(((struct RData*)(argf))->data)).current_file)))->fptr);
     if ((*(struct argf *)(((struct RData*)(argf))->data)).encs.enc) {
  fptr->encs = (*(struct argf *)(((struct RData*)(argf))->data)).encs;
                clear_codeconv(fptr);
     }
     else {
  fptr->encs.ecflags &= ~RUBY_ECONV_NEWLINE_DECORATOR_MASK;
  if (!(*(struct argf *)(((struct RData*)(argf))->data)).binmode) {
      fptr->encs.ecflags |= RUBY_ECONV_DEFAULT_NEWLINE_DECORATOR;



  }
     }
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 0;
 }
 else {
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
     return FALSE;
 }
    }
    else if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p == -1) {
 (*(struct argf *)(((struct RData*)(argf))->data)).current_file = rb_stdin;
 (*(struct argf *)(((struct RData*)(argf))->data)).filename =  ({ (__builtin_constant_p("-")) ? rb_str_new_static(("-"), (long)strlen("-")) : rb_str_new_cstr("-"); });
 if ((*(struct argf *)(((struct RData*)(argf))->data)).inplace) {
     rb_warn("Can't do inplace edit for stdio");
     rb_stdout = orig_stdout;
 }
    }
    if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p == -1) (*(struct argf *)(((struct RData*)(argf))->data)).init_p = 1;
    return TRUE;
}

static VALUE
argf_getline(int argc, VALUE *argv, VALUE argf)
{
    VALUE line;
    long lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;

  retry:
    if (!argf_next_argv(argf)) return ((VALUE)RUBY_Qnil);
    if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) {
 line = rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, idGets, argc, argv);
    }
    else {
 if (argc == 0 && rb_rs == rb_default_rs) {
     line = rb_io_gets((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
 }
 else {
     line = rb_io_getline(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file);
 }
 if (!((VALUE)(line) != ((VALUE)RUBY_Qnil)) && (*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
     argf_close(argf);
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
     goto retry;
 }
    }
    if (!!((VALUE)(line) != ((VALUE)RUBY_Qnil))) {
 (*(struct argf *)(((struct RData*)(argf))->data)).lineno = ++lineno;
 (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    }
    return line;
}

static VALUE
argf_lineno_getter(ID id, VALUE *var)
{
    VALUE argf = *var;
    return (((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).last_lineno))<<1 | RUBY_FIXNUM_FLAG);
}

static void
argf_lineno_setter(VALUE val, ID id, VALUE *var)
{
    VALUE argf = *var;
    int n = rb_num2int_inline(val);
    (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno = n;
}

static VALUE argf_gets(int, VALUE *, VALUE);
static VALUE
rb_f_gets(int argc, VALUE *argv, VALUE recv)
{
    if (recv == argf) {
 return argf_gets(argc, argv, argf);
    }
    return rb_funcallv(argf, idGets, argc, argv);
}
static VALUE
argf_gets(int argc, VALUE *argv, VALUE argf)
{
    VALUE line;

    line = argf_getline(argc, argv, argf);
    rb_lastline_set(line);

    return line;
}

VALUE
rb_gets(void)
{
    VALUE line;

    if (rb_rs != rb_default_rs) {
 return rb_f_gets(0, 0, argf);
    }

  retry:
    if (!argf_next_argv(argf)) return ((VALUE)RUBY_Qnil);
    line = rb_io_gets((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    if (!((VALUE)(line) != ((VALUE)RUBY_Qnil)) && (*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
 rb_io_close((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 goto retry;
    }
    rb_lastline_set(line);
    if (!!((VALUE)(line) != ((VALUE)RUBY_Qnil))) {
 (*(struct argf *)(((struct RData*)(argf))->data)).lineno++;
 (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    }

    return line;
}

static VALUE argf_readline(int, VALUE *, VALUE);
static VALUE
rb_f_readline(int argc, VALUE *argv, VALUE recv)
{
    if (recv == argf) {
 return argf_readline(argc, argv, argf);
    }
    return rb_funcallv(argf, (__builtin_constant_p("readline") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("readline")), (long)strlen(("readline"))); (ID) rb_intern_id_cache; }) : rb_intern("readline")), argc, argv);
}
static VALUE
argf_readline(int argc, VALUE *argv, VALUE argf)
{
    VALUE line;

    if (!argf_next_argv(argf)) rb_eof_error();
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((argc), (argv), argf);} while (0);
    line = argf_gets(argc, argv, argf);
    if (!((VALUE)(line) != ((VALUE)RUBY_Qnil))) {
 rb_eof_error();
    }

    return line;
}

static VALUE argf_readlines(int, VALUE *, VALUE);
static VALUE
rb_f_readlines(int argc, VALUE *argv, VALUE recv)
{
    if (recv == argf) {
 return argf_readlines(argc, argv, argf);
    }
    return rb_funcallv(argf, (__builtin_constant_p("readlines") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("readlines")), (long)strlen(("readlines"))); (ID) rb_intern_id_cache; }) : rb_intern("readlines")), argc, argv);
}
static VALUE
argf_readlines(int argc, VALUE *argv, VALUE argf)
{
    long lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    VALUE lines, ary;

    ary = rb_ary_new();
    while (argf_next_argv(argf)) {
 if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) {
     lines = rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, (__builtin_constant_p("readlines") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("readlines")), (long)strlen(("readlines"))); (ID) rb_intern_id_cache; }) : rb_intern("readlines")), argc, argv);
 }
 else {
     lines = rb_io_readlines(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file);
     argf_close(argf);
 }
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 rb_ary_concat(ary, lines);
 (*(struct argf *)(((struct RData*)(argf))->data)).lineno = lineno + rb_array_len(ary);
 (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    }
    (*(struct argf *)(((struct RData*)(argf))->data)).init_p = 0;
    return ary;
}
static VALUE
rb_f_backquote(VALUE obj, VALUE str)
{
    VALUE port;
    VALUE result;
    rb_io_t *fptr;

    do { rb_string_value(&(str)); rb_check_safe_obj(str);} while (0);
    rb_last_status_clear();
    port = pipe_open_s(str, "r", 0x00000001|0, ((void*)0));
    if (!((VALUE)(port) != ((VALUE)RUBY_Qnil))) return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(port)))->fptr);
    result = read_all(fptr, remain_size(fptr), ((VALUE)RUBY_Qnil));
    rb_io_close(port);
    rb_io_fptr_finalize(fptr);
    rb_gc_force_recycle(port);

    return result;
}





static VALUE
select_internal(VALUE read, VALUE write, VALUE except, struct timeval *tp, rb_fdset_t *fds)
{
    VALUE res, list;
    rb_fdset_t *rp, *wp, *ep;
    rb_io_t *fptr;
    long i;
    int max = 0, n;
    int pending = 0;
    struct timeval timerec;

    if (!!((VALUE)(read) != ((VALUE)RUBY_Qnil))) {
 (!( (((RUBY_T_ARRAY)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(read)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_ARRAY)) == RUBY_T_TRUE) ? (((VALUE)(read)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_ARRAY)) == RUBY_T_FALSE) ? (((VALUE)(read)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_ARRAY)) == RUBY_T_NIL) ? (((VALUE)(read)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_ARRAY)) == RUBY_T_UNDEF) ? (((VALUE)(read)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_ARRAY)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(read))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(read)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(read)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(read)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_ARRAY)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(read)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(read)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(read)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(read)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(read)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(read)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(read)))->flags & RUBY_T_MASK) == ((RUBY_T_ARRAY)))) || ((RUBY_T_ARRAY) == RUBY_T_DATA && (((struct RTypedData*)(read))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(read), (RUBY_T_ARRAY)) : (void)0);
 for (i=0; i<rb_array_len(read); i++) {
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(rb_io_get_io((rb_array_const_ptr(read)[i])))))->fptr);
     rb_fd_set(fptr->fd, &fds[0]);
     if (((fptr)->rbuf.len) || ((fptr)->cbuf.len)) {
  pending++;
  rb_fd_set(fptr->fd, &fds[3]);
     }
     if (max < fptr->fd) max = fptr->fd;
 }
 if (pending) {
     timerec.tv_sec = timerec.tv_usec = 0;
     tp = &timerec;
 }
 rp = &fds[0];
    }
    else
 rp = 0;

    if (!!((VALUE)(write) != ((VALUE)RUBY_Qnil))) {
 (!( (((RUBY_T_ARRAY)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(write)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_ARRAY)) == RUBY_T_TRUE) ? (((VALUE)(write)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_ARRAY)) == RUBY_T_FALSE) ? (((VALUE)(write)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_ARRAY)) == RUBY_T_NIL) ? (((VALUE)(write)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_ARRAY)) == RUBY_T_UNDEF) ? (((VALUE)(write)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_ARRAY)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(write))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(write)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(write)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(write)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_ARRAY)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(write)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(write)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(write)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(write)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(write)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(write)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(write)))->flags & RUBY_T_MASK) == ((RUBY_T_ARRAY)))) || ((RUBY_T_ARRAY) == RUBY_T_DATA && (((struct RTypedData*)(write))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(write), (RUBY_T_ARRAY)) : (void)0);
 for (i=0; i<rb_array_len(write); i++) {
            VALUE write_io = rb_io_get_write_io(rb_io_get_io((rb_array_const_ptr(write)[i])));
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
     rb_fd_set(fptr->fd, &fds[1]);
     if (max < fptr->fd) max = fptr->fd;
 }
 wp = &fds[1];
    }
    else
 wp = 0;

    if (!!((VALUE)(except) != ((VALUE)RUBY_Qnil))) {
 (!( (((RUBY_T_ARRAY)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(except)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_ARRAY)) == RUBY_T_TRUE) ? (((VALUE)(except)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_ARRAY)) == RUBY_T_FALSE) ? (((VALUE)(except)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_ARRAY)) == RUBY_T_NIL) ? (((VALUE)(except)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_ARRAY)) == RUBY_T_UNDEF) ? (((VALUE)(except)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_ARRAY)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(except))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(except)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(except)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(except)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_ARRAY)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(except)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(except)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(except)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(except)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(except)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(except)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(except)))->flags & RUBY_T_MASK) == ((RUBY_T_ARRAY)))) || ((RUBY_T_ARRAY) == RUBY_T_DATA && (((struct RTypedData*)(except))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(except), (RUBY_T_ARRAY)) : (void)0);
 for (i=0; i<rb_array_len(except); i++) {
            VALUE io = rb_io_get_io((rb_array_const_ptr(except)[i]));
            VALUE write_io = rb_io_get_write_io(io);
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
     rb_fd_set(fptr->fd, &fds[2]);
     if (max < fptr->fd) max = fptr->fd;
            if (io != write_io) {
                rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
                rb_fd_set(fptr->fd, &fds[2]);
                if (max < fptr->fd) max = fptr->fd;
            }
 }
 ep = &fds[2];
    }
    else {
 ep = 0;
    }

    max++;

    n = rb_thread_fd_select(max, rp, wp, ep, tp);
    if (n < 0) {
 rb_sys_fail(0);
    }
    if (!pending && n == 0) return ((VALUE)RUBY_Qnil);

    res = rb_ary_new_capa(3);
    rb_ary_push(res, rp?rb_ary_new():rb_ary_new_capa(0));
    rb_ary_push(res, wp?rb_ary_new():rb_ary_new_capa(0));
    rb_ary_push(res, ep?rb_ary_new():rb_ary_new_capa(0));

    if (rp) {
 list = (rb_array_const_ptr(res)[0]);
 for (i=0; i< rb_array_len(read); i++) {
     VALUE obj = rb_ary_entry(read, i);
     VALUE io = rb_io_get_io(obj);
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
     if (rb_fd_isset(fptr->fd, &fds[0]) ||
  rb_fd_isset(fptr->fd, &fds[3])) {
  rb_ary_push(list, obj);
     }
 }
    }

    if (wp) {
 list = (rb_array_const_ptr(res)[1]);
 for (i=0; i< rb_array_len(write); i++) {
     VALUE obj = rb_ary_entry(write, i);
     VALUE io = rb_io_get_io(obj);
     VALUE write_io = rb_io_get_write_io(io);
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
     if (rb_fd_isset(fptr->fd, &fds[1])) {
  rb_ary_push(list, obj);
     }
 }
    }

    if (ep) {
 list = (rb_array_const_ptr(res)[2]);
 for (i=0; i< rb_array_len(except); i++) {
     VALUE obj = rb_ary_entry(except, i);
     VALUE io = rb_io_get_io(obj);
     VALUE write_io = rb_io_get_write_io(io);
     rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
     if (rb_fd_isset(fptr->fd, &fds[2])) {
  rb_ary_push(list, obj);
     }
     else if (io != write_io) {
  rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(write_io)))->fptr);
  if (rb_fd_isset(fptr->fd, &fds[2])) {
      rb_ary_push(list, obj);
  }
     }
 }
    }

    return res;
}

struct select_args {
    VALUE read, write, except;
    struct timeval *timeout;
    rb_fdset_t fdsets[4];
};

static VALUE
select_call(VALUE arg)
{
    struct select_args *p = (struct select_args *)arg;

    return select_internal(p->read, p->write, p->except, p->timeout, p->fdsets);
}

static VALUE
select_end(VALUE arg)
{
    struct select_args *p = (struct select_args *)arg;
    int i;

    for (i = 0; i < ((int)(sizeof(p->fdsets) / sizeof((p->fdsets)[0]))); ++i)
 rb_fd_term(&p->fdsets[i]);
    return ((VALUE)RUBY_Qnil);
}

static VALUE sym_normal, sym_sequential, sym_random,
             sym_willneed, sym_dontneed, sym_noreuse;


struct io_advise_struct {
    int fd;
    int advice;
    off_t offset;
    off_t len;
};

static VALUE
io_advise_internal(void *arg)
{
    struct io_advise_struct *ptr = arg;
    return posix_fadvise(ptr->fd, ptr->offset, ptr->len, ptr->advice);
}

static VALUE
io_advise_sym_to_const(VALUE sym)
{

    if (sym == sym_normal)
 return (((VALUE)((int)(0)))<<1 | RUBY_FIXNUM_FLAG);



    if (sym == sym_random)
 return (((VALUE)((int)(1)))<<1 | RUBY_FIXNUM_FLAG);



    if (sym == sym_sequential)
 return (((VALUE)((int)(2)))<<1 | RUBY_FIXNUM_FLAG);



    if (sym == sym_willneed)
 return (((VALUE)((int)(3)))<<1 | RUBY_FIXNUM_FLAG);



    if (sym == sym_dontneed)
 return (((VALUE)((int)(4)))<<1 | RUBY_FIXNUM_FLAG);



    if (sym == sym_noreuse)
 return (((VALUE)((int)(5)))<<1 | RUBY_FIXNUM_FLAG);


    return ((VALUE)RUBY_Qnil);
}

static VALUE
do_io_advise(rb_io_t *fptr, VALUE advice, off_t offset, off_t len)
{
    int rv;
    struct io_advise_struct ias;
    VALUE num_adv;

    num_adv = io_advise_sym_to_const(advice);





    if (!((VALUE)(num_adv) != ((VALUE)RUBY_Qnil)))
 return ((VALUE)RUBY_Qnil);

    ias.fd = fptr->fd;
    ias.advice = rb_num2int_inline(num_adv);
    ias.offset = offset;
    ias.len = len;

    rv = (int)rb_thread_io_blocking_region(io_advise_internal, &ias, fptr->fd);
    if (rv && rv != 38) {


 VALUE message = rb_sprintf("%li\v (%ld, %ld, %li\v)",
       fptr->pathv, offset, len, advice);
 rb_syserr_fail_str(rv, message);
    }

    return ((VALUE)RUBY_Qnil);
}



static void
advice_arg_check(VALUE advice)
{
    if (!((((VALUE)(advice)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(advice) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(advice) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(advice))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))))
 rb_raise(rb_eTypeError, "advice must be a Symbol");

    if (advice != sym_normal &&
 advice != sym_sequential &&
 advice != sym_random &&
 advice != sym_willneed &&
 advice != sym_dontneed &&
 advice != sym_noreuse) {
 rb_raise(rb_eNotImpError, "Unsupported advice: %+li\v", advice);
    }
}
static VALUE
rb_io_advise(int argc, VALUE *argv, VALUE io)
{
    VALUE advice, offset, len;
    off_t off, l;
    rb_io_t *fptr;

    rb_scan_args(argc, argv, "12", &advice, &offset, &len);
    advice_arg_check(advice);

    io = rb_io_get_write_io(io);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);

    off = !((VALUE)(offset) != ((VALUE)RUBY_Qnil)) ? 0 : rb_num2long_inline(offset);
    l = !((VALUE)(len) != ((VALUE)RUBY_Qnil)) ? 0 : rb_num2long_inline(len);


    return do_io_advise(fptr, advice, off, l);




}
static VALUE
rb_f_select(int argc, VALUE *argv, VALUE obj)
{
    VALUE timeout;
    struct select_args args;
    struct timeval timerec;
    int i;

    rb_scan_args(argc, argv, "13", &args.read, &args.write, &args.except, &timeout);
    if (!((VALUE)(timeout) != ((VALUE)RUBY_Qnil))) {
 args.timeout = 0;
    }
    else {
 timerec = rb_time_interval(timeout);
 args.timeout = &timerec;
    }

    for (i = 0; i < ((int)(sizeof(args.fdsets) / sizeof((args.fdsets)[0]))); ++i)
 rb_fd_init(&args.fdsets[i]);

    return rb_ensure(select_call, (VALUE)&args, select_end, (VALUE)&args);
}


 typedef unsigned long ioctl_req_t;







struct ioctl_arg {
    int fd;
    ioctl_req_t cmd;
    long narg;
};

static VALUE
nogvl_ioctl(void *ptr)
{
    struct ioctl_arg *arg = ptr;

    return (VALUE)ioctl(arg->fd, arg->cmd, arg->narg);
}

static int
do_ioctl(int fd, ioctl_req_t cmd, long narg)
{
    int retval;
    struct ioctl_arg arg;

    arg.fd = fd;
    arg.cmd = cmd;
    arg.narg = narg;

    retval = (int)rb_thread_io_blocking_region(nogvl_ioctl, &arg, fd);

    return retval;
}





static long
linux_iocparm_len(ioctl_req_t cmd)
{
    long len;

    if ((cmd & 0xFFFF0000) == 0) {

 return (256);
    }

    len = (((cmd) >> ((0 +8)+8)) & ((1 << 14)-1));


    if (len < (256))
 len = (256);

    return len;
}


static long
ioctl_narg_len(ioctl_req_t cmd)
{
    long len;
    len = linux_iocparm_len(cmd);





    return len;
}



typedef long fcntl_arg_t;





static long
fcntl_narg_len(int cmd)
{
    long len;

    switch (cmd) {

      case 0:
 len = sizeof(fcntl_arg_t);
 break;







      case 1030:
 len = sizeof(fcntl_arg_t);
 break;


      case 1:
 len = 1;
 break;


      case 2:
 len = sizeof(fcntl_arg_t);
 break;


      case 3:
 len = 1;
 break;


      case 4:
 len = sizeof(fcntl_arg_t);
 break;


      case 9:
 len = 1;
 break;


      case 8:
 len = sizeof(fcntl_arg_t);
 break;


      case 16:
 len = sizeof(struct f_owner_ex);
 break;


      case 15:
 len = sizeof(struct f_owner_ex);
 break;


      case 5:
 len = sizeof(struct flock);
 break;


      case 6:
 len = sizeof(struct flock);
 break;


      case 7:
 len = sizeof(struct flock);
 break;
      case 11:
 len = 1;
 break;


      case 10:
 len = sizeof(fcntl_arg_t);
 break;


      case 1025:
 len = 1;
 break;


      case 1024:
 len = sizeof(fcntl_arg_t);
 break;


      case 1026:
 len = sizeof(fcntl_arg_t);
 break;


      default:
 len = 256;
 break;
    }

    return len;
}
static long
setup_narg(ioctl_req_t cmd, VALUE *argp, int io_p)
{
    long narg = 0;
    VALUE arg = *argp;

    if (!((VALUE)(arg) != ((VALUE)RUBY_Qnil)) || arg == ((VALUE)RUBY_Qfalse)) {
 narg = 0;
    }
    else if ((((int)(long)(arg))&RUBY_FIXNUM_FLAG)) {
 narg = ((long)(((long)(arg))>>(int)(1)));
    }
    else if (arg == ((VALUE)RUBY_Qtrue)) {
 narg = 1;
    }
    else {
 VALUE tmp = rb_check_string_type(arg);

 if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     narg = rb_num2long_inline(arg);
 }
 else {
     char *ptr;
     long len, slen;

     *argp = arg = tmp;
     if (io_p)
  len = ioctl_narg_len(cmd);
     else
  len = fcntl_narg_len((int)cmd);
     rb_str_modify(arg);

     slen = (!(((struct RBasic*)(arg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(arg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(arg))->as.heap.len);

     if (slen < len+1) {
  rb_str_resize(arg, len+1);
  memset(((!(((struct RBasic*)(arg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(arg))->as.ary : ((struct RString*)(arg))->as.heap.ptr)+slen), 0, sizeof(char)*(size_t)(len-slen));
  slen = len+1;
     }

     ptr = (!(((struct RBasic*)(arg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(arg))->as.ary : ((struct RString*)(arg))->as.heap.ptr);
     ptr[slen - 1] = 17;
     narg = (long)(long)ptr;
 }
    }

    return narg;
}


static VALUE
rb_ioctl(VALUE io, VALUE req, VALUE arg)
{
    ioctl_req_t cmd = rb_num2ulong_inline(req);
    rb_io_t *fptr;
    long narg;
    int retval;

    narg = setup_narg(cmd, &arg, 1);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    retval = do_ioctl(fptr->fd, cmd, narg);
    if (retval < 0) rb_sys_fail_path_in(__func__, fptr->pathv);
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(arg))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((arg) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((arg) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((arg) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((arg) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(arg))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 char *ptr;
 long slen;
 (!(((struct RBasic*)(arg))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(arg))->as.ary, (slen) = (long)((((struct RBasic*)(arg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(arg))->as.heap.ptr, (slen) = ((struct RString*)(arg))->as.heap.len));
 if (ptr[slen-1] != 17)
     rb_raise(rb_eArgError, "return value overflowed string");
 ptr[slen-1] = '\0';
    }

    return (((VALUE)((int)(retval)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_ioctl(int argc, VALUE *argv, VALUE io)
{
    VALUE req, arg;

    rb_scan_args(argc, argv, "11", &req, &arg);
    return rb_ioctl(io, req, arg);
}





struct fcntl_arg {
    int fd;
    int cmd;
    long narg;
};

static VALUE
nogvl_fcntl(void *ptr)
{
    struct fcntl_arg *arg = ptr;


    if (arg->cmd == 0)
 return (VALUE)rb_cloexec_fcntl_dupfd(arg->fd, (int)arg->narg);

    return (VALUE)fcntl(arg->fd, arg->cmd, arg->narg);
}

static int
do_fcntl(int fd, int cmd, long narg)
{
    int retval;
    struct fcntl_arg arg;

    arg.fd = fd;
    arg.cmd = cmd;
    arg.narg = narg;

    retval = (int)rb_thread_io_blocking_region(nogvl_fcntl, &arg, fd);
    if (retval != -1) {
 switch (cmd) {

   case 0:


   case 1030:

     rb_update_max_fd(retval);
 }
    }

    return retval;
}

static VALUE
rb_fcntl(VALUE io, VALUE req, VALUE arg)
{
    int cmd = rb_num2int_inline(req);
    rb_io_t *fptr;
    long narg;
    int retval;

    narg = setup_narg(cmd, &arg, 0);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    retval = do_fcntl(fptr->fd, cmd, narg);
    if (retval < 0) rb_sys_fail_path_in(__func__, fptr->pathv);
    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(arg))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((arg) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((arg) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((arg) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((arg) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(arg)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(arg))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(arg) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(arg) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(arg))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 char *ptr;
 long slen;
 (!(((struct RBasic*)(arg))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(arg))->as.ary, (slen) = (long)((((struct RBasic*)(arg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(arg))->as.heap.ptr, (slen) = ((struct RString*)(arg))->as.heap.len));
 if (ptr[slen-1] != 17)
     rb_raise(rb_eArgError, "return value overflowed string");
 ptr[slen-1] = '\0';
    }

    return (((VALUE)((int)(retval)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_io_fcntl(int argc, VALUE *argv, VALUE io)
{
    VALUE req, arg;

    rb_scan_args(argc, argv, "11", &req, &arg);
    return rb_fcntl(io, req, arg);
}
static VALUE
rb_f_syscall(int argc, VALUE *argv)
{
    VALUE arg[8];
    long num, retval = -1;






    int i;

    if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 rb_warning("We plan to remove a syscall function at future release. DL(Fiddle) provides safer alternative.");
    }

    if (argc == 0)
 rb_raise(rb_eArgError, "too few arguments for syscall");
    if (argc > ((int)(sizeof(arg) / sizeof((arg)[0]))))
 rb_raise(rb_eArgError, "too many arguments for syscall");
    num = rb_num2long_inline(argv[0]); ++argv;
    for (i = argc - 1; i--; ) {
 VALUE v = rb_check_string_type(argv[i]);

 if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
     do { rb_string_value(&(v)); rb_check_safe_obj(v);} while (0);
     rb_str_modify(v);
     arg[i] = (VALUE)rb_string_value_cstr(&(v));
 }
 else {
     arg[i] = (VALUE)rb_num2long_inline(argv[i]);
 }
    }

    switch (argc) {
      case 1:
 retval = syscall(num);
 break;
      case 2:
 retval = syscall(num, arg[0]);
 break;
      case 3:
 retval = syscall(num, arg[0],arg[1]);
 break;
      case 4:
 retval = syscall(num, arg[0],arg[1],arg[2]);
 break;
      case 5:
 retval = syscall(num, arg[0],arg[1],arg[2],arg[3]);
 break;
      case 6:
 retval = syscall(num, arg[0],arg[1],arg[2],arg[3],arg[4]);
 break;
      case 7:
 retval = syscall(num, arg[0],arg[1],arg[2],arg[3],arg[4],arg[5]);
 break;
      case 8:
 retval = syscall(num, arg[0],arg[1],arg[2],arg[3],arg[4],arg[5],arg[6]);
 break;
    }

    if (retval == -1)
 rb_sys_fail(0);
    return rb_long2num_inline(retval);



}




static VALUE
io_new_instance(VALUE args)
{
    return rb_class_new_instance(2, (VALUE*)args+1, *(VALUE*)args);
}

static rb_encoding *
find_encoding(VALUE v)
{
    rb_encoding *enc = rb_find_encoding(v);
    if (!enc) rb_warn("Unsupported encoding %li\v ignored", v);
    return enc;
}

static void
io_encoding_set(rb_io_t *fptr, VALUE v1, VALUE v2, VALUE opt)
{
    rb_encoding *enc, *enc2;
    int ecflags = fptr->encs.ecflags;
    VALUE ecopts, tmp;

    if (!!((VALUE)(v2) != ((VALUE)RUBY_Qnil))) {
 enc2 = find_encoding(v1);
 tmp = rb_check_string_type(v2);
 if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     if ((!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len) == 1 && (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr)[0] == '-') {

  enc = enc2;
  enc2 = ((void*)0);
     }
     else
  enc = find_encoding(v2);
     if (enc == enc2) {

  enc2 = ((void*)0);
     }
 }
 else {
     enc = find_encoding(v2);
     if (enc == enc2) {

  enc2 = ((void*)0);
     }
 }
 ((void)(enc2), (void)(ecflags));
 ecflags = rb_econv_prepare_options(opt, &ecopts, ecflags);
    }
    else {
 if (!((VALUE)(v1) != ((VALUE)RUBY_Qnil))) {

     rb_io_ext_int_to_encs(((void*)0), ((void*)0), &enc, &enc2, 0);
     ((void)(enc2), (void)(ecflags));
            ecopts = ((VALUE)RUBY_Qnil);
 }
 else {
     tmp = rb_check_string_type(v1);
     if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil)) && rb_enc_asciicompat_inline(enc = rb_enc_get(tmp))) {
                parse_mode_enc((!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr), enc, &enc, &enc2, ((void*)0));
  ((void)(enc2), (void)(ecflags));
                ecflags = rb_econv_prepare_options(opt, &ecopts, ecflags);
     }
     else {
  rb_io_ext_int_to_encs(find_encoding(v1), ((void*)0), &enc, &enc2, 0);
  ((void)(enc2), (void)(ecflags));
                ecopts = ((VALUE)RUBY_Qnil);
     }
 }
    }
    validate_enc_binmode(&fptr->mode, ecflags, enc, enc2);
    fptr->encs.enc = enc;
    fptr->encs.enc2 = enc2;
    fptr->encs.ecflags = ecflags;
    fptr->encs.ecopts = ecopts;
    clear_codeconv(fptr);

}

struct io_encoding_set_args {
    rb_io_t *fptr;
    VALUE v1;
    VALUE v2;
    VALUE opt;
};

static VALUE
io_encoding_set_v(VALUE v)
{
    struct io_encoding_set_args *arg = (struct io_encoding_set_args *)v;
    io_encoding_set(arg->fptr, arg->v1, arg->v2, arg->opt);
    return ((VALUE)RUBY_Qnil);
}

static VALUE
pipe_pair_close(VALUE rw)
{
    VALUE *rwp = (VALUE *)rw;
    return rb_ensure(io_close, rwp[0], io_close, rwp[1]);
}
static VALUE
rb_io_s_pipe(int argc, VALUE *argv, VALUE klass)
{
    int pipes[2], state;
    VALUE r, w, args[3], v1, v2;
    VALUE opt;
    rb_io_t *fptr, *fptr2;
    struct io_encoding_set_args ies_args;
    int fmode = 0;
    VALUE ret;

    argc = rb_scan_args(argc, argv, "02:", &v1, &v2, &opt);
    if (rb_pipe(pipes) == -1)
        rb_sys_fail(0);

    args[0] = klass;
    args[1] = (((VALUE)((int)(pipes[0])))<<1 | RUBY_FIXNUM_FLAG);
    args[2] = (((VALUE)(00))<<1 | RUBY_FIXNUM_FLAG);
    r = rb_protect(io_new_instance, (VALUE)args, &state);
    if (state) {
 close(pipes[0]);
 close(pipes[1]);
 rb_jump_tag(state);
    }
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(r)))->fptr);

    ies_args.fptr = fptr;
    ies_args.v1 = v1;
    ies_args.v2 = v2;
    ies_args.opt = opt;
    rb_protect(io_encoding_set_v, (VALUE)&ies_args, &state);
    if (state) {
 close(pipes[1]);
        io_close(r);
 rb_jump_tag(state);
    }

    args[1] = (((VALUE)((int)(pipes[1])))<<1 | RUBY_FIXNUM_FLAG);
    args[2] = (((VALUE)(01))<<1 | RUBY_FIXNUM_FLAG);
    w = rb_protect(io_new_instance, (VALUE)args, &state);
    if (state) {
 close(pipes[1]);
 if (!!((VALUE)(r) != ((VALUE)RUBY_Qnil))) rb_io_close(r);
 rb_jump_tag(state);
    }
    rb_io_check_closed((fptr2) = ((struct RFile*)(rb_io_taint_check(w)))->fptr);
    rb_io_synchronized(fptr2);

    extract_binmode(opt, &fmode);
    fptr->mode |= fmode;






    fptr2->mode |= fmode;

    ret = rb_assoc_new(r, w);
    if (rb_block_given_p()) {
 VALUE rw[2];
 rw[0] = r;
 rw[1] = w;
 return rb_ensure(rb_yield, ret, pipe_pair_close, (VALUE)rw);
    }
    return ret;
}

struct foreach_arg {
    int argc;
    VALUE *argv;
    VALUE io;
};

static void
open_key_args(VALUE klass, int argc, VALUE *argv, VALUE opt, struct foreach_arg *arg)
{
    VALUE path, v;
    VALUE vmode = ((VALUE)RUBY_Qnil), vperm = ((VALUE)RUBY_Qnil);

    path = *argv++;
    argc--;
    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(path); ; rb_gc_guarded_ptr; })) = rb_get_path(path));
    arg->io = 0;
    arg->argc = argc;
    arg->argv = argv;
    if (!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) {
 vmode = (((VALUE)((int)(00)))<<1 | RUBY_FIXNUM_FLAG);
 vperm = (((VALUE)(0666))<<1 | RUBY_FIXNUM_FLAG);
    }
    else if (!!((VALUE)(v = rb_hash_aref(opt, sym_open_args)) != ((VALUE)RUBY_Qnil))) {
 int n;

 v = rb_to_array_type(v);
 n = rb_long2int_inline(rb_array_len(v));
 rb_check_arity(n, 0, 3);
 rb_scan_args(n, rb_array_const_ptr(v), "02:", &vmode, &vperm, &opt);
    }
    arg->io = rb_io_open(klass, path, vmode, vperm, opt);
}

static VALUE
io_s_foreach(struct getline_arg *arg)
{
    VALUE str;

    while (!!((VALUE)(str = rb_io_getline_1(arg->rs, arg->limit, arg->chomp, arg->io)) != ((VALUE)RUBY_Qnil))) {
 rb_lastline_set(str);
 rb_yield(str);
    }
    rb_lastline_set(((VALUE)RUBY_Qnil));
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_s_foreach(int argc, VALUE *argv, VALUE self)
{
    VALUE opt;
    int orig_argc = argc;
    struct foreach_arg arg;
    struct getline_arg garg;

    argc = rb_scan_args(argc, argv, "13:", ((void*)0), ((void*)0), ((void*)0), ((void*)0), &opt);
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((self), (rb_id2sym(rb_frame_this_func())), (orig_argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
    extract_getline_args(argc-1, argv+1, &garg);
    open_key_args(self, argc, argv, opt, &arg);
    if (!((VALUE)(arg.io) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    extract_getline_opts(opt, &garg);
    check_getline_args(&garg.rs, &garg.limit, garg.io = arg.io);
    return rb_ensure(io_s_foreach, (VALUE)&garg, rb_io_close, arg.io);
}

static VALUE
io_s_readlines(struct getline_arg *arg)
{
    return io_readlines(arg, arg->io);
}
static VALUE
rb_io_s_readlines(int argc, VALUE *argv, VALUE io)
{
    VALUE opt;
    struct foreach_arg arg;
    struct getline_arg garg;

    argc = rb_scan_args(argc, argv, "13:", ((void*)0), ((void*)0), ((void*)0), ((void*)0), &opt);
    extract_getline_args(argc-1, argv+1, &garg);
    open_key_args(io, argc, argv, opt, &arg);
    if (!((VALUE)(arg.io) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    extract_getline_opts(opt, &garg);
    check_getline_args(&garg.rs, &garg.limit, garg.io = arg.io);
    return rb_ensure(io_s_readlines, (VALUE)&garg, rb_io_close, arg.io);
}

static VALUE
io_s_read(struct foreach_arg *arg)
{
    return io_read(arg->argc, arg->argv, arg->io);
}

struct seek_arg {
    VALUE io;
    VALUE offset;
    int mode;
};

static VALUE
seek_before_access(VALUE argp)
{
    struct seek_arg *arg = (struct seek_arg *)argp;
    rb_io_binmode(arg->io);
    return rb_io_seek(arg->io, arg->offset, arg->mode);
}
static VALUE
rb_io_s_read(int argc, VALUE *argv, VALUE io)
{
    VALUE opt, offset;
    struct foreach_arg arg;

    argc = rb_scan_args(argc, argv, "13:", ((void*)0), ((void*)0), &offset, ((void*)0), &opt);
    open_key_args(io, argc, argv, opt, &arg);
    if (!((VALUE)(arg.io) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    if (!!((VALUE)(offset) != ((VALUE)RUBY_Qnil))) {
 struct seek_arg sarg;
 int state = 0;
 sarg.io = arg.io;
 sarg.offset = offset;
 sarg.mode = 0;
 rb_protect(seek_before_access, (VALUE)&sarg, &state);
 if (state) {
     rb_io_close(arg.io);
     rb_jump_tag(state);
 }
 if (arg.argc == 2) arg.argc = 1;
    }
    return rb_ensure(io_s_read, (VALUE)&arg, rb_io_close, arg.io);
}
static VALUE
rb_io_s_binread(int argc, VALUE *argv, VALUE io)
{
    VALUE offset;
    struct foreach_arg arg;
    enum {
 fmode = 0x00000001|0x00000004,
 oflags = 00



    };
    convconfig_t convconfig = {((void*)0), ((void*)0), 0, ((VALUE)RUBY_Qnil)};

    rb_scan_args(argc, argv, "12", ((void*)0), ((void*)0), &offset);
    ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(argv[0]); ; rb_gc_guarded_ptr; })) = rb_get_path(argv[0]));
    convconfig.enc = rb_ascii8bit_encoding();
    arg.io = rb_io_open_generic(io, argv[0], oflags, fmode, &convconfig, 0);
    if (!((VALUE)(arg.io) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    arg.argv = argv+1;
    arg.argc = (argc > 1) ? 1 : 0;
    if (!!((VALUE)(offset) != ((VALUE)RUBY_Qnil))) {
 struct seek_arg sarg;
 int state = 0;
 sarg.io = arg.io;
 sarg.offset = offset;
 sarg.mode = 0;
 rb_protect(seek_before_access, (VALUE)&sarg, &state);
 if (state) {
     rb_io_close(arg.io);
     rb_jump_tag(state);
 }
    }
    return rb_ensure(io_s_read, (VALUE)&arg, rb_io_close, arg.io);
}

static VALUE
io_s_write0(struct write_arg *arg)
{
    return io_write(arg->io,arg->str,arg->nosync);
}

static VALUE
io_s_write(int argc, VALUE *argv, VALUE klass, int binary)
{
    VALUE string, offset, opt;
    struct foreach_arg arg;
    struct write_arg warg;

    rb_scan_args(argc, argv, "21:", ((void*)0), &string, &offset, &opt);

    if (!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) opt = rb_hash_new();
    else opt = rb_hash_dup(opt);


    if (!((VALUE)(rb_hash_aref(opt,sym_mode)) != ((VALUE)RUBY_Qnil))) {
       int mode = 01|0100;



       if (!((VALUE)(offset) != ((VALUE)RUBY_Qnil))) mode |= 01000;
       rb_hash_aset(opt,sym_mode,(((VALUE)((int)(mode)))<<1 | RUBY_FIXNUM_FLAG));
    }
    open_key_args(klass, argc, argv, opt, &arg);


    if (binary) rb_io_binmode_m(arg.io);


    if (!((VALUE)(arg.io) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    if (!!((VALUE)(offset) != ((VALUE)RUBY_Qnil))) {
       struct seek_arg sarg;
       int state = 0;
       sarg.io = arg.io;
       sarg.offset = offset;
       sarg.mode = 0;
       rb_protect(seek_before_access, (VALUE)&sarg, &state);
       if (state) {
           rb_io_close(arg.io);
           rb_jump_tag(state);
       }
    }

    warg.io = arg.io;
    warg.str = string;
    warg.nosync = 0;

    return rb_ensure(io_s_write0, (VALUE)&warg, rb_io_close, arg.io);
}
static VALUE
rb_io_s_write(int argc, VALUE *argv, VALUE io)
{
    return io_s_write(argc, argv, io, 0);
}
static VALUE
rb_io_s_binwrite(int argc, VALUE *argv, VALUE io)
{
    return io_s_write(argc, argv, io, 1);
}

struct copy_stream_struct {
    VALUE src;
    VALUE dst;
    off_t copy_length;
    off_t src_offset;

    int src_fd;
    int dst_fd;
    int close_src;
    int close_dst;
    off_t total;
    const char *syserr;
    int error_no;
    const char *notimp;
    rb_fdset_t fds;
    VALUE th;
};

static void *
exec_interrupts(void *arg)
{
    VALUE th = (VALUE)arg;
    rb_thread_execute_interrupts(th);
    return ((void*)0);
}






static int
maygvl_copy_stream_continue_p(int has_gvl, struct copy_stream_struct *stp)
{
    switch ((*__errno_location ())) {
      case 4:

      case 85:

 if (rb_thread_interrupted(stp->th)) {
            if (has_gvl)
                rb_thread_execute_interrupts(stp->th);
            else
                rb_thread_call_with_gvl(exec_interrupts, (void *)stp->th);
        }
 return TRUE;
    }
    return FALSE;
}
static int
nogvl_wait_for_single_fd(int fd, short events)
{
    struct pollfd fds;

    fds.fd = fd;
    fds.events = events;

    return poll(&fds, 1, -1);
}

static int
maygvl_copy_stream_wait_read(int has_gvl, struct copy_stream_struct *stp)
{
    int ret;

    do {
 if (has_gvl) {
     ret = rb_wait_for_single_fd(stp->src_fd, 0x001, ((void*)0));
 }
 else {
     ret = nogvl_wait_for_single_fd(stp->src_fd, 0x001);
 }
    } while (ret == -1 && maygvl_copy_stream_continue_p(has_gvl, stp));

    if (ret == -1) {
        stp->syserr = "poll";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    return 0;
}
static int
nogvl_copy_stream_wait_write(struct copy_stream_struct *stp)
{
    int ret;

    do {

 ret = nogvl_wait_for_single_fd(stp->dst_fd, 0x004);





    } while (ret == -1 && maygvl_copy_stream_continue_p(0, stp));

    if (ret == -1) {
        stp->syserr = "poll";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    return 0;
}







static ssize_t
simple_copy_file_range(int in_fd, off_t *in_offset, int out_fd, off_t *out_offset, size_t count, unsigned int flags)
{
    return syscall(326, in_fd, in_offset, out_fd, out_offset, count, flags);
}

static int
nogvl_copy_file_range(struct copy_stream_struct *stp)
{
    struct stat src_stat, dst_stat;
    ssize_t ss;
    int ret;

    off_t copy_length, src_offset, *src_offset_ptr;

    ret = fstat(stp->src_fd, &src_stat);
    if (ret == -1) {
        stp->syserr = "fstat";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    if (!((((src_stat.st_mode)) & 0170000) == (0100000)))
        return 0;

    ret = fstat(stp->dst_fd, &dst_stat);
    if (ret == -1) {
        stp->syserr = "fstat";
        stp->error_no = (*__errno_location ());
        return -1;
    }

    src_offset = stp->src_offset;
    if (src_offset != (off_t)-1) {
 src_offset_ptr = &src_offset;
    }
    else {
 src_offset_ptr = ((void*)0);
    }

    copy_length = stp->copy_length;
    if (copy_length == (off_t)-1) {
 if (src_offset == (off_t)-1) {
     off_t current_offset;
            (*__errno_location ()) = 0;
            current_offset = lseek(stp->src_fd, 0, 1);
            if (current_offset == (off_t)-1 && (*__errno_location ())) {
                stp->syserr = "lseek";
                stp->error_no = (*__errno_location ());
                return -1;
            }
     copy_length = src_stat.st_size - current_offset;
 }
 else {
     copy_length = src_stat.st_size - src_offset;
 }
    }

  retry_copy_file_range:




    ss = (ssize_t)copy_length;

    ss = simple_copy_file_range(stp->src_fd, src_offset_ptr, stp->dst_fd, ((void*)0), ss, 0);
    if (0 < ss) {
        stp->total += ss;
        copy_length -= ss;
        if (0 < copy_length) {
            goto retry_copy_file_range;
        }
    }
    if (ss == -1) {
 if (maygvl_copy_stream_continue_p(0, stp)) {
            goto retry_copy_file_range;
 }
        switch ((*__errno_location ())) {
   case 22:
   case 1:


   case 38:


   case 18:

            return 0;
   case 11:



            if (nogvl_copy_stream_wait_write(stp) == -1)
                return -1;
            goto retry_copy_file_range;
   case 9:
     {
  int e = (*__errno_location ());
  int flags = fcntl(stp->dst_fd, 3);

  if (flags != -1 && flags & 02000) {
      return 0;
  }
  (*__errno_location ()) = e;
     }
        }
        stp->syserr = "copy_file_range";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    return 1;
}
extern ssize_t sendfile (int __out_fd, int __in_fd, off_t *__offset,
    size_t __count) ;
extern ssize_t sendfile64 (int __out_fd, int __in_fd, __off64_t *__offset,
      size_t __count) ;


static ssize_t
simple_sendfile(int out_fd, int in_fd, off_t *offset, off_t count)
{
    return sendfile(out_fd, in_fd, offset, (size_t)count);
}
static int
nogvl_copy_stream_sendfile(struct copy_stream_struct *stp)
{
    struct stat src_stat, dst_stat;
    ssize_t ss;
    int ret;

    off_t copy_length;
    off_t src_offset;
    int use_pread;

    ret = fstat(stp->src_fd, &src_stat);
    if (ret == -1) {
        stp->syserr = "fstat";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    if (!((((src_stat.st_mode)) & 0170000) == (0100000)))
        return 0;

    ret = fstat(stp->dst_fd, &dst_stat);
    if (ret == -1) {
        stp->syserr = "fstat";
        stp->error_no = (*__errno_location ());
        return -1;
    }





    src_offset = stp->src_offset;
    use_pread = src_offset != (off_t)-1;

    copy_length = stp->copy_length;
    if (copy_length == (off_t)-1) {
        if (use_pread)
            copy_length = src_stat.st_size - src_offset;
        else {
            off_t cur;
            (*__errno_location ()) = 0;
            cur = lseek(stp->src_fd, 0, 1);
            if (cur == (off_t)-1 && (*__errno_location ())) {
                stp->syserr = "lseek";
                stp->error_no = (*__errno_location ());
                return -1;
            }
            copy_length = src_stat.st_size - cur;
        }
    }

  retry_sendfile:




    ss = (ssize_t)copy_length;

    if (use_pread) {
        ss = simple_sendfile(stp->dst_fd, stp->src_fd, &src_offset, ss);
    }
    else {
        ss = simple_sendfile(stp->dst_fd, stp->src_fd, ((void*)0), ss);
    }
    if (0 < ss) {
        stp->total += ss;
        copy_length -= ss;
        if (0 < copy_length) {
            goto retry_sendfile;
        }
    }
    if (ss == -1) {
 if (maygvl_copy_stream_continue_p(0, stp))
     goto retry_sendfile;
        switch ((*__errno_location ())) {
   case 22:

   case 38:

            return 0;
   case 11:
            if (nogvl_copy_stream_wait_write(stp) == -1)
                return -1;
            goto retry_sendfile;
        }
        stp->syserr = "sendfile";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    return 1;
}


static ssize_t
maygvl_read(int has_gvl, int fd, void *buf, size_t count)
{
    if (has_gvl)
        return rb_read_internal(fd, buf, count);
    else
        return read(fd, buf, count);
}

static ssize_t
maygvl_copy_stream_read(int has_gvl, struct copy_stream_struct *stp, char *buf, size_t len, off_t offset)
{
    ssize_t ss;
  retry_read:
    if (offset == (off_t)-1) {
        ss = maygvl_read(has_gvl, stp->src_fd, buf, len);
    }
    else {

        ss = pread(stp->src_fd, buf, len, offset);




    }
    if (ss == 0) {
        return 0;
    }
    if (ss == -1) {
 if (maygvl_copy_stream_continue_p(has_gvl, stp))
     goto retry_read;
        switch ((*__errno_location ())) {
   case 11:



            if (maygvl_copy_stream_wait_read(has_gvl, stp) == -1)
                return -1;
            goto retry_read;

   case 38:
            stp->notimp = "pread";
            return -1;

        }
        stp->syserr = offset == (off_t)-1 ? "read": "pread";
        stp->error_no = (*__errno_location ());
        return -1;
    }
    return ss;
}

static int
nogvl_copy_stream_write(struct copy_stream_struct *stp, char *buf, size_t len)
{
    ssize_t ss;
    int off = 0;
    while (len) {
        ss = write(stp->dst_fd, buf+off, len);
        if (ss == -1) {
     if (maygvl_copy_stream_continue_p(0, stp))
  continue;
            if ((*__errno_location ()) == 11 || (*__errno_location ()) == 11) {
                if (nogvl_copy_stream_wait_write(stp) == -1)
                    return -1;
                continue;
            }
            stp->syserr = "write";
            stp->error_no = (*__errno_location ());
            return -1;
        }
        off += (int)ss;
        len -= (int)ss;
        stp->total += ss;
    }
    return 0;
}

static void
nogvl_copy_stream_read_write(struct copy_stream_struct *stp)
{
    char buf[1024*16];
    size_t len;
    ssize_t ss;
    int ret;
    off_t copy_length;
    int use_eof;
    off_t src_offset;
    int use_pread;

    copy_length = stp->copy_length;
    use_eof = copy_length == (off_t)-1;
    src_offset = stp->src_offset;
    use_pread = src_offset != (off_t)-1;

    if (use_pread && stp->close_src) {
        off_t r;
 (*__errno_location ()) = 0;
        r = lseek(stp->src_fd, src_offset, 0);
        if (r == (off_t)-1 && (*__errno_location ())) {
            stp->syserr = "lseek";
            stp->error_no = (*__errno_location ());
            return;
        }
        src_offset = (off_t)-1;
        use_pread = 0;
    }

    while (use_eof || 0 < copy_length) {
        if (!use_eof && copy_length < (off_t)sizeof(buf)) {
            len = (size_t)copy_length;
        }
        else {
            len = sizeof(buf);
        }
        if (use_pread) {
            ss = maygvl_copy_stream_read(0, stp, buf, len, src_offset);
            if (0 < ss)
                src_offset += ss;
        }
        else {
            ss = maygvl_copy_stream_read(0, stp, buf, len, (off_t)-1);
        }
        if (ss <= 0)
            return;

        ret = nogvl_copy_stream_write(stp, buf, ss);
        if (ret < 0)
            return;

        if (!use_eof)
            copy_length -= ss;
    }
}

static void *
nogvl_copy_stream_func(void *arg)
{
    struct copy_stream_struct *stp = (struct copy_stream_struct *)arg;

    int ret;



    ret = nogvl_copy_file_range(stp);
    if (ret != 0)
 goto finish;



    ret = nogvl_copy_stream_sendfile(stp);
    if (ret != 0)
        goto finish;


    nogvl_copy_stream_read_write(stp);


  finish:

    return 0;
}

static VALUE
copy_stream_fallback_body(VALUE arg)
{
    struct copy_stream_struct *stp = (struct copy_stream_struct *)arg;
    const int buflen = 16*1024;
    VALUE n;
    VALUE buf = rb_str_buf_new(buflen);
    off_t rest = stp->copy_length;
    off_t off = stp->src_offset;
    ID read_method = id_readpartial;

    if (stp->src_fd == -1) {
 if (!rb_respond_to(stp->src, read_method)) {
     read_method = id_read;
 }
    }

    while (1) {
        long numwrote;
        long l;
        if (stp->copy_length == (off_t)-1) {
            l = buflen;
        }
        else {
            if (rest == 0)
                break;
            l = buflen < rest ? buflen : (long)rest;
        }
        if (stp->src_fd == -1) {
            VALUE rc = rb_funcall(stp->src, read_method, 2, (((VALUE)(l))<<1 | RUBY_FIXNUM_FLAG), buf);

            if (read_method == id_read && !((VALUE)(rc) != ((VALUE)RUBY_Qnil)))
                break;
        }
        else {
            ssize_t ss;
            rb_str_resize(buf, buflen);
            ss = maygvl_copy_stream_read(1, stp, (!(((struct RBasic*)(buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(buf))->as.ary : ((struct RString*)(buf))->as.heap.ptr), l, off);
            rb_str_resize(buf, ss > 0 ? ss : 0);
            if (ss == -1)
                return ((VALUE)RUBY_Qnil);
            if (ss == 0)
                rb_eof_error();
            if (off != (off_t)-1)
                off += ss;
        }
        n = rb_io_write(stp->dst, buf);
        numwrote = rb_num2long_inline(n);
        stp->total += numwrote;
        rest -= numwrote;
 if (read_method == id_read && (!(((struct RBasic*)(buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(buf))->as.heap.len) == 0) {
     break;
 }
    }

    return ((VALUE)RUBY_Qnil);
}

static VALUE
copy_stream_fallback(struct copy_stream_struct *stp)
{
    if (stp->src_fd == -1 && stp->src_offset != (off_t)-1) {
 rb_raise(rb_eArgError, "cannot specify src_offset for non-IO");
    }
    rb_rescue2(copy_stream_fallback_body, (VALUE)stp,
               (VALUE (*) ())0, (VALUE)0,
               rb_eEOFError, (VALUE)0);
    return ((VALUE)RUBY_Qnil);
}

static VALUE
copy_stream_body(VALUE arg)
{
    struct copy_stream_struct *stp = (struct copy_stream_struct *)arg;
    VALUE src_io = stp->src, dst_io = stp->dst;
    rb_io_t *src_fptr = 0, *dst_fptr = 0;
    int src_fd, dst_fd;
    const int common_oflags = 0

 | 0400

 ;

    stp->th = rb_thread_current();

    stp->total = 0;

    if (src_io == argf ||
 !(( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(src_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((src_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((src_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((src_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((src_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(src_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(src_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_FILE))) ||
   ( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(src_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((src_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((src_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((src_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((src_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(src_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(src_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) ||
   rb_respond_to(src_io, (__builtin_constant_p("to_path") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_path")), (long)strlen(("to_path"))); (ID) rb_intern_id_cache; }) : rb_intern("to_path"))))) {
 src_fd = -1;
    }
    else {
 VALUE tmp_io = rb_io_check_io(src_io);
 if (!!((VALUE)(tmp_io) != ((VALUE)RUBY_Qnil))) {
     src_io = tmp_io;
 }
 else if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(src_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((src_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((src_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((src_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((src_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(src_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(src_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(src_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src_io))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
     VALUE args[2];
     ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(src_io); ; rb_gc_guarded_ptr; })) = rb_get_path(src_io));
     args[0] = src_io;
     args[1] = (((VALUE)((int)(00|common_oflags)))<<1 | RUBY_FIXNUM_FLAG);
     src_io = rb_class_new_instance(2, args, rb_cFile);
     stp->src = src_io;
     stp->close_src = 1;
 }
 rb_io_check_closed((src_fptr) = ((struct RFile*)(rb_io_taint_check(src_io)))->fptr);
 rb_io_check_byte_readable(src_fptr);
 src_fd = src_fptr->fd;
    }
    stp->src_fd = src_fd;

    if (dst_io == argf ||
 !(( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(dst_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((dst_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((dst_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((dst_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((dst_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(dst_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(dst_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_FILE))) ||
   ( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(dst_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((dst_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((dst_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((dst_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((dst_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(dst_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(dst_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) ||
   rb_respond_to(dst_io, (__builtin_constant_p("to_path") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("to_path")), (long)strlen(("to_path"))); (ID) rb_intern_id_cache; }) : rb_intern("to_path"))))) {
 dst_fd = -1;
    }
    else {
 VALUE tmp_io = rb_io_check_io(dst_io);
 if (!!((VALUE)(tmp_io) != ((VALUE)RUBY_Qnil))) {
     dst_io = rb_io_get_write_io(tmp_io);
 }
 else if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(dst_io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((dst_io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((dst_io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((dst_io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((dst_io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(dst_io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(dst_io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(dst_io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst_io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst_io))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
     VALUE args[3];
     ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(dst_io); ; rb_gc_guarded_ptr; })) = rb_get_path(dst_io));
     args[0] = dst_io;
     args[1] = (((VALUE)((int)(01|0100|01000|common_oflags)))<<1 | RUBY_FIXNUM_FLAG);
     args[2] = (((VALUE)(0666))<<1 | RUBY_FIXNUM_FLAG);
     dst_io = rb_class_new_instance(3, args, rb_cFile);
     stp->dst = dst_io;
     stp->close_dst = 1;
 }
 else {
     dst_io = rb_io_get_write_io(dst_io);
     stp->dst = dst_io;
 }
 rb_io_check_closed((dst_fptr) = ((struct RFile*)(rb_io_taint_check(dst_io)))->fptr);
 rb_io_check_writable(dst_fptr);
 dst_fd = dst_fptr->fd;
    }
    stp->dst_fd = dst_fd;





    if (dst_fptr)
 io_ascii8bit_binmode(dst_fptr);

    if (stp->src_offset == (off_t)-1 && src_fptr && src_fptr->rbuf.len) {
        size_t len = src_fptr->rbuf.len;
        VALUE str;
        if (stp->copy_length != (off_t)-1 && stp->copy_length < (off_t)len) {
            len = (size_t)stp->copy_length;
        }
        str = rb_str_buf_new(len);
        rb_str_resize(str,len);
        read_buffered_data((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), len, src_fptr);
        if (dst_fptr) {
            if (io_binwrite(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), dst_fptr, 0) < 0)
                rb_sys_fail(0);
        }
        else
     rb_io_write(dst_io, str);
        stp->total += len;
        if (stp->copy_length != (off_t)-1)
            stp->copy_length -= len;
    }

    if (dst_fptr && io_fflush(dst_fptr) < 0) {
 rb_raise(rb_eIOError, "flush failed");
    }

    if (stp->copy_length == 0)
        return ((VALUE)RUBY_Qnil);

    if (src_fd == -1 || dst_fd == -1) {
        return copy_stream_fallback(stp);
    }

    rb_fd_set(src_fd, &stp->fds);
    rb_fd_set(dst_fd, &stp->fds);

    rb_thread_call_without_gvl(nogvl_copy_stream_func, (void*)stp, ((rb_unblock_function_t *)-1), 0);
    return ((VALUE)RUBY_Qnil);
}

static VALUE
copy_stream_finalize(VALUE arg)
{
    struct copy_stream_struct *stp = (struct copy_stream_struct *)arg;
    if (stp->close_src) {
        rb_io_close_m(stp->src);
    }
    if (stp->close_dst) {
        rb_io_close_m(stp->dst);
    }
    rb_fd_term(&stp->fds);
    if (stp->syserr) {
        rb_syserr_fail(stp->error_no, stp->syserr);
    }
    if (stp->notimp) {
 rb_raise(rb_eNotImpError, "%s() not implemented", stp->notimp);
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_io_s_copy_stream(int argc, VALUE *argv, VALUE io)
{
    VALUE src, dst, length, src_offset;
    struct copy_stream_struct st;

    memset((&st), 0, sizeof(struct copy_stream_struct)*(size_t)(1));

    rb_scan_args(argc, argv, "22", &src, &dst, &length, &src_offset);

    st.src = src;
    st.dst = dst;

    if (!((VALUE)(length) != ((VALUE)RUBY_Qnil)))
        st.copy_length = (off_t)-1;
    else
        st.copy_length = rb_num2long_inline(length);

    if (!((VALUE)(src_offset) != ((VALUE)RUBY_Qnil)))
        st.src_offset = (off_t)-1;
    else
        st.src_offset = rb_num2long_inline(src_offset);

    rb_fd_init(&st.fds);
    rb_ensure(copy_stream_body, (VALUE)&st, copy_stream_finalize, (VALUE)&st);

    return rb_long2num_inline(st.total);
}
static VALUE
rb_io_external_encoding(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (fptr->encs.enc2) {
 return rb_enc_from_encoding(fptr->encs.enc2);
    }
    if (fptr->mode & 0x00000002) {
 if (fptr->encs.enc)
     return rb_enc_from_encoding(fptr->encs.enc);
 return ((VALUE)RUBY_Qnil);
    }
    return rb_enc_from_encoding(io_read_encoding(fptr));
}
static VALUE
rb_io_internal_encoding(VALUE io)
{
    rb_io_t *fptr;

    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    if (!fptr->encs.enc2) return ((VALUE)RUBY_Qnil);
    return rb_enc_from_encoding(io_read_encoding(fptr));
}
static VALUE
rb_io_set_encoding(int argc, VALUE *argv, VALUE io)
{
    rb_io_t *fptr;
    VALUE v1, v2, opt;

    if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)(io))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? ((io) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? ((io) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? ((io) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? ((io) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)(io)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)(io))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(io) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(io) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(io))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
        return rb_funcallv(io, id_set_encoding, argc, argv);
    }

    argc = rb_scan_args(argc, argv, "11:", &v1, &v2, &opt);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check(io)))->fptr);
    io_encoding_set(fptr, v1, v2, opt);
    return io;
}

void
rb_stdio_set_default_encoding(void)
{
    VALUE val = ((VALUE)RUBY_Qnil);

    rb_io_set_encoding(1, &val, rb_stdin);
    rb_io_set_encoding(1, &val, rb_stdout);
    rb_io_set_encoding(1, &val, rb_stderr);
}

static inline int
global_argf_p(VALUE arg)
{
    return arg == argf;
}
static VALUE
argf_external_encoding(VALUE argf)
{
    if (!!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 return rb_enc_from_encoding(rb_default_external_encoding());
    }
    return rb_io_external_encoding(rb_io_check_io((*(struct argf *)(((struct RData*)(argf))->data)).current_file));
}
static VALUE
argf_internal_encoding(VALUE argf)
{
    if (!!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 return rb_enc_from_encoding(rb_default_external_encoding());
    }
    return rb_io_internal_encoding(rb_io_check_io((*(struct argf *)(((struct RData*)(argf))->data)).current_file));
}
static VALUE
argf_set_encoding(int argc, VALUE *argv, VALUE argf)
{
    rb_io_t *fptr;

    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream to set encoding");
    }
    rb_io_set_encoding(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    rb_io_check_closed((fptr) = ((struct RFile*)(rb_io_taint_check((*(struct argf *)(((struct RData*)(argf))->data)).current_file)))->fptr);
    (*(struct argf *)(((struct RData*)(argf))->data)).encs = fptr->encs;
    return argf;
}
static VALUE
argf_tell(VALUE argf)
{
    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream to tell");
    }
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    return rb_io_tell((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
}
static VALUE
argf_seek_m(int argc, VALUE *argv, VALUE argf)
{
    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream to seek");
    }
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((argc), (argv), argf);} while (0);
    return rb_io_seek_m(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file);
}
static VALUE
argf_set_pos(VALUE argf, VALUE offset)
{
    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream to set position");
    }
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((1), (&offset), argf);} while (0);
    return rb_io_set_pos((*(struct argf *)(((struct RData*)(argf))->data)).current_file, offset);
}
static VALUE
argf_rewind(VALUE argf)
{
    VALUE ret;
    int old_lineno;

    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream to rewind");
    }
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    old_lineno = ((struct RFile*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->fptr->lineno;
    ret = rb_io_rewind((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    if (!global_argf_p(argf)) {
 (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = (*(struct argf *)(((struct RData*)(argf))->data)).lineno -= old_lineno;
    }
    return ret;
}
static VALUE
argf_fileno(VALUE argf)
{
    if (!argf_next_argv(argf)) {
 rb_raise(rb_eArgError, "no stream");
    }
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    return rb_io_fileno((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
}
static VALUE
argf_to_io(VALUE argf)
{
    argf_next_argv(argf);
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    return (*(struct argf *)(((struct RData*)(argf))->data)).current_file;
}
static VALUE
argf_eof(VALUE argf)
{
    argf_next_argv(argf);
    if (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p == 0) return ((VALUE)RUBY_Qtrue);
 argf_next_argv(argf);
 do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
 if (rb_io_eof((*(struct argf *)(((struct RData*)(argf))->data)).current_file)) {
     return ((VALUE)RUBY_Qtrue);
 }
    }
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
argf_read(int argc, VALUE *argv, VALUE argf)
{
    VALUE tmp, str, length;
    long len = 0;

    rb_scan_args(argc, argv, "02", &length, &str);
    if (!!((VALUE)(length) != ((VALUE)RUBY_Qnil))) {
 len = rb_num2long_inline(argv[0]);
    }
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 rb_string_value(&(str));
 rb_str_resize(str,0);
 argv[1] = ((VALUE)RUBY_Qnil);
    }

  retry:
    if (!argf_next_argv(argf)) {
 return str;
    }
    if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) {
 tmp = argf_forward(argc, argv, argf);
    }
    else {
 tmp = io_read(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    }
    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) str = tmp;
    else if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) rb_str_append(str, tmp);
    if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil)) || !((VALUE)(length) != ((VALUE)RUBY_Qnil))) {
 if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
     argf_close(argf);
     (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
     goto retry;
 }
    }
    else if (argc >= 1) {
 long slen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 if (slen < len) {
     len -= slen;
     argv[0] = (((VALUE)((int)(len)))<<1 | RUBY_FIXNUM_FLAG);
     goto retry;
 }
    }
    return str;
}

struct argf_call_arg {
    int argc;
    VALUE *argv;
    VALUE argf;
};

static VALUE
argf_forward_call(VALUE arg)
{
    struct argf_call_arg *p = (struct argf_call_arg *)arg;
    argf_forward(p->argc, p->argv, p->argf);
    return ((VALUE)RUBY_Qnil);
}

static VALUE argf_getpartial(int argc, VALUE *argv, VALUE argf, VALUE opts,
                             int nonblock);
static VALUE
argf_readpartial(int argc, VALUE *argv, VALUE argf)
{
    return argf_getpartial(argc, argv, argf, ((VALUE)RUBY_Qnil), 0);
}
static VALUE
argf_read_nonblock(int argc, VALUE *argv, VALUE argf)
{
    VALUE opts;

    rb_scan_args(argc, argv, "11:", ((void*)0), ((void*)0), &opts);

    if (!!((VALUE)(opts) != ((VALUE)RUBY_Qnil)))
        argc--;

    return argf_getpartial(argc, argv, argf, opts, 1);
}

static VALUE
argf_getpartial(int argc, VALUE *argv, VALUE argf, VALUE opts, int nonblock)
{
    VALUE tmp, str, length;

    rb_scan_args(argc, argv, "11", &length, &str);
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
        rb_string_value(&(str));
        argv[1] = str;
    }

    if (!argf_next_argv(argf)) {
 if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
     rb_str_resize(str, 0);
 }
        rb_eof_error();
    }
    if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) {
 struct argf_call_arg arg;
 arg.argc = argc;
 arg.argv = argv;
 arg.argf = argf;
 tmp = rb_rescue2(argf_forward_call, (VALUE)&arg,
    ((VALUE (*)())(0)), ((VALUE)RUBY_Qnil), rb_eEOFError, (VALUE)0);
    }
    else {
        tmp = io_getpartial(argc, argv, (*(struct argf *)(((struct RData*)(argf))->data)).current_file, opts, nonblock);
    }
    if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
        if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p == -1) {
     return io_nonblock_eof(opts);
        }
        argf_close(argf);
        (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
        if (rb_array_len((*(struct argf *)(((struct RData*)(argf))->data)).argv) == 0) {
     return io_nonblock_eof(opts);
 }
        if (!((VALUE)(str) != ((VALUE)RUBY_Qnil)))
            str =  ({ (__builtin_constant_p(((void*)0)) && __builtin_constant_p(0)) ? rb_str_new_static((((void*)0)), (0)) : rb_str_new((((void*)0)), (0)); });
        return str;
    }
    return tmp;
}
static VALUE
argf_getc(VALUE argf)
{
    VALUE ch;

  retry:
    if (!argf_next_argv(argf)) return ((VALUE)RUBY_Qnil);
    if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) {
 ch = rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, (__builtin_constant_p("getc") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("getc")), (long)strlen(("getc"))); (ID) rb_intern_id_cache; }) : rb_intern("getc")), 0, 0);
    }
    else {
 ch = rb_io_getc((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    }
    if (!((VALUE)(ch) != ((VALUE)RUBY_Qnil)) && (*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
 argf_close(argf);
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 goto retry;
    }

    return ch;
}
static VALUE
argf_getbyte(VALUE argf)
{
    VALUE ch;

  retry:
    if (!argf_next_argv(argf)) return ((VALUE)RUBY_Qnil);
    if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
 ch = rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, (__builtin_constant_p("getbyte") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("getbyte")), (long)strlen(("getbyte"))); (ID) rb_intern_id_cache; }) : rb_intern("getbyte")), 0, 0);
    }
    else {
 ch = rb_io_getbyte((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    }
    if (!((VALUE)(ch) != ((VALUE)RUBY_Qnil)) && (*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
 argf_close(argf);
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 goto retry;
    }

    return ch;
}
static VALUE
argf_readchar(VALUE argf)
{
    VALUE ch;

  retry:
    if (!argf_next_argv(argf)) rb_eof_error();
    if (!( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE)))) {
 ch = rb_funcallv_public((*(struct argf *)(((struct RData*)(argf))->data)).current_file, (__builtin_constant_p("getc") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("getc")), (long)strlen(("getc"))); (ID) rb_intern_id_cache; }) : rb_intern("getc")), 0, 0);
    }
    else {
 ch = rb_io_getc((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    }
    if (!((VALUE)(ch) != ((VALUE)RUBY_Qnil)) && (*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
 argf_close(argf);
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
 goto retry;
    }

    return ch;
}
static VALUE
argf_readbyte(VALUE argf)
{
    VALUE c;

    do { if (!argf_next_argv(argf)) return ((VALUE)RUBY_Qnil); do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward(((0)), ((0)), argf);} while (0);} while (0);
    c = argf_getbyte(argf);
    if (!((VALUE)(c) != ((VALUE)RUBY_Qnil))) {
 rb_eof_error();
    }
    return c;
}



static VALUE
argf_block_call_i(VALUE i, VALUE argf, int argc, const VALUE *argv, VALUE blockarg)
{
    const VALUE current = (*(struct argf *)(((struct RData*)(argf))->data)).current_file;
    rb_yield_values2(argc, argv);
    if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p == -1 || current != (*(struct argf *)(((struct RData*)(argf))->data)).current_file) {
 rb_iter_break_value(((VALUE)RUBY_Qundef));
    }
    return ((VALUE)RUBY_Qnil);
}

static void
argf_block_call(ID mid, int argc, VALUE *argv, VALUE argf)
{
    VALUE ret = rb_block_call((*(struct argf *)(((struct RData*)(argf))->data)).current_file, mid, argc, argv, argf_block_call_i, argf);
    if (ret != ((VALUE)RUBY_Qundef)) (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
}

static VALUE
argf_block_call_line_i(VALUE i, VALUE argf, int argc, const VALUE *argv, VALUE blockarg)
{
    if (!global_argf_p(argf)) {
 (*(struct argf *)(((struct RData*)(argf))->data)).last_lineno = ++(*(struct argf *)(((struct RData*)(argf))->data)).lineno;
    }
    return argf_block_call_i(i, argf, argc, argv, blockarg);
}

static void
argf_block_call_line(ID mid, int argc, VALUE *argv, VALUE argf)
{
    VALUE ret = rb_block_call((*(struct argf *)(((struct RData*)(argf))->data)).current_file, mid, argc, argv, argf_block_call_line_i, argf);
    if (ret != ((VALUE)RUBY_Qundef)) (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
}
static VALUE
argf_each_line(int argc, VALUE *argv, VALUE argf)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((argf), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
    while (argf_next_argv(argf)) {
 argf_block_call_line((__builtin_constant_p("each_line") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_line")), (long)strlen(("each_line"))); (ID) rb_intern_id_cache; }) : rb_intern("each_line")), argc, argv, argf);
    }
    return argf;
}





static VALUE
argf_lines(int argc, VALUE *argv, VALUE argf)
{
    rb_warn("ARGF#lines is deprecated; use #each_line instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(argf, (rb_id2sym((__builtin_constant_p("each_line") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_line")), (long)strlen(("each_line"))); (ID) rb_intern_id_cache; }) : rb_intern("each_line")))), argc, argv);
    return argf_each_line(argc, argv, argf);
}
static VALUE
argf_each_byte(VALUE argf)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((argf), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    while (argf_next_argv(argf)) {
 argf_block_call((__builtin_constant_p("each_byte") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_byte")), (long)strlen(("each_byte"))); (ID) rb_intern_id_cache; }) : rb_intern("each_byte")), 0, 0, argf);
    }
    return argf;
}





static VALUE
argf_bytes(VALUE argf)
{
    rb_warn("ARGF#bytes is deprecated; use #each_byte instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(argf, (rb_id2sym((__builtin_constant_p("each_byte") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_byte")), (long)strlen(("each_byte"))); (ID) rb_intern_id_cache; }) : rb_intern("each_byte")))), 0, 0);
    return argf_each_byte(argf);
}
static VALUE
argf_each_char(VALUE argf)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((argf), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    while (argf_next_argv(argf)) {
 argf_block_call((__builtin_constant_p("each_char") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_char")), (long)strlen(("each_char"))); (ID) rb_intern_id_cache; }) : rb_intern("each_char")), 0, 0, argf);
    }
    return argf;
}





static VALUE
argf_chars(VALUE argf)
{
    rb_warn("ARGF#chars is deprecated; use #each_char instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(argf, (rb_id2sym((__builtin_constant_p("each_char") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_char")), (long)strlen(("each_char"))); (ID) rb_intern_id_cache; }) : rb_intern("each_char")))), 0, 0);
    return argf_each_char(argf);
}
static VALUE
argf_each_codepoint(VALUE argf)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((argf), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);
    while (argf_next_argv(argf)) {
 argf_block_call((__builtin_constant_p("each_codepoint") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_codepoint")), (long)strlen(("each_codepoint"))); (ID) rb_intern_id_cache; }) : rb_intern("each_codepoint")), 0, 0, argf);
    }
    return argf;
}





static VALUE
argf_codepoints(VALUE argf)
{
    rb_warn("ARGF#codepoints is deprecated; use #each_codepoint instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(argf, (rb_id2sym((__builtin_constant_p("each_codepoint") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_codepoint")), (long)strlen(("each_codepoint"))); (ID) rb_intern_id_cache; }) : rb_intern("each_codepoint")))), 0, 0);
    return argf_each_codepoint(argf);
}
static VALUE
argf_filename(VALUE argf)
{
    argf_next_argv(argf);
    return (*(struct argf *)(((struct RData*)(argf))->data)).filename;
}

static VALUE
argf_filename_getter(ID id, VALUE *var)
{
    return argf_filename(*var);
}
static VALUE
argf_file(VALUE argf)
{
    argf_next_argv(argf);
    return (*(struct argf *)(((struct RData*)(argf))->data)).current_file;
}
static VALUE
argf_binmode_m(VALUE argf)
{
    (*(struct argf *)(((struct RData*)(argf))->data)).binmode = 1;
    argf_next_argv(argf);
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    rb_io_ascii8bit_binmode((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
    return argf;
}
static VALUE
argf_binmode_p(VALUE argf)
{
    return (*(struct argf *)(((struct RData*)(argf))->data)).binmode ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static VALUE
argf_skip(VALUE argf)
{
    if ((*(struct argf *)(((struct RData*)(argf))->data)).init_p && (*(struct argf *)(((struct RData*)(argf))->data)).next_p == 0) {
 argf_close(argf);
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
    }
    return argf;
}
static VALUE
argf_close_m(VALUE argf)
{
    argf_next_argv(argf);
    argf_close(argf);
    if ((*(struct argf *)(((struct RData*)(argf))->data)).next_p != -1) {
 (*(struct argf *)(((struct RData*)(argf))->data)).next_p = 1;
    }
    (*(struct argf *)(((struct RData*)(argf))->data)).lineno = 0;
    return argf;
}
static VALUE
argf_closed(VALUE argf)
{
    argf_next_argv(argf);
    do { if (((*(struct argf *)(((struct RData*)(argf))->data)).current_file == rb_stdin && !( ((RUBY_T_FILE) == RUBY_T_FIXNUM) ? (((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FIXNUM_FLAG) : ((RUBY_T_FILE) == RUBY_T_TRUE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_FILE) == RUBY_T_FALSE) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_FILE) == RUBY_T_NIL) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_FILE) == RUBY_T_UNDEF) ? (((*(struct argf *)(((struct RData*)(argf))->data)).current_file) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_FILE) == RUBY_T_SYMBOL) ? ((((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_FILE) == RUBY_T_FLOAT) ? ( ((((int)(long)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).current_file))->flags & RUBY_T_MASK) == (RUBY_T_FILE))))) return argf_forward((0), (0), argf);} while (0);
    return rb_io_closed((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
}







static VALUE
argf_to_s(VALUE argf)
{
    return  ({ (__builtin_constant_p("ARGF")) ? rb_str_new_static(("ARGF"), (long)strlen("ARGF")) : rb_str_new_cstr("ARGF"); });
}
static VALUE
argf_inplace_mode_get(VALUE argf)
{
    if (!(*(struct argf *)(((struct RData*)(argf))->data)).inplace) return ((VALUE)RUBY_Qnil);
    if (!((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).inplace) != ((VALUE)RUBY_Qnil))) return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    return rb_str_dup((*(struct argf *)(((struct RData*)(argf))->data)).inplace);
}

static VALUE
opt_i_get(ID id, VALUE *var)
{
    return argf_inplace_mode_get(*var);
}
static VALUE
argf_inplace_mode_set(VALUE argf, VALUE val)
{
    if (rb_safe_level() >= 1 && (!!((!(((VALUE)((val)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((val)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((val)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((val))))->flags&((RUBY_FL_TAINT))):0)))
 rb_insecure_operation();

    if (!!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 (*(struct argf *)(((struct RData*)(argf))->data)).inplace = ((VALUE)RUBY_Qfalse);
    }
    else if (rb_string_value_cstr(&(val)), !(!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(val))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(val))->as.heap.len)) {
 (*(struct argf *)(((struct RData*)(argf))->data)).inplace = ((VALUE)RUBY_Qnil);
    }
    else {
 (*(struct argf *)(((struct RData*)(argf))->data)).inplace = rb_str_new_frozen(val);
    }
    return argf;
}

static void
opt_i_set(VALUE val, ID id, VALUE *var)
{
    argf_inplace_mode_set(*var, val);
}

const char *
ruby_get_inplace_mode(void)
{
    return (!(((struct RBasic*)((*(struct argf *)(((struct RData*)(argf))->data)).inplace))->flags & RSTRING_NOEMBED) ? ((struct RString*)((*(struct argf *)(((struct RData*)(argf))->data)).inplace))->as.ary : ((struct RString*)((*(struct argf *)(((struct RData*)(argf))->data)).inplace))->as.heap.ptr);
}

void
ruby_set_inplace_mode(const char *suffix)
{
    (*(struct argf *)(((struct RData*)(argf))->data)).inplace = !suffix ? ((VALUE)RUBY_Qfalse) : !*suffix ? ((VALUE)RUBY_Qnil) :  ({ (__builtin_constant_p(suffix)) ? rb_fstring_new((suffix), (long)strlen(suffix)) : rb_fstring_cstr(suffix); });
}
static VALUE
argf_argv(VALUE argf)
{
    return (*(struct argf *)(((struct RData*)(argf))->data)).argv;
}

static VALUE
argf_argv_getter(ID id, VALUE *var)
{
    return argf_argv(*var);
}

VALUE
rb_get_argv(void)
{
    return (*(struct argf *)(((struct RData*)(argf))->data)).argv;
}
static VALUE
argf_write_io(VALUE argf)
{
    if (!!(((VALUE)((*(struct argf *)(((struct RData*)(argf))->data)).current_file) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 rb_raise(rb_eIOError, "not opened for writing");
    }
    return rb_io_get_write_io((*(struct argf *)(((struct RData*)(argf))->data)).current_file);
}







static VALUE
argf_write(VALUE argf, VALUE str)
{
    return rb_io_write(argf_write_io(argf), str);
}

void
rb_readwrite_sys_fail(enum rb_io_wait_readwrite writable, const char *mesg)
{
    rb_readwrite_syserr_fail(writable, (*__errno_location ()), mesg);
}

void
rb_readwrite_syserr_fail(enum rb_io_wait_readwrite writable, int n, const char *mesg)
{
    VALUE arg;
    arg = mesg ?  ({ (__builtin_constant_p(mesg)) ? rb_str_new_static((mesg), (long)strlen(mesg)) : rb_str_new_cstr(mesg); }) : ((VALUE)RUBY_Qnil);
    if (writable == RB_IO_WAIT_WRITABLE) {
 switch (n) {
   case 11:
     rb_exc_raise(rb_class_new_instance(1, &arg, rb_eEAGAINWaitWritable));
     break;





   case 115:
     rb_exc_raise(rb_class_new_instance(1, &arg, rb_eEINPROGRESSWaitWritable));
     break;
   default:
     rb_mod_sys_fail_str(rb_mWaitWritable, arg);
 }
    }
    else if (writable == RB_IO_WAIT_READABLE) {
 switch (n) {
   case 11:
     rb_exc_raise(rb_class_new_instance(1, &arg, rb_eEAGAINWaitReadable));
     break;





   case 115:
     rb_exc_raise(rb_class_new_instance(1, &arg, rb_eEINPROGRESSWaitReadable));
     break;
   default:
     rb_mod_sys_fail_str(rb_mWaitReadable, arg);
 }
    }
    else {
 rb_bug("invalid read/write type passed to rb_readwrite_sys_fail: %d", writable);
    }
}
void
Init_IO(void)
{



    VALUE rb_cARGF;
    rb_eIOError = rb_define_class("IOError", rb_eStandardError);
    rb_eEOFError = rb_define_class("EOFError", rb_eIOError);

    id_write = (__builtin_constant_p("write") ?  (rb_intern2(("write"), (long)strlen("write"))) : (rb_intern)("write"));
    id_read = (__builtin_constant_p("read") ?  (rb_intern2(("read"), (long)strlen("read"))) : (rb_intern)("read"));
    id_getc = (__builtin_constant_p("getc") ?  (rb_intern2(("getc"), (long)strlen("getc"))) : (rb_intern)("getc"));
    id_flush = (__builtin_constant_p("flush") ?  (rb_intern2(("flush"), (long)strlen("flush"))) : (rb_intern)("flush"));
    id_readpartial = (__builtin_constant_p("readpartial") ?  (rb_intern2(("readpartial"), (long)strlen("readpartial"))) : (rb_intern)("readpartial"));
    id_set_encoding = (__builtin_constant_p("set_encoding") ?  (rb_intern2(("set_encoding"), (long)strlen("set_encoding"))) : (rb_intern)("set_encoding"));

    rb_define_global_function("syscall", rb_f_syscall, -1);

    rb_define_global_function("open", rb_f_open, -1);
    rb_define_global_function("printf", rb_f_printf, -1);
    rb_define_global_function("print", rb_f_print, -1);
    rb_define_global_function("putc", rb_f_putc, 1);
    rb_define_global_function("puts", rb_f_puts, -1);
    rb_define_global_function("gets", rb_f_gets, -1);
    rb_define_global_function("readline", rb_f_readline, -1);
    rb_define_global_function("select", rb_f_select, -1);

    rb_define_global_function("readlines", rb_f_readlines, -1);

    rb_define_global_function("`", rb_f_backquote, 1);

    rb_define_global_function("p", rb_f_p, -1);
    rb_define_method(rb_mKernel, "display", rb_obj_display, -1);

    rb_cIO = rb_define_class("IO", rb_cObject);
    rb_include_module(rb_cIO, rb_mEnumerable);

    rb_mWaitReadable = rb_define_module_under(rb_cIO, "WaitReadable");
    rb_mWaitWritable = rb_define_module_under(rb_cIO, "WaitWritable");
    rb_eEAGAINWaitReadable = rb_define_class_under(rb_cIO, "EAGAINWaitReadable", rb_eEAGAIN);
    rb_include_module(rb_eEAGAINWaitReadable, rb_mWaitReadable);
    rb_eEAGAINWaitWritable = rb_define_class_under(rb_cIO, "EAGAINWaitWritable", rb_eEAGAIN);
    rb_include_module(rb_eEAGAINWaitWritable, rb_mWaitWritable);

    rb_eEWOULDBLOCKWaitReadable = rb_eEAGAINWaitReadable;

    rb_define_const(rb_cIO, "EWOULDBLOCKWaitReadable", rb_eEAGAINWaitReadable);
    rb_eEWOULDBLOCKWaitWritable = rb_eEAGAINWaitWritable;

    rb_define_const(rb_cIO, "EWOULDBLOCKWaitWritable", rb_eEAGAINWaitWritable);






    rb_eEINPROGRESSWaitReadable = rb_define_class_under(rb_cIO, "EINPROGRESSWaitReadable", rb_eEINPROGRESS);
    rb_include_module(rb_eEINPROGRESSWaitReadable, rb_mWaitReadable);
    rb_eEINPROGRESSWaitWritable = rb_define_class_under(rb_cIO, "EINPROGRESSWaitWritable", rb_eEINPROGRESS);
    rb_include_module(rb_eEINPROGRESSWaitWritable, rb_mWaitWritable);






    rb_define_alloc_func(rb_cIO, io_alloc);
    rb_define_singleton_method(rb_cIO, "new", rb_io_s_new, -1);
    rb_define_singleton_method(rb_cIO, "open", rb_io_s_open, -1);
    rb_define_singleton_method(rb_cIO, "sysopen", rb_io_s_sysopen, -1);
    rb_define_singleton_method(rb_cIO, "for_fd", rb_io_s_for_fd, -1);
    rb_define_singleton_method(rb_cIO, "popen", rb_io_s_popen, -1);
    rb_define_singleton_method(rb_cIO, "foreach", rb_io_s_foreach, -1);
    rb_define_singleton_method(rb_cIO, "readlines", rb_io_s_readlines, -1);
    rb_define_singleton_method(rb_cIO, "read", rb_io_s_read, -1);
    rb_define_singleton_method(rb_cIO, "binread", rb_io_s_binread, -1);
    rb_define_singleton_method(rb_cIO, "write", rb_io_s_write, -1);
    rb_define_singleton_method(rb_cIO, "binwrite", rb_io_s_binwrite, -1);
    rb_define_singleton_method(rb_cIO, "select", rb_f_select, -1);
    rb_define_singleton_method(rb_cIO, "pipe", rb_io_s_pipe, -1);
    rb_define_singleton_method(rb_cIO, "try_convert", rb_io_s_try_convert, 1);
    rb_define_singleton_method(rb_cIO, "copy_stream", rb_io_s_copy_stream, -1);

    rb_define_method(rb_cIO, "initialize", rb_io_initialize, -1);

    rb_output_fs = ((VALUE)RUBY_Qnil);
    rb_define_hooked_variable("$,", &rb_output_fs, 0, rb_str_setter);

    rb_default_rs =  ({ (__builtin_constant_p("\n")) ? rb_fstring_new(("\n"), (long)strlen("\n")) : rb_fstring_cstr("\n"); });
    rb_gc_register_mark_object(rb_default_rs);
    rb_rs = rb_default_rs;
    rb_output_rs = ((VALUE)RUBY_Qnil);
    rb_define_hooked_variable("$/", &rb_rs, 0, rb_str_setter);
    rb_define_hooked_variable("$-0", &rb_rs, 0, rb_str_setter);
    rb_define_hooked_variable("$\\", &rb_output_rs, 0, rb_str_setter);

    rb_define_virtual_variable("$_", rb_lastline_get, rb_lastline_set);

    rb_define_method(rb_cIO, "initialize_copy", rb_io_init_copy, 1);
    rb_define_method(rb_cIO, "reopen", rb_io_reopen, -1);

    rb_define_method(rb_cIO, "print", rb_io_print, -1);
    rb_define_method(rb_cIO, "putc", rb_io_putc, 1);
    rb_define_method(rb_cIO, "puts", rb_io_puts, -1);
    rb_define_method(rb_cIO, "printf", rb_io_printf, -1);

    rb_define_method(rb_cIO, "each", rb_io_each_line, -1);
    rb_define_method(rb_cIO, "each_line", rb_io_each_line, -1);
    rb_define_method(rb_cIO, "each_byte", rb_io_each_byte, 0);
    rb_define_method(rb_cIO, "each_char", rb_io_each_char, 0);
    rb_define_method(rb_cIO, "each_codepoint", rb_io_each_codepoint, 0);
    rb_define_method(rb_cIO, "lines", rb_io_lines, -1);
    rb_define_method(rb_cIO, "bytes", rb_io_bytes, 0);
    rb_define_method(rb_cIO, "chars", rb_io_chars, 0);
    rb_define_method(rb_cIO, "codepoints", rb_io_codepoints, 0);

    rb_define_method(rb_cIO, "syswrite", rb_io_syswrite, 1);
    rb_define_method(rb_cIO, "sysread", rb_io_sysread, -1);

    rb_define_method(rb_cIO, "pread", rb_io_pread, -1);
    rb_define_method(rb_cIO, "pwrite", rb_io_pwrite, 2);

    rb_define_method(rb_cIO, "fileno", rb_io_fileno, 0);
    rb_define_alias(rb_cIO, "to_i", "fileno");
    rb_define_method(rb_cIO, "to_io", rb_io_to_io, 0);

    rb_define_method(rb_cIO, "fsync", rb_io_fsync, 0);
    rb_define_method(rb_cIO, "fdatasync", rb_io_fdatasync, 0);
    rb_define_method(rb_cIO, "sync", rb_io_sync, 0);
    rb_define_method(rb_cIO, "sync=", rb_io_set_sync, 1);

    rb_define_method(rb_cIO, "lineno", rb_io_lineno, 0);
    rb_define_method(rb_cIO, "lineno=", rb_io_set_lineno, 1);

    rb_define_method(rb_cIO, "readlines", rb_io_readlines, -1);


    rb_define_private_method(rb_cIO, "__read_nonblock", io_read_nonblock, 3);
    rb_define_private_method(rb_cIO, "__write_nonblock", io_write_nonblock, 2);

    rb_define_method(rb_cIO, "readpartial", io_readpartial, -1);
    rb_define_method(rb_cIO, "read", io_read, -1);
    rb_define_method(rb_cIO, "write", io_write_m, -1);
    rb_define_method(rb_cIO, "gets", rb_io_gets_m, -1);
    rb_define_method(rb_cIO, "readline", rb_io_readline, -1);
    rb_define_method(rb_cIO, "getc", rb_io_getc, 0);
    rb_define_method(rb_cIO, "getbyte", rb_io_getbyte, 0);
    rb_define_method(rb_cIO, "readchar", rb_io_readchar, 0);
    rb_define_method(rb_cIO, "readbyte", rb_io_readbyte, 0);
    rb_define_method(rb_cIO, "ungetbyte",rb_io_ungetbyte, 1);
    rb_define_method(rb_cIO, "ungetc",rb_io_ungetc, 1);
    rb_define_method(rb_cIO, "<<", rb_io_addstr, 1);
    rb_define_method(rb_cIO, "flush", rb_io_flush, 0);
    rb_define_method(rb_cIO, "tell", rb_io_tell, 0);
    rb_define_method(rb_cIO, "seek", rb_io_seek_m, -1);

    rb_define_const(rb_cIO, "SEEK_SET", (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cIO, "SEEK_CUR", (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cIO, "SEEK_END", (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG));


    rb_define_const(rb_cIO, "SEEK_DATA", (((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG));



    rb_define_const(rb_cIO, "SEEK_HOLE", (((VALUE)(4))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_method(rb_cIO, "rewind", rb_io_rewind, 0);
    rb_define_method(rb_cIO, "pos", rb_io_tell, 0);
    rb_define_method(rb_cIO, "pos=", rb_io_set_pos, 1);
    rb_define_method(rb_cIO, "eof", rb_io_eof, 0);
    rb_define_method(rb_cIO, "eof?", rb_io_eof, 0);

    rb_define_method(rb_cIO, "close_on_exec?", rb_io_close_on_exec_p, 0);
    rb_define_method(rb_cIO, "close_on_exec=", rb_io_set_close_on_exec, 1);

    rb_define_method(rb_cIO, "close", rb_io_close_m, 0);
    rb_define_method(rb_cIO, "closed?", rb_io_closed, 0);
    rb_define_method(rb_cIO, "close_read", rb_io_close_read, 0);
    rb_define_method(rb_cIO, "close_write", rb_io_close_write, 0);

    rb_define_method(rb_cIO, "isatty", rb_io_isatty, 0);
    rb_define_method(rb_cIO, "tty?", rb_io_isatty, 0);
    rb_define_method(rb_cIO, "binmode", rb_io_binmode_m, 0);
    rb_define_method(rb_cIO, "binmode?", rb_io_binmode_p, 0);
    rb_define_method(rb_cIO, "sysseek", rb_io_sysseek, -1);
    rb_define_method(rb_cIO, "advise", rb_io_advise, -1);

    rb_define_method(rb_cIO, "ioctl", rb_io_ioctl, -1);
    rb_define_method(rb_cIO, "fcntl", rb_io_fcntl, -1);
    rb_define_method(rb_cIO, "pid", rb_io_pid, 0);
    rb_define_method(rb_cIO, "inspect", rb_io_inspect, 0);

    rb_define_method(rb_cIO, "external_encoding", rb_io_external_encoding, 0);
    rb_define_method(rb_cIO, "internal_encoding", rb_io_internal_encoding, 0);
    rb_define_method(rb_cIO, "set_encoding", rb_io_set_encoding, -1);

    rb_define_method(rb_cIO, "autoclose?", rb_io_autoclose_p, 0);
    rb_define_method(rb_cIO, "autoclose=", rb_io_set_autoclose, 1);

    rb_define_variable("$stdin", &rb_stdin);
    rb_stdin = prep_stdio(stdin, 0x00000001, rb_cIO, "<STDIN>");
    rb_define_hooked_variable("$stdout", &rb_stdout, 0, stdout_setter);
    rb_stdout = prep_stdio(stdout, 0x00000002, rb_cIO, "<STDOUT>");
    rb_define_hooked_variable("$stderr", &rb_stderr, 0, stdout_setter);
    rb_stderr = prep_stdio(stderr, 0x00000002|0x00000008, rb_cIO, "<STDERR>");
    rb_define_hooked_variable("$>", &rb_stdout, 0, stdout_setter);
    orig_stdout = rb_stdout;
    orig_stderr = rb_stderr;


    rb_define_global_const("STDIN", rb_stdin);

    rb_define_global_const("STDOUT", rb_stdout);

    rb_define_global_const("STDERR", rb_stderr);






    rb_cARGF = rb_class_new(rb_cObject);
    rb_set_class_path(rb_cARGF, rb_cObject, "ARGF.class");
    rb_define_alloc_func(rb_cARGF, argf_alloc);

    rb_include_module(rb_cARGF, rb_mEnumerable);

    rb_define_method(rb_cARGF, "initialize", argf_initialize, -2);
    rb_define_method(rb_cARGF, "initialize_copy", argf_initialize_copy, 1);
    rb_define_method(rb_cARGF, "to_s", argf_to_s, 0);
    rb_define_alias(rb_cARGF, "inspect", "to_s");
    rb_define_method(rb_cARGF, "argv", argf_argv, 0);

    rb_define_method(rb_cARGF, "fileno", argf_fileno, 0);
    rb_define_method(rb_cARGF, "to_i", argf_fileno, 0);
    rb_define_method(rb_cARGF, "to_io", argf_to_io, 0);
    rb_define_method(rb_cARGF, "to_write_io", argf_write_io, 0);
    rb_define_method(rb_cARGF, "each", argf_each_line, -1);
    rb_define_method(rb_cARGF, "each_line", argf_each_line, -1);
    rb_define_method(rb_cARGF, "each_byte", argf_each_byte, 0);
    rb_define_method(rb_cARGF, "each_char", argf_each_char, 0);
    rb_define_method(rb_cARGF, "each_codepoint", argf_each_codepoint, 0);
    rb_define_method(rb_cARGF, "lines", argf_lines, -1);
    rb_define_method(rb_cARGF, "bytes", argf_bytes, 0);
    rb_define_method(rb_cARGF, "chars", argf_chars, 0);
    rb_define_method(rb_cARGF, "codepoints", argf_codepoints, 0);

    rb_define_method(rb_cARGF, "read", argf_read, -1);
    rb_define_method(rb_cARGF, "readpartial", argf_readpartial, -1);
    rb_define_method(rb_cARGF, "read_nonblock", argf_read_nonblock, -1);
    rb_define_method(rb_cARGF, "readlines", argf_readlines, -1);
    rb_define_method(rb_cARGF, "to_a", argf_readlines, -1);
    rb_define_method(rb_cARGF, "gets", argf_gets, -1);
    rb_define_method(rb_cARGF, "readline", argf_readline, -1);
    rb_define_method(rb_cARGF, "getc", argf_getc, 0);
    rb_define_method(rb_cARGF, "getbyte", argf_getbyte, 0);
    rb_define_method(rb_cARGF, "readchar", argf_readchar, 0);
    rb_define_method(rb_cARGF, "readbyte", argf_readbyte, 0);
    rb_define_method(rb_cARGF, "tell", argf_tell, 0);
    rb_define_method(rb_cARGF, "seek", argf_seek_m, -1);
    rb_define_method(rb_cARGF, "rewind", argf_rewind, 0);
    rb_define_method(rb_cARGF, "pos", argf_tell, 0);
    rb_define_method(rb_cARGF, "pos=", argf_set_pos, 1);
    rb_define_method(rb_cARGF, "eof", argf_eof, 0);
    rb_define_method(rb_cARGF, "eof?", argf_eof, 0);
    rb_define_method(rb_cARGF, "binmode", argf_binmode_m, 0);
    rb_define_method(rb_cARGF, "binmode?", argf_binmode_p, 0);

    rb_define_method(rb_cARGF, "write", argf_write, 1);
    rb_define_method(rb_cARGF, "print", rb_io_print, -1);
    rb_define_method(rb_cARGF, "putc", rb_io_putc, 1);
    rb_define_method(rb_cARGF, "puts", rb_io_puts, -1);
    rb_define_method(rb_cARGF, "printf", rb_io_printf, -1);

    rb_define_method(rb_cARGF, "filename", argf_filename, 0);
    rb_define_method(rb_cARGF, "path", argf_filename, 0);
    rb_define_method(rb_cARGF, "file", argf_file, 0);
    rb_define_method(rb_cARGF, "skip", argf_skip, 0);
    rb_define_method(rb_cARGF, "close", argf_close_m, 0);
    rb_define_method(rb_cARGF, "closed?", argf_closed, 0);

    rb_define_method(rb_cARGF, "lineno", argf_lineno, 0);
    rb_define_method(rb_cARGF, "lineno=", argf_set_lineno, 1);

    rb_define_method(rb_cARGF, "inplace_mode", argf_inplace_mode_get, 0);
    rb_define_method(rb_cARGF, "inplace_mode=", argf_inplace_mode_set, 1);

    rb_define_method(rb_cARGF, "external_encoding", argf_external_encoding, 0);
    rb_define_method(rb_cARGF, "internal_encoding", argf_internal_encoding, 0);
    rb_define_method(rb_cARGF, "set_encoding", argf_set_encoding, -1);

    argf = rb_class_new_instance(0, 0, rb_cARGF);

    rb_define_readonly_variable("$<", &argf);






    rb_define_global_const("ARGF", argf);

    rb_define_hooked_variable("$.", &argf, argf_lineno_getter, argf_lineno_setter);
    rb_define_hooked_variable("$FILENAME", &argf, argf_filename_getter, rb_gvar_readonly_setter);
    (*(struct argf *)(((struct RData*)(argf))->data)).filename =  ({ (__builtin_constant_p("-")) ? rb_str_new_static(("-"), (long)strlen("-")) : rb_str_new_cstr("-"); });

    rb_define_hooked_variable("$-i", &argf, opt_i_get, opt_i_set);
    rb_define_hooked_variable("$*", &argf, argf_argv_getter, rb_gvar_readonly_setter);





    Init_File();

    rb_define_method(rb_cFile, "initialize", rb_file_initialize, -1);

    sym_mode = (rb_id2sym((__builtin_constant_p("mode") ?  (rb_intern2(("mode"), (long)strlen("mode"))) : (rb_intern)("mode"))));
    sym_perm = (rb_id2sym((__builtin_constant_p("perm") ?  (rb_intern2(("perm"), (long)strlen("perm"))) : (rb_intern)("perm"))));
    sym_flags = (rb_id2sym((__builtin_constant_p("flags") ?  (rb_intern2(("flags"), (long)strlen("flags"))) : (rb_intern)("flags"))));
    sym_extenc = (rb_id2sym((__builtin_constant_p("external_encoding") ?  (rb_intern2(("external_encoding"), (long)strlen("external_encoding"))) : (rb_intern)("external_encoding"))));
    sym_intenc = (rb_id2sym((__builtin_constant_p("internal_encoding") ?  (rb_intern2(("internal_encoding"), (long)strlen("internal_encoding"))) : (rb_intern)("internal_encoding"))));
    sym_encoding = (rb_id2sym(rb_id_encoding()));
    sym_open_args = (rb_id2sym((__builtin_constant_p("open_args") ?  (rb_intern2(("open_args"), (long)strlen("open_args"))) : (rb_intern)("open_args"))));
    sym_textmode = (rb_id2sym((__builtin_constant_p("textmode") ?  (rb_intern2(("textmode"), (long)strlen("textmode"))) : (rb_intern)("textmode"))));
    sym_binmode = (rb_id2sym((__builtin_constant_p("binmode") ?  (rb_intern2(("binmode"), (long)strlen("binmode"))) : (rb_intern)("binmode"))));
    sym_autoclose = (rb_id2sym((__builtin_constant_p("autoclose") ?  (rb_intern2(("autoclose"), (long)strlen("autoclose"))) : (rb_intern)("autoclose"))));
    sym_normal = (rb_id2sym((__builtin_constant_p("normal") ?  (rb_intern2(("normal"), (long)strlen("normal"))) : (rb_intern)("normal"))));
    sym_sequential = (rb_id2sym((__builtin_constant_p("sequential") ?  (rb_intern2(("sequential"), (long)strlen("sequential"))) : (rb_intern)("sequential"))));
    sym_random = (rb_id2sym((__builtin_constant_p("random") ?  (rb_intern2(("random"), (long)strlen("random"))) : (rb_intern)("random"))));
    sym_willneed = (rb_id2sym((__builtin_constant_p("willneed") ?  (rb_intern2(("willneed"), (long)strlen("willneed"))) : (rb_intern)("willneed"))));
    sym_dontneed = (rb_id2sym((__builtin_constant_p("dontneed") ?  (rb_intern2(("dontneed"), (long)strlen("dontneed"))) : (rb_intern)("dontneed"))));
    sym_noreuse = (rb_id2sym((__builtin_constant_p("noreuse") ?  (rb_intern2(("noreuse"), (long)strlen("noreuse"))) : (rb_intern)("noreuse"))));
    sym_SET = (rb_id2sym((__builtin_constant_p("SET") ?  (rb_intern2(("SET"), (long)strlen("SET"))) : (rb_intern)("SET"))));
    sym_CUR = (rb_id2sym((__builtin_constant_p("CUR") ?  (rb_intern2(("CUR"), (long)strlen("CUR"))) : (rb_intern)("CUR"))));
    sym_END = (rb_id2sym((__builtin_constant_p("END") ?  (rb_intern2(("END"), (long)strlen("END"))) : (rb_intern)("END"))));

    sym_DATA = (rb_id2sym((__builtin_constant_p("DATA") ?  (rb_intern2(("DATA"), (long)strlen("DATA"))) : (rb_intern)("DATA"))));


    sym_HOLE = (rb_id2sym((__builtin_constant_p("HOLE") ?  (rb_intern2(("HOLE"), (long)strlen("HOLE"))) : (rb_intern)("HOLE"))));

    sym_wait_readable = (rb_id2sym((__builtin_constant_p("wait_readable") ?  (rb_intern2(("wait_readable"), (long)strlen("wait_readable"))) : (rb_intern)("wait_readable"))));
    sym_wait_writable = (rb_id2sym((__builtin_constant_p("wait_writable") ?  (rb_intern2(("wait_writable"), (long)strlen("wait_writable"))) : (rb_intern)("wait_writable"))));
}
