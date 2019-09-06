








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

 void rb_assert_failure(const char *, int, const char *, const char *);
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
static VALUE rb_str_clear(VALUE str);

VALUE rb_cString;
VALUE rb_cSymbol;
static VALUE str_replace_shared_without_enc(VALUE str2, VALUE str);
static VALUE str_new_shared(VALUE klass, VALUE str);
static VALUE str_new_frozen(VALUE klass, VALUE orig);
static VALUE str_new_static(VALUE klass, const char *ptr, long len, int encindex);
static void str_make_independent_expand(VALUE str, long len, long expand, const int termlen);
static inline void str_modifiable(VALUE str);
static VALUE rb_str_downcase(int argc, VALUE *argv, VALUE str);

static inline void
str_make_independent(VALUE str)
{
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    int termlen = (rb_enc_get(str))->min_enc_len;
    str_make_independent_expand((str), len, 0L, termlen);
}


static VALUE sym_ascii, sym_turkic, sym_lithuanian, sym_fold;

static rb_encoding *
get_actual_encoding(const int encidx, VALUE str)
{
    const unsigned char *q;

    switch (encidx) {
      case RUBY_ENCINDEX_UTF_16:
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < 2) break;
 q = (const unsigned char *)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 if (q[0] == 0xFE && q[1] == 0xFF) {
     return rb_enc_get_from_index(RUBY_ENCINDEX_UTF_16BE);
 }
 if (q[0] == 0xFF && q[1] == 0xFE) {
     return rb_enc_get_from_index(RUBY_ENCINDEX_UTF_16LE);
 }
 return rb_ascii8bit_encoding();
      case RUBY_ENCINDEX_UTF_32:
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < 4) break;
 q = (const unsigned char *)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 if (q[0] == 0 && q[1] == 0 && q[2] == 0xFE && q[3] == 0xFF) {
     return rb_enc_get_from_index(RUBY_ENCINDEX_UTF_32BE);
 }
 if (q[3] == 0 && q[2] == 0 && q[1] == 0xFE && q[0] == 0xFF) {
     return rb_enc_get_from_index(RUBY_ENCINDEX_UTF_32LE);
 }
 return rb_ascii8bit_encoding();
    }
    return rb_enc_from_index(encidx);
}

static rb_encoding *
get_encoding(VALUE str)
{
    return get_actual_encoding(((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)), str);
}

static void
mustnot_broken(VALUE str)
{
    if ((rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_BROKEN)) {
 rb_raise(rb_eArgError, "invalid byte sequence in %s", (get_encoding(str))->name);
    }
}

static void
mustnot_wchar(VALUE str)
{
    rb_encoding *enc = get_encoding(str);
    if ((enc)->min_enc_len > 1) {
 rb_raise(rb_eArgError, "wide char encoding: %s", (enc)->name);
    }
}

static int fstring_cmp(VALUE a, VALUE b);

static VALUE register_fstring(VALUE str);

const struct st_hash_type rb_fstring_hash_type = {
    fstring_cmp,
    rb_str_hash,
};



static int
fstr_update_callback(st_data_t *key, st_data_t *value, st_data_t arg, int existing)
{
    VALUE *fstr = (VALUE *)arg;
    VALUE str = (VALUE)*key;

    if (existing) {



 if (rb_objspace_garbage_object_p(str)) {
     *fstr = ((VALUE)RUBY_Qundef);
     return ST_DELETE;
 }

 *fstr = str;
 return ST_STOP;
    }
    else {
 if ((((struct RBasic*)(str))->flags&(((VALUE)RUBY_FL_USER19)))) {
     str = str_new_static(rb_cString, ((struct RString*)(str))->as.heap.ptr,
     ((struct RString*)(str))->as.heap.len,
     ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)));
     (void)(((struct RBasic*)(str))->flags |= RUBY_FL_FREEZE);
 }
 else {
     str = str_new_frozen(rb_cString, str);
     if (((((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) == (((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) {

  str_make_independent(str);
  __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((!(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(str))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 292, __func__, "OBJ_FROZEN(str)")), (void)0), ((!(!0 +0) || ((!(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(str))->flags&RUBY_FL_FREEZE)))) ? (void)0 : rb_assert_failure("string.c", 292, __func__, "OBJ_FROZEN(str)")));
     }
     if (!(!(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_TAINT)|((VALUE)RUBY_FL_EXIVAR)))) && (((struct RBasic*)(str))->klass) == rb_cString)) {
  str = str_new_frozen(rb_cString, str);
     }
 }
 ((struct RBasic*)(str))->flags |= RSTRING_FSTR;

 *key = *value = *fstr = str;
 return ST_CONTINUE;
    }
}

 extern
VALUE
rb_fstring(VALUE str)
{
    VALUE fstr;
    int bare;

    (!( (((RUBY_T_STRING)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(str)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_STRING)) == RUBY_T_TRUE) ? (((VALUE)(str)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_STRING)) == RUBY_T_FALSE) ? (((VALUE)(str)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_STRING)) == RUBY_T_NIL) ? (((VALUE)(str)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_STRING)) == RUBY_T_UNDEF) ? (((VALUE)(str)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_STRING)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(str))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_STRING)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(str)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == ((RUBY_T_STRING)))) || ((RUBY_T_STRING) == RUBY_T_DATA && (((struct RTypedData*)(str))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(str), (RUBY_T_STRING)) : (void)0);

    if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((RSTRING_FSTR))):0))
 return str;

    bare = (!(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_TAINT)|((VALUE)RUBY_FL_EXIVAR)))) && (((struct RBasic*)(str))->klass) == rb_cString);
    if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1)))) && !bare) {
 (void)(((struct RBasic*)(str))->flags |= RUBY_FL_FREEZE);
 return str;
    }

    fstr = register_fstring(str);

    if (!bare) {
 str_replace_shared_without_enc(str, fstr);
 (void)(((struct RBasic*)(str))->flags |= RUBY_FL_FREEZE);
 return str;
    }
    return fstr;
}

static VALUE
register_fstring(VALUE str)
{
    VALUE ret;
    st_table *frozen_strings = rb_vm_fstring_table();

    do {
 ret = str;
 st_update(frozen_strings, (st_data_t)str,
    fstr_update_callback, (st_data_t)&ret);
    } while (ret == ((VALUE)RUBY_Qundef));

    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((!(!(((VALUE)(ret) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ret) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ret))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(ret))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 345, __func__, "OBJ_FROZEN(ret)")), (void)0), ((!(!0 +0) || ((!(!(((VALUE)(ret) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(ret) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(ret))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(ret))->flags&RUBY_FL_FREEZE)))) ? (void)0 : rb_assert_failure("string.c", 345, __func__, "OBJ_FROZEN(ret)")));
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_USER19)))) ? (void)0 : rb_assert_failure("string.c", 346, __func__, "!FL_TEST_RAW(ret, STR_FAKESTR)")), (void)0), ((!(!0 +0) || (!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_USER19))))) ? (void)0 : rb_assert_failure("string.c", 346, __func__, "!FL_TEST_RAW(ret, STR_FAKESTR)")));
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_EXIVAR)))) ? (void)0 : rb_assert_failure("string.c", 347, __func__, "!FL_TEST_RAW(ret, FL_EXIVAR)")), (void)0), ((!(!0 +0) || (!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_EXIVAR))))) ? (void)0 : rb_assert_failure("string.c", 347, __func__, "!FL_TEST_RAW(ret, FL_EXIVAR)")));
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_TAINT)))) ? (void)0 : rb_assert_failure("string.c", 348, __func__, "!FL_TEST_RAW(ret, FL_TAINT)")), (void)0), ((!(!0 +0) || (!(((struct RBasic*)(ret))->flags&(((VALUE)RUBY_FL_TAINT))))) ? (void)0 : rb_assert_failure("string.c", 348, __func__, "!FL_TEST_RAW(ret, FL_TAINT)")));
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((((struct RBasic*)(ret))->klass) == rb_cString) ? (void)0 : rb_assert_failure("string.c", 349, __func__, "RBASIC_CLASS(ret) == rb_cString")), (void)0), ((!(!0 +0) || ((((struct RBasic*)(ret))->klass) == rb_cString)) ? (void)0 : rb_assert_failure("string.c", 349, __func__, "RBASIC_CLASS(ret) == rb_cString")));
    return ret;
}

static VALUE
setup_fake_str(struct RString *fake_str, const char *name, long len, int encidx)
{
    fake_str->basic.flags = RUBY_T_STRING|RSTRING_NOEMBED|((VALUE)RUBY_FL_USER18)|((VALUE)RUBY_FL_USER19);


    do { ((struct RBasic*)((VALUE)fake_str))->flags &= ~RUBY_ENCODING_MASK; ((struct RBasic*)((VALUE)fake_str))->flags |= (VALUE)(encidx) << RUBY_ENCODING_SHIFT;} while (0);

    memcpy(&((struct RBasicRaw *)((VALUE)((VALUE)fake_str)))->klass, &(rb_cString), sizeof(VALUE));
    fake_str->as.heap.len = len;
    fake_str->as.heap.ptr = (char *)name;
    fake_str->as.heap.aux.capa = len;
    return (VALUE)fake_str;
}

VALUE
rb_setup_fake_str(struct RString *fake_str, const char *name, long len, rb_encoding *enc)
{
    return setup_fake_str(fake_str, name, len, rb_enc_to_index(enc));
}

VALUE
rb_fstring_new(const char *ptr, long len)
{
    struct RString fake_str;
    return register_fstring(setup_fake_str(&fake_str, ptr, len, RUBY_ENCINDEX_US_ASCII));
}

VALUE
rb_fstring_enc_new(const char *ptr, long len, rb_encoding *enc)
{
    struct RString fake_str;
    return register_fstring(rb_setup_fake_str(&fake_str, ptr, len, enc));
}

VALUE
rb_fstring_cstr(const char *ptr)
{
    return rb_fstring_new(ptr, strlen(ptr));
}

VALUE
rb_fstring_enc_cstr(const char *ptr, rb_encoding *enc)
{
    return rb_fstring_enc_new(ptr, strlen(ptr), enc);
}

static int
fstring_set_class_i(st_data_t key, st_data_t val, st_data_t arg)
{
    do { VALUE _obj_ = ((VALUE)key); rb_obj_write((VALUE)(_obj_), (VALUE *)(&((struct RBasicRaw *)(_obj_))->klass), (VALUE)((VALUE)arg), "string.c", 403); } while (0);
    return ST_CONTINUE;
}

static int
fstring_cmp(VALUE a, VALUE b)
{
    long alen, blen;
    const char *aptr, *bptr;
    (!(((struct RBasic*)(a))->flags & RSTRING_NOEMBED) ? ((aptr) = ((struct RString*)(a))->as.ary, (alen) = (long)((((struct RBasic*)(a))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((aptr) = ((struct RString*)(a))->as.heap.ptr, (alen) = ((struct RString*)(a))->as.heap.len));
    (!(((struct RBasic*)(b))->flags & RSTRING_NOEMBED) ? ((bptr) = ((struct RString*)(b))->as.ary, (blen) = (long)((((struct RBasic*)(b))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((bptr) = ((struct RString*)(b))->as.heap.ptr, (blen) = ((struct RString*)(b))->as.heap.len));
    return (alen != blen ||
     ((int)((((struct RBasic*)(a))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(a))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(a)) != ((int)((((struct RBasic*)(b))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(b))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(b)) ||
     memcmp(aptr, bptr, alen) != 0);
}

static inline int
single_byte_optimizable(VALUE str)
{
    rb_encoding *enc;


    if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_7BIT)
        return 1;

    enc = get_encoding(str);
    if ((enc)->max_enc_len == 1)
        return 1;



    return 0;
}

VALUE rb_fs;

static inline const char *
search_nonascii(const char *p, const char *e)
{
    const uintptr_t *s, *t;






    if (1 || e - p >= 8) {
 s = (const uintptr_t *)p;
 t = (const uintptr_t *)(e - (8 -1));
 for (;s < t; s++) {
     if (*s & 0x8080808080808080ULL) {



  return (const char *)s + (ntz_intptr(*s&0x8080808080808080ULL)>>3);

     }
 }
 p = (const char *)s;
    }

    switch (e - p) {
      default: __builtin_unreachable();

      case 7: if (e[-7]&0x80) return e-7;
      case 6: if (e[-6]&0x80) return e-6;
      case 5: if (e[-5]&0x80) return e-5;
      case 4: if (e[-4]&0x80) return e-4;

      case 3: if (e[-3]&0x80) return e-3;
      case 2: if (e[-2]&0x80) return e-2;
      case 1: if (e[-1]&0x80) return e-1;
      case 0: return ((void*)0);
    }
}

static int
coderange_scan(const char *p, long len, rb_encoding *enc)
{
    const char *e = p + len;

    if (rb_enc_to_index(enc) == RUBY_ENCINDEX_ASCII) {

        p = search_nonascii(p, e);
        return p ? RUBY_ENC_CODERANGE_VALID : RUBY_ENC_CODERANGE_7BIT;
    }

    if (rb_enc_asciicompat_inline(enc)) {
        p = search_nonascii(p, e);
        if (!p) return RUBY_ENC_CODERANGE_7BIT;
        for (;;) {
            int ret = rb_enc_precise_mbclen(p, e, enc);
            if (!(0 < (ret))) return RUBY_ENC_CODERANGE_BROKEN;
            p += (ret);
            if (p == e) break;
            p = search_nonascii(p, e);
            if (!p) break;
        }
    }
    else {
        while (p < e) {
            int ret = rb_enc_precise_mbclen(p, e, enc);
            if (!(0 < (ret))) return RUBY_ENC_CODERANGE_BROKEN;
            p += (ret);
        }
    }
    return RUBY_ENC_CODERANGE_VALID;
}

long
rb_str_coderange_scan_restartable(const char *s, const char *e, rb_encoding *enc, int *cr)
{
    const char *p = s;

    if (*cr == RUBY_ENC_CODERANGE_BROKEN)
 return e - s;

    if (rb_enc_to_index(enc) == RUBY_ENCINDEX_ASCII) {

 if (*cr == RUBY_ENC_CODERANGE_VALID) return e - s;
 p = search_nonascii(p, e);
        *cr = p ? RUBY_ENC_CODERANGE_VALID : RUBY_ENC_CODERANGE_7BIT;
 return e - s;
    }
    else if (rb_enc_asciicompat_inline(enc)) {
 p = search_nonascii(p, e);
 if (!p) {
     if (*cr != RUBY_ENC_CODERANGE_VALID) *cr = RUBY_ENC_CODERANGE_7BIT;
     return e - s;
 }
 for (;;) {
     int ret = rb_enc_precise_mbclen(p, e, enc);
     if (!(0 < (ret))) {
  *cr = ((ret) == -1) ? RUBY_ENC_CODERANGE_BROKEN: RUBY_ENC_CODERANGE_UNKNOWN;
  return p - s;
     }
     p += (ret);
     if (p == e) break;
     p = search_nonascii(p, e);
     if (!p) break;
 }
    }
    else {
 while (p < e) {
     int ret = rb_enc_precise_mbclen(p, e, enc);
     if (!(0 < (ret))) {
  *cr = ((ret) == -1) ? RUBY_ENC_CODERANGE_BROKEN: RUBY_ENC_CODERANGE_UNKNOWN;
  return p - s;
     }
     p += (ret);
 }
    }
    *cr = RUBY_ENC_CODERANGE_VALID;
    return e - s;
}

static inline void
str_enc_copy(VALUE str1, VALUE str2)
{
    rb_enc_set_index(str1, ((int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str2)));
}

static void
rb_enc_cr_str_copy_for_substr(VALUE dest, VALUE src)
{



    str_enc_copy(dest, src);
    if ((!(((struct RBasic*)(dest))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(dest))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(dest))->as.heap.len) == 0) {
 if (!rb_enc_asciicompat_inline(get_encoding(src)))
     ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
 else
     ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
 return;
    }
    switch (((int)((struct RBasic*)(src))->flags & RUBY_ENC_CODERANGE_MASK)) {
      case RUBY_ENC_CODERANGE_7BIT:
 ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
 break;
      case RUBY_ENC_CODERANGE_VALID:
 if (!rb_enc_asciicompat_inline(get_encoding(src)) ||
     search_nonascii((!(((struct RBasic*)(dest))->flags & RSTRING_NOEMBED) ? ((struct RString*)(dest))->as.ary : ((struct RString*)(dest))->as.heap.ptr), (!(((struct RBasic*)(dest))->flags & RSTRING_NOEMBED) ? (((struct RString*)(dest))->as.ary + (long)((((struct RBasic*)(dest))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(dest))->as.heap.ptr + ((struct RString*)(dest))->as.heap.len))))
     ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
 else
     ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
 break;
      default:
 break;
    }
}

static void
rb_enc_cr_str_exact_copy(VALUE dest, VALUE src)
{
    str_enc_copy(dest, src);
    ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (((int)((struct RBasic*)(src))->flags & RUBY_ENC_CODERANGE_MASK)));
}

int
rb_enc_str_coderange(VALUE str)
{
    int cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);

    if (cr == RUBY_ENC_CODERANGE_UNKNOWN) {
 int encidx = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
 rb_encoding *enc = rb_enc_from_index(encidx);
 if ((enc)->min_enc_len > 1 && rb_enc_dummy_p(enc)) {
     cr = RUBY_ENC_CODERANGE_BROKEN;
 }
 else {
     cr = coderange_scan((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len),
    get_actual_encoding(encidx, str));
 }
        ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    }
    return cr;
}

int
rb_enc_str_asciionly_p(VALUE str)
{
    rb_encoding *enc = get_encoding(str);

    if (!rb_enc_asciicompat_inline(enc))
        return FALSE;
    else if (rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_7BIT)
        return TRUE;
    return FALSE;
}

static inline void
str_mod_check(VALUE s, const char *p, long len)
{
    if ((!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr) != p || (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len) != len){
 rb_raise(rb_eRuntimeError, "string modified");
    }
}

static size_t
str_capacity(VALUE str, const int termlen)
{
    if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 return (RSTRING_EMBED_LEN_MAX + 1 - termlen);
    }
    else if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18)))):0)) {
 return ((struct RString*)(str))->as.heap.len;
    }
    else {
 return ((struct RString*)(str))->as.heap.aux.capa;
    }
}

size_t
rb_str_capacity(VALUE str)
{
    return str_capacity(str, (rb_enc_get(str))->min_enc_len);
}

static inline void
must_not_null(const char *ptr)
{
    if (!ptr) {
 rb_raise(rb_eArgError, "NULL pointer given");
    }
}

static inline VALUE
str_alloc(VALUE klass)
{
    struct RString *(str) = (struct RString*)(((RUBY_T_STRING | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)) & ((VALUE)RUBY_FL_WB_PROTECTED)) ? rb_wb_protected_newobj_of(klass, (RUBY_T_STRING | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)) & ~((VALUE)RUBY_FL_WB_PROTECTED)) : rb_wb_unprotected_newobj_of(klass, RUBY_T_STRING | (1 ? ((VALUE)RUBY_FL_WB_PROTECTED) : 0)));
    return (VALUE)str;
}

static inline VALUE
empty_str_alloc(VALUE klass)
{
    do { if ((__builtin_expect(!!(0), 0))) { int dtrace_line; const char *dtrace_file = rb_source_location_cstr(&dtrace_line); if (!dtrace_file) dtrace_file = ""; do {} while (0); } } while (0);
    return str_alloc(klass);
}

static VALUE
str_new0(VALUE klass, const char *ptr, long len, int termlen)
{
    VALUE str;

    if (len < 0) {
 rb_raise(rb_eArgError, "negative string size (or size too big)");
    }

    do { if ((__builtin_expect(!!(0), 0))) { int dtrace_line; const char *dtrace_file = rb_source_location_cstr(&dtrace_line); if (!dtrace_file) dtrace_file = ""; do {} while (0); } } while (0);

    str = str_alloc(klass);
    if (!((len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
 ((struct RString*)(str))->as.heap.aux.capa = len;
 ((struct RString*)(str))->as.heap.ptr = ((char*)ruby_xmalloc2((size_t)((size_t)len + termlen),sizeof(char)));
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
    }
    else if (len == 0) {
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
    }
    if (ptr) {
 memcpy((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), ptr, len);
    }
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
    do { char *const term_fill_ptr = ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    return str;
}

static VALUE
str_new(VALUE klass, const char *ptr, long len)
{
    return str_new0(klass, ptr, len, 1);
}

VALUE
rb_str_new(const char *ptr, long len)
{
    return str_new(rb_cString, ptr, len);
}

VALUE
rb_usascii_str_new(const char *ptr, long len)
{
    VALUE str = rb_str_new(ptr, len);
    do { VALUE rb_encoding_coderange_obj = (str); rb_enc_set_index((rb_encoding_coderange_obj), ((RUBY_ENCINDEX_US_ASCII))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((RUBY_ENC_CODERANGE_7BIT))); } while (0);
    return str;
}

VALUE
rb_utf8_str_new(const char *ptr, long len)
{
    VALUE str = str_new(rb_cString, ptr, len);
    rb_enc_associate_index(str, RUBY_ENCINDEX_UTF_8);
    return str;
}

VALUE
rb_enc_str_new(const char *ptr, long len, rb_encoding *enc)
{
    VALUE str;

    if (!enc) return rb_str_new(ptr, len);

    str = str_new0(rb_cString, ptr, len, (enc)->min_enc_len);
    rb_enc_associate(str, enc);
    return str;
}

VALUE
rb_str_new_cstr(const char *ptr)
{
    must_not_null(ptr);
    return rb_str_new(ptr, strlen(ptr));
}

VALUE
rb_usascii_str_new_cstr(const char *ptr)
{
    VALUE str = rb_str_new_cstr(ptr);
    do { VALUE rb_encoding_coderange_obj = (str); rb_enc_set_index((rb_encoding_coderange_obj), ((RUBY_ENCINDEX_US_ASCII))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((RUBY_ENC_CODERANGE_7BIT))); } while (0);
    return str;
}

VALUE
rb_utf8_str_new_cstr(const char *ptr)
{
    VALUE str = rb_str_new_cstr(ptr);
    rb_enc_associate_index(str, RUBY_ENCINDEX_UTF_8);
    return str;
}

VALUE
rb_enc_str_new_cstr(const char *ptr, rb_encoding *enc)
{
    must_not_null(ptr);
    if ((enc)->min_enc_len != 1) {
 rb_raise(rb_eArgError, "wchar encoding given");
    }
    return rb_enc_str_new(ptr, strlen(ptr), enc);
}

static VALUE
str_new_static(VALUE klass, const char *ptr, long len, int encindex)
{
    VALUE str;

    if (len < 0) {
 rb_raise(rb_eArgError, "negative string size (or size too big)");
    }

    if (!ptr) {
 rb_encoding *enc = rb_enc_get_from_index(encindex);
 str = str_new0(klass, ptr, len, (enc)->min_enc_len);
    }
    else {
 do { if ((__builtin_expect(!!(0), 0))) { int dtrace_line; const char *dtrace_file = rb_source_location_cstr(&dtrace_line); if (!dtrace_file) dtrace_file = ""; do {} while (0); } } while (0);
 str = str_alloc(klass);
 ((struct RString*)(str))->as.heap.len = len;
 ((struct RString*)(str))->as.heap.ptr = (char *)ptr;
 ((struct RString*)(str))->as.heap.aux.capa = len;
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
 ((struct RBasic*)(str))->flags |= ((VALUE)RUBY_FL_USER18);
    }
    rb_enc_associate_index(str, encindex);
    return str;
}

VALUE
rb_str_new_static(const char *ptr, long len)
{
    return str_new_static(rb_cString, ptr, len, 0);
}

VALUE
rb_usascii_str_new_static(const char *ptr, long len)
{
    return str_new_static(rb_cString, ptr, len, RUBY_ENCINDEX_US_ASCII);
}

VALUE
rb_utf8_str_new_static(const char *ptr, long len)
{
    return str_new_static(rb_cString, ptr, len, RUBY_ENCINDEX_UTF_8);
}

VALUE
rb_enc_str_new_static(const char *ptr, long len, rb_encoding *enc)
{
    return str_new_static(rb_cString, ptr, len, rb_enc_to_index(enc));
}

VALUE
rb_tainted_str_new(const char *ptr, long len)
{
    VALUE str = rb_str_new(ptr, len);

    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

static VALUE
rb_tainted_str_new_with_enc(const char *ptr, long len, rb_encoding *enc)
{
    VALUE str = rb_enc_str_new(ptr, len, enc);

    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

VALUE
rb_tainted_str_new_cstr(const char *ptr)
{
    VALUE str = rb_str_new_cstr(ptr);

    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

static VALUE str_cat_conv_enc_opts(VALUE newstr, long ofs, const char *ptr, long len,
       rb_encoding *from, rb_encoding *to,
       int ecflags, VALUE ecopts);

VALUE
rb_str_conv_enc_opts(VALUE str, rb_encoding *from, rb_encoding *to, int ecflags, VALUE ecopts)
{
    long len;
    const char *ptr;
    VALUE newstr;

    if (!to) return str;
    if (!from) from = rb_enc_get(str);
    if (from == to) return str;
    if ((rb_enc_asciicompat_inline(to) && (rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_7BIT)) ||
 to == rb_ascii8bit_encoding()) {
 if (get_encoding(str) != to) {
     str = rb_str_dup(str);
     rb_enc_associate(str, to);
 }
 return str;
    }

    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(str))->as.ary, (len) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(str))->as.heap.ptr, (len) = ((struct RString*)(str))->as.heap.len));
    newstr = str_cat_conv_enc_opts(rb_str_buf_new(len), 0, ptr, len,
       from, to, ecflags, ecopts);
    if (!((VALUE)(newstr) != ((VALUE)RUBY_Qnil))) {

 return str;
    }
    ( (((!(((VALUE)(newstr) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(newstr) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(newstr))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(newstr))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(newstr))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(newstr))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return newstr;
}

VALUE
rb_str_cat_conv_enc_opts(VALUE newstr, long ofs, const char *ptr, long len,
    rb_encoding *from, int ecflags, VALUE ecopts)
{
    long olen;

    olen = (!(((struct RBasic*)(newstr))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(newstr))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(newstr))->as.heap.len);
    if (ofs < -olen || olen < ofs)
        rb_raise(rb_eIndexError, "index %ld out of string", ofs);
    if (ofs < 0) ofs += olen;
    if (!from) {
 do { if ((!(((struct RBasic*)((newstr)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((ofs)); ((struct RBasic*)((newstr)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((newstr)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(newstr))->as.heap.len = (ofs); }} while (0);
 return rb_str_cat(newstr, ptr, len);
    }

    rb_str_modify(newstr);
    return str_cat_conv_enc_opts(newstr, ofs, ptr, len, from,
     rb_enc_get(newstr),
     ecflags, ecopts);
}

VALUE
rb_str_initialize(VALUE str, const char *ptr, long len, rb_encoding *enc)
{
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((0)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (0); }} while (0);
    rb_enc_associate(str, enc);
    rb_str_cat(str, ptr, len);
    return str;
}

static VALUE
str_cat_conv_enc_opts(VALUE newstr, long ofs, const char *ptr, long len,
        rb_encoding *from, rb_encoding *to,
        int ecflags, VALUE ecopts)
{
    rb_econv_t *ec;
    rb_econv_result_t ret;
    long olen;
    VALUE econv_wrapper;
    const unsigned char *start, *sp;
    unsigned char *dest, *dp;
    size_t converted_output = (size_t)ofs;

    olen = rb_str_capacity(newstr);

    econv_wrapper = rb_obj_alloc(rb_cEncodingConverter);
    memset(&(((struct RBasicRaw *)((VALUE)(econv_wrapper)))->klass), 0, sizeof(VALUE));
    ec = rb_econv_open_opts(from->name, to->name, ecflags, ecopts);
    if (!ec) return ((VALUE)RUBY_Qnil);
    (((struct RData*)(econv_wrapper))->data) = ec;

    sp = (unsigned char*)ptr;
    start = sp;
    while ((dest = (unsigned char*)(!(((struct RBasic*)(newstr))->flags & RSTRING_NOEMBED) ? ((struct RString*)(newstr))->as.ary : ((struct RString*)(newstr))->as.heap.ptr)),
    (dp = dest + converted_output),
    (ret = rb_econv_convert(ec, &sp, start + len, &dp, dest + olen, 0)),
    ret == econv_destination_buffer_full) {

 size_t converted_input = sp - start;
 size_t rest = len - converted_input;
 converted_output = dp - dest;
 rb_str_set_len(newstr, converted_output);
 if (converted_input && converted_output &&
     rest < (9223372036854775807L / converted_output)) {
     rest = (rest * converted_output) / converted_input;
 }
 else {
     rest = olen;
 }
 olen += rest < 2 ? 2 : rest;
 rb_str_resize(newstr, olen);
    }
    (((struct RData*)(econv_wrapper))->data) = 0;
    rb_econv_close(ec);
    rb_gc_force_recycle(econv_wrapper);
    switch (ret) {
      case econv_finished:
 len = dp - (unsigned char*)(!(((struct RBasic*)(newstr))->flags & RSTRING_NOEMBED) ? ((struct RString*)(newstr))->as.ary : ((struct RString*)(newstr))->as.heap.ptr);
 rb_str_set_len(newstr, len);
 rb_enc_associate(newstr, to);
 return newstr;

      default:
 return ((VALUE)RUBY_Qnil);
    }
}

VALUE
rb_str_conv_enc(VALUE str, rb_encoding *from, rb_encoding *to)
{
    return rb_str_conv_enc_opts(str, from, to, 0, ((VALUE)RUBY_Qnil));
}

VALUE
rb_external_str_new_with_enc(const char *ptr, long len, rb_encoding *eenc)
{
    rb_encoding *ienc;
    VALUE str;
    const int eidx = rb_enc_to_index(eenc);

    if (!ptr) {
 return rb_tainted_str_new_with_enc(ptr, len, eenc);
    }


    if ((eidx == RUBY_ENCINDEX_ASCII) ||
 (eidx == RUBY_ENCINDEX_US_ASCII && search_nonascii(ptr, ptr + len))) {
 return rb_tainted_str_new(ptr, len);
    }

    ienc = rb_default_internal_encoding();
    if (!ienc || eenc == ienc) {
 return rb_tainted_str_new_with_enc(ptr, len, eenc);
    }


    if ((eidx == RUBY_ENCINDEX_ASCII) ||
 (eidx == RUBY_ENCINDEX_US_ASCII) ||
 (rb_enc_asciicompat_inline(eenc) && !search_nonascii(ptr, ptr + len))) {
 return rb_tainted_str_new_with_enc(ptr, len, ienc);
    }

    str = rb_tainted_str_new_with_enc(((void*)0), 0, ienc);


    if (!((VALUE)(rb_str_cat_conv_enc_opts(str, 0, ptr, len, eenc, 0, ((VALUE)RUBY_Qnil))) != ((VALUE)RUBY_Qnil))) {
 rb_str_initialize(str, ptr, len, eenc);
    }
    return str;
}

VALUE
rb_external_str_with_enc(VALUE str, rb_encoding *eenc)
{
    int eidx = rb_enc_to_index(eenc);
    if (eidx == RUBY_ENCINDEX_US_ASCII &&
 rb_enc_str_coderange(str) != RUBY_ENC_CODERANGE_7BIT) {
 rb_enc_associate_index(str, RUBY_ENCINDEX_ASCII);
 return str;
    }
    rb_enc_associate_index(str, eidx);
    return rb_str_conv_enc(str, eenc, rb_default_internal_encoding());
}

VALUE
rb_external_str_new(const char *ptr, long len)
{
    return rb_external_str_new_with_enc(ptr, len, rb_default_external_encoding());
}

VALUE
rb_external_str_new_cstr(const char *ptr)
{
    return rb_external_str_new_with_enc(ptr, strlen(ptr), rb_default_external_encoding());
}

VALUE
rb_locale_str_new(const char *ptr, long len)
{
    return rb_external_str_new_with_enc(ptr, len, rb_locale_encoding());
}

VALUE
rb_locale_str_new_cstr(const char *ptr)
{
    return rb_external_str_new_with_enc(ptr, strlen(ptr), rb_locale_encoding());
}

VALUE
rb_filesystem_str_new(const char *ptr, long len)
{
    return rb_external_str_new_with_enc(ptr, len, rb_filesystem_encoding());
}

VALUE
rb_filesystem_str_new_cstr(const char *ptr)
{
    return rb_external_str_new_with_enc(ptr, strlen(ptr), rb_filesystem_encoding());
}

VALUE
rb_str_export(VALUE str)
{
    return rb_str_conv_enc(str, get_encoding(str), rb_default_external_encoding());
}

VALUE
rb_str_export_locale(VALUE str)
{
    return rb_str_conv_enc(str, get_encoding(str), rb_locale_encoding());
}

VALUE
rb_str_export_to_enc(VALUE str, rb_encoding *enc)
{
    return rb_str_conv_enc(str, get_encoding(str), enc);
}

static VALUE
str_replace_shared_without_enc(VALUE str2, VALUE str)
{
    const int termlen = (rb_enc_get(str))->min_enc_len;
    char *ptr;
    long len;

    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(str))->as.ary, (len) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(str))->as.heap.ptr, (len) = ((struct RString*)(str))->as.heap.len));
    if (((len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
 char *ptr2 = ((struct RString*)(str2))->as.ary;
 ((!(((VALUE)((str2)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str2)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str2)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str2)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
 memcpy(ptr2, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), len);
 do { long tmp_n = (len); ((struct RBasic*)(str2))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str2))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
 do { char *const term_fill_ptr = (ptr2+len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    }
    else {
 str = rb_str_new_frozen(str);
 ((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str2))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0);
 (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(str))->as.ary, (len) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(str))->as.heap.ptr, (len) = ((struct RString*)(str))->as.heap.len));
 ((struct RString*)(str2))->as.heap.len = len;
 ((struct RString*)(str2))->as.heap.ptr = ptr;
 do { if (!((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str2)))->flags&((((VALUE)RUBY_FL_USER19)))):0)) { rb_obj_write((VALUE)((str2)), (VALUE *)(&((struct RString*)(str2))->as.heap.aux.shared), (VALUE)((str)), "string.c", 1134); ((!(((VALUE)((str2)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str2)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str2)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str2)))->flags |= (((VALUE)RUBY_FL_USER2))) : (void)0); if ((((struct RBasic*)((str)))->klass) == 0) (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER6))); } } while (0);
    }
    return str2;
}

static VALUE
str_replace_shared(VALUE str2, VALUE str)
{
    str_replace_shared_without_enc(str2, str);
    rb_enc_cr_str_exact_copy(str2, str);
    return str2;
}

static VALUE
str_new_shared(VALUE klass, VALUE str)
{
    return str_replace_shared(str_alloc(klass), str);
}

VALUE
rb_str_new_shared(VALUE str)
{
    VALUE str2 = str_new_shared(rb_obj_class(str), str);

    ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str2;
}

VALUE
rb_str_new_frozen(VALUE orig)
{
    VALUE str;

    if ((!(!(((VALUE)(orig) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(orig) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(orig))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(orig))->flags&RUBY_FL_FREEZE))) return orig;

    str = str_new_frozen(rb_obj_class(orig), orig);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(orig) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(orig) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(orig))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(orig))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}

VALUE
rb_str_tmp_frozen_acquire(VALUE orig)
{
    VALUE tmp;

    if ((((struct RBasic*)(orig))->flags&RUBY_FL_FREEZE)) return orig;

    tmp = str_new_frozen(0, orig);
    ( (((!(((VALUE)(tmp) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(tmp) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(tmp))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(orig) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(orig) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(orig))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(tmp))->flags |= ((((struct RBasic*)(orig))->flags&(RUBY_FL_TAINT)))) : (void)0);

    return tmp;
}

void
rb_str_tmp_frozen_release(VALUE orig, VALUE tmp)
{
    if ((((struct RBasic*)(tmp))->klass) != 0)
 return;

    if ((!(((struct RBasic*)((tmp)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((((struct RBasic*)(tmp))->flags&RUBY_FL_FREEZE)) ? (void)0 : rb_assert_failure("string.c", 1194, __func__, "OBJ_FROZEN_RAW(tmp)")), (void)0), ((!(!0 +0) || ((((struct RBasic*)(tmp))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 1194, __func__, "OBJ_FROZEN_RAW(tmp)")));
 rb_gc_force_recycle(tmp);
    }
    else if ((((struct RBasic*)(orig))->flags&(((VALUE)RUBY_FL_USER2))) &&
     !(((struct RBasic*)(orig))->flags&(((VALUE)RUBY_FL_USER7)|RUBY_FL_FREEZE))) {
 VALUE shared = ((struct RString*)(orig))->as.heap.aux.shared;

 if (shared == tmp && !(((struct RBasic*)(tmp))->flags&(((VALUE)RUBY_FL_USER6)))) {
     (void)(((struct RBasic*)(orig))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER2)));
     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((((struct RString*)(orig))->as.heap.ptr == ((struct RString*)(tmp))->as.heap.ptr) ? (void)0 : rb_assert_failure("string.c", 1203, __func__, "RSTRING(orig)->as.heap.ptr == RSTRING(tmp)->as.heap.ptr")), (void)0), ((!(!0 +0) || (((struct RString*)(orig))->as.heap.ptr == ((struct RString*)(tmp))->as.heap.ptr)) ? (void)0 : rb_assert_failure("string.c", 1203, __func__, "RSTRING(orig)->as.heap.ptr == RSTRING(tmp)->as.heap.ptr")));
     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((((struct RString*)(orig))->as.heap.len == ((struct RString*)(tmp))->as.heap.len) ? (void)0 : rb_assert_failure("string.c", 1204, __func__, "RSTRING(orig)->as.heap.len == RSTRING(tmp)->as.heap.len")), (void)0), ((!(!0 +0) || (((struct RString*)(orig))->as.heap.len == ((struct RString*)(tmp))->as.heap.len)) ? (void)0 : rb_assert_failure("string.c", 1204, __func__, "RSTRING(orig)->as.heap.len == RSTRING(tmp)->as.heap.len")));
     ((struct RString*)(orig))->as.heap.aux.capa = ((struct RString*)(tmp))->as.heap.aux.capa;
     ((struct RBasic*)(orig))->flags |= ((struct RBasic*)(tmp))->flags & ((VALUE)RUBY_FL_USER18);
     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((((struct RBasic*)(tmp))->flags&RUBY_FL_FREEZE)) ? (void)0 : rb_assert_failure("string.c", 1207, __func__, "OBJ_FROZEN_RAW(tmp)")), (void)0), ((!(!0 +0) || ((((struct RBasic*)(tmp))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 1207, __func__, "OBJ_FROZEN_RAW(tmp)")));
     rb_gc_force_recycle(tmp);
 }
    }
}

static VALUE
str_new_frozen(VALUE klass, VALUE orig)
{
    VALUE str;

    if ((!(((struct RBasic*)((orig)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 str = str_new(klass, (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? ((struct RString*)(orig))->as.ary : ((struct RString*)(orig))->as.heap.ptr), (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len));
    }
    else {
 if ((((struct RBasic*)(orig))->flags&(((VALUE)RUBY_FL_USER2)))) {
     VALUE shared = ((struct RString*)(orig))->as.heap.aux.shared;
     long ofs = ((struct RString*)(orig))->as.heap.ptr - ((struct RString*)(shared))->as.heap.ptr;
     long rest = ((struct RString*)(shared))->as.heap.len - ofs - ((struct RString*)(orig))->as.heap.len;
     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!(!(((struct RBasic*)((shared)))->flags&(((VALUE)RUBY_FL_USER1))))) ? (void)0 : rb_assert_failure("string.c", 1226, __func__, "!STR_EMBED_P(shared)")), (void)0), ((!(!0 +0) || (!(!(((struct RBasic*)((shared)))->flags&(((VALUE)RUBY_FL_USER1)))))) ? (void)0 : rb_assert_failure("string.c", 1226, __func__, "!STR_EMBED_P(shared)")));
     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((!(!(((VALUE)(shared) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(shared) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(shared))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(shared))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 1227, __func__, "OBJ_FROZEN(shared)")), (void)0), ((!(!0 +0) || ((!(!(((VALUE)(shared) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(shared) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(shared))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(shared))->flags&RUBY_FL_FREEZE)))) ? (void)0 : rb_assert_failure("string.c", 1227, __func__, "OBJ_FROZEN(shared)")));

     if ((ofs > 0) || (rest > 0) ||
  (klass != ((struct RBasic*)(shared))->klass) ||
  ((((struct RBasic*)(shared))->flags ^ ((struct RBasic*)(orig))->flags) & ((VALUE)RUBY_FL_TAINT)) ||
  ((int)((((struct RBasic*)(shared))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(shared))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(shared)) != ((int)((((struct RBasic*)(orig))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(orig))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(orig))) {
  str = str_new_shared(klass, shared);
  ((struct RString*)(str))->as.heap.ptr += ofs;
  ((struct RString*)(str))->as.heap.len -= ofs + rest;
     }
     else {
  if ((((struct RBasic*)(shared))->klass) == 0)
      (void)(((struct RBasic*)(shared))->flags |= (((VALUE)RUBY_FL_USER6)));
  return shared;
     }
 }
 else if ((((!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len)) <= RSTRING_EMBED_LEN_MAX + 1 - ((rb_enc_get(orig))->min_enc_len))) {
     str = str_alloc(klass);
     ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
     memcpy((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? ((struct RString*)(orig))->as.ary : ((struct RString*)(orig))->as.heap.ptr), (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len));
     do { long tmp_n = ((!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len)); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
     do { char *const term_fill_ptr = ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len))); const int term_fill_len = ((rb_enc_get(orig))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 }
 else {
     str = str_alloc(klass);
     do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
     ((struct RString*)(str))->as.heap.len = (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len);
     ((struct RString*)(str))->as.heap.ptr = (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? ((struct RString*)(orig))->as.ary : ((struct RString*)(orig))->as.heap.ptr);
     ((struct RString*)(str))->as.heap.aux.capa = ((struct RString*)(orig))->as.heap.aux.capa;
     ((struct RBasic*)(str))->flags |= ((struct RBasic*)(orig))->flags & ((VALUE)RUBY_FL_USER18);
     ((struct RBasic*)(orig))->flags &= ~((VALUE)RUBY_FL_USER18);
     do { if (!((!(((VALUE)(orig) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(orig) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(orig))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((orig)))->flags&((((VALUE)RUBY_FL_USER19)))):0)) { rb_obj_write((VALUE)((orig)), (VALUE *)(&((struct RString*)(orig))->as.heap.aux.shared), (VALUE)((str)), "string.c", 1258); ((!(((VALUE)((orig)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((orig)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((orig)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((orig)))->flags |= (((VALUE)RUBY_FL_USER2))) : (void)0); if ((((struct RBasic*)((str)))->klass) == 0) (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER6))); } } while (0);
     if (klass == 0)
  (void)(((struct RBasic*)(str))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER6)));
 }
    }

    rb_enc_cr_str_exact_copy(str, orig);
    rb_obj_freeze_inline((VALUE)str);
    return str;
}

VALUE
rb_str_new_with_class(VALUE obj, const char *ptr, long len)
{
    return str_new0(rb_obj_class(obj), ptr, len, (rb_enc_get(obj))->min_enc_len);
}

static VALUE
str_new_empty(VALUE str)
{
    VALUE v = rb_str_new_with_class(str, 0, 0);
    rb_enc_copy(v, str);
    ( (((!(((VALUE)(v) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(v) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(v))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(v))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return v;
}



VALUE
rb_str_buf_new(long capa)
{
    VALUE str = str_alloc(rb_cString);

    if (capa < 127) {
 capa = 127;
    }
    ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0);
    ((struct RString*)(str))->as.heap.aux.capa = capa;
    ((struct RString*)(str))->as.heap.ptr = ((char*)ruby_xmalloc2((size_t)((size_t)capa + 1),sizeof(char)));
    ((struct RString*)(str))->as.heap.ptr[0] = '\0';

    return str;
}

VALUE
rb_str_buf_new_cstr(const char *ptr)
{
    VALUE str;
    long len = strlen(ptr);

    str = rb_str_buf_new(len);
    rb_str_buf_cat(str, ptr, len);

    return str;
}

VALUE
rb_str_tmp_new(long len)
{
    return str_new(0, 0, len);
}

void
rb_str_free(VALUE str)
{
    if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((RSTRING_FSTR))):0)) {
 st_data_t fstr = (st_data_t)str;
 st_delete(rb_vm_fstring_table(), &fstr, ((void*)0));
 ((void)0);
    }

    if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 ((void)0);
    }
    else if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER2) | ((VALUE)RUBY_FL_USER18)))):0)) {
 (void)(((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER2)))):0));
 (void)(((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER18)))):0));
    }
    else {
 ((void)0);
 ruby_xfree((((struct RString*)(str))->as.heap.ptr));
    }
}

 extern size_t
rb_str_memsize(VALUE str)
{
    if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18)))):0) == ((VALUE)RUBY_FL_USER1)) {
 return ((size_t)((struct RString*)(str))->as.heap.aux.capa + (rb_enc_get(str))->min_enc_len);
    }
    else {
 return 0;
    }
}

VALUE
rb_str_to_str(VALUE str)
{
    return rb_convert_type_with_id(str, RUBY_T_STRING, "String", idTo_str);
}

static inline void str_discard(VALUE str);
static void str_shared_replace(VALUE str, VALUE str2);

void
rb_str_shared_replace(VALUE str, VALUE str2)
{
    if (str != str2) str_shared_replace(str, str2);
}

static void
str_shared_replace(VALUE str, VALUE str2)
{
    rb_encoding *enc;
    int cr;
    int termlen;

    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((str2 != str) ? (void)0 : rb_assert_failure("string.c", 1375, __func__, "str2 != str")), (void)0), ((!(!0 +0) || (str2 != str)) ? (void)0 : rb_assert_failure("string.c", 1375, __func__, "str2 != str")));
    enc = get_encoding(str2);
    cr = ((int)((struct RBasic*)(str2))->flags & RUBY_ENC_CODERANGE_MASK);
    str_discard(str);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(str2))->flags&(RUBY_FL_TAINT)))) : (void)0);
    termlen = (enc)->min_enc_len;

    if ((((!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len)) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
 ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
 memcpy((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr), (size_t)(!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len) + termlen);
 do { long tmp_n = ((!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len)); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
        rb_enc_associate(str, enc);
        ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    }
    else {
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
 ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER2))) : (void)0);
 ((struct RString*)(str))->as.heap.ptr = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr);
 ((struct RString*)(str))->as.heap.len = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len);

 if (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str2)))->flags&((((VALUE)RUBY_FL_USER2)))):0)) {
     VALUE shared = ((struct RString*)(str2))->as.heap.aux.shared;
     do { if (!((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER19)))):0)) { rb_obj_write((VALUE)((str)), (VALUE *)(&((struct RString*)(str))->as.heap.aux.shared), (VALUE)((shared)), "string.c", 1397); ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER2))) : (void)0); if ((((struct RBasic*)((shared)))->klass) == 0) (void)(((struct RBasic*)((shared)))->flags |= (((VALUE)RUBY_FL_USER6))); } } while (0);
 }
 else {
     ((struct RString*)(str))->as.heap.aux.capa = ((struct RString*)(str2))->as.heap.aux.capa;
 }


 ((!(((VALUE)((str2)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str2)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str2)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str2)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
 (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr)[0] = 0;
 do { long tmp_n = (0); ((struct RBasic*)(str2))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str2))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
 rb_enc_associate(str, enc);
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    }
}

VALUE rb_obj_as_string_result(VALUE str, VALUE obj);

VALUE
rb_obj_as_string(VALUE obj)
{
    VALUE str;

    if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(obj))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((obj) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((obj) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((obj) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((obj) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(obj)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(obj))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 return obj;
    }
    str = rb_funcall(obj, idTo_s, 0);
    return rb_obj_as_string_result(str, obj);
}

VALUE
rb_obj_as_string_result(VALUE str, VALUE obj)
{
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))
 return rb_any_to_s(obj);
    if (!(((struct RBasic*)(str))->flags&(RSTRING_FSTR)) && (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE))

 (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(obj))->flags&(RUBY_FL_TAINT))));
    return str;
}

static VALUE
str_replace(VALUE str, VALUE str2)
{
    long len;

    len = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len);
    if (((((struct RBasic*)(((str2))))->flags&((((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) == (((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) {
 VALUE shared = ((struct RString*)(str2))->as.heap.aux.shared;
 __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, (((!(!(((VALUE)(shared) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(shared) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(shared))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(shared))->flags&RUBY_FL_FREEZE))) ? (void)0 : rb_assert_failure("string.c", 1445, __func__, "OBJ_FROZEN(shared)")), (void)0), ((!(!0 +0) || ((!(!(((VALUE)(shared) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(shared) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(shared))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(shared))->flags&RUBY_FL_FREEZE)))) ? (void)0 : rb_assert_failure("string.c", 1445, __func__, "OBJ_FROZEN(shared)")));
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
 ((struct RString*)(str))->as.heap.len = len;
 ((struct RString*)(str))->as.heap.ptr = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr);
 do { if (!((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER19)))):0)) { rb_obj_write((VALUE)((str)), (VALUE *)(&((struct RString*)(str))->as.heap.aux.shared), (VALUE)((shared)), "string.c", 1449); ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER2))) : (void)0); if ((((struct RBasic*)((shared)))->klass) == 0) (void)(((struct RBasic*)((shared)))->flags |= (((VALUE)RUBY_FL_USER6))); } } while (0);
 rb_enc_cr_str_exact_copy(str, str2);
    }
    else {
 str_replace_shared(str, str2);
    }

    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(str2))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str;
}

static inline VALUE
str_duplicate(VALUE klass, VALUE str)
{
    enum {embed_size = RSTRING_EMBED_LEN_MAX + 1};
    const VALUE flag_mask =
 RSTRING_NOEMBED | RSTRING_EMBED_LEN_MASK |
 RUBY_ENC_CODERANGE_MASK | RUBY_ENCODING_MASK |
 ((VALUE)RUBY_FL_TAINT) | ((VALUE)RUBY_FL_FREEZE)
 ;
    VALUE flags = (((struct RBasic*)(str))->flags&(flag_mask));
    VALUE dup = str_alloc(klass);
    memcpy((((struct RString*)(dup))->as.ary), (((struct RString*)(str))->as.ary), sizeof(char)*(size_t)(embed_size));

    if (flags & ((VALUE)RUBY_FL_USER1)) {
 if ((__builtin_expect(!!(!(flags & ((VALUE)RUBY_FL_FREEZE))), 0))) {
     str = str_new_frozen(klass, str);
     (void)(((struct RBasic*)(str))->flags |= (flags & ((VALUE)RUBY_FL_TAINT)));
     flags = (((struct RBasic*)(str))->flags&(flag_mask));
 }
 if (flags & ((VALUE)RUBY_FL_USER1)) {
     rb_obj_write((VALUE)(dup), (VALUE *)(&((struct RString*)(dup))->as.heap.aux.shared), (VALUE)(str), "string.c", 1480);
     flags |= ((VALUE)RUBY_FL_USER2);
 }
 else {
     memcpy((((struct RString*)(dup))->as.ary), (((struct RString*)(str))->as.ary), sizeof(char)*(size_t)(embed_size));

 }
    }
    (void)(((struct RBasic*)(dup))->flags |= (flags & ~((VALUE)RUBY_FL_FREEZE)));
    return dup;
}

VALUE
rb_str_dup(VALUE str)
{
    return str_duplicate(rb_obj_class(str), str);
}

VALUE
rb_str_resurrect(VALUE str)
{
    do { if ((__builtin_expect(!!(0), 0))) { int dtrace_line; const char *dtrace_file = rb_source_location_cstr(&dtrace_line); if (!dtrace_file) dtrace_file = ""; do {} while (0); } } while (0);
    return str_duplicate(rb_cString, str);
}
static VALUE
rb_str_init(int argc, VALUE *argv, VALUE str)
{
    static ID keyword_ids[2];
    VALUE orig, opt, venc, vcapa;
    VALUE kwargs[2];
    rb_encoding *enc = 0;
    int n;

    if (!keyword_ids[0]) {
 keyword_ids[0] = rb_id_encoding();
 do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("capacity")), (long)strlen(("capacity"))); (keyword_ids[1]) = rb_intern_id_cache; } while (0);
    }

    n = rb_scan_args(argc, argv, "01:", &orig, &opt);
    if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) {
 rb_get_kwargs(opt, keyword_ids, 0, 2, kwargs);
 venc = kwargs[0];
 vcapa = kwargs[1];
 if (venc != ((VALUE)RUBY_Qundef) && !!((VALUE)(venc) != ((VALUE)RUBY_Qnil))) {
     enc = rb_to_encoding(venc);
 }
 if (vcapa != ((VALUE)RUBY_Qundef) && !!((VALUE)(vcapa) != ((VALUE)RUBY_Qnil))) {
     long capa = rb_num2long_inline(vcapa);
     long len = 0;
     int termlen = enc ? (enc)->min_enc_len : 1;

     if (capa < 127) {
  capa = 127;
     }
     if (n == 1) {
  rb_string_value(&(orig));
  len = (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len);
  if (capa < len) {
      capa = len;
  }
  if (orig == str) n = 0;
     }
     str_modifiable(str);
     if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
  ((struct RString*)(str))->as.heap.ptr = ((char*)ruby_xmalloc2((size_t)((size_t)capa + termlen),sizeof(char)));
     }
     else if (((size_t)((struct RString*)(str))->as.heap.aux.capa + (rb_enc_get(str))->min_enc_len) != (size_t)capa + termlen) {
  ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)capa + termlen),sizeof(char)));
     }
     ((struct RString*)(str))->as.heap.len = len;
     do { char *const term_fill_ptr = (&((struct RString*)(str))->as.heap.ptr[len]); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
     if (n == 1) {
  memcpy(((struct RString*)(str))->as.heap.ptr, (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? ((struct RString*)(orig))->as.ary : ((struct RString*)(orig))->as.heap.ptr), len);
  rb_enc_cr_str_exact_copy(str, orig);
     }
     ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0);
     ((struct RString*)(str))->as.heap.aux.capa = capa;
 }
 else if (n == 1) {
     rb_str_replace(str, orig);
 }
 if (enc) {
     rb_enc_associate(str, enc);
     ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
 }
    }
    else if (n == 1) {
 rb_str_replace(str, orig);
    }
    return str;
}
static inline uintptr_t
count_utf8_lead_bytes_with_word(const uintptr_t *s)
{
    uintptr_t d = *s;


    d = (d>>6) | (~d>>7);
    d &= 0x8080808080808080ULL >> 7;






    d += (d>>8);
    d += (d>>16);

    d += (d>>32);

    return (d&0xF);

}


static inline long
enc_strlen(const char *p, const char *e, rb_encoding *enc, int cr)
{
    long c;
    const char *q;

    if ((enc)->max_enc_len == (enc)->min_enc_len) {
 long diff = (long)(e - p);
 return diff / (enc)->min_enc_len + !!(diff % (enc)->min_enc_len);
    }

    else if (cr == RUBY_ENC_CODERANGE_VALID && enc == rb_utf8_encoding()) {
 uintptr_t len = 0;
 if ((int)sizeof(uintptr_t) * 2 < e - p) {
     const uintptr_t *s, *t;
     const uintptr_t lowbits = sizeof(uintptr_t) - 1;
     s = (const uintptr_t*)(~lowbits & ((uintptr_t)p + lowbits));
     t = (const uintptr_t*)(~lowbits & (uintptr_t)e);
     while (p < (const char *)s) {
  if ((((*p)&0xC0) != 0x80)) len++;
  p++;
     }
     while (s < t) {
  len += count_utf8_lead_bytes_with_word(s);
  s++;
     }
     p = (const char *)s;
 }
 while (p < e) {
     if ((((*p)&0xC0) != 0x80)) len++;
     p++;
 }
 return (long)len;
    }

    else if (rb_enc_asciicompat_inline(enc)) {
        c = 0;
 if (rb_enc_coderange_clean_p(cr)) {
     while (p < e) {
  if (rb_isascii(*p)) {
      q = search_nonascii(p, e);
      if (!q)
   return c + (e - p);
      c += q - p;
      p = q;
  }
  p += rb_enc_fast_mbclen(p, e, enc);
  c++;
     }
 }
 else {
     while (p < e) {
  if (rb_isascii(*p)) {
      q = search_nonascii(p, e);
      if (!q)
   return c + (e - p);
      c += q - p;
      p = q;
  }
  p += rb_enc_mbclen(p, e, enc);
  c++;
     }
 }
        return c;
    }

    for (c=0; p<e; c++) {
        p += rb_enc_mbclen(p, e, enc);
    }
    return c;
}

long
rb_enc_strlen(const char *p, const char *e, rb_encoding *enc)
{
    return enc_strlen(p, e, enc, RUBY_ENC_CODERANGE_UNKNOWN);
}




long
rb_enc_strlen_cr(const char *p, const char *e, rb_encoding *enc, int *cr)
{
    long c;
    const char *q;
    int ret;

    *cr = 0;
    if ((enc)->max_enc_len == (enc)->min_enc_len) {
 long diff = (long)(e - p);
 return diff / (enc)->min_enc_len + !!(diff % (enc)->min_enc_len);
    }
    else if (rb_enc_asciicompat_inline(enc)) {
 c = 0;
 while (p < e) {
     if (rb_isascii(*p)) {
  q = search_nonascii(p, e);
  if (!q) {
      if (!*cr) *cr = RUBY_ENC_CODERANGE_7BIT;
      return c + (e - p);
  }
  c += q - p;
  p = q;
     }
     ret = rb_enc_precise_mbclen(p, e, enc);
     if ((0 < (ret))) {
  *cr |= RUBY_ENC_CODERANGE_VALID;
  p += (ret);
     }
     else {
  *cr = RUBY_ENC_CODERANGE_BROKEN;
  p++;
     }
     c++;
 }
 if (!*cr) *cr = RUBY_ENC_CODERANGE_7BIT;
 return c;
    }

    for (c=0; p<e; c++) {
 ret = rb_enc_precise_mbclen(p, e, enc);
 if ((0 < (ret))) {
     *cr |= RUBY_ENC_CODERANGE_VALID;
     p += (ret);
 }
 else {
     *cr = RUBY_ENC_CODERANGE_BROKEN;
            if (p + (enc)->min_enc_len <= e)
                p += (enc)->min_enc_len;
            else
                p = e;
 }
    }
    if (!*cr) *cr = RUBY_ENC_CODERANGE_7BIT;
    return c;
}


static long
str_strlen(VALUE str, rb_encoding *enc)
{
    const char *p, *e;
    int cr;

    if (single_byte_optimizable(str)) return (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (!enc) enc = get_encoding(str);
    p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);

    if (cr == RUBY_ENC_CODERANGE_UNKNOWN) {
 long n = rb_enc_strlen_cr(p, e, enc, &cr);
 if (cr) ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
 return n;
    }
    else {
 return enc_strlen(p, e, enc, cr);
    }
}

long
rb_str_strlen(VALUE str)
{
    return str_strlen(str, ((void*)0));
}
VALUE
rb_str_length(VALUE str)
{
    return rb_long2num_inline(str_strlen(str, ((void*)0)));
}
static VALUE
rb_str_bytesize(VALUE str)
{
    return rb_long2num_inline((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
}
static VALUE
rb_str_empty(VALUE str)
{
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0)
 return ((VALUE)RUBY_Qtrue);
    return ((VALUE)RUBY_Qfalse);
}
VALUE
rb_str_plus(VALUE str1, VALUE str2)
{
    VALUE str3;
    rb_encoding *enc;
    char *ptr1, *ptr2, *ptr3;
    long len1, len2;
    int termlen;

    rb_string_value(&(str2));
    enc = rb_enc_check_str(str1, str2);
    (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((ptr1) = ((struct RString*)(str1))->as.ary, (len1) = (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr1) = ((struct RString*)(str1))->as.heap.ptr, (len1) = ((struct RString*)(str1))->as.heap.len));
    (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((ptr2) = ((struct RString*)(str2))->as.ary, (len2) = (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr2) = ((struct RString*)(str2))->as.heap.ptr, (len2) = ((struct RString*)(str2))->as.heap.len));
    termlen = (enc)->min_enc_len;
    if (len1 > 9223372036854775807L - len2) {
 rb_raise(rb_eArgError, "string size too big");
    }
    str3 = str_new0(rb_cString, 0, len1+len2, termlen);
    ptr3 = (!(((struct RBasic*)(str3))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str3))->as.ary : ((struct RString*)(str3))->as.heap.ptr);
    memcpy(ptr3, ptr1, len1);
    memcpy(ptr3+len1, ptr2, len2);
    do { char *const term_fill_ptr = (&ptr3[len1+len2]); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);

    (void)(((struct RBasic*)(str3))->flags |= ((((struct RBasic*)(str1))->flags&(RUBY_FL_TAINT)) | (((struct RBasic*)(str2))->flags&(RUBY_FL_TAINT))));
    do { VALUE rb_encoding_coderange_obj = (str3); rb_enc_set_index((rb_encoding_coderange_obj), ((rb_enc_to_index(enc)))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((((((int)((struct RBasic*)(str1))->flags & RUBY_ENC_CODERANGE_MASK)) == RUBY_ENC_CODERANGE_7BIT ? (((int)((struct RBasic*)(str2))->flags & RUBY_ENC_CODERANGE_MASK)) : (((int)((struct RBasic*)(str1))->flags & RUBY_ENC_CODERANGE_MASK)) != RUBY_ENC_CODERANGE_VALID ? RUBY_ENC_CODERANGE_UNKNOWN : (((int)((struct RBasic*)(str2))->flags & RUBY_ENC_CODERANGE_MASK)) == RUBY_ENC_CODERANGE_7BIT ? RUBY_ENC_CODERANGE_VALID : (((int)((struct RBasic*)(str2))->flags & RUBY_ENC_CODERANGE_MASK)))))); } while (0);

    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str1); ; rb_gc_guarded_ptr; }));
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str2); ; rb_gc_guarded_ptr; }));
    return str3;
}
VALUE
rb_str_times(VALUE str, VALUE times)
{
    VALUE str2;
    long n, len;
    char *ptr2;
    int termlen;

    if (times == (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG)) {
 return rb_str_dup(str);
    }
    if (times == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)) {
 str2 = str_alloc(rb_obj_class(str));
 rb_enc_copy(str2, str);
 ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
 return str2;
    }
    len = rb_num2long_inline(times);
    if (len < 0) {
 rb_raise(rb_eArgError, "negative argument");
    }
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 1 && (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0] == 0) {
       str2 = str_alloc(rb_obj_class(str));
       if (!((len) <= RSTRING_EMBED_LEN_MAX + 1 - (1))) {
           ((struct RString*)(str2))->as.heap.aux.capa = len;
           ((struct RString*)(str2))->as.heap.ptr = ((char*)ruby_xcalloc((size_t)((size_t)len + 1),sizeof(char)));
           do { ((!(((VALUE)((str2)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str2)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str2)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str2)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str2)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str2)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
       }
       do { if ((!(((struct RBasic*)((str2)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str2)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str2)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str2))->as.heap.len = (len); }} while (0);
       rb_enc_copy(str2, str);
       ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
       return str2;
    }
    if (len && 9223372036854775807L/len < (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) {
 rb_raise(rb_eArgError, "argument too big");
    }

    len *= (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    termlen = (rb_enc_get(str))->min_enc_len;
    str2 = str_new0(rb_obj_class(str), 0, len, termlen);
    ptr2 = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr);
    if (len) {
        n = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
        memcpy(ptr2, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), n);
        while (n <= len/2) {
            memcpy(ptr2 + n, ptr2, n);
            n *= 2;
        }
        memcpy(ptr2 + n, ptr2, len-n);
    }
    do { if ((!(((struct RBasic*)((str2)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str2)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str2)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str2))->as.heap.len = (len); }} while (0);
    do { char *const term_fill_ptr = (&ptr2[len]); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    rb_enc_cr_str_copy_for_substr(str2, str);

    return str2;
}
static VALUE
rb_str_format_m(VALUE str, VALUE arg)
{
    VALUE tmp = rb_check_array_type(arg);

    if (!!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
 VALUE rv = rb_str_format(rb_long2int_inline(rb_array_len(tmp)), rb_array_const_ptr(tmp), str);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(tmp); ; rb_gc_guarded_ptr; }));
 return rv;
    }
    return rb_str_format(1, &arg, str);
}

static inline void
rb_check_lockedtmp(VALUE str)
{
    if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER7)))):0)) {
 rb_raise(rb_eRuntimeError, "can't modify string; temporarily locked");
    }
}

static inline void
str_modifiable(VALUE str)
{
    rb_check_lockedtmp(str);
    ({do { VALUE frozen_obj = (str); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
}

static inline int
str_dependent_p(VALUE str)
{
    if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1)))) || !((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18)))):0)) {
 return 0;
    }
    else {
 return 1;
    }
}

static inline int
str_independent(VALUE str)
{
    str_modifiable(str);
    return !str_dependent_p(str);
}

static void
str_make_independent_expand(VALUE str, long len, long expand, const int termlen)
{
    char *ptr;
    const char *oldptr;
    long capa = len + expand;

    if (len > capa) len = capa;

    if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1)))) && ((capa) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
 ptr = ((struct RString*)(str))->as.heap.ptr;
 ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
 memcpy(((struct RString*)(str))->as.ary, ptr, len);
 do { char *const term_fill_ptr = (((struct RString*)(str))->as.ary + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 do { long tmp_n = (len); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
 return;
    }

    ptr = ((char*)ruby_xmalloc2((size_t)((size_t)capa + termlen),sizeof(char)));
    oldptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    if (oldptr) {
 memcpy(ptr, oldptr, len);
    }
    do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
    ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18))) : (void)0);
    do { char *const term_fill_ptr = (ptr + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    ((struct RString*)(str))->as.heap.ptr = ptr;
    ((struct RString*)(str))->as.heap.len = len;
    ((struct RString*)(str))->as.heap.aux.capa = capa;
}

void
rb_str_modify(VALUE str)
{
    if (!str_independent(str))
 str_make_independent(str);
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
}

void
rb_str_modify_expand(VALUE str, long expand)
{
    int termlen = (rb_enc_get(str))->min_enc_len;
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    if (expand < 0) {
 rb_raise(rb_eArgError, "negative expanding string size");
    }
    if (expand > 9223372036854775807L - len) {
 rb_raise(rb_eArgError, "string size too big");
    }

    if (!str_independent(str)) {
 str_make_independent_expand(str, len, expand, termlen);
    }
    else if (expand > 0) {
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { if (!((len + expand) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) { char *const tmp = ((char*)ruby_xmalloc2((size_t)((size_t)(len + expand) + (termlen)),sizeof(char))); const long tlen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); memcpy(tmp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), tlen); ((struct RString*)(str))->as.heap.ptr = tmp; ((struct RString*)(str))->as.heap.len = tlen; do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0); ((struct RString*)(str))->as.heap.aux.capa = (len + expand); } } else { __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 2075, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 2075, __func__, "!FL_TEST((str), STR_SHARED)"))); ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)(len + expand) + (termlen)),sizeof(char))); ((struct RString*)(str))->as.heap.aux.capa = (len + expand); }} while (0);
    }
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
}


static void
str_modify_keep_cr(VALUE str)
{
    if (!str_independent(str))
 str_make_independent(str);
    if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_BROKEN)

 ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
}

static inline void
str_discard(VALUE str)
{
    str_modifiable(str);
    if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1)))) && !((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18)))):0)) {
 ruby_xfree((((struct RString*)(str))->as.heap.ptr));
 ((struct RString*)(str))->as.heap.ptr = 0;
 ((struct RString*)(str))->as.heap.len = 0;
    }
}

void
rb_must_asciicompat(VALUE str)
{
    rb_encoding *enc = rb_enc_get(str);
    if (!rb_enc_asciicompat_inline(enc)) {
 rb_raise(rb_eEncCompatError, "ASCII incompatible encoding: %s", (enc)->name);
    }
}

VALUE
rb_string_value(volatile VALUE *ptr)
{
    VALUE s = *ptr;
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(s))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((s) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((s) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((s) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((s) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(s)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(s) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(s) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(s))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(s) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(s) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(s) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(s) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 s = rb_str_to_str(s);
 *ptr = s;
    }
    return s;
}

char *
rb_string_value_ptr(volatile VALUE *ptr)
{
    VALUE str = rb_string_value(ptr);
    return (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
}

static int
zero_filled(const char *s, int n)
{
    for (; n > 0; --n) {
 if (*s++) return 0;
    }
    return 1;
}

static const char *
str_null_char(const char *s, long len, const int minlen, rb_encoding *enc)
{
    const char *e = s + len;

    for (; s + minlen <= e; s += rb_enc_mbclen(s, e, enc)) {
 if (zero_filled(s, minlen)) return s;
    }
    return 0;
}

static char *
str_fill_term(VALUE str, char *s, long len, int termlen)
{



    if (str_dependent_p(str)) {
 if (!zero_filled(s + len, termlen))
     str_make_independent_expand(str, len, 0L, termlen);
    }
    else {
 do { char *const term_fill_ptr = (s + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 return s;
    }
    return (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
}

void
rb_str_change_terminator_length(VALUE str, const int oldtermlen, const int termlen)
{
    long capa = str_capacity(str, oldtermlen) + oldtermlen;
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((capa >= len) ? (void)0 : rb_assert_failure("string.c", 2172, __func__, "capa >= len")), (void)0), ((!(!0 +0) || (capa >= len)) ? (void)0 : rb_assert_failure("string.c", 2172, __func__, "capa >= len")));
    if (capa - len < termlen) {
 rb_check_lockedtmp(str);
 str_make_independent_expand(str, len, 0L, termlen);
    }
    else if (str_dependent_p(str)) {
 if (termlen > oldtermlen)
     str_make_independent_expand(str, len, 0L, termlen);
    }
    else {
 if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {

     __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 2184, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 2184, __func__, "!FL_TEST((str), STR_SHARED)")));
     ((struct RString*)(str))->as.heap.aux.capa = capa - termlen;
 }
 if (termlen > oldtermlen) {
     do { char *const term_fill_ptr = ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 }
    }

    return;
}

static char *
str_null_check(VALUE str, int *w)
{
    char *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    rb_encoding *enc = rb_enc_get(str);
    const int minlen = (enc)->min_enc_len;

    if (minlen > 1) {
 *w = 1;
 if (str_null_char(s, len, minlen, enc)) {
     return ((void*)0);
 }
 return str_fill_term(str, s, len, minlen);
    }
    *w = 0;
    if (!s || memchr(s, 0, len)) {
 return ((void*)0);
    }
    if (s[len]) {
 s = str_fill_term(str, s, len, minlen);
    }
    return s;
}

char *
rb_str_to_cstr(VALUE str)
{
    int w;
    return str_null_check(str, &w);
}

char *
rb_string_value_cstr(volatile VALUE *ptr)
{
    VALUE str = rb_string_value(ptr);
    int w;
    char *s = str_null_check(str, &w);
    if (!s) {
 if (w) {
     rb_raise(rb_eArgError, "string contains null char");
 }
 rb_raise(rb_eArgError, "string contains null byte");
    }
    return s;
}

char *
rb_str_fill_terminator(VALUE str, const int newminlen)
{
    char *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    return str_fill_term(str, s, len, newminlen);
}

VALUE
rb_check_string_type(VALUE str)
{
    str = rb_check_convert_type_with_id(str, RUBY_T_STRING, "String", idTo_str);
    return str;
}
static VALUE
rb_str_s_try_convert(VALUE dummy, VALUE str)
{
    return rb_check_string_type(str);
}

static char*
str_nth_len(const char *p, const char *e, long *nthp, rb_encoding *enc)
{
    long nth = *nthp;
    if ((enc)->max_enc_len == 1) {
        p += nth;
    }
    else if ((enc)->max_enc_len == (enc)->min_enc_len) {
        p += nth * (enc)->max_enc_len;
    }
    else if (rb_enc_asciicompat_inline(enc)) {
        const char *p2, *e2;
        int n;

        while (p < e && 0 < nth) {
            e2 = p + nth;
            if (e < e2) {
                *nthp = nth;
                return (char *)e;
            }
            if (rb_isascii(*p)) {
                p2 = search_nonascii(p, e2);
                if (!p2) {
      nth -= e2 - p;
      *nthp = nth;
                    return (char *)e2;
                }
                nth -= p2 - p;
                p = p2;
            }
            n = rb_enc_mbclen(p, e, enc);
            p += n;
            nth--;
        }
        *nthp = nth;
        if (nth != 0) {
            return (char *)e;
        }
        return (char *)p;
    }
    else {
        while (p < e && nth--) {
            p += rb_enc_mbclen(p, e, enc);
        }
    }
    if (p > e) p = e;
    *nthp = nth;
    return (char*)p;
}

char*
rb_enc_nth(const char *p, const char *e, long nth, rb_encoding *enc)
{
    return str_nth_len(p, e, &nth, enc);
}

static char*
str_nth(const char *p, const char *e, long nth, rb_encoding *enc, int singlebyte)
{
    if (singlebyte)
 p += nth;
    else {
 p = str_nth_len(p, e, &nth, enc);
    }
    if (!p) return 0;
    if (p > e) p = e;
    return (char *)p;
}


static long
str_offset(const char *p, const char *e, long nth, rb_encoding *enc, int singlebyte)
{
    const char *pp = str_nth(p, e, nth, enc, singlebyte);
    if (!pp) return e - p;
    return pp - p;
}

long
rb_str_offset(VALUE str, long pos)
{
    return str_offset((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), pos,
        get_encoding(str), single_byte_optimizable(str));
}


static char *
str_utf8_nth(const char *p, const char *e, long *nthp)
{
    long nth = *nthp;
    if ((int)8 * 2 < e - p && (int)8 * 2 < nth) {
 const uintptr_t *s, *t;
 const uintptr_t lowbits = 8 - 1;
 s = (const uintptr_t*)(~lowbits & ((uintptr_t)p + lowbits));
 t = (const uintptr_t*)(~lowbits & (uintptr_t)e);
 while (p < (const char *)s) {
     if ((((*p)&0xC0) != 0x80)) nth--;
     p++;
 }
 do {
     nth -= count_utf8_lead_bytes_with_word(s);
     s++;
 } while (s < t && (int)8 <= nth);
 p = (char *)s;
    }
    while (p < e) {
 if ((((*p)&0xC0) != 0x80)) {
     if (nth == 0) break;
     nth--;
 }
 p++;
    }
    *nthp = nth;
    return (char *)p;
}

static long
str_utf8_offset(const char *p, const char *e, long nth)
{
    const char *pp = str_utf8_nth(p, e, &nth);
    return pp - p;
}



long
rb_str_sublen(VALUE str, long pos)
{
    if (single_byte_optimizable(str) || pos < 0)
        return pos;
    else {
 char *p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
        return enc_strlen(p, p + pos, get_encoding(str), ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK));
    }
}

VALUE
rb_str_subseq(VALUE str, long beg, long len)
{
    VALUE str2;

    if (!((len) <= RSTRING_EMBED_LEN_MAX + 1 - ((rb_enc_get(str))->min_enc_len)) &&
 ((beg) + (len) == ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)))) {
 long olen;
 str2 = rb_str_new_shared(rb_str_new_frozen(str));
 ((struct RString*)(str2))->as.heap.ptr += beg;
 olen = ((struct RString*)(str2))->as.heap.len;
 if (olen > len) ((struct RString*)(str2))->as.heap.len = len;
    }
    else {
        str2 = rb_str_new_with_class(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)+beg, len);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    }

    rb_enc_cr_str_copy_for_substr(str2, str);
    ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);

    return str2;
}

char *
rb_str_subpos(VALUE str, long beg, long *lenp)
{
    long len = *lenp;
    long slen = -1L;
    long blen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    rb_encoding *enc = get_encoding(str);
    char *p, *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), *e = s + blen;

    if (len < 0) return 0;
    if (!blen) {
 len = 0;
    }
    if (single_byte_optimizable(str)) {
 if (beg > blen) return 0;
 if (beg < 0) {
     beg += blen;
     if (beg < 0) return 0;
 }
 if (len > blen - beg)
     len = blen - beg;
 if (len < 0) return 0;
 p = s + beg;
 goto end;
    }
    if (beg < 0) {
 if (len > -beg) len = -beg;
 if (-beg * (enc)->max_enc_len < (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) / 8) {
     beg = -beg;
     while (beg-- > len && (e = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(e),(OnigUChar*)(e)))) != 0);
     p = e;
     if (!p) return 0;
     while (len-- > 0 && (p = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(p),(OnigUChar*)(e)))) != 0);
     if (!p) return 0;
     len = e - p;
     goto end;
 }
 else {
     slen = str_strlen(str, enc);
     beg += slen;
     if (beg < 0) return 0;
     p = s + beg;
     if (len == 0) goto end;
 }
    }
    else if (beg > 0 && beg > (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) {
 return 0;
    }
    if (len == 0) {
 if (beg > str_strlen(str, enc)) return 0;
 p = s + beg;
    }

    else if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_VALID &&
        enc == rb_utf8_encoding()) {
        p = str_utf8_nth(s, e, &beg);
        if (beg > 0) return 0;
        len = str_utf8_offset(p, e, len);
    }

    else if ((enc)->max_enc_len == (enc)->min_enc_len) {
 int char_sz = (enc)->max_enc_len;

 p = s + beg * char_sz;
 if (p > e) {
     return 0;
 }
        else if (len * char_sz > e - p)
            len = e - p;
        else
     len *= char_sz;
    }
    else if ((p = str_nth_len(s, e, &beg, enc)) == e) {
 if (beg > 0) return 0;
 len = 0;
    }
    else {
 len = str_offset(p, e, len, enc, 0);
    }
  end:
    *lenp = len;
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    return p;
}

static VALUE str_substr(VALUE str, long beg, long len, int empty);

VALUE
rb_str_substr(VALUE str, long beg, long len)
{
    return str_substr(str, beg, len, TRUE);
}

static VALUE
str_substr(VALUE str, long beg, long len, int empty)
{
    VALUE str2;
    char *p = rb_str_subpos(str, beg, &len);

    if (!p) return ((VALUE)RUBY_Qnil);
    if (!((len) <= RSTRING_EMBED_LEN_MAX + 1 - ((rb_enc_get(str))->min_enc_len)) &&
 ((p) + (len) == ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len))))) {
 long ofs = p - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 str2 = rb_str_new_frozen(str);
 str2 = str_new_shared(rb_obj_class(str2), str2);
 ((struct RString*)(str2))->as.heap.ptr += ofs;
 ((struct RString*)(str2))->as.heap.len = len;
 ( ((struct RBasic*)((str2)))->flags = (((struct RBasic*)((str2)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    }
    else {
 if (!len && !empty) return ((VALUE)RUBY_Qnil);
 str2 = rb_str_new_with_class(str, p, len);
 ( (((!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    }
    rb_enc_cr_str_copy_for_substr(str2, str);

    return str2;
}

VALUE
rb_str_freeze(VALUE str)
{
    if ((!(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(str))->flags&RUBY_FL_FREEZE))) return str;
    rb_str_resize(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    return rb_obj_freeze(str);
}
static VALUE
str_uplus(VALUE str)
{
    if ((!(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(str))->flags&RUBY_FL_FREEZE))) {
 return rb_str_dup(str);
    }
    else {
 return str;
    }
}
static VALUE
str_uminus(VALUE str)
{
    if ((!(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(str))->flags&RUBY_FL_FREEZE))) {
 return str;
    }
    else {
 return rb_fstring(str);
    }
}

VALUE rb_str_dup_frozen(VALUE str) ;


VALUE
rb_str_locktmp(VALUE str)
{
    if (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER7)))):0)) {
 rb_raise(rb_eRuntimeError, "temporal locking already locked string");
    }
    ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags |= (((VALUE)RUBY_FL_USER7))) : (void)0);
    return str;
}

VALUE
rb_str_unlocktmp(VALUE str)
{
    if (!((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)((str)))->flags&((((VALUE)RUBY_FL_USER7)))):0)) {
 rb_raise(rb_eRuntimeError, "temporal unlocking already unlocked string");
    }
    ((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)(str))->flags &= ~(VALUE)(((VALUE)RUBY_FL_USER7))) : (void)0);
    return str;
}

 extern VALUE
rb_str_locktmp_ensure(VALUE str, VALUE (*func)(VALUE), VALUE arg)
{
    rb_str_locktmp(str);
    return rb_ensure(func, arg, rb_str_unlocktmp, str);
}

void
rb_str_set_len(VALUE str, long len)
{
    long capa;
    const int termlen = (rb_enc_get(str))->min_enc_len;

    str_modifiable(str);
    if (((((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) == (((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) {
 rb_raise(rb_eRuntimeError, "can't set length of shared string");
    }
    if (len > (capa = (long)str_capacity(str, termlen)) || len < 0) {
 rb_bug("probable buffer overflow: %ld for %ld", len, capa);
    }
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
    do { char *const term_fill_ptr = (&(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[len]); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
}

VALUE
rb_str_resize(VALUE str, long len)
{
    long slen;
    int independent;

    if (len < 0) {
 rb_raise(rb_eArgError, "negative string size (or size too big)");
    }

    independent = str_independent(str);
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    slen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    {
 long capa;
 const int termlen = (rb_enc_get(str))->min_enc_len;
 if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
     if (len == slen) return str;
     if (((len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
  do { long tmp_n = (len); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
  do { char *const term_fill_ptr = (((struct RString*)(str))->as.ary + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
  return str;
     }
     str_make_independent_expand(str, slen, len - slen, termlen);
 }
 else if (((len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) {
     char *ptr = (((struct RString*)(str))->as.heap.ptr);
     ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
     if (slen > len) slen = len;
     if (slen > 0) memcpy((((struct RString*)(str))->as.ary), (ptr), sizeof(char)*(size_t)(slen));
     do { char *const term_fill_ptr = (((struct RString*)(str))->as.ary + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
     do { long tmp_n = (len); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
     if (independent) ruby_xfree(ptr);
     return str;
 }
 else if (!independent) {
     if (len == slen) return str;
     str_make_independent_expand(str, slen, len - slen, termlen);
 }
 else if ((capa = ((struct RString*)(str))->as.heap.aux.capa) < len ||
   (capa - len) > (len < 1024 ? len : 1024)) {
     ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)len + termlen),sizeof(char)));
     ((struct RString*)(str))->as.heap.aux.capa = len;
 }
 else if (len == slen) return str;
 ((struct RString*)(str))->as.heap.len = len;
 do { char *const term_fill_ptr = (((struct RString*)(str))->as.heap.ptr + len); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    }
    return str;
}

static VALUE
str_buf_cat(VALUE str, const char *ptr, long len)
{
    long capa, total, olen, off = -1;
    char *sptr;
    const int termlen = (rb_enc_get(str))->min_enc_len;
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((termlen < RSTRING_EMBED_LEN_MAX + 1) ? (void)0 : rb_assert_failure("string.c", 2707, __func__, "termlen < RSTRING_EMBED_LEN_MAX + 1")), (void)0), ((!(!0 +0) || (termlen < RSTRING_EMBED_LEN_MAX + 1)) ? (void)0 : rb_assert_failure("string.c", 2707, __func__, "termlen < RSTRING_EMBED_LEN_MAX + 1")));

    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((sptr) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((sptr) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    if (ptr >= sptr && ptr <= sptr + olen) {
        off = ptr - sptr;
    }
    rb_str_modify(str);
    if (len == 0) return 0;
    if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 capa = RSTRING_EMBED_LEN_MAX + 1 - termlen;
 sptr = ((struct RString*)(str))->as.ary;
 olen = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT));
    }
    else {
 capa = ((struct RString*)(str))->as.heap.aux.capa;
 sptr = ((struct RString*)(str))->as.heap.ptr;
 olen = ((struct RString*)(str))->as.heap.len;
    }
    if (olen > 9223372036854775807L - len) {
 rb_raise(rb_eArgError, "string sizes too big");
    }
    total = olen + len;
    if (capa < total) {
 if (total >= 9223372036854775807L / 2) {
     capa = total;
 }
 while (total > capa) {
     capa = 2 * capa + termlen;
 }
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { if (!((capa) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) { char *const tmp = ((char*)ruby_xmalloc2((size_t)((size_t)(capa) + (termlen)),sizeof(char))); const long tlen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); memcpy(tmp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), tlen); ((struct RString*)(str))->as.heap.ptr = tmp; ((struct RString*)(str))->as.heap.len = tlen; do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0); ((struct RString*)(str))->as.heap.aux.capa = (capa); } } else { __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 2736, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 2736, __func__, "!FL_TEST((str), STR_SHARED)"))); ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)(capa) + (termlen)),sizeof(char))); ((struct RString*)(str))->as.heap.aux.capa = (capa); }} while (0);
 sptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    }
    if (off != -1) {
        ptr = sptr + off;
    }
    memcpy(sptr + olen, ptr, len);
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((total)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (total); }} while (0);
    do { char *const term_fill_ptr = (sptr + total); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);

    return str;
}



VALUE
rb_str_cat(VALUE str, const char *ptr, long len)
{
    if (len == 0) return str;
    if (len < 0) {
 rb_raise(rb_eArgError, "negative string size (or size too big)");
    }
    return str_buf_cat(str, ptr, len);
}

VALUE
rb_str_cat_cstr(VALUE str, const char *ptr)
{
    must_not_null(ptr);
    return rb_str_buf_cat(str, ptr, strlen(ptr));
}

VALUE rb_str_buf_cat(VALUE str, const char *ptr, long len) ;
VALUE rb_str_buf_cat2(VALUE str, const char *ptr) ;
VALUE rb_str_cat2(VALUE str, const char *ptr) ;

static VALUE
rb_enc_cr_str_buf_cat(VALUE str, const char *ptr, long len,
    int ptr_encindex, int ptr_cr, int *ptr_cr_ret)
{
    int str_encindex = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
    int res_encindex;
    int str_cr, res_cr;
    rb_encoding *str_enc, *ptr_enc;

    str_cr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) ? ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) : RUBY_ENC_CODERANGE_7BIT;

    if (str_encindex == ptr_encindex) {
 if (str_cr != RUBY_ENC_CODERANGE_UNKNOWN && ptr_cr == RUBY_ENC_CODERANGE_UNKNOWN) {
            ptr_cr = coderange_scan(ptr, len, rb_enc_from_index(ptr_encindex));
        }
    }
    else {
 str_enc = rb_enc_from_index(str_encindex);
 ptr_enc = rb_enc_from_index(ptr_encindex);
        if (!rb_enc_asciicompat_inline(str_enc) || !rb_enc_asciicompat_inline(ptr_enc)) {
            if (len == 0)
                return str;
            if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) {
                rb_str_buf_cat(str, ptr, len);
                do { VALUE rb_encoding_coderange_obj = (str); rb_enc_set_index((rb_encoding_coderange_obj), ((ptr_encindex))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((ptr_cr))); } while (0);
                return str;
            }
            goto incompatible;
        }
 if (ptr_cr == RUBY_ENC_CODERANGE_UNKNOWN) {
     ptr_cr = coderange_scan(ptr, len, ptr_enc);
 }
        if (str_cr == RUBY_ENC_CODERANGE_UNKNOWN) {
            if (((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) == 0) || ptr_cr != RUBY_ENC_CODERANGE_7BIT) {
                str_cr = rb_enc_str_coderange(str);
            }
        }
    }
    if (ptr_cr_ret)
        *ptr_cr_ret = ptr_cr;

    if (str_encindex != ptr_encindex &&
        str_cr != RUBY_ENC_CODERANGE_7BIT &&
        ptr_cr != RUBY_ENC_CODERANGE_7BIT) {
 str_enc = rb_enc_from_index(str_encindex);
 ptr_enc = rb_enc_from_index(ptr_encindex);
      incompatible:
        rb_raise(rb_eEncCompatError, "incompatible character encodings: %s and %s",
   (str_enc)->name, (ptr_enc)->name);
    }

    if (str_cr == RUBY_ENC_CODERANGE_UNKNOWN) {
        res_encindex = str_encindex;
        res_cr = RUBY_ENC_CODERANGE_UNKNOWN;
    }
    else if (str_cr == RUBY_ENC_CODERANGE_7BIT) {
        if (ptr_cr == RUBY_ENC_CODERANGE_7BIT) {
            res_encindex = str_encindex;
            res_cr = RUBY_ENC_CODERANGE_7BIT;
        }
        else {
            res_encindex = ptr_encindex;
            res_cr = ptr_cr;
        }
    }
    else if (str_cr == RUBY_ENC_CODERANGE_VALID) {
        res_encindex = str_encindex;
 if (rb_enc_coderange_clean_p(ptr_cr))
     res_cr = str_cr;
 else
     res_cr = ptr_cr;
    }
    else {
        res_encindex = str_encindex;
        res_cr = str_cr;
        if (0 < len) res_cr = RUBY_ENC_CODERANGE_UNKNOWN;
    }

    if (len < 0) {
 rb_raise(rb_eArgError, "negative string size (or size too big)");
    }
    str_buf_cat(str, ptr, len);
    do { VALUE rb_encoding_coderange_obj = (str); rb_enc_set_index((rb_encoding_coderange_obj), ((res_encindex))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((res_cr))); } while (0);
    return str;
}

VALUE
rb_enc_str_buf_cat(VALUE str, const char *ptr, long len, rb_encoding *ptr_enc)
{
    return rb_enc_cr_str_buf_cat(str, ptr, len,
        rb_enc_to_index(ptr_enc), RUBY_ENC_CODERANGE_UNKNOWN, ((void*)0));
}

VALUE
rb_str_buf_cat_ascii(VALUE str, const char *ptr)
{

    int encindex = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
    rb_encoding *enc = rb_enc_from_index(encindex);
    if (rb_enc_asciicompat_inline(enc)) {
        return rb_enc_cr_str_buf_cat(str, ptr, strlen(ptr),
            encindex, RUBY_ENC_CODERANGE_7BIT, 0);
    }
    else {
        char *buf = ((char*)__builtin_alloca (sizeof(char)*((enc)->max_enc_len)));
        while (*ptr) {
            unsigned int c = (unsigned char)*ptr;
            int len = rb_enc_codelen(c, enc);
            ((enc))->code_to_mbc((c),(OnigUChar*)(buf),(enc));
            rb_enc_cr_str_buf_cat(str, buf, len,
                encindex, RUBY_ENC_CODERANGE_VALID, 0);
            ptr++;
        }
        return str;
    }
}

VALUE
rb_str_buf_append(VALUE str, VALUE str2)
{
    int str2_cr;

    str2_cr = ((int)((struct RBasic*)(str2))->flags & RUBY_ENC_CODERANGE_MASK);

    rb_enc_cr_str_buf_cat(str, (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr), (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len),
        ((int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str2)), str2_cr, &str2_cr);

    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(str2))->flags&(RUBY_FL_TAINT)))) : (void)0);
    ( ((struct RBasic*)(str2))->flags = (((struct RBasic*)(str2))->flags & ~RUBY_ENC_CODERANGE_MASK) | (str2_cr));

    return str;
}

VALUE
rb_str_append(VALUE str, VALUE str2)
{
    rb_string_value(&(str2));
    return rb_str_buf_append(str, str2);
}



VALUE
rb_str_concat_literals(size_t num, const VALUE *strary)
{
    VALUE str;
    size_t i, s;
    long len = 1;

    if ((__builtin_expect(!!(!num), 0))) return rb_str_new(0, 0);
    if ((__builtin_expect(!!(num == 1), 0))) return rb_str_resurrect(strary[0]);

    for (i = 0; i < num; ++i) { len += (!(((struct RBasic*)(strary[i]))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(strary[i]))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(strary[i]))->as.heap.len); }
    if ((__builtin_expect(!!(len < 48), 1))) {
 str = rb_str_resurrect(strary[0]);
 s = 1;
    }
    else {
 str = rb_str_buf_new(len);
 rb_enc_copy(str, strary[0]);
 s = 0;
    }

    for (i = s; i < num; ++i) {
 const VALUE v = strary[i];
 int encidx = ((int)((((struct RBasic*)(v))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(v))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(v));

 rb_enc_cr_str_buf_cat(str, (!(((struct RBasic*)(v))->flags & RSTRING_NOEMBED) ? ((struct RString*)(v))->as.ary : ((struct RString*)(v))->as.heap.ptr), (!(((struct RBasic*)(v))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(v))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(v))->as.heap.len),
         encidx, ((int)((struct RBasic*)(v))->flags & RUBY_ENC_CODERANGE_MASK), ((void*)0));
 (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(v))->flags&(RUBY_FL_TAINT))));
 if (encidx != RUBY_ENCINDEX_US_ASCII) {
     if ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) == RUBY_ENCINDEX_US_ASCII)
  rb_enc_set_index(str, encidx);
 }
    }
    return str;
}
static VALUE
rb_str_concat_multi(int argc, VALUE *argv, VALUE str)
{
    str_modifiable(str);

    if (argc == 1) {
 return rb_str_concat(str, argv[0]);
    }
    else if (argc > 1) {
 int i;
 VALUE arg_str = rb_str_tmp_new(0);
 rb_enc_copy(arg_str, str);
 for (i = 0; i < argc; i++) {
     rb_str_concat(arg_str, argv[i]);
 }
 rb_str_buf_append(str, arg_str);
    }

    return str;
}
VALUE
rb_str_concat(VALUE str1, VALUE str2)
{
    unsigned int code;
    rb_encoding *enc = get_encoding(str1);
    int encidx;

    if ( ({ const VALUE integer_type_obj = (str2); ((((int)(long)(integer_type_obj))&RUBY_FIXNUM_FLAG) || (!(((VALUE)(integer_type_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(integer_type_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(integer_type_obj))->flags & RUBY_T_MASK) == RUBY_T_BIGNUM)); })) {
 if (rb_num_to_uint(str2, &code) == 0) {
 }
 else if ((((int)(long)(str2))&RUBY_FIXNUM_FLAG)) {
     rb_raise(rb_eRangeError, "%ld out of char range", ((long)(((long)(str2))>>(int)(1))));
 }
 else {
     rb_raise(rb_eRangeError, "bignum out of char range");
 }
    }
    else {
 return rb_str_append(str1, str2);
    }

    encidx = rb_enc_to_index(enc);
    if (encidx == RUBY_ENCINDEX_ASCII || encidx == RUBY_ENCINDEX_US_ASCII) {

 char buf[1];
 buf[0] = (char)code;
 if (code > 0xFF) {
     rb_raise(rb_eRangeError, "%u out of char range", code);
 }
 rb_str_cat(str1, buf, 1);
 if (encidx == RUBY_ENCINDEX_US_ASCII && code > 127) {
     rb_enc_associate_index(str1, RUBY_ENCINDEX_ASCII);
     ( ((struct RBasic*)(str1))->flags = (((struct RBasic*)(str1))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
 }
    }
    else {
 long pos = (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str1))->as.heap.len);
 int cr = ((int)((struct RBasic*)(str1))->flags & RUBY_ENC_CODERANGE_MASK);
 int len;
 char *buf;

 switch (len = rb_enc_codelen(code, enc)) {
   case -400:
     rb_raise(rb_eRangeError, "invalid codepoint 0x%X in %s", code, (enc)->name);
     break;
   case -401:
   case 0:
     rb_raise(rb_eRangeError, "%u out of char range", code);
     break;
 }
 buf = ((char*)__builtin_alloca (sizeof(char)*(len + 1)));
 ((enc))->code_to_mbc((code),(OnigUChar*)(buf),(enc));
 if (rb_enc_precise_mbclen(buf, buf + len + 1, enc) != len) {
     rb_raise(rb_eRangeError, "invalid codepoint 0x%X in %s", code, (enc)->name);
 }
 rb_str_resize(str1, pos+len);
 memcpy((!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str1))->as.ary : ((struct RString*)(str1))->as.heap.ptr) + pos, buf, len);
 if (cr == RUBY_ENC_CODERANGE_7BIT && code > 127)
     cr = RUBY_ENC_CODERANGE_VALID;
 ( ((struct RBasic*)(str1))->flags = (((struct RBasic*)(str1))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
    }
    return str1;
}
static VALUE
rb_str_prepend_multi(int argc, VALUE *argv, VALUE str)
{
    str_modifiable(str);

    if (argc == 1) {
 rb_str_update(str, 0L, 0L, argv[0]);
    }
    else if (argc > 1) {
 int i;
 VALUE arg_str = rb_str_tmp_new(0);
 rb_enc_copy(arg_str, str);
 for (i = 0; i < argc; i++) {
     rb_str_append(arg_str, argv[i]);
 }
 rb_str_update(str, 0L, 0L, arg_str);
    }

    return str;
}

st_index_t
rb_str_hash(VALUE str)
{
    int e = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
    if (e && rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_7BIT) {
 e = 0;
    }
    return rb_memhash((const void *)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) ^ e;
}

int
rb_str_hash_cmp(VALUE str1, VALUE str2)
{
    long len1, len2;
    const char *ptr1, *ptr2;
    (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((ptr1) = ((struct RString*)(str1))->as.ary, (len1) = (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr1) = ((struct RString*)(str1))->as.heap.ptr, (len1) = ((struct RString*)(str1))->as.heap.len));
    (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((ptr2) = ((struct RString*)(str2))->as.ary, (len2) = (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr2) = ((struct RString*)(str2))->as.heap.ptr, (len2) = ((struct RString*)(str2))->as.heap.len));
    return (len1 != len2 ||
     !rb_str_comparable(str1, str2) ||
     memcmp(ptr1, ptr2, len1) != 0);
}
static VALUE
rb_str_hash_m(VALUE str)
{
    st_index_t hval = rb_str_hash(str);
    return (((VALUE)((long)(hval)))<<1 | RUBY_FIXNUM_FLAG);
}



int
rb_str_comparable(VALUE str1, VALUE str2)
{
    int idx1, idx2;
    int rc1, rc2;

    if ((!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str1))->as.heap.len) == 0) return TRUE;
    if ((!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len) == 0) return TRUE;
    idx1 = ((int)((((struct RBasic*)(str1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str1));
    idx2 = ((int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str2));
    if (idx1 == idx2) return TRUE;
    rc1 = rb_enc_str_coderange(str1);
    rc2 = rb_enc_str_coderange(str2);
    if (rc1 == RUBY_ENC_CODERANGE_7BIT) {
 if (rc2 == RUBY_ENC_CODERANGE_7BIT) return TRUE;
 if (rb_enc_asciicompat_inline(rb_enc_from_index(idx2)))
     return TRUE;
    }
    if (rc2 == RUBY_ENC_CODERANGE_7BIT) {
 if (rb_enc_asciicompat_inline(rb_enc_from_index(idx1)))
     return TRUE;
    }
    return FALSE;
}

int
rb_str_cmp(VALUE str1, VALUE str2)
{
    long len1, len2;
    const char *ptr1, *ptr2;
    int retval;

    if (str1 == str2) return 0;
    (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((ptr1) = ((struct RString*)(str1))->as.ary, (len1) = (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr1) = ((struct RString*)(str1))->as.heap.ptr, (len1) = ((struct RString*)(str1))->as.heap.len));
    (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((ptr2) = ((struct RString*)(str2))->as.ary, (len2) = (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr2) = ((struct RString*)(str2))->as.heap.ptr, (len2) = ((struct RString*)(str2))->as.heap.len));
    if (ptr1 == ptr2 || (retval = memcmp(ptr1, ptr2, (((len1)>(len2))?(len2):(len1)))) == 0) {
 if (len1 == len2) {
     if (!rb_str_comparable(str1, str2)) {
  if (((int)((((struct RBasic*)(str1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str1))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str1)) > ((int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str2))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str2)))
      return 1;
  return -1;
     }
     return 0;
 }
 if (len1 > len2) return 1;
 return -1;
    }
    if (retval > 0) return 1;
    return -1;
}


static VALUE
str_eql(const VALUE str1, const VALUE str2)
{
    const long len = (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str1))->as.heap.len);
    const char *ptr1, *ptr2;

    if (len != (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len)) return ((VALUE)RUBY_Qfalse);
    if (!rb_str_comparable(str1, str2)) return ((VALUE)RUBY_Qfalse);
    if ((ptr1 = (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str1))->as.ary : ((struct RString*)(str1))->as.heap.ptr)) == (ptr2 = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr)))
 return ((VALUE)RUBY_Qtrue);
    if (memcmp(ptr1, ptr2, len) == 0)
 return ((VALUE)RUBY_Qtrue);
    return ((VALUE)RUBY_Qfalse);
}
VALUE
rb_str_equal(VALUE str1, VALUE str2)
{
    if (str1 == str2) return ((VALUE)RUBY_Qtrue);
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str2))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str2) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str2) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str2) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str2) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str2)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str2))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 if (!rb_respond_to(str2, idTo_str)) {
     return ((VALUE)RUBY_Qfalse);
 }
 return rb_equal(str2, str1);
    }
    return str_eql(str1, str2);
}
VALUE
rb_str_eql(VALUE str1, VALUE str2)
{
    if (str1 == str2) return ((VALUE)RUBY_Qtrue);
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str2))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str2) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str2) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str2) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str2) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str2)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str2))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str2) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str2) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str2))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) return ((VALUE)RUBY_Qfalse);
    return str_eql(str1, str2);
}
static VALUE
rb_str_cmp_m(VALUE str1, VALUE str2)
{
    int result;
    VALUE s = rb_check_string_type(str2);
    if (!((VALUE)(s) != ((VALUE)RUBY_Qnil))) {
 return rb_invcmp(str1, str2);
    }
    result = rb_str_cmp(str1, s);
    return (((VALUE)(result))<<1 | RUBY_FIXNUM_FLAG);
}

static VALUE str_casecmp(VALUE str1, VALUE str2);
static VALUE str_casecmp_p(VALUE str1, VALUE str2);
static VALUE
rb_str_casecmp(VALUE str1, VALUE str2)
{
    VALUE s = rb_check_string_type(str2);
    if (!((VALUE)(s) != ((VALUE)RUBY_Qnil))) {
 return ((VALUE)RUBY_Qnil);
    }
    return str_casecmp(str1, s);
}

static VALUE
str_casecmp(VALUE str1, VALUE str2)
{
    long len;
    rb_encoding *enc;
    char *p1, *p1end, *p2, *p2end;

    enc = rb_enc_compatible(str1, str2);
    if (!enc) {
 return ((VALUE)RUBY_Qnil);
    }

    p1 = (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str1))->as.ary : ((struct RString*)(str1))->as.heap.ptr); p1end = (!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str1))->as.ary + (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str1))->as.heap.ptr + ((struct RString*)(str1))->as.heap.len));
    p2 = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str2))->as.ary : ((struct RString*)(str2))->as.heap.ptr); p2end = (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str2))->as.ary + (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str2))->as.heap.ptr + ((struct RString*)(str2))->as.heap.len));
    if (single_byte_optimizable(str1) && single_byte_optimizable(str2)) {
 while (p1 < p1end && p2 < p2end) {
     if (*p1 != *p2) {
  unsigned int c1 = rb_toupper(*p1 & 0xff);
  unsigned int c2 = rb_toupper(*p2 & 0xff);
                if (c1 != c2)
                    return (((VALUE)(c1 < c2 ? -1 : 1))<<1 | RUBY_FIXNUM_FLAG);
     }
     p1++;
     p2++;
 }
    }
    else {
 while (p1 < p1end && p2 < p2end) {
            int l1, c1 = rb_enc_ascget(p1, p1end, &l1, enc);
            int l2, c2 = rb_enc_ascget(p2, p2end, &l2, enc);

            if (0 <= c1 && 0 <= c2) {
                c1 = rb_toupper(c1);
                c2 = rb_toupper(c2);
                if (c1 != c2)
                    return (((VALUE)(c1 < c2 ? -1 : 1))<<1 | RUBY_FIXNUM_FLAG);
            }
            else {
                int r;
                l1 = rb_enc_mbclen(p1, p1end, enc);
                l2 = rb_enc_mbclen(p2, p2end, enc);
                len = l1 < l2 ? l1 : l2;
                r = memcmp(p1, p2, len);
                if (r != 0)
                    return (((VALUE)(r < 0 ? -1 : 1))<<1 | RUBY_FIXNUM_FLAG);
                if (l1 != l2)
                    return (((VALUE)(l1 < l2 ? -1 : 1))<<1 | RUBY_FIXNUM_FLAG);
            }
     p1 += l1;
     p2 += l2;
 }
    }
    if ((!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str1))->as.heap.len) == (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len)) return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    if ((!(((struct RBasic*)(str1))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str1))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str1))->as.heap.len) > (!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len)) return (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG);
    return (((VALUE)(-1))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_str_casecmp_p(VALUE str1, VALUE str2)
{
    VALUE s = rb_check_string_type(str2);
    if (!((VALUE)(s) != ((VALUE)RUBY_Qnil))) {
 return ((VALUE)RUBY_Qnil);
    }
    return str_casecmp_p(str1, s);
}

static VALUE
str_casecmp_p(VALUE str1, VALUE str2)
{
    rb_encoding *enc;
    VALUE folded_str1, folded_str2;
    VALUE fold_opt = sym_fold;

    enc = rb_enc_compatible(str1, str2);
    if (!enc) {
 return ((VALUE)RUBY_Qnil);
    }

    folded_str1 = rb_str_downcase(1, &fold_opt, str1);
    folded_str2 = rb_str_downcase(1, &fold_opt, str2);

    return rb_str_eql(folded_str1, folded_str2);
}

static long
strseq_core(const char *str_ptr, const char *str_ptr_end, long str_len,
     const char *sub_ptr, long sub_len, long offset, rb_encoding *enc)
{
    const char *search_start = str_ptr;
    long pos, search_len = str_len - offset;

    for (;;) {
 const char *t;
 pos = rb_memsearch(sub_ptr, sub_len, search_start, search_len, enc);
 if (pos < 0) return pos;
 t = ((char *)onigenc_get_right_adjust_char_head((enc),(OnigUChar*)(search_start),(OnigUChar*)(search_start+pos),(OnigUChar*)(str_ptr_end)));
 if (t == search_start + pos) break;
 search_len -= t - search_start;
 if (search_len <= 0) return -1;
 offset += t - search_start;
 search_start = t;
    }
    return pos + offset;
}



static long
rb_strseq_index(VALUE str, VALUE sub, long offset, int in_byte)
{
    const char *str_ptr, *str_ptr_end, *sub_ptr;
    long str_len, sub_len;
    int single_byte = single_byte_optimizable(str);
    rb_encoding *enc;

    enc = rb_enc_check(str, sub);
    if ((rb_enc_str_coderange(sub) == RUBY_ENC_CODERANGE_BROKEN)) return -1;

    str_ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    str_ptr_end = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    str_len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    sub_ptr = (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? ((struct RString*)(sub))->as.ary : ((struct RString*)(sub))->as.heap.ptr);
    sub_len = (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sub))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sub))->as.heap.len);

    if (str_len < sub_len) return -1;

    if (offset != 0) {
 long str_len_char, sub_len_char;
 str_len_char = (in_byte || single_byte) ? str_len : str_strlen(str, enc);
 sub_len_char = in_byte ? sub_len : str_strlen(sub, enc);
 if (offset < 0) {
     offset += str_len_char;
     if (offset < 0) return -1;
 }
 if (str_len_char - offset < sub_len_char) return -1;
 if (!in_byte) offset = str_offset(str_ptr, str_ptr_end, offset, enc, single_byte);
 str_ptr += offset;
    }
    if (sub_len == 0) return offset;


    return strseq_core(str_ptr, str_ptr_end, str_len, sub_ptr, sub_len, offset, enc);
}
static VALUE
rb_str_index_m(int argc, VALUE *argv, VALUE str)
{
    VALUE sub;
    VALUE initpos;
    long pos;

    if (rb_scan_args(argc, argv, "11", &sub, &initpos) == 2) {
 pos = rb_num2long_inline(initpos);
    }
    else {
 pos = 0;
    }
    if (pos < 0) {
 pos += str_strlen(str, ((void*)0));
 if (pos < 0) {
     if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(sub))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((sub) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((sub) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((sub) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((sub) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(sub)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(sub))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
  rb_backref_set(((VALUE)RUBY_Qnil));
     }
     return ((VALUE)RUBY_Qnil);
 }
    }

    if ((((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto generic;
    switch ((int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK)) {
      case RUBY_T_REGEXP:
 if (pos > str_strlen(str, ((void*)0)))
     return ((VALUE)RUBY_Qnil);
 pos = str_offset((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), pos,
    rb_enc_check(str, sub), single_byte_optimizable(str));

 pos = rb_reg_search(sub, str, pos, 0);
 pos = rb_str_sublen(str, pos);
 break;

      generic:
      default: {
 VALUE tmp;

 tmp = rb_check_string_type(sub);
 if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     rb_raise(rb_eTypeError, "type mismatch: %s given",
       rb_obj_classname(sub));
 }
 sub = tmp;
      }

      case RUBY_T_STRING:
 pos = rb_strseq_index(str, sub, pos, 0);
 pos = rb_str_sublen(str, pos);
 break;
    }

    if (pos == -1) return ((VALUE)RUBY_Qnil);
    return rb_long2num_inline(pos);
}


static long
str_rindex(VALUE str, VALUE sub, const char *s, long pos, rb_encoding *enc)
{
    char *hit, *adjusted;
    int c;
    long slen, searchlen;
    char *sbeg, *e, *t;

    slen = (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sub))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sub))->as.heap.len);
    if (slen == 0) return pos;
    sbeg = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    t = (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? ((struct RString*)(sub))->as.ary : ((struct RString*)(sub))->as.heap.ptr);
    c = *t & 0xff;
    searchlen = s - sbeg + 1;

    do {
 hit = memrchr(sbeg, c, searchlen);
 if (!hit) break;
 adjusted = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(sbeg),(OnigUChar*)(hit),(OnigUChar*)(e)));
 if (hit != adjusted) {
     searchlen = adjusted - sbeg;
     continue;
 }
 if (memcmp(hit, t, slen) == 0)
     return rb_str_sublen(str, hit - sbeg);
 searchlen = adjusted - sbeg;
    } while (searchlen > 0);

    return -1;
}
static long
rb_str_rindex(VALUE str, VALUE sub, long pos)
{
    long len, slen;
    char *sbeg, *s;
    rb_encoding *enc;
    int singlebyte;

    enc = rb_enc_check(str, sub);
    if ((rb_enc_str_coderange(sub) == RUBY_ENC_CODERANGE_BROKEN)) return -1;
    singlebyte = single_byte_optimizable(str);
    len = singlebyte ? (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) : str_strlen(str, enc);
    slen = str_strlen(sub, enc);


    if (len < slen) return -1;
    if (len - pos < slen) pos = len - slen;
    if (len == 0) return pos;

    sbeg = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);

    if (pos == 0) {
 if (memcmp(sbeg, (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? ((struct RString*)(sub))->as.ary : ((struct RString*)(sub))->as.heap.ptr), (!(((struct RBasic*)(sub))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sub))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sub))->as.heap.len)) == 0)
     return 0;
 else
     return -1;
    }

    s = str_nth(sbeg, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), pos, enc, singlebyte);
    return str_rindex(str, sub, s, pos, enc);
}
static VALUE
rb_str_rindex_m(int argc, VALUE *argv, VALUE str)
{
    VALUE sub;
    VALUE vpos;
    rb_encoding *enc = get_encoding(str);
    long pos, len = str_strlen(str, enc);

    if (rb_scan_args(argc, argv, "11", &sub, &vpos) == 2) {
 pos = rb_num2long_inline(vpos);
 if (pos < 0) {
     pos += len;
     if (pos < 0) {
  if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(sub))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((sub) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((sub) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((sub) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((sub) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(sub)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(sub))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
      rb_backref_set(((VALUE)RUBY_Qnil));
  }
  return ((VALUE)RUBY_Qnil);
     }
 }
 if (pos > len) pos = len;
    }
    else {
 pos = len;
    }

    if ((((VALUE)(sub) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sub) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto generic;
    switch ((int)(((struct RBasic*)(sub))->flags & RUBY_T_MASK)) {
      case RUBY_T_REGEXP:

 pos = str_offset((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), pos,
    enc, single_byte_optimizable(str));

 pos = rb_reg_search(sub, str, pos, 1);
 pos = rb_str_sublen(str, pos);
 if (pos >= 0) return rb_long2num_inline(pos);
 break;

      generic:
      default: {
 VALUE tmp;

 tmp = rb_check_string_type(sub);
 if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     rb_raise(rb_eTypeError, "type mismatch: %s given",
       rb_obj_classname(sub));
 }
 sub = tmp;
      }

      case RUBY_T_STRING:
 pos = rb_str_rindex(str, sub, pos);
 if (pos >= 0) return rb_long2num_inline(pos);
 break;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_match(VALUE x, VALUE y)
{
    if ((((VALUE)(y) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(y) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto generic;
    switch ((int)(((struct RBasic*)(y))->flags & RUBY_T_MASK)) {
      case RUBY_T_STRING:
 rb_raise(rb_eTypeError, "type mismatch: String given");

      case RUBY_T_REGEXP:
 return rb_reg_match(y, x);

      generic:
      default:
 return rb_funcall(y, idEqTilde, 1, x);
    }
}


static VALUE get_pat(VALUE);
static VALUE
rb_str_match_m(int argc, VALUE *argv, VALUE str)
{
    VALUE re, result;
    if (argc < 1)
 rb_check_arity(argc, 1, 2);
    re = argv[0];
    argv[0] = str;
    result = rb_funcallv(get_pat(re), (__builtin_constant_p("match") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("match")), (long)strlen(("match"))); (ID) rb_intern_id_cache; }) : rb_intern("match")), argc, argv);
    if (!!((VALUE)(result) != ((VALUE)RUBY_Qnil)) && rb_block_given_p()) {
 return rb_yield(result);
    }
    return result;
}
static VALUE
rb_str_match_m_p(int argc, VALUE *argv, VALUE str)
{
    VALUE re;
    rb_check_arity(argc, 1, 2);
    re = get_pat(argv[0]);
    return rb_reg_match_p(re, str, argc > 1 ? rb_num2long_inline(argv[1]) : 0);
}

enum neighbor_char {
    NEIGHBOR_NOT_CHAR,
    NEIGHBOR_FOUND,
    NEIGHBOR_WRAPPED
};

static enum neighbor_char
enc_succ_char(char *p, long len, rb_encoding *enc)
{
    long i;
    int l;

    if ((enc)->min_enc_len > 1) {

 int r = rb_enc_precise_mbclen(p, p + len, enc), c;
 if (!(0 < (r))) {
     return NEIGHBOR_NOT_CHAR;
 }
 c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(p + len)),(enc)) + 1;
 l = ((enc))->code_to_mbclen((c),(enc));;
 if (!l) return NEIGHBOR_NOT_CHAR;
 if (l != len) return NEIGHBOR_WRAPPED;
 ((enc))->code_to_mbc((c),(OnigUChar*)(p),(enc));
 r = rb_enc_precise_mbclen(p, p + len, enc);
 if (!(0 < (r))) {
     return NEIGHBOR_NOT_CHAR;
 }
 return NEIGHBOR_FOUND;
    }
    while (1) {
        for (i = len-1; 0 <= i && (unsigned char)p[i] == 0xff; i--)
            p[i] = '\0';
        if (i < 0)
            return NEIGHBOR_WRAPPED;
        ++((unsigned char*)p)[i];
        l = rb_enc_precise_mbclen(p, p+len, enc);
        if ((0 < (l))) {
            l = (l);
            if (l == len) {
                return NEIGHBOR_FOUND;
            }
            else {
                memset(p+l, 0xff, len-l);
            }
        }
        if (((l) == -1) && i < len-1) {
            long len2;
            int l2;
            for (len2 = len-1; 0 < len2; len2--) {
                l2 = rb_enc_precise_mbclen(p, p+len2, enc);
                if (!((l2) == -1))
                    break;
            }
            memset(p+len2+1, 0xff, len-(len2+1));
        }
    }
}

static enum neighbor_char
enc_pred_char(char *p, long len, rb_encoding *enc)
{
    long i;
    int l;
    if ((enc)->min_enc_len > 1) {

 int r = rb_enc_precise_mbclen(p, p + len, enc), c;
 if (!(0 < (r))) {
     return NEIGHBOR_NOT_CHAR;
 }
 c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(p + len)),(enc));
 if (!c) return NEIGHBOR_NOT_CHAR;
 --c;
 l = ((enc))->code_to_mbclen((c),(enc));;
 if (!l) return NEIGHBOR_NOT_CHAR;
 if (l != len) return NEIGHBOR_WRAPPED;
 ((enc))->code_to_mbc((c),(OnigUChar*)(p),(enc));
 r = rb_enc_precise_mbclen(p, p + len, enc);
 if (!(0 < (r))) {
     return NEIGHBOR_NOT_CHAR;
 }
 return NEIGHBOR_FOUND;
    }
    while (1) {
        for (i = len-1; 0 <= i && (unsigned char)p[i] == 0; i--)
            p[i] = '\xff';
        if (i < 0)
            return NEIGHBOR_WRAPPED;
        --((unsigned char*)p)[i];
        l = rb_enc_precise_mbclen(p, p+len, enc);
        if ((0 < (l))) {
            l = (l);
            if (l == len) {
                return NEIGHBOR_FOUND;
            }
            else {
                memset(p+l, 0, len-l);
            }
        }
        if (((l) == -1) && i < len-1) {
            long len2;
            int l2;
            for (len2 = len-1; 0 < len2; len2--) {
                l2 = rb_enc_precise_mbclen(p, p+len2, enc);
                if (!((l2) == -1))
                    break;
            }
            memset(p+len2+1, 0, len-(len2+1));
        }
    }
}
static enum neighbor_char
enc_succ_alnum_char(char *p, long len, rb_encoding *enc, char *carry)
{
    enum neighbor_char ret;
    unsigned int c;
    int ctype;
    int range;
    char save[7];


    int try;
    const int max_gaps = 1;

    c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(p+len)),(enc));
    if (((enc))->is_code_ctype((c),(4),(enc)))
        ctype = 4;
    else if (((enc))->is_code_ctype((c),(1),(enc)))
        ctype = 1;
    else
        return NEIGHBOR_NOT_CHAR;

    memcpy((save), (p), sizeof(char)*(size_t)(len));
    for (try = 0; try <= max_gaps; ++try) {
 ret = enc_succ_char(p, len, enc);
 if (ret == NEIGHBOR_FOUND) {
     c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(p+len)),(enc));
     if (((enc))->is_code_ctype((c),(ctype),(enc)))
  return NEIGHBOR_FOUND;
 }
    }
    memcpy((p), (save), sizeof(char)*(size_t)(len));
    range = 1;
    while (1) {
        memcpy((save), (p), sizeof(char)*(size_t)(len));
        ret = enc_pred_char(p, len, enc);
        if (ret == NEIGHBOR_FOUND) {
            c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(p+len)),(enc));
            if (!((enc))->is_code_ctype((c),(ctype),(enc))) {
                memcpy((p), (save), sizeof(char)*(size_t)(len));
                break;
            }
        }
        else {
            memcpy((p), (save), sizeof(char)*(size_t)(len));
            break;
        }
        range++;
    }
    if (range == 1) {
        return NEIGHBOR_NOT_CHAR;
    }

    if (ctype != 4) {
        memcpy((carry), (p), sizeof(char)*(size_t)(len));
        return NEIGHBOR_WRAPPED;
    }

    memcpy((carry), (p), sizeof(char)*(size_t)(len));
    enc_succ_char(carry, len, enc);
    return NEIGHBOR_WRAPPED;
}


static VALUE str_succ(VALUE str);
VALUE
rb_str_succ(VALUE orig)
{
    VALUE str;
    str = rb_str_new_with_class(orig, (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? ((struct RString*)(orig))->as.ary : ((struct RString*)(orig))->as.heap.ptr), (!(((struct RBasic*)(orig))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(orig))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(orig))->as.heap.len));
    rb_enc_cr_str_copy_for_substr(str, orig);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(orig) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(orig) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(orig))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(orig))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return str_succ(str);
}

static VALUE
str_succ(VALUE str)
{
    rb_encoding *enc;
    char *sbeg, *s, *e, *last_alnum = 0;
    int c = -1;
    long l, slen;
    char carry[7] = "\1";
    long carry_pos = 0, carry_len = 1;
    enum neighbor_char neighbor = NEIGHBOR_FOUND;

    slen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (slen == 0) return str;

    enc = get_encoding(str);
    sbeg = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    s = e = sbeg + slen;

    while ((s = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(sbeg),(OnigUChar*)(s),(OnigUChar*)(e)))) != 0) {
 if (neighbor == NEIGHBOR_NOT_CHAR && last_alnum) {
     if (rb_isalpha(*last_alnum) ? rb_isdigit(*s) :
  rb_isdigit(*last_alnum) ? rb_isalpha(*s) : 0) {
  s = last_alnum;
  break;
     }
 }
 l = rb_enc_precise_mbclen(s, e, enc);
 if (!(0 < (l))) continue;
 l = (l);
        neighbor = enc_succ_alnum_char(s, l, enc, carry);
        switch (neighbor) {
   case NEIGHBOR_NOT_CHAR:
     continue;
   case NEIGHBOR_FOUND:
     return str;
   case NEIGHBOR_WRAPPED:
     last_alnum = s;
     break;
 }
        c = 1;
        carry_pos = s - sbeg;
        carry_len = l;
    }
    if (c == -1) {
 s = e;
 while ((s = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(sbeg),(OnigUChar*)(s),(OnigUChar*)(e)))) != 0) {
            enum neighbor_char neighbor;
     char tmp[7];
     l = rb_enc_precise_mbclen(s, e, enc);
     if (!(0 < (l))) continue;
     l = (l);
     memcpy((tmp), (s), sizeof(char)*(size_t)(l));
     neighbor = enc_succ_char(tmp, l, enc);
     switch (neighbor) {
       case NEIGHBOR_FOUND:
  memcpy((s), (tmp), sizeof(char)*(size_t)(l));
                return str;
  break;
       case NEIGHBOR_WRAPPED:
  memcpy((s), (tmp), sizeof(char)*(size_t)(l));
  break;
       case NEIGHBOR_NOT_CHAR:
  break;
     }
            if (rb_enc_precise_mbclen(s, s+l, enc) != l) {

                enc_succ_char(s, l, enc);
            }
            if (!rb_enc_asciicompat_inline(enc)) {
                memcpy((carry), (s), sizeof(char)*(size_t)(l));
                carry_len = l;
            }
            carry_pos = s - sbeg;
 }
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_UNKNOWN));
    }
    do { const int termlen = (rb_enc_get(str))->min_enc_len; do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { if (!((slen + carry_len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) { char *const tmp = ((char*)ruby_xmalloc2((size_t)((size_t)(slen + carry_len) + (termlen)),sizeof(char))); const long tlen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); memcpy(tmp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), tlen); ((struct RString*)(str))->as.heap.ptr = tmp; ((struct RString*)(str))->as.heap.len = tlen; do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0); ((struct RString*)(str))->as.heap.aux.capa = (slen + carry_len); } } else { __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 4133, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 4133, __func__, "!FL_TEST((str), STR_SHARED)"))); ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)(slen + carry_len) + (termlen)),sizeof(char))); ((struct RString*)(str))->as.heap.aux.capa = (slen + carry_len); }} while (0);} while (0);
    sbeg = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    s = sbeg + carry_pos;
    memmove(s + carry_len, s, slen - carry_pos);
    memmove(s, carry, carry_len);
    slen += carry_len;
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((slen)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (slen); }} while (0);
    do { char *const term_fill_ptr = (&sbeg[slen]); const int term_fill_len = ((enc)->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    rb_enc_str_coderange(str);
    return str;
}
static VALUE
rb_str_succ_bang(VALUE str)
{
    rb_str_modify(str);
    str_succ(str);
    return str;
}

static int
all_digits_p(const char *s, long len)
{
    while (len-- > 0) {
 if (!rb_isdigit(*s)) return 0;
 s++;
    }
    return 1;
}

static VALUE str_upto_each(VALUE beg, VALUE end, int excl, int (*each)(VALUE, VALUE), VALUE);

static int
str_upto_i(VALUE str, VALUE arg)
{
    rb_yield(str);
    return 0;
}
static VALUE
rb_str_upto(int argc, VALUE *argv, VALUE beg)
{
    VALUE end, exclusive;

    rb_scan_args(argc, argv, "11", &end, &exclusive);
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((beg), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
    return str_upto_each(beg, end, !(((VALUE)(exclusive) & (VALUE)~((VALUE)RUBY_Qnil)) == 0), str_upto_i, ((VALUE)RUBY_Qnil));
}

static VALUE
str_upto_each(VALUE beg, VALUE end, int excl, int (*each)(VALUE, VALUE), VALUE arg)
{
    VALUE current, after_end;
    ID succ;
    int n, ascii;
    rb_encoding *enc;

    do { static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("succ")), (long)strlen(("succ"))); (succ) = rb_intern_id_cache; } while (0);
    rb_string_value(&(end));
    enc = rb_enc_check(beg, end);
    ascii = ((rb_enc_str_coderange(beg) == RUBY_ENC_CODERANGE_7BIT) && (rb_enc_str_coderange(end) == RUBY_ENC_CODERANGE_7BIT));

    if ((!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(beg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(beg))->as.heap.len) == 1 && (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(end))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(end))->as.heap.len) == 1 && ascii) {
 char c = (!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(beg))->as.ary : ((struct RString*)(beg))->as.heap.ptr)[0];
 char e = (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? ((struct RString*)(end))->as.ary : ((struct RString*)(end))->as.heap.ptr)[0];

 if (c > e || (excl && c == e)) return beg;
 for (;;) {
     if ((*each)(rb_enc_str_new(&c, 1, enc), arg)) break;
     if (!excl && c == e) break;
     c++;
     if (excl && c == e) break;
 }
 return beg;
    }

    if (ascii && rb_isdigit((!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(beg))->as.ary : ((struct RString*)(beg))->as.heap.ptr)[0]) && rb_isdigit((!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? ((struct RString*)(end))->as.ary : ((struct RString*)(end))->as.heap.ptr)[0]) &&
 all_digits_p((!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(beg))->as.ary : ((struct RString*)(beg))->as.heap.ptr), (!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(beg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(beg))->as.heap.len)) &&
 all_digits_p((!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? ((struct RString*)(end))->as.ary : ((struct RString*)(end))->as.heap.ptr), (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(end))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(end))->as.heap.len))) {
 VALUE b, e;
 int width;

 width = rb_long2int_inline((!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(beg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(beg))->as.heap.len));
 b = rb_str_to_inum(beg, 10, FALSE);
 e = rb_str_to_inum(end, 10, FALSE);
 if ((((int)(long)(b))&RUBY_FIXNUM_FLAG) && (((int)(long)(e))&RUBY_FIXNUM_FLAG)) {
     long bi = ((long)(((long)(b))>>(int)(1)));
     long ei = ((long)(((long)(e))>>(int)(1)));
     rb_encoding *usascii = rb_usascii_encoding();

     while (bi <= ei) {
  if (excl && bi == ei) break;
  if ((*each)(rb_enc_sprintf(usascii, "%.*ld", width, bi), arg)) break;
  bi++;
     }
 }
 else {
     ID op = excl ? '<' : idLE;
     VALUE args[2], fmt = rb_fstring_cstr("%.*d");

     args[0] = (((VALUE)(width))<<1 | RUBY_FIXNUM_FLAG);
     while (rb_funcall(b, op, 1, e)) {
  args[1] = b;
  if ((*each)(rb_str_format(((int)(sizeof(args) / sizeof((args)[0]))), args, fmt), arg)) break;
  b = rb_funcallv(b, succ, 0, 0);
     }
 }
 return beg;
    }

    n = rb_str_cmp(beg, end);
    if (n > 0 || (excl && n == 0)) return beg;

    after_end = rb_funcallv(end, succ, 0, 0);
    current = rb_str_dup(beg);
    while (!rb_str_equal(current, after_end)) {
 VALUE next = ((VALUE)RUBY_Qnil);
 if (excl || !rb_str_equal(current, end))
     next = rb_funcallv(current, succ, 0, 0);
 if ((*each)(current, arg)) break;
 if (!((VALUE)(next) != ((VALUE)RUBY_Qnil))) break;
 current = next;
 rb_string_value(&(current));
 if (excl && rb_str_equal(current, end)) break;
 if ((!(((struct RBasic*)(current))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(current))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(current))->as.heap.len) > (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(end))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(end))->as.heap.len) || (!(((struct RBasic*)(current))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(current))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(current))->as.heap.len) == 0)
     break;
    }

    return beg;
}

static int
include_range_i(VALUE str, VALUE arg)
{
    VALUE *argp = (VALUE *)arg;
    if (!rb_equal(str, *argp)) return 0;
    *argp = ((VALUE)RUBY_Qnil);
    return 1;
}

VALUE
rb_str_include_range_p(VALUE beg, VALUE end, VALUE val, VALUE exclusive)
{
    beg = rb_str_new_frozen(beg);
    rb_string_value(&(end));
    end = rb_str_new_frozen(end);
    if (!((VALUE)(val) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qfalse);
    val = rb_check_string_type(val);
    if (!((VALUE)(val) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qfalse);
    if (rb_enc_asciicompat_inline(get_encoding(beg)) &&
 rb_enc_asciicompat_inline(get_encoding(end)) &&
 rb_enc_asciicompat_inline(get_encoding(val))) {
 const char *bp = (!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? ((struct RString*)(beg))->as.ary : ((struct RString*)(beg))->as.heap.ptr);
 const char *ep = (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? ((struct RString*)(end))->as.ary : ((struct RString*)(end))->as.heap.ptr);
 const char *vp = (!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? ((struct RString*)(val))->as.ary : ((struct RString*)(val))->as.heap.ptr);
 if ((!(((struct RBasic*)(beg))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(beg))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(beg))->as.heap.len) == 1 && (!(((struct RBasic*)(end))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(end))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(end))->as.heap.len) == 1) {
     if ((!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(val))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(val))->as.heap.len) == 0 || (!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(val))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(val))->as.heap.len) > 1)
  return ((VALUE)RUBY_Qfalse);
     else {
  char b = *bp;
  char e = *ep;
  char v = *vp;

  if (rb_isascii(b) && rb_isascii(e) && rb_isascii(v)) {
      if (b <= v && v < e) return ((VALUE)RUBY_Qtrue);
      if (!!(((VALUE)(exclusive) & (VALUE)~((VALUE)RUBY_Qnil)) == 0) && v == e) return ((VALUE)RUBY_Qtrue);
      return ((VALUE)RUBY_Qfalse);
  }
     }
 }
    }
    str_upto_each(beg, end, !(((VALUE)(exclusive) & (VALUE)~((VALUE)RUBY_Qnil)) == 0), include_range_i, (VALUE)&val);

    return !((VALUE)(val) != ((VALUE)RUBY_Qnil)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}

static VALUE
rb_str_subpat(VALUE str, VALUE re, VALUE backref)
{
    if (rb_reg_search(re, str, 0, 0) >= 0) {
        VALUE match = rb_backref_get();
        int nth = rb_reg_backref_number(match, backref);
 return rb_reg_nth_match(nth, match);
    }
    return ((VALUE)RUBY_Qnil);
}

static VALUE
rb_str_aref(VALUE str, VALUE indx)
{
    long idx;

    if ((((int)(long)(indx))&RUBY_FIXNUM_FLAG)) {
 idx = ((long)(((long)(indx))>>(int)(1)));
    }
    else if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(indx))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((indx) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((indx) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((indx) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((indx) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(indx)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(indx))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
 return rb_str_subpat(str, indx, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
    }
    else if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(indx))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((indx) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((indx) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((indx) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((indx) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(indx)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(indx))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(indx))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 if (rb_strseq_index(str, indx, 0, 0) != -1)
     return rb_str_dup(indx);
 return ((VALUE)RUBY_Qnil);
    }
    else {

 long beg, len = str_strlen(str, ((void*)0));
 switch (rb_range_beg_len(indx, &beg, &len, len, 0)) {
   case ((VALUE)RUBY_Qfalse):
     break;
   case ((VALUE)RUBY_Qnil):
     return ((VALUE)RUBY_Qnil);
   default:
     return rb_str_substr(str, beg, len);
 }
 idx = rb_num2long_inline(indx);
    }

    return str_substr(str, idx, 1, FALSE);
}
static VALUE
rb_str_aref_m(int argc, VALUE *argv, VALUE str)
{
    if (argc == 2) {
 if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(argv[0]))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((argv[0]) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((argv[0]) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((argv[0]) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((argv[0]) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(argv[0])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(argv[0]))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
     return rb_str_subpat(str, argv[0], argv[1]);
 }
 else {
     long beg = rb_num2long_inline(argv[0]);
     long len = rb_num2long_inline(argv[1]);
     return rb_str_substr(str, beg, len);
 }
    }
    rb_check_arity(argc, 1, 2);
    return rb_str_aref(str, argv[0]);
}

VALUE
rb_str_drop_bytes(VALUE str, long len)
{
    char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    long olen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len), nlen;

    str_modifiable(str);
    if (len > olen) len = olen;
    nlen = olen - len;
    if (((nlen) <= RSTRING_EMBED_LEN_MAX + 1 - ((rb_enc_get(str))->min_enc_len))) {
 char *oldptr = ptr;
 int fl = (int)(((struct RBasic*)(str))->flags & (((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER2)|((VALUE)RUBY_FL_USER18)));
 ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
 do { long tmp_n = (nlen); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
 ptr = ((struct RString*)(str))->as.ary;
 memmove(ptr, oldptr + len, nlen);
 if (fl == ((VALUE)RUBY_FL_USER1)) ruby_xfree(oldptr);
    }
    else {
 if (!((((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) == (((VALUE)RUBY_FL_USER1)|RUBY_ELTS_SHARED))) rb_str_new_frozen(str);
 ptr = ((struct RString*)(str))->as.heap.ptr += len;
 ((struct RString*)(str))->as.heap.len = nlen;
    }
    ptr[nlen] = 0;
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    return str;
}

static void
rb_str_splice_0(VALUE str, long beg, long len, VALUE val)
{
    char *sptr;
    long slen, vlen = (!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(val))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(val))->as.heap.len);
    int cr;

    if (beg == 0 && vlen == 0) {
 rb_str_drop_bytes(str, len);
 ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(val))->flags&(RUBY_FL_TAINT)))) : (void)0);
 return;
    }

    str_modify_keep_cr(str);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((sptr) = ((struct RString*)(str))->as.ary, (slen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((sptr) = ((struct RString*)(str))->as.heap.ptr, (slen) = ((struct RString*)(str))->as.heap.len));
    if (len < vlen) {

 do { const int termlen = (rb_enc_get(str))->min_enc_len; do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { if (!((slen + vlen - len) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) { char *const tmp = ((char*)ruby_xmalloc2((size_t)((size_t)(slen + vlen - len) + (termlen)),sizeof(char))); const long tlen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); memcpy(tmp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), tlen); ((struct RString*)(str))->as.heap.ptr = tmp; ((struct RString*)(str))->as.heap.len = tlen; do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0); ((struct RString*)(str))->as.heap.aux.capa = (slen + vlen - len); } } else { __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 4535, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 4535, __func__, "!FL_TEST((str), STR_SHARED)"))); ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)(slen + vlen - len) + (termlen)),sizeof(char))); ((struct RString*)(str))->as.heap.aux.capa = (slen + vlen - len); }} while (0);} while (0);
 sptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    }

    if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_7BIT)
 cr = rb_enc_str_coderange(val);
    else
 cr = RUBY_ENC_CODERANGE_UNKNOWN;

    if (vlen != len) {
 memmove(sptr + beg + vlen,
  sptr + beg + len,
  slen - (beg + len));
    }
    if (vlen < beg && len < 0) {
 memset((sptr + slen), 0, sizeof(char)*(size_t)(-len));
    }
    if (vlen > 0) {
 memmove(sptr + beg, (!(((struct RBasic*)(val))->flags & RSTRING_NOEMBED) ? ((struct RString*)(val))->as.ary : ((struct RString*)(val))->as.heap.ptr), vlen);
    }
    slen += vlen - len;
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((slen)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (slen); }} while (0);
    do { char *const term_fill_ptr = (&sptr[slen]); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    ( (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(str))->flags |= ((((struct RBasic*)(val))->flags&(RUBY_FL_TAINT)))) : (void)0);
    ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
}

void
rb_str_update(VALUE str, long beg, long len, VALUE val)
{
    long slen;
    char *p, *e;
    rb_encoding *enc;
    int singlebyte = single_byte_optimizable(str);
    int cr;

    if (len < 0) rb_raise(rb_eIndexError, "negative length %ld", len);

    rb_string_value(&(val));
    enc = rb_enc_check(str, val);
    slen = str_strlen(str, enc);

    if (slen < beg) {
      out_of_range:
 rb_raise(rb_eIndexError, "index %ld out of string", beg);
    }
    if (beg < 0) {
 if (beg + slen < 0) {
     goto out_of_range;
 }
 beg += slen;
    }
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((beg >= 0) ? (void)0 : rb_assert_failure("string.c", 4587, __func__, "beg >= 0")), (void)0), ((!(!0 +0) || (beg >= 0)) ? (void)0 : rb_assert_failure("string.c", 4587, __func__, "beg >= 0")));
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((beg <= slen) ? (void)0 : rb_assert_failure("string.c", 4588, __func__, "beg <= slen")), (void)0), ((!(!0 +0) || (beg <= slen)) ? (void)0 : rb_assert_failure("string.c", 4588, __func__, "beg <= slen")));
    if (len > slen - beg) {
 len = slen - beg;
    }
    str_modify_keep_cr(str);
    p = str_nth((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), beg, enc, singlebyte);
    if (!p) p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    e = str_nth(p, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), len, enc, singlebyte);
    if (!e) e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));

    beg = p - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    len = e - p;
    rb_str_splice_0(str, beg, len, val);
    rb_enc_associate(str, enc);
    cr = ((((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK)) == RUBY_ENC_CODERANGE_7BIT ? (((int)((struct RBasic*)(val))->flags & RUBY_ENC_CODERANGE_MASK)) : (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK)) != RUBY_ENC_CODERANGE_VALID ? RUBY_ENC_CODERANGE_UNKNOWN : (((int)((struct RBasic*)(val))->flags & RUBY_ENC_CODERANGE_MASK)) == RUBY_ENC_CODERANGE_7BIT ? RUBY_ENC_CODERANGE_VALID : (((int)((struct RBasic*)(val))->flags & RUBY_ENC_CODERANGE_MASK)));
    if (cr != RUBY_ENC_CODERANGE_BROKEN)
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
}



static void
rb_str_subpat_set(VALUE str, VALUE re, VALUE backref, VALUE val)
{
    int nth;
    VALUE match;
    long start, end, len;
    rb_encoding *enc;
    struct re_registers *regs;

    if (rb_reg_search(re, str, 0, 0) < 0) {
 rb_raise(rb_eIndexError, "regexp not matched");
    }
    match = rb_backref_get();
    nth = rb_reg_backref_number(match, backref);
    regs = (&((struct RMatch*)(match))->rmatch->regs);
    if (nth >= regs->num_regs) {
      out_of_range:
 rb_raise(rb_eIndexError, "index %d out of regexp", nth);
    }
    if (nth < 0) {
 if (-nth >= regs->num_regs) {
     goto out_of_range;
 }
 nth += regs->num_regs;
    }

    start = (regs->beg[(nth)]);
    if (start == -1) {
 rb_raise(rb_eIndexError, "regexp group %d not matched", nth);
    }
    end = (regs->end[(nth)]);
    len = end - start;
    rb_string_value(&(val));
    enc = rb_enc_check_str(str, val);
    rb_str_splice_0(str, start, len, val);
    rb_enc_associate(str, enc);
}

static VALUE
rb_str_aset(VALUE str, VALUE indx, VALUE val)
{
    long idx, beg;

    if ((((int)(long)(indx))&RUBY_FIXNUM_FLAG)) {
 idx = ((long)(((long)(indx))>>(int)(1)));
      num_index:
 rb_str_update(str, idx, 1, val);
 return val;
    }

    if ((((VALUE)(indx) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(indx) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto generic;
    switch (rb_type((VALUE)(indx))) {
      case RUBY_T_REGEXP:
 rb_str_subpat_set(str, indx, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG), val);
 return val;

      case RUBY_T_STRING:
 beg = rb_strseq_index(str, indx, 0, 0);
 if (beg < 0) {
     rb_raise(rb_eIndexError, "string not matched");
 }
 beg = rb_str_sublen(str, beg);
 rb_str_update(str, beg, str_strlen(indx, ((void*)0)), val);
 return val;

      generic:
      default:

 {
     long beg, len;
     if (rb_range_beg_len(indx, &beg, &len, str_strlen(str, ((void*)0)), 2)) {
  rb_str_update(str, beg, len, val);
  return val;
     }
 }
 idx = rb_num2long_inline(indx);
 goto num_index;
    }
}
static VALUE
rb_str_aset_m(int argc, VALUE *argv, VALUE str)
{
    if (argc == 3) {
 if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(argv[0]))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((argv[0]) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((argv[0]) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((argv[0]) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((argv[0]) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(argv[0])&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(argv[0]))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(argv[0]) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(argv[0]) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(argv[0]))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
     rb_str_subpat_set(str, argv[0], argv[1], argv[2]);
 }
 else {
     rb_str_update(str, rb_num2long_inline(argv[0]), rb_num2long_inline(argv[1]), argv[2]);
 }
 return argv[2];
    }
    rb_check_arity(argc, 2, 3);
    return rb_str_aset(str, argv[0], argv[1]);
}
static VALUE
rb_str_insert(VALUE str, VALUE idx, VALUE str2)
{
    long pos = rb_num2long_inline(idx);

    if (pos == -1) {
 return rb_str_append(str, str2);
    }
    else if (pos < 0) {
 pos++;
    }
    rb_str_update(str, pos, 0, str2);
    return str;
}
static VALUE
rb_str_slice_bang(int argc, VALUE *argv, VALUE str)
{
    VALUE result;
    VALUE buf[3];
    int i;

    rb_check_arity(argc, 1, 2);
    for (i=0; i<argc; i++) {
 buf[i] = argv[i];
    }
    str_modify_keep_cr(str);
    result = rb_str_aref_m(argc, buf, str);
    if (!!((VALUE)(result) != ((VALUE)RUBY_Qnil))) {
 buf[i] = rb_str_new(0,0);
 rb_str_aset_m(argc+1, buf, str);
    }
    return result;
}

static VALUE
get_pat(VALUE pat)
{
    VALUE val;

    if ((((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto to_string;
    switch ((int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK)) {
      case RUBY_T_REGEXP:
 return pat;

      case RUBY_T_STRING:
 break;

      default:
      to_string:
 val = rb_check_string_type(pat);
 if (!((VALUE)(val) != ((VALUE)RUBY_Qnil))) {
     (!( (((RUBY_T_REGEXP)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(pat)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_REGEXP)) == RUBY_T_TRUE) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_REGEXP)) == RUBY_T_FALSE) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_REGEXP)) == RUBY_T_NIL) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_REGEXP)) == RUBY_T_UNDEF) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_REGEXP)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(pat))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_REGEXP)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(pat)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == ((RUBY_T_REGEXP)))) || ((RUBY_T_REGEXP) == RUBY_T_DATA && (((struct RTypedData*)(pat))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(pat), (RUBY_T_REGEXP)) : (void)0);
 }
 pat = val;
    }

    return rb_reg_regcomp(pat);
}

static VALUE
get_pat_quoted(VALUE pat, int check)
{
    VALUE val;

    if ((((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0))) goto to_string;
    switch ((int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK)) {
      case RUBY_T_REGEXP:
 return pat;

      case RUBY_T_STRING:
 break;

      default:
      to_string:
 val = rb_check_string_type(pat);
 if (!((VALUE)(val) != ((VALUE)RUBY_Qnil))) {
     (!( (((RUBY_T_REGEXP)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(pat)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_REGEXP)) == RUBY_T_TRUE) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_REGEXP)) == RUBY_T_FALSE) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_REGEXP)) == RUBY_T_NIL) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_REGEXP)) == RUBY_T_UNDEF) ? (((VALUE)(pat)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_REGEXP)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(pat))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_REGEXP)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(pat)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(pat)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(pat)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(pat)))->flags & RUBY_T_MASK) == ((RUBY_T_REGEXP)))) || ((RUBY_T_REGEXP) == RUBY_T_DATA && (((struct RTypedData*)(pat))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(pat), (RUBY_T_REGEXP)) : (void)0);
 }
 pat = val;
    }
    if (check && (rb_enc_str_coderange(pat) == RUBY_ENC_CODERANGE_BROKEN)) {
 rb_exc_raise(rb_reg_check_preprocess(pat));
    }
    return pat;
}

static long
rb_pat_search(VALUE pat, VALUE str, long pos, int set_backref_str)
{
    if ((int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_STRING) {
 pos = rb_strseq_index(str, pat, pos, 1);
 if (set_backref_str) {
     if (pos >= 0) {
  VALUE match;
  str = rb_str_new_frozen(str);
  rb_backref_set_string(str, pos, (!(((struct RBasic*)(pat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(pat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(pat))->as.heap.len));
  match = rb_backref_get();
  ( (((!(((VALUE)(match) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(match) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(match))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(match))->flags |= ((((struct RBasic*)(pat))->flags&(RUBY_FL_TAINT)))) : (void)0);
     }
     else {
  rb_backref_set(((VALUE)RUBY_Qnil));
     }
 }
 return pos;
    }
    else {
 return rb_reg_search0(pat, str, pos, 0, set_backref_str);
    }
}
static VALUE
rb_str_sub_bang(int argc, VALUE *argv, VALUE str)
{
    VALUE pat, repl, hash = ((VALUE)RUBY_Qnil);
    int iter = 0;
    int tainted = 0;
    long plen;
    int min_arity = rb_block_given_p() ? 1 : 2;
    long beg;

    rb_check_arity(argc, min_arity, 2);
    if (argc == 1) {
 iter = 1;
    }
    else {
 repl = argv[1];
 hash = rb_check_hash_type(argv[1]);
 if (!((VALUE)(hash) != ((VALUE)RUBY_Qnil))) {
     rb_string_value(&(repl));
 }
 tainted = (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
    }

    pat = get_pat_quoted(argv[0], 1);

    str_modifiable(str);
    beg = rb_pat_search(pat, str, 0, 1);
    if (beg >= 0) {
 rb_encoding *enc;
 int cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
 long beg0, end0;
 VALUE match, match0 = ((VALUE)RUBY_Qnil);
 struct re_registers *regs;
 char *p, *rp;
 long len, rlen;

 match = rb_backref_get();
 regs = (&((struct RMatch*)(match))->rmatch->regs);
 if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pat))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pat) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pat) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pat) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pat) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pat)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pat))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
     beg0 = beg;
     end0 = beg0 + (!(((struct RBasic*)(pat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(pat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(pat))->as.heap.len);
     match0 = pat;
 }
 else {
     beg0 = (regs->beg[(0)]);
     end0 = (regs->end[(0)]);
     if (iter) match0 = rb_reg_nth_match(0, match);
 }

 if (iter || !!((VALUE)(hash) != ((VALUE)RUBY_Qnil))) {
     p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

            if (iter) {
                repl = rb_obj_as_string(rb_yield(match0));
            }
            else {
                repl = rb_hash_aref(hash, rb_str_subseq(str, beg0, end0 - beg0));
                repl = rb_obj_as_string(repl);
            }
     str_mod_check(str, p, len);
     ({do { VALUE frozen_obj = (str); if ((!(!(((VALUE)(frozen_obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(frozen_obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(frozen_obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) || (((struct RBasic*)(frozen_obj))->flags&RUBY_FL_FREEZE))) { rb_error_frozen_object(frozen_obj); } } while (0);});
 }
 else {
     repl = rb_reg_regsub(repl, str, regs, ( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pat))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pat) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pat) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pat) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pat) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pat)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pat))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) ? ((VALUE)RUBY_Qnil) : pat);
 }

        enc = rb_enc_compatible(str, repl);
        if (!enc) {
            rb_encoding *str_enc = get_encoding(str);
     p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
     if (coderange_scan(p, beg0, str_enc) != RUBY_ENC_CODERANGE_7BIT ||
  coderange_scan(p+end0, len-end0, str_enc) != RUBY_ENC_CODERANGE_7BIT) {
                rb_raise(rb_eEncCompatError, "incompatible character encodings: %s and %s",
    (str_enc)->name,
    (get_encoding(repl))->name);
            }
            enc = get_encoding(repl);
        }
 rb_str_modify(str);
 rb_enc_associate(str, enc);
 tainted |= (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
 if (RUBY_ENC_CODERANGE_UNKNOWN < cr && cr < RUBY_ENC_CODERANGE_BROKEN) {
     int cr2 = ((int)((struct RBasic*)(repl))->flags & RUBY_ENC_CODERANGE_MASK);
            if (cr2 == RUBY_ENC_CODERANGE_BROKEN ||
                (cr == RUBY_ENC_CODERANGE_VALID && cr2 == RUBY_ENC_CODERANGE_7BIT))
                cr = RUBY_ENC_CODERANGE_UNKNOWN;
            else
                cr = cr2;
 }
 plen = end0 - beg0;
 rp = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr); rlen = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len);
 len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 if (rlen > plen) {
     do { const int termlen = (rb_enc_get(str))->min_enc_len; do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { if (!((len + rlen - plen) <= RSTRING_EMBED_LEN_MAX + 1 - (termlen))) { char *const tmp = ((char*)ruby_xmalloc2((size_t)((size_t)(len + rlen - plen) + (termlen)),sizeof(char))); const long tlen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); memcpy(tmp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), tlen); ((struct RString*)(str))->as.heap.ptr = tmp; ((struct RString*)(str))->as.heap.len = tlen; do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0); ((struct RString*)(str))->as.heap.aux.capa = (len + rlen - plen); } } else { __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0)) ? (void)0 : rb_assert_failure("string.c", 4983, __func__, "!FL_TEST((str), STR_SHARED)")), (void)0), ((!(!0 +0) || (!((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE)?(((struct RBasic*)(((str))))->flags&((((VALUE)RUBY_FL_USER2)))):0))) ? (void)0 : rb_assert_failure("string.c", 4983, __func__, "!FL_TEST((str), STR_SHARED)"))); ((((struct RString*)(str))->as.heap.ptr)=(char*)ruby_xrealloc2((char*)(((struct RString*)(str))->as.heap.ptr),(size_t)((size_t)(len + rlen - plen) + (termlen)),sizeof(char))); ((struct RString*)(str))->as.heap.aux.capa = (len + rlen - plen); }} while (0);} while (0);
 }
 p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 if (rlen != plen) {
     memmove(p + beg0 + rlen, p + beg0 + plen, len - beg0 - plen);
 }
 memcpy(p + beg0, rp, rlen);
 len += rlen - plen;
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
 do { char *const term_fill_ptr = (&(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[len]); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
 (void)(((struct RBasic*)(str))->flags |= (tainted));

 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_sub(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_sub_bang(argc, argv, str);
    return str;
}

static VALUE
str_gsub(int argc, VALUE *argv, VALUE str, int bang)
{
    VALUE pat, val = ((VALUE)RUBY_Qnil), repl, match, match0 = ((VALUE)RUBY_Qnil), dest, hash = ((VALUE)RUBY_Qnil);
    struct re_registers *regs;
    long beg, beg0, end0;
    long offset, blen, slen, len, last;
    enum {STR, ITER, MAP} mode = STR;
    char *sp, *cp;
    int tainted = 0;
    int need_backref = -1;
    rb_encoding *str_enc;

    switch (argc) {
      case 1:
 do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
 mode = ITER;
 break;
      case 2:
 repl = argv[1];
 hash = rb_check_hash_type(argv[1]);
 if (!((VALUE)(hash) != ((VALUE)RUBY_Qnil))) {
     rb_string_value(&(repl));
 }
 else {
     mode = MAP;
 }
 tainted = (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
 break;
      default:
 rb_check_arity(argc, 1, 2);
    }

    pat = get_pat_quoted(argv[0], 1);
    beg = rb_pat_search(pat, str, 0, need_backref);
    if (beg < 0) {
 if (bang) return ((VALUE)RUBY_Qnil);
 return rb_str_dup(str);
    }

    offset = 0;
    blen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) + 30;
    dest = rb_str_buf_new(blen);
    sp = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    slen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    cp = sp;
    str_enc = get_encoding(str);
    rb_enc_associate(dest, str_enc);
    ( ((struct RBasic*)(dest))->flags = (((struct RBasic*)(dest))->flags & ~RUBY_ENC_CODERANGE_MASK) | (rb_enc_asciicompat_inline(str_enc) ? RUBY_ENC_CODERANGE_7BIT : RUBY_ENC_CODERANGE_VALID));

    do {
 match = rb_backref_get();
 regs = (&((struct RMatch*)(match))->rmatch->regs);
 if (( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pat))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pat) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pat) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pat) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pat) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pat)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pat))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
     beg0 = beg;
     end0 = beg0 + (!(((struct RBasic*)(pat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(pat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(pat))->as.heap.len);
     match0 = pat;
 }
 else {
     beg0 = (regs->beg[(0)]);
     end0 = (regs->end[(0)]);
     if (mode == ITER) match0 = rb_reg_nth_match(0, match);
 }

 if (mode) {
            if (mode == ITER) {
                val = rb_obj_as_string(rb_yield(match0));
            }
            else {
                val = rb_hash_aref(hash, rb_str_subseq(str, beg0, end0 - beg0));
                val = rb_obj_as_string(val);
            }
     str_mod_check(str, sp, slen);
     if (val == dest) {
  rb_raise(rb_eRuntimeError, "block should not cheat");
     }
 }
 else if (need_backref) {
     val = rb_reg_regsub(repl, str, regs, ( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(pat))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((pat) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((pat) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((pat) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((pat) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(pat)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(pat))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) ? ((VALUE)RUBY_Qnil) : pat);
     if (need_backref < 0) {
  need_backref = val != repl;
     }
 }
 else {
     val = repl;
 }

 tainted |= (((struct RBasic*)(val))->flags&(RUBY_FL_TAINT));

 len = beg0 - offset;
        if (len) {
            rb_enc_str_buf_cat(dest, cp, len, str_enc);
        }

        rb_str_buf_append(dest, val);

 last = offset;
 offset = end0;
 if (beg0 == end0) {




     if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) <= end0) break;
     len = rb_enc_fast_mbclen((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)+end0, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), str_enc);
            rb_enc_str_buf_cat(dest, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)+end0, len, str_enc);
     offset = end0 + len;
 }
 cp = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + offset;
 if (offset > (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) break;
 beg = rb_pat_search(pat, str, offset, need_backref);
    } while (beg >= 0);
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > offset) {
        rb_enc_str_buf_cat(dest, cp, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - offset, str_enc);
    }
    rb_pat_search(pat, str, last, 1);
    if (bang) {
        str_shared_replace(str, dest);
    }
    else {
 do { VALUE _obj_ = (dest); rb_obj_write((VALUE)(_obj_), (VALUE *)(&((struct RBasicRaw *)(_obj_))->klass), (VALUE)(rb_obj_class(str)), "string.c", 5172); } while (0);
 tainted |= (((struct RBasic*)(str))->flags&(RUBY_FL_TAINT));
 str = dest;
    }

    (void)(((struct RBasic*)(str))->flags |= (tainted));
    return str;
}
static VALUE
rb_str_gsub_bang(int argc, VALUE *argv, VALUE str)
{
    str_modify_keep_cr(str);
    return str_gsub(argc, argv, str, 1);
}
static VALUE
rb_str_gsub(int argc, VALUE *argv, VALUE str)
{
    return str_gsub(argc, argv, str, 0);
}
VALUE
rb_str_replace(VALUE str, VALUE str2)
{
    str_modifiable(str);
    if (str == str2) return str;

    rb_string_value(&(str2));
    str_discard(str);
    return str_replace(str, str2);
}
static VALUE
rb_str_clear(VALUE str)
{
    str_discard(str);
    ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags &= ~(VALUE)((((VALUE)RUBY_FL_USER1)|((VALUE)RUBY_FL_USER18)))) : (void)0);
    do { long tmp_n = (0); ((struct RBasic*)(str))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)(str))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[0] = 0;
    if (rb_enc_asciicompat_inline(get_encoding(str)))
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
    else
 ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
    return str;
}
static VALUE
rb_str_chr(VALUE str)
{
    return rb_str_substr(str, 0, 1);
}







static VALUE
rb_str_getbyte(VALUE str, VALUE index)
{
    long pos = rb_num2long_inline(index);

    if (pos < 0)
        pos += (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (pos < 0 || (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) <= pos)
        return ((VALUE)RUBY_Qnil);

    return (((VALUE)((unsigned char)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[pos]))<<1 | RUBY_FIXNUM_FLAG);
}







static VALUE
rb_str_setbyte(VALUE str, VALUE index, VALUE value)
{
    long pos = rb_num2long_inline(index);
    int byte = rb_num2int_inline(value);
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    char *head, *ptr, *left = 0;
    rb_encoding *enc;
    int cr = RUBY_ENC_CODERANGE_UNKNOWN, width, nlen;

    if (pos < -len || len <= pos)
        rb_raise(rb_eIndexError, "index %ld out of string", pos);
    if (pos < 0)
        pos += len;

    if (!str_independent(str))
 str_make_independent(str);
    enc = get_encoding(str);
    head = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    ptr = &head[pos];
    if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
 cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
 switch (cr) {
   case RUBY_ENC_CODERANGE_7BIT:
     left = ptr;
     *ptr = byte;
     if (rb_isascii(byte)) goto end;
     nlen = rb_enc_precise_mbclen(left, head+len, enc);
     if (!(0 < (nlen)))
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_BROKEN));
     else
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
     goto end;
   case RUBY_ENC_CODERANGE_VALID:
     left = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(head),(OnigUChar*)(ptr),(OnigUChar*)(head+len)));
     width = rb_enc_precise_mbclen(left, head+len, enc);
     *ptr = byte;
     nlen = rb_enc_precise_mbclen(left, head+len, enc);
     if (!(0 < (nlen)))
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_BROKEN));
     else if ((nlen) != width || rb_isascii(byte))
  ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
     goto end;
 }
    }
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    *ptr = byte;

  end:
    return value;
}

static VALUE
str_byte_substr(VALUE str, long beg, long len, int empty)
{
    char *p, *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    long n = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    VALUE str2;

    if (beg > n || len < 0) return ((VALUE)RUBY_Qnil);
    if (beg < 0) {
 beg += n;
 if (beg < 0) return ((VALUE)RUBY_Qnil);
    }
    if (len > n - beg)
 len = n - beg;
    if (len <= 0) {
 if (!empty) return ((VALUE)RUBY_Qnil);
 len = 0;
 p = 0;
    }
    else
 p = s + beg;

    if (!((len) <= RSTRING_EMBED_LEN_MAX + 1 - ((rb_enc_get(str))->min_enc_len)) && ((beg) + (len) == (n))) {
 str2 = rb_str_new_frozen(str);
 str2 = str_new_shared(rb_obj_class(str2), str2);
 ((struct RString*)(str2))->as.heap.ptr += beg;
 ((struct RString*)(str2))->as.heap.len = len;
    }
    else {
 str2 = rb_str_new_with_class(str, p, len);
    }

    str_enc_copy(str2, str);

    if ((!(((struct RBasic*)(str2))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str2))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str2))->as.heap.len) == 0) {
 if (!rb_enc_asciicompat_inline(get_encoding(str)))
     ( ((struct RBasic*)(str2))->flags = (((struct RBasic*)(str2))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
 else
     ( ((struct RBasic*)(str2))->flags = (((struct RBasic*)(str2))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
    }
    else {
 switch (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK)) {
   case RUBY_ENC_CODERANGE_7BIT:
     ( ((struct RBasic*)(str2))->flags = (((struct RBasic*)(str2))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
     break;
   default:
     ( ((struct RBasic*)(str2))->flags = (((struct RBasic*)(str2))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_UNKNOWN));
     break;
 }
    }

    (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));

    return str2;
}

static VALUE
str_byte_aref(VALUE str, VALUE indx)
{
    long idx;
    if ((((int)(long)(indx))&RUBY_FIXNUM_FLAG)) {
 idx = ((long)(((long)(indx))>>(int)(1)));
    }
    else {

 long beg, len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

 switch (rb_range_beg_len(indx, &beg, &len, len, 0)) {
   case ((VALUE)RUBY_Qfalse):
     break;
   case ((VALUE)RUBY_Qnil):
     return ((VALUE)RUBY_Qnil);
   default:
     return str_byte_substr(str, beg, len, TRUE);
 }

 idx = rb_num2long_inline(indx);
    }
    return str_byte_substr(str, idx, 1, FALSE);
}
static VALUE
rb_str_byteslice(int argc, VALUE *argv, VALUE str)
{
    if (argc == 2) {
 long beg = rb_num2long_inline(argv[0]);
 long end = rb_num2long_inline(argv[1]);
 return str_byte_substr(str, beg, end, TRUE);
    }
    rb_check_arity(argc, 1, 2);
    return str_byte_aref(str, argv[0]);
}
static VALUE
rb_str_reverse(VALUE str)
{
    rb_encoding *enc;
    VALUE rev;
    char *s, *e, *p;
    int cr;

    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) <= 1) return rb_str_dup(str);
    enc = get_encoding(str);
    rev = rb_str_new_with_class(str, 0, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    p = (!(((struct RBasic*)(rev))->flags & RSTRING_NOEMBED) ? (((struct RString*)(rev))->as.ary + (long)((((struct RBasic*)(rev))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(rev))->as.heap.ptr + ((struct RString*)(rev))->as.heap.len));
    cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);

    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 1) {
 if (single_byte_optimizable(str)) {
     while (s < e) {
  *--p = *s++;
     }
 }
 else if (cr == RUBY_ENC_CODERANGE_VALID) {
     while (s < e) {
  int clen = rb_enc_fast_mbclen(s, e, enc);

  p -= clen;
  memcpy(p, s, clen);
  s += clen;
     }
 }
 else {
     cr = rb_enc_asciicompat_inline(enc) ?
  RUBY_ENC_CODERANGE_7BIT : RUBY_ENC_CODERANGE_VALID;
     while (s < e) {
  int clen = rb_enc_mbclen(s, e, enc);

  if (clen > 1 || (*s & 0x80)) cr = RUBY_ENC_CODERANGE_UNKNOWN;
  p -= clen;
  memcpy(p, s, clen);
  s += clen;
     }
 }
    }
    do { if ((!(((struct RBasic*)((rev)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = (((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len))); ((struct RBasic*)((rev)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((rev)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(rev))->as.heap.len = ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)); }} while (0);
    (void)(((struct RBasic*)(rev))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    str_enc_copy(rev, str);
    ( ((struct RBasic*)(rev))->flags = (((struct RBasic*)(rev))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));

    return rev;
}
static VALUE
rb_str_reverse_bang(VALUE str)
{
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 1) {
 if (single_byte_optimizable(str)) {
     char *s, *e, c;

     str_modify_keep_cr(str);
     s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
     e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)) - 1;
     while (s < e) {
  c = *s;
  *s++ = *e;
  *e-- = c;
     }
 }
 else {
     str_shared_replace(str, rb_str_reverse(str));
 }
    }
    else {
 str_modify_keep_cr(str);
    }
    return str;
}
static VALUE
rb_str_include(VALUE str, VALUE arg)
{
    long i;

    rb_string_value(&(arg));
    i = rb_strseq_index(str, arg, 0, 0);

    if (i == -1) return ((VALUE)RUBY_Qfalse);
    return ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_str_to_i(int argc, VALUE *argv, VALUE str)
{
    int base;

    if (argc == 0) base = 10;
    else {
 VALUE b;

 rb_scan_args(argc, argv, "01", &b);
 base = rb_num2int_inline(b);
    }
    if (base < 0) {
 rb_raise(rb_eArgError, "invalid radix %d", base);
    }
    return rb_str_to_inum(str, base, FALSE);
}
static VALUE
rb_str_to_f(VALUE str)
{
    return rb_float_new_inline(rb_str_to_dbl(str, FALSE));
}
static VALUE
rb_str_to_s(VALUE str)
{
    if (rb_obj_class(str) != rb_cString) {
 return str_duplicate(rb_cString, str);
    }
    return str;
}
int
rb_str_buf_cat_escaped_char(VALUE result, unsigned int c, int unicode_p)
{
    char buf[13 + 1];
    int l;




    if (unicode_p) {
 if (c < 0x7F && rb_isprint(c)) {
     ruby_snprintf(buf, 13, "%c", c);
 }
 else if (c < 0x10000) {
     ruby_snprintf(buf, 13, "\\u%04X", c);
 }
 else {
     ruby_snprintf(buf, 13, "\\u{%X}", c);
 }
    }
    else {
 if (c < 0x100) {
     ruby_snprintf(buf, 13, "\\x%02X", c);
 }
 else {
     ruby_snprintf(buf, 13, "\\x{%X}", c);
 }
    }
    l = (int)strlen(buf);
    rb_str_buf_cat(result, buf, l);
    return l;
}

VALUE
rb_str_escape(VALUE str)
{
    int encidx = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
    rb_encoding *enc = rb_enc_from_index(encidx);
    const char *p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    const char *pend = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    const char *prev = p;
    char buf[13 + 1];
    VALUE result = rb_str_buf_new(0);
    int unicode_p = rb_enc_unicode_p(enc);
    int asciicompat = rb_enc_asciicompat_inline(enc);

    while (p < pend) {
 unsigned int c, cc;
 int n = rb_enc_precise_mbclen(p, pend, enc);
        if (!(0 < (n))) {
     if (p > prev) str_buf_cat(result, prev, p - prev);
            n = (enc)->min_enc_len;
            if (pend < p + n)
                n = (int)(pend - p);
            while (n--) {
                ruby_snprintf(buf, 13, "\\x%02X", *p & 0377);
                str_buf_cat(result, buf, strlen(buf));
                prev = ++p;
            }
     continue;
 }
        n = (n);
 c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(pend)),(enc));
 p += n;
 switch (c) {
   case '\n': cc = 'n'; break;
   case '\r': cc = 'r'; break;
   case '\t': cc = 't'; break;
   case '\f': cc = 'f'; break;
   case '\013': cc = 'v'; break;
   case '\010': cc = 'b'; break;
   case '\007': cc = 'a'; break;
   case 033: cc = 'e'; break;
   default: cc = 0; break;
 }
 if (cc) {
     if (p - n > prev) str_buf_cat(result, prev, p - n - prev);
     buf[0] = '\\';
     buf[1] = (char)cc;
     str_buf_cat(result, buf, 2);
     prev = p;
 }
 else if (asciicompat && ((c) < 128) && rb_isprint(c)) {
 }
 else {
     if (p - n > prev) str_buf_cat(result, prev, p - n - prev);
     rb_str_buf_cat_escaped_char(result, c, unicode_p);
     prev = p;
 }
    }
    if (p > prev) str_buf_cat(result, prev, p - prev);
    do { VALUE rb_encoding_coderange_obj = (result); rb_enc_set_index((rb_encoding_coderange_obj), ((RUBY_ENCINDEX_US_ASCII))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((RUBY_ENC_CODERANGE_7BIT))); } while (0);

    (void)(((struct RBasic*)(result))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    return result;
}
VALUE
rb_str_inspect(VALUE str)
{
    int encidx = ((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str));
    rb_encoding *enc = rb_enc_from_index(encidx), *actenc;
    const char *p, *pend, *prev;
    char buf[13 + 1];
    VALUE result = rb_str_buf_new(0);
    rb_encoding *resenc = rb_default_internal_encoding();
    int unicode_p = rb_enc_unicode_p(enc);
    int asciicompat = rb_enc_asciicompat_inline(enc);

    if (resenc == ((void*)0)) resenc = rb_default_external_encoding();
    if (!rb_enc_asciicompat_inline(resenc)) resenc = rb_usascii_encoding();
    rb_enc_associate(result, resenc);
    str_buf_cat((result), ("\""), strlen("\""));

    p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); pend = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    prev = p;
    actenc = get_actual_encoding(encidx, str);
    if (actenc != enc) {
 enc = actenc;
 if (unicode_p) unicode_p = rb_enc_unicode_p(enc);
    }
    while (p < pend) {
 unsigned int c, cc;
 int n;

        n = rb_enc_precise_mbclen(p, pend, enc);
        if (!(0 < (n))) {
     if (p > prev) str_buf_cat(result, prev, p - prev);
            n = (enc)->min_enc_len;
            if (pend < p + n)
                n = (int)(pend - p);
            while (n--) {
                ruby_snprintf(buf, 13, "\\x%02X", *p & 0377);
                str_buf_cat(result, buf, strlen(buf));
                prev = ++p;
            }
     continue;
 }
        n = (n);
 c = ((enc))->mbc_to_code(((OnigUChar*)(p)),((OnigUChar*)(pend)),(enc));
 p += n;
 if ((asciicompat || unicode_p) &&
   (c == '"'|| c == '\\' ||
     (c == '#' &&
             p < pend &&
             (0 < (rb_enc_precise_mbclen(p,pend,enc))) &&
             (cc = rb_enc_codepoint_len((p),(pend),0,(enc)),
              (cc == '$' || cc == '@' || cc == '{'))))) {
     if (p - n > prev) str_buf_cat(result, prev, p - n - prev);
     str_buf_cat((result), ("\\"), strlen("\\"));
     if (asciicompat || enc == resenc) {
  prev = p - n;
  continue;
     }
 }
 switch (c) {
   case '\n': cc = 'n'; break;
   case '\r': cc = 'r'; break;
   case '\t': cc = 't'; break;
   case '\f': cc = 'f'; break;
   case '\013': cc = 'v'; break;
   case '\010': cc = 'b'; break;
   case '\007': cc = 'a'; break;
   case 033: cc = 'e'; break;
   default: cc = 0; break;
 }
 if (cc) {
     if (p - n > prev) str_buf_cat(result, prev, p - n - prev);
     buf[0] = '\\';
     buf[1] = (char)cc;
     str_buf_cat(result, buf, 2);
     prev = p;
     continue;
 }
 if ((enc == resenc && ((enc))->is_code_ctype((c),7,(enc))) ||
     (asciicompat && ((c) < 128) && rb_isprint(c))) {
     continue;
 }
 else {
     if (p - n > prev) str_buf_cat(result, prev, p - n - prev);
     rb_str_buf_cat_escaped_char(result, c, unicode_p);
     prev = p;
     continue;
 }
    }
    if (p > prev) str_buf_cat(result, prev, p - prev);
    str_buf_cat((result), ("\""), strlen("\""));

    (void)(((struct RBasic*)(result))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    return result;
}
VALUE
rb_str_dump(VALUE str)
{
    int encidx = rb_enc_get_index(str);
    rb_encoding *enc = rb_enc_from_index(encidx);
    long len;
    const char *p, *pend;
    char *q, *qend;
    VALUE result;
    int u8 = (encidx == RUBY_ENCINDEX_UTF_8);
    static const char nonascii_suffix[] = ".force_encoding(\"%s\")";

    len = 2;
    if (!rb_enc_asciicompat_inline(enc)) {
 len += strlen(nonascii_suffix) - (sizeof("%s") - 1);
 len += strlen(enc->name);
    }

    p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); pend = p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    while (p < pend) {
 int clen;
 unsigned char c = *p++;

 switch (c) {
   case '"': case '\\':
   case '\n': case '\r':
   case '\t': case '\f':
   case '\013': case '\010': case '\007': case '\033':
     clen = 2;
     break;

   case '#':
     clen = ((p) < (pend) && (*(p) == '$' || *(p) == '@' || *(p) == '{')) ? 2 : 1;
     break;

   default:
     if (rb_isprint(c)) {
  clen = 1;
     }
     else {
  if (u8 && c > 0x7F) {
      int n = rb_enc_precise_mbclen(p-1, pend, enc);
      if ((0 < (n))) {
   unsigned int cc = ((enc))->mbc_to_code(((OnigUChar*)(p-1)),((OnigUChar*)(pend)),(enc));
   if (cc <= 0xFFFF)
       clen = 6;
   else if (cc <= 0xFFFFF)
       clen = 9;
   else
       clen = 10;
   p += (n)-1;
   break;
      }
  }
  clen = 4;
     }
     break;
 }

 if (clen > 9223372036854775807L - len) {
     rb_raise(rb_eRuntimeError, "string size too big");
 }
 len += clen;
    }

    result = rb_str_new_with_class(str, 0, len);
    p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); pend = p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    q = (!(((struct RBasic*)(result))->flags & RSTRING_NOEMBED) ? ((struct RString*)(result))->as.ary : ((struct RString*)(result))->as.heap.ptr); qend = q + len + 1;

    *q++ = '"';
    while (p < pend) {
 unsigned char c = *p++;

 if (c == '"' || c == '\\') {
     *q++ = '\\';
     *q++ = c;
 }
 else if (c == '#') {
     if (((p) < (pend) && (*(p) == '$' || *(p) == '@' || *(p) == '{'))) *q++ = '\\';
     *q++ = '#';
 }
 else if (c == '\n') {
     *q++ = '\\';
     *q++ = 'n';
 }
 else if (c == '\r') {
     *q++ = '\\';
     *q++ = 'r';
 }
 else if (c == '\t') {
     *q++ = '\\';
     *q++ = 't';
 }
 else if (c == '\f') {
     *q++ = '\\';
     *q++ = 'f';
 }
 else if (c == '\013') {
     *q++ = '\\';
     *q++ = 'v';
 }
 else if (c == '\010') {
     *q++ = '\\';
     *q++ = 'b';
 }
 else if (c == '\007') {
     *q++ = '\\';
     *q++ = 'a';
 }
 else if (c == '\033') {
     *q++ = '\\';
     *q++ = 'e';
 }
 else if (rb_isprint(c)) {
     *q++ = c;
 }
 else {
     *q++ = '\\';
     if (u8) {
  int n = rb_enc_precise_mbclen(p-1, pend, enc) - 1;
  if ((0 < (n))) {
      int cc = ((enc))->mbc_to_code(((OnigUChar*)(p-1)),((OnigUChar*)(pend)),(enc));
      p += n;
      if (cc <= 0xFFFF)
   ruby_snprintf(q, qend-q, "u%04X", cc);
      else
   ruby_snprintf(q, qend-q, "u{%X}", cc);
      q += strlen(q);
      continue;
  }
     }
     ruby_snprintf(q, qend-q, "x%02X", c);
     q += 3;
 }
    }
    *q++ = '"';
    *q = '\0';
    if (!rb_enc_asciicompat_inline(enc)) {
 ruby_snprintf(q, qend-q, nonascii_suffix, enc->name);
 encidx = RUBY_ENCINDEX_ASCII;
    }
    (void)(((struct RBasic*)(result))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));

    rb_enc_associate_index(result, encidx);
    ( ((struct RBasic*)(result))->flags = (((struct RBasic*)(result))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_7BIT));
    return result;
}

static int
unescape_ascii(unsigned int c)
{
    switch (c) {
      case 'n':
 return '\n';
      case 'r':
 return '\r';
      case 't':
 return '\t';
      case 'f':
 return '\f';
      case 'v':
 return '\13';
      case 'b':
 return '\010';
      case 'a':
 return '\007';
      case 'e':
 return 033;
      default:
 __builtin_unreachable();
    }
}

static void
undump_after_backslash(VALUE undumped, const char **ss, const char *s_end, rb_encoding **penc, signed char *utf8, signed char *binary)
{
    const char *s = *ss;
    unsigned int c;
    int codelen;
    size_t hexlen;
    char buf[6];
    static rb_encoding *enc_utf8 = ((void*)0);

    switch (*s) {
      case '\\':
      case '"':
      case '#':
 rb_str_cat(undumped, s, 1);
 s++;
 break;
      case 'n':
      case 'r':
      case 't':
      case 'f':
      case 'v':
      case 'b':
      case 'a':
      case 'e':
 *buf = (char)unescape_ascii(*s);
 rb_str_cat(undumped, buf, 1);
 s++;
 break;
      case 'u':
 if (*binary) {
     rb_raise(rb_eRuntimeError, "hex escape and Unicode escape are mixed");
 }
 *utf8 = 1;
 if (++s >= s_end) {
     rb_raise(rb_eRuntimeError, "invalid Unicode escape");
 }
 if (enc_utf8 == ((void*)0)) enc_utf8 = rb_utf8_encoding();
 if (*penc != enc_utf8) {
     *penc = enc_utf8;
     rb_enc_associate(undumped, enc_utf8);
 }
 if (*s == '{') {
     s++;
     for (;;) {
  if (s >= s_end) {
      rb_raise(rb_eRuntimeError, "unterminated Unicode escape");
  }
  if (*s == '}') {
      s++;
      break;
  }
  if (rb_isspace(*s)) {
      s++;
      continue;
  }
  c = ((int)ruby_scan_hex((s),(s_end-s),(&hexlen)));
  if (hexlen == 0 || hexlen > 6) {
      rb_raise(rb_eRuntimeError, "invalid Unicode escape");
  }
  if (c > 0x10ffff) {
      rb_raise(rb_eRuntimeError, "invalid Unicode codepoint (too large)");
  }
  if (0xd800 <= c && c <= 0xdfff) {
      rb_raise(rb_eRuntimeError, "invalid Unicode codepoint");
  }
  codelen = ((*penc))->code_to_mbc((c),(OnigUChar*)(buf),(*penc));
  rb_str_cat(undumped, buf, codelen);
  s += hexlen;
     }
 }
 else {
     c = ((int)ruby_scan_hex((s),(4),(&hexlen)));
     if (hexlen != 4) {
  rb_raise(rb_eRuntimeError, "invalid Unicode escape");
     }
     if (0xd800 <= c && c <= 0xdfff) {
  rb_raise(rb_eRuntimeError, "invalid Unicode codepoint");
     }
     codelen = ((*penc))->code_to_mbc((c),(OnigUChar*)(buf),(*penc));
     rb_str_cat(undumped, buf, codelen);
     s += hexlen;
 }
 break;
      case 'x':
 if (*utf8) {
     rb_raise(rb_eRuntimeError, "hex escape and Unicode escape are mixed");
 }
 *binary = 1;
 if (++s >= s_end) {
     rb_raise(rb_eRuntimeError, "invalid hex escape");
 }
 *buf = ((int)ruby_scan_hex((s),(2),(&hexlen)));
 if (hexlen != 2) {
     rb_raise(rb_eRuntimeError, "invalid hex escape");
 }
 rb_str_cat(undumped, buf, 1);
 s += hexlen;
 break;
      default:
 rb_str_cat(undumped, s-1, 2);
 s++;
    }

    *ss = s;
}

static VALUE rb_str_is_ascii_only_p(VALUE str);
static VALUE
str_undump(VALUE str)
{
    const char *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    const char *s_end = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    rb_encoding *enc = rb_enc_get(str);
    VALUE undumped = rb_enc_str_new(s, 0L, enc);
    signed char utf8 = 0;
    signed char binary = 0;
    int w;

    rb_must_asciicompat(str);
    if (rb_str_is_ascii_only_p(str) == ((VALUE)RUBY_Qfalse)) {
 rb_raise(rb_eRuntimeError, "non-ASCII character detected");
    }
    if (!str_null_check(str, &w)) {
       rb_raise(rb_eRuntimeError, "string contains null byte");
    }
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < 2) goto invalid_format;
    if (*s != '"') goto invalid_format;


    s++;

    for (;;) {
 if (s >= s_end) {
     rb_raise(rb_eRuntimeError, "unterminated dumped string");
 }

 if (*s == '"') {

     s++;
     if (s == s_end) {

  break;
     }
     else {
  const char *encname;
  int encidx;
  ptrdiff_t size;

  if (utf8) {
      rb_raise(rb_eRuntimeError, "dumped string contained Unicode escape but used force_encoding");
  }

  size = (sizeof(".force_encoding(\"") - 1);
  if (s_end - s <= size) goto invalid_format;
  if (memcmp(s, ".force_encoding(\"", size) != 0) goto invalid_format;
  s += size;

  encname = s;
  s = memchr(s, '"', s_end-s);
  size = s - encname;
  if (!s) goto invalid_format;
  if (s_end - s != 2) goto invalid_format;
  if (s[0] != '"' || s[1] != ')') goto invalid_format;

  encidx = rb_enc_find_index2(encname, (long)size);
  if (encidx < 0) {
      rb_raise(rb_eRuntimeError, "dumped string has unknown encoding name");
  }
  rb_enc_associate_index(undumped, encidx);
     }
     break;
 }

 if (*s == '\\') {
     s++;
     if (s >= s_end) {
  rb_raise(rb_eRuntimeError, "invalid escape");
     }
     undump_after_backslash(undumped, &s, s_end, &enc, &utf8, &binary);
 }
 else {
     rb_str_cat(undumped, s++, 1);
 }
    }

    ( (((!(((VALUE)(undumped) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(undumped) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(undumped))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(undumped))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(undumped))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(undumped))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return undumped;
invalid_format:
    rb_raise(rb_eRuntimeError, "invalid dumped string; not wrapped with '\"' nor '\"...\".force_encoding(\"...\")' form");
}

static void
rb_str_check_dummy_enc(rb_encoding *enc)
{
    if (rb_enc_dummy_p(enc)) {
 rb_raise(rb_eEncCompatError, "incompatible encoding with this operation: %s",
   (enc)->name);
    }
}

static OnigCaseFoldType
check_case_options(int argc, VALUE *argv, OnigCaseFoldType flags)
{
    if (argc==0)
        return flags;
    if (argc>2)
        rb_raise(rb_eArgError, "too many options");
    if (argv[0]==sym_turkic) {
 flags |= (1<<20);
 if (argc==2) {
     if (argv[1]==sym_lithuanian)
  flags |= (1<<21);
     else
  rb_raise(rb_eArgError, "invalid second option");
 }
    }
    else if (argv[0]==sym_lithuanian) {
 flags |= (1<<21);
 if (argc==2) {
     if (argv[1]==sym_turkic)
         flags |= (1<<20);
     else
         rb_raise(rb_eArgError, "invalid second option");
 }
    }
    else if (argc>1)
 rb_raise(rb_eArgError, "too many options");
    else if (argv[0]==sym_ascii)
 flags |= (1<<22);
    else if (argv[0]==sym_fold) {
 if ((flags & ((1<<13)|(1<<14))) == (1<<14))
     flags ^= (1<<19)|(1<<14);
 else
     rb_raise(rb_eArgError, "option :fold only allowed for downcasing");
    }
    else
 rb_raise(rb_eArgError, "invalid option");
    return flags;
}







struct mapping_buffer;
typedef struct mapping_buffer {
    size_t capa;
    size_t used;
    struct mapping_buffer *next;
    OnigUChar space[1];
} mapping_buffer;

static VALUE
rb_str_casemap(VALUE source, OnigCaseFoldType *flags, rb_encoding *enc)
{
    VALUE target;

    OnigUChar *source_current, *source_end;
    int target_length = 0;
    mapping_buffer pre_buffer,
    *current_buffer = &pre_buffer;
    size_t buffer_count = 0;
    int buffer_length_or_invalid;

    if ((!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(source))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(source))->as.heap.len) == 0) return rb_str_dup(source);

    source_current = (OnigUChar*)(!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? ((struct RString*)(source))->as.ary : ((struct RString*)(source))->as.heap.ptr);
    source_end = (OnigUChar*)(!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? (((struct RString*)(source))->as.ary + (long)((((struct RBasic*)(source))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(source))->as.heap.ptr + ((struct RString*)(source))->as.heap.len));

    while (source_current < source_end) {

 size_t capa = (size_t)(source_end-source_current)*++buffer_count + 20;
 if (0) {
     fprintf(stderr, "Buffer allocation, capa is %zu\n", capa);
 }
 current_buffer->next = ruby_xmalloc(__builtin_offsetof() + capa);
 current_buffer = current_buffer->next;
 current_buffer->next = ((void*)0);
 current_buffer->capa = capa;
 buffer_length_or_invalid = enc->case_map(flags,
       (const OnigUChar**)&source_current, source_end,
       current_buffer->space,
       current_buffer->space+current_buffer->capa,
       enc);
 if (buffer_length_or_invalid < 0) {
     mapping_buffer *previous_buffer;

     current_buffer = pre_buffer.next;
     while (current_buffer) {
  previous_buffer = current_buffer;
  current_buffer = current_buffer->next;
  ruby_xfree(previous_buffer);
     }
     rb_raise(rb_eArgError, "input string invalid");
 }
 target_length += current_buffer->used = buffer_length_or_invalid;
    }
    if (0) {
 fprintf(stderr, "Buffer count is %zu\n", buffer_count);
    }

    if (buffer_count==1) {
 target = rb_str_new_with_class(source, (const char*)current_buffer->space, target_length);
 ruby_xfree(current_buffer);
    }
    else {
 char *target_current;
 mapping_buffer *previous_buffer;

 target = rb_str_new_with_class(source, 0, target_length);
 target_current = (!(((struct RBasic*)(target))->flags & RSTRING_NOEMBED) ? ((struct RString*)(target))->as.ary : ((struct RString*)(target))->as.heap.ptr);
 current_buffer=pre_buffer.next;
 while (current_buffer) {
     memcpy(target_current, current_buffer->space, current_buffer->used);
     target_current += current_buffer->used;
     previous_buffer = current_buffer;
     current_buffer = current_buffer->next;
     ruby_xfree(previous_buffer);
 }
    }


    (void)(((struct RBasic*)(target))->flags |= ((((struct RBasic*)(source))->flags&(RUBY_FL_TAINT))));
    str_enc_copy(target, source);


    return target;
}

static void
rb_str_ascii_casemap(VALUE source, OnigCaseFoldType *flags, rb_encoding *enc)
{
    OnigUChar *source_current, *source_end;
    long old_length = (!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(source))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(source))->as.heap.len);
    int length_or_invalid;

    if (old_length == 0) return;

    source_current = (OnigUChar*)(!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? ((struct RString*)(source))->as.ary : ((struct RString*)(source))->as.heap.ptr);
    source_end = (OnigUChar*)(!(((struct RBasic*)(source))->flags & RSTRING_NOEMBED) ? (((struct RString*)(source))->as.ary + (long)((((struct RBasic*)(source))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(source))->as.heap.ptr + ((struct RString*)(source))->as.heap.len));

    length_or_invalid = onigenc_ascii_only_case_map(flags,
          (const OnigUChar**)&source_current, source_end,
          source_current, source_end, enc);
    if (length_or_invalid < 0)
        rb_raise(rb_eArgError, "input string invalid");
    if (0 && length_or_invalid != old_length) {
 fprintf(stderr, "problem with rb_str_ascii_casemap; old_length=%ld, new_length=%d\n", old_length, length_or_invalid);
 rb_raise(rb_eArgError, "internal problem with rb_str_ascii_casemap; old_length=%ld, new_length=%d\n", old_length, length_or_invalid);
    }
}
static VALUE
rb_str_upcase_bang(int argc, VALUE *argv, VALUE str)
{
    rb_encoding *enc;
    OnigCaseFoldType flags = (1<<13);

    flags = check_case_options(argc, argv, flags);
    str_modify_keep_cr(str);
    enc = get_encoding(str);
    rb_str_check_dummy_enc(enc);
    if (((flags&(1<<22)) && (enc==rb_utf8_encoding() || (enc)->max_enc_len==1))
 || (!(flags&(1<<20)) && ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK)==RUBY_ENC_CODERANGE_7BIT)) {
        char *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), *send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));

 while (s < send) {
     unsigned int c = *(unsigned char*)s;

     if (((c) < 128) && 'a' <= c && c <= 'z') {
  *s = 'A' + (c - 'a');
  flags |= (1<<18);
     }
     s++;
 }
    }
    else if (flags&(1<<22))
        rb_str_ascii_casemap(str, &flags, enc);
    else
 str_shared_replace(str, rb_str_casemap(str, &flags, enc));

    if ((1<<18)&flags) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_upcase(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_upcase_bang(argc, argv, str);
    return str;
}
static VALUE
rb_str_downcase_bang(int argc, VALUE *argv, VALUE str)
{
    rb_encoding *enc;
    OnigCaseFoldType flags = (1<<14);

    flags = check_case_options(argc, argv, flags);
    str_modify_keep_cr(str);
    enc = get_encoding(str);
    rb_str_check_dummy_enc(enc);
    if (((flags&(1<<22)) && (enc==rb_utf8_encoding() || (enc)->max_enc_len==1))
 || (!(flags&(1<<20)) && ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK)==RUBY_ENC_CODERANGE_7BIT)) {
        char *s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), *send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));

 while (s < send) {
     unsigned int c = *(unsigned char*)s;

     if (((c) < 128) && 'A' <= c && c <= 'Z') {
  *s = 'a' + (c - 'A');
  flags |= (1<<18);
     }
     s++;
 }
    }
    else if (flags&(1<<22))
        rb_str_ascii_casemap(str, &flags, enc);
    else
 str_shared_replace(str, rb_str_casemap(str, &flags, enc));

    if ((1<<18)&flags) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_downcase(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_downcase_bang(argc, argv, str);
    return str;
}
static VALUE
rb_str_capitalize_bang(int argc, VALUE *argv, VALUE str)
{
    rb_encoding *enc;
    OnigCaseFoldType flags = (1<<13) | (1<<15);

    flags = check_case_options(argc, argv, flags);
    str_modify_keep_cr(str);
    enc = get_encoding(str);
    rb_str_check_dummy_enc(enc);
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0 || !(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) return ((VALUE)RUBY_Qnil);
    if (flags&(1<<22))
        rb_str_ascii_casemap(str, &flags, enc);
    else
 str_shared_replace(str, rb_str_casemap(str, &flags, enc));

    if ((1<<18)&flags) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_capitalize(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_capitalize_bang(argc, argv, str);
    return str;
}
static VALUE
rb_str_swapcase_bang(int argc, VALUE *argv, VALUE str)
{
    rb_encoding *enc;
    OnigCaseFoldType flags = (1<<13) | (1<<14);

    flags = check_case_options(argc, argv, flags);
    str_modify_keep_cr(str);
    enc = get_encoding(str);
    rb_str_check_dummy_enc(enc);
    if (flags&(1<<22))
        rb_str_ascii_casemap(str, &flags, enc);
    else
 str_shared_replace(str, rb_str_casemap(str, &flags, enc));

    if ((1<<18)&flags) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_swapcase(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_swapcase_bang(argc, argv, str);
    return str;
}

typedef unsigned char *USTR;

struct tr {
    int gen;
    unsigned int now, max;
    char *p, *pend;
};

static unsigned int
trnext(struct tr *t, rb_encoding *enc)
{
    int n;

    for (;;) {
 if (!t->gen) {
nextpart:
     if (t->p == t->pend) return -1;
     if (rb_enc_ascget(t->p, t->pend, &n, enc) == '\\' && t->p + n < t->pend) {
  t->p += n;
     }
     t->now = rb_enc_codepoint_len(t->p, t->pend, &n, enc);
     t->p += n;
     if (rb_enc_ascget(t->p, t->pend, &n, enc) == '-' && t->p + n < t->pend) {
  t->p += n;
  if (t->p < t->pend) {
      unsigned int c = rb_enc_codepoint_len(t->p, t->pend, &n, enc);
      t->p += n;
      if (t->now > c) {
   if (t->now < 0x80 && c < 0x80) {
       rb_raise(rb_eArgError,
         "invalid range \"%c-%c\" in string transliteration",
         t->now, c);
   }
   else {
       rb_raise(rb_eArgError, "invalid range in string transliteration");
   }
   continue;
      }
      t->gen = 1;
      t->max = c;
  }
     }
     return t->now;
 }
 else {
     while ((enc)->code_to_mbclen(++t->now,enc) <= 0) {
  if (t->now == t->max) {
      t->gen = 0;
      goto nextpart;
  }
     }
     if (t->now < t->max) {
  return t->now;
     }
     else {
  t->gen = 0;
  return t->max;
     }
 }
    }
}

static VALUE rb_str_delete_bang(int,VALUE*,VALUE);

static VALUE
tr_trans(VALUE str, VALUE src, VALUE repl, int sflag)
{
    const unsigned int errc = -1;
    unsigned int trans[256];
    rb_encoding *enc, *e1, *e2;
    struct tr trsrc, trrepl;
    int cflag = 0;
    unsigned int c, c0, last = 0;
    int modify = 0, i, l;
    char *s, *send;
    VALUE hash = 0;
    int singlebyte = single_byte_optimizable(str);
    int termlen;
    int cr;





    rb_string_value(&(src));
    rb_string_value(&(repl));
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0 || !(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) return ((VALUE)RUBY_Qnil);
    if ((!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len) == 0) {
 return rb_str_delete_bang(1, &src, str);
    }

    cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
    e1 = rb_enc_check(str, src);
    e2 = rb_enc_check(str, repl);
    if (e1 == e2) {
 enc = e1;
    }
    else {
 enc = rb_enc_check(src, repl);
    }
    trsrc.p = (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr); trsrc.pend = trsrc.p + (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len);
    if ((!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len) > 1 &&
 rb_enc_ascget(trsrc.p, trsrc.pend, &l, enc) == '^' &&
 trsrc.p + l < trsrc.pend) {
 cflag = 1;
 trsrc.p += l;
    }
    trrepl.p = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr);
    trrepl.pend = trrepl.p + (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len);
    trsrc.gen = trrepl.gen = 0;
    trsrc.now = trrepl.now = 0;
    trsrc.max = trrepl.max = 0;

    if (cflag) {
 for (i=0; i<256; i++) {
     trans[i] = 1;
 }
 while ((c = trnext(&trsrc, enc)) != errc) {
     if (c < 256) {
  trans[c] = errc;
     }
     else {
  if (!hash) hash = rb_hash_new();
  rb_hash_aset(hash, (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG), ((VALUE)RUBY_Qtrue));
     }
 }
 while ((c = trnext(&trrepl, enc)) != errc)
                                 ;
 last = trrepl.now;
 for (i=0; i<256; i++) {
     if (trans[i] != errc) {
  trans[i] = last;
     }
 }
    }
    else {
 unsigned int r;

 for (i=0; i<256; i++) {
     trans[i] = errc;
 }
 while ((c = trnext(&trsrc, enc)) != errc) {
     r = trnext(&trrepl, enc);
     if (r == errc) r = trrepl.now;
     if (c < 256) {
  trans[c] = r;
  if (rb_enc_codelen(r, enc) != 1) singlebyte = 0;
     }
     else {
  if (!hash) hash = rb_hash_new();
  rb_hash_aset(hash, (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG), (((VALUE)((unsigned int)(r)))<<1 | RUBY_FIXNUM_FLAG));
     }
 }
    }

    if (cr == RUBY_ENC_CODERANGE_VALID && rb_enc_asciicompat_inline(e1))
 cr = RUBY_ENC_CODERANGE_7BIT;
    str_modify_keep_cr(str);
    s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    termlen = (enc)->min_enc_len;
    if (sflag) {
 int clen, tlen;
 long offset, max = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 unsigned int save = -1;
 char *buf = ((char*)ruby_xmalloc2((size_t)(max + termlen),sizeof(char))), *t = buf;

 while (s < send) {
     int may_modify = 0;

     c0 = c = rb_enc_codepoint_len(s, send, &clen, e1);
     tlen = enc == e1 ? clen : rb_enc_codelen(c, enc);

     s += clen;
     if (c < 256) {
  c = trans[c];
     }
     else if (hash) {
  VALUE tmp = rb_hash_lookup(hash, (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
  if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
      if (cflag) c = last;
      else c = errc;
  }
  else if (cflag) c = errc;
  else c = rb_num2int_inline(tmp);
     }
     else {
  c = errc;
     }
     if (c != (unsigned int)-1) {
  if (save == c) {
      (void)((cr == RUBY_ENC_CODERANGE_7BIT && !rb_isascii(c)) ? (cr = RUBY_ENC_CODERANGE_VALID) : 0);
      continue;
  }
  save = c;
  tlen = rb_enc_codelen(c, enc);
  modify = 1;
     }
     else {
  save = -1;
  c = c0;
  if (enc != e1) may_modify = 1;
     }
     if ((offset = t - buf) + tlen > max) {
  max = offset + tlen + (send - s);
  ((buf)=(char*)ruby_xrealloc2((char*)(buf),(size_t)(max + termlen),sizeof(char)));
  t = buf + offset;
     }
     ((enc))->code_to_mbc((c),(OnigUChar*)(t),(enc));
     if (may_modify && memcmp(s, t, tlen) != 0) {
  modify = 1;
     }
     (void)((cr == RUBY_ENC_CODERANGE_7BIT && !rb_isascii(c)) ? (cr = RUBY_ENC_CODERANGE_VALID) : 0);
     t += tlen;
 }
 if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
     ruby_xfree((((struct RString*)(str))->as.heap.ptr));
 }
 do { char *const term_fill_ptr = (t); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 ((struct RString*)(str))->as.heap.ptr = buf;
 ((struct RString*)(str))->as.heap.len = t - buf;
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
 ((struct RString*)(str))->as.heap.aux.capa = max;
    }
    else if ((enc)->max_enc_len == 1 || (singlebyte && !hash)) {
 while (s < send) {
     c = (unsigned char)*s;
     if (trans[c] != errc) {
  if (!cflag) {
      c = trans[c];
      *s = c;
      modify = 1;
  }
  else {
      *s = last;
      modify = 1;
  }
     }
     (void)((cr == RUBY_ENC_CODERANGE_7BIT && !rb_isascii(c)) ? (cr = RUBY_ENC_CODERANGE_VALID) : 0);
     s++;
 }
    }
    else {
 int clen, tlen;
 long offset, max = (long)((send - s) * 1.2);
 char *buf = ((char*)ruby_xmalloc2((size_t)(max + termlen),sizeof(char))), *t = buf;

 while (s < send) {
     int may_modify = 0;
     c0 = c = rb_enc_codepoint_len(s, send, &clen, e1);
     tlen = enc == e1 ? clen : rb_enc_codelen(c, enc);

     if (c < 256) {
  c = trans[c];
     }
     else if (hash) {
  VALUE tmp = rb_hash_lookup(hash, (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
  if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
      if (cflag) c = last;
      else c = errc;
  }
  else if (cflag) c = errc;
  else c = rb_num2int_inline(tmp);
     }
     else {
  c = cflag ? last : errc;
     }
     if (c != errc) {
  tlen = rb_enc_codelen(c, enc);
  modify = 1;
     }
     else {
  c = c0;
  if (enc != e1) may_modify = 1;
     }
     if ((offset = t - buf) + tlen > max) {
  max = offset + tlen + (long)((send - s) * 1.2);
  ((buf)=(char*)ruby_xrealloc2((char*)(buf),(size_t)(max + termlen),sizeof(char)));
  t = buf + offset;
     }
     if (s != t) {
  ((enc))->code_to_mbc((c),(OnigUChar*)(t),(enc));
  if (may_modify && memcmp(s, t, tlen) != 0) {
      modify = 1;
  }
     }
     (void)((cr == RUBY_ENC_CODERANGE_7BIT && !rb_isascii(c)) ? (cr = RUBY_ENC_CODERANGE_VALID) : 0);
     s += clen;
     t += tlen;
 }
 if (!(!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) {
     ruby_xfree((((struct RString*)(str))->as.heap.ptr));
 }
 do { char *const term_fill_ptr = (t); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 ((struct RString*)(str))->as.heap.ptr = buf;
 ((struct RString*)(str))->as.heap.len = t - buf;
 do { ((!(((VALUE)((str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((str)))->flags & RUBY_T_MASK) != RUBY_T_NODE) ? (void)(((struct RBasic*)((str)))->flags |= (((VALUE)RUBY_FL_USER1))) : (void)0); do { long tmp_n = (0); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0);} while (0);
 ((struct RString*)(str))->as.heap.aux.capa = max;
    }

    if (modify) {
 if (cr != RUBY_ENC_CODERANGE_BROKEN)
     ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
 rb_enc_associate(str, enc);
 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_tr_bang(VALUE str, VALUE src, VALUE repl)
{
    return tr_trans(str, src, repl, 0);
}
static VALUE
rb_str_tr(VALUE str, VALUE src, VALUE repl)
{
    str = rb_str_dup(str);
    tr_trans(str, src, repl, 0);
    return str;
}


static void
tr_setup_table(VALUE str, char stable[257], int first,
        VALUE *tablep, VALUE *ctablep, rb_encoding *enc)
{
    const unsigned int errc = -1;
    char buf[256];
    struct tr tr;
    unsigned int c;
    VALUE table = 0, ptable = 0;
    int i, l, cflag = 0;

    tr.p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); tr.pend = tr.p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    tr.gen = tr.now = tr.max = 0;

    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 1 && rb_enc_ascget(tr.p, tr.pend, &l, enc) == '^') {
 cflag = 1;
 tr.p += l;
    }
    if (first) {
 for (i=0; i<256; i++) {
     stable[i] = 1;
 }
 stable[256] = cflag;
    }
    else if (stable[256] && !cflag) {
 stable[256] = 0;
    }
    for (i=0; i<256; i++) {
 buf[i] = cflag;
    }

    while ((c = trnext(&tr, enc)) != errc) {
 if (c < 256) {
     buf[c & 0xff] = !cflag;
 }
 else {
     VALUE key = (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG);

     if (!table && (first || *tablep || stable[256])) {
  if (cflag) {
      ptable = *ctablep;
      table = ptable ? ptable : rb_hash_new();
      *ctablep = table;
  }
  else {
      table = rb_hash_new();
      ptable = *tablep;
      *tablep = table;
  }
     }
     if (table && (!ptable || (cflag ^ !!((VALUE)(rb_hash_aref(ptable, key)) != ((VALUE)RUBY_Qnil))))) {
  rb_hash_aset(table, key, ((VALUE)RUBY_Qtrue));
     }
 }
    }
    for (i=0; i<256; i++) {
 stable[i] = stable[i] && buf[i];
    }
    if (!table && !cflag) {
 *tablep = 0;
    }
}


static int
tr_find(unsigned int c, const char table[257], VALUE del, VALUE nodel)
{
    if (c < 256) {
 return table[c] != 0;
    }
    else {
 VALUE v = (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG);

 if (del) {
     if (!!((VALUE)(rb_hash_lookup(del, v)) != ((VALUE)RUBY_Qnil)) &&
      (!nodel || !((VALUE)(rb_hash_lookup(nodel, v)) != ((VALUE)RUBY_Qnil)))) {
  return TRUE;
     }
 }
 else if (nodel && !!((VALUE)(rb_hash_lookup(nodel, v)) != ((VALUE)RUBY_Qnil))) {
     return FALSE;
 }
 return table[256] ? TRUE : FALSE;
    }
}
static VALUE
rb_str_delete_bang(int argc, VALUE *argv, VALUE str)
{
    char squeez[257];
    rb_encoding *enc = 0;
    char *s, *send, *t;
    VALUE del = 0, nodel = 0;
    int modify = 0;
    int i, ascompat, cr;

    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0 || !(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)) return ((VALUE)RUBY_Qnil);
    rb_check_arity(argc, 1, (-1));
    for (i=0; i<argc; i++) {
 VALUE s = argv[i];

 rb_string_value(&(s));
 enc = rb_enc_check(str, s);
 tr_setup_table(s, squeez, i==0, &del, &nodel, enc);
    }

    str_modify_keep_cr(str);
    ascompat = rb_enc_asciicompat_inline(enc);
    s = t = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    cr = ascompat ? RUBY_ENC_CODERANGE_7BIT : RUBY_ENC_CODERANGE_VALID;
    while (s < send) {
 unsigned int c;
 int clen;

 if (ascompat && (c = *(unsigned char*)s) < 0x80) {
     if (squeez[c]) {
  modify = 1;
     }
     else {
  if (t != s) *t = c;
  t++;
     }
     s++;
 }
 else {
     c = rb_enc_codepoint_len(s, send, &clen, enc);

     if (tr_find(c, squeez, del, nodel)) {
  modify = 1;
     }
     else {
  if (t != s) ((enc))->code_to_mbc((c),(OnigUChar*)(t),(enc));
  t += clen;
  if (cr == RUBY_ENC_CODERANGE_7BIT) cr = RUBY_ENC_CODERANGE_VALID;
     }
     s += clen;
 }
    }
    do { char *const term_fill_ptr = (t); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((t - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr))); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (t - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)); }} while (0);
    ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));

    if (modify) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_delete(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_delete_bang(argc, argv, str);
    return str;
}
static VALUE
rb_str_squeeze_bang(int argc, VALUE *argv, VALUE str)
{
    char squeez[257];
    rb_encoding *enc = 0;
    VALUE del = 0, nodel = 0;
    char *s, *send, *t;
    int i, modify = 0;
    int ascompat, singlebyte = single_byte_optimizable(str);
    unsigned int save;

    if (argc == 0) {
 enc = get_encoding(str);
    }
    else {
 for (i=0; i<argc; i++) {
     VALUE s = argv[i];

     rb_string_value(&(s));
     enc = rb_enc_check(str, s);
     if (singlebyte && !single_byte_optimizable(s))
  singlebyte = 0;
     tr_setup_table(s, squeez, i==0, &del, &nodel, enc);
 }
    }

    str_modify_keep_cr(str);
    s = t = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    if (!s || (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return ((VALUE)RUBY_Qnil);
    send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    save = -1;
    ascompat = rb_enc_asciicompat_inline(enc);

    if (singlebyte) {
        while (s < send) {
     unsigned int c = *(unsigned char*)s++;
     if (c != save || (argc > 0 && !squeez[c])) {
         *t++ = save = c;
     }
 }
    }
    else {
 while (s < send) {
     unsigned int c;
     int clen;

     if (ascompat && (c = *(unsigned char*)s) < 0x80) {
  if (c != save || (argc > 0 && !squeez[c])) {
      *t++ = save = c;
  }
  s++;
     }
     else {
  c = rb_enc_codepoint_len(s, send, &clen, enc);

  if (c != save || (argc > 0 && !tr_find(c, squeez, del, nodel))) {
      if (t != s) ((enc))->code_to_mbc((c),(OnigUChar*)(t),(enc));
      save = c;
      t += clen;
  }
  s += clen;
     }
 }
    }

    do { char *const term_fill_ptr = (t); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    if (t - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) != (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) {
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((t - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr))); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (t - (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)); }} while (0);
 modify = 1;
    }

    if (modify) return str;
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_squeeze(int argc, VALUE *argv, VALUE str)
{
    str = rb_str_dup(str);
    rb_str_squeeze_bang(argc, argv, str);
    return str;
}
static VALUE
rb_str_tr_s_bang(VALUE str, VALUE src, VALUE repl)
{
    return tr_trans(str, src, repl, 1);
}
static VALUE
rb_str_tr_s(VALUE str, VALUE src, VALUE repl)
{
    str = rb_str_dup(str);
    tr_trans(str, src, repl, 1);
    return str;
}
static VALUE
rb_str_count(int argc, VALUE *argv, VALUE str)
{
    char table[257];
    rb_encoding *enc = 0;
    VALUE del = 0, nodel = 0, tstr;
    char *s, *send;
    int i;
    int ascompat;

    rb_check_arity(argc, 1, (-1));

    tstr = argv[0];
    rb_string_value(&(tstr));
    enc = rb_enc_check(str, tstr);
    if (argc == 1) {
 const char *ptstr;
 if ((!(((struct RBasic*)(tstr))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tstr))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tstr))->as.heap.len) == 1 && rb_enc_asciicompat_inline(enc) &&
     (ptstr = (!(((struct RBasic*)(tstr))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tstr))->as.ary : ((struct RString*)(tstr))->as.heap.ptr),
      (enc)->is_allowed_reverse_match((const unsigned char *)ptstr,(const unsigned char *)ptstr+1,enc)) &&
     !(rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_BROKEN)) {
     int n = 0;
     int clen;
     unsigned char c = rb_enc_codepoint_len(ptstr, ptstr+1, &clen, enc);

     s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
     if (!s || (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
     send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
     while (s < send) {
  if (*(unsigned char*)s++ == c) n++;
     }
     return (((VALUE)((int)(n)))<<1 | RUBY_FIXNUM_FLAG);
 }
    }

    tr_setup_table(tstr, table, TRUE, &del, &nodel, enc);
    for (i=1; i<argc; i++) {
 tstr = argv[i];
 rb_string_value(&(tstr));
 enc = rb_enc_check(str, tstr);
 tr_setup_table(tstr, table, FALSE, &del, &nodel, enc);
    }

    s = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    if (!s || (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    send = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    ascompat = rb_enc_asciicompat_inline(enc);
    i = 0;
    while (s < send) {
 unsigned int c;

 if (ascompat && (c = *(unsigned char*)s) < 0x80) {
     if (table[c]) {
  i++;
     }
     s++;
 }
 else {
     int clen;
     c = rb_enc_codepoint_len(s, send, &clen, enc);
     if (tr_find(c, table, del, nodel)) {
  i++;
     }
     s += clen;
 }
    }

    return (((VALUE)((int)(i)))<<1 | RUBY_FIXNUM_FLAG);
}

static VALUE
rb_fs_check(VALUE val)
{
    if (!!((VALUE)(val) != ((VALUE)RUBY_Qnil)) && !( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(val))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((val) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((val) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((val) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((val) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(val)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(val))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_STRING))) && !( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(val))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((val) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((val) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((val) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((val) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(val)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(val))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
 val = rb_check_string_type(val);
 if (!((VALUE)(val) != ((VALUE)RUBY_Qnil))) return 0;
    }
    return val;
}

static const char isspacetable[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
};
static VALUE
rb_str_split_m(int argc, VALUE *argv, VALUE str)
{
    rb_encoding *enc;
    VALUE spat;
    VALUE limit;
    enum {awk, string, regexp} split_type;
    long beg, end, i = 0;
    int lim = 0;
    VALUE result, tmp;

    if (rb_scan_args(argc, argv, "02", &spat, &limit) == 2) {
 lim = rb_num2int_inline(limit);
 if (lim <= 0) limit = ((VALUE)RUBY_Qnil);
 else if (lim == 1) {
     if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0)
  return rb_ary_new_capa(0);
     return  ({ const VALUE args_to_new_ary[] = {rb_str_dup(str)}; if (__builtin_constant_p(1)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (1)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
 }
 i = 1;
    }

    enc = get_encoding(str);
    split_type = regexp;
    if (!!((VALUE)(spat) != ((VALUE)RUBY_Qnil))) {
 spat = get_pat_quoted(spat, 0);
    }
    else if (!((VALUE)(spat = rb_fs) != ((VALUE)RUBY_Qnil))) {
 split_type = awk;
    }
    else if (!(spat = rb_fs_check(spat))) {
 rb_raise(rb_eTypeError, "value of $; must be String or Regexp");
    }
    if (split_type != awk) {
 if ((int)(((struct RBasic*)(spat))->flags & RUBY_T_MASK) == RUBY_T_STRING) {
     rb_encoding *enc2 = get_encoding(spat);

     mustnot_broken(spat);
     split_type = string;
     if ((!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(spat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(spat))->as.heap.len) == 0) {

  spat = rb_reg_regcomp(spat);
  split_type = regexp;
     }
     else if (rb_enc_asciicompat_inline(enc2) == 1) {
  if ((!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(spat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(spat))->as.heap.len) == 1 && (!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? ((struct RString*)(spat))->as.ary : ((struct RString*)(spat))->as.heap.ptr)[0] == ' ') {
      split_type = awk;
  }
     }
     else {
  int l;
  if (rb_enc_ascget((!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? ((struct RString*)(spat))->as.ary : ((struct RString*)(spat))->as.heap.ptr), (!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? (((struct RString*)(spat))->as.ary + (long)((((struct RBasic*)(spat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(spat))->as.heap.ptr + ((struct RString*)(spat))->as.heap.len)), &l, enc2) == ' ' &&
      (!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(spat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(spat))->as.heap.len) == l) {
      split_type = awk;
  }
     }
 }
    }

    result = rb_ary_new();
    beg = 0;
    if (split_type == awk) {
 char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 char *eptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
 char *bptr = ptr;
 int skip = 1;
 unsigned int c;

 end = beg;
 if ((rb_enc_str_coderange(str) == RUBY_ENC_CODERANGE_7BIT)) {
     while (ptr < eptr) {
  c = (unsigned char)*ptr++;
  if (skip) {
      if (isspacetable[(unsigned char)(c)]) {
   beg = ptr - bptr;
      }
      else {
   end = ptr - bptr;
   skip = 0;
   if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) && lim <= i) break;
      }
  }
  else if (isspacetable[(unsigned char)(c)]) {
      rb_ary_push(result, rb_str_subseq(str, beg, end-beg));
      skip = 1;
      beg = ptr - bptr;
      if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil))) ++i;
  }
  else {
      end = ptr - bptr;
  }
     }
 }
 else {
     while (ptr < eptr) {
  int n;

  c = rb_enc_codepoint_len(ptr, eptr, &n, enc);
  ptr += n;
  if (skip) {
      if (rb_isspace(c)) {
   beg = ptr - bptr;
      }
      else {
   end = ptr - bptr;
   skip = 0;
   if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) && lim <= i) break;
      }
  }
  else if (rb_isspace(c)) {
      rb_ary_push(result, rb_str_subseq(str, beg, end-beg));
      skip = 1;
      beg = ptr - bptr;
      if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil))) ++i;
  }
  else {
      end = ptr - bptr;
  }
     }
 }
    }
    else if (split_type == string) {
 char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 char *str_start = ptr;
 char *substr_start = ptr;
 char *eptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
 char *sptr = (!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? ((struct RString*)(spat))->as.ary : ((struct RString*)(spat))->as.heap.ptr);
 long slen = (!(((struct RBasic*)(spat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(spat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(spat))->as.heap.len);

 mustnot_broken(str);
 enc = rb_enc_check(str, spat);
 while (ptr < eptr &&
        (end = rb_memsearch(sptr, slen, ptr, eptr - ptr, enc)) >= 0) {

     char *t = ((char *)onigenc_get_right_adjust_char_head((enc),(OnigUChar*)(ptr),(OnigUChar*)(ptr + end),(OnigUChar*)(eptr)));
     if (t != ptr + end) {
  ptr = t;
  continue;
     }
     rb_ary_push(result, rb_str_subseq(str, substr_start - str_start,
           (ptr+end) - substr_start));
     ptr += end + slen;
     substr_start = ptr;
     if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) && lim <= ++i) break;
 }
 beg = ptr - str_start;
    }
    else {
 char *ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 long start = beg;
 long idx;
 int last_null = 0;
 struct re_registers *regs;

 while ((end = rb_reg_search(spat, str, start, 0)) >= 0) {
     regs = (&((struct RMatch*)(rb_backref_get()))->rmatch->regs);
     if (start == end && (regs->beg[(0)]) == (regs->end[(0)])) {
  if (!ptr) {
      rb_ary_push(result, str_new_empty(str));
      break;
  }
  else if (last_null == 1) {
      rb_ary_push(result, rb_str_subseq(str, beg,
            rb_enc_fast_mbclen(ptr+beg,
          ptr+len,
          enc)));
      beg = start;
  }
  else {
                    if (start == len)
                        start++;
                    else
                        start += rb_enc_fast_mbclen(ptr+start,ptr+len,enc);
      last_null = 1;
      continue;
  }
     }
     else {
  rb_ary_push(result, rb_str_subseq(str, beg, end-beg));
  beg = start = (regs->end[(0)]);
     }
     last_null = 0;

     for (idx=1; idx < regs->num_regs; idx++) {
  if ((regs->beg[(idx)]) == -1) continue;
  if ((regs->beg[(idx)]) == (regs->end[(idx)]))
      tmp = str_new_empty(str);
  else
      tmp = rb_str_subseq(str, (regs->beg[(idx)]), (regs->end[(idx)])-(regs->beg[(idx)]));
  rb_ary_push(result, tmp);
     }
     if (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) && lim <= ++i) break;
 }
    }
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 0 && (!!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) || (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > beg || lim < 0)) {
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == beg)
     tmp = str_new_empty(str);
 else
     tmp = rb_str_subseq(str, beg, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-beg);
 rb_ary_push(result, tmp);
    }
    if (!((VALUE)(limit) != ((VALUE)RUBY_Qnil)) && lim == 0) {
 long len;
 while ((len = rb_array_len(result)) > 0 &&
        (tmp = (rb_array_const_ptr(result)[len-1]), (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len) == 0))
     rb_ary_pop(result);
    }

    return result;
}

VALUE
rb_str_split(VALUE str, const char *sep0)
{
    VALUE sep;

    rb_string_value(&(str));
    sep = rb_str_new_cstr(sep0);
    return rb_str_split_m(1, &sep, str);
}

static int
enumerator_wantarray(const char *method)
{
    if (rb_block_given_p()) {



 rb_warning("passing a block to String#%s is deprecated", method);
 return 0;

    }
    return 1;
}




static inline int
enumerator_element(VALUE ary, VALUE e)
{
    if (ary) {
 rb_ary_push(ary, e);
 return 0;
    }
    else {
 rb_yield(e);
 return 1;
    }
}



static const char *
chomp_newline(const char *p, const char *e, rb_encoding *enc)
{
    const char *prev = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(e),(OnigUChar*)(e)));
    if (((enc))->is_mbc_newline(((OnigUChar*)(prev)),((OnigUChar*)(e)),(enc))) {
 e = prev;
 prev = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(e),(OnigUChar*)(e)));
 if (prev && rb_enc_ascget(prev, e, ((void*)0), enc) == '\r')
     e = prev;
    }
    return e;
}

static VALUE
rb_str_enumerate_lines(int argc, VALUE *argv, VALUE str, VALUE ary)
{
    rb_encoding *enc;
    VALUE line, rs, orig = str, opts = ((VALUE)RUBY_Qnil), chomp = ((VALUE)RUBY_Qfalse);
    const char *ptr, *pend, *subptr, *subend, *rsptr, *hit, *adjusted;
    long pos, len, rslen;
    int rsnewline = 0;

    if (rb_scan_args(argc, argv, "01:", &rs, &opts) == 0)
 rs = rb_rs;
    if (!!((VALUE)(opts) != ((VALUE)RUBY_Qnil))) {
 static ID keywords[1];
 if (!keywords[0]) {
     keywords[0] = (__builtin_constant_p("chomp") ?  (rb_intern2(("chomp"), (long)strlen("chomp"))) : (rb_intern)("chomp"));
 }
 rb_get_kwargs(opts, keywords, 0, 1, &chomp);
 chomp = (chomp != ((VALUE)RUBY_Qundef) && !(((VALUE)(chomp) & (VALUE)~((VALUE)RUBY_Qnil)) == 0));
    }

    if (!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) {
 if (!enumerator_element(ary, str)) {
     return ary;
 }
 else {
     return orig;
 }
    }

    if (!(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) goto end;
    str = rb_str_new_frozen(str);
    ptr = subptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    pend = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    rb_string_value(&(rs));
    rslen = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len);

    if (rs == rb_default_rs)
 enc = rb_enc_get(str);
    else
 enc = rb_enc_check(str, rs);

    if (rslen == 0) {

 int n;
 const char *eol = ((void*)0);
 subend = subptr;
 while (subend < pend) {
     do {
  if (rb_enc_ascget(subend, pend, &n, enc) != '\r')
      n = 0;
  rslen = n + rb_enc_mbclen(subend + n, pend, enc);
  if (((enc))->is_mbc_newline(((OnigUChar*)(subend + n)),((OnigUChar*)(pend)),(enc))) {
      if (eol == subend) break;
      subend += rslen;
      if (subptr) eol = subend;
  }
  else {
      if (!subptr) subptr = subend;
      subend += rslen;
  }
  rslen = 0;
     } while (subend < pend);
     if (!subptr) break;
     line = rb_str_subseq(str, subptr - ptr,
     subend - subptr + (chomp ? 0 : rslen));
     if (enumerator_element(ary, line)) {
  str_mod_check(str, ptr, len);
     }
     subptr = eol = ((void*)0);
 }
 goto end;
    }
    else {
 rsptr = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr);
 if ((!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len) == (enc)->min_enc_len &&
     ((enc))->is_mbc_newline(((OnigUChar*)(rsptr)),((OnigUChar*)(rsptr + (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len))),(enc))) {
     rsnewline = 1;
 }
    }

    if ((rs == rb_default_rs) && !rb_enc_asciicompat_inline(enc)) {
 rs = rb_str_new(rsptr, rslen);
 rs = rb_str_encode(rs, rb_enc_from_encoding(enc), 0, ((VALUE)RUBY_Qnil));
 rsptr = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr);
 rslen = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len);
    }

    while (subptr < pend) {
 pos = rb_memsearch(rsptr, rslen, subptr, pend - subptr, enc);
 if (pos < 0) break;
 hit = subptr + pos;
 adjusted = ((char *)onigenc_get_right_adjust_char_head((enc),(OnigUChar*)(subptr),(OnigUChar*)(hit),(OnigUChar*)(pend)));
 if (hit != adjusted) {
     subptr = adjusted;
     continue;
 }
 subend = hit += rslen;
 if (chomp) {
     if (rsnewline) {
  subend = chomp_newline(subptr, subend, enc);
     }
     else {
  subend -= rslen;
     }
 }
 line = rb_str_subseq(str, subptr - ptr, subend - subptr);
 if (enumerator_element(ary, line)) {
     str_mod_check(str, ptr, len);
 }
 subptr = hit;
    }

    if (subptr != pend) {
 if (chomp) {
     if (rsnewline) {
  pend = chomp_newline(subptr, pend, enc);
     }
     else if (pend - subptr >= rslen &&
       memcmp(pend - rslen, rsptr, rslen) == 0) {
  pend -= rslen;
     }
 }
 line = rb_str_subseq(str, subptr - ptr, pend - subptr);
 enumerator_element(ary, line);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    }

  end:
    if (ary)
 return ary;
    else
 return orig;
}
static VALUE
rb_str_each_line(int argc, VALUE *argv, VALUE str)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (argc), (argv), (rb_enumerator_size_func *)((0))); } while (0);
    return rb_str_enumerate_lines(argc, argv, str, 0);
}
static VALUE
rb_str_lines(int argc, VALUE *argv, VALUE str)
{
    VALUE ary = (enumerator_wantarray("lines") ? rb_ary_new_capa(0) : 0);
    return rb_str_enumerate_lines(argc, argv, str, ary);
}

static VALUE
rb_str_each_byte_size(VALUE str, VALUE args, VALUE eobj)
{
    return (((VALUE)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)))<<1 | RUBY_FIXNUM_FLAG);
}

static VALUE
rb_str_enumerate_bytes(VALUE str, VALUE ary)
{
    long i;

    for (i=0; i<(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len); i++) {
 enumerator_element(ary, (((VALUE)((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[i] & 0xff))<<1 | RUBY_FIXNUM_FLAG));
    }
    if (ary)
 return ary;
    else
 return str;
}
static VALUE
rb_str_each_byte(VALUE str)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((rb_str_each_byte_size))); } while (0);
    return rb_str_enumerate_bytes(str, 0);
}
static VALUE
rb_str_bytes(VALUE str)
{
    VALUE ary = (enumerator_wantarray("bytes") ? rb_ary_new_capa((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)) : 0);
    return rb_str_enumerate_bytes(str, ary);
}

static VALUE
rb_str_each_char_size(VALUE str, VALUE args, VALUE eobj)
{
    return rb_str_length(str);
}

static VALUE
rb_str_enumerate_chars(VALUE str, VALUE ary)
{
    VALUE orig = str;
    long i, len, n;
    const char *ptr;
    rb_encoding *enc;

    str = rb_str_new_frozen(str);
    ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    enc = rb_enc_get(str);

    if (rb_enc_coderange_clean_p(((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK))) {
 for (i = 0; i < len; i += n) {
     n = rb_enc_fast_mbclen(ptr + i, ptr + len, enc);
     enumerator_element(ary, rb_str_subseq(str, i, n));
 }
    }
    else {
 for (i = 0; i < len; i += n) {
     n = rb_enc_mbclen(ptr + i, ptr + len, enc);
     enumerator_element(ary, rb_str_subseq(str, i, n));
 }
    }
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    if (ary)
 return ary;
    else
 return orig;
}
static VALUE
rb_str_each_char(VALUE str)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((rb_str_each_char_size))); } while (0);
    return rb_str_enumerate_chars(str, 0);
}
static VALUE
rb_str_chars(VALUE str)
{
    VALUE ary = (enumerator_wantarray("chars") ? rb_ary_new_capa(rb_str_strlen(str)) : 0);
    return rb_str_enumerate_chars(str, ary);
}

static VALUE
rb_str_enumerate_codepoints(VALUE str, VALUE ary)
{
    VALUE orig = str;
    int n;
    unsigned int c;
    const char *ptr, *end;
    rb_encoding *enc;

    if (single_byte_optimizable(str))
 return rb_str_enumerate_bytes(str, ary);

    str = rb_str_new_frozen(str);
    ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    end = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
    enc = get_encoding(str);

    while (ptr < end) {
 c = rb_enc_codepoint_len(ptr, end, &n, enc);
 enumerator_element(ary, (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG));
 ptr += n;
    }
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    if (ary)
 return ary;
    else
 return orig;
}
static VALUE
rb_str_each_codepoint(VALUE str)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((rb_str_each_char_size))); } while (0);
    return rb_str_enumerate_codepoints(str, 0);
}
static VALUE
rb_str_codepoints(VALUE str)
{
    VALUE ary = (enumerator_wantarray("codepoints") ? rb_ary_new_capa(rb_str_strlen(str)) : 0);
    return rb_str_enumerate_codepoints(str, ary);
}

static regex_t *
get_reg_grapheme_cluster(rb_encoding *enc)
{
    int encidx = rb_enc_to_index(enc);
    regex_t *reg_grapheme_cluster = ((void*)0);
    static regex_t *reg_grapheme_cluster_utf8 = ((void*)0);


    if (encidx == RUBY_ENCINDEX_UTF_8 && reg_grapheme_cluster_utf8) {
 reg_grapheme_cluster = reg_grapheme_cluster_utf8;
    }
    if (!reg_grapheme_cluster) {
 const OnigUChar source[] = "\\X";
 int r = onig_new(&reg_grapheme_cluster, source, source + sizeof(source) - 1,
    0U, enc, OnigDefaultSyntax, ((void*)0));
 if (r) {
     rb_bug("cannot compile grapheme cluster regexp");
 }
 if (encidx == RUBY_ENCINDEX_UTF_8) {
     reg_grapheme_cluster_utf8 = reg_grapheme_cluster;
 }
    }
    return reg_grapheme_cluster;
}

static VALUE
rb_str_each_grapheme_cluster_size(VALUE str, VALUE args, VALUE eobj)
{
    size_t grapheme_cluster_count = 0;
    regex_t *reg_grapheme_cluster = ((void*)0);
    rb_encoding *enc = rb_enc_from_index(((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)));
    const char *ptr, *end;

    if (!rb_enc_unicode_p(enc) || single_byte_optimizable(str)) {
 return rb_str_length(str);
    }

    reg_grapheme_cluster = get_reg_grapheme_cluster(enc);
    ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    end = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));

    while (ptr < end) {
 OnigPosition len = onig_match(reg_grapheme_cluster,
          (const OnigUChar *)ptr, (const OnigUChar *)end,
          (const OnigUChar *)ptr, ((void*)0), 0);
 if (len <= 0) break;
 grapheme_cluster_count++;
 ptr += len;
    }

    return rb_ulong2num_inline(grapheme_cluster_count);
}

static VALUE
rb_str_enumerate_grapheme_clusters(VALUE str, VALUE ary)
{
    VALUE orig = str;
    regex_t *reg_grapheme_cluster = ((void*)0);
    rb_encoding *enc = rb_enc_from_index(((int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) != RUBY_ENCODING_INLINE_MAX ? (int)((((struct RBasic*)(str))->flags & RUBY_ENCODING_MASK)>>RUBY_ENCODING_SHIFT) : rb_enc_get_index(str)));
    const char *ptr, *end;

    if (!rb_enc_unicode_p(enc) || single_byte_optimizable(str)) {
 return rb_str_enumerate_chars(str, ary);
    }

    if (!ary) str = rb_str_new_frozen(str);
    reg_grapheme_cluster = get_reg_grapheme_cluster(enc);
    ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    end = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));

    while (ptr < end) {
 OnigPosition len = onig_match(reg_grapheme_cluster,
          (const OnigUChar *)ptr, (const OnigUChar *)end,
          (const OnigUChar *)ptr, ((void*)0), 0);
 if (len <= 0) break;
 enumerator_element(ary, rb_enc_str_new(ptr, len, enc));
 ptr += len;
    }
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    if (ary)
 return ary;
    else
 return orig;
}
static VALUE
rb_str_each_grapheme_cluster(VALUE str)
{
    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((str), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((rb_str_each_grapheme_cluster_size))); } while (0);
    return rb_str_enumerate_grapheme_clusters(str, 0);
}
static VALUE
rb_str_grapheme_clusters(VALUE str)
{
    VALUE ary = (enumerator_wantarray("grapheme_clusters") ? rb_ary_new_capa(rb_str_strlen(str)) : 0);
    return rb_str_enumerate_grapheme_clusters(str, ary);
}

static long
chopped_length(VALUE str)
{
    rb_encoding *enc = get_encoding(str);
    const char *p, *p2, *beg, *end;

    beg = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    end = beg + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (beg > end) return 0;
    p = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(beg),(OnigUChar*)(end),(OnigUChar*)(end)));
    if (!p) return 0;
    if (p > beg && rb_enc_ascget(p, end, 0, enc) == '\n') {
 p2 = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(beg),(OnigUChar*)(p),(OnigUChar*)(end)));
 if (p2 && rb_enc_ascget(p2, end, 0, enc) == '\r') p = p2;
    }
    return p - beg;
}
static VALUE
rb_str_chop_bang(VALUE str)
{
    str_modify_keep_cr(str);
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 0) {
 long len;
 len = chopped_length(str);
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
 do { char *const term_fill_ptr = (&(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[len]); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
 if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) != RUBY_ENC_CODERANGE_7BIT) {
     ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
 }
 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_chop(VALUE str)
{
    return rb_str_subseq(str, 0, chopped_length(str));
}


static long
chompped_length(VALUE str, VALUE rs)
{
    rb_encoding *enc;
    int newline;
    char *pp, *e, *rsptr;
    long rslen;
    char *const p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    if (len == 0) return 0;
    e = p + len;
    if (rs == rb_default_rs) {
      smart_chomp:
 enc = rb_enc_get(str);
 if ((enc)->min_enc_len > 1) {
     pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(e-(enc)->min_enc_len),(OnigUChar*)(e)));
     if (((enc))->is_mbc_newline(((OnigUChar*)(pp)),((OnigUChar*)(e)),(enc))) {
  e = pp;
     }
     pp = e - (enc)->min_enc_len;
     if (pp >= p) {
  pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(pp),(OnigUChar*)(e)));
  if (rb_enc_ascget(pp, e, 0, enc) == '\r') {
      e = pp;
  }
     }
 }
 else {
     switch (*(e-1)) {
       case '\n':
  if (--e > p && *(e-1) == '\r') {
      --e;
  }
  break;
       case '\r':
  --e;
  break;
     }
 }
 return e - p;
    }

    enc = rb_enc_get(str);
    (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((rsptr) = ((struct RString*)(rs))->as.ary, (rslen) = (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((rsptr) = ((struct RString*)(rs))->as.heap.ptr, (rslen) = ((struct RString*)(rs))->as.heap.len));
    if (rslen == 0) {
 if ((enc)->min_enc_len > 1) {
     while (e > p) {
  pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(e-(enc)->min_enc_len),(OnigUChar*)(e)));
  if (!((enc))->is_mbc_newline(((OnigUChar*)(pp)),((OnigUChar*)(e)),(enc))) break;
  e = pp;
  pp -= (enc)->min_enc_len;
  if (pp >= p) {
      pp = ((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(pp),(OnigUChar*)(e)));
      if (rb_enc_ascget(pp, e, 0, enc) == '\r') {
   e = pp;
      }
  }
     }
 }
 else {
     while (e > p && *(e-1) == '\n') {
  --e;
  if (e > p && *(e-1) == '\r')
      --e;
     }
 }
 return e - p;
    }
    if (rslen > len) return len;

    enc = rb_enc_get(rs);
    newline = rsptr[rslen-1];
    if (rslen == (enc)->min_enc_len) {
 if (rslen == 1) {
     if (newline == '\n')
  goto smart_chomp;
 }
 else {
     if (((enc))->is_mbc_newline(((OnigUChar*)(rsptr)),((OnigUChar*)(rsptr+rslen)),(enc)))
  goto smart_chomp;
 }
    }

    enc = rb_enc_check(str, rs);
    if ((rb_enc_str_coderange(rs) == RUBY_ENC_CODERANGE_BROKEN)) {
 return len;
    }
    pp = e - rslen;
    if (p[len-1] == newline &&
 (rslen <= 1 ||
  memcmp(rsptr, pp, rslen) == 0)) {
 if (((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(pp),(OnigUChar*)(e))) == pp)
     return len - rslen;
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(rs); ; rb_gc_guarded_ptr; }));
    }
    return len;
}






static VALUE
chomp_rs(int argc, const VALUE *argv)
{
    rb_check_arity(argc, 0, 1);
    if (argc > 0) {
 VALUE rs = argv[0];
 if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) rb_string_value(&(rs));
 return rs;
    }
    else {
 return rb_rs;
    }
}

VALUE
rb_str_chomp_string(VALUE str, VALUE rs)
{
    long olen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    long len = chompped_length(str, rs);
    if (len >= olen) return ((VALUE)RUBY_Qnil);
    str_modify_keep_cr(str);
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
    do { char *const term_fill_ptr = (&(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[len]); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) != RUBY_ENC_CODERANGE_7BIT) {
 ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    }
    return str;
}
static VALUE
rb_str_chomp_bang(int argc, VALUE *argv, VALUE str)
{
    VALUE rs;
    str_modifiable(str);
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) == 0) return ((VALUE)RUBY_Qnil);
    rs = chomp_rs(argc, argv);
    if (!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);
    return rb_str_chomp_string(str, rs);
}
static VALUE
rb_str_chomp(int argc, VALUE *argv, VALUE str)
{
    VALUE rs = chomp_rs(argc, argv);
    if (!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) return rb_str_dup(str);
    return rb_str_subseq(str, 0, chompped_length(str, rs));
}

static long
lstrip_offset(VALUE str, const char *s, const char *e, rb_encoding *enc)
{
    const char *const start = s;

    if (!s || s >= e) return 0;


    if (single_byte_optimizable(str)) {
 while (s < e && isspacetable[(unsigned char)(*s)]) s++;
    }
    else {
 while (s < e) {
     int n;
     unsigned int cc = rb_enc_codepoint_len(s, e, &n, enc);

     if (!rb_isspace(cc)) break;
     s += n;
 }
    }
    return s - start;
}
static VALUE
rb_str_lstrip_bang(VALUE str)
{
    rb_encoding *enc;
    char *start, *s;
    long olen, loffset;

    str_modify_keep_cr(str);
    enc = get_encoding(str);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    loffset = lstrip_offset(str, start, start+olen, enc);
    if (loffset > 0) {
 long len = olen-loffset;
 s = start + loffset;
 memmove(start, s, len);
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);

 do { char *const term_fill_ptr = (start+len); const int term_fill_len = ((enc)->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);

 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_lstrip(VALUE str)
{
    char *start;
    long len, loffset;
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (len) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (len) = ((struct RString*)(str))->as.heap.len));
    loffset = lstrip_offset(str, start, start+len, get_encoding(str));
    if (loffset <= 0) return rb_str_dup(str);
    return rb_str_subseq(str, loffset, len - loffset);
}

static long
rstrip_offset(VALUE str, const char *s, const char *e, rb_encoding *enc)
{
    const char *t;

    rb_str_check_dummy_enc(enc);
    if (!s || s >= e) return 0;
    t = e;


    if (single_byte_optimizable(str)) {
 unsigned char c;
 while (s < t && ((c = *(t-1)) == '\0' || isspacetable[(unsigned char)(c)])) t--;
    }
    else {
 char *tp;

        while ((tp = ((char *)onigenc_get_prev_char_head((enc),(OnigUChar*)(s),(OnigUChar*)(t),(OnigUChar*)(e)))) != ((void*)0)) {
     unsigned int c = rb_enc_codepoint_len((tp),(e),0,(enc));
     if (c && !rb_isspace(c)) break;
     t = tp;
 }
    }
    return e - t;
}
static VALUE
rb_str_rstrip_bang(VALUE str)
{
    rb_encoding *enc;
    char *start;
    long olen, roffset;

    str_modify_keep_cr(str);
    enc = get_encoding(str);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    roffset = rstrip_offset(str, start, start+olen, enc);
    if (roffset > 0) {
 long len = olen - roffset;

 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);

 do { char *const term_fill_ptr = (start+len); const int term_fill_len = ((enc)->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);

 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_rstrip(VALUE str)
{
    rb_encoding *enc;
    char *start;
    long olen, roffset;

    enc = get_encoding(str);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    roffset = rstrip_offset(str, start, start+olen, enc);

    if (roffset <= 0) return rb_str_dup(str);
    return rb_str_subseq(str, 0, olen-roffset);
}
static VALUE
rb_str_strip_bang(VALUE str)
{
    char *start;
    long olen, loffset, roffset;
    rb_encoding *enc;

    str_modify_keep_cr(str);
    enc = get_encoding(str);
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    loffset = lstrip_offset(str, start, start+olen, enc);
    roffset = rstrip_offset(str, start+loffset, start+olen, enc);

    if (loffset > 0 || roffset > 0) {
 long len = olen-roffset;
 if (loffset > 0) {
     len -= loffset;
     memmove(start, start + loffset, len);
 }
 do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);

 do { char *const term_fill_ptr = (start+len); const int term_fill_len = ((enc)->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);

 return str;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_strip(VALUE str)
{
    char *start;
    long olen, loffset, roffset;
    rb_encoding *enc = get_encoding(str);

    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((start) = ((struct RString*)(str))->as.ary, (olen) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((start) = ((struct RString*)(str))->as.heap.ptr, (olen) = ((struct RString*)(str))->as.heap.len));
    loffset = lstrip_offset(str, start, start+olen, enc);
    roffset = rstrip_offset(str, start+loffset, start+olen, enc);

    if (loffset <= 0 && roffset <= 0) return rb_str_dup(str);
    return rb_str_subseq(str, loffset, olen-loffset-roffset);
}

static VALUE
scan_once(VALUE str, VALUE pat, long *start, int set_backref_str)
{
    VALUE result, match;
    struct re_registers *regs;
    int i;
    long end, pos = rb_pat_search(pat, str, *start, set_backref_str);
    if (pos >= 0) {
 if ((int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) == RUBY_T_STRING) {
     regs = ((void*)0);
     end = pos + (!(((struct RBasic*)(pat))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(pat))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(pat))->as.heap.len);
 }
 else {
     match = rb_backref_get();
     regs = (&((struct RMatch*)(match))->rmatch->regs);
     end = (regs->end[(0)]);
 }
 if (pos == end) {
     rb_encoding *enc = get_encoding(str);



     if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > end)
  *start = end + rb_enc_fast_mbclen((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + end,
        (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len)), enc);
     else
  *start = end + 1;
 }
 else {
     *start = end;
 }
 if (!regs || regs->num_regs == 1) {
     result = rb_str_subseq(str, pos, end - pos);
     ( (((!(((VALUE)(result) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(result) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(result))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(result))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(result))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(result))->flags |= ((((struct RBasic*)(pat))->flags&(RUBY_FL_TAINT)))) : (void)0);
     return result;
 }
 result = rb_ary_new_capa(regs->num_regs);
 for (i=1; i < regs->num_regs; i++) {
     VALUE s = ((VALUE)RUBY_Qnil);
     if ((regs->beg[(i)]) >= 0) {
  s = rb_str_subseq(str, (regs->beg[(i)]), (regs->end[(i)])-(regs->beg[(i)]));
  ( (((!(((VALUE)(s) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(s) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(s))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(pat) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(pat) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(pat))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(s))->flags |= ((((struct RBasic*)(pat))->flags&(RUBY_FL_TAINT)))) : (void)0);
     }
     rb_ary_push(result, s);
 }

 return result;
    }
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_str_scan(VALUE str, VALUE pat)
{
    VALUE result;
    long start = 0;
    long last = -1, prev = 0;
    char *p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr); long len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);

    pat = get_pat_quoted(pat, 1);
    mustnot_broken(str);
    if (!rb_block_given_p()) {
 VALUE ary = rb_ary_new();

 while (!!((VALUE)(result = scan_once(str, pat, &start, 0)) != ((VALUE)RUBY_Qnil))) {
     last = prev;
     prev = start;
     rb_ary_push(ary, result);
 }
 if (last >= 0) rb_pat_search(pat, str, last, 1);
 else rb_backref_set(((VALUE)RUBY_Qnil));
 return ary;
    }

    while (!!((VALUE)(result = scan_once(str, pat, &start, 1)) != ((VALUE)RUBY_Qnil))) {
 last = prev;
 prev = start;
 rb_yield(result);
 str_mod_check(str, p, len);
    }
    if (last >= 0) rb_pat_search(pat, str, last, 1);
    return str;
}
static VALUE
rb_str_hex(VALUE str)
{
    return rb_str_to_inum(str, 16, FALSE);
}
static VALUE
rb_str_oct(VALUE str)
{
    return rb_str_to_inum(str, -8, FALSE);
}
static VALUE
rb_str_crypt(VALUE str, VALUE salt)
{

    VALUE databuf;
    struct crypt_data *data;





    VALUE result;
    const char *s, *saltp;
    char *res;




    rb_string_value(&(salt));
    mustnot_wchar(str);
    mustnot_wchar(salt);
    if ((!(((struct RBasic*)(salt))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(salt))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(salt))->as.heap.len) < 2) {
      short_salt:
 rb_raise(rb_eArgError, "salt too short (need >=2 bytes)");
    }

    s = rb_string_value_cstr(&(str));
    saltp = (!(((struct RBasic*)(salt))->flags & RSTRING_NOEMBED) ? ((struct RString*)(salt))->as.ary : ((struct RString*)(salt))->as.heap.ptr);
    if (!saltp[0] || !saltp[1]) goto short_salt;
    data = ((sizeof(struct crypt_data)) < 1024 ? ((* ({ volatile VALUE *rb_gc_guarded_ptr = &(databuf); ; rb_gc_guarded_ptr; })) = 0, __builtin_alloca (sizeof(struct crypt_data))) : rb_alloc_tmp_buffer(&(databuf), (sizeof(struct crypt_data))));

    data->initialized = 0;

    res = crypt_r(s, saltp, data);



    if (!res) {
 int err = (*__errno_location ());
 rb_free_tmp_buffer(&(databuf));
 rb_syserr_fail(err, "crypt");
    }
    result = rb_str_new_cstr(res);
    rb_free_tmp_buffer(&(databuf));
    (void)(((struct RBasic*)(result))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT)) | (((struct RBasic*)(salt))->flags&(RUBY_FL_TAINT))));
    return result;
}
VALUE
rb_str_ord(VALUE s)
{
    unsigned int c;

    c = rb_enc_codepoint_len(((!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr)),((!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (((struct RString*)(s))->as.ary + (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(s))->as.heap.ptr + ((struct RString*)(s))->as.heap.len))),0,(get_encoding(s)));
    return (((VALUE)((unsigned int)(c)))<<1 | RUBY_FIXNUM_FLAG);
}
static VALUE
rb_str_sum(int argc, VALUE *argv, VALUE str)
{
    VALUE vbits;
    int bits;
    char *ptr, *p, *pend;
    long len;
    VALUE sum = (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
    unsigned long sum0 = 0;

    if (argc == 0) {
 bits = 16;
    }
    else {
 rb_scan_args(argc, argv, "01", &vbits);
 bits = rb_num2int_inline(vbits);
        if (bits < 0)
            bits = 0;
    }
    ptr = p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    pend = p + len;

    while (p < pend) {
        if ((9223372036854775807L>>1) - (127*2 +1) < sum0) {
            sum = rb_funcall(sum, '+', 1, (((VALUE)(sum0))<<1 | RUBY_FIXNUM_FLAG));
            str_mod_check(str, ptr, len);
            sum0 = 0;
        }
        sum0 += (unsigned char)*p;
        p++;
    }

    if (bits == 0) {
        if (sum0) {
            sum = rb_funcall(sum, '+', 1, (((VALUE)(sum0))<<1 | RUBY_FIXNUM_FLAG));
        }
    }
    else {
        if (sum == (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG)) {
            if (bits < (int)sizeof(long)*8) {
                sum0 &= (((unsigned long)1)<<bits)-1;
            }
            sum = (((VALUE)(sum0))<<1 | RUBY_FIXNUM_FLAG);
        }
        else {
            VALUE mod;

            if (sum0) {
                sum = rb_funcall(sum, '+', 1, (((VALUE)(sum0))<<1 | RUBY_FIXNUM_FLAG));
            }

            mod = rb_funcall((((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG), idLTLT, 1, (((VALUE)(bits))<<1 | RUBY_FIXNUM_FLAG));
            mod = rb_funcall(mod, '-', 1, (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
            sum = rb_funcall(sum, '&', 1, mod);
        }
    }
    return sum;
}

static VALUE
rb_str_justify(int argc, VALUE *argv, VALUE str, char jflag)
{
    rb_encoding *enc;
    VALUE w;
    long width, len, flen = 1, fclen = 1;
    VALUE res;
    char *p;
    const char *f = " ";
    long n, size, llen, rlen, llen2 = 0, rlen2 = 0;
    VALUE pad;
    int singlebyte = 1, cr;
    int termlen;

    rb_scan_args(argc, argv, "11", &w, &pad);
    enc = get_encoding(str);
    termlen = (enc)->min_enc_len;
    width = rb_num2long_inline(w);
    if (argc == 2) {
 rb_string_value(&(pad));
 enc = rb_enc_check(str, pad);
 f = (!(((struct RBasic*)(pad))->flags & RSTRING_NOEMBED) ? ((struct RString*)(pad))->as.ary : ((struct RString*)(pad))->as.heap.ptr);
 flen = (!(((struct RBasic*)(pad))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(pad))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(pad))->as.heap.len);
 fclen = str_strlen(pad, enc);
 singlebyte = single_byte_optimizable(pad);
 if (flen == 0 || fclen == 0) {
     rb_raise(rb_eArgError, "zero width padding");
 }
    }
    len = str_strlen(str, enc);
    if (width < 0 || len >= width) return rb_str_dup(str);
    n = width - len;
    llen = (jflag == 'l') ? 0 : ((jflag == 'r') ? n : n/2);
    rlen = n - llen;
    cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
    if (flen > 1) {
       llen2 = str_offset(f, f + flen, llen % fclen, enc, singlebyte);
       rlen2 = str_offset(f, f + flen, rlen % fclen, enc, singlebyte);
    }
    size = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if ((len = llen / fclen + rlen / fclen) >= 9223372036854775807L / flen ||
       (len *= flen) >= 9223372036854775807L - llen2 - rlen2 ||
       (len += llen2 + rlen2) >= 9223372036854775807L - size) {
       rb_raise(rb_eArgError, "argument too big");
    }
    len += size;
    res = str_new0(rb_obj_class(str), 0, len, termlen);
    p = (!(((struct RBasic*)(res))->flags & RSTRING_NOEMBED) ? ((struct RString*)(res))->as.ary : ((struct RString*)(res))->as.heap.ptr);
    if (flen <= 1) {
       memset(p, *f, llen);
       p += llen;
    }
    else {
       while (llen >= fclen) {
     memcpy(p,f,flen);
     p += flen;
     llen -= fclen;
 }
       if (llen > 0) {
           memcpy(p, f, llen2);
           p += llen2;
 }
    }
    memcpy(p, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), size);
    p += size;
    if (flen <= 1) {
       memset(p, *f, rlen);
       p += rlen;
    }
    else {
       while (rlen >= fclen) {
     memcpy(p,f,flen);
     p += flen;
     rlen -= fclen;
 }
       if (rlen > 0) {
           memcpy(p, f, rlen2);
           p += rlen2;
 }
    }
    do { char *const term_fill_ptr = (p); const int term_fill_len = (termlen); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    do { if ((!(((struct RBasic*)((res)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((p-(!(((struct RBasic*)(res))->flags & RSTRING_NOEMBED) ? ((struct RString*)(res))->as.ary : ((struct RString*)(res))->as.heap.ptr))); ((struct RBasic*)((res)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((res)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(res))->as.heap.len = (p-(!(((struct RBasic*)(res))->flags & RSTRING_NOEMBED) ? ((struct RString*)(res))->as.ary : ((struct RString*)(res))->as.heap.ptr)); }} while (0);
    (void)(((struct RBasic*)(res))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    if (!!((VALUE)(pad) != ((VALUE)RUBY_Qnil))) (void)(((struct RBasic*)(res))->flags |= ((((struct RBasic*)(pad))->flags&(RUBY_FL_TAINT))));
    rb_enc_associate(res, enc);
    if (argc == 2)
 cr = ((cr) == RUBY_ENC_CODERANGE_7BIT ? (((int)((struct RBasic*)(pad))->flags & RUBY_ENC_CODERANGE_MASK)) : (cr) != RUBY_ENC_CODERANGE_VALID ? RUBY_ENC_CODERANGE_UNKNOWN : (((int)((struct RBasic*)(pad))->flags & RUBY_ENC_CODERANGE_MASK)) == RUBY_ENC_CODERANGE_7BIT ? RUBY_ENC_CODERANGE_VALID : (((int)((struct RBasic*)(pad))->flags & RUBY_ENC_CODERANGE_MASK)));
    if (cr != RUBY_ENC_CODERANGE_BROKEN)
 ( ((struct RBasic*)(res))->flags = (((struct RBasic*)(res))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));

    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(pad); ; rb_gc_guarded_ptr; }));
    return res;
}
static VALUE
rb_str_ljust(int argc, VALUE *argv, VALUE str)
{
    return rb_str_justify(argc, argv, str, 'l');
}
static VALUE
rb_str_rjust(int argc, VALUE *argv, VALUE str)
{
    return rb_str_justify(argc, argv, str, 'r');
}
static VALUE
rb_str_center(int argc, VALUE *argv, VALUE str)
{
    return rb_str_justify(argc, argv, str, 'c');
}
static VALUE
rb_str_partition(VALUE str, VALUE sep)
{
    long pos;

    sep = get_pat_quoted(sep, 0);
    if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(sep))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((sep) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((sep) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((sep) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((sep) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(sep)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(sep))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
 pos = rb_reg_search(sep, str, 0, 0);
 if (pos < 0) {
   failed:
     return  ({ const VALUE args_to_new_ary[] = {rb_str_dup(str), str_new_empty(str), str_new_empty(str)}; if (__builtin_constant_p(3)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (3)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
 }
 sep = rb_str_subpat(str, sep, (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));
 if (pos == 0 && (!(((struct RBasic*)(sep))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sep))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sep))->as.heap.len) == 0) goto failed;
    }
    else {
 pos = rb_strseq_index(str, sep, 0, 0);
 if (pos < 0) goto failed;
    }
    return  ({ const VALUE args_to_new_ary[] = {rb_str_subseq(str, 0, pos), sep, rb_str_subseq(str, pos+(!(((struct RBasic*)(sep))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sep))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sep))->as.heap.len), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-pos-(!(((struct RBasic*)(sep))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sep))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sep))->as.heap.len))}; if (__builtin_constant_p(3)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (3)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });



}
static VALUE
rb_str_rpartition(VALUE str, VALUE sep)
{
    long pos = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    int regex = FALSE;

    if (( ((RUBY_T_REGEXP) == RUBY_T_FIXNUM) ? (((int)(long)(sep))&RUBY_FIXNUM_FLAG) : ((RUBY_T_REGEXP) == RUBY_T_TRUE) ? ((sep) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_REGEXP) == RUBY_T_FALSE) ? ((sep) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_REGEXP) == RUBY_T_NIL) ? ((sep) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_REGEXP) == RUBY_T_UNDEF) ? ((sep) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_REGEXP) == RUBY_T_SYMBOL) ? ((((VALUE)(sep)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_REGEXP) == RUBY_T_FLOAT) ? ( ((((int)(long)(sep))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(sep) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(sep) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(sep))->flags & RUBY_T_MASK) == (RUBY_T_REGEXP)))) {
 pos = rb_reg_search(sep, str, pos, 1);
 regex = TRUE;
    }
    else {
 VALUE tmp;

 tmp = rb_check_string_type(sep);
 if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     rb_raise(rb_eTypeError, "type mismatch: %s given",
       rb_obj_classname(sep));
 }
 sep = tmp;
 pos = rb_str_sublen(str, pos);
 pos = rb_str_rindex(str, sep, pos);
    }
    if (pos < 0) {
       return  ({ const VALUE args_to_new_ary[] = {str_new_empty(str), str_new_empty(str), rb_str_dup(str)}; if (__builtin_constant_p(3)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (3)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });
    }
    if (regex) {
 sep = rb_reg_nth_match(0, rb_backref_get());
    }
    else {
 pos = rb_str_offset(str, pos);
    }
    return  ({ const VALUE args_to_new_ary[] = {rb_str_subseq(str, 0, pos), sep, rb_str_subseq(str, pos+(!(((struct RBasic*)(sep))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sep))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sep))->as.heap.len), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-pos-(!(((struct RBasic*)(sep))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sep))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sep))->as.heap.len))}; if (__builtin_constant_p(3)) { extern int (*__Static_assert_function (void)) [!!sizeof (struct { int __error_if_negative: (((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))) == (3)) ? 2 : -1; })]; } rb_ary_new_from_values(((int)(sizeof(args_to_new_ary) / sizeof((args_to_new_ary)[0]))), args_to_new_ary); });



}
static VALUE
rb_str_start_with(int argc, VALUE *argv, VALUE str)
{
    int i;

    for (i=0; i<argc; i++) {
 VALUE tmp = argv[i];
 switch (rb_type((VALUE)(tmp))) {
   case RUBY_T_REGEXP:
     {
  signed char r = rb_reg_start_with_p(tmp, str);
  if (r) return ((VALUE)RUBY_Qtrue);
     }
     break;
   default:
     rb_string_value(&(tmp));
     rb_enc_check(str, tmp);
     if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len)) continue;
     if (memcmp((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr), (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len)) == 0)
  return ((VALUE)RUBY_Qtrue);
 }
    }
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_str_end_with(int argc, VALUE *argv, VALUE str)
{
    int i;
    char *p, *s, *e;
    rb_encoding *enc;

    for (i=0; i<argc; i++) {
 VALUE tmp = argv[i];
 rb_string_value(&(tmp));
 enc = rb_enc_check(str, tmp);
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) < (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len)) continue;
 p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
        e = p + (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 s = e - (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len);
 if (((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(p),(OnigUChar*)(s),(OnigUChar*)(e))) != s)
     continue;
 if (memcmp(s, (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? ((struct RString*)(tmp))->as.ary : ((struct RString*)(tmp))->as.heap.ptr), (!(((struct RBasic*)(tmp))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(tmp))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(tmp))->as.heap.len)) == 0)
     return ((VALUE)RUBY_Qtrue);
    }
    return ((VALUE)RUBY_Qfalse);
}
static long
deleted_prefix_length(VALUE str, VALUE prefix)
{
    char *strptr, *prefixptr;
    long olen, prefixlen;

    rb_string_value(&(prefix));
    if ((rb_enc_str_coderange(prefix) == RUBY_ENC_CODERANGE_BROKEN)) return 0;
    rb_enc_check(str, prefix);


    prefixlen = (!(((struct RBasic*)(prefix))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(prefix))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(prefix))->as.heap.len);
    if (prefixlen <= 0) return 0;
    olen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (olen < prefixlen) return 0;
    strptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    prefixptr = (!(((struct RBasic*)(prefix))->flags & RSTRING_NOEMBED) ? ((struct RString*)(prefix))->as.ary : ((struct RString*)(prefix))->as.heap.ptr);
    if (memcmp(strptr, prefixptr, prefixlen) != 0) return 0;

    return prefixlen;
}
static VALUE
rb_str_delete_prefix_bang(VALUE str, VALUE prefix)
{
    long prefixlen;
    str_modify_keep_cr(str);

    prefixlen = deleted_prefix_length(str, prefix);
    if (prefixlen <= 0) return ((VALUE)RUBY_Qnil);

    return rb_str_drop_bytes(str, prefixlen);
}
static VALUE
rb_str_delete_prefix(VALUE str, VALUE prefix)
{
    long prefixlen;

    prefixlen = deleted_prefix_length(str, prefix);
    if (prefixlen <= 0) return rb_str_dup(str);

    return rb_str_subseq(str, prefixlen, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - prefixlen);
}
static long
deleted_suffix_length(VALUE str, VALUE suffix)
{
    char *strptr, *suffixptr, *s;
    long olen, suffixlen;
    rb_encoding *enc;

    rb_string_value(&(suffix));
    if ((rb_enc_str_coderange(suffix) == RUBY_ENC_CODERANGE_BROKEN)) return 0;
    enc = rb_enc_check(str, suffix);


    suffixlen = (!(((struct RBasic*)(suffix))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(suffix))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(suffix))->as.heap.len);
    if (suffixlen <= 0) return 0;
    olen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if (olen < suffixlen) return 0;
    strptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    suffixptr = (!(((struct RBasic*)(suffix))->flags & RSTRING_NOEMBED) ? ((struct RString*)(suffix))->as.ary : ((struct RString*)(suffix))->as.heap.ptr);
    s = strptr + olen - suffixlen;
    if (memcmp(s, suffixptr, suffixlen) != 0) return 0;
    if (((char *)onigenc_get_left_adjust_char_head((enc),(OnigUChar*)(strptr),(OnigUChar*)(s),(OnigUChar*)(strptr + olen))) != s) return 0;

    return suffixlen;
}
static VALUE
rb_str_delete_suffix_bang(VALUE str, VALUE suffix)
{
    long olen, suffixlen, len;
    str_modifiable(str);

    suffixlen = deleted_suffix_length(str, suffix);
    if (suffixlen <= 0) return ((VALUE)RUBY_Qnil);

    olen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    str_modify_keep_cr(str);
    len = olen - suffixlen;
    do { if ((!(((struct RBasic*)((str)))->flags&(((VALUE)RUBY_FL_USER1))))) { do { long tmp_n = ((len)); ((struct RBasic*)((str)))->flags &= ~RSTRING_EMBED_LEN_MASK; ((struct RBasic*)((str)))->flags |= (tmp_n) << RSTRING_EMBED_LEN_SHIFT;} while (0); } else { ((struct RString*)(str))->as.heap.len = (len); }} while (0);
    do { char *const term_fill_ptr = (&(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr)[len]); const int term_fill_len = ((rb_enc_get(str))->min_enc_len); *term_fill_ptr = '\0'; if ((__builtin_expect(!!(term_fill_len > 1), 0))) memset(term_fill_ptr, 0, term_fill_len);} while (0);
    if (((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK) != RUBY_ENC_CODERANGE_7BIT) {
 ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    }
    return str;
}
static VALUE
rb_str_delete_suffix(VALUE str, VALUE suffix)
{
    long suffixlen;

    suffixlen = deleted_suffix_length(str, suffix);
    if (suffixlen <= 0) return rb_str_dup(str);

    return rb_str_subseq(str, 0, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - suffixlen);
}

void
rb_str_setter(VALUE val, ID id, VALUE *var)
{
    if (!!((VALUE)(val) != ((VALUE)RUBY_Qnil)) && !( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(val))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((val) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((val) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((val) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((val) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(val)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(val))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(val) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(val) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(val))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 rb_raise(rb_eTypeError, "value of %li\v must be String", rb_id2str(id));
    }
    *var = val;
}

static void
rb_fs_setter(VALUE val, ID id, VALUE *var)
{
    val = rb_fs_check(val);
    if (!val) {
 rb_raise(rb_eTypeError,
   "value of %li\v must be String or Regexp",
   rb_id2str(id));
    }
    *var = val;
}
static VALUE
rb_str_force_encoding(VALUE str, VALUE enc)
{
    str_modifiable(str);
    rb_enc_associate(str, rb_to_encoding(enc));
    ( ((struct RBasic*)((str)))->flags = (((struct RBasic*)((str)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    return str;
}
static VALUE
rb_str_b(VALUE str)
{
    VALUE str2 = str_alloc(rb_cString);
    str_replace_shared_without_enc(str2, str);
    (void)(((struct RBasic*)(str2))->flags |= ((((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    ( ((struct RBasic*)((str2)))->flags = (((struct RBasic*)((str2)))->flags & ~RUBY_ENC_CODERANGE_MASK) | (0));
    return str2;
}
static VALUE
rb_str_valid_encoding_p(VALUE str)
{
    int cr = rb_enc_str_coderange(str);

    return cr == RUBY_ENC_CODERANGE_BROKEN ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_str_is_ascii_only_p(VALUE str)
{
    int cr = rb_enc_str_coderange(str);

    return cr == RUBY_ENC_CODERANGE_7BIT ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
VALUE
rb_str_ellipsize(VALUE str, long len)
{
    static const char ellipsis[] = "...";
    const long ellipsislen = sizeof(ellipsis) - 1;
    rb_encoding *const enc = rb_enc_get(str);
    const long blen = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    const char *const p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), *e = p + blen;
    VALUE estr, ret = 0;

    if (len < 0) rb_raise(rb_eIndexError, "negative length %ld", len);
    if (len * (enc)->min_enc_len >= blen ||
 (e = rb_enc_nth(p, e, len, enc)) - p == blen) {
 ret = str;
    }
    else if (len <= ellipsislen ||
      !(e = ((char *)onigenc_step_back((enc),(OnigUChar*)(p),(OnigUChar*)(e),(OnigUChar*)(e),(int)(len = ellipsislen))))) {
 if (rb_enc_asciicompat_inline(enc)) {
     ret = rb_str_new_with_class(str, ellipsis, len);
     rb_enc_associate(ret, enc);
 }
 else {
     estr = rb_usascii_str_new(ellipsis, len);
     ret = rb_str_encode(estr, rb_enc_from_encoding(enc), 0, ((VALUE)RUBY_Qnil));
 }
    }
    else if (ret = rb_str_subseq(str, 0, e - p), rb_enc_asciicompat_inline(enc)) {
 rb_str_cat(ret, ellipsis, ellipsislen);
    }
    else {
 estr = rb_str_encode(rb_usascii_str_new(ellipsis, ellipsislen),
        rb_enc_from_encoding(enc), 0, ((VALUE)RUBY_Qnil));
 rb_str_append(ret, estr);
    }
    return ret;
}

static VALUE
str_compat_and_valid(VALUE str, rb_encoding *enc)
{
    int cr;
    str = rb_string_value(&(str));
    cr = rb_enc_str_coderange(str);
    if (cr == RUBY_ENC_CODERANGE_BROKEN) {
 rb_raise(rb_eArgError, "replacement must be valid byte sequence '%+li\v'", str);
    }
    else {
 rb_encoding *e = get_encoding(str);
 if (cr == RUBY_ENC_CODERANGE_7BIT ? (enc)->min_enc_len != 1 : enc != e) {
     rb_raise(rb_eEncCompatError, "incompatible character encodings: %s and %s",
       (enc)->name, (e)->name);
 }
    }
    return str;
}

static VALUE enc_str_scrub(rb_encoding *enc, VALUE str, VALUE repl, int cr);






VALUE
rb_str_scrub(VALUE str, VALUE repl)
{
    rb_encoding *enc = get_encoding(str);
    return enc_str_scrub(enc, str, repl, ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK));
}

VALUE
rb_enc_str_scrub(rb_encoding *enc, VALUE str, VALUE repl)
{
    int cr = RUBY_ENC_CODERANGE_UNKNOWN;
    if (enc == get_encoding(str)) {


 cr = ((int)((struct RBasic*)(str))->flags & RUBY_ENC_CODERANGE_MASK);
    }
    return enc_str_scrub(enc, str, repl, cr);
}

static VALUE
enc_str_scrub(rb_encoding *enc, VALUE str, VALUE repl, int cr)
{
    int encidx;
    VALUE buf = ((VALUE)RUBY_Qnil);
    const char *rep;
    long replen = -1;
    int tainted = 0;

    if (rb_block_given_p()) {
 if (!!((VALUE)(repl) != ((VALUE)RUBY_Qnil)))
     rb_raise(rb_eArgError, "both of block and replacement given");
 replen = 0;
    }

    if (rb_enc_coderange_clean_p(cr))
 return ((VALUE)RUBY_Qnil);

    if (!!((VALUE)(repl) != ((VALUE)RUBY_Qnil))) {
 repl = str_compat_and_valid(repl, enc);
 tainted = (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
    }

    if (rb_enc_dummy_p(enc)) {
 return ((VALUE)RUBY_Qnil);
    }
    encidx = rb_enc_to_index(enc);






    if (rb_enc_asciicompat_inline(enc)) {
 const char *p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 const char *e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
 const char *p1 = p;
 int rep7bit_p;
 if (!replen) {
     rep = ((void*)0);
     rep7bit_p = FALSE;
 }
 else if (!!((VALUE)(repl) != ((VALUE)RUBY_Qnil))) {
     rep = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr);
     replen = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len);
     rep7bit_p = (((int)((struct RBasic*)(repl))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_7BIT);
 }
 else if (encidx == RUBY_ENCINDEX_UTF_8) {
     do { static const char replace[sizeof("\xEF\xBF\xBD")-1] = "\xEF\xBF\xBD"; rep = replace; replen = (int)sizeof(replace); } while (0);
     rep7bit_p = FALSE;
 }
 else {
     do { static const char replace[sizeof("?")-1] = "?"; rep = replace; replen = (int)sizeof(replace); } while (0);
     rep7bit_p = TRUE;
 }
 cr = RUBY_ENC_CODERANGE_7BIT;

 p = search_nonascii(p, e);
 if (!p) {
     p = e;
 }
 while (p < e) {
     int ret = rb_enc_precise_mbclen(p, e, enc);
     if (((ret) < -1)) {
  break;
     }
     else if ((0 < (ret))) {
  cr = RUBY_ENC_CODERANGE_VALID;
  p += (ret);
     }
     else if (((ret) == -1)) {




  long clen = (enc)->max_enc_len;
  if (!((VALUE)(buf) != ((VALUE)RUBY_Qnil))) buf = rb_str_buf_new((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
  if (p > p1) {
      rb_str_buf_cat(buf, p1, p - p1);
  }

  if (e - p < clen) clen = e - p;
  if (clen <= 2) {
      clen = 1;
  }
  else {
      const char *q = p;
      clen--;
      for (; clen > 1; clen--) {
   ret = rb_enc_precise_mbclen(q, q + clen, enc);
   if (((ret) < -1)) break;
   if (((ret) == -1)) continue;
   __builtin_unreachable();
      }
  }
  if (rep) {
      rb_str_buf_cat(buf, rep, replen);
      if (!rep7bit_p) cr = RUBY_ENC_CODERANGE_VALID;
  }
  else {
      repl = rb_yield(rb_enc_str_new(p, clen, enc));
      repl = str_compat_and_valid(repl, enc);
      tainted |= (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
      rb_str_buf_cat(buf, (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr), (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len));
      if (((int)((struct RBasic*)(repl))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_VALID)
   cr = RUBY_ENC_CODERANGE_VALID;
  }
  p += clen;
  p1 = p;
  p = search_nonascii(p, e);
  if (!p) {
      p = e;
      break;
  }
     }
     else {
  __builtin_unreachable();
     }
 }
 if (!((VALUE)(buf) != ((VALUE)RUBY_Qnil))) {
     if (p == e) {
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (cr));
  return ((VALUE)RUBY_Qnil);
     }
     buf = rb_str_buf_new((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
 }
 if (p1 < p) {
     rb_str_buf_cat(buf, p1, p - p1);
 }
 if (p < e) {
     if (rep) {
  rb_str_buf_cat(buf, rep, replen);
  if (!rep7bit_p) cr = RUBY_ENC_CODERANGE_VALID;
     }
     else {
  repl = rb_yield(rb_enc_str_new(p, e-p, enc));
  repl = str_compat_and_valid(repl, enc);
  tainted |= (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
  rb_str_buf_cat(buf, (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr), (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len));
  if (((int)((struct RBasic*)(repl))->flags & RUBY_ENC_CODERANGE_MASK) == RUBY_ENC_CODERANGE_VALID)
      cr = RUBY_ENC_CODERANGE_VALID;
     }
 }
    }
    else {

 const char *p = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 const char *e = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (((struct RString*)(str))->as.ary + (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(str))->as.heap.ptr + ((struct RString*)(str))->as.heap.len));
 const char *p1 = p;
 long mbminlen = (enc)->min_enc_len;
 if (!replen) {
     rep = ((void*)0);
 }
 else if (!!((VALUE)(repl) != ((VALUE)RUBY_Qnil))) {
     rep = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr);
     replen = (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len);
 }
 else if (encidx == RUBY_ENCINDEX_UTF_16BE) {
     do { static const char replace[sizeof("\xFF\xFD")-1] = "\xFF\xFD"; rep = replace; replen = (int)sizeof(replace); } while (0);
 }
 else if (encidx == RUBY_ENCINDEX_UTF_16LE) {
     do { static const char replace[sizeof("\xFD\xFF")-1] = "\xFD\xFF"; rep = replace; replen = (int)sizeof(replace); } while (0);
 }
 else if (encidx == RUBY_ENCINDEX_UTF_32BE) {
     do { static const char replace[sizeof("\x00\x00\xFF\xFD")-1] = "\x00\x00\xFF\xFD"; rep = replace; replen = (int)sizeof(replace); } while (0);
 }
 else if (encidx == RUBY_ENCINDEX_UTF_32LE) {
     do { static const char replace[sizeof("\xFD\xFF\x00\x00")-1] = "\xFD\xFF\x00\x00"; rep = replace; replen = (int)sizeof(replace); } while (0);
 }
 else {
     do { static const char replace[sizeof("?")-1] = "?"; rep = replace; replen = (int)sizeof(replace); } while (0);
 }

 while (p < e) {
     int ret = rb_enc_precise_mbclen(p, e, enc);
     if (((ret) < -1)) {
  break;
     }
     else if ((0 < (ret))) {
  p += (ret);
     }
     else if (((ret) == -1)) {
  const char *q = p;
  long clen = (enc)->max_enc_len;
  if (!((VALUE)(buf) != ((VALUE)RUBY_Qnil))) buf = rb_str_buf_new((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
  if (p > p1) rb_str_buf_cat(buf, p1, p - p1);

  if (e - p < clen) clen = e - p;
  if (clen <= mbminlen * 2) {
      clen = mbminlen;
  }
  else {
      clen -= mbminlen;
      for (; clen > mbminlen; clen-=mbminlen) {
   ret = rb_enc_precise_mbclen(q, q + clen, enc);
   if (((ret) < -1)) break;
   if (((ret) == -1)) continue;
   __builtin_unreachable();
      }
  }
  if (rep) {
      rb_str_buf_cat(buf, rep, replen);
  }
  else {
      repl = rb_yield(rb_enc_str_new(p, clen, enc));
      repl = str_compat_and_valid(repl, enc);
      tainted |= (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
      rb_str_buf_cat(buf, (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr), (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len));
  }
  p += clen;
  p1 = p;
     }
     else {
  __builtin_unreachable();
     }
 }
 if (!((VALUE)(buf) != ((VALUE)RUBY_Qnil))) {
     if (p == e) {
  ( ((struct RBasic*)(str))->flags = (((struct RBasic*)(str))->flags & ~RUBY_ENC_CODERANGE_MASK) | (RUBY_ENC_CODERANGE_VALID));
  return ((VALUE)RUBY_Qnil);
     }
     buf = rb_str_buf_new((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
 }
 if (p1 < p) {
     rb_str_buf_cat(buf, p1, p - p1);
 }
 if (p < e) {
     if (rep) {
  rb_str_buf_cat(buf, rep, replen);
     }
     else {
  repl = rb_yield(rb_enc_str_new(p, e-p, enc));
  repl = str_compat_and_valid(repl, enc);
  tainted |= (((struct RBasic*)(repl))->flags&(RUBY_FL_TAINT));
  rb_str_buf_cat(buf, (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? ((struct RString*)(repl))->as.ary : ((struct RString*)(repl))->as.heap.ptr), (!(((struct RBasic*)(repl))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(repl))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(repl))->as.heap.len));
     }
 }
 cr = RUBY_ENC_CODERANGE_VALID;
    }
    (void)(((struct RBasic*)(buf))->flags |= (tainted|(((struct RBasic*)(str))->flags&(RUBY_FL_TAINT))));
    do { VALUE rb_encoding_coderange_obj = (buf); rb_enc_set_index((rb_encoding_coderange_obj), ((rb_enc_to_index(enc)))); ( ((struct RBasic*)(rb_encoding_coderange_obj))->flags = (((struct RBasic*)(rb_encoding_coderange_obj))->flags & ~RUBY_ENC_CODERANGE_MASK) | ((cr))); } while (0);
    return buf;
}
static VALUE
str_scrub(int argc, VALUE *argv, VALUE str)
{
    VALUE repl = argc ? (rb_check_arity(argc, 0, 1), argv[0]) : ((VALUE)RUBY_Qnil);
    VALUE new = rb_str_scrub(str, repl);
    return !((VALUE)(new) != ((VALUE)RUBY_Qnil)) ? rb_str_dup(str): new;
}
static VALUE
str_scrub_bang(int argc, VALUE *argv, VALUE str)
{
    VALUE repl = argc ? (rb_check_arity(argc, 0, 1), argv[0]) : ((VALUE)RUBY_Qnil);
    VALUE new = rb_str_scrub(str, repl);
    if (!!((VALUE)(new) != ((VALUE)RUBY_Qnil))) rb_str_replace(str, new);
    return str;
}

static ID id_normalize;
static ID id_normalized_p;
static VALUE mUnicodeNormalize;

static VALUE
unicode_normalize_common(int argc, VALUE *argv, VALUE str, ID id)
{
    static int UnicodeNormalizeRequired = 0;
    VALUE argv2[2];

    if (!UnicodeNormalizeRequired) {
 rb_require("unicode_normalize/normalize.rb");
 UnicodeNormalizeRequired = 1;
    }
    argv2[0] = str;
    rb_scan_args(argc, argv, "01", &argv2[1]);
    return rb_funcallv(mUnicodeNormalize, id, argc+1, argv2);
}
static VALUE
rb_str_unicode_normalize(int argc, VALUE *argv, VALUE str)
{
    return unicode_normalize_common(argc, argv, str, id_normalize);
}
static VALUE
rb_str_unicode_normalize_bang(int argc, VALUE *argv, VALUE str)
{
    return rb_str_replace(str, unicode_normalize_common(argc, argv, str, id_normalize));
}
static VALUE
rb_str_unicode_normalized_p(int argc, VALUE *argv, VALUE str)
{
    return unicode_normalize_common(argc, argv, str, id_normalized_p);
}
static int
sym_printable(const char *s, const char *send, rb_encoding *enc)
{
    while (s < send) {
 int n;
 int c = rb_enc_precise_mbclen(s, send, enc);

 if (!(0 < (c))) return FALSE;
 n = (c);
 c = ((enc))->mbc_to_code(((OnigUChar*)(s)),((OnigUChar*)(send)),(enc));
 if (!((enc))->is_code_ctype((c),7,(enc))) return FALSE;
 s += n;
    }
    return TRUE;
}

int
rb_str_symname_p(VALUE sym)
{
    rb_encoding *enc;
    const char *ptr;
    long len;
    rb_encoding *resenc = rb_default_internal_encoding();

    if (resenc == ((void*)0)) resenc = rb_default_external_encoding();
    enc = get_encoding(sym);
    ptr = (!(((struct RBasic*)(sym))->flags & RSTRING_NOEMBED) ? ((struct RString*)(sym))->as.ary : ((struct RString*)(sym))->as.heap.ptr);
    len = (!(((struct RBasic*)(sym))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(sym))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(sym))->as.heap.len);
    if ((resenc != enc && !rb_str_is_ascii_only_p(sym)) || len != (long)strlen(ptr) ||
 !rb_enc_symname_p(ptr, enc) || !sym_printable(ptr, ptr + len, enc)) {
 return FALSE;
    }
    return TRUE;
}

VALUE
rb_str_quote_unprintable(VALUE str)
{
    rb_encoding *enc;
    const char *ptr;
    long len;
    rb_encoding *resenc;

    (!( (((RUBY_T_STRING)) == RUBY_T_FIXNUM) ? (((int)(long)((VALUE)(str)))&RUBY_FIXNUM_FLAG) : (((RUBY_T_STRING)) == RUBY_T_TRUE) ? (((VALUE)(str)) == ((VALUE)RUBY_Qtrue)) : (((RUBY_T_STRING)) == RUBY_T_FALSE) ? (((VALUE)(str)) == ((VALUE)RUBY_Qfalse)) : (((RUBY_T_STRING)) == RUBY_T_NIL) ? (((VALUE)(str)) == ((VALUE)RUBY_Qnil)) : (((RUBY_T_STRING)) == RUBY_T_UNDEF) ? (((VALUE)(str)) == ((VALUE)RUBY_Qundef)) : (((RUBY_T_STRING)) == RUBY_T_SYMBOL) ? ((((VALUE)((VALUE)(str))&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : (((RUBY_T_STRING)) == RUBY_T_FLOAT) ? ( ((((int)(long)((VALUE)(str)))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)((VALUE)(str)) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)((VALUE)(str)) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)((VALUE)(str)))->flags & RUBY_T_MASK) == ((RUBY_T_STRING)))) || ((RUBY_T_STRING) == RUBY_T_DATA && (((struct RTypedData*)(str))->typed_flag == 1)) ? rb_unexpected_type((VALUE)(str), (RUBY_T_STRING)) : (void)0);
    resenc = rb_default_internal_encoding();
    if (resenc == ((void*)0)) resenc = rb_default_external_encoding();
    enc = get_encoding(str);
    ptr = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
    len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    if ((resenc != enc && !rb_str_is_ascii_only_p(str)) ||
 !sym_printable(ptr, ptr + len, enc)) {
 return rb_str_inspect(str);
    }
    return str;
}

VALUE
rb_id_quote_unprintable(ID id)
{
    return rb_str_quote_unprintable(rb_id2str(id));
}
static VALUE
sym_inspect(VALUE sym)
{
    VALUE str = rb_sym2str(sym);
    const char *ptr;
    long len;
    char *dest;

    if (!rb_str_symname_p(str)) {
 str = rb_str_inspect(str);
 len = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 rb_str_resize(str, len + 1);
 dest = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 memmove(dest + 1, dest, len);
    }
    else {
 rb_encoding *enc = get_encoding(str);
 (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((ptr) = ((struct RString*)(str))->as.ary, (len) = (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((ptr) = ((struct RString*)(str))->as.heap.ptr, (len) = ((struct RString*)(str))->as.heap.len));
 str = rb_enc_str_new(0, len + 1, enc);
 dest = (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr);
 memcpy(dest + 1, ptr, len);
    }
    dest[0] = ':';
    return str;
}
VALUE
rb_sym_to_s(VALUE sym)
{
    return str_new_shared(rb_cString, rb_sym2str(sym));
}
static VALUE
sym_to_sym(VALUE sym)
{
    return sym;
}

VALUE
rb_sym_proc_call(ID mid, int argc, const VALUE *argv, VALUE passed_proc)
{
    VALUE obj;

    if (argc < 1) {
 rb_raise(rb_eArgError, "no receiver given");
    }
    obj = argv[0];
    return rb_funcall_with_block(obj, mid, argc - 1, argv + 1, passed_proc);
}
static VALUE
sym_succ(VALUE sym)
{
    return rb_str_intern(rb_str_succ(rb_sym2str(sym)));
}
static VALUE
sym_cmp(VALUE sym, VALUE other)
{
    if (!((((VALUE)(other)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(other) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(other) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(other))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return ((VALUE)RUBY_Qnil);
    }
    return rb_str_cmp_m(rb_sym2str(sym), rb_sym2str(other));
}
static VALUE
sym_casecmp(VALUE sym, VALUE other)
{
    if (!((((VALUE)(other)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(other) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(other) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(other))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return ((VALUE)RUBY_Qnil);
    }
    return str_casecmp(rb_sym2str(sym), rb_sym2str(other));
}
static VALUE
sym_casecmp_p(VALUE sym, VALUE other)
{
    if (!((((VALUE)(other)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(other) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(other) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(other))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return ((VALUE)RUBY_Qnil);
    }
    return str_casecmp_p(rb_sym2str(sym), rb_sym2str(other));
}
static VALUE
sym_match(VALUE sym, VALUE other)
{
    return rb_str_match(rb_sym2str(sym), other);
}
static VALUE
sym_match_m(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_match_m(argc, argv, rb_sym2str(sym));
}
static VALUE
sym_match_m_p(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_match_m_p(argc, argv, sym);
}
static VALUE
sym_aref(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_aref_m(argc, argv, rb_sym2str(sym));
}
static VALUE
sym_length(VALUE sym)
{
    return rb_str_length(rb_sym2str(sym));
}
static VALUE
sym_empty(VALUE sym)
{
    return rb_str_empty(rb_sym2str(sym));
}
static VALUE
sym_upcase(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_intern(rb_str_upcase(argc, argv, rb_sym2str(sym)));
}
static VALUE
sym_downcase(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_intern(rb_str_downcase(argc, argv, rb_sym2str(sym)));
}
static VALUE
sym_capitalize(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_intern(rb_str_capitalize(argc, argv, rb_sym2str(sym)));
}
static VALUE
sym_swapcase(int argc, VALUE *argv, VALUE sym)
{
    return rb_str_intern(rb_str_swapcase(argc, argv, rb_sym2str(sym)));
}
static VALUE
sym_encoding(VALUE sym)
{
    return rb_obj_encoding(rb_sym2str(sym));
}

static VALUE
string_for_symbol(VALUE name)
{
    if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(name))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((name) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((name) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((name) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((name) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(name)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(name))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_STRING)))) {
 VALUE tmp = rb_check_string_type(name);
 if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
     rb_raise(rb_eTypeError, "%+li\v is not a symbol",
       name);
 }
 name = tmp;
    }
    return name;
}

ID
rb_to_id(VALUE name)
{
    if (((((VALUE)(name)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return (rb_sym2id(name));
    }
    name = string_for_symbol(name);
    return rb_intern_str(name);
}

VALUE
rb_to_symbol(VALUE name)
{
    if (((((VALUE)(name)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(name))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL)))) {
 return name;
    }
    name = string_for_symbol(name);
    return rb_str_intern(name);
}
void
Init_String(void)
{



    rb_cString = rb_define_class("String", rb_cObject);
    __builtin_choose_expr( __builtin_constant_p(!0 +0), __builtin_choose_expr(!0 +0, ((rb_vm_fstring_table()) ? (void)0 : rb_assert_failure("string.c", 10811, __func__, "rb_vm_fstring_table()")), (void)0), ((!(!0 +0) || (rb_vm_fstring_table())) ? (void)0 : rb_assert_failure("string.c", 10811, __func__, "rb_vm_fstring_table()")));
    st_foreach(rb_vm_fstring_table(), fstring_set_class_i, rb_cString);
    rb_include_module(rb_cString, rb_mComparable);
    rb_define_alloc_func(rb_cString, empty_str_alloc);
    rb_define_singleton_method(rb_cString, "try_convert", rb_str_s_try_convert, 1);
    rb_define_method(rb_cString, "initialize", rb_str_init, -1);
    rb_define_method(rb_cString, "initialize_copy", rb_str_replace, 1);
    rb_define_method(rb_cString, "<=>", rb_str_cmp_m, 1);
    rb_define_method(rb_cString, "==", rb_str_equal, 1);
    rb_define_method(rb_cString, "===", rb_str_equal, 1);
    rb_define_method(rb_cString, "eql?", rb_str_eql, 1);
    rb_define_method(rb_cString, "hash", rb_str_hash_m, 0);
    rb_define_method(rb_cString, "casecmp", rb_str_casecmp, 1);
    rb_define_method(rb_cString, "casecmp?", rb_str_casecmp_p, 1);
    rb_define_method(rb_cString, "+", rb_str_plus, 1);
    rb_define_method(rb_cString, "*", rb_str_times, 1);
    rb_define_method(rb_cString, "%", rb_str_format_m, 1);
    rb_define_method(rb_cString, "[]", rb_str_aref_m, -1);
    rb_define_method(rb_cString, "[]=", rb_str_aset_m, -1);
    rb_define_method(rb_cString, "insert", rb_str_insert, 2);
    rb_define_method(rb_cString, "length", rb_str_length, 0);
    rb_define_method(rb_cString, "size", rb_str_length, 0);
    rb_define_method(rb_cString, "bytesize", rb_str_bytesize, 0);
    rb_define_method(rb_cString, "empty?", rb_str_empty, 0);
    rb_define_method(rb_cString, "=~", rb_str_match, 1);
    rb_define_method(rb_cString, "match", rb_str_match_m, -1);
    rb_define_method(rb_cString, "match?", rb_str_match_m_p, -1);
    rb_define_method(rb_cString, "succ", rb_str_succ, 0);
    rb_define_method(rb_cString, "succ!", rb_str_succ_bang, 0);
    rb_define_method(rb_cString, "next", rb_str_succ, 0);
    rb_define_method(rb_cString, "next!", rb_str_succ_bang, 0);
    rb_define_method(rb_cString, "upto", rb_str_upto, -1);
    rb_define_method(rb_cString, "index", rb_str_index_m, -1);
    rb_define_method(rb_cString, "rindex", rb_str_rindex_m, -1);
    rb_define_method(rb_cString, "replace", rb_str_replace, 1);
    rb_define_method(rb_cString, "clear", rb_str_clear, 0);
    rb_define_method(rb_cString, "chr", rb_str_chr, 0);
    rb_define_method(rb_cString, "getbyte", rb_str_getbyte, 1);
    rb_define_method(rb_cString, "setbyte", rb_str_setbyte, 2);
    rb_define_method(rb_cString, "byteslice", rb_str_byteslice, -1);
    rb_define_method(rb_cString, "scrub", str_scrub, -1);
    rb_define_method(rb_cString, "scrub!", str_scrub_bang, -1);
    rb_define_method(rb_cString, "freeze", rb_str_freeze, 0);
    rb_define_method(rb_cString, "+@", str_uplus, 0);
    rb_define_method(rb_cString, "-@", str_uminus, 0);

    rb_define_method(rb_cString, "to_i", rb_str_to_i, -1);
    rb_define_method(rb_cString, "to_f", rb_str_to_f, 0);
    rb_define_method(rb_cString, "to_s", rb_str_to_s, 0);
    rb_define_method(rb_cString, "to_str", rb_str_to_s, 0);
    rb_define_method(rb_cString, "inspect", rb_str_inspect, 0);
    rb_define_method(rb_cString, "dump", rb_str_dump, 0);
    rb_define_method(rb_cString, "undump", str_undump, 0);

    sym_ascii = (rb_id2sym((__builtin_constant_p("ascii") ?  (rb_intern2(("ascii"), (long)strlen("ascii"))) : (rb_intern)("ascii"))));
    sym_turkic = (rb_id2sym((__builtin_constant_p("turkic") ?  (rb_intern2(("turkic"), (long)strlen("turkic"))) : (rb_intern)("turkic"))));
    sym_lithuanian = (rb_id2sym((__builtin_constant_p("lithuanian") ?  (rb_intern2(("lithuanian"), (long)strlen("lithuanian"))) : (rb_intern)("lithuanian"))));
    sym_fold = (rb_id2sym((__builtin_constant_p("fold") ?  (rb_intern2(("fold"), (long)strlen("fold"))) : (rb_intern)("fold"))));

    rb_define_method(rb_cString, "upcase", rb_str_upcase, -1);
    rb_define_method(rb_cString, "downcase", rb_str_downcase, -1);
    rb_define_method(rb_cString, "capitalize", rb_str_capitalize, -1);
    rb_define_method(rb_cString, "swapcase", rb_str_swapcase, -1);

    rb_define_method(rb_cString, "upcase!", rb_str_upcase_bang, -1);
    rb_define_method(rb_cString, "downcase!", rb_str_downcase_bang, -1);
    rb_define_method(rb_cString, "capitalize!", rb_str_capitalize_bang, -1);
    rb_define_method(rb_cString, "swapcase!", rb_str_swapcase_bang, -1);

    rb_define_method(rb_cString, "hex", rb_str_hex, 0);
    rb_define_method(rb_cString, "oct", rb_str_oct, 0);
    rb_define_method(rb_cString, "split", rb_str_split_m, -1);
    rb_define_method(rb_cString, "lines", rb_str_lines, -1);
    rb_define_method(rb_cString, "bytes", rb_str_bytes, 0);
    rb_define_method(rb_cString, "chars", rb_str_chars, 0);
    rb_define_method(rb_cString, "codepoints", rb_str_codepoints, 0);
    rb_define_method(rb_cString, "grapheme_clusters", rb_str_grapheme_clusters, 0);
    rb_define_method(rb_cString, "reverse", rb_str_reverse, 0);
    rb_define_method(rb_cString, "reverse!", rb_str_reverse_bang, 0);
    rb_define_method(rb_cString, "concat", rb_str_concat_multi, -1);
    rb_define_method(rb_cString, "<<", rb_str_concat, 1);
    rb_define_method(rb_cString, "prepend", rb_str_prepend_multi, -1);
    rb_define_method(rb_cString, "crypt", rb_str_crypt, 1);
    rb_define_method(rb_cString, "intern", rb_str_intern, 0);
    rb_define_method(rb_cString, "to_sym", rb_str_intern, 0);
    rb_define_method(rb_cString, "ord", rb_str_ord, 0);

    rb_define_method(rb_cString, "include?", rb_str_include, 1);
    rb_define_method(rb_cString, "start_with?", rb_str_start_with, -1);
    rb_define_method(rb_cString, "end_with?", rb_str_end_with, -1);

    rb_define_method(rb_cString, "scan", rb_str_scan, 1);

    rb_define_method(rb_cString, "ljust", rb_str_ljust, -1);
    rb_define_method(rb_cString, "rjust", rb_str_rjust, -1);
    rb_define_method(rb_cString, "center", rb_str_center, -1);

    rb_define_method(rb_cString, "sub", rb_str_sub, -1);
    rb_define_method(rb_cString, "gsub", rb_str_gsub, -1);
    rb_define_method(rb_cString, "chop", rb_str_chop, 0);
    rb_define_method(rb_cString, "chomp", rb_str_chomp, -1);
    rb_define_method(rb_cString, "strip", rb_str_strip, 0);
    rb_define_method(rb_cString, "lstrip", rb_str_lstrip, 0);
    rb_define_method(rb_cString, "rstrip", rb_str_rstrip, 0);
    rb_define_method(rb_cString, "delete_prefix", rb_str_delete_prefix, 1);
    rb_define_method(rb_cString, "delete_suffix", rb_str_delete_suffix, 1);

    rb_define_method(rb_cString, "sub!", rb_str_sub_bang, -1);
    rb_define_method(rb_cString, "gsub!", rb_str_gsub_bang, -1);
    rb_define_method(rb_cString, "chop!", rb_str_chop_bang, 0);
    rb_define_method(rb_cString, "chomp!", rb_str_chomp_bang, -1);
    rb_define_method(rb_cString, "strip!", rb_str_strip_bang, 0);
    rb_define_method(rb_cString, "lstrip!", rb_str_lstrip_bang, 0);
    rb_define_method(rb_cString, "rstrip!", rb_str_rstrip_bang, 0);
    rb_define_method(rb_cString, "delete_prefix!", rb_str_delete_prefix_bang, 1);
    rb_define_method(rb_cString, "delete_suffix!", rb_str_delete_suffix_bang, 1);

    rb_define_method(rb_cString, "tr", rb_str_tr, 2);
    rb_define_method(rb_cString, "tr_s", rb_str_tr_s, 2);
    rb_define_method(rb_cString, "delete", rb_str_delete, -1);
    rb_define_method(rb_cString, "squeeze", rb_str_squeeze, -1);
    rb_define_method(rb_cString, "count", rb_str_count, -1);

    rb_define_method(rb_cString, "tr!", rb_str_tr_bang, 2);
    rb_define_method(rb_cString, "tr_s!", rb_str_tr_s_bang, 2);
    rb_define_method(rb_cString, "delete!", rb_str_delete_bang, -1);
    rb_define_method(rb_cString, "squeeze!", rb_str_squeeze_bang, -1);

    rb_define_method(rb_cString, "each_line", rb_str_each_line, -1);
    rb_define_method(rb_cString, "each_byte", rb_str_each_byte, 0);
    rb_define_method(rb_cString, "each_char", rb_str_each_char, 0);
    rb_define_method(rb_cString, "each_codepoint", rb_str_each_codepoint, 0);
    rb_define_method(rb_cString, "each_grapheme_cluster", rb_str_each_grapheme_cluster, 0);

    rb_define_method(rb_cString, "sum", rb_str_sum, -1);

    rb_define_method(rb_cString, "slice", rb_str_aref_m, -1);
    rb_define_method(rb_cString, "slice!", rb_str_slice_bang, -1);

    rb_define_method(rb_cString, "partition", rb_str_partition, 1);
    rb_define_method(rb_cString, "rpartition", rb_str_rpartition, 1);

    rb_define_method(rb_cString, "encoding", rb_obj_encoding, 0);
    rb_define_method(rb_cString, "force_encoding", rb_str_force_encoding, 1);
    rb_define_method(rb_cString, "b", rb_str_b, 0);
    rb_define_method(rb_cString, "valid_encoding?", rb_str_valid_encoding_p, 0);
    rb_define_method(rb_cString, "ascii_only?", rb_str_is_ascii_only_p, 0);


    mUnicodeNormalize = rb_define_module("UnicodeNormalize");
    id_normalize = (__builtin_constant_p("normalize") ?  (rb_intern2(("normalize"), (long)strlen("normalize"))) : (rb_intern)("normalize"));
    id_normalized_p = (__builtin_constant_p("normalized?") ?  (rb_intern2(("normalized?"), (long)strlen("normalized?"))) : (rb_intern)("normalized?"));

    rb_define_method(rb_cString, "unicode_normalize", rb_str_unicode_normalize, -1);
    rb_define_method(rb_cString, "unicode_normalize!", rb_str_unicode_normalize_bang, -1);
    rb_define_method(rb_cString, "unicode_normalized?", rb_str_unicode_normalized_p, -1);

    rb_fs = ((VALUE)RUBY_Qnil);
    rb_define_hooked_variable("$;", &rb_fs, 0, rb_fs_setter);
    rb_define_hooked_variable("$-F", &rb_fs, 0, rb_fs_setter);
    rb_gc_register_address(&rb_fs);

    rb_cSymbol = rb_define_class("Symbol", rb_cObject);
    rb_include_module(rb_cSymbol, rb_mComparable);
    rb_undef_alloc_func(rb_cSymbol);
    rb_undef_method(rb_class_of((VALUE)(rb_cSymbol)), "new");
    rb_define_singleton_method(rb_cSymbol, "all_symbols", rb_sym_all_symbols, 0);

    rb_define_method(rb_cSymbol, "==", rb_obj_equal, 1);
    rb_define_method(rb_cSymbol, "===", rb_obj_equal, 1);
    rb_define_method(rb_cSymbol, "inspect", sym_inspect, 0);
    rb_define_method(rb_cSymbol, "to_s", rb_sym_to_s, 0);
    rb_define_method(rb_cSymbol, "id2name", rb_sym_to_s, 0);
    rb_define_method(rb_cSymbol, "intern", sym_to_sym, 0);
    rb_define_method(rb_cSymbol, "to_sym", sym_to_sym, 0);
    rb_define_method(rb_cSymbol, "to_proc", rb_sym_to_proc, 0);
    rb_define_method(rb_cSymbol, "succ", sym_succ, 0);
    rb_define_method(rb_cSymbol, "next", sym_succ, 0);

    rb_define_method(rb_cSymbol, "<=>", sym_cmp, 1);
    rb_define_method(rb_cSymbol, "casecmp", sym_casecmp, 1);
    rb_define_method(rb_cSymbol, "casecmp?", sym_casecmp_p, 1);
    rb_define_method(rb_cSymbol, "=~", sym_match, 1);

    rb_define_method(rb_cSymbol, "[]", sym_aref, -1);
    rb_define_method(rb_cSymbol, "slice", sym_aref, -1);
    rb_define_method(rb_cSymbol, "length", sym_length, 0);
    rb_define_method(rb_cSymbol, "size", sym_length, 0);
    rb_define_method(rb_cSymbol, "empty?", sym_empty, 0);
    rb_define_method(rb_cSymbol, "match", sym_match_m, -1);
    rb_define_method(rb_cSymbol, "match?", sym_match_m_p, -1);

    rb_define_method(rb_cSymbol, "upcase", sym_upcase, -1);
    rb_define_method(rb_cSymbol, "downcase", sym_downcase, -1);
    rb_define_method(rb_cSymbol, "capitalize", sym_capitalize, -1);
    rb_define_method(rb_cSymbol, "swapcase", sym_swapcase, -1);

    rb_define_method(rb_cSymbol, "encoding", sym_encoding, 0);
}
