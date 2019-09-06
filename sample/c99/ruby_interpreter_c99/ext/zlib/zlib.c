
















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


 typedef size_t z_size_t;
typedef unsigned char Byte;

typedef unsigned int uInt;
typedef unsigned long uLong;





   typedef Byte Bytef;

typedef char charf;
typedef int intf;
typedef uInt uIntf;
typedef uLong uLongf;


   typedef void const *voidpc;
   typedef void *voidpf;
   typedef void *voidp;
   typedef unsigned z_crc_t;
typedef voidpf (*alloc_func) (voidpf opaque, uInt items, uInt size);
typedef void (*free_func) (voidpf opaque, voidpf address);

struct internal_state;

typedef struct z_stream_s {
            Bytef *next_in;
    uInt avail_in;
    uLong total_in;

    Bytef *next_out;
    uInt avail_out;
    uLong total_out;

            char *msg;
    struct internal_state *state;

    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;

    int data_type;

    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;





typedef struct gz_header_s {
    int text;
    uLong time;
    int xflags;
    int os;
    Bytef *extra;
    uInt extra_len;
    uInt extra_max;
    Bytef *name;
    uInt name_max;
    Bytef *comment;
    uInt comm_max;
    int hcrc;
    int done;

} gz_header;

typedef gz_header *gz_headerp;
extern const char * zlibVersion (void);
extern int deflate (z_streamp strm, int flush);
extern int deflateEnd (z_streamp strm);
extern int inflate (z_streamp strm, int flush);
extern int inflateEnd (z_streamp strm);
extern int deflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
extern int deflateGetDictionary (z_streamp strm, Bytef *dictionary, uInt *dictLength);
extern int deflateCopy (z_streamp dest, z_streamp source);
extern int deflateReset (z_streamp strm);
extern int deflateParams (z_streamp strm, int level, int strategy);
extern int deflateTune (z_streamp strm, int good_length, int max_lazy, int nice_length, int max_chain);
extern uLong deflateBound (z_streamp strm, uLong sourceLen);
extern int deflatePending (z_streamp strm, unsigned *pending, int *bits);
extern int deflatePrime (z_streamp strm, int bits, int value);
extern int deflateSetHeader (z_streamp strm, gz_headerp head);
extern int inflateSetDictionary (z_streamp strm, const Bytef *dictionary, uInt dictLength);
extern int inflateGetDictionary (z_streamp strm, Bytef *dictionary, uInt *dictLength);
extern int inflateSync (z_streamp strm);
extern int inflateCopy (z_streamp dest, z_streamp source);
extern int inflateReset (z_streamp strm);
extern int inflateReset2 (z_streamp strm, int windowBits);
extern int inflatePrime (z_streamp strm, int bits, int value);
extern long inflateMark (z_streamp strm);
extern int inflateGetHeader (z_streamp strm, gz_headerp head);
typedef unsigned (*in_func) (void *, unsigned char * *);

typedef int (*out_func) (void *, unsigned char *, unsigned);

extern int inflateBack (z_streamp strm, in_func in, void *in_desc, out_func out, void *out_desc);
extern int inflateBackEnd (z_streamp strm);







extern uLong zlibCompileFlags (void);
extern int compress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
extern int compress2 (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen, int level);
extern uLong compressBound (uLong sourceLen);






extern int uncompress (Bytef *dest, uLongf *destLen, const Bytef *source, uLong sourceLen);
extern int uncompress2 (Bytef *dest, uLongf *destLen, const Bytef *source, uLong *sourceLen);
typedef struct gzFile_s *gzFile;
extern gzFile gzdopen (int fd, const char *mode);
extern int gzbuffer (gzFile file, unsigned size);
extern int gzsetparams (gzFile file, int level, int strategy);
extern int gzread (gzFile file, voidp buf, unsigned len);
extern z_size_t gzfread (voidp buf, z_size_t size, z_size_t nitems, gzFile file);
extern int gzwrite (gzFile file, voidpc buf, unsigned len);







extern z_size_t gzfwrite (voidpc buf, z_size_t size, z_size_t nitems, gzFile file);
extern int gzprintf (gzFile file, const char *format, ...);
extern int gzputs (gzFile file, const char *s);







extern char * gzgets (gzFile file, char *buf, int len);
extern int gzputc (gzFile file, int c);





extern int gzgetc (gzFile file);
extern int gzungetc (int c, gzFile file);
extern int gzflush (gzFile file, int flush);
extern int gzrewind (gzFile file);
extern int gzeof (gzFile file);
extern int gzdirect (gzFile file);
extern int gzclose (gzFile file);
extern int gzclose_r (gzFile file);
extern int gzclose_w (gzFile file);
extern const char * gzerror (gzFile file, int *errnum);
extern void gzclearerr (gzFile file);
extern uLong adler32 (uLong adler, const Bytef *buf, uInt len);
extern uLong adler32_z (uLong adler, const Bytef *buf, z_size_t len);
extern uLong crc32 (uLong crc, const Bytef *buf, uInt len);
extern uLong crc32_z (uLong adler, const Bytef *buf, z_size_t len);
extern int deflateInit_ (z_streamp strm, int level, const char *version, int stream_size);

extern int inflateInit_ (z_streamp strm, const char *version, int stream_size);

extern int deflateInit2_ (z_streamp strm, int level, int method, int windowBits, int memLevel, int strategy, const char *version, int stream_size);



extern int inflateInit2_ (z_streamp strm, int windowBits, const char *version, int stream_size);

extern int inflateBackInit_ (z_streamp strm, int windowBits, unsigned char *window, const char *version, int stream_size);
struct gzFile_s {
    unsigned have;
    unsigned char *next;
    off64_t pos;
};
extern int gzgetc_ (gzFile file);
   extern gzFile gzopen64 (const char *, const char *);
   extern off64_t gzseek64 (gzFile, off64_t, int);
   extern off64_t gztell64 (gzFile);
   extern off64_t gzoffset64 (gzFile);
   extern uLong adler32_combine64 (uLong, uLong, off64_t);
   extern uLong crc32_combine64 (uLong, uLong, off64_t);
   extern gzFile gzopen (const char *, const char *);
   extern off_t gzseek (gzFile, off_t, int);
   extern off_t gztell (gzFile);
   extern off_t gzoffset (gzFile);
   extern uLong adler32_combine (uLong, uLong, off_t);
   extern uLong crc32_combine (uLong, uLong, off_t);
extern const char * zError (int);
extern int inflateSyncPoint (z_streamp);
extern const z_crc_t * get_crc_table (void);
extern int inflateUndermine (z_streamp, int);
extern int inflateValidate (z_streamp, int);
extern unsigned long inflateCodesUsed (z_streamp);
extern int inflateResetKeep (z_streamp);
extern int deflateResetKeep (z_streamp);






extern int gzvprintf (gzFile file, const char *format, va_list va);



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












extern int *__errno_location (void)  ;







extern char *program_invocation_name;
extern char *program_invocation_short_name;





typedef int error_t;











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




void *rb_thread_call_with_gvl(void *(*func)(void *), void *data1);

void *rb_thread_call_without_gvl(void *(*func)(void *), void *data1,
     rb_unblock_function_t *ubf, void *data2);
void *rb_thread_call_without_gvl2(void *(*func)(void *), void *data1,
      rb_unblock_function_t *ubf, void *data2);




static inline uInt
max_uint(long n)
{
    if (n > (2147483647 *2U +1U)) n = (2147483647 *2U +1U);
    return (uInt)n;
}





static ID id_dictionaries;



static  void raise_zlib_error(int, const char*);
static VALUE rb_zlib_version(VALUE);
static VALUE do_checksum(int, VALUE*, uLong (*)(uLong, const Bytef*, uInt));
static VALUE rb_zlib_adler32(int, VALUE*, VALUE);
static VALUE rb_zlib_crc32(int, VALUE*, VALUE);
static VALUE rb_zlib_crc_table(VALUE);
static voidpf zlib_mem_alloc(voidpf, uInt, uInt);
static void zlib_mem_free(voidpf, voidpf);
static void finalizer_warn(const char*);

struct zstream;
struct zstream_funcs;
struct zstream_run_args;
static void zstream_init(struct zstream*, const struct zstream_funcs*);
static void zstream_expand_buffer(struct zstream*);
static void zstream_expand_buffer_into(struct zstream*, unsigned long);
static int zstream_expand_buffer_non_stream(struct zstream *z);
static void zstream_append_buffer(struct zstream*, const Bytef*, long);
static VALUE zstream_detach_buffer(struct zstream*);
static VALUE zstream_shift_buffer(struct zstream*, long);
static void zstream_buffer_ungets(struct zstream*, const Bytef*, unsigned long);
static void zstream_buffer_ungetbyte(struct zstream*, int);
static void zstream_append_input(struct zstream*, const Bytef*, long);
static void zstream_discard_input(struct zstream*, long);
static void zstream_reset_input(struct zstream*);
static void zstream_passthrough_input(struct zstream*);
static VALUE zstream_detach_input(struct zstream*);
static void zstream_reset(struct zstream*);
static VALUE zstream_end(struct zstream*);
static void zstream_run(struct zstream*, Bytef*, long, int);
static VALUE zstream_sync(struct zstream*, Bytef*, long);
static void zstream_mark(void*);
static void zstream_free(void*);
static VALUE zstream_new(VALUE, const struct zstream_funcs*);
static struct zstream *get_zstream(VALUE);
static void zstream_finalize(struct zstream*);

static VALUE rb_zstream_end(VALUE);
static VALUE rb_zstream_reset(VALUE);
static VALUE rb_zstream_finish(VALUE);
static VALUE rb_zstream_flush_next_in(VALUE);
static VALUE rb_zstream_flush_next_out(VALUE);
static VALUE rb_zstream_avail_out(VALUE);
static VALUE rb_zstream_set_avail_out(VALUE, VALUE);
static VALUE rb_zstream_avail_in(VALUE);
static VALUE rb_zstream_total_in(VALUE);
static VALUE rb_zstream_total_out(VALUE);
static VALUE rb_zstream_data_type(VALUE);
static VALUE rb_zstream_adler(VALUE);
static VALUE rb_zstream_finished_p(VALUE);
static VALUE rb_zstream_closed_p(VALUE);

static VALUE rb_deflate_s_allocate(VALUE);
static VALUE rb_deflate_initialize(int, VALUE*, VALUE);
static VALUE rb_deflate_init_copy(VALUE, VALUE);
static VALUE deflate_run(VALUE);
static VALUE rb_deflate_s_deflate(int, VALUE*, VALUE);
static void do_deflate(struct zstream*, VALUE, int);
static VALUE rb_deflate_deflate(int, VALUE*, VALUE);
static VALUE rb_deflate_addstr(VALUE, VALUE);
static VALUE rb_deflate_flush(int, VALUE*, VALUE);
static VALUE rb_deflate_params(VALUE, VALUE, VALUE);
static VALUE rb_deflate_set_dictionary(VALUE, VALUE);

static VALUE inflate_run(VALUE);
static VALUE rb_inflate_s_allocate(VALUE);
static VALUE rb_inflate_initialize(int, VALUE*, VALUE);
static VALUE rb_inflate_s_inflate(VALUE, VALUE);
static void do_inflate(struct zstream*, VALUE);
static VALUE rb_inflate_inflate(VALUE, VALUE);
static VALUE rb_inflate_addstr(VALUE, VALUE);
static VALUE rb_inflate_sync(VALUE, VALUE);
static VALUE rb_inflate_sync_point_p(VALUE);
static VALUE rb_inflate_set_dictionary(VALUE, VALUE);


struct gzfile;
static void gzfile_mark(void*);
static void gzfile_free(void*);
static VALUE gzfile_new(VALUE, const struct zstream_funcs*, void (*) (struct gzfile*));
static void gzfile_reset(struct gzfile*);
static void gzfile_close(struct gzfile*, int);
static void gzfile_write_raw(struct gzfile*);
static VALUE gzfile_read_raw_partial(VALUE);
static VALUE gzfile_read_raw_rescue(VALUE);
static VALUE gzfile_read_raw(struct gzfile*);
static int gzfile_read_raw_ensure(struct gzfile*, long);
static char *gzfile_read_raw_until_zero(struct gzfile*, long);
static unsigned int gzfile_get16(const unsigned char*);
static unsigned long gzfile_get32(const unsigned char*);
static void gzfile_set32(unsigned long n, unsigned char*);
static void gzfile_make_header(struct gzfile*);
static void gzfile_make_footer(struct gzfile*);
static void gzfile_read_header(struct gzfile*);
static void gzfile_check_footer(struct gzfile*);
static void gzfile_write(struct gzfile*, Bytef*, long);
static long gzfile_read_more(struct gzfile*);
static void gzfile_calc_crc(struct gzfile*, VALUE);
static VALUE gzfile_read(struct gzfile*, long);
static VALUE gzfile_read_all(struct gzfile*);
static void gzfile_ungets(struct gzfile*, const Bytef*, long);
static void gzfile_ungetbyte(struct gzfile*, int);
static VALUE gzfile_writer_end_run(VALUE);
static void gzfile_writer_end(struct gzfile*);
static VALUE gzfile_reader_end_run(VALUE);
static void gzfile_reader_end(struct gzfile*);
static void gzfile_reader_rewind(struct gzfile*);
static VALUE gzfile_reader_get_unused(struct gzfile*);
static struct gzfile *get_gzfile(VALUE);
static VALUE gzfile_ensure_close(VALUE);
static VALUE rb_gzfile_s_wrap(int, VALUE*, VALUE);
static VALUE gzfile_s_open(int, VALUE*, VALUE, const char*);
 static void gzfile_raise(struct gzfile *, VALUE, const char *);
static VALUE gzfile_error_inspect(VALUE);

static VALUE rb_gzfile_to_io(VALUE);
static VALUE rb_gzfile_crc(VALUE);
static VALUE rb_gzfile_mtime(VALUE);
static VALUE rb_gzfile_level(VALUE);
static VALUE rb_gzfile_os_code(VALUE);
static VALUE rb_gzfile_orig_name(VALUE);
static VALUE rb_gzfile_comment(VALUE);
static VALUE rb_gzfile_lineno(VALUE);
static VALUE rb_gzfile_set_lineno(VALUE, VALUE);
static VALUE rb_gzfile_set_mtime(VALUE, VALUE);
static VALUE rb_gzfile_set_orig_name(VALUE, VALUE);
static VALUE rb_gzfile_set_comment(VALUE, VALUE);
static VALUE rb_gzfile_close(VALUE);
static VALUE rb_gzfile_finish(VALUE);
static VALUE rb_gzfile_closed_p(VALUE);
static VALUE rb_gzfile_eof_p(VALUE);
static VALUE rb_gzfile_sync(VALUE);
static VALUE rb_gzfile_set_sync(VALUE, VALUE);
static VALUE rb_gzfile_total_in(VALUE);
static VALUE rb_gzfile_total_out(VALUE);
static VALUE rb_gzfile_path(VALUE);

static VALUE rb_gzwriter_s_allocate(VALUE);
static VALUE rb_gzwriter_s_open(int, VALUE*, VALUE);
static VALUE rb_gzwriter_initialize(int, VALUE*, VALUE);
static VALUE rb_gzwriter_flush(int, VALUE*, VALUE);
static VALUE rb_gzwriter_write(int, VALUE*, VALUE);
static VALUE rb_gzwriter_putc(VALUE, VALUE);

static VALUE rb_gzreader_s_allocate(VALUE);
static VALUE rb_gzreader_s_open(int, VALUE*, VALUE);
static VALUE rb_gzreader_initialize(int, VALUE*, VALUE);
static VALUE rb_gzreader_rewind(VALUE);
static VALUE rb_gzreader_unused(VALUE);
static VALUE rb_gzreader_read(int, VALUE*, VALUE);
static VALUE rb_gzreader_getc(VALUE);
static VALUE rb_gzreader_readchar(VALUE);
static VALUE rb_gzreader_each_byte(VALUE);
static VALUE rb_gzreader_ungetc(VALUE, VALUE);
static VALUE rb_gzreader_ungetbyte(VALUE, VALUE);
static void gzreader_skip_linebreaks(struct gzfile*);
static VALUE gzreader_gets(int, VALUE*, VALUE);
static VALUE rb_gzreader_gets(int, VALUE*, VALUE);
static VALUE rb_gzreader_readline(int, VALUE*, VALUE);
static VALUE rb_gzreader_each(int, VALUE*, VALUE);
static VALUE rb_gzreader_readlines(int, VALUE*, VALUE);
void Init_zlib(void);



static VALUE cZError, cStreamEnd, cNeedDict;
static VALUE cStreamError, cDataError, cMemError, cBufError, cVersionError;

static void
raise_zlib_error(int err, const char *msg)
{
    VALUE exc;

    if (!msg) {
 msg = zError(err);
    }

    switch(err) {
      case 1:
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cStreamEnd), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cStreamEnd), (msg)); });
 break;
      case 2:
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cNeedDict), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cNeedDict), (msg)); });
 break;
      case (-2):
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cStreamError), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cStreamError), (msg)); });
 break;
      case (-3):
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cDataError), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cDataError), (msg)); });
 break;
      case (-5):
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cBufError), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cBufError), (msg)); });
 break;
      case (-6):
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cVersionError), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cVersionError), (msg)); });
 break;
      case (-4):
 exc =  ({ (__builtin_constant_p(msg)) ? rb_exc_new((cMemError), (msg), (long)strlen(msg)) : rb_exc_new_cstr((cMemError), (msg)); });
 break;
      case (-1):
 rb_sys_fail(msg);

      default:
 exc = rb_exc_new_str(cZError,
        rb_sprintf("unknown zlib error %d: %s", err, msg));
    }

    rb_exc_raise(exc);
}




static void
finalizer_warn(const char *msg)
{
    fprintf(stderr, "zlib(finalizer): %s\n", msg);
}
static VALUE
rb_zlib_version(VALUE klass)
{
    VALUE str;

    str =  ({ (__builtin_constant_p(zlibVersion())) ? rb_str_new_static((zlibVersion()), (long)strlen(zlibVersion())) : rb_str_new_cstr(zlibVersion()); });
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}


static uLong
checksum_long(uLong (*func)(uLong, const Bytef*, uInt), uLong sum, const Bytef *ptr, long len)
{
    if (len > (2147483647 *2U +1U)) {
 do {
     sum = func(sum, ptr, (2147483647 *2U +1U));
     ptr += (2147483647 *2U +1U);
     len -= (2147483647 *2U +1U);
 } while (len >= (2147483647 *2U +1U));
    }
    if (len > 0) sum = func(sum, ptr, (uInt)len);
    return sum;
}




static VALUE
do_checksum(int argc, VALUE *argv, uLong (*func)(uLong, const Bytef*, uInt))
{
    VALUE str, vsum;
    unsigned long sum;

    rb_scan_args(argc, argv, "02", &str, &vsum);

    if (!!((VALUE)(vsum) != ((VALUE)RUBY_Qnil))) {
 sum = rb_num2ulong_inline(vsum);
    }
    else if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 sum = 0;
    }
    else {
 sum = func(0, 0, 0);
    }

    if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 sum = func(sum, 0, 0);
    }
    else {
 rb_string_value(&(str));
 sum = checksum_long(func, sum, (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    }
    return rb_uint2inum(sum);
}
static VALUE
rb_zlib_adler32(int argc, VALUE *argv, VALUE klass)
{
    return do_checksum(argc, argv, adler32);
}
static VALUE
rb_zlib_crc32(int argc, VALUE *argv, VALUE klass)
{
    return do_checksum(argc, argv, crc32);
}
static VALUE
rb_zlib_crc_table(VALUE obj)
{


    typedef unsigned long z_crc_t;

    const z_crc_t *crctbl;
    VALUE dst;
    int i;

    crctbl = get_crc_table();
    dst = rb_ary_new_capa(256);

    for (i = 0; i < 256; i++) {
 rb_ary_push(dst, rb_uint2inum(crctbl[i]));
    }
    return dst;
}





struct zstream {
    unsigned long flags;
    VALUE buf;
    VALUE input;
    z_stream stream;
    const struct zstream_funcs {
 int (*reset)(z_streamp);
 int (*end)(z_streamp);
 int (*run)(z_streamp, int);
    } *func;
};
static const struct zstream_funcs deflate_funcs = {
    deflateReset, deflateEnd, deflate,
};

static const struct zstream_funcs inflate_funcs = {
    inflateReset, inflateEnd, inflate,
};

struct zstream_run_args {
    struct zstream * z;
    int flush;
    int interrupt;
    int jump_state;
    int stream_output;
};

static voidpf
zlib_mem_alloc(voidpf opaque, uInt items, uInt size)
{
    voidpf p = ruby_xmalloc2(items, size);




    (void)0;
    return p;
}

static void
zlib_mem_free(voidpf opaque, voidpf address)
{
    ruby_xfree(address);
}

static void
zstream_init(struct zstream *z, const struct zstream_funcs *func)
{
    z->flags = 0;
    z->buf = ((VALUE)RUBY_Qnil);
    z->input = ((VALUE)RUBY_Qnil);
    z->stream.zalloc = zlib_mem_alloc;
    z->stream.zfree = zlib_mem_free;
    z->stream.opaque = 0;
    z->stream.msg = 0;
    z->stream.next_in = 0;
    z->stream.avail_in = 0;
    z->stream.next_out = 0;
    z->stream.avail_out = 0;
    z->func = func;
}




static void
zstream_expand_buffer(struct zstream *z)
{
    if (!((VALUE)(z->buf) != ((VALUE)RUBY_Qnil))) {
 zstream_expand_buffer_into(z, 1024);
 return;
    }

    if (!((z)->flags & 0x10) && rb_block_given_p()) {
 long buf_filled = (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len));
 if (buf_filled >= 16384) {
     int state = 0;
     VALUE self = (VALUE)z->stream.opaque;

     rb_obj_reveal(z->buf, rb_cString);
     ( (((!(((VALUE)(z->buf) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(z->buf) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(z->buf))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(z->buf))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(z->buf))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(z->buf))->flags |= ((((struct RBasic*)(self))->flags&(RUBY_FL_TAINT)))) : (void)0);

     rb_protect(rb_yield, z->buf, &state);

     z->buf = ((VALUE)RUBY_Qnil);
     zstream_expand_buffer_into(z, 16384);

     if (state)
  rb_jump_tag(state);

     return;
 }
 else {
     zstream_expand_buffer_into(z,
           16384 - buf_filled);
 }
    }
    else {
 zstream_expand_buffer_non_stream(z);
    }
}

static void
zstream_expand_buffer_into(struct zstream *z, unsigned long size)
{
    if (!((VALUE)(z->buf) != ((VALUE)RUBY_Qnil))) {


 z->buf = rb_str_buf_new(size);
 z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->buf))->as.ary : ((struct RString*)(z->buf))->as.heap.ptr);
 z->stream.avail_out = max_uint(size);
 rb_obj_hide(z->buf);
    }
    else if (z->stream.avail_out != size) {
 rb_str_modify_expand(z->buf, size);
 z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (((struct RString*)(z->buf))->as.ary + (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(z->buf))->as.heap.ptr + ((struct RString*)(z->buf))->as.heap.len));
 z->stream.avail_out = max_uint(size);
    }
}

static void *
zstream_expand_buffer_protect(void *ptr)
{
    struct zstream *z = (struct zstream *)ptr;
    int state = 0;

    rb_protect((VALUE (*)(VALUE))zstream_expand_buffer, (VALUE)z, &state);

    return (void *)(VALUE)state;
}

static int
zstream_expand_buffer_non_stream(struct zstream *z)
{
    long inc, len = (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len));

    if (rb_str_capacity(z->buf) - len >= 16384) {
 z->stream.avail_out = 16384;
    }
    else {
 inc = len / 2;
 if (inc < 2048) {
     inc = 2048;
 }

 rb_str_modify_expand(z->buf, inc);
 z->stream.avail_out = (inc < 16384) ?
     (int)inc : 16384;
    }
    z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (((struct RString*)(z->buf))->as.ary + (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(z->buf))->as.heap.ptr + ((struct RString*)(z->buf))->as.heap.len));

    return 0;
}

static void
zstream_append_buffer(struct zstream *z, const Bytef *src, long len)
{
    if (!((VALUE)(z->buf) != ((VALUE)RUBY_Qnil))) {
 z->buf = rb_str_buf_new(len);
 rb_str_cat(z->buf, (const char*)src, len);
 z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->buf))->as.ary : ((struct RString*)(z->buf))->as.heap.ptr);
 z->stream.avail_out = 0;
 rb_obj_hide(z->buf);
 return;
    }

    if ((long)rb_str_capacity(z->buf) < (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len)) + len) {
 rb_str_modify_expand(z->buf, len);
 z->stream.avail_out = 0;
    }
    else {
 if (z->stream.avail_out >= (uInt)len) {
     z->stream.avail_out -= (uInt)len;
 }
 else {
     z->stream.avail_out = 0;
 }
    }
    rb_str_cat(z->buf, (const char *)src, len);
    z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (((struct RString*)(z->buf))->as.ary + (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(z->buf))->as.heap.ptr + ((struct RString*)(z->buf))->as.heap.len));
}




static VALUE
zstream_detach_buffer(struct zstream *z)
{
    VALUE dst, self = (VALUE)z->stream.opaque;

    if (!((z)->flags & 0x4) && !((z)->flags & 0x10) &&
     rb_block_given_p()) {


 return ((VALUE)RUBY_Qnil);
    }

    if (!((VALUE)(z->buf) != ((VALUE)RUBY_Qnil))) {
 dst =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    }
    else {
 dst = z->buf;
 rb_obj_reveal(dst, rb_cString);
    }

    ( (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(self) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(self) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(self))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(dst))->flags |= ((((struct RBasic*)(self))->flags&(RUBY_FL_TAINT)))) : (void)0);

    z->buf = ((VALUE)RUBY_Qnil);
    z->stream.next_out = 0;
    z->stream.avail_out = 0;

    if (!((z)->flags & 0x10) && rb_block_given_p()) {
 rb_yield(dst);
 dst = ((VALUE)RUBY_Qnil);
    }

    return dst;
}

static VALUE
zstream_shift_buffer(struct zstream *z, long len)
{
    VALUE dst;
    char *bufptr;
    long buflen = (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len));

    if (buflen <= len) {
 return zstream_detach_buffer(z);
    }

    bufptr = (!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->buf))->as.ary : ((struct RString*)(z->buf))->as.heap.ptr);
    dst =  ({ (__builtin_constant_p(bufptr) && __builtin_constant_p(len)) ? rb_str_new_static((bufptr), (len)) : rb_str_new((bufptr), (len)); });
    buflen -= len;
    memmove(bufptr, bufptr + len, buflen);
    rb_str_set_len(z->buf, buflen);
    z->stream.next_out = (Bytef*)(!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (((struct RString*)(z->buf))->as.ary + (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(z->buf))->as.heap.ptr + ((struct RString*)(z->buf))->as.heap.len));
    buflen = (long)rb_str_capacity(z->buf) - (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len));
    if (buflen > 16384) {
 buflen = 16384;
    }
    z->stream.avail_out = (uInt)buflen;

    return dst;
}

static void
zstream_buffer_ungets(struct zstream *z, const Bytef *b, unsigned long len)
{
    char *bufptr;
    long filled;

    if (!((VALUE)(z->buf) != ((VALUE)RUBY_Qnil)) || (long)rb_str_capacity(z->buf) <= (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len))) {
 zstream_expand_buffer_into(z, len);
    }

    (!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? ((bufptr) = ((struct RString*)(z->buf))->as.ary, (filled) = (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : ((bufptr) = ((struct RString*)(z->buf))->as.heap.ptr, (filled) = ((struct RString*)(z->buf))->as.heap.len));
    memmove(bufptr + len, bufptr, filled);
    memmove(bufptr, b, len);
    rb_str_set_len(z->buf, filled + len);
    if (z->stream.avail_out > 0) {
 if (len > z->stream.avail_out) len = z->stream.avail_out;
 z->stream.next_out+=len;
 z->stream.avail_out-=(uInt)len;
    }
}

static void
zstream_buffer_ungetbyte(struct zstream *z, int c)
{
    Bytef cc = (Bytef)c;
    zstream_buffer_ungets(z, &cc, 1);
}

static void
zstream_append_input(struct zstream *z, const Bytef *src, long len)
{
    if (len <= 0) return;

    if (!((VALUE)(z->input) != ((VALUE)RUBY_Qnil))) {
 z->input = rb_str_buf_new(len);
 rb_str_cat(z->input, (const char*)src, len);
 rb_obj_hide(z->input);
    }
    else {
 rb_str_cat(z->input, (const char*)src, len);
    }
}





static void
zstream_discard_input(struct zstream *z, long len)
{
    if (!((VALUE)(z->input) != ((VALUE)RUBY_Qnil)) || (!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len) <= len) {
 z->input = ((VALUE)RUBY_Qnil);
    }
    else {
 z->input = rb_str_substr(z->input, len,
     (!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len) - len);
    }
}

static void
zstream_reset_input(struct zstream *z)
{
    z->input = ((VALUE)RUBY_Qnil);
}

static void
zstream_passthrough_input(struct zstream *z)
{
    if (!!((VALUE)(z->input) != ((VALUE)RUBY_Qnil))) {
 zstream_append_buffer((z),(Bytef*)(!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->input))->as.ary : ((struct RString*)(z->input))->as.heap.ptr),(!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len));
 z->input = ((VALUE)RUBY_Qnil);
    }
}

static VALUE
zstream_detach_input(struct zstream *z)
{
    VALUE dst;

    if (!((VALUE)(z->input) != ((VALUE)RUBY_Qnil))) {
 dst =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    }
    else {
 dst = z->input;
 rb_obj_reveal(dst, rb_cString);
    }
    z->input = ((VALUE)RUBY_Qnil);
    rb_obj_reveal(dst, rb_cString);
    return dst;
}

static void
zstream_reset(struct zstream *z)
{
    int err;

    err = z->func->reset(&z->stream);
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    z->flags = 0x1;
    z->buf = ((VALUE)RUBY_Qnil);
    z->stream.next_out = 0;
    z->stream.avail_out = 0;
    zstream_reset_input(z);
}

static VALUE
zstream_end(struct zstream *z)
{
    int err;

    if (!((z)->flags & 0x1)) {
 rb_warning("attempt to close uninitialized zstream; ignored.");
 return ((VALUE)RUBY_Qnil);
    }
    if (z->flags & 0x2) {
 rb_warning("attempt to close unfinished zstream; reset forced.");
 zstream_reset(z);
    }

    zstream_reset_input(z);
    err = z->func->end(&z->stream);
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    z->flags = 0;
    return ((VALUE)RUBY_Qnil);
}

static void *
zstream_run_func(void *ptr)
{
    struct zstream_run_args *args = (struct zstream_run_args *)ptr;
    int err, state, flush = args->flush;
    struct zstream *z = args->z;
    uInt n;

    err = 0;
    while (!args->interrupt) {
 n = z->stream.avail_out;
 err = z->func->run(&z->stream, flush);
 rb_str_set_len(z->buf, (!((VALUE)((z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((z)->buf))->as.heap.len)) + (n - z->stream.avail_out));

 if (err == 1) {
     z->flags &= ~0x2;
     z->flags |= 0x4;
     break;
 }

 if (err != 0 && err != (-5))
     break;

 if (z->stream.avail_out > 0) {
     z->flags |= 0x2;
     break;
 }

 if (z->stream.avail_in == 0 && z->func == &inflate_funcs) {



     z->flags |= 0x2;
     break;
 }

 if (args->stream_output) {
     state = (int)(VALUE)rb_thread_call_with_gvl(zstream_expand_buffer_protect,
       (void *)z);
 }
 else {
     state = zstream_expand_buffer_non_stream(z);
 }

 if (state) {
     err = 0;
     args->jump_state = state;
     break;
 }
    }

    return (void *)(VALUE)err;
}




static void
zstream_unblock_func(void *ptr)
{
    struct zstream_run_args *args = (struct zstream_run_args *)ptr;

    args->interrupt = 1;
}

static void
zstream_run(struct zstream *z, Bytef *src, long len, int flush)
{
    struct zstream_run_args args;
    int err;
    VALUE guard = ((VALUE)RUBY_Qnil);

    args.z = z;
    args.flush = flush;
    args.interrupt = 0;
    args.jump_state = 0;
    args.stream_output = !((z)->flags & 0x10) && rb_block_given_p();

    if (!((VALUE)(z->input) != ((VALUE)RUBY_Qnil)) && len == 0) {
 z->stream.next_in = (Bytef*)"";
 z->stream.avail_in = 0;
    }
    else {
 zstream_append_input(z, src, len);
 z->stream.next_in = (Bytef*)(!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->input))->as.ary : ((struct RString*)(z->input))->as.heap.ptr);
 z->stream.avail_in = max_uint((!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len));



 guard = z->input;
    }

    if (z->stream.avail_out == 0) {
 zstream_expand_buffer(z);
    }

loop:
    err = (int)(VALUE)rb_thread_call_without_gvl(zstream_run_func, (void *)&args,
       zstream_unblock_func, (void *)&args);

    if (flush != 4 && err == (-5)
     && z->stream.avail_out > 0) {
 z->flags |= 0x2;
    }

    zstream_reset_input(z);

    if (err != 0 && err != 1) {
 if (z->stream.avail_in > 0) {
     zstream_append_input(z, z->stream.next_in, z->stream.avail_in);
 }
 if (err == 2) {
     VALUE self = (VALUE)z->stream.opaque;
     if (self) {
  VALUE dicts = rb_ivar_get(self, id_dictionaries);
  VALUE dict = rb_hash_aref(dicts, rb_uint2inum(z->stream.adler));
  if (!!((VALUE)(dict) != ((VALUE)RUBY_Qnil))) {
      rb_inflate_set_dictionary(self, dict);
      goto loop;
  }
     }
 }
 raise_zlib_error(err, z->stream.msg);
    }

    if (z->stream.avail_in > 0) {
 zstream_append_input(z, z->stream.next_in, z->stream.avail_in);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(guard); ; rb_gc_guarded_ptr; }));
    }

    if (args.jump_state)
 rb_jump_tag(args.jump_state);
}

static VALUE
zstream_sync(struct zstream *z, Bytef *src, long len)
{

    int err;

    if (!!((VALUE)(z->input) != ((VALUE)RUBY_Qnil))) {
 z->stream.next_in = (Bytef*)(!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(z->input))->as.ary : ((struct RString*)(z->input))->as.heap.ptr);
 z->stream.avail_in = max_uint((!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len));
 err = inflateSync(&z->stream);
 if (err == 0) {
     zstream_discard_input(z,
      (!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len) - z->stream.avail_in);
     zstream_append_input(z, src, len);
     return ((VALUE)RUBY_Qtrue);
 }
 zstream_reset_input(z);
 if (err != (-3)) {

     raise_zlib_error(err, z->stream.msg);
 }
    }

    if (len <= 0) return ((VALUE)RUBY_Qfalse);

    z->stream.next_in = src;
    z->stream.avail_in = max_uint(len);
    err = inflateSync(&z->stream);
    if (err == 0) {
 zstream_append_input(z, z->stream.next_in, z->stream.avail_in);
 return ((VALUE)RUBY_Qtrue);
    }
    if (err != (-3)) {

 raise_zlib_error(err, z->stream.msg);
    }
    return ((VALUE)RUBY_Qfalse);
}

static void
zstream_mark(void *p)
{
    struct zstream *z = p;
    rb_gc_mark(z->buf);
    rb_gc_mark(z->input);
}

static void
zstream_finalize(struct zstream *z)
{
    int err = z->func->end(&z->stream);
    if (err == (-2))
 finalizer_warn("the stream state was inconsistent.");
    if (err == (-3))
 finalizer_warn("the stream was freed prematurely.");
}

static void
zstream_free(void *p)
{
    struct zstream *z = p;

    if (((z)->flags & 0x1)) {
 zstream_finalize(z);
    }
    ruby_xfree(z);
}

static size_t
zstream_memsize(const void *p)
{

    return sizeof(struct zstream);
}

static const rb_data_type_t zstream_data_type = {
    "zstream",
    { zstream_mark, zstream_free, zstream_memsize, },
     0, 0, 1
};

static VALUE
zstream_new(VALUE klass, const struct zstream_funcs *funcs)
{
    VALUE obj;
    struct zstream *z;

    obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct zstream), &zstream_data_type); (void)((z) = (struct zstream *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });
    zstream_init(z, funcs);
    z->stream.opaque = (voidpf)obj;
    return obj;
}




static struct zstream *
get_zstream(VALUE obj)
{
    struct zstream *z;

    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));
    if (!((z)->flags & 0x1)) {
 rb_raise(cZError, "stream is not ready");
    }
    return z;
}
static VALUE
rb_zstream_end(VALUE obj)
{
    zstream_end(get_zstream(obj));
    return ((VALUE)RUBY_Qnil);
}





static VALUE
rb_zstream_reset(VALUE obj)
{
    zstream_reset(get_zstream(obj));
    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_zstream_finish(VALUE obj)
{
    struct zstream *z = get_zstream(obj);

    zstream_run(z, (Bytef*)"", 0, 4);

    return zstream_detach_buffer(z);
}






static VALUE
rb_zstream_flush_next_in(VALUE obj)
{
    struct zstream *z;
    VALUE dst;

    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));
    dst = zstream_detach_input(z);
    ( (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(dst))->flags |= ((((struct RBasic*)(obj))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return dst;
}
static VALUE
rb_zstream_flush_next_out(VALUE obj)
{
    struct zstream *z;

    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));

    return zstream_detach_buffer(z);
}





static VALUE
rb_zstream_avail_out(VALUE obj)
{
    struct zstream *z;
    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));
    return rb_uint2inum(z->stream.avail_out);
}







static VALUE
rb_zstream_set_avail_out(VALUE obj, VALUE size)
{
    struct zstream *z = get_zstream(obj);

    zstream_expand_buffer_into(z, ((int)rb_fix2int((VALUE)(size))));
    return size;
}




static VALUE
rb_zstream_avail_in(VALUE obj)
{
    struct zstream *z;
    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));
    return (((VALUE)(!((VALUE)(z->input) != ((VALUE)RUBY_Qnil)) ? 0 : (int)((!(((struct RBasic*)(z->input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->input))->as.heap.len))))<<1 | RUBY_FIXNUM_FLAG);
}




static VALUE
rb_zstream_total_in(VALUE obj)
{
    return rb_uint2inum(get_zstream(obj)->stream.total_in);
}




static VALUE
rb_zstream_total_out(VALUE obj)
{
    return rb_uint2inum(get_zstream(obj)->stream.total_out);
}






static VALUE
rb_zstream_data_type(VALUE obj)
{
    return (((VALUE)(get_zstream(obj)->stream.data_type))<<1 | RUBY_FIXNUM_FLAG);
}




static VALUE
rb_zstream_adler(VALUE obj)
{
    return rb_uint2inum(get_zstream(obj)->stream.adler);
}




static VALUE
rb_zstream_finished_p(VALUE obj)
{
    return ((get_zstream(obj))->flags & 0x4) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}




static VALUE
rb_zstream_closed_p(VALUE obj)
{
    struct zstream *z;
    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));
    return ((z)->flags & 0x1) ? ((VALUE)RUBY_Qfalse) : ((VALUE)RUBY_Qtrue);
}
static VALUE
rb_deflate_s_allocate(VALUE klass)
{
    return zstream_new((klass), &deflate_funcs);
}
static VALUE
rb_deflate_initialize(int argc, VALUE *argv, VALUE obj)
{
    struct zstream *z;
    VALUE level, wbits, memlevel, strategy;
    int err;

    rb_scan_args(argc, argv, "04", &level, &wbits, &memlevel, &strategy);
    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));

    err = deflateInit2_((&z->stream),((!((VALUE)(((level))) != ((VALUE)RUBY_Qnil)) ? ((-1)) : (((int)rb_fix2int((VALUE)(((level)))))))),(8),((!((VALUE)(((wbits))) != ((VALUE)RUBY_Qnil)) ? (15) : (((int)rb_fix2int((VALUE)(((wbits)))))))),((!((VALUE)(((memlevel))) != ((VALUE)RUBY_Qnil)) ? (8) : (((int)rb_fix2int((VALUE)(((memlevel)))))))), ((!((VALUE)(((strategy))) != ((VALUE)RUBY_Qnil)) ? (0) : (((int)rb_fix2int((VALUE)(((strategy)))))))), "1.2.11", (int)sizeof(z_stream));


    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    ((z)->flags |= 0x1);

    return obj;
}






static VALUE
rb_deflate_init_copy(VALUE self, VALUE orig)
{
    struct zstream *z1, *z2;
    int err;

    ((z1) = (struct zstream*)rb_check_typeddata((self), (&zstream_data_type)));
    z2 = get_zstream(orig);

    if (z1 == z2) return self;
    err = deflateCopy(&z1->stream, &z2->stream);
    if (err != 0) {
 raise_zlib_error(err, 0);
    }
    z1->input = !((VALUE)(z2->input) != ((VALUE)RUBY_Qnil)) ? ((VALUE)RUBY_Qnil) : rb_str_dup(z2->input);
    z1->buf = !((VALUE)(z2->buf) != ((VALUE)RUBY_Qnil)) ? ((VALUE)RUBY_Qnil) : rb_str_dup(z2->buf);
    z1->flags = z2->flags;

    return self;
}

static VALUE
deflate_run(VALUE args)
{
    struct zstream *z = (struct zstream*)((VALUE*)args)[0];
    VALUE src = ((VALUE*)args)[1];

    zstream_run(z, (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len), 4);
    return zstream_detach_buffer(z);
}
static VALUE
rb_deflate_s_deflate(int argc, VALUE *argv, VALUE klass)
{
    struct zstream z;
    VALUE src, level, dst, args[2];
    int err, lev;

    rb_scan_args(argc, argv, "11", &src, &level);

    lev = (!((VALUE)(((level))) != ((VALUE)RUBY_Qnil)) ? ((-1)) : (((int)rb_fix2int((VALUE)(((level)))))));
    rb_string_value(&(src));
    zstream_init((&z), &deflate_funcs);
    err = deflateInit_((&z.stream), (lev), "1.2.11", (int)sizeof(z_stream));
    if (err != 0) {
 raise_zlib_error(err, z.stream.msg);
    }
    ((&z)->flags |= 0x1);

    args[0] = (VALUE)&z;
    args[1] = src;
    dst = rb_ensure(deflate_run, (VALUE)args, zstream_end, (VALUE)&z);

    ( (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(dst))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return dst;
}

static void
do_deflate(struct zstream *z, VALUE src, int flush)
{
    if (!((VALUE)(src) != ((VALUE)RUBY_Qnil))) {
 zstream_run(z, (Bytef*)"", 0, 4);
 return;
    }
    rb_string_value(&(src));
    if (flush != 0 || (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len) > 0) {
 zstream_run(z, (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len), flush);
    }
}
static VALUE
rb_deflate_deflate(int argc, VALUE *argv, VALUE obj)
{
    struct zstream *z = get_zstream(obj);
    VALUE src, flush;

    rb_scan_args(argc, argv, "11", &src, &flush);
    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);
    do_deflate(z, src, (!((VALUE)(((flush))) != ((VALUE)RUBY_Qnil)) ? (0) : (((int)rb_fix2int((VALUE)(((flush))))))));

    return zstream_detach_buffer(z);
}
static VALUE
rb_deflate_addstr(VALUE obj, VALUE src)
{
    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);
    do_deflate(get_zstream(obj), src, 0);
    return obj;
}
static VALUE
rb_deflate_flush(int argc, VALUE *argv, VALUE obj)
{
    struct zstream *z = get_zstream(obj);
    VALUE v_flush;
    int flush;

    rb_scan_args(argc, argv, "01", &v_flush);
    flush = (!((VALUE)((v_flush)) != ((VALUE)RUBY_Qnil)) ? (2) : (((int)rb_fix2int((VALUE)((v_flush))))));
    if (flush != 0) {
 zstream_run(z, (Bytef*)"", 0, flush);
    }

    return zstream_detach_buffer(z);
}
static VALUE
rb_deflate_params(VALUE obj, VALUE v_level, VALUE v_strategy)
{
    struct zstream *z = get_zstream(obj);
    int level, strategy;
    int err;
    uInt n;
    long filled;

    level = (!((VALUE)(((v_level))) != ((VALUE)RUBY_Qnil)) ? ((-1)) : (((int)rb_fix2int((VALUE)(((v_level)))))));
    strategy = (!((VALUE)(((v_strategy))) != ((VALUE)RUBY_Qnil)) ? (0) : (((int)rb_fix2int((VALUE)(((v_strategy)))))));

    n = z->stream.avail_out;
    err = deflateParams(&z->stream, level, strategy);
    filled = n - z->stream.avail_out;
    while (err == (-5)) {
 rb_warning("deflateParams() returned Z_BUF_ERROR");
 zstream_expand_buffer(z);
 rb_str_set_len(z->buf, (!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->buf))->as.heap.len) + filled);
 n = z->stream.avail_out;
 err = deflateParams(&z->stream, level, strategy);
 filled = n - z->stream.avail_out;
    }
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    rb_str_set_len(z->buf, (!(((struct RBasic*)(z->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(z->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(z->buf))->as.heap.len) + filled);

    return ((VALUE)RUBY_Qnil);
}
static VALUE
rb_deflate_set_dictionary(VALUE obj, VALUE dic)
{
    struct zstream *z = get_zstream(obj);
    VALUE src = dic;
    int err;

    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(dic) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dic) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dic))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(dic))->flags&(RUBY_FL_TAINT)))) : (void)0);
    rb_string_value(&(src));
    err = deflateSetDictionary(&z->stream,
          (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), rb_long2int_inline((!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len)));
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }

    return dic;
}
static VALUE
rb_inflate_s_allocate(VALUE klass)
{
    VALUE inflate = zstream_new((klass), &inflate_funcs);
    rb_ivar_set(inflate, id_dictionaries, rb_hash_new());
    return inflate;
}
static VALUE
rb_inflate_initialize(int argc, VALUE *argv, VALUE obj)
{
    struct zstream *z;
    VALUE wbits;
    int err;

    rb_scan_args(argc, argv, "01", &wbits);
    ((z) = (struct zstream*)rb_check_typeddata((obj), (&zstream_data_type)));

    err = inflateInit2_((&z->stream), ((!((VALUE)(((wbits))) != ((VALUE)RUBY_Qnil)) ? (15) : (((int)rb_fix2int((VALUE)(((wbits)))))))), "1.2.11", (int)sizeof(z_stream));
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    ((z)->flags |= 0x1);

    return obj;
}

static VALUE
inflate_run(VALUE args)
{
    struct zstream *z = (struct zstream*)((VALUE*)args)[0];
    VALUE src = ((VALUE*)args)[1];

    zstream_run(z, (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len), 2);
    zstream_run(z, (Bytef*)"", 0, 4);
    return zstream_detach_buffer(z);
}
static VALUE
rb_inflate_s_inflate(VALUE obj, VALUE src)
{
    struct zstream z;
    VALUE dst, args[2];
    int err;

    rb_string_value(&(src));
    zstream_init((&z), &inflate_funcs);
    err = inflateInit_((&z.stream), "1.2.11", (int)sizeof(z_stream));
    if (err != 0) {
 raise_zlib_error(err, z.stream.msg);
    }
    ((&z)->flags |= 0x1);

    args[0] = (VALUE)&z;
    args[1] = src;
    dst = rb_ensure(inflate_run, (VALUE)args, zstream_end, (VALUE)&z);

    ( (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(dst))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);
    return dst;
}

static void
do_inflate(struct zstream *z, VALUE src)
{
    if (!((VALUE)(src) != ((VALUE)RUBY_Qnil))) {
 zstream_run(z, (Bytef*)"", 0, 4);
 return;
    }
    rb_string_value(&(src));
    if ((!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len) > 0 || z->stream.avail_in > 0) {
 zstream_run(z, (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len), 2);
    }
}
static VALUE
rb_inflate_add_dictionary(VALUE obj, VALUE dictionary)
{
    VALUE dictionaries = rb_ivar_get(obj, id_dictionaries);
    VALUE checksum = do_checksum(1, &dictionary, adler32);

    rb_hash_aset(dictionaries, checksum, dictionary);

    return obj;
}
static VALUE
rb_inflate_inflate(VALUE obj, VALUE src)
{
    struct zstream *z = get_zstream(obj);
    VALUE dst;

    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);

    if (((z)->flags & 0x4)) {
 if (!((VALUE)(src) != ((VALUE)RUBY_Qnil))) {
     dst = zstream_detach_buffer(z);
 }
 else {
     rb_string_value(&(src));
     zstream_append_buffer((z),(Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr),(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len));
     dst =  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
     ( (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(dst))->flags |= ((((struct RBasic*)(obj))->flags&(RUBY_FL_TAINT)))) : (void)0);
 }
    }
    else {
 do_inflate(z, src);
 dst = zstream_detach_buffer(z);
 if (((z)->flags & 0x4)) {
     zstream_passthrough_input(z);
 }
    }

    return dst;
}
static VALUE
rb_inflate_addstr(VALUE obj, VALUE src)
{
    struct zstream *z = get_zstream(obj);

    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);

    if (((z)->flags & 0x4)) {
 if (!!((VALUE)(src) != ((VALUE)RUBY_Qnil))) {
     rb_string_value(&(src));
     zstream_append_buffer((z),(Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr),(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len));
 }
    }
    else {
 do_inflate(z, src);
 if (((z)->flags & 0x4)) {
     zstream_passthrough_input(z);
 }
    }

    return obj;
}
static VALUE
rb_inflate_sync(VALUE obj, VALUE src)
{
    struct zstream *z = get_zstream(obj);

    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(src) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(src) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(src))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(src))->flags&(RUBY_FL_TAINT)))) : (void)0);
    rb_string_value(&(src));
    return zstream_sync(z, (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len));
}
static VALUE
rb_inflate_sync_point_p(VALUE obj)
{
    struct zstream *z = get_zstream(obj);
    int err;

    err = inflateSyncPoint(&z->stream);
    if (err == 1) {
 return ((VALUE)RUBY_Qtrue);
    }
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }
    return ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_inflate_set_dictionary(VALUE obj, VALUE dic)
{
    struct zstream *z = get_zstream(obj);
    VALUE src = dic;
    int err;

    ( (((!(((VALUE)(obj) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(obj) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(obj))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) && (!(((VALUE)(dic) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dic) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dic))->flags & RUBY_T_MASK) != RUBY_T_NODE)) ? (void)(((struct RBasic*)(obj))->flags |= ((((struct RBasic*)(dic))->flags&(RUBY_FL_TAINT)))) : (void)0);
    rb_string_value(&(src));
    err = inflateSetDictionary(&z->stream,
          (Bytef*)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr), rb_long2int_inline((!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len)));
    if (err != 0) {
 raise_zlib_error(err, z->stream.msg);
    }

    return dic;
}
static ID id_write, id_read, id_readpartial, id_flush, id_seek, id_close, id_path, id_input;
static VALUE cGzError, cNoFooter, cCRCError, cLengthError;





struct gzfile {
    struct zstream z;
    VALUE io;
    int level;
    int os_code;
    time_t mtime;
    VALUE orig_name;
    VALUE comment;
    unsigned long crc;
    int ecflags;
    int lineno;
    long ungetc;
    void (*end)(struct gzfile *);
    rb_encoding *enc;
    rb_encoding *enc2;
    rb_econv_t *ec;
    VALUE ecopts;
    char *cbuf;
    VALUE path;
};
static void
gzfile_mark(void *p)
{
    struct gzfile *gz = p;

    rb_gc_mark(gz->io);
    rb_gc_mark(gz->orig_name);
    rb_gc_mark(gz->comment);
    zstream_mark(&gz->z);
    rb_gc_mark(gz->ecopts);
    rb_gc_mark(gz->path);
}

static void
gzfile_free(void *p)
{
    struct gzfile *gz = p;
    struct zstream *z = &gz->z;

    if (((z)->flags & 0x1)) {
 if (z->func == &deflate_funcs) {
     finalizer_warn("Zlib::GzipWriter object must be closed explicitly.");
 }
 zstream_finalize(z);
    }
    if (gz->cbuf) {
 ruby_xfree(gz->cbuf);
    }
    ruby_xfree(gz);
}

static size_t
gzfile_memsize(const void *p)
{
    const struct gzfile *gz = p;
    size_t size = sizeof(struct gzfile);

    if (gz->cbuf)
 size += 10;

    return size;
}

static const rb_data_type_t gzfile_data_type = {
    "gzfile",
    { gzfile_mark, gzfile_free, gzfile_memsize, },
     0, 0, 1
};

static void
gzfile_init(struct gzfile *gz, const struct zstream_funcs *funcs, void (*endfunc)(struct gzfile *))
{
    zstream_init(&gz->z, funcs);
    gz->z.flags |= 0x10;
    gz->io = ((VALUE)RUBY_Qnil);
    gz->level = 0;
    gz->mtime = 0;
    gz->os_code = 0x03;
    gz->orig_name = ((VALUE)RUBY_Qnil);
    gz->comment = ((VALUE)RUBY_Qnil);
    gz->crc = crc32(0, 0, 0);
    gz->lineno = 0;
    gz->ungetc = 0;
    gz->end = endfunc;
    gz->enc = rb_default_external_encoding();
    gz->enc2 = 0;
    gz->ec = ((void*)0);
    gz->ecflags = 0;
    gz->ecopts = ((VALUE)RUBY_Qnil);
    gz->cbuf = 0;
    gz->path = ((VALUE)RUBY_Qnil);
}

static VALUE
gzfile_new(VALUE klass, const struct zstream_funcs *funcs, void (*endfunc)(struct gzfile *))
{
    VALUE obj;
    struct gzfile *gz;

    obj = ({ VALUE data_struct_obj = rb_data_typed_object_zalloc(klass, sizeof(struct gzfile), &gzfile_data_type); (void)((gz) = (struct gzfile *)(((struct RData*)(data_struct_obj))->data));; data_struct_obj; });
    gzfile_init(gz, funcs, endfunc);
    return obj;
}




static void
gzfile_reset(struct gzfile *gz)
{
    zstream_reset(&gz->z);
    gz->z.flags |= 0x10;
    gz->crc = crc32(0, 0, 0);
    gz->lineno = 0;
    gz->ungetc = 0;
    if (gz->ec) {
 rb_econv_close(gz->ec);
 gz->ec = rb_econv_open_opts(gz->enc2->name, gz->enc->name,
        gz->ecflags, gz->ecopts);
    }
}

static void
gzfile_close(struct gzfile *gz, int closeflag)
{
    VALUE io = gz->io;

    gz->end(gz);
    gz->io = ((VALUE)RUBY_Qnil);
    gz->orig_name = ((VALUE)RUBY_Qnil);
    gz->comment = ((VALUE)RUBY_Qnil);
    if (closeflag && rb_respond_to(io, id_close)) {
 rb_funcall(io, id_close, 0);
    }
}

static void
gzfile_write_raw(struct gzfile *gz)
{
    VALUE str;

    if ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) > 0) {
 str = zstream_detach_buffer(&gz->z);
 (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
 rb_funcall(gz->io, id_write, 1, str);
 if ((gz->z.flags & 0x20)
     && rb_respond_to(gz->io, id_flush))
     rb_funcall(gz->io, id_flush, 0);
    }
}

static VALUE
gzfile_read_raw_partial(VALUE arg)
{
    struct gzfile *gz = (struct gzfile*)arg;
    VALUE str;

    str = rb_funcall(gz->io, id_readpartial, 1, (((VALUE)(2048))<<1 | RUBY_FIXNUM_FLAG));
    rb_check_type((VALUE)(str),(RUBY_T_STRING));
    return str;
}

static VALUE
gzfile_read_raw_rescue(VALUE arg)
{
    struct gzfile *gz = (struct gzfile*)arg;
    VALUE str = ((VALUE)RUBY_Qnil);
    if (rb_obj_is_kind_of(rb_errinfo(), rb_eNoMethodError)) {
        str = rb_funcall(gz->io, id_read, 1, (((VALUE)(2048))<<1 | RUBY_FIXNUM_FLAG));
        if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
            rb_check_type((VALUE)(str),(RUBY_T_STRING));
        }
    }
    return str;
}

static VALUE
gzfile_read_raw(struct gzfile *gz)
{
    return rb_rescue2(gzfile_read_raw_partial, (VALUE)gz,
                      gzfile_read_raw_rescue, (VALUE)gz,
                      rb_eEOFError, rb_eNoMethodError, (VALUE)0);
}

static int
gzfile_read_raw_ensure(struct gzfile *gz, long size)
{
    VALUE str;

    if (gz->io == ((VALUE)RUBY_Qundef)) {
 if (!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil)) || (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len) < size)
     rb_raise(cGzError, "unexpected end of string");
    }
    while (!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil)) || (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len) < size) {
 str = gzfile_read_raw(gz);
 if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) return 0;
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; })), zstream_append_input((&gz->z), (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    }
    return 1;
}

static char *
gzfile_read_raw_until_zero(struct gzfile *gz, long offset)
{
    VALUE str;
    char *p;

    for (;;) {
 p = memchr((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr) + offset, '\0',
     (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len) - offset);
 if (p) break;
 str = gzfile_read_raw(gz);
 if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
     rb_raise(cGzError, "unexpected end of file");
 }
 offset = (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; })), zstream_append_input((&gz->z), (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
    }
    return p;
}

static unsigned int
gzfile_get16(const unsigned char *src)
{
    unsigned int n;
    n = *(src++) & 0xff;
    n |= (*(src++) & 0xff) << 8;
    return n;
}

static unsigned long
gzfile_get32(const unsigned char *src)
{
    unsigned long n;
    n = *(src++) & 0xff;
    n |= (*(src++) & 0xff) << 8;
    n |= (*(src++) & 0xff) << 16;
    n |= (*(src++) & 0xffU) << 24;
    return n;
}

static void
gzfile_set32(unsigned long n, unsigned char *dst)
{
    *(dst++) = n & 0xff;
    *(dst++) = (n >> 8) & 0xff;
    *(dst++) = (n >> 16) & 0xff;
    *dst = (n >> 24) & 0xff;
}

static void
gzfile_raise(struct gzfile *gz, VALUE klass, const char *message)
{
    VALUE exc =  ({ (__builtin_constant_p(message)) ? rb_exc_new((klass), (message), (long)strlen(message)) : rb_exc_new_cstr((klass), (message)); });
    if (!!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil))) {
 rb_ivar_set(exc, id_input, rb_str_resurrect(gz->z.input));
    }
    rb_exc_raise(exc);
}






static VALUE
gzfile_error_inspect(VALUE error)
{
    VALUE str = rb_call_super(0, 0);
    VALUE input = rb_attr_get(error, id_input);

    if (!!((VALUE)(input) != ((VALUE)RUBY_Qnil))) {
 rb_str_resize(str, (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len)-1);
  ({ (__builtin_constant_p(", input=")) ? rb_str_cat((str), (", input="), (long)strlen(", input=")) : rb_str_cat_cstr((str), (", input=")); });
 rb_str_append(str, rb_str_inspect(input));
  ({ (__builtin_constant_p(">")) ? rb_str_cat((str), (">"), (long)strlen(">")) : rb_str_cat_cstr((str), (">")); });
    }
    return str;
}

static void
gzfile_make_header(struct gzfile *gz)
{
    Bytef buf[10];
    unsigned char flags = 0, extraflags = 0;

    if (!!((VALUE)(gz->orig_name) != ((VALUE)RUBY_Qnil))) {
 flags |= 0x8;
    }
    if (!!((VALUE)(gz->comment) != ((VALUE)RUBY_Qnil))) {
 flags |= 0x10;
    }
    if (gz->mtime == 0) {
 gz->mtime = time(0);
    }

    if (gz->level == 1) {
 extraflags |= 0x4;
    }
    else if (gz->level == 9) {
 extraflags |= 0x2;
    }

    buf[0] = 0x1f;
    buf[1] = 0x8b;
    buf[2] = 8;
    buf[3] = flags;
    gzfile_set32((unsigned long)gz->mtime, &buf[4]);
    buf[8] = extraflags;
    buf[9] = gz->os_code;
    zstream_append_buffer(&gz->z, buf, (long)sizeof(buf));

    if (!!((VALUE)(gz->orig_name) != ((VALUE)RUBY_Qnil))) {
 zstream_append_buffer((&gz->z),(Bytef*)(!(((struct RBasic*)(gz->orig_name))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->orig_name))->as.ary : ((struct RString*)(gz->orig_name))->as.heap.ptr),(!(((struct RBasic*)(gz->orig_name))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->orig_name))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->orig_name))->as.heap.len));
 zstream_append_buffer(&gz->z, (Bytef*)"\0", 1);
    }
    if (!!((VALUE)(gz->comment) != ((VALUE)RUBY_Qnil))) {
 zstream_append_buffer((&gz->z),(Bytef*)(!(((struct RBasic*)(gz->comment))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->comment))->as.ary : ((struct RString*)(gz->comment))->as.heap.ptr),(!(((struct RBasic*)(gz->comment))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->comment))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->comment))->as.heap.len));
 zstream_append_buffer(&gz->z, (Bytef*)"\0", 1);
    }

    gz->z.flags |= (0x20 << 1);
}

static void
gzfile_make_footer(struct gzfile *gz)
{
    Bytef buf[8];

    gzfile_set32(gz->crc, buf);
    gzfile_set32(gz->z.stream.total_in, &buf[4]);
    zstream_append_buffer(&gz->z, buf, (long)sizeof(buf));
    gz->z.flags |= (0x20 << 2);
}

static void
gzfile_read_header(struct gzfile *gz)
{
    const unsigned char *head;
    long len;
    char flags, *p;

    if (!gzfile_read_raw_ensure(gz, 10)) {
 gzfile_raise(gz, cGzError, "not in gzip format");
    }

    head = (unsigned char*)(!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr);

    if (head[0] != 0x1f || head[1] != 0x8b) {
 gzfile_raise(gz, cGzError, "not in gzip format");
    }
    if (head[2] != 8) {
 rb_raise(cGzError, "unsupported compression method %d", head[2]);
    }

    flags = head[3];
    if (flags & 0x2) {
 rb_raise(cGzError, "multi-part gzip file is not supported");
    }
    else if (flags & 0x20) {
 rb_raise(cGzError, "encrypted gzip file is not supported");
    }
    else if (flags & 0xc0) {
 rb_raise(cGzError, "unknown flags 0x%02x", flags);
    }

    if (head[8] & 0x4) {
 gz->level = 1;
    }
    else if (head[8] & 0x2) {
 gz->level = 9;
    }
    else {
 gz->level = (-1);
    }

    gz->mtime = gzfile_get32(&head[4]);
    gz->os_code = head[9];
    zstream_discard_input(&gz->z, 10);

    if (flags & 0x4) {
 if (!gzfile_read_raw_ensure(gz, 2)) {
     rb_raise(cGzError, "unexpected end of file");
 }
 len = gzfile_get16((Bytef*)(!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr));
 if (!gzfile_read_raw_ensure(gz, 2 + len)) {
     rb_raise(cGzError, "unexpected end of file");
 }
 zstream_discard_input(&gz->z, 2 + len);
    }
    if (flags & 0x8) {
 if (!gzfile_read_raw_ensure(gz, 1)) {
     rb_raise(cGzError, "unexpected end of file");
 }
 p = gzfile_read_raw_until_zero(gz, 0);
 len = p - (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr);
 gz->orig_name =  ({ (__builtin_constant_p((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)) && __builtin_constant_p(len)) ? rb_str_new_static(((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)), (len)) : rb_str_new(((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)), (len)); });
 (((!(((VALUE)(gz->orig_name) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(gz->orig_name) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(gz->orig_name))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(gz->orig_name))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(gz->orig_name))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(gz->orig_name))->flags |= (RUBY_FL_TAINT)) : (void)0);
 zstream_discard_input(&gz->z, len + 1);
    }
    if (flags & 0x10) {
 if (!gzfile_read_raw_ensure(gz, 1)) {
     rb_raise(cGzError, "unexpected end of file");
 }
 p = gzfile_read_raw_until_zero(gz, 0);
 len = p - (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr);
 gz->comment =  ({ (__builtin_constant_p((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)) && __builtin_constant_p(len)) ? rb_str_new_static(((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)), (len)) : rb_str_new(((!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr)), (len)); });
 (((!(((VALUE)(gz->comment) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(gz->comment) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(gz->comment))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(gz->comment))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(gz->comment))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(gz->comment))->flags |= (RUBY_FL_TAINT)) : (void)0);
 zstream_discard_input(&gz->z, len + 1);
    }

    if (gz->z.input != ((VALUE)RUBY_Qnil) && (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len) > 0) {
 zstream_run(&gz->z, 0, 0, 2);
    }
}

static void
gzfile_check_footer(struct gzfile *gz)
{
    unsigned long crc, length;

    gz->z.flags |= (0x20 << 2);

    if (!gzfile_read_raw_ensure(gz, 8)) {
 gzfile_raise(gz, cNoFooter, "footer is not found");
    }

    crc = gzfile_get32((Bytef*)(!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr));
    length = gzfile_get32((Bytef*)(!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.input))->as.ary : ((struct RString*)(gz->z.input))->as.heap.ptr) + 4);

    gz->z.stream.total_in += 8;
    zstream_discard_input(&gz->z, 8);

    if (gz->crc != crc) {
 rb_raise(cCRCError, "invalid compressed data -- crc error");
    }
    if ((uint32_t)gz->z.stream.total_out != length) {
 rb_raise(cLengthError, "invalid compressed data -- length error");
    }
}

static void
gzfile_write(struct gzfile *gz, Bytef *str, long len)
{
    if (!(gz->z.flags & (0x20 << 1))) {
 gzfile_make_header(gz);
    }

    if (len > 0 || (gz->z.flags & 0x20)) {
 gz->crc = checksum_long(crc32, gz->crc, str, len);
 zstream_run(&gz->z, str, len, (gz->z.flags & 0x20)
      ? 2 : 0);
    }
    gzfile_write_raw(gz);
}

static long
gzfile_read_more(struct gzfile *gz)
{
    VALUE str;

    while (!((&gz->z)->flags & 0x4)) {
 str = gzfile_read_raw(gz);
 if (!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
     if (!((&gz->z)->flags & 0x4)) {
  rb_raise(cGzError, "unexpected end of file");
     }
     break;
 }
 if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) > 0) {
     zstream_run(&gz->z, (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len),
   2);
     (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
 }
 if ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) > 0) break;
    }
    return (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));
}

static void
gzfile_calc_crc(struct gzfile *gz, VALUE str)
{
    if ((!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) <= gz->ungetc) {
 gz->ungetc -= (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
    }
    else {
 gz->crc = checksum_long(crc32, gz->crc, (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr) + gz->ungetc,
    (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len) - gz->ungetc);
 gz->ungetc = 0;
    }
}

static VALUE
gzfile_newstr(struct gzfile *gz, VALUE str)
{
    if (!gz->enc2) {
 rb_enc_associate(str, gz->enc);
 (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
 return str;
    }
    if (gz->ec && rb_enc_dummy_p(gz->enc2)) {
        str = rb_econv_str_convert(gz->ec, str, RUBY_ECONV_PARTIAL_INPUT);
 rb_enc_associate(str, gz->enc);
 (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
 return str;
    }
    return rb_str_conv_enc_opts(str, gz->enc2, gz->enc,
    gz->ecflags, gz->ecopts);
}

static long
gzfile_fill(struct gzfile *gz, long len)
{
    if (len < 0)
        rb_raise(rb_eArgError, "negative length %ld given", len);
    if (len == 0)
 return 0;
    while (!((&gz->z)->flags & 0x4) && (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) < len) {
 gzfile_read_more(gz);
    }
    if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) {
 if (!(gz->z.flags & (0x20 << 2))) {
     gzfile_check_footer(gz);
 }
 return -1;
    }
    return len < (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) ? len : (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));
}

static VALUE
gzfile_read(struct gzfile *gz, long len)
{
    VALUE dst;

    len = gzfile_fill(gz, len);
    if (len == 0) return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    if (len < 0) return ((VALUE)RUBY_Qnil);
    dst = zstream_shift_buffer(&gz->z, len);
    if (!!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) gzfile_calc_crc(gz, dst);
    return dst;
}

static VALUE
gzfile_readpartial(struct gzfile *gz, long len, VALUE outbuf)
{
    VALUE dst;

    if (len < 0)
        rb_raise(rb_eArgError, "negative length %ld given", len);

    if (!!((VALUE)(outbuf) != ((VALUE)RUBY_Qnil)))
 (((!(((VALUE)(outbuf) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(outbuf) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(outbuf))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(outbuf))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(outbuf))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(outbuf))->flags |= (RUBY_FL_TAINT)) : (void)0);

    if (len == 0) {
        if (!((VALUE)(outbuf) != ((VALUE)RUBY_Qnil)))
            return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
        else {
            rb_str_resize(outbuf, 0);
            return outbuf;
        }
    }
    while (!((&gz->z)->flags & 0x4) && (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) == 0) {
 gzfile_read_more(gz);
    }
    if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) {
 if (!(gz->z.flags & (0x20 << 2))) {
     gzfile_check_footer(gz);
 }
        if (!!((VALUE)(outbuf) != ((VALUE)RUBY_Qnil)))
            rb_str_resize(outbuf, 0);
 rb_raise(rb_eEOFError, "end of file reached");
    }

    dst = zstream_shift_buffer(&gz->z, len);
    gzfile_calc_crc(gz, dst);

    if (!!((VALUE)(outbuf) != ((VALUE)RUBY_Qnil))) {
        rb_str_resize(outbuf, (!(((struct RBasic*)(dst))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(dst))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(dst))->as.heap.len));
        memcpy((!(((struct RBasic*)(outbuf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(outbuf))->as.ary : ((struct RString*)(outbuf))->as.heap.ptr), (!(((struct RBasic*)(dst))->flags & RSTRING_NOEMBED) ? ((struct RString*)(dst))->as.ary : ((struct RString*)(dst))->as.heap.ptr), (!(((struct RBasic*)(dst))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(dst))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(dst))->as.heap.len));
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(dst); ; rb_gc_guarded_ptr; }));
 dst = outbuf;
    }
    (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(dst))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return dst;
}

static VALUE
gzfile_read_all(struct gzfile *gz)
{
    VALUE dst;

    while (!((&gz->z)->flags & 0x4)) {
 gzfile_read_more(gz);
    }
    if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) {
 if (!(gz->z.flags & (0x20 << 2))) {
     gzfile_check_footer(gz);
 }
 return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
    }

    dst = zstream_detach_buffer(&gz->z);
    if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) return dst;
    gzfile_calc_crc(gz, dst);
    (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(dst))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return gzfile_newstr(gz, dst);
}

static VALUE
gzfile_getc(struct gzfile *gz)
{
    VALUE buf, dst = 0;
    int len;

    len = (gz->enc)->max_enc_len;
    while (!((&gz->z)->flags & 0x4) && (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) < len) {
 gzfile_read_more(gz);
    }
    if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) {
 if (!(gz->z.flags & (0x20 << 2))) {
     gzfile_check_footer(gz);
 }
 return ((VALUE)RUBY_Qnil);
    }

    if (gz->ec && rb_enc_dummy_p(gz->enc2)) {
 const unsigned char *ss, *sp, *se;
 unsigned char *ds, *dp, *de;

 if (!gz->cbuf) {
     gz->cbuf = ((char*)ruby_xmalloc2((size_t)(10),sizeof(char)));
 }
        ss = sp = (const unsigned char*)(!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr);
        se = sp + (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));
        ds = dp = (unsigned char *)gz->cbuf;
        de = (unsigned char *)ds + 10;
        (void)rb_econv_convert(gz->ec, &sp, se, &dp, de, RUBY_ECONV_PARTIAL_INPUT|RUBY_ECONV_AFTER_OUTPUT);
        rb_econv_check_error(gz->ec);
 dst = zstream_shift_buffer(&gz->z, sp - ss);
 gzfile_calc_crc(gz, dst);
 dst =  ({ (__builtin_constant_p(gz->cbuf) && __builtin_constant_p(dp - ds)) ? rb_str_new_static((gz->cbuf), (dp - ds)) : rb_str_new((gz->cbuf), (dp - ds)); });
 rb_enc_associate(dst, gz->enc);
 (((!(((VALUE)(dst) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(dst) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(dst))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(dst))->flags |= (RUBY_FL_TAINT)) : (void)0);
 return dst;
    }
    else {
 buf = gz->z.buf;
 len = rb_enc_mbclen((!(((struct RBasic*)(buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(buf))->as.ary : ((struct RString*)(buf))->as.heap.ptr), (!(((struct RBasic*)(buf))->flags & RSTRING_NOEMBED) ? (((struct RString*)(buf))->as.ary + (long)((((struct RBasic*)(buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT))) : (((struct RString*)(buf))->as.heap.ptr + ((struct RString*)(buf))->as.heap.len)), gz->enc);
 dst = gzfile_read(gz, len);
 if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) return dst;
 return gzfile_newstr(gz, dst);
    }
}

static void
gzfile_ungets(struct gzfile *gz, const Bytef *b, long len)
{
    zstream_buffer_ungets(&gz->z, b, len);
    gz->ungetc+=len;
}

static void
gzfile_ungetbyte(struct gzfile *gz, int c)
{
    zstream_buffer_ungetbyte(&gz->z, c);
    gz->ungetc++;
}

static VALUE
gzfile_writer_end_run(VALUE arg)
{
    struct gzfile *gz = (struct gzfile *)arg;

    if (!(gz->z.flags & (0x20 << 1))) {
 gzfile_make_header(gz);
    }

    zstream_run(&gz->z, (Bytef*)"", 0, 4);
    gzfile_make_footer(gz);
    gzfile_write_raw(gz);

    return ((VALUE)RUBY_Qnil);
}

static void
gzfile_writer_end(struct gzfile *gz)
{
    if (((&gz->z)->flags & 0x8)) return;
    gz->z.flags |= 0x8;

    rb_ensure(gzfile_writer_end_run, (VALUE)gz, zstream_end, (VALUE)&gz->z);
}

static VALUE
gzfile_reader_end_run(VALUE arg)
{
    struct gzfile *gz = (struct gzfile *)arg;

    if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)
 && !(gz->z.flags & (0x20 << 2))) {
 gzfile_check_footer(gz);
    }

    return ((VALUE)RUBY_Qnil);
}

static void
gzfile_reader_end(struct gzfile *gz)
{
    if (((&gz->z)->flags & 0x8)) return;
    gz->z.flags |= 0x8;

    rb_ensure(gzfile_reader_end_run, (VALUE)gz, zstream_end, (VALUE)&gz->z);
}

static void
gzfile_reader_rewind(struct gzfile *gz)
{
    long n;

    n = gz->z.stream.total_in;
    if (!!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil))) {
 n += (!(((struct RBasic*)(gz->z.input))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(gz->z.input))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(gz->z.input))->as.heap.len);
    }

    rb_funcall(gz->io, id_seek, 2, rb_int2inum(-n), (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));
    gzfile_reset(gz);
}

static VALUE
gzfile_reader_get_unused(struct gzfile *gz)
{
    VALUE str;

    if (!((&gz->z)->flags & 0x1)) return ((VALUE)RUBY_Qnil);
    if (!(((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) return ((VALUE)RUBY_Qnil);
    if (!(gz->z.flags & (0x20 << 2))) {
 gzfile_check_footer(gz);
    }
    if (!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil))) return ((VALUE)RUBY_Qnil);

    str = rb_str_resurrect(gz->z.input);
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}

static struct gzfile *
get_gzfile(VALUE obj)
{
    struct gzfile *gz;

    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    if (!((&gz->z)->flags & 0x1)) {
 rb_raise(cGzError, "closed gzip stream");
    }
    return gz;
}
typedef struct {
    int argc;
    VALUE *argv;
    VALUE klass;
} new_wrap_arg_t;

static VALUE
new_wrap(VALUE tmp)
{
    new_wrap_arg_t *arg = (new_wrap_arg_t *)tmp;
    return rb_class_new_instance(arg->argc, arg->argv, arg->klass);
}

static VALUE
gzfile_ensure_close(VALUE obj)
{
    struct gzfile *gz;

    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    if (((&gz->z)->flags & 0x1)) {
 gzfile_close(gz, 1);
    }
    return ((VALUE)RUBY_Qnil);
}

static VALUE
gzfile_wrap(int argc, VALUE *argv, VALUE klass, int close_io_on_error)
{
    VALUE obj;

    if (close_io_on_error) {
 int state = 0;
 new_wrap_arg_t arg;
 arg.argc = argc;
 arg.argv = argv;
 arg.klass = klass;
 obj = rb_protect(new_wrap, (VALUE)&arg, &state);
 if (state) {
     rb_io_close(argv[0]);
     rb_jump_tag(state);
 }
    }
    else {
 obj = rb_class_new_instance(argc, argv, klass);
    }

    if (rb_block_given_p()) {
 return rb_ensure(rb_yield, obj, gzfile_ensure_close, obj);
    }
    else {
 return obj;
    }
}
static VALUE
rb_gzfile_s_wrap(int argc, VALUE *argv, VALUE klass)
{
    return gzfile_wrap(argc, argv, klass, 0);
}






static VALUE
gzfile_s_open(int argc, VALUE *argv, VALUE klass, const char *mode)
{
    VALUE io, filename;

    rb_check_arity(argc, 1, (-1));
    filename = argv[0];
    io = rb_file_open_str(filename, mode);
    argv[0] = io;
    return gzfile_wrap(argc, argv, klass, 1);
}






static VALUE
rb_gzfile_to_io(VALUE obj)
{
    return get_gzfile(obj)->io;
}






static VALUE
rb_gzfile_crc(VALUE obj)
{
    return rb_uint2inum(get_gzfile(obj)->crc);
}






static VALUE
rb_gzfile_mtime(VALUE obj)
{
    return rb_time_new(get_gzfile(obj)->mtime, (time_t)0);
}






static VALUE
rb_gzfile_level(VALUE obj)
{
    return (((VALUE)(get_gzfile(obj)->level))<<1 | RUBY_FIXNUM_FLAG);
}






static VALUE
rb_gzfile_os_code(VALUE obj)
{
    return (((VALUE)(get_gzfile(obj)->os_code))<<1 | RUBY_FIXNUM_FLAG);
}







static VALUE
rb_gzfile_orig_name(VALUE obj)
{
    VALUE str = get_gzfile(obj)->orig_name;
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 str = rb_str_dup(str);
    }
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}







static VALUE
rb_gzfile_comment(VALUE obj)
{
    VALUE str = get_gzfile(obj)->comment;
    if (!!((VALUE)(str) != ((VALUE)RUBY_Qnil))) {
 str = rb_str_dup(str);
    }
    (((!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_NODE) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_BIGNUM && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) != RUBY_T_FLOAT) ? (void)(((struct RBasic*)(str))->flags |= (RUBY_FL_TAINT)) : (void)0);
    return str;
}






static VALUE
rb_gzfile_lineno(VALUE obj)
{
    return (((VALUE)((int)(get_gzfile(obj)->lineno)))<<1 | RUBY_FIXNUM_FLAG);
}






static VALUE
rb_gzfile_set_lineno(VALUE obj, VALUE lineno)
{
    struct gzfile *gz = get_gzfile(obj);
    gz->lineno = rb_num2int_inline(lineno);
    return lineno;
}
static VALUE
rb_gzfile_set_mtime(VALUE obj, VALUE mtime)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE val;

    if (gz->z.flags & (0x20 << 1)) {
 rb_raise(cGzError, "header is already written");
    }

    val = rb_Integer(mtime);
    gz->mtime = ((unsigned int)rb_num2uint(val));

    return mtime;
}






static VALUE
rb_gzfile_set_orig_name(VALUE obj, VALUE str)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE s;
    char *p;

    if (gz->z.flags & (0x20 << 1)) {
 rb_raise(cGzError, "header is already written");
    }
    s = rb_str_dup(rb_str_to_str(str));
    p = memchr((!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr), '\0', (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len));
    if (p) {
 rb_str_resize(s, p - (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr));
    }
    gz->orig_name = s;
    return str;
}






static VALUE
rb_gzfile_set_comment(VALUE obj, VALUE str)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE s;
    char *p;

    if (gz->z.flags & (0x20 << 1)) {
 rb_raise(cGzError, "header is already written");
    }
    s = rb_str_dup(rb_str_to_str(str));
    p = memchr((!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr), '\0', (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len));
    if (p) {
 rb_str_resize(s, p - (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr));
    }
    gz->comment = s;
    return str;
}







static VALUE
rb_gzfile_close(VALUE obj)
{
    struct gzfile *gz;
    VALUE io;

    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    if (!((&gz->z)->flags & 0x1)) {
        return ((VALUE)RUBY_Qnil);
    }
    io = gz->io;
    gzfile_close(gz, 1);
    return io;
}
static VALUE
rb_gzfile_finish(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE io;

    io = gz->io;
    gzfile_close(gz, 0);
    return io;
}







static VALUE
rb_gzfile_closed_p(VALUE obj)
{
    struct gzfile *gz;
    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    return !((VALUE)(gz->io) != ((VALUE)RUBY_Qnil)) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}






static VALUE
rb_gzfile_eof_p(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    return (((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}







static VALUE
rb_gzfile_sync(VALUE obj)
{
    return (get_gzfile(obj)->z.flags & 0x20) ? ((VALUE)RUBY_Qtrue) : ((VALUE)RUBY_Qfalse);
}
static VALUE
rb_gzfile_set_sync(VALUE obj, VALUE mode)
{
    struct gzfile *gz = get_gzfile(obj);

    if (!(((VALUE)(mode) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) {
 gz->z.flags |= 0x20;
    }
    else {
 gz->z.flags &= ~0x20;
    }
    return mode;
}






static VALUE
rb_gzfile_total_in(VALUE obj)
{
    return rb_uint2inum(get_gzfile(obj)->z.stream.total_in);
}






static VALUE
rb_gzfile_total_out(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    uLong total_out = gz->z.stream.total_out;
    long buf_filled = (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));

    if (total_out >= (uLong)buf_filled) {
        return rb_uint2inum(total_out - buf_filled);
    } else {
        return (((VALUE)(-(buf_filled - (long)total_out)))<<1 | RUBY_FIXNUM_FLAG);
    }
}
static VALUE
rb_gzfile_path(VALUE obj)
{
    struct gzfile *gz;
    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    return gz->path;
}

static void
rb_gzfile_ecopts(struct gzfile *gz, VALUE opts)
{
    if (!!((VALUE)(opts) != ((VALUE)RUBY_Qnil))) {
 rb_io_extract_encoding_option(opts, &gz->enc, &gz->enc2, ((void*)0));
    }
    if (gz->enc2) {
 gz->ecflags = rb_econv_prepare_opts(opts, &opts);
 gz->ec = rb_econv_open_opts(gz->enc2->name, gz->enc->name,
        gz->ecflags, opts);
 gz->ecopts = opts;
    }
}
static VALUE
rb_gzwriter_s_allocate(VALUE klass)
{
    return gzfile_new((klass),&deflate_funcs,gzfile_writer_end);
}
static VALUE
rb_gzwriter_s_open(int argc, VALUE *argv, VALUE klass)
{
    return gzfile_s_open(argc, argv, klass, "wb");
}
static VALUE
rb_gzwriter_initialize(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz;
    VALUE io, level, strategy, opt = ((VALUE)RUBY_Qnil);
    int err;

    if (argc > 1) {
 opt = rb_check_convert_type(argv[argc-1], RUBY_T_HASH, "Hash", "to_hash");
 if (!!((VALUE)(opt) != ((VALUE)RUBY_Qnil))) argc--;
    }

    rb_scan_args(argc, argv, "12", &io, &level, &strategy);
    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));


    gz->level = (!((VALUE)(((level))) != ((VALUE)RUBY_Qnil)) ? ((-1)) : (((int)rb_fix2int((VALUE)(((level)))))));
    err = deflateInit2_((&gz->z.stream),(gz->level),(8),(-15),(8), ((!((VALUE)(((strategy))) != ((VALUE)RUBY_Qnil)) ? (0) : (((int)rb_fix2int((VALUE)(((strategy)))))))), "1.2.11", (int)sizeof(z_stream));

    if (err != 0) {
 raise_zlib_error(err, gz->z.stream.msg);
    }
    gz->io = io;
    ((&gz->z)->flags |= 0x1);
    rb_gzfile_ecopts(gz, opt);

    if (rb_respond_to(io, id_path)) {
 gz->path = rb_funcall(gz->io, id_path, 0);
 rb_define_singleton_method(obj, "path", rb_gzfile_path, 0);
    }

    return obj;
}
static VALUE
rb_gzwriter_flush(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE v_flush;
    int flush;

    rb_scan_args(argc, argv, "01", &v_flush);

    flush = (!((VALUE)((v_flush)) != ((VALUE)RUBY_Qnil)) ? (2) : (((int)rb_fix2int((VALUE)((v_flush))))));
    if (flush != 0) {
 zstream_run(&gz->z, (Bytef*)"", 0, flush);
    }

    gzfile_write_raw(gz);
    if (rb_respond_to(gz->io, id_flush)) {
 rb_funcall(gz->io, id_flush, 0);
    }
    return obj;
}




static VALUE
rb_gzwriter_write(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    size_t total = 0;

    while (argc-- > 0) {
 VALUE str = *argv++;
 if (!( ((RUBY_T_STRING) == RUBY_T_FIXNUM) ? (((int)(long)(str))&RUBY_FIXNUM_FLAG) : ((RUBY_T_STRING) == RUBY_T_TRUE) ? ((str) == ((VALUE)RUBY_Qtrue)) : ((RUBY_T_STRING) == RUBY_T_FALSE) ? ((str) == ((VALUE)RUBY_Qfalse)) : ((RUBY_T_STRING) == RUBY_T_NIL) ? ((str) == ((VALUE)RUBY_Qnil)) : ((RUBY_T_STRING) == RUBY_T_UNDEF) ? ((str) == ((VALUE)RUBY_Qundef)) : ((RUBY_T_STRING) == RUBY_T_SYMBOL) ? ((((VALUE)(str)&~((~(VALUE)0)<<RUBY_SPECIAL_SHIFT)) == RUBY_SYMBOL_FLAG)||(!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_SYMBOL))) : ((RUBY_T_STRING) == RUBY_T_FLOAT) ? ( ((((int)(long)(str))&RUBY_FLONUM_MASK) == RUBY_FLONUM_FLAG) || (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == RUBY_T_FLOAT)) : (!(((VALUE)(str) & RUBY_IMMEDIATE_MASK) || !!(((VALUE)(str) & (VALUE)~((VALUE)RUBY_Qnil)) == 0)) && (int)(((struct RBasic*)(str))->flags & RUBY_T_MASK) == (RUBY_T_STRING))))
     str = rb_obj_as_string(str);
 if (gz->enc2 && gz->enc2 != rb_ascii8bit_encoding()) {
     str = rb_str_conv_enc(str, rb_enc_get(str), gz->enc2);
 }
 gzfile_write(gz, (Bytef*)(!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? ((struct RString*)(str))->as.ary : ((struct RString*)(str))->as.heap.ptr), (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len));
 total += (!(((struct RBasic*)(str))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(str))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(str))->as.heap.len);
 (* ({ volatile VALUE *rb_gc_guarded_ptr = &(str); ; rb_gc_guarded_ptr; }));
    }
    return rb_ulong2num_inline(total);
}




static VALUE
rb_gzwriter_putc(VALUE obj, VALUE ch)
{
    struct gzfile *gz = get_gzfile(obj);
    char c = rb_num2char_inline(ch);

    gzfile_write(gz, (Bytef*)&c, 1);
    return ch;
}
static VALUE
rb_gzreader_s_allocate(VALUE klass)
{
    return gzfile_new((klass),&inflate_funcs,gzfile_reader_end);
}
static VALUE
rb_gzreader_s_open(int argc, VALUE *argv, VALUE klass)
{
    return gzfile_s_open(argc, argv, klass, "rb");
}
static VALUE
rb_gzreader_initialize(int argc, VALUE *argv, VALUE obj)
{
    VALUE io, opt = ((VALUE)RUBY_Qnil);
    struct gzfile *gz;
    int err;

    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    rb_scan_args(argc, argv, "1:", &io, &opt);


    err = inflateInit2_((&gz->z.stream), (-15), "1.2.11", (int)sizeof(z_stream));
    if (err != 0) {
 raise_zlib_error(err, gz->z.stream.msg);
    }
    gz->io = io;
    ((&gz->z)->flags |= 0x1);
    gzfile_read_header(gz);
    rb_gzfile_ecopts(gz, opt);

    if (rb_respond_to(io, id_path)) {
 gz->path = rb_funcall(gz->io, id_path, 0);
 rb_define_singleton_method(obj, "path", rb_gzfile_path, 0);
    }

    return obj;
}







static VALUE
rb_gzreader_rewind(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    gzfile_reader_rewind(gz);
    return (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG);
}







static VALUE
rb_gzreader_unused(VALUE obj)
{
    struct gzfile *gz;
    ((gz) = (struct gzfile*)rb_check_typeddata((obj), (&gzfile_data_type)));
    return gzfile_reader_get_unused(gz);
}






static VALUE
rb_gzreader_read(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE vlen;
    long len;

    rb_scan_args(argc, argv, "01", &vlen);
    if (!((VALUE)(vlen) != ((VALUE)RUBY_Qnil))) {
 return gzfile_read_all(gz);
    }

    len = rb_num2int_inline(vlen);
    if (len < 0) {
 rb_raise(rb_eArgError, "negative length %ld given", len);
    }
    return gzfile_read(gz, len);
}
static VALUE
rb_gzreader_readpartial(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE vlen, outbuf;
    long len;

    rb_scan_args(argc, argv, "11", &vlen, &outbuf);

    len = rb_num2int_inline(vlen);
    if (len < 0) {
 rb_raise(rb_eArgError, "negative length %ld given", len);
    }
    if (!!((VALUE)(outbuf) != ((VALUE)RUBY_Qnil)))
        rb_check_type((VALUE)(outbuf),(RUBY_T_STRING));
    return gzfile_readpartial(gz, len, outbuf);
}






static VALUE
rb_gzreader_getc(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);

    return gzfile_getc(gz);
}






static VALUE
rb_gzreader_readchar(VALUE obj)
{
    VALUE dst;
    dst = rb_gzreader_getc(obj);
    if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eEOFError, "end of file reached");
    }
    return dst;
}






static VALUE
rb_gzreader_getbyte(VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE dst;

    dst = gzfile_read(gz, 1);
    if (!!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) {
 dst = (((VALUE)((unsigned int)((!(((struct RBasic*)(dst))->flags & RSTRING_NOEMBED) ? ((struct RString*)(dst))->as.ary : ((struct RString*)(dst))->as.heap.ptr)[0]) & 0xff))<<1 | RUBY_FIXNUM_FLAG);
    }
    return dst;
}






static VALUE
rb_gzreader_readbyte(VALUE obj)
{
    VALUE dst;
    dst = rb_gzreader_getbyte(obj);
    if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eEOFError, "end of file reached");
    }
    return dst;
}






static VALUE
rb_gzreader_each_char(VALUE obj)
{
    VALUE c;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((obj), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);

    while (!!((VALUE)(c = rb_gzreader_getc(obj)) != ((VALUE)RUBY_Qnil))) {
 rb_yield(c);
    }
    return ((VALUE)RUBY_Qnil);
}






static VALUE
rb_gzreader_each_byte(VALUE obj)
{
    VALUE c;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((obj), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);

    while (!!((VALUE)(c = rb_gzreader_getbyte(obj)) != ((VALUE)RUBY_Qnil))) {
 rb_yield(c);
    }
    return ((VALUE)RUBY_Qnil);
}






static VALUE
rb_gzreader_bytes(VALUE obj)
{
    rb_warn("Zlib::GzipReader#bytes is deprecated; use #each_byte instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(obj, (rb_id2sym((__builtin_constant_p("each_byte") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_byte")), (long)strlen(("each_byte"))); (ID) rb_intern_id_cache; }) : rb_intern("each_byte")))), 0, 0);
    return rb_gzreader_each_byte(obj);
}






static VALUE
rb_gzreader_ungetc(VALUE obj, VALUE s)
{
    struct gzfile *gz;

    if ((((int)(long)(s))&RUBY_FIXNUM_FLAG))
 return rb_gzreader_ungetbyte(obj, s);
    gz = get_gzfile(obj);
    rb_string_value(&(s));
    if (gz->enc2 && gz->enc2 != rb_ascii8bit_encoding()) {
 s = rb_str_conv_enc(s, rb_enc_get(s), gz->enc2);
    }
    gzfile_ungets(gz, (const Bytef*)(!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? ((struct RString*)(s))->as.ary : ((struct RString*)(s))->as.heap.ptr), (!(((struct RBasic*)(s))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(s))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(s))->as.heap.len));
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(s); ; rb_gc_guarded_ptr; }));
    return ((VALUE)RUBY_Qnil);
}






static VALUE
rb_gzreader_ungetbyte(VALUE obj, VALUE ch)
{
    struct gzfile *gz = get_gzfile(obj);
    gzfile_ungetbyte(gz, rb_num2char_inline(ch));
    return ((VALUE)RUBY_Qnil);
}

static void
gzreader_skip_linebreaks(struct gzfile *gz)
{
    VALUE str;
    char *p;
    int n;

    while ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) == 0) {
 if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) return;
 gzfile_read_more(gz);
    }
    n = 0;
    p = (!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr);

    while (n++, *(p++) == '\n') {
 if (n >= (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len))) {
     str = zstream_detach_buffer(&gz->z);
     gzfile_calc_crc(gz, str);
     while ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) == 0) {
  if ((((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) return;
  gzfile_read_more(gz);
     }
     n = 0;
     p = (!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr);
 }
    }

    str = zstream_shift_buffer(&gz->z, n - 1);
    gzfile_calc_crc(gz, str);
}

static void
rscheck(const char *rsptr, long rslen, VALUE rs)
{
    if ((!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr) != rsptr && (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len) != rslen)
 rb_raise(rb_eRuntimeError, "rs modified");
}

static long
gzreader_charboundary(struct gzfile *gz, long n)
{
    char *s = (!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr);
    char *e = s + (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));
    char *p = ((char *)onigenc_get_left_adjust_char_head((gz->enc),(OnigUChar*)(s),(OnigUChar*)(s + n),(OnigUChar*)(e)));
    long l = p - s;
    if (l < n) {
 n = rb_enc_precise_mbclen(p, e, gz->enc);
 if (((n) < -1)) {
     if ((l = gzfile_fill(gz, l + (-1-(n)))) > 0) {
  return l;
     }
 }
 else if ((0 < (n))) {
     return l + (n);
 }
    }
    return n;
}

static VALUE
gzreader_gets(int argc, VALUE *argv, VALUE obj)
{
    struct gzfile *gz = get_gzfile(obj);
    VALUE rs;
    VALUE dst;
    const char *rsptr;
    char *p, *res;
    long rslen, n, limit = -1;
    int rspara;
    rb_encoding *enc = gz->enc;
    int maxlen = (enc)->max_enc_len;

    if (argc == 0) {
 rs = rb_rs;
    }
    else {
 VALUE lim, tmp;

 rb_scan_args(argc, argv, "11", &rs, &lim);
 if (!!((VALUE)(lim) != ((VALUE)RUBY_Qnil))) {
     if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) rb_string_value(&(rs));
 }
 else if (!!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) {
     tmp = rb_check_string_type(rs);
     if (!((VALUE)(tmp) != ((VALUE)RUBY_Qnil))) {
  lim = rs;
  rs = rb_rs;
     }
     else {
  rs = tmp;
     }
 }
 if (!!((VALUE)(lim) != ((VALUE)RUBY_Qnil))) {
     limit = rb_num2long_inline(lim);
     if (limit == 0) return  ({ (__builtin_constant_p(0) && __builtin_constant_p(0)) ? rb_str_new_static((0), (0)) : rb_str_new((0), (0)); });
 }
    }

    if (!((VALUE)(rs) != ((VALUE)RUBY_Qnil))) {
 if (limit < 0) {
     dst = gzfile_read_all(gz);
     if ((!(((struct RBasic*)(dst))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(dst))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(dst))->as.heap.len) == 0) return ((VALUE)RUBY_Qnil);
 }
 else if ((n = gzfile_fill(gz, limit)) <= 0) {
     return ((VALUE)RUBY_Qnil);
 }
 else {
     if (maxlen > 1 && n >= limit && !(((&(gz)->z)->flags & 0x4) && (!((VALUE)((&(gz)->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&(gz)->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&(gz)->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&(gz)->z)->buf))->as.heap.len)) == 0)) {
  n = gzreader_charboundary(gz, n);
     }
     else {
  n = limit;
     }
     dst = zstream_shift_buffer(&gz->z, n);
     if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) return dst;
     gzfile_calc_crc(gz, dst);
     dst = gzfile_newstr(gz, dst);
 }
 gz->lineno++;
 return dst;
    }

    if ((!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len) == 0) {
 rsptr = "\n\n";
 rslen = 2;
 rspara = 1;
    }
    else {
 rsptr = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? ((struct RString*)(rs))->as.ary : ((struct RString*)(rs))->as.heap.ptr);
 rslen = (!(((struct RBasic*)(rs))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(rs))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(rs))->as.heap.len);
 rspara = 0;
    }

    if (rspara) {
 gzreader_skip_linebreaks(gz);
    }

    while ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) < rslen) {
 if (((&gz->z)->flags & 0x4)) {
     if ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) > 0) gz->lineno++;
     return gzfile_read(gz, rslen);
 }
 gzfile_read_more(gz);
    }

    p = (!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr);
    n = rslen;
    for (;;) {
 long filled;
 if (n > (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len))) {
     if (((&gz->z)->flags & 0x4)) break;
     gzfile_read_more(gz);
     p = (!(((struct RBasic*)(gz->z.buf))->flags & RSTRING_NOEMBED) ? ((struct RString*)(gz->z.buf))->as.ary : ((struct RString*)(gz->z.buf))->as.heap.ptr) + n - rslen;
 }
 if (!rspara) rscheck(rsptr, rslen, rs);
 filled = (!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len));
 if (limit > 0 && filled >= limit) {
     filled = limit;
 }
 res = memchr(p, rsptr[0], (filled - n + 1));
 if (!res) {
     n = filled;
     if (limit > 0 && filled >= limit) break;
     n++;
 }
 else {
     n += (long)(res - p);
     p = res;
     if (rslen == 1 || memcmp(p, rsptr, rslen) == 0) break;
     p++, n++;
 }
    }
    if (maxlen > 1 && n == limit && ((!((VALUE)((&gz->z)->buf) != ((VALUE)RUBY_Qnil)) ? 0 : (!(((struct RBasic*)((&gz->z)->buf))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)((&gz->z)->buf))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)((&gz->z)->buf))->as.heap.len)) > n || !((&gz->z)->flags & 0x4))) {
 n = gzreader_charboundary(gz, n);
    }

    gz->lineno++;
    dst = gzfile_read(gz, n);
    if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) return dst;
    if (rspara) {
 gzreader_skip_linebreaks(gz);
    }
    (* ({ volatile VALUE *rb_gc_guarded_ptr = &(rs); ; rb_gc_guarded_ptr; }));

    return gzfile_newstr(gz, dst);
}






static VALUE
rb_gzreader_gets(int argc, VALUE *argv, VALUE obj)
{
    VALUE dst;
    dst = gzreader_gets(argc, argv, obj);
    if (!!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) {
 rb_lastline_set(dst);
    }
    return dst;
}






static VALUE
rb_gzreader_readline(int argc, VALUE *argv, VALUE obj)
{
    VALUE dst;
    dst = rb_gzreader_gets(argc, argv, obj);
    if (!((VALUE)(dst) != ((VALUE)RUBY_Qnil))) {
 rb_raise(rb_eEOFError, "end of file reached");
    }
    return dst;
}






static VALUE
rb_gzreader_each(int argc, VALUE *argv, VALUE obj)
{
    VALUE str;

    do { if (!rb_block_given_p()) return rb_enumeratorize_with_size((obj), (rb_id2sym(rb_frame_this_func())), (0), (0), (rb_enumerator_size_func *)((0))); } while (0);

    while (!!((VALUE)(str = gzreader_gets(argc, argv, obj)) != ((VALUE)RUBY_Qnil))) {
 rb_yield(str);
    }
    return obj;
}






static VALUE
rb_gzreader_lines(int argc, VALUE *argv, VALUE obj)
{
    rb_warn("Zlib::GzipReader#lines is deprecated; use #each_line instead");
    if (!rb_block_given_p())
 return rb_enumeratorize(obj, (rb_id2sym((__builtin_constant_p("each_line") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("each_line")), (long)strlen(("each_line"))); (ID) rb_intern_id_cache; }) : rb_intern("each_line")))), argc, argv);
    return rb_gzreader_each(argc, argv, obj);
}






static VALUE
rb_gzreader_readlines(int argc, VALUE *argv, VALUE obj)
{
    VALUE str, dst;
    dst = rb_ary_new();
    while (!!((VALUE)(str = gzreader_gets(argc, argv, obj)) != ((VALUE)RUBY_Qnil))) {
 rb_ary_push(dst, str);
    }
    return dst;
}






static VALUE
rb_gzreader_external_encoding(VALUE self)
{
    return rb_enc_from_encoding(get_gzfile(self)->enc);
}

static VALUE
zlib_gzip_ensure(VALUE arg)
{
    struct gzfile *gz = (struct gzfile *)arg;
    rb_rescue((VALUE(*)())gz->end, arg, ((void*)0), ((VALUE)RUBY_Qnil));
    return ((VALUE)RUBY_Qnil);
}

static void
zlib_gzip_end(struct gzfile *gz)
{
    gz->z.flags |= 0x8;
    zstream_run(&gz->z, (Bytef*)"", 0, 4);
    gzfile_make_footer(gz);
    zstream_end(&gz->z);
}



static ID id_level, id_strategy;
static VALUE zlib_gzip_run(VALUE arg);
static VALUE
zlib_s_gzip(int argc, VALUE *argv, VALUE klass)
{
    struct gzfile gz0;
    struct gzfile *gz = &gz0;
    int err;
    VALUE src, opts, level=((VALUE)RUBY_Qnil), strategy=((VALUE)RUBY_Qnil), args[2];

    if ((argc > 0 && !!((VALUE)((opts) = rb_check_hash_type(argv[argc-1])) != ((VALUE)RUBY_Qnil)) && (--argc, 1))) {
 ID keyword_ids[2];
 VALUE kwargs[2];
 keyword_ids[0] = id_level;
 keyword_ids[1] = id_strategy;
 rb_get_kwargs(opts, keyword_ids, 0, 2, kwargs);
 if (kwargs[0] != ((VALUE)RUBY_Qundef)) {
     level = kwargs[0];
 }
 if (kwargs[1] != ((VALUE)RUBY_Qundef)) {
     strategy = kwargs[1];
 }
    }
    rb_scan_args(argc, argv, "10", &src);
    rb_string_value(&(src));
    gzfile_init(gz, &deflate_funcs, zlib_gzip_end);
    gz->level = (!((VALUE)(((level))) != ((VALUE)RUBY_Qnil)) ? ((-1)) : (((int)rb_fix2int((VALUE)(((level)))))));
    err = deflateInit2_((&gz->z.stream),(gz->level),(8),(-15),(8), ((!((VALUE)(((strategy))) != ((VALUE)RUBY_Qnil)) ? (0) : (((int)rb_fix2int((VALUE)(((strategy)))))))), "1.2.11", (int)sizeof(z_stream));

    if (err != 0) {
 zlib_gzip_end(gz);
 raise_zlib_error(err, gz->z.stream.msg);
    }
    ((&gz->z)->flags |= 0x1);
    args[0] = (VALUE)gz;
    args[1] = src;
    return rb_ensure(zlib_gzip_run, (VALUE)args, zlib_gzip_ensure, (VALUE)gz);
}

static VALUE
zlib_gzip_run(VALUE arg)
{
    VALUE *args = (VALUE *)arg;
    struct gzfile *gz = (struct gzfile *)args[0];
    VALUE src = args[1];
    long len;

    gzfile_make_header(gz);
    len = (!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? (long)((((struct RBasic*)(src))->flags >> RSTRING_EMBED_LEN_SHIFT) & (RSTRING_EMBED_LEN_MASK >> RSTRING_EMBED_LEN_SHIFT)) : ((struct RString*)(src))->as.heap.len);
    if (len > 0) {
 Bytef *ptr = (Bytef *)(!(((struct RBasic*)(src))->flags & RSTRING_NOEMBED) ? ((struct RString*)(src))->as.ary : ((struct RString*)(src))->as.heap.ptr);
 gz->crc = checksum_long(crc32, gz->crc, ptr, len);
 zstream_run(&gz->z, ptr, len, 0);
    }
    gzfile_close(gz, 0);
    return zstream_detach_buffer(&gz->z);
}

static void
zlib_gunzip_end(struct gzfile *gz)
{
    gz->z.flags |= 0x8;
    zstream_end(&gz->z);
}

static VALUE zlib_gunzip_run(VALUE arg);
static VALUE
zlib_gunzip(VALUE klass, VALUE src)
{
    struct gzfile gz0;
    struct gzfile *gz = &gz0;
    int err;

    rb_string_value(&(src));

    gzfile_init(gz, &inflate_funcs, zlib_gunzip_end);
    err = inflateInit2_((&gz->z.stream), (-15), "1.2.11", (int)sizeof(z_stream));
    if (err != 0) {
 raise_zlib_error(err, gz->z.stream.msg);
    }
    gz->io = ((VALUE)RUBY_Qundef);
    gz->z.input = src;
    ((&gz->z)->flags |= 0x1);
    return rb_ensure(zlib_gunzip_run, (VALUE)gz, zlib_gzip_ensure, (VALUE)gz);
}

static VALUE
zlib_gunzip_run(VALUE arg)
{
    struct gzfile *gz = (struct gzfile *)arg;
    VALUE dst;

    gzfile_read_header(gz);
    dst = zstream_detach_buffer(&gz->z);
    gzfile_calc_crc(gz, dst);
    if (!((&gz->z)->flags & 0x4)) {
 rb_raise(cGzError, "unexpected end of file");
    }
    if (!((VALUE)(gz->z.input) != ((VALUE)RUBY_Qnil))) {
 rb_raise(cNoFooter, "footer is not found");
    }
    gzfile_check_footer(gz);
    return dst;
}



void
Init_zlib(void)
{
    VALUE mZlib, cZStream, cDeflate, cInflate;

    VALUE cGzipFile, cGzipWriter, cGzipReader;


    mZlib = rb_define_module("Zlib");

    id_dictionaries = (__builtin_constant_p("@dictionaries") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("@dictionaries")), (long)strlen(("@dictionaries"))); (ID) rb_intern_id_cache; }) : rb_intern("@dictionaries"));

    cZError = rb_define_class_under(mZlib, "Error", rb_eStandardError);
    cStreamEnd = rb_define_class_under(mZlib, "StreamEnd", cZError);
    cNeedDict = rb_define_class_under(mZlib, "NeedDict", cZError);
    cDataError = rb_define_class_under(mZlib, "DataError", cZError);
    cStreamError = rb_define_class_under(mZlib, "StreamError", cZError);
    cMemError = rb_define_class_under(mZlib, "MemError", cZError);
    cBufError = rb_define_class_under(mZlib, "BufError", cZError);
    cVersionError = rb_define_class_under(mZlib, "VersionError", cZError);

    rb_define_module_function(mZlib, "zlib_version", rb_zlib_version, 0);
    rb_define_module_function(mZlib, "adler32", rb_zlib_adler32, -1);
    rb_define_module_function(mZlib, "adler32_combine", rb_f_notimplement, 3);
    rb_define_module_function(mZlib, "crc32", rb_zlib_crc32, -1);
    rb_define_module_function(mZlib, "crc32_combine", rb_f_notimplement, 3);
    rb_define_module_function(mZlib, "crc_table", rb_zlib_crc_table, 0);


    rb_define_const(mZlib, "VERSION",  ({ (__builtin_constant_p("0.6.0")) ? rb_str_new_static(("0.6.0"), (long)strlen("0.6.0")) : rb_str_new_cstr("0.6.0"); }));

    rb_define_const(mZlib, "ZLIB_VERSION",  ({ (__builtin_constant_p("1.2.11")) ? rb_str_new_static(("1.2.11"), (long)strlen("1.2.11")) : rb_str_new_cstr("1.2.11"); }));

    cZStream = rb_define_class_under(mZlib, "ZStream", rb_cObject);
    rb_undef_alloc_func(cZStream);
    rb_define_method(cZStream, "avail_out", rb_zstream_avail_out, 0);
    rb_define_method(cZStream, "avail_out=", rb_zstream_set_avail_out, 1);
    rb_define_method(cZStream, "avail_in", rb_zstream_avail_in, 0);
    rb_define_method(cZStream, "total_in", rb_zstream_total_in, 0);
    rb_define_method(cZStream, "total_out", rb_zstream_total_out, 0);
    rb_define_method(cZStream, "data_type", rb_zstream_data_type, 0);
    rb_define_method(cZStream, "adler", rb_zstream_adler, 0);
    rb_define_method(cZStream, "finished?", rb_zstream_finished_p, 0);
    rb_define_method(cZStream, "stream_end?", rb_zstream_finished_p, 0);
    rb_define_method(cZStream, "closed?", rb_zstream_closed_p, 0);
    rb_define_method(cZStream, "ended?", rb_zstream_closed_p, 0);
    rb_define_method(cZStream, "close", rb_zstream_end, 0);
    rb_define_method(cZStream, "end", rb_zstream_end, 0);
    rb_define_method(cZStream, "reset", rb_zstream_reset, 0);
    rb_define_method(cZStream, "finish", rb_zstream_finish, 0);
    rb_define_method(cZStream, "flush_next_in", rb_zstream_flush_next_in, 0);
    rb_define_method(cZStream, "flush_next_out", rb_zstream_flush_next_out, 0);




    rb_define_const(mZlib, "BINARY", (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));







    rb_define_const(mZlib, "ASCII", (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));





    rb_define_const(mZlib, "TEXT", (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));





    rb_define_const(mZlib, "UNKNOWN", (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG));

    cDeflate = rb_define_class_under(mZlib, "Deflate", cZStream);
    rb_define_singleton_method(cDeflate, "deflate", rb_deflate_s_deflate, -1);
    rb_define_singleton_method(mZlib, "deflate", rb_deflate_s_deflate, -1);
    rb_define_alloc_func(cDeflate, rb_deflate_s_allocate);
    rb_define_method(cDeflate, "initialize", rb_deflate_initialize, -1);
    rb_define_method(cDeflate, "initialize_copy", rb_deflate_init_copy, 1);
    rb_define_method(cDeflate, "deflate", rb_deflate_deflate, -1);
    rb_define_method(cDeflate, "<<", rb_deflate_addstr, 1);
    rb_define_method(cDeflate, "flush", rb_deflate_flush, -1);
    rb_define_method(cDeflate, "params", rb_deflate_params, 2);
    rb_define_method(cDeflate, "set_dictionary", rb_deflate_set_dictionary, 1);

    cInflate = rb_define_class_under(mZlib, "Inflate", cZStream);
    rb_define_singleton_method(cInflate, "inflate", rb_inflate_s_inflate, 1);
    rb_define_singleton_method(mZlib, "inflate", rb_inflate_s_inflate, 1);
    rb_define_alloc_func(cInflate, rb_inflate_s_allocate);
    rb_define_method(cInflate, "initialize", rb_inflate_initialize, -1);
    rb_define_method(cInflate, "add_dictionary", rb_inflate_add_dictionary, 1);
    rb_define_method(cInflate, "inflate", rb_inflate_inflate, 1);
    rb_define_method(cInflate, "<<", rb_inflate_addstr, 1);
    rb_define_method(cInflate, "sync", rb_inflate_sync, 1);
    rb_define_method(cInflate, "sync_point?", rb_inflate_sync_point_p, 0);
    rb_define_method(cInflate, "set_dictionary", rb_inflate_set_dictionary, 1);




    rb_define_const(mZlib, "NO_COMPRESSION", (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "BEST_SPEED", (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "BEST_COMPRESSION", (((VALUE)(9))<<1 | RUBY_FIXNUM_FLAG));



    rb_define_const(mZlib, "DEFAULT_COMPRESSION",
      (((VALUE)((-1)))<<1 | RUBY_FIXNUM_FLAG));







    rb_define_const(mZlib, "FILTERED", (((VALUE)(1))<<1 | RUBY_FIXNUM_FLAG));


    rb_define_const(mZlib, "HUFFMAN_ONLY", (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG));





    rb_define_const(mZlib, "RLE", (((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG));






    rb_define_const(mZlib, "FIXED", (((VALUE)(4))<<1 | RUBY_FIXNUM_FLAG));



    rb_define_const(mZlib, "DEFAULT_STRATEGY", (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));





    rb_define_const(mZlib, "MAX_WBITS", (((VALUE)(15))<<1 | RUBY_FIXNUM_FLAG));



    rb_define_const(mZlib, "DEF_MEM_LEVEL", (((VALUE)(8))<<1 | RUBY_FIXNUM_FLAG));



    rb_define_const(mZlib, "MAX_MEM_LEVEL", (((VALUE)(9))<<1 | RUBY_FIXNUM_FLAG));





    rb_define_const(mZlib, "NO_FLUSH", (((VALUE)(0))<<1 | RUBY_FIXNUM_FLAG));






    rb_define_const(mZlib, "SYNC_FLUSH", (((VALUE)(2))<<1 | RUBY_FIXNUM_FLAG));







    rb_define_const(mZlib, "FULL_FLUSH", (((VALUE)(3))<<1 | RUBY_FIXNUM_FLAG));


    rb_define_const(mZlib, "FINISH", (((VALUE)(4))<<1 | RUBY_FIXNUM_FLAG));


    id_write = (__builtin_constant_p("write") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("write")), (long)strlen(("write"))); (ID) rb_intern_id_cache; }) : rb_intern("write"));
    id_read = (__builtin_constant_p("read") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("read")), (long)strlen(("read"))); (ID) rb_intern_id_cache; }) : rb_intern("read"));
    id_readpartial = (__builtin_constant_p("readpartial") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("readpartial")), (long)strlen(("readpartial"))); (ID) rb_intern_id_cache; }) : rb_intern("readpartial"));
    id_flush = (__builtin_constant_p("flush") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("flush")), (long)strlen(("flush"))); (ID) rb_intern_id_cache; }) : rb_intern("flush"));
    id_seek = (__builtin_constant_p("seek") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("seek")), (long)strlen(("seek"))); (ID) rb_intern_id_cache; }) : rb_intern("seek"));
    id_close = (__builtin_constant_p("close") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("close")), (long)strlen(("close"))); (ID) rb_intern_id_cache; }) : rb_intern("close"));
    id_path = (__builtin_constant_p("path") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("path")), (long)strlen(("path"))); (ID) rb_intern_id_cache; }) : rb_intern("path"));
    id_input = (__builtin_constant_p("@input") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("@input")), (long)strlen(("@input"))); (ID) rb_intern_id_cache; }) : rb_intern("@input"));

    cGzipFile = rb_define_class_under(mZlib, "GzipFile", rb_cObject);
    cGzError = rb_define_class_under(cGzipFile, "Error", cZError);


    rb_define_attr(cGzError, "input", 1, 0);
    rb_define_method(cGzError, "inspect", gzfile_error_inspect, 0);

    cNoFooter = rb_define_class_under(cGzipFile, "NoFooter", cGzError);
    cCRCError = rb_define_class_under(cGzipFile, "CRCError", cGzError);
    cLengthError = rb_define_class_under(cGzipFile,"LengthError",cGzError);

    cGzipWriter = rb_define_class_under(mZlib, "GzipWriter", cGzipFile);
    cGzipReader = rb_define_class_under(mZlib, "GzipReader", cGzipFile);
    rb_include_module(cGzipReader, rb_mEnumerable);

    rb_define_singleton_method(cGzipFile, "wrap", rb_gzfile_s_wrap, -1);
    rb_undef_alloc_func(cGzipFile);
    rb_define_method(cGzipFile, "to_io", rb_gzfile_to_io, 0);
    rb_define_method(cGzipFile, "crc", rb_gzfile_crc, 0);
    rb_define_method(cGzipFile, "mtime", rb_gzfile_mtime, 0);
    rb_define_method(cGzipFile, "level", rb_gzfile_level, 0);
    rb_define_method(cGzipFile, "os_code", rb_gzfile_os_code, 0);
    rb_define_method(cGzipFile, "orig_name", rb_gzfile_orig_name, 0);
    rb_define_method(cGzipFile, "comment", rb_gzfile_comment, 0);
    rb_define_method(cGzipReader, "lineno", rb_gzfile_lineno, 0);
    rb_define_method(cGzipReader, "lineno=", rb_gzfile_set_lineno, 1);
    rb_define_method(cGzipWriter, "mtime=", rb_gzfile_set_mtime, 1);
    rb_define_method(cGzipWriter, "orig_name=", rb_gzfile_set_orig_name,1);
    rb_define_method(cGzipWriter, "comment=", rb_gzfile_set_comment, 1);
    rb_define_method(cGzipFile, "close", rb_gzfile_close, 0);
    rb_define_method(cGzipFile, "finish", rb_gzfile_finish, 0);
    rb_define_method(cGzipFile, "closed?", rb_gzfile_closed_p, 0);
    rb_define_method(cGzipReader, "eof", rb_gzfile_eof_p, 0);
    rb_define_method(cGzipReader, "eof?", rb_gzfile_eof_p, 0);
    rb_define_method(cGzipFile, "sync", rb_gzfile_sync, 0);
    rb_define_method(cGzipFile, "sync=", rb_gzfile_set_sync, 1);
    rb_define_method(cGzipReader, "pos", rb_gzfile_total_out, 0);
    rb_define_method(cGzipWriter, "pos", rb_gzfile_total_in, 0);
    rb_define_method(cGzipReader, "tell", rb_gzfile_total_out, 0);
    rb_define_method(cGzipWriter, "tell", rb_gzfile_total_in, 0);

    rb_define_singleton_method(cGzipWriter, "open", rb_gzwriter_s_open,-1);
    rb_define_alloc_func(cGzipWriter, rb_gzwriter_s_allocate);
    rb_define_method(cGzipWriter, "initialize", rb_gzwriter_initialize,-1);
    rb_define_method(cGzipWriter, "flush", rb_gzwriter_flush, -1);
    rb_define_method(cGzipWriter, "write", rb_gzwriter_write, -1);
    rb_define_method(cGzipWriter, "putc", rb_gzwriter_putc, 1);
    rb_define_method(cGzipWriter, "<<", rb_io_addstr, 1);
    rb_define_method(cGzipWriter, "printf", rb_io_printf, -1);
    rb_define_method(cGzipWriter, "print", rb_io_print, -1);
    rb_define_method(cGzipWriter, "puts", rb_io_puts, -1);

    rb_define_singleton_method(cGzipReader, "open", rb_gzreader_s_open,-1);
    rb_define_alloc_func(cGzipReader, rb_gzreader_s_allocate);
    rb_define_method(cGzipReader, "initialize", rb_gzreader_initialize, -1);
    rb_define_method(cGzipReader, "rewind", rb_gzreader_rewind, 0);
    rb_define_method(cGzipReader, "unused", rb_gzreader_unused, 0);
    rb_define_method(cGzipReader, "read", rb_gzreader_read, -1);
    rb_define_method(cGzipReader, "readpartial", rb_gzreader_readpartial, -1);
    rb_define_method(cGzipReader, "getc", rb_gzreader_getc, 0);
    rb_define_method(cGzipReader, "getbyte", rb_gzreader_getbyte, 0);
    rb_define_method(cGzipReader, "readchar", rb_gzreader_readchar, 0);
    rb_define_method(cGzipReader, "readbyte", rb_gzreader_readbyte, 0);
    rb_define_method(cGzipReader, "each_byte", rb_gzreader_each_byte, 0);
    rb_define_method(cGzipReader, "each_char", rb_gzreader_each_char, 0);
    rb_define_method(cGzipReader, "bytes", rb_gzreader_bytes, 0);
    rb_define_method(cGzipReader, "ungetc", rb_gzreader_ungetc, 1);
    rb_define_method(cGzipReader, "ungetbyte", rb_gzreader_ungetbyte, 1);
    rb_define_method(cGzipReader, "gets", rb_gzreader_gets, -1);
    rb_define_method(cGzipReader, "readline", rb_gzreader_readline, -1);
    rb_define_method(cGzipReader, "each", rb_gzreader_each, -1);
    rb_define_method(cGzipReader, "each_line", rb_gzreader_each, -1);
    rb_define_method(cGzipReader, "lines", rb_gzreader_lines, -1);
    rb_define_method(cGzipReader, "readlines", rb_gzreader_readlines, -1);
    rb_define_method(cGzipReader, "external_encoding", rb_gzreader_external_encoding, 0);

    rb_define_singleton_method(mZlib, "gzip", zlib_s_gzip, -1);
    rb_define_singleton_method(mZlib, "gunzip", zlib_gunzip, 1);


    rb_define_const(mZlib, "OS_CODE", (((VALUE)(0x03))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_MSDOS", (((VALUE)(0x00))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_AMIGA", (((VALUE)(0x01))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_VMS", (((VALUE)(0x02))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_UNIX", (((VALUE)(0x03))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_ATARI", (((VALUE)(0x05))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_OS2", (((VALUE)(0x06))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_MACOS", (((VALUE)(0x07))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_TOPS20", (((VALUE)(0x0a))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_WIN32", (((VALUE)(0x0b))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_VMCMS", (((VALUE)(0x04))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_ZSYSTEM", (((VALUE)(0x08))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_CPM", (((VALUE)(0x09))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_QDOS", (((VALUE)(0x0c))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_RISCOS", (((VALUE)(0x0d))<<1 | RUBY_FIXNUM_FLAG));

    rb_define_const(mZlib, "OS_UNKNOWN", (((VALUE)(0xff))<<1 | RUBY_FIXNUM_FLAG));

    id_level = (__builtin_constant_p("level") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("level")), (long)strlen(("level"))); (ID) rb_intern_id_cache; }) : rb_intern("level"));
    id_strategy = (__builtin_constant_p("strategy") ?  ({ static ID rb_intern_id_cache; if (!rb_intern_id_cache) rb_intern_id_cache = rb_intern2((("strategy")), (long)strlen(("strategy"))); (ID) rb_intern_id_cache; }) : rb_intern("strategy"));

}
