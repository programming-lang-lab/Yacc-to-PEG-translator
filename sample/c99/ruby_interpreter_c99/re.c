








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






unsigned long ruby_scan_oct(const char *, size_t, size_t *);

unsigned long ruby_scan_hex(const char *, size_t, size_t *);
void ruby_setenv(const char *, const char *);
void ruby_unsetenv(const char *);

char *ruby_strdup(const char *);



char *ruby_getcwd(void);

double ruby_strtod(const char *, char **);



void ruby_each_words(const char *, void (*)(const char*, int, void*), void *);

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


VALUE rb_eRegexpError;

typedef char onig_errmsg_buffer[90];






static const char casetable[] = {
        '\000', '\001', '\002', '\003', '\004', '\005', '\006', '\007',
        '\010', '\011', '\012', '\013', '\014', '\015', '\016', '\017',
        '\020', '\021', '\022', '\023', '\024', '\025', '\026', '\027',
        '\030', '\031', '\032', '\033', '\034', '\035', '\036', '\037',

        '\040', '\041', '\042', '\043', '\044', '\045', '\046', '\047',

        '\050', '\051', '\052', '\053', '\054', '\055', '\056', '\057',

        '\060', '\061', '\062', '\063', '\064', '\065', '\066', '\067',

        '\070', '\071', '\072', '\073', '\074', '\075', '\076', '\077',

        '\100', '\141', '\142', '\143', '\144', '\145', '\146', '\147',

        '\150', '\151', '\152', '\153', '\154', '\155', '\156', '\157',

        '\160', '\161', '\162', '\163', '\164', '\165', '\166', '\167',

        '\170', '\171', '\172', '\133', '\134', '\135', '\136', '\137',

        '\140', '\141', '\142', '\143', '\144', '\145', '\146', '\147',

        '\150', '\151', '\152', '\153', '\154', '\155', '\156', '\157',

        '\160', '\161', '\162', '\163', '\164', '\165', '\166', '\167',

        '\170', '\171', '\172', '\173', '\174', '\175', '\176', '\177',
        '\200', '\201', '\202', '\203', '\204', '\205', '\206', '\207',
        '\210', '\211', '\212', '\213', '\214', '\215', '\216', '\217',
        '\220', '\221', '\222', '\223', '\224', '\225', '\226', '\227',
        '\230', '\231', '\232', '\233', '\234', '\235', '\236', '\237',
        '\240', '\241', '\242', '\243', '\244', '\245', '\246', '\247',
        '\250', '\251', '\252', '\253', '\254', '\255', '\256', '\257',
        '\260', '\261', '\262', '\263', '\264', '\265', '\266', '\267',
        '\270', '\271', '\272', '\273', '\274', '\275', '\276', '\277',
        '\300', '\301', '\302', '\303', '\304', '\305', '\306', '\307',
        '\310', '\311', '\312', '\313', '\314', '\315', '\316', '\317',
        '\320', '\321', '\322', '\323', '\324', '\325', '\326', '\327',
        '\330', '\331', '\332', '\333', '\334', '\335', '\336', '\337',
        '\340', '\341', '\342', '\343', '\344', '\345', '\346', '\347',
        '\350', '\351', '\352', '\353', '\354', '\355', '\356', '\357',
        '\360', '\361', '\362', '\363', '\364', '\365', '\366', '\367',
        '\370', '\371', '\372', '\373', '\374', '\375', '\376', '\377',
};




int
rb_memcicmp(const void *x, const void *y, long len)
{
    const unsigned char *p1 = x, *p2 = y;
    int tmp;

    while (len--) {
 if ((tmp = casetable[(unsigned)*p1++] - casetable[(unsigned)*p2++]))
     return tmp;
    }
    return 0;
}


static inline long
rb_memsearch_ss(const unsigned char *xs, long m, const unsigned char *ys, long n)
{
    const unsigned char *y;

    if (y = memmem(ys, n, xs, m))
 return y - ys;
    else
 return -1;
}
static inline long
rb_memsearch_qs(const unsigned char *xs, long m, const unsigned char *ys, long n)
{
    const unsigned char *x = xs, *xe = xs + m;
    const unsigned char *y = ys;
    VALUE i, qstable[256];


    for (i = 0; i < 256; ++i)
 qstable[i] = m + 1;
    for (; x < xe; ++x)
 qstable[*x] = xe - x;

    for (; y + m <= ys + n; y += *(qstable + y[m])) {
 if (*xs == *y && memcmp(xs, y, m) == 0)
     return y - ys;
    }
    return -1;
}

static inline unsigned int
rb_memsearch_qs_utf8_hash(const unsigned char *x)
{
    register const unsigned int mix = 8353;
    register unsigned int h = *x;
    if (h < 0xC0) {
 return h + 256;
    }
    else if (h < 0xE0) {
 h *= mix;
 h += x[1];
    }
    else if (h < 0xF0) {
 h *= mix;
 h += x[1];
 h *= mix;
 h += x[2];
    }
    else if (h < 0xF5) {
 h *= mix;
 h += x[1];
 h *= mix;
 h += x[2];
 h *= mix;
 h += x[3];
    }
    else {
 return h + 256;
    }
    return (unsigned char)h;
}

static inline long
rb_memsearch_qs_utf8(const unsigned char *xs, long m, const unsigned char *ys, long n)
{
    const unsigned char *x = xs, *xe = xs + m;
    const unsigned char *y = ys;
    VALUE i, qstable[512];


    for (i = 0; i < 512; ++i) {
 qstable[i] = m + 1;
    }
    for (; x < xe; ++x) {
 qstable[rb_memsearch_qs_utf8_hash(x)] = xe - x;
    }

    for (; y + m <= ys + n; y += qstable[rb_memsearch_qs_utf8_hash(y+m)]) {
 if (*xs == *y && memcmp(xs, y, m) == 0)
     return y - ys;
    }
    return -1;
}

static inline long
rb_memsearch_wchar(const unsigned char *xs, long m, const unsigned char *ys, long n)
{
    const unsigned char *x = xs, x0 = *xs, *y = ys;
    enum {char_size = 2};

    for (n -= m; n >= 0; n -= char_size, y += char_size) {
 if (x0 == *y && memcmp(x+1, y+1, m-1) == 0)
     return y - ys;
    }
    return -1;
}

static inline long
rb_memsearch_qchar(const unsigned char *xs, long m, const unsigned char *ys, long n)
{
    const unsigned char *x = xs, x0 = *xs, *y = ys;
    enum {char_size = 4};

    for (n -= m; n >= 0; n -= char_size, y += char_size) {
 if (x0 == *y && memcmp(x+1, y+1, m-1) == 0)
     return y - ys;
    }
    return -1;
}

long
rb_memsearch(const void *x0, long m, const void *y0, long n, rb_encoding *enc)
{
    const unsigned char *x = x0, *y = y0;

    if (m > n) return -1;
    else if (m == n) {
 return memcmp(x0, y0, m) == 0 ? 0 : -1;
    }
    else if (m < 1) {
 return 0;
    }
    else if (m == 1) {
 const unsigned char *ys = memchr(y, *x, n);

 if (ys)
     return ys - y;
 else
     return -1;
    }
    else if ((__builtin_expect(!!((enc)->min_enc_len == 1), 1))) {
 if (m <= 8) {
     return rb_memsearch_ss(x0, m, y0, n);
 }
 else if (enc == rb_utf8_encoding()){
     return rb_memsearch_qs_utf8(x0, m, y0, n);
 }
    }
    else if ((__builtin_expect(!!((enc)->min_enc_len == 2), 1))) {
 return rb_memsearch_wchar(x0, m, y0, n);
    }
    else if ((__builtin_expect(!!((enc)->min_enc_len == 4), 1))) {
 return rb_memsearch_qchar(x0, m, y0, n);
    }
    return rb_memsearch_qs(x0, m, y0, n);
}
static int
char_to_option(int c)
{
    int val;

    switch (c) {
      case 'i':
 val = 1U;
 break;
      case 'x':
 val = (1U << 1);
 break;
      case 'm':
 val = ((1U << 1) << 1);
 break;
      default:
 val = 0;
 break;
    }
    return val;
}

static char *
option_to_str(char str[4], int options)
{
    char *p = str;
    if (options & ((1U << 1) << 1)) *p++ = 'm';
    if (options & 1U) *p++ = 'i';
    if (options & (1U << 1)) *p++ = 'x';
    *p = 0;
    return str;
}

extern int
rb_char_to_option_kcode(int c, int *option, int *kcode)
{
    *option = 0;

    switch (c) {
      case 'n':
        *kcode = RUBY_ENCINDEX_ASCII;
        return (*option = 32);
      case 'e':
 *kcode = RUBY_ENCINDEX_EUC_JP;
 break;
      case 's':
 *kcode = RUBY_ENCINDEX_Windows_31J;
 break;
      case 'u':
 *kcode = RUBY_ENCINDEX_UTF_8;
 break;
      default:
 *kcode = -1;
 return (*option = char_to_option(c));
    }
    *option = 16;
    return 1;
}

static void
rb_reg_check(VALUE re)
{
    if (!(((struct RRegexp*)(re))->ptr) || !(((struct RRegexp*)(re))->src) || !(!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr)) {
 rb_raise(rb_eTypeError, "uninitialized Regexp");
    }
}

static void
rb_reg_expr_str(VALUE str, const char *s, long len,
 rb_encoding *enc, rb_encoding *resenc)
{
    const char *p, *pend;
    int cr = RUBY_ENC_CODERANGE_UNKNOWN;
    int need_escape = 0;
    int c, clen;

    p = s; pend = p + len;
    rb_str_coderange_scan_restartable(p, pend, enc, &cr);
    if (rb_enc_asciicompat_inline(enc) && rb_enc_coderange_clean_p(cr)) {
 while (p < pend) {
     c = rb_enc_ascget(p, pend, &clen, enc);
     if (c == -1) {
  if (enc == resenc) {
      p += rb_enc_mbclen((p),(pend),(enc));
  }
  else {
      need_escape = 1;
      break;
  }
     }
     else if (c != '/' && ((enc))->is_code_ctype((c),7,(enc))) {
  p += clen;
     }
     else {
  need_escape = 1;
  break;
     }
 }
    }
    else {
 need_escape = 1;
    }

    if (!need_escape) {
 rb_str_cat(str, s, len);
    }
    else {
 int unicode_p = rb_enc_unicode_p(enc);
 p = s;
 while (p<pend) {
            c = rb_enc_ascget(p, pend, &clen, enc);
     if (c == '\\' && p+clen < pend) {
  int n = clen + rb_enc_mbclen((p+clen),(pend),(enc));
  rb_str_cat(str, p, n);
  p += n;
  continue;
     }
     else if (c == '/') {
  char c = '\\';
  rb_str_cat(str, &c, 1);
  rb_str_cat(str, p, clen);
     }
     else if (c == -1) {
  clen = rb_enc_precise_mbclen(p, pend, enc);
  if (!(0 < (clen))) {
      c = (unsigned char)*p;
      clen = 1;
      goto hex;
  }
  if (resenc) {
      unsigned int c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(pend)),(enc));
      rb_str_buf_cat_escaped_char(str, c, unicode_p);
  }
  else {
      clen = (clen);
      rb_str_cat(str, p, clen);
  }
     }
     else if (((enc))->is_code_ctype((c),7,(enc))) {
  rb_str_cat(str, p, clen);
     }
     else if (!((enc))->is_code_ctype((c),9,(enc))) {
  char b[8];

       hex:
  ruby_snprintf(b, sizeof(b), "\\x%02X", c);
  rb_str_cat(str, b, 4);
     }
     else {
  rb_str_cat(str, p, clen);
     }
     p += clen;
 }
    }
}

static VALUE
rb_reg_desc(const char *s, long len, VALUE re)
{
    rb_encoding *enc = rb_enc_get(re);
    VALUE str =  ({ (__builtin_constant_p("/")) ? rb_str_cat(rb_str_buf_new((long)strlen("/")), ("/"), (long)strlen("/")) : rb_str_buf_new_cstr("/"); });
    rb_encoding *resenc = rb_default_internal_encoding();
    if (resenc == ((void*)0)) resenc = rb_default_external_encoding();

    if (re && rb_enc_asciicompat_inline(enc)) {
 rb_enc_copy(str, re);
    }
    else {
 rb_enc_associate(str, rb_usascii_encoding());
    }
    rb_reg_expr_str(str, s, len, enc, resenc);
     ({ (__builtin_constant_p("/")) ? rb_str_cat((str), ("/"), (long)strlen("/")) : rb_str_cat_cstr((str), ("/")); });
    if (re) {
 char opts[4];
 rb_reg_check(re);
 if (*option_to_str(opts, (((struct RRegexp*)(re))->ptr)->options))
      ({ (__builtin_constant_p(opts)) ? rb_str_cat((str), (opts), (long)strlen(opts)) : rb_str_cat_cstr((str), (opts)); });
 if (((struct RBasic*)(re))->flags & ((VALUE)RUBY_FL_USER6))
      ({ (__builtin_constant_p("n")) ? rb_str_cat((str), ("n"), (long)strlen("n")) : rb_str_cat_cstr((str), ("n")); });
    }
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(re))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}
static VALUE
rb_reg_source(VALUE re)
{
    VALUE str;

    rb_reg_check(re);
    str = rb_str_dup((((struct RRegexp*)(re))->src));
    if ((!!((!(((VALUE)((re)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((re)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((re)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((re))))->flags&((RUBY_FL_TAINT))):0))) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}
static VALUE
rb_reg_inspect(VALUE re)
{
    if (!(((struct RRegexp*)(re))->ptr) || !(((struct RRegexp*)(re))->src) || !(!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr)) {
        return rb_any_to_s(re);
    }
    return rb_reg_desc((!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), re);
}
static VALUE
rb_reg_to_s(VALUE re)
{
    int options, opt;
    const int embeddable = ((1U << 1) << 1)|1U|(1U << 1);
    long len;
    const OnigUChar* ptr;
    VALUE str =  ({ (__builtin_constant_p("(?")) ? rb_str_cat(rb_str_buf_new((long)strlen("(?")), ("(?"), (long)strlen("(?")) : rb_str_buf_new_cstr("(?"); });
    char optbuf[5];
    rb_encoding *enc = rb_enc_get(re);

    rb_reg_check(re);

    rb_enc_copy(str, re);
    options = (((struct RRegexp*)(re))->ptr)->options;
    ptr = (OnigUChar*)(!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr);
    len = (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len);
  again:
    if (len >= 4 && ptr[0] == '(' && ptr[1] == '?') {
 int err = 1;
 ptr += 2;
 if ((len -= 2) > 0) {
     do {
                opt = char_to_option((int )*ptr);
                if (opt != 0) {
                    options |= opt;
                }
                else {
                    break;
                }
  ++ptr;
     } while (--len > 0);
 }
 if (len > 1 && *ptr == '-') {
     ++ptr;
     --len;
     do {
                opt = char_to_option((int )*ptr);
                if (opt != 0) {
                    options &= ~opt;
                }
                else {
                    break;
                }
  ++ptr;
     } while (--len > 0);
 }
 if (*ptr == ')') {
     --len;
     ++ptr;
     goto again;
 }
 if (*ptr == ':' && ptr[len-1] == ')') {
     Regexp *rp;
     VALUE verbose = (*rb_ruby_verbose_ptr());
     (*rb_ruby_verbose_ptr()) = ((VALUE)RUBY_Qfalse);

     ++ptr;
     len -= 2;
            err = onig_new(&rp, ptr, ptr + len, options,
      enc, OnigDefaultSyntax, ((void*)0));
     onig_free(rp);
     (*rb_ruby_verbose_ptr()) = verbose;
 }
 if (err) {
     options = (((struct RRegexp*)(re))->ptr)->options;
     ptr = (OnigUChar*)(!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr);
     len = (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len);
 }
    }

    if (*option_to_str(optbuf, options))  ({ (__builtin_constant_p(optbuf)) ? rb_str_cat((str), (optbuf), (long)strlen(optbuf)) : rb_str_cat_cstr((str), (optbuf)); });

    if ((options & embeddable) != embeddable) {
 optbuf[0] = '-';
 option_to_str(optbuf + 1, ~options);
  ({ (__builtin_constant_p(optbuf)) ? rb_str_cat((str), (optbuf), (long)strlen(optbuf)) : rb_str_cat_cstr((str), (optbuf)); });
    }

     ({ (__builtin_constant_p(":")) ? rb_str_cat((str), (":"), (long)strlen(":")) : rb_str_cat_cstr((str), (":")); });
    if (rb_enc_asciicompat_inline(enc)) {
 rb_reg_expr_str(str, (char*)ptr, len, enc, ((void*)0));
  ({ (__builtin_constant_p(")")) ? rb_str_cat((str), (")"), (long)strlen(")")) : rb_str_cat_cstr((str), (")")); });
    }
    else {
 const char *s, *e;
 char *paren;
 ptrdiff_t n;
  ({ (__builtin_constant_p(")")) ? rb_str_cat((str), (")"), (long)strlen(")")) : rb_str_cat_cstr((str), (")")); });
 rb_enc_associate(str, rb_usascii_encoding());
 str = rb_str_encode(str, rb_enc_from_encoding(enc), 0, ((VALUE)RUBY_Qnil));


 s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
 s = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(e-1),(OnigUChar*)(e)));
 n = e - s;
 paren = ((char*)__builtin_alloca (sizeof(char)*(n)));
 memcpy(paren, s, n);
 rb_str_resize(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - n);

 rb_reg_expr_str(str, (char*)ptr, len, enc, ((void*)0));
 rb_str_cat(str, paren, n);
    }
    rb_enc_copy(str, re);

    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(re))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}

static void
rb_reg_raise(const char *s, long len, const char *err, VALUE re)
{
    VALUE desc = rb_reg_desc(s, len, re);

    rb_raise(rb_eRegexpError, "%s: %li\v", err, desc);
}

static VALUE
rb_enc_reg_error_desc(const char *s, long len, rb_encoding *enc, int options, const char *err)
{
    char opts[6];
    VALUE desc =  ({ (__builtin_constant_p(err)) ? rb_str_cat(rb_str_buf_new((long)strlen(err)), (err), (long)strlen(err)) : rb_str_buf_new_cstr(err); });
    rb_encoding *resenc = rb_default_internal_encoding();
    if (resenc == ((void*)0)) resenc = rb_default_external_encoding();

    rb_enc_associate(desc, enc);
     ({ (__builtin_constant_p(": /")) ? rb_str_cat((desc), (": /"), (long)strlen(": /")) : rb_str_cat_cstr((desc), (": /")); });
    rb_reg_expr_str(desc, s, len, enc, resenc);
    opts[0] = '/';
    option_to_str(opts + 1, options);
     ({ (__builtin_constant_p(opts)) ? rb_str_cat((desc), (opts), (long)strlen(opts)) : rb_str_cat_cstr((desc), (opts)); });
    return rb_exc_new_str(rb_eRegexpError, desc);
}

static void
rb_enc_reg_raise(const char *s, long len, rb_encoding *enc, int options, const char *err)
{
    rb_exc_raise(rb_enc_reg_error_desc(s, len, enc, options, err));
}

static VALUE
rb_reg_error_desc(VALUE str, int options, const char *err)
{
    return rb_enc_reg_error_desc((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len),
     rb_enc_get(str), options, err);
}

static void
rb_reg_raise_str(VALUE str, int options, const char *err)
{
    rb_exc_raise(rb_reg_error_desc(str, options, err));
}
static VALUE
rb_reg_casefold_p(VALUE re)
{
    rb_reg_check(re);
    if ((((struct RRegexp*)(re))->ptr)->options & 1U) return ((VALUE)RUBY_Qtrue);
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_reg_options_m(VALUE re)
{
    int options = rb_reg_options(re);
    return (((VALUE)((int)(options)))<<1 | RUBY_FIXNUM_FLAG);
}

static int
reg_names_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg)
{
    VALUE ary = (VALUE)arg;
    rb_ary_push(ary,  ({ (__builtin_constant_p((const char *)name) && __builtin_constant_p(name_end-name)) ? rb_enc_str_new_static(((const char *)name), (name_end-name), (regex->enc)) : rb_enc_str_new(((const char *)name), (name_end-name), (regex->enc)); }));
    return 0;
}
static VALUE
rb_reg_names(VALUE re)
{
    VALUE ary;
    rb_reg_check(re);
    ary = rb_ary_new_capa(onig_number_of_names((((struct RRegexp*)(re))->ptr)));
    onig_foreach_name((((struct RRegexp*)(re))->ptr), reg_names_iter, (void*)ary);
    return ary;
}

static int
reg_named_captures_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg)
{
    VALUE hash = (VALUE)arg;
    VALUE ary = rb_ary_new_capa(back_num);
    int i;

    for (i = 0; i < back_num; i++)
        rb_ary_store(ary, i, (((VALUE)((int)(back_refs[i])))<<1 | RUBY_FIXNUM_FLAG));

    rb_hash_aset(hash,  ({ (__builtin_constant_p((const char*)name) && __builtin_constant_p(name_end-name)) ? rb_str_new_static(((const char*)name), (name_end-name)) : rb_str_new(((const char*)name), (name_end-name)); }),ary);

    return 0;
}
static VALUE
rb_reg_named_captures(VALUE re)
{
    regex_t *reg = (rb_reg_check(re), (((struct RRegexp*)(re))->ptr));
    VALUE hash = rb_hash_new_with_size(onig_number_of_names(reg));
    onig_foreach_name(reg, reg_named_captures_iter, (void*)hash);
    return hash;
}

static int
onig_new_with_source(regex_t** reg, const OnigUChar* pattern, const OnigUChar* pattern_end,
       OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax,
       OnigErrorInfo* einfo, const char *sourcefile, int sourceline)
{
    int r;

    *reg = (regex_t* )malloc(sizeof(regex_t));
    if ((((void*)(*reg)) == (void*)0)) return -5;

    r = onig_reg_init(*reg, option, OnigDefaultCaseFoldFlag, enc, syntax);
    if (r) goto err;

    r = onig_compile_ruby(*reg, pattern, pattern_end, einfo, sourcefile, sourceline);
    if (r) {
      err:
 onig_free(*reg);
 *reg = ((void*)0);
    }
    return r;
}

static Regexp*
make_regexp(const char *s, long len, rb_encoding *enc, int flags, onig_errmsg_buffer err,
 const char *sourcefile, int sourceline)
{
    Regexp *rp;
    int r;
    OnigErrorInfo einfo;
    r = onig_new_with_source(&rp, (OnigUChar*)s, (OnigUChar*)(s + len), flags,
   enc, OnigDefaultSyntax, &einfo, sourcefile, sourceline);
    if (r) {
 onig_error_code_to_str((OnigUChar*)err, r, &einfo);
 return 0;
    }
    return rp;
}
VALUE rb_cMatch;

static VALUE
match_alloc(VALUE klass)
{
    struct RMatch *(match) = (struct RMatch*)(((RUBY_T_MATCH) & ((VALUE)RUBY_FL_WB_PROTECTED)) ? rb_wb_protected_newobj_of(klass, (RUBY_T_MATCH) & ~((VALUE)RUBY_FL_WB_PROTECTED)) : rb_wb_unprotected_newobj_of(klass, RUBY_T_MATCH));

    match->str = 0;
    match->rmatch = 0;
    match->regexp = 0;
    match->rmatch = (((struct rmatch*)ruby_xcalloc((size_t)(1),sizeof(struct rmatch))));

    return (VALUE)match;
}

int
rb_reg_region_copy(struct re_registers *to, const struct re_registers *from)
{
    onig_region_copy(to, (OnigRegion *)from);
    if (to->allocated) return 0;
    rb_gc();
    onig_region_copy(to, (OnigRegion *)from);
    if (to->allocated) return 0;
    return -5;
}

typedef struct {
    long byte_pos;
    long char_pos;
} pair_t;

static int
pair_byte_cmp(const void *pair1, const void *pair2)
{
    long diff = ((pair_t*)pair1)->byte_pos - ((pair_t*)pair2)->byte_pos;

    return diff ? diff > 0 ? 1 : -1 : 0;



}

static void
update_char_offset(VALUE match)
{
    struct rmatch *rm = ((struct RMatch*)(match))->rmatch;
    struct re_registers *regs;
    int i, num_regs, num_pos;
    long c;
    char *s, *p, *q;
    rb_encoding *enc;
    pair_t *pairs;

    if (rm->char_offset_updated)
        return;

    regs = &rm->regs;
    num_regs = rm->regs.num_regs;

    if (rm->char_offset_num_allocated < num_regs) {
        ((rm->char_offset)=(struct rmatch_offset*)ruby_xrealloc2((char*)(rm->char_offset),(size_t)(num_regs),sizeof(struct rmatch_offset)));
        rm->char_offset_num_allocated = num_regs;
    }

    enc = rb_enc_get(((struct RMatch*)(match))->str);
    if ((enc)->max_enc_len == 1) {
        for (i = 0; i < num_regs; i++) {
            rm->char_offset[i].beg = (regs->beg[(i)]);
            rm->char_offset[i].end = (regs->end[(i)]);
        }
        rm->char_offset_updated = 1;
        return;
    }

    pairs = ((pair_t*)__builtin_alloca (sizeof(pair_t)*(num_regs*2)));
    num_pos = 0;
    for (i = 0; i < num_regs; i++) {
        if ((regs->beg[(i)]) < 0)
            continue;
        pairs[num_pos++].byte_pos = (regs->beg[(i)]);
        pairs[num_pos++].byte_pos = (regs->end[(i)]);
    }
    qsort(pairs, num_pos, sizeof(pair_t), pair_byte_cmp);

    s = p = (!(((struct RBasic*)(((struct RMatch*)(match))->str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RMatch*)(match))->str))->as.ary : ((struct RString*)(((struct RMatch*)(match))->str))->as.heap.ptr);
    c = 0;
    for (i = 0; i < num_pos; i++) {
        q = s + pairs[i].byte_pos;
        c += rb_enc_strlen(p, q, enc);
        pairs[i].char_pos = c;
        p = q;
    }

    for (i = 0; i < num_regs; i++) {
        pair_t key, *found;
        if ((regs->beg[(i)]) < 0) {
            rm->char_offset[i].beg = -1;
            rm->char_offset[i].end = -1;
            continue;
        }

        key.byte_pos = (regs->beg[(i)]);
        found = bsearch(&key, pairs, num_pos, sizeof(pair_t), pair_byte_cmp);
        rm->char_offset[i].beg = found->char_pos;

        key.byte_pos = (regs->end[(i)]);
        found = bsearch(&key, pairs, num_pos, sizeof(pair_t), pair_byte_cmp);
        rm->char_offset[i].end = found->char_pos;
    }

    rm->char_offset_updated = 1;
}

static void
match_check(VALUE match)
{
    if (!((struct RMatch*)(match))->regexp) {
 rb_raise(rb_eTypeError, "uninitialized Match");
    }
}


static VALUE
match_init_copy(VALUE obj, VALUE orig)
{
    struct rmatch *rm;

    if (!((obj) != (orig) && (rb_obj_init_copy((obj), (orig)), 1))) return obj;

    ((struct RMatch*)(obj))->str = ((struct RMatch*)(orig))->str;
    ((struct RMatch*)(obj))->regexp = ((struct RMatch*)(orig))->regexp;

    rm = ((struct RMatch*)(obj))->rmatch;
    if (rb_reg_region_copy(&rm->regs, (&((struct RMatch*)(orig))->rmatch->regs)))
 rb_memerror();

    if (!((struct RMatch*)(orig))->rmatch->char_offset_updated) {
        rm->char_offset_updated = 0;
    }
    else {
        if (rm->char_offset_num_allocated < rm->regs.num_regs) {
            ((rm->char_offset)=(struct rmatch_offset*)ruby_xrealloc2((char*)(rm->char_offset),(size_t)(rm->regs.num_regs),sizeof(struct rmatch_offset)));
            rm->char_offset_num_allocated = rm->regs.num_regs;
        }
        memcpy((rm->char_offset), (((struct RMatch*)(orig))->rmatch->char_offset), sizeof(struct rmatch_offset)*(size_t)(rm->regs.num_regs));

        rm->char_offset_updated = 1;
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(orig); ; rb_gc_guarded_ptr; }));
    }

    return obj;
}
static VALUE
match_regexp(VALUE match)
{
    VALUE regexp;
    match_check(match);
    regexp = ((struct RMatch*)(match))->regexp;
    if (!((VALUE)(regexp) != ((VALUE)RUBY_Qnil))) {
 VALUE str = rb_reg_nth_match(0, match);
 regexp = rb_reg_regcomp(rb_reg_quote(str));
 ((struct RMatch*)(match))->regexp = regexp;
    }
    return regexp;
}
static VALUE
match_names(VALUE match)
{
    match_check(match);
    if (!((VALUE)(((struct RMatch*)(match))->regexp) != ((VALUE)RUBY_Qnil)))
 return rb_ary_new_capa(0);
    return rb_reg_names(((struct RMatch*)(match))->regexp);
}
static VALUE
match_size(VALUE match)
{
    match_check(match);
    return (((VALUE)((&((struct RMatch*)(match))->rmatch->regs)->num_regs))<<1 | RUBY_FIXNUM_FLAG);
}

static int name_to_backref_number(struct re_registers *, VALUE, const char*, const char*);

static int
match_backref_number(VALUE match, VALUE backref)
{
    const char *name;
    int num;

    struct re_registers *regs = (&((struct RMatch*)(match))->rmatch->regs);
    VALUE regexp = ((struct RMatch*)(match))->regexp;

    match_check(match);
    if (((((VALUE)(backref)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(backref) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(backref) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(backref))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 backref = rb_sym2str(backref);
    }
    else if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(backref))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((backref) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((backref) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((backref) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((backref) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(backref)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(backref) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(backref) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(backref))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(backref))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(backref) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(backref) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(backref))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(backref) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(backref) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(backref))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return rb_num2int_inline(backref);
    }
    name = rb_string_value_cstr(&(backref));

    num = name_to_backref_number(regs, regexp, name, name + strlen(name));

    if (num < 1) {
        rb_raise(rb_eIndexError, "undefined group name reference: %s", name);
    }

    return num;
}

int
rb_reg_backref_number(VALUE match, VALUE backref)
{
    return match_backref_number(match, backref);
}
static VALUE
match_offset(VALUE match, VALUE n)
{
    int i = match_backref_number(match, n);
    struct re_registers *regs = (&((struct RMatch*)(match))->rmatch->regs);

    match_check(match);
    if (i < 0 || regs->num_regs <= i)
 rb_raise(rb_eIndexError, "index %d out of matches", i);

    if ((regs->beg[(i)]) < 0)
 return rb_assoc_new(((VALUE)RUBY_Qnil), ((VALUE)RUBY_Qnil));

    update_char_offset(match);
    return rb_assoc_new((((VALUE)(((struct RMatch*)(match))->rmatch->char_offset[i].beg))<<1 | RUBY_FIXNUM_FLAG),
   (((VALUE)(((struct RMatch*)(match))->rmatch->char_offset[i].end))<<1 | RUBY_FIXNUM_FLAG));
}
static VALUE
match_begin(VALUE match, VALUE n)
{
    int i = match_backref_number(match, n);
    struct re_registers *regs = (&((struct RMatch*)(match))->rmatch->regs);

    match_check(match);
    if (i < 0 || regs->num_regs <= i)
 rb_raise(rb_eIndexError, "index %d out of matches", i);

    if ((regs->beg[(i)]) < 0)
 return ((VALUE)RUBY_Qnil);

    update_char_offset(match);
    return (((VALUE)(((struct RMatch*)(match))->rmatch->char_offset[i].beg))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
match_end(VALUE match, VALUE n)
{
    int i = match_backref_number(match, n);
    struct re_registers *regs = (&((struct RMatch*)(match))->rmatch->regs);

    match_check(match);
    if (i < 0 || regs->num_regs <= i)
 rb_raise(rb_eIndexError, "index %d out of matches", i);

    if ((regs->beg[(i)]) < 0)
 return ((VALUE)RUBY_Qnil);

    update_char_offset(match);
    return (((VALUE)(((struct RMatch*)(match))->rmatch->char_offset[i].end))<<1 | RUBY_FIXNUM_FLAG);
}



void
rb_match_busy(VALUE match)
{
    ((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(match))->flags |= (((VALUE)RUBY_FL_USER2))) : (void)0);
}

int
rb_match_count(VALUE match)
{
    struct re_registers *regs;
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return -1;
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if (!regs) return -1;
    return regs->num_regs;
}

int
rb_match_nth_defined(int nth, VALUE match)
{
    struct re_registers *regs;
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return 0;
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if (!regs) return 0;
    if (nth >= regs->num_regs) {
 return 0;
    }
    if (nth < 0) {
 nth += regs->num_regs;
 if (nth <= 0) return 0;
    }
    return ((regs->beg[(nth)]) != -1);
}

static void
match_set_string(VALUE m, VALUE string, long pos, long len)
{
    struct RMatch *match = (struct RMatch *)m;
    struct rmatch *rmatch = match->rmatch;

    match->str = string;
    match->regexp = ((VALUE)RUBY_Qnil);
    onig_region_resize(&rmatch->regs, 1);
    rmatch->regs.beg[0] = pos;
    rmatch->regs.end[0] = pos + len;
    rmatch->char_offset_updated = 0;
    ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(string) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(string) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(string))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(string))->flags&(RUBY_FL_TAINT)))) : (void)0);
}

void
rb_backref_set_string(VALUE string, long pos, long len)
{
    VALUE match = rb_backref_get();
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil)) || ((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((match)))->flags&((((VALUE)RUBY_FL_USER2)))):0)) {
 match = match_alloc(rb_cMatch);
    }
    match_set_string(match, string, pos, len);
    rb_backref_set(match);
}
static VALUE
rb_reg_fixed_encoding_p(VALUE re)
{
    if (((!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((re)))->flags&((((VALUE)RUBY_FL_USER4)))):0))
        return ((VALUE)RUBY_Qtrue);
    else
        return ((VALUE)RUBY_Qfalse);
}

static VALUE
rb_reg_preprocess(const char *p, const char *end, rb_encoding *enc,
        rb_encoding **fixed_enc, onig_errmsg_buffer err);


static void
reg_enc_error(VALUE re, VALUE str)
{
    rb_raise(rb_eEncCompatError,
      "incompatible encoding regexp match (%s regexp with %s string)",
      (rb_enc_get(re))->name,
      (rb_enc_get(str))->name);
}

static inline int
str_coderange(VALUE str)
{
    int cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
    if (cr == RUBY_ENC_CODERANGE_UNKNOWN) {
 cr = rb_enc_str_coderange(str);
    }
    return cr;
}

static rb_encoding*
rb_reg_prepare_enc(VALUE re, VALUE str, int warn)
{
    rb_encoding *enc = 0;
    int cr = str_coderange(str);

    if (cr == RUBY_ENC_CODERANGE_BROKEN) {
        rb_raise(rb_eArgError,
            "invalid byte sequence in %s",
            (rb_enc_get(str))->name);
    }

    rb_reg_check(re);
    enc = rb_enc_get(str);
    if ((((struct RRegexp*)(re))->ptr)->enc == enc) {
    }
    else if (cr == RUBY_ENC_CODERANGE_7BIT &&
     (((struct RRegexp*)(re))->ptr)->enc == rb_usascii_encoding()) {
 enc = (((struct RRegexp*)(re))->ptr)->enc;
    }
    else if (!rb_enc_asciicompat_inline(enc)) {
 reg_enc_error(re, str);
    }
    else if (rb_reg_fixed_encoding_p(re)) {
        if ((!rb_enc_asciicompat_inline((((struct RRegexp*)(re))->ptr)->enc) ||
      cr != RUBY_ENC_CODERANGE_7BIT)) {
     reg_enc_error(re, str);
 }
 enc = (((struct RRegexp*)(re))->ptr)->enc;
    }
    else if (warn && (((struct RBasic*)(re))->flags & ((VALUE)RUBY_FL_USER6)) &&
 enc != rb_ascii8bit_encoding() &&
 cr != RUBY_ENC_CODERANGE_7BIT) {
 rb_warn("historical binary regexp match /.../n against %s string",
  (enc)->name);
    }
    return enc;
}

regex_t *
rb_reg_prepare_re0(VALUE re, VALUE str, onig_errmsg_buffer err)
{
    regex_t *reg = (((struct RRegexp*)(re))->ptr);
    int r;
    OnigErrorInfo einfo;
    const char *pattern;
    VALUE unescaped;
    rb_encoding *fixed_enc = 0;
    rb_encoding *enc = rb_reg_prepare_enc(re, str, 1);

    if (reg->enc == enc) return reg;

    rb_reg_check(re);
    reg = (((struct RRegexp*)(re))->ptr);
    pattern = (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr);

    unescaped = rb_reg_preprocess(
 pattern, pattern + (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), enc,
 &fixed_enc, err);

    if (unescaped == ((VALUE)RUBY_Qnil)) {
 rb_raise(rb_eArgError, "regexp preprocess failed: %s", err);
    }

    r = onig_new(&reg, (OnigUChar* )(!(((struct RBasic*)(unescaped))->flags & RSTRING_NOEMBED) ? ((struct RString*)(unescaped))->as.ary : ((struct RString*)(unescaped))->as.heap.ptr),
   (OnigUChar* )((!(((struct RBasic*)(unescaped))->flags & RSTRING_NOEMBED) ? ((struct RString*)(unescaped))->as.ary : ((struct RString*)(unescaped))->as.heap.ptr) + (!(((struct RBasic*)(unescaped))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(unescaped))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(unescaped))->as.heap.len)),
   reg->options, enc,
   OnigDefaultSyntax, &einfo);
    if (r) {
 onig_error_code_to_str((OnigUChar*)err, r, &einfo);
 rb_reg_raise(pattern, (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), err, re);
    }

    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(unescaped); ; rb_gc_guarded_ptr; }));
    return reg;
}

regex_t *
rb_reg_prepare_re(VALUE re, VALUE str)
{
    onig_errmsg_buffer err = "";
    return rb_reg_prepare_re0(re, str, err);
}

long
rb_reg_adjust_startpos(VALUE re, VALUE str, long pos, int reverse)
{
    long range;
    rb_encoding *enc;
    OnigUChar *p, *string;

    enc = rb_reg_prepare_enc(re, str, 0);

    if (reverse) {
 range = -pos;
    }
    else {
 range = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - pos;
    }

    if (pos > 0 && ((enc)->max_enc_len) != 1 && pos < (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) {
  string = (OnigUChar*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);

  if (range > 0) {
       p = onigenc_get_right_adjust_char_head(enc, string, string + pos, string + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
  }
  else {
       p = (enc)->left_adjust_char_head(string, string + pos, string + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), enc);
  }
  return p - string;
    }

    return pos;
}


long
rb_reg_search0(VALUE re, VALUE str, long pos, int reverse, int set_backref_str)
{
    long result;
    VALUE match;
    struct re_registers regi, *regs = &regi;
    char *range = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    regex_t *reg;
    int tmpreg;
    onig_errmsg_buffer err = "";

    if (pos > (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) || pos < 0) {
 rb_backref_set(((VALUE)RUBY_Qnil));
 return -1;
    }

    reg = rb_reg_prepare_re0(re, str, err);
    tmpreg = reg != (((struct RRegexp*)(re))->ptr);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt++;

    match = rb_backref_get();
    if (!!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 if (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((match)))->flags&((((VALUE)RUBY_FL_USER2)))):0)) {
     match = ((VALUE)RUBY_Qnil);
 }
 else {
     regs = (&((struct RMatch*)(match))->rmatch->regs);
 }
    }
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 memset((regs), 0, sizeof(struct re_registers)*(size_t)(1));
    }
    if (!reverse) {
 range += (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    }
    result = onig_search(reg,
    (OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)),
    ((OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)),
    ((OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) + pos),
    ((OnigUChar*)range),
    regs, 0U);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt--;
    if (tmpreg) {
 if (((struct RRegexp*)(re))->usecnt) {
     onig_free(reg);
 }
 else {
     onig_free((((struct RRegexp*)(re))->ptr));
     (((struct RRegexp*)(re))->ptr) = reg;
 }
    }
    if (result < 0) {
 if (regs == &regi)
     onig_region_free(regs, 0);
 if (result == -1) {
     rb_backref_set(((VALUE)RUBY_Qnil));
     return result;
 }
 else {
     onig_error_code_to_str((OnigUChar*)err, (int)result);
     rb_reg_raise((!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), err, re);
 }
    }

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 int err;
 match = match_alloc(rb_cMatch);
 err = rb_reg_region_copy((&((struct RMatch*)(match))->rmatch->regs), regs);
 onig_region_free(regs, 0);
 if (err) rb_memerror();
    }
    else {
 ((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(match))->flags &= ~(VALUE)(((VALUE)RUBY_FL_TAINT))) : (void)0);
    }

    if (set_backref_str) {
 ((struct RMatch*)(match))->str = rb_str_new_frozen(str);
 ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    }

    ((struct RMatch*)(match))->regexp = re;
    ((struct RMatch*)(match))->rmatch->char_offset_updated = 0;
    rb_backref_set(match);

    ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(re))->flags&(RUBY_FL_TAINT)))) : (void)0);

    return result;
}

long
rb_reg_search(VALUE re, VALUE str, long pos, int reverse)
{
    return rb_reg_search0(re, str, pos, reverse, 1);
}

signed char
rb_reg_start_with_p(VALUE re, VALUE str)
{
    long result;
    VALUE match;
    struct re_registers regi, *regs = &regi;
    regex_t *reg;
    int tmpreg;
    onig_errmsg_buffer err = "";

    reg = rb_reg_prepare_re0(re, str, err);
    tmpreg = reg != (((struct RRegexp*)(re))->ptr);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt++;

    match = rb_backref_get();
    if (!!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 if (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((match)))->flags&((((VALUE)RUBY_FL_USER2)))):0)) {
     match = ((VALUE)RUBY_Qnil);
 }
 else {
     regs = (&((struct RMatch*)(match))->rmatch->regs);
 }
    }
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 memset((regs), 0, sizeof(struct re_registers)*(size_t)(1));
    }
    result = onig_match(reg,
     (OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)),
     ((OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)),
     (OnigUChar*)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)),
     regs, 0U);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt--;
    if (tmpreg) {
 if (((struct RRegexp*)(re))->usecnt) {
     onig_free(reg);
 }
 else {
     onig_free((((struct RRegexp*)(re))->ptr));
     (((struct RRegexp*)(re))->ptr) = reg;
 }
    }
    if (result < 0) {
 if (regs == &regi)
     onig_region_free(regs, 0);
 if (result == -1) {
     rb_backref_set(((VALUE)RUBY_Qnil));
     return 0;
 }
 else {
     onig_error_code_to_str((OnigUChar*)err, (int)result);
     rb_reg_raise((!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), err, re);
 }
    }

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) {
 int err;
 match = match_alloc(rb_cMatch);
 err = rb_reg_region_copy((&((struct RMatch*)(match))->rmatch->regs), regs);
 onig_region_free(regs, 0);
 if (err) rb_memerror();
    }
    else {
 ((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(match))->flags &= ~(VALUE)(((VALUE)RUBY_FL_TAINT))) : (void)0);
    }

    ((struct RMatch*)(match))->str = rb_str_new_frozen(str);
    ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);

    ((struct RMatch*)(match))->regexp = re;
    ((struct RMatch*)(match))->rmatch->char_offset_updated = 0;
    rb_backref_set(match);

    ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(re))->flags&(RUBY_FL_TAINT)))) : (void)0);

    return 1;
}

VALUE
rb_reg_nth_defined(int nth, VALUE match)
{
    struct re_registers *regs;
    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if (nth >= regs->num_regs) {
 return ((VALUE)RUBY_Qnil);
    }
    if (nth < 0) {
 nth += regs->num_regs;
 if (nth <= 0) return ((VALUE)RUBY_Qnil);
    }
    if ((regs->beg[(nth)]) == -1) return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}

VALUE
rb_reg_nth_match(int nth, VALUE match)
{
    VALUE str;
    long start, end, len;
    struct re_registers *regs;

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if (nth >= regs->num_regs) {
 return ((VALUE)RUBY_Qnil);
    }
    if (nth < 0) {
 nth += regs->num_regs;
 if (nth <= 0) return ((VALUE)RUBY_Qnil);
    }
    start = (regs->beg[(nth)]);
    if (start == -1) return ((VALUE)RUBY_Qnil);
    end = (regs->end[(nth)]);
    len = end - start;
    str = rb_str_subseq(((struct RMatch*)(match))->str, start, len);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(match))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}

VALUE
rb_reg_last_match(VALUE match)
{
    return rb_reg_nth_match(0, match);
}
VALUE
rb_reg_match_pre(VALUE match)
{
    VALUE str;
    struct re_registers *regs;

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if ((regs->beg[(0)]) == -1) return ((VALUE)RUBY_Qnil);
    str = rb_str_subseq(((struct RMatch*)(match))->str, 0, (regs->beg[(0)]));
    if ((!!((!(((VALUE)((match)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((match)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((match)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((match))))->flags&((RUBY_FL_TAINT))):0))) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}
VALUE
rb_reg_match_post(VALUE match)
{
    VALUE str;
    long pos;
    struct re_registers *regs;

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if ((regs->beg[(0)]) == -1) return ((VALUE)RUBY_Qnil);
    str = ((struct RMatch*)(match))->str;
    pos = (regs->end[(0)]);
    str = rb_str_subseq(str, pos, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - pos);
    if ((!!((!(((VALUE)((match)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((match)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((match)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((match))))->flags&((RUBY_FL_TAINT))):0))) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

VALUE
rb_reg_match_last(VALUE match)
{
    int i;
    struct re_registers *regs;

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if ((regs->beg[(0)]) == -1) return ((VALUE)RUBY_Qnil);

    for (i=regs->num_regs-1; (regs->beg[(i)]) == -1 && i > 0; i--)
 ;
    if (i == 0) return ((VALUE)RUBY_Qnil);
    return rb_reg_nth_match(i, match);
}

static VALUE
last_match_getter(void)
{
    return rb_reg_last_match(rb_backref_get());
}

static VALUE
prematch_getter(void)
{
    return rb_reg_match_pre(rb_backref_get());
}

static VALUE
postmatch_getter(void)
{
    return rb_reg_match_post(rb_backref_get());
}

static VALUE
last_paren_match_getter(void)
{
    return rb_reg_match_last(rb_backref_get());
}

static VALUE
match_array(VALUE match, int start)
{
    struct re_registers *regs;
    VALUE ary;
    VALUE target;
    int i;
    int taint = (!!((!(((VALUE)((match)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((match)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((match)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((match))))->flags&((RUBY_FL_TAINT))):0));

    match_check(match);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    ary = rb_ary_new_capa(regs->num_regs);
    target = ((struct RMatch*)(match))->str;

    for (i=start; i<regs->num_regs; i++) {
 if (regs->beg[i] == -1) {
     rb_ary_push(ary, ((VALUE)RUBY_Qnil));
 }
 else {
     VALUE str = rb_str_subseq(target, regs->beg[i], regs->end[i]-regs->beg[i]);
     if (taint) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
     rb_ary_push(ary, str);
 }
    }
    return ary;
}
static VALUE
match_to_a(VALUE match)
{
    return match_array(match, 0);
}
static VALUE
match_captures(VALUE match)
{
    return match_array(match, 1);
}

static int
name_to_backref_number(struct re_registers *regs, VALUE regexp, const char* name, const char* name_end)
{
    return onig_name_to_backref_number((((struct RRegexp*)(regexp))->ptr),
 (const unsigned char *)name, (const unsigned char *)name_end, regs);
}

 static void name_to_backref_error(VALUE name);
static void
name_to_backref_error(VALUE name)
{
    rb_raise(rb_eIndexError, "undefined group name reference: % li\v",
      name);
}






static int
namev_to_backref_number(struct re_registers *regs, VALUE re, VALUE name)
{
    int num;

    if (((((VALUE)(name)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 name = rb_sym2str(name);
    }
    else if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(name))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((name) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((name) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((name) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((name) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(name)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(name))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return -1;
    }
    num = (!((VALUE)(re) != ((VALUE)RUBY_Qnil)) ? 0 : !rb_enc_compatible((((struct RRegexp*)(re))->src), (name)) ? 0 : name_to_backref_number((regs), (re), ((!(((struct RBasic*)(name))->flags & RSTRING_NOEMBED) ? ((struct RString*)(name))->as.ary : ((struct RString*)(name))->as.heap.ptr)), ((!(((struct RBasic*)(name))->flags & RSTRING_NOEMBED) ? (((struct RString*)(name))->as.ary + (long)((((struct RBasic*)(name))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(name))->as.heap.ptr + ((struct RString*)(name))->as.heap.len)))));

    if (num < 1) {
 name_to_backref_error(name);
    }
    return num;
}

static VALUE
match_ary_subseq(VALUE match, long beg, long len, VALUE result)
{
    long olen = (&((struct RMatch*)(match))->rmatch->regs)->num_regs;
    long j, end = olen < beg+len ? olen : beg+len;
    if (!((VALUE)(result) != ((VALUE)RUBY_Qnil))) result = rb_ary_new_capa(len);
    if (len == 0) return result;

    for (j = beg; j < end; j++) {
 rb_ary_push(result, rb_reg_nth_match((int)j, match));
    }
    if (beg + len > j) {
 rb_ary_resize(result, rb_array_len(result) + (beg + len) - j);
    }
    return result;
}

static VALUE
match_ary_aref(VALUE match, VALUE idx, VALUE result)
{
    long beg, len;
    int num_regs = (&((struct RMatch*)(match))->rmatch->regs)->num_regs;


    switch (rb_range_beg_len(idx, &beg, &len, (long)num_regs, !!((VALUE)(result) != ((VALUE)RUBY_Qnil)))) {
      case ((VALUE)RUBY_Qfalse):
 if (!((VALUE)(result) != ((VALUE)RUBY_Qnil))) return rb_reg_nth_match(rb_num2int_inline(idx), match);
 rb_ary_push(result, rb_reg_nth_match(rb_num2int_inline(idx), match));
 return result;
      case ((VALUE)RUBY_Qnil):
 return ((VALUE)RUBY_Qnil);
      default:
 return match_ary_subseq(match, beg, len, result);
    }
}
static VALUE
match_aref(int argc, VALUE *argv, VALUE match)
{
    VALUE idx, length;

    match_check(match);
    rb_scan_args(argc, argv, "11", &idx, &length);

    if (!((VALUE)(length) != ((VALUE)RUBY_Qnil))) {
 if ((((int)(long)(idx))&RUBY_FIXNUM_FLAG)) {
     return rb_reg_nth_match(((int)rb_fix2int((VALUE)(idx))), match);
 }
 else {
     int num = namev_to_backref_number((&((struct RMatch*)(match))->rmatch->regs), ((struct RMatch*)(match))->regexp, idx);
     if (num >= 0) {
  return rb_reg_nth_match(num, match);
     }
     else {
  return match_ary_aref(match, idx, ((VALUE)RUBY_Qnil));
     }
 }
    }
    else {
 long beg = rb_num2long_inline(idx);
 long len = rb_num2long_inline(length);
 long num_regs = (&((struct RMatch*)(match))->rmatch->regs)->num_regs;
 if (len < 0) {
     return ((VALUE)RUBY_Qnil);
 }
 if (beg < 0) {
     beg += num_regs;
     if (beg < 0) return ((VALUE)RUBY_Qnil);
 }
 else if (beg > num_regs) {
     return ((VALUE)RUBY_Qnil);
 }
 else if (beg+len > num_regs) {
     len = num_regs - beg;
 }
 return match_ary_subseq(match, beg, len, ((VALUE)RUBY_Qnil));
    }
}
static VALUE
match_values_at(int argc, VALUE *argv, VALUE match)
{
    VALUE result;
    int i;

    match_check(match);
    result = rb_ary_new_capa(argc);

    for (i=0; i<argc; i++) {
 if ((((int)(long)(argv[i]))&RUBY_FIXNUM_FLAG)) {
     rb_ary_push(result, rb_reg_nth_match(((int)rb_fix2int((VALUE)(argv[i]))), match));
 }
 else {
     int num = namev_to_backref_number((&((struct RMatch*)(match))->rmatch->regs), ((struct RMatch*)(match))->regexp, argv[i]);
     if (num >= 0) {
  rb_ary_push(result, rb_reg_nth_match(num, match));
     }
     else {
  match_ary_aref(match, argv[i], result);
     }
 }
    }
    return result;
}
static VALUE
match_to_s(VALUE match)
{
    VALUE str = rb_reg_last_match(match);

    match_check(match);
    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) str =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    if ((!!((!(((VALUE)((match)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((match)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((match)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((match))))->flags&((RUBY_FL_TAINT))):0))) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    if ((!!((!(((VALUE)((((struct RMatch*)(match))->str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((((struct RMatch*)(match))->str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((((struct RMatch*)(match))->str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((((struct RMatch*)(match))->str))))->flags&((RUBY_FL_TAINT))):0))) (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

static int
match_named_captures_iter(const OnigUChar *name, const OnigUChar *name_end,
 int back_num, int *back_refs, OnigRegex regex, void *arg) {
    struct MEMO *memo = ((struct MEMO *)arg);
    VALUE hash = memo->v1;
    VALUE match = memo->v2;

    VALUE key =  ({ (__builtin_constant_p((const char *)name) && __builtin_constant_p(name_end-name)) ? rb_enc_str_new_static(((const char *)name), (name_end-name), (regex->enc)) : rb_enc_str_new(((const char *)name), (name_end-name), (regex->enc)); });
    VALUE value;

    int i;
    int found = 0;

    for (i = 0; i < back_num; i++) {
 value = rb_reg_nth_match(back_refs[i], match);
 if (!(((VALUE)(value) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
     rb_hash_aset(hash, key, value);
     found = 1;
 }
    }

    if (found == 0) {
 rb_hash_aset(hash, key, ((VALUE)RUBY_Qnil));
    }

    return 0;
}
static VALUE
match_named_captures(VALUE match)
{
    VALUE hash;
    struct MEMO *memo;

    match_check(match);
    if (!((VALUE)(((struct RMatch*)(match))->regexp) != ((VALUE)RUBY_Qnil)))
 return rb_hash_new();

    hash = rb_hash_new();
    memo = ((struct MEMO *)rb_imemo_new(imemo_memo, (VALUE)(hash), (VALUE)(match), (VALUE)(0), 0));

    onig_foreach_name(((struct RRegexp*)(((struct RMatch*)(match))->regexp))->ptr, match_named_captures_iter, (void*)memo);

    return hash;
}
static VALUE
match_string(VALUE match)
{
    match_check(match);
    return ((struct RMatch*)(match))->str;
}

struct backref_name_tag {
    const OnigUChar *name;
    long len;
};

static int
match_inspect_name_iter(const OnigUChar *name, const OnigUChar *name_end,
          int back_num, int *back_refs, OnigRegex regex, void *arg0)
{
    struct backref_name_tag *arg = (struct backref_name_tag *)arg0;
    int i;

    for (i = 0; i < back_num; i++) {
        arg[back_refs[i]].name = name;
        arg[back_refs[i]].len = name_end - name;
    }
    return 0;
}
static VALUE
match_inspect(VALUE match)
{
    VALUE cname = rb_class_path(rb_obj_class(match));
    VALUE str;
    int i;
    struct re_registers *regs = (&((struct RMatch*)(match))->rmatch->regs);
    int num_regs = regs->num_regs;
    struct backref_name_tag *names;
    VALUE regexp = ((struct RMatch*)(match))->regexp;

    if (regexp == 0) {
        return rb_sprintf("#<%li\v:%p>", cname, (void*)match);
    }
    else if (!((VALUE)(regexp) != ((VALUE)RUBY_Qnil))) {
        return rb_sprintf("#<%li\v: %li\v>",
     cname, rb_reg_nth_match(0, match));
    }

    names = ((struct backref_name_tag*)__builtin_alloca (sizeof(struct backref_name_tag)*(num_regs)));
    memset((names), 0, sizeof(struct backref_name_tag)*(size_t)(num_regs));

    onig_foreach_name((((struct RRegexp*)(regexp))->ptr),
            match_inspect_name_iter, names);

    str =  ({ (__builtin_constant_p("#<")) ? rb_str_cat(rb_str_buf_new((long)strlen("#<")), ("#<"), (long)strlen("#<")) : rb_str_buf_new_cstr("#<"); });
    rb_str_append(str, cname);

    for (i = 0; i < num_regs; i++) {
        VALUE v;
         ({ (__builtin_constant_p(" ")) ? rb_str_cat((str), (" "), (long)strlen(" ")) : rb_str_cat_cstr((str), (" ")); });
        if (0 < i) {
            if (names[i].name)
                rb_str_cat(str, (const char *)names[i].name, names[i].len);
            else {
                rb_str_catf(str, "%d", i);
            }
             ({ (__builtin_constant_p(":")) ? rb_str_cat((str), (":"), (long)strlen(":")) : rb_str_cat_cstr((str), (":")); });
        }
        v = rb_reg_nth_match(i, match);
        if (v == ((VALUE)RUBY_Qnil))
             ({ (__builtin_constant_p("nil")) ? rb_str_cat((str), ("nil"), (long)strlen("nil")) : rb_str_cat_cstr((str), ("nil")); });
        else
            rb_str_buf_append(str, rb_str_inspect(v));
    }
     ({ (__builtin_constant_p(">")) ? rb_str_cat((str), (">"), (long)strlen(">")) : rb_str_cat_cstr((str), (">")); });

    return str;
}

VALUE rb_cRegexp;

static int
read_escaped_byte(const char **pp, const char *end, onig_errmsg_buffer err)
{
    const char *p = *pp;
    int code;
    int meta_prefix = 0, ctrl_prefix = 0;
    size_t len;

    if (p == end || *p++ != '\\') {
        strlcpy((err), ("too short escaped multibyte character"), 90);
        return -1;
    }

again:
    if (p == end) {
        strlcpy((err), ("too short escape sequence"), 90);
        return -1;
    }
    switch (*p++) {
      case '\\': code = '\\'; break;
      case 'n': code = '\n'; break;
      case 't': code = '\t'; break;
      case 'r': code = '\r'; break;
      case 'f': code = '\f'; break;
      case 'v': code = '\013'; break;
      case 'a': code = '\007'; break;
      case 'e': code = '\033'; break;


      case '0': case '1': case '2': case '3':
      case '4': case '5': case '6': case '7':
        p--;
        code = ((int)ruby_scan_oct((p),(end < p+3 ? end-p : 3),(&len)));
        p += len;
        break;

      case 'x':
        code = ((int)ruby_scan_hex((p),(end < p+2 ? end-p : 2),(&len)));
        if (len < 1) {
            strlcpy((err), ("invalid hex escape"), 90);
            return -1;
        }
        p += len;
        break;

      case 'M':
        if (meta_prefix) {
            strlcpy((err), ("duplicate meta escape"), 90);
            return -1;
        }
        meta_prefix = 1;
        if (p+1 < end && *p++ == '-' && (*p & 0x80) == 0) {
            if (*p == '\\') {
                p++;
                goto again;
            }
            else {
                code = *p++;
                break;
            }
        }
        strlcpy((err), ("too short meta escape"), 90);
        return -1;

      case 'C':
        if (p == end || *p++ != '-') {
            strlcpy((err), ("too short control escape"), 90);
            return -1;
        }
      case 'c':
        if (ctrl_prefix) {
            strlcpy((err), ("duplicate control escape"), 90);
            return -1;
        }
        ctrl_prefix = 1;
        if (p < end && (*p & 0x80) == 0) {
            if (*p == '\\') {
                p++;
                goto again;
            }
            else {
                code = *p++;
                break;
            }
        }
        strlcpy((err), ("too short control escape"), 90);
        return -1;

      default:
        strlcpy((err), ("unexpected escape sequence"), 90);
        return -1;
    }
    if (code < 0 || 0xff < code) {
        strlcpy((err), ("invalid escape code"), 90);
        return -1;
    }

    if (ctrl_prefix)
        code &= 0x1f;
    if (meta_prefix)
        code |= 0x80;

    *pp = p;
    return code;
}

static int
unescape_escaped_nonascii(const char **pp, const char *end, rb_encoding *enc,
        VALUE buf, rb_encoding **encp, onig_errmsg_buffer err)
{
    const char *p = *pp;
    int chmaxlen = (enc)->max_enc_len;
    char *chbuf = ((char*)__builtin_alloca (sizeof(char)*(chmaxlen)));
    int chlen = 0;
    int byte;
    int l;

    memset(chbuf, 0, chmaxlen);

    byte = read_escaped_byte(&p, end, err);
    if (byte == -1) {
        return -1;
    }

    chbuf[chlen++] = byte;
    while (chlen < chmaxlen &&
           ((rb_enc_precise_mbclen(chbuf, chbuf+chlen, enc)) < -1)) {
        byte = read_escaped_byte(&p, end, err);
        if (byte == -1) {
            return -1;
        }
        chbuf[chlen++] = byte;
    }

    l = rb_enc_precise_mbclen(chbuf, chbuf+chlen, enc);
    if (((l) == -1)) {
        strlcpy((err), ("invalid multibyte escape"), 90);
        return -1;
    }
    if (1 < chlen || (chbuf[0] & 0x80)) {
        rb_str_cat(buf, chbuf, chlen);

        if (*encp == 0)
            *encp = enc;
        else if (*encp != enc) {
            strlcpy((err), ("escaped non ASCII character in UTF-8 regexp"), 90);
            return -1;
        }
    }
    else {
        char escbuf[5];
        ruby_snprintf(escbuf, sizeof(escbuf), "\\x%02X", chbuf[0]&0xff);
        rb_str_cat(buf, escbuf, 4);
    }
    *pp = p;
    return 0;
}

static int
check_unicode_range(unsigned long code, onig_errmsg_buffer err)
{
    if ((0xd800 <= code && code <= 0xdfff) ||
        0x10ffff < code) {
        strlcpy((err), ("invalid Unicode range"), 90);
        return -1;
    }
    return 0;
}

static int
append_utf8(unsigned long uv,
        VALUE buf, rb_encoding **encp, onig_errmsg_buffer err)
{
    if (check_unicode_range(uv, err) != 0)
        return -1;
    if (uv < 0x80) {
        char escbuf[5];
        ruby_snprintf(escbuf, sizeof(escbuf), "\\x%02X", (int)uv);
        rb_str_cat(buf, escbuf, 4);
    }
    else {
        int len;
        char utf8buf[6];
        len = rb_uv_to_utf8(utf8buf, uv);
        rb_str_cat(buf, utf8buf, len);

        if (*encp == 0)
            *encp = rb_utf8_encoding();
        else if (*encp != rb_utf8_encoding()) {
            strlcpy((err), ("UTF-8 character in non UTF-8 regexp"), 90);
            return -1;
        }
    }
    return 0;
}

static int
unescape_unicode_list(const char **pp, const char *end,
        VALUE buf, rb_encoding **encp, onig_errmsg_buffer err)
{
    const char *p = *pp;
    int has_unicode = 0;
    unsigned long code;
    size_t len;

    while (p < end && rb_isspace(*p)) p++;

    while (1) {
        code = ruby_scan_hex(p, end-p, &len);
        if (len == 0)
            break;
        if (6 < len) {
            strlcpy((err), ("invalid Unicode range"), 90);
            return -1;
        }
        p += len;
        if (append_utf8(code, buf, encp, err) != 0)
            return -1;
        has_unicode = 1;

        while (p < end && rb_isspace(*p)) p++;
    }

    if (has_unicode == 0) {
        strlcpy((err), ("invalid Unicode list"), 90);
        return -1;
    }

    *pp = p;

    return 0;
}

static int
unescape_unicode_bmp(const char **pp, const char *end,
        VALUE buf, rb_encoding **encp, onig_errmsg_buffer err)
{
    const char *p = *pp;
    size_t len;
    unsigned long code;

    if (end < p+4) {
        strlcpy((err), ("invalid Unicode escape"), 90);
        return -1;
    }
    code = ruby_scan_hex(p, 4, &len);
    if (len != 4) {
        strlcpy((err), ("invalid Unicode escape"), 90);
        return -1;
    }
    if (append_utf8(code, buf, encp, err) != 0)
        return -1;
    *pp = p + 4;
    return 0;
}

static int
unescape_nonascii(const char *p, const char *end, rb_encoding *enc,
        VALUE buf, rb_encoding **encp, int *has_property,
        onig_errmsg_buffer err)
{
    char c;
    char smallbuf[2];

    while (p < end) {
        int chlen = rb_enc_precise_mbclen(p, end, enc);
        if (!(0 < (chlen))) {
            strlcpy((err), ("invalid multibyte character"), 90);
            return -1;
        }
        chlen = (chlen);
        if (1 < chlen || (*p & 0x80)) {
            rb_str_cat(buf, p, chlen);
            p += chlen;
            if (*encp == 0)
                *encp = enc;
            else if (*encp != enc) {
                strlcpy((err), ("non ASCII character in UTF-8 regexp"), 90);
                return -1;
            }
            continue;
        }

        switch (c = *p++) {
          case '\\':
            if (p == end) {
                strlcpy((err), ("too short escape sequence"), 90);
                return -1;
            }
            switch (c = *p++) {
              case '1': case '2': case '3':
              case '4': case '5': case '6': case '7':
                {
                    size_t len = end-(p-1), octlen;
                    if (ruby_scan_oct(p-1, len < 3 ? len : 3, &octlen) <= 0177) {



                        goto escape_asis;
                    }
                }


              case '0':

              case 'x':
              case 'c':
              case 'C':
              case 'M':
                p = p-2;
  if (enc == rb_usascii_encoding()) {
      const char *pbeg = p;
      c = read_escaped_byte(&p, end, err);
      if (c == (char)-1) return -1;
      rb_str_cat(buf, pbeg, p-pbeg);
  }
  else {
      if (unescape_escaped_nonascii(&p, end, enc, buf, encp, err) != 0)
   return -1;
  }
                break;

              case 'u':
                if (p == end) {
                    strlcpy((err), ("too short escape sequence"), 90);
                    return -1;
                }
                if (*p == '{') {

                    p++;
                    if (unescape_unicode_list(&p, end, buf, encp, err) != 0)
                        return -1;
                    if (p == end || *p++ != '}') {
                        strlcpy((err), ("invalid Unicode list"), 90);
                        return -1;
                    }
                    break;
                }
                else {

                    if (unescape_unicode_bmp(&p, end, buf, encp, err) != 0)
                        return -1;
                    break;
                }

              case 'p':
              case 'P':
                if (!*encp) {
                    *has_property = 1;
                }
                goto escape_asis;

              default:
escape_asis:
                smallbuf[0] = '\\';
                smallbuf[1] = c;
                rb_str_cat(buf, smallbuf, 2);
                break;
            }
            break;

          default:
            rb_str_cat(buf, &c, 1);
            break;
        }
    }

    return 0;
}

static VALUE
rb_reg_preprocess(const char *p, const char *end, rb_encoding *enc,
        rb_encoding **fixed_enc, onig_errmsg_buffer err)
{
    VALUE buf;
    int has_property = 0;

    buf = rb_str_buf_new(0);

    if (rb_enc_asciicompat_inline(enc))
        *fixed_enc = 0;
    else {
        *fixed_enc = enc;
        rb_enc_associate(buf, enc);
    }

    if (unescape_nonascii(p, end, enc, buf, fixed_enc, &has_property, err) != 0)
        return ((VALUE)RUBY_Qnil);

    if (has_property && !*fixed_enc) {
        *fixed_enc = enc;
    }

    if (*fixed_enc) {
        rb_enc_associate(buf, *fixed_enc);
    }

    return buf;
}

VALUE
rb_reg_check_preprocess(VALUE str)
{
    rb_encoding *fixed_enc = 0;
    onig_errmsg_buffer err = "";
    VALUE buf;
    char *p, *end;
    rb_encoding *enc;

    rb_string_value(&(str));
    p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    end = p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    enc = rb_enc_get(str);

    buf = rb_reg_preprocess(p, end, enc, &fixed_enc, err);
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));

    if (buf == ((VALUE)RUBY_Qnil)) {
 return rb_reg_error_desc(str, 0, err);
    }
    return ((VALUE)RUBY_Qnil);
}

static VALUE
rb_reg_preprocess_dregexp(VALUE ary, int options)
{
    rb_encoding *fixed_enc = 0;
    rb_encoding *regexp_enc = 0;
    onig_errmsg_buffer err = "";
    int i;
    VALUE result = 0;
    rb_encoding *ascii8bit = rb_ascii8bit_encoding();

    if (rb_array_len(ary) == 0) {
        rb_raise(rb_eArgError, "no arguments given");
    }

    for (i = 0; i < rb_array_len(ary); i++) {
        VALUE str = (rb_array_const_ptr(ary)[i]);
        VALUE buf;
        char *p, *end;
        rb_encoding *src_enc;

 src_enc = rb_enc_get(str);
 if (options & 32 &&
  src_enc != ascii8bit) {
     if (str_coderange(str) != RUBY_ENC_CODERANGE_7BIT)
  rb_raise(rb_eRegexpError, "/.../n has a non escaped non ASCII character in non ASCII-8BIT script");
     else
  src_enc = ascii8bit;
 }

        rb_string_value(&(str));
        p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
        end = p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

        buf = rb_reg_preprocess(p, end, src_enc, &fixed_enc, err);

        if (buf == ((VALUE)RUBY_Qnil))
            rb_raise(rb_eArgError, "%s", err);

        if (fixed_enc != 0) {
            if (regexp_enc != 0 && regexp_enc != fixed_enc) {
                rb_raise(rb_eRegexpError, "encoding mismatch in dynamic regexp : %s and %s",
                         (regexp_enc)->name, (fixed_enc)->name);
            }
            regexp_enc = fixed_enc;
        }

        if (!result)
            result = rb_str_new_shared(str);
        else
            rb_str_buf_append(result, str);
    }
    if (regexp_enc) {
        rb_enc_associate(result, regexp_enc);
    }

    return result;
}

static int
rb_reg_initialize(VALUE obj, const char *s, long len, rb_encoding *enc,
    int options, onig_errmsg_buffer err,
    const char *sourcefile, int sourceline)
{
    struct RRegexp *re = ((struct RRegexp*)(obj));
    VALUE unescaped;
    rb_encoding *fixed_enc = 0;
    rb_encoding *a_enc = rb_ascii8bit_encoding();

    ({do { VALUE frozen_obj = (obj); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
    if (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((obj)))->flags&((((VALUE)RUBY_FL_USER5)))):0))
 rb_raise(rb_eSecurityError, "can't modify literal regexp");
    if (re->ptr)
        rb_raise(rb_eTypeError, "already initialized regexp");
    re->ptr = 0;

    if (rb_enc_dummy_p(enc)) {
 strlcpy((err), ("can't make regexp with dummy encoding"), 90);
 return -1;
    }

    unescaped = rb_reg_preprocess(s, s+len, enc, &fixed_enc, err);
    if (unescaped == ((VALUE)RUBY_Qnil))
        return -1;

    if (fixed_enc) {
 if ((fixed_enc != enc && (options & 16)) ||
            (fixed_enc != a_enc && (options & 32))) {
     strlcpy((err), ("incompatible character encoding"), 90);
     return -1;
 }
        if (fixed_enc != a_enc) {
     options |= 16;
     enc = fixed_enc;
 }
    }
    else if (!(options & 16)) {
       enc = rb_usascii_encoding();
    }

    rb_enc_associate((VALUE)re, enc);
    if ((options & 16) || fixed_enc) {
 re->basic.flags |= ((VALUE)RUBY_FL_USER4);
    }
    if (options & 32) {
        re->basic.flags |= ((VALUE)RUBY_FL_USER6);
    }

    re->ptr = make_regexp((!(((struct RBasic*)(unescaped))->flags & RSTRING_NOEMBED) ? ((struct RString*)(unescaped))->as.ary : ((struct RString*)(unescaped))->as.heap.ptr), (!(((struct RBasic*)(unescaped))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(unescaped))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(unescaped))->as.heap.len), enc,
     options & (1U|((1U << 1) << 1)|(1U << 1)), err,
     sourcefile, sourceline);
    if (!re->ptr) return -1;
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(unescaped); ; rb_gc_guarded_ptr; }));
    return 0;
}

static void
reg_set_source(VALUE reg, VALUE str, rb_encoding *enc)
{
    rb_encoding *regenc = rb_enc_get(reg);
    if (regenc != enc) {
 str = rb_enc_associate(rb_str_dup(str), enc = regenc);
    }
    rb_obj_write((VALUE)(reg), (VALUE *)(&((struct RRegexp*)(reg))->src), (VALUE)(rb_fstring(str)), "re.c", 2816);
}

static int
rb_reg_initialize_str(VALUE obj, VALUE str, int options, onig_errmsg_buffer err,
 const char *sourcefile, int sourceline)
{
    int ret;
    rb_encoding *str_enc = rb_enc_get(str), *enc = str_enc;
    if (options & 32) {
        rb_encoding *ascii8bit = rb_ascii8bit_encoding();
        if (enc != ascii8bit) {
            if (str_coderange(str) != RUBY_ENC_CODERANGE_7BIT) {
                strlcpy((err), ("/.../n has a non escaped non ASCII character in non ASCII-8BIT script"), 90);
                return -1;
            }
            enc = ascii8bit;
        }
    }
    ret = rb_reg_initialize(obj, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), enc,
       options, err, sourcefile, sourceline);
    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    if (ret == 0) reg_set_source(obj, str, str_enc);
    return ret;
}

static VALUE
rb_reg_s_alloc(VALUE klass)
{
    struct RRegexp *(re) = (struct RRegexp*)(((RUBY_T_REGEXP | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)) & ((VALUE)RUBY_FL_WB_PROTECTED)) ? rb_wb_protected_newobj_of(klass, (RUBY_T_REGEXP | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)) & ~((VALUE)RUBY_FL_WB_PROTECTED)) : rb_wb_unprotected_newobj_of(klass, RUBY_T_REGEXP | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)));

    re->ptr = 0;
    rb_obj_write((VALUE)(re), (VALUE *)(&re->src), (VALUE)(0), "re.c", 2848);
    re->usecnt = 0;

    return (VALUE)re;
}

VALUE
rb_reg_alloc(void)
{
    return rb_reg_s_alloc(rb_cRegexp);
}

VALUE
rb_reg_new_str(VALUE s, int options)
{
    return rb_reg_init_str(rb_reg_alloc(), s, options);
}

VALUE
rb_reg_init_str(VALUE re, VALUE s, int options)
{
    onig_errmsg_buffer err = "";

    if (rb_reg_initialize_str(re, s, options, err, ((void*)0), 0) != 0) {
 rb_reg_raise_str(s, options, err);
    }

    return re;
}

static VALUE
rb_reg_init_str_enc(VALUE re, VALUE s, rb_encoding *enc, int options)
{
    onig_errmsg_buffer err = "";

    if (rb_reg_initialize(re, (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr), (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len),
     enc, options, err, ((void*)0), 0) != 0) {
 rb_reg_raise_str(s, options, err);
    }
    reg_set_source(re, s, enc);

    return re;
}

VALUE
rb_reg_new_ary(VALUE ary, int opt)
{
    return rb_reg_new_str(rb_reg_preprocess_dregexp(ary, opt), opt);
}

VALUE
rb_enc_reg_new(const char *s, long len, rb_encoding *enc, int options)
{
    VALUE re = rb_reg_alloc();
    onig_errmsg_buffer err = "";

    if (rb_reg_initialize(re, s, len, enc, options, err, ((void*)0), 0) != 0) {
 rb_enc_reg_raise(s, len, enc, options, err);
    }
    rb_obj_write((VALUE)(re), (VALUE *)(&((struct RRegexp*)(re))->src), (VALUE)(rb_fstring( ({ (__builtin_constant_p(s) && __builtin_constant_p(len)) ? rb_enc_str_new_static((s), (len), (enc)) : rb_enc_str_new((s), (len), (enc)); }))), "re.c", 2907);

    return re;
}

VALUE
rb_reg_new(const char *s, long len, int options)
{
    return rb_enc_reg_new(s, len, rb_ascii8bit_encoding(), options);
}

VALUE
rb_reg_compile(VALUE str, int options, const char *sourcefile, int sourceline)
{
    VALUE re = rb_reg_alloc();
    onig_errmsg_buffer err = "";

    if (!str) str =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    if (rb_reg_initialize_str(re, str, options, err, sourcefile, sourceline) != 0) {
 rb_set_errinfo(rb_reg_error_desc(str, options, err));
 return ((VALUE)RUBY_Qnil);
    }
    ((!(((VALUE)(re) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(re))->flags |= (((VALUE)RUBY_FL_USER5))) : (void)0);
    return re;
}

static VALUE reg_cache;

VALUE
rb_reg_regcomp(VALUE str)
{
    if (reg_cache && (!(((struct RBasic*)(((struct RRegexp*)(reg_cache))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(reg_cache))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(reg_cache))->src))->as.heap.len) == (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)
 && ((int)((((struct RBasic*)(reg_cache))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(reg_cache))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(reg_cache)) == ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str))
 && memcmp((!(((struct RBasic*)(((struct RRegexp*)(reg_cache))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(reg_cache))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(reg_cache))->src))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) == 0)
 return reg_cache;

    return reg_cache = rb_reg_new_str(str, 0);
}

static st_index_t reg_hash(VALUE re);
static VALUE
rb_reg_hash(VALUE re)
{
    st_index_t hashval = reg_hash(re);
    return (((VALUE)((long)(hashval)))<<1 | RUBY_FIXNUM_FLAG);
}

static st_index_t
reg_hash(VALUE re)
{
    st_index_t hashval;

    rb_reg_check(re);
    hashval = (((struct RRegexp*)(re))->ptr)->options;
    hashval = st_hash_uint((hashval), (rb_memhash((!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len))));
    return st_hash_end(hashval);
}
static VALUE
rb_reg_equal(VALUE re1, VALUE re2)
{
    if (re1 == re2) return ((VALUE)RUBY_Qtrue);
    if (!( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(re2))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((re2) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((re2) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((re2) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((re2) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(re2)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(re2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re2))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(re2))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(re2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re2))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(re2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re2))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) return ((VALUE)RUBY_Qfalse);
    rb_reg_check(re1); rb_reg_check(re2);
    if (((!(((VALUE)(re1) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re1) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re1))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((re1)))->flags&((((VALUE)RUBY_FL_USER4)))):0) != ((!(((VALUE)(re2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(re2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(re2))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((re2)))->flags&((((VALUE)RUBY_FL_USER4)))):0)) return ((VALUE)RUBY_Qfalse);
    if ((((struct RRegexp*)(re1))->ptr)->options != (((struct RRegexp*)(re2))->ptr)->options) return ((VALUE)RUBY_Qfalse);
    if ((!(((struct RBasic*)(((struct RRegexp*)(re1))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re1))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re1))->src))->as.heap.len) != (!(((struct RBasic*)(((struct RRegexp*)(re2))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re2))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re2))->src))->as.heap.len)) return ((VALUE)RUBY_Qfalse);
    if (((int)((((struct RBasic*)(re1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(re1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(re1)) != ((int)((((struct RBasic*)(re2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(re2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(re2))) return ((VALUE)RUBY_Qfalse);
    if (memcmp((!(((struct RBasic*)(((struct RRegexp*)(re1))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re1))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re1))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re2))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re2))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re2))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re1))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re1))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re1))->src))->as.heap.len)) == 0) {
 return ((VALUE)RUBY_Qtrue);
    }
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
match_hash(VALUE match)
{
    const struct re_registers *regs;
    st_index_t hashval;

    match_check(match);
    hashval = rb_hash_start(rb_str_hash(((struct RMatch*)(match))->str));
    hashval = st_hash_uint((hashval), (reg_hash(match_regexp(match))));
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    hashval = st_hash_uint((hashval), (regs->num_regs));
    hashval = st_hash_uint((hashval), (rb_memhash(regs->beg, regs->num_regs * sizeof(*regs->beg))));
    hashval = st_hash_uint((hashval), (rb_memhash(regs->end, regs->num_regs * sizeof(*regs->end))));
    hashval = st_hash_end(hashval);
    return (((VALUE)((long)(hashval)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
match_equal(VALUE match1, VALUE match2)
{
    const struct re_registers *regs1, *regs2;

    if (match1 == match2) return ((VALUE)RUBY_Qtrue);
    if (!( ((RUBY_T_MATCH) == RUBY_T_FIXNUM) ? (((int)(long)(match2))&RUBY_FIXNUM_FLAG) : ((RUBY_T_MATCH) == RUBY_T_TRUE) ? ((match2) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_MATCH) == RUBY_T_FALSE) ? ((match2) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_MATCH) == RUBY_T_NIL) ? ((match2) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_MATCH) == RUBY_T_UNDEF) ? ((match2) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_MATCH) == RUBY_T_SYMBOL) ? ((((VALUE)(match2)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(match2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match2))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_MATCH) == RUBY_T_FLOAT) ? ( ((((int)(long)(match2))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(match2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match2))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(match2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match2))->flags & RUBY_T_MASK) == (RUBY_T_MATCH)))) return ((VALUE)RUBY_Qfalse);
    if (!((struct RMatch*)(match1))->regexp || !((struct RMatch*)(match2))->regexp) return ((VALUE)RUBY_Qfalse);
    if (!rb_str_equal(((struct RMatch*)(match1))->str, ((struct RMatch*)(match2))->str)) return ((VALUE)RUBY_Qfalse);
    if (!rb_reg_equal(match_regexp(match1), match_regexp(match2))) return ((VALUE)RUBY_Qfalse);
    regs1 = (&((struct RMatch*)(match1))->rmatch->regs);
    regs2 = (&((struct RMatch*)(match2))->rmatch->regs);
    if (regs1->num_regs != regs2->num_regs) return ((VALUE)RUBY_Qfalse);
    if (memcmp(regs1->beg, regs2->beg, regs1->num_regs * sizeof(*regs1->beg))) return ((VALUE)RUBY_Qfalse);
    if (memcmp(regs1->end, regs2->end, regs1->num_regs * sizeof(*regs1->end))) return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}

static VALUE
reg_operand(VALUE s, int check)
{
    if (((((VALUE)(s)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(s) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(s) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return rb_sym2str(s);
    }
    else {
 return (check ? rb_str_to_str : rb_check_string_type)(s);
    }
}

static long
reg_match_pos(VALUE re, VALUE *strp, long pos)
{
    VALUE str = *strp;

    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 rb_backref_set(((VALUE)RUBY_Qnil));
 return -1;
    }
    *strp = str = reg_operand(str, 1);
    if (pos != 0) {
 if (pos < 0) {
     VALUE l = rb_str_length(str);
     pos += rb_num2int_inline(l);
     if (pos < 0) {
  return pos;
     }
 }
 pos = rb_str_offset(str, pos);
    }
    return rb_reg_search(re, str, pos, 0);
}
VALUE
rb_reg_match(VALUE re, VALUE str)
{
    long pos = reg_match_pos(re, &str, 0);
    if (pos < 0) return ((VALUE)RUBY_Qnil);
    pos = rb_str_sublen(str, pos);
    return (((VALUE)(pos))<<1 | RUBY_FIXNUM_FLAG);
}
VALUE
rb_reg_eqq(VALUE re, VALUE str)
{
    long start;

    str = reg_operand(str, 0);
    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 rb_backref_set(((VALUE)RUBY_Qnil));
 return ((VALUE)RUBY_Qfalse);
    }
    start = rb_reg_search(re, str, 0, 0);
    if (start < 0) {
 return ((VALUE)RUBY_Qfalse);
    }
    return ((VALUE)RUBY_Qtrue);
}
VALUE
rb_reg_match2(VALUE re)
{
    long start;
    VALUE line = rb_lastline_get();

    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(line))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((line) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((line) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((line) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((line) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(line)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(line) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(line) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(line))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(line))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(line) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(line) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(line))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(line) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(line) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(line))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 rb_backref_set(((VALUE)RUBY_Qnil));
 return ((VALUE)RUBY_Qnil);
    }

    start = rb_reg_search(re, line, 0, 0);
    if (start < 0) {
 return ((VALUE)RUBY_Qnil);
    }
    start = rb_str_sublen(line, start);
    return (((VALUE)(start))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_reg_match_m(int argc, VALUE *argv, VALUE re)
{
    VALUE result, str, initpos;
    long pos;

    if (rb_scan_args(argc, argv, "11", &str, &initpos) == 2) {
 pos = rb_num2long_inline(initpos);
    }
    else {
 pos = 0;
    }

    pos = reg_match_pos(re, &str, pos);
    if (pos < 0) {
 rb_backref_set(((VALUE)RUBY_Qnil));
 return ((VALUE)RUBY_Qnil);
    }
    result = rb_backref_get();
    rb_match_busy(result);
    if (!!((VALUE)(result) != ((VALUE)RUBY_Qnil)) && rb_block_given_p()) {
 return rb_yield(result);
    }
    return result;
}
static VALUE
rb_reg_match_m_p(int argc, VALUE *argv, VALUE re)
{
    long pos = rb_check_arity(argc, 1, 2) > 1 ? rb_num2long_inline(argv[1]) : 0;
    return rb_reg_match_p(re, argv[0], pos);
}

VALUE
rb_reg_match_p(VALUE re, VALUE str, long pos)
{
    regex_t *reg;
    onig_errmsg_buffer err = "";
    OnigPosition result;
    const OnigUChar *start, *end;
    int tmpreg;

    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qfalse);
    str = ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) ? rb_sym2str(str) : rb_string_value(&(str));
    if (pos) {
 if (pos < 0) {
     pos += rb_num2long_inline(rb_str_length(str));
     if (pos < 0) return ((VALUE)RUBY_Qfalse);
 }
 if (pos > 0) {
     long len = 1;
     const char *beg = rb_str_subpos(str, pos, &len);
     if (!beg) return ((VALUE)RUBY_Qfalse);
     pos = beg - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 }
    }
    reg = rb_reg_prepare_re0(re, str, err);
    tmpreg = reg != (((struct RRegexp*)(re))->ptr);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt++;
    start = ((OnigUChar*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr));
    end = start + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    result = onig_search(reg, start, end, start + pos, end,
    ((void*)0), 0U);
    if (!tmpreg) ((struct RRegexp*)(re))->usecnt--;
    if (tmpreg) {
 if (((struct RRegexp*)(re))->usecnt) {
     onig_free(reg);
 }
 else {
     onig_free((((struct RRegexp*)(re))->ptr));
     (((struct RRegexp*)(re))->ptr) = reg;
 }
    }
    if (result < 0) {
 if (result == -1) {
     return ((VALUE)RUBY_Qfalse);
 }
 else {
     onig_error_code_to_str((OnigUChar*)err, (int)result);
     rb_reg_raise((!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(((struct RRegexp*)(re))->src))->as.ary : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.ptr), (!(((struct RBasic*)(((struct RRegexp*)(re))->src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(((struct RRegexp*)(re))->src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(((struct RRegexp*)(re))->src))->as.heap.len), err, re);
 }
    }
    return ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_reg_initialize_m(int argc, VALUE *argv, VALUE self)
{
    int flags = 0;
    VALUE str;
    rb_encoding *enc = 0;

    rb_check_arity(argc, 1, 3);
    if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(argv[0]))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((argv[0]) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((argv[0]) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((argv[0]) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((argv[0]) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(argv[0])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(argv[0]))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
 VALUE re = argv[0];

 if (argc > 1) {
     rb_warn("flags ignored");
 }
 rb_reg_check(re);
 flags = rb_reg_options(re);
 str = (((struct RRegexp*)(re))->src);
    }
    else {
 if (argc >= 2) {
     if ((((int)(long)(argv[1]))&RUBY_FIXNUM_FLAG)) flags = ((int)rb_fix2int((VALUE)(argv[1])));
     else if (!(((VALUE)(argv[1]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) flags = 1U;
 }
 if (argc == 3 && !!((VALUE)(argv[2]) != ((VALUE)RUBY_Qnil))) {
     char *kcode = rb_string_value_ptr(&(argv[2]));
     if (kcode[0] == 'n' || kcode[0] == 'N') {
  enc = rb_ascii8bit_encoding();
  flags |= 32;
     }
     else {
  rb_warn("encoding option is ignored - %s", kcode);
     }
 }
 str = rb_string_value(&(argv[0]));
    }
    if (enc && rb_enc_get(str) != enc)
 rb_reg_init_str_enc(self, str, enc, flags);
    else
 rb_reg_init_str(self, str, flags);
    return self;
}

VALUE
rb_reg_quote(VALUE str)
{
    rb_encoding *enc = rb_enc_get(str);
    char *s, *send, *t;
    VALUE tmp;
    int c, clen;
    int ascii_only = rb_enc_str_asciionly_p(str);

    s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    send = s + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    while (s < send) {
        c = rb_enc_ascget(s, send, &clen, enc);
 if (c == -1) {
            s += rb_enc_mbclen((s),(send),(enc));
     continue;
 }
 switch (c) {
   case '[': case ']': case '{': case '}':
   case '(': case ')': case '|': case '-':
   case '*': case '.': case '\\':
   case '?': case '+': case '^': case '$':
   case ' ': case '#':
   case '\t': case '\f': case '\v': case '\n': case '\r':
     goto meta_found;
 }
        s += clen;
    }
    tmp = rb_str_new_shared(str);
    if (ascii_only) {
        rb_enc_associate(tmp, rb_usascii_encoding());
    }
    return tmp;

  meta_found:
    tmp =  ({ (__builtin_constant_p(0) && __builtin_constant_p((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)*2)) ? rb_str_new_static((0), ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)*2)) : rb_str_new((0), ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)*2)); });
    if (ascii_only) {
        rb_enc_associate(tmp, rb_usascii_encoding());
    }
    else {
        rb_enc_copy(tmp, str);
    }
    t = (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr);

    memcpy(t, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), s - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr));
    t += s - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);

    while (s < send) {
        c = rb_enc_ascget(s, send, &clen, enc);
 if (c == -1) {
     int n = rb_enc_mbclen((s),(send),(enc));

     while (n--)
  *t++ = *s++;
     continue;
 }
        s += clen;
 switch (c) {
   case '[': case ']': case '{': case '}':
   case '(': case ')': case '|': case '-':
   case '*': case '.': case '\\':
   case '?': case '+': case '^': case '$':
   case '#':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
     break;
   case ' ':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc((' '),(OnigUChar*)(t),(enc));
     continue;
   case '\t':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc(('t'),(OnigUChar*)(t),(enc));
     continue;
   case '\n':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc(('n'),(OnigUChar*)(t),(enc));
     continue;
   case '\r':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc(('r'),(OnigUChar*)(t),(enc));
     continue;
   case '\f':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc(('f'),(OnigUChar*)(t),(enc));
     continue;
   case '\v':
            t += ((enc))->code_to_mbc(('\\'),(OnigUChar*)(t),(enc));
            t += ((enc))->code_to_mbc(('v'),(OnigUChar*)(t),(enc));
     continue;
 }
        t += ((enc))->code_to_mbc((c),(OnigUChar*)(t),(enc));
    }
    rb_str_resize(tmp, t - (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr));
    ( (((!(((VALUE)(tmp) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(tmp) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(tmp))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return tmp;
}
static VALUE
rb_reg_s_quote(VALUE c, VALUE str)
{
    return rb_reg_quote(reg_operand(str, 1));
}

int
rb_reg_options(VALUE re)
{
    int options;

    rb_reg_check(re);
    options = (((struct RRegexp*)(re))->ptr)->options & (1U|((1U << 1) << 1)|(1U << 1));
    if (((struct RBasic*)(re))->flags & ((VALUE)RUBY_FL_USER4)) options |= 16;
    if (((struct RBasic*)(re))->flags & ((VALUE)RUBY_FL_USER6)) options |= 32;
    return options;
}

VALUE
rb_check_regexp_type(VALUE re)
{
    return rb_check_convert_type(re, RUBY_T_REGEXP, "Regexp", "to_regexp");
}
static VALUE
rb_reg_s_try_convert(VALUE dummy, VALUE re)
{
    return rb_check_regexp_type(re);
}

static VALUE
rb_reg_s_union(VALUE self, VALUE args0)
{
    long argc = rb_array_len(args0);

    if (argc == 0) {
        VALUE args[1];
        args[0] =  ({ (__builtin_constant_p("(?!)")) ? rb_str_new_static(("(?!)"), (long)strlen("(?!)")) : rb_str_new_cstr("(?!)"); });
        return rb_class_new_instance(1, args, rb_cRegexp);
    }
    else if (argc == 1) {
        VALUE arg = rb_ary_entry(args0, 0);
        VALUE re = rb_check_regexp_type(arg);
        if (!!((VALUE)(re) != ((VALUE)RUBY_Qnil)))
            return re;
        else {
            VALUE quoted;
            quoted = rb_reg_s_quote(((VALUE)RUBY_Qnil), arg);
            return rb_reg_new_str(quoted, 0);
        }
    }
    else {
 int i;
 VALUE source = rb_str_buf_new(0);
 rb_encoding *result_enc;

        int has_asciionly = 0;
        rb_encoding *has_ascii_compat_fixed = 0;
        rb_encoding *has_ascii_incompat = 0;

 for (i = 0; i < argc; i++) {
     volatile VALUE v;
     VALUE e = rb_ary_entry(args0, i);

     if (0 < i)
  rb_str_buf_cat_ascii(source, "|");

     v = rb_check_regexp_type(e);
     if (!!((VALUE)(v) != ((VALUE)RUBY_Qnil))) {
                rb_encoding *enc = rb_enc_get(v);
                if (!rb_enc_asciicompat_inline(enc)) {
                    if (!has_ascii_incompat)
                        has_ascii_incompat = enc;
                    else if (has_ascii_incompat != enc)
                        rb_raise(rb_eArgError, "incompatible encodings: %s and %s",
                            (has_ascii_incompat)->name, (enc)->name);
                }
                else if (rb_reg_fixed_encoding_p(v)) {
                    if (!has_ascii_compat_fixed)
                        has_ascii_compat_fixed = enc;
                    else if (has_ascii_compat_fixed != enc)
                        rb_raise(rb_eArgError, "incompatible encodings: %s and %s",
                            (has_ascii_compat_fixed)->name, (enc)->name);
                }
                else {
                    has_asciionly = 1;
                }
  v = rb_reg_to_s(v);
     }
     else {
                rb_encoding *enc;
                rb_string_value(&(e));
                enc = rb_enc_get(e);
                if (!rb_enc_asciicompat_inline(enc)) {
                    if (!has_ascii_incompat)
                        has_ascii_incompat = enc;
                    else if (has_ascii_incompat != enc)
                        rb_raise(rb_eArgError, "incompatible encodings: %s and %s",
                            (has_ascii_incompat)->name, (enc)->name);
                }
                else if (rb_enc_str_asciionly_p(e)) {
                    has_asciionly = 1;
                }
                else {
                    if (!has_ascii_compat_fixed)
                        has_ascii_compat_fixed = enc;
                    else if (has_ascii_compat_fixed != enc)
                        rb_raise(rb_eArgError, "incompatible encodings: %s and %s",
                            (has_ascii_compat_fixed)->name, (enc)->name);
                }
  v = rb_reg_s_quote(((VALUE)RUBY_Qnil), e);
     }
            if (has_ascii_incompat) {
                if (has_asciionly) {
                    rb_raise(rb_eArgError, "ASCII incompatible encoding: %s",
                        (has_ascii_incompat)->name);
                }
                if (has_ascii_compat_fixed) {
                    rb_raise(rb_eArgError, "incompatible encodings: %s and %s",
                        (has_ascii_incompat)->name, (has_ascii_compat_fixed)->name);
                }
            }

            if (i == 0) {
                rb_enc_copy(source, v);
            }
     rb_str_append(source, v);
 }

        if (has_ascii_incompat) {
            result_enc = has_ascii_incompat;
        }
        else if (has_ascii_compat_fixed) {
            result_enc = has_ascii_compat_fixed;
        }
        else {
            result_enc = rb_ascii8bit_encoding();
        }

        rb_enc_associate(source, result_enc);
        return rb_class_new_instance(1, &source, rb_cRegexp);
    }
}
static VALUE
rb_reg_s_union_m(VALUE self, VALUE args)
{
    VALUE v;
    if (rb_array_len(args) == 1 &&
        !!((VALUE)(v = rb_check_array_type(rb_ary_entry(args, 0))) != ((VALUE)RUBY_Qnil))) {
        return rb_reg_s_union(self, v);
    }
    return rb_reg_s_union(self, args);
}


static VALUE
rb_reg_init_copy(VALUE copy, VALUE re)
{
    if (!((copy) != (re) && (rb_obj_init_copy((copy), (re)), 1))) return copy;
    rb_reg_check(re);
    return rb_reg_init_str(copy, (((struct RRegexp*)(re))->src), rb_reg_options(re));
}

VALUE
rb_reg_regsub(VALUE str, VALUE src, struct re_registers *regs, VALUE regexp)
{
    VALUE val = 0;
    char *p, *s, *e;
    int no, clen;
    rb_encoding *str_enc = rb_enc_get(str);
    rb_encoding *src_enc = rb_enc_get(src);
    int acompat = rb_enc_asciicompat_inline(str_enc);


    p = s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    e = s + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    while (s < e) {
        int c = (acompat ? (*(&clen)=1,rb_isascii((s)[0])?(s)[0]:-1) : rb_enc_ascget((s), (e), (&clen), str_enc));
 char *ss;

 if (c == -1) {
     s += rb_enc_mbclen((s),(e),(str_enc));
     continue;
 }
 ss = s;
        s += clen;

 if (c != '\\' || s == e) continue;

 if (!val) {
     val = rb_str_buf_new(ss-p);
 }
        rb_enc_str_buf_cat(val, p, ss-p, str_enc);

        c = (acompat ? (*(&clen)=1,rb_isascii((s)[0])?(s)[0]:-1) : rb_enc_ascget((s), (e), (&clen), str_enc));
        if (c == -1) {
            s += rb_enc_mbclen((s),(e),(str_enc));
     rb_enc_str_buf_cat(val, ss, s-ss, str_enc);
            p = s;
     continue;
        }
        s += clen;

 p = s;
 switch (c) {
   case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9':
            if (!!((VALUE)(regexp) != ((VALUE)RUBY_Qnil)) && onig_noname_group_capture_is_active((((struct RRegexp*)(regexp))->ptr))) {
                no = c - '0';
            }
            else {
                continue;
            }
     break;

          case 'k':
            if (s < e && (acompat ? (*(&clen)=1,rb_isascii((s)[0])?(s)[0]:-1) : rb_enc_ascget((s), (e), (&clen), str_enc)) == '<') {
                char *name, *name_end;

                name_end = name = s + clen;
                while (name_end < e) {
                    c = (acompat ? (*(&clen)=1,rb_isascii((name_end)[0])?(name_end)[0]:-1) : rb_enc_ascget((name_end), (e), (&clen), str_enc));
                    if (c == '>') break;
                    name_end += c == -1 ? rb_enc_mbclen((name_end),(e),(str_enc)) : clen;
                }
                if (name_end < e) {
      VALUE n = rb_str_subseq(str, (long)(name - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)),
         (long)(name_end - name));
      if ((no = (!((VALUE)(regexp) != ((VALUE)RUBY_Qnil)) ? 0 : !rb_enc_compatible((((struct RRegexp*)(regexp))->src), (n)) ? 0 : name_to_backref_number((regs), (regexp), (name), (name_end)))) < 1) {
   name_to_backref_error(n);
      }
                    p = s = name_end + clen;
                    break;
                }
                else {
                    rb_raise(rb_eRuntimeError, "invalid group name reference format");
                }
            }

            rb_enc_str_buf_cat(val, ss, s-ss, str_enc);
            continue;

          case '0':
   case '&':
     no = 0;
     break;

   case '`':
     rb_enc_str_buf_cat(val, (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (regs->beg[(0)]), src_enc);
     continue;

   case '\'':
     rb_enc_str_buf_cat(val, (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr)+(regs->end[(0)]), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len)-(regs->end[(0)]), src_enc);
     continue;

   case '+':
     no = regs->num_regs-1;
     while ((regs->beg[(no)]) == -1 && no > 0) no--;
     if (no == 0) continue;
     break;

   case '\\':
     rb_enc_str_buf_cat(val, s-clen, clen, str_enc);
     continue;

   default:
     rb_enc_str_buf_cat(val, ss, s-ss, str_enc);
     continue;
 }

 if (no >= 0) {
     if (no >= regs->num_regs) continue;
     if ((regs->beg[(no)]) == -1) continue;
     rb_enc_str_buf_cat(val, (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr)+(regs->beg[(no)]), (regs->end[(no)])-(regs->beg[(no)]), src_enc);
 }
    }

    if (!val) return str;
    if (p < e) {
        rb_enc_str_buf_cat(val, p, e-p, str_enc);
    }

    return val;
}

static VALUE
kcode_getter(void)
{
    rb_warn("variable $KCODE is no longer effective");
    return ((VALUE)RUBY_Qnil);
}

static void
kcode_setter(VALUE val, ID id)
{
    rb_warn("variable $KCODE is no longer effective; ignored");
}

static VALUE
ignorecase_getter(void)
{
    rb_warn("variable $= is no longer effective");
    return ((VALUE)RUBY_Qfalse);
}

static void
ignorecase_setter(VALUE val, ID id)
{
    rb_warn("variable $= is no longer effective; ignored");
}

static VALUE
match_getter(void)
{
    VALUE match = rb_backref_get();

    if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    rb_match_busy(match);
    return match;
}

static void
match_setter(VALUE val)
{
    if (!!((VALUE)(val) != ((VALUE)RUBY_Qnil))) {
 (!( (((RUBY_T_MATCH)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(val)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_MATCH)) == RUBY_T_TRUE) ? (((VALUE)(val)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_MATCH)) == RUBY_T_FALSE) ? (((VALUE)(val)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_MATCH)) == RUBY_T_NIL) ? (((VALUE)(val)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_MATCH)) == RUBY_T_UNDEF) ? (((VALUE)(val)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_MATCH)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(val))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(val)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(val)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(val)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_MATCH)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(val)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(val)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(val)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(val)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(val)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(val)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(val)))->flags & RUBY_T_MASK) == ((RUBY_T_MATCH)))) || ((RUBY_T_MATCH) == RUBY_T_DATA && (((struct RTypedData*)(val))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(val), (RUBY_T_MATCH)) : (void)0);
    }
    rb_backref_set(val);
}
static VALUE
rb_reg_s_last_match(int argc, VALUE *argv)
{
    VALUE nth;

    if (argc > 0 && rb_scan_args(argc, argv, "01", &nth) == 1) {
        VALUE match = rb_backref_get();
        int n;
        if (!((VALUE)(match) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
        n = match_backref_number(match, nth);
 return rb_reg_nth_match(n, match);
    }
    return match_getter();
}

static void
re_warn(const char *s)
{
    rb_warn("%s", s);
}
void
Init_Regexp(void)
{
    rb_eRegexpError = rb_define_class("RegexpError", rb_eStandardError);

    onigenc_set_default_encoding((&OnigEncodingASCII));
    onig_set_warn_func(re_warn);
    onig_set_verb_warn_func(re_warn);

    rb_define_virtual_variable("$~", match_getter, match_setter);
    rb_define_virtual_variable("$&", last_match_getter, 0);
    rb_define_virtual_variable("$`", prematch_getter, 0);
    rb_define_virtual_variable("$'", postmatch_getter, 0);
    rb_define_virtual_variable("$+", last_paren_match_getter, 0);

    rb_define_virtual_variable("$=", ignorecase_getter, ignorecase_setter);
    rb_define_virtual_variable("$KCODE", kcode_getter, kcode_setter);
    rb_define_virtual_variable("$-K", kcode_getter, kcode_setter);

    rb_cRegexp = rb_define_class("Regexp", rb_cObject);
    rb_define_alloc_func(rb_cRegexp, rb_reg_s_alloc);
    rb_define_singleton_method(rb_cRegexp, "compile", rb_class_new_instance, -1);
    rb_define_singleton_method(rb_cRegexp, "quote", rb_reg_s_quote, 1);
    rb_define_singleton_method(rb_cRegexp, "escape", rb_reg_s_quote, 1);
    rb_define_singleton_method(rb_cRegexp, "union", rb_reg_s_union_m, -2);
    rb_define_singleton_method(rb_cRegexp, "last_match", rb_reg_s_last_match, -1);
    rb_define_singleton_method(rb_cRegexp, "try_convert", rb_reg_s_try_convert, 1);

    rb_define_method(rb_cRegexp, "initialize", rb_reg_initialize_m, -1);
    rb_define_method(rb_cRegexp, "initialize_copy", rb_reg_init_copy, 1);
    rb_define_method(rb_cRegexp, "hash", rb_reg_hash, 0);
    rb_define_method(rb_cRegexp, "eql?", rb_reg_equal, 1);
    rb_define_method(rb_cRegexp, "==", rb_reg_equal, 1);
    rb_define_method(rb_cRegexp, "=~", rb_reg_match, 1);
    rb_define_method(rb_cRegexp, "===", rb_reg_eqq, 1);
    rb_define_method(rb_cRegexp, "~", rb_reg_match2, 0);
    rb_define_method(rb_cRegexp, "match", rb_reg_match_m, -1);
    rb_define_method(rb_cRegexp, "match?", rb_reg_match_m_p, -1);
    rb_define_method(rb_cRegexp, "to_s", rb_reg_to_s, 0);
    rb_define_method(rb_cRegexp, "inspect", rb_reg_inspect, 0);
    rb_define_method(rb_cRegexp, "source", rb_reg_source, 0);
    rb_define_method(rb_cRegexp, "casefold?", rb_reg_casefold_p, 0);
    rb_define_method(rb_cRegexp, "options", rb_reg_options_m, 0);
    rb_define_method(rb_cRegexp, "encoding", rb_obj_encoding, 0);
    rb_define_method(rb_cRegexp, "fixed_encoding?", rb_reg_fixed_encoding_p, 0);
    rb_define_method(rb_cRegexp, "names", rb_reg_names, 0);
    rb_define_method(rb_cRegexp, "named_captures", rb_reg_named_captures, 0);


    rb_define_const(rb_cRegexp, "IGNORECASE", (((VALUE)(1U))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cRegexp, "EXTENDED", (((VALUE)((1U << 1)))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cRegexp, "MULTILINE", (((VALUE)(((1U << 1) << 1)))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cRegexp, "FIXEDENCODING", (((VALUE)(16))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(rb_cRegexp, "NOENCODING", (((VALUE)(32))<<1 | RUBY_FIXNUM_FLAG));

    rb_global_variable(&reg_cache);

    rb_cMatch = rb_define_class("MatchData", rb_cObject);
    rb_define_alloc_func(rb_cMatch, match_alloc);
    rb_undef_method(rb_class_of((VALUE)(rb_cMatch)), "new");

    rb_define_method(rb_cMatch, "initialize_copy", match_init_copy, 1);
    rb_define_method(rb_cMatch, "regexp", match_regexp, 0);
    rb_define_method(rb_cMatch, "names", match_names, 0);
    rb_define_method(rb_cMatch, "size", match_size, 0);
    rb_define_method(rb_cMatch, "length", match_size, 0);
    rb_define_method(rb_cMatch, "offset", match_offset, 1);
    rb_define_method(rb_cMatch, "begin", match_begin, 1);
    rb_define_method(rb_cMatch, "end", match_end, 1);
    rb_define_method(rb_cMatch, "to_a", match_to_a, 0);
    rb_define_method(rb_cMatch, "[]", match_aref, -1);
    rb_define_method(rb_cMatch, "captures", match_captures, 0);
    rb_define_method(rb_cMatch, "named_captures", match_named_captures, 0);
    rb_define_method(rb_cMatch, "values_at", match_values_at, -1);
    rb_define_method(rb_cMatch, "pre_match", rb_reg_match_pre, 0);
    rb_define_method(rb_cMatch, "post_match", rb_reg_match_post, 0);
    rb_define_method(rb_cMatch, "to_s", match_to_s, 0);
    rb_define_method(rb_cMatch, "inspect", match_inspect, 0);
    rb_define_method(rb_cMatch, "string", match_string, 0);
    rb_define_method(rb_cMatch, "hash", match_hash, 0);
    rb_define_method(rb_cMatch, "eql?", match_equal, 1);
    rb_define_method(rb_cMatch, "==", match_equal, 1);
}
