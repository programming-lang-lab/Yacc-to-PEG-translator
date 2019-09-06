








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

extern int yydebug;





  enum yytokentype
  {
    END_OF_INPUT = 0,
    keyword_class = 258,
    keyword_module = 259,
    keyword_def = 260,
    keyword_undef = 261,
    keyword_begin = 262,
    keyword_rescue = 263,
    keyword_ensure = 264,
    keyword_end = 265,
    keyword_if = 266,
    keyword_unless = 267,
    keyword_then = 268,
    keyword_elsif = 269,
    keyword_else = 270,
    keyword_case = 271,
    keyword_when = 272,
    keyword_while = 273,
    keyword_until = 274,
    keyword_for = 275,
    keyword_break = 276,
    keyword_next = 277,
    keyword_redo = 278,
    keyword_retry = 279,
    keyword_in = 280,
    keyword_do = 281,
    keyword_do_cond = 282,
    keyword_do_block = 283,
    keyword_do_LAMBDA = 284,
    keyword_return = 285,
    keyword_yield = 286,
    keyword_super = 287,
    keyword_self = 288,
    keyword_nil = 289,
    keyword_true = 290,
    keyword_false = 291,
    keyword_and = 292,
    keyword_or = 293,
    keyword_not = 294,
    modifier_if = 295,
    modifier_unless = 296,
    modifier_while = 297,
    modifier_until = 298,
    modifier_rescue = 299,
    keyword_alias = 300,
    keyword_defined = 301,
    keyword_BEGIN = 302,
    keyword_END = 303,
    keyword__LINE__ = 304,
    keyword__FILE__ = 305,
    keyword__ENCODING__ = 306,
    tIDENTIFIER = 307,
    tFID = 308,
    tGVAR = 309,
    tIVAR = 310,
    tCONSTANT = 311,
    tCVAR = 312,
    tLABEL = 313,
    tINTEGER = 314,
    tFLOAT = 315,
    tRATIONAL = 316,
    tIMAGINARY = 317,
    tSTRING_CONTENT = 318,
    tCHAR = 319,
    tNTH_REF = 320,
    tBACK_REF = 321,
    tREGEXP_END = 322,
    tUPLUS = 130,
    tUMINUS = 131,
    tPOW = 132,
    tCMP = 133,
    tEQ = 138,
    tEQQ = 139,
    tNEQ = 140,
    tGEQ = 137,
    tLEQ = 136,
    tANDOP = 146,
    tOROP = 147,
    tMATCH = 141,
    tNMATCH = 142,
    tDOT2 = 128,
    tDOT3 = 129,
    tAREF = 143,
    tASET = 144,
    tLSHFT = 134,
    tRSHFT = 135,
    tANDDOT = 148,
    tCOLON2 = 145,
    tCOLON3 = 323,
    tOP_ASGN = 324,
    tASSOC = 325,
    tLPAREN = 326,
    tLPAREN_ARG = 327,
    tRPAREN = 328,
    tLBRACK = 329,
    tLBRACE = 330,
    tLBRACE_ARG = 331,
    tSTAR = 332,
    tDSTAR = 333,
    tAMPER = 334,
    tLAMBDA = 335,
    tSYMBEG = 336,
    tSTRING_BEG = 337,
    tXSTRING_BEG = 338,
    tREGEXP_BEG = 339,
    tWORDS_BEG = 340,
    tQWORDS_BEG = 341,
    tSYMBOLS_BEG = 342,
    tQSYMBOLS_BEG = 343,
    tSTRING_DBEG = 344,
    tSTRING_DEND = 345,
    tSTRING_DVAR = 346,
    tSTRING_END = 347,
    tLAMBEG = 348,
    tLABEL_END = 349,
    tLOWEST = 350,
    tUMINUS_NUM = 351,
    tLAST_TOKEN = 352
  };





union YYSTYPE
{

    VALUE val;
    NODE *node;
    ID id;
    int num;
    const struct vtable *vars;
    struct rb_strterm_struct *strterm;

};

typedef union YYSTYPE YYSTYPE;
int yyparse (struct parser_params *parser);
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
struct RSymbol {
    struct RBasic basic;
    st_index_t hashval;
    VALUE fstr;
    ID id;
};
static inline int
id_type(ID id)
{
    if (((id)>tLAST_OP_ID)) {
 return (int)(id&RUBY_ID_SCOPE_MASK);
    }
    else {
 return -1;
    }
}

typedef uint32_t rb_id_serial_t;

static inline rb_id_serial_t
rb_id_to_serial(ID id)
{
    if (((id)>tLAST_OP_ID)) {
 return (rb_id_serial_t)(id >> RUBY_ID_SCOPE_SHIFT);
    }
    else {
 return (rb_id_serial_t)id;
    }
}

static inline int
sym_type(VALUE sym)
{
    ID id;
    if ((((VALUE)(sym)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)) {
 id = ((sym)>>(int)(RUBY_SPECIAL_SHIFT));
 if (id<=tLAST_OP_ID) {
     return -1;
 }
    }
    else {
 id = ((struct RSymbol*)(sym))->id;
    }
    return (int)(id&RUBY_ID_SCOPE_MASK);
}
 extern const unsigned int ruby_global_name_punct_bits[(0x7e - 0x20 + 31) / 32];

static inline int
is_global_name_punct(const int c)
{
    if (c <= 0x20 || 0x7e < c) return 0;
    return (ruby_global_name_punct_bits[(c - 0x20) / 32] >> (c % 32)) & 1;
}

ID rb_intern_cstr_without_pindown(const char *, long, rb_encoding *);


size_t rb_sym_immortal_count(void);


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
enum lex_state_bits {
    EXPR_BEG_bit,
    EXPR_END_bit,
    EXPR_ENDARG_bit,
    EXPR_ENDFN_bit,
    EXPR_ARG_bit,
    EXPR_CMDARG_bit,
    EXPR_MID_bit,
    EXPR_FNAME_bit,
    EXPR_DOT_bit,
    EXPR_CLASS_bit,
    EXPR_LABEL_bit,
    EXPR_LABELED_bit,
    EXPR_FITEM_bit,
    EXPR_MAX_STATE
};

enum lex_state_e {

    EXPR_BEG = (1 << EXPR_BEG_bit),
    EXPR_END = (1 << EXPR_END_bit),
    EXPR_ENDARG = (1 << EXPR_ENDARG_bit),
    EXPR_ENDFN = (1 << EXPR_ENDFN_bit),
    EXPR_ARG = (1 << EXPR_ARG_bit),
    EXPR_CMDARG = (1 << EXPR_CMDARG_bit),
    EXPR_MID = (1 << EXPR_MID_bit),
    EXPR_FNAME = (1 << EXPR_FNAME_bit),
    EXPR_DOT = (1 << EXPR_DOT_bit),
    EXPR_CLASS = (1 << EXPR_CLASS_bit),
    EXPR_LABEL = (1 << EXPR_LABEL_bit),
    EXPR_LABELED = (1 << EXPR_LABELED_bit),
    EXPR_FITEM = (1 << EXPR_FITEM_bit),
    EXPR_VALUE = EXPR_BEG,
    EXPR_BEG_ANY = (EXPR_BEG | EXPR_MID | EXPR_CLASS),
    EXPR_ARG_ANY = (EXPR_ARG | EXPR_CMDARG),
    EXPR_END_ANY = (EXPR_END | EXPR_ENDARG | EXPR_ENDFN)
};
typedef VALUE stack_type;
struct vtable {
    ID *tbl;
    int pos;
    int capa;
    struct vtable *prev;
};

struct local_vars {
    struct vtable *args;
    struct vtable *vars;
    struct vtable *used;



    struct local_vars *prev;
    stack_type cmdargs;
};






typedef struct token_info {
    const char *token;
    int linenum;
    int column;
    int nonspc;
    struct token_info *next;
} token_info;

typedef struct rb_strterm_struct rb_strterm_t;
struct parser_params {
    rb_imemo_alloc_t *heap;

    YYSTYPE *lval;

    struct {
 rb_strterm_t *strterm;
 VALUE (*gets)(struct parser_params*,VALUE);
 VALUE input;
 VALUE prevline;
 VALUE lastline;
 VALUE nextline;
 const char *pbeg;
 const char *pcur;
 const char *pend;
 const char *ptok;
 long gets_ptr;
 enum lex_state_e state;
 int paren_nest;
 int lpar_beg;
 int brace_nest;
    } lex;
    stack_type cond_stack;
    stack_type cmdarg_stack;
    int tokidx;
    int toksiz;
    int tokline;
    int heredoc_end;
    int heredoc_indent;
    int heredoc_line_indent;
    char *tokenbuf;
    struct local_vars *lvtbl;
    int line_count;
    int ruby_sourceline;
    char *ruby_sourcefile;
    VALUE ruby_sourcefile_string;
    rb_encoding *enc;
    token_info *token_info;
    VALUE compile_option;

    VALUE debug_buffer;
    VALUE debug_output;

    ID cur_arg;

    rb_ast_t *ast;

    unsigned int command_start:1;
    unsigned int eofp: 1;
    unsigned int ruby__end__seen: 1;
    unsigned int yydebug: 1;
    unsigned int has_shebang: 1;
    unsigned int in_defined: 1;
    unsigned int in_main: 1;
    unsigned int in_kwarg: 1;
    unsigned int in_def: 1;
    unsigned int in_class: 1;
    unsigned int token_seen: 1;
    unsigned int token_info_enabled: 1;



    unsigned int error_p: 1;
    unsigned int cr_seen: 1;




    unsigned int do_print: 1;
    unsigned int do_loop: 1;
    unsigned int do_chomp: 1;
    unsigned int do_split: 1;

    NODE *eval_tree_begin;
    NODE *eval_tree;
    VALUE error_buffer;
    VALUE debug_lines;
    VALUE coverage;
    const struct rb_block *base_block;
};
static int parser_yyerror(struct parser_params*, const char*);
static enum yytokentype yylex(YYSTYPE*, rb_code_range_t*, struct parser_params*);


static inline void
rb_discard_node_gen(struct parser_params *parser, NODE *n)
{
    rb_ast_delete_node(parser->ast, n);
}



static inline void
add_mark_object_gen(struct parser_params *parser, VALUE obj)
{
    if (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))



    ) {
 rb_ast_add_mark_object(parser->ast, obj);
    }
}


static NODE* node_newnode(struct parser_params *, enum node_type, VALUE, VALUE, VALUE);



static inline void
set_line_body(NODE *body, int line)
{
    if (!body) return;
    switch (((int) (((body)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_RESCUE:
      case NODE_ENSURE:
 (body)->flags=(((body)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((line)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    }
}



static NODE *cond_gen(struct parser_params*,NODE*,int,const rb_code_range_t*);


static NODE *new_nil_gen(struct parser_params*,const rb_code_range_t*);

static NODE *new_if_gen(struct parser_params*,NODE*,NODE*,NODE*,const rb_code_range_t*);

static NODE *new_unless_gen(struct parser_params*,NODE*,NODE*,NODE*,const rb_code_range_t*);

static NODE *logop_gen(struct parser_params*,enum node_type,NODE*,NODE*,const rb_code_range_t*,const rb_code_range_t*);




static NODE *newline_node(NODE*);
static void fixpos(NODE*,NODE*);

static int value_expr_gen(struct parser_params*,NODE*);
static void void_expr_gen(struct parser_params*,NODE*);
static NODE *remove_begin(NODE*);
static NODE *remove_begin_all(NODE*);



static void void_stmts_gen(struct parser_params*,NODE*);

static void reduce_nodes_gen(struct parser_params*,NODE**);

static void block_dup_check_gen(struct parser_params*,NODE*,NODE*);


static NODE *block_append_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);

static NODE *list_append_gen(struct parser_params*,NODE*,NODE*);

static NODE *list_concat(NODE*,NODE*);
static NODE *arg_append_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);

static NODE *arg_concat_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);

static NODE *literal_concat_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);

static int literal_concat0(struct parser_params *, VALUE, VALUE);
static NODE *new_evstr_gen(struct parser_params*,NODE*,const rb_code_range_t*);

static NODE *evstr2dstr_gen(struct parser_params*,NODE*);

static NODE *splat_array(NODE*);

static NODE *call_bin_op_gen(struct parser_params*,NODE*,ID,NODE*,const rb_code_range_t*,const rb_code_range_t*);

static NODE *call_uni_op_gen(struct parser_params*,NODE*,ID,const rb_code_range_t*,const rb_code_range_t*);

static NODE *new_qcall_gen(struct parser_params* parser, ID atype, NODE *recv, ID mid, NODE *args, const rb_code_range_t *location);


static NODE *new_command_gen(struct parser_params*parser, NODE *m, NODE *a) {m->u3.node = a; return m;}

static NODE *method_add_block_gen(struct parser_params*parser, NODE *m, NODE *b) {b->u3.node = m; return b;}


static NODE *new_args_gen(struct parser_params*,NODE*,NODE*,ID,NODE*,NODE*,const rb_code_range_t*);

static NODE *new_args_tail_gen(struct parser_params*,NODE*,ID,ID,const rb_code_range_t*);

static NODE *new_kw_arg_gen(struct parser_params *parser, NODE *k, const rb_code_range_t *location);


static VALUE negate_lit_gen(struct parser_params*, VALUE);

static NODE *ret_args_gen(struct parser_params*,NODE*);

static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *new_yield_gen(struct parser_params*,NODE*,const rb_code_range_t*);

static NODE *dsym_node_gen(struct parser_params*,NODE*,const rb_code_range_t*);


static NODE *gettable_gen(struct parser_params*,ID,const rb_code_range_t*);

static NODE *assignable_gen(struct parser_params*,ID,NODE*,const rb_code_range_t*);


static NODE *aryset_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);

static NODE *attrset_gen(struct parser_params*,NODE*,ID,ID,const rb_code_range_t*);


static void rb_backref_error_gen(struct parser_params*,NODE*);

static NODE *node_assign_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*);


static NODE *new_op_assign_gen(struct parser_params *parser, NODE *lhs, ID op, NODE *rhs, const rb_code_range_t *location);

static NODE *new_attr_op_assign_gen(struct parser_params *parser, NODE *lhs, ID atype, ID attr, ID op, NODE *rhs, const rb_code_range_t *location);

static NODE *new_const_op_assign_gen(struct parser_params *parser, NODE *lhs, ID op, NODE *rhs, const rb_code_range_t *location);


static NODE *const_path_field_gen(struct parser_params *parser, NODE *head, ID mid, const rb_code_range_t *location);


static NODE *const_decl_gen(struct parser_params *parser, NODE* path, const rb_code_range_t *location);





static NODE *opt_arg_append(NODE*, NODE*);
static NODE *kwd_append(NODE*, NODE*);

static NODE *new_hash_gen(struct parser_params *parser, NODE *hash, const rb_code_range_t *location);


static NODE *new_defined_gen(struct parser_params *parser, NODE *expr, const rb_code_range_t *location);


static NODE *new_regexp_gen(struct parser_params *, NODE *, int, const rb_code_range_t *);


static NODE *new_lit_gen(struct parser_params *parser, VALUE sym, const rb_code_range_t *location);


static NODE *new_list_gen(struct parser_params *parser, NODE *item, const rb_code_range_t *location);


static NODE *new_str_gen(struct parser_params *parser, VALUE str, const rb_code_range_t *location);


static NODE *new_dvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location);


static NODE *new_resbody_gen(struct parser_params *parser, NODE *exc_list, NODE *stmt, NODE *rescue, const rb_code_range_t *location);


static NODE *new_errinfo_gen(struct parser_params *parser, const rb_code_range_t *location);


static NODE *new_call_gen(struct parser_params *parser, NODE *recv, ID mid, NODE *args, const rb_code_range_t *location);


static NODE *new_fcall_gen(struct parser_params *parser, ID mid, NODE *args, const rb_code_range_t *location);


static NODE *new_for_gen(struct parser_params *parser, NODE *var, NODE *iter, NODE *body, const rb_code_range_t *location);


static NODE *new_gvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location);


static NODE *new_lvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location);


static NODE *new_dstr_gen(struct parser_params *parser, VALUE str, const rb_code_range_t *location);


static NODE *new_rescue_gen(struct parser_params *parser, NODE *b, NODE *res, NODE *e, const rb_code_range_t *location);


static NODE *new_undef_gen(struct parser_params *parser, NODE *i, const rb_code_range_t *location);


static NODE *nd_set_loc(NODE *nd, const rb_code_range_t *location);
static NODE *new_zarray_gen(struct parser_params *parser, const rb_code_range_t *location);



static NODE *new_ivar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location);


static NODE *new_postarg_gen(struct parser_params *parser, NODE *i, NODE *v, const rb_code_range_t *location);


static NODE *new_cdecl_gen(struct parser_params *parser, ID v, NODE *val, NODE *path, const rb_code_range_t *location);


static NODE *new_scope_gen(struct parser_params *parser, NODE *a, NODE *b, const rb_code_range_t *location);


static NODE *new_begin_gen(struct parser_params *parser, NODE *b, const rb_code_range_t *location);


static NODE *new_masgn_gen(struct parser_params *parser, NODE *l, NODE *r, const rb_code_range_t *location);


static NODE *new_xstring_gen(struct parser_params *, NODE *, const rb_code_range_t *location);



static NODE *new_body_gen(struct parser_params *parser, NODE *param, NODE *stmt, const rb_code_range_t *location);



static NODE *match_op_gen(struct parser_params*,NODE*,NODE*,const rb_code_range_t*,const rb_code_range_t*);


static ID *local_tbl_gen(struct parser_params*);


static VALUE reg_compile_gen(struct parser_params*, VALUE, int);

static void reg_fragment_setenc_gen(struct parser_params*, VALUE, int);

static int reg_fragment_check_gen(struct parser_params*, VALUE, int);

static NODE *reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, const rb_code_range_t *location);


static NODE *parser_heredoc_dedent(struct parser_params*,NODE*);
typedef struct rb_strterm_heredoc_struct rb_strterm_heredoc_t;

VALUE rb_parser_reg_compile(struct parser_params* parser, VALUE str, int options);
int rb_reg_fragment_setenc(struct parser_params*, VALUE, int);
enum lex_state_e rb_parser_trace_lex_state(struct parser_params *, enum lex_state_e, enum lex_state_e, int);
VALUE rb_parser_lex_state_name(enum lex_state_e state);
void rb_parser_show_bitstack(struct parser_params *, stack_type, const char *, int);
void rb_parser_fatal(struct parser_params *parser, const char *fmt, ...) ;
void rb_parser_set_location_from_strterm_heredoc(struct parser_params *parser, rb_strterm_heredoc_t *here, rb_code_range_t *yylloc);
void rb_parser_set_location_of_none(struct parser_params *parser, rb_code_range_t *yylloc);
void rb_parser_set_location(struct parser_params *parser, rb_code_range_t *yylloc);

static ID formal_argument_gen(struct parser_params*, ID);

static ID shadowing_lvar_gen(struct parser_params*,ID);

static void new_bv_gen(struct parser_params*,ID);


static void local_push_gen(struct parser_params*,int);

static void local_pop_gen(struct parser_params*);

static void local_var_gen(struct parser_params*, ID);

static void arg_var_gen(struct parser_params*, ID);

static int local_id_gen(struct parser_params*, ID, ID **);


static ID internal_id_gen(struct parser_params*);


static const struct vtable *dyna_push_gen(struct parser_params *);

static void dyna_pop_gen(struct parser_params*, const struct vtable *);

static int dyna_in_block_gen(struct parser_params*);


static int dvar_defined_gen(struct parser_params*, ID, ID**);


static int dvar_curr_gen(struct parser_params*,ID);


static int lvar_defined_gen(struct parser_params*, ID);
typedef struct rb_strterm_literal_struct {
    union {
 VALUE dummy;
 long nest;
    } u0;
    union {
 VALUE dummy;
 long func;
    } u1;
    union {
 VALUE dummy;
 long paren;
    } u2;
    union {
 VALUE dummy;
 long term;
    } u3;
} rb_strterm_literal_t;

struct rb_strterm_heredoc_struct {
    long sourceline;
    VALUE term;
    VALUE lastline;
    union {
 VALUE dummy;
 long lastidx;
    } u3;
};



struct rb_strterm_struct {
    VALUE flags;
    union {
 rb_strterm_literal_t literal;
 rb_strterm_heredoc_t heredoc;
    } u;
};


void
rb_strterm_mark(VALUE obj)
{
    rb_strterm_t *strterm = (rb_strterm_t*)obj;
    if (((struct RBasic*)(obj))->flags & ((VALUE)RUBY_FL_USER4)) {
 rb_strterm_heredoc_t *heredoc = &strterm->u.heredoc;
 rb_gc_mark(heredoc->term);
 rb_gc_mark(heredoc->lastline);
    }
}
static void parser_compile_error(struct parser_params*, const char *fmt, ...) ;
static void token_info_push_gen(struct parser_params*, const char *token, size_t len);
static void token_info_pop_gen(struct parser_params*, const char *token, size_t len);








typedef unsigned char yytype_uint8;





typedef signed char yytype_int8;





typedef unsigned short int yytype_uint16;





typedef short int yytype_int16;
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  rb_code_range_t yyls_alloc;
};
static const yytype_uint8 yytranslate[] =
{
       0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
     145, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 143, 131, 2, 2, 2, 129, 124, 2,
     139, 140, 127, 125, 137, 126, 144, 128, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 119, 142,
     121, 117, 120, 118, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 136, 2, 141, 123, 2, 138, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 134, 122, 135, 132, 2, 81, 82,
      68, 69, 70, 71, 85, 86, 76, 75, 72, 73,
      74, 79, 80, 83, 84, 88, 77, 78, 87, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
       5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
      45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
      55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
      65, 66, 67, 89, 90, 91, 92, 93, 94, 95,
      96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
     106, 107, 108, 109, 110, 111, 112, 113, 114, 115,
     116, 130, 133
};



static const yytype_uint16 yyrline[] =
{
       0, 1164, 1164, 1164, 1195, 1205, 1214, 1222, 1230, 1236,
    1238, 1237, 1258, 1294, 1304, 1313, 1321, 1329, 1335, 1340,
    1339, 1361, 1361, 1370, 1379, 1391, 1402, 1410, 1419, 1428,
    1442, 1456, 1469, 1486, 1487, 1496, 1501, 1509, 1512, 1517,
    1522, 1544, 1549, 1554, 1565, 1570, 1577, 1585, 1597, 1600,
    1601, 1605, 1609, 1613, 1617, 1620, 1632, 1633, 1636, 1637,
    1644, 1643, 1661, 1671, 1681, 1693, 1698, 1709, 1714, 1725,
    1735, 1744, 1753, 1762, 1773, 1774, 1784, 1785, 1795, 1803,
    1811, 1819, 1828, 1836, 1845, 1853, 1862, 1870, 1881, 1882,
    1892, 1900, 1910, 1918, 1928, 1932, 1936, 1944, 1952, 1960,
    1968, 1972, 1976, 1983, 1987, 1991, 1999, 2007, 2015, 2023,
    2027, 2031, 2038, 2047, 2050, 2059, 2068, 2079, 2080, 2081,
    2082, 2087, 2094, 2095, 2098, 2106, 2109, 2117, 2117, 2128,
    2129, 2130, 2131, 2132, 2133, 2134, 2135, 2136, 2137, 2138,
    2139, 2140, 2141, 2142, 2143, 2144, 2145, 2146, 2147, 2148,
    2149, 2150, 2151, 2152, 2153, 2154, 2155, 2156, 2157, 2160,
    2160, 2160, 2161, 2161, 2162, 2162, 2162, 2163, 2163, 2163,
    2163, 2164, 2164, 2164, 2164, 2165, 2165, 2165, 2166, 2166,
    2166, 2166, 2167, 2167, 2167, 2167, 2168, 2168, 2168, 2168,
    2169, 2169, 2169, 2169, 2170, 2170, 2170, 2170, 2171, 2171,
    2174, 2178, 2182, 2210, 2215, 2220, 2225, 2236, 2241, 2246,
    2257, 2268, 2272, 2276, 2280, 2284, 2288, 2292, 2296, 2300,
    2304, 2308, 2312, 2316, 2320, 2321, 2325, 2329, 2333, 2337,
    2341, 2345, 2349, 2353, 2357, 2361, 2365, 2365, 2370, 2380,
    2386, 2387, 2388, 2389, 2392, 2396, 2403, 2415, 2416, 2420,
    2428, 2438, 2446, 2460, 2470, 2471, 2474, 2475, 2476, 2480,
    2488, 2498, 2507, 2515, 2525, 2534, 2543, 2543, 2555, 2566,
    2570, 2576, 2584, 2593, 2607, 2623, 2624, 2627, 2641, 2656,
    2667, 2668, 2669, 2670, 2671, 2672, 2673, 2674, 2675, 2676,
    2677, 2686, 2685, 2712, 2712, 2721, 2725, 2720, 2734, 2742,
    2751, 2760, 2768, 2777, 2786, 2794, 2803, 2812, 2812, 2817,
    2821, 2825, 2836, 2837, 2848, 2852, 2864, 2876, 2876, 2876,
    2888, 2888, 2888, 2900, 2912, 2923, 2925, 2922, 2976, 2975,
    3003, 3002, 3027, 3026, 3054, 3059, 3053, 3082, 3083, 3082,
    3110, 3119, 3128, 3137, 3148, 3160, 3166, 3172, 3178, 3184,
    3190, 3200, 3206, 3212, 3218, 3228, 3234, 3241, 3246, 3247,
    3254, 3259, 3262, 3263, 3276, 3277, 3287, 3288, 3291, 3298,
    3308, 3316, 3326, 3334, 3343, 3353, 3361, 3370, 3379, 3389,
    3397, 3409, 3413, 3417, 3421, 3427, 3432, 3437, 3441, 3445,
    3449, 3453, 3457, 3465, 3469, 3473, 3477, 3481, 3485, 3489,
    3493, 3497, 3503, 3504, 3510, 3520, 3529, 3541, 3545, 3555,
    3562, 3571, 3579, 3585, 3588, 3593, 3596, 3585, 3617, 3625,
    3631, 3636, 3643, 3642, 3659, 3676, 3680, 3693, 3708, 3719,
    3718, 3730, 3729, 3740, 3745, 3744, 3756, 3755, 3766, 3775,
    3784, 3799, 3798, 3814, 3813, 3830, 3831, 3830, 3840, 3841,
    3840, 3850, 3863, 3864, 3867, 3889, 3892, 3900, 3908, 3911,
    3915, 3918, 3926, 3929, 3930, 3938, 3941, 3958, 3965, 3966,
    3976, 3986, 3992, 3998, 4009, 4016, 4026, 4034, 4044, 4055,
    4062, 4080, 4090, 4101, 4108, 4120, 4127, 4143, 4150, 4161,
    4168, 4179, 4186, 4227, 4235, 4234, 4252, 4258, 4263, 4267,
    4271, 4251, 4293, 4301, 4309, 4318, 4321, 4332, 4333, 4334,
    4335, 4338, 4349, 4350, 4361, 4368, 4375, 4382, 4391, 4392,
    4393, 4394, 4395, 4398, 4399, 4400, 4401, 4402, 4403, 4404,
    4407, 4420, 4430, 4434, 4440, 4447, 4457, 4456, 4466, 4475,
    4485, 4485, 4499, 4503, 4507, 4511, 4517, 4522, 4527, 4531,
    4535, 4539, 4543, 4547, 4551, 4555, 4559, 4563, 4567, 4571,
    4575, 4579, 4584, 4590, 4600, 4610, 4620, 4632, 4633, 4640,
    4649, 4658, 4683, 4690, 4704, 4713, 4723, 4735, 4744, 4755,
    4763, 4774, 4782, 4792, 4793, 4796, 4805, 4816, 4829, 4842,
    4850, 4860, 4868, 4878, 4879, 4882, 4895, 4906, 4907, 4910,
    4927, 4931, 4941, 4951, 4951, 4981, 4982, 4992, 4999, 5023,
    5035, 5043, 5054, 5068, 5069, 5070, 5073, 5074, 5075, 5076,
    5079, 5080, 5081, 5084, 5085, 5088, 5092, 5098, 5099, 5105,
    5106, 5109, 5110, 5113, 5116, 5119, 5120, 5121, 5124, 5125,
    5128, 5129, 5133
};





static const char *const yytname[] =
{
  "\"end-of-input\"", "error", "$undefined", "keyword_class",
  "keyword_module", "keyword_def", "keyword_undef", "keyword_begin",
  "keyword_rescue", "keyword_ensure", "keyword_end", "keyword_if",
  "keyword_unless", "keyword_then", "keyword_elsif", "keyword_else",
  "keyword_case", "keyword_when", "keyword_while", "keyword_until",
  "keyword_for", "keyword_break", "keyword_next", "keyword_redo",
  "keyword_retry", "keyword_in", "keyword_do", "keyword_do_cond",
  "keyword_do_block", "keyword_do_LAMBDA", "keyword_return",
  "keyword_yield", "keyword_super", "keyword_self", "keyword_nil",
  "keyword_true", "keyword_false", "keyword_and", "keyword_or",
  "keyword_not", "modifier_if", "modifier_unless", "modifier_while",
  "modifier_until", "modifier_rescue", "keyword_alias", "keyword_defined",
  "keyword_BEGIN", "keyword_END", "keyword__LINE__", "keyword__FILE__",
  "keyword__ENCODING__", "tIDENTIFIER", "tFID", "tGVAR", "tIVAR",
  "tCONSTANT", "tCVAR", "tLABEL", "tINTEGER", "tFLOAT", "tRATIONAL",
  "tIMAGINARY", "tSTRING_CONTENT", "tCHAR", "tNTH_REF", "tBACK_REF",
  "tREGEXP_END", "\"unary+\"", "\"unary-\"", "\"**\"", "\"<=>\"", "\"==\"",
  "\"===\"", "\"!=\"", "\">=\"", "\"<=\"", "\"&&\"", "\"||\"", "\"=~\"",
  "\"!~\"", "\"..\"", "\"...\"", "\"[]\"", "\"[]=\"", "\"<<\"", "\">>\"",
  "\"&.\"", "\"::\"", "\":: at EXPR_BEG\"", "tOP_ASGN", "\"=>\"", "\"(\"",
  "\"( arg\"", "\")\"", "\"[\"", "\"{\"", "\"{ arg\"", "\"*\"",
  "\"**arg\"", "\"&\"", "\"->\"", "tSYMBEG", "tSTRING_BEG", "tXSTRING_BEG",
  "tREGEXP_BEG", "tWORDS_BEG", "tQWORDS_BEG", "tSYMBOLS_BEG",
  "tQSYMBOLS_BEG", "tSTRING_DBEG", "tSTRING_DEND", "tSTRING_DVAR",
  "tSTRING_END", "tLAMBEG", "tLABEL_END", "tLOWEST", "'='", "'?'", "':'",
  "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN", "'{'", "'}'", "'['", "','",
  "'`'", "'('", "')'", "']'", "';'", "' '", "'.'", "'\\n'", "$accept",
  "program", "$@1", "top_compstmt", "top_stmts", "top_stmt", "$@2",
  "bodystmt", "compstmt", "stmts", "stmt_or_begin", "$@3", "stmt", "$@4",
  "command_asgn", "command_rhs", "expr", "expr_value", "command_call",
  "block_command", "cmd_brace_block", "@5", "fcall", "command", "mlhs",
  "mlhs_inner", "mlhs_basic", "mlhs_item", "mlhs_head", "mlhs_post",
  "mlhs_node", "lhs", "cname", "cpath", "fname", "fsym", "fitem",
  "undef_list", "$@6", "op", "reswords", "arg", "$@7", "relop", "rel_expr",
  "arg_value", "aref_args", "arg_rhs", "paren_args", "opt_paren_args",
  "opt_call_args", "call_args", "command_args", "@8", "block_arg",
  "opt_block_arg", "args", "mrhs_arg", "mrhs", "primary", "@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19",
  "@20", "@21", "@22", "@23", "@24", "@25", "@26", "primary_value",
  "k_begin", "k_if", "k_unless", "k_while", "k_until", "k_case", "k_for",
  "k_class", "k_module", "k_def", "k_end", "k_return", "then", "do",
  "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list", "f_margs",
  "block_args_tail", "opt_block_args_tail", "block_param",
  "opt_block_param", "block_param_def", "opt_bv_decl", "bv_decls", "bvar",
  "lambda", "@27", "@28", "@29", "@30", "f_larglist", "lambda_body",
  "do_block", "@31", "block_call", "method_call", "@32", "@33", "@34",
  "@35", "brace_block", "@36", "@37", "brace_body", "@38", "@39",
  "do_body", "@40", "@41", "case_body", "cases", "opt_rescue", "exc_list",
  "exc_var", "opt_ensure", "literal", "strings", "string", "string1",
  "xstring", "regexp", "words", "word_list", "word", "symbols",
  "symbol_list", "qwords", "qsymbols", "qword_list", "qsym_list",
  "string_contents", "xstring_contents", "regexp_contents",
  "string_content", "@42", "@43", "@44", "@45", "@46", "@47",
  "string_dvar", "symbol", "sym", "dsym", "numeric", "simple_numeric",
  "user_variable", "keyword_variable", "var_ref", "var_lhs", "backref",
  "superclass", "$@48", "f_arglist", "@49", "args_tail", "opt_args_tail",
  "f_args", "f_bad_arg", "f_norm_arg", "f_arg_asgn", "f_arg_item", "f_arg",
  "f_label", "f_kw", "f_block_kw", "f_block_kwarg", "f_kwarg",
  "kwrest_mark", "f_kwrest", "f_opt", "f_block_opt", "f_block_optarg",
  "f_optarg", "restarg_mark", "f_rest_arg", "blkarg_mark", "f_block_arg",
  "opt_f_block_arg", "singleton", "$@50", "assoc_list", "assocs", "assoc",
  "operation", "operation2", "operation3", "dot_or_colon", "call_op",
  "call_op2", "opt_terms", "opt_nl", "rparen", "rbracket", "trailer",
  "term", "terms", "none", 0
};
static const yytype_int16 yypact[] =
{
    -926, 119, 3303, -926, 8357, -926, -926, -926, 7851, -926,
    -926, -926, -926, -926, -926, -926, 8474, 8474, -926, -926,
    -926, 4690, 4276, -926, -926, -926, -926, 49, 7715, -5,
    -926, -4, -926, -926, -926, 3586, 4414, -926, -926, 3724,
    -926, -926, -926, -926, -926, -926, -926, -926, 9878, 9878,
      80, 6050, 211, 8825, 9176, 8117, -926, 7579, -926, -926,
    -926, 16, 63, 112, 136, 1203, 9995, 9878, -926, 409,
    -926, 1210, -926, 324, -926, -926, 65, 298, 54, -926,
     200, 10229, -926, 224, 2565, 922, 34, 581, -926, 10112,
   10112, -926, -926, 6951, 10342, 10455, 10568, 7442, 8474, 39,
     275, -926, -926, 244, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, 84, 364, -926, 305, 473,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
     220, -926, -926, -926, -926, 263, 9878, 367, 6182, 9878,
    9878, 9878, -926, 9878, -926, 358, 2565, 395, -926, -926,
     386, 700, 28, 235, 414, 394, 391, -926, -926, 6834,
    -926, 8474, 8474, -926, -926, 7068, -926, 10112, 319, -926,
     396, 415, 6314, -926, -926, 427, 436, 65, -926, 723,
    -926, 464, 542, 8591, -926, 6050, 442, 409, -926, 1210,
      -5, 468, -926, -5, 8591, 450, 32, 302, -926, 395,
     470, 302, -926, -5, 536, 1203, 10681, 476, -926, 732,
     755, 786, 806, -926, -926, -926, -926, -926, -926, 633,
    -926, 740, 948, 760, -926, -926, -926, -926, 556, -926,
    -926, -926, -926, -926, -926, -926, 7185, 10112, 10112, 10112,
   10112, 8591, 10112, 10112, -926, -926, -926, 519, -926, -926,
    -926, 9293, -926, 6050, 8237, 504, 9293, 9878, 9878, 9878,
    9878, 9878, -926, -926, 9878, 9878, 9878, 9878, 9878, 9878,
    9878, 9878, 9878, -926, -926, 9878, 9878, 9878, 9878, 9878,
    9878, 9878, 9878, 9878, 9878, -926, 2995, 8474, -926, 3090,
    5387, 324, 72, 72, 10112, 10112, 409, 629, 512, 602,
    -926, -926, 858, 636, 88, 124, 132, 551, 596, 10112,
     104, -926, 555, 872, -926, -926, -926, -926, 41, 255,
     261, 262, 272, 343, 400, 418, 421, -926, -926, -926,
     437, -926, -926, -926, 10970, -926, -926, 9995, 9995, -926,
    -926, 399, -926, -926, -926, 601, 9878, 9878, 8708, -926,
    -926, 11051, 8474, 11132, 9878, 9878, 8942, -926, -5, 537,
    -926, -926, -5, -926, 549, 565, -926, 213, -926, -926,
    -926, -926, -926, 7851, -926, 9878, 6457, 557, 11051, 11132,
    9878, 1210, 574, -5, -926, -926, 7302, 572, -926, 1210,
    -926, 9059, -926, -926, 9176, -926, -926, -926, 396, 881,
    -926, -926, 597, 10681, 11213, 8474, 11294, 1262, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, 1020, 52,
    1024, 53, 9878, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, 9878, -926, 599,
     605, -926, -926, -5, 10681, 610, -926, -926, -926, 694,
     632, 1952, -926, -926, -926, 893, 430, 464, 3564, 3564,
    3564, 3564, 3702, 3170, 3564, 3564, 2755, 2755, 413, 413,
    2443, 1038, 1038, 1172, 349, 349, 464, 464, 464, 1367,
    1367, 4828, 3862, 5104, 4000, 436, 612, -926, -5, 563,
    -926, 622, -926, 436, 4552, 744, 750, -926, 5530, 753,
    5816, 55, 55, 629, 9410, 744, 154, 11375, 8474, 11456,
    -926, 324, -926, 881, -926, -926, -926, 11537, 8474, 10970,
    5387, 10112, -926, -926, -926, -926, -926, -926, 2415, -926,
    1977, -926, -926, -926, 7851, 9878, -926, 9878, 395, -926,
     391, 3447, 4138, -5, 478, 538, -926, -926, -926, -926,
    8708, 8942, -926, -926, 10112, 2565, 637, -926, -926, -926,
    -926, 6457, 17, -926, -5, 302, 10681, 597, 50, 741,
      -5, 433, 457, -926, -926, -926, -926, -926, -926, -926,
    1180, -926, -926, -926, -926, -926, 1324, -926, -926, -926,
    -926, -926, 651, -926, 641, 9878, -926, 649, 739, 659,
    -926, 664, 754, 665, 769, -926, -926, 1086, -926, 579,
    -926, 673, -926, -926, 594, 679, -926, 464, 814, -926,
     690, -926, -926, 816, 695, 9527, -926, 597, 10681, 8591,
    9995, 9878, 11618, 8474, 11699, 719, 9995, 9995, -926, 519,
     436, 693, 672, 9995, 9995, -926, 519, 436, -926, -926,
    9644, 826, -926, 362, -926, 826, -926, -926, -926, -926,
     744, 66, -926, 100, 143, -5, 167, 190, 10112, 409,
   10112, 5387, 640, 741, -926, -5, 744, 213, 707, 7987,
    -926, 275, 298, -926, -926, -926, -926, -926, 9878, 9878,
     546, 9878, 9878, 720, 213, -926, 721, -926, -926, -926,
     466, 1180, 443, -926, 726, -5, -926, -5, -926, 9878,
    1324, -926, -926, 715, -926, -926, -926, 24, -926, 1324,
    -926, -926, 879, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, 19, -926, 19,
     731, -926, 9878, 747, 597, -926, 2565, 4966, 5242, -5,
     580, 582, 9878, -926, -926, -926, -926, -926, -926, -926,
    9995, -926, -926, -926, -926, -926, -926, 599, -926, 795,
    -926, 5933, 883, -926, 10112, 744, -926, 744, 6600, 6600,
    -926, 9761, 5673, 191, 55, 5387, 409, 744, -926, -926,
    -926, 1324, 5387, 1324, -926, -926, -926, 9878, 8942, -926,
    -926, -5, 1363, 758, 1390, -926, 756, 762, 59, -926,
    -926, -926, 763, 770, -926, 659, -926, 774, -926, 776,
    -926, 774, -926, -926, 1121, 5387, -926, -926, 6314, -926,
     777, 588, 2565, -926, -926, 10794, 72, -926, -926, 6600,
    -926, -926, 72, -926, -926, 744, 744, -926, 606, -926,
     744, -926, -926, -5, 744, 409, 707, -926, 781, 1363,
     503, -926, -926, 1140, 6600, 6314, -926, 1324, -926, 879,
    -926, -926, 879, -926, 879, -926, -926, -926, -926, -5,
     775, 803, 784, 10907, -926, 788, 659, -926, 789, 801,
    -926, -926, -926, 867, -926, 897, 115, 126, 169, 5387,
    -926, 5530, -926, -926, -926, -926, -926, 6600, -926, -926,
    -926, -926, 5387, 1363, 781, 1363, 807, -926, 381, -926,
    -926, 744, 797, 774, 810, 774, 774, 6717, 818, -926,
   10907, 1324, -926, 887, 932, 715, -926, -926, 1324, -926,
     879, -926, 171, 11780, 8474, 11861, 750, 362, 744, 744,
     781, 1363, 1140, -926, -926, -926, -926, 879, -926, -926,
    -926, 837, -926, 932, -926, 820, 821, -926, 11942, -926,
     659, 824, -926, 830, 824, 145, 197, -5, 246, 270,
    -926, -926, -926, -926, 781, -926, 774, -926, 1324, -926,
     879, -926, 812, 833, -926, 879, -926, 879, -926, -926,
     296, -926, 824, 845, 824, 824, -926, 879, -926, -926,
    -926, 824, -926
};




static const yytype_uint16 yydefact[] =
{
       2, 0, 0, 1, 0, 352, 353, 354, 0, 345,
     346, 347, 350, 348, 349, 351, 340, 341, 342, 343,
     356, 266, 266, 524, 523, 525, 526, 631, 0, 631,
      10, 0, 528, 527, 529, 613, 615, 520, 519, 614,
     522, 514, 515, 516, 517, 467, 534, 535, 0, 0,
       0, 0, 295, 642, 642, 86, 413, 489, 487, 489,
     491, 0, 0, 0, 0, 0, 0, 0, 3, 629,
       6, 9, 33, 37, 49, 57, 266, 56, 0, 74,
       0, 78, 88, 0, 54, 224, 239, 0, 291, 0,
       0, 317, 320, 629, 0, 0, 0, 0, 303, 58,
     312, 280, 281, 466, 468, 282, 283, 284, 286, 285,
     287, 464, 465, 463, 512, 530, 531, 288, 0, 289,
      62, 5, 8, 169, 180, 170, 193, 166, 186, 176,
     175, 196, 197, 191, 174, 173, 168, 194, 198, 199,
     178, 167, 181, 185, 187, 179, 172, 188, 195, 190,
     189, 182, 192, 177, 165, 184, 183, 164, 171, 162,
     163, 159, 160, 161, 117, 119, 118, 154, 155, 150,
     132, 133, 134, 141, 138, 140, 135, 136, 156, 157,
     142, 143, 147, 151, 137, 139, 129, 130, 131, 144,
     145, 146, 148, 149, 152, 153, 158, 122, 124, 126,
      26, 120, 121, 123, 125, 0, 0, 0, 0, 0,
       0, 0, 487, 0, 261, 0, 246, 271, 72, 265,
     642, 0, 530, 531, 0, 289, 642, 607, 73, 631,
      70, 0, 642, 438, 69, 631, 632, 0, 0, 21,
     236, 0, 0, 340, 341, 306, 439, 0, 218, 0,
     303, 219, 300, 0, 19, 0, 0, 629, 15, 18,
     631, 76, 14, 631, 0, 0, 635, 635, 247, 0,
       0, 635, 605, 631, 0, 0, 0, 84, 344, 0,
      94, 95, 102, 314, 414, 509, 508, 510, 507, 0,
     506, 0, 0, 0, 474, 483, 479, 485, 513, 53,
     230, 231, 638, 639, 4, 640, 630, 0, 0, 0,
       0, 0, 0, 0, 443, 441, 428, 63, 311, 422,
     424, 0, 90, 0, 82, 79, 0, 0, 0, 0,
       0, 0, 242, 243, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 240, 241, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 626, 436, 642, 625, 434,
       0, 55, 0, 0, 0, 0, 629, 0, 630, 0,
     367, 366, 0, 0, 530, 531, 289, 112, 113, 0,
       0, 115, 538, 0, 530, 531, 289, 332, 189, 182,
     192, 177, 159, 160, 161, 117, 118, 603, 334, 602,
       0, 71, 628, 627, 0, 313, 469, 0, 0, 127,
     610, 300, 272, 612, 268, 0, 0, 0, 0, 262,
     270, 436, 642, 434, 0, 0, 0, 263, 631, 0,
     305, 267, 631, 257, 642, 642, 256, 631, 310, 52,
      23, 25, 24, 0, 307, 0, 0, 0, 436, 434,
       0, 17, 0, 631, 298, 13, 630, 75, 294, 296,
     301, 637, 636, 248, 637, 250, 302, 606, 0, 101,
     513, 92, 87, 0, 436, 642, 434, 562, 493, 496,
     494, 511, 490, 470, 488, 471, 472, 492, 0, 0,
       0, 0, 0, 641, 7, 27, 28, 29, 30, 31,
      50, 51, 448, 445, 60, 64, 448, 0, 34, 276,
       0, 36, 275, 631, 0, 80, 91, 48, 38, 46,
       0, 251, 271, 200, 35, 0, 289, 216, 223, 225,
     226, 227, 234, 235, 228, 229, 209, 210, 232, 233,
     631, 220, 221, 222, 211, 212, 213, 214, 215, 244,
     245, 616, 618, 617, 619, 0, 266, 433, 631, 616,
     618, 617, 619, 0, 266, 0, 642, 358, 0, 357,
       0, 0, 0, 0, 0, 0, 300, 436, 642, 434,
     325, 330, 112, 113, 114, 536, 328, 436, 642, 434,
       0, 0, 335, 624, 623, 337, 616, 617, 266, 39,
     251, 201, 45, 208, 0, 0, 609, 0, 273, 269,
     642, 616, 617, 631, 616, 617, 608, 304, 633, 253,
     258, 260, 309, 22, 0, 237, 0, 32, 431, 429,
     207, 0, 77, 16, 631, 635, 0, 85, 620, 100,
     631, 616, 617, 568, 565, 564, 563, 566, 574, 583,
       0, 594, 584, 598, 597, 593, 562, 415, 561, 419,
     567, 569, 570, 572, 547, 576, 581, 642, 586, 642,
     591, 547, 596, 547, 0, 545, 497, 0, 473, 0,
     476, 0, 481, 478, 0, 0, 482, 217, 0, 449,
       0, 446, 445, 0, 279, 0, 89, 83, 0, 0,
       0, 0, 436, 642, 434, 0, 0, 0, 437, 67,
       0, 0, 440, 0, 0, 435, 65, 642, 355, 292,
     642, 642, 455, 642, 359, 642, 361, 318, 360, 321,
       0, 0, 324, 620, 299, 631, 616, 617, 0, 0,
       0, 0, 112, 113, 116, 631, 0, 631, 540, 0,
     255, 425, 59, 254, 128, 611, 274, 264, 0, 0,
     440, 0, 0, 642, 631, 11, 0, 297, 249, 93,
     440, 0, 379, 370, 372, 631, 368, 631, 416, 0,
       0, 554, 575, 0, 543, 601, 585, 0, 544, 0,
     557, 595, 0, 559, 599, 498, 502, 503, 504, 495,
     505, 475, 477, 484, 480, 486, 444, 642, 442, 642,
       0, 423, 0, 277, 81, 47, 252, 616, 617, 631,
     616, 617, 0, 44, 205, 43, 206, 68, 432, 634,
       0, 41, 203, 42, 204, 66, 430, 456, 457, 642,
     458, 0, 642, 364, 0, 0, 362, 0, 0, 0,
     323, 0, 0, 440, 0, 0, 0, 0, 440, 333,
     604, 562, 0, 562, 338, 426, 427, 0, 259, 308,
      20, 631, 0, 377, 0, 571, 0, 407, 0, 587,
     546, 573, 547, 547, 582, 642, 600, 547, 592, 547,
     570, 547, 499, 405, 631, 0, 403, 402, 0, 61,
     278, 440, 238, 40, 202, 0, 0, 460, 365, 0,
      12, 462, 0, 315, 316, 0, 0, 273, 642, 326,
       0, 537, 329, 631, 0, 0, 540, 369, 380, 0,
     375, 371, 418, 0, 0, 0, 417, 0, 550, 0,
     552, 542, 0, 558, 0, 555, 560, 500, 401, 631,
       0, 570, 386, 578, 579, 642, 642, 589, 386, 386,
     384, 450, 447, 0, 459, 0, 530, 531, 289, 0,
     461, 0, 319, 322, 452, 453, 451, 0, 331, 539,
     336, 541, 0, 0, 378, 0, 373, 411, 631, 409,
     412, 0, 0, 547, 547, 547, 547, 0, 0, 404,
       0, 392, 394, 0, 577, 0, 382, 383, 0, 397,
       0, 399, 300, 436, 642, 434, 642, 642, 0, 0,
     376, 0, 0, 408, 421, 420, 551, 0, 548, 553,
     556, 0, 406, 588, 385, 386, 386, 300, 436, 580,
     642, 386, 590, 386, 386, 620, 299, 631, 616, 617,
     454, 363, 327, 339, 374, 410, 547, 501, 0, 389,
       0, 391, 620, 299, 381, 0, 398, 0, 395, 400,
     440, 549, 386, 386, 386, 386, 390, 0, 387, 393,
     396, 386, 388
};


static const yytype_int16 yypgoto[] =
{
    -926, -926, -926, -377, -926, 26, -926, -410, 30, -926,
     527, -926, 76, -926, -306, -303, 10, -67, -63, -926,
    -574, -926, 2280, -9, 892, -160, 15, -80, -926, -454,
     -19, 1410, -338, 894, -51, -926, -15, -926, -926, 20,
    -926, 764, -926, 903, -926, 1193, -926, 440, -61, 283,
    -332, 77, -11, -926, -394, -159, 33, -926, -293, -24,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, 57, -926,
    -926, -926, -926, -926, -926, -926, -926, -926, -926, -116,
    2680, -345, -558, -13, -615, -926, -778, -809, 238, 127,
     249, -926, 204, -926, -787, -926, -16, -926, -926, -926,
    -926, -926, -926, -926, 266, -926, -926, -926, -926, -926,
    -926, -926, -91, -926, -926, 331, -926, -926, 518, -926,
    -926, -546, -926, 14, -926, -926, -926, -926, -926, -926,
     928, -926, -926, -926, -926, 558, -926, -926, -926, -926,
    -926, -926, 834, 973, -926, -254, -926, -926, -926, -926,
    -926, -926, -926, 13, -926, 27, -926, -1, 1278, 1501,
     950, 1962, 985, -926, -926, 129, -926, -421, 162, -588,
    -890, -437, -465, -735, 267, -548, 269, 45, -926, -926,
    -926, -150, -705, -925, 61, 284, -926, -275, -926, 62,
    -488, -926, -926, -926, 0, -388, -926, -312, -926, -926,
     -77, -926, -59, -25, 18, -526, -209, -64, -29, -2
};


static const yytype_int16 yydefgoto[] =
{
      -1, 1, 2, 68, 69, 70, 241, 565, 566, 257,
     258, 452, 259, 443, 72, 518, 73, 362, 74, 75,
     505, 692, 76, 77, 78, 260, 79, 80, 81, 472,
      82, 215, 381, 382, 197, 198, 199, 200, 604, 554,
     202, 84, 445, 353, 85, 217, 265, 523, 233, 751,
     432, 433, 230, 231, 219, 419, 434, 511, 512, 86,
     360, 263, 264, 634, 624, 364, 848, 365, 849, 738,
     977, 741, 739, 590, 592, 748, 749, 926, 249, 88,
      89, 90, 91, 92, 93, 94, 95, 96, 97, 719,
      98, 568, 727, 845, 846, 373, 773, 774, 775, 1034,
    1002, 949, 895, 896, 876, 988, 989, 283, 284, 477,
     778, 878, 657, 936, 320, 506, 99, 100, 717, 710,
     563, 555, 318, 503, 502, 690, 691, 809, 688, 689,
     807, 575, 976, 721, 839, 906, 910, 101, 102, 103,
     104, 105, 106, 107, 488, 679, 108, 490, 109, 110,
     489, 491, 291, 289, 293, 482, 677, 676, 795, 892,
     947, 997, 799, 111, 290, 112, 113, 114, 222, 223,
     117, 224, 225, 586, 740, 862, 863, 880, 781, 659,
     660, 661, 890, 663, 664, 665, 666, 954, 955, 667,
     668, 669, 670, 957, 958, 671, 672, 673, 674, 675,
     784, 400, 591, 270, 435, 227, 120, 628, 557, 595,
     589, 404, 304, 429, 430, 712, 463, 569, 368, 262
};




static const yytype_int16 yytable[] =
{
     121, 325, 237, 299, 240, 305, 288, 214, 214, 405,
     359, 234, 662, 239, 729, 316, 226, 226, 570, 637,
     517, 203, 403, 363, 609, 558, 366, 730, 201, 305,
     122, 278, 609, 524, 367, 204, 277, 484, 616, 487,
     306, 203, 584, 990, 556, 881, 398, 564, 201, 220,
     220, 268, 272, 267, 271, 204, 658, 278, 465, 87,
     697, 87, 467, 928, 298, 317, 261, 427, 777, 626,
     278, 278, 278, 221, 221, -98, 616, 201, 71, 567,
      71, 256, 726, 1042, 888, 567, 266, 760, 934, 214,
     613, 314, 598, 218, 228, 453, 931, 893, 226, 361,
     361, 517, 517, 361, 599, 602, 842, 950, 87, 556,
     847, 564, 279, -103, 770, 681, 685, 201, -532, 3,
     984, -344, -344, 221, 653, -107, 355, 402, -103, -524,
     242, 220, 990, 1042, -75, 827, 252, 629, 279, -104,
     236, 894, 835, 640, 423, -103, 221, 221, 654, -104,
     221, 372, 383, 383, -89, 221, 582, -111, -107, 294,
     583, 484, 998, 513, 629, 682, 686, -98, -109, 461,
    -344, 321, 449, 935, -532, 401, 1020, 462, -344, -110,
     746, 788, -111, 358, -110, -524, 316, -98, 235, -616,
     -98, 662, -106, 305, 236, -98, 471, 302, 455, 315,
     303, -103, 476, 851, 232, 931, 295, 881, 302, 853,
    -109, 303, 1054, 776, 302, -108, -105, 303, 420, 858,
     214, -94, 214, 214, 420, -94, 609, 609, 456, 226,
     436, 226, 888, 616, 680, 658, 680, -98, 256, -616,
     495, 496, 497, 498, 814, 437, 735, 439, 468, 744,
     312, 313, 278, 438, 766, 296, 745, -103, 508, -106,
    -103, -95, 220, 519, 220, 87, 881, 629, -104, -102,
     261, -104, 447, 923, 470, 925, 427, 629, 457, 297,
    -100, 458, -617, -108, -616, 256, 221, -107, 221, 221,
    -107, -101, 221, 901, 221, 579, 919, 571, 572, 87,
     278, 314, 305, 974, -97, 515, 428, 573, 431, -105,
      87, -111, 87, -110, -111, 662, -110, 361, 361, 361,
     361, 87, 500, 501, 662, -533, 319, -99, -96, 451,
     881, 857, 494, 279, 776, 873, -617, 322, 261, -109,
     459, 326, -109, -523, 519, 519, 953, 58, 214, -525,
    -526, -293, -104, 256, 510, 436, -293, 409, 236, 510,
    -528, 312, 313, 87, 221, 221, 221, 221, 87, 221,
     221, 819, 975, 440, 361, 361, 844, 841, 221, 562,
      87, 279, 71, 525, 441, 442, 852, 499, -106, 581,
     556, -106, 564, 471, 517, 407, 662, 941, 662, -523,
     517, 517, 235, 823, 825, -525, -526, 517, 517, 315,
     831, 833, -108, 214, 221, -108, -528, 87, 610, 327,
     436, 221, 221, 411, 562, 802, 768, 838, 623, 951,
     802, -527, 420, 420, 471, 776, 221, 776, -105, 464,
     658, -105, 658, 562, 121, 920, 617, 462, 704, 278,
     619, 757, 924, 953, -533, 622, 203, 953, -97, 732,
     953, 635, 953, 201, 525, 525, 214, 1006, 1007, 562,
     204, 632, 662, 436, 609, 416, 350, 351, 352, 221,
     616, -104, -99, 327, 425, 961, 417, -527, -529, 450,
     278, -96, 776, 986, 708, 643, 562, 644, 645, 646,
     647, -95, 715, 87, 424, 883, -518, 728, 728, -521,
     953, -111, 953, 87, 889, 705, -110, 953, 1022, 953,
     408, 1070, 71, 418, 517, 593, 236, 903, 426, 953,
     279, 696, 221, 711, 327, 444, 951, 750, 348, 349,
     350, 351, 352, 951, -529, 709, 776, -111, 776, 446,
     -97, 302, 1064, 716, 303, 643, 769, 644, 645, 646,
     647, 969, -518, 408, 722, -521, 229, 971, 761, 214,
     -97, 279, 1019, -97, -99, 232, 436, -613, -97, 214,
     872, 594, 454, -96, 776, -74, 436, 752, 711, 754,
    -111, 460, 469, 951, -99, -106, 753, -99, 723, 562,
     725, 747, -99, -96, 757, 466, -96, 731, 420, 562,
    -102, -96, 278, 473, 850, 711, 504, 203, 471, 959,
     763, 841, -614, 574, 201, 87, 492, 87, 762, 121,
     859, 204, 450, 885, 764, 221, 867, 519, -518, -518,
     985, 516, 478, 519, 519, 221, 574, 87, 221, 828,
     519, 519, 767, 713, 493, -108, 750, 478, 576, -110,
     865, 580, 994, -105, 478, 785, -620, 785, 355, 356,
     713, 854, 714, 856, 278, 855, 585, 618, 830, -101,
    -106, 221, 1047, -521, -521, -613, 620, -518, 87, 479,
    -613, 480, 627, 279, 214, -518, 478, -106, 864, -108,
     -97, 436, 621, 629, 479, -105, 480, 71, 631, -89,
     711, 479, 714, 480, 483, 753, 605, 357, 840, 843,
     711, 843, 801, 843, 562, 358, 1036, -620, -620, 913,
    -614, 914, -521, 1043, 636, -614, -271, 804, 699, -108,
    -521, 922, 695, 479, 956, 480, 481, 698, 361, 700,
     361, -431, 877, 510, 718, 279, 87, 525, 720, -99,
     221, 420, 830, 525, 525, 860, 724, 519, 779, 201,
     525, 525, 765, 648, -620, 815, -620, 912, 780, -616,
     216, 216, 869, 1073, -620, 649, 783, 355, 421, -105,
     728, 786, 921, 875, 711, 221, 787, 221, 87, 972,
     973, 789, 792, 478, 978, 897, 791, 897, 980, -96,
     355, 448, 248, 251, 652, 653, 803, 216, 216, 355,
     474, 794, 805, 478, 806, 808, 811, 486, -299, -299,
     300, 301, -272, 790, 829, 793, 422, 907, 822, 654,
     911, 841, -530, -530, 358, 886, 861, 601, 603, 886,
     479, 956, 480, 483, 361, 1040, 870, 868, 956, 422,
     956, 981, 216, 874, 601, 603, 899, 358, 475, 877,
     479, 908, 480, -531, -531, 1024, 358, -299, 915, 916,
    -617, 278, 918, 785, -273, -299, 905, 525, 1015, 927,
     630, -530, 909, -289, -289, 929, 932, 999, 87, -530,
     937, 221, 1052, 1053, 933, 87, 87, 939, 956, 87,
     956, 942, 87, 944, -274, 956, 843, 956, 983, 87,
    1000, 1001, -531, 1012, 877, 1005, 1008, 956, 962, 278,
    -531, 643, 1025, 644, 645, 646, 647, 648, 1010, 970,
    1032, 979, -289, 1037, 1021, 355, 577, 1027, 1057, 649,
    -289, -616, 87, 785, 785, 87, 960, 1058, 1060, 355,
     587, 1065, 965, 1023, 991, 992, 87, 1067, -300, -300,
     216, 650, -617, 216, 216, 216, 278, 300, 652, 653,
     355, 702, 1077, 633, 355, 1013, 370, 119, 354, 119,
     387, 87, 87, 216, 578, 216, 216, 332, 333, 1016,
     836, 1017, 358, 654, 1051, 214, 1055, 1018, 588, 871,
    1004, 478, 436, 898, 722, 843, 358, -300, 866, 355,
    1038, 948, 711, 810, 693, -300, 87, 1031, 87, 703,
    1050, 406, 292, 1014, 87, 562, 119, 358, 785, 87,
     282, 358, 343, 344, 938, 940, 415, 399, 684, 943,
    1039, 945, 884, 946, 87, 982, 887, 1033, 479, 891,
     480, 485, 1035, 960, 882, 0, 282, 886, 588, 0,
     960, 221, 960, 0, 0, 0, 358, 0, 0, 376,
     386, 386, 0, 478, 0, 216, 0, 478, 0, 0,
     521, 527, 528, 529, 530, 531, 0, 0, 532, 533,
     534, 535, 536, 537, 538, 539, 540, 0, 327, 541,
     542, 543, 544, 545, 546, 547, 548, 549, 550, 0,
     960, 216, 960, 340, 341, 0, 0, 960, 0, 960,
     479, 0, 480, 678, 479, 0, 480, 683, 0, 960,
     796, 797, 0, 798, 0, 0, 824, 826, 0, 0,
       0, 46, 47, 832, 834, 1026, 1028, 1029, 1030, 0,
       0, 952, 347, 348, 349, 350, 351, 352, 0, 0,
       0, 600, 600, 643, 0, 644, 645, 646, 647, 648,
     600, 216, 216, 0, 0, 0, 216, 0, 600, 600,
     216, 649, 987, 119, 644, 645, 646, 647, 824, 826,
       0, 832, 834, 0, 993, 0, 995, 1009, 1011, 625,
       0, 996, 0, 650, 600, 0, 0, 0, 1071, 651,
     652, 653, 0, 0, 0, 216, 0, 119, 216, 0,
       0, 0, 643, 0, 644, 645, 646, 647, 119, 216,
     119, 0, 327, 0, 0, 654, 0, 269, 655, 119,
     307, 308, 309, 310, 311, 0, 687, 340, 341, 0,
       0, 282, 41, 42, 43, 44, 236, 0, 0, 0,
     904, 216, 771, 0, 0, 1041, 0, 1044, 772, 0,
     115, 0, 115, 0, 1059, 1061, 0, 0, 0, 0,
    1066, 119, 1068, 1069, 1056, 0, 119, 348, 349, 350,
     351, 352, 0, 0, 0, 0, 0, 904, 119, 282,
       0, 526, 0, 0, 643, 0, 644, 645, 646, 647,
     648, 1076, 1078, 1079, 1080, 1072, 0, 1074, 0, 115,
    1082, 0, 649, 280, 1075, 0, 0, 0, 216, 0,
       0, 0, 216, 0, 1081, 119, 0, 0, 0, 0,
       0, 0, 216, 0, 650, 0, 0, 0, 0, 280,
     651, 652, 653, 0, 0, 0, 0, 0, 0, 216,
       0, 216, 374, 384, 384, 384, 643, 0, 644, 645,
     646, 647, 648, 0, 216, 216, 654, 0, 0, 655,
       0, 0, 526, 526, 649, 0, 0, 0, 0, 410,
       0, 656, 412, 413, 414, 0, 0, 0, 0, 0,
       0, 0, 83, 0, 83, 643, 650, 644, 645, 646,
     647, 0, 651, 652, 653, 0, 0, 0, 0, 216,
       0, 119, 0, 0, 0, 0, 0, 327, 0, 0,
       0, 119, 643, 0, 644, 645, 646, 647, 654, 0,
       0, 655, 340, 341, 0, 771, 0, 0, 282, 216,
       0, 83, 0, 0, 600, 816, 0, 216, 0, 0,
     600, 600, 0, 0, 0, 0, 0, 600, 600, 0,
       0, 0, 771, 0, 216, 0, 115, 0, 930, 345,
     346, 347, 348, 349, 350, 351, 352, 0, 0, 282,
       0, 0, 0, 116, 371, 116, 0, 0, 0, 0,
       0, 0, 0, 0, 509, 0, 0, 0, 0, 522,
     115, 0, 600, 600, 0, 600, 600, 0, 0, 0,
       0, 115, 0, 115, 0, 0, 0, 0, 0, 0,
       0, 0, 115, 216, 0, 0, 0, 0, 0, 0,
       0, 0, 116, 119, 280, 119, 281, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 119, 216, 0, 0, 0,
       0, 0, 281, 0, 115, 0, 902, 0, 0, 115,
       0, 0, 0, 0, 600, 375, 385, 385, 385, 0,
       0, 115, 280, 0, 0, 0, 0, 0, 0, 0,
     606, 608, 0, 0, 0, 216, 119, 0, 83, 269,
       0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 600, 216, 0, 0, 0, 0, 0, 115, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 83, 0, 608, 0, 0, 269, 0, 0,
       0, 0, 800, 83, 0, 83, 0, 0, 0, 0,
       0, 0, 0, 0, 83, 0, 0, 0, 0, 0,
       0, 0, 0, 282, 119, 526, 0, 0, 0, 0,
       0, 526, 526, 0, 0, 0, 0, 0, 526, 526,
     694, 0, 0, 0, 0, 0, 0, 0, 0, 116,
       0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
       0, 83, 0, 0, 115, 0, 119, 0, 0, 0,
       0, 0, 0, 83, 115, 0, 520, 0, 0, 0,
       0, 0, 0, 116, 0, 0, 0, 0, 0, 0,
       0, 280, 0, 0, 116, 0, 116, 0, 0, 0,
       0, 0, 0, 0, 0, 116, 0, 522, 0, 0,
      83, 0, 0, 0, 0, 0, 0, 281, 216, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 280, 0, 0, 0, 0, 0, 755, 0,
     756, 0, 0, 0, 0, 0, 0, 116, 0, 0,
       0, 0, 116, 608, 269, 526, 0, 520, 520, 0,
       0, 0, 0, 0, 116, 281, 119, 0, 0, 0,
       0, 0, 0, 119, 119, 0, 0, 119, 0, 0,
     119, 0, 0, 0, 0, 0, 115, 119, 115, 0,
       0, 0, 0, 0, 0, 0, 83, 0, 782, 0,
       0, 116, 0, 0, 0, 0, 83, 0, 115, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     119, 0, 0, 119, 0, 0, 0, 0, 813, 0,
     968, 0, 0, 0, 119, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
       0, 0, 0, 837, 280, 0, 0, 0, 0, 119,
     119, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 386, 0,
       0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
       0, 0, 0, 0, 119, 0, 119, 116, 0, 0,
       0, 0, 119, 0, 118, 0, 118, 119, 0, 0,
       0, 0, 879, 0, 281, 0, 280, 115, 83, 0,
      83, 0, 119, 0, 0, 386, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 701, 0, 0, 0,
      83, 0, 0, 0, 0, 900, 0, 0, 0, 0,
       0, 0, 0, 118, 0, 281, 0, 0, 0, 115,
       0, 701, 327, 328, 329, 330, 331, 332, 333, 334,
     335, 336, 337, 338, 339, 0, 0, 340, 341, 0,
       0, 83, 0, 0, 917, 0, 0, 327, 328, 329,
     330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
       0, 269, 340, 341, 0, 0, 0, 0, 0, 116,
     342, 116, 343, 344, 345, 346, 347, 348, 349, 350,
     351, 352, 0, 0, 0, 0, 0, 0, 0, -246,
       0, 116, 0, 0, 0, 342, 0, 343, 344, 345,
     346, 347, 348, 349, 350, 351, 352, 0, 0, 83,
     520, 0, 0, 0, 0, 0, 520, 520, 0, 115,
       0, 0, 0, 520, 520, 0, 115, 115, 0, 0,
     115, 0, 116, 115, 0, 0, 0, 281, 0, 0,
     115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 83, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     118, 0, 0, 115, 0, 0, 115, 0, 0, 0,
       0, 0, 0, 966, 0, 0, 0, 115, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 281,
     116, 0, 0, 0, 118, 0, 0, 0, 0, 0,
       0, 0, 115, 115, 0, 118, 0, 118, 0, 0,
       0, 0, 0, 0, 0, 0, 118, 0, 0, 0,
       0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
     520, 0, 116, 0, 0, 0, 0, 115, 0, 115,
       0, 83, 0, 0, 0, 115, 0, 0, 83, 83,
     115, 0, 83, 0, 0, 83, 0, 0, 118, 0,
       0, 0, 83, 118, 0, 115, 0, 0, 384, 0,
       0, 0, 0, 0, 0, 118, 0, 0, 118, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 83, 0, 0, 83, 0,
       0, 0, 0, 0, 0, 964, 0, 0, 0, 83,
       0, 0, 118, 0, 0, 0, 0, 0, 247, 247,
       0, 0, 0, 247, 247, 247, 0, 0, 0, 0,
       0, 0, 116, 0, 83, 83, 0, 247, 0, 116,
     116, 0, 0, 116, 0, 0, 116, 0, 0, 0,
       0, 247, 0, 116, 0, 0, 0, 0, 0, 118,
     118, 0, 0, 0, 247, 247, 247, 0, 0, 83,
       0, 83, 0, 0, 0, 0, 0, 83, 0, 0,
       0, 0, 83, 0, 0, 0, 116, 0, 0, 116,
       0, 0, 0, 0, 0, 0, 967, 83, 118, 0,
     116, 0, 0, 0, 0, -642, 0, 0, 118, 0,
       0, 0, 0, -642, -642, -642, 0, 0, -642, -642,
    -642, 0, -642, 0, 0, 116, 116, 0, 0, 0,
       0, -642, -642, 0, 0, 0, 0, 0, 0, 0,
       0, 0, -642, -642, 385, -642, -642, -642, -642, -642,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     116, 0, 116, 0, 0, 0, 0, 0, 116, 0,
       0, 0, 0, 116, 0, 0, 247, 0, 0, 247,
     247, 247, 0, 247, 0, 0, 0, 0, 116, 0,
       0, 385, -642, -642, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 327, 328, 329, 330, 331, 332, 333,
     334, 335, 336, 337, 338, 339, -642, 0, 340, 341,
     118, 0, 118, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, -642,
    -642, 0, 118, 0, 232, -642, 247, -642, 0, -642,
    -642, 342, 0, 343, 344, 345, 346, 347, 348, 349,
     350, 351, 352, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 236, 0,
       0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 247, 0, 0, 247, 247, 247,
     247, 247, 0, 0, 247, 247, 247, 247, 247, 247,
     247, 247, 247, 0, 0, 247, 247, 247, 247, 247,
     247, 247, 247, 247, 247, 327, 328, 329, 330, 331,
     332, 333, 334, 335, 336, 337, 338, 339, 0, 0,
     340, 341, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 118, 118, 0, 0, 0, 0, 0, 118, 118,
       0, 0, 0, 0, 0, 118, 118, 0, 0, 0,
       0, 0, 0, 342, 0, 343, 344, 345, 346, 347,
     348, 349, 350, 351, 352, 0, 247, 247, 247, 0,
       0, 0, 0, 118, 247, 247, 247, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 247, 0, 0, 250, 250,
     247, 0, 0, 250, 250, 250, 0, 0, 0, 0,
       0, 247, 0, 0, 247, 0, 0, 250, 0, 0,
       0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
       0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 247, 0, 250, 250, 250, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 247, 0, 0,
       0, 0, 118, 0, 247, 0, 0, 0, 0, 0,
       0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
     118, 118, 0, 0, 118, 0, 0, 118, 0, 0,
       0, 0, 0, 0, 118, 327, 328, 329, 330, 331,
     332, 333, 334, 335, 336, 337, -643, -643, 0, 0,
     340, 341, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 247, 0, 0, 118, 0, 0,
     118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 118, 0, 0, 0, 343, 344, 345, 346, 347,
     348, 349, 350, 351, 352, 247, 250, 247, 0, 250,
     250, 250, 0, 250, 0, 0, 118, 118, 0, 0,
     247, 247, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 118, 0, 118, 0, 0, 0, 0, 0, 118,
       0, 0, 0, 0, 118, 247, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 250, 0, 0, 118,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 247, 0, 0, 247, 0,
       0, 247, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     247, 0, 0, 0, 250, 0, 0, 250, 250, 250,
     250, 250, 0, 0, 250, 250, 250, 250, 250, 250,
     250, 250, 250, 0, 0, 250, 250, 250, 250, 250,
     250, 250, 250, 250, 250, 0, 0, 0, 247, 247,
       0, 247, 247, 0, 0, 0, 0, 551, 552, 0,
       0, 553, 0, 0, 0, 0, 0, 0, 0, 247,
       0, 0, 0, 167, 168, 169, 170, 171, 172, 173,
     174, 175, 0, 0, 176, 177, 0, 0, 178, 179,
     180, 181, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 247, 182, 183, 0, 250, 250, 250, 0,
       0, 0, 247, 0, 250, 250, 250, 0, 0, 0,
       0, 0, 0, 0, 0, 184, 185, 186, 187, 188,
     189, 190, 191, 192, 193, 250, 194, 195, 0, 0,
     250, 247, 0, 196, 0, 0, 0, 0, 0, 0,
       0, 250, 559, 560, 250, 0, 561, 247, 247, 0,
       0, 0, 0, 250, 0, 0, 0, 0, 167, 168,
     169, 170, 171, 172, 173, 174, 175, 0, 0, 176,
     177, 0, 250, 178, 179, 180, 181, 0, 0, 0,
       0, 0, 0, 0, 0, 247, 0, 250, 182, 183,
       0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     184, 185, 186, 187, 188, 189, 190, 191, 192, 193,
       0, 194, 195, 0, 0, 0, 0, 0, 196, 0,
       0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
     327, 328, 329, 330, 331, 332, 333, 334, 0, 336,
     337, 0, 0, 0, 250, 340, 341, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     247, 0, 0, 0, 0, 250, 0, 250, 0, 0,
     343, 344, 345, 346, 347, 348, 349, 350, 351, 352,
     250, 250, 0, -642, 4, 0, 5, 6, 7, 8,
       9, 0, 0, 0, 10, 11, 250, 0, 0, 12,
       0, 13, 14, 15, 16, 17, 18, 19, 0, 0,
       0, 0, 0, 20, 21, 22, 23, 24, 25, 26,
       0, 0, 27, 0, 0, 250, 0, 0, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 0, 41, 42, 43, 44, 0, 45, 46, 47,
       0, 48, 49, 0, 0, 250, 0, 0, 250, 0,
       0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 50, 0, 0, 51, 52, 0, 53, 54,
     250, 55, 0, 0, 56, 57, 58, 59, 60, 61,
      62, 63, 64, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 65, 66, 67, 0, 0, 250, 250,
       0, 250, 250, 0, 0, -642, 0, -620, -642, 0,
       0, 0, 0, 0, 0, -620, -620, -620, 0, 250,
    -620, -620, -620, 0, -620, 0, 0, 0, 0, 0,
       0, 0, 0, -620, -620, -620, -620, 0, 0, 0,
       0, 0, 0, 0, -620, -620, 0, -620, -620, -620,
    -620, -620, 250, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, -620, -620, -620,
    -620, -620, -620, -620, -620, -620, -620, -620, -620, -620,
       0, 250, -620, -620, -620, -620, 0, 758, -620, 0,
       0, 0, 0, 0, -620, 0, 0, 250, 250, 0,
       0, 0, 0, 0, 0, 0, 0, 0, -620, 0,
       0, -620, 0, 0, -107, -620, -620, -620, -620, -620,
    -620, -620, -620, -620, -620, -620, -620, 0, 0, 0,
       0, -620, -620, -620, -620, 250, -518, -620, -620, -620,
       0, -620, -620, 0, -518, -518, -518, 0, 0, -518,
    -518, -518, 0, -518, 0, 0, 0, 0, 0, 0,
       0, -518, 0, -518, -518, -518, 0, 0, 0, 0,
       0, 0, 0, -518, -518, 0, -518, -518, -518, -518,
    -518, 0, 0, 250, 327, -643, -643, -643, -643, 332,
     333, 0, 0, -643, -643, 0, 0, 0, 0, 340,
     341, 0, 0, 0, 0, 0, -518, -518, -518, -518,
    -518, -518, -518, -518, -518, -518, -518, -518, -518, 0,
       0, -518, -518, -518, -518, 0, -518, -518, 0, 0,
     250, 0, 0, -518, 343, 344, 345, 346, 347, 348,
     349, 350, 351, 352, 0, 0, 0, -518, 0, 0,
    -518, 0, 0, -518, -518, -518, -518, -518, -518, -518,
    -518, -518, -518, -518, -518, -518, 0, 0, 0, 0,
       0, -518, -518, -518, -521, 0, -518, -518, -518, 0,
    -518, -518, -521, -521, -521, 0, 0, -521, -521, -521,
       0, -521, 0, 0, 0, 0, 0, 0, 0, -521,
       0, -521, -521, -521, 0, 0, 0, 0, 0, 0,
       0, -521, -521, 0, -521, -521, -521, -521, -521, 0,
       0, 0, 327, 328, 329, 330, 331, 332, 333, 0,
       0, 336, 337, 0, 0, 0, 0, 340, 341, 0,
       0, 0, 0, 0, -521, -521, -521, -521, -521, -521,
    -521, -521, -521, -521, -521, -521, -521, 0, 0, -521,
    -521, -521, -521, 0, -521, -521, 0, 0, 0, 0,
       0, -521, 343, 344, 345, 346, 347, 348, 349, 350,
     351, 352, 0, 0, 0, -521, 0, 0, -521, 0,
       0, -521, -521, -521, -521, -521, -521, -521, -521, -521,
    -521, -521, -521, -521, 0, 0, 0, 0, 0, -521,
    -521, -521, -621, 0, -521, -521, -521, 0, -521, -521,
    -621, -621, -621, 0, 0, -621, -621, -621, 0, -621,
       0, 0, 0, 0, 0, 0, 0, 0, -621, -621,
    -621, -621, 0, 0, 0, 0, 0, 0, 0, -621,
    -621, 0, -621, -621, -621, -621, -621, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, -621, -621, -621, -621, -621, -621, -621, -621,
    -621, -621, -621, -621, -621, 0, 0, -621, -621, -621,
    -621, 0, 0, -621, 0, 0, 0, 0, 0, -621,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -621, 0, 0, -621, 0, 0, 0,
    -621, -621, -621, -621, -621, -621, -621, -621, -621, -621,
    -621, -621, 0, 0, 0, 0, -621, -621, -621, -621,
    -622, 0, -621, -621, -621, 0, -621, -621, -622, -622,
    -622, 0, 0, -622, -622, -622, 0, -622, 0, 0,
       0, 0, 0, 0, 0, 0, -622, -622, -622, -622,
       0, 0, 0, 0, 0, 0, 0, -622, -622, 0,
    -622, -622, -622, -622, -622, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -622, -622, -622, -622, -622, -622, -622, -622, -622, -622,
    -622, -622, -622, 0, 0, -622, -622, -622, -622, 0,
       0, -622, 0, 0, 0, 0, 0, -622, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, -622, 0, 0, -622, 0, 0, 0, -622, -622,
    -622, -622, -622, -622, -622, -622, -622, -622, -622, -622,
       0, 0, 0, 0, -622, -622, -622, -622, -299, 0,
    -622, -622, -622, 0, -622, -622, -299, -299, -299, 0,
       0, -299, -299, -299, 0, -299, 0, 0, 0, 0,
       0, 0, 0, 0, 0, -299, -299, -299, 0, 0,
       0, 0, 0, 0, 0, -299, -299, 0, -299, -299,
    -299, -299, -299, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, -299, -299,
    -299, -299, -299, -299, -299, -299, -299, -299, -299, -299,
    -299, 0, 0, -299, -299, -299, -299, 0, 759, -299,
       0, 0, 0, 0, 0, -299, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, -299,
       0, 0, -299, 0, 0, -109, -299, -299, -299, -299,
    -299, -299, -299, -299, -299, -299, -299, -299, 0, 0,
       0, 0, 0, -299, -299, -299, -439, 0, -299, -299,
    -299, 0, -299, -299, -439, -439, -439, 0, 0, -439,
    -439, -439, 0, -439, 0, 0, 0, 0, 0, 0,
       0, 0, -439, -439, -439, 0, 0, 0, 0, 0,
       0, 0, 0, -439, -439, 0, -439, -439, -439, -439,
    -439, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, -439, -439, -439, -439,
    -439, -439, -439, -439, -439, -439, -439, -439, -439, 0,
       0, -439, -439, -439, -439, 0, 0, -439, 0, 0,
       0, 0, 0, -439, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, -439, 0, 0,
       0, 0, 0, 0, -439, 0, -439, -439, -439, -439,
    -439, -439, -439, -439, -439, -439, 0, 0, 0, 0,
    -439, -439, -439, -439, -290, 232, -439, -439, -439, 0,
    -439, -439, -290, -290, -290, 0, 0, -290, -290, -290,
       0, -290, 0, 0, 0, 0, 0, 0, 0, 0,
       0, -290, -290, -290, 0, 0, 0, 0, 0, 0,
       0, -290, -290, 0, -290, -290, -290, -290, -290, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, -290, -290, -290, -290, -290, -290,
    -290, -290, -290, -290, -290, -290, -290, 0, 0, -290,
    -290, -290, -290, 0, 0, -290, 0, 0, 0, 0,
       0, -290, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, -290, 0, 0, -290, 0,
       0, 0, -290, -290, -290, -290, -290, -290, -290, -290,
    -290, -290, -290, -290, 0, 0, 0, 0, 0, -290,
    -290, -290, -429, 0, -290, -290, -290, 0, -290, -290,
    -429, -429, -429, 0, 0, -429, -429, -429, 0, -429,
       0, 0, 0, 0, 0, 0, 0, 0, -429, -429,
    -429, 0, 0, 0, 0, 0, 0, 0, 0, -429,
    -429, 0, -429, -429, -429, -429, -429, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, -429, -429, -429, -429, -429, -429, -429, -429,
    -429, -429, -429, -429, -429, 0, 0, -429, -429, -429,
    -429, 0, 0, -429, 0, 0, 0, 0, 0, -429,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -429, 0, 0, 0, 0, 0, 0,
    -429, 0, -429, -429, -429, -429, -429, -429, -429, -429,
    -429, -429, 0, 0, 0, 0, -429, -429, -429, -429,
    -306, -429, -429, -429, -429, 0, -429, -429, -306, -306,
    -306, 0, 0, -306, -306, -306, 0, -306, 0, 0,
       0, 0, 0, 0, 0, 0, 0, -306, -306, 0,
       0, 0, 0, 0, 0, 0, 0, -306, -306, 0,
    -306, -306, -306, -306, -306, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    -306, -306, -306, -306, -306, -306, -306, -306, -306, -306,
    -306, -306, -306, 0, 0, -306, -306, -306, -306, 0,
       0, -306, 0, 0, 0, 0, 0, -306, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, -306, 0, 0, 0, 0, 0, 0, -306, 0,
    -306, -306, -306, -306, -306, -306, -306, -306, -306, -306,
       0, 0, 0, 0, 0, -306, -306, -306, -620, 229,
    -306, -306, -306, 0, -306, -306, -620, -620, -620, 0,
       0, 0, -620, -620, 0, -620, 0, 0, 0, 0,
       0, 0, 0, 0, -620, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, -620, -620, 0, -620, -620,
    -620, -620, -620, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, -620, -620,
    -620, -620, -620, -620, -620, -620, -620, -620, -620, -620,
    -620, 0, 0, -620, -620, -620, -620, 0, 706, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, -620,
       0, 0, 0, 0, 0, -107, -620, 0, -620, -620,
    -620, -620, -620, -620, -620, -620, -620, -620, 0, 0,
       0, 0, -620, -620, -620, -98, -620, 0, -620, 0,
    -620, 0, -620, -620, -620, -620, -620, 0, 0, 0,
    -620, -620, 0, -620, 0, 0, 0, 0, 0, 0,
       0, 0, -620, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -620, -620, 0, -620, -620, -620, -620,
    -620, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, -620, -620, -620, -620,
    -620, -620, -620, -620, -620, -620, -620, -620, -620, 0,
       0, -620, -620, -620, -620, 0, 706, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, -620, 0, 0,
       0, 0, 0, -107, -620, 0, -620, -620, -620, -620,
    -620, -620, -620, -620, -620, -620, 0, 0, 0, 0,
    -620, -620, -620, -620, -299, 0, -620, 0, -620, 0,
    -620, -620, -299, -299, -299, 0, 0, 0, -299, -299,
       0, -299, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, -299, -299, 0, -299, -299, -299, -299, -299, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, -299, -299, -299, -299, -299, -299,
    -299, -299, -299, -299, -299, -299, -299, 0, 0, -299,
    -299, -299, -299, 0, 707, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, -299, 0, 0, 0, 0,
       0, -109, -299, 0, -299, -299, -299, -299, -299, -299,
    -299, -299, -299, -299, 0, 0, 0, 0, 0, -299,
    -299, -100, -299, 0, -299, 0, -299, 0, -299, -299,
    -299, -299, -299, 0, 0, 0, -299, -299, 0, -299,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, -299,
    -299, 0, -299, -299, -299, -299, -299, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, -299, -299, -299, -299, -299, -299, -299, -299,
    -299, -299, -299, -299, -299, 0, 0, -299, -299, -299,
    -299, 0, 707, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -299, 0, 0, 0, 0, 0, -109,
    -299, 0, -299, -299, -299, -299, -299, -299, -299, -299,
    -299, -299, 0, 0, 0, 0, 0, -299, -299, -299,
       0, 0, -299, 0, -299, 0, -299, -299, 253, 0,
       5, 6, 7, 8, 9, -642, -642, -642, 10, 11,
       0, 0, -642, 12, 0, 13, 14, 15, 16, 17,
      18, 19, 0, 0, 0, 0, 0, 20, 21, 22,
      23, 24, 25, 26, 0, 0, 27, 0, 0, 0,
       0, 0, 28, 29, 254, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 48, 49, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 50, 0, 0, 51,
      52, 0, 53, 54, 0, 55, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 65, 66, 67,
       0, 0, 0, 0, 0, 0, 0, 0, 0, -642,
       0, 253, -642, 5, 6, 7, 8, 9, 0, 0,
    -642, 10, 11, 0, -642, -642, 12, 0, 13, 14,
      15, 16, 17, 18, 19, 0, 0, 0, 0, 0,
      20, 21, 22, 23, 24, 25, 26, 0, 0, 27,
       0, 0, 0, 0, 0, 28, 29, 254, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 0, 41,
      42, 43, 44, 0, 45, 46, 47, 0, 48, 49,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
       0, 0, 51, 52, 0, 53, 54, 0, 55, 0,
       0, 56, 57, 58, 59, 60, 61, 62, 63, 64,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      65, 66, 67, 0, 0, 0, 0, 0, 0, 0,
       0, 0, -642, 0, 253, -642, 5, 6, 7, 8,
       9, 0, 0, -642, 10, 11, 0, 0, -642, 12,
    -642, 13, 14, 15, 16, 17, 18, 19, 0, 0,
       0, 0, 0, 20, 21, 22, 23, 24, 25, 26,
       0, 0, 27, 0, 0, 0, 0, 0, 28, 29,
     254, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 0, 41, 42, 43, 44, 0, 45, 46, 47,
       0, 48, 49, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 50, 0, 0, 51, 52, 0, 53, 54,
       0, 55, 0, 0, 56, 57, 58, 59, 60, 61,
      62, 63, 64, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 65, 66, 67, 0, 0, 0, 0,
       0, 0, 0, 0, 0, -642, 0, 253, -642, 5,
       6, 7, 8, 9, 0, 0, -642, 10, 11, 0,
       0, -642, 12, 0, 13, 14, 15, 16, 17, 18,
      19, 0, 0, 0, 0, 0, 20, 21, 22, 23,
      24, 25, 26, 0, 0, 27, 0, 0, 0, 0,
       0, 28, 29, 254, 31, 32, 33, 34, 35, 36,
      37, 38, 39, 40, 0, 41, 42, 43, 44, 0,
      45, 46, 47, 0, 48, 49, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 50, 0, 0, 51, 52,
       0, 53, 54, 0, 55, 0, 0, 56, 57, 58,
      59, 60, 61, 62, 63, 64, 0, 0, 0, 0,
       0, 0, 0, 0, 253, 0, 5, 6, 7, 8,
       9, 0, -642, -642, 10, 11, 65, 66, 67, 12,
       0, 13, 14, 15, 16, 17, 18, 19, -642, 0,
       0, -642, 0, 20, 21, 22, 23, 24, 25, 26,
       0, 0, 27, 0, 0, 0, 0, 0, 28, 29,
     254, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 0, 41, 42, 43, 44, 0, 45, 46, 47,
       0, 48, 49, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 50, 0, 0, 51, 52, 0, 53, 54,
       0, 55, 0, 0, 56, 57, 58, 59, 60, 61,
      62, 63, 64, 0, 0, 0, 0, 0, 0, 0,
       0, 253, 0, 5, 6, 7, 8, 9, 0, 0,
       0, 10, 11, 65, 66, 67, 12, 0, 13, 14,
      15, 16, 17, 18, 19, -642, 0, 0, -642, 0,
      20, 21, 22, 23, 24, 25, 26, 0, 0, 27,
       0, 0, 0, 0, 0, 28, 29, 254, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 0, 41,
      42, 43, 44, 0, 45, 46, 47, 0, 48, 49,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
       0, 0, 255, 52, 0, 53, 54, 0, 55, 0,
       0, 56, 57, 58, 59, 60, 61, 62, 63, 64,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      65, 66, 67, 253, 0, 5, 6, 7, 8, 9,
    -642, 0, -642, 10, 11, -642, 0, 0, 12, 0,
      13, 14, 15, 16, 17, 18, 19, 0, 0, 0,
       0, 0, 20, 21, 22, 23, 24, 25, 26, 0,
       0, 27, 0, 0, 0, 0, 0, 28, 29, 254,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
       0, 41, 42, 43, 44, 0, 45, 46, 47, 0,
      48, 49, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 50, 0, 0, 51, 52, 0, 53, 54, 0,
      55, 0, 0, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 65, 66, 67, 253, 0, 5, 6, 7,
       8, 9, -642, 0, -642, 10, 11, -642, 0, 0,
      12, 0, 13, 14, 15, 16, 17, 18, 19, 0,
       0, 0, 0, 0, 20, 21, 22, 23, 24, 25,
      26, 0, 0, 27, 0, 0, 0, 0, 0, 28,
      29, 254, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 0, 41, 42, 43, 44, 0, 45, 46,
      47, 0, 48, 49, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 50, 0, 0, 51, 52, 0, 53,
      54, 0, 55, 0, 0, 56, 57, 58, 59, 60,
      61, 62, 63, 64, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 65, 66, 67, 0, 0, -642,
       0, 0, 0, 0, 0, 0, -642, 0, 4, -642,
       5, 6, 7, 8, 9, 0, 0, 0, 10, 11,
       0, 0, 0, 12, 0, 13, 14, 15, 16, 17,
      18, 19, 0, 0, 0, 0, 0, 20, 21, 22,
      23, 24, 25, 26, 0, 0, 27, 0, 0, 0,
       0, 0, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 48, 49, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 50, 0, 0, 51,
      52, 0, 53, 54, 0, 55, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 65, 66, 67,
       0, 0, -642, 0, 0, 0, 0, 0, 0, -642,
       0, 253, -642, 5, 6, 7, 8, 9, 0, 0,
    -642, 10, 11, 0, 0, 0, 12, 0, 13, 14,
      15, 16, 17, 18, 19, 0, 0, 0, 0, 0,
      20, 21, 22, 23, 24, 25, 26, 0, 0, 27,
       0, 0, 0, 0, 0, 28, 29, 254, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 0, 41,
      42, 43, 44, 0, 45, 46, 47, 0, 48, 49,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
       0, 0, 51, 52, 0, 53, 54, 0, 55, 0,
       0, 56, 57, 58, 59, 60, 61, 62, 63, 64,
       0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
       5, 6, 7, 8, 9, 0, 0, 0, 10, 11,
      65, 66, 67, 12, 0, 13, 14, 15, 16, 17,
      18, 19, -642, 0, 0, -642, 0, 20, 21, 22,
      23, 24, 25, 26, 0, 0, 27, 0, 0, 0,
       0, 0, 28, 29, 254, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 48, 49, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 50, 0, 0, 51,
      52, 0, 53, 54, 0, 55, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, -642, 0,
       0, 0, 0, 0, 0, 0, 0, 5, 6, 7,
       0, 9, 0, 0, 0, 10, 11, 65, 66, 67,
      12, 0, 13, 14, 15, 16, 17, 18, 19, -642,
       0, 0, -642, 0, 20, 21, 22, 23, 24, 25,
      26, 0, 0, 205, 0, 0, 0, 0, 0, 0,
      29, 0, 0, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 206, 41, 42, 43, 44, 0, 45, 46,
      47, 0, 48, 49, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 207, 0, 0, 208, 52, 0, 53,
      54, 0, 209, 210, 211, 56, 57, 212, 59, 60,
      61, 62, 63, 64, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 5, 6, 7, 0, 9, 0,
       0, 0, 10, 11, 65, 213, 67, 12, 0, 13,
      14, 15, 16, 17, 18, 19, 0, 0, 0, 236,
       0, 20, 21, 22, 23, 24, 25, 26, 0, 0,
      27, 0, 0, 0, 0, 0, 0, 29, 0, 0,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 0,
      41, 42, 43, 44, 0, 45, 46, 47, 0, 48,
      49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     207, 0, 0, 208, 52, 0, 53, 54, 0, 0,
       0, 0, 56, 57, 58, 59, 60, 61, 62, 63,
      64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 5, 6, 7, 0, 9, 0, 0, 0, 10,
      11, 65, 66, 67, 12, 0, 13, 14, 15, 16,
      17, 18, 19, 302, 0, 0, 303, 0, 20, 21,
      22, 23, 24, 25, 26, 0, 0, 27, 0, 0,
       0, 0, 0, 0, 29, 0, 0, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 0, 41, 42, 43,
      44, 0, 45, 46, 47, 0, 48, 49, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
     208, 52, 0, 53, 54, 0, 0, 0, 0, 56,
      57, 58, 59, 60, 61, 62, 63, 64, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 5, 6,
       7, 8, 9, 0, 0, 0, 10, 11, 65, 66,
      67, 12, 0, 13, 14, 15, 16, 17, 18, 19,
       0, 0, 0, 236, 0, 20, 21, 22, 23, 24,
      25, 26, 0, 0, 27, 0, 0, 0, 0, 0,
      28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
      38, 39, 40, 0, 41, 42, 43, 44, 0, 45,
      46, 47, 0, 48, 49, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 50, 0, 0, 51, 52, 0,
      53, 54, 0, 55, 0, 0, 56, 57, 58, 59,
      60, 61, 62, 63, 64, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 5, 6, 7, 8, 9,
       0, 0, 0, 10, 11, 65, 66, 67, 12, 0,
      13, 14, 15, 16, 17, 18, 19, 493, 0, 0,
       0, 0, 20, 21, 22, 23, 24, 25, 26, 0,
       0, 27, 0, 0, 0, 0, 0, 28, 29, 254,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
       0, 41, 42, 43, 44, 0, 45, 46, 47, 0,
      48, 49, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 50, 0, 0, 51, 52, 0, 53, 54, 0,
      55, 0, 0, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 65, 66, 67, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 493, 123, 124, 125, 126, 127,
     128, 129, 130, 131, 132, 133, 134, 135, 136, 137,
     138, 139, 140, 141, 142, 143, 144, 145, 146, 0,
       0, 0, 147, 148, 149, 388, 389, 390, 391, 154,
     155, 156, 0, 0, 0, 0, 0, 157, 158, 159,
     160, 392, 393, 394, 395, 165, 37, 38, 396, 40,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     167, 168, 169, 170, 171, 172, 173, 174, 175, 0,
       0, 176, 177, 0, 0, 178, 179, 180, 181, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     182, 183, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 184, 185, 186, 187, 188, 189, 190, 191,
     192, 193, 0, 194, 195, 0, 0, 0, 0, 0,
     196, 397, 123, 124, 125, 126, 127, 128, 129, 130,
     131, 132, 133, 134, 135, 136, 137, 138, 139, 140,
     141, 142, 143, 144, 145, 146, 0, 0, 0, 147,
     148, 149, 150, 151, 152, 153, 154, 155, 156, 0,
       0, 0, 0, 0, 157, 158, 159, 160, 161, 162,
     163, 164, 165, 285, 286, 166, 287, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 167, 168, 169,
     170, 171, 172, 173, 174, 175, 0, 0, 176, 177,
       0, 0, 178, 179, 180, 181, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 182, 183, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
     185, 186, 187, 188, 189, 190, 191, 192, 193, 0,
     194, 195, 0, 0, 0, 0, 0, 196, 123, 124,
     125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
     135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
     145, 146, 0, 0, 0, 147, 148, 149, 150, 151,
     152, 153, 154, 155, 156, 0, 0, 0, 0, 0,
     157, 158, 159, 160, 161, 162, 163, 164, 165, 238,
       0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 167, 168, 169, 170, 171, 172, 173,
     174, 175, 0, 0, 176, 177, 0, 0, 178, 179,
     180, 181, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 182, 183, 0, 0, 57, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 184, 185, 186, 187, 188,
     189, 190, 191, 192, 193, 0, 194, 195, 0, 0,
       0, 0, 0, 196, 123, 124, 125, 126, 127, 128,
     129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
     139, 140, 141, 142, 143, 144, 145, 146, 0, 0,
       0, 147, 148, 149, 150, 151, 152, 153, 154, 155,
     156, 0, 0, 0, 0, 0, 157, 158, 159, 160,
     161, 162, 163, 164, 165, 0, 0, 166, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
     168, 169, 170, 171, 172, 173, 174, 175, 0, 0,
     176, 177, 0, 0, 178, 179, 180, 181, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
     183, 0, 0, 57, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 184, 185, 186, 187, 188, 189, 190, 191, 192,
     193, 0, 194, 195, 0, 0, 0, 0, 0, 196,
     123, 124, 125, 126, 127, 128, 129, 130, 131, 132,
     133, 134, 135, 136, 137, 138, 139, 140, 141, 142,
     143, 144, 145, 146, 0, 0, 0, 147, 148, 149,
     150, 151, 152, 153, 154, 155, 156, 0, 0, 0,
       0, 0, 157, 158, 159, 160, 161, 162, 163, 164,
     165, 0, 0, 166, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 167, 168, 169, 170, 171,
     172, 173, 174, 175, 0, 0, 176, 177, 0, 0,
     178, 179, 180, 181, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 182, 183, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 184, 185, 186,
     187, 188, 189, 190, 191, 192, 193, 0, 194, 195,
       5, 6, 7, 0, 9, 196, 0, 0, 10, 11,
       0, 0, 0, 12, 0, 13, 14, 15, 243, 244,
      18, 19, 0, 0, 0, 0, 0, 20, 245, 246,
      23, 24, 25, 26, 0, 0, 205, 0, 0, 0,
       0, 0, 0, 273, 0, 0, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 274, 0, 0, 208,
      52, 0, 53, 54, 0, 0, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       5, 6, 7, 0, 9, 0, 0, 275, 10, 11,
       0, 0, 0, 12, 276, 13, 14, 15, 243, 244,
      18, 19, 0, 0, 0, 0, 0, 20, 245, 246,
      23, 24, 25, 26, 0, 0, 205, 0, 0, 0,
       0, 0, 0, 273, 0, 0, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 274, 0, 0, 208,
      52, 0, 53, 54, 0, 0, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       5, 6, 7, 8, 9, 0, 0, 275, 10, 11,
       0, 0, 0, 12, 514, 13, 14, 15, 16, 17,
      18, 19, 0, 0, 0, 0, 0, 20, 21, 22,
      23, 24, 25, 26, 0, 0, 27, 0, 0, 0,
       0, 0, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 48, 49, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 50, 0, 0, 51,
      52, 0, 53, 54, 0, 55, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 5, 6, 7,
       0, 9, 0, 0, 0, 10, 11, 65, 66, 67,
      12, 0, 13, 14, 15, 16, 17, 18, 19, 0,
       0, 0, 0, 0, 20, 21, 22, 23, 24, 25,
      26, 0, 0, 205, 0, 0, 0, 0, 0, 0,
      29, 0, 0, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 206, 41, 42, 43, 44, 0, 45, 46,
      47, 0, 48, 49, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 207, 0, 0, 208, 52, 0, 53,
      54, 0, 209, 210, 211, 56, 57, 212, 59, 60,
      61, 62, 63, 64, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 5, 6, 7, 8, 9, 0,
       0, 0, 10, 11, 65, 213, 67, 12, 0, 13,
      14, 15, 16, 17, 18, 19, 0, 0, 0, 0,
       0, 20, 21, 22, 23, 24, 25, 26, 0, 0,
      27, 0, 0, 0, 0, 0, 28, 29, 0, 31,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 0,
      41, 42, 43, 44, 0, 45, 46, 47, 0, 48,
      49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      50, 0, 0, 51, 52, 0, 53, 54, 0, 55,
       0, 0, 56, 57, 58, 59, 60, 61, 62, 63,
      64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 5, 6, 7, 0, 9, 0, 0, 0, 10,
      11, 65, 66, 67, 12, 0, 13, 14, 15, 243,
     244, 18, 19, 0, 0, 0, 0, 0, 20, 245,
     246, 23, 24, 25, 26, 0, 0, 205, 0, 0,
       0, 0, 0, 0, 29, 0, 0, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 206, 41, 42, 43,
      44, 0, 45, 46, 47, 0, 48, 49, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
     208, 52, 0, 53, 54, 0, 607, 210, 211, 56,
      57, 212, 59, 60, 61, 62, 63, 64, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 5, 6,
       7, 0, 9, 0, 0, 0, 10, 11, 65, 213,
      67, 12, 0, 13, 14, 15, 243, 244, 18, 19,
       0, 0, 0, 0, 0, 20, 245, 246, 23, 24,
      25, 26, 0, 0, 205, 0, 0, 0, 0, 0,
       0, 29, 0, 0, 32, 33, 34, 35, 36, 37,
      38, 39, 40, 206, 41, 42, 43, 44, 0, 45,
      46, 47, 0, 48, 49, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 207, 0, 0, 208, 52, 0,
      53, 54, 0, 209, 210, 0, 56, 57, 212, 59,
      60, 61, 62, 63, 64, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 5, 6, 7, 0, 9,
       0, 0, 0, 10, 11, 65, 213, 67, 12, 0,
      13, 14, 15, 243, 244, 18, 19, 0, 0, 0,
       0, 0, 20, 245, 246, 23, 24, 25, 26, 0,
       0, 205, 0, 0, 0, 0, 0, 0, 29, 0,
       0, 32, 33, 34, 35, 36, 37, 38, 39, 40,
     206, 41, 42, 43, 44, 0, 45, 46, 47, 0,
      48, 49, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 207, 0, 0, 208, 52, 0, 53, 54, 0,
       0, 210, 211, 56, 57, 212, 59, 60, 61, 62,
      63, 64, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 5, 6, 7, 0, 9, 0, 0, 0,
      10, 11, 65, 213, 67, 12, 0, 13, 14, 15,
     243, 244, 18, 19, 0, 0, 0, 0, 0, 20,
     245, 246, 23, 24, 25, 26, 0, 0, 205, 0,
       0, 0, 0, 0, 0, 29, 0, 0, 32, 33,
      34, 35, 36, 37, 38, 39, 40, 206, 41, 42,
      43, 44, 0, 45, 46, 47, 0, 48, 49, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
       0, 208, 52, 0, 53, 54, 0, 607, 210, 0,
      56, 57, 212, 59, 60, 61, 62, 63, 64, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
       6, 7, 0, 9, 0, 0, 0, 10, 11, 65,
     213, 67, 12, 0, 13, 14, 15, 243, 244, 18,
      19, 0, 0, 0, 0, 0, 20, 245, 246, 23,
      24, 25, 26, 0, 0, 205, 0, 0, 0, 0,
       0, 0, 29, 0, 0, 32, 33, 34, 35, 36,
      37, 38, 39, 40, 206, 41, 42, 43, 44, 0,
      45, 46, 47, 0, 48, 49, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 207, 0, 0, 208, 52,
       0, 53, 54, 0, 0, 210, 0, 56, 57, 212,
      59, 60, 61, 62, 63, 64, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 5, 6, 7, 0,
       9, 0, 0, 0, 10, 11, 65, 213, 67, 12,
       0, 13, 14, 15, 16, 17, 18, 19, 0, 0,
       0, 0, 0, 20, 21, 22, 23, 24, 25, 26,
       0, 0, 205, 0, 0, 0, 0, 0, 0, 29,
       0, 0, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 0, 41, 42, 43, 44, 0, 45, 46, 47,
       0, 48, 49, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 207, 0, 0, 208, 52, 0, 53, 54,
       0, 507, 0, 0, 56, 57, 58, 59, 60, 61,
      62, 63, 64, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 5, 6, 7, 0, 9, 0, 0,
       0, 10, 11, 65, 213, 67, 12, 0, 13, 14,
      15, 243, 244, 18, 19, 0, 0, 0, 0, 0,
      20, 245, 246, 23, 24, 25, 26, 0, 0, 205,
       0, 0, 0, 0, 0, 0, 29, 0, 0, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 0, 41,
      42, 43, 44, 0, 45, 46, 47, 0, 48, 49,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 207,
       0, 0, 208, 52, 0, 53, 54, 0, 209, 0,
       0, 56, 57, 58, 59, 60, 61, 62, 63, 64,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       5, 6, 7, 0, 9, 0, 0, 0, 10, 11,
      65, 213, 67, 12, 0, 13, 14, 15, 243, 244,
      18, 19, 0, 0, 0, 0, 0, 20, 245, 246,
      23, 24, 25, 26, 0, 0, 205, 0, 0, 0,
       0, 0, 0, 29, 0, 0, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 48, 49, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 207, 0, 0, 208,
      52, 0, 53, 54, 0, 812, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 5, 6, 7,
       0, 9, 0, 0, 0, 10, 11, 65, 213, 67,
      12, 0, 13, 14, 15, 243, 244, 18, 19, 0,
       0, 0, 0, 0, 20, 245, 246, 23, 24, 25,
      26, 0, 0, 205, 0, 0, 0, 0, 0, 0,
      29, 0, 0, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 0, 41, 42, 43, 44, 0, 45, 46,
      47, 0, 48, 49, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 207, 0, 0, 208, 52, 0, 53,
      54, 0, 507, 0, 0, 56, 57, 58, 59, 60,
      61, 62, 63, 64, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 5, 6, 7, 0, 9, 0,
       0, 0, 10, 11, 65, 213, 67, 12, 0, 13,
      14, 15, 243, 244, 18, 19, 0, 0, 0, 0,
       0, 20, 245, 246, 23, 24, 25, 26, 0, 0,
     205, 0, 0, 0, 0, 0, 0, 29, 0, 0,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 0,
      41, 42, 43, 44, 0, 45, 46, 47, 0, 48,
      49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     207, 0, 0, 208, 52, 0, 53, 54, 0, 607,
       0, 0, 56, 57, 58, 59, 60, 61, 62, 63,
      64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 5, 6, 7, 0, 9, 0, 0, 0, 10,
      11, 65, 213, 67, 12, 0, 13, 14, 15, 243,
     244, 18, 19, 0, 0, 0, 0, 0, 20, 245,
     246, 23, 24, 25, 26, 0, 0, 205, 0, 0,
       0, 0, 0, 0, 29, 0, 0, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 0, 41, 42, 43,
      44, 0, 45, 46, 47, 0, 48, 49, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
     208, 52, 0, 53, 54, 0, 0, 0, 0, 56,
      57, 58, 59, 60, 61, 62, 63, 64, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 5, 6,
       7, 0, 9, 0, 0, 0, 10, 11, 65, 213,
      67, 12, 0, 13, 14, 15, 16, 17, 18, 19,
       0, 0, 0, 0, 0, 20, 21, 22, 23, 24,
      25, 26, 0, 0, 205, 0, 0, 0, 0, 0,
       0, 29, 0, 0, 32, 33, 34, 35, 36, 37,
      38, 39, 40, 0, 41, 42, 43, 44, 0, 45,
      46, 47, 0, 48, 49, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 207, 0, 0, 208, 52, 0,
      53, 54, 0, 0, 0, 0, 56, 57, 58, 59,
      60, 61, 62, 63, 64, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 5, 6, 7, 0, 9,
       0, 0, 0, 10, 11, 65, 213, 67, 12, 0,
      13, 14, 15, 16, 17, 18, 19, 0, 0, 0,
       0, 0, 20, 21, 22, 23, 24, 25, 26, 0,
       0, 27, 0, 0, 0, 0, 0, 0, 29, 0,
       0, 32, 33, 34, 35, 36, 37, 38, 39, 40,
       0, 41, 42, 43, 44, 0, 45, 46, 47, 0,
      48, 49, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 207, 0, 0, 208, 52, 0, 53, 54, 0,
       0, 0, 0, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 5, 6, 7, 0, 9, 0, 0, 0,
      10, 11, 65, 66, 67, 12, 0, 13, 14, 15,
     243, 244, 18, 19, 0, 0, 0, 0, 0, 20,
     245, 246, 23, 24, 25, 26, 0, 0, 205, 0,
       0, 0, 0, 0, 0, 273, 0, 0, 32, 33,
      34, 35, 36, 37, 38, 39, 40, 0, 41, 42,
      43, 44, 0, 45, 46, 47, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 274, 0,
       0, 323, 52, 0, 53, 54, 0, 324, 0, 0,
      56, 57, 58, 59, 60, 61, 62, 63, 64, 0,
       0, 0, 0, 0, 0, 5, 6, 7, 0, 9,
       0, 0, 0, 10, 11, 0, 0, 0, 12, 275,
      13, 14, 15, 243, 244, 18, 19, 0, 0, 0,
       0, 0, 20, 245, 246, 23, 24, 25, 26, 0,
       0, 205, 0, 0, 0, 0, 0, 0, 273, 0,
       0, 32, 33, 34, 35, 36, 37, 38, 39, 40,
       0, 41, 42, 43, 44, 0, 45, 46, 47, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 369, 0, 0, 51, 52, 0, 53, 54, 0,
      55, 0, 0, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 0, 0, 0, 0, 0, 0, 5, 6,
       7, 0, 9, 0, 0, 0, 10, 11, 0, 0,
       0, 12, 275, 13, 14, 15, 243, 244, 18, 19,
       0, 0, 0, 0, 0, 20, 245, 246, 23, 24,
      25, 26, 0, 0, 205, 0, 0, 0, 0, 0,
       0, 273, 0, 0, 32, 33, 34, 377, 36, 37,
      38, 378, 40, 0, 41, 42, 43, 44, 0, 45,
      46, 47, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     379, 0, 0, 0, 380, 0, 0, 208, 52, 0,
      53, 54, 0, 0, 0, 0, 56, 57, 58, 59,
      60, 61, 62, 63, 64, 0, 0, 0, 0, 0,
       0, 5, 6, 7, 0, 9, 0, 0, 0, 10,
      11, 0, 0, 0, 12, 275, 13, 14, 15, 243,
     244, 18, 19, 0, 0, 0, 0, 0, 20, 245,
     246, 23, 24, 25, 26, 0, 0, 205, 0, 0,
       0, 0, 0, 0, 273, 0, 0, 32, 33, 34,
     377, 36, 37, 38, 378, 40, 0, 41, 42, 43,
      44, 0, 45, 46, 47, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
     208, 52, 0, 53, 54, 0, 0, 0, 0, 56,
      57, 58, 59, 60, 61, 62, 63, 64, 0, 0,
       0, 0, 0, 0, 5, 6, 7, 0, 9, 0,
       0, 0, 10, 11, 0, 0, 0, 12, 275, 13,
      14, 15, 243, 244, 18, 19, 0, 0, 0, 0,
       0, 20, 245, 246, 23, 24, 25, 26, 0, 0,
     205, 0, 0, 0, 0, 0, 0, 273, 0, 0,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 0,
      41, 42, 43, 44, 0, 45, 46, 47, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     274, 0, 0, 323, 52, 0, 53, 54, 0, 0,
       0, 0, 56, 57, 58, 59, 60, 61, 62, 63,
      64, 0, 0, 0, 0, 0, 0, 5, 6, 7,
       0, 9, 0, 0, 0, 10, 11, 0, 0, 0,
      12, 275, 13, 14, 15, 243, 244, 18, 19, 0,
       0, 0, 0, 0, 20, 245, 246, 23, 24, 25,
      26, 0, 0, 205, 0, 0, 0, 0, 0, 0,
     273, 0, 0, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 0, 41, 42, 43, 44, 0, 45, 46,
      47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 963, 0, 0, 208, 52, 0, 53,
      54, 0, 0, 0, 0, 56, 57, 58, 59, 60,
      61, 62, 63, 64, 0, 0, 0, 0, 0, 0,
       5, 6, 7, 0, 9, 0, 0, 0, 10, 11,
       0, 0, 0, 12, 275, 13, 14, 15, 243, 244,
      18, 19, 0, 0, 0, 0, 0, 20, 245, 246,
      23, 24, 25, 26, 0, 0, 205, 0, 0, 0,
       0, 0, 0, 273, 0, 0, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 0, 41, 42, 43, 44,
       0, 45, 46, 47, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 1003, 0, 0, 208,
      52, 0, 53, 54, 0, 0, 0, 0, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 0, 0, 0,
       0, 0, 596, 560, 0, 0, 597, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 275, 167, 168,
     169, 170, 171, 172, 173, 174, 175, 0, 0, 176,
     177, 0, 0, 178, 179, 180, 181, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 182, 183,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     184, 185, 186, 187, 188, 189, 190, 191, 192, 193,
       0, 194, 195, 611, 552, 0, 0, 612, 196, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
     168, 169, 170, 171, 172, 173, 174, 175, 0, 0,
     176, 177, 0, 0, 178, 179, 180, 181, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
     183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 184, 185, 186, 187, 188, 189, 190, 191, 192,
     193, 0, 194, 195, 614, 560, 0, 0, 615, 196,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     167, 168, 169, 170, 171, 172, 173, 174, 175, 0,
       0, 176, 177, 0, 0, 178, 179, 180, 181, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     182, 183, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 184, 185, 186, 187, 188, 189, 190, 191,
     192, 193, 0, 194, 195, 638, 552, 0, 0, 639,
     196, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 167, 168, 169, 170, 171, 172, 173, 174, 175,
       0, 0, 176, 177, 0, 0, 178, 179, 180, 181,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 182, 183, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 184, 185, 186, 187, 188, 189, 190,
     191, 192, 193, 0, 194, 195, 641, 560, 0, 0,
     642, 196, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 167, 168, 169, 170, 171, 172, 173, 174,
     175, 0, 0, 176, 177, 0, 0, 178, 179, 180,
     181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 182, 183, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 184, 185, 186, 187, 188, 189,
     190, 191, 192, 193, 0, 194, 195, 733, 552, 0,
       0, 734, 196, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 167, 168, 169, 170, 171, 172, 173,
     174, 175, 0, 0, 176, 177, 0, 0, 178, 179,
     180, 181, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 182, 183, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 184, 185, 186, 187, 188,
     189, 190, 191, 192, 193, 0, 194, 195, 736, 560,
       0, 0, 737, 196, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 167, 168, 169, 170, 171, 172,
     173, 174, 175, 0, 0, 176, 177, 0, 0, 178,
     179, 180, 181, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 182, 183, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 184, 185, 186, 187,
     188, 189, 190, 191, 192, 193, 0, 194, 195, 742,
     552, 0, 0, 743, 196, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 167, 168, 169, 170, 171,
     172, 173, 174, 175, 0, 0, 176, 177, 0, 0,
     178, 179, 180, 181, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 182, 183, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 184, 185, 186,
     187, 188, 189, 190, 191, 192, 193, 0, 194, 195,
     817, 552, 0, 0, 818, 196, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 167, 168, 169, 170,
     171, 172, 173, 174, 175, 0, 0, 176, 177, 0,
       0, 178, 179, 180, 181, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 182, 183, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 184, 185,
     186, 187, 188, 189, 190, 191, 192, 193, 0, 194,
     195, 820, 560, 0, 0, 821, 196, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 167, 168, 169,
     170, 171, 172, 173, 174, 175, 0, 0, 176, 177,
       0, 0, 178, 179, 180, 181, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 182, 183, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
     185, 186, 187, 188, 189, 190, 191, 192, 193, 0,
     194, 195, 1045, 552, 0, 0, 1046, 196, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 167, 168,
     169, 170, 171, 172, 173, 174, 175, 0, 0, 176,
     177, 0, 0, 178, 179, 180, 181, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 182, 183,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     184, 185, 186, 187, 188, 189, 190, 191, 192, 193,
       0, 194, 195, 1048, 560, 0, 0, 1049, 196, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 167,
     168, 169, 170, 171, 172, 173, 174, 175, 0, 0,
     176, 177, 0, 0, 178, 179, 180, 181, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 182,
     183, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 184, 185, 186, 187, 188, 189, 190, 191, 192,
     193, 0, 194, 195, 1062, 552, 0, 0, 1063, 196,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     167, 168, 169, 170, 171, 172, 173, 174, 175, 0,
       0, 176, 177, 0, 0, 178, 179, 180, 181, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     182, 183, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 184, 185, 186, 187, 188, 189, 190, 191,
     192, 193, 0, 194, 195, 0, 0, 0, 0, 0,
     196
};

static const yytype_int16 yycheck[] =
{
       2, 81, 27, 66, 29, 69, 57, 16, 17, 100,
      87, 22, 477, 28, 572, 76, 16, 17, 363, 473,
     326, 8, 99, 90, 418, 357, 93, 573, 8, 93,
       4, 55, 426, 326, 93, 8, 55, 291, 426, 293,
      69, 28, 380, 933, 356, 780, 97, 359, 28, 16,
      17, 53, 54, 53, 54, 28, 477, 81, 267, 2,
     514, 4, 271, 872, 65, 76, 51, 226, 656, 446,
      94, 95, 96, 16, 17, 25, 464, 57, 2, 13,
       4, 51, 27, 1008, 789, 13, 53, 613, 29, 98,
     422, 26, 404, 16, 17, 255, 874, 78, 98, 89,
      90, 407, 408, 93, 407, 408, 721, 894, 51, 421,
     725, 423, 55, 25, 640, 63, 63, 97, 90, 0,
     929, 87, 88, 66, 100, 25, 87, 88, 13, 88,
     134, 98, 1022, 1058, 117, 709, 56, 449, 81, 13,
     145, 122, 716, 475, 221, 117, 89, 90, 124, 25,
      93, 94, 95, 96, 137, 98, 52, 25, 13, 143,
      56, 415, 949, 323, 476, 113, 113, 117, 25, 137,
     136, 117, 249, 114, 90, 98, 985, 145, 144, 25,
     590, 669, 13, 144, 13, 144, 247, 137, 139, 139,
     140, 656, 25, 257, 145, 145, 276, 142, 257, 134,
     145, 117, 279, 137, 139, 983, 143, 942, 142, 735,
      13, 145, 1021, 650, 142, 25, 25, 145, 220, 745,
     229, 137, 231, 232, 226, 137, 620, 621, 257, 229,
     232, 231, 937, 621, 488, 656, 490, 137, 208, 139,
     307, 308, 309, 310, 698, 235, 578, 237, 273, 587,
      37, 38, 276, 235, 631, 143, 588, 142, 321, 13,
     145, 137, 229, 326, 231, 208, 1001, 579, 142, 137,
     255, 145, 242, 861, 275, 863, 435, 589, 260, 143,
     137, 263, 139, 13, 139, 255, 229, 142, 231, 232,
     145, 137, 235, 819, 237, 372, 854, 364, 365, 242,
     324, 26, 366, 918, 137, 324, 229, 366, 231, 13,
     253, 142, 255, 142, 145, 780, 145, 307, 308, 309,
     310, 264, 312, 313, 789, 90, 28, 137, 137, 253,
    1065, 741, 306, 276, 771, 772, 139, 137, 323, 142,
     264, 117, 145, 88, 407, 408, 894, 103, 357, 88,
      88, 140, 117, 323, 321, 357, 145, 137, 145, 326,
      88, 37, 38, 306, 307, 308, 309, 310, 311, 312,
     313, 703, 918, 54, 364, 365, 14, 15, 321, 359,
     323, 324, 306, 326, 65, 66, 731, 311, 142, 379,
     702, 145, 704, 473, 700, 90, 861, 885, 863, 144,
     706, 707, 139, 706, 707, 144, 144, 713, 714, 134,
     713, 714, 142, 422, 357, 145, 144, 360, 418, 70,
     422, 364, 365, 56, 404, 679, 635, 720, 443, 894,
     684, 88, 434, 435, 514, 872, 379, 874, 142, 137,
     861, 145, 863, 423, 446, 855, 428, 145, 525, 473,
     432, 610, 862, 1001, 90, 437, 443, 1005, 25, 575,
    1008, 461, 1010, 443, 407, 408, 475, 955, 956, 449,
     443, 453, 937, 475, 868, 117, 127, 128, 129, 422,
     868, 117, 25, 70, 90, 895, 91, 144, 88, 90,
     514, 25, 929, 930, 555, 52, 476, 54, 55, 56,
      57, 137, 563, 446, 90, 780, 88, 571, 572, 88,
    1058, 117, 1060, 456, 789, 540, 117, 1065, 137, 1067,
      90, 1047, 446, 137, 830, 88, 145, 830, 137, 1077,
     473, 513, 475, 558, 70, 139, 1001, 598, 125, 126,
     127, 128, 129, 1008, 144, 556, 983, 117, 985, 134,
     117, 142, 1040, 564, 145, 52, 636, 54, 55, 56,
      57, 906, 144, 90, 566, 144, 139, 912, 90, 578,
     137, 514, 982, 140, 117, 139, 578, 26, 145, 588,
     137, 144, 140, 117, 1021, 117, 588, 598, 613, 604,
     117, 141, 56, 1058, 137, 117, 598, 140, 568, 579,
     570, 591, 145, 137, 763, 135, 140, 574, 610, 589,
     137, 145, 636, 137, 730, 640, 97, 604, 698, 894,
     620, 15, 26, 17, 604, 568, 70, 570, 90, 631,
     746, 604, 90, 783, 624, 578, 90, 700, 87, 88,
     137, 137, 63, 706, 707, 588, 17, 590, 591, 710,
     713, 714, 634, 90, 142, 117, 717, 63, 56, 117,
     751, 25, 937, 117, 63, 667, 26, 669, 87, 88,
      90, 738, 90, 740, 698, 739, 121, 140, 90, 137,
     117, 624, 1014, 87, 88, 134, 137, 136, 631, 110,
     139, 112, 135, 636, 703, 144, 63, 117, 749, 117,
     137, 703, 137, 1015, 110, 117, 112, 631, 134, 137,
     735, 110, 90, 112, 113, 717, 115, 136, 720, 721,
     745, 723, 143, 725, 704, 144, 1001, 87, 88, 845,
     134, 847, 136, 1008, 137, 139, 137, 143, 44, 117,
     144, 857, 137, 110, 894, 112, 113, 137, 738, 117,
     740, 139, 777, 720, 10, 698, 699, 700, 8, 137,
     703, 763, 90, 706, 707, 747, 13, 830, 117, 749,
     713, 714, 135, 58, 134, 699, 136, 844, 137, 139,
      16, 17, 764, 1058, 144, 70, 137, 87, 88, 117,
     854, 52, 856, 775, 819, 738, 137, 740, 741, 915,
     916, 137, 137, 63, 920, 807, 52, 809, 924, 137,
      87, 88, 48, 49, 99, 100, 143, 53, 54, 87,
      88, 52, 143, 63, 10, 135, 10, 67, 87, 88,
      66, 67, 137, 671, 141, 673, 136, 839, 119, 124,
     842, 15, 87, 88, 144, 783, 139, 407, 408, 787,
     110, 1001, 112, 113, 844, 1005, 135, 137, 1008, 136,
    1010, 925, 98, 137, 424, 425, 135, 144, 136, 894,
     110, 841, 112, 87, 88, 991, 144, 136, 848, 849,
     139, 905, 852, 885, 137, 144, 91, 830, 965, 871,
     450, 136, 9, 87, 88, 137, 140, 122, 841, 144,
     137, 844, 1018, 1019, 142, 848, 849, 137, 1058, 852,
    1060, 137, 855, 137, 137, 1065, 918, 1067, 137, 862,
     117, 137, 136, 56, 949, 137, 137, 1077, 898, 953,
     144, 52, 135, 54, 55, 56, 57, 58, 137, 909,
     122, 923, 136, 56, 137, 87, 88, 137, 111, 70,
     144, 139, 895, 955, 956, 898, 894, 137, 137, 87,
      88, 137, 905, 988, 934, 935, 909, 137, 87, 88,
     206, 92, 139, 209, 210, 211, 1000, 213, 99, 100,
      87, 88, 137, 456, 87, 88, 94, 2, 85, 4,
      96, 934, 935, 229, 136, 231, 232, 75, 76, 969,
     717, 971, 144, 124, 1017, 1014, 1022, 977, 136, 771,
     953, 63, 1014, 809, 1016, 1017, 144, 136, 752, 87,
      88, 894, 1047, 692, 506, 144, 969, 997, 971, 136,
    1016, 103, 59, 136, 977, 1015, 51, 144, 1040, 982,
      55, 144, 120, 121, 882, 883, 212, 97, 490, 887,
    1005, 889, 783, 891, 997, 926, 789, 1000, 110, 792,
     112, 113, 1001, 1001, 780, -1, 81, 1005, 136, -1,
    1008, 1014, 1010, -1, -1, -1, 144, -1, -1, 94,
      95, 96, -1, 63, -1, 321, -1, 63, -1, -1,
     326, 327, 328, 329, 330, 331, -1, -1, 334, 335,
     336, 337, 338, 339, 340, 341, 342, -1, 70, 345,
     346, 347, 348, 349, 350, 351, 352, 353, 354, -1,
    1058, 357, 1060, 85, 86, -1, -1, 1065, -1, 1067,
     110, -1, 112, 113, 110, -1, 112, 113, -1, 1077,
      54, 55, -1, 57, -1, -1, 706, 707, -1, -1,
      -1, 65, 66, 713, 714, 993, 994, 995, 996, -1,
      -1, 894, 124, 125, 126, 127, 128, 129, -1, -1,
      -1, 407, 408, 52, -1, 54, 55, 56, 57, 58,
     416, 417, 418, -1, -1, -1, 422, -1, 424, 425,
     426, 70, 52, 208, 54, 55, 56, 57, 758, 759,
      -1, 761, 762, -1, 937, -1, 939, 958, 959, 445,
      -1, 944, -1, 92, 450, -1, -1, -1, 1056, 98,
      99, 100, -1, -1, -1, 461, -1, 242, 464, -1,
      -1, -1, 52, -1, 54, 55, 56, 57, 253, 475,
     255, -1, 70, -1, -1, 124, -1, 54, 127, 264,
      40, 41, 42, 43, 44, -1, 492, 85, 86, -1,
      -1, 276, 59, 60, 61, 62, 145, -1, -1, -1,
     830, 507, 92, -1, -1, 1008, -1, 1010, 98, -1,
       2, -1, 4, -1, 1035, 1036, -1, -1, -1, -1,
    1041, 306, 1043, 1044, 1027, -1, 311, 125, 126, 127,
     128, 129, -1, -1, -1, -1, -1, 867, 323, 324,
      -1, 326, -1, -1, 52, -1, 54, 55, 56, 57,
      58, 1072, 1073, 1074, 1075, 1058, -1, 1060, -1, 51,
    1081, -1, 70, 55, 1067, -1, -1, -1, 574, -1,
      -1, -1, 578, -1, 1077, 360, -1, -1, -1, -1,
      -1, -1, 588, -1, 92, -1, -1, -1, -1, 81,
      98, 99, 100, -1, -1, -1, -1, -1, -1, 605,
      -1, 607, 94, 95, 96, 97, 52, -1, 54, 55,
      56, 57, 58, -1, 620, 621, 124, -1, -1, 127,
      -1, -1, 407, 408, 70, -1, -1, -1, -1, 206,
      -1, 139, 209, 210, 211, -1, -1, -1, -1, -1,
      -1, -1, 2, -1, 4, 52, 92, 54, 55, 56,
      57, -1, 98, 99, 100, -1, -1, -1, -1, 665,
      -1, 446, -1, -1, -1, -1, -1, 70, -1, -1,
      -1, 456, 52, -1, 54, 55, 56, 57, 124, -1,
      -1, 127, 85, 86, -1, 92, -1, -1, 473, 695,
      -1, 51, -1, -1, 700, 701, -1, 703, -1, -1,
     706, 707, -1, -1, -1, -1, -1, 713, 714, -1,
      -1, -1, 92, -1, 720, -1, 208, -1, 98, 122,
     123, 124, 125, 126, 127, 128, 129, -1, -1, 514,
      -1, -1, -1, 2, 94, 4, -1, -1, -1, -1,
      -1, -1, -1, -1, 321, -1, -1, -1, -1, 326,
     242, -1, 758, 759, -1, 761, 762, -1, -1, -1,
      -1, 253, -1, 255, -1, -1, -1, -1, -1, -1,
      -1, -1, 264, 779, -1, -1, -1, -1, -1, -1,
      -1, -1, 51, 568, 276, 570, 55, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 590, 812, -1, -1, -1,
      -1, -1, 81, -1, 306, -1, 822, -1, -1, 311,
      -1, -1, -1, -1, 830, 94, 95, 96, 97, -1,
      -1, 323, 324, -1, -1, -1, -1, -1, -1, -1,
     417, 418, -1, -1, -1, 851, 631, -1, 208, 426,
      -1, 636, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 867, 868, -1, -1, -1, -1, -1, 360, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 242, -1, 461, -1, -1, 464, -1, -1,
      -1, -1, 677, 253, -1, 255, -1, -1, -1, -1,
      -1, -1, -1, -1, 264, -1, -1, -1, -1, -1,
      -1, -1, -1, 698, 699, 700, -1, -1, -1, -1,
      -1, 706, 707, -1, -1, -1, -1, -1, 713, 714,
     507, -1, -1, -1, -1, -1, -1, -1, -1, 208,
      -1, -1, -1, -1, -1, -1, 306, -1, -1, -1,
      -1, 311, -1, -1, 446, -1, 741, -1, -1, -1,
      -1, -1, -1, 323, 456, -1, 326, -1, -1, -1,
      -1, -1, -1, 242, -1, -1, -1, -1, -1, -1,
      -1, 473, -1, -1, 253, -1, 255, -1, -1, -1,
      -1, -1, -1, -1, -1, 264, -1, 574, -1, -1,
     360, -1, -1, -1, -1, -1, -1, 276, 1014, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 514, -1, -1, -1, -1, -1, 605, -1,
     607, -1, -1, -1, -1, -1, -1, 306, -1, -1,
      -1, -1, 311, 620, 621, 830, -1, 407, 408, -1,
      -1, -1, -1, -1, 323, 324, 841, -1, -1, -1,
      -1, -1, -1, 848, 849, -1, -1, 852, -1, -1,
     855, -1, -1, -1, -1, -1, 568, 862, 570, -1,
      -1, -1, -1, -1, -1, -1, 446, -1, 665, -1,
      -1, 360, -1, -1, -1, -1, 456, -1, 590, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     895, -1, -1, 898, -1, -1, -1, -1, 695, -1,
     905, -1, -1, -1, 909, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 631,
      -1, -1, -1, 720, 636, -1, -1, -1, -1, 934,
     935, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 953, -1,
      -1, -1, -1, -1, -1, -1, -1, 446, -1, -1,
      -1, -1, -1, -1, 969, -1, 971, 456, -1, -1,
      -1, -1, 977, -1, 2, -1, 4, 982, -1, -1,
      -1, -1, 779, -1, 473, -1, 698, 699, 568, -1,
     570, -1, 997, -1, -1, 1000, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 44, -1, -1, -1,
     590, -1, -1, -1, -1, 812, -1, -1, -1, -1,
      -1, -1, -1, 51, -1, 514, -1, -1, -1, 741,
      -1, 44, 70, 71, 72, 73, 74, 75, 76, 77,
      78, 79, 80, 81, 82, -1, -1, 85, 86, -1,
      -1, 631, -1, -1, 851, -1, -1, 70, 71, 72,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      -1, 868, 85, 86, -1, -1, -1, -1, -1, 568,
     118, 570, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, -1, -1, -1, -1, -1, -1, 137,
      -1, 590, -1, -1, -1, 118, -1, 120, 121, 122,
     123, 124, 125, 126, 127, 128, 129, -1, -1, 699,
     700, -1, -1, -1, -1, -1, 706, 707, -1, 841,
      -1, -1, -1, 713, 714, -1, 848, 849, -1, -1,
     852, -1, 631, 855, -1, -1, -1, 636, -1, -1,
     862, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 741, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     208, -1, -1, 895, -1, -1, 898, -1, -1, -1,
      -1, -1, -1, 905, -1, -1, -1, 909, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 698,
     699, -1, -1, -1, 242, -1, -1, -1, -1, -1,
      -1, -1, 934, 935, -1, 253, -1, 255, -1, -1,
      -1, -1, -1, -1, -1, -1, 264, -1, -1, -1,
      -1, 953, -1, -1, -1, -1, -1, -1, -1, -1,
     830, -1, 741, -1, -1, -1, -1, 969, -1, 971,
      -1, 841, -1, -1, -1, 977, -1, -1, 848, 849,
     982, -1, 852, -1, -1, 855, -1, -1, 306, -1,
      -1, -1, 862, 311, -1, 997, -1, -1, 1000, -1,
      -1, -1, -1, -1, -1, 323, -1, -1, 326, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 895, -1, -1, 898, -1,
      -1, -1, -1, -1, -1, 905, -1, -1, -1, 909,
      -1, -1, 360, -1, -1, -1, -1, -1, 48, 49,
      -1, -1, -1, 53, 54, 55, -1, -1, -1, -1,
      -1, -1, 841, -1, 934, 935, -1, 67, -1, 848,
     849, -1, -1, 852, -1, -1, 855, -1, -1, -1,
      -1, 81, -1, 862, -1, -1, -1, -1, -1, 407,
     408, -1, -1, -1, 94, 95, 96, -1, -1, 969,
      -1, 971, -1, -1, -1, -1, -1, 977, -1, -1,
      -1, -1, 982, -1, -1, -1, 895, -1, -1, 898,
      -1, -1, -1, -1, -1, -1, 905, 997, 446, -1,
     909, -1, -1, -1, -1, 0, -1, -1, 456, -1,
      -1, -1, -1, 8, 9, 10, -1, -1, 13, 14,
      15, -1, 17, -1, -1, 934, 935, -1, -1, -1,
      -1, 26, 27, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 37, 38, 953, 40, 41, 42, 43, 44,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     969, -1, 971, -1, -1, -1, -1, -1, 977, -1,
      -1, -1, -1, 982, -1, -1, 206, -1, -1, 209,
     210, 211, -1, 213, -1, -1, -1, -1, 997, -1,
      -1, 1000, 87, 88, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 70, 71, 72, 73, 74, 75, 76,
      77, 78, 79, 80, 81, 82, 111, -1, 85, 86,
     568, -1, 570, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 134,
     135, -1, 590, -1, 139, 140, 276, 142, -1, 144,
     145, 118, -1, 120, 121, 122, 123, 124, 125, 126,
     127, 128, 129, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 145, -1,
      -1, -1, -1, 631, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 324, -1, -1, 327, 328, 329,
     330, 331, -1, -1, 334, 335, 336, 337, 338, 339,
     340, 341, 342, -1, -1, 345, 346, 347, 348, 349,
     350, 351, 352, 353, 354, 70, 71, 72, 73, 74,
      75, 76, 77, 78, 79, 80, 81, 82, -1, -1,
      85, 86, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 699, 700, -1, -1, -1, -1, -1, 706, 707,
      -1, -1, -1, -1, -1, 713, 714, -1, -1, -1,
      -1, -1, -1, 118, -1, 120, 121, 122, 123, 124,
     125, 126, 127, 128, 129, -1, 416, 417, 418, -1,
      -1, -1, -1, 741, 424, 425, 426, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 445, -1, -1, 48, 49,
     450, -1, -1, 53, 54, 55, -1, -1, -1, -1,
      -1, 461, -1, -1, 464, -1, -1, 67, -1, -1,
      -1, -1, -1, 473, -1, -1, -1, -1, -1, -1,
      -1, 81, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 492, -1, 94, 95, 96, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 507, -1, -1,
      -1, -1, 830, -1, 514, -1, -1, -1, -1, -1,
      -1, -1, -1, 841, -1, -1, -1, -1, -1, -1,
     848, 849, -1, -1, 852, -1, -1, 855, -1, -1,
      -1, -1, -1, -1, 862, 70, 71, 72, 73, 74,
      75, 76, 77, 78, 79, 80, 81, 82, -1, -1,
      85, 86, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 574, -1, -1, 895, -1, -1,
     898, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 909, -1, -1, -1, 120, 121, 122, 123, 124,
     125, 126, 127, 128, 129, 605, 206, 607, -1, 209,
     210, 211, -1, 213, -1, -1, 934, 935, -1, -1,
     620, 621, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 636, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 969, -1, 971, -1, -1, -1, -1, -1, 977,
      -1, -1, -1, -1, 982, 665, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 276, -1, -1, 997,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 695, -1, -1, 698, -1,
      -1, 701, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     720, -1, -1, -1, 324, -1, -1, 327, 328, 329,
     330, 331, -1, -1, 334, 335, 336, 337, 338, 339,
     340, 341, 342, -1, -1, 345, 346, 347, 348, 349,
     350, 351, 352, 353, 354, -1, -1, -1, 758, 759,
      -1, 761, 762, -1, -1, -1, -1, 52, 53, -1,
      -1, 56, -1, -1, -1, -1, -1, -1, -1, 779,
      -1, -1, -1, 68, 69, 70, 71, 72, 73, 74,
      75, 76, -1, -1, 79, 80, -1, -1, 83, 84,
      85, 86, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 812, 98, 99, -1, 416, 417, 418, -1,
      -1, -1, 822, -1, 424, 425, 426, -1, -1, -1,
      -1, -1, -1, -1, -1, 120, 121, 122, 123, 124,
     125, 126, 127, 128, 129, 445, 131, 132, -1, -1,
     450, 851, -1, 138, -1, -1, -1, -1, -1, -1,
      -1, 461, 52, 53, 464, -1, 56, 867, 868, -1,
      -1, -1, -1, 473, -1, -1, -1, -1, 68, 69,
      70, 71, 72, 73, 74, 75, 76, -1, -1, 79,
      80, -1, 492, 83, 84, 85, 86, -1, -1, -1,
      -1, -1, -1, -1, -1, 905, -1, 507, 98, 99,
      -1, -1, -1, -1, 514, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      -1, 131, 132, -1, -1, -1, -1, -1, 138, -1,
      -1, -1, -1, 953, -1, -1, -1, -1, -1, -1,
      70, 71, 72, 73, 74, 75, 76, 77, -1, 79,
      80, -1, -1, -1, 574, 85, 86, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    1000, -1, -1, -1, -1, 605, -1, 607, -1, -1,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
     620, 621, -1, 0, 1, -1, 3, 4, 5, 6,
       7, -1, -1, -1, 11, 12, 636, -1, -1, 16,
      -1, 18, 19, 20, 21, 22, 23, 24, -1, -1,
      -1, -1, -1, 30, 31, 32, 33, 34, 35, 36,
      -1, -1, 39, -1, -1, 665, -1, -1, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      57, -1, 59, 60, 61, 62, -1, 64, 65, 66,
      -1, 68, 69, -1, -1, 695, -1, -1, 698, -1,
      -1, 701, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 89, -1, -1, 92, 93, -1, 95, 96,
     720, 98, -1, -1, 101, 102, 103, 104, 105, 106,
     107, 108, 109, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 130, 131, 132, -1, -1, 758, 759,
      -1, 761, 762, -1, -1, 142, -1, 0, 145, -1,
      -1, -1, -1, -1, -1, 8, 9, 10, -1, 779,
      13, 14, 15, -1, 17, -1, -1, -1, -1, -1,
      -1, -1, -1, 26, 27, 28, 29, -1, -1, -1,
      -1, -1, -1, -1, 37, 38, -1, 40, 41, 42,
      43, 44, 812, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 822, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 70, 71, 72,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      -1, 851, 85, 86, 87, 88, -1, 90, 91, -1,
      -1, -1, -1, -1, 97, -1, -1, 867, 868, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 111, -1,
      -1, 114, -1, -1, 117, 118, 119, 120, 121, 122,
     123, 124, 125, 126, 127, 128, 129, -1, -1, -1,
      -1, 134, 135, 136, 137, 905, 0, 140, 141, 142,
      -1, 144, 145, -1, 8, 9, 10, -1, -1, 13,
      14, 15, -1, 17, -1, -1, -1, -1, -1, -1,
      -1, 25, -1, 27, 28, 29, -1, -1, -1, -1,
      -1, -1, -1, 37, 38, -1, 40, 41, 42, 43,
      44, -1, -1, 953, 70, 71, 72, 73, 74, 75,
      76, -1, -1, 79, 80, -1, -1, -1, -1, 85,
      86, -1, -1, -1, -1, -1, 70, 71, 72, 73,
      74, 75, 76, 77, 78, 79, 80, 81, 82, -1,
      -1, 85, 86, 87, 88, -1, 90, 91, -1, -1,
    1000, -1, -1, 97, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, -1, -1, -1, 111, -1, -1,
     114, -1, -1, 117, 118, 119, 120, 121, 122, 123,
     124, 125, 126, 127, 128, 129, -1, -1, -1, -1,
      -1, 135, 136, 137, 0, -1, 140, 141, 142, -1,
     144, 145, 8, 9, 10, -1, -1, 13, 14, 15,
      -1, 17, -1, -1, -1, -1, -1, -1, -1, 25,
      -1, 27, 28, 29, -1, -1, -1, -1, -1, -1,
      -1, 37, 38, -1, 40, 41, 42, 43, 44, -1,
      -1, -1, 70, 71, 72, 73, 74, 75, 76, -1,
      -1, 79, 80, -1, -1, -1, -1, 85, 86, -1,
      -1, -1, -1, -1, 70, 71, 72, 73, 74, 75,
      76, 77, 78, 79, 80, 81, 82, -1, -1, 85,
      86, 87, 88, -1, 90, 91, -1, -1, -1, -1,
      -1, 97, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, -1, -1, 111, -1, -1, 114, -1,
      -1, 117, 118, 119, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, -1, -1, -1, -1, -1, 135,
     136, 137, 0, -1, 140, 141, 142, -1, 144, 145,
       8, 9, 10, -1, -1, 13, 14, 15, -1, 17,
      -1, -1, -1, -1, -1, -1, -1, -1, 26, 27,
      28, 29, -1, -1, -1, -1, -1, -1, -1, 37,
      38, -1, 40, 41, 42, 43, 44, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 70, 71, 72, 73, 74, 75, 76, 77,
      78, 79, 80, 81, 82, -1, -1, 85, 86, 87,
      88, -1, -1, 91, -1, -1, -1, -1, -1, 97,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 111, -1, -1, 114, -1, -1, -1,
     118, 119, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, -1, -1, -1, 134, 135, 136, 137,
       0, -1, 140, 141, 142, -1, 144, 145, 8, 9,
      10, -1, -1, 13, 14, 15, -1, 17, -1, -1,
      -1, -1, -1, -1, -1, -1, 26, 27, 28, 29,
      -1, -1, -1, -1, -1, -1, -1, 37, 38, -1,
      40, 41, 42, 43, 44, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
      80, 81, 82, -1, -1, 85, 86, 87, 88, -1,
      -1, 91, -1, -1, -1, -1, -1, 97, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 111, -1, -1, 114, -1, -1, -1, 118, 119,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      -1, -1, -1, -1, 134, 135, 136, 137, 0, -1,
     140, 141, 142, -1, 144, 145, 8, 9, 10, -1,
      -1, 13, 14, 15, -1, 17, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 27, 28, 29, -1, -1,
      -1, -1, -1, -1, -1, 37, 38, -1, 40, 41,
      42, 43, 44, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 70, 71,
      72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
      82, -1, -1, 85, 86, 87, 88, -1, 90, 91,
      -1, -1, -1, -1, -1, 97, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 111,
      -1, -1, 114, -1, -1, 117, 118, 119, 120, 121,
     122, 123, 124, 125, 126, 127, 128, 129, -1, -1,
      -1, -1, -1, 135, 136, 137, 0, -1, 140, 141,
     142, -1, 144, 145, 8, 9, 10, -1, -1, 13,
      14, 15, -1, 17, -1, -1, -1, -1, -1, -1,
      -1, -1, 26, 27, 28, -1, -1, -1, -1, -1,
      -1, -1, -1, 37, 38, -1, 40, 41, 42, 43,
      44, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 70, 71, 72, 73,
      74, 75, 76, 77, 78, 79, 80, 81, 82, -1,
      -1, 85, 86, 87, 88, -1, -1, 91, -1, -1,
      -1, -1, -1, 97, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 111, -1, -1,
      -1, -1, -1, -1, 118, -1, 120, 121, 122, 123,
     124, 125, 126, 127, 128, 129, -1, -1, -1, -1,
     134, 135, 136, 137, 0, 139, 140, 141, 142, -1,
     144, 145, 8, 9, 10, -1, -1, 13, 14, 15,
      -1, 17, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 27, 28, 29, -1, -1, -1, -1, -1, -1,
      -1, 37, 38, -1, 40, 41, 42, 43, 44, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 70, 71, 72, 73, 74, 75,
      76, 77, 78, 79, 80, 81, 82, -1, -1, 85,
      86, 87, 88, -1, -1, 91, -1, -1, -1, -1,
      -1, 97, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 111, -1, -1, 114, -1,
      -1, -1, 118, 119, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, -1, -1, -1, -1, -1, 135,
     136, 137, 0, -1, 140, 141, 142, -1, 144, 145,
       8, 9, 10, -1, -1, 13, 14, 15, -1, 17,
      -1, -1, -1, -1, -1, -1, -1, -1, 26, 27,
      28, -1, -1, -1, -1, -1, -1, -1, -1, 37,
      38, -1, 40, 41, 42, 43, 44, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 70, 71, 72, 73, 74, 75, 76, 77,
      78, 79, 80, 81, 82, -1, -1, 85, 86, 87,
      88, -1, -1, 91, -1, -1, -1, -1, -1, 97,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 111, -1, -1, -1, -1, -1, -1,
     118, -1, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, -1, -1, -1, 134, 135, 136, 137,
       0, 139, 140, 141, 142, -1, 144, 145, 8, 9,
      10, -1, -1, 13, 14, 15, -1, 17, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 27, 28, -1,
      -1, -1, -1, -1, -1, -1, -1, 37, 38, -1,
      40, 41, 42, 43, 44, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
      80, 81, 82, -1, -1, 85, 86, 87, 88, -1,
      -1, 91, -1, -1, -1, -1, -1, 97, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 111, -1, -1, -1, -1, -1, -1, 118, -1,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      -1, -1, -1, -1, -1, 135, 136, 137, 0, 139,
     140, 141, 142, -1, 144, 145, 8, 9, 10, -1,
      -1, -1, 14, 15, -1, 17, -1, -1, -1, -1,
      -1, -1, -1, -1, 26, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 37, 38, -1, 40, 41,
      42, 43, 44, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 70, 71,
      72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
      82, -1, -1, 85, 86, 87, 88, -1, 90, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 111,
      -1, -1, -1, -1, -1, 117, 118, -1, 120, 121,
     122, 123, 124, 125, 126, 127, 128, 129, -1, -1,
      -1, -1, 134, 135, 136, 137, 0, -1, 140, -1,
     142, -1, 144, 145, 8, 9, 10, -1, -1, -1,
      14, 15, -1, 17, -1, -1, -1, -1, -1, -1,
      -1, -1, 26, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 37, 38, -1, 40, 41, 42, 43,
      44, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 70, 71, 72, 73,
      74, 75, 76, 77, 78, 79, 80, 81, 82, -1,
      -1, 85, 86, 87, 88, -1, 90, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 111, -1, -1,
      -1, -1, -1, 117, 118, -1, 120, 121, 122, 123,
     124, 125, 126, 127, 128, 129, -1, -1, -1, -1,
     134, 135, 136, 137, 0, -1, 140, -1, 142, -1,
     144, 145, 8, 9, 10, -1, -1, -1, 14, 15,
      -1, 17, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 37, 38, -1, 40, 41, 42, 43, 44, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 70, 71, 72, 73, 74, 75,
      76, 77, 78, 79, 80, 81, 82, -1, -1, 85,
      86, 87, 88, -1, 90, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 111, -1, -1, -1, -1,
      -1, 117, 118, -1, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, -1, -1, -1, -1, -1, 135,
     136, 137, 0, -1, 140, -1, 142, -1, 144, 145,
       8, 9, 10, -1, -1, -1, 14, 15, -1, 17,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 37,
      38, -1, 40, 41, 42, 43, 44, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 70, 71, 72, 73, 74, 75, 76, 77,
      78, 79, 80, 81, 82, -1, -1, 85, 86, 87,
      88, -1, 90, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 111, -1, -1, -1, -1, -1, 117,
     118, -1, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, -1, -1, -1, -1, 135, 136, 137,
      -1, -1, 140, -1, 142, -1, 144, 145, 1, -1,
       3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
      -1, -1, 15, 16, -1, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, 45, 46, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, 68, 69, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, 98, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 130, 131, 132,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 142,
      -1, 1, 145, 3, 4, 5, 6, 7, -1, -1,
      10, 11, 12, -1, 14, 15, 16, -1, 18, 19,
      20, 21, 22, 23, 24, -1, -1, -1, -1, -1,
      30, 31, 32, 33, 34, 35, 36, -1, -1, 39,
      -1, -1, -1, -1, -1, 45, 46, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, 57, -1, 59,
      60, 61, 62, -1, 64, 65, 66, -1, 68, 69,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 89,
      -1, -1, 92, 93, -1, 95, 96, -1, 98, -1,
      -1, 101, 102, 103, 104, 105, 106, 107, 108, 109,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     130, 131, 132, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 142, -1, 1, 145, 3, 4, 5, 6,
       7, -1, -1, 10, 11, 12, -1, -1, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, -1, -1,
      -1, -1, -1, 30, 31, 32, 33, 34, 35, 36,
      -1, -1, 39, -1, -1, -1, -1, -1, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      57, -1, 59, 60, 61, 62, -1, 64, 65, 66,
      -1, 68, 69, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 89, -1, -1, 92, 93, -1, 95, 96,
      -1, 98, -1, -1, 101, 102, 103, 104, 105, 106,
     107, 108, 109, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 130, 131, 132, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 142, -1, 1, 145, 3,
       4, 5, 6, 7, -1, -1, 10, 11, 12, -1,
      -1, 15, 16, -1, 18, 19, 20, 21, 22, 23,
      24, -1, -1, -1, -1, -1, 30, 31, 32, 33,
      34, 35, 36, -1, -1, 39, -1, -1, -1, -1,
      -1, 45, 46, 47, 48, 49, 50, 51, 52, 53,
      54, 55, 56, 57, -1, 59, 60, 61, 62, -1,
      64, 65, 66, -1, 68, 69, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 89, -1, -1, 92, 93,
      -1, 95, 96, -1, 98, -1, -1, 101, 102, 103,
     104, 105, 106, 107, 108, 109, -1, -1, -1, -1,
      -1, -1, -1, -1, 1, -1, 3, 4, 5, 6,
       7, -1, 9, 10, 11, 12, 130, 131, 132, 16,
      -1, 18, 19, 20, 21, 22, 23, 24, 142, -1,
      -1, 145, -1, 30, 31, 32, 33, 34, 35, 36,
      -1, -1, 39, -1, -1, -1, -1, -1, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      57, -1, 59, 60, 61, 62, -1, 64, 65, 66,
      -1, 68, 69, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 89, -1, -1, 92, 93, -1, 95, 96,
      -1, 98, -1, -1, 101, 102, 103, 104, 105, 106,
     107, 108, 109, -1, -1, -1, -1, -1, -1, -1,
      -1, 1, -1, 3, 4, 5, 6, 7, -1, -1,
      -1, 11, 12, 130, 131, 132, 16, -1, 18, 19,
      20, 21, 22, 23, 24, 142, -1, -1, 145, -1,
      30, 31, 32, 33, 34, 35, 36, -1, -1, 39,
      -1, -1, -1, -1, -1, 45, 46, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, 57, -1, 59,
      60, 61, 62, -1, 64, 65, 66, -1, 68, 69,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 89,
      -1, -1, 92, 93, -1, 95, 96, -1, 98, -1,
      -1, 101, 102, 103, 104, 105, 106, 107, 108, 109,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     130, 131, 132, 1, -1, 3, 4, 5, 6, 7,
     140, -1, 142, 11, 12, 145, -1, -1, 16, -1,
      18, 19, 20, 21, 22, 23, 24, -1, -1, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, -1,
      -1, 39, -1, -1, -1, -1, -1, 45, 46, 47,
      48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      -1, 59, 60, 61, 62, -1, 64, 65, 66, -1,
      68, 69, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 89, -1, -1, 92, 93, -1, 95, 96, -1,
      98, -1, -1, 101, 102, 103, 104, 105, 106, 107,
     108, 109, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 130, 131, 132, 1, -1, 3, 4, 5,
       6, 7, 140, -1, 142, 11, 12, 145, -1, -1,
      16, -1, 18, 19, 20, 21, 22, 23, 24, -1,
      -1, -1, -1, -1, 30, 31, 32, 33, 34, 35,
      36, -1, -1, 39, -1, -1, -1, -1, -1, 45,
      46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
      56, 57, -1, 59, 60, 61, 62, -1, 64, 65,
      66, -1, 68, 69, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 89, -1, -1, 92, 93, -1, 95,
      96, -1, 98, -1, -1, 101, 102, 103, 104, 105,
     106, 107, 108, 109, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 130, 131, 132, -1, -1, 135,
      -1, -1, -1, -1, -1, -1, 142, -1, 1, 145,
       3, 4, 5, 6, 7, -1, -1, -1, 11, 12,
      -1, -1, -1, 16, -1, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, 45, 46, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, 68, 69, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, 98, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 130, 131, 132,
      -1, -1, 135, -1, -1, -1, -1, -1, -1, 142,
      -1, 1, 145, 3, 4, 5, 6, 7, -1, -1,
      10, 11, 12, -1, -1, -1, 16, -1, 18, 19,
      20, 21, 22, 23, 24, -1, -1, -1, -1, -1,
      30, 31, 32, 33, 34, 35, 36, -1, -1, 39,
      -1, -1, -1, -1, -1, 45, 46, 47, 48, 49,
      50, 51, 52, 53, 54, 55, 56, 57, -1, 59,
      60, 61, 62, -1, 64, 65, 66, -1, 68, 69,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 89,
      -1, -1, 92, 93, -1, 95, 96, -1, 98, -1,
      -1, 101, 102, 103, 104, 105, 106, 107, 108, 109,
      -1, -1, -1, -1, -1, -1, -1, -1, 1, -1,
       3, 4, 5, 6, 7, -1, -1, -1, 11, 12,
     130, 131, 132, 16, -1, 18, 19, 20, 21, 22,
      23, 24, 142, -1, -1, 145, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, 45, 46, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, 68, 69, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, 98, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, 111, -1,
      -1, -1, -1, -1, -1, -1, -1, 3, 4, 5,
      -1, 7, -1, -1, -1, 11, 12, 130, 131, 132,
      16, -1, 18, 19, 20, 21, 22, 23, 24, 142,
      -1, -1, 145, -1, 30, 31, 32, 33, 34, 35,
      36, -1, -1, 39, -1, -1, -1, -1, -1, -1,
      46, -1, -1, 49, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 60, 61, 62, -1, 64, 65,
      66, -1, 68, 69, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 89, -1, -1, 92, 93, -1, 95,
      96, -1, 98, 99, 100, 101, 102, 103, 104, 105,
     106, 107, 108, 109, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 3, 4, 5, -1, 7, -1,
      -1, -1, 11, 12, 130, 131, 132, 16, -1, 18,
      19, 20, 21, 22, 23, 24, -1, -1, -1, 145,
      -1, 30, 31, 32, 33, 34, 35, 36, -1, -1,
      39, -1, -1, -1, -1, -1, -1, 46, -1, -1,
      49, 50, 51, 52, 53, 54, 55, 56, 57, -1,
      59, 60, 61, 62, -1, 64, 65, 66, -1, 68,
      69, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      89, -1, -1, 92, 93, -1, 95, 96, -1, -1,
      -1, -1, 101, 102, 103, 104, 105, 106, 107, 108,
     109, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 3, 4, 5, -1, 7, -1, -1, -1, 11,
      12, 130, 131, 132, 16, -1, 18, 19, 20, 21,
      22, 23, 24, 142, -1, -1, 145, -1, 30, 31,
      32, 33, 34, 35, 36, -1, -1, 39, -1, -1,
      -1, -1, -1, -1, 46, -1, -1, 49, 50, 51,
      52, 53, 54, 55, 56, 57, -1, 59, 60, 61,
      62, -1, 64, 65, 66, -1, 68, 69, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 89, -1, -1,
      92, 93, -1, 95, 96, -1, -1, -1, -1, 101,
     102, 103, 104, 105, 106, 107, 108, 109, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 3, 4,
       5, 6, 7, -1, -1, -1, 11, 12, 130, 131,
     132, 16, -1, 18, 19, 20, 21, 22, 23, 24,
      -1, -1, -1, 145, -1, 30, 31, 32, 33, 34,
      35, 36, -1, -1, 39, -1, -1, -1, -1, -1,
      45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
      55, 56, 57, -1, 59, 60, 61, 62, -1, 64,
      65, 66, -1, 68, 69, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 89, -1, -1, 92, 93, -1,
      95, 96, -1, 98, -1, -1, 101, 102, 103, 104,
     105, 106, 107, 108, 109, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 3, 4, 5, 6, 7,
      -1, -1, -1, 11, 12, 130, 131, 132, 16, -1,
      18, 19, 20, 21, 22, 23, 24, 142, -1, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, -1,
      -1, 39, -1, -1, -1, -1, -1, 45, 46, 47,
      48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      -1, 59, 60, 61, 62, -1, 64, 65, 66, -1,
      68, 69, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 89, -1, -1, 92, 93, -1, 95, 96, -1,
      98, -1, -1, 101, 102, 103, 104, 105, 106, 107,
     108, 109, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 130, 131, 132, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 142, 3, 4, 5, 6, 7,
       8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, 37,
      38, 39, -1, -1, -1, -1, -1, 45, 46, 47,
      48, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      68, 69, 70, 71, 72, 73, 74, 75, 76, -1,
      -1, 79, 80, -1, -1, 83, 84, 85, 86, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      98, 99, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, 131, 132, -1, -1, -1, -1, -1,
     138, 139, 3, 4, 5, 6, 7, 8, 9, 10,
      11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
      21, 22, 23, 24, 25, 26, -1, -1, -1, 30,
      31, 32, 33, 34, 35, 36, 37, 38, 39, -1,
      -1, -1, -1, -1, 45, 46, 47, 48, 49, 50,
      51, 52, 53, 54, 55, 56, 57, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 68, 69, 70,
      71, 72, 73, 74, 75, 76, -1, -1, 79, 80,
      -1, -1, 83, 84, 85, 86, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 98, 99, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 120,
     121, 122, 123, 124, 125, 126, 127, 128, 129, -1,
     131, 132, -1, -1, -1, -1, -1, 138, 3, 4,
       5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, -1, -1, -1, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, -1, -1, -1, -1, -1,
      45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
      -1, 56, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 68, 69, 70, 71, 72, 73, 74,
      75, 76, -1, -1, 79, 80, -1, -1, 83, 84,
      85, 86, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 98, 99, -1, -1, 102, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 120, 121, 122, 123, 124,
     125, 126, 127, 128, 129, -1, 131, 132, -1, -1,
      -1, -1, -1, 138, 3, 4, 5, 6, 7, 8,
       9, 10, 11, 12, 13, 14, 15, 16, 17, 18,
      19, 20, 21, 22, 23, 24, 25, 26, -1, -1,
      -1, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, -1, -1, -1, -1, -1, 45, 46, 47, 48,
      49, 50, 51, 52, 53, -1, -1, 56, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 68,
      69, 70, 71, 72, 73, 74, 75, 76, -1, -1,
      79, 80, -1, -1, 83, 84, 85, 86, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 98,
      99, -1, -1, 102, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 120, 121, 122, 123, 124, 125, 126, 127, 128,
     129, -1, 131, 132, -1, -1, -1, -1, -1, 138,
       3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
      13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
      23, 24, 25, 26, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, 37, 38, 39, -1, -1, -1,
      -1, -1, 45, 46, 47, 48, 49, 50, 51, 52,
      53, -1, -1, 56, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 68, 69, 70, 71, 72,
      73, 74, 75, 76, -1, -1, 79, 80, -1, -1,
      83, 84, 85, 86, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 98, 99, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 120, 121, 122,
     123, 124, 125, 126, 127, 128, 129, -1, 131, 132,
       3, 4, 5, -1, 7, 138, -1, -1, 11, 12,
      -1, -1, -1, 16, -1, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, -1, 46, -1, -1, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, -1, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
       3, 4, 5, -1, 7, -1, -1, 130, 11, 12,
      -1, -1, -1, 16, 137, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, -1, 46, -1, -1, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, -1, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
       3, 4, 5, 6, 7, -1, -1, 130, 11, 12,
      -1, -1, -1, 16, 137, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, 45, 46, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, 68, 69, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, 98, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 3, 4, 5,
      -1, 7, -1, -1, -1, 11, 12, 130, 131, 132,
      16, -1, 18, 19, 20, 21, 22, 23, 24, -1,
      -1, -1, -1, -1, 30, 31, 32, 33, 34, 35,
      36, -1, -1, 39, -1, -1, -1, -1, -1, -1,
      46, -1, -1, 49, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 60, 61, 62, -1, 64, 65,
      66, -1, 68, 69, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 89, -1, -1, 92, 93, -1, 95,
      96, -1, 98, 99, 100, 101, 102, 103, 104, 105,
     106, 107, 108, 109, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 3, 4, 5, 6, 7, -1,
      -1, -1, 11, 12, 130, 131, 132, 16, -1, 18,
      19, 20, 21, 22, 23, 24, -1, -1, -1, -1,
      -1, 30, 31, 32, 33, 34, 35, 36, -1, -1,
      39, -1, -1, -1, -1, -1, 45, 46, -1, 48,
      49, 50, 51, 52, 53, 54, 55, 56, 57, -1,
      59, 60, 61, 62, -1, 64, 65, 66, -1, 68,
      69, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      89, -1, -1, 92, 93, -1, 95, 96, -1, 98,
      -1, -1, 101, 102, 103, 104, 105, 106, 107, 108,
     109, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 3, 4, 5, -1, 7, -1, -1, -1, 11,
      12, 130, 131, 132, 16, -1, 18, 19, 20, 21,
      22, 23, 24, -1, -1, -1, -1, -1, 30, 31,
      32, 33, 34, 35, 36, -1, -1, 39, -1, -1,
      -1, -1, -1, -1, 46, -1, -1, 49, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
      62, -1, 64, 65, 66, -1, 68, 69, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 89, -1, -1,
      92, 93, -1, 95, 96, -1, 98, 99, 100, 101,
     102, 103, 104, 105, 106, 107, 108, 109, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 3, 4,
       5, -1, 7, -1, -1, -1, 11, 12, 130, 131,
     132, 16, -1, 18, 19, 20, 21, 22, 23, 24,
      -1, -1, -1, -1, -1, 30, 31, 32, 33, 34,
      35, 36, -1, -1, 39, -1, -1, -1, -1, -1,
      -1, 46, -1, -1, 49, 50, 51, 52, 53, 54,
      55, 56, 57, 58, 59, 60, 61, 62, -1, 64,
      65, 66, -1, 68, 69, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 89, -1, -1, 92, 93, -1,
      95, 96, -1, 98, 99, -1, 101, 102, 103, 104,
     105, 106, 107, 108, 109, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 3, 4, 5, -1, 7,
      -1, -1, -1, 11, 12, 130, 131, 132, 16, -1,
      18, 19, 20, 21, 22, 23, 24, -1, -1, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, -1,
      -1, 39, -1, -1, -1, -1, -1, -1, 46, -1,
      -1, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      58, 59, 60, 61, 62, -1, 64, 65, 66, -1,
      68, 69, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 89, -1, -1, 92, 93, -1, 95, 96, -1,
      -1, 99, 100, 101, 102, 103, 104, 105, 106, 107,
     108, 109, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 3, 4, 5, -1, 7, -1, -1, -1,
      11, 12, 130, 131, 132, 16, -1, 18, 19, 20,
      21, 22, 23, 24, -1, -1, -1, -1, -1, 30,
      31, 32, 33, 34, 35, 36, -1, -1, 39, -1,
      -1, -1, -1, -1, -1, 46, -1, -1, 49, 50,
      51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
      61, 62, -1, 64, 65, 66, -1, 68, 69, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 89, -1,
      -1, 92, 93, -1, 95, 96, -1, 98, 99, -1,
     101, 102, 103, 104, 105, 106, 107, 108, 109, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 3,
       4, 5, -1, 7, -1, -1, -1, 11, 12, 130,
     131, 132, 16, -1, 18, 19, 20, 21, 22, 23,
      24, -1, -1, -1, -1, -1, 30, 31, 32, 33,
      34, 35, 36, -1, -1, 39, -1, -1, -1, -1,
      -1, -1, 46, -1, -1, 49, 50, 51, 52, 53,
      54, 55, 56, 57, 58, 59, 60, 61, 62, -1,
      64, 65, 66, -1, 68, 69, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 89, -1, -1, 92, 93,
      -1, 95, 96, -1, -1, 99, -1, 101, 102, 103,
     104, 105, 106, 107, 108, 109, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 3, 4, 5, -1,
       7, -1, -1, -1, 11, 12, 130, 131, 132, 16,
      -1, 18, 19, 20, 21, 22, 23, 24, -1, -1,
      -1, -1, -1, 30, 31, 32, 33, 34, 35, 36,
      -1, -1, 39, -1, -1, -1, -1, -1, -1, 46,
      -1, -1, 49, 50, 51, 52, 53, 54, 55, 56,
      57, -1, 59, 60, 61, 62, -1, 64, 65, 66,
      -1, 68, 69, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 89, -1, -1, 92, 93, -1, 95, 96,
      -1, 98, -1, -1, 101, 102, 103, 104, 105, 106,
     107, 108, 109, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 3, 4, 5, -1, 7, -1, -1,
      -1, 11, 12, 130, 131, 132, 16, -1, 18, 19,
      20, 21, 22, 23, 24, -1, -1, -1, -1, -1,
      30, 31, 32, 33, 34, 35, 36, -1, -1, 39,
      -1, -1, -1, -1, -1, -1, 46, -1, -1, 49,
      50, 51, 52, 53, 54, 55, 56, 57, -1, 59,
      60, 61, 62, -1, 64, 65, 66, -1, 68, 69,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 89,
      -1, -1, 92, 93, -1, 95, 96, -1, 98, -1,
      -1, 101, 102, 103, 104, 105, 106, 107, 108, 109,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
       3, 4, 5, -1, 7, -1, -1, -1, 11, 12,
     130, 131, 132, 16, -1, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, -1, 46, -1, -1, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, 68, 69, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, 98, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 3, 4, 5,
      -1, 7, -1, -1, -1, 11, 12, 130, 131, 132,
      16, -1, 18, 19, 20, 21, 22, 23, 24, -1,
      -1, -1, -1, -1, 30, 31, 32, 33, 34, 35,
      36, -1, -1, 39, -1, -1, -1, -1, -1, -1,
      46, -1, -1, 49, 50, 51, 52, 53, 54, 55,
      56, 57, -1, 59, 60, 61, 62, -1, 64, 65,
      66, -1, 68, 69, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 89, -1, -1, 92, 93, -1, 95,
      96, -1, 98, -1, -1, 101, 102, 103, 104, 105,
     106, 107, 108, 109, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 3, 4, 5, -1, 7, -1,
      -1, -1, 11, 12, 130, 131, 132, 16, -1, 18,
      19, 20, 21, 22, 23, 24, -1, -1, -1, -1,
      -1, 30, 31, 32, 33, 34, 35, 36, -1, -1,
      39, -1, -1, -1, -1, -1, -1, 46, -1, -1,
      49, 50, 51, 52, 53, 54, 55, 56, 57, -1,
      59, 60, 61, 62, -1, 64, 65, 66, -1, 68,
      69, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      89, -1, -1, 92, 93, -1, 95, 96, -1, 98,
      -1, -1, 101, 102, 103, 104, 105, 106, 107, 108,
     109, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 3, 4, 5, -1, 7, -1, -1, -1, 11,
      12, 130, 131, 132, 16, -1, 18, 19, 20, 21,
      22, 23, 24, -1, -1, -1, -1, -1, 30, 31,
      32, 33, 34, 35, 36, -1, -1, 39, -1, -1,
      -1, -1, -1, -1, 46, -1, -1, 49, 50, 51,
      52, 53, 54, 55, 56, 57, -1, 59, 60, 61,
      62, -1, 64, 65, 66, -1, 68, 69, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 89, -1, -1,
      92, 93, -1, 95, 96, -1, -1, -1, -1, 101,
     102, 103, 104, 105, 106, 107, 108, 109, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 3, 4,
       5, -1, 7, -1, -1, -1, 11, 12, 130, 131,
     132, 16, -1, 18, 19, 20, 21, 22, 23, 24,
      -1, -1, -1, -1, -1, 30, 31, 32, 33, 34,
      35, 36, -1, -1, 39, -1, -1, -1, -1, -1,
      -1, 46, -1, -1, 49, 50, 51, 52, 53, 54,
      55, 56, 57, -1, 59, 60, 61, 62, -1, 64,
      65, 66, -1, 68, 69, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 89, -1, -1, 92, 93, -1,
      95, 96, -1, -1, -1, -1, 101, 102, 103, 104,
     105, 106, 107, 108, 109, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 3, 4, 5, -1, 7,
      -1, -1, -1, 11, 12, 130, 131, 132, 16, -1,
      18, 19, 20, 21, 22, 23, 24, -1, -1, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, -1,
      -1, 39, -1, -1, -1, -1, -1, -1, 46, -1,
      -1, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      -1, 59, 60, 61, 62, -1, 64, 65, 66, -1,
      68, 69, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 89, -1, -1, 92, 93, -1, 95, 96, -1,
      -1, -1, -1, 101, 102, 103, 104, 105, 106, 107,
     108, 109, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 3, 4, 5, -1, 7, -1, -1, -1,
      11, 12, 130, 131, 132, 16, -1, 18, 19, 20,
      21, 22, 23, 24, -1, -1, -1, -1, -1, 30,
      31, 32, 33, 34, 35, 36, -1, -1, 39, -1,
      -1, -1, -1, -1, -1, 46, -1, -1, 49, 50,
      51, 52, 53, 54, 55, 56, 57, -1, 59, 60,
      61, 62, -1, 64, 65, 66, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 89, -1,
      -1, 92, 93, -1, 95, 96, -1, 98, -1, -1,
     101, 102, 103, 104, 105, 106, 107, 108, 109, -1,
      -1, -1, -1, -1, -1, 3, 4, 5, -1, 7,
      -1, -1, -1, 11, 12, -1, -1, -1, 16, 130,
      18, 19, 20, 21, 22, 23, 24, -1, -1, -1,
      -1, -1, 30, 31, 32, 33, 34, 35, 36, -1,
      -1, 39, -1, -1, -1, -1, -1, -1, 46, -1,
      -1, 49, 50, 51, 52, 53, 54, 55, 56, 57,
      -1, 59, 60, 61, 62, -1, 64, 65, 66, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 89, -1, -1, 92, 93, -1, 95, 96, -1,
      98, -1, -1, 101, 102, 103, 104, 105, 106, 107,
     108, 109, -1, -1, -1, -1, -1, -1, 3, 4,
       5, -1, 7, -1, -1, -1, 11, 12, -1, -1,
      -1, 16, 130, 18, 19, 20, 21, 22, 23, 24,
      -1, -1, -1, -1, -1, 30, 31, 32, 33, 34,
      35, 36, -1, -1, 39, -1, -1, -1, -1, -1,
      -1, 46, -1, -1, 49, 50, 51, 52, 53, 54,
      55, 56, 57, -1, 59, 60, 61, 62, -1, 64,
      65, 66, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      85, -1, -1, -1, 89, -1, -1, 92, 93, -1,
      95, 96, -1, -1, -1, -1, 101, 102, 103, 104,
     105, 106, 107, 108, 109, -1, -1, -1, -1, -1,
      -1, 3, 4, 5, -1, 7, -1, -1, -1, 11,
      12, -1, -1, -1, 16, 130, 18, 19, 20, 21,
      22, 23, 24, -1, -1, -1, -1, -1, 30, 31,
      32, 33, 34, 35, 36, -1, -1, 39, -1, -1,
      -1, -1, -1, -1, 46, -1, -1, 49, 50, 51,
      52, 53, 54, 55, 56, 57, -1, 59, 60, 61,
      62, -1, 64, 65, 66, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 89, -1, -1,
      92, 93, -1, 95, 96, -1, -1, -1, -1, 101,
     102, 103, 104, 105, 106, 107, 108, 109, -1, -1,
      -1, -1, -1, -1, 3, 4, 5, -1, 7, -1,
      -1, -1, 11, 12, -1, -1, -1, 16, 130, 18,
      19, 20, 21, 22, 23, 24, -1, -1, -1, -1,
      -1, 30, 31, 32, 33, 34, 35, 36, -1, -1,
      39, -1, -1, -1, -1, -1, -1, 46, -1, -1,
      49, 50, 51, 52, 53, 54, 55, 56, 57, -1,
      59, 60, 61, 62, -1, 64, 65, 66, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      89, -1, -1, 92, 93, -1, 95, 96, -1, -1,
      -1, -1, 101, 102, 103, 104, 105, 106, 107, 108,
     109, -1, -1, -1, -1, -1, -1, 3, 4, 5,
      -1, 7, -1, -1, -1, 11, 12, -1, -1, -1,
      16, 130, 18, 19, 20, 21, 22, 23, 24, -1,
      -1, -1, -1, -1, 30, 31, 32, 33, 34, 35,
      36, -1, -1, 39, -1, -1, -1, -1, -1, -1,
      46, -1, -1, 49, 50, 51, 52, 53, 54, 55,
      56, 57, -1, 59, 60, 61, 62, -1, 64, 65,
      66, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 89, -1, -1, 92, 93, -1, 95,
      96, -1, -1, -1, -1, 101, 102, 103, 104, 105,
     106, 107, 108, 109, -1, -1, -1, -1, -1, -1,
       3, 4, 5, -1, 7, -1, -1, -1, 11, 12,
      -1, -1, -1, 16, 130, 18, 19, 20, 21, 22,
      23, 24, -1, -1, -1, -1, -1, 30, 31, 32,
      33, 34, 35, 36, -1, -1, 39, -1, -1, -1,
      -1, -1, -1, 46, -1, -1, 49, 50, 51, 52,
      53, 54, 55, 56, 57, -1, 59, 60, 61, 62,
      -1, 64, 65, 66, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 89, -1, -1, 92,
      93, -1, 95, 96, -1, -1, -1, -1, 101, 102,
     103, 104, 105, 106, 107, 108, 109, -1, -1, -1,
      -1, -1, 52, 53, -1, -1, 56, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 130, 68, 69,
      70, 71, 72, 73, 74, 75, 76, -1, -1, 79,
      80, -1, -1, 83, 84, 85, 86, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 98, 99,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      -1, 131, 132, 52, 53, -1, -1, 56, 138, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 68,
      69, 70, 71, 72, 73, 74, 75, 76, -1, -1,
      79, 80, -1, -1, 83, 84, 85, 86, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 98,
      99, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 120, 121, 122, 123, 124, 125, 126, 127, 128,
     129, -1, 131, 132, 52, 53, -1, -1, 56, 138,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      68, 69, 70, 71, 72, 73, 74, 75, 76, -1,
      -1, 79, 80, -1, -1, 83, 84, 85, 86, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      98, 99, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, 131, 132, 52, 53, -1, -1, 56,
     138, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 68, 69, 70, 71, 72, 73, 74, 75, 76,
      -1, -1, 79, 80, -1, -1, 83, 84, 85, 86,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 98, 99, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 120, 121, 122, 123, 124, 125, 126,
     127, 128, 129, -1, 131, 132, 52, 53, -1, -1,
      56, 138, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 68, 69, 70, 71, 72, 73, 74, 75,
      76, -1, -1, 79, 80, -1, -1, 83, 84, 85,
      86, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 98, 99, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, -1, 131, 132, 52, 53, -1,
      -1, 56, 138, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 68, 69, 70, 71, 72, 73, 74,
      75, 76, -1, -1, 79, 80, -1, -1, 83, 84,
      85, 86, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 98, 99, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 120, 121, 122, 123, 124,
     125, 126, 127, 128, 129, -1, 131, 132, 52, 53,
      -1, -1, 56, 138, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 68, 69, 70, 71, 72, 73,
      74, 75, 76, -1, -1, 79, 80, -1, -1, 83,
      84, 85, 86, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 98, 99, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 120, 121, 122, 123,
     124, 125, 126, 127, 128, 129, -1, 131, 132, 52,
      53, -1, -1, 56, 138, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 68, 69, 70, 71, 72,
      73, 74, 75, 76, -1, -1, 79, 80, -1, -1,
      83, 84, 85, 86, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 98, 99, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 120, 121, 122,
     123, 124, 125, 126, 127, 128, 129, -1, 131, 132,
      52, 53, -1, -1, 56, 138, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 68, 69, 70, 71,
      72, 73, 74, 75, 76, -1, -1, 79, 80, -1,
      -1, 83, 84, 85, 86, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 98, 99, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 120, 121,
     122, 123, 124, 125, 126, 127, 128, 129, -1, 131,
     132, 52, 53, -1, -1, 56, 138, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 68, 69, 70,
      71, 72, 73, 74, 75, 76, -1, -1, 79, 80,
      -1, -1, 83, 84, 85, 86, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 98, 99, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 120,
     121, 122, 123, 124, 125, 126, 127, 128, 129, -1,
     131, 132, 52, 53, -1, -1, 56, 138, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 68, 69,
      70, 71, 72, 73, 74, 75, 76, -1, -1, 79,
      80, -1, -1, 83, 84, 85, 86, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 98, 99,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
      -1, 131, 132, 52, 53, -1, -1, 56, 138, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 68,
      69, 70, 71, 72, 73, 74, 75, 76, -1, -1,
      79, 80, -1, -1, 83, 84, 85, 86, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 98,
      99, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 120, 121, 122, 123, 124, 125, 126, 127, 128,
     129, -1, 131, 132, 52, 53, -1, -1, 56, 138,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      68, 69, 70, 71, 72, 73, 74, 75, 76, -1,
      -1, 79, 80, -1, -1, 83, 84, 85, 86, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      98, 99, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 120, 121, 122, 123, 124, 125, 126, 127,
     128, 129, -1, 131, 132, -1, -1, -1, -1, -1,
     138
};



static const yytype_uint16 yystos[] =
{
       0, 147, 148, 0, 1, 3, 4, 5, 6, 7,
      11, 12, 16, 18, 19, 20, 21, 22, 23, 24,
      30, 31, 32, 33, 34, 35, 36, 39, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      57, 59, 60, 61, 62, 64, 65, 66, 68, 69,
      89, 92, 93, 95, 96, 98, 101, 102, 103, 104,
     105, 106, 107, 108, 109, 130, 131, 132, 149, 150,
     151, 158, 160, 162, 164, 165, 168, 169, 170, 172,
     173, 174, 176, 177, 187, 190, 205, 224, 225, 226,
     227, 228, 229, 230, 231, 232, 233, 234, 236, 262,
     263, 283, 284, 285, 286, 287, 288, 289, 292, 294,
     295, 309, 311, 312, 313, 314, 315, 316, 317, 318,
     352, 365, 151, 3, 4, 5, 6, 7, 8, 9,
      10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
      20, 21, 22, 23, 24, 25, 26, 30, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 45, 46, 47,
      48, 49, 50, 51, 52, 53, 56, 68, 69, 70,
      71, 72, 73, 74, 75, 76, 79, 80, 83, 84,
      85, 86, 98, 99, 120, 121, 122, 123, 124, 125,
     126, 127, 128, 129, 131, 132, 138, 180, 181, 182,
     183, 185, 186, 309, 311, 39, 58, 89, 92, 98,
      99, 100, 103, 131, 169, 177, 187, 191, 197, 200,
     202, 224, 314, 315, 317, 318, 350, 351, 197, 139,
     198, 199, 139, 194, 198, 139, 145, 359, 54, 182,
     359, 152, 134, 21, 22, 31, 32, 168, 187, 224,
     236, 187, 56, 1, 47, 92, 154, 155, 156, 158,
     171, 172, 365, 207, 208, 192, 202, 350, 365, 191,
     349, 350, 365, 46, 89, 130, 137, 176, 205, 224,
     314, 315, 318, 253, 254, 54, 55, 57, 180, 299,
     310, 298, 299, 300, 143, 143, 143, 143, 313, 164,
     187, 187, 142, 145, 358, 363, 364, 40, 41, 42,
      43, 44, 37, 38, 26, 134, 194, 198, 268, 28,
     260, 117, 137, 92, 98, 173, 117, 70, 71, 72,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      85, 86, 118, 120, 121, 122, 123, 124, 125, 126,
     127, 128, 129, 189, 189, 87, 88, 136, 144, 356,
     206, 162, 163, 163, 211, 213, 163, 358, 364, 89,
     170, 177, 224, 241, 314, 315, 318, 52, 56, 85,
      89, 178, 179, 224, 314, 315, 318, 179, 33, 34,
      35, 36, 49, 50, 51, 52, 56, 139, 180, 316,
     347, 197, 88, 356, 357, 268, 286, 90, 90, 137,
     191, 56, 191, 191, 191, 298, 117, 91, 137, 201,
     365, 88, 136, 356, 90, 90, 137, 201, 197, 359,
     360, 197, 196, 197, 202, 350, 365, 162, 360, 162,
      54, 65, 66, 159, 139, 188, 134, 154, 88, 356,
      90, 158, 157, 171, 140, 358, 364, 360, 360, 158,
     141, 137, 145, 362, 137, 362, 135, 362, 359, 56,
     313, 173, 175, 137, 88, 136, 356, 255, 63, 110,
     112, 113, 301, 113, 301, 113, 67, 301, 290, 296,
     293, 297, 70, 142, 151, 163, 163, 163, 163, 158,
     162, 162, 270, 269, 97, 166, 261, 98, 164, 191,
     202, 203, 204, 171, 137, 176, 137, 160, 161, 164,
     177, 187, 191, 193, 204, 224, 318, 187, 187, 187,
     187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
     187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
     187, 52, 53, 56, 185, 267, 353, 354, 196, 52,
      53, 56, 185, 266, 353, 153, 154, 13, 237, 363,
     237, 163, 163, 358, 17, 277, 56, 88, 136, 356,
      25, 162, 52, 56, 178, 121, 319, 88, 136, 356,
     219, 348, 220, 88, 144, 355, 52, 56, 353, 161,
     187, 193, 161, 193, 184, 115, 191, 98, 191, 200,
     350, 52, 56, 196, 52, 56, 351, 360, 140, 360,
     137, 137, 360, 182, 210, 187, 149, 135, 353, 353,
     193, 134, 360, 156, 209, 350, 137, 175, 52, 56,
     196, 52, 56, 52, 54, 55, 56, 57, 58, 70,
      92, 98, 99, 100, 124, 127, 139, 258, 323, 325,
     326, 327, 328, 329, 330, 331, 332, 335, 336, 337,
     338, 341, 342, 343, 344, 345, 303, 302, 113, 291,
     301, 63, 113, 113, 291, 63, 113, 187, 274, 275,
     271, 272, 167, 274, 191, 137, 360, 175, 137, 44,
     117, 44, 88, 136, 356, 359, 90, 90, 194, 198,
     265, 359, 361, 90, 90, 194, 198, 264, 10, 235,
       8, 279, 365, 154, 13, 154, 27, 238, 363, 238,
     277, 202, 235, 52, 56, 196, 52, 56, 215, 218,
     320, 217, 52, 56, 178, 196, 153, 162, 221, 222,
     194, 195, 198, 365, 182, 191, 191, 201, 90, 90,
     361, 90, 90, 350, 162, 135, 149, 360, 362, 173,
     361, 92, 98, 242, 243, 244, 327, 325, 256, 117,
     137, 324, 191, 137, 346, 365, 52, 137, 346, 137,
     324, 52, 137, 324, 52, 304, 54, 55, 57, 308,
     318, 143, 301, 143, 143, 143, 10, 276, 135, 273,
     271, 10, 98, 191, 175, 158, 187, 52, 56, 196,
      52, 56, 119, 161, 193, 161, 193, 166, 194, 141,
      90, 161, 193, 161, 193, 166, 195, 191, 204, 280,
     365, 15, 240, 365, 14, 239, 240, 240, 212, 214,
     235, 137, 237, 361, 163, 363, 163, 153, 361, 235,
     360, 139, 321, 322, 180, 268, 260, 90, 137, 360,
     135, 244, 137, 327, 137, 360, 250, 359, 257, 191,
     323, 329, 341, 343, 332, 337, 345, 330, 338, 343,
     328, 330, 305, 78, 122, 248, 249, 365, 248, 135,
     191, 361, 187, 161, 193, 91, 281, 365, 154, 9,
     282, 365, 163, 235, 235, 154, 154, 191, 154, 238,
     153, 363, 235, 325, 153, 325, 223, 360, 243, 137,
      98, 242, 140, 142, 29, 114, 259, 137, 324, 137,
     324, 346, 137, 324, 137, 324, 324, 306, 245, 247,
     250, 328, 330, 331, 333, 334, 337, 339, 340, 343,
     345, 153, 154, 89, 177, 224, 314, 315, 318, 237,
     154, 237, 235, 235, 240, 277, 278, 216, 235, 360,
     235, 363, 321, 137, 243, 137, 327, 52, 251, 252,
     326, 154, 154, 330, 343, 330, 330, 307, 250, 122,
     117, 137, 246, 89, 224, 137, 346, 346, 137, 246,
     137, 246, 56, 88, 136, 356, 154, 154, 154, 153,
     243, 137, 137, 359, 235, 135, 324, 137, 324, 324,
     324, 154, 122, 224, 245, 340, 343, 56, 88, 333,
     337, 330, 339, 343, 330, 52, 56, 196, 52, 56,
     279, 239, 235, 235, 243, 252, 330, 111, 137, 246,
     137, 246, 52, 56, 346, 137, 246, 137, 246, 246,
     361, 324, 330, 343, 330, 330, 246, 137, 246, 246,
     246, 330, 246
};


static const yytype_uint16 yyr1[] =
{
       0, 146, 148, 147, 149, 150, 150, 150, 150, 151,
     152, 151, 153, 154, 155, 155, 155, 155, 156, 157,
     156, 159, 158, 158, 158, 158, 158, 158, 158, 158,
     158, 158, 158, 158, 158, 158, 158, 158, 160, 160,
     160, 160, 160, 160, 160, 160, 161, 161, 161, 162,
     162, 162, 162, 162, 162, 163, 164, 164, 165, 165,
     167, 166, 168, 169, 169, 169, 169, 169, 169, 169,
     169, 169, 169, 169, 170, 170, 171, 171, 172, 172,
     172, 172, 172, 172, 172, 172, 172, 172, 173, 173,
     174, 174, 175, 175, 176, 176, 176, 176, 176, 176,
     176, 176, 176, 177, 177, 177, 177, 177, 177, 177,
     177, 177, 178, 178, 179, 179, 179, 180, 180, 180,
     180, 180, 181, 181, 182, 182, 183, 184, 183, 185,
     185, 185, 185, 185, 185, 185, 185, 185, 185, 185,
     185, 185, 185, 185, 185, 185, 185, 185, 185, 185,
     185, 185, 185, 185, 185, 185, 185, 185, 185, 186,
     186, 186, 186, 186, 186, 186, 186, 186, 186, 186,
     186, 186, 186, 186, 186, 186, 186, 186, 186, 186,
     186, 186, 186, 186, 186, 186, 186, 186, 186, 186,
     186, 186, 186, 186, 186, 186, 186, 186, 186, 186,
     187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
     187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
     187, 187, 187, 187, 187, 187, 187, 187, 187, 187,
     187, 187, 187, 187, 187, 187, 188, 187, 187, 187,
     189, 189, 189, 189, 190, 190, 191, 192, 192, 192,
     192, 193, 193, 194, 195, 195, 196, 196, 196, 196,
     196, 197, 197, 197, 197, 197, 199, 198, 200, 201,
     201, 202, 202, 202, 202, 203, 203, 204, 204, 204,
     205, 205, 205, 205, 205, 205, 205, 205, 205, 205,
     205, 206, 205, 207, 205, 208, 209, 205, 205, 205,
     205, 205, 205, 205, 205, 205, 205, 210, 205, 205,
     205, 205, 205, 205, 205, 205, 205, 211, 212, 205,
     213, 214, 205, 205, 205, 215, 216, 205, 217, 205,
     218, 205, 219, 205, 220, 221, 205, 222, 223, 205,
     205, 205, 205, 205, 224, 225, 226, 227, 228, 229,
     230, 231, 232, 233, 234, 235, 236, 237, 237, 237,
     238, 238, 239, 239, 240, 240, 241, 241, 242, 242,
     243, 243, 244, 244, 244, 244, 244, 244, 244, 244,
     244, 245, 245, 245, 245, 246, 246, 247, 247, 247,
     247, 247, 247, 247, 247, 247, 247, 247, 247, 247,
     247, 247, 248, 248, 249, 249, 249, 250, 250, 251,
     251, 252, 252, 254, 255, 256, 257, 253, 258, 258,
     259, 259, 261, 260, 262, 262, 262, 262, 263, 264,
     263, 265, 263, 263, 266, 263, 267, 263, 263, 263,
     263, 269, 268, 270, 268, 272, 273, 271, 275, 276,
     274, 277, 278, 278, 279, 279, 280, 280, 280, 281,
     281, 282, 282, 283, 283, 283, 284, 285, 285, 285,
     286, 287, 288, 289, 290, 290, 291, 291, 292, 293,
     293, 294, 295, 296, 296, 297, 297, 298, 298, 299,
     299, 300, 300, 301, 302, 301, 303, 304, 305, 306,
     307, 301, 308, 308, 308, 308, 309, 310, 310, 310,
     310, 311, 312, 312, 313, 313, 313, 313, 314, 314,
     314, 314, 314, 315, 315, 315, 315, 315, 315, 315,
     316, 316, 317, 317, 318, 318, 320, 319, 319, 321,
     322, 321, 323, 323, 323, 323, 324, 324, 325, 325,
     325, 325, 325, 325, 325, 325, 325, 325, 325, 325,
     325, 325, 325, 326, 326, 326, 326, 327, 327, 328,
     329, 329, 330, 330, 331, 332, 332, 333, 333, 334,
     334, 335, 335, 336, 336, 337, 337, 338, 339, 340,
     340, 341, 341, 342, 342, 343, 343, 344, 344, 345,
     346, 346, 347, 348, 347, 349, 349, 350, 350, 351,
     351, 351, 351, 352, 352, 352, 353, 353, 353, 353,
     354, 354, 354, 355, 355, 356, 356, 357, 357, 358,
     358, 359, 359, 360, 361, 362, 362, 362, 363, 363,
     364, 364, 365
};


static const yytype_uint8 yyr2[] =
{
       0, 2, 0, 2, 2, 1, 1, 3, 2, 1,
       0, 5, 4, 2, 1, 1, 3, 2, 1, 0,
       5, 0, 4, 3, 3, 3, 2, 3, 3, 3,
       3, 3, 4, 1, 3, 3, 3, 1, 3, 3,
       6, 5, 5, 5, 5, 3, 1, 3, 1, 1,
       3, 3, 3, 2, 1, 1, 1, 1, 1, 4,
       0, 4, 1, 2, 3, 4, 5, 4, 5, 2,
       2, 2, 2, 2, 1, 3, 1, 3, 1, 2,
       3, 5, 2, 4, 2, 4, 1, 3, 1, 3,
       2, 3, 1, 3, 1, 1, 4, 3, 3, 3,
       3, 2, 1, 1, 1, 4, 3, 3, 3, 3,
       2, 1, 1, 1, 2, 1, 3, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 0, 4, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       3, 3, 6, 5, 5, 5, 5, 4, 3, 3,
       3, 3, 3, 3, 3, 3, 3, 4, 2, 2,
       3, 3, 3, 3, 1, 3, 3, 3, 3, 3,
       2, 2, 3, 3, 3, 3, 0, 4, 6, 1,
       1, 1, 1, 1, 3, 3, 1, 1, 2, 4,
       2, 1, 3, 3, 1, 1, 1, 1, 2, 4,
       2, 1, 2, 2, 4, 1, 0, 2, 2, 2,
       1, 1, 2, 3, 4, 1, 1, 3, 4, 2,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 0, 4, 0, 3, 0, 0, 5, 3, 3,
       2, 3, 3, 1, 4, 3, 1, 0, 6, 4,
       3, 2, 1, 2, 2, 6, 6, 0, 0, 7,
       0, 0, 7, 5, 4, 0, 0, 9, 0, 6,
       0, 7, 0, 5, 0, 0, 7, 0, 0, 9,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 2,
       1, 1, 1, 5, 1, 2, 1, 1, 1, 3,
       1, 3, 1, 4, 6, 3, 5, 2, 4, 1,
       3, 4, 2, 2, 1, 2, 0, 6, 8, 4,
       6, 4, 2, 6, 2, 4, 6, 2, 4, 2,
       4, 1, 1, 1, 3, 1, 4, 1, 4, 1,
       3, 1, 1, 0, 0, 0, 0, 6, 4, 1,
       3, 3, 0, 4, 2, 4, 5, 5, 2, 0,
       5, 0, 5, 3, 0, 4, 0, 4, 2, 1,
       4, 0, 4, 0, 4, 0, 0, 4, 0, 0,
       4, 5, 1, 1, 6, 1, 1, 1, 1, 2,
       1, 2, 1, 1, 1, 1, 1, 1, 1, 2,
       3, 3, 3, 4, 0, 3, 1, 2, 4, 0,
       3, 4, 4, 0, 3, 0, 3, 0, 2, 0,
       2, 0, 2, 1, 0, 3, 0, 0, 0, 0,
       0, 8, 1, 1, 1, 1, 2, 1, 1, 1,
       1, 3, 1, 2, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 0, 4, 0, 3,
       0, 3, 4, 2, 2, 1, 2, 0, 6, 8,
       4, 6, 4, 6, 2, 4, 6, 2, 4, 2,
       4, 1, 0, 1, 1, 1, 1, 1, 1, 1,
       1, 3, 1, 3, 1, 2, 1, 2, 1, 1,
       3, 1, 3, 1, 1, 2, 1, 3, 3, 1,
       3, 1, 3, 1, 1, 2, 1, 1, 1, 2,
       2, 1, 1, 0, 4, 1, 2, 1, 3, 3,
       2, 4, 2, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 0,
       1, 0, 1, 2, 2, 0, 1, 1, 1, 1,
       1, 2, 0
};
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rb_code_range_t const * const yylocationp, struct parser_params *parser)
{
  FILE *yyo = yyoutput;
  ((void) (yyo));
  ((void) (yylocationp));
  ((void) (parser));
  if (!yyvaluep)
    return;




  ((void) (yytype));
}






static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rb_code_range_t const * const yylocationp, struct parser_params *parser)
{
  rb_parser_printf (parser, "%s %s (",
             yytype < 146 ? "token": "nterm", yytname[yytype]);

  rb_parser_printf(parser, "%d.%d-%d.%d", (*yylocationp).first_loc.lineno, (*yylocationp).first_loc.column, (*yylocationp).last_loc.lineno, (*yylocationp).last_loc.column);
  rb_parser_printf (parser, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, parser);
  rb_parser_printf (parser, ")");
}






static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop, struct parser_params *parser)
{
  rb_parser_printf (parser, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      rb_parser_printf (parser, " %d", yybot);
    }
  rb_parser_printf (parser, "\n");
}
static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, rb_code_range_t *yylsp, int yyrule, struct parser_params *parser)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  rb_parser_printf (parser, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);

  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      rb_parser_printf (parser, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)]) , parser);
      rb_parser_printf (parser, "\n");
    }
}
static long unsigned int
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      long unsigned int yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;

          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return stpcpy (yyres, yystr) - yyres;
}
static int
yysyntax_error (long unsigned int *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  long unsigned int yysize0 = yytnamerr (0, yytname[yytoken]);
  long unsigned int yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };

  const char *yyformat = 0;

  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];


  int yycount = 0;
  if (yytoken != (-2))
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!(!!((yyn) == (-926))))
        {



          int yyxbegin = yyn < 0 ? -yyn : 0;

          int yychecklim = 12080 - yyn + 1;
          int yyxend = yychecklim < 146 ? yychecklim : 146;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != 1
                && !(!!((yytable[yyx + yyn]) == (-643))))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  long unsigned int yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= ((long unsigned int) -1)))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {




      case 0: yyformat = "syntax error"; break;
      case 1: yyformat = "syntax error, unexpected %s"; break;
      case 2: yyformat = "syntax error, unexpected %s, expecting %s"; break;
      case 3: yyformat = "syntax error, unexpected %s, expecting %s or %s"; break;
      case 4: yyformat = "syntax error, unexpected %s, expecting %s or %s or %s"; break;
      case 5: yyformat = "syntax error, unexpected %s, expecting %s or %s or %s or %s"; break;

    }

  {
    long unsigned int yysize1 = yysize + strlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= ((long unsigned int) -1)))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= ((long unsigned int) -1)))
        *yymsg_alloc = ((long unsigned int) -1);
      return 1;
    }




  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}






static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, rb_code_range_t *yylocationp, struct parser_params *parser)
{
  ((void) (yyvaluep));
  ((void) (yylocationp));
  ((void) (parser));
  if (!yymsg)
    yymsg = "Deleting";
  do { if ((parser->yydebug)) { rb_parser_printf (parser, "%s ", yymsg); yy_symbol_print (stderr, yytype, yyvaluep, yylocationp, parser); rb_parser_printf (parser, "\n"); } } while (0);


  ((void) (yytype));

}
int
ruby_yyparse (struct parser_params *parser)
{

int yychar;





static YYSTYPE yyval_default;
YYSTYPE yylval = yyval_default;


static rb_code_range_t yyloc_default



;
rb_code_range_t yylloc = yyloc_default;


    int yynerrs;

    int yystate;

    int yyerrstatus;
    yytype_int16 yyssa[200];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;


    YYSTYPE yyvsa[200];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;


    rb_code_range_t yylsa[200];
    rb_code_range_t *yyls;
    rb_code_range_t *yylsp;


    rb_code_range_t yyerror_range[3];

    long unsigned int yystacksize;

  int yyn;
  int yyresult;

  int yytoken = 0;


  YYSTYPE yyval;
  rb_code_range_t yyloc;



  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  long unsigned int yymsg_alloc = sizeof yymsgbuf;






  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = 200;

  do { if ((parser->yydebug)) rb_parser_printf (parser, "Starting parse\n"); } while (0);

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = (-2);
  yylsp[0] = yylloc;
  goto yysetstate;




 yynewstate:


  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {

      long unsigned int yysize = yyssp - yyss + 1;
      if (10000 <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (10000 < yystacksize)
        yystacksize = 10000;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) rb_parser_malloc(parser, (((yystacksize) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (rb_code_range_t)) + 2 * (sizeof (union yyalloc) - 1))));
        if (! yyptr)
          goto yyexhaustedlab;
        do { long unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyss_alloc, yyss, (yysize) * sizeof (*(yyss))); yyss = &yyptr->yyss_alloc; yynewbytes = yystacksize * sizeof (*yyss) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);
        do { long unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyvs_alloc, yyvs, (yysize) * sizeof (*(yyvs))); yyvs = &yyptr->yyvs_alloc; yynewbytes = yystacksize * sizeof (*yyvs) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);
        do { long unsigned int yynewbytes; __builtin_memcpy (&yyptr->yyls_alloc, yyls, (yysize) * sizeof (*(yyls))); yyls = &yyptr->yyls_alloc; yynewbytes = yystacksize * sizeof (*yyls) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);

        if (yyss1 != yyssa)
          rb_parser_free(parser, (yyss1));
      }



      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      do { if ((parser->yydebug)) rb_parser_printf (parser, "Stack size increased to %lu\n", (unsigned long int) yystacksize); } while (0);


      if (yyss + yystacksize - 1 <= yyssp)
        goto yyabortlab;
    }

  do { if ((parser->yydebug)) rb_parser_printf (parser, "Entering state %d\n", yystate); } while (0);

  if (yystate == 3)
    goto yyacceptlab;

  goto yybackup;




yybackup:





  yyn = yypact[yystate];
  if ((!!((yyn) == (-926))))
    goto yydefault;




  if (yychar == (-2))
    {
      do { if ((parser->yydebug)) rb_parser_printf (parser, "Reading a token: "); } while (0);
      yychar = yylex (&yylval, &yylloc, parser);
    }

  if (yychar <= 0)
    {
      yychar = yytoken = 0;
      do { if ((parser->yydebug)) rb_parser_printf (parser, "Now at end of input.\n"); } while (0);
    }
  else
    {
      yytoken = ((unsigned int) (yychar) <= 352 ? yytranslate[yychar] : 2);
      do { if ((parser->yydebug)) { rb_parser_printf (parser, "%s ", "Next token is"); yy_symbol_print (stderr, yytoken, &yylval, &yylloc, parser); rb_parser_printf (parser, "\n"); } } while (0);
    }



  yyn += yytoken;
  if (yyn < 0 || 12080 < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if ((!!((yyn) == (-643))))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }



  if (yyerrstatus)
    yyerrstatus--;


  do { if ((parser->yydebug)) { rb_parser_printf (parser, "%s ", "Shifting"); yy_symbol_print (stderr, yytoken, &yylval, &yylloc, parser); rb_parser_printf (parser, "\n"); } } while (0);


  yychar = (-2);

  yystate = yyn;

  *++yyvsp = yylval;

  *++yylsp = yylloc;
  goto yynewstate;





yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;





yyreduce:

  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen];


  do if (yylen) { (yyloc).first_loc = (((yylsp - yylen))[1]).first_loc; (yyloc).last_loc = (((yylsp - yylen))[yylen]).last_loc; } else rb_parser_set_location_of_none(parser, &(yyloc)); while (0);
  do { if ((parser->yydebug)) yy_reduce_print (yyssp, yyvsp, yylsp, yyn, parser); } while (0);
  switch (yyn)
    {
        case 2:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 1165) : (enum lex_state_e)(EXPR_BEG)));

   local_push_gen(parser,((parser->base_block != 0 && !(parser->in_main)) || (parser->in_main)));



      }
 break;

  case 3:
 {

   if ((yyvsp[0].node) && !(parser->base_block != 0 && !(parser->in_main))) {

       if (((int) ((((yyvsp[0].node))->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_BLOCK) void_expr_gen(parser, (((yyvsp[0].node)) = remove_begin((yyvsp[0].node))));
       else {
    NODE *node = (yyvsp[0].node);
    while (node->u3.node) {
        node = node->u3.node;
    }
    void_expr_gen(parser, ((node->u1.node) = remove_begin(node->u1.node)));
       }
   }
   (parser->eval_tree) = new_scope_gen(parser,0,block_append_gen(parser,((parser->eval_tree)),((yyvsp[0].node)),(&(yyloc))),&(yyloc));




   local_pop_gen(parser);
      }
 break;

  case 4:
 {

   void_stmts_gen(parser, ((yyvsp[-1].node)));


   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 5:
 {

   (yyval.node) = new_begin_gen(parser,0,&(yyloc));




      }
 break;

  case 6:
 {

   (yyval.node) = newline_node((yyvsp[0].node));



      }
 break;

  case 7:
 {

   (yyval.node) = block_append_gen(parser,((yyvsp[-2].node)),(newline_node((yyvsp[0].node))),(&(yyloc)));



      }
 break;

  case 8:
 {
   (yyval.node) = remove_begin((yyvsp[0].node));
      }
 break;

  case 10:
 {




      }
 break;

  case 11:
 {

   (parser->eval_tree_begin) = block_append_gen(parser,((parser->eval_tree_begin)),(new_begin_gen(parser,(yyvsp[-1].node),&(yyloc))),(&(yyloc)));



   (yyval.node) = new_begin_gen(parser,0,&(yyloc));



      }
 break;

  case 12:
 {

   (yyval.node) = (yyvsp[-3].node);
   if ((yyvsp[-2].node)) {
       (yyval.node) = new_rescue_gen(parser,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),&(yyloc));
   }
   else if ((yyvsp[-1].node)) {
       rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("else without rescue is useless"));
       (yyval.node) = block_append_gen(parser,((yyval.node)),((yyvsp[-1].node)),(&(yyloc)));
   }
   if ((yyvsp[0].node)) {
       if ((yyval.node)) {
    (yyval.node) = node_newnode(parser, ((NODE_ENSURE)), ((VALUE)((yyval.node))), ((VALUE)(0)), ((VALUE)((yyvsp[0].node))));
    (yyval.node)->nd_loc = (yyloc);
       }
       else {
    NODE *nil = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
    nil->nd_loc = (yyloc);
    (yyval.node) = block_append_gen(parser,((yyvsp[0].node)),(nil),(&(yyloc)));
       }
   }
   fixpos((yyval.node), (yyvsp[-3].node));







      }
 break;

  case 13:
 {

   void_stmts_gen(parser, ((yyvsp[-1].node)));


   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 14:
 {

   (yyval.node) = new_begin_gen(parser,0,&(yyloc));




      }
 break;

  case 15:
 {

   (yyval.node) = newline_node((yyvsp[0].node));



      }
 break;

  case 16:
 {

   (yyval.node) = block_append_gen(parser,((yyvsp[-2].node)),(newline_node((yyvsp[0].node))),(&(yyloc)));



      }
 break;

  case 17:
 {
   (yyval.node) = remove_begin((yyvsp[0].node));
      }
 break;

  case 18:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 19:
 {
   parser_yyerror(parser, ("BEGIN is permitted only at toplevel"));




      }
 break;

  case 20:
 {

   (parser->eval_tree_begin) = block_append_gen(parser,((parser->eval_tree_begin)),((yyvsp[-1].node)),(&(yyloc)));



   (yyval.node) = new_begin_gen(parser,0,&(yyloc));



      }
 break;

  case 21:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_FNAME|EXPR_FITEM), 1361) : (enum lex_state_e)(EXPR_FNAME|EXPR_FITEM)));}
 break;

  case 22:
 {

   (yyval.node) = node_newnode(parser, ((NODE_ALIAS)), ((VALUE)((yyvsp[-2].node))), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 23:
 {

   (yyval.node) = node_newnode(parser, ((NODE_VALIAS)), ((VALUE)((yyvsp[-1].id))), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 24:
 {

   char buf[2];
   buf[0] = '$';
   buf[1] = (char)(yyvsp[0].node)->u2.argc;
   (yyval.node) = node_newnode(parser, ((NODE_VALIAS)), ((VALUE)((yyvsp[-1].id))), ((VALUE)(rb_intern2(buf, 2))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 25:
 {

   parser_yyerror(parser, ("can't make alias for the number variables"));
   (yyval.node) = new_begin_gen(parser,0,&(yyloc));





      }
 break;

  case 26:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 27:
 {

   (yyval.node) = new_if_gen(parser, ((yyvsp[0].node)), (remove_begin((yyvsp[-2].node))), (0), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[0].node));



      }
 break;

  case 28:
 {

   (yyval.node) = new_unless_gen(parser, ((yyvsp[0].node)), (remove_begin((yyvsp[-2].node))), (0), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[0].node));



      }
 break;

  case 29:
 {

   if ((yyvsp[-2].node) && ((int) ((((yyvsp[-2].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BEGIN) {
       (yyval.node) = node_newnode(parser, ((NODE_WHILE)), ((VALUE)(cond_gen(parser, ((yyvsp[0].node)), 0, &(yylsp[0])))), ((VALUE)((yyvsp[-2].node)->u2.node)), ((VALUE)(0)));
   }
   else {
       (yyval.node) = node_newnode(parser, ((NODE_WHILE)), ((VALUE)(cond_gen(parser, ((yyvsp[0].node)), 0, &(yylsp[0])))), ((VALUE)((yyvsp[-2].node))), ((VALUE)(1)));
   }
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 30:
 {

   if ((yyvsp[-2].node) && ((int) ((((yyvsp[-2].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BEGIN) {
       (yyval.node) = node_newnode(parser, ((NODE_UNTIL)), ((VALUE)(cond_gen(parser, ((yyvsp[0].node)), 0, &(yylsp[0])))), ((VALUE)((yyvsp[-2].node)->u2.node)), ((VALUE)(0)));
   }
   else {
       (yyval.node) = node_newnode(parser, ((NODE_UNTIL)), ((VALUE)(cond_gen(parser, ((yyvsp[0].node)), 0, &(yylsp[0])))), ((VALUE)((yyvsp[-2].node))), ((VALUE)(1)));
   }
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 31:
 {

   NODE *resq;
   rb_code_range_t location;
   location.first_loc = (yylsp[-1]).first_loc;
   location.last_loc = (yylsp[0]).last_loc;
   resq = new_resbody_gen(parser, (0),(remove_begin((yyvsp[0].node))),(0),(&location));
   (yyval.node) = new_rescue_gen(parser,remove_begin((yyvsp[-2].node)),resq,0,&(yyloc));



      }
 break;

  case 32:
 {
   if ((parser->in_def)) {
       rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("END in method; use at_exit"));
   }

   {
       NODE *scope = node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(0)), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0)));

       (yyval.node) = node_newnode(parser, ((NODE_POSTEXE)), ((VALUE)(0)), ((VALUE)(scope)), ((VALUE)(0)));
       scope->nd_loc = (yyloc);
       (yyval.node)->nd_loc = (yyloc);
   }



      }
 break;

  case 34:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = node_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yyloc)));



      }
 break;

  case 35:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = node_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 36:
 {

   (yyval.node) = node_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yyloc)));



      }
 break;

  case 38:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = node_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 39:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_op_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 40:
 {

   NODE *args;

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyvsp[-3].node) = (((yyvsp[-3].node)) ? (nd_set_loc((yyvsp[-3].node), &(yylsp[-3])), (yyvsp[-3].node)) : new_zarray_gen(parser, &(yylsp[-3])));
   args = arg_concat_gen(parser,((yyvsp[-3].node)),((yyvsp[0].node)),(&(yyloc)));
   if ((yyvsp[-1].id) == tOROP) {
       (yyvsp[-1].id) = 0;
   }
   else if ((yyvsp[-1].id) == tANDOP) {
       (yyvsp[-1].id) = 1;
   }
   (yyval.node) = node_newnode(parser, ((NODE_OP_ASGN1)), ((VALUE)((yyvsp[-5].node))), ((VALUE)((yyvsp[-1].id))), ((VALUE)(args)));
   fixpos((yyval.node), (yyvsp[-5].node));
   (yyval.node)->nd_loc = (yyloc);




      }
 break;

  case 41:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-3].id)), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 42:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-3].id)), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 43:
 {

   rb_code_range_t location;
   location.first_loc = (yylsp[-4]).first_loc;
   location.last_loc = (yylsp[-2]).last_loc;


   (yyval.node) = const_path_field_gen(parser, (yyvsp[-4].node), (yyvsp[-2].id), &location);
   (yyval.node) = new_const_op_assign_gen(parser, ((yyval.node)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 44:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), (((VALUE)(idCOLON2))), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 45:
 {
   (yyvsp[-2].node) = ((yyvsp[-2].node));
   (yyval.node) = (rb_backref_error_gen(parser,((yyvsp[-2].node))), new_begin_gen(parser,0,&(yyloc)));
      }
 break;

  case 46:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);


      }
 break;

  case 47:
 {

   rb_code_range_t location;
   location.first_loc = (yylsp[-1]).first_loc;
   location.last_loc = (yylsp[0]).last_loc;
   value_expr_gen(parser, ((yyvsp[-2].node)) = remove_begin((yyvsp[-2].node)));
   (yyval.node) = new_rescue_gen(parser,(yyvsp[-2].node),new_resbody_gen(parser, (0),(remove_begin((yyvsp[0].node))),(0),(&location)),0,&(yyloc));



      }
 break;

  case 50:
 {
   (yyval.node) = logop_gen(parser, ((idAND)==idAND||(idAND)==idANDOP)?NODE_AND:NODE_OR, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yylsp[-1])), (&(yyloc)));
      }
 break;

  case 51:
 {
   (yyval.node) = logop_gen(parser, ((idOR)==idAND||(idOR)==idANDOP)?NODE_AND:NODE_OR, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yylsp[-1])), (&(yyloc)));
      }
 break;

  case 52:
 {
   (yyval.node) = call_uni_op_gen(parser, (cond_gen(parser, ((yyvsp[0].node)), 1, &(yylsp[0]))),('!'),(&(yylsp[-2])),(&(yyloc)));
      }
 break;

  case 53:
 {
   (yyval.node) = call_uni_op_gen(parser, (cond_gen(parser, ((yyvsp[0].node)), 1, &(yylsp[0]))),('!'),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 55:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);
   if (!(yyval.node)) (yyval.node) = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));



      }
 break;

  case 59:
 {
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-2].id),(yyvsp[-3].node),(yyvsp[-1].id),(yyvsp[0].node),&(yyloc));
      }
 break;

  case 60:
 {

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 61:
 {
   (yyval.node) = (yyvsp[-1].node);

   (yyvsp[-1].node)->u2.node->nd_loc.first_loc = (yylsp[-3]).first_loc;
   (yyvsp[-1].node)->u2.node->nd_loc.last_loc = (yylsp[0]).last_loc;
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));

      }
 break;

  case 62:
 {

   (yyval.node) = new_fcall_gen(parser, (yyvsp[0].id), 0, &(yyloc));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((parser->tokline))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));


      }
 break;

  case 63:
 {

   (yyval.node) = (yyvsp[-1].node);
   (yyval.node)->u3.node = (yyvsp[0].node);
   ((((yyvsp[-1].node))->nd_loc.last_loc) = ((((yyvsp[0].node))->nd_loc.last_loc)));



      }
 break;

  case 64:
 {
   block_dup_check_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)));
   (yyval.node) = new_command_gen(parser, (yyvsp[-2].node), (yyvsp[-1].node));
   (yyval.node) = method_add_block_gen(parser, (yyval.node), (yyvsp[0].node));
   fixpos((yyval.node), (yyvsp[-2].node));

   (yyval.node)->nd_loc = (yyloc);
   ((((yyvsp[-2].node))->nd_loc.last_loc) = ((((yyvsp[-1].node))->nd_loc.last_loc)));


      }
 break;

  case 65:
 {
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-2].id),(yyvsp[-3].node),(yyvsp[-1].id),(yyvsp[0].node),&(yyloc));
   fixpos((yyval.node), (yyvsp[-3].node));
      }
 break;

  case 66:
 {
   block_dup_check_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)));
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-3].id),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[-1].node),&(yyloc));
   (yyval.node) = method_add_block_gen(parser, (yyval.node), (yyvsp[0].node));
   fixpos((yyval.node), (yyvsp[-4].node));

   (yyval.node)->nd_loc = (yyloc);


     }
 break;

  case 67:
 {
   (yyval.node) = new_qcall_gen(parser,((VALUE)(idCOLON2)),(yyvsp[-3].node),(yyvsp[-1].id),(yyvsp[0].node),&(yyloc));
   fixpos((yyval.node), (yyvsp[-3].node));
      }
 break;

  case 68:
 {
   block_dup_check_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)));
   (yyval.node) = new_qcall_gen(parser,((VALUE)(idCOLON2)),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[-1].node),&(yyloc));
   (yyval.node) = method_add_block_gen(parser, (yyval.node), (yyvsp[0].node));
   fixpos((yyval.node), (yyvsp[-4].node));

   (yyval.node)->nd_loc = (yyloc);


     }
 break;

  case 69:
 {

   (yyval.node) = node_newnode(parser, ((NODE_SUPER)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)((yyvsp[0].node))));
   fixpos((yyval.node), (yyvsp[0].node));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 70:
 {

   (yyval.node) = new_yield_gen(parser, ((yyvsp[0].node)), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[0].node));



      }
 break;

  case 71:
 {

   (yyval.node) = node_newnode(parser, ((NODE_RETURN)), ((VALUE)(ret_args_gen(parser, ((yyvsp[0].node))))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 72:
 {

   (yyval.node) = node_newnode(parser, ((NODE_BREAK)), ((VALUE)(ret_args_gen(parser, ((yyvsp[0].node))))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 73:
 {

   (yyval.node) = node_newnode(parser, ((NODE_NEXT)), ((VALUE)(ret_args_gen(parser, ((yyvsp[0].node))))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 75:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 77:
 {

   (yyval.node) = new_masgn_gen(parser,new_list_gen(parser, (yyvsp[-1].node), &(yyloc)),0,&(yyloc));



      }
 break;

  case 78:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[0].node),0,&(yyloc));



      }
 break;

  case 79:
 {

   (yyval.node) = new_masgn_gen(parser,list_append_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node))),0,&(yyloc));



      }
 break;

  case 80:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-2].node),(yyvsp[0].node),&(yyloc));



      }
 break;

  case 81:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-4].node),new_postarg_gen(parser,(yyvsp[-2].node),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 82:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-1].node),((NODE *)-1),&(yyloc));



      }
 break;

  case 83:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-3].node),new_postarg_gen(parser,((NODE *)-1),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 84:
 {

   (yyval.node) = new_masgn_gen(parser,0,(yyvsp[0].node),&(yyloc));



      }
 break;

  case 85:
 {

   (yyval.node) = new_masgn_gen(parser,0,new_postarg_gen(parser,(yyvsp[-2].node),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 86:
 {

   (yyval.node) = new_masgn_gen(parser,0,((NODE *)-1),&(yyloc));



      }
 break;

  case 87:
 {

   (yyval.node) = new_masgn_gen(parser,0,new_postarg_gen(parser,((NODE *)-1),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 89:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 90:
 {

   (yyval.node) = new_list_gen(parser, (yyvsp[-1].node), &(yylsp[-1]));



      }
 break;

  case 91:
 {

   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[-1].node)));



      }
 break;

  case 92:
 {

   (yyval.node) = new_list_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 93:
 {

   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[0].node)));



      }
 break;

  case 94:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 95:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 96:
 {

   (yyval.node) = aryset_gen(parser, ((yyvsp[-3].node)), ((yyvsp[-1].node)), (&(yyloc)));



      }
 break;

  case 97:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 98:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), (idCOLON2), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 99:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 100:
 {
   (yyval.node) = const_decl_gen(parser, const_path_field_gen(parser, (yyvsp[-2].node), (yyvsp[0].id), &(yyloc)), &(yyloc));
      }
 break;

  case 101:
 {
   (yyval.node) = const_decl_gen(parser, node_newnode(parser, ((NODE_COLON3)), ((VALUE)(0)), ((VALUE)((yyvsp[0].id))), ((VALUE)(0))), &(yyloc));
      }
 break;

  case 102:
 {
   (yyvsp[0].node) = ((yyvsp[0].node));
   (yyval.node) = (rb_backref_error_gen(parser,((yyvsp[0].node))), new_begin_gen(parser,0,&(yyloc)));
      }
 break;

  case 103:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 104:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 105:
 {

   (yyval.node) = aryset_gen(parser, ((yyvsp[-3].node)), ((yyvsp[-1].node)), (&(yyloc)));



      }
 break;

  case 106:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 107:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), (idCOLON2), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 108:
 {

   (yyval.node) = attrset_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].id)), (&(yyloc)));



      }
 break;

  case 109:
 {
   (yyval.node) = const_decl_gen(parser, const_path_field_gen(parser, (yyvsp[-2].node), (yyvsp[0].id), &(yyloc)), &(yyloc));
      }
 break;

  case 110:
 {
   (yyval.node) = const_decl_gen(parser, node_newnode(parser, ((NODE_COLON3)), ((VALUE)(0)), ((VALUE)((yyvsp[0].id))), ((VALUE)(0))), &(yyloc));
      }
 break;

  case 111:
 {
   (yyvsp[0].node) = ((yyvsp[0].node));
   (yyval.node) = (rb_backref_error_gen(parser,((yyvsp[0].node))), new_begin_gen(parser,0,&(yyloc)));
      }
 break;

  case 112:
 {

   parser_yyerror(parser, ("class/module name must be CONSTANT"));




      }
 break;

  case 114:
 {

   (yyval.node) = node_newnode(parser, ((NODE_COLON3)), ((VALUE)(0)), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 115:
 {

   (yyval.node) = node_newnode(parser, ((NODE_COLON2)), ((VALUE)(0)), ((VALUE)((yyval.node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 116:
 {

   (yyval.node) = node_newnode(parser, ((NODE_COLON2)), ((VALUE)((yyvsp[-2].node))), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 120:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 2084) : (enum lex_state_e)(EXPR_ENDFN)));
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 121:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 2089) : (enum lex_state_e)(EXPR_ENDFN)));
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 124:
 {

   (yyval.node) = new_lit_gen(parser, ( ({ __builtin_constant_p((yyvsp[0].id)) && !(!((yyvsp[0].id)&RUBY_ID_STATIC_SYM)&&(yyvsp[0].id)>tLAST_OP_ID) ? (((VALUE)((yyvsp[0].id))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym((yyvsp[0].id)); })), &(yyloc));



      }
 break;

  case 126:
 {

   (yyval.node) = new_undef_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 127:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_FNAME|EXPR_FITEM), 2117) : (enum lex_state_e)(EXPR_FNAME|EXPR_FITEM)));}
 break;

  case 128:
 {

   NODE *undef = new_undef_gen(parser, (yyvsp[0].node), &(yyloc));
   (yyval.node) = block_append_gen(parser,((yyvsp[-3].node)),(undef),(&(yyloc)));



      }
 break;

  case 129:
 { ((yyval.id) = '|'); }
 break;

  case 130:
 { ((yyval.id) = '^'); }
 break;

  case 131:
 { ((yyval.id) = '&'); }
 break;

  case 132:
 { ((yyval.id) = tCMP); }
 break;

  case 133:
 { ((yyval.id) = tEQ); }
 break;

  case 134:
 { ((yyval.id) = tEQQ); }
 break;

  case 135:
 { ((yyval.id) = tMATCH); }
 break;

  case 136:
 { ((yyval.id) = tNMATCH); }
 break;

  case 137:
 { ((yyval.id) = '>'); }
 break;

  case 138:
 { ((yyval.id) = tGEQ); }
 break;

  case 139:
 { ((yyval.id) = '<'); }
 break;

  case 140:
 { ((yyval.id) = tLEQ); }
 break;

  case 141:
 { ((yyval.id) = tNEQ); }
 break;

  case 142:
 { ((yyval.id) = tLSHFT); }
 break;

  case 143:
 { ((yyval.id) = tRSHFT); }
 break;

  case 144:
 { ((yyval.id) = '+'); }
 break;

  case 145:
 { ((yyval.id) = '-'); }
 break;

  case 146:
 { ((yyval.id) = '*'); }
 break;

  case 147:
 { ((yyval.id) = '*'); }
 break;

  case 148:
 { ((yyval.id) = '/'); }
 break;

  case 149:
 { ((yyval.id) = '%'); }
 break;

  case 150:
 { ((yyval.id) = tPOW); }
 break;

  case 151:
 { ((yyval.id) = tDSTAR); }
 break;

  case 152:
 { ((yyval.id) = '!'); }
 break;

  case 153:
 { ((yyval.id) = '~'); }
 break;

  case 154:
 { ((yyval.id) = tUPLUS); }
 break;

  case 155:
 { ((yyval.id) = tUMINUS); }
 break;

  case 156:
 { ((yyval.id) = tAREF); }
 break;

  case 157:
 { ((yyval.id) = tASET); }
 break;

  case 158:
 { ((yyval.id) = '`'); }
 break;

  case 200:
 {
   (yyval.node) = node_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 201:
 {
   (yyval.node) = new_op_assign_gen(parser, ((yyvsp[-2].node)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 202:
 {

   NODE *args;

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyvsp[-3].node) = (((yyvsp[-3].node)) ? (nd_set_loc((yyvsp[-3].node), &(yylsp[-3])), (yyvsp[-3].node)) : new_zarray_gen(parser, &(yylsp[-3])));
   if (((int) ((((yyvsp[-3].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BLOCK_PASS) {
       args = node_newnode(parser, ((NODE_ARGSCAT)), ((VALUE)((yyvsp[-3].node))), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)));
       args->nd_loc = (yyloc);
   }
   else {
       args = arg_concat_gen(parser,((yyvsp[-3].node)),((yyvsp[0].node)),(&(yyloc)));
   }
   if ((yyvsp[-1].id) == tOROP) {
       (yyvsp[-1].id) = 0;
   }
   else if ((yyvsp[-1].id) == tANDOP) {
       (yyvsp[-1].id) = 1;
   }
   (yyval.node) = node_newnode(parser, ((NODE_OP_ASGN1)), ((VALUE)((yyvsp[-5].node))), ((VALUE)((yyvsp[-1].id))), ((VALUE)(args)));
   fixpos((yyval.node), (yyvsp[-5].node));
   (yyval.node)->nd_loc = (yyloc);




      }
 break;

  case 203:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-3].id)), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 204:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-3].id)), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 205:
 {
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_attr_op_assign_gen(parser, ((yyvsp[-4].node)), (((VALUE)(idCOLON2))), ((yyvsp[-2].id)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 206:
 {

   rb_code_range_t location;
   location.first_loc = (yylsp[-4]).first_loc;
   location.last_loc = (yylsp[-2]).last_loc;


   (yyval.node) = const_path_field_gen(parser, (yyvsp[-4].node), (yyvsp[-2].id), &location);
   (yyval.node) = new_const_op_assign_gen(parser, ((yyval.node)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 207:
 {
   (yyval.node) = node_newnode(parser, ((NODE_COLON3)), ((VALUE)(0)), ((VALUE)((yyvsp[-2].id))), ((VALUE)(0)));
   (yyval.node) = new_const_op_assign_gen(parser, ((yyval.node)), ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));
      }
 break;

  case 208:
 {
   (yyvsp[-2].node) = ((yyvsp[-2].node));
   (yyval.node) = (rb_backref_error_gen(parser,((yyvsp[-2].node))), new_begin_gen(parser,0,&(yyloc)));
      }
 break;

  case 209:
 {

   value_expr_gen(parser, ((yyvsp[-2].node)) = remove_begin((yyvsp[-2].node)));
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = node_newnode(parser, ((NODE_DOT2)), ((VALUE)((yyvsp[-2].node))), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 210:
 {

   value_expr_gen(parser, ((yyvsp[-2].node)) = remove_begin((yyvsp[-2].node)));
   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = node_newnode(parser, ((NODE_DOT3)), ((VALUE)((yyvsp[-2].node))), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 211:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('+'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 212:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('-'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 213:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('*'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 214:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('/'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 215:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('%'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 216:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idPow),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 217:
 {
   (yyval.node) = call_uni_op_gen(parser, (call_bin_op_gen(parser, ((yyvsp[-2].node)),(idPow),((yyvsp[0].node)),(&(yylsp[-2])),(&(yyloc)))),(idUMinus),(&(yylsp[-3])),(&(yyloc)));
      }
 break;

  case 218:
 {
   (yyval.node) = call_uni_op_gen(parser, ((yyvsp[0].node)),(idUPlus),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 219:
 {
   (yyval.node) = call_uni_op_gen(parser, ((yyvsp[0].node)),(idUMinus),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 220:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('|'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 221:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('^'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 222:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),('&'),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 223:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idCmp),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 225:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idEq),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 226:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idEqq),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 227:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idNeq),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 228:
 {
   (yyval.node) = match_op_gen(parser, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yylsp[-1])), (&(yyloc)));
      }
 break;

  case 229:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idNeqTilde),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 230:
 {
   (yyval.node) = call_uni_op_gen(parser, (cond_gen(parser, ((yyvsp[0].node)), 1, &(yylsp[0]))),('!'),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 231:
 {
   (yyval.node) = call_uni_op_gen(parser, ((yyvsp[0].node)),('~'),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 232:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idLTLT),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 233:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),(idGTGT),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 234:
 {
   (yyval.node) = logop_gen(parser, ((idANDOP)==idAND||(idANDOP)==idANDOP)?NODE_AND:NODE_OR, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yylsp[-1])), (&(yyloc)));
      }
 break;

  case 235:
 {
   (yyval.node) = logop_gen(parser, ((idOROP)==idAND||(idOROP)==idANDOP)?NODE_AND:NODE_OR, ((yyvsp[-2].node)), ((yyvsp[0].node)), (&(yylsp[-1])), (&(yyloc)));
      }
 break;

  case 236:
 {(parser->in_defined) = 1;}
 break;

  case 237:
 {
   (parser->in_defined) = 0;
   (yyval.node) = new_defined_gen(parser, (yyvsp[0].node), &(yyloc));
      }
 break;

  case 238:
 {

   value_expr_gen(parser, ((yyvsp[-5].node)) = remove_begin((yyvsp[-5].node)));
   (yyval.node) = new_if_gen(parser, ((yyvsp[-5].node)), ((yyvsp[-3].node)), ((yyvsp[0].node)), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[-5].node));



      }
 break;

  case 239:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 240:
 {(yyval.id) = '>';}
 break;

  case 241:
 {(yyval.id) = '<';}
 break;

  case 242:
 {(yyval.id) = idGE;}
 break;

  case 243:
 {(yyval.id) = idLE;}
 break;

  case 244:
 {
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),((yyvsp[-1].id)),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 245:
 {
   rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("comparison '%s' after comparison"), (rb_id2name((yyvsp[-1].id))));
   (yyval.node) = call_bin_op_gen(parser, ((yyvsp[-2].node)),((yyvsp[-1].id)),((yyvsp[0].node)),(&(yylsp[-1])),(&(yyloc)));
      }
 break;

  case 246:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);
   if (!(yyval.node)) (yyval.node) = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));



      }
 break;

  case 248:
 {
   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 249:
 {

   (yyval.node) = (yyvsp[-1].node) ? arg_append_gen(parser,((yyvsp[-3].node)),(new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1]))),(&(yyloc))) : (yyvsp[-3].node);



      }
 break;

  case 250:
 {

   (yyval.node) = (yyvsp[-1].node) ? new_list_gen(parser, new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1])), &(yyloc)) : 0;



      }
 break;

  case 251:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);


      }
 break;

  case 252:
 {

   rb_code_range_t location;
   location.first_loc = (yylsp[-1]).first_loc;
   location.last_loc = (yylsp[0]).last_loc;
   value_expr_gen(parser, ((yyvsp[-2].node)) = remove_begin((yyvsp[-2].node)));
   (yyval.node) = new_rescue_gen(parser,(yyvsp[-2].node),new_resbody_gen(parser, (0),(remove_begin((yyvsp[0].node))),(0),(&location)),0,&(yyloc));



      }
 break;

  case 253:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 258:
 {
        (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 259:
 {

   (yyval.node) = (yyvsp[-1].node) ? arg_append_gen(parser,((yyvsp[-3].node)),(new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1]))),(&(yyloc))) : (yyvsp[-3].node);



      }
 break;

  case 260:
 {

   (yyval.node) = (yyvsp[-1].node) ? new_list_gen(parser, new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1])), &(yylsp[-1])) : 0;



      }
 break;

  case 261:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = new_list_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 262:
 {

   (yyval.node) = arg_blk_pass((yyvsp[-1].node), (yyvsp[0].node));



      }
 break;

  case 263:
 {

   (yyval.node) = (yyvsp[-1].node) ? new_list_gen(parser, new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1])), &(yylsp[-1])) : 0;
   (yyval.node) = arg_blk_pass((yyval.node), (yyvsp[0].node));




      }
 break;

  case 264:
 {

   (yyval.node) = (yyvsp[-1].node) ? arg_append_gen(parser,((yyvsp[-3].node)),(new_hash_gen(parser, ((yyvsp[-1].node)), &(yylsp[-1]))),(&(yyloc))) : (yyvsp[-3].node);
   (yyval.node) = arg_blk_pass((yyval.node), (yyvsp[0].node));



      }
 break;

  case 266:
 {
   (yyval.val) = (parser->cmdarg_stack);
   ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack))<<1)|(((1))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(push)", 2545) : (void)0));
      }
 break;

  case 267:
 {

   (((parser->cmdarg_stack))=(((yyvsp[-1].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 2550) : (void)0));
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 268:
 {

   (yyval.node) = node_newnode(parser, ((NODE_BLOCK_PASS)), ((VALUE)(0)), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 269:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 270:
 {
   (yyval.node) = 0;
      }
 break;

  case 271:
 {

   (yyval.node) = new_list_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 272:
 {

   (yyval.node) = node_newnode(parser, ((NODE_SPLAT)), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 273:
 {

   NODE *n1;
   if ((n1 = splat_array((yyvsp[-2].node))) != 0) {
       (yyval.node) = list_append_gen(parser,(n1),((yyvsp[0].node)));
   }
   else {
       (yyval.node) = arg_append_gen(parser,((yyvsp[-2].node)),((yyvsp[0].node)),(&(yyloc)));
   }



      }
 break;

  case 274:
 {

   NODE *n1;
   if ((((int) ((((yyvsp[0].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) && (n1 = splat_array((yyvsp[-3].node))) != 0) {
       (yyval.node) = list_concat(n1, (yyvsp[0].node));
   }
   else {
       (yyval.node) = arg_concat_gen(parser,((yyvsp[-3].node)),((yyvsp[0].node)),(&(yyloc)));
   }



      }
 break;

  case 277:
 {

   NODE *n1;
   if ((n1 = splat_array((yyvsp[-2].node))) != 0) {
       (yyval.node) = list_append_gen(parser,(n1),((yyvsp[0].node)));
   }
   else {
       (yyval.node) = arg_append_gen(parser,((yyvsp[-2].node)),((yyvsp[0].node)),(&(yyloc)));
   }



      }
 break;

  case 278:
 {

   NODE *n1;
   if (((int) ((((yyvsp[0].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY &&
       (n1 = splat_array((yyvsp[-3].node))) != 0) {
       (yyval.node) = list_concat(n1, (yyvsp[0].node));
   }
   else {
       (yyval.node) = arg_concat_gen(parser,((yyvsp[-3].node)),((yyvsp[0].node)),(&(yyloc)));
   }



      }
 break;

  case 279:
 {

   (yyval.node) = node_newnode(parser, ((NODE_SPLAT)), ((VALUE)((yyvsp[0].node))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 290:
 {

   (yyval.node) = new_fcall_gen(parser, (yyvsp[0].id), 0, &(yyloc));



      }
 break;

  case 291:
 {
   (yyvsp[0].val) = (parser->cmdarg_stack);
   (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 2688) : (void)0));

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 292:
 {
   (((parser->cmdarg_stack))=(((yyvsp[-3].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 2697) : (void)0));

   if ((yyvsp[-1].node) == ((void*)0)) {
       (yyval.node) = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
       (yyval.node)->nd_loc = (yyloc);
   }
   else {
       set_line_body((yyvsp[-1].node), (yyvsp[-2].num));
       (yyval.node) = new_begin_gen(parser,(yyvsp[-1].node),&(yyloc));
   }
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));



      }
 break;

  case 293:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDARG), 2712) : (enum lex_state_e)(EXPR_ENDARG)));}
 break;

  case 294:
 {

   (yyval.node) = new_begin_gen(parser,0,&(yyloc));



      }
 break;

  case 295:
 {
   (yyvsp[0].val) = (parser->cmdarg_stack);
   (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 2723) : (void)0));
      }
 break;

  case 296:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDARG), 2725) : (enum lex_state_e)(EXPR_ENDARG)));}
 break;

  case 297:
 {
   (((parser->cmdarg_stack))=(((yyvsp[-4].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 2727) : (void)0));

   (yyval.node) = (yyvsp[-2].node);



      }
 break;

  case 298:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 299:
 {

   (yyval.node) = node_newnode(parser, ((NODE_COLON2)), ((VALUE)((yyvsp[-2].node))), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 300:
 {

   (yyval.node) = node_newnode(parser, ((NODE_COLON3)), ((VALUE)(0)), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 301:
 {

   (yyval.node) = (((yyvsp[-1].node)) ? (nd_set_loc((yyvsp[-1].node), &(yyloc)), (yyvsp[-1].node)) : new_zarray_gen(parser, &(yyloc)));



      }
 break;

  case 302:
 {

   (yyval.node) = new_hash_gen(parser, ((yyvsp[-1].node)), &(yyloc));
   (yyval.node)->u2.argc = 1;



      }
 break;

  case 303:
 {

   (yyval.node) = node_newnode(parser, ((NODE_RETURN)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 304:
 {

   (yyval.node) = new_yield_gen(parser, ((yyvsp[-1].node)), (&(yyloc)));



      }
 break;

  case 305:
 {

   (yyval.node) = node_newnode(parser, ((NODE_YIELD)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 306:
 {

   (yyval.node) = node_newnode(parser, ((NODE_YIELD)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 307:
 {(parser->in_defined) = 1;}
 break;

  case 308:
 {
   (parser->in_defined) = 0;
   (yyval.node) = new_defined_gen(parser, (yyvsp[-1].node), &(yyloc));
      }
 break;

  case 309:
 {
   (yyval.node) = call_uni_op_gen(parser, (cond_gen(parser, ((yyvsp[-1].node)), 1, &(yylsp[-1]))),('!'),(&(yylsp[-3])),(&(yyloc)));
      }
 break;

  case 310:
 {
   (yyval.node) = call_uni_op_gen(parser, (cond_gen(parser, (new_nil_gen(parser,&(yylsp[-1]))), 1, &(yylsp[-1]))),('!'),(&(yylsp[-2])),(&(yyloc)));
      }
 break;

  case 311:
 {

   (yyvsp[0].node)->u3.node = (yyvsp[-1].node);
   (yyvsp[0].node)->nd_loc = (yyloc);
   (yyval.node) = (yyvsp[0].node);




      }
 break;

  case 313:
 {

   block_dup_check_gen(parser,((yyvsp[-1].node)->u3.node),((yyvsp[0].node)));
   (yyvsp[0].node)->u3.node = (yyvsp[-1].node);
   (yyvsp[0].node)->nd_loc = (yyloc);
   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 314:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 315:
 {

   (yyval.node) = new_if_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-2].node)), ((yyvsp[-1].node)), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[-4].node));



      }
 break;

  case 316:
 {

   (yyval.node) = new_unless_gen(parser, ((yyvsp[-4].node)), ((yyvsp[-2].node)), ((yyvsp[-1].node)), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[-4].node));



      }
 break;

  case 317:
 {((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((1))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 2876) : (void)0));}
 break;

  case 318:
 {((((parser->cond_stack)) = ((parser->cond_stack)) >> 1), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(pop)", 2876) : (void)0));}
 break;

  case 319:
 {

   (yyval.node) = node_newnode(parser, ((NODE_WHILE)), ((VALUE)(cond_gen(parser, ((yyvsp[-4].node)), 0, &(yylsp[-4])))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(1)));
   fixpos((yyval.node), (yyvsp[-4].node));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 320:
 {((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((1))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 2888) : (void)0));}
 break;

  case 321:
 {((((parser->cond_stack)) = ((parser->cond_stack)) >> 1), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(pop)", 2888) : (void)0));}
 break;

  case 322:
 {

   (yyval.node) = node_newnode(parser, ((NODE_UNTIL)), ((VALUE)(cond_gen(parser, ((yyvsp[-4].node)), 0, &(yylsp[-4])))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(1)));
   fixpos((yyval.node), (yyvsp[-4].node));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 323:
 {

   (yyval.node) = node_newnode(parser, ((NODE_CASE)), ((VALUE)((yyvsp[-3].node))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0)));
   fixpos((yyval.node), (yyvsp[-3].node));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 324:
 {

   (yyval.node) = node_newnode(parser, ((NODE_CASE2)), ((VALUE)(0)), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0)));
   ((yyvsp[-1].node))->flags=((((yyvsp[-1].node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-3].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 325:
 {((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((1))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 2923) : (void)0));}
 break;

  case 326:
 {((((parser->cond_stack)) = ((parser->cond_stack)) >> 1), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(pop)", 2925) : (void)0));}
 break;

  case 327:
 {
   ID id = internal_id_gen(parser);
   ID *tbl = ((ID*)ruby_xmalloc2((size_t)(2),sizeof(ID)));
   NODE *m = node_newnode(parser, ((NODE_ARGS_AUX)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   NODE *args, *scope;

   switch (((int) ((((yyvsp[-7].node))->flags & (((VALUE)0x7f)<<8))>>8))) {
     case NODE_MASGN:
       m->u3.node = node_assign_gen(parser, ((yyvsp[-7].node)), (new_for_gen(parser, new_dvar_gen(parser, id, &(yylsp[-7])), 0, 0, &(yylsp[-7]))), (&(yylsp[-7])));
       args = new_args_gen(parser, (m),(0),(id),(0),(new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[-7])))),(&(yylsp[-7])));
       break;
     case NODE_LASGN:
     case NODE_DASGN:
     case NODE_DASGN_CURR:
       (yyvsp[-7].node)->u2.node = new_dvar_gen(parser, id, &(yylsp[-7]));
       m->u2.argc = 1;
       m->u3.node = (yyvsp[-7].node);
       args = new_args_gen(parser, (m),(0),(0),(0),(new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[-7])))),(&(yylsp[-7])));
       break;
     default:
       {
    NODE *masgn = new_masgn_gen(parser,new_list_gen(parser, (yyvsp[-7].node), &(yylsp[-7])),0,&(yylsp[-7]));
    m->u3.node = node_assign_gen(parser, (masgn), (new_dvar_gen(parser, id, &(yylsp[-7]))), (&(yylsp[-7])));
    args = new_args_gen(parser, (m),(0),(id),(0),(new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[-7])))),(&(yylsp[-7])));
    break;
       }
   }
   add_mark_object_gen(parser, ((VALUE)rb_imemo_alloc_new((VALUE)tbl, 0, 0, 0)));
   scope = node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(tbl)), ((VALUE)((yyvsp[-1].node))), ((VALUE)(args)));
   scope->nd_loc = (yyloc);
   tbl[0] = 1; tbl[1] = id;
   (yyval.node) = new_for_gen(parser, 0, (yyvsp[-4].node), scope, &(yyloc));
   fixpos((yyval.node), (yyvsp[-7].node));



      }
 break;

  case 328:
 {
   if ((parser->in_def))
       parser_yyerror(parser, ("class definition in method body"));
   (yyvsp[-2].num) = (parser->in_class);
   (parser->in_class) = 1;
   local_push_gen(parser,(0));

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 329:
 {

   (yyval.node) = node_newnode(parser, ((NODE_CLASS)), ((VALUE)((yyvsp[-4].node))), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0))))), ((VALUE)(((yyvsp[-3].node)))));
   (yyval.node)->u2.node->nd_loc = (yyloc);
   set_line_body((yyvsp[-1].node), (yyvsp[-2].num));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);



   local_pop_gen(parser);
   (parser->in_class) = (yyvsp[-5].num) & 1;
      }
 break;

  case 330:
 {
   (yyval.num) = ((parser->in_class) << 1) | (parser->in_def);
   (parser->in_def) = 0;
   (parser->in_class) = 0;
   local_push_gen(parser,(0));
      }
 break;

  case 331:
 {

   (yyval.node) = node_newnode(parser, ((NODE_SCLASS)), ((VALUE)((yyvsp[-4].node))), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0))))), ((VALUE)(0)));
   (yyval.node)->u2.node->nd_loc = (yyloc);
   set_line_body((yyvsp[-1].node), (int)(((long)((yyvsp[-4].node))->flags)>>(8 +7)));
   fixpos((yyval.node), (yyvsp[-4].node));
   (yyval.node)->nd_loc = (yyloc);



   local_pop_gen(parser);
   (parser->in_def) = (yyvsp[-3].num) & 1;
   (parser->in_class) = ((yyvsp[-3].num) >> 1) & 1;
      }
 break;

  case 332:
 {
   if ((parser->in_def))
       parser_yyerror(parser, ("module definition in method body"));
   (yyvsp[-1].num) = (parser->in_class);
   (parser->in_class) = 1;
   local_push_gen(parser,(0));

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 333:
 {

   (yyval.node) = node_newnode(parser, ((NODE_MODULE)), ((VALUE)((yyvsp[-3].node))), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)((yyvsp[-1].node))), ((VALUE)(0))))), ((VALUE)(0)));
   (yyval.node)->u2.node->nd_loc = (yyloc);
   set_line_body((yyvsp[-1].node), (yyvsp[-2].num));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);



   local_pop_gen(parser);
   (parser->in_class) = (yyvsp[-4].num) & 1;
      }
 break;

  case 334:
 {
   local_push_gen(parser,(0));
   (yyval.id) = (parser->cur_arg);
   (parser->cur_arg) = 0;
      }
 break;

  case 335:
 {
   (yyval.num) = (parser->in_def);
   (parser->in_def) = 1;
      }
 break;

  case 336:
 {

   NODE *body = remove_begin((yyvsp[-1].node));
   reduce_nodes_gen(parser,(&body));
   (yyval.node) = node_newnode(parser, ((NODE_DEFN)), ((VALUE)(0)), ((VALUE)((yyvsp[-5].id))), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)(body)), ((VALUE)((yyvsp[-2].node)))))));
   (yyval.node)->u3.node->nd_loc = (yyloc);
   set_line_body(body, (yyvsp[-6].num));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-6].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);



   local_pop_gen(parser);
   (parser->in_def) = (yyvsp[-3].num) & 1;
   (parser->cur_arg) = (yyvsp[-4].id);
      }
 break;

  case 337:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_FNAME), 3082) : (enum lex_state_e)(EXPR_FNAME)));}
 break;

  case 338:
 {
   (yyvsp[-1].num) = (parser->in_def);
   (parser->in_def) = 1;
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN|EXPR_LABEL), 3086) : (enum lex_state_e)(EXPR_ENDFN|EXPR_LABEL)));
   local_push_gen(parser,(0));
   (yyval.id) = (parser->cur_arg);
   (parser->cur_arg) = 0;
      }
 break;

  case 339:
 {

   NODE *body = remove_begin((yyvsp[-1].node));
   reduce_nodes_gen(parser,(&body));
   (yyval.node) = node_newnode(parser, ((NODE_DEFS)), ((VALUE)((yyvsp[-7].node))), ((VALUE)((yyvsp[-4].id))), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)(body)), ((VALUE)((yyvsp[-2].node)))))));
   (yyval.node)->u3.node->nd_loc = (yyloc);
   set_line_body(body, (yyvsp[-8].num));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-8].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);



   local_pop_gen(parser);
   (parser->in_def) = (yyvsp[-5].num) & 1;
   (parser->cur_arg) = (yyvsp[-3].id);
      }
 break;

  case 340:
 {

   (yyval.node) = node_newnode(parser, ((NODE_BREAK)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 341:
 {

   (yyval.node) = node_newnode(parser, ((NODE_NEXT)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 342:
 {

   (yyval.node) = node_newnode(parser, ((NODE_REDO)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 343:
 {

   (yyval.node) = node_newnode(parser, ((NODE_RETRY)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 344:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);
   if (!(yyval.node)) (yyval.node) = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));



      }
 break;

  case 345:
 {
   token_info_push_gen(parser, ("begin"), (sizeof("begin") - 1));
      }
 break;

  case 346:
 {
   token_info_push_gen(parser, ("if"), (sizeof("if") - 1));
      }
 break;

  case 347:
 {
   token_info_push_gen(parser, ("unless"), (sizeof("unless") - 1));
      }
 break;

  case 348:
 {
   token_info_push_gen(parser, ("while"), (sizeof("while") - 1));
      }
 break;

  case 349:
 {
   token_info_push_gen(parser, ("until"), (sizeof("until") - 1));
      }
 break;

  case 350:
 {
   token_info_push_gen(parser, ("case"), (sizeof("case") - 1));

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 351:
 {
   token_info_push_gen(parser, ("for"), (sizeof("for") - 1));
      }
 break;

  case 352:
 {
   token_info_push_gen(parser, ("class"), (sizeof("class") - 1));
      }
 break;

  case 353:
 {
   token_info_push_gen(parser, ("module"), (sizeof("module") - 1));
      }
 break;

  case 354:
 {
   token_info_push_gen(parser, ("def"), (sizeof("def") - 1));

   (yyval.num) = (parser->ruby_sourceline);


      }
 break;

  case 355:
 {
   token_info_pop_gen(parser, ("end"), (sizeof("end") - 1));
      }
 break;

  case 356:
 {
   if ((parser->in_class) && !(parser->in_def) && !dyna_in_block_gen(parser))
       parser_yyerror(parser, ("Invalid return in class/module body"));
      }
 break;

  case 363:
 {

   (yyval.node) = new_if_gen(parser, ((yyvsp[-3].node)), ((yyvsp[-1].node)), ((yyvsp[0].node)), (&(yyloc)));
   fixpos((yyval.node), (yyvsp[-3].node));



      }
 break;

  case 365:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 368:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[0].id)), (0), (&(yyloc)));



      }
 break;

  case 369:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 370:
 {

   (yyval.node) = new_list_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 371:
 {

   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[0].node)));



      }
 break;

  case 372:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[0].node),0,&(yyloc));



      }
 break;

  case 373:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[0].id)), (0), (&(yyloc)));

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-3].node),(yyval.node),&(yyloc));



      }
 break;

  case 374:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[-2].id)), (0), (&(yyloc)));

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-5].node),new_postarg_gen(parser,(yyval.node),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 375:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-2].node),((NODE *)-1),&(yyloc));



      }
 break;

  case 376:
 {

   (yyval.node) = new_masgn_gen(parser,(yyvsp[-4].node),new_postarg_gen(parser,((NODE *)-1),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 377:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[0].id)), (0), (&(yyloc)));

   (yyval.node) = new_masgn_gen(parser,0,(yyval.node),&(yyloc));



      }
 break;

  case 378:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[-2].id)), (0), (&(yyloc)));

   (yyval.node) = new_masgn_gen(parser,0,new_postarg_gen(parser,(yyval.node),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 379:
 {

   (yyval.node) = new_masgn_gen(parser,0,((NODE *)-1),&(yyloc));



      }
 break;

  case 380:
 {

   (yyval.node) = new_masgn_gen(parser,0,new_postarg_gen(parser,((NODE *)-1),(yyvsp[0].node),&(yyloc)),&(yyloc));




      }
 break;

  case 381:
 {
   (yyval.node) = new_args_tail_gen(parser, ((yyvsp[-3].node)),((yyvsp[-1].id)),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 382:
 {
   (yyval.node) = new_args_tail_gen(parser, ((yyvsp[-1].node)),(0),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 383:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),((yyvsp[-1].id)),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 384:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),(0),((yyvsp[0].id)),(&(yylsp[0])));
      }
 break;

  case 385:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 386:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[0])));
      }
 break;

  case 387:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),((yyvsp[-3].node)),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 388:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-7].node)),((yyvsp[-5].node)),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 389:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-3].node)),((yyvsp[-1].node)),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 390:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),((yyvsp[-3].node)),(0),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 391:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-3].node)),(0),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 392:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-1].node)),(0),(1),(0),(new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[-1])))),(&(yyloc)));




      }
 break;

  case 393:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),(0),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 394:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-1].node)),(0),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 395:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-3].node)),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 396:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-5].node)),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 397:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-1].node)),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 398:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-3].node)),(0),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 399:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 400:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 401:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 403:
 {
   (parser->command_start) = 1;
      }
 break;

  case 404:
 {
   (parser->cur_arg) = 0;

   (yyval.node) = 0;




      }
 break;

  case 405:
 {

   (yyval.node) = 0;




      }
 break;

  case 406:
 {
   (parser->cur_arg) = 0;

   (yyval.node) = (yyvsp[-2].node);



      }
 break;

  case 407:
 {
        (yyval.node) = 0;
      }
 break;

  case 408:
 {

   (yyval.node) = 0;



      }
 break;

  case 411:
 {
   new_bv_gen(parser, (((yyvsp[0].id))));




      }
 break;

  case 412:
 {
   (yyval.node) = 0;
      }
 break;

  case 413:
 {
   (yyval.vars) = dyna_push_gen(parser);
      }
 break;

  case 414:
 {
   (yyval.num) = (parser->lex.lpar_beg);
   (parser->lex.lpar_beg) = ++(parser->lex.paren_nest);
      }
 break;

  case 415:
 {
   (yyval.num) = (parser->ruby_sourceline);
      }
 break;

  case 416:
 {
   (yyval.val) = (parser->cmdarg_stack);
   (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3598) : (void)0));
      }
 break;

  case 417:
 {
   (parser->lex.lpar_beg) = (yyvsp[-4].num);
   (((parser->cmdarg_stack))=(((yyvsp[-1].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3603) : (void)0));
   ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack)) >> 1) | (((parser->cmdarg_stack)) & 1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(lexpop)", 3604) : (void)0));

   (yyval.node) = node_newnode(parser, ((NODE_LAMBDA)), ((VALUE)(0)), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)((yyvsp[0].node))), ((VALUE)((yyvsp[-3].node)))))), ((VALUE)(0)));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
   (yyval.node)->nd_loc = (yyloc);
   (yyval.node)->u2.node->nd_loc = (yyloc);



   dyna_pop_gen(parser, ((yyvsp[-5].vars)));
      }
 break;

  case 418:
 {

   (yyval.node) = (yyvsp[-2].node);



      }
 break;

  case 419:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 420:
 {
   token_info_pop_gen(parser, ("}"), (sizeof("}") - 1));
   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 421:
 {
   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 422:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 423:
 {
   (yyval.node) = (yyvsp[-1].node);

   (yyvsp[-1].node)->u2.node->nd_loc.first_loc = (yylsp[-3]).first_loc;
   (yyvsp[-1].node)->u2.node->nd_loc.last_loc = (yylsp[0]).last_loc;
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));

      }
 break;

  case 424:
 {

   if (((int) ((((yyvsp[-1].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_YIELD) {
       parser_compile_error(parser, "block given to yield");
   }
   else {
       block_dup_check_gen(parser,((yyvsp[-1].node)->u3.node),((yyvsp[0].node)));
   }
   (yyvsp[0].node)->u3.node = (yyvsp[-1].node);
   (yyvsp[0].node)->nd_loc = (yyloc);
   (yyval.node) = (yyvsp[0].node);
   fixpos((yyval.node), (yyvsp[-1].node));



      }
 break;

  case 425:
 {
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-2].id),(yyvsp[-3].node),(yyvsp[-1].id),(yyvsp[0].node),&(yyloc));
      }
 break;

  case 426:
 {

   block_dup_check_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)));
   (yyvsp[0].node)->u3.node = new_qcall_gen(parser,(yyvsp[-3].id),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[-1].node),&(yyloc));
   (yyvsp[0].node)->nd_loc = (yyloc);
   (yyval.node) = (yyvsp[0].node);
   fixpos((yyval.node), (yyvsp[-4].node));




      }
 break;

  case 427:
 {

   block_dup_check_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)));
   (yyvsp[0].node)->u3.node = new_qcall_gen(parser,(yyvsp[-3].id),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[-1].node),&(yyloc));
   (yyvsp[0].node)->nd_loc = (yyloc);
   (yyval.node) = (yyvsp[0].node);
   fixpos((yyval.node), (yyvsp[-4].node));




      }
 break;

  case 428:
 {

   (yyval.node) = (yyvsp[-1].node);
   (yyval.node)->u3.node = (yyvsp[0].node);
   ((((yyvsp[-1].node))->nd_loc.last_loc) = ((yylsp[0]).last_loc));



      }
 break;

  case 429:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 430:
 {
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-3].id),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[0].node),&(yyloc));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-1].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
      }
 break;

  case 431:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 432:
 {
   (yyval.node) = new_qcall_gen(parser,((VALUE)(idCOLON2)),(yyvsp[-4].node),(yyvsp[-2].id),(yyvsp[0].node),&(yyloc));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-1].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
      }
 break;

  case 433:
 {
   (yyval.node) = new_qcall_gen(parser,((VALUE)(idCOLON2)),(yyvsp[-2].node),(yyvsp[0].id),0,&(yyloc));
      }
 break;

  case 434:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 435:
 {
   (yyval.node) = new_qcall_gen(parser,(yyvsp[-2].id),(yyvsp[-3].node),((VALUE)(idCall)),(yyvsp[0].node),&(yyloc));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-1].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
      }
 break;

  case 436:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 437:
 {
   (yyval.node) = new_qcall_gen(parser,((VALUE)(idCOLON2)),(yyvsp[-3].node),((VALUE)(idCall)),(yyvsp[0].node),&(yyloc));
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-1].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
      }
 break;

  case 438:
 {

   (yyval.node) = node_newnode(parser, ((NODE_SUPER)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)((yyvsp[0].node))));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 439:
 {

   (yyval.node) = node_newnode(parser, ((NODE_ZSUPER)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 440:
 {

   if ((yyvsp[-3].node) && ((int) ((((yyvsp[-3].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SELF)
       (yyval.node) = new_fcall_gen(parser, tAREF, (yyvsp[-1].node), &(yyloc));
   else
       (yyval.node) = new_call_gen(parser, (yyvsp[-3].node),tAREF,(yyvsp[-1].node),&(yyloc));
   fixpos((yyval.node), (yyvsp[-3].node));



      }
 break;

  case 441:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 442:
 {
   (yyval.node) = (yyvsp[-1].node);

   (yyvsp[-1].node)->u2.node->nd_loc.first_loc = (yylsp[-3]).first_loc;
   (yyvsp[-1].node)->u2.node->nd_loc.last_loc = (yylsp[0]).last_loc;
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));

      }
 break;

  case 443:
 {

   (yyval.num) = (parser->ruby_sourceline);

      }
 break;

  case 444:
 {
   (yyval.node) = (yyvsp[-1].node);

   (yyvsp[-1].node)->u2.node->nd_loc.first_loc = (yylsp[-3]).first_loc;
   (yyvsp[-1].node)->u2.node->nd_loc.last_loc = (yylsp[0]).last_loc;
   ((yyval.node))->flags=((((yyval.node))->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((yyvsp[-2].num))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));

      }
 break;

  case 445:
 {(yyval.vars) = dyna_push_gen(parser);}
 break;

  case 446:
 {(yyval.val) = (parser->cmdarg_stack) >> 1; (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3831) : (void)0));}
 break;

  case 447:
 {
   (yyval.node) = new_body_gen(parser, (yyvsp[-1].node), (yyvsp[0].node), &(yyloc));
   dyna_pop_gen(parser, ((yyvsp[-3].vars)));
   (((parser->cmdarg_stack))=(((yyvsp[-2].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3836) : (void)0));
      }
 break;

  case 448:
 {(yyval.vars) = dyna_push_gen(parser);}
 break;

  case 449:
 {(yyval.val) = (parser->cmdarg_stack); (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3841) : (void)0));}
 break;

  case 450:
 {
   (yyval.node) = new_body_gen(parser, (yyvsp[-1].node), (yyvsp[0].node), &(yyloc));
   dyna_pop_gen(parser, ((yyvsp[-3].vars)));
   (((parser->cmdarg_stack))=(((yyvsp[-2].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 3846) : (void)0));
      }
 break;

  case 451:
 {

   (yyval.node) = node_newnode(parser, ((NODE_WHEN)), ((VALUE)((yyvsp[-3].node))), ((VALUE)((yyvsp[-1].node))), ((VALUE)((yyvsp[0].node))));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 454:
 {

   if ((yyvsp[-3].node)) {
       rb_code_range_t location;
       location.first_loc = (yylsp[-3]).first_loc;
       location.last_loc = (yylsp[-1]).last_loc;
       (yyvsp[-3].node) = node_assign_gen(parser, ((yyvsp[-3].node)), (new_errinfo_gen(parser, &(yylsp[-3]))), (&(yylsp[-3])));
       (yyvsp[-1].node) = block_append_gen(parser,((yyvsp[-3].node)),((yyvsp[-1].node)),(&location));
   }
   (yyval.node) = new_resbody_gen(parser, ((yyvsp[-4].node)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
   fixpos((yyval.node), (yyvsp[-4].node)?(yyvsp[-4].node):(yyvsp[-1].node));







      }
 break;

  case 456:
 {

   (yyval.node) = new_list_gen(parser, (yyvsp[0].node), &(yyloc));



      }
 break;

  case 457:
 {

   if (!((yyval.node) = splat_array((yyvsp[0].node)))) (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 459:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 461:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 464:
 {

   (yyval.node) = new_lit_gen(parser, ( ({ __builtin_constant_p((yyvsp[0].id)) && !(!((yyvsp[0].id)&RUBY_ID_STATIC_SYM)&&(yyvsp[0].id)>tLAST_OP_ID) ? (((VALUE)((yyvsp[0].id))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym((yyvsp[0].id)); })), &(yyloc));



      }
 break;

  case 466:
 {

   NODE *node = (yyvsp[0].node);
   if (!node) {
       node = new_str_gen(parser,  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); }), &(yyloc));
   }
   else {
       node = evstr2dstr_gen(parser,(node));
   }
   (yyval.node) = node;



      }
 break;

  case 467:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 469:
 {

   (yyval.node) = literal_concat_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));



      }
 break;

  case 470:
 {
   (yyval.node) = (parser_heredoc_dedent(parser, ((yyvsp[-1].node))));

   if ((yyval.node)) nd_set_loc((yyval.node), &(yyloc));


      }
 break;

  case 471:
 {
   (yyval.node) = new_xstring_gen(parser, parser_heredoc_dedent(parser, ((yyvsp[-1].node))), &(yyloc));
      }
 break;

  case 472:
 {
   (yyval.node) = new_regexp_gen(parser, (yyvsp[-1].node), (yyvsp[0].num), &(yyloc));
      }
 break;

  case 473:
 {

   (yyval.node) = (((yyvsp[-1].node)) ? (nd_set_loc((yyvsp[-1].node), &(yyloc)), (yyvsp[-1].node)) : new_zarray_gen(parser, &(yyloc)));



      }
 break;

  case 474:
 {

   (yyval.node) = 0;



      }
 break;

  case 475:
 {

   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),(evstr2dstr_gen(parser,((yyvsp[-1].node)))));



      }
 break;

  case 477:
 {

   (yyval.node) = literal_concat_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));



      }
 break;

  case 478:
 {

   (yyval.node) = (((yyvsp[-1].node)) ? (nd_set_loc((yyvsp[-1].node), &(yyloc)), (yyvsp[-1].node)) : new_zarray_gen(parser, &(yyloc)));



      }
 break;

  case 479:
 {

   (yyval.node) = 0;



      }
 break;

  case 480:
 {

   (yyvsp[-1].node) = evstr2dstr_gen(parser,((yyvsp[-1].node)));
   if (((int) ((((yyvsp[-1].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_DSTR) {
       ((yyvsp[-1].node))->flags=((((yyvsp[-1].node))->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DSYM))<<8)&(((VALUE)0x7f)<<8)));
   }
   else {
       ((yyvsp[-1].node))->flags=((((yyvsp[-1].node))->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
       add_mark_object_gen(parser, ((yyvsp[-1].node)->u1.value = rb_str_intern((yyvsp[-1].node)->u1.value)));
   }
   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[-1].node)));



      }
 break;

  case 481:
 {

   (yyval.node) = (((yyvsp[-1].node)) ? (nd_set_loc((yyvsp[-1].node), &(yyloc)), (yyvsp[-1].node)) : new_zarray_gen(parser, &(yyloc)));



      }
 break;

  case 482:
 {

   (yyval.node) = (((yyvsp[-1].node)) ? (nd_set_loc((yyvsp[-1].node), &(yyloc)), (yyvsp[-1].node)) : new_zarray_gen(parser, &(yyloc)));



      }
 break;

  case 483:
 {

   (yyval.node) = 0;



      }
 break;

  case 484:
 {

   (yyvsp[-1].node)->nd_loc = (yylsp[-1]);
   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[-1].node)));



      }
 break;

  case 485:
 {

   (yyval.node) = 0;



      }
 break;

  case 486:
 {

   VALUE lit;
   lit = (yyvsp[-1].node)->u1.value;
   ((yyvsp[-1].node))->flags=((((yyvsp[-1].node))->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
   add_mark_object_gen(parser, ((yyvsp[-1].node)->u1.value = ( ({ __builtin_constant_p(rb_intern_str(lit)) && !(!(rb_intern_str(lit)&RUBY_ID_STATIC_SYM)&&rb_intern_str(lit)>tLAST_OP_ID) ? (((VALUE)(rb_intern_str(lit))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym(rb_intern_str(lit)); }))));
   (yyvsp[-1].node)->nd_loc = (yylsp[-1]);
   (yyval.node) = list_append_gen(parser,((yyvsp[-2].node)),((yyvsp[-1].node)));



      }
 break;

  case 487:
 {

   (yyval.node) = 0;



      }
 break;

  case 488:
 {

   (yyval.node) = literal_concat_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));



      }
 break;

  case 489:
 {

   (yyval.node) = 0;



      }
 break;

  case 490:
 {

   (yyval.node) = literal_concat_gen(parser,((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));



      }
 break;

  case 491:
 {

   (yyval.node) = 0;



      }
 break;

  case 492:
 {

   NODE *head = (yyvsp[-1].node), *tail = (yyvsp[0].node);
   if (!head) {
       (yyval.node) = tail;
   }
   else if (!tail) {
       (yyval.node) = head;
   }
   else {
       switch (((int) (((head)->flags & (((VALUE)0x7f)<<8))>>8))) {
         case NODE_STR:
    (head)->flags=(((head)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DSTR))<<8)&(((VALUE)0x7f)<<8)));
    break;
         case NODE_DSTR:
    break;
         default:
    head = list_append_gen(parser,(new_dstr_gen(parser, ((VALUE)RUBY_Qnil), &(yyloc))),(head));
    break;
       }
       (yyval.node) = list_append_gen(parser,(head),(tail));
   }
      }
 break;

  case 493:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 494:
 {

   (yyval.strterm) = (parser->lex.strterm);
   (parser->lex.strterm) = 0;
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4239) : (enum lex_state_e)(EXPR_BEG)));
      }
 break;

  case 495:
 {
   (parser->lex.strterm) = (yyvsp[-1].strterm);

   (yyval.node) = node_newnode(parser, ((NODE_EVSTR)), ((VALUE)(0)), ((VALUE)(((yyvsp[0].node)))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 496:
 {
   (yyvsp[0].val) = (parser->cond_stack);
   (yyval.val) = (parser->cmdarg_stack);
   (((parser->cond_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(set)", 4255) : (void)0));
   (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 4256) : (void)0));
      }
 break;

  case 497:
 {

   (yyval.strterm) = (parser->lex.strterm);
   (parser->lex.strterm) = 0;
      }
 break;

  case 498:
 {
   (yyval.num) = (parser->lex.state);
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4265) : (enum lex_state_e)(EXPR_BEG)));
      }
 break;

  case 499:
 {
   (yyval.num) = (parser->lex.brace_nest);
   (parser->lex.brace_nest) = 0;
      }
 break;

  case 500:
 {
   (yyval.num) = (parser->heredoc_indent);
   (parser->heredoc_indent) = 0;
      }
 break;

  case 501:
 {
   (((parser->cond_stack))=(((yyvsp[-7].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(set)", 4277) : (void)0));
   (((parser->cmdarg_stack))=(((yyvsp[-6].val))), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 4278) : (void)0));
   (parser->lex.strterm) = (yyvsp[-5].strterm);
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((yyvsp[-4].num)), 4280) : (enum lex_state_e)((yyvsp[-4].num))));
   (parser->lex.brace_nest) = (yyvsp[-3].num);
   (parser->heredoc_indent) = (yyvsp[-2].num);
   (parser->heredoc_line_indent) = -1;

   if ((yyvsp[-1].node)) (yyvsp[-1].node)->flags &= ~(((VALUE)1)<<7);
   (yyval.node) = new_evstr_gen(parser,((yyvsp[-1].node)),(&(yyloc)));



      }
 break;

  case 502:
 {

   (yyval.node) = new_gvar_gen(parser, (yyvsp[0].id), &(yyloc));



      }
 break;

  case 503:
 {

   (yyval.node) = new_ivar_gen(parser,(yyvsp[0].id),&(yyloc));



      }
 break;

  case 504:
 {

   (yyval.node) = node_newnode(parser, ((NODE_CVAR)), ((VALUE)((yyvsp[0].id))), ((VALUE)(0)), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 506:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 4323) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));

   (yyval.id) = (yyvsp[0].id);



      }
 break;

  case 511:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 4340) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));

   (yyval.node) = dsym_node_gen(parser, ((yyvsp[-1].node)), (&(yyloc)));



      }
 break;

  case 513:
 {

   (yyval.node) = (yyvsp[0].node);
   add_mark_object_gen(parser, ((yyval.node)->u1.value = negate_lit_gen(parser, (yyval.node)->u1.value)));



      }
 break;

  case 514:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 515:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 516:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 517:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 523:
 {(yyval.id) = keyword_nil;}
 break;

  case 524:
 {(yyval.id) = keyword_self;}
 break;

  case 525:
 {(yyval.id) = keyword_true;}
 break;

  case 526:
 {(yyval.id) = keyword_false;}
 break;

  case 527:
 {(yyval.id) = keyword__FILE__;}
 break;

  case 528:
 {(yyval.id) = keyword__LINE__;}
 break;

  case 529:
 {(yyval.id) = keyword__ENCODING__;}
 break;

  case 530:
 {

   if (!((yyval.node) = gettable_gen(parser,((yyvsp[0].id)),(&(yyloc))))) (yyval.node) = new_begin_gen(parser,0,&(yyloc));
      }
 break;

  case 531:
 {

   if (!((yyval.node) = gettable_gen(parser,((yyvsp[0].id)),(&(yyloc))))) (yyval.node) = new_begin_gen(parser,0,&(yyloc));



      }
 break;

  case 532:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 533:
 {
   (yyval.node) = assignable_gen(parser, (((yyvsp[0].id))), (0), (&(yyloc)));
      }
 break;

  case 534:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 535:
 {

   (yyval.node)->nd_loc = (yyloc);


      }
 break;

  case 536:
 {
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4458) : (enum lex_state_e)(EXPR_BEG)));
   (parser->command_start) = 1;
      }
 break;

  case 537:
 {
   (yyval.node) = (yyvsp[-1].node);
      }
 break;

  case 538:
 {

   (yyval.node) = 0;



      }
 break;

  case 539:
 {

   (yyval.node) = (yyvsp[-1].node);



   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4482) : (enum lex_state_e)(EXPR_BEG)));
   (parser->command_start) = 1;
      }
 break;

  case 540:
 {
   (yyval.num) = parser->in_kwarg;
   parser->in_kwarg = 1;
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((parser->lex.state)|EXPR_LABEL), 4488) : (enum lex_state_e)((parser->lex.state)|EXPR_LABEL)));
      }
 break;

  case 541:
 {
   parser->in_kwarg = !!(yyvsp[-2].num);
   (yyval.node) = (yyvsp[-1].node);
   ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4494) : (enum lex_state_e)(EXPR_BEG)));
   (parser->command_start) = 1;
      }
 break;

  case 542:
 {
   (yyval.node) = new_args_tail_gen(parser, ((yyvsp[-3].node)),((yyvsp[-1].id)),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 543:
 {
   (yyval.node) = new_args_tail_gen(parser, ((yyvsp[-1].node)),(0),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 544:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),((yyvsp[-1].id)),((yyvsp[0].id)),(&(yylsp[-1])));
      }
 break;

  case 545:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),(0),((yyvsp[0].id)),(&(yylsp[0])));
      }
 break;

  case 546:
 {
   (yyval.node) = (yyvsp[0].node);
      }
 break;

  case 547:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[0])));
      }
 break;

  case 548:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),((yyvsp[-3].node)),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 549:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-7].node)),((yyvsp[-5].node)),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 550:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-3].node)),((yyvsp[-1].node)),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 551:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),((yyvsp[-3].node)),(0),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 552:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-3].node)),(0),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 553:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-5].node)),(0),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 554:
 {
   (yyval.node) = new_args_gen(parser, ((yyvsp[-1].node)),(0),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 555:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-3].node)),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 556:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-5].node)),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 557:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-1].node)),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 558:
 {
   (yyval.node) = new_args_gen(parser, (0),((yyvsp[-3].node)),(0),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 559:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),((yyvsp[-1].id)),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 560:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),((yyvsp[-3].id)),((yyvsp[-1].node)),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 561:
 {
   (yyval.node) = new_args_gen(parser, (0),(0),(0),(0),((yyvsp[0].node)),(&(yyloc)));
      }
 break;

  case 562:
 {
   (yyval.node) = new_args_tail_gen(parser, (0),(0),(0),(&(yylsp[0])));
   (yyval.node) = new_args_gen(parser, (0),(0),(0),(0),((yyval.node)),(&(yylsp[0])));
      }
 break;

  case 563:
 {

   parser_yyerror(parser, ("formal argument cannot be a constant"));
   (yyval.id) = 0;




      }
 break;

  case 564:
 {

   parser_yyerror(parser, ("formal argument cannot be an instance variable"));
   (yyval.id) = 0;




      }
 break;

  case 565:
 {

   parser_yyerror(parser, ("formal argument cannot be a global variable"));
   (yyval.id) = 0;




      }
 break;

  case 566:
 {

   parser_yyerror(parser, ("formal argument cannot be a class variable"));
   (yyval.id) = 0;




      }
 break;

  case 568:
 {
   formal_argument_gen(parser, (((yyvsp[0].id))));
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 569:
 {
   ID id = ((yyvsp[0].id));
   arg_var_gen(parser, (id));
   (parser->cur_arg) = id;
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 570:
 {
   (parser->cur_arg) = 0;

   (yyval.node) = node_newnode(parser, ((NODE_ARGS_AUX)), ((VALUE)((yyvsp[0].id))), ((VALUE)(1)), ((VALUE)(0)));



      }
 break;

  case 571:
 {
   ID tid = internal_id_gen(parser);

   rb_code_range_t location;
   location.first_loc = (yylsp[-1]).first_loc;
   location.last_loc = (yylsp[-1]).first_loc;


   arg_var_gen(parser, (tid));

   if (dyna_in_block_gen(parser)) {
       (yyvsp[-1].node)->u2.node = new_dvar_gen(parser, tid, &location);
   }
   else {
       (yyvsp[-1].node)->u2.node = new_lvar_gen(parser, tid, &location);
   }
   (yyval.node) = node_newnode(parser, ((NODE_ARGS_AUX)), ((VALUE)(tid)), ((VALUE)(1)), ((VALUE)(0)));
   (yyval.node)->u3.node = (yyvsp[-1].node);



      }
 break;

  case 573:
 {

   (yyval.node) = (yyvsp[-2].node);
   (yyval.node)->u2.argc++;
   (yyval.node)->u3.node = block_append_gen(parser,((yyval.node)->u3.node),((yyvsp[0].node)->u3.node),(&(yyloc)));
   rb_discard_node_gen(parser, ((yyvsp[0].node)));



      }
 break;

  case 574:
 {
   ID id = ((yyvsp[0].id));
   arg_var_gen(parser, (formal_argument_gen(parser, (id))));
   (parser->cur_arg) = id;
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 575:
 {
   (parser->cur_arg) = 0;
   (yyval.node) = assignable_gen(parser, ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));

   (yyval.node) = new_kw_arg_gen(parser, (yyval.node), &(yyloc));



      }
 break;

  case 576:
 {
   (parser->cur_arg) = 0;
   (yyval.node) = assignable_gen(parser, ((yyvsp[0].id)), (((NODE *)-1)), (&(yyloc)));

   (yyval.node) = new_kw_arg_gen(parser, (yyval.node), &(yyloc));



      }
 break;

  case 577:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[-1].id)), ((yyvsp[0].node)), (&(yyloc)));

   (yyval.node) = new_kw_arg_gen(parser, (yyval.node), &(yyloc));



      }
 break;

  case 578:
 {
   (yyval.node) = assignable_gen(parser, ((yyvsp[0].id)), (((NODE *)-1)), (&(yyloc)));

   (yyval.node) = new_kw_arg_gen(parser, (yyval.node), &(yyloc));



      }
 break;

  case 579:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 580:
 {

   (yyval.node) = kwd_append((yyvsp[-2].node), (yyvsp[0].node));



      }
 break;

  case 581:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 582:
 {

   (yyval.node) = kwd_append((yyvsp[-2].node), (yyvsp[0].node));



      }
 break;

  case 585:
 {
   shadowing_lvar_gen(parser, (((yyvsp[0].id))));

   (yyval.id) = (yyvsp[0].id);



      }
 break;

  case 586:
 {

   (yyval.id) = internal_id_gen(parser);
   arg_var_gen(parser, ((yyval.id)));



      }
 break;

  case 587:
 {
   (parser->cur_arg) = 0;
   (yyval.node) = assignable_gen(parser, ((yyvsp[-2].id)), ((yyvsp[0].node)), (&(yyloc)));

   (yyval.node) = node_newnode(parser, ((NODE_OPT_ARG)), ((VALUE)(0)), ((VALUE)((yyval.node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 588:
 {
   (parser->cur_arg) = 0;
   (yyval.node) = assignable_gen(parser, ((yyvsp[-2].id)), ((yyvsp[0].node)), (&(yyloc)));

   (yyval.node) = node_newnode(parser, ((NODE_OPT_ARG)), ((VALUE)(0)), ((VALUE)((yyval.node))), ((VALUE)(0)));
   (yyval.node)->nd_loc = (yyloc);



      }
 break;

  case 589:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 590:
 {

   (yyval.node) = opt_arg_append((yyvsp[-2].node), (yyvsp[0].node));



      }
 break;

  case 591:
 {

   (yyval.node) = (yyvsp[0].node);



      }
 break;

  case 592:
 {

   (yyval.node) = opt_arg_append((yyvsp[-2].node), (yyvsp[0].node));



      }
 break;

  case 595:
 {

   if (!(id_type((yyvsp[0].id))==RUBY_ID_LOCAL))
       parser_yyerror(parser, ("rest argument must be local variable"));

   arg_var_gen(parser, (shadowing_lvar_gen(parser, (((yyvsp[0].id))))));

   (yyval.id) = (yyvsp[0].id);



      }
 break;

  case 596:
 {

   (yyval.id) = internal_id_gen(parser);
   arg_var_gen(parser, ((yyval.id)));



      }
 break;

  case 599:
 {

   if (!(id_type((yyvsp[0].id))==RUBY_ID_LOCAL))
       parser_yyerror(parser, ("block argument must be local variable"));
   else if (!dyna_in_block_gen(parser) && local_id_gen(parser, ((yyvsp[0].id)), ((void*)0)))
       parser_yyerror(parser, ("duplicated block argument name"));

   arg_var_gen(parser, (shadowing_lvar_gen(parser, (((yyvsp[0].id))))));

   (yyval.id) = (yyvsp[0].id);



      }
 break;

  case 600:
 {
   (yyval.id) = (yyvsp[0].id);
      }
 break;

  case 601:
 {

   (yyval.id) = 0;



      }
 break;

  case 602:
 {

   value_expr_gen(parser, ((yyvsp[0].node)) = remove_begin((yyvsp[0].node)));
   (yyval.node) = (yyvsp[0].node);
   if (!(yyval.node)) (yyval.node) = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));



      }
 break;

  case 603:
 {((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 4951) : (enum lex_state_e)(EXPR_BEG)));}
 break;

  case 604:
 {

   if ((yyvsp[-1].node) == 0) {
       parser_yyerror(parser, ("can't define singleton method for ()."));
   }
   else {
       switch (((int) ((((yyvsp[-1].node))->flags & (((VALUE)0x7f)<<8))>>8))) {
         case NODE_STR:
         case NODE_DSTR:
         case NODE_XSTR:
         case NODE_DXSTR:
         case NODE_DREGX:
         case NODE_LIT:
         case NODE_ARRAY:
         case NODE_ZARRAY:
    parser_yyerror(parser, ("can't define singleton method for literals"));
    break;
         default:
    value_expr_gen(parser, ((yyvsp[-1].node)) = remove_begin((yyvsp[-1].node)));
    break;
       }
   }
   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 606:
 {

   (yyval.node) = (yyvsp[-1].node);



      }
 break;

  case 608:
 {

   NODE *assocs = (yyvsp[-2].node);
   NODE *tail = (yyvsp[0].node);
   if (!assocs) {
       assocs = tail;
   }
   else if (tail) {
       if (assocs->u1.node &&
    !tail->u1.node && ((int) (((tail->u3.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY &&
    ((int) (((tail->u3.node->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_HASH) {

    tail = tail->u3.node->u1.node->u1.node;
       }
       assocs = list_concat(assocs, tail);
   }
   (yyval.node) = assocs;



      }
 break;

  case 609:
 {

   if (((int) ((((yyvsp[-2].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
       ((yyvsp[-2].node))->flags=((((yyvsp[-2].node))->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
       add_mark_object_gen(parser, ((yyvsp[-2].node)->u1.value = rb_fstring((yyvsp[-2].node)->u1.value)));
   }
   (yyval.node) = list_append_gen(parser,(new_list_gen(parser, (yyvsp[-2].node), &(yyloc))),((yyvsp[0].node)));



      }
 break;

  case 610:
 {

   (yyval.node) = list_append_gen(parser,(new_list_gen(parser, new_lit_gen(parser, ( ({ __builtin_constant_p((yyvsp[-1].id)) && !(!((yyvsp[-1].id)&RUBY_ID_STATIC_SYM)&&(yyvsp[-1].id)>tLAST_OP_ID) ? (((VALUE)((yyvsp[-1].id))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym((yyvsp[-1].id)); })), &(yylsp[-1])), &(yyloc))),((yyvsp[0].node)));



      }
 break;

  case 611:
 {

   rb_code_range_t location;
   location.first_loc = (yylsp[-3]).first_loc;
   location.last_loc = (yylsp[-1]).last_loc;
   (yyval.node) = list_append_gen(parser,(new_list_gen(parser, dsym_node_gen(parser, ((yyvsp[-2].node)), (&location)), &location)),((yyvsp[0].node)));



      }
 break;

  case 612:
 {

   if (((int) ((((yyvsp[0].node))->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_HASH &&
       !((yyvsp[0].node)->u1.node && (yyvsp[0].node)->u1.node->u2.argc))
       (yyval.node) = 0;
   else
       (yyval.node) = list_append_gen(parser,(new_list_gen(parser, 0, &(yyloc))),((yyvsp[0].node)));



      }
 break;

  case 625:
 {
   (yyval.id) = ((VALUE)('.'));
      }
 break;

  case 626:
 {
   (yyval.id) = ((VALUE)(idANDDOT));
      }
 break;

  case 628:
 {
   (yyval.id) = ((VALUE)(idCOLON2));
      }
 break;

  case 638:
 {(yyerrstatus = 0);((parser)->lex.ptok = (parser)->lex.pcur);}
 break;

  case 639:
 {((parser)->lex.ptok = (parser)->lex.pcur);}
 break;

  case 641:
 {(yyerrstatus = 0);}
 break;

  case 642:
 {
   (yyval.node) = 0;
      }
 break;
 default: break;
    }
  do { if ((parser->yydebug)) { rb_parser_printf (parser, "%s ", "-> $$ ="); yy_symbol_print (stderr, yyr1[yyn], &yyval, &yyloc, parser); rb_parser_printf (parser, "\n"); } } while (0);

  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  yylen = 0;
  do { if ((parser->yydebug)) yy_stack_print ((yyss), (yyssp), parser); } while (0);

  *++yyvsp = yyval;
  *++yylsp = yyloc;





  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - 146] + *yyssp;
  if (0 <= yystate && yystate <= 12080 && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - 146];

  goto yynewstate;





yyerrlab:


  yytoken = yychar == (-2) ? (-2) : ((unsigned int) (yychar) <= 352 ? yytranslate[yychar] : 2);


  if (!yyerrstatus)
    {
      ++yynerrs;





      {
        char const *yymsgp = "syntax error";
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, yyssp, yytoken);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              rb_parser_free(parser, (yymsg));
            yymsg = (char *) rb_parser_malloc(parser, (yymsg_alloc));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, yyssp, yytoken);
                yymsgp = yymsg;
              }
          }
        parser_yyerror(parser, (yymsgp));
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }


    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {



      if (yychar <= 0)
        {

          if (yychar == 0)
            goto yyabortlab;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, parser);
          yychar = (-2);
        }
    }



  goto yyerrlab1;





yyerrorlab:




  if ( 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];


  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  yylen = 0;
  do { if ((parser->yydebug)) yy_stack_print ((yyss), (yyssp), parser); } while (0);
  yystate = *yyssp;
  goto yyerrlab1;





yyerrlab1:
  yyerrstatus = 3;

  for (;;)
    {
      yyn = yypact[yystate];
      if (!(!!((yyn) == (-926))))
        {
          yyn += 1;
          if (0 <= yyn && yyn <= 12080 && yycheck[yyn] == 1)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }


      if (yyssp == yyss)
        goto yyabortlab;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, parser);
      (yyvsp -= (1), yyssp -= (1), yylsp -= (1));
      yystate = *yyssp;
      do { if ((parser->yydebug)) yy_stack_print ((yyss), (yyssp), parser); } while (0);
    }


  *++yyvsp = yylval;


  yyerror_range[2] = yylloc;


  do if (2) { (yyloc).first_loc = ((yyerror_range)[1]).first_loc; (yyloc).last_loc = ((yyerror_range)[2]).last_loc; } else rb_parser_set_location_of_none(parser, &(yyloc)); while (0);
  *++yylsp = yyloc;


  do { if ((parser->yydebug)) { rb_parser_printf (parser, "%s ", "Shifting"); yy_symbol_print (stderr, yystos[yyn], yyvsp, yylsp, parser); rb_parser_printf (parser, "\n"); } } while (0);

  yystate = yyn;
  goto yynewstate;





yyacceptlab:
  yyresult = 0;
  goto yyreturn;




yyabortlab:
  yyresult = 1;
  goto yyreturn;





yyexhaustedlab:
  parser_yyerror(parser, ("memory exhausted"));
  yyresult = 2;



yyreturn:
  if (yychar != (-2))
    {


      yytoken = ((unsigned int) (yychar) <= 352 ? yytranslate[yychar] : 2);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, parser);
    }


  (yyvsp -= (yylen), yyssp -= (yylen), yylsp -= (yylen));
  do { if ((parser->yydebug)) yy_stack_print ((yyss), (yyssp), parser); } while (0);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, parser);
      (yyvsp -= (1), yyssp -= (1), yylsp -= (1));
    }

  if (yyss != yyssa)
    rb_parser_free(parser, (yyss));


  if (yymsg != yymsgbuf)
    rb_parser_free(parser, (yymsg));

  return yyresult;
}






static int parser_regx_options(struct parser_params*);
static int parser_tokadd_string(struct parser_params*,int,int,int,long*,rb_encoding**);
static void parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc);
static enum yytokentype parser_parse_string(struct parser_params*,rb_strterm_literal_t*);
static enum yytokentype parser_here_document(struct parser_params*,rb_strterm_heredoc_t*);



extern OnigEncoding OnigEncDefaultCharEncoding;










unsigned long ruby_scan_oct(const char *, size_t, size_t *);

unsigned long ruby_scan_hex(const char *, size_t, size_t *);
void ruby_setenv(const char *, const char *);
void ruby_unsetenv(const char *);

char *ruby_strdup(const char *);



char *ruby_getcwd(void);

double ruby_strtod(const char *, char **);



void ruby_each_words(const char *, void (*)(const char*, int, void*), void *);









static int
token_info_get_column(struct parser_params *parser, const char *pend)
{
    int column = 1;
    const char *p;
    for (p = (parser->lex.pbeg); p < pend; p++) {
 if (*p == '\t') {
     column = (((column - 1) / 8) + 1) * 8;
 }
 column++;
    }
    return column;
}

static int
token_info_has_nonspaces(struct parser_params *parser, const char *pend)
{
    const char *p;
    for (p = (parser->lex.pbeg); p < pend; p++) {
 if (*p != ' ' && *p != '\t') {
     return 1;
 }
    }
    return 0;
}

static void
token_info_push_gen(struct parser_params *parser, const char *token, size_t len)
{
    token_info *ptinfo;
    const char *t = (parser->lex.pcur) - len;

    if (!parser->token_info_enabled) return;
    ptinfo = ((token_info*)ruby_xmalloc(sizeof(token_info)));
    ptinfo->token = token;
    ptinfo->linenum = (parser->ruby_sourceline);
    ptinfo->column = token_info_get_column(parser, t);
    ptinfo->nonspc = token_info_has_nonspaces(parser, t);
    ptinfo->next = parser->token_info;

    parser->token_info = ptinfo;
}

static void
token_info_pop_gen(struct parser_params *parser, const char *token, size_t len)
{
    int linenum;
    token_info *ptinfo = parser->token_info;
    const char *t = (parser->lex.pcur) - len;

    if (!ptinfo) return;
    parser->token_info = ptinfo->next;
    linenum = (parser->ruby_sourceline);
    if (parser->token_info_enabled &&
 linenum != ptinfo->linenum && !ptinfo->nonspc &&
 !token_info_has_nonspaces(parser, t) &&
 token_info_get_column(parser, t) != ptinfo->column) {
 rb_compile_warn((parser->ruby_sourcefile), (linenum), ("mismatched indentations at '%s' with '%s' at %d"), (token), (ptinfo->token), (ptinfo->linenum));


    }

    ruby_xfree(ptinfo);
}

static int
parser_precise_mbclen(struct parser_params *parser, const char *p)
{
    int len = rb_enc_precise_mbclen(p, (parser->lex.pend), (parser->enc));
    if (!(0 < (len))) {
 parser_compile_error(parser, "invalid multibyte char (%s)", ((parser->enc)->name));
 return -1;
    }
    return len;
}

static int
parser_yyerror(struct parser_params *parser, const char *msg)
{

    const int max_line_margin = 30;
    const char *p, *pe;
    const char *pre = "", *post = "", *pend;
    const char *code = "", *caret = "", *newline = "";
    const char *lim;
    char *buf;
    long len;
    int i;

    pend = (parser->lex.pend);
    if (pend > (parser->lex.pbeg) && pend[-1] == '\n') {
 if (--pend > (parser->lex.pbeg) && pend[-1] == '\r') --pend;
    }

    p = pe = (parser->lex.pcur) < pend ? (parser->lex.pcur) : pend;
    lim = p - (parser->lex.pbeg) > max_line_margin ? p - max_line_margin : (parser->lex.pbeg);
    while ((lim < p) && (*(p-1) != '\n')) p--;

    lim = pend - pe > max_line_margin ? pe + max_line_margin : pend;
    while ((pe < lim) && (*pe != '\n')) pe++;

    len = pe - p;
    if (len > 4) {
 char *p2;

 if (p > (parser->lex.pbeg)) {
     p = ((char *)onigenc_get_prev_char_head((rb_enc_get((parser->lex.lastline))),(OnigUChar*)((parser->lex.pbeg)),(OnigUChar*)(p),(OnigUChar*)((parser->lex.pcur))));
     if (p > (parser->lex.pbeg)) pre = "...";
 }
 if (pe < pend) {
     pe = ((char *)onigenc_get_prev_char_head((rb_enc_get((parser->lex.lastline))),(OnigUChar*)((parser->lex.pcur)),(OnigUChar*)(pe),(OnigUChar*)(pend)));
     if (pe < pend) post = "...";
 }
 len = pe - p;
 lim = (parser->lex.pcur) < pend ? (parser->lex.pcur) : pend;
 i = (int)(lim - p);
 buf = ((char*)__builtin_alloca (sizeof(char)*(i+2)));
 code = p;
 caret = p2 = buf;
 pe = (parser->lex.ptok < lim ? parser->lex.ptok : lim);
 if (p <= pe) {
     while (p < pe) {
  *p2++ = *p++ == '\t' ? '\t' : ' ';
     }
     *p2++ = '^';
     p++;
 }
 if (lim > p) {
     memset(p2, '~', (lim - p));
     p2 += (lim - p);
 }
 *p2 = '\0';
 newline = "\n";
    }
    else {
 len = 0;
    }
    parser_compile_error(parser, "%s%s%s%.*s%s%s%s%s",
    msg, newline,
    pre, (int)len, code, post, newline,
    pre, caret);




    return 0;
}

static int
vtable_size(const struct vtable *tbl)
{
    if (((VALUE)(tbl) & ~(VALUE)3)) {
 return tbl->pos;
    }
    else {
 return 0;
    }
}

static struct vtable *
vtable_alloc_gen(struct parser_params *parser, int line, struct vtable *prev)
{
    struct vtable *tbl = ((struct vtable*)ruby_xmalloc(sizeof(struct vtable)));
    tbl->pos = 0;
    tbl->capa = 8;
    tbl->tbl = ((ID*)ruby_xmalloc2((size_t)(tbl->capa),sizeof(ID)));
    tbl->prev = prev;

    if ((parser->yydebug)) {
 rb_parser_printf(parser, "vtable_alloc:%d: %p\n", line, tbl);
    }

    return tbl;
}


static void
vtable_free_gen(struct parser_params *parser, int line, const char *name,
  struct vtable *tbl)
{

    if ((parser->yydebug)) {
 rb_parser_printf(parser, "vtable_free:%d: %s(%p)\n", line, name, tbl);
    }

    if (((VALUE)(tbl) & ~(VALUE)3)) {
 if (tbl->tbl) {
     ruby_xfree(tbl->tbl);
 }
 ruby_xfree(tbl);
    }
}


static void
vtable_add_gen(struct parser_params *parser, int line, const char *name,
        struct vtable *tbl, ID id)
{

    if ((parser->yydebug)) {
 rb_parser_printf(parser, "vtable_add:%d: %s(%p), %s\n",
    line, name, tbl, rb_id2name(id));
    }

    if (!((VALUE)(tbl) & ~(VALUE)3)) {
 rb_parser_fatal(parser, "vtable_add: vtable is not allocated (%p)", (void *)tbl);
 return;
    }
    if (tbl->pos == tbl->capa) {
 tbl->capa = tbl->capa * 2;
 ((tbl->tbl)=(ID*)ruby_xrealloc2((char*)(tbl->tbl),(size_t)(tbl->capa),sizeof(ID)));
    }
    tbl->tbl[tbl->pos++] = id;
}



static void
vtable_pop_gen(struct parser_params *parser, int line, const char *name,
        struct vtable *tbl, int n)
{
    if ((parser->yydebug)) {
 rb_parser_printf(parser, "vtable_pop:%d: %s(%p), %d\n",
    line, name, tbl, n);
    }
    if (tbl->pos < n) {
 rb_parser_fatal(parser, "vtable_pop: unreachable (%d < %d)", tbl->pos, n);
 return;
    }
    tbl->pos -= n;
}



static int
vtable_included(const struct vtable * tbl, ID id)
{
    int i;

    if (((VALUE)(tbl) & ~(VALUE)3)) {
 for (i = 0; i < tbl->pos; i++) {
     if (tbl->tbl[i] == id) {
  return i+1;
     }
 }
    }
    return 0;
}

static void parser_prepare(struct parser_params *parser);


static NODE *parser_append_options(struct parser_params *parser, NODE *node);

static VALUE
debug_lines(VALUE fname)
{
    ID script_lines;
    do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("SCRIPT_LINES__")), (long)strlen(("SCRIPT_LINES__"))); (script_lines) = rb_intern_id_cache; } while (0);
    if (rb_const_defined_at(rb_cObject, script_lines)) {
 VALUE hash = rb_const_get_at(rb_cObject, script_lines);
 if (( ((RUBY_T_HASH) == RUBY_T_FIXNUM) ? (((int)(long)(hash))&RUBY_FIXNUM_FLAG) : ((RUBY_T_HASH) == RUBY_T_TRUE) ? ((hash) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_HASH) == RUBY_T_FALSE) ? ((hash) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_HASH) == RUBY_T_NIL) ? ((hash) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_HASH) == RUBY_T_UNDEF) ? ((hash) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_HASH) == RUBY_T_SYMBOL) ? ((((VALUE)(hash)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_HASH) == RUBY_T_FLOAT) ? ( ((((int)(long)(hash))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(hash) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(hash) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(hash))->flags & RUBY_T_MASK) == (RUBY_T_HASH)))) {
     VALUE lines = rb_ary_new();
     rb_hash_aset(hash, fname, lines);
     return lines;
 }
    }
    return 0;
}

static VALUE
coverage(VALUE fname, int n)
{
    VALUE coverages = rb_get_coverages();
    if (!(((VALUE)(coverages) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) && ((struct RBasic*)(coverages))->klass == 0) {
 VALUE coverage = rb_default_coverage(n);
 VALUE lines = (rb_array_const_ptr(coverage)[0]);

 rb_hash_aset(coverages, fname, coverage);

 return lines == ((VALUE)RUBY_Qnil) ? ((VALUE)RUBY_Qfalse) : lines;
    }
    return 0;
}

static int
e_option_supplied(struct parser_params *parser)
{
    return strcmp((parser->ruby_sourcefile), "-e") == 0;
}

static VALUE
yycompile0(VALUE arg)
{
    int n;
    NODE *tree;
    struct parser_params *parser = (struct parser_params *)arg;
    VALUE cov = ((VALUE)RUBY_Qfalse);

    if (!(parser->base_block != 0 && !(parser->in_main)) && rb_safe_level() == 0) {
 (parser->debug_lines) = debug_lines((parser->ruby_sourcefile_string));
 if ((parser->debug_lines) && (parser->ruby_sourceline) > 0) {
     VALUE str =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); });
     n = (parser->ruby_sourceline);
     do {
  rb_ary_push((parser->debug_lines), str);
     } while (--n);
 }

 if (!e_option_supplied(parser)) {
     (parser->coverage) = coverage((parser->ruby_sourcefile_string), (parser->ruby_sourceline));
     cov = ((VALUE)RUBY_Qtrue);
 }
    }

    parser_prepare(parser);





    if (0) { do {} while (0); };

    n = ruby_yyparse((void*)parser);

    if (0) { do {} while (0); };

    (parser->debug_lines) = 0;
    (parser->coverage) = 0;

    (parser->lex.strterm) = 0;
    (parser->lex.pcur) = (parser->lex.pbeg) = (parser->lex.pend) = 0;
    (parser->lex.prevline) = (parser->lex.lastline) = (parser->lex.nextline) = 0;
    if (parser->error_p) {
 VALUE mesg = parser->error_buffer;
 if (!mesg) {
     mesg = rb_class_new_instance(0, 0, rb_eSyntaxError);
 }
 rb_set_errinfo(mesg);
 return 0;
    }
    tree = (parser->eval_tree);
    if (!tree) {
 tree = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
    }
    else {
 VALUE opt = parser->compile_option;
 NODE *prelude;
 NODE *body = parser_append_options(parser, tree->u2.node);
 if (!opt) opt = rb_obj_hide(rb_ident_hash_new());
 rb_hash_aset(opt,  ( { (__builtin_constant_p("coverage_enabled")) ? rb_sym_intern_ascii(("coverage_enabled"), (long)strlen("coverage_enabled")) : rb_sym_intern_ascii_cstr("coverage_enabled"); }), cov);
 prelude = node_newnode(parser, ((NODE_PRELUDE)), ((VALUE)((parser->eval_tree_begin))), ((VALUE)(body)), ((VALUE)(opt)));
 add_mark_object_gen(parser, (opt));
 prelude->nd_loc = body->nd_loc;
 tree->u2.node = prelude;
    }
    return (VALUE)tree;
}

static NODE*
yycompile(struct parser_params *parser, VALUE fname, int line)
{
    (parser->ruby_sourcefile_string) = rb_str_new_frozen(fname);
    (parser->ruby_sourcefile) = (!(((struct RBasic*)(fname))->flags & RSTRING_NOEMBED) ? ((struct RString*)(fname))->as.ary : ((struct RString*)(fname))->as.heap.ptr);
    (parser->ruby_sourceline) = line - 1;
    return (NODE *)rb_suppress_tracing(yycompile0, (VALUE)parser);
}


static rb_encoding *
must_be_ascii_compatible(VALUE s)
{
    rb_encoding *enc = rb_enc_get(s);
    if (!rb_enc_asciicompat_inline(enc)) {
 rb_raise(rb_eArgError, "invalid source encoding");
    }
    return enc;
}

static VALUE
lex_get_str(struct parser_params *parser, VALUE s)
{
    char *beg, *end, *start;
    long len;

    beg = (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr);
    len = (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len);
    start = beg;
    if ((parser->lex.gets_ptr)) {
 if (len == (parser->lex.gets_ptr)) return ((VALUE)RUBY_Qnil);
 beg += (parser->lex.gets_ptr);
 len -= (parser->lex.gets_ptr);
    }
    end = memchr(beg, '\n', len);
    if (end) len = ++end - beg;
    (parser->lex.gets_ptr) += len;
    return rb_str_subseq(s, beg - start, len);
}

static VALUE
lex_getline(struct parser_params *parser)
{
    VALUE line = (*(parser->lex.gets))(parser, (parser->lex.input));
    if (!((VALUE)(line) != ((VALUE)RUBY_Qnil))) return line;
    must_be_ascii_compatible(line);

    if ((parser->debug_lines)) {
 rb_enc_associate(line, (parser->enc));
 rb_ary_push((parser->debug_lines), line);
    }
    if ((parser->coverage)) {
 rb_ary_push((parser->coverage), ((VALUE)RUBY_Qnil));
    }

    return line;
}

static const rb_data_type_t parser_data_type;


static rb_ast_t*
parser_compile_string(VALUE vparser, VALUE fname, VALUE s, int line)
{
    struct parser_params *parser;
    rb_ast_t *ast;

    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    parser->ast = ast = rb_ast_new();

    (parser->lex.gets) = lex_get_str;
    (parser->lex.gets_ptr) = 0;
    (parser->lex.input) = rb_str_new_frozen(s);
    (parser->lex.pbeg) = (parser->lex.pcur) = (parser->lex.pend) = 0;

    ast->root = yycompile(parser, fname, line);
    parser->ast = 0;
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(vparser); ; rb_gc_guarded_ptr; }));

    return ast;
}

rb_ast_t*
rb_compile_string(const char *f, VALUE s, int line)
{
    must_be_ascii_compatible(s);
    return parser_compile_string(rb_parser_new(), rb_filesystem_str_new_cstr(f), s, line);
}

rb_ast_t*
rb_parser_compile_string(VALUE vparser, const char *f, VALUE s, int line)
{
    return rb_parser_compile_string_path(vparser, rb_filesystem_str_new_cstr(f), s, line);
}

rb_ast_t*
rb_parser_compile_string_path(VALUE vparser, VALUE f, VALUE s, int line)
{
    must_be_ascii_compatible(s);
    return parser_compile_string(vparser, f, s, line);
}

rb_ast_t*
rb_compile_cstr(const char *f, const char *s, int len, int line)
{
    VALUE str =  ({ (__builtin_constant_p(s) && __builtin_constant_p(len)) ? rb_str_new_static((s), (len)) : rb_str_new((s), (len)); });
    return parser_compile_string(rb_parser_new(), rb_filesystem_str_new_cstr(f), str, line);
}

rb_ast_t*
rb_parser_compile_cstr(VALUE vparser, const char *f, const char *s, int len, int line)
{
    VALUE str =  ({ (__builtin_constant_p(s) && __builtin_constant_p(len)) ? rb_str_new_static((s), (len)) : rb_str_new((s), (len)); });
    return parser_compile_string(vparser, rb_filesystem_str_new_cstr(f), str, line);
}

VALUE rb_io_gets_internal(VALUE io);

static VALUE
lex_io_gets(struct parser_params *parser, VALUE io)
{
    return rb_io_gets_internal(io);
}

rb_ast_t*
rb_compile_file(const char *f, VALUE file, int start)
{
    VALUE vparser = rb_parser_new();

    return rb_parser_compile_file(vparser, f, file, start);
}

rb_ast_t*
rb_parser_compile_file(VALUE vparser, const char *f, VALUE file, int start)
{
    return rb_parser_compile_file_path(vparser, rb_filesystem_str_new_cstr(f), file, start);
}

rb_ast_t*
rb_parser_compile_file_path(VALUE vparser, VALUE fname, VALUE file, int start)
{
    struct parser_params *parser;
    rb_ast_t *ast;

    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    parser->ast = ast = rb_ast_new();

    (parser->lex.gets) = lex_io_gets;
    (parser->lex.input) = file;
    (parser->lex.pbeg) = (parser->lex.pcur) = (parser->lex.pend) = 0;

    ast->root = yycompile(parser, fname, start);
    parser->ast = 0;
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(vparser); ; rb_gc_guarded_ptr; }));

    return ast;
}
enum string_type {
    str_label = 0x40,
    str_squote = (0),
    str_dquote = (0x02),
    str_xquote = (0x02),
    str_regexp = (0x04|0x01|0x02),
    str_sword = (0x08|0x4000),
    str_dword = (0x08|0x02|0x4000),
    str_ssym = (0x10),
    str_dsym = (0x10|0x02)
};

static VALUE
parser_str_new(const char *p, long n, rb_encoding *enc, int func, rb_encoding *enc0)
{
    VALUE str;

    str =  ({ (__builtin_constant_p(p) && __builtin_constant_p(n)) ? rb_enc_str_new_static((p), (n), (enc)) : rb_enc_str_new((p), (n), (enc)); });
    if (!(func & 0x04) && rb_enc_asciicompat_inline(enc)) {
 if (rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_7BIT) {
 }
 else if (enc0 == rb_usascii_encoding() && enc != rb_utf8_encoding()) {
     rb_enc_associate(str, rb_ascii8bit_encoding());
 }
    }

    return str;
}
static int
parser_nextline(struct parser_params *parser)
{
    VALUE v = (parser->lex.nextline);
    (parser->lex.nextline) = 0;
    if (!v) {
 if (parser->eofp)
     return -1;

 if (!(parser->lex.input) || !((VALUE)(v = lex_getline(parser)) != ((VALUE)RUBY_Qnil))) {
     parser->eofp = 1;
     ((parser)->lex.pcur = (parser)->lex.pend);
     return -1;
 }
 parser->cr_seen = 0;
    }
    ((void)(parser->lex.ptok), (void)((parser->lex.pend)));
    if ((parser->heredoc_end) > 0) {
 (parser->ruby_sourceline) = (parser->heredoc_end);
 (parser->heredoc_end) = 0;
    }
    (parser->ruby_sourceline)++;
    parser->line_count++;
    (parser->lex.pbeg) = (parser->lex.pcur) = (!(((struct RBasic*)(v))->flags & RSTRING_NOEMBED) ? ((struct RString*)(v))->as.ary : ((struct RString*)(v))->as.heap.ptr);
    (parser->lex.pend) = (parser->lex.pcur) + (!(((struct RBasic*)(v))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(v))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(v))->as.heap.len);
    ((parser)->lex.ptok = (parser)->lex.pcur);
    (parser->lex.prevline) = (parser->lex.lastline);
    (parser->lex.lastline) = v;
    return 0;
}

static int
parser_cr(struct parser_params *parser, int c)
{
    if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('\n')) == (unsigned char)(parser->lex.pcur)[0])) {
 (parser->lex.pcur)++;
 c = '\n';
    }
    else if (!parser->cr_seen) {
 parser->cr_seen = 1;

 rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("encountered \\r in middle of line, treated as a mere space"));
    }
    return c;
}

static inline int
parser_nextc(struct parser_params *parser)
{
    int c;

    if ((__builtin_expect(!!(((parser->lex.pcur) == (parser->lex.pend)) || parser->eofp || (parser->lex.nextline)), 0))) {
 if (parser_nextline(parser)) return -1;
    }
    c = (unsigned char)*(parser->lex.pcur)++;
    if ((__builtin_expect(!!(c == '\r'), 0))) {
 c = parser_cr(parser, c);
    }

    return c;
}

static void
parser_pushback(struct parser_params *parser, int c)
{
    if (c == -1) return;
    (parser->lex.pcur)--;
    if ((parser->lex.pcur) > (parser->lex.pbeg) && (parser->lex.pcur)[0] == '\n' && (parser->lex.pcur)[-1] == '\r') {
 (parser->lex.pcur)--;
    }
}
static char*
parser_newtok(struct parser_params *parser)
{
    (parser->tokidx) = 0;
    (parser->tokline) = (parser->ruby_sourceline);
    if (!(parser->tokenbuf)) {
 (parser->toksiz) = 60;
 (parser->tokenbuf) = ((char*)ruby_xmalloc2((size_t)(60),sizeof(char)));
    }
    if ((parser->toksiz) > 4096) {
 (parser->toksiz) = 60;
 (((parser->tokenbuf))=(char*)ruby_xrealloc2((char*)((parser->tokenbuf)),(size_t)(60),sizeof(char)));
    }
    return (parser->tokenbuf);
}

static char *
parser_tokspace(struct parser_params *parser, int n)
{
    (parser->tokidx) += n;

    if ((parser->tokidx) >= (parser->toksiz)) {
 do {(parser->toksiz) *= 2;} while ((parser->toksiz) < (parser->tokidx));
 (((parser->tokenbuf))=(char*)ruby_xrealloc2((char*)((parser->tokenbuf)),(size_t)((parser->toksiz)),sizeof(char)));
    }
    return &(parser->tokenbuf)[(parser->tokidx)-n];
}

static void
parser_tokadd(struct parser_params *parser, int c)
{
    (parser->tokenbuf)[(parser->tokidx)++] = (char)c;
    if ((parser->tokidx) >= (parser->toksiz)) {
 (parser->toksiz) *= 2;
 (((parser->tokenbuf))=(char*)ruby_xrealloc2((char*)((parser->tokenbuf)),(size_t)((parser->toksiz)),sizeof(char)));
    }
}

static int
parser_tok_hex(struct parser_params *parser, size_t *numlen)
{
    int c;

    c = ((int)ruby_scan_hex(((parser->lex.pcur)),(2),(numlen)));
    if (!*numlen) {
 parser->lex.ptok = (parser->lex.pcur);
 parser_yyerror(parser, ("invalid hex escape"));
 return 0;
    }
    (parser->lex.pcur) += *numlen;
    return c;
}



static int
parser_tokadd_codepoint(struct parser_params *parser, rb_encoding **encp,
   int regexp_literal, int wide)
{
    size_t numlen;
    int codepoint = ((int)ruby_scan_hex(((parser->lex.pcur)),(wide ? (parser->lex.pend) - (parser->lex.pcur) : 4),(&numlen)));
    (parser->lex.ptok = ((parser->lex.pcur)));
    (parser->lex.pcur) += numlen;
    if (wide ? (numlen == 0 || numlen > 6) : (numlen < 4)) {
 parser_yyerror(parser, ("invalid Unicode escape"));
 return wide && numlen > 0;
    }
    if (codepoint > 0x10ffff) {
 parser_yyerror(parser, ("invalid Unicode codepoint (too large)"));
 return wide;
    }
    if ((codepoint & 0xfffff800) == 0xd800) {
 parser_yyerror(parser, ("invalid Unicode codepoint"));
 return wide;
    }
    if (regexp_literal) {
 memcpy(parser_tokspace(parser, ((int)numlen)), (parser->lex.pcur) - ((int)numlen), ((int)numlen));
    }
    else if (codepoint >= 0x80) {
 rb_encoding *utf8 = rb_utf8_encoding();
 if (*encp && utf8 != *encp) {
     static const char mixed_utf8[] = "UTF-8 mixed within %s source";
     size_t len = sizeof(mixed_utf8) - 2 + strlen((*encp)->name);
     char *mesg = __builtin_alloca (len);
     ruby_snprintf(mesg, len, mixed_utf8, (*encp)->name);
     parser_yyerror(parser, (mesg));
     return wide;
 }
 *encp = utf8;
 parser_tokaddmbc(parser, (codepoint), (*encp));
    }
    else {
 parser_tokadd(parser, (codepoint));
    }
    return 1;
}


static int
parser_tokadd_utf8(struct parser_params *parser, rb_encoding **encp,
     int string_literal, int symbol_literal, int regexp_literal)
{







    const int open_brace = '{', close_brace = '}';

    if (regexp_literal) { parser_tokadd(parser, ('\\')); parser_tokadd(parser, ('u')); }

    if (((parser->lex.pcur)+(0) < (parser->lex.pend) && ((open_brace)) == (unsigned char)(parser->lex.pcur)[0])) {
 int c, last = parser_nextc(parser);
 if ((parser->lex.pcur) >= (parser->lex.pend)) goto unterminated;
 while (rb_isspace(c = *(parser->lex.pcur)) && ++(parser->lex.pcur) < (parser->lex.pend));
 while (c != close_brace) {
     if (regexp_literal) parser_tokadd(parser, (last));
     if (!parser_tokadd_codepoint(parser, encp, regexp_literal, 1)) {
  break;
     }
     while (rb_isspace(c = *(parser->lex.pcur))) {
  if (++(parser->lex.pcur) >= (parser->lex.pend)) goto unterminated;
  last = c;
     }
 }

 if (c != close_brace) {
   unterminated:
     (parser->lex.ptok = ((parser->lex.pcur)));
     parser_yyerror(parser, ("unterminated Unicode escape"));
     return 0;
 }

 if (regexp_literal) parser_tokadd(parser, (close_brace));
 parser_nextc(parser);
    }
    else {
 if (!parser_tokadd_codepoint(parser, encp, regexp_literal, 0)) {
     return 0;
 }
    }

    return 1;
}




static int
parser_read_escape(struct parser_params *parser, int flags,
     rb_encoding **encp)
{
    int c;
    size_t numlen;

    switch (c = parser_nextc(parser)) {
      case '\\':
 return c;

      case 'n':
 return '\n';

      case 't':
 return '\t';

      case 'r':
 return '\r';

      case 'f':
 return '\f';

      case 'v':
 return '\13';

      case 'a':
 return '\007';

      case 'e':
 return 033;

      case '0': case '1': case '2': case '3':
      case '4': case '5': case '6': case '7':
 parser_pushback(parser, (c));
 c = ((int)ruby_scan_oct(((parser->lex.pcur)),(3),(&numlen)));
 (parser->lex.pcur) += numlen;
 return c;

      case 'x':
 c = parser_tok_hex(parser, (&numlen));
 if (numlen == 0) return 0;
 return c;

      case 'b':
 return '\010';

      case 's':
 return ' ';

      case 'M':
 if (flags & 2) goto eof;
 if ((c = parser_nextc(parser)) != '-') {
     goto eof;
 }
 if ((c = parser_nextc(parser)) == '\\') {
     if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('u')) == (unsigned char)(parser->lex.pcur)[0])) goto eof;
     return parser_read_escape(parser, (flags|2), (encp)) | 0x80;
 }
 else if (c == -1 || !rb_isascii(c)) goto eof;
 else {
     return ((c & 0xff) | 0x80);
 }

      case 'C':
 if ((c = parser_nextc(parser)) != '-') {
     goto eof;
 }
      case 'c':
 if (flags & 1) goto eof;
 if ((c = parser_nextc(parser))== '\\') {
     if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('u')) == (unsigned char)(parser->lex.pcur)[0])) goto eof;
     c = parser_read_escape(parser, (flags|1), (encp));
 }
 else if (c == '?')
     return 0177;
 else if (c == -1 || !rb_isascii(c)) goto eof;
 return c & 0x9f;

      eof:
      case -1:
        parser_yyerror(parser, ("Invalid escape character syntax"));
 parser_pushback(parser, (c));
 return '\0';

      default:
 return c;
    }
}

static void
parser_tokaddmbc(struct parser_params *parser, int c, rb_encoding *enc)
{
    int len = rb_enc_codelen(c, enc);
    ((enc))->code_to_mbc((c),(OnigUChar*)(parser_tokspace(parser, (len))),(enc));
}

static int
parser_tokadd_escape(struct parser_params *parser, rb_encoding **encp)
{
    int c;
    int flags = 0;
    size_t numlen;

  first:
    switch (c = parser_nextc(parser)) {
      case '\n':
 return 0;

      case '0': case '1': case '2': case '3':
      case '4': case '5': case '6': case '7':
 {
     ruby_scan_oct(--(parser->lex.pcur), 3, &numlen);
     if (numlen == 0) goto eof;
     (parser->lex.pcur) += numlen;
     memcpy(parser_tokspace(parser, ((int)numlen + 1)), (parser->lex.pcur) - ((int)numlen + 1), ((int)numlen + 1));
 }
 return 0;

      case 'x':
 {
     parser_tok_hex(parser, (&numlen));
     if (numlen == 0) return -1;
     memcpy(parser_tokspace(parser, ((int)numlen + 2)), (parser->lex.pcur) - ((int)numlen + 2), ((int)numlen + 2));
 }
 return 0;

      case 'M':
 if (flags & 2) goto eof;
 if ((c = parser_nextc(parser)) != '-') {
     parser_pushback(parser, (c));
     goto eof;
 }
 memcpy(parser_tokspace(parser, (3)), (parser->lex.pcur) - (3), (3));
 flags |= 2;
 goto escaped;

      case 'C':
 if (flags & 1) goto eof;
 if ((c = parser_nextc(parser)) != '-') {
     parser_pushback(parser, (c));
     goto eof;
 }
 memcpy(parser_tokspace(parser, (3)), (parser->lex.pcur) - (3), (3));
 goto escaped;

      case 'c':
 if (flags & 1) goto eof;
 memcpy(parser_tokspace(parser, (2)), (parser->lex.pcur) - (2), (2));
 flags |= 1;
      escaped:
 if ((c = parser_nextc(parser)) == '\\') {
     goto first;
 }
 else if (c == -1) goto eof;
 parser_tokadd(parser, (c));
 return 0;

      eof:
      case -1:
        parser_yyerror(parser, ("Invalid escape character syntax"));
 return -1;

      default:
        parser_tokadd(parser, ('\\'));
 parser_tokadd(parser, (c));
    }
    return 0;
}

static int
parser_regx_options(struct parser_params *parser)
{
    int kcode = 0;
    int kopt = 0;
    int options = 0;
    int c, opt, kc;

    parser_newtok(parser);
    while (c = parser_nextc(parser), rb_isalpha(c)) {
        if (c == 'o') {
            options |= (1<<16);
        }
        else if (rb_char_to_option_kcode(c, &opt, &kc)) {
     if (kc >= 0) {
  if (kc != rb_ascii8bit_encindex()) kcode = c;
  kopt = opt;
     }
     else {
  options |= opt;
     }
        }
        else {
     parser_tokadd(parser, (c));
        }
    }
    options |= kopt;
    parser_pushback(parser, (c));
    if ((parser->tokidx)) {
 ((parser->tokenbuf)[(parser->tokidx)]='\0');
 parser_compile_error(parser, "unknown regexp option%s - %s",
        (parser->tokidx) > 1 ? "s": "", (parser->tokenbuf));
    }
    return options | (((kcode)&0xff)<<8);
}

static void
dispose_string(struct parser_params *parser, VALUE str)
{
    rb_ast_delete_mark_object(parser->ast, str);
    rb_str_free(str);
    rb_gc_force_recycle(str);
}

static int
parser_tokadd_mbchar(struct parser_params *parser, int c)
{
    int len = parser_precise_mbclen(parser, (parser->lex.pcur)-1);
    if (len < 0) return -1;
    parser_tokadd(parser, (c));
    (parser->lex.pcur) += --len;
    if (len > 0) memcpy(parser_tokspace(parser, (len)), (parser->lex.pcur) - (len), (len));
    return c;
}



static inline int
simple_re_meta(int c)
{
    switch (c) {
      case '$': case '*': case '+': case '.':
      case '?': case '^': case '|':
      case ')': case ']': case '}': case '>':
 return 1;
      default:
 return 0;
    }
}

static int
parser_update_heredoc_indent(struct parser_params *parser, int c)
{
    if ((parser->heredoc_line_indent) == -1) {
 if (c == '\n') (parser->heredoc_line_indent) = 0;
    }
    else {
 if (c == ' ') {
     (parser->heredoc_line_indent)++;
     return 1;
 }
 else if (c == '\t') {
     int w = ((parser->heredoc_line_indent) / 8) + 1;
     (parser->heredoc_line_indent) = w * 8;
     return 1;
 }
 else if (c != '\n') {
     if ((parser->heredoc_indent) > (parser->heredoc_line_indent)) {
  (parser->heredoc_indent) = (parser->heredoc_line_indent);
     }
     (parser->heredoc_line_indent) = -1;
 }
    }
    return 0;
}

static int
parser_tokadd_string(struct parser_params *parser,
       int func, int term, int paren, long *nest,
       rb_encoding **encp)
{
    int c;
    rb_encoding *enc = 0;
    char *errbuf = 0;
    static const char mixed_msg[] = "%s mixed within %s source";
    while ((c = parser_nextc(parser)) != -1) {
 if ((parser->heredoc_indent) > 0) {
     parser_update_heredoc_indent(parser, c);
 }

 if (paren && c == paren) {
     ++*nest;
 }
 else if (c == term) {
     if (!nest || !*nest) {
  parser_pushback(parser, (c));
  break;
     }
     --*nest;
 }
 else if ((func & 0x02) && c == '#' && (parser->lex.pcur) < (parser->lex.pend)) {
     int c2 = *(parser->lex.pcur);
     if (c2 == '$' || c2 == '@' || c2 == '{') {
  parser_pushback(parser, (c));
  break;
     }
 }
 else if (c == '\\') {
     (parser->lex.ptok = ((parser->lex.pcur) - 1));
     c = parser_nextc(parser);
     switch (c) {
       case '\n':
  if (func & 0x08) break;
  if (func & 0x02) continue;
  parser_tokadd(parser, ('\\'));
  break;

       case '\\':
  if (func & 0x01) parser_tokadd(parser, (c));
  break;

       case 'u':
  if ((func & 0x02) == 0) {
      parser_tokadd(parser, ('\\'));
      break;
  }
  if (!parser_tokadd_utf8(parser, &enc, term,
     func & 0x10,
     func & 0x04)) {
      return -1;
  }
  continue;

       default:
  if (c == -1) return -1;
  if (!rb_isascii(c)) {
      if ((func & 0x02) == 0) parser_tokadd(parser, ('\\'));
      goto non_ascii;
  }
  if (func & 0x04) {
      if (c == term && !simple_re_meta(c)) {
   parser_tokadd(parser, (c));
   continue;
      }
      parser_pushback(parser, (c));
      if ((c = parser_tokadd_escape(parser, (&enc))) < 0)
   return -1;
      if (enc && enc != *encp) {
   do { const char *pos = (parser->lex.pcur); (parser->lex.pcur) = (parser->lex.ptok+2); if (!errbuf) { size_t len = sizeof(mixed_msg) - 4; len += strlen(((enc))->name); len += strlen(((*encp))->name); errbuf = ((char*)__builtin_alloca (sizeof(char)*(len))); ruby_snprintf(errbuf, len, mixed_msg, ((enc))->name, ((*encp))->name); parser_yyerror(parser, (errbuf)); }; (parser->lex.pcur) = pos; } while (0);
      }
      continue;
  }
  else if (func & 0x02) {
      parser_pushback(parser, (c));
      if (func & 0x01) parser_tokadd(parser, ('\\'));
      c = parser_read_escape(parser, (0), (&enc));
  }
  else if ((func & 0x08) && rb_isspace(c)) {

  }
  else if (c != term && !(paren && c == paren)) {
      parser_tokadd(parser, ('\\'));
      parser_pushback(parser, (c));
      continue;
  }
     }
 }
 else if (!rb_isascii(*((parser->lex.pcur)-1))) {
   non_ascii:
     if (!enc) {
  enc = *encp;
     }
     else if (enc != *encp) {
  if (!errbuf) { size_t len = sizeof(mixed_msg) - 4; len += strlen((enc)->name); len += strlen((*encp)->name); errbuf = ((char*)__builtin_alloca (sizeof(char)*(len))); ruby_snprintf(errbuf, len, mixed_msg, (enc)->name, (*encp)->name); parser_yyerror(parser, (errbuf)); };
  continue;
     }
     if (parser_tokadd_mbchar(parser, (c)) == -1) return -1;
     continue;
 }
 else if ((func & 0x08) && rb_isspace(c)) {
     parser_pushback(parser, (c));
     break;
 }
        if (c & 0x80) {
     if (!enc) {
  enc = *encp;
     }
     else if (enc != *encp) {
  if (!errbuf) { size_t len = sizeof(mixed_msg) - 4; len += strlen((enc)->name); len += strlen((*encp)->name); errbuf = ((char*)__builtin_alloca (sizeof(char)*(len))); ruby_snprintf(errbuf, len, mixed_msg, (enc)->name, (*encp)->name); parser_yyerror(parser, (errbuf)); };
  continue;
     }
        }
 parser_tokadd(parser, (c));
    }
    if (enc) *encp = enc;
    return c;
}
 extern const unsigned int ruby_global_name_punct_bits[(0x7e - 0x20 + 31) / 32];
const unsigned int ruby_global_name_punct_bits[] = {
    ( ((('~') / 32 - 1 == 0) ? (1U << (('~') % 32)) : 0) | ((('*') / 32 - 1 == 0) ? (1U << (('*') % 32)) : 0) | ((('$') / 32 - 1 == 0) ? (1U << (('$') % 32)) : 0) | ((('?') / 32 - 1 == 0) ? (1U << (('?') % 32)) : 0) | ((('!') / 32 - 1 == 0) ? (1U << (('!') % 32)) : 0) | ((('@') / 32 - 1 == 0) ? (1U << (('@') % 32)) : 0) | ((('/') / 32 - 1 == 0) ? (1U << (('/') % 32)) : 0) | ((('\\') / 32 - 1 == 0) ? (1U << (('\\') % 32)) : 0) | (((';') / 32 - 1 == 0) ? (1U << ((';') % 32)) : 0) | (((',') / 32 - 1 == 0) ? (1U << ((',') % 32)) : 0) | ((('.') / 32 - 1 == 0) ? (1U << (('.') % 32)) : 0) | ((('=') / 32 - 1 == 0) ? (1U << (('=') % 32)) : 0) | (((':') / 32 - 1 == 0) ? (1U << ((':') % 32)) : 0) | ((('<') / 32 - 1 == 0) ? (1U << (('<') % 32)) : 0) | ((('>') / 32 - 1 == 0) ? (1U << (('>') % 32)) : 0) | ((('\"') / 32 - 1 == 0) ? (1U << (('\"') % 32)) : 0) | ((('&') / 32 - 1 == 0) ? (1U << (('&') % 32)) : 0) | ((('`') / 32 - 1 == 0) ? (1U << (('`') % 32)) : 0) | ((('\'') / 32 - 1 == 0) ? (1U << (('\'') % 32)) : 0) | ((('+') / 32 - 1 == 0) ? (1U << (('+') % 32)) : 0) | ((('0') / 32 - 1 == 0) ? (1U << (('0') % 32)) : 0)),
    ( ((('~') / 32 - 1 == 1) ? (1U << (('~') % 32)) : 0) | ((('*') / 32 - 1 == 1) ? (1U << (('*') % 32)) : 0) | ((('$') / 32 - 1 == 1) ? (1U << (('$') % 32)) : 0) | ((('?') / 32 - 1 == 1) ? (1U << (('?') % 32)) : 0) | ((('!') / 32 - 1 == 1) ? (1U << (('!') % 32)) : 0) | ((('@') / 32 - 1 == 1) ? (1U << (('@') % 32)) : 0) | ((('/') / 32 - 1 == 1) ? (1U << (('/') % 32)) : 0) | ((('\\') / 32 - 1 == 1) ? (1U << (('\\') % 32)) : 0) | (((';') / 32 - 1 == 1) ? (1U << ((';') % 32)) : 0) | (((',') / 32 - 1 == 1) ? (1U << ((',') % 32)) : 0) | ((('.') / 32 - 1 == 1) ? (1U << (('.') % 32)) : 0) | ((('=') / 32 - 1 == 1) ? (1U << (('=') % 32)) : 0) | (((':') / 32 - 1 == 1) ? (1U << ((':') % 32)) : 0) | ((('<') / 32 - 1 == 1) ? (1U << (('<') % 32)) : 0) | ((('>') / 32 - 1 == 1) ? (1U << (('>') % 32)) : 0) | ((('\"') / 32 - 1 == 1) ? (1U << (('\"') % 32)) : 0) | ((('&') / 32 - 1 == 1) ? (1U << (('&') % 32)) : 0) | ((('`') / 32 - 1 == 1) ? (1U << (('`') % 32)) : 0) | ((('\'') / 32 - 1 == 1) ? (1U << (('\'') % 32)) : 0) | ((('+') / 32 - 1 == 1) ? (1U << (('+') % 32)) : 0) | ((('0') / 32 - 1 == 1) ? (1U << (('0') % 32)) : 0)),
    ( ((('~') / 32 - 1 == 2) ? (1U << (('~') % 32)) : 0) | ((('*') / 32 - 1 == 2) ? (1U << (('*') % 32)) : 0) | ((('$') / 32 - 1 == 2) ? (1U << (('$') % 32)) : 0) | ((('?') / 32 - 1 == 2) ? (1U << (('?') % 32)) : 0) | ((('!') / 32 - 1 == 2) ? (1U << (('!') % 32)) : 0) | ((('@') / 32 - 1 == 2) ? (1U << (('@') % 32)) : 0) | ((('/') / 32 - 1 == 2) ? (1U << (('/') % 32)) : 0) | ((('\\') / 32 - 1 == 2) ? (1U << (('\\') % 32)) : 0) | (((';') / 32 - 1 == 2) ? (1U << ((';') % 32)) : 0) | (((',') / 32 - 1 == 2) ? (1U << ((',') % 32)) : 0) | ((('.') / 32 - 1 == 2) ? (1U << (('.') % 32)) : 0) | ((('=') / 32 - 1 == 2) ? (1U << (('=') % 32)) : 0) | (((':') / 32 - 1 == 2) ? (1U << ((':') % 32)) : 0) | ((('<') / 32 - 1 == 2) ? (1U << (('<') % 32)) : 0) | ((('>') / 32 - 1 == 2) ? (1U << (('>') % 32)) : 0) | ((('\"') / 32 - 1 == 2) ? (1U << (('\"') % 32)) : 0) | ((('&') / 32 - 1 == 2) ? (1U << (('&') % 32)) : 0) | ((('`') / 32 - 1 == 2) ? (1U << (('`') % 32)) : 0) | ((('\'') / 32 - 1 == 2) ? (1U << (('\'') % 32)) : 0) | ((('+') / 32 - 1 == 2) ? (1U << (('+') % 32)) : 0) | ((('0') / 32 - 1 == 2) ? (1U << (('0') % 32)) : 0)),
};




static enum yytokentype
parser_peek_variable_name(struct parser_params *parser)
{
    int c;
    const char *p = (parser->lex.pcur);

    if (p + 1 >= (parser->lex.pend)) return 0;
    c = *p++;
    switch (c) {
      case '$':
 if ((c = *p) == '-') {
     if (++p >= (parser->lex.pend)) return 0;
     c = *p;
 }
 else if (is_global_name_punct(c) || rb_isdigit(c)) {
     return tSTRING_DVAR;
 }
 break;
      case '@':
 if ((c = *p) == '@') {
     if (++p >= (parser->lex.pend)) return 0;
     c = *p;
 }
 break;
      case '{':
 (parser->lex.pcur) = p;
 (parser->command_start) = 1;
 return tSTRING_DBEG;
      default:
 return 0;
    }
    if (!rb_isascii(c) || c == '_' || rb_isalpha(c))
 return tSTRING_DVAR;
    return 0;
}
static inline enum yytokentype
parser_string_term(struct parser_params *parser, int func)
{
    (parser->lex.strterm) = 0;
    if (func & 0x04) {
 ((*parser->lval).num = (parser_regx_options(parser)));
 ((void)0);
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 6587) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));
 return tREGEXP_END;
    }
    if ((func & 0x40) && (((parser->lex.pcur)+((0)) < (parser->lex.pend) && (':') == (unsigned char)(parser->lex.pcur)[(0)]) && !((parser->lex.pcur)+((0)+1) < (parser->lex.pend) && (':') == (unsigned char)(parser->lex.pcur)[(0)+1]))) {
 parser_nextc(parser);
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG|EXPR_LABEL), 6592) : (enum lex_state_e)(EXPR_BEG|EXPR_LABEL)));
 return tLABEL_END;
    }
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 6595) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));
    return tSTRING_END;
}

static enum yytokentype
parser_parse_string(struct parser_params *parser, rb_strterm_literal_t *quote)
{
    int func = (int)quote->u1.func;
    int term = (int)quote->u3.term;
    int paren = (int)quote->u2.paren;
    int c, space = 0;
    rb_encoding *enc = (parser->enc);
    VALUE lit;

    if (func & 0x8000) {
 if (func & 0x08) parser_nextc(parser);
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 6611) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));
 (parser->lex.strterm) = 0;
 return func & 0x04 ? tREGEXP_END : tSTRING_END;
    }
    c = parser_nextc(parser);
    if ((func & 0x08) && rb_isspace(c)) {
 do {c = parser_nextc(parser);} while (rb_isspace(c));
 space = 1;
    }
    if (func & 0x4000) {
 quote->u1.func &= ~0x4000;
 space = 1;
    }
    if (c == term && !quote->u0.nest) {
 if (func & 0x08) {
     quote->u1.func |= 0x8000;
     parser_pushback(parser, (c));
     ((void)(parser->lex.ptok), (void)((parser->lex.pcur)));
     return ' ';
 }
 return parser_string_term(parser, func);
    }
    if (space) {
 parser_pushback(parser, (c));
 ((void)(parser->lex.ptok), (void)((parser->lex.pcur)));
 return ' ';
    }
    parser_newtok(parser);
    if ((func & 0x02) && c == '#') {
 int t = parser_peek_variable_name(parser);
 if (t) return t;
 parser_tokadd(parser, ('#'));
 c = parser_nextc(parser);
    }
    parser_pushback(parser, (c));
    if (parser_tokadd_string(parser,(func),(term),(paren),(&quote->u0.nest),(&enc)) == -1) {

 if (parser->eofp) {





     (parser->lex.ptok = ((parser->lex.pcur)));
     if (func & 0x04) {
  parser_yyerror(parser, ("unterminated regexp meets end of file"));
     }
     else {
  parser_yyerror(parser, ("unterminated string meets end of file"));
     }
     quote->u1.func |= 0x8000;
 }
    }

    ((parser->tokenbuf)[(parser->tokidx)]='\0');
    add_mark_object_gen(parser, (lit = parser_str_new(((parser->tokenbuf)),((parser->tokidx)),(enc),(func),(parser->enc))));
    ((*parser->lval).node = node_newnode(parser, ((NODE_STR)), ((VALUE)(lit)), ((VALUE)(0)), ((VALUE)(0))));
    ((void)(enc));

    return tSTRING_CONTENT;
}

static enum yytokentype
parser_heredoc_identifier(struct parser_params *parser)
{
    int c = parser_nextc(parser), term, func = 0, term_len = 2;
    enum yytokentype token = tSTRING_BEG;
    long len;
    int newline = 0;
    int indent = 0;

    if (c == '-') {
 c = parser_nextc(parser);
 term_len++;
 func = 0x20;
    }
    else if (c == '~') {
 c = parser_nextc(parser);
 term_len++;
 func = 0x20;
 indent = 2147483647;
    }
    switch (c) {
      case '\'':
 term_len++;
 func |= str_squote; goto quoted;
      case '"':
 term_len++;
 func |= str_dquote; goto quoted;
      case '`':
 term_len++;
 token = tXSTRING_BEG;
 func |= str_xquote; goto quoted;

      quoted:
 term_len++;
 parser_newtok(parser);
 parser_tokadd(parser, (term_len));
 parser_tokadd(parser, (func));
 term = c;
 while ((c = parser_nextc(parser)) != -1 && c != term) {
     if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
     if (!newline && c == '\n') newline = 1;
     else if (newline) newline = 2;
 }
 if (c == -1) {
     parser_compile_error(parser, "unterminated here document identifier");
     return 0;
 }
 switch (newline) {
   case 1:
     rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("here document identifier ends with a newline"));
     if (--(parser->tokidx) > 0 && (parser->tokenbuf)[(parser->tokidx)] == '\r') --(parser->tokidx);
     break;
   case 2:
     parser_compile_error(parser, "here document identifier across newlines, never match");
     return -1;
 }
 break;

      default:
 if (!(!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
     parser_pushback(parser, (c));
     if (func & 0x20) {
  parser_pushback(parser, (indent > 0 ? '~' : '-'));
     }
     return 0;
 }
 parser_newtok(parser);
 parser_tokadd(parser, (term_len));
 parser_tokadd(parser, (func |= str_dquote));
 do {
     if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
 } while ((c = parser_nextc(parser)) != -1 && (!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1))))));
 parser_pushback(parser, (c));
 break;
    }

    (parser->tokenbuf)[0] = (parser->tokenbuf)[0] + (parser->tokidx) - 2;
    ((parser->tokenbuf)[(parser->tokidx)]='\0');
    ((void)0);
    len = (parser->lex.pcur) - (parser->lex.pbeg);
    ((parser)->lex.pcur = (parser)->lex.pend);

    (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm,
            ({ (__builtin_constant_p(((parser->tokenbuf))) && __builtin_constant_p(((parser->tokidx)))) ? rb_enc_str_new_static((((parser->tokenbuf))), (((parser->tokidx))), ((parser->enc))) : rb_enc_str_new((((parser->tokenbuf))), (((parser->tokidx))), ((parser->enc))); }),
           (parser->lex.lastline),
           len,
           (parser->ruby_sourceline));
    (parser->lex.strterm)->flags |= ((VALUE)RUBY_FL_USER4);

    ((parser)->lex.ptok = (parser)->lex.pcur);
    (parser->heredoc_indent) = indent;
    (parser->heredoc_line_indent) = 0;
    return token;
}

static void
parser_heredoc_restore(struct parser_params *parser, rb_strterm_heredoc_t *here)
{
    VALUE line;

    (parser->lex.strterm) = 0;
    line = here->lastline;
    (parser->lex.lastline) = line;
    (parser->lex.pbeg) = (!(((struct RBasic*)(line))->flags & RSTRING_NOEMBED) ? ((struct RString*)(line))->as.ary : ((struct RString*)(line))->as.heap.ptr);
    (parser->lex.pend) = (parser->lex.pbeg) + (!(((struct RBasic*)(line))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(line))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(line))->as.heap.len);
    (parser->lex.pcur) = (parser->lex.pbeg) + here->u3.lastidx;
    (parser->heredoc_end) = (parser->ruby_sourceline);
    (parser->ruby_sourceline) = (int)here->sourceline;
    ((parser)->lex.ptok = (parser)->lex.pcur);
}

static int
dedent_string(VALUE string, int width)
{
    char *str;
    long len;
    int i, col = 0;

    (!(((struct RBasic*)(string))->flags & RSTRING_NOEMBED) ? ((str) = ((struct RString*)(string))->as.ary, (len) = (long)((((struct RBasic*)(string))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((str) = ((struct RString*)(string))->as.heap.ptr, (len) = ((struct RString*)(string))->as.heap.len));
    for (i = 0; i < len && col < width; i++) {
 if (str[i] == ' ') {
     col++;
 }
 else if (str[i] == '\t') {
     int n = 8 * (col / 8 + 1);
     if (n > width) break;
     col = n;
 }
 else {
     break;
 }
    }
    if (!i) return 0;
    rb_str_modify(string);
    str = (!(((struct RBasic*)(string))->flags & RSTRING_NOEMBED) ? ((struct RString*)(string))->as.ary : ((struct RString*)(string))->as.heap.ptr);
    if ((!(((struct RBasic*)(string))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(string))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(string))->as.heap.len) != len)
 rb_fatal("literal string changed: %+li\v", string);
    memmove((str), (str + i), sizeof(char)*(size_t)(len - i));
    rb_str_set_len(string, len - i);
    return i;
}


static NODE *
parser_heredoc_dedent(struct parser_params *parser, NODE *root)
{
    NODE *node, *str_node;
    int indent = (parser->heredoc_indent);

    if (indent <= 0) return root;
    (parser->heredoc_indent) = 0;
    if (!root) return root;

    node = str_node = root;
    if (((int) (((root)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) str_node = root->u1.node;

    while (str_node) {
 VALUE lit = str_node->u1.value;
 if (str_node->flags & (((VALUE)1)<<7)) {
     dedent_string(lit, indent);
 }

 str_node = 0;
 while ((node = node->u3.node) != 0 && ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) {
     if ((str_node = node->u1.node) != 0) {
  enum node_type type = ((int) (((str_node)->flags & (((VALUE)0x7f)<<8))>>8));
  if (type == NODE_STR || type == NODE_DSTR) break;
  str_node = 0;
     }
 }
    }
    return root;
}
static int
parser_whole_match_p(struct parser_params *parser,
    const char *eos, long len, int indent)
{
    const char *p = (parser->lex.pbeg);
    long n;

    if (indent) {
 while (*p && rb_isspace(*p)) p++;
    }
    n = (parser->lex.pend) - (p + len);
    if (n < 0) return 0;
    if (n > 0 && p[len] != '\n') {
 if (p[len] != '\r') return 0;
 if (n <= 1 || p[len+1] != '\n') return 0;
    }
    return strncmp(eos, p, len) == 0;
}





static int
parser_number_literal_suffix(struct parser_params *parser, int mask)
{
    int c, result = 0;
    const char *lastp = (parser->lex.pcur);

    while ((c = parser_nextc(parser)) != -1) {
 if ((mask & (1<<1)) && c == 'i') {
     result |= (mask & (1<<1));
     mask &= ~(1<<1);

     mask &= ~(1<<0);
     continue;
 }
 if ((mask & (1<<0)) && c == 'r') {
     result |= (mask & (1<<0));
     mask &= ~(1<<0);
     continue;
 }
 if (!rb_isascii(c) || rb_isalpha(c) || c == '_') {
     (parser->lex.pcur) = lastp;
     (parser->lex.ptok = ((parser->lex.pcur)));
     return 0;
 }
 parser_pushback(parser, (c));
 if (c == '.') {
     c = ((parser->lex.pcur)+(1) < (parser->lex.pend) ? (unsigned char)(parser->lex.pcur)[1] : -1);
     if (rb_isdigit(c)) {
  parser_yyerror(parser, ("unexpected fraction part after numeric literal"));
  (parser->lex.pcur) += 2;
  while ((!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) parser_nextc(parser);
     }
 }
 break;
    }
    return result;
}

static enum yytokentype
parser_set_number_literal(struct parser_params *parser, VALUE v,
     enum yytokentype type, int suffix)
{
    if (suffix & (1<<1)) {
 v = rb_complex_raw((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), v);
 type = tIMAGINARY;
    }
    ((*parser->lval).node = node_newnode(parser, ((NODE_LIT)), ((VALUE)(v)), ((VALUE)(0)), ((VALUE)(0))));
    add_mark_object_gen(parser, (v));
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_ENDARG), 6941) : (enum lex_state_e)(EXPR_END|EXPR_ENDARG)));
    return type;
}

static int
parser_set_integer_literal(struct parser_params *parser, VALUE v, int suffix)
{
    enum yytokentype type = tINTEGER;
    if (suffix & (1<<0)) {
 v = rb_rational_raw((v), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
 type = tRATIONAL;
    }
    return parser_set_number_literal(parser, (v), (type), (suffix));
}
static enum yytokentype
parser_here_document(struct parser_params *parser, rb_strterm_heredoc_t *here)
{
    int c, func, indent = 0;
    const char *eos, *p, *pend;
    long len;
    VALUE str = 0;
    rb_encoding *enc = (parser->enc);
    int bol;

    eos = (!(((struct RBasic*)(here->term))->flags & RSTRING_NOEMBED) ? ((struct RString*)(here->term))->as.ary : ((struct RString*)(here->term))->as.heap.ptr);
    len = (!(((struct RBasic*)(here->term))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(here->term))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(here->term))->as.heap.len) - 2;
    eos++;
    indent = (func = *eos++) & 0x20;

    if ((c = parser_nextc(parser)) == -1) {
      error:
 parser_compile_error(parser, "can't find string \"%s\" anywhere before EOF", eos);
      restore:
 parser_heredoc_restore(parser,(&(parser->lex.strterm)->u.heredoc));
 (parser->lex.strterm) = 0;
 return 0;
    }
    bol = ((parser->lex.pcur) == (parser->lex.pbeg) + 1);
    if (bol && parser_whole_match_p(parser,(eos),(len),(indent))) {
 ((void)0);
 parser_heredoc_restore(parser,(&(parser->lex.strterm)->u.heredoc));
 (parser->lex.strterm) = 0;
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 7026) : (enum lex_state_e)(EXPR_END)));
 return tSTRING_END;
    }

    if (!(func & 0x02)) {
 do {
     p = (!(((struct RBasic*)((parser->lex.lastline)))->flags & RSTRING_NOEMBED) ? ((struct RString*)((parser->lex.lastline)))->as.ary : ((struct RString*)((parser->lex.lastline)))->as.heap.ptr);
     pend = (parser->lex.pend);
     if (pend > p) {
  switch (pend[-1]) {
    case '\n':
      if (--pend == p || pend[-1] != '\r') {
   pend++;
   break;
      }
    case '\r':
      --pend;
  }
     }

     if ((parser->heredoc_indent) > 0) {
  long i = 0;
  while (p + i < pend && parser_update_heredoc_indent(parser, p[i]))
      i++;
  (parser->heredoc_line_indent) = 0;
     }

     if (str)
  rb_str_cat(str, p, pend - p);
     else
  str =  ({ (__builtin_constant_p((p)) && __builtin_constant_p((pend - p))) ? rb_enc_str_new_static(((p)), ((pend - p)), ((parser->enc))) : rb_enc_str_new(((p)), ((pend - p)), ((parser->enc))); });
     if (pend < (parser->lex.pend)) rb_str_cat(str, "\n", 1);
     ((parser)->lex.pcur = (parser)->lex.pend);
     if ((parser->heredoc_indent) > 0) {
  goto flush_str;
     }
     if (parser_nextc(parser) == -1) {
  if (str) {
      dispose_string(parser, str);
      str = 0;
  }
  goto error;
     }
 } while (!parser_whole_match_p(parser,(eos),(len),(indent)));
    }
    else {

 parser_newtok(parser);
 if (c == '#') {
     int t = parser_peek_variable_name(parser);
     if ((parser->heredoc_line_indent) != -1) {
  if ((parser->heredoc_indent) > (parser->heredoc_line_indent)) {
      (parser->heredoc_indent) = (parser->heredoc_line_indent);
  }
  (parser->heredoc_line_indent) = -1;
     }
     if (t) return t;
     parser_tokadd(parser, ('#'));
     c = parser_nextc(parser);
 }
 do {
     parser_pushback(parser, (c));
     if ((c = parser_tokadd_string(parser,(func),('\n'),(0),(((void*)0)),(&enc))) == -1) {
  if (parser->eofp) goto error;
  goto restore;
     }
     if (c != '\n') {
       flush:
  str = parser_str_new(((parser->tokenbuf)),((parser->tokidx)),(enc),(func),(parser->enc));
       flush_str:
  ((*parser->lval).node = node_newnode(parser, ((NODE_STR)), ((VALUE)(str)), ((VALUE)(0)), ((VALUE)(0))));
  add_mark_object_gen(parser, (str));

  if (bol) (*parser->lval).node->flags |= (((VALUE)1)<<7);

  ((void)(enc));
  return tSTRING_CONTENT;
     }
     parser_tokadd(parser, (parser_nextc(parser)));
     if ((parser->heredoc_indent) > 0) {
  ((parser)->lex.pcur = (parser)->lex.pend);
  goto flush;
     }

     if ((c = parser_nextc(parser)) == -1) goto error;
 } while (!parser_whole_match_p(parser,(eos),(len),(indent)));
 str = parser_str_new(((parser->tokenbuf)),((parser->tokidx)),(enc),(func),(parser->enc));
    }
    ((void)0);




    parser_heredoc_restore(parser,(&(parser->lex.strterm)->u.heredoc));
    (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(func | 0x8000), (VALUE)(0), (VALUE)(0), 0);
    ((*parser->lval).node = node_newnode(parser, ((NODE_STR)), ((VALUE)(str)), ((VALUE)(0)), ((VALUE)(0))));
    add_mark_object_gen(parser, (str));

    if (bol) (*parser->lval).node->flags |= (((VALUE)1)<<7);

    return tSTRING_CONTENT;
}



struct kwtable {int name, id[2], state;};
const struct kwtable *rb_reserved_word(const char *, unsigned int);

static const struct kwtable *reserved_word( );
struct kwtable;
inline





static unsigned int
hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 26, 51, 51, 14, 51, 16, 8,
      11, 13, 51, 51, 51, 51, 10, 51, 13, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 11, 51, 13, 1, 26,
       4, 1, 8, 28, 51, 23, 51, 1, 1, 27,
       5, 19, 21, 51, 8, 3, 3, 11, 51, 21,
      24, 16, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51, 51, 51, 51, 51,
      51, 51, 51, 51, 51, 51
    };
  register unsigned int hval = (unsigned int)len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[2]];

      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return (unsigned int)hval + asso_values[(unsigned char)str[len - 1]];
}

struct stringpool_t
  {
    char stringpool_str8[sizeof("break")];
    char stringpool_str9[sizeof("else")];
    char stringpool_str10[sizeof("nil")];
    char stringpool_str11[sizeof("ensure")];
    char stringpool_str12[sizeof("end")];
    char stringpool_str13[sizeof("then")];
    char stringpool_str14[sizeof("not")];
    char stringpool_str15[sizeof("false")];
    char stringpool_str16[sizeof("self")];
    char stringpool_str17[sizeof("elsif")];
    char stringpool_str18[sizeof("rescue")];
    char stringpool_str19[sizeof("true")];
    char stringpool_str20[sizeof("until")];
    char stringpool_str21[sizeof("unless")];
    char stringpool_str22[sizeof("return")];
    char stringpool_str23[sizeof("def")];
    char stringpool_str24[sizeof("and")];
    char stringpool_str25[sizeof("do")];
    char stringpool_str26[sizeof("yield")];
    char stringpool_str27[sizeof("for")];
    char stringpool_str28[sizeof("undef")];
    char stringpool_str29[sizeof("or")];
    char stringpool_str30[sizeof("in")];
    char stringpool_str31[sizeof("when")];
    char stringpool_str32[sizeof("retry")];
    char stringpool_str33[sizeof("if")];
    char stringpool_str34[sizeof("case")];
    char stringpool_str35[sizeof("redo")];
    char stringpool_str36[sizeof("next")];
    char stringpool_str37[sizeof("super")];
    char stringpool_str38[sizeof("module")];
    char stringpool_str39[sizeof("begin")];
    char stringpool_str40[sizeof("__LINE__")];
    char stringpool_str41[sizeof("__FILE__")];
    char stringpool_str42[sizeof("__ENCODING__")];
    char stringpool_str43[sizeof("END")];
    char stringpool_str44[sizeof("alias")];
    char stringpool_str45[sizeof("BEGIN")];
    char stringpool_str46[sizeof("defined?")];
    char stringpool_str47[sizeof("class")];
    char stringpool_str50[sizeof("while")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "break",
    "else",
    "nil",
    "ensure",
    "end",
    "then",
    "not",
    "false",
    "self",
    "elsif",
    "rescue",
    "true",
    "until",
    "unless",
    "return",
    "def",
    "and",
    "do",
    "yield",
    "for",
    "undef",
    "or",
    "in",
    "when",
    "retry",
    "if",
    "case",
    "redo",
    "next",
    "super",
    "module",
    "begin",
    "__LINE__",
    "__FILE__",
    "__ENCODING__",
    "END",
    "alias",
    "BEGIN",
    "defined?",
    "class",
    "while"};

const struct kwtable *
reserved_word(register const char *str, register size_t len)
{
  static const struct kwtable wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1}, {-1},
 {(short)__builtin_offsetof(), {keyword_break, keyword_break}, EXPR_MID},
 {(short)__builtin_offsetof(), {keyword_else, keyword_else}, EXPR_BEG},
 {(short)__builtin_offsetof(), {keyword_nil, keyword_nil}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_ensure, keyword_ensure}, EXPR_BEG},
 {(short)__builtin_offsetof(), {keyword_end, keyword_end}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_then, keyword_then}, EXPR_BEG},
 {(short)__builtin_offsetof(), {keyword_not, keyword_not}, EXPR_ARG},
 {(short)__builtin_offsetof(), {keyword_false, keyword_false}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_self, keyword_self}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_elsif, keyword_elsif}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_rescue, modifier_rescue}, EXPR_MID},
 {(short)__builtin_offsetof(), {keyword_true, keyword_true}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_until, modifier_until}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_unless, modifier_unless}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_return, keyword_return}, EXPR_MID},
 {(short)__builtin_offsetof(), {keyword_def, keyword_def}, EXPR_FNAME},
 {(short)__builtin_offsetof(), {keyword_and, keyword_and}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_do, keyword_do}, EXPR_BEG},
 {(short)__builtin_offsetof(), {keyword_yield, keyword_yield}, EXPR_ARG},
 {(short)__builtin_offsetof(), {keyword_for, keyword_for}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_undef, keyword_undef}, EXPR_FNAME|EXPR_FITEM},
 {(short)__builtin_offsetof(), {keyword_or, keyword_or}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_in, keyword_in}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_when, keyword_when}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_retry, keyword_retry}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_if, modifier_if}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_case, keyword_case}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_redo, keyword_redo}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_next, keyword_next}, EXPR_MID},
 {(short)__builtin_offsetof(), {keyword_super, keyword_super}, EXPR_ARG},
 {(short)__builtin_offsetof(), {keyword_module, keyword_module}, EXPR_VALUE},
 {(short)__builtin_offsetof(), {keyword_begin, keyword_begin}, EXPR_BEG},
 {(short)__builtin_offsetof(), {keyword__LINE__, keyword__LINE__}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword__FILE__, keyword__FILE__}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword__ENCODING__, keyword__ENCODING__}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_END, keyword_END}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_alias, keyword_alias}, EXPR_FNAME|EXPR_FITEM},
 {(short)__builtin_offsetof(), {keyword_BEGIN, keyword_BEGIN}, EXPR_END},
 {(short)__builtin_offsetof(), {keyword_defined, keyword_defined}, EXPR_ARG},
 {(short)__builtin_offsetof(), {keyword_class, keyword_class}, EXPR_CLASS},
      {-1}, {-1},
 {(short)__builtin_offsetof(), {keyword_while, modifier_while}, EXPR_VALUE}
    };

  if (len <= 12 && len >= 2)
    {
      register unsigned int key = hash (str, len);

      if (key <= 50)
        {
          register int o = wordlist[key].name;
          if (o >= 0)
            {
              register const char *s = o + ((const char *) &stringpool_contents);

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[key];
            }
        }
    }
  return 0;
}

static void
arg_ambiguous_gen(struct parser_params *parser, char c)
{

    rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("ambiguous first argument; put parentheses or a space even after `%c' operator"), (c));



}


static ID
formal_argument_gen(struct parser_params *parser, ID lhs)
{
    switch (id_type(lhs)) {
      case RUBY_ID_LOCAL:
 break;

      case RUBY_ID_CONST:
 parser_yyerror(parser, ("formal argument cannot be a constant"));
 return 0;
      case RUBY_ID_INSTANCE:
 parser_yyerror(parser, ("formal argument cannot be an instance variable"));
 return 0;
      case RUBY_ID_GLOBAL:
 parser_yyerror(parser, ("formal argument cannot be a global variable"));
 return 0;
      case RUBY_ID_CLASS:
 parser_yyerror(parser, ("formal argument cannot be a class variable"));
 return 0;
      default:
 parser_yyerror(parser, ("formal argument must be local variable"));
 return 0;






    }
    shadowing_lvar_gen(parser, (lhs));
    return lhs;
}

static int
lvar_defined_gen(struct parser_params *parser, ID id)
{
    return (dyna_in_block_gen(parser) && dvar_defined_gen(parser, (id), ((void*)0))) || local_id_gen(parser, (id), ((void*)0));
}


static long
parser_encode_length(struct parser_params *parser, const char *name, long len)
{
    long nlen;

    if (len > 5 && name[nlen = len - 5] == '-') {
 if (rb_memcicmp(name + nlen + 1, "unix", 4) == 0)
     return nlen;
    }
    if (len > 4 && name[nlen = len - 4] == '-') {
 if (rb_memcicmp(name + nlen + 1, "dos", 3) == 0)
     return nlen;
 if (rb_memcicmp(name + nlen + 1, "mac", 3) == 0 &&
     !(len == 8 && rb_memcicmp(name, "utf8-mac", len) == 0))

     return nlen;
    }
    return len;
}

static void
parser_set_encode(struct parser_params *parser, const char *name)
{
    int idx = rb_enc_find_index(name);
    rb_encoding *enc;
    VALUE excargs[3];

    if (idx < 0) {
 excargs[1] = rb_sprintf("unknown encoding name: %s", name);
      error:
 excargs[0] = rb_eArgError;
 excargs[2] = rb_make_backtrace();
 rb_ary_unshift(excargs[2], rb_sprintf("%li\v:%d", (parser->ruby_sourcefile_string), (parser->ruby_sourceline)));
 rb_exc_raise(rb_make_exception(3, excargs));
    }
    enc = rb_enc_from_index(idx);
    if (!rb_enc_asciicompat_inline(enc)) {
 excargs[1] = rb_sprintf("%s is not ASCII compatible", (enc)->name);
 goto error;
    }
    parser->enc = enc;

    if ((parser->debug_lines)) {
 VALUE lines = (parser->debug_lines);
 long i, n = rb_array_len(lines);
 for (i = 0; i < n; ++i) {
     rb_enc_associate_index((rb_array_const_ptr(lines)[i]), idx);
 }
    }

}

static int
comment_at_top(struct parser_params *parser)
{
    const char *p = (parser->lex.pbeg), *pend = (parser->lex.pcur) - 1;
    if (parser->line_count != (parser->has_shebang ? 2 : 1)) return 0;
    while (p < pend) {
 if (!rb_isspace(*p)) return 0;
 p++;
    }
    return 1;
}

typedef long (*rb_magic_comment_length_t)(struct parser_params *parser, const char *name, long len);
typedef void (*rb_magic_comment_setter_t)(struct parser_params *parser, const char *name, const char *val);

static void
magic_comment_encoding(struct parser_params *parser, const char *name, const char *val)
{
    if (!comment_at_top(parser)) {
 return;
    }
    parser_set_encode(parser, val);
}

static int
parser_get_bool(struct parser_params *parser, const char *name, const char *val)
{
    switch (*val) {
      case 't': case 'T':
 if (strcasecmp(val, "true") == 0) {
     return 1;
 }
 break;
      case 'f': case 'F':
 if (strcasecmp(val, "false") == 0) {
     return 0;
 }
 break;
    }
    rb_compile_warning((parser->ruby_sourcefile), (parser->ruby_sourceline), "invalid value for %s: %s", name, val);
    return -1;
}

static void
parser_set_token_info(struct parser_params *parser, const char *name, const char *val)
{
    int b = parser_get_bool(parser, name, val);
    if (b >= 0) parser->token_info_enabled = b;
}

static void
parser_set_compile_option_flag(struct parser_params *parser, const char *name, const char *val)
{
    int b;

    if (parser->token_seen) {
 rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`%s' is ignored after any tokens"), (name));
 return;
    }

    b = parser_get_bool(parser, name, val);
    if (b < 0) return;

    if (!parser->compile_option)
 parser->compile_option = rb_obj_hide(rb_ident_hash_new());
    rb_hash_aset(parser->compile_option, ( ({ __builtin_constant_p((__builtin_constant_p(name) ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((name)), (long)strlen((name))); (ID) rb_intern_id_cache; }) : rb_intern(name))) && !(!((__builtin_constant_p(name) ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((name)), (long)strlen((name))); (ID) rb_intern_id_cache; }) : rb_intern(name))&RUBY_ID_STATIC_SYM)&&(__builtin_constant_p(name) ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((name)), (long)strlen((name))); (ID) rb_intern_id_cache; }) : rb_intern(name))>tLAST_OP_ID) ? (((VALUE)((__builtin_constant_p(name) ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((name)), (long)strlen((name))); (ID) rb_intern_id_cache; }) : rb_intern(name)))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym((__builtin_constant_p(name) ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2(((name)), (long)strlen((name))); (ID) rb_intern_id_cache; }) : rb_intern(name))); })),
   (b ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse)));
}
struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
    {"frozen_string_literal", parser_set_compile_option_flag},
    {"warn_indent", parser_set_token_info},



};

static const char *
magic_comment_marker(const char *str, long len)
{
    long i = 2;

    while (i < len) {
 switch (str[i]) {
   case '-':
     if (str[i-1] == '*' && str[i-2] == '-') {
  return str + i + 1;
     }
     i += 2;
     break;
   case '*':
     if (i + 1 >= len) return 0;
     if (str[i+1] != '-') {
  i += 4;
     }
     else if (str[i-1] != '-') {
  i += 2;
     }
     else {
  return str + i + 2;
     }
     break;
   default:
     i += 3;
     break;
 }
    }
    return 0;
}

static int
parser_magic_comment(struct parser_params *parser, const char *str, long len)
{
    int indicator = 0;
    VALUE name = 0, val = 0;
    const char *beg, *end, *vbeg, *vend;





    if (len <= 7) return 0;
    if (!!(beg = magic_comment_marker(str, len))) {
 if (!(end = magic_comment_marker(beg, str + len - beg)))
     return 0;
 indicator = 1;
 str = beg;
 len = end - beg - 3;
    }


    while (len > 0) {
 const struct magic_comment *p = magic_comments;
 char *s;
 int i;
 long n = 0;

 for (; len > 0 && *str; str++, --len) {
     switch (*str) {
       case '\'': case '"': case ':': case ';':
  continue;
     }
     if (!rb_isspace(*str)) break;
 }
 for (beg = str; len > 0; str++, --len) {
     switch (*str) {
       case '\'': case '"': case ':': case ';':
  break;
       default:
  if (rb_isspace(*str)) break;
  continue;
     }
     break;
 }
 for (end = str; len > 0 && rb_isspace(*str); str++, --len);
 if (!len) break;
 if (*str != ':') {
     if (!indicator) return 0;
     continue;
 }

 do str++; while (--len > 0 && rb_isspace(*str));
 if (!len) break;
 if (*str == '"') {
     for (vbeg = ++str; --len > 0 && *str != '"'; str++) {
  if (*str == '\\') {
      --len;
      ++str;
  }
     }
     vend = str;
     if (len) {
  --len;
  ++str;
     }
 }
 else {
     for (vbeg = str; len > 0 && *str != '"' && *str != ';' && !rb_isspace(*str); --len, str++);
     vend = str;
 }
 if (indicator) {
     while (len > 0 && (*str == ';' || rb_isspace(*str))) --len, str++;
 }
 else {
     while (len > 0 && (rb_isspace(*str))) --len, str++;
     if (len) return 0;
 }

 n = end - beg;
 ((name) ? (void)(rb_str_resize((name), (n)), memcpy(((!(((struct RBasic*)(name))->flags & RSTRING_NOEMBED) ? ((struct RString*)(name))->as.ary : ((struct RString*)(name))->as.heap.ptr)), ((beg)), sizeof(char)*(size_t)((n))), (name)) : (void)((name) =  ({ (__builtin_constant_p(((beg))) && __builtin_constant_p(((n)))) ? rb_enc_str_new_static((((beg))), (((n))), ((parser->enc))) : rb_enc_str_new((((beg))), (((n))), ((parser->enc))); })));
 s = (!(((struct RBasic*)(name))->flags & RSTRING_NOEMBED) ? ((struct RString*)(name))->as.ary : ((struct RString*)(name))->as.heap.ptr);
 for (i = 0; i < n; ++i) {
     if (s[i] == '-') s[i] = '_';
 }
 do {
     if ((st_locale_insensitive_strncasecmp((p->name), (s), (n))) == 0 && !p->name[n]) {
  n = vend - vbeg;
  if (p->length) {
      n = (*p->length)(parser, vbeg, n);
  }
  ((val) ? (void)(rb_str_resize((val), (n)), memcpy(((!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? ((struct RString*)(val))->as.ary : ((struct RString*)(val))->as.heap.ptr)), ((vbeg)), sizeof(char)*(size_t)((n))), (val)) : (void)((val) =  ({ (__builtin_constant_p(((vbeg))) && __builtin_constant_p(((n)))) ? rb_enc_str_new_static((((vbeg))), (((n))), ((parser->enc))) : rb_enc_str_new((((vbeg))), (((n))), ((parser->enc))); })));
  (*p->func)(parser, p->name, (!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? ((struct RString*)(val))->as.ary : ((struct RString*)(val))->as.heap.ptr));
  break;
     }
 } while (++p < magic_comments + ((int)(sizeof(magic_comments) / sizeof((magic_comments)[0]))));




    }

    return 1;
}

static void
set_file_encoding(struct parser_params *parser, const char *str, const char *send)
{
    int sep = 0;
    const char *beg = str;
    VALUE s;

    for (;;) {
 if (send - str <= 6) return;
 switch (str[6]) {
   case 'C': case 'c': str += 6; continue;
   case 'O': case 'o': str += 5; continue;
   case 'D': case 'd': str += 4; continue;
   case 'I': case 'i': str += 3; continue;
   case 'N': case 'n': str += 2; continue;
   case 'G': case 'g': str += 1; continue;
   case '=': case ':':
     sep = 1;
     str += 6;
     break;
   default:
     str += 6;
     if (rb_isspace(*str)) break;
     continue;
 }
 if ((st_locale_insensitive_strncasecmp((str-6), ("coding"), (6))) == 0) break;
    }
    for (;;) {
 do {
     if (++str >= send) return;
 } while (rb_isspace(*str));
 if (sep) break;
 if (*str != '=' && *str != ':') return;
 sep = 1;
 str++;
    }
    beg = str;
    while ((*str == '-' || *str == '_' || rb_isalnum(*str)) && ++str < send);
    s =  ({ (__builtin_constant_p(beg) && __builtin_constant_p(parser_encode_length(parser, beg, str - beg))) ? rb_str_new_static((beg), (parser_encode_length(parser, beg, str - beg))) : rb_str_new((beg), (parser_encode_length(parser, beg, str - beg))); });
    parser_set_encode(parser, (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr));
    rb_str_resize(s, 0);
}

static void
parser_prepare(struct parser_params *parser)
{
    int c = parser_nextc(parser);
    parser->token_info_enabled = !(parser->base_block != 0 && !(parser->in_main)) && !(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
    switch (c) {
      case '#':
 if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('!')) == (unsigned char)(parser->lex.pcur)[0])) parser->has_shebang = 1;
 break;
      case 0xef:
 if ((parser->lex.pend) - (parser->lex.pcur) >= 2 &&
     (unsigned char)(parser->lex.pcur)[0] == 0xbb &&
     (unsigned char)(parser->lex.pcur)[1] == 0xbf) {
     parser->enc = rb_utf8_encoding();
     (parser->lex.pcur) += 2;
     (parser->lex.pbeg) = (parser->lex.pcur);
     return;
 }
 break;
      case (-1):
 return;
    }
    parser_pushback(parser, (c));
    parser->enc = rb_enc_get((parser->lex.lastline));
}
static VALUE
parse_rational(struct parser_params *parser, char *str, int len, int seen_point)
{
    VALUE v;
    char *point = &str[seen_point];
    size_t fraclen = len-seen_point-1;
    memmove(point, point+1, fraclen+1);
    v = rb_cstr_to_inum(str, 10, 0);
    return rb_rational_new(v, rb_int_positive_pow(10, fraclen));
}

static int
parse_numeric(struct parser_params *parser, int c)
{
    int is_float, seen_point, seen_e, nondigit;
    int suffix;

    is_float = seen_point = seen_e = nondigit = 0;
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 7566) : (enum lex_state_e)(EXPR_END)));
    parser_newtok(parser);
    if (c == '-' || c == '+') {
 parser_tokadd(parser, (c));
 c = parser_nextc(parser);
    }
    if (c == '0') {

 int start = (parser->tokidx);
 c = parser_nextc(parser);
 if (c == 'x' || c == 'X') {

     c = parser_nextc(parser);
     if (c != -1 && rb_isxdigit(c)) {
  do {
      if (c == '_') {
   if (nondigit) break;
   nondigit = c;
   continue;
      }
      if (!rb_isxdigit(c)) break;
      nondigit = 0;
      parser_tokadd(parser, (c));
  } while ((c = parser_nextc(parser)) != -1);
     }
     parser_pushback(parser, (c));
     ((parser->tokenbuf)[(parser->tokidx)]='\0');
     if ((parser->tokidx) == start) {
  do {parser_yyerror(parser, ("numeric literal without digits")); return 0;} while (0);
     }
     else if (nondigit) goto trailing_uc;
     suffix = parser_number_literal_suffix(parser, (3));
     return parser_set_integer_literal(parser, (rb_cstr_to_inum((parser->tokenbuf), 16, 0)), (suffix));
 }
 if (c == 'b' || c == 'B') {

     c = parser_nextc(parser);
     if (c == '0' || c == '1') {
  do {
      if (c == '_') {
   if (nondigit) break;
   nondigit = c;
   continue;
      }
      if (c != '0' && c != '1') break;
      nondigit = 0;
      parser_tokadd(parser, (c));
  } while ((c = parser_nextc(parser)) != -1);
     }
     parser_pushback(parser, (c));
     ((parser->tokenbuf)[(parser->tokidx)]='\0');
     if ((parser->tokidx) == start) {
  do {parser_yyerror(parser, ("numeric literal without digits")); return 0;} while (0);
     }
     else if (nondigit) goto trailing_uc;
     suffix = parser_number_literal_suffix(parser, (3));
     return parser_set_integer_literal(parser, (rb_cstr_to_inum((parser->tokenbuf), 2, 0)), (suffix));
 }
 if (c == 'd' || c == 'D') {

     c = parser_nextc(parser);
     if (c != -1 && rb_isdigit(c)) {
  do {
      if (c == '_') {
   if (nondigit) break;
   nondigit = c;
   continue;
      }
      if (!rb_isdigit(c)) break;
      nondigit = 0;
      parser_tokadd(parser, (c));
  } while ((c = parser_nextc(parser)) != -1);
     }
     parser_pushback(parser, (c));
     ((parser->tokenbuf)[(parser->tokidx)]='\0');
     if ((parser->tokidx) == start) {
  do {parser_yyerror(parser, ("numeric literal without digits")); return 0;} while (0);
     }
     else if (nondigit) goto trailing_uc;
     suffix = parser_number_literal_suffix(parser, (3));
     return parser_set_integer_literal(parser, (rb_cstr_to_inum((parser->tokenbuf), 10, 0)), (suffix));
 }
 if (c == '_') {

     goto octal_number;
 }
 if (c == 'o' || c == 'O') {

     c = parser_nextc(parser);
     if (c == -1 || c == '_' || !rb_isdigit(c)) {
  do {parser_yyerror(parser, ("numeric literal without digits")); return 0;} while (0);
     }
 }
 if (c >= '0' && c <= '7') {

   octal_number:
     do {
  if (c == '_') {
      if (nondigit) break;
      nondigit = c;
      continue;
  }
  if (c < '0' || c > '9') break;
  if (c > '7') goto invalid_octal;
  nondigit = 0;
  parser_tokadd(parser, (c));
     } while ((c = parser_nextc(parser)) != -1);
     if ((parser->tokidx) > start) {
  parser_pushback(parser, (c));
  ((parser->tokenbuf)[(parser->tokidx)]='\0');
  if (nondigit) goto trailing_uc;
  suffix = parser_number_literal_suffix(parser, (3));
  return parser_set_integer_literal(parser, (rb_cstr_to_inum((parser->tokenbuf), 8, 0)), (suffix));
     }
     if (nondigit) {
  parser_pushback(parser, (c));
  goto trailing_uc;
     }
 }
 if (c > '7' && c <= '9') {
   invalid_octal:
     parser_yyerror(parser, ("Invalid octal digit"));
 }
 else if (c == '.' || c == 'e' || c == 'E') {
     parser_tokadd(parser, ('0'));
 }
 else {
     parser_pushback(parser, (c));
     suffix = parser_number_literal_suffix(parser, (3));
     return parser_set_integer_literal(parser, ((((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)), (suffix));
 }
    }

    for (;;) {
 switch (c) {
   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
     nondigit = 0;
     parser_tokadd(parser, (c));
     break;

   case '.':
     if (nondigit) goto trailing_uc;
     if (seen_point || seen_e) {
  goto decode_num;
     }
     else {
  int c0 = parser_nextc(parser);
  if (c0 == -1 || !rb_isdigit(c0)) {
      parser_pushback(parser, (c0));
      goto decode_num;
  }
  c = c0;
     }
     seen_point = (parser->tokidx);
     parser_tokadd(parser, ('.'));
     parser_tokadd(parser, (c));
     is_float++;
     nondigit = 0;
     break;

   case 'e':
   case 'E':
     if (nondigit) {
  parser_pushback(parser, (c));
  c = nondigit;
  goto decode_num;
     }
     if (seen_e) {
  goto decode_num;
     }
     nondigit = c;
     c = parser_nextc(parser);
     if (c != '-' && c != '+' && !rb_isdigit(c)) {
  parser_pushback(parser, (c));
  nondigit = 0;
  goto decode_num;
     }
     parser_tokadd(parser, (nondigit));
     seen_e++;
     is_float++;
     parser_tokadd(parser, (c));
     nondigit = (c == '-' || c == '+') ? c : 0;
     break;

   case '_':
     if (nondigit) goto decode_num;
     nondigit = c;
     break;

   default:
     goto decode_num;
 }
 c = parser_nextc(parser);
    }

  decode_num:
    parser_pushback(parser, (c));
    if (nondigit) {
 char tmp[30];
      trailing_uc:
 (parser->lex.ptok = ((parser->lex.pcur) - 1));
 ruby_snprintf(tmp, sizeof(tmp), "trailing `%c' in number", nondigit);
 parser_yyerror(parser, (tmp));
    }
    ((parser->tokenbuf)[(parser->tokidx)]='\0');
    if (is_float) {
 int type = tFLOAT;
 VALUE v;

 suffix = parser_number_literal_suffix(parser, (seen_e ? (1<<1) : 3));
 if (suffix & (1<<0)) {
     type = tRATIONAL;
     v = parse_rational(parser, (parser->tokenbuf), (parser->tokidx), seen_point);
 }
 else {
     double d = ruby_strtod(((parser->tokenbuf)),(0));
     if ((*__errno_location ()) == 34) {
  rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("Float %s out of range"), ((parser->tokenbuf)));
  (*__errno_location ()) = 0;
     }
     v = rb_float_new_inline(d);
 }
 return parser_set_number_literal(parser, (v), (type), (suffix));
    }
    suffix = parser_number_literal_suffix(parser, (3));
    return parser_set_integer_literal(parser, (rb_cstr_to_inum((parser->tokenbuf), 10, 0)), (suffix));
}

static enum yytokentype
parse_qmark(struct parser_params *parser, int space_seen)
{
    rb_encoding *enc;
    register int c;
    VALUE lit;

    if ((((parser->lex.state)) & ((EXPR_END_ANY)))) {
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_VALUE), 7803) : (enum lex_state_e)(EXPR_VALUE)));
 return '?';
    }
    c = parser_nextc(parser);
    if (c == -1) {
 parser_compile_error(parser, "incomplete character syntax");
 return 0;
    }
    if ((((parser->enc)))->is_code_ctype((c),9,((parser->enc)))) {
 if (!(((parser->lex.state)) & ((EXPR_ARG_ANY)))) {
     int c2 = 0;
     switch (c) {
       case ' ':
  c2 = 's';
  break;
       case '\n':
  c2 = 'n';
  break;
       case '\t':
  c2 = 't';
  break;
       case '\v':
  c2 = 'v';
  break;
       case '\r':
  c2 = 'r';
  break;
       case '\f':
  c2 = 'f';
  break;
     }
     if (c2) {
  rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("invalid character syntax; use ?\\%c"), (c2));
     }
 }
      ternary:
 parser_pushback(parser, (c));
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_VALUE), 7840) : (enum lex_state_e)(EXPR_VALUE)));
 return '?';
    }
    parser_newtok(parser);
    enc = (parser->enc);
    if (!rb_isascii(*((parser->lex.pcur)-1))) {
 if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
    }
    else if (((((parser->enc)))->is_code_ctype((c),13,((parser->enc))) || c == '_') &&
      (parser->lex.pcur) < (parser->lex.pend) && (((((parser->enc))))->is_code_ctype(((unsigned char)(*((parser->lex.pcur)))),13,(((parser->enc)))) || (*((parser->lex.pcur))) == '_' || !rb_isascii(*((parser->lex.pcur))))) {
 if (space_seen) {
     const char *start = (parser->lex.pcur) - 1, *p = start;
     do {
  int n = parser_precise_mbclen(parser, p);
  if (n < 0) return -1;
  p += n;
     } while (p < (parser->lex.pend) && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(p))),13,(((parser->enc)))) || (*(p)) == '_' || !rb_isascii(*(p))));
     rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`?' just followed by `%.*s' is interpreted as a conditional operator, put a space after `?'"), ((int)(p - start)), (start));


 }
 goto ternary;
    }
    else if (c == '\\') {
 if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('u')) == (unsigned char)(parser->lex.pcur)[0])) {
     parser_nextc(parser);
     enc = rb_utf8_encoding();
     if (!parser_tokadd_utf8(parser, &enc, -1, 0, 0))
  return 0;
 }
 else if (!((parser->lex.pcur) >= (parser->lex.pend)) && !(c = *(parser->lex.pcur), rb_isascii(c))) {
     parser_nextc(parser);
     if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
 }
 else {
     c = parser_read_escape(parser, (0), (&enc));
     parser_tokadd(parser, (c));
 }
    }
    else {
 parser_tokadd(parser, (c));
    }
    ((parser->tokenbuf)[(parser->tokidx)]='\0');
    add_mark_object_gen(parser, (lit = parser_str_new(((parser->tokenbuf)),((parser->tokidx)),(enc),(0),(parser->enc))));
    ((*parser->lval).node = node_newnode(parser, ((NODE_STR)), ((VALUE)(lit)), ((VALUE)(0)), ((VALUE)(0))));
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 7885) : (enum lex_state_e)(EXPR_END)));
    return tCHAR;
}

static enum yytokentype
parse_percent(struct parser_params *parser, const int space_seen, const enum lex_state_e last_state)
{
    register int c;

    if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
 int term;
 int paren;

 c = parser_nextc(parser);
      quotation:
 if (c == -1 || !rb_isalnum(c)) {
     term = c;
     c = 'Q';
 }
 else {
     term = parser_nextc(parser);
     if ((((parser->enc)))->is_code_ctype((term),13,((parser->enc))) || !rb_isascii(*((parser->lex.pcur)-1))) {
  parser_yyerror(parser, ("unknown type of %string"));
  return 0;
     }
 }
 if (c == -1 || term == -1) {
     parser_compile_error(parser, "unterminated quoted string meets end of file");
     return 0;
 }
 paren = term;
 if (term == '(') term = ')';
 else if (term == '[') term = ']';
 else if (term == '{') term = '}';
 else if (term == '<') term = '>';
 else paren = 0;

 switch (c) {
   case 'Q':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_dquote), (VALUE)(paren), (VALUE)(term), 0);
     return tSTRING_BEG;

   case 'q':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_squote), (VALUE)(paren), (VALUE)(term), 0);
     return tSTRING_BEG;

   case 'W':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_dword), (VALUE)(paren), (VALUE)(term), 0);
     return tWORDS_BEG;

   case 'w':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_sword), (VALUE)(paren), (VALUE)(term), 0);
     return tQWORDS_BEG;

   case 'I':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_dword), (VALUE)(paren), (VALUE)(term), 0);
     return tSYMBOLS_BEG;

   case 'i':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_sword), (VALUE)(paren), (VALUE)(term), 0);
     return tQSYMBOLS_BEG;

   case 'x':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_xquote), (VALUE)(paren), (VALUE)(term), 0);
     return tXSTRING_BEG;

   case 'r':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_regexp), (VALUE)(paren), (VALUE)(term), 0);
     return tREGEXP_BEG;

   case 's':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_ssym), (VALUE)(paren), (VALUE)(term), 0);
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_FNAME|EXPR_FITEM), 7957) : (enum lex_state_e)(EXPR_FNAME|EXPR_FITEM)));
     return tSYMBEG;

   default:
     parser_yyerror(parser, ("unknown type of %string"));
     return 0;
 }
    }
    if ((c = parser_nextc(parser)) == '=') {
 ((*parser->lval).id = ('%'));
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 7967) : (enum lex_state_e)(EXPR_BEG)));
 return tOP_ASGN;
    }
    if (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c)) || ((((parser->lex.state)) & ((EXPR_FITEM))) && c == 's')) {
 goto quotation;
    }
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 7973) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
    parser_pushback(parser, (c));
    return ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`%%' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like string literal"))), 0)), (enum yytokentype)('%'));
}

static int
tokadd_ident(struct parser_params *parser, int c)
{
    do {
 if (parser_tokadd_mbchar(parser, (c)) == -1) return -1;
 c = parser_nextc(parser);
    } while ((!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1))))));
    parser_pushback(parser, (c));
    return 0;
}

static ID
tokenize_ident(struct parser_params *parser, const enum lex_state_e last_state)
{
    ID ident = rb_intern3((parser->tokenbuf),(parser->tokidx),(parser->enc));

    ((*parser->lval).id = (ident));

    return ident;
}

static int
parse_numvar(struct parser_params *parser)
{
    size_t len;
    int overflow;
    unsigned long n = ruby_scan_digits((parser->tokenbuf)+1, (parser->tokidx)-1, 10, &len, &overflow);
    const unsigned long nth_ref_max =
 (((9223372036854775807L>>1) < 2147483647) ? (9223372036854775807L>>1) : 2147483647) >> 1;



    if (overflow || n > nth_ref_max) {

 rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`%s' is too big for a number variable, always nil"), ((parser->tokenbuf)));
 return 0;
    }
    else {
 return (int)n;
    }
}

static enum yytokentype
parse_gvar(struct parser_params *parser, const enum lex_state_e last_state)
{
    register int c;

    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 8025) : (enum lex_state_e)(EXPR_END)));
    parser_newtok(parser);
    c = parser_nextc(parser);
    switch (c) {
      case '_':
 c = parser_nextc(parser);
 if ((!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
     parser_tokadd(parser, ('$'));
     parser_tokadd(parser, ('_'));
     break;
 }
 parser_pushback(parser, (c));
 c = '_';

      case '~':
      case '*':
      case '$':
      case '?':
      case '!':
      case '@':
      case '/':
      case '\\':
      case ';':
      case ',':
      case '.':
      case '=':
      case ':':
      case '<':
      case '>':
      case '\"':
 parser_tokadd(parser, ('$'));
 parser_tokadd(parser, (c));
 goto gvar;

      case '-':
 parser_tokadd(parser, ('$'));
 parser_tokadd(parser, (c));
 c = parser_nextc(parser);
 if ((!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
     if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
 }
 else {
     parser_pushback(parser, (c));
     parser_pushback(parser, ('-'));
     return '$';
 }
      gvar:
 ((*parser->lval).id = (rb_intern3((parser->tokenbuf),(parser->tokidx),(parser->enc))));
 return tGVAR;

      case '&':
      case '`':
      case '\'':
      case '+':
 if (((last_state) & (EXPR_FNAME))) {
     parser_tokadd(parser, ('$'));
     parser_tokadd(parser, (c));
     goto gvar;
 }
 ((*parser->lval).node = (node_newnode(parser, ((NODE_BACK_REF)), ((VALUE)(0)), ((VALUE)(c)), ((VALUE)(0)))));
 return tBACK_REF;

      case '1': case '2': case '3':
      case '4': case '5': case '6':
      case '7': case '8': case '9':
 parser_tokadd(parser, ('$'));
 do {
     parser_tokadd(parser, (c));
     c = parser_nextc(parser);
 } while (c != -1 && rb_isdigit(c));
 parser_pushback(parser, (c));
 if (((last_state) & (EXPR_FNAME))) goto gvar;
 ((parser->tokenbuf)[(parser->tokidx)]='\0');
 ((*parser->lval).node = (node_newnode(parser, ((NODE_NTH_REF)), ((VALUE)(0)), ((VALUE)(parse_numvar(parser))), ((VALUE)(0)))));
 return tNTH_REF;

      default:
 if (!(!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
     if (c == -1 || rb_isspace(c)) {
  parser_compile_error(parser, "`$' without identifiers is not allowed as a global variable name");
     }
     else {
  parser_pushback(parser, (c));
  parser_compile_error(parser, "`$%c' is not allowed as a global variable name", c);
     }
     return 0;
 }
      case '0':
 parser_tokadd(parser, ('$'));
    }

    if (tokadd_ident(parser, c)) return 0;
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 8117) : (enum lex_state_e)(EXPR_END)));
    tokenize_ident(parser, last_state);
    return tGVAR;
}

static enum yytokentype
parse_atmark(struct parser_params *parser, const enum lex_state_e last_state)
{
    enum yytokentype result = tIVAR;
    register int c = parser_nextc(parser);

    parser_newtok(parser);
    parser_tokadd(parser, ('@'));
    if (c == '@') {
 result = tCVAR;
 parser_tokadd(parser, ('@'));
 c = parser_nextc(parser);
    }
    if (c == -1 || rb_isspace(c)) {
 if (result == tIVAR) {
     parser_compile_error(parser, "`@' without identifiers is not allowed as an instance variable name");
 }
 else {
     parser_compile_error(parser, "`@@' without identifiers is not allowed as a class variable name");
 }
 return 0;
    }
    else if (rb_isdigit(c) || !(!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
 parser_pushback(parser, (c));
 if (result == tIVAR) {
     parser_compile_error(parser, "`@%c' is not allowed as an instance variable name", c);
 }
 else {
     parser_compile_error(parser, "`@@%c' is not allowed as a class variable name", c);
 }
 return 0;
    }

    if (tokadd_ident(parser, c)) return 0;
    ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 8156) : (enum lex_state_e)(EXPR_END)));
    tokenize_ident(parser, last_state);
    return result;
}

static enum yytokentype
parse_ident(struct parser_params *parser, int c, int cmd_state)
{
    enum yytokentype result;
    int mb = RUBY_ENC_CODERANGE_7BIT;
    const enum lex_state_e last_state = (parser->lex.state);
    ID ident;

    do {
 if (!rb_isascii(c)) mb = RUBY_ENC_CODERANGE_UNKNOWN;
 if (parser_tokadd_mbchar(parser, (c)) == -1) return 0;
 c = parser_nextc(parser);
    } while ((!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1))))));
    if ((c == '!' || c == '?') && !((parser->lex.pcur)+(0) < (parser->lex.pend) && (('=')) == (unsigned char)(parser->lex.pcur)[0])) {
 result = tFID;
 parser_tokadd(parser, (c));
    }
    else if (c == '=' && (((parser->lex.state)) & ((EXPR_FNAME))) &&
      (!((parser->lex.pcur)+(0) < (parser->lex.pend) && (('~')) == (unsigned char)(parser->lex.pcur)[0]) && !((parser->lex.pcur)+(0) < (parser->lex.pend) && (('>')) == (unsigned char)(parser->lex.pcur)[0]) && (!((parser->lex.pcur)+(0) < (parser->lex.pend) && (('=')) == (unsigned char)(parser->lex.pcur)[0]) || (((parser->lex.pcur)+(1) < (parser->lex.pend) && ('>') == (unsigned char)(parser->lex.pcur)[1]))))) {
 result = tIDENTIFIER;
 parser_tokadd(parser, (c));
    }
    else {
 result = tCONSTANT;
 parser_pushback(parser, (c));
    }
    ((parser->tokenbuf)[(parser->tokidx)]='\0');

    if (( ((((parser->lex.state)) & ((EXPR_LABEL|EXPR_ENDFN))) && !cmd_state) || (((parser->lex.state)) & ((EXPR_ARG_ANY))))) {
 if ((((parser->lex.pcur)+((0)) < (parser->lex.pend) && (':') == (unsigned char)(parser->lex.pcur)[(0)]) && !((parser->lex.pcur)+((0)+1) < (parser->lex.pend) && (':') == (unsigned char)(parser->lex.pcur)[(0)+1]))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG|EXPR_LABELED), 8191) : (enum lex_state_e)(EXPR_ARG|EXPR_LABELED)));
     parser_nextc(parser);
     ((*parser->lval).id = (rb_intern3((parser->tokenbuf),(parser->tokidx),(parser->enc))));
     return tLABEL;
 }
    }
    if (mb == RUBY_ENC_CODERANGE_7BIT && !(((parser->lex.state)) & ((EXPR_DOT)))) {
 const struct kwtable *kw;


 kw = reserved_word((parser->tokenbuf), (parser->tokidx));
 if (kw) {
     enum lex_state_e state = (parser->lex.state);
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (kw->state), 8204) : (enum lex_state_e)(kw->state)));
     if (((state) & (EXPR_FNAME))) {
  ((*parser->lval).id = (rb_intern2((parser->tokenbuf), (parser->tokidx))));
  return kw->id[0];
     }
     if ((((parser->lex.state)) & ((EXPR_BEG)))) {
  (parser->command_start) = 1;
     }
     if (kw->id[0] == keyword_do) {
  if (((parser->lex.lpar_beg) && (parser->lex.lpar_beg) == (parser->lex.paren_nest))) {
      (parser->lex.lpar_beg) = 0;
      --(parser->lex.paren_nest);
      return keyword_do_LAMBDA;
  }
  if ((((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack", 8218) : (void)0), ((parser->cond_stack))&1)) return keyword_do_cond;
  if ((((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack", 8219) : (void)0), ((parser->cmdarg_stack))&1) && !((state) & (EXPR_CMDARG)))
      return keyword_do_block;
  if (((state) & ((EXPR_BEG | EXPR_ENDARG))))
      return keyword_do_block;
  return keyword_do;
     }
     if (((state) & ((EXPR_BEG | EXPR_LABELED))))
  return kw->id[0];
     else {
  if (kw->id[0] != kw->id[1])
      ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG | EXPR_LABEL), 8229) : (enum lex_state_e)(EXPR_BEG | EXPR_LABEL)));
  return kw->id[1];
     }
 }
    }

    if ((((parser->lex.state)) & ((EXPR_BEG_ANY | EXPR_ARG_ANY | EXPR_DOT)))) {
 if (cmd_state) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_CMDARG), 8237) : (enum lex_state_e)(EXPR_CMDARG)));
 }
 else {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8240) : (enum lex_state_e)(EXPR_ARG)));
 }
    }
    else if ((parser->lex.state) == EXPR_FNAME) {
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 8244) : (enum lex_state_e)(EXPR_ENDFN)));
    }
    else {
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 8247) : (enum lex_state_e)(EXPR_END)));
    }

    ident = tokenize_ident(parser, last_state);
    if (result == tCONSTANT && (id_type(ident)==RUBY_ID_LOCAL)) result = tIDENTIFIER;
    if (!((last_state) & (EXPR_DOT|EXPR_FNAME)) &&
 (result == tIDENTIFIER) &&
 lvar_defined_gen(parser, (ident))) {
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END|EXPR_LABEL), 8255) : (enum lex_state_e)(EXPR_END|EXPR_LABEL)));
    }
    return result;
}

static enum yytokentype
parser_yylex(struct parser_params *parser)
{
    register int c;
    int space_seen = 0;
    int cmd_state;
    int label;
    enum lex_state_e last_state;
    int fallthru = 0;
    int token_seen = parser->token_seen;

    if ((parser->lex.strterm)) {
 if ((parser->lex.strterm)->flags & ((VALUE)RUBY_FL_USER4)) {
     return parser_here_document(parser,(&(parser->lex.strterm)->u.heredoc));
 }
 else {
     ((parser)->lex.ptok = (parser)->lex.pcur);
     return parser_parse_string(parser,(&(parser->lex.strterm)->u.literal));
 }
    }
    cmd_state = (parser->command_start);
    (parser->command_start) = 0;
    parser->token_seen = 1;
  retry:
    last_state = (parser->lex.state);

    ((parser)->lex.ptok = (parser)->lex.pcur);

    switch (c = parser_nextc(parser)) {
      case '\0':
      case '\004':
      case '\032':
      case -1:
 return 0;


      case ' ': case '\t': case '\f': case '\r':
      case '\13':
 space_seen = 1;
 goto retry;

      case '#':
 parser->token_seen = token_seen;

 if (!parser_magic_comment(parser, (parser->lex.pcur), (parser->lex.pend) - (parser->lex.pcur))) {
     if (comment_at_top(parser)) {
  set_file_encoding(parser, (parser->lex.pcur), (parser->lex.pend));
     }
 }
 (parser->lex.pcur) = (parser->lex.pend);
        ((void)0);
        fallthru = 1;

      case '\n':
 parser->token_seen = token_seen;
 c = ((((parser->lex.state)) & ((EXPR_BEG|EXPR_CLASS|EXPR_FNAME|EXPR_DOT))) &&
      !(((parser->lex.state)) & ((EXPR_LABELED))));
 if (c || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED)))) {
            if (!fallthru) {
                ((void)0);
            }
            fallthru = 0;
     if (!c && parser->in_kwarg) {
  goto normal_newline;
     }
     goto retry;
 }
 while (1) {
     switch (c = parser_nextc(parser)) {
       case ' ': case '\t': case '\f': case '\r':
       case '\13':
  space_seen = 1;
  break;
       case '&':
       case '.': {
  ((void)0);
  if (((parser->lex.pcur)+(0) < (parser->lex.pend) && (('.')) == (unsigned char)(parser->lex.pcur)[0]) == (c == '&')) {
      parser_pushback(parser, (c));
      ((void)0);
      goto retry;
  }
       }
       default:
  --(parser->ruby_sourceline);
  (parser->lex.nextline) = (parser->lex.lastline);
       case -1:

  if ((parser->lex.prevline) && !parser->eofp) (parser->lex.lastline) = (parser->lex.prevline);
  (parser->lex.pbeg) = (!(((struct RBasic*)((parser->lex.lastline)))->flags & RSTRING_NOEMBED) ? ((struct RString*)((parser->lex.lastline)))->as.ary : ((struct RString*)((parser->lex.lastline)))->as.heap.ptr);
  (parser->lex.pend) = (parser->lex.pcur) = (parser->lex.pbeg) + (!(((struct RBasic*)((parser->lex.lastline)))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((parser->lex.lastline)))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((parser->lex.lastline)))->as.heap.len);
  parser_pushback(parser, (1));
  parser->lex.ptok = (parser->lex.pcur);






  goto normal_newline;
     }
 }
      normal_newline:
 (parser->command_start) = 1;
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8377) : (enum lex_state_e)(EXPR_BEG)));
 return '\n';

      case '*':
 if ((c = parser_nextc(parser)) == '*') {
     if ((c = parser_nextc(parser)) == '=') {
                ((*parser->lval).id = (tPOW));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8384) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     if (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c))) {
  rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`**' interpreted as argument prefix"));
  c = tDSTAR;
     }
     else if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
  c = tDSTAR;
     }
     else {
  c = ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`**' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like argument prefix"))), 0)), (enum yytokentype)((enum ruby_method_ids)tPOW));
     }
 }
 else {
     if (c == '=') {
                ((*parser->lval).id = ('*'));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8402) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     if (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c))) {
  rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`*' interpreted as argument prefix"));
  c = tSTAR;
     }
     else if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
  c = tSTAR;
     }
     else {
  c = ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`*' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like argument prefix"))), 0)), (enum yytokentype)('*'));
     }
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8417) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 return c;

      case '!':
 c = parser_nextc(parser);
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8423) : (enum lex_state_e)(EXPR_ARG)));
     if (c == '@') {
  return '!';
     }
 }
 else {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8429) : (enum lex_state_e)(EXPR_BEG)));
 }
 if (c == '=') {
     return tNEQ;
 }
 if (c == '~') {
     return tNMATCH;
 }
 parser_pushback(parser, (c));
 return '!';

      case '=':
 if (((parser->lex.pcur) == (parser->lex.pbeg) + 1)) {

     if (strncmp((parser->lex.pcur), "begin", 5) == 0 && rb_isspace((parser->lex.pcur)[5])) {
  int first_p = 1;

  ((parser)->lex.pcur = (parser)->lex.pend);
  ((void)0);
  for (;;) {
      ((parser)->lex.pcur = (parser)->lex.pend);
      if (!first_p) {
   ((void)0);
      }
      first_p = 0;
      c = parser_nextc(parser);
      if (c == -1) {
   parser_compile_error(parser, "embedded document meets end of file");
   return 0;
      }
      if (c != '=') continue;
      if (c == '=' && strncmp((parser->lex.pcur), "end", 3) == 0 &&
   ((parser->lex.pcur) + 3 == (parser->lex.pend) || rb_isspace((parser->lex.pcur)[3]))) {
   break;
      }
  }
  ((parser)->lex.pcur = (parser)->lex.pend);
  ((void)0);
  goto retry;
     }
 }

 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8471) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 if ((c = parser_nextc(parser)) == '=') {
     if ((c = parser_nextc(parser)) == '=') {
  return tEQQ;
     }
     parser_pushback(parser, (c));
     return tEQ;
 }
 if (c == '~') {
     return tMATCH;
 }
 else if (c == '>') {
     return tASSOC;
 }
 parser_pushback(parser, (c));
 return '=';

      case '<':
 last_state = (parser->lex.state);
 c = parser_nextc(parser);
 if (c == '<' &&
     !(((parser->lex.state)) & ((EXPR_DOT | EXPR_CLASS))) &&
     !(((parser->lex.state)) & ((EXPR_END_ANY))) &&
     (!(((parser->lex.state)) & ((EXPR_ARG_ANY))) || (((parser->lex.state)) & ((EXPR_LABELED))) || space_seen)) {
     int token = parser_heredoc_identifier(parser);
     if (token) return token;
 }
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8499) : (enum lex_state_e)(EXPR_ARG)));
 }
 else {
     if ((((parser->lex.state)) & ((EXPR_CLASS))))
  (parser->command_start) = 1;
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8504) : (enum lex_state_e)(EXPR_BEG)));
 }
 if (c == '=') {
     if ((c = parser_nextc(parser)) == '>') {
  return tCMP;
     }
     parser_pushback(parser, (c));
     return tLEQ;
 }
 if (c == '<') {
     if ((c = parser_nextc(parser)) == '=') {
                ((*parser->lval).id = (tLSHFT));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8516) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     return ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`<<' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like here document"))), 0)), (enum yytokentype)((enum ruby_method_ids)tLSHFT));
 }
 parser_pushback(parser, (c));
 return '<';

      case '>':
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8526) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 if ((c = parser_nextc(parser)) == '=') {
     return tGEQ;
 }
 if (c == '>') {
     if ((c = parser_nextc(parser)) == '=') {
                ((*parser->lval).id = (tRSHFT));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8533) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     return tRSHFT;
 }
 parser_pushback(parser, (c));
 return '>';

      case '"':
 label = (( ((((parser->lex.state)) & ((EXPR_LABEL|EXPR_ENDFN))) && !cmd_state) || (((parser->lex.state)) & ((EXPR_ARG_ANY)))) ? str_label : 0);
 (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_dquote | label), (VALUE)(0), (VALUE)('"'), 0);
 return tSTRING_BEG;

      case '`':
 if ((((parser->lex.state)) & ((EXPR_FNAME)))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 8549) : (enum lex_state_e)(EXPR_ENDFN)));
     return c;
 }
 if ((((parser->lex.state)) & ((EXPR_DOT)))) {
     if (cmd_state)
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_CMDARG), 8554) : (enum lex_state_e)(EXPR_CMDARG)));
     else
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8556) : (enum lex_state_e)(EXPR_ARG)));
     return c;
 }
 (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_xquote), (VALUE)(0), (VALUE)('`'), 0);
 return tXSTRING_BEG;

      case '\'':
 label = (( ((((parser->lex.state)) & ((EXPR_LABEL|EXPR_ENDFN))) && !cmd_state) || (((parser->lex.state)) & ((EXPR_ARG_ANY)))) ? str_label : 0);
 (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_squote | label), (VALUE)(0), (VALUE)('\''), 0);
 return tSTRING_BEG;

      case '?':
 return parse_qmark(parser, space_seen);

      case '&':
 if ((c = parser_nextc(parser)) == '&') {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8572) : (enum lex_state_e)(EXPR_BEG)));
     if ((c = parser_nextc(parser)) == '=') {
                ((*parser->lval).id = (tANDOP));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8575) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     return tANDOP;
 }
 else if (c == '=') {
            ((*parser->lval).id = ('&'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8583) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 else if (c == '.') {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_DOT), 8587) : (enum lex_state_e)(EXPR_DOT)));
     return tANDDOT;
 }
 parser_pushback(parser, (c));
 if (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c))) {
     if ((c != ':') ||
  (c = ((parser->lex.pcur)+(1) < (parser->lex.pend) ? (unsigned char)(parser->lex.pcur)[1] : -1)) == -1 ||
  !(c == '\'' || c == '"' ||
    (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)+1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)+1))) == '_' || !rb_isascii(*(((parser->lex.pcur)+1)))))) {
  rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`&' interpreted as argument prefix"));
     }
     c = tAMPER;
 }
 else if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
     c = tAMPER;
 }
 else {
     c = ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`&' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like argument prefix"))), 0)), (enum yytokentype)('&'));
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8606) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 return c;

      case '|':
 if ((c = parser_nextc(parser)) == '|') {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8611) : (enum lex_state_e)(EXPR_BEG)));
     if ((c = parser_nextc(parser)) == '=') {
                ((*parser->lval).id = (tOROP));
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8614) : (enum lex_state_e)(EXPR_BEG)));
  return tOP_ASGN;
     }
     parser_pushback(parser, (c));
     return tOROP;
 }
 if (c == '=') {
            ((*parser->lval).id = ('|'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8622) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG|EXPR_LABEL), 8625) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG|EXPR_LABEL)));
 parser_pushback(parser, (c));
 return '|';

      case '+':
 c = parser_nextc(parser);
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8632) : (enum lex_state_e)(EXPR_ARG)));
     if (c == '@') {
  return tUPLUS;
     }
     parser_pushback(parser, (c));
     return '+';
 }
 if (c == '=') {
            ((*parser->lval).id = ('+'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8641) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED)))) || (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c)) && (arg_ambiguous_gen(parser, ('+')), 1))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8645) : (enum lex_state_e)(EXPR_BEG)));
     parser_pushback(parser, (c));
     if (c != -1 && rb_isdigit(c)) {
  return parse_numeric(parser, '+');
     }
     return tUPLUS;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8652) : (enum lex_state_e)(EXPR_BEG)));
 parser_pushback(parser, (c));
 return ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`+' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like unary operator"))), 0)), (enum yytokentype)('+'));

      case '-':
 c = parser_nextc(parser);
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8659) : (enum lex_state_e)(EXPR_ARG)));
     if (c == '@') {
  return tUMINUS;
     }
     parser_pushback(parser, (c));
     return '-';
 }
 if (c == '=') {
            ((*parser->lval).id = ('-'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8668) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 if (c == '>') {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 8672) : (enum lex_state_e)(EXPR_ENDFN)));
     token_info_push_gen(parser, ("->"), (sizeof("->") - 1));
     return tLAMBDA;
 }
 if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED)))) || (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c)) && (arg_ambiguous_gen(parser, ('-')), 1))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8677) : (enum lex_state_e)(EXPR_BEG)));
     parser_pushback(parser, (c));
     if (c != -1 && rb_isdigit(c)) {
  return tUMINUS_NUM;
     }
     return tUMINUS;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8684) : (enum lex_state_e)(EXPR_BEG)));
 parser_pushback(parser, (c));
 return ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`-' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like unary operator"))), 0)), (enum yytokentype)('-'));

      case '.':
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8689) : (enum lex_state_e)(EXPR_BEG)));
 if ((c = parser_nextc(parser)) == '.') {
     if ((c = parser_nextc(parser)) == '.') {
  return tDOT3;
     }
     parser_pushback(parser, (c));
     return tDOT2;
 }
 parser_pushback(parser, (c));
 if (c != -1 && rb_isdigit(c)) {
     parser_yyerror(parser, ("no .<digit> floating literal anymore; put 0 before dot"));
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_DOT), 8701) : (enum lex_state_e)(EXPR_DOT)));
 return '.';

      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9':
 return parse_numeric(parser, c);

      case ')':
      case ']':
 (parser->lex.paren_nest)--;
      case '}':
 ((((parser->cond_stack)) = (((parser->cond_stack)) >> 1) | (((parser->cond_stack)) & 1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(lexpop)", 8712) : (void)0));
 ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack)) >> 1) | (((parser->cmdarg_stack)) & 1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(lexpop)", 8713) : (void)0));
 if (c == ')')
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ENDFN), 8715) : (enum lex_state_e)(EXPR_ENDFN)));
 else
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_END), 8717) : (enum lex_state_e)(EXPR_END)));
 if (c == '}') {
     if (!(parser->lex.brace_nest)--) c = tSTRING_DEND;
 }
 return c;

      case ':':
 c = parser_nextc(parser);
 if (c == ':') {
     if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED)))) || (((parser->lex.state)) & ((EXPR_CLASS))) || ((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(-1))) {
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8727) : (enum lex_state_e)(EXPR_BEG)));
  return tCOLON3;
     }
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_DOT), 8730) : (enum lex_state_e)(EXPR_DOT)));
     return tCOLON2;
 }
 if ((((parser->lex.state)) & ((EXPR_END_ANY))) || rb_isspace(c) || c == '#') {
     parser_pushback(parser, (c));
     c = ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`:' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like symbol literal"))), 0)), (enum yytokentype)(':'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8736) : (enum lex_state_e)(EXPR_BEG)));
     return c;
 }
 switch (c) {
   case '\'':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_ssym), (VALUE)(0), (VALUE)(c), 0);
     break;
   case '"':
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_dsym), (VALUE)(0), (VALUE)(c), 0);
     break;
   default:
     parser_pushback(parser, (c));
     break;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_FNAME), 8750) : (enum lex_state_e)(EXPR_FNAME)));
 return tSYMBEG;

      case '/':
 if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_regexp), (VALUE)(0), (VALUE)('/'), 0);
     return tREGEXP_BEG;
 }
 if ((c = parser_nextc(parser)) == '=') {
            ((*parser->lval).id = ('/'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8760) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 parser_pushback(parser, (c));
 if (((((parser->lex.state)) & ((EXPR_ARG_ANY))) && space_seen && !rb_isspace(c))) {
     (void)(arg_ambiguous_gen(parser, ('/')), 1);
     (parser->lex.strterm) = (rb_strterm_t*)rb_imemo_new(imemo_parser_strterm, (VALUE)(str_regexp), (VALUE)(0), (VALUE)('/'), 0);
     return tREGEXP_BEG;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8769) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 return ((void) (!((last_state) & (EXPR_CLASS|EXPR_DOT|EXPR_FNAME|EXPR_ENDFN)) && space_seen && !rb_isspace(c) && (( rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("`/' after local variable or literal is interpreted as binary operator")), rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("even though it seems like regexp literal"))), 0)), (enum yytokentype)('/'));

      case '^':
 if ((c = parser_nextc(parser)) == '=') {
            ((*parser->lval).id = ('^'));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8775) : (enum lex_state_e)(EXPR_BEG)));
     return tOP_ASGN;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG), 8778) : (enum lex_state_e)((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT))) ? EXPR_ARG : EXPR_BEG)));
 parser_pushback(parser, (c));
 return '^';

      case ';':
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8783) : (enum lex_state_e)(EXPR_BEG)));
 (parser->command_start) = 1;
 return ';';

      case ',':
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG|EXPR_LABEL), 8788) : (enum lex_state_e)(EXPR_BEG|EXPR_LABEL)));
 return ',';

      case '~':
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     if ((c = parser_nextc(parser)) != '@') {
  parser_pushback(parser, (c));
     }
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8796) : (enum lex_state_e)(EXPR_ARG)));
 }
 else {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8799) : (enum lex_state_e)(EXPR_BEG)));
 }
 return '~';

      case '(':
 if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
     c = tLPAREN;
 }
 else if (!space_seen) {

 }
 else if ((((parser->lex.state)) & ((EXPR_ARG_ANY))) || ((((parser->lex.state)) & ((EXPR_END|EXPR_LABEL))) == ((EXPR_END|EXPR_LABEL)))) {
     c = tLPAREN_ARG;
 }
 else if ((((parser->lex.state)) & ((EXPR_ENDFN))) && !((parser->lex.lpar_beg) && (parser->lex.lpar_beg) == (parser->lex.paren_nest))) {
     rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("parentheses after method name is interpreted as an argument list, not a decomposed argument"));

 }
 (parser->lex.paren_nest)++;
 ((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 8818) : (void)0));
 ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(push)", 8819) : (void)0));
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG|EXPR_LABEL), 8820) : (enum lex_state_e)(EXPR_BEG|EXPR_LABEL)));
 return c;

      case '[':
 (parser->lex.paren_nest)++;
 if ((((parser->lex.state)) & ((EXPR_FNAME | EXPR_DOT)))) {
     if ((c = parser_nextc(parser)) == ']') {
  ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG), 8827) : (enum lex_state_e)(EXPR_ARG)));
  if ((c = parser_nextc(parser)) == '=') {
      return tASET;
  }
  parser_pushback(parser, (c));
  return tAREF;
     }
     parser_pushback(parser, (c));
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_ARG|EXPR_LABEL), 8835) : (enum lex_state_e)(EXPR_ARG|EXPR_LABEL)));
     return '[';
 }
 else if (((((parser->lex.state)) & ((EXPR_BEG_ANY))) || ((((parser->lex.state)) & ((EXPR_ARG|EXPR_LABELED))) == ((EXPR_ARG|EXPR_LABELED))))) {
     c = tLBRACK;
 }
 else if ((((parser->lex.state)) & ((EXPR_ARG_ANY))) && (space_seen || (((parser->lex.state)) & ((EXPR_LABELED))))) {
     c = tLBRACK;
 }
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG|EXPR_LABEL), 8844) : (enum lex_state_e)(EXPR_BEG|EXPR_LABEL)));
 ((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 8845) : (void)0));
 ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(push)", 8846) : (void)0));
 return c;

      case '{':
 ++(parser->lex.brace_nest);
 if (((parser->lex.lpar_beg) && (parser->lex.lpar_beg) == (parser->lex.paren_nest))) {
     ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (EXPR_BEG), 8852) : (enum lex_state_e)(EXPR_BEG)));
     (parser->lex.lpar_beg) = 0;
     --(parser->lex.paren_nest);
     ((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 8855) : (void)0));
     ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(push)", 8856) : (void)0));
     return tLAMBEG;
 }
 if ((((parser->lex.state)) & ((EXPR_LABELED))))
     c = tLBRACE;
 else if ((((parser->lex.state)) & ((EXPR_ARG_ANY | EXPR_END | EXPR_ENDFN))))
     c = '{';
 else if ((((parser->lex.state)) & ((EXPR_ENDARG))))
     c = tLBRACE_ARG;
 else
     c = tLBRACE;
 ((((parser->cond_stack)) = (((parser->cond_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cond_stack), "cond_stack(push)", 8867) : (void)0));
 ((((parser->cmdarg_stack)) = (((parser->cmdarg_stack))<<1)|(((0))&1)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(push)", 8868) : (void)0));
 ((parser->lex.state) = ((parser->yydebug) ? rb_parser_trace_lex_state(parser, (parser->lex.state), (c == tLBRACE_ARG ? EXPR_BEG : EXPR_BEG|EXPR_LABEL), 8869) : (enum lex_state_e)(c == tLBRACE_ARG ? EXPR_BEG : EXPR_BEG|EXPR_LABEL)));
 if (c != tLBRACE) (parser->command_start) = 1;
 return c;

      case '\\':
 c = parser_nextc(parser);
 if (c == '\n') {
     space_seen = 1;
     ((void)0);
     goto retry;
 }
 parser_pushback(parser, (c));
 return '\\';

      case '%':
 return parse_percent(parser, space_seen, last_state);

      case '$':
 return parse_gvar(parser, last_state);

      case '@':
 return parse_atmark(parser, last_state);

      case '_':
 if (((parser->lex.pcur) == (parser->lex.pbeg) + 1) && parser_whole_match_p(parser,("__END__"),(7),(0))) {
     (parser->ruby__end__seen) = 1;
     parser->eofp = 1;

     return -1;





 }
 parser_newtok(parser);
 break;

      default:
 if (!(!parser->eofp && (((((parser->enc))))->is_code_ctype(((unsigned char)(*(((parser->lex.pcur)-1)))),13,(((parser->enc)))) || (*(((parser->lex.pcur)-1))) == '_' || !rb_isascii(*(((parser->lex.pcur)-1)))))) {
     parser_compile_error(parser, "Invalid char `\\x%02X' in expression", c);
     goto retry;
 }

 parser_newtok(parser);
 break;
    }

    return parse_ident(parser, c, cmd_state);
}

static enum yytokentype
yylex(YYSTYPE *lval, rb_code_range_t *yylloc, struct parser_params *parser)
{
    enum yytokentype t;

    parser->lval = lval;
    lval->val = ((VALUE)RUBY_Qundef);
    t = parser_yylex(parser);
    if ((0))
 ((void)0);
    else if (t != 0)
 ((void)0);

    if ((parser->lex.strterm) && ((parser->lex.strterm)->flags & ((VALUE)RUBY_FL_USER4)))
 rb_parser_set_location_from_strterm_heredoc(parser, &(parser->lex.strterm)->u.heredoc, &(*yylloc));
    else
 rb_parser_set_location(parser, &(*yylloc));

    return t;
}



static NODE*
node_newnode(struct parser_params *parser, enum node_type type, VALUE a0, VALUE a1, VALUE a2)
{
    NODE *n = rb_ast_newnode(parser->ast);

    rb_node_init(n, type, a0, a1, a2);

    (n)->flags=(((n)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((parser->ruby_sourceline))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));

    ((n)->nd_loc.first_loc.lineno = (0));
    ((n)->nd_loc.first_loc.column = (-1));
    ((n)->nd_loc.last_loc.lineno = (0));
    ((n)->nd_loc.last_loc.column = (-1));
    return n;
}


static enum node_type
nodetype(NODE *node)
{
    return (enum node_type)((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8));
}

static int
nodeline(NODE *node)
{
    return (int)(((long)(node)->flags)>>(8 +7));
}

static NODE*
newline_node(NODE *node)
{
    if (node) {
 node = remove_begin(node);
 node->flags |= (((VALUE)1)<<7);
    }
    return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
    if (!node) return;
    if (!orig) return;
    (node)->flags=(((node)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)(((int)(((long)(orig)->flags)>>(8 +7)))&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
}

static void
parser_warning(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warning((parser->ruby_sourcefile), (int)(((long)(node)->flags)>>(8 +7)), "%s", mesg);
}


static void
parser_warn(struct parser_params *parser, NODE *node, const char *mesg)
{
    rb_compile_warn((parser->ruby_sourcefile), (int)(((long)(node)->flags)>>(8 +7)), "%s", mesg);
}


static NODE *
nd_set_loc(NODE *nd, const rb_code_range_t *location)
{
    nd->nd_loc = *location;
    (nd)->flags=(((nd)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((location->first_loc.lineno)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    return nd;
}

static NODE*
block_append_gen(struct parser_params *parser, NODE *head, NODE *tail, const rb_code_range_t *location)
{
    NODE *end, *h = head, *nd;

    if (tail == 0) return head;

    if (h == 0) return tail;
    switch (((int) (((h)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_SELF:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
 parser_warning(parser, (h), ("unused literal ignored"));
 return tail;
      default:
 h = end = node_newnode(parser, ((NODE_BLOCK)), ((VALUE)(head)), ((VALUE)(0)), ((VALUE)(0)));
 end->u2.node = end;
 nd_set_loc(end, location);
 head = end;
 break;
      case NODE_BLOCK:
 end = h->u2.node;
 break;
    }

    nd = end->u1.node;
    switch (((int) (((nd)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_RETURN:
      case NODE_BREAK:
      case NODE_NEXT:
      case NODE_REDO:
      case NODE_RETRY:
 if (!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
     parser_warning(parser, (tail), ("statement not reached"));
 }
 break;

      default:
 break;
    }

    if (((int) (((tail)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_BLOCK) {
 tail = node_newnode(parser, ((NODE_BLOCK)), ((VALUE)(tail)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(tail, location);
 tail->u2.node = tail;
    }
    end->u3.node = tail;
    h->u2.node = tail->u2.node;
    (((head)->nd_loc.last_loc) = (((tail)->nd_loc.last_loc)));
    return head;
}


static NODE*
list_append_gen(struct parser_params *parser, NODE *list, NODE *item)
{
    NODE *last;

    if (list == 0) return new_list_gen(parser, item, &item->nd_loc);
    if (list->u3.node) {
 last = list->u3.node->u2.node;
    }
    else {
 last = list;
    }

    list->u2.argc += 1;
    last->u3.node = new_list_gen(parser, item, &item->nd_loc);
    list->u3.node->u2.node = last->u3.node;

    (((list)->nd_loc.last_loc) = (((item)->nd_loc.last_loc)));

    return list;
}


static NODE*
list_concat(NODE *head, NODE *tail)
{
    NODE *last;

    if (head->u3.node) {
 last = head->u3.node->u2.node;
    }
    else {
 last = head;
    }

    head->u2.argc += tail->u2.argc;
    last->u3.node = tail;
    if (tail->u3.node) {
 head->u3.node->u2.node = tail->u3.node->u2.node;
    }
    else {
 head->u3.node->u2.node = tail;
    }

    (((head)->nd_loc.last_loc) = (((tail)->nd_loc.last_loc)));

    return head;
}

static int
literal_concat0(struct parser_params *parser, VALUE head, VALUE tail)
{
    if (!((VALUE)(tail) != ((VALUE)RUBY_Qnil))) return 1;
    if (!rb_enc_compatible(head, tail)) {
 parser_compile_error(parser, "string literal encodings differ (%s / %s)",
        (rb_enc_get(head))->name,
        (rb_enc_get(tail))->name);
 rb_str_resize(head, 0);
 rb_str_resize(tail, 0);
 return 0;
    }
    rb_str_buf_append(head, tail);
    return 1;
}


static NODE *
literal_concat_gen(struct parser_params *parser, NODE *head, NODE *tail, const rb_code_range_t *location)
{
    enum node_type htype;
    NODE *headlast;
    VALUE lit;

    if (!head) return tail;
    if (!tail) return head;

    htype = ((int) (((head)->flags & (((VALUE)0x7f)<<8))>>8));
    if (htype == NODE_EVSTR) {
 NODE *node = new_dstr_gen(parser,  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); }), location);
 head = list_append_gen(parser,(node),(head));
 htype = NODE_DSTR;
    }
    if ((parser->heredoc_indent) > 0) {
 switch (htype) {
   case NODE_STR:
     (head)->flags=(((head)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DSTR))<<8)&(((VALUE)0x7f)<<8)));
   case NODE_DSTR:
     return list_append_gen(parser,(head),(tail));
   default:
     break;
 }
    }
    switch (((int) (((tail)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_STR:
 if (htype == NODE_DSTR && (headlast = head->u3.node->u2.node->u1.node) &&
     ((int) (((headlast)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
     htype = NODE_STR;
     lit = headlast->u1.value;
 }
 else {
     lit = head->u1.value;
 }
 if (htype == NODE_STR) {
     if (!literal_concat0(parser, lit, tail->u1.value)) {
       error:
  rb_discard_node_gen(parser, (head));
  rb_discard_node_gen(parser, (tail));
  return 0;
     }
     rb_discard_node_gen(parser, (tail));
 }
 else {
     list_append_gen(parser,(head),(tail));
 }
 break;

      case NODE_DSTR:
 if (htype == NODE_STR) {
     if (!literal_concat0(parser, head->u1.value, tail->u1.value))
  goto error;
     tail->u1.value = head->u1.value;
     rb_discard_node_gen(parser, (head));
     head = tail;
 }
 else if (!((VALUE)(tail->u1.value) != ((VALUE)RUBY_Qnil))) {
   append:
     head->u2.argc += tail->u2.argc - 1;
     head->u3.node->u2.node->u3.node = tail->u3.node;
     head->u3.node->u2.node = tail->u3.node->u2.node;
     rb_discard_node_gen(parser, (tail));
 }
 else if (htype == NODE_DSTR && (headlast = head->u3.node->u2.node->u1.node) &&
   ((int) (((headlast)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
     lit = headlast->u1.value;
     if (!literal_concat0(parser, lit, tail->u1.value))
  goto error;
     tail->u1.value = ((VALUE)RUBY_Qnil);
     goto append;
 }
 else {
     (tail)->flags=(((tail)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_ARRAY))<<8)&(((VALUE)0x7f)<<8)));
     tail->u1.node = new_str_gen(parser, tail->u1.value, location);
     list_concat(head, tail);
 }
 break;

      case NODE_EVSTR:
 if (htype == NODE_STR) {
     (head)->flags=(((head)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DSTR))<<8)&(((VALUE)0x7f)<<8)));
     head->u2.argc = 1;
 }
 list_append_gen(parser,(head),(tail));
 break;
    }
    return head;
}

static NODE *
evstr2dstr_gen(struct parser_params *parser, NODE *node)
{
    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_EVSTR) {
 node = list_append_gen(parser,(new_dstr_gen(parser,  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); }), &node->nd_loc)),(node));
    }
    return node;
}

static NODE *
new_evstr_gen(struct parser_params *parser, NODE *node, const rb_code_range_t *location)
{
    NODE *head = node;
    NODE *evstr;

    if (node) {
 switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
     return node;
 }
    }
    evstr = node_newnode(parser, ((NODE_EVSTR)), ((VALUE)(0)), ((VALUE)((head))), ((VALUE)(0)));
    nd_set_loc(evstr, location);
    return evstr;
}

static NODE *
call_bin_op_gen(struct parser_params *parser, NODE *recv, ID id, NODE *arg1,
  const rb_code_range_t *op_loc, const rb_code_range_t *location)
{
    NODE *expr;
    value_expr_gen(parser, (recv) = remove_begin(recv));
    value_expr_gen(parser, (arg1) = remove_begin(arg1));
    expr = node_newnode(parser, ((NODE_OPCALL)), ((VALUE)(recv)), ((VALUE)(id)), ((VALUE)(new_list_gen(parser, arg1, &arg1->nd_loc))));
    (expr)->flags=(((expr)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((op_loc->first_loc.lineno)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    expr->nd_loc = *location;
    return expr;
}

static NODE *
call_uni_op_gen(struct parser_params *parser, NODE *recv, ID id, const rb_code_range_t *op_loc, const rb_code_range_t *location)
{
    NODE *opcall;
    value_expr_gen(parser, (recv) = remove_begin(recv));
    opcall = node_newnode(parser, ((NODE_OPCALL)), ((VALUE)(recv)), ((VALUE)(id)), ((VALUE)(0)));
    opcall->nd_loc = *location;
    (opcall)->flags=(((opcall)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((op_loc->first_loc.lineno)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    return opcall;
}

static NODE *
new_qcall_gen(struct parser_params* parser, ID atype, NODE *recv, ID mid, NODE *args, const rb_code_range_t *location)
{
    NODE *qcall = node_newnode(parser, (((((atype) == ((VALUE)(tANDDOT))) ? NODE_QCALL : NODE_CALL))), ((VALUE)(recv)), ((VALUE)(mid)), ((VALUE)(args)));
    qcall->nd_loc = *location;
    return qcall;
}


static NODE*
match_op_gen(struct parser_params *parser, NODE *node1, NODE *node2, const rb_code_range_t *op_loc, const rb_code_range_t *location)
{
    NODE *n;
    int line = op_loc->first_loc.lineno;

    value_expr_gen(parser, (node1) = remove_begin(node1));
    value_expr_gen(parser, (node2) = remove_begin(node2));
    if (node1 && (n = (((int) (((node1)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE ? (node1)->u2.node : node1)) != 0) {
 switch (((int) (((n)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_DREGX:
     {
  NODE *match = node_newnode(parser, ((NODE_MATCH2)), ((VALUE)(node1)), ((VALUE)(node2)), ((VALUE)(0)));
  match->nd_loc = *location;
  (match)->flags=(((match)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((line)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
  return match;
     }

   case NODE_LIT:
     if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(n->u1.value))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((n->u1.value) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((n->u1.value) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((n->u1.value) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((n->u1.value) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(n->u1.value)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(n->u1.value))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
  const VALUE lit = n->u1.value;
  NODE *match = node_newnode(parser, ((NODE_MATCH2)), ((VALUE)(node1)), ((VALUE)(node2)), ((VALUE)(0)));
  match->u3.node = reg_named_capture_assign_gen(parser,(lit),location);
  match->nd_loc = *location;
  (match)->flags=(((match)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((line)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
  return match;
     }
 }
    }

    if (node2 && (n = (((int) (((node2)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE ? (node2)->u2.node : node2)) != 0) {
        NODE *match3;

 switch (((int) (((n)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_LIT:
     if (!( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(n->u1.value))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((n->u1.value) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((n->u1.value) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((n->u1.value) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((n->u1.value) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(n->u1.value)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(n->u1.value))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(n->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(n->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(n->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) break;

   case NODE_DREGX:
     match3 = node_newnode(parser, ((NODE_MATCH3)), ((VALUE)(node2)), ((VALUE)(node1)), ((VALUE)(0)));
     match3->nd_loc = *location;
     (match3)->flags=(((match3)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((line)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
     return match3;
 }
    }

    n = new_call_gen(parser, node1,tMATCH,new_list_gen(parser, node2, &node2->nd_loc),location);
    (n)->flags=(((n)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((line)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    return n;
}
static NODE*
gettable_gen(struct parser_params *parser, ID id, const rb_code_range_t *location)
{
    ID *vidp = ((void*)0);
    NODE *node;
    switch (id) {
      case keyword_self:
 node = node_newnode(parser, ((NODE_SELF)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case keyword_nil:
 node = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case keyword_true:
 node = node_newnode(parser, ((NODE_TRUE)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case keyword_false:
 node = node_newnode(parser, ((NODE_FALSE)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case keyword__FILE__:
 node = new_str_gen(parser, rb_str_dup((parser->ruby_sourcefile_string)), location);
 return node;
      case keyword__LINE__:
 return new_lit_gen(parser, (((VALUE)((parser->tokline)))<<1 | RUBY_FIXNUM_FLAG), location);
      case keyword__ENCODING__:
 return new_lit_gen(parser, rb_enc_from_encoding((parser->enc)), location);
    }
    switch (id_type(id)) {
      case RUBY_ID_LOCAL:
 if (dyna_in_block_gen(parser) && dvar_defined_gen(parser, (id), &(vidp))) {
     if (id == (parser->cur_arg)) {
  rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("circular argument reference - %li\v"), (rb_id2str(id)));
     }
     if (vidp) *vidp |= ((ID)1 << (sizeof(ID) * 8 - 1));
     node = new_dvar_gen(parser, id, location);
     return node;
 }
 if (local_id_gen(parser, (id), &(vidp))) {
     if (id == (parser->cur_arg)) {
  rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("circular argument reference - %li\v"), (rb_id2str(id)));
     }
     if (vidp) *vidp |= ((ID)1 << (sizeof(ID) * 8 - 1));
     node = new_lvar_gen(parser, id, location);
     return node;
 }






 node = node_newnode(parser, ((NODE_VCALL)), ((VALUE)(0)), ((VALUE)(id)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case RUBY_ID_GLOBAL:
 node = new_gvar_gen(parser, id, location);
 return node;
      case RUBY_ID_INSTANCE:
 node = new_ivar_gen(parser,id,location);
 return node;
      case RUBY_ID_CONST:
 node = node_newnode(parser, ((NODE_CONST)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
      case RUBY_ID_CLASS:
 node = node_newnode(parser, ((NODE_CVAR)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(0)));
 nd_set_loc(node, location);
 return node;
    }
    parser_compile_error(parser, "identifier %li\v is not valid to get", rb_id2str(id));
    return 0;
}

static NODE *
opt_arg_append(NODE *opt_list, NODE *opt)
{
    NODE *opts = opt_list;
    opts->nd_loc.last_loc = opt->nd_loc.last_loc;

    while (opts->u3.node) {
 opts = opts->u3.node;
 opts->nd_loc.last_loc = opt->nd_loc.last_loc;
    }
    opts->u3.node = opt;

    return opt_list;
}

static NODE *
kwd_append(NODE *kwlist, NODE *kw)
{
    if (kwlist) {
 NODE *kws = kwlist;
 kws->nd_loc.last_loc = kw->nd_loc.last_loc;
 while (kws->u3.node) {
     kws = kws->u3.node;
     kws->nd_loc.last_loc = kw->nd_loc.last_loc;
 }
 kws->u3.node = kw;
    }
    return kwlist;
}

static NODE *
new_defined_gen(struct parser_params *parser, NODE *expr, const rb_code_range_t *location)
{
    NODE *defined = node_newnode(parser, ((NODE_DEFINED)), ((VALUE)(remove_begin_all(expr))), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(defined, location);
    return defined;
}

static NODE *
new_regexp_gen(struct parser_params *parser, NODE *node, int options, const rb_code_range_t *location)
{
    NODE *list, *prev;
    VALUE lit;

    if (!node) {
 return new_lit_gen(parser, reg_compile_gen(parser, ( ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); })), (options)), location);
    }
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_STR:
 {
     VALUE src = node->u1.value;
     (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
     nd_set_loc(node, location);
     add_mark_object_gen(parser, (node->u1.value = reg_compile_gen(parser, (src), (options))));
 }
 break;
      default:
 add_mark_object_gen(parser, (lit =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); })));
 node = node_newnode(parser, ((NODE_DSTR)), ((VALUE)(lit)), ((VALUE)(1)), ((VALUE)(new_list_gen(parser, node, location))));
      case NODE_DSTR:
 (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DREGX))<<8)&(((VALUE)0x7f)<<8)));
 nd_set_loc(node, location);
 node->u2.id = options & 0xff;
 if (!!((VALUE)(node->u1.value) != ((VALUE)RUBY_Qnil))) reg_fragment_check_gen(parser, (node->u1.value), (options));
 for (list = (prev = node)->u3.node; list; list = list->u3.node) {
     if (((int) (((list->u1.node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_STR) {
  VALUE tail = list->u1.node->u1.value;
  if (reg_fragment_check_gen(parser, (tail), (options)) && prev && !!((VALUE)(prev->u1.value) != ((VALUE)RUBY_Qnil))) {
      VALUE lit = prev == node ? prev->u1.value : prev->u1.node->u1.value;
      if (!literal_concat0(parser, lit, tail)) {
   return node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
      }
      rb_str_resize(tail, 0);
      prev->u3.node = list->u3.node;
      rb_discard_node_gen(parser, (list->u1.node));
      rb_discard_node_gen(parser, (list));
      list = prev;
  }
  else {
      prev = list;
  }
     }
     else {
  prev = 0;
     }
 }
 if (!node->u3.node) {
     VALUE src = node->u1.value;
     (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
     add_mark_object_gen(parser, (node->u1.value = reg_compile_gen(parser, (src), (options))));
 }
 if (options & (1<<16)) {
     node = node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(0)), ((VALUE)(node)), ((VALUE)(0)));
     nd_set_loc(node, location);
 }
 break;
    }
    return node;
}

static NODE *
new_lit_gen(struct parser_params *parser, VALUE sym, const rb_code_range_t *location)
{
    NODE *lit = node_newnode(parser, ((NODE_LIT)), ((VALUE)(sym)), ((VALUE)(0)), ((VALUE)(0)));
    add_mark_object_gen(parser, (sym));
    nd_set_loc(lit, location);
    return lit;
}

static NODE *
new_list_gen(struct parser_params *parser, NODE *item, const rb_code_range_t *location)
{
    NODE *list = node_newnode(parser, ((NODE_ARRAY)), ((VALUE)(item)), ((VALUE)(1)), ((VALUE)(0)));
    nd_set_loc(list, location);
    return list;
}

static NODE *
new_str_gen(struct parser_params *parser, VALUE str, const rb_code_range_t *location)
{
    NODE *nd_str = node_newnode(parser, ((NODE_STR)), ((VALUE)(str)), ((VALUE)(0)), ((VALUE)(0)));
    add_mark_object_gen(parser, (str));
    nd_set_loc(nd_str, location);
    return nd_str;
}

static NODE *
new_dvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location)
{
    NODE *dvar = node_newnode(parser, ((NODE_DVAR)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(dvar, location);
    return dvar;
}

static NODE *
new_resbody_gen(struct parser_params *parser, NODE *exc_list, NODE *stmt, NODE *rescue, const rb_code_range_t *location)
{
    NODE *resbody = node_newnode(parser, ((NODE_RESBODY)), ((VALUE)(rescue)), ((VALUE)(stmt)), ((VALUE)(exc_list)));
    nd_set_loc(resbody, location);
    return resbody;
}

static NODE *
new_errinfo_gen(struct parser_params *parser, const rb_code_range_t *location)
{
    NODE *errinfo = node_newnode(parser, ((NODE_ERRINFO)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(errinfo, location);
    return errinfo;
}

static NODE *
new_call_gen(struct parser_params *parser, NODE *recv, ID mid, NODE *args, const rb_code_range_t *location)
{
    NODE *call = node_newnode(parser, ((NODE_CALL)), ((VALUE)(recv)), ((VALUE)(mid)), ((VALUE)(args)));
    nd_set_loc(call, location);
    return call;
}

static NODE *
new_fcall_gen(struct parser_params *parser, ID mid, NODE *args, const rb_code_range_t *location)
{
    NODE *fcall = node_newnode(parser, ((NODE_FCALL)), ((VALUE)(0)), ((VALUE)(mid)), ((VALUE)(args)));
    nd_set_loc(fcall, location);
    return fcall;
}

static NODE *
new_for_gen(struct parser_params *parser, NODE *var, NODE *iter, NODE *body, const rb_code_range_t *location)
{
    NODE *nd_for = node_newnode(parser, ((NODE_FOR)), ((VALUE)(var)), ((VALUE)(body)), ((VALUE)(iter)));
    nd_set_loc(nd_for, location);
    return nd_for;
}

static NODE *
new_gvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location)
{
    NODE *gvar = node_newnode(parser, ((NODE_GVAR)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(rb_global_entry(id))));
    nd_set_loc(gvar, location);
    return gvar;
}

static NODE *
new_lvar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location)
{
    NODE *lvar = node_newnode(parser, ((NODE_LVAR)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(lvar, location);
    return lvar;
}

static NODE *
new_dstr_gen(struct parser_params *parser, VALUE str, const rb_code_range_t *location)
{
    NODE *dstr = node_newnode(parser, ((NODE_DSTR)), ((VALUE)(str)), ((VALUE)(1)), ((VALUE)(0)));
    add_mark_object_gen(parser, (str));
    nd_set_loc(dstr, location);
    return dstr;
}

static NODE *
new_rescue_gen(struct parser_params *parser, NODE *b, NODE *res, NODE *e, const rb_code_range_t *location)
{
    NODE *rescue = node_newnode(parser, ((NODE_RESCUE)), ((VALUE)(b)), ((VALUE)(res)), ((VALUE)(e)));
    nd_set_loc(rescue, location);
    return rescue;
}

static NODE *
new_undef_gen(struct parser_params *parser, NODE *i, const rb_code_range_t *location)
{
    NODE *undef = node_newnode(parser, ((NODE_UNDEF)), ((VALUE)(0)), ((VALUE)(i)), ((VALUE)(0)));
    nd_set_loc(undef, location);
    return undef;
}

static NODE *
new_zarray_gen(struct parser_params *parser, const rb_code_range_t *location)
{
    NODE *zarray = node_newnode(parser, ((NODE_ZARRAY)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(zarray, location);
    return zarray;
}

static NODE *
new_ivar_gen(struct parser_params *parser, ID id, const rb_code_range_t *location)
{
    NODE *ivar = node_newnode(parser, ((NODE_IVAR)), ((VALUE)(id)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(ivar, location);
    return ivar;
}

static NODE *
new_postarg_gen(struct parser_params *parser, NODE *i, NODE *v, const rb_code_range_t *location)
{
    NODE *postarg = node_newnode(parser, ((NODE_POSTARG)), ((VALUE)(i)), ((VALUE)(v)), ((VALUE)(0)));
    nd_set_loc(postarg, location);
    return postarg;
}

static NODE *
new_cdecl_gen(struct parser_params *parser, ID v, NODE *val, NODE *path, const rb_code_range_t *location)
{
    NODE *nd_cdecl = node_newnode(parser, ((NODE_CDECL)), ((VALUE)(v)), ((VALUE)(val)), ((VALUE)(path)));
    nd_set_loc(nd_cdecl, location);
    return nd_cdecl;
}

static NODE *
new_scope_gen(struct parser_params *parser, NODE *a, NODE *b, const rb_code_range_t *location)
{
    NODE *scope = node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)(b)), ((VALUE)(a)));
    nd_set_loc(scope, location);
    return scope;
}

static NODE *
new_begin_gen(struct parser_params *parser, NODE *b, const rb_code_range_t *location)
{
    NODE *begin = node_newnode(parser, ((NODE_BEGIN)), ((VALUE)(0)), ((VALUE)(b)), ((VALUE)(0)));
    nd_set_loc(begin, location);
    return begin;
}

static NODE *
new_masgn_gen(struct parser_params *parser, NODE *l, NODE *r, const rb_code_range_t *location)
{
    NODE *masgn = node_newnode(parser, ((NODE_MASGN)), ((VALUE)(l)), ((VALUE)(0)), ((VALUE)(r)));
    nd_set_loc(masgn, location);
    return masgn;
}


static NODE *
new_kw_arg_gen(struct parser_params *parser, NODE *k, const rb_code_range_t *location)
{
    NODE *kw_arg;
    if (!k) return 0;
    kw_arg = node_newnode(parser, ((NODE_KW_ARG)), ((VALUE)(0)), ((VALUE)((k))), ((VALUE)(0)));
    nd_set_loc(kw_arg, location);
    return kw_arg;
}

static NODE *
new_xstring_gen(struct parser_params *parser, NODE *node, const rb_code_range_t *location)
{
    if (!node) {
 VALUE lit =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_enc_str_new_static((0), (0), ((parser->enc))) : rb_enc_str_new((0), (0), ((parser->enc))); });
 NODE *xstr = node_newnode(parser, ((NODE_XSTR)), ((VALUE)(lit)), ((VALUE)(0)), ((VALUE)(0)));
 add_mark_object_gen(parser, (lit));
 xstr->nd_loc = *location;
 return xstr;
    }
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_STR:
 (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_XSTR))<<8)&(((VALUE)0x7f)<<8)));
 nd_set_loc(node, location);
 break;
      case NODE_DSTR:
 (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DXSTR))<<8)&(((VALUE)0x7f)<<8)));
 nd_set_loc(node, location);
 break;
      default:
 node = node_newnode(parser, ((NODE_DXSTR)), ((VALUE)(((VALUE)RUBY_Qnil))), ((VALUE)(1)), ((VALUE)(new_list_gen(parser, node, location))));
 nd_set_loc(node, location);
 break;
    }
    return node;
}

static NODE *
new_body_gen(struct parser_params *parser, NODE *param, NODE *stmt, const rb_code_range_t *location)
{
    NODE *iter = node_newnode(parser, ((NODE_ITER)), ((VALUE)(0)), ((VALUE)(node_newnode(parser, ((NODE_SCOPE)), ((VALUE)(local_tbl_gen(parser))), ((VALUE)(stmt)), ((VALUE)(param))))), ((VALUE)(0)));
    nd_set_loc(iter->u2.node, location);
    nd_set_loc(iter, location);
    return iter;

}
const char rb_parser_lex_state_names[][13] = {
    "EXPR_BEG", "EXPR_END", "EXPR_ENDARG", "EXPR_ENDFN", "EXPR_ARG",
    "EXPR_CMDARG", "EXPR_MID", "EXPR_FNAME", "EXPR_DOT", "EXPR_CLASS",
    "EXPR_LABEL", "EXPR_LABELED","EXPR_FITEM",
};

static VALUE
append_lex_state_name(enum lex_state_e state, VALUE buf)
{
    int i, sep = 0;
    unsigned int mask = 1;
    static const char none[] = "EXPR_NONE";

    for (i = 0; i < EXPR_MAX_STATE; ++i, mask <<= 1) {
 if ((unsigned)state & mask) {
     if (sep) {
  rb_str_cat(buf, "|", 1);
     }
     sep = 1;
      ({ (__builtin_constant_p(rb_parser_lex_state_names[i])) ? rb_str_cat((buf), (rb_parser_lex_state_names[i]), (long)strlen(rb_parser_lex_state_names[i])) : rb_str_cat_cstr((buf), (rb_parser_lex_state_names[i])); });
 }
    }
    if (!sep) {
 rb_str_cat(buf, none, sizeof(none)-1);
    }
    return buf;
}

static void
flush_debug_buffer(struct parser_params *parser, VALUE out, VALUE str)
{
    VALUE mesg = parser->debug_buffer;

    if (!!((VALUE)(mesg) != ((VALUE)RUBY_Qnil)) && (!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(mesg))->as.heap.len)) {
 parser->debug_buffer = ((VALUE)RUBY_Qnil);
 rb_io_puts(1, &mesg, out);
    }
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil)) && (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) {
 rb_io_write(parser->debug_output, str);
    }
}

enum lex_state_e
rb_parser_trace_lex_state(struct parser_params *parser, enum lex_state_e from,
     enum lex_state_e to, int line)
{
    VALUE mesg;
    mesg =  ({ (__builtin_constant_p("lex_state: ")) ? rb_str_new_static(("lex_state: "), (long)strlen("lex_state: ")) : rb_str_new_cstr("lex_state: "); });
    append_lex_state_name(from, mesg);
     ({ (__builtin_constant_p(" -> ")) ? rb_str_cat((mesg), (" -> "), (long)strlen(" -> ")) : rb_str_cat_cstr((mesg), (" -> ")); });
    append_lex_state_name(to, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(parser, parser->debug_output, mesg);
    return to;
}

VALUE
rb_parser_lex_state_name(enum lex_state_e state)
{
    return rb_fstring(append_lex_state_name(state,  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); })));
}

static void
append_bitstack_value(stack_type stack, VALUE mesg)
{
    if (stack == 0) {
  ({ (__builtin_constant_p("0")) ? rb_str_cat((mesg), ("0"), (long)strlen("0")) : rb_str_cat_cstr((mesg), ("0")); });
    }
    else {
 stack_type mask = (stack_type)1U << (8 * sizeof(stack_type) - 1);
 for (; mask && !(stack & mask); mask >>= 1) continue;
 for (; mask; mask >>= 1) rb_str_cat(mesg, stack & mask ? "1": "0", 1);
    }
}

void
rb_parser_show_bitstack(struct parser_params *parser, stack_type stack,
   const char *name, int line)
{
    VALUE mesg = rb_sprintf("%s: ", name);
    append_bitstack_value(stack, mesg);
    rb_str_catf(mesg, " at line %d\n", line);
    flush_debug_buffer(parser, parser->debug_output, mesg);
}

void
rb_parser_fatal(struct parser_params *parser, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg =  ({ (__builtin_constant_p("internal parser error: ")) ? rb_str_new_static(("internal parser error: "), (long)strlen("internal parser error: ")) : rb_str_new_cstr("internal parser error: "); });

    __builtin_va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    __builtin_va_end(ap);

    parser_yyerror(parser, (!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(mesg))->as.ary : ((struct RString*)(mesg))->as.heap.ptr));
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(mesg); ; rb_gc_guarded_ptr; }));





    mesg =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    append_lex_state_name((parser->lex.state), mesg);
    parser_compile_error(parser, "lex_state: %li\v", mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value((parser->cond_stack), mesg);
    parser_compile_error(parser, "cond_stack: %li\v", mesg);
    rb_str_resize(mesg, 0);
    append_bitstack_value((parser->cmdarg_stack), mesg);
    parser_compile_error(parser, "cmdarg_stack: %li\v", mesg);
    if (parser->debug_output == rb_stdout)
 parser->debug_output = rb_stderr;
    (parser->yydebug) = 1;
}

void
rb_parser_set_location_from_strterm_heredoc(struct parser_params *parser, rb_strterm_heredoc_t *here, rb_code_range_t *yylloc)
{
    const char *eos = (!(((struct RBasic*)(here->term))->flags & RSTRING_NOEMBED) ? ((struct RString*)(here->term))->as.ary : ((struct RString*)(here->term))->as.heap.ptr);
    int term_len = (int)eos[0];

    yylloc->first_loc.lineno = (int)here->sourceline;
    yylloc->first_loc.column = (int)(here->u3.lastidx - term_len);
    yylloc->last_loc.lineno = (int)here->sourceline;
    yylloc->last_loc.column = (int)(here->u3.lastidx);
}

void
rb_parser_set_location_of_none(struct parser_params *parser, rb_code_range_t *yylloc)
{
    yylloc->first_loc.lineno = (parser->ruby_sourceline);
    yylloc->first_loc.column = (int)(parser->lex.ptok - (parser->lex.pbeg));
    yylloc->last_loc.lineno = (parser->ruby_sourceline);
    yylloc->last_loc.column = (int)(parser->lex.ptok - (parser->lex.pbeg));
}

void
rb_parser_set_location(struct parser_params *parser, rb_code_range_t *yylloc)
{
    yylloc->first_loc.lineno = (parser->ruby_sourceline);
    yylloc->first_loc.column = (int)(parser->lex.ptok - (parser->lex.pbeg));
    yylloc->last_loc.lineno = (parser->ruby_sourceline);
    yylloc->last_loc.column = (int)((parser->lex.pcur) - (parser->lex.pbeg));
}



static NODE*
assignable_result0(NODE *node, const rb_code_range_t *location)
{
    if (node) {
 nd_set_loc(node, location);
    }
    return node;
}






static NODE*
assignable_gen(struct parser_params *parser, ID id, NODE *val, const rb_code_range_t *location)

{
    if (!id) return new_begin_gen(parser,0,location);
    switch (id) {
      case keyword_self:
 parser_yyerror(parser, ("Can't change the value of self"));
 goto error;
      case keyword_nil:
 parser_yyerror(parser, ("Can't assign to nil"));
 goto error;
      case keyword_true:
 parser_yyerror(parser, ("Can't assign to true"));
 goto error;
      case keyword_false:
 parser_yyerror(parser, ("Can't assign to false"));
 goto error;
      case keyword__FILE__:
 parser_yyerror(parser, ("Can't assign to __FILE__"));
 goto error;
      case keyword__LINE__:
 parser_yyerror(parser, ("Can't assign to __LINE__"));
 goto error;
      case keyword__ENCODING__:
 parser_yyerror(parser, ("Can't assign to __ENCODING__"));
 goto error;
    }
    switch (id_type(id)) {
      case RUBY_ID_LOCAL:
 if (dyna_in_block_gen(parser)) {
     if (dvar_curr_gen(parser, (id))) {
  return assignable_result0(node_newnode(parser, ((NODE_DASGN_CURR)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
     }
     else if (dvar_defined_gen(parser, (id), ((void*)0))) {
  return assignable_result0(node_newnode(parser, ((NODE_DASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
     }
     else if (local_id_gen(parser, (id), ((void*)0))) {
  return assignable_result0(node_newnode(parser, ((NODE_LASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
     }
     else {
  local_var_gen(parser, (id));
  return assignable_result0(node_newnode(parser, ((NODE_DASGN_CURR)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
     }
 }
 else {
     if (!local_id_gen(parser, (id), ((void*)0))) {
  local_var_gen(parser, (id));
     }
     return assignable_result0(node_newnode(parser, ((NODE_LASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
 }
 break;
      case RUBY_ID_GLOBAL:
 return assignable_result0(node_newnode(parser, ((NODE_GASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(rb_global_entry(id)))), location);
      case RUBY_ID_INSTANCE:
 return assignable_result0(node_newnode(parser, ((NODE_IASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
      case RUBY_ID_CONST:
 if (!(parser->in_def))
     return assignable_result0(new_cdecl_gen(parser,id,val,0,location), location);
 parser_yyerror(parser, ("dynamic constant assignment"));
 break;
      case RUBY_ID_CLASS:
 return assignable_result0(node_newnode(parser, ((NODE_CVASGN)), ((VALUE)(id)), ((VALUE)(val)), ((VALUE)(0))), location);
      default:
 parser_compile_error(parser, "identifier %li\v is not valid to set", rb_id2str(id));
    }
  error:
    return new_begin_gen(parser,0,location);


}

static int
is_private_local_id(ID name)
{
    VALUE s;
    if (name == idUScore) return 1;
    if (!(id_type(name)==RUBY_ID_LOCAL)) return 0;
    s = rb_id2str(name);
    if (!s) return 0;
    return (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr)[0] == '_';
}

static int
shadowing_lvar_0(struct parser_params *parser, ID name)
{
    if (is_private_local_id(name)) return 1;
    if (dyna_in_block_gen(parser)) {
 if (dvar_curr_gen(parser, (name))) {
     parser_yyerror(parser, ("duplicated argument name"));
 }
 else if (dvar_defined_gen(parser, (name), ((void*)0)) || local_id_gen(parser, (name), ((void*)0))) {
     rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("shadowing outer local variable - %li\v"), (rb_id2str(name)));
     vtable_add_gen(parser, 10051, "lvtbl->vars", (parser->lvtbl)->vars, name);
     if ((parser->lvtbl)->used) {
  vtable_add_gen(parser, 10053, "lvtbl->used", (parser->lvtbl)->used, (ID)(parser->ruby_sourceline) | ((ID)1 << (sizeof(ID) * 8 - 1)));
     }
     return 0;
 }
    }
    else {
 if (local_id_gen(parser, (name), ((void*)0))) {
     parser_yyerror(parser, ("duplicated argument name"));
 }
    }
    return 1;
}

static ID
shadowing_lvar_gen(struct parser_params *parser, ID name)
{
    shadowing_lvar_0(parser, name);
    return name;
}

static void
new_bv_gen(struct parser_params *parser, ID name)
{
    if (!name) return;
    if (!(id_type(name)==RUBY_ID_LOCAL)) {
 parser_compile_error(parser, "invalid local variable - %li\v",
        rb_id2str(name));
 return;
    }
    if (!shadowing_lvar_0(parser, name)) return;
    local_var_gen(parser, (name));
}


static NODE *
aryset_gen(struct parser_params *parser, NODE *recv, NODE *idx, const rb_code_range_t *location)
{
    NODE *attrasgn = node_newnode(parser, ((NODE_ATTRASGN)), ((VALUE)(recv)), ((VALUE)(tASET)), ((VALUE)(idx)));
    nd_set_loc(attrasgn, location);
    return attrasgn;
}

static void
block_dup_check_gen(struct parser_params *parser, NODE *node1, NODE *node2)
{
    if (node2 && node1 && ((int) (((node1)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BLOCK_PASS) {
 parser_compile_error(parser, "both block arg and actual block given");
    }
}

static NODE *
attrset_gen(struct parser_params *parser, NODE *recv, ID atype, ID id, const rb_code_range_t *location)
{
    NODE *attrasgn;
    if (!((atype) == ((VALUE)(tANDDOT)))) id = rb_id_attrset(id);
    attrasgn = node_newnode(parser, ((NODE_ATTRASGN)), ((VALUE)(recv)), ((VALUE)(id)), ((VALUE)(0)));
    nd_set_loc(attrasgn, location);
    return attrasgn;
}

static void
rb_backref_error_gen(struct parser_params *parser, NODE *node)
{
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_NTH_REF:
 parser_compile_error(parser, "Can't set variable $%ld", node->u2.argc);
 break;
      case NODE_BACK_REF:
 parser_compile_error(parser, "Can't set variable $%c", (int)node->u2.argc);
 break;
    }
}

static NODE *
arg_concat_gen(struct parser_params *parser, NODE *node1, NODE *node2, const rb_code_range_t *location)
{
    NODE *argscat;

    if (!node2) return node1;
    switch (((int) (((node1)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_BLOCK_PASS:
 if (node1->u1.node)
     node1->u1.node = arg_concat_gen(parser,(node1->u1.node),(node2),(location));
 else
     node1->u1.node = new_list_gen(parser, node2, location);
 return node1;
      case NODE_ARGSPUSH:
 if (((int) (((node2)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_ARRAY) break;
 node1->u2.node = list_concat(new_list_gen(parser, node1->u2.node, location), node2);
 (node1)->flags=(((node1)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_ARGSCAT))<<8)&(((VALUE)0x7f)<<8)));
 return node1;
      case NODE_ARGSCAT:
 if (((int) (((node2)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_ARRAY ||
     ((int) (((node1->u2.node)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_ARRAY) break;
 node1->u2.node = list_concat(node1->u2.node, node2);
 return node1;
    }
    argscat = node_newnode(parser, ((NODE_ARGSCAT)), ((VALUE)(node1)), ((VALUE)(node2)), ((VALUE)(0)));
    nd_set_loc(argscat, location);
    return argscat;
}

static NODE *
arg_append_gen(struct parser_params *parser, NODE *node1, NODE *node2, const rb_code_range_t *location)
{
    NODE *argspush;

    if (!node1) return new_list_gen(parser, node2, &node2->nd_loc);
    switch (((int) (((node1)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_ARRAY:
 return list_append_gen(parser,(node1),(node2));
      case NODE_BLOCK_PASS:
 node1->u1.node = arg_append_gen(parser,(node1->u1.node),(node2),(location));
 node1->nd_loc.last_loc = node1->u1.node->nd_loc.last_loc;
 return node1;
      case NODE_ARGSPUSH:
 node1->u2.node = list_append_gen(parser,(new_list_gen(parser, node1->u2.node, &node1->u2.node->nd_loc)),(node2));
 node1->nd_loc.last_loc = node1->u2.node->nd_loc.last_loc;
 (node1)->flags=(((node1)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_ARGSCAT))<<8)&(((VALUE)0x7f)<<8)));
 return node1;
    }
    argspush = node_newnode(parser, ((NODE_ARGSPUSH)), ((VALUE)(node1)), ((VALUE)(node2)), ((VALUE)(0)));
    nd_set_loc(argspush, location);
    return argspush;
}

static NODE *
splat_array(NODE* node)
{
    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SPLAT) node = node->u1.node;
    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) return node;
    return 0;
}

static void
mark_lvar_used(struct parser_params *parser, NODE *rhs)
{
    ID *vidp = ((void*)0);
    if (!rhs) return;
    switch (((int) (((rhs)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_LASGN:
 if (local_id_gen(parser, (rhs->u1.id), &(vidp))) {
     if (vidp) *vidp |= ((ID)1 << (sizeof(ID) * 8 - 1));
 }
 break;
      case NODE_DASGN:
      case NODE_DASGN_CURR:
 if (dvar_defined_gen(parser, (rhs->u1.id), &(vidp))) {
     if (vidp) *vidp |= ((ID)1 << (sizeof(ID) * 8 - 1));
 }
 break;







    }
}

static NODE *
node_assign_gen(struct parser_params *parser, NODE *lhs, NODE *rhs, const rb_code_range_t *location)
{
    if (!lhs) return 0;

    switch (((int) (((lhs)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_GASGN:
      case NODE_IASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_MASGN:
      case NODE_CDECL:
      case NODE_CVASGN:
 lhs->u2.node = rhs;
 nd_set_loc(lhs, location);
 break;

      case NODE_ATTRASGN:
 lhs->u3.node = arg_append_gen(parser,(lhs->u3.node),(rhs),(location));
 nd_set_loc(lhs, location);
 break;

      default:

 break;
    }

    return lhs;
}

static int
value_expr_gen(struct parser_params *parser, NODE *node)
{
    int cond = 0;

    if (!node) {
 rb_compile_warning((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("empty expression"));
    }
    while (node) {
 switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   case NODE_RETURN:
   case NODE_BREAK:
   case NODE_NEXT:
   case NODE_REDO:
   case NODE_RETRY:
     if (!cond) parser_yyerror(parser, ("void value expression"));

     return 0;

   case NODE_BLOCK:
     while (node->u3.node) {
  node = node->u3.node;
     }
     node = node->u1.node;
     break;

   case NODE_BEGIN:
     node = node->u2.node;
     break;

   case NODE_IF:
   case NODE_UNLESS:
     if (!node->u2.node) {
  node = node->u3.node;
  break;
     }
     else if (!node->u3.node) {
  node = node->u2.node;
  break;
     }
     if (!value_expr_gen(parser, (node->u2.node) = remove_begin(node->u2.node))) return 0;
     node = node->u3.node;
     break;

   case NODE_AND:
   case NODE_OR:
     cond = 1;
     node = node->u2.node;
     break;

   case NODE_LASGN:
   case NODE_DASGN:
   case NODE_DASGN_CURR:
   case NODE_MASGN:
     mark_lvar_used(parser, node);
     return 1;

   default:
     return 1;
 }
    }

    return 1;
}

static void
void_expr_gen(struct parser_params *parser, NODE *node)
{
    const char *useless = 0;

    if (!!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) return;

    if (!node || !(node = (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE ? (node)->u2.node : node))) return;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_OPCALL:
 switch (node->u2.id) {
   case '+':
   case '-':
   case '*':
   case '/':
   case '%':
   case tPOW:
   case tUPLUS:
   case tUMINUS:
   case '|':
   case '^':
   case '&':
   case tCMP:
   case '>':
   case tGEQ:
   case '<':
   case tLEQ:
   case tEQ:
   case tNEQ:
     useless = rb_id2name(node->u2.id);
     break;
 }
 break;

      case NODE_LVAR:
      case NODE_DVAR:
      case NODE_GVAR:
      case NODE_IVAR:
      case NODE_CVAR:
      case NODE_NTH_REF:
      case NODE_BACK_REF:
 useless = "a variable";
 break;
      case NODE_CONST:
 useless = "a constant";
 break;
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_DREGX:
 useless = "a literal";
 break;
      case NODE_COLON2:
      case NODE_COLON3:
 useless = "::";
 break;
      case NODE_DOT2:
 useless = "..";
 break;
      case NODE_DOT3:
 useless = "...";
 break;
      case NODE_SELF:
 useless = "self";
 break;
      case NODE_NIL:
 useless = "nil";
 break;
      case NODE_TRUE:
 useless = "true";
 break;
      case NODE_FALSE:
 useless = "false";
 break;
      case NODE_DEFINED:
 useless = "defined?";
 break;
    }

    if (useless) {
 rb_compile_warn((parser->ruby_sourcefile), ((int)(((long)(node)->flags)>>(8 +7))), ("possibly useless use of %s in void context"), (useless));
    }
}

static void
void_stmts_gen(struct parser_params *parser, NODE *node)
{
    if (!!(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) return;
    if (!node) return;
    if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) != NODE_BLOCK) return;

    for (;;) {
 if (!node->u3.node) return;
 void_expr_gen(parser, (node->u1.node));
 node = node->u3.node;
    }
}

static NODE *
remove_begin(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && ((int) (((n1)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BEGIN && n1->u2.node) {
 *n = n1 = n1->u2.node;
    }
    return node;
}

static NODE *
remove_begin_all(NODE *node)
{
    NODE **n = &node, *n1 = node;
    while (n1 && ((int) (((n1)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BEGIN) {
 *n = n1 = n1->u2.node;
    }
    return node;
}

static void
reduce_nodes_gen(struct parser_params *parser, NODE **body)
{
    NODE *node = *body;

    if (!node) {
 *body = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
 return;
    }





    while (node) {
 int newline = (int)(node->flags & (((VALUE)1)<<7));
 switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
   end:
   case NODE_NIL:
     *body = 0;
     return;
   case NODE_RETURN:
     *body = node = node->u1.node;
     if (newline && node) node->flags |= (((VALUE)1)<<7);
     continue;
   case NODE_BEGIN:
     *body = node = node->u2.node;
     if (newline && node) node->flags |= (((VALUE)1)<<7);
     continue;
   case NODE_BLOCK:
     body = &node->u2.node->u1.node;
     break;
   case NODE_IF:
   case NODE_UNLESS:
     if (((!node->u2.node) ? (node->u3.node ? (body = &node->u3.node, 1) : 0) : (!node->u3.node) ? (body = &node->u2.node, 1) : (reduce_nodes_gen(parser,(&node->u2.node)), body = &node->u3.node, 1))) break;
     return;
   case NODE_CASE:
     body = &node->u2.node;
     break;
   case NODE_WHEN:
     if (!((!node->u2.node) ? (node->u3.node ? (body = &node->u3.node, 1) : 0) : (!node->u3.node) ? (body = &node->u2.node, 1) : (reduce_nodes_gen(parser,(&node->u2.node)), body = &node->u3.node, 1))) goto end;
     break;
   case NODE_ENSURE:
     if (!((!node->u1.node) ? (node->u2.node ? (body = &node->u2.node, 1) : 0) : (!node->u2.node) ? (body = &node->u1.node, 1) : (reduce_nodes_gen(parser,(&node->u1.node)), body = &node->u2.node, 1))) goto end;
     break;
   case NODE_RESCUE:
     if (node->u3.node) {
  body = &node->u2.node;
  break;
     }
     if (!((!node->u1.node) ? (node->u2.node ? (body = &node->u2.node, 1) : 0) : (!node->u2.node) ? (body = &node->u1.node, 1) : (reduce_nodes_gen(parser,(&node->u1.node)), body = &node->u2.node, 1))) goto end;
     break;
   default:
     return;
 }
 node = *body;
 if (newline && node) node->flags |= (((VALUE)1)<<7);
    }


}

static int
is_static_content(NODE *node)
{
    if (!node) return 1;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_HASH:
 if (!(node = node->u1.node)) break;
      case NODE_ARRAY:
 do {
     if (!is_static_content(node->u1.node)) return 0;
 } while ((node = node->u3.node) != 0);
      case NODE_LIT:
      case NODE_STR:
      case NODE_NIL:
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_ZARRAY:
 break;
      default:
 return 0;
    }
    return 1;
}

static int
assign_in_cond(struct parser_params *parser, NODE *node)
{
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_MASGN:
      case NODE_LASGN:
      case NODE_DASGN:
      case NODE_DASGN_CURR:
      case NODE_GASGN:
      case NODE_IASGN:
 break;

      default:
 return 0;
    }

    if (!node->u2.node) return 1;
    if (is_static_content(node->u2.node)) {

 parser_warn(parser, (node->u2.node), ("found = in conditional, should be =="));
    }
    return 1;
}

static void
warn_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warn(parser, (node), (str));
}

static void
warning_unless_e_option(struct parser_params *parser, NODE *node, const char *str)
{
    if (!e_option_supplied(parser)) parser_warning(parser, (node), (str));
}

static NODE *cond0(struct parser_params*,NODE*,int,const rb_code_range_t*);

static NODE*
range_op(struct parser_params *parser, NODE *node, const rb_code_range_t *location)
{
    enum node_type type;

    if (node == 0) return 0;

    type = ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8));
    value_expr_gen(parser, (node) = remove_begin(node));
    if (type == NODE_LIT && (((int)(long)(node->u1.value))&RUBY_FIXNUM_FLAG)) {
 warn_unless_e_option(parser, node, "integer literal in conditional range");
 return new_call_gen(parser, node,tEQ,new_list_gen(parser, new_gvar_gen(parser, (__builtin_constant_p("$.") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("$.")), (long)strlen(("$."))); (ID) rb_intern_id_cache; }) : rb_intern("$.")), location), location),location);
    }
    return cond0(parser, node, 0, location);
}

static int
literal_node(NODE *node)
{
    if (!node) return 1;
    if (!(node = (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE ? (node)->u2.node : node))) return 1;
    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_LIT:
      case NODE_STR:
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_DREGX:
      case NODE_DSYM:
 return 2;
      case NODE_TRUE:
      case NODE_FALSE:
      case NODE_NIL:
 return 1;
    }
    return 0;
}

static NODE*
cond0(struct parser_params *parser, NODE *node, int method_op, const rb_code_range_t *location)
{
    if (node == 0) return 0;
    if (!(node = (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_SCOPE ? (node)->u2.node : node))) return 0;
    assign_in_cond(parser, node);

    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_DSTR:
      case NODE_EVSTR:
      case NODE_STR:
 if (!method_op) rb_compile_warn((parser->ruby_sourcefile), ((parser->ruby_sourceline)), ("string literal in condition"));
 break;

      case NODE_DREGX:
 {
     NODE *match;
     if (!method_op)
  warning_unless_e_option(parser, node, "regex literal in condition");

     match = node_newnode(parser, ((NODE_MATCH2)), ((VALUE)(node)), ((VALUE)(new_gvar_gen(parser, idLASTLINE, location))), ((VALUE)(0)));
     nd_set_loc(match, location);
     return match;
 }

      case NODE_AND:
      case NODE_OR:
 node->u1.node = cond0(parser, node->u1.node, 0, location);
 node->u2.node = cond0(parser, node->u2.node, 0, location);
 break;

      case NODE_DOT2:
      case NODE_DOT3:
 node->u1.node = range_op(parser, node->u1.node, location);
 node->u2.node = range_op(parser, node->u2.node, location);
 if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_DOT2) (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_FLIP2))<<8)&(((VALUE)0x7f)<<8)));
 else if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_DOT3) (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_FLIP3))<<8)&(((VALUE)0x7f)<<8)));
 if (!method_op && !e_option_supplied(parser)) {
     int b = literal_node(node->u1.node);
     int e = literal_node(node->u2.node);
     if ((b == 1 && e == 1) || (b + e >= 2 && !(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) {
  parser_warn(parser, (node), ("range literal in condition"));
     }
 }
 break;

      case NODE_DSYM:
 if (!method_op) parser_warning(parser, (node), ("literal in condition"));
 break;

      case NODE_LIT:
 if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(node->u1.value))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((node->u1.value) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((node->u1.value) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((node->u1.value) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((node->u1.value) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(node->u1.value)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(node->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(node->u1.value))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(node->u1.value))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(node->u1.value) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(node->u1.value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(node->u1.value))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
     if (!method_op)
  warn_unless_e_option(parser, node, "regex literal in condition");
     (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_MATCH))<<8)&(((VALUE)0x7f)<<8)));
 }
 else {
     if (!method_op)
  parser_warning(parser, (node), ("literal in condition"));
 }
      default:
 break;
    }
    return node;
}

static NODE*
cond_gen(struct parser_params *parser, NODE *node, int method_op, const rb_code_range_t *location)
{
    if (node == 0) return 0;
    return cond0(parser, node, method_op, location);
}

static NODE*
new_nil_gen(struct parser_params *parser, const rb_code_range_t *location)
{
    NODE *node_nil = node_newnode(parser, ((NODE_NIL)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(node_nil, location);
    return node_nil;
}

static NODE*
new_if_gen(struct parser_params *parser, NODE *cc, NODE *left, NODE *right, const rb_code_range_t *location)
{
    NODE *node_if;

    if (!cc) return right;
    cc = cond0(parser, cc, 0, location);
    node_if = node_newnode(parser, ((NODE_IF)), ((VALUE)(cc)), ((VALUE)(left)), ((VALUE)(right)));
    nd_set_loc(node_if, location);
    return newline_node(node_if);
}

static NODE*
new_unless_gen(struct parser_params *parser, NODE *cc, NODE *left, NODE *right, const rb_code_range_t *location)
{
    NODE *node_unless;

    if (!cc) return right;
    cc = cond0(parser, cc, 0, location);
    node_unless = node_newnode(parser, ((NODE_UNLESS)), ((VALUE)(cc)), ((VALUE)(left)), ((VALUE)(right)));
    nd_set_loc(node_unless, location);
    return newline_node(node_unless);
}

static NODE*
logop_gen(struct parser_params *parser, enum node_type type, NODE *left, NODE *right,
   const rb_code_range_t *op_loc, const rb_code_range_t *location)
{
    NODE *op;
    value_expr_gen(parser, (left) = remove_begin(left));
    if (left && (enum node_type)((int) (((left)->flags & (((VALUE)0x7f)<<8))>>8)) == type) {
 NODE *node = left, *second;
 while ((second = node->u2.node) != 0 && (enum node_type)((int) (((second)->flags & (((VALUE)0x7f)<<8))>>8)) == type) {
     node = second;
 }
 node->u2.node = node_newnode(parser, ((type)), ((VALUE)(second)), ((VALUE)(right)), ((VALUE)(0)));
 node->u2.node->nd_loc = *location;
 (node->u2.node)->flags=(((node->u2.node)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((op_loc->first_loc.lineno)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
 left->nd_loc.last_loc = location->last_loc;
 return left;
    }
    op = node_newnode(parser, ((type)), ((VALUE)(left)), ((VALUE)(right)), ((VALUE)(0)));
    op->nd_loc = *location;
    (op)->flags=(((op)->flags&~((VALUE)(-1)<<(8 +7)))|((VALUE)((op_loc->first_loc.lineno)&(((long)1<<(sizeof(VALUE)*8 -(8 +7)))-1))<<(8 +7)));
    return op;
}

static void
no_blockarg(struct parser_params *parser, NODE *node)
{
    if (node && ((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_BLOCK_PASS) {
 parser_compile_error(parser, "block argument should not be given");
    }
}

static NODE *
ret_args_gen(struct parser_params *parser, NODE *node)
{
    if (node) {
 no_blockarg(parser, node);
 if (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_ARRAY) {
     if (node->u3.node == 0) {
  node = node->u1.node;
     }
     else {
  (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_VALUES))<<8)&(((VALUE)0x7f)<<8)));
     }
 }
    }
    return node;
}

static NODE *
new_yield_gen(struct parser_params *parser, NODE *node, const rb_code_range_t *location)
{
    NODE *yield;
    if (node) no_blockarg(parser, node);

    yield = node_newnode(parser, ((NODE_YIELD)), ((VALUE)(node)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(yield, location);
    return yield;
}

static VALUE
negate_lit_gen(struct parser_params *parser, VALUE lit)
{
    int type = rb_type((VALUE)(lit));
    switch (type) {
      case RUBY_T_FIXNUM:
 lit = (((VALUE)(-((long)(((long)(lit))>>(int)(1)))))<<1 | RUBY_FIXNUM_FLAG);
 break;
      case RUBY_T_BIGNUM:
 (((struct RBasic*)(lit))->flags ^= ((VALUE)((VALUE)RUBY_FL_USER1)));
 lit = rb_big_norm(lit);
 break;
      case RUBY_T_RATIONAL:
 rb_obj_write((VALUE)((lit)), (VALUE *)(&((struct RRational *)(lit))->num), (VALUE)((negate_lit_gen(parser, ((struct RRational*)(lit))->num))), "parse.y", 10766);
 break;
      case RUBY_T_COMPLEX:
 rb_obj_write((VALUE)((lit)), (VALUE *)(&((struct RComplex *)(lit))->real), (VALUE)((negate_lit_gen(parser, ((struct RComplex*)(lit))->real))), "parse.y", 10769);
 rb_obj_write((VALUE)((lit)), (VALUE *)(&((struct RComplex *)(lit))->imag), (VALUE)((negate_lit_gen(parser, ((struct RComplex*)(lit))->imag))), "parse.y", 10770);
 break;
      case RUBY_T_FLOAT:

 if (((((int)(long)(lit))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG)) {
     lit = rb_float_new_inline(-rb_float_value_inline(lit));
     break;
 }

 ((struct RFloat*)(lit))->float_value = -rb_float_value_inline(lit);
 break;
      default:
 rb_parser_fatal(parser, "unknown literal type (%d) passed to negate_lit", type);
 break;
    }
    return lit;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
    if (node2) {
 node2->u1.node = node1;
 ((node2)->nd_loc.first_loc.lineno = (((int)((node1)->nd_loc.first_loc.lineno))));
 ((node2)->nd_loc.first_loc.column = (((int)((node1)->nd_loc.first_loc.column))));
 return node2;
    }
    return node1;
}


static NODE*
new_args_gen(struct parser_params *parser, NODE *m, NODE *o, ID r, NODE *p, NODE *tail, const rb_code_range_t *location)
{
    int saved_line = (parser->ruby_sourceline);
    struct rb_args_info *args = tail->u3.args;

    args->pre_args_num = m ? rb_long2int_inline(m->u2.argc) : 0;
    args->pre_init = m ? m->u3.node : 0;

    args->post_args_num = p ? rb_long2int_inline(p->u2.argc) : 0;
    args->post_init = p ? p->u3.node : 0;
    args->first_post_arg = p ? p->u1.id : 0;

    args->rest_arg = r;

    args->opt_args = o;

    (parser->ruby_sourceline) = saved_line;
    nd_set_loc(tail, location);

    return tail;
}

static NODE*
new_args_tail_gen(struct parser_params *parser, NODE *k, ID kr, ID b, const rb_code_range_t *kr_location)
{
    int saved_line = (parser->ruby_sourceline);
    struct rb_args_info *args;
    NODE *node;

    args = (((struct rb_args_info*)ruby_xcalloc((size_t)(1),sizeof(struct rb_args_info))));
    add_mark_object_gen(parser, ((VALUE)rb_imemo_alloc_new((VALUE)args, 0, 0, 0)));
    node = node_newnode(parser, ((NODE_ARGS)), ((VALUE)(0)), ((VALUE)(0)), ((VALUE)(args)));
    if (parser->error_p) return node;

    args->block_arg = b;
    args->kw_args = k;

    if (k) {






 ID kw_bits;
 NODE *kwn = k;
 struct vtable *required_kw_vars = vtable_alloc_gen(parser, 10848, ((void*)0));
 struct vtable *kw_vars = vtable_alloc_gen(parser, 10849, ((void*)0));
 int i;

 while (kwn) {
     NODE *val_node = kwn->u2.node->u2.node;
     ID vid = kwn->u2.node->u1.id;

     if (val_node == ((NODE *)-1)) {
  vtable_add_gen(parser, 10857, "required_kw_vars", required_kw_vars, vid);
     }
     else {
  vtable_add_gen(parser, 10860, "kw_vars", kw_vars, vid);
     }

     kwn = kwn->u3.node;
 }

 kw_bits = internal_id_gen(parser);
 if (kr && (id_type(kr)==RUBY_ID_JUNK)) vtable_pop_gen(parser, 10867, "lvtbl->args", (parser->lvtbl)->args, 1);
 vtable_pop_gen(parser, 10868, "lvtbl->args", (parser->lvtbl)->args, vtable_size(required_kw_vars) + vtable_size(kw_vars) + (b != 0));

 for (i=0; i<vtable_size(required_kw_vars); i++) arg_var_gen(parser, (required_kw_vars->tbl[i]));
 for (i=0; i<vtable_size(kw_vars); i++) arg_var_gen(parser, (kw_vars->tbl[i]));
 vtable_free_gen(parser, 10872, "required_kw_vars", required_kw_vars);
 vtable_free_gen(parser, 10873, "kw_vars", kw_vars);

 arg_var_gen(parser, (kw_bits));
 if (kr) arg_var_gen(parser, (kr));
 if (b) arg_var_gen(parser, (b));

 args->kw_rest_arg = new_dvar_gen(parser, kr, kr_location);
 args->kw_rest_arg->u2.id = kw_bits;
    }
    else if (kr) {
 if (b) vtable_pop_gen(parser, 10883, "lvtbl->args", (parser->lvtbl)->args, 1);
 arg_var_gen(parser, (kr));
 if (b) arg_var_gen(parser, (b));
 args->kw_rest_arg = new_dvar_gen(parser, kr, kr_location);
    }

    (parser->ruby_sourceline) = saved_line;
    return node;
}

static NODE*
dsym_node_gen(struct parser_params *parser, NODE *node, const rb_code_range_t *location)
{
    VALUE lit;

    if (!node) {
 return new_lit_gen(parser, ( ({ __builtin_constant_p(idNULL) && !(!(idNULL&RUBY_ID_STATIC_SYM)&&idNULL>tLAST_OP_ID) ? (((VALUE)(idNULL)<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym(idNULL); })), location);
    }

    switch (((int) (((node)->flags & (((VALUE)0x7f)<<8))>>8))) {
      case NODE_DSTR:
 (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_DSYM))<<8)&(((VALUE)0x7f)<<8)));
 nd_set_loc(node, location);
 break;
      case NODE_STR:
 lit = node->u1.value;
 add_mark_object_gen(parser, (node->u1.value = ( ({ __builtin_constant_p(rb_intern_str(lit)) && !(!(rb_intern_str(lit)&RUBY_ID_STATIC_SYM)&&rb_intern_str(lit)>tLAST_OP_ID) ? (((VALUE)(rb_intern_str(lit))<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym(rb_intern_str(lit)); }))));
 (node)->flags=(((node)->flags&~(((VALUE)0x7f)<<8))|((((unsigned long)(NODE_LIT))<<8)&(((VALUE)0x7f)<<8)));
 nd_set_loc(node, location);
 break;
      default:
 node = node_newnode(parser, ((NODE_DSYM)), ((VALUE)(((VALUE)RUBY_Qnil))), ((VALUE)(1)), ((VALUE)(new_list_gen(parser, node, location))));
 nd_set_loc(node, location);
 break;
    }
    return node;
}

static int
append_literal_keys(st_data_t k, st_data_t v, st_data_t h)
{
    NODE *node = (NODE *)v;
    NODE **result = (NODE **)h;
    node->u2.argc = 2;
    node->u3.node->u2.node = node->u3.node;
    node->u3.node->u3.node = 0;
    if (*result)
 list_concat(*result, node);
    else
 *result = node;
    return ST_CONTINUE;
}

static NODE *
remove_duplicate_keys(struct parser_params *parser, NODE *hash, const rb_code_range_t *location)
{
    st_table *literal_keys = st_init_numtable_with_size(hash->u2.argc / 2);
    NODE *result = 0;
    while (hash && hash->u1.node && hash->u3.node) {
 NODE *head = hash->u1.node;
 NODE *value = hash->u3.node;
 NODE *next = value->u3.node;
 VALUE key = (VALUE)head;
 st_data_t data;
 if (((int) (((head)->flags & (((VALUE)0x7f)<<8))>>8)) == NODE_LIT &&
     st_lookup(literal_keys, (key = head->u1.value), &data)) {
     rb_compile_warn((parser->ruby_sourcefile), (int)(((long)((NODE *)data)->flags)>>(8 +7)),
       "key %+li\v is duplicated and overwritten on line %d",
       head->u1.value, (int)(((long)(head)->flags)>>(8 +7)));
     head = ((NODE *)data)->u3.node;
     head->u1.node = block_append_gen(parser,(head->u1.node),(value->u1.node),(location));
 }
 else {
     st_insert(literal_keys, (st_data_t)key, (st_data_t)hash);
 }
 hash = next;
    }
    st_foreach(literal_keys, append_literal_keys, (st_data_t)&result);
    st_free_table(literal_keys);
    if (hash) {
 if (!result) result = hash;
 else list_concat(result, hash);
    }
    return result;
}

static NODE *
new_hash_gen(struct parser_params *parser, NODE *hash, const rb_code_range_t *location)
{
    NODE *nd_hash;
    if (hash) hash = remove_duplicate_keys(parser, hash, location);
    nd_hash = node_newnode(parser, ((NODE_HASH)), ((VALUE)(hash)), ((VALUE)(0)), ((VALUE)(0)));
    nd_set_loc(nd_hash, location);
    return nd_hash;
}



static NODE *
new_op_assign_gen(struct parser_params *parser, NODE *lhs, ID op, NODE *rhs, const rb_code_range_t *location)
{
    NODE *asgn;

    if (lhs) {
 ID vid = lhs->u1.id;
 rb_code_range_t lhs_location = lhs->nd_loc;
 if (op == tOROP) {
     lhs->u2.node = rhs;
     nd_set_loc(lhs, location);
     asgn = node_newnode(parser, ((NODE_OP_ASGN_OR)), ((VALUE)(gettable_gen(parser,(vid),(&lhs_location)))), ((VALUE)(lhs)), ((VALUE)(0)));
     nd_set_loc(asgn, location);
     if (((vid)>tLAST_OP_ID)) {
  switch (id_type(vid)) {
    case RUBY_ID_GLOBAL:
    case RUBY_ID_INSTANCE:
    case RUBY_ID_CLASS:
      asgn->u3.id = vid;
  }
     }
 }
 else if (op == tANDOP) {
     lhs->u2.node = rhs;
     nd_set_loc(lhs, location);
     asgn = node_newnode(parser, ((NODE_OP_ASGN_AND)), ((VALUE)(gettable_gen(parser,(vid),(&lhs_location)))), ((VALUE)(lhs)), ((VALUE)(0)));
     nd_set_loc(asgn, location);
 }
 else {
     asgn = lhs;
     asgn->u2.node = new_call_gen(parser, gettable_gen(parser,(vid),(&lhs_location)),op,new_list_gen(parser, rhs, &rhs->nd_loc),location);
     nd_set_loc(asgn, location);
 }
    }
    else {
 asgn = new_begin_gen(parser,0,location);
    }
    return asgn;
}

static NODE *
new_attr_op_assign_gen(struct parser_params *parser, NODE *lhs,
         ID atype, ID attr, ID op, NODE *rhs, const rb_code_range_t *location)
{
    NODE *asgn;

    if (op == tOROP) {
 op = 0;
    }
    else if (op == tANDOP) {
 op = 1;
    }
    asgn = node_newnode(parser, ((NODE_OP_ASGN2)), ((VALUE)(lhs)), ((VALUE)(rhs)), ((VALUE)(node_newnode(parser, ((NODE_OP_ASGN2)), ((VALUE)(attr)), ((VALUE)(op)), ((VALUE)(((atype) == ((VALUE)(tANDDOT)))))))));
    nd_set_loc(asgn, location);
    fixpos(asgn, lhs);
    return asgn;
}

static NODE *
new_const_op_assign_gen(struct parser_params *parser, NODE *lhs, ID op, NODE *rhs, const rb_code_range_t *location)
{
    NODE *asgn;

    if (op == tOROP) {
 op = 0;
    }
    else if (op == tANDOP) {
 op = 1;
    }
    if (lhs) {
 asgn = node_newnode(parser, ((NODE_OP_CDECL)), ((VALUE)(lhs)), ((VALUE)(rhs)), ((VALUE)(op)));
    }
    else {
 asgn = new_begin_gen(parser,0,location);
    }
    fixpos(asgn, lhs);
    nd_set_loc(asgn, location);
    return asgn;
}

static NODE *
const_path_field_gen(struct parser_params *parser, NODE *head, ID mid, const rb_code_range_t *location)
{
    NODE *colon2 = node_newnode(parser, ((NODE_COLON2)), ((VALUE)(head)), ((VALUE)(mid)), ((VALUE)(0)));
    nd_set_loc(colon2, location);
    return colon2;
}

static NODE *
const_decl_gen(struct parser_params *parser, NODE *path, const rb_code_range_t *location)
{
    if ((parser->in_def)) {
 parser_yyerror(parser, ("dynamic constant assignment"));
    }
    return new_cdecl_gen(parser,0,0,(path),location);
}
static void
warn_unused_var(struct parser_params *parser, struct local_vars *local)
{
    int i, cnt;
    ID *v, *u;

    if (!local->used) return;
    v = local->vars->tbl;
    u = local->used->tbl;
    cnt = local->used->pos;
    if (cnt != local->vars->pos) {
 rb_parser_fatal(parser, "local->used->pos != local->vars->pos");
    }
    for (i = 0; i < cnt; ++i) {
 if (!v[i] || (u[i] & ((ID)1 << (sizeof(ID) * 8 - 1)))) continue;
 if (is_private_local_id(v[i])) continue;
 rb_compile_warn((parser->ruby_sourcefile), ((int)u[i]), ("assigned but unused variable - %li\v"), (rb_id2str(v[i])));
    }
}

static void
local_push_gen(struct parser_params *parser, int inherit_dvars)
{
    struct local_vars *local;

    local = ((struct local_vars*)ruby_xmalloc(sizeof(struct local_vars)));
    local->prev = (parser->lvtbl);
    local->args = vtable_alloc_gen(parser, 11150, 0);
    local->vars = vtable_alloc_gen(parser, 11151, inherit_dvars ? ((void*)1) : ((void*)0));
    local->used = !(inherit_dvars &&
      (((parser->base_block != 0 && !(parser->in_main)) || e_option_supplied(parser))+0)) &&
 !(((VALUE)((*rb_ruby_verbose_ptr())) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) ? vtable_alloc_gen(parser, 11154, 0) : 0;



    local->cmdargs = (parser->cmdarg_stack);
    (((parser->cmdarg_stack))=((0)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 11159) : (void)0));
    (parser->lvtbl) = local;
}

static void
local_pop_gen(struct parser_params *parser)
{
    struct local_vars *local = (parser->lvtbl)->prev;
    if ((parser->lvtbl)->used) {
 warn_unused_var(parser, (parser->lvtbl));
 vtable_free_gen(parser, 11169, "lvtbl->used", (parser->lvtbl)->used);
    }







    vtable_free_gen(parser, 11178, "lvtbl->args", (parser->lvtbl)->args);
    vtable_free_gen(parser, 11179, "lvtbl->vars", (parser->lvtbl)->vars);
    (((parser->cmdarg_stack))=(((parser->lvtbl)->cmdargs)), ((parser->yydebug) ? rb_parser_show_bitstack(parser, (parser->cmdarg_stack), "cmdarg_stack(set)", 11180) : (void)0));
    ruby_xfree((parser->lvtbl));
    (parser->lvtbl) = local;
}


static ID*
local_tbl_gen(struct parser_params *parser)
{
    int cnt_args = vtable_size((parser->lvtbl)->args);
    int cnt_vars = vtable_size((parser->lvtbl)->vars);
    int cnt = cnt_args + cnt_vars;
    int i, j;
    ID *buf;

    if (cnt <= 0) return 0;
    buf = ((ID*)ruby_xmalloc2((size_t)(cnt + 1),sizeof(ID)));
    memcpy((buf+1), ((parser->lvtbl)->args->tbl), sizeof(ID)*(size_t)(cnt_args));

    for (i = 0, j = cnt_args+1; i < cnt_vars; ++i) {
 ID id = (parser->lvtbl)->vars->tbl[i];
 if (!vtable_included((parser->lvtbl)->args, id)) {
     buf[j++] = id;
 }
    }
    if (--j < cnt) ((buf)=(ID*)ruby_xrealloc2((char*)(buf),(size_t)((cnt = j) + 1),sizeof(ID)));
    buf[0] = cnt;

    add_mark_object_gen(parser, ((VALUE)rb_imemo_alloc_new((VALUE)buf, 0, 0, 0)));

    return buf;
}


static void
arg_var_gen(struct parser_params *parser, ID id)
{
    vtable_add_gen(parser, 11217, "lvtbl->args", (parser->lvtbl)->args, id);
}

static void
local_var_gen(struct parser_params *parser, ID id)
{
    vtable_add_gen(parser, 11223, "lvtbl->vars", (parser->lvtbl)->vars, id);
    if ((parser->lvtbl)->used) {
 vtable_add_gen(parser, 11225, "lvtbl->used", (parser->lvtbl)->used, (ID)(parser->ruby_sourceline));
    }
}

static int
local_id_gen(struct parser_params *parser, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;

    vars = (parser->lvtbl)->vars;
    args = (parser->lvtbl)->args;
    used = (parser->lvtbl)->used;

    while (vars && ((VALUE)(vars->prev) & ~(VALUE)3)) {
 vars = vars->prev;
 args = args->prev;
 if (used) used = used->prev;
    }

    if (vars && vars->prev == ((void*)1)) {
 return rb_local_defined(id, parser->base_block);
    }
    else if (vtable_included(args, id)) {
 return 1;
    }
    else {
 int i = vtable_included(vars, id);
 if (i && used && vidrefp) *vidrefp = &used->tbl[i-1];
 return i != 0;
    }
}

static const struct vtable *
dyna_push_gen(struct parser_params *parser)
{
    (parser->lvtbl)->args = vtable_alloc_gen(parser, 11260, (parser->lvtbl)->args);
    (parser->lvtbl)->vars = vtable_alloc_gen(parser, 11261, (parser->lvtbl)->vars);
    if ((parser->lvtbl)->used) {
 (parser->lvtbl)->used = vtable_alloc_gen(parser, 11263, (parser->lvtbl)->used);
    }
    return (parser->lvtbl)->args;
}

static void
dyna_pop_vtable(struct parser_params *parser, struct vtable **vtblp)
{
    struct vtable *tmp = *vtblp;
    *vtblp = tmp->prev;







    vtable_free_gen(parser, 11280, "tmp", tmp);
}

static void
dyna_pop_1(struct parser_params *parser)
{
    struct vtable *tmp;

    if ((tmp = (parser->lvtbl)->used) != 0) {
 warn_unused_var(parser, (parser->lvtbl));
 (parser->lvtbl)->used = (parser->lvtbl)->used->prev;
 vtable_free_gen(parser, 11291, "tmp", tmp);
    }
    dyna_pop_vtable(parser, &(parser->lvtbl)->args);
    dyna_pop_vtable(parser, &(parser->lvtbl)->vars);
}

static void
dyna_pop_gen(struct parser_params *parser, const struct vtable *lvargs)
{
    while ((parser->lvtbl)->args != lvargs) {
 dyna_pop_1(parser);
 if (!(parser->lvtbl)->args) {
     struct local_vars *local = (parser->lvtbl)->prev;
     ruby_xfree((parser->lvtbl));
     (parser->lvtbl) = local;
 }
    }
    dyna_pop_1(parser);
}

static int
dyna_in_block_gen(struct parser_params *parser)
{
    return ((VALUE)((parser->lvtbl)->vars) & ~(VALUE)3) && (parser->lvtbl)->vars->prev != ((void*)0);
}

static int
dvar_defined_gen(struct parser_params *parser, ID id, ID **vidrefp)
{
    struct vtable *vars, *args, *used;
    int i;

    args = (parser->lvtbl)->args;
    vars = (parser->lvtbl)->vars;
    used = (parser->lvtbl)->used;

    while (((VALUE)(vars) & ~(VALUE)3)) {
 if (vtable_included(args, id)) {
     return 1;
 }
 if ((i = vtable_included(vars, id)) != 0) {
     if (used && vidrefp) *vidrefp = &used->tbl[i-1];
     return 1;
 }
 args = args->prev;
 vars = vars->prev;
 if (!vidrefp) used = 0;
 if (used) used = used->prev;
    }

    if (vars == ((void*)1)) {
        return rb_dvar_defined(id, parser->base_block);
    }

    return 0;
}

static int
dvar_curr_gen(struct parser_params *parser, ID id)
{
    return (vtable_included((parser->lvtbl)->args, id) ||
     vtable_included((parser->lvtbl)->vars, id));
}

static void
reg_fragment_enc_error(struct parser_params* parser, VALUE str, int c)
{
    parser_compile_error(parser,
        "regexp encoding option '%c' differs from source encoding '%s'",
        c, (rb_enc_get(str))->name);
}


int
rb_reg_fragment_setenc(struct parser_params* parser, VALUE str, int options)
{
    int c = (((options)>>8)&0xff);

    if (c) {
 int opt, idx;
 rb_char_to_option_kcode(c, &opt, &idx);
 if (idx != ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)) &&
     rb_enc_str_coderange(str) != RUBY_ENC_CODERANGE_7BIT) {
            goto error;
 }
 rb_enc_set_index((str), (idx));
    }
    else if (((options)&32)) {
        if (!((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) == 0) &&
            rb_enc_str_coderange(str) != RUBY_ENC_CODERANGE_7BIT) {
            c = 'n';
            goto error;
        }
 rb_enc_associate(str, rb_ascii8bit_encoding());
    }
    else if ((parser->enc) == rb_usascii_encoding()) {
 if (rb_enc_str_coderange(str) != RUBY_ENC_CODERANGE_7BIT) {

     rb_enc_associate(str, rb_usascii_encoding());
 }
 else {
     rb_enc_associate(str, rb_ascii8bit_encoding());
 }
    }
    return 0;

  error:
    return c;
}

static void
reg_fragment_setenc_gen(struct parser_params* parser, VALUE str, int options)
{
    int c = rb_reg_fragment_setenc(parser, str, options);
    if (c) reg_fragment_enc_error(parser, str, c);
}

static int
reg_fragment_check_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE err;
    reg_fragment_setenc_gen(parser, (str), (options));
    err = rb_reg_check_preprocess(str);
    if (err != ((VALUE)RUBY_Qnil)) {
        err = rb_obj_as_string(err);
        parser_compile_error(parser, "%li\v", err);
 return 0;
    }
    return 1;
}

typedef struct {
    struct parser_params* parser;
    rb_encoding *enc;
    NODE *succ_block;
    const rb_code_range_t *location;
} reg_named_capture_assign_t;

static int
reg_named_capture_assign_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    reg_named_capture_assign_t *arg = (reg_named_capture_assign_t*)arg0;
    struct parser_params* parser = arg->parser;
    rb_encoding *enc = arg->enc;
    long len = name_end - name;
    const char *s = (const char *)name;
    ID var;
    NODE *node, *succ;

    if (!len || (*name != '_' && rb_isascii(*name) && !((enc))->is_code_ctype((*name),6,(enc))) ||
 (len < 12 && reserved_word(s, (int)len)) ||
 !rb_enc_symname2_p(s, len, enc)) {
        return ST_CONTINUE;
    }
    var = rb_intern3(s,len,enc);
    node = node_assign_gen(parser, (assignable_gen(parser, (var), (0), (arg->location))), (new_lit_gen(parser, ( ({ __builtin_constant_p(var) && !(!(var&RUBY_ID_STATIC_SYM)&&var>tLAST_OP_ID) ? (((VALUE)(var)<<RUBY_SPECIAL_SHIFT)|RUBY_SYMBOL_FLAG) : rb_id2sym(var); })), arg->location)), (arg->location));
    succ = arg->succ_block;
    if (!succ) succ = new_begin_gen(parser,0,arg->location);
    succ = block_append_gen(parser,(succ),(node),(arg->location));
    arg->succ_block = succ;
    return ST_CONTINUE;
}

static NODE *
reg_named_capture_assign_gen(struct parser_params* parser, VALUE regexp, const rb_code_range_t *location)
{
    reg_named_capture_assign_t arg;

    arg.parser = parser;
    arg.enc = rb_enc_get(regexp);
    arg.succ_block = 0;
    arg.location = location;
    onig_foreach_name((((struct RRegexp*)(regexp))->ptr), reg_named_capture_assign_iter, &arg);

    if (!arg.succ_block) return 0;
    return arg.succ_block->u3.node;
}

static VALUE
parser_reg_compile(struct parser_params* parser, VALUE str, int options)
{
    reg_fragment_setenc_gen(parser, (str), (options));
    return rb_parser_reg_compile(parser, str, options);
}

VALUE
rb_parser_reg_compile(struct parser_params* parser, VALUE str, int options)
{
    return rb_reg_compile(str, options & 0xff, (parser->ruby_sourcefile), (parser->ruby_sourceline));
}

static VALUE
reg_compile_gen(struct parser_params* parser, VALUE str, int options)
{
    VALUE re;
    VALUE err;

    err = rb_errinfo();
    re = parser_reg_compile(parser, str, options);
    if (!((VALUE)(re) != ((VALUE)RUBY_Qnil))) {
 VALUE m = rb_attr_get(rb_errinfo(), idMesg);
 rb_set_errinfo(err);
 parser_compile_error(parser, "%li\v", m);
 return ((VALUE)RUBY_Qnil);
    }
    return re;
}
void
rb_parser_set_options(VALUE vparser, int print, int loop, int chomp, int split)
{
    struct parser_params *parser;
    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    parser->do_print = print;
    parser->do_loop = loop;
    parser->do_chomp = chomp;
    parser->do_split = split;
}

static NODE *
parser_append_options(struct parser_params *parser, NODE *node)
{
    static const rb_code_range_t default_location = {{1, 0}, {1, 0}};

    if (parser->do_print) {
 node = block_append_gen(parser,(node),(new_fcall_gen(parser, (__builtin_constant_p("print") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("print")), (long)strlen(("print"))); (ID) rb_intern_id_cache; }) : rb_intern("print")), node_newnode(parser, ((NODE_ARRAY)), ((VALUE)(new_gvar_gen(parser, idLASTLINE, &default_location))), ((VALUE)(1)), ((VALUE)(0))), &default_location)),(&default_location));



    }

    if (parser->do_loop) {
 if (parser->do_split) {
     node = block_append_gen(parser,(node_newnode(parser, ((NODE_GASGN)), ((VALUE)((__builtin_constant_p("$F") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("$F")), (long)strlen(("$F"))); (ID) rb_intern_id_cache; }) : rb_intern("$F")))), ((VALUE)(new_call_gen(parser, new_gvar_gen(parser, idLASTLINE, &default_location),(__builtin_constant_p("split") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("split")), (long)strlen(("split"))); (ID) rb_intern_id_cache; }) : rb_intern("split")),0,&default_location))), ((VALUE)(rb_global_entry((__builtin_constant_p("$F") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("$F")), (long)strlen(("$F"))); (ID) rb_intern_id_cache; }) : rb_intern("$F"))))))),(node),(&default_location));



 }
 if (parser->do_chomp) {
     node = block_append_gen(parser,(new_call_gen(parser, new_gvar_gen(parser, idLASTLINE, &default_location),(__builtin_constant_p("chomp!") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("chomp!")), (long)strlen(("chomp!"))); (ID) rb_intern_id_cache; }) : rb_intern("chomp!")),0,&default_location)),(node),(&default_location));

 }

 node = node_newnode(parser, ((NODE_WHILE)), ((VALUE)(node_newnode(parser, ((NODE_VCALL)), ((VALUE)(0)), ((VALUE)(idGets)), ((VALUE)(0))))), ((VALUE)(node)), ((VALUE)(1)));
    }

    return node;
}

void
rb_init_parse(void)
{

    (void)nodetype;
    (void)nodeline;
}


static ID
internal_id_gen(struct parser_params *parser)
{
    ID id = (ID)vtable_size((parser->lvtbl)->args) + (ID)vtable_size((parser->lvtbl)->vars);
    id += ((tLAST_TOKEN - RUBY_ID_INTERNAL) >> RUBY_ID_SCOPE_SHIFT) + 1;
    return RUBY_ID_STATIC_SYM | RUBY_ID_INTERNAL | (id << RUBY_ID_SCOPE_SHIFT);
}

static void
parser_initialize(struct parser_params *parser)
{

    (parser->command_start) = 1;
    (parser->ruby_sourcefile_string) = ((VALUE)RUBY_Qnil);





    parser->error_buffer = ((VALUE)RUBY_Qfalse);

    parser->debug_buffer = ((VALUE)RUBY_Qnil);
    parser->debug_output = rb_stdout;
    parser->enc = rb_utf8_encoding();
}






static void
parser_mark(void *ptr)
{
    struct parser_params *parser = (struct parser_params*)ptr;

    rb_gc_mark((parser->lex.input));
    rb_gc_mark((parser->lex.prevline));
    rb_gc_mark((parser->lex.lastline));
    rb_gc_mark((parser->lex.nextline));
    rb_gc_mark((parser->ruby_sourcefile_string));
    rb_gc_mark((VALUE)(parser->lex.strterm));
    rb_gc_mark((VALUE)parser->ast);

    rb_gc_mark((parser->debug_lines));
    rb_gc_mark(parser->compile_option);
    rb_gc_mark(parser->error_buffer);






    rb_gc_mark(parser->debug_buffer);
    rb_gc_mark(parser->debug_output);

    rb_gc_mark((VALUE)parser->heap);

}

static void
parser_free(void *ptr)
{
    struct parser_params *parser = (struct parser_params*)ptr;
    struct local_vars *local, *prev;

    if ((parser->tokenbuf)) {
        ruby_xfree((parser->tokenbuf));
    }
    for (local = (parser->lvtbl); local; local = prev) {
 if (local->vars) ruby_xfree(local->vars);
 prev = local->prev;
 ruby_xfree(local);
    }
    {
 token_info *ptinfo;
 while ((ptinfo = parser->token_info) != 0) {
     parser->token_info = ptinfo->next;
     ruby_xfree(ptinfo);
 }
    }
    ruby_xfree(ptr);
}

static size_t
parser_memsize(const void *ptr)
{
    struct parser_params *parser = (struct parser_params*)ptr;
    struct local_vars *local;
    size_t size = sizeof(*parser);

    size += (parser->toksiz);
    for (local = (parser->lvtbl); local; local = local->prev) {
 size += sizeof(*local);
 if (local->vars) size += local->vars->capa * sizeof(ID);
    }
    return size;
}

static const rb_data_type_t parser_data_type = {

    "parser",



    {
 parser_mark,
 parser_free,
 parser_memsize,
    },
    0, 0, 1
};




const struct kwtable *
rb_reserved_word(const char *str, unsigned int len)
{
    return reserved_word(str, len);
}

VALUE
rb_parser_new(void)
{
    struct parser_params *p;
    VALUE parser = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(0, sizeof(struct parser_params), &parser_data_type); (void)((p) = (struct parser_params *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });

    parser_initialize(p);
    return parser;
}

VALUE
rb_parser_set_context(VALUE vparser, const struct rb_block *base, int main)
{
    struct parser_params *parser;

    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    parser->error_buffer = main ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qnil);
    parser->base_block = base;
    (parser->in_main) = main;
    return vparser;
}
VALUE
rb_parser_end_seen_p(VALUE vparser)
{
    struct parser_params *parser;

    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    return (parser->ruby__end__seen) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}







VALUE
rb_parser_encoding(VALUE vparser)
{
    struct parser_params *parser;

    ((parser) = (struct parser_params*)rb_check_typeddata((vparser), (&parser_data_type)));
    return rb_enc_from_encoding((parser->enc));
}







VALUE
rb_parser_get_yydebug(VALUE self)
{
    struct parser_params *parser;

    ((parser) = (struct parser_params*)rb_check_typeddata((self), (&parser_data_type)));
    return (parser->yydebug) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}







VALUE
rb_parser_set_yydebug(VALUE self, VALUE flag)
{
    struct parser_params *parser;

    ((parser) = (struct parser_params*)rb_check_typeddata((self), (&parser_data_type)));
    (parser->yydebug) = !(((VALUE)(flag) & (VALUE)~((VALUE)RUBY_Qnil)) == 0);
    return flag;
}
void *
rb_parser_malloc(struct parser_params *parser, size_t size)
{
    size_t cnt = ((1) * (size) / sizeof(YYSTYPE));
    rb_imemo_alloc_t *n = rb_imemo_alloc_new(0, (VALUE)parser->heap, 0, 0);
    void *ptr = ruby_xmalloc(size);

    return ((parser->heap = (n))->ptr = (ptr), (n)->cnt = (cnt), (ptr));
}

void *
rb_parser_calloc(struct parser_params *parser, size_t nelem, size_t size)
{
    size_t cnt = ((nelem) * (size) / sizeof(YYSTYPE));
    rb_imemo_alloc_t *n = rb_imemo_alloc_new(0, (VALUE)parser->heap, 0, 0);
    void *ptr = ruby_xcalloc(nelem, size);

    return ((parser->heap = (n))->ptr = (ptr), (n)->cnt = (cnt), (ptr));
}

void *
rb_parser_realloc(struct parser_params *parser, void *ptr, size_t size)
{
    rb_imemo_alloc_t *n;
    size_t cnt = ((1) * (size) / sizeof(YYSTYPE));

    if (ptr && (n = parser->heap) != ((void*)0)) {
 do {
     if (n->ptr == ptr) {
  n->ptr = ptr = ruby_xrealloc(ptr, size);
  if (n->cnt) n->cnt = cnt;
  return ptr;
     }
 } while ((n = n->next) != ((void*)0));
    }
    n = rb_imemo_alloc_new(0, (VALUE)parser->heap, 0, 0);
    ptr = ruby_xrealloc(ptr, size);
    return ((parser->heap = (n))->ptr = (ptr), (n)->cnt = (cnt), (ptr));
}

void
rb_parser_free(struct parser_params *parser, void *ptr)
{
    rb_imemo_alloc_t **prev = &parser->heap, *n;

    while ((n = *prev) != ((void*)0)) {
 if (n->ptr == ptr) {
     *prev = n->next;
     rb_gc_force_recycle((VALUE)n);
     break;
 }
 prev = &n->next;
    }
    ruby_xfree(ptr);
}


void
rb_parser_printf(struct parser_params *parser, const char *fmt, ...)
{
    va_list ap;
    VALUE mesg = parser->debug_buffer;

    if (!((VALUE)(mesg) != ((VALUE)RUBY_Qnil))) parser->debug_buffer = mesg =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    __builtin_va_start(ap, fmt);
    rb_str_vcatf(mesg, fmt, ap);
    __builtin_va_end(ap);
    if ((!(((struct RBasic*)(mesg))->flags & RSTRING_NOEMBED) ? (((struct RString*)(mesg))->as.ary + (long)((((struct RBasic*)(mesg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(mesg))->as.heap.ptr + ((struct RString*)(mesg))->as.heap.len))[-1] == '\n') {
 rb_io_write(parser->debug_output, mesg);
 parser->debug_buffer = ((VALUE)RUBY_Qnil);
    }
}

static void
parser_compile_error(struct parser_params *parser, const char *fmt, ...)
{
    va_list ap;

    rb_io_flush(parser->debug_output);
    parser->error_p = 1;
    __builtin_va_start(ap, fmt);
    parser->error_buffer =
 rb_syntax_error_append(parser->error_buffer,
          (parser->ruby_sourcefile_string),
          (parser->ruby_sourceline),
          rb_long2int_inline((parser->lex.pcur) - (parser->lex.pbeg)),
          (parser->enc), fmt, ap);
    __builtin_va_end(ap);
}
