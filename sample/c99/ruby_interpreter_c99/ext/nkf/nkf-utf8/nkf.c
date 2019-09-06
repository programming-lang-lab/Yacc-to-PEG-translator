typedef int nkf_char;





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
typedef _G_fpos_t fpos_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s)  ;
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;
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
extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;
extern int fscanf (FILE *restrict __stream, const char *restrict __format, ...)  ;


extern int scanf (const char *restrict __format, ...)  ;

extern int sscanf (const char *restrict __s, const char *restrict __format, ...)  ;
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
      ;
extern int vfscanf (FILE *restrict __s, const char *restrict __format, __gnuc_va_list __arg) 



      ;
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg) 

      ;
extern int vsscanf (const char *restrict __s, const char *restrict __format, __gnuc_va_list __arg)  



     ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
          ;
extern char *gets (char *__s) ;
extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s);
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;
extern void perror (const char *__s);













typedef int wchar_t;
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
extern long int strtol (const char *restrict __nptr,
   char **restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *restrict __nptr,
      char **restrict __endptr, int __base)
      ;

extern long long int strtoll (const char *restrict __nptr,
         char **restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *restrict __nptr,
     char **restrict __endptr, int __base)
      ;
extern int rand (void) ;

extern void srand (unsigned int __seed) ;
extern void *malloc (size_t __size)   ;

extern void *calloc (size_t __nmemb, size_t __size)
       ;






extern void *realloc (void *__ptr, size_t __size)
      ;
extern void free (void *__ptr) ;
extern void abort (void)  ;



extern int atexit (void (*__func) (void))  ;
extern void exit (int __status)  ;
extern void _Exit (int __status)  ;




extern char *getenv (const char *__name)   ;
extern int system (const char *__command) ;
typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
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
extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *restrict __pwc,
     const char *restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *restrict __pwcs,
   const char *restrict __s, size_t __n) ;

extern size_t wcstombs (char *restrict __s,
   const wchar_t *restrict __pwcs, size_t __n)
     ;














extern void *memcpy (void *restrict __dest, const void *restrict __src,
       size_t __n)  ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
      ;
extern void *memset (void *__s, int __c, size_t __n)  ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
       ;
extern void *memchr (const void *__s, int __c, size_t __n)
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
extern char *strchr (const char *__s, int __c)
       ;
extern char *strrchr (const char *__s, int __c)
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
extern size_t strlen (const char *__s)
       ;
extern char *strerror (int __errnum) ;
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
    __time_t st_atime;
    __syscall_ulong_t st_atimensec;
    __time_t st_mtime;
    __syscall_ulong_t st_mtimensec;
    __time_t st_ctime;
    __syscall_ulong_t st_ctimensec;


    __syscall_slong_t __glibc_reserved[3];
  };
extern int stat (const char *restrict __file,
   struct stat *restrict __buf)  ;



extern int fstat (int __fd, struct stat *__buf)  ;
extern int chmod (const char *__file, __mode_t __mode)
      ;
extern __mode_t umask (__mode_t __mask) ;
extern int mkdir (const char *__path, __mode_t __mode)
      ;
extern int mkfifo (const char *__path, __mode_t __mode)
      ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
      ;
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf)  ;
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf)  ;
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
      ;
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev)  ;

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
      ;

typedef __ssize_t ssize_t;






extern int access (const char *__name, int __type)  ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern int pipe (int __pipedes[2])  ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
       ;
extern int chdir (const char *__path)   ;
extern char *getcwd (char *__buf, size_t __size)  ;
extern int dup (int __fd)  ;


extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[])  ;
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
extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;
extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern __pid_t setsid (void) ;







extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[])  ;
extern int setuid (__uid_t __uid)  ;
extern int setgid (__gid_t __gid)  ;
extern __pid_t fork (void) ;
extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
       ;



extern int isatty (int __fd) ;
extern int link (const char *__from, const char *__to)
       ;
extern int unlink (const char *__name)  ;
extern int rmdir (const char *__path)  ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);
extern int fsync (int __fd);



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
      ;
typedef void *nl_catd;


typedef int nl_item;





extern nl_catd catopen (const char *__cat_name, int __flag) ;



extern char *catgets (nl_catd __catalog, int __set, int __number,
        const char *__string)  ;


extern int catclose (nl_catd __catalog)  ;

enum
{



  ABDAY_1 = (((2) << 16) | (0)),

  ABDAY_2,

  ABDAY_3,

  ABDAY_4,

  ABDAY_5,

  ABDAY_6,

  ABDAY_7,



  DAY_1,

  DAY_2,

  DAY_3,

  DAY_4,

  DAY_5,

  DAY_6,

  DAY_7,




  ABMON_1,

  ABMON_2,

  ABMON_3,

  ABMON_4,

  ABMON_5,

  ABMON_6,

  ABMON_7,

  ABMON_8,

  ABMON_9,

  ABMON_10,

  ABMON_11,

  ABMON_12,




  MON_1,

  MON_2,

  MON_3,

  MON_4,

  MON_5,

  MON_6,

  MON_7,

  MON_8,

  MON_9,

  MON_10,

  MON_11,

  MON_12,


  AM_STR,

  PM_STR,


  D_T_FMT,

  D_FMT,

  T_FMT,

  T_FMT_AMPM,


  ERA,

  __ERA_YEAR,



  ERA_D_FMT,

  ALT_DIGITS,

  ERA_D_T_FMT,

  ERA_T_FMT,


  _NL_TIME_ERA_NUM_ENTRIES,
  _NL_TIME_ERA_ENTRIES,

  _NL_WABDAY_1,
  _NL_WABDAY_2,
  _NL_WABDAY_3,
  _NL_WABDAY_4,
  _NL_WABDAY_5,
  _NL_WABDAY_6,
  _NL_WABDAY_7,


  _NL_WDAY_1,
  _NL_WDAY_2,
  _NL_WDAY_3,
  _NL_WDAY_4,
  _NL_WDAY_5,
  _NL_WDAY_6,
  _NL_WDAY_7,



  _NL_WABMON_1,
  _NL_WABMON_2,
  _NL_WABMON_3,
  _NL_WABMON_4,
  _NL_WABMON_5,
  _NL_WABMON_6,
  _NL_WABMON_7,
  _NL_WABMON_8,
  _NL_WABMON_9,
  _NL_WABMON_10,
  _NL_WABMON_11,
  _NL_WABMON_12,



  _NL_WMON_1,
  _NL_WMON_2,
  _NL_WMON_3,
  _NL_WMON_4,
  _NL_WMON_5,
  _NL_WMON_6,
  _NL_WMON_7,
  _NL_WMON_8,
  _NL_WMON_9,
  _NL_WMON_10,
  _NL_WMON_11,
  _NL_WMON_12,

  _NL_WAM_STR,
  _NL_WPM_STR,

  _NL_WD_T_FMT,
  _NL_WD_FMT,
  _NL_WT_FMT,
  _NL_WT_FMT_AMPM,

  _NL_WERA_YEAR,
  _NL_WERA_D_FMT,
  _NL_WALT_DIGITS,
  _NL_WERA_D_T_FMT,
  _NL_WERA_T_FMT,

  _NL_TIME_WEEK_NDAYS,
  _NL_TIME_WEEK_1STDAY,
  _NL_TIME_WEEK_1STWEEK,
  _NL_TIME_FIRST_WEEKDAY,
  _NL_TIME_FIRST_WORKDAY,
  _NL_TIME_CAL_DIRECTION,
  _NL_TIME_TIMEZONE,

  _DATE_FMT,

  _NL_W_DATE_FMT,

  _NL_TIME_CODESET,



  __ALTMON_1,
  __ALTMON_2,
  __ALTMON_3,
  __ALTMON_4,
  __ALTMON_5,
  __ALTMON_6,
  __ALTMON_7,
  __ALTMON_8,
  __ALTMON_9,
  __ALTMON_10,
  __ALTMON_11,
  __ALTMON_12,
  _NL_WALTMON_1,
  _NL_WALTMON_2,
  _NL_WALTMON_3,
  _NL_WALTMON_4,
  _NL_WALTMON_5,
  _NL_WALTMON_6,
  _NL_WALTMON_7,
  _NL_WALTMON_8,
  _NL_WALTMON_9,
  _NL_WALTMON_10,
  _NL_WALTMON_11,
  _NL_WALTMON_12,



  _NL_ABALTMON_1,
  _NL_ABALTMON_2,
  _NL_ABALTMON_3,
  _NL_ABALTMON_4,
  _NL_ABALTMON_5,
  _NL_ABALTMON_6,
  _NL_ABALTMON_7,
  _NL_ABALTMON_8,
  _NL_ABALTMON_9,
  _NL_ABALTMON_10,
  _NL_ABALTMON_11,
  _NL_ABALTMON_12,



  _NL_WABALTMON_1,
  _NL_WABALTMON_2,
  _NL_WABALTMON_3,
  _NL_WABALTMON_4,
  _NL_WABALTMON_5,
  _NL_WABALTMON_6,
  _NL_WABALTMON_7,
  _NL_WABALTMON_8,
  _NL_WABALTMON_9,
  _NL_WABALTMON_10,
  _NL_WABALTMON_11,
  _NL_WABALTMON_12,

  _NL_NUM_LC_TIME,




  _NL_COLLATE_NRULES = (((3) << 16) | (0)),
  _NL_COLLATE_RULESETS,
  _NL_COLLATE_TABLEMB,
  _NL_COLLATE_WEIGHTMB,
  _NL_COLLATE_EXTRAMB,
  _NL_COLLATE_INDIRECTMB,
  _NL_COLLATE_GAP1,
  _NL_COLLATE_GAP2,
  _NL_COLLATE_GAP3,
  _NL_COLLATE_TABLEWC,
  _NL_COLLATE_WEIGHTWC,
  _NL_COLLATE_EXTRAWC,
  _NL_COLLATE_INDIRECTWC,
  _NL_COLLATE_SYMB_HASH_SIZEMB,
  _NL_COLLATE_SYMB_TABLEMB,
  _NL_COLLATE_SYMB_EXTRAMB,
  _NL_COLLATE_COLLSEQMB,
  _NL_COLLATE_COLLSEQWC,
  _NL_COLLATE_CODESET,
  _NL_NUM_LC_COLLATE,




  _NL_CTYPE_CLASS = (((0) << 16) | (0)),
  _NL_CTYPE_TOUPPER,
  _NL_CTYPE_GAP1,
  _NL_CTYPE_TOLOWER,
  _NL_CTYPE_GAP2,
  _NL_CTYPE_CLASS32,
  _NL_CTYPE_GAP3,
  _NL_CTYPE_GAP4,
  _NL_CTYPE_GAP5,
  _NL_CTYPE_GAP6,
  _NL_CTYPE_CLASS_NAMES,
  _NL_CTYPE_MAP_NAMES,
  _NL_CTYPE_WIDTH,
  _NL_CTYPE_MB_CUR_MAX,
  _NL_CTYPE_CODESET_NAME,
  CODESET = _NL_CTYPE_CODESET_NAME,

  _NL_CTYPE_TOUPPER32,
  _NL_CTYPE_TOLOWER32,
  _NL_CTYPE_CLASS_OFFSET,
  _NL_CTYPE_MAP_OFFSET,
  _NL_CTYPE_INDIGITS_MB_LEN,
  _NL_CTYPE_INDIGITS0_MB,
  _NL_CTYPE_INDIGITS1_MB,
  _NL_CTYPE_INDIGITS2_MB,
  _NL_CTYPE_INDIGITS3_MB,
  _NL_CTYPE_INDIGITS4_MB,
  _NL_CTYPE_INDIGITS5_MB,
  _NL_CTYPE_INDIGITS6_MB,
  _NL_CTYPE_INDIGITS7_MB,
  _NL_CTYPE_INDIGITS8_MB,
  _NL_CTYPE_INDIGITS9_MB,
  _NL_CTYPE_INDIGITS_WC_LEN,
  _NL_CTYPE_INDIGITS0_WC,
  _NL_CTYPE_INDIGITS1_WC,
  _NL_CTYPE_INDIGITS2_WC,
  _NL_CTYPE_INDIGITS3_WC,
  _NL_CTYPE_INDIGITS4_WC,
  _NL_CTYPE_INDIGITS5_WC,
  _NL_CTYPE_INDIGITS6_WC,
  _NL_CTYPE_INDIGITS7_WC,
  _NL_CTYPE_INDIGITS8_WC,
  _NL_CTYPE_INDIGITS9_WC,
  _NL_CTYPE_OUTDIGIT0_MB,
  _NL_CTYPE_OUTDIGIT1_MB,
  _NL_CTYPE_OUTDIGIT2_MB,
  _NL_CTYPE_OUTDIGIT3_MB,
  _NL_CTYPE_OUTDIGIT4_MB,
  _NL_CTYPE_OUTDIGIT5_MB,
  _NL_CTYPE_OUTDIGIT6_MB,
  _NL_CTYPE_OUTDIGIT7_MB,
  _NL_CTYPE_OUTDIGIT8_MB,
  _NL_CTYPE_OUTDIGIT9_MB,
  _NL_CTYPE_OUTDIGIT0_WC,
  _NL_CTYPE_OUTDIGIT1_WC,
  _NL_CTYPE_OUTDIGIT2_WC,
  _NL_CTYPE_OUTDIGIT3_WC,
  _NL_CTYPE_OUTDIGIT4_WC,
  _NL_CTYPE_OUTDIGIT5_WC,
  _NL_CTYPE_OUTDIGIT6_WC,
  _NL_CTYPE_OUTDIGIT7_WC,
  _NL_CTYPE_OUTDIGIT8_WC,
  _NL_CTYPE_OUTDIGIT9_WC,
  _NL_CTYPE_TRANSLIT_TAB_SIZE,
  _NL_CTYPE_TRANSLIT_FROM_IDX,
  _NL_CTYPE_TRANSLIT_FROM_TBL,
  _NL_CTYPE_TRANSLIT_TO_IDX,
  _NL_CTYPE_TRANSLIT_TO_TBL,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING,
  _NL_CTYPE_TRANSLIT_IGNORE_LEN,
  _NL_CTYPE_TRANSLIT_IGNORE,
  _NL_CTYPE_MAP_TO_NONASCII,
  _NL_CTYPE_NONASCII_CASE,
  _NL_CTYPE_EXTRA_MAP_1,
  _NL_CTYPE_EXTRA_MAP_2,
  _NL_CTYPE_EXTRA_MAP_3,
  _NL_CTYPE_EXTRA_MAP_4,
  _NL_CTYPE_EXTRA_MAP_5,
  _NL_CTYPE_EXTRA_MAP_6,
  _NL_CTYPE_EXTRA_MAP_7,
  _NL_CTYPE_EXTRA_MAP_8,
  _NL_CTYPE_EXTRA_MAP_9,
  _NL_CTYPE_EXTRA_MAP_10,
  _NL_CTYPE_EXTRA_MAP_11,
  _NL_CTYPE_EXTRA_MAP_12,
  _NL_CTYPE_EXTRA_MAP_13,
  _NL_CTYPE_EXTRA_MAP_14,
  _NL_NUM_LC_CTYPE,




  __INT_CURR_SYMBOL = (((4) << 16) | (0)),



  __CURRENCY_SYMBOL,



  __MON_DECIMAL_POINT,



  __MON_THOUSANDS_SEP,



  __MON_GROUPING,



  __POSITIVE_SIGN,



  __NEGATIVE_SIGN,



  __INT_FRAC_DIGITS,



  __FRAC_DIGITS,



  __P_CS_PRECEDES,



  __P_SEP_BY_SPACE,



  __N_CS_PRECEDES,



  __N_SEP_BY_SPACE,



  __P_SIGN_POSN,



  __N_SIGN_POSN,



  _NL_MONETARY_CRNCYSTR,

  __INT_P_CS_PRECEDES,



  __INT_P_SEP_BY_SPACE,



  __INT_N_CS_PRECEDES,



  __INT_N_SEP_BY_SPACE,



  __INT_P_SIGN_POSN,



  __INT_N_SIGN_POSN,



  _NL_MONETARY_DUO_INT_CURR_SYMBOL,
  _NL_MONETARY_DUO_CURRENCY_SYMBOL,
  _NL_MONETARY_DUO_INT_FRAC_DIGITS,
  _NL_MONETARY_DUO_FRAC_DIGITS,
  _NL_MONETARY_DUO_P_CS_PRECEDES,
  _NL_MONETARY_DUO_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_N_CS_PRECEDES,
  _NL_MONETARY_DUO_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_P_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_N_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_P_SIGN_POSN,
  _NL_MONETARY_DUO_N_SIGN_POSN,
  _NL_MONETARY_DUO_INT_P_SIGN_POSN,
  _NL_MONETARY_DUO_INT_N_SIGN_POSN,
  _NL_MONETARY_UNO_VALID_FROM,
  _NL_MONETARY_UNO_VALID_TO,
  _NL_MONETARY_DUO_VALID_FROM,
  _NL_MONETARY_DUO_VALID_TO,
  _NL_MONETARY_CONVERSION_RATE,
  _NL_MONETARY_DECIMAL_POINT_WC,
  _NL_MONETARY_THOUSANDS_SEP_WC,
  _NL_MONETARY_CODESET,
  _NL_NUM_LC_MONETARY,



  __DECIMAL_POINT = (((1) << 16) | (0)),



  RADIXCHAR = __DECIMAL_POINT,

  __THOUSANDS_SEP,



  THOUSEP = __THOUSANDS_SEP,

  __GROUPING,



  _NL_NUMERIC_DECIMAL_POINT_WC,
  _NL_NUMERIC_THOUSANDS_SEP_WC,
  _NL_NUMERIC_CODESET,
  _NL_NUM_LC_NUMERIC,

  __YESEXPR = (((5) << 16) | (0)),

  __NOEXPR,

  __YESSTR,



  __NOSTR,



  _NL_MESSAGES_CODESET,
  _NL_NUM_LC_MESSAGES,

  _NL_PAPER_HEIGHT = (((7) << 16) | (0)),
  _NL_PAPER_WIDTH,
  _NL_PAPER_CODESET,
  _NL_NUM_LC_PAPER,

  _NL_NAME_NAME_FMT = (((8) << 16) | (0)),
  _NL_NAME_NAME_GEN,
  _NL_NAME_NAME_MR,
  _NL_NAME_NAME_MRS,
  _NL_NAME_NAME_MISS,
  _NL_NAME_NAME_MS,
  _NL_NAME_CODESET,
  _NL_NUM_LC_NAME,

  _NL_ADDRESS_POSTAL_FMT = (((9) << 16) | (0)),
  _NL_ADDRESS_COUNTRY_NAME,
  _NL_ADDRESS_COUNTRY_POST,
  _NL_ADDRESS_COUNTRY_AB2,
  _NL_ADDRESS_COUNTRY_AB3,
  _NL_ADDRESS_COUNTRY_CAR,
  _NL_ADDRESS_COUNTRY_NUM,
  _NL_ADDRESS_COUNTRY_ISBN,
  _NL_ADDRESS_LANG_NAME,
  _NL_ADDRESS_LANG_AB,
  _NL_ADDRESS_LANG_TERM,
  _NL_ADDRESS_LANG_LIB,
  _NL_ADDRESS_CODESET,
  _NL_NUM_LC_ADDRESS,

  _NL_TELEPHONE_TEL_INT_FMT = (((10) << 16) | (0)),
  _NL_TELEPHONE_TEL_DOM_FMT,
  _NL_TELEPHONE_INT_SELECT,
  _NL_TELEPHONE_INT_PREFIX,
  _NL_TELEPHONE_CODESET,
  _NL_NUM_LC_TELEPHONE,

  _NL_MEASUREMENT_MEASUREMENT = (((11) << 16) | (0)),
  _NL_MEASUREMENT_CODESET,
  _NL_NUM_LC_MEASUREMENT,

  _NL_IDENTIFICATION_TITLE = (((12) << 16) | (0)),
  _NL_IDENTIFICATION_SOURCE,
  _NL_IDENTIFICATION_ADDRESS,
  _NL_IDENTIFICATION_CONTACT,
  _NL_IDENTIFICATION_EMAIL,
  _NL_IDENTIFICATION_TEL,
  _NL_IDENTIFICATION_FAX,
  _NL_IDENTIFICATION_LANGUAGE,
  _NL_IDENTIFICATION_TERRITORY,
  _NL_IDENTIFICATION_AUDIENCE,
  _NL_IDENTIFICATION_APPLICATION,
  _NL_IDENTIFICATION_ABBREVIATION,
  _NL_IDENTIFICATION_REVISION,
  _NL_IDENTIFICATION_DATE,
  _NL_IDENTIFICATION_CATEGORY,
  _NL_IDENTIFICATION_CODESET,
  _NL_NUM_LC_IDENTIFICATION,


  _NL_NUM
};
extern char *nl_langinfo (nl_item __item) ;


struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, const char *__locale) ;


extern struct lconv *localeconv (void) ;
extern const unsigned short euc_to_utf8_1byte[];
extern const unsigned short *const euc_to_utf8_2bytes[];
extern const unsigned short *const euc_to_utf8_2bytes_ms[];
extern const unsigned short *const euc_to_utf8_2bytes_mac[];
extern const unsigned short *const euc_to_utf8_2bytes_x0213[];
extern const unsigned short *const x0212_to_utf8_2bytes[];
extern const unsigned short *const x0212_to_utf8_2bytes_x0213[];




extern const unsigned short x0213_combining_chars[5];
extern const unsigned short x0213_combining_table[25][3];
extern const unsigned short x0213_1_surrogate_table[26][3];
extern const unsigned short x0213_2_surrogate_table[277][3];







extern const unsigned short *const utf8_to_euc_2bytes[];
extern const unsigned short *const utf8_to_euc_2bytes_ms[];
extern const unsigned short *const utf8_to_euc_2bytes_932[];
extern const unsigned short *const utf8_to_euc_2bytes_mac[];
extern const unsigned short *const utf8_to_euc_2bytes_x0213[];
extern const unsigned short *const *const utf8_to_euc_3bytes[];
extern const unsigned short *const *const utf8_to_euc_3bytes_ms[];
extern const unsigned short *const *const utf8_to_euc_3bytes_932[];
extern const unsigned short *const *const utf8_to_euc_3bytes_mac[];
extern const unsigned short *const *const utf8_to_euc_3bytes_x0213[];







struct normalization_pair {
    const unsigned char nfc[3];
    const unsigned char nfd[9];
};
extern const struct normalization_pair normalization_table[];





extern const unsigned short shiftjis_cp932[3][189];


extern const unsigned short cp932inv[2][189];



extern const unsigned short shiftjis_x0212[3][189];
extern const unsigned short *const x0212_shiftjis[];
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
      ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
      ;




extern void __assert (const char *__assertion, const char *__file, int __line)
      ;
enum byte_order {
    ENDIAN_BIG = 1,
    ENDIAN_LITTLE = 2,
    ENDIAN_2143 = 3,
    ENDIAN_3412 = 4
};
enum nkf_encodings {
    ASCII,
    ISO_8859_1,
    ISO_2022_JP,
    CP50220,
    CP50221,
    CP50222,
    ISO_2022_JP_1,
    ISO_2022_JP_3,
    ISO_2022_JP_2004,
    SHIFT_JIS,
    WINDOWS_31J,
    CP10001,
    EUC_JP,
    EUCJP_NKF,
    CP51932,
    EUCJP_MS,
    EUCJP_ASCII,
    SHIFT_JISX0213,
    SHIFT_JIS_2004,
    EUC_JISX0213,
    EUC_JIS_2004,
    UTF_8,
    UTF_8N,
    UTF_8_BOM,
    UTF8_MAC,
    UTF_16,
    UTF_16BE,
    UTF_16BE_BOM,
    UTF_16LE,
    UTF_16LE_BOM,
    UTF_32,
    UTF_32BE,
    UTF_32BE_BOM,
    UTF_32LE,
    UTF_32LE_BOM,
    BINARY,
    NKF_ENCODING_TABLE_SIZE,
    JIS_X_0201_1976_K = 0x1013,



    JIS_X_0208 = 0x1168,
    JIS_X_0212 = 0x1159,

    JIS_X_0213_2 = 0x1229,
    JIS_X_0213_1 = 0x1233
};

static nkf_char s_iconv(nkf_char c2, nkf_char c1, nkf_char c0);
static nkf_char e_iconv(nkf_char c2, nkf_char c1, nkf_char c0);
static nkf_char w_iconv(nkf_char c2, nkf_char c1, nkf_char c0);
static nkf_char w_iconv16(nkf_char c2, nkf_char c1, nkf_char c0);
static nkf_char w_iconv32(nkf_char c2, nkf_char c1, nkf_char c0);
static void j_oconv(nkf_char c2, nkf_char c1);
static void s_oconv(nkf_char c2, nkf_char c1);
static void e_oconv(nkf_char c2, nkf_char c1);
static void w_oconv(nkf_char c2, nkf_char c1);
static void w_oconv16(nkf_char c2, nkf_char c1);
static void w_oconv32(nkf_char c2, nkf_char c1);

typedef struct {
    const char *name;
    nkf_char (*iconv)(nkf_char c2, nkf_char c1, nkf_char c0);
    void (*oconv)(nkf_char c2, nkf_char c1);
} nkf_native_encoding;

nkf_native_encoding NkfEncodingASCII = { "ASCII", e_iconv, e_oconv };
nkf_native_encoding NkfEncodingISO_2022_JP = { "ISO-2022-JP", e_iconv, j_oconv };
nkf_native_encoding NkfEncodingShift_JIS = { "Shift_JIS", s_iconv, s_oconv };
nkf_native_encoding NkfEncodingEUC_JP = { "EUC-JP", e_iconv, e_oconv };
nkf_native_encoding NkfEncodingUTF_8 = { "UTF-8", w_iconv, w_oconv };
nkf_native_encoding NkfEncodingUTF_16 = { "UTF-16", w_iconv16, w_oconv16 };
nkf_native_encoding NkfEncodingUTF_32 = { "UTF-32", w_iconv32, w_oconv32 };

typedef struct {
    const int id;
    const char *name;
    const nkf_native_encoding *base_encoding;
} nkf_encoding;

nkf_encoding nkf_encoding_table[] = {
    {ASCII, "US-ASCII", &NkfEncodingASCII},
    {ISO_8859_1, "ISO-8859-1", &NkfEncodingASCII},
    {ISO_2022_JP, "ISO-2022-JP", &NkfEncodingISO_2022_JP},
    {CP50220, "CP50220", &NkfEncodingISO_2022_JP},
    {CP50221, "CP50221", &NkfEncodingISO_2022_JP},
    {CP50222, "CP50222", &NkfEncodingISO_2022_JP},
    {ISO_2022_JP_1, "ISO-2022-JP-1", &NkfEncodingISO_2022_JP},
    {ISO_2022_JP_3, "ISO-2022-JP-3", &NkfEncodingISO_2022_JP},
    {ISO_2022_JP_2004, "ISO-2022-JP-2004", &NkfEncodingISO_2022_JP},
    {SHIFT_JIS, "Shift_JIS", &NkfEncodingShift_JIS},
    {WINDOWS_31J, "Windows-31J", &NkfEncodingShift_JIS},
    {CP10001, "CP10001", &NkfEncodingShift_JIS},
    {EUC_JP, "EUC-JP", &NkfEncodingEUC_JP},
    {EUCJP_NKF, "eucJP-nkf", &NkfEncodingEUC_JP},
    {CP51932, "CP51932", &NkfEncodingEUC_JP},
    {EUCJP_MS, "eucJP-MS", &NkfEncodingEUC_JP},
    {EUCJP_ASCII, "eucJP-ASCII", &NkfEncodingEUC_JP},
    {SHIFT_JISX0213, "Shift_JISX0213", &NkfEncodingShift_JIS},
    {SHIFT_JIS_2004, "Shift_JIS-2004", &NkfEncodingShift_JIS},
    {EUC_JISX0213, "EUC-JISX0213", &NkfEncodingEUC_JP},
    {EUC_JIS_2004, "EUC-JIS-2004", &NkfEncodingEUC_JP},
    {UTF_8, "UTF-8", &NkfEncodingUTF_8},
    {UTF_8N, "UTF-8N", &NkfEncodingUTF_8},
    {UTF_8_BOM, "UTF-8-BOM", &NkfEncodingUTF_8},
    {UTF8_MAC, "UTF8-MAC", &NkfEncodingUTF_8},
    {UTF_16, "UTF-16", &NkfEncodingUTF_16},
    {UTF_16BE, "UTF-16BE", &NkfEncodingUTF_16},
    {UTF_16BE_BOM, "UTF-16BE-BOM", &NkfEncodingUTF_16},
    {UTF_16LE, "UTF-16LE", &NkfEncodingUTF_16},
    {UTF_16LE_BOM, "UTF-16LE-BOM", &NkfEncodingUTF_16},
    {UTF_32, "UTF-32", &NkfEncodingUTF_32},
    {UTF_32BE, "UTF-32BE", &NkfEncodingUTF_32},
    {UTF_32BE_BOM, "UTF-32BE-BOM", &NkfEncodingUTF_32},
    {UTF_32LE, "UTF-32LE", &NkfEncodingUTF_32},
    {UTF_32LE_BOM, "UTF-32LE-BOM", &NkfEncodingUTF_32},
    {BINARY, "BINARY", &NkfEncodingASCII},
    {-1, ((void*)0), ((void*)0)}
};

struct {
    const char *name;
    const int id;
} encoding_name_to_id_table[] = {
    {"US-ASCII", ASCII},
    {"ASCII", ASCII},
    {"646", ASCII},
    {"ROMAN8", ASCII},
    {"ISO-2022-JP", ISO_2022_JP},
    {"ISO2022JP-CP932", CP50220},
    {"CP50220", CP50220},
    {"CP50221", CP50221},
    {"CSISO2022JP", CP50221},
    {"CP50222", CP50222},
    {"ISO-2022-JP-1", ISO_2022_JP_1},
    {"ISO-2022-JP-3", ISO_2022_JP_3},
    {"ISO-2022-JP-2004", ISO_2022_JP_2004},
    {"SHIFT_JIS", SHIFT_JIS},
    {"SJIS", SHIFT_JIS},
    {"MS_Kanji", SHIFT_JIS},
    {"PCK", SHIFT_JIS},
    {"WINDOWS-31J", WINDOWS_31J},
    {"CSWINDOWS31J", WINDOWS_31J},
    {"CP932", WINDOWS_31J},
    {"MS932", WINDOWS_31J},
    {"CP10001", CP10001},
    {"EUCJP", EUC_JP},
    {"EUC-JP", EUC_JP},
    {"EUCJP-NKF", EUCJP_NKF},
    {"CP51932", CP51932},
    {"EUC-JP-MS", EUCJP_MS},
    {"EUCJP-MS", EUCJP_MS},
    {"EUCJPMS", EUCJP_MS},
    {"EUC-JP-ASCII", EUCJP_ASCII},
    {"EUCJP-ASCII", EUCJP_ASCII},
    {"SHIFT_JISX0213", SHIFT_JISX0213},
    {"SHIFT_JIS-2004", SHIFT_JIS_2004},
    {"EUC-JISX0213", EUC_JISX0213},
    {"EUC-JIS-2004", EUC_JIS_2004},
    {"UTF-8", UTF_8},
    {"UTF-8N", UTF_8N},
    {"UTF-8-BOM", UTF_8_BOM},
    {"UTF8-MAC", UTF8_MAC},
    {"UTF-8-MAC", UTF8_MAC},
    {"UTF-16", UTF_16},
    {"UTF-16BE", UTF_16BE},
    {"UTF-16BE-BOM", UTF_16BE_BOM},
    {"UTF-16LE", UTF_16LE},
    {"UTF-16LE-BOM", UTF_16LE_BOM},
    {"UTF-32", UTF_32},
    {"UTF-32BE", UTF_32BE},
    {"UTF-32BE-BOM", UTF_32BE_BOM},
    {"UTF-32LE", UTF_32LE},
    {"UTF-32LE-BOM", UTF_32LE_BOM},
    {"BINARY", BINARY},
    {((void*)0), -1}
};
struct input_code{
    const char *name;
    nkf_char stat;
    nkf_char score;
    nkf_char index;
    nkf_char buf[3];
    void (*status_func)(struct input_code *, nkf_char);
    nkf_char (*iconv_func)(nkf_char c2, nkf_char c1, nkf_char c0);
    int _file_stat;
};

static const char *input_codename = ((void*)0);
static nkf_encoding *input_encoding = ((void*)0);
static nkf_encoding *output_encoding = ((void*)0);
static int ms_ucs_map_f = 0;



static int no_cp932ext_f = 0;

static int no_best_fit_chars_f = 0;
static int input_endian = ENDIAN_BIG;
static int input_bom_f = 0;
static nkf_char unicode_subchar = '?';
static void (*encode_fallback)(nkf_char c) = ((void*)0);
static void w_status(struct input_code *, nkf_char);


static int output_bom_f = 0;
static int output_endian = ENDIAN_BIG;


static void std_putc(nkf_char c);
static nkf_char std_getc(FILE *f);
static nkf_char std_ungetc(nkf_char c,FILE *f);

static nkf_char broken_getc(FILE *f);
static nkf_char broken_ungetc(nkf_char c,FILE *f);

static nkf_char mime_getc(FILE *f);

static void mime_putc(nkf_char c);




static unsigned char stdibuf[16384];
static unsigned char stdobuf[16384];





static int unbuf_f = 0;
static int estab_f = 0;
static int nop_f = 0;
static int binmode_f = 1;
static int rot_f = 0;
static int hira_f = 0;
static int alpha_f = 0;
static int mime_f = 8;
static int mime_decode_f = 0;
static int mimebuf_f = 0;
static int broken_f = 0;
static int iso8859_f = 0;
static int mimeout_f = 0;
static int x0201_f = (-1);
static int iso2022jp_f = 0;


static int nfc_f = 0;
static nkf_char (*i_nfc_getc)(FILE *) = std_getc;
static nkf_char (*i_nfc_ungetc)(nkf_char c ,FILE *f) = std_ungetc;



static int cap_f = 0;
static nkf_char (*i_cgetc)(FILE *) = std_getc;
static nkf_char (*i_cungetc)(nkf_char c ,FILE *f) = std_ungetc;

static int url_f = 0;
static nkf_char (*i_ugetc)(FILE *) = std_getc;
static nkf_char (*i_uungetc)(nkf_char c ,FILE *f) = std_ungetc;
static int numchar_f = 0;
static nkf_char (*i_ngetc)(FILE *) = std_getc;
static nkf_char (*i_nungetc)(nkf_char c ,FILE *f) = std_ungetc;



static int noout_f = 0;
static void no_putc(nkf_char c);
static int debug_f = 0;
static void debug(const char *str);
static nkf_char (*iconv_for_check)(nkf_char c2,nkf_char c1,nkf_char c0) = 0;


static int guess_f = 0;
static void set_input_codename(const char *codename);







static int cp51932_f = 0;


static int cp932inv_f = 1;




static int x0212_f = 0;
static int x0213_f = 0;

static unsigned char prefix_table[256];

static void e_status(struct input_code *, nkf_char);
static void s_status(struct input_code *, nkf_char);

struct input_code input_code_list[] = {
    {"EUC-JP", 0, 0, 0, {0, 0, 0}, e_status, e_iconv, 0},
    {"Shift_JIS", 0, 0, 0, {0, 0, 0}, s_status, s_iconv, 0},

    {"UTF-8", 0, 0, 0, {0, 0, 0}, w_status, w_iconv, 0},
    {"UTF-16", 0, 0, 0, {0, 0, 0}, ((void*)0), w_iconv16, 0},
    {"UTF-32", 0, 0, 0, {0, 0, 0}, ((void*)0), w_iconv32, 0},

    {((void*)0), 0, 0, 0, {0, 0, 0}, ((void*)0), ((void*)0), 0}
};

static int mimeout_mode = 0;
static int base64_count = 0;




static int f_line = 0;
static int f_prev = 0;
static int fold_preserve_f = 0;
static int fold_f = 0;
static int fold_len = 0;


static unsigned char kanji_intro = 'B';
static unsigned char ascii_intro = 'B';






static int fold_margin = 10;



static nkf_char
no_connection2( nkf_char c2,  nkf_char c1,  nkf_char c0)
{
    fprintf(stderr,"nkf internal module connection failure.\n");
    exit(1);
    return 0;
}

static void
no_connection(nkf_char c2, nkf_char c1)
{
    no_connection2(c2,c1,0);
}

static nkf_char (*iconv)(nkf_char c2,nkf_char c1,nkf_char c0) = no_connection2;
static void (*oconv)(nkf_char c2,nkf_char c1) = no_connection;

static void (*o_zconv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_fconv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_eol_conv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_rot_conv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_hira_conv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_base64conv)(nkf_char c2,nkf_char c1) = no_connection;
static void (*o_iso2022jp_check_conv)(nkf_char c2,nkf_char c1) = no_connection;



static void (*o_putc)(nkf_char c) = std_putc;

static nkf_char (*i_getc)(FILE *f) = std_getc;
static nkf_char (*i_ungetc)(nkf_char c,FILE *f) =std_ungetc;

static nkf_char (*i_bgetc)(FILE *) = std_getc;
static nkf_char (*i_bungetc)(nkf_char c ,FILE *f) = std_ungetc;

static void (*o_mputc)(nkf_char c) = std_putc ;

static nkf_char (*i_mgetc)(FILE *) = std_getc;
static nkf_char (*i_mungetc)(nkf_char c ,FILE *f) = std_ungetc;


static nkf_char (*i_mgetc_buf)(FILE *) = std_getc;
static nkf_char (*i_mungetc_buf)(nkf_char c,FILE *f) = std_ungetc;


static int output_mode = ASCII;
static int input_mode = ASCII;
static int mime_decode_mode = 0;





static const unsigned char cv[]= {
    0x21,0x21,0x21,0x23,0x21,0x56,0x21,0x57,
    0x21,0x22,0x21,0x26,0x25,0x72,0x25,0x21,
    0x25,0x23,0x25,0x25,0x25,0x27,0x25,0x29,
    0x25,0x63,0x25,0x65,0x25,0x67,0x25,0x43,
    0x21,0x3c,0x25,0x22,0x25,0x24,0x25,0x26,
    0x25,0x28,0x25,0x2a,0x25,0x2b,0x25,0x2d,
    0x25,0x2f,0x25,0x31,0x25,0x33,0x25,0x35,
    0x25,0x37,0x25,0x39,0x25,0x3b,0x25,0x3d,
    0x25,0x3f,0x25,0x41,0x25,0x44,0x25,0x46,
    0x25,0x48,0x25,0x4a,0x25,0x4b,0x25,0x4c,
    0x25,0x4d,0x25,0x4e,0x25,0x4f,0x25,0x52,
    0x25,0x55,0x25,0x58,0x25,0x5b,0x25,0x5e,
    0x25,0x5f,0x25,0x60,0x25,0x61,0x25,0x62,
    0x25,0x64,0x25,0x66,0x25,0x68,0x25,0x69,
    0x25,0x6a,0x25,0x6b,0x25,0x6c,0x25,0x6d,
    0x25,0x6f,0x25,0x73,0x21,0x2b,0x21,0x2c,
    0x00,0x00};




static const unsigned char dv[]= {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x25,0x74,
    0x00,0x00,0x00,0x00,0x25,0x2c,0x25,0x2e,
    0x25,0x30,0x25,0x32,0x25,0x34,0x25,0x36,
    0x25,0x38,0x25,0x3a,0x25,0x3c,0x25,0x3e,
    0x25,0x40,0x25,0x42,0x25,0x45,0x25,0x47,
    0x25,0x49,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x25,0x50,0x25,0x53,
    0x25,0x56,0x25,0x59,0x25,0x5c,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00};



static const unsigned char ev[]= {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x25,0x51,0x25,0x54,
    0x25,0x57,0x25,0x5a,0x25,0x5d,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00};



static const unsigned char ev_x0213[]= {
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x25,0x77,0x25,0x78,
    0x25,0x79,0x25,0x7a,0x25,0x7b,0x00,0x00,
    0x00,0x00,0x00,0x00,0x25,0x7c,0x00,0x00,
    0x00,0x00,0x00,0x00,0x25,0x7d,0x00,0x00,
    0x25,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00};




static const unsigned char fv[] = {

    0x00,0x00,0x00,0x00,0x2c,0x2e,0x00,0x3a,
    0x3b,0x3f,0x21,0x00,0x00,0x27,0x60,0x00,
    0x5e,0x00,0x5f,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x2d,0x00,0x2f,
    0x5c,0x00,0x00,0x7c,0x00,0x00,0x60,0x27,
    0x22,0x22,0x28,0x29,0x00,0x00,0x5b,0x5d,
    0x7b,0x7d,0x3c,0x3e,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x2b,0x2d,0x00,0x00,
    0x00,0x3d,0x00,0x3c,0x3e,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x24,0x00,0x00,0x25,0x23,0x26,0x2a,0x40,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
} ;



static int option_mode = 0;
static int file_out_f = 0;

static int overwrite_f = 0;
static int preserve_time_f = 0;
static int backup_f = 0;
static char *backup_suffix = "";


static int eolmode_f = 0;
static int input_eol = 0;
static nkf_char prev_cr = 0;




static void *
nkf_xmalloc(size_t size)
{
    void *ptr;

    if (size == 0) size = 1;

    ptr = malloc(size);
    if (ptr == ((void*)0)) {
 perror("can't malloc");
 exit(1);
    }

    return ptr;
}

static void *
nkf_xrealloc(void *ptr, size_t size)
{
    if (size == 0) size = 1;

    ptr = realloc(ptr, size);
    if (ptr == ((void*)0)) {
 perror("can't realloc");
 exit(1);
    }

    return ptr;
}



static int
nkf_str_caseeql(const char *src, const char *target)
{
    int i;
    for (i = 0; src[i] && target[i]; i++) {
 if ((('a'<=src[i] && src[i]<='z')?(src[i]-('a'-'A')):src[i]) != (('a'<=target[i] && target[i]<='z')?(target[i]-('a'-'A')):target[i])) return 0;
    }
    if (src[i] || target[i]) return 0;
    else return 1;
}

static nkf_encoding*
nkf_enc_from_index(int idx)
{
    if (idx < 0 || NKF_ENCODING_TABLE_SIZE <= idx) {
 return 0;
    }
    return &nkf_encoding_table[idx];
}

static int
nkf_enc_find_index(const char *name)
{
    int i;
    if (name[0] == 'X' && *(name+1) == '-') name += 2;
    for (i = 0; encoding_name_to_id_table[i].id >= 0; i++) {
 if (nkf_str_caseeql(encoding_name_to_id_table[i].name, name)) {
     return encoding_name_to_id_table[i].id;
 }
    }
    return -1;
}

static nkf_encoding*
nkf_enc_find(const char *name)
{
    int idx = -1;
    idx = nkf_enc_find_index(name);
    if (idx < 0) return 0;
    return nkf_enc_from_index(idx);
}
static const char*
nkf_locale_charmap(void)
{

    return nl_langinfo(CODESET);
    return ((void*)0);
}

static nkf_encoding*
nkf_locale_encoding(void)
{
    nkf_encoding *enc = 0;
    const char *encname = nkf_locale_charmap();
    if (encname)
 enc = nkf_enc_find(encname);
    return enc;
}


static nkf_encoding*
nkf_utf8_encoding(void)
{
    return &nkf_encoding_table[UTF_8];
}

static nkf_encoding*
nkf_default_encoding(void)
{
    nkf_encoding *enc = 0;

    enc = nkf_locale_encoding();



    if (!enc) enc = nkf_utf8_encoding();
    return enc;
}

typedef struct {
    long capa;
    long len;
    nkf_char *ptr;
} nkf_buf_t;

static nkf_buf_t *
nkf_buf_new(int length)
{
    nkf_buf_t *buf = nkf_xmalloc(sizeof(nkf_buf_t));
    buf->ptr = nkf_xmalloc(sizeof(nkf_char) * length);
    buf->capa = length;
    buf->len = 0;
    return buf;
}
static nkf_char
nkf_buf_at(nkf_buf_t *buf, int index)
{
    ((index <= buf->len) ? (void) (0) : __assert_fail ("index <= buf->len", "ext/nkf/nkf-utf8/nkf.c", 865,  __PRETTY_FUNCTION__));
    return buf->ptr[index];
}

static void
nkf_buf_clear(nkf_buf_t *buf)
{
    buf->len = 0;
}

static void
nkf_buf_push(nkf_buf_t *buf, nkf_char c)
{
    if (buf->capa <= buf->len) {
 exit(1);
    }
    buf->ptr[buf->len++] = c;
}

static nkf_char
nkf_buf_pop(nkf_buf_t *buf)
{
    ((!((buf)->len == 0)) ? (void) (0) : __assert_fail ("!nkf_buf_empty_p(buf)", "ext/nkf/nkf-utf8/nkf.c", 887,  __PRETTY_FUNCTION__));
    return buf->ptr[--buf->len];
}







static void
version(void)
{
    fprintf(stdout,"Network Kanji Filter Version 2.1.4 (2015-12-12) \nCopyright (C) 1987, FUJITSU LTD. (I.Ichikawa).\nCopyright (C) 1996-2015, The nkf Project.\n");
}

static void
usage(void)
{
    fprintf(stdout,
     "Usage:  nkf -[flags] [--] [in file] .. [out file for -O flag]\n j/s/e/w  Specify output encoding ISO-2022-JP, Shift_JIS, EUC-JP\n          UTF options is -w[8[0],{16,32}[{B,L}[0]]]\n J/S/E/W  Specify input encoding ISO-2022-JP, Shift_JIS, EUC-JP\n          UTF option is -W[8,[16,32][B,L]]\n");
    fprintf(stdout,
     " m[BQSN0] MIME decode [B:base64,Q:quoted,S:strict,N:nonstrict,0:no decode]\n M[BQ]    MIME encode [B:base64 Q:quoted]\n f/F      Folding: -f60 or -f or -f60-10 (fold margin 10) F preserve nl\n");
    fprintf(stdout,
     " Z[0-4]   Default/0: Convert JISX0208 Alphabet to ASCII\n          1: Kankaku to one space  2: to two spaces  3: HTML Entity\n          4: JISX0208 Katakana to JISX0201 Katakana\n X,x      Convert Halfwidth Katakana to Fullwidth or preserve it\n");
    fprintf(stdout,
     " O        Output to File (DEFAULT 'nkf.out')\n L[uwm]   Line mode u:LF w:CRLF m:CR (DEFAULT noconversion)\n");
    fprintf(stdout,
     " --ic=<encoding>        Specify the input encoding\n --oc=<encoding>        Specify the output encoding\n --hiragana --katakana  Hiragana/Katakana Conversion\n --katakana-hiragana    Converts each other\n");
    fprintf(stdout,

     " --{cap, url}-input     Convert hex after ':' or '%%'\n --numchar-input        Convert Unicode Character Reference\n --fb-{skip, html, xml, perl, java, subchar}\n                        Specify unassigned character's replacement\n");
    fprintf(stdout,

     " --in-place[=SUF]       Overwrite original files\n --overwrite[=SUF]      Preserve timestamp of original files\n -g --guess             Guess the input code\n -v --version           Print the version\n --help/-V              Print this help / configuration\n");
    version();
}

static void
show_configuration(void)
{
    fprintf(stdout,
     "Summary of my nkf 2.1.4 (2015-12-12) configuration:\n  Compile-time options:\n    Compiled at:                 Feb 25 2019 03:43:33\n");
    fprintf(stdout,
     "    Default output encoding:     LOCALE (%s)\n", (nkf_default_encoding())->name





    );
    fprintf(stdout,
     "    Default output end of line:  LF\n    Decode MIME encoded string:  ON\n    Convert JIS X 0201 Katakana: ON\n    --help, --version output:    STDOUT\n");
}



static char*
get_backup_filename(const char *suffix, const char *filename)
{
    char *backup_filename;
    int asterisk_count = 0;
    int i, j;
    int filename_length = strlen(filename);

    for(i = 0; suffix[i]; i++){
 if(suffix[i] == '*') asterisk_count++;
    }

    if(asterisk_count){
 backup_filename = nkf_xmalloc(strlen(suffix) + (asterisk_count * (filename_length - 1)) + 1);
 for(i = 0, j = 0; suffix[i];){
     if(suffix[i] == '*'){
  backup_filename[j] = '\0';
  strncat(backup_filename, filename, filename_length);
  i++;
  j += filename_length;
     }else{
  backup_filename[j++] = suffix[i++];
     }
 }
 backup_filename[j] = '\0';
    }else{
 j = filename_length + strlen(suffix);
 backup_filename = nkf_xmalloc(j + 1);
 strcpy(backup_filename, filename);
 strcat(backup_filename, suffix);
 backup_filename[j] = '\0';
    }
    return backup_filename;
}



static void
nkf_each_char_to_hex(void (*f)(nkf_char c2,nkf_char c1), nkf_char c)
{
    int shift = 20;
    c &= (0x00FFFFFF);
    while(shift >= 0){
 if(c >= (1)<<shift){
     while(shift >= 0){
  (*f)(0, ("0123456789ABCDEF"[c>>shift&15]));
  shift -= 4;
     }
 }else{
     shift -= 4;
 }
    }
    return;
}

static void
encode_fallback_html(nkf_char c)
{
    (*oconv)(0, '&');
    (*oconv)(0, '#');
    c &= (0x00FFFFFF);
    if(c >= (1000000))
 (*oconv)(0, 0x30+(c/(1000000))%10);
    if(c >= (100000))
 (*oconv)(0, 0x30+(c/(100000) )%10);
    if(c >= 10000)
 (*oconv)(0, 0x30+(c/10000 )%10);
    if(c >= 1000)
 (*oconv)(0, 0x30+(c/1000 )%10);
    if(c >= 100)
 (*oconv)(0, 0x30+(c/100 )%10);
    if(c >= 10)
 (*oconv)(0, 0x30+(c/10 )%10);
    if(c >= 0)
 (*oconv)(0, 0x30+ c %10);
    (*oconv)(0, ';');
    return;
}

static void
encode_fallback_xml(nkf_char c)
{
    (*oconv)(0, '&');
    (*oconv)(0, '#');
    (*oconv)(0, 'x');
    nkf_each_char_to_hex(oconv, c);
    (*oconv)(0, ';');
    return;
}

static void
encode_fallback_java(nkf_char c)
{
    (*oconv)(0, '\\');
    c &= (0x00FFFFFF);
    if(!((c & (0x00FFFFFF)) <= (0x0000FFFF))){
 (*oconv)(0, 'U');
 (*oconv)(0, '0');
 (*oconv)(0, '0');
 (*oconv)(0, ("0123456789ABCDEF"[c>>20&15]));
 (*oconv)(0, ("0123456789ABCDEF"[c>>16&15]));
    }else{
 (*oconv)(0, 'u');
    }
    (*oconv)(0, ("0123456789ABCDEF"[c>>12&15]));
    (*oconv)(0, ("0123456789ABCDEF"[c>> 8&15]));
    (*oconv)(0, ("0123456789ABCDEF"[c>> 4&15]));
    (*oconv)(0, ("0123456789ABCDEF"[c&15]));
    return;
}

static void
encode_fallback_perl(nkf_char c)
{
    (*oconv)(0, '\\');
    (*oconv)(0, 'x');
    (*oconv)(0, '{');
    nkf_each_char_to_hex(oconv, c);
    (*oconv)(0, '}');
    return;
}

static void
encode_fallback_subchar(nkf_char c)
{
    c = unicode_subchar;
    (*oconv)((c>>8)&0xFF, c&0xFF);
    return;
}


static const struct {
    const char *name;
    const char *alias;
} long_option[] = {
    {"ic=", ""},
    {"oc=", ""},
    {"base64","jMB"},
    {"euc","e"},
    {"euc-input","E"},
    {"fj","jm"},
    {"help",""},
    {"jis","j"},
    {"jis-input","J"},
    {"mac","sLm"},
    {"mime","jM"},
    {"mime-input","m"},
    {"msdos","sLw"},
    {"sjis","s"},
    {"sjis-input","S"},
    {"unix","eLu"},
    {"version","v"},
    {"windows","sLw"},
    {"hiragana","h1"},
    {"katakana","h2"},
    {"katakana-hiragana","h3"},
    {"guess=", ""},
    {"guess", "g2"},
    {"cp932", ""},
    {"no-cp932", ""},

    {"x0212", ""},


    {"utf8", "w"},
    {"utf16", "w16"},
    {"ms-ucs-map", ""},
    {"fb-skip", ""},
    {"fb-html", ""},
    {"fb-xml", ""},
    {"fb-perl", ""},
    {"fb-java", ""},
    {"fb-subchar", ""},
    {"fb-subchar=", ""},


    {"utf8-input", "W"},
    {"utf16-input", "W16"},
    {"no-cp932ext", ""},
    {"no-best-fit-chars",""},


    {"utf8mac-input", ""},


    {"overwrite", ""},
    {"overwrite=", ""},
    {"in-place", ""},
    {"in-place=", ""},


    {"cap-input", ""},
    {"url-input", ""},


    {"numchar-input", ""},


    {"no-output", ""},
    {"debug", ""},


    {"cp932inv", ""},





    {"prefix=", ""},
};

static void
set_input_encoding(nkf_encoding *enc)
{
    switch ((enc)->id) {
    case ISO_8859_1:
 iso8859_f = 1;
 break;
    case CP50221:
    case CP50222:
 if (x0201_f == (-1)) x0201_f = 0;
    case CP50220:

 cp51932_f = 1;


 ms_ucs_map_f = 2;

 break;
    case ISO_2022_JP_1:
 x0212_f = 1;
 break;
    case ISO_2022_JP_3:
 x0212_f = 1;
 x0213_f = 1;
 break;
    case ISO_2022_JP_2004:
 x0212_f = 1;
 x0213_f = 1;
 break;
    case SHIFT_JIS:
 break;
    case WINDOWS_31J:
 if (x0201_f == (-1)) x0201_f = 0;

 cp51932_f = 1;


 ms_ucs_map_f = 2;

 break;
 break;
    case CP10001:

 cp51932_f = 1;


 ms_ucs_map_f = 3;

 break;
    case EUC_JP:
 break;
    case EUCJP_NKF:
 break;
    case CP51932:
 if (x0201_f == (-1)) x0201_f = 0;

 cp51932_f = 1;


 ms_ucs_map_f = 2;

 break;
    case EUCJP_MS:
 if (x0201_f == (-1)) x0201_f = 0;

 cp51932_f = 0;


 ms_ucs_map_f = 1;

 break;
    case EUCJP_ASCII:
 if (x0201_f == (-1)) x0201_f = 0;

 cp51932_f = 0;


 ms_ucs_map_f = 0;

 break;
    case SHIFT_JISX0213:
    case SHIFT_JIS_2004:
 x0213_f = 1;

 cp51932_f = 0;
 if (cp932inv_f == 1) cp932inv_f = 0;

 break;
    case EUC_JISX0213:
    case EUC_JIS_2004:
 x0213_f = 1;

 cp51932_f = 0;

 break;


    case UTF8_MAC:
 nfc_f = 1;
 break;

    case UTF_16:
    case UTF_16BE:
    case UTF_16BE_BOM:
 input_endian = ENDIAN_BIG;
 break;
    case UTF_16LE:
    case UTF_16LE_BOM:
 input_endian = ENDIAN_LITTLE;
 break;
    case UTF_32:
    case UTF_32BE:
    case UTF_32BE_BOM:
 input_endian = ENDIAN_BIG;
 break;
    case UTF_32LE:
    case UTF_32LE_BOM:
 input_endian = ENDIAN_LITTLE;
 break;

    }
}

static void
set_output_encoding(nkf_encoding *enc)
{
    switch ((enc)->id) {
    case CP50220:

 if (cp932inv_f == 1) cp932inv_f = 0;


 ms_ucs_map_f = 2;

 break;
    case CP50221:
 if (x0201_f == (-1)) x0201_f = 0;

 if (cp932inv_f == 1) cp932inv_f = 0;


 ms_ucs_map_f = 2;

 break;
    case ISO_2022_JP:

 if (cp932inv_f == 1) cp932inv_f = 0;

 break;
    case ISO_2022_JP_1:
 x0212_f = 1;

 if (cp932inv_f == 1) cp932inv_f = 0;

 break;
    case ISO_2022_JP_3:
    case ISO_2022_JP_2004:
 x0212_f = 1;
 x0213_f = 1;

 if (cp932inv_f == 1) cp932inv_f = 0;

 break;
    case SHIFT_JIS:
 break;
    case WINDOWS_31J:
 if (x0201_f == (-1)) x0201_f = 0;

 ms_ucs_map_f = 2;

 break;
    case CP10001:

 ms_ucs_map_f = 3;

 break;
    case EUC_JP:
 x0212_f = 1;

 if (cp932inv_f == 1) cp932inv_f = 0;


 ms_ucs_map_f = 0;

 break;
    case EUCJP_NKF:
 x0212_f = 0;

 if (cp932inv_f == 1) cp932inv_f = 0;


 ms_ucs_map_f = 0;

 break;
    case CP51932:
 if (x0201_f == (-1)) x0201_f = 0;

 if (cp932inv_f == 1) cp932inv_f = 0;


 ms_ucs_map_f = 2;

 break;
    case EUCJP_MS:
 if (x0201_f == (-1)) x0201_f = 0;
 x0212_f = 1;

 ms_ucs_map_f = 1;

 break;
    case EUCJP_ASCII:
 if (x0201_f == (-1)) x0201_f = 0;
 x0212_f = 1;

 ms_ucs_map_f = 0;

 break;
    case SHIFT_JISX0213:
    case SHIFT_JIS_2004:
 x0213_f = 1;

 if (cp932inv_f == 1) cp932inv_f = 0;

 break;
    case EUC_JISX0213:
    case EUC_JIS_2004:
 x0212_f = 1;
 x0213_f = 1;

 if (cp932inv_f == 1) cp932inv_f = 0;

 break;

    case UTF_8_BOM:
 output_bom_f = 1;
 break;
    case UTF_16:
    case UTF_16BE_BOM:
 output_bom_f = 1;
 break;
    case UTF_16LE:
 output_endian = ENDIAN_LITTLE;
 output_bom_f = 0;
 break;
    case UTF_16LE_BOM:
 output_endian = ENDIAN_LITTLE;
 output_bom_f = 1;
 break;
    case UTF_32:
    case UTF_32BE_BOM:
 output_bom_f = 1;
 break;
    case UTF_32LE:
 output_endian = ENDIAN_LITTLE;
 output_bom_f = 0;
 break;
    case UTF_32LE_BOM:
 output_endian = ENDIAN_LITTLE;
 output_bom_f = 1;
 break;

    }
}

static struct input_code*
find_inputcode_byfunc(nkf_char (*iconv_func)(nkf_char c2,nkf_char c1,nkf_char c0))
{
    if (iconv_func){
 struct input_code *p = input_code_list;
 while (p->name){
     if (iconv_func == p->iconv_func){
  return p;
     }
     p++;
 }
    }
    return 0;
}

static void
set_iconv(nkf_char f, nkf_char (*iconv_func)(nkf_char c2,nkf_char c1,nkf_char c0))
{

    if (f || !input_encoding)

 if (estab_f != f){
     estab_f = f;
 }

    if (iconv_func

 && (f == -1 || !input_encoding)

       ){
 iconv = iconv_func;
    }

    if (estab_f && iconv_for_check != iconv){
 struct input_code *p = find_inputcode_byfunc(iconv);
 if (p){
     set_input_codename(p->name);
     debug(p->name);
 }
 iconv_for_check = iconv;
    }

}


static nkf_char
x0212_shift(nkf_char c)
{
    nkf_char ret = c;
    c &= 0x7f;
    if ((((unsigned short)ret >> 8) == 0x8f)){
 if (0x75 <= c && c <= 0x7f){
     ret = c + (0x109 - 0x75);
 }
    }else{
 if (0x75 <= c && c <= 0x7f){
     ret = c + (0x113 - 0x75);
 }
    }
    return ret;
}


static nkf_char
x0212_unshift(nkf_char c)
{
    nkf_char ret = c;
    if (0x7f <= c && c <= 0x88){
 ret = c + (0x75 - 0x7f);
    }else if (0x89 <= c && c <= 0x92){
 ret = (0x8F00) | 0x80 | (c + (0x75 - 0x89));
    }
    return ret;
}


static int
is_x0213_2_in_x0212(nkf_char c1)
{
    static const char x0213_2_table[] =
 {0, 1, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1};
    int ku = c1 - 0x20;
    if (ku <= 15)
 return x0213_2_table[ku];
    if (78 <= ku && ku <= 94)
 return 1;
    return 0;
}

static nkf_char
e2s_conv(nkf_char c2, nkf_char c1, nkf_char *p2, nkf_char *p1)
{
    nkf_char ndx;
    if ((((unsigned short)c2 >> 8) == 0x8f)){
 ndx = c2 & 0x7f;
 if (x0213_f && is_x0213_2_in_x0212(ndx)){
     if((0x21 <= ndx && ndx <= 0x2F)){
  if (p2) *p2 = ((ndx - 1) >> 1) + 0xec - ndx / 8 * 3;
  if (p1) *p1 = c1 + ((ndx & 1) ? ((c1 < 0x60) ? 0x1f : 0x20) : 0x7e);
  return 0;
     }else if(0x6E <= ndx && ndx <= 0x7E){
  if (p2) *p2 = ((ndx - 1) >> 1) + 0xbe;
  if (p1) *p1 = c1 + ((ndx & 1) ? ((c1 < 0x60) ? 0x1f : 0x20) : 0x7e);
  return 0;
     }
     return 1;
 }

 else if(('!'<=ndx && ndx<='~')){
     nkf_char val = 0;
     const unsigned short *ptr;
     ptr = x0212_shiftjis[ndx - 0x21];
     if (ptr){
  val = ptr[(c1 & 0x7f) - 0x21];
     }
     if (val){
  c2 = val >> 8;
  c1 = val & 0xff;
  if (p2) *p2 = c2;
  if (p1) *p1 = c1;
  return 0;
     }
     c2 = x0212_shift(c2);
 }

    }
    if(0x7F < c2) return 1;
    if (p2) *p2 = ((c2 - 1) >> 1) + ((c2 <= 0x5e) ? 0x71 : 0xb1);
    if (p1) *p1 = c1 + ((c2 & 1) ? ((c1 < 0x60) ? 0x1f : 0x20) : 0x7e);
    return 0;
}

static nkf_char
s2e_conv(nkf_char c2, nkf_char c1, nkf_char *p2, nkf_char *p1)
{

    nkf_char val;

    static const char shift_jisx0213_s1a3_table[5][2] ={ { 1, 8}, { 3, 4}, { 5,12}, {13,14}, {15, 0} };
    if (0xFC < c1) return 1;

    if (!cp932inv_f && !x0213_f && (0xFA <= c2 && c2 <= 0xFC)){
 val = shiftjis_cp932[c2 - 0xFA][c1 - 0x40];
 if (val){
     c2 = val >> 8;
     c1 = val & 0xff;
 }
    }
    if (cp932inv_f
 && 0xED <= c2 && c2 <= 0xEE){
 val = cp932inv[c2 - 0xED][c1 - 0x40];
 if (val){
     c2 = val >> 8;
     c1 = val & 0xff;
 }
    }


    if (!x0213_f && (0xFA <= c2 && c2 <= 0xFC)){
 val = shiftjis_x0212[c2 - 0xfa][c1 - 0x40];
 if (val){
     if (val > 0x7FFF){
  c2 = (0x8F00) | ((val >> 8) & 0x7f);
  c1 = val & 0xff;
     }else{
  c2 = val >> 8;
  c1 = val & 0xff;
     }
     if (p2) *p2 = c2;
     if (p1) *p1 = c1;
     return 0;
 }
    }

    if(c2 >= 0x80){
 if(x0213_f && c2 >= 0xF0){
     if(c2 <= 0xF3 || (c2 == 0xF4 && c1 < 0x9F)){
  c2 = (0x8F00) | 0x20 | shift_jisx0213_s1a3_table[c2 - 0xF0][0x9E < c1];
     }else{
  c2 = (0x8F00) | (c2 * 2 - 0x17B);
  if (0x9E < c1) c2++;
     }
 }else{


     c2 = c2 + c2 - ((c2 <= 0x9F) ? 0x00e1 : 0x0161);
     if (0x9E < c1) c2++;
 }
 if (c1 < 0x9F)
     c1 = c1 - ((c1 > 0x7f) ? 0x20 : 0x1F);
 else {
     c1 = c1 - 0x7E;
 }
    }


    c2 = x0212_unshift(c2);

    if (p2) *p2 = c2;
    if (p1) *p1 = c1;
    return 0;
}


static void
nkf_unicode_to_utf8(nkf_char val, nkf_char *p1, nkf_char *p2, nkf_char *p3, nkf_char *p4)
{
    val &= (0x00FFFFFF);
    if (val < 0x80){
 *p1 = val;
 *p2 = 0;
 *p3 = 0;
 *p4 = 0;
    }else if (val < 0x800){
 *p1 = 0xc0 | (val >> 6);
 *p2 = 0x80 | (val & 0x3f);
 *p3 = 0;
 *p4 = 0;
    } else if (((val & (0x00FFFFFF)) <= (0x0000FFFF))) {
 *p1 = 0xe0 | (val >> 12);
 *p2 = 0x80 | ((val >> 6) & 0x3f);
 *p3 = 0x80 | ( val & 0x3f);
 *p4 = 0;
    } else if (((val & (0x00FFFFFF)) <= (0x0010FFFF))) {
 *p1 = 0xf0 | (val >> 18);
 *p2 = 0x80 | ((val >> 12) & 0x3f);
 *p3 = 0x80 | ((val >> 6) & 0x3f);
 *p4 = 0x80 | ( val & 0x3f);
    } else {
 *p1 = 0;
 *p2 = 0;
 *p3 = 0;
 *p4 = 0;
    }
}

static nkf_char
nkf_utf8_to_unicode(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc;
    if (c1 <= 0x7F) {

 wc = c1;
    }
    else if (c1 <= 0xC1) {

 return -1;
    }
    else if (c1 <= 0xDF) {

 wc = (c1 & 0x1F) << 6;
 wc |= (c2 & 0x3F);
    }
    else if (c1 <= 0xEF) {

 wc = (c1 & 0x0F) << 12;
 wc |= (c2 & 0x3F) << 6;
 wc |= (c3 & 0x3F);
    }
    else if (c2 <= 0xF4) {

 wc = (c1 & 0x0F) << 18;
 wc |= (c2 & 0x3F) << 12;
 wc |= (c3 & 0x3F) << 6;
 wc |= (c4 & 0x3F);
    }
    else {
 return -1;
    }
    return wc;
}



static int
unicode_to_jis_common2(nkf_char c1, nkf_char c0,
         const unsigned short *const *pp, nkf_char psize,
         nkf_char *p2, nkf_char *p1)
{
    nkf_char c2;
    const unsigned short *p;
    unsigned short val;

    if (pp == 0) return 1;

    c1 -= 0x80;
    if (c1 < 0 || psize <= c1) return 1;
    p = pp[c1];
    if (p == 0) return 1;

    c0 -= 0x80;
    if (c0 < 0 || 64 <= c0) return 1;
    val = p[c0];
    if (val == 0) return 1;
    if (no_cp932ext_f && (
     (val>>8) == 0x2D ||
     val > (0xF300)
    )) return 1;

    c2 = val >> 8;
    if (val > 0x7FFF){
 c2 &= 0x7f;
 c2 |= (0x8F00);
    }
    if (c2 == 0x0e) c2 = JIS_X_0201_1976_K;
    c1 = val & 0xFF;
    if (p2) *p2 = c2;
    if (p1) *p1 = c1;
    return 0;
}

static int
unicode_to_jis_common(nkf_char c2, nkf_char c1, nkf_char c0, nkf_char *p2, nkf_char *p1)
{
    const unsigned short *const *pp;
    const unsigned short *const *const *ppp;
    static const char no_best_fit_chars_table_C2[] =
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 2, 1, 1, 2,
 0, 0, 1, 1, 0, 1, 0, 1, 2, 1, 1, 1, 1, 1, 1, 1};
    static const char no_best_fit_chars_table_C2_ms[] =
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0,
 0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0};
    static const char no_best_fit_chars_table_932_C2[] =
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1,
 0, 0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0};
    static const char no_best_fit_chars_table_932_C3[] =
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    nkf_char ret = 0;

    if(c2 < 0x80){
 *p2 = 0;
 *p1 = c2;
    }else if(c2 < 0xe0){
 if(no_best_fit_chars_f){
     if(ms_ucs_map_f == 2){
  switch(c2){
  case 0xC2:
      if(no_best_fit_chars_table_932_C2[c1&0x3F]) return 1;
      break;
  case 0xC3:
      if(no_best_fit_chars_table_932_C3[c1&0x3F]) return 1;
      break;
  }
     }else if(!cp932inv_f){
  switch(c2){
  case 0xC2:
      if(no_best_fit_chars_table_C2[c1&0x3F]) return 1;
      break;
  case 0xC3:
      if(no_best_fit_chars_table_932_C3[c1&0x3F]) return 1;
      break;
  }
     }else if(ms_ucs_map_f == 1){
  if(c2 == 0xC2 && no_best_fit_chars_table_C2_ms[c1&0x3F]) return 1;
     }else if(ms_ucs_map_f == 3){
  switch(c2){
  case 0xC2:
      switch(c1){
      case 0xA2:
      case 0xA3:
      case 0xA5:
      case 0xA6:
      case 0xAC:
      case 0xAF:
      case 0xB8:
   return 1;
      }
      break;
  }
     }
 }
 pp =
     ms_ucs_map_f == 2 ? utf8_to_euc_2bytes_932 :
     ms_ucs_map_f == 1 ? utf8_to_euc_2bytes_ms :
     ms_ucs_map_f == 3 ? utf8_to_euc_2bytes_mac :
     x0213_f ? utf8_to_euc_2bytes_x0213 :
     utf8_to_euc_2bytes;
 ret = unicode_to_jis_common2(c2, c1, pp, 112, p2, p1);
    }else if(c0 < 0xF0){
 if(no_best_fit_chars_f){
     if(ms_ucs_map_f == 2){
  if(c2 == 0xE3 && c1 == 0x82 && c0 == 0x94) return 1;
     }else if(ms_ucs_map_f == 1){
  switch(c2){
  case 0xE2:
      switch(c1){
      case 0x80:
   if(c0 == 0x94 || c0 == 0x96 || c0 == 0xBE) return 1;
   break;
      case 0x88:
   if(c0 == 0x92) return 1;
   break;
      }
      break;
  case 0xE3:
      if(c1 == 0x80 || c0 == 0x9C) return 1;
      break;
  }
     }else if(ms_ucs_map_f == 3){
  switch(c2){
  case 0xE3:
      switch(c1){
      case 0x82:
   if(c0 == 0x94) return 1;
   break;
      case 0x83:
   if(c0 == 0xBB) return 1;
   break;
      }
      break;
  }
     }else{
  switch(c2){
  case 0xE2:
      switch(c1){
      case 0x80:
   if(c0 == 0x95) return 1;
   break;
      case 0x88:
   if(c0 == 0xA5) return 1;
   break;
      }
      break;
  case 0xEF:
      switch(c1){
      case 0xBC:
   if(c0 == 0x8D) return 1;
   break;
      case 0xBD:
   if(c0 == 0x9E && !cp932inv_f) return 1;
   break;
      case 0xBF:
   if(0xA0 <= c0 && c0 <= 0xA5) return 1;
   break;
      }
      break;
  }
     }
 }
 ppp =
     ms_ucs_map_f == 2 ? utf8_to_euc_3bytes_932 :
     ms_ucs_map_f == 1 ? utf8_to_euc_3bytes_ms :
     ms_ucs_map_f == 3 ? utf8_to_euc_3bytes_mac :
     x0213_f ? utf8_to_euc_3bytes_x0213 :
     utf8_to_euc_3bytes;
 ret = unicode_to_jis_common2(c1, c0, ppp[c2 - 0xE0], 64, p2, p1);
    }else return -1;

    if (!ret && !cp932inv_f && (((unsigned short)*p2 >> 8) == 0x8f)) {
 nkf_char s2, s1;
 if (e2s_conv(*p2, *p1, &s2, &s1) == 0) {
     s2e_conv(s2, s1, p2, p1);
 }else{
     ret = 1;
 }
    }

    return ret;
}
static nkf_char
e2w_conv(nkf_char c2, nkf_char c1)
{
    const unsigned short *p;

    if (c2 == JIS_X_0201_1976_K) {
 if (ms_ucs_map_f == 3) {
     switch (c1) {
     case 0x20:
  return 0xA0;
     case 0x7D:
  return 0xA9;
     }
 }
 p = euc_to_utf8_1byte;

    } else if ((((unsigned short)c2 >> 8) == 0x8f)){
 if(ms_ucs_map_f == 0&& c2 == (0x8F22) && c1 == 0x43){
     return 0xA6;
 }
 c2 = (c2&0x7f) - 0x21;
 if (0<=c2 && c2<94)
     p =
  x0213_f ? x0212_to_utf8_2bytes_x0213[c2] :
  x0212_to_utf8_2bytes[c2];
 else
     return 0;

    } else {
 c2 &= 0x7f;
 c2 = (c2&0x7f) - 0x21;
 if (0<=c2 && c2<94)
     p =
  x0213_f ? euc_to_utf8_2bytes_x0213[c2] :
  ms_ucs_map_f == 0 ? euc_to_utf8_2bytes[c2] :
  ms_ucs_map_f == 3 ? euc_to_utf8_2bytes_mac[c2] :
  euc_to_utf8_2bytes_ms[c2];
 else
     return 0;
    }
    if (!p) return 0;
    c1 = (c1 & 0x7f) - 0x21;
    if (0<=c1 && c1<94) {
 nkf_char val = p[c1];
 if (x0213_f && 0xD800<=val && val<=0xDBFF) {
     nkf_char euc = (c2+0x21)<<8 | (c1+0x21);
     nkf_char low = 0;
     if (p==x0212_to_utf8_2bytes_x0213[c2]) {
  do { int i; for (i = 0; i < 277; i++) if (x0213_2_surrogate_table[i][0] == euc) { low = x0213_2_surrogate_table[i][2]; break; } } while (0);
     } else {
  do { int i; for (i = 0; i < 26; i++) if (x0213_1_surrogate_table[i][0] == euc) { low = x0213_1_surrogate_table[i][2]; break; } } while (0);
     }
     if (!low) return 0;
     return (((val) << 10) + (low) - (0x35FDC00));
 } else {
     return val;
 }
    }
    return 0;
}

static nkf_char
e2w_combining(nkf_char comb, nkf_char c2, nkf_char c1)
{
    nkf_char euc;
    int i;
    for (i = 0; i < 5; i++)
 if (x0213_combining_chars[i] == comb)
     break;
    if (i >= 5)
 return 0;
    euc = (c2&0x7f)<<8 | (c1&0x7f);
    for (i = 0; i < 25; i++)
 if (x0213_combining_table[i][0] == euc)
     return x0213_combining_table[i][1];
    return 0;
}


static nkf_char
w2e_conv(nkf_char c2, nkf_char c1, nkf_char c0, nkf_char *p2, nkf_char *p1)
{
    nkf_char ret = 0;

    if (!c1){
 *p2 = 0;
 *p1 = c2;
    }else if (0xc0 <= c2 && c2 <= 0xef) {
 ret = unicode_to_jis_common(c2, c1, c0, p2, p1);

 if (ret > 0){
     if (p2) *p2 = 0;
     if (p1) *p1 = ((nkf_utf8_to_unicode(c2, c1, c0, 0)) | (0x01000000));
     ret = 0;
 }

    }
    return ret;
}


static nkf_char
w16e_conv(nkf_char val, nkf_char *p2, nkf_char *p1)
{
    nkf_char c1, c2, c3, c4;
    nkf_char ret = 0;
    val &= (0x00FFFFFF);
    if (val < 0x80) {
 *p2 = 0;
 *p1 = val;
    }
    else if (((val & (0x00FFFFFF)) <= (0x0000FFFF))){
 nkf_unicode_to_utf8(val, &c1, &c2, &c3, &c4);
 ret = unicode_to_jis_common(c1, c2, c3, p2, p1);
 if (ret > 0){
     *p2 = 0;
     *p1 = ((val) | (0x01000000));
     ret = 0;
 }
    }
    else {
 int i;
 if (x0213_f) {
     c1 = (val >> 10) + (0xD7C0);
     c2 = (val & 0x3FF) + (0xDC00);
     for (i = 0; i < 26; i++)
  if (x0213_1_surrogate_table[i][1] == c1 && x0213_1_surrogate_table[i][2] == c2) {
      val = x0213_1_surrogate_table[i][0];
      *p2 = val >> 8;
      *p1 = val & 0xFF;
      return 0;
  }
     for (i = 0; i < 277; i++)
  if (x0213_2_surrogate_table[i][1] == c1 && x0213_2_surrogate_table[i][2] == c2) {
      val = x0213_2_surrogate_table[i][0];
      *p2 = (0x8F00) | (val >> 8);
      *p1 = val & 0xFF;
      return 0;
  }
 }
 *p2 = 0;
 *p1 = ((val) | (0x01000000));
    }
    return ret;
}


static nkf_char
e_iconv(nkf_char c2, nkf_char c1, nkf_char c0)
{
    if (c2 == JIS_X_0201_1976_K || c2 == 0x8e){
 if (iso2022jp_f && !x0201_f) {
     c2 = 0x22; c1 = 0x2e;
 } else {
     c2 = JIS_X_0201_1976_K;
     c1 &= 0x7f;
 }

    }else if (c2 == 0x8f){
 if (c0 == 0){
     return -1;
 }
 if (!cp51932_f && !x0213_f && 0xF5 <= c1 && c1 <= 0xFE && 0xA1 <= c0 && c0 <= 0xFE) {

     c1 = (((c1 - 0xF5) * 94 + c0 - 0xA1 + 0xE3AC) | (0x01000000));
     c2 = 0;
 } else {
     c2 = (c2 << 8) | (c1 & 0x7f);
     c1 = c0 & 0x7f;

     if (cp51932_f){
  nkf_char s2, s1;
  if (e2s_conv(c2, c1, &s2, &s1) == 0){
      s2e_conv(s2, s1, &c2, &c1);
      if (c2 < 0x100){
   c1 &= 0x7f;
   c2 &= 0x7f;
      }
  }
     }

 }

    } else if ((c2 == (-1)) || (c2 == 0) || c2 < 0x20 || c2 == ISO_8859_1) {

    } else {
 if (!cp51932_f && ms_ucs_map_f && 0xF5 <= c2 && c2 <= 0xFE && 0xA1 <= c1 && c1 <= 0xFE) {

     c1 = (((c2 - 0xF5) * 94 + c1 - 0xA1 + 0xE000) | (0x01000000));
     c2 = 0;
 } else {
     c1 &= 0x7f;
     c2 &= 0x7f;

     if (cp51932_f && 0x79 <= c2 && c2 <= 0x7c){
  nkf_char s2, s1;
  if (e2s_conv(c2, c1, &s2, &s1) == 0){
      s2e_conv(s2, s1, &c2, &c1);
      if (c2 < 0x100){
   c1 &= 0x7f;
   c2 &= 0x7f;
      }
  }
     }

 }
    }
    (*oconv)(c2, c1);
    return 0;
}

static nkf_char
s_iconv( nkf_char c2, nkf_char c1,  nkf_char c0)
{
    if (c2 == JIS_X_0201_1976_K || (0xA1 <= c2 && c2 <= 0xDF)) {
 if (iso2022jp_f && !x0201_f) {
     c2 = 0x22; c1 = 0x2e;
 } else {
     c1 &= 0x7f;
 }
    } else if ((c2 == (-1)) || (c2 == 0) || c2 < 0x20) {

    } else if (!x0213_f && 0xF0 <= c2 && c2 <= 0xF9 && 0x40 <= c1 && c1 <= 0xFC) {

 if(c1 == 0x7F) return 0;
 c1 = (((c2 - 0xF0) * 188 + (c1 - 0x40 - (0x7E < c1)) + 0xE000) | (0x01000000));
 c2 = 0;
    } else {
 nkf_char ret = s2e_conv(c2, c1, &c2, &c1);
 if (ret) return ret;
    }
    (*oconv)(c2, c1);
    return 0;
}

static int
x0213_wait_combining_p(nkf_char wc)
{
    int i;
    for (i = 0; i < 25; i++) {
 if (x0213_combining_table[i][1] == wc) {
     return 1;
 }
    }
    return 0;
}

static int
x0213_combining_p(nkf_char wc)
{
    int i;
    for (i = 0; i < 5; i++) {
 if (x0213_combining_chars[i] == wc) {
     return 1;
 }
    }
    return 0;
}

static nkf_char
w_iconv(nkf_char c1, nkf_char c2, nkf_char c3)
{
    nkf_char ret = 0, c4 = 0;
    static const char w_iconv_utf8_1st_byte[] =
    {
 20, 20, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21,
 30, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 32, 33, 33,
 40, 41, 41, 41, 42, 43, 43, 43, 50, 50, 50, 50, 60, 60, 70, 70};

    if (c3 > 0xFF) {
 c4 = c3 & 0xFF;
 c3 >>= 8;
    }

    if (c1 < 0 || 0xff < c1) {
    }else if (c1 == 0) {
 c3 = 0;
    } else if ((c1 & 0xC0) == 0x80) {
 return 0;
    } else{
 switch (w_iconv_utf8_1st_byte[c1 - 0xC0]) {
 case 21:
     if (c2 < 0x80 || 0xBF < c2) return 0;
     break;
 case 30:
     if (c3 == 0) return -1;
     if (c2 < 0xA0 || 0xBF < c2 || (c3 & 0xC0) != 0x80)
  return 0;
     break;
 case 31:
 case 33:
     if (c3 == 0) return -1;
     if ((c2 & 0xC0) != 0x80 || (c3 & 0xC0) != 0x80)
  return 0;
     break;
 case 32:
     if (c3 == 0) return -1;
     if (c2 < 0x80 || 0x9F < c2 || (c3 & 0xC0) != 0x80)
  return 0;
     break;
 case 40:
     if (c3 == 0) return -2;
     if (c2 < 0x90 || 0xBF < c2 || (c3 & 0xC0) != 0x80 || (c4 & 0xC0) != 0x80)
  return 0;
     break;
 case 41:
     if (c3 == 0) return -2;
     if (c2 < 0x80 || 0xBF < c2 || (c3 & 0xC0) != 0x80 || (c4 & 0xC0) != 0x80)
  return 0;
     break;
 case 42:
     if (c3 == 0) return -2;
     if (c2 < 0x80 || 0x8F < c2 || (c3 & 0xC0) != 0x80 || (c4 & 0xC0) != 0x80)
  return 0;
     break;
 default:
     return 0;
     break;
 }
    }
    if (c1 == 0 || c1 == (-1)){
    } else if ((c1 & 0xf8) == 0xf0) {
 c2 = ((nkf_utf8_to_unicode(c1, c2, c3, c4)) | (0x01000000));
 c1 = 0;
    } else {
 if (x0213_f && x0213_wait_combining_p(nkf_utf8_to_unicode(c1, c2, c3, c4)))
     return -3;
 ret = w2e_conv(c1, c2, c3, &c1, &c2);
    }
    if (ret == 0){
 (*oconv)(c1, c2);
    }
    return ret;
}

static nkf_char
w_iconv_nocombine(nkf_char c1, nkf_char c2, nkf_char c3)
{

    nkf_char ret = w2e_conv(c1, c2, c3, &c1, &c2);
    if (ret == 0){
 (*oconv)(c1, c2);
    }
    return ret;
}




static size_t
unicode_iconv(nkf_char wc, int nocombine)
{
    nkf_char c1, c2;
    int ret = 0;

    if (wc < 0x80) {
 c2 = 0;
 c1 = wc;
    }else if ((wc>>11) == 27) {

 return -13;
    }else if (wc < 0xFFFF) {
 if (!nocombine && x0213_f && x0213_wait_combining_p(wc))
     return -14;
 ret = w16e_conv(wc, &c2, &c1);
 if (ret) return ret;
    }else if (wc < 0x10FFFF) {
 c2 = 0;
 c1 = ((wc) | (0x01000000));
    } else {
 return -13;
    }
    (*oconv)(c2, c1);
    return 0;
}

static nkf_char
unicode_iconv_combine(nkf_char wc, nkf_char wc2)
{
    nkf_char c1, c2;
    int i;

    if (wc2 < 0x80) {
 return -15;
    }else if ((wc2>>11) == 27) {

 return -13;
    }else if (wc2 < 0xFFFF) {
 if (!x0213_combining_p(wc2))
     return -15;
 for (i = 0; i < 25; i++) {
     if (x0213_combining_table[i][1] == wc &&
  x0213_combining_table[i][2] == wc2) {
  c2 = x0213_combining_table[i][0] >> 8;
  c1 = x0213_combining_table[i][0] & 0x7f;
  (*oconv)(c2, c1);
  return 0;
     }
 }
    }else if (wc2 < 0x10FFFF) {
 return -15;
    } else {
 return -13;
    }
    return -15;
}

static nkf_char
w_iconv_combine(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4, nkf_char c5, nkf_char c6)
{
    nkf_char wc, wc2;
    wc = nkf_utf8_to_unicode(c1, c2, c3, 0);
    wc2 = nkf_utf8_to_unicode(c4, c5, c6, 0);
    if (wc2 < 0)
 return wc2;
    return unicode_iconv_combine(wc, wc2);
}



static size_t
nkf_iconv_utf_16(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc;

    if (c1 == (-1)) {
 (*oconv)((-1), 0);
 return 0;
    }

    if (input_endian == ENDIAN_BIG) {
 if (0xD8 <= c1 && c1 <= 0xDB) {
     if (0xDC <= c3 && c3 <= 0xDF) {
  wc = (((c1 << 8 | c2) << 10) + (c3 << 8 | c4) - (0x35FDC00));
     } else return (size_t)-2;
 } else {
     wc = c1 << 8 | c2;
 }
    } else {
 if (0xD8 <= c2 && c2 <= 0xDB) {
     if (0xDC <= c4 && c4 <= 0xDF) {
  wc = (((c2 << 8 | c1) << 10) + (c4 << 8 | c3) - (0x35FDC00));
     } else return (size_t)-2;
 } else {
     wc = c2 << 8 | c1;
 }
    }

    return (*unicode_iconv)(wc, 0);
}

static size_t
nkf_iconv_utf_16_combine(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc, wc2;

    if (input_endian == ENDIAN_BIG) {
 if (0xD8 <= c3 && c3 <= 0xDB) {
     return -15;
 } else {
     wc = c1 << 8 | c2;
     wc2 = c3 << 8 | c4;
 }
    } else {
 if (0xD8 <= c2 && c2 <= 0xDB) {
     return -15;
 } else {
     wc = c2 << 8 | c1;
     wc2 = c4 << 8 | c3;
 }
    }

    return unicode_iconv_combine(wc, wc2);
}

static size_t
nkf_iconv_utf_16_nocombine(nkf_char c1, nkf_char c2)
{
    nkf_char wc;
    if (input_endian == ENDIAN_BIG)
 wc = c1 << 8 | c2;
    else
 wc = c2 << 8 | c1;
    return (*unicode_iconv)(wc, 1);
}

static nkf_char
w_iconv16(nkf_char c2, nkf_char c1,  nkf_char c0)
{
    (*oconv)(c2, c1);
    return 16;
}

static nkf_char
w_iconv32(nkf_char c2, nkf_char c1,  nkf_char c0)
{
    (*oconv)(c2, c1);
    return 32;
}

static nkf_char
utf32_to_nkf_char(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc;

    switch(input_endian){
    case ENDIAN_BIG:
 wc = c2 << 16 | c3 << 8 | c4;
 break;
    case ENDIAN_LITTLE:
 wc = c3 << 16 | c2 << 8 | c1;
 break;
    case ENDIAN_2143:
 wc = c1 << 16 | c4 << 8 | c3;
 break;
    case ENDIAN_3412:
 wc = c4 << 16 | c1 << 8 | c2;
 break;
    default:
 return -13;
    }
    return wc;
}

static size_t
nkf_iconv_utf_32(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc;

    if (c1 == (-1)) {
 (*oconv)((-1), 0);
 return 0;
    }

    wc = utf32_to_nkf_char(c1, c2, c3, c4);
    if (wc < 0)
 return wc;

    return (*unicode_iconv)(wc, 0);
}

static nkf_char
nkf_iconv_utf_32_combine(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4, nkf_char c5, nkf_char c6, nkf_char c7, nkf_char c8)
{
    nkf_char wc, wc2;

    wc = utf32_to_nkf_char(c1, c2, c3, c4);
    if (wc < 0)
 return wc;
    wc2 = utf32_to_nkf_char(c5, c6, c7, c8);
    if (wc2 < 0)
 return wc2;

    return unicode_iconv_combine(wc, wc2);
}

static size_t
nkf_iconv_utf_32_nocombine(nkf_char c1, nkf_char c2, nkf_char c3, nkf_char c4)
{
    nkf_char wc;

    wc = utf32_to_nkf_char(c1, c2, c3, c4);
    return (*unicode_iconv)(wc, 1);
}
static void
output_escape_sequence(int mode)
{
    if (output_mode == mode)
 return;
    switch(mode) {
    case ISO_8859_1:
 (*o_putc)(0x1b);
 (*o_putc)('.');
 (*o_putc)('A');
 break;
    case JIS_X_0201_1976_K:
 (*o_putc)(0x1b);
 (*o_putc)('(');
 (*o_putc)('I');
 break;
    case JIS_X_0208:
 (*o_putc)(0x1b);
 (*o_putc)('$');
 (*o_putc)(kanji_intro);
 break;
    case JIS_X_0212:
 (*o_putc)(0x1b);
 (*o_putc)('$');
 (*o_putc)('(');
 (*o_putc)('D');
 break;
    case JIS_X_0213_1:
 (*o_putc)(0x1b);
 (*o_putc)('$');
 (*o_putc)('(');
 (*o_putc)('Q');
 break;
    case JIS_X_0213_2:
 (*o_putc)(0x1b);
 (*o_putc)('$');
 (*o_putc)('(');
 (*o_putc)('P');
 break;
    }
    output_mode = mode;
}

static void
j_oconv(nkf_char c2, nkf_char c1)
{

    if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
 w16e_conv(c1, &c2, &c1);
 if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
     c2 = c1 & (0x00FFFFFF);
     if (ms_ucs_map_f && 0xE000 <= c2 && c2 <= 0xE757) {

  c1 &= 0xFFF;
  c2 = 0x7F + c1 / 94;
  c1 = 0x21 + c1 % 94;
     } else {
  if (encode_fallback) (*encode_fallback)(c1);
  return;
     }
 }
    }

    if (c2 == 0) {
 do { if (output_mode != ASCII && output_mode != ISO_8859_1) { (*o_putc)(0x1b); (*o_putc)('('); (*o_putc)(ascii_intro); output_mode = ASCII; } } while (0);
 (*o_putc)(c1);
    }
    else if (c2 == (-1)) {
 do { if (output_mode != ASCII && output_mode != ISO_8859_1) { (*o_putc)(0x1b); (*o_putc)('('); (*o_putc)(ascii_intro); output_mode = ASCII; } } while (0);
 (*o_putc)((-1));
    }
    else if (c2 == ISO_8859_1) {
 do { if (output_mode != ASCII && output_mode != ISO_8859_1) { (*o_putc)(0x1b); (*o_putc)('('); (*o_putc)(ascii_intro); output_mode = ISO_8859_1; } } while (0);
 (*o_putc)(c1|0x80);
    }
    else if (c2 == JIS_X_0201_1976_K) {
 output_escape_sequence(JIS_X_0201_1976_K);
 (*o_putc)(c1);

    } else if ((((unsigned short)c2 >> 8) == 0x8f)){
 output_escape_sequence(x0213_f ? JIS_X_0213_2 : JIS_X_0212);
 (*o_putc)(c2 & 0x7f);
 (*o_putc)(c1);

    } else {
 if(ms_ucs_map_f
    ? c2<0x20 || 0x92<c2 || c1<0x20 || 0x7e<c1
    : c2<0x20 || 0x7e<c2 || c1<0x20 || 0x7e<c1) return;
 output_escape_sequence(x0213_f ? JIS_X_0213_1 : JIS_X_0208);
 (*o_putc)(c2);
 (*o_putc)(c1);
    }
}

static void
e_oconv(nkf_char c2, nkf_char c1)
{
    if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
 w16e_conv(c1, &c2, &c1);
 if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
     c2 = c1 & (0x00FFFFFF);
     if (x0212_f && 0xE000 <= c2 && c2 <= 0xE757) {

  c1 &= 0xFFF;
  c2 = c1 / 94;
  c2 += c2 < 10 ? 0x75 : 0x8FEB;
  c1 = 0x21 + c1 % 94;
  if ((((unsigned short)c2 >> 8) == 0x8f)){
      (*o_putc)(0x8f);
      (*o_putc)((c2 & 0x7f) | 0x080);
      (*o_putc)(c1 | 0x080);
  }else{
      (*o_putc)((c2 & 0x7f) | 0x080);
      (*o_putc)(c1 | 0x080);
  }
  return;
     } else {
  if (encode_fallback) (*encode_fallback)(c1);
  return;
     }
 }
    }

    if (c2 == (-1)) {
 (*o_putc)((-1));
    } else if (c2 == 0) {
 output_mode = ASCII;
 (*o_putc)(c1);
    } else if (c2 == JIS_X_0201_1976_K) {
 output_mode = EUC_JP;
 (*o_putc)(0x8e); (*o_putc)(c1|0x80);
    } else if (c2 == ISO_8859_1) {
 output_mode = ISO_8859_1;
 (*o_putc)(c1 | 0x080);

    } else if ((((unsigned short)c2 >> 8) == 0x8f)){
 output_mode = EUC_JP;

 if (!cp932inv_f){
     nkf_char s2, s1;
     if (e2s_conv(c2, c1, &s2, &s1) == 0){
  s2e_conv(s2, s1, &c2, &c1);
     }
 }

 if (c2 == 0) {
     output_mode = ASCII;
     (*o_putc)(c1);
 }else if ((((unsigned short)c2 >> 8) == 0x8f)){
     if (x0212_f){
  (*o_putc)(0x8f);
  (*o_putc)((c2 & 0x7f) | 0x080);
  (*o_putc)(c1 | 0x080);
     }
 }else{
     (*o_putc)((c2 & 0x7f) | 0x080);
     (*o_putc)(c1 | 0x080);
 }

    } else {
 if (!('!'<=c1 && c1<='~') || !('!'<=c2 && c2<='~')) {
     set_iconv(0, 0);
     return;
 }
 output_mode = EUC_JP;
 (*o_putc)(c2 | 0x080);
 (*o_putc)(c1 | 0x080);
    }
}

static void
s_oconv(nkf_char c2, nkf_char c1)
{

    if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
 w16e_conv(c1, &c2, &c1);
 if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
     c2 = c1 & (0x00FFFFFF);
     if (!x0213_f && 0xE000 <= c2 && c2 <= 0xE757) {

  c1 &= 0xFFF;
  c2 = c1 / 188 + (cp932inv_f ? 0xF0 : 0xEB);
  c1 = c1 % 188;
  c1 += 0x40 + (c1 > 0x3e);
  (*o_putc)(c2);
  (*o_putc)(c1);
  return;
     } else {
  if(encode_fallback)(*encode_fallback)(c1);
  return;
     }
 }
    }

    if (c2 == (-1)) {
 (*o_putc)((-1));
 return;
    } else if (c2 == 0) {
 output_mode = ASCII;
 (*o_putc)(c1);
    } else if (c2 == JIS_X_0201_1976_K) {
 output_mode = SHIFT_JIS;
 (*o_putc)(c1|0x80);
    } else if (c2 == ISO_8859_1) {
 output_mode = ISO_8859_1;
 (*o_putc)(c1 | 0x080);

    } else if ((((unsigned short)c2 >> 8) == 0x8f)){
 output_mode = SHIFT_JIS;
 if (e2s_conv(c2, c1, &c2, &c1) == 0){
     (*o_putc)(c2);
     (*o_putc)(c1);
 }

    } else {
 if (!(0x20<=c1 && c1<='~') || !(0x20<=c2 && c2<='~')) {
     set_iconv(0, 0);
     return;
 }
 output_mode = SHIFT_JIS;
 e2s_conv(c2, c1, &c2, &c1);


 if (cp932inv_f
     && 0xED <= c2 && c2 <= 0xEE){
     nkf_char c = cp932inv[c2 - 0xED][c1 - 0x40];
     if (c){
  c2 = c >> 8;
  c1 = c & 0xff;
     }
 }


 (*o_putc)(c2);
 if (prefix_table[(unsigned char)c1]){
     (*o_putc)(prefix_table[(unsigned char)c1]);
 }
 (*o_putc)(c1);
    }
}
static void
w_oconv(nkf_char c2, nkf_char c1)
{
    nkf_char c3, c4;
    nkf_char val, val2;

    if (output_bom_f) {
 output_bom_f = 0;
 (*o_putc)('\357');
 (*o_putc)('\273');
 (*o_putc)('\277');
    }

    if (c2 == (-1)) {
 (*o_putc)((-1));
 return;
    }

    if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))){
 val = c1 & (0x00FFFFFF);
 do { nkf_unicode_to_utf8(val, &c1, &c2, &c3, &c4); (*o_putc)(c1); if (c2) (*o_putc)(c2); if (c3) (*o_putc)(c3); if (c4) (*o_putc)(c4); } while (0);
 return;
    }

    if (c2 == 0) {
 (*o_putc)(c1);
    } else {
 val = e2w_conv(c2, c1);
 if (val){
     val2 = e2w_combining(val, c2, c1);
     if (val2)
  do { nkf_unicode_to_utf8(val2, &c1, &c2, &c3, &c4); (*o_putc)(c1); if (c2) (*o_putc)(c2); if (c3) (*o_putc)(c3); if (c4) (*o_putc)(c4); } while (0);
     do { nkf_unicode_to_utf8(val, &c1, &c2, &c3, &c4); (*o_putc)(c1); if (c2) (*o_putc)(c2); if (c3) (*o_putc)(c3); if (c4) (*o_putc)(c4); } while (0);
 }
    }
}
static void
w_oconv16(nkf_char c2, nkf_char c1)
{
    if (output_bom_f) {
 output_bom_f = 0;
 do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(0xFF); (*o_putc)(0xFE); }else{ (*o_putc)(0xFE); (*o_putc)(0xFF); } } while (0);
    }

    if (c2 == (-1)) {
 (*o_putc)((-1));
 return;
    }

    if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))) {
 do { if (((c1 & (0x00FFFFFF)) <= (0x0000FFFF))) { c2 = (c1 >> 8) & 0xff; c1 = c1 & 0xff; do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1); (*o_putc)(c2); }else{ (*o_putc)(c2); (*o_putc)(c1); } } while (0); } else { c1 &= (0x00FFFFFF); if (c1 <= (0x0010FFFF)) { c2 = (c1 >> 10) + (0xD7C0); c1 = (c1 & 0x3FF) + (0xDC00); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c2 & 0xff); (*o_putc)((c2 >> 8) & 0xff); }else{ (*o_putc)((c2 >> 8) & 0xff); (*o_putc)(c2 & 0xff); } } while (0); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1 & 0xff); (*o_putc)((c1 >> 8) & 0xff); }else{ (*o_putc)((c1 >> 8) & 0xff); (*o_putc)(c1 & 0xff); } } while (0); } } } while (0);
    } else if (c2) {
 nkf_char val, val2;
 val = e2w_conv(c2, c1);
 if (!val) return;
 val2 = e2w_combining(val, c2, c1);
 if (val2)
     do { if (((val2 & (0x00FFFFFF)) <= (0x0000FFFF))) { c2 = (val2 >> 8) & 0xff; c1 = val2 & 0xff; do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1); (*o_putc)(c2); }else{ (*o_putc)(c2); (*o_putc)(c1); } } while (0); } else { val2 &= (0x00FFFFFF); if (val2 <= (0x0010FFFF)) { c2 = (val2 >> 10) + (0xD7C0); c1 = (val2 & 0x3FF) + (0xDC00); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c2 & 0xff); (*o_putc)((c2 >> 8) & 0xff); }else{ (*o_putc)((c2 >> 8) & 0xff); (*o_putc)(c2 & 0xff); } } while (0); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1 & 0xff); (*o_putc)((c1 >> 8) & 0xff); }else{ (*o_putc)((c1 >> 8) & 0xff); (*o_putc)(c1 & 0xff); } } while (0); } } } while (0);
 do { if (((val & (0x00FFFFFF)) <= (0x0000FFFF))) { c2 = (val >> 8) & 0xff; c1 = val & 0xff; do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1); (*o_putc)(c2); }else{ (*o_putc)(c2); (*o_putc)(c1); } } while (0); } else { val &= (0x00FFFFFF); if (val <= (0x0010FFFF)) { c2 = (val >> 10) + (0xD7C0); c1 = (val & 0x3FF) + (0xDC00); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c2 & 0xff); (*o_putc)((c2 >> 8) & 0xff); }else{ (*o_putc)((c2 >> 8) & 0xff); (*o_putc)(c2 & 0xff); } } while (0); do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1 & 0xff); (*o_putc)((c1 >> 8) & 0xff); }else{ (*o_putc)((c1 >> 8) & 0xff); (*o_putc)(c1 & 0xff); } } while (0); } } } while (0);
    } else {
 do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)(c1); (*o_putc)(c2); }else{ (*o_putc)(c2); (*o_putc)(c1); } } while (0);
    }
}
static void
w_oconv32(nkf_char c2, nkf_char c1)
{
    if (output_bom_f) {
 output_bom_f = 0;
 if (output_endian == ENDIAN_LITTLE){
     (*o_putc)(0xFF);
     (*o_putc)(0xFE);
     (*o_putc)(0);
     (*o_putc)(0);
 }else{
     (*o_putc)(0);
     (*o_putc)(0);
     (*o_putc)(0xFE);
     (*o_putc)(0xFF);
 }
    }

    if (c2 == (-1)) {
 (*o_putc)((-1));
 return;
    }

    if (c2 == ISO_8859_1) {
 c1 |= 0x80;
    } else if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000))) {
 c1 &= (0x00FFFFFF);
    } else if (c2) {
 nkf_char val, val2;
 val = e2w_conv(c2, c1);
 if (!val) return;
 val2 = e2w_combining(val, c2, c1);
 if (val2)
     do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)( (val2) & 0xFF); (*o_putc)(((val2) >> 8) & 0xFF); (*o_putc)(((val2) >> 16) & 0xFF); (*o_putc)(0); }else{ (*o_putc)(0); (*o_putc)(((val2) >> 16) & 0xFF); (*o_putc)(((val2) >> 8) & 0xFF); (*o_putc)( (val2) & 0xFF); } } while (0);
 c1 = val;
    }
    do { if (output_endian == ENDIAN_LITTLE){ (*o_putc)( (c1) & 0xFF); (*o_putc)(((c1) >> 8) & 0xFF); (*o_putc)(((c1) >> 16) & 0xFF); (*o_putc)(0); }else{ (*o_putc)(0); (*o_putc)(((c1) >> 16) & 0xFF); (*o_putc)(((c1) >> 8) & 0xFF); (*o_putc)( (c1) & 0xFF); } } while (0);
}
static const nkf_char score_table_A0[] = {
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, (((1) << 1) << 1), (((1) << 1) << 1), (((1) << 1) << 1),
    (((1) << 1) << 1), (((1) << 1) << 1), (((1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
};

static const nkf_char score_table_F0[] = {
    (1), (1), (1), (1),
    (1), (((1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
    (((1) << 1) << 1), (((1) << 1) << 1), ((((1) << 1) << 1) << 1), ((((1) << 1) << 1) << 1),
    ((((1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1),
};

static const nkf_char score_table_8FA0[] = {
    0, ((((((1) << 1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
    ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    ((((((1) << 1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
};

static const nkf_char score_table_8FE0[] = {
    (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    (((((1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
};

static const nkf_char score_table_8FF0[] = {
    ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), (((((1) << 1) << 1) << 1) << 1),
    (((((1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
    ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
    ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1), ((((((1) << 1) << 1) << 1) << 1) << 1),
};

static void
set_code_score(struct input_code *ptr, nkf_char score)
{
    if (ptr){
 ptr->score |= score;
    }
}

static void
clr_code_score(struct input_code *ptr, nkf_char score)
{
    if (ptr){
 ptr->score &= ~score;
    }
}

static void
code_score(struct input_code *ptr)
{
    nkf_char c2 = ptr->buf[0];
    nkf_char c1 = ptr->buf[1];
    if (c2 < 0){
 set_code_score(ptr, (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
    }else if (c2 == 0x8e){
 set_code_score(ptr, ((1) << 1));
    }else if (c2 == 0x8f){
 if ((c1 & 0x70) == 0x20){
     set_code_score(ptr, score_table_8FA0[c1 & 0x0f]);
 }else if ((c1 & 0x70) == 0x60){
     set_code_score(ptr, score_table_8FE0[c1 & 0x0f]);
 }else if ((c1 & 0x70) == 0x70){
     set_code_score(ptr, score_table_8FF0[c1 & 0x0f]);
 }else{
     set_code_score(ptr, (((((1) << 1) << 1) << 1) << 1));
 }

    }else if (!e2w_conv(c2, c1)){
 set_code_score(ptr, (((((((1) << 1) << 1) << 1) << 1) << 1) << 1));

    }else if ((c2 & 0x70) == 0x20){
 set_code_score(ptr, score_table_A0[c2 & 0x0f]);
    }else if ((c2 & 0x70) == 0x70){
 set_code_score(ptr, score_table_F0[c2 & 0x0f]);
    }else if ((c2 & 0x70) >= 0x50){
 set_code_score(ptr, (1));
    }
}

static void
status_disable(struct input_code *ptr)
{
    ptr->stat = -1;
    ptr->buf[0] = -1;
    code_score(ptr);
    if (iconv == ptr->iconv_func) set_iconv(0, 0);
}

static void
status_push_ch(struct input_code *ptr, nkf_char c)
{
    ptr->buf[ptr->index++] = c;
}

static void
status_clear(struct input_code *ptr)
{
    ptr->stat = 0;
    ptr->index = 0;
}

static void
status_reset(struct input_code *ptr)
{
    status_clear(ptr);
    ptr->score = (((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));
}

static void
status_reinit(struct input_code *ptr)
{
    status_reset(ptr);
    ptr->_file_stat = 0;
}

static void
status_check(struct input_code *ptr, nkf_char c)
{
    if (c <= 0x7f && estab_f){
 status_reset(ptr);
    }
}

static void
s_status(struct input_code *ptr, nkf_char c)
{
    switch(ptr->stat){
    case -1:
 status_check(ptr, c);
 break;
    case 0:
 if (c <= 0x7f){
     break;
 }else if (((c & (0xFF000000)) == (0x01000000))){
     break;
 }else if (0xa1 <= c && c <= 0xdf){
     status_push_ch(ptr, 0x8e);
     status_push_ch(ptr, c);
     code_score(ptr);
     status_clear(ptr);
 }else if ((0x81 <= c && c < 0xa0) || (0xe0 <= c && c <= 0xea)){
     ptr->stat = 1;
     status_push_ch(ptr, c);
 }else if (0xed <= c && c <= 0xee){
     ptr->stat = 3;
     status_push_ch(ptr, c);

 }else if ((0xFA <= c && c <= 0xFC)){
     ptr->stat = 2;
     status_push_ch(ptr, c);


 }else if (0xf0 <= c && c <= 0xfc){
     ptr->stat = 1;
     status_push_ch(ptr, c);

 }else{
     status_disable(ptr);
 }
 break;
    case 1:
 if ((0x40 <= c && c <= 0x7e) || (0x80 <= c && c <= 0xfc)){
     status_push_ch(ptr, c);
     s2e_conv(ptr->buf[0], ptr->buf[1], &ptr->buf[0], &ptr->buf[1]);
     code_score(ptr);
     status_clear(ptr);
 }else{
     status_disable(ptr);
 }
 break;
    case 2:

 if ((0x40 <= c && c <= 0x7e) || (0x80 <= c && c <= 0xfc)) {
     status_push_ch(ptr, c);
     if (s2e_conv(ptr->buf[0], ptr->buf[1], &ptr->buf[0], &ptr->buf[1]) == 0) {
  set_code_score(ptr, ((((1) << 1) << 1) << 1));
  status_clear(ptr);
  break;
     }
 }

 status_disable(ptr);
 break;
    case 3:
 if ((0x40 <= c && c <= 0x7e) || (0x80 <= c && c <= 0xfc)){
     status_push_ch(ptr, c);
     s2e_conv(ptr->buf[0], ptr->buf[1], &ptr->buf[0], &ptr->buf[1]);
     set_code_score(ptr, ((((1) << 1) << 1) << 1));
     status_clear(ptr);
 }else{
     status_disable(ptr);
 }
 break;
    }
}

static void
e_status(struct input_code *ptr, nkf_char c)
{
    switch (ptr->stat){
    case -1:
 status_check(ptr, c);
 break;
    case 0:
 if (c <= 0x7f){
     break;
 }else if (((c & (0xFF000000)) == (0x01000000))){
     break;
 }else if (0x8e == c || (0xa1 <= c && c <= 0xfe)){
     ptr->stat = 1;
     status_push_ch(ptr, c);

 }else if (0x8f == c){
     ptr->stat = 2;
     status_push_ch(ptr, c);

 }else{
     status_disable(ptr);
 }
 break;
    case 1:
 if (0xa1 <= c && c <= 0xfe){
     status_push_ch(ptr, c);
     code_score(ptr);
     status_clear(ptr);
 }else{
     status_disable(ptr);
 }
 break;

    case 2:
 if (0xa1 <= c && c <= 0xfe){
     ptr->stat = 1;
     status_push_ch(ptr, c);
 }else{
     status_disable(ptr);
 }

    }
}


static void
w_status(struct input_code *ptr, nkf_char c)
{
    switch (ptr->stat){
    case -1:
 status_check(ptr, c);
 break;
    case 0:
 if (c <= 0x7f){
     break;
 }else if (((c & (0xFF000000)) == (0x01000000))){
     break;
 }else if (0xc0 <= c && c <= 0xdf){
     ptr->stat = 1;
     status_push_ch(ptr, c);
 }else if (0xe0 <= c && c <= 0xef){
     ptr->stat = 2;
     status_push_ch(ptr, c);
 }else if (0xf0 <= c && c <= 0xf4){
     ptr->stat = 3;
     status_push_ch(ptr, c);
 }else{
     status_disable(ptr);
 }
 break;
    case 1:
    case 2:
 if (0x80 <= c && c <= 0xbf){
     status_push_ch(ptr, c);
     if (ptr->index > ptr->stat){
  int bom = (ptr->buf[0] == 0xef && ptr->buf[1] == 0xbb
      && ptr->buf[2] == 0xbf);
  w2e_conv(ptr->buf[0], ptr->buf[1], ptr->buf[2],
    &ptr->buf[0], &ptr->buf[1]);
  if (!bom){
      code_score(ptr);
  }
  status_clear(ptr);
     }
 }else{
     status_disable(ptr);
 }
 break;
    case 3:
 if (0x80 <= c && c <= 0xbf){
     if (ptr->index < ptr->stat){
  status_push_ch(ptr, c);
     } else {
  status_clear(ptr);
     }
 }else{
     status_disable(ptr);
 }
 break;
    }
}


static void
code_status(nkf_char c)
{
    int action_flag = 1;
    struct input_code *result = 0;
    struct input_code *p = input_code_list;
    while (p->name){
 if (!p->status_func) {
     ++p;
     continue;
 }
 if (!p->status_func)
     continue;
 (p->status_func)(p, c);
 if (p->stat > 0){
     action_flag = 0;
 }else if(p->stat == 0){
     if (result){
  action_flag = 0;
     }else{
  result = p;
     }
 }
 ++p;
    }

    if (action_flag){
 if (result && !estab_f){
     set_iconv(1, result->iconv_func);
 }else if (c <= 0x7f){
     struct input_code *ptr = input_code_list;
     while (ptr->name){
  status_reset(ptr);
  ++ptr;
     }
 }
    }
}

typedef struct {
    nkf_buf_t *std_gc_buf;
    nkf_char broken_state;
    nkf_buf_t *broken_buf;
    nkf_char mimeout_state;
    nkf_buf_t *nfc_buf;
} nkf_state_t;

static nkf_state_t *nkf_state = ((void*)0);



static void
nkf_state_init(void)
{
    if (nkf_state) {
 nkf_buf_clear(nkf_state->std_gc_buf);
 nkf_buf_clear(nkf_state->broken_buf);
 nkf_buf_clear(nkf_state->nfc_buf);
    }
    else {
 nkf_state = nkf_xmalloc(sizeof(nkf_state_t));
 nkf_state->std_gc_buf = nkf_buf_new((256));
 nkf_state->broken_buf = nkf_buf_new(3);
 nkf_state->nfc_buf = nkf_buf_new(9);
    }
    nkf_state->broken_state = 0;
    nkf_state->mimeout_state = 0;
}


static nkf_char
std_getc(FILE *f)
{
    if (!((nkf_state->std_gc_buf)->len == 0)){
 return nkf_buf_pop(nkf_state->std_gc_buf);
    }
    return _IO_getc (f);
}


static nkf_char
std_ungetc(nkf_char c,  FILE *f)
{
    nkf_buf_push(nkf_state->std_gc_buf, c);
    return c;
}


static void
std_putc(nkf_char c)
{
    if(c!=(-1))
 putchar(c);
}


static nkf_char hold_buf[1024*2];
static int hold_count = 0;
static nkf_char
push_hold_buf(nkf_char c2)
{
    if (hold_count >= 1024*2)
 return ((-1));
    hold_buf[hold_count++] = c2;
    return ((hold_count >= 1024*2) ? (-1) : hold_count);
}

static int
h_conv(FILE *f, nkf_char c1, nkf_char c2)
{
    int ret;
    int hold_index;
    int fromhold_count;
    nkf_char c3, c4;





    hold_count = 0;
    push_hold_buf(c1);
    push_hold_buf(c2);

    while ((c2 = (*i_getc)(f)) != (-1)) {
 if (c2 == 0x1b){
     (*i_ungetc)(c2,f);
     break;
 }
 code_status(c2);
 if (push_hold_buf(c2) == (-1) || estab_f) {
     break;
 }
    }

    if (!estab_f) {
 struct input_code *p = input_code_list;
 struct input_code *result = p;
 if (c2 == (-1)) {
     code_status(c2);
 }
 while (p->name) {
     if (p->status_func && p->score < result->score) {
  result = p;
     }
     p++;
 }
 set_iconv(1, result->iconv_func);
    }
    ret = c2;
    hold_index = 0;
    while (hold_index < hold_count){
 c1 = hold_buf[hold_index++];
 if (((c1 & (0xFF000000)) == (0x01000000))) {
     (*oconv)(0, c1);
     continue;
 }
 else if (c1 <= 0x7f){
     (*iconv)(0, c1, 0);
     continue;
 }else if (iconv == s_iconv && 0xa1 <= c1 && c1 <= 0xdf){
     (*iconv)(JIS_X_0201_1976_K, c1, 0);
     continue;
 }
 fromhold_count = 1;
 if (hold_index < hold_count){
     c2 = hold_buf[hold_index++];
     fromhold_count++;
 }else{
     c2 = (*i_getc)(f);
     if (c2 == (-1)){
  c4 = (-1);
  break;
     }
     code_status(c2);
 }
 c3 = 0;
 switch ((*iconv)(c1, c2, 0)) {
 case -2:

     if (hold_index < hold_count){
  c3 = hold_buf[hold_index++];
     } else if ((c3 = (*i_getc)(f)) == (-1)) {
  ret = (-1);
  break;
     }
     code_status(c3);
     if (hold_index < hold_count){
  c4 = hold_buf[hold_index++];
     } else if ((c4 = (*i_getc)(f)) == (-1)) {
  c3 = ret = (-1);
  break;
     }
     code_status(c4);
     (*iconv)(c1, c2, (c3<<8)|c4);
     break;
 case -3:

     if (hold_index < hold_count){
  c3 = hold_buf[hold_index++];
  fromhold_count++;
     } else if ((c3 = (*i_getc)(f)) == (-1)) {
  w_iconv_nocombine(c1, c2, 0);
  break;
     }
     if (hold_index < hold_count){
  c4 = hold_buf[hold_index++];
  fromhold_count++;
     } else if ((c4 = (*i_getc)(f)) == (-1)) {
  w_iconv_nocombine(c1, c2, 0);
  if (fromhold_count <= 2)
      (*i_ungetc)(c3,f);
  else
      hold_index--;
  continue;
     }
     if (w_iconv_combine(c1, c2, 0, c3, c4, 0)) {
  w_iconv_nocombine(c1, c2, 0);
  if (fromhold_count <= 2) {
      (*i_ungetc)(c4,f);
      (*i_ungetc)(c3,f);
  } else if (fromhold_count == 3) {
      (*i_ungetc)(c4,f);
      hold_index--;
  } else {
      hold_index -= 2;
  }
     }
     break;
 case -1:

     if (hold_index < hold_count){
  c3 = hold_buf[hold_index++];
  fromhold_count++;
     } else if ((c3 = (*i_getc)(f)) == (-1)) {
  ret = (-1);
  break;
     } else {
  code_status(c3);
     }
     if ((*iconv)(c1, c2, c3) == -3) {

  nkf_char c5, c6;
  if (hold_index < hold_count){
      c4 = hold_buf[hold_index++];
      fromhold_count++;
  } else if ((c4 = (*i_getc)(f)) == (-1)) {
      w_iconv_nocombine(c1, c2, c3);
      continue;
  }
  if (hold_index < hold_count){
      c5 = hold_buf[hold_index++];
      fromhold_count++;
  } else if ((c5 = (*i_getc)(f)) == (-1)) {
      w_iconv_nocombine(c1, c2, c3);
      if (fromhold_count == 4)
   hold_index--;
      else
   (*i_ungetc)(c4,f);
      continue;
  }
  if (hold_index < hold_count){
      c6 = hold_buf[hold_index++];
      fromhold_count++;
  } else if ((c6 = (*i_getc)(f)) == (-1)) {
      w_iconv_nocombine(c1, c2, c3);
      if (fromhold_count == 5) {
   hold_index -= 2;
      } else if (fromhold_count == 4) {
   hold_index--;
   (*i_ungetc)(c5,f);
      } else {
   (*i_ungetc)(c5,f);
   (*i_ungetc)(c4,f);
      }
      continue;
  }
  if (w_iconv_combine(c1, c2, c3, c4, c5, c6)) {
      w_iconv_nocombine(c1, c2, c3);
      if (fromhold_count == 6) {
   hold_index -= 3;
      } else if (fromhold_count == 5) {
   hold_index -= 2;
   (*i_ungetc)(c6,f);
      } else if (fromhold_count == 4) {
   hold_index--;
   (*i_ungetc)(c6,f);
   (*i_ungetc)(c5,f);
      } else {
   (*i_ungetc)(c6,f);
   (*i_ungetc)(c5,f);
   (*i_ungetc)(c4,f);
      }
  }
     }
     break;
 }
 if (c3 == (-1)) break;
    }
    return ret;
}




static void
check_bom(FILE *f)
{
    int c2;
    input_bom_f = 0;
    switch(c2 = (*i_getc)(f)){
    case 0x00:
 if((c2 = (*i_getc)(f)) == 0x00){
     if((c2 = (*i_getc)(f)) == 0xFE){
  if((c2 = (*i_getc)(f)) == 0xFF){
      if(!input_encoding){
   set_iconv(1, w_iconv32);
      }
      if (iconv == w_iconv32) {
   input_bom_f = 1;
   input_endian = ENDIAN_BIG;
   return;
      }
      (*i_ungetc)(0xFF,f);
  }else (*i_ungetc)(c2,f);
  (*i_ungetc)(0xFE,f);
     }else if(c2 == 0xFF){
  if((c2 = (*i_getc)(f)) == 0xFE){
      if(!input_encoding){
   set_iconv(1, w_iconv32);
      }
      if (iconv == w_iconv32) {
   input_endian = ENDIAN_2143;
   return;
      }
      (*i_ungetc)(0xFF,f);
  }else (*i_ungetc)(c2,f);
  (*i_ungetc)(0xFF,f);
     }else (*i_ungetc)(c2,f);
     (*i_ungetc)(0x00,f);
 }else (*i_ungetc)(c2,f);
 (*i_ungetc)(0x00,f);
 break;
    case 0xEF:
 if((c2 = (*i_getc)(f)) == 0xBB){
     if((c2 = (*i_getc)(f)) == 0xBF){
  if(!input_encoding){
      set_iconv(1, w_iconv);
  }
  if (iconv == w_iconv) {
      input_bom_f = 1;
      return;
  }
  (*i_ungetc)(0xBF,f);
     }else (*i_ungetc)(c2,f);
     (*i_ungetc)(0xBB,f);
 }else (*i_ungetc)(c2,f);
 (*i_ungetc)(0xEF,f);
 break;
    case 0xFE:
 if((c2 = (*i_getc)(f)) == 0xFF){
     if((c2 = (*i_getc)(f)) == 0x00){
  if((c2 = (*i_getc)(f)) == 0x00){
      if(!input_encoding){
   set_iconv(1, w_iconv32);
      }
      if (iconv == w_iconv32) {
   input_endian = ENDIAN_3412;
   return;
      }
      (*i_ungetc)(0x00,f);
  }else (*i_ungetc)(c2,f);
  (*i_ungetc)(0x00,f);
     }else (*i_ungetc)(c2,f);
     if(!input_encoding){
  set_iconv(1, w_iconv16);
     }
     if (iconv == w_iconv16) {
  input_endian = ENDIAN_BIG;
  input_bom_f = 1;
  return;
     }
     (*i_ungetc)(0xFF,f);
 }else (*i_ungetc)(c2,f);
 (*i_ungetc)(0xFE,f);
 break;
    case 0xFF:
 if((c2 = (*i_getc)(f)) == 0xFE){
     if((c2 = (*i_getc)(f)) == 0x00){
  if((c2 = (*i_getc)(f)) == 0x00){
      if(!input_encoding){
   set_iconv(1, w_iconv32);
      }
      if (iconv == w_iconv32) {
   input_endian = ENDIAN_LITTLE;
   input_bom_f = 1;
   return;
      }
      (*i_ungetc)(0x00,f);
  }else (*i_ungetc)(c2,f);
  (*i_ungetc)(0x00,f);
     }else (*i_ungetc)(c2,f);
     if(!input_encoding){
  set_iconv(1, w_iconv16);
     }
     if (iconv == w_iconv16) {
  input_endian = ENDIAN_LITTLE;
  input_bom_f = 1;
  return;
     }
     (*i_ungetc)(0xFE,f);
 }else (*i_ungetc)(c2,f);
 (*i_ungetc)(0xFF,f);
 break;
    default:
 (*i_ungetc)(c2,f);
 break;
    }
}

static nkf_char
broken_getc(FILE *f)
{
    nkf_char c, c1;

    if (!((nkf_state->broken_buf)->len == 0)) {
 return nkf_buf_pop(nkf_state->broken_buf);
    }
    c = (*i_bgetc)(f);
    if (c=='$' && nkf_state->broken_state != 0x1b
 && (input_mode == ASCII || input_mode == JIS_X_0201_1976_K)) {
 c1= (*i_bgetc)(f);
 nkf_state->broken_state = 0;
 if (c1=='@'|| c1=='B') {
     nkf_buf_push(nkf_state->broken_buf, c1);
     nkf_buf_push(nkf_state->broken_buf, c);
     return 0x1b;
 } else {
     (*i_bungetc)(c1,f);
     return c;
 }
    } else if (c=='(' && nkf_state->broken_state != 0x1b
        && (input_mode == JIS_X_0208 || input_mode == JIS_X_0201_1976_K)) {
 c1= (*i_bgetc)(f);
 nkf_state->broken_state = 0;
 if (c1=='J'|| c1=='B') {
     nkf_buf_push(nkf_state->broken_buf, c1);
     nkf_buf_push(nkf_state->broken_buf, c);
     return 0x1b;
 } else {
     (*i_bungetc)(c1,f);
     return c;
 }
    } else {
 nkf_state->broken_state = c;
 return c;
    }
}

static nkf_char
broken_ungetc(nkf_char c,  FILE *f)
{
    if (((nkf_state->broken_buf)->len) < 2)
 nkf_buf_push(nkf_state->broken_buf, c);
    return c;
}

static void
eol_conv(nkf_char c2, nkf_char c1)
{
    if (guess_f && input_eol != (-1)) {
 if (c2 == 0 && c1 == 0x0a) {
     if (!input_eol) input_eol = prev_cr ? 0x0D0A : 0x0a;
     else if (input_eol != (prev_cr ? 0x0D0A : 0x0a)) input_eol = (-1);
 } else if (c2 == 0 && c1 == 0x0d && input_eol == 0x0a) input_eol = (-1);
 else if (!prev_cr);
 else if (!input_eol) input_eol = 0x0d;
 else if (input_eol != 0x0d) input_eol = (-1);
    }
    if (prev_cr || (c2 == 0 && c1 == 0x0a)) {
 prev_cr = 0;
 if (eolmode_f != 0x0a) (*o_eol_conv)(0, 0x0d);
 if (eolmode_f != 0x0d) (*o_eol_conv)(0, 0x0a);
    }
    if (c2 == 0 && c1 == 0x0d) prev_cr = 0x0d;
    else if (c2 != 0 || c1 != 0x0a) (*o_eol_conv)(c2, c1);
}

static void
put_newline(void (*func)(nkf_char))
{
    switch (eolmode_f ? eolmode_f : 0x0A) {
      case 0x0D0A:
 (*func)(0x0D);
 (*func)(0x0A);
 break;
      case 0x0d:
 (*func)(0x0D);
 break;
      case 0x0a:
 (*func)(0x0A);
 break;
    }
}

static void
oconv_newline(void (*func)(nkf_char, nkf_char))
{
    switch (eolmode_f ? eolmode_f : 0x0A) {
      case 0x0D0A:
 (*func)(0, 0x0D);
 (*func)(0, 0x0A);
 break;
      case 0x0d:
 (*func)(0, 0x0D);
 break;
      case 0x0a:
 (*func)(0, 0x0A);
 break;
    }
}
static void
fold_conv(nkf_char c2, nkf_char c1)
{
    nkf_char prev0;
    nkf_char fold_state;

    if (c1== 0x0d && !fold_preserve_f) {
 fold_state=0;
    }else if (c1== 0x0a&&f_prev==0x0d && fold_preserve_f) {
 f_prev = 0x0a;
 fold_state=0;
    } else if (c1== 0x08) {
 if (f_line>0) f_line--;
 fold_state = 1;
    } else if (c2==(-1) && f_line != 0) {
 fold_state = 0x0a;
    } else if ((c1==0x0a && !fold_preserve_f)
        || ((c1==0x0d||(c1==0x0a&&f_prev!=0x0d))
     && fold_preserve_f)) {

 if (fold_preserve_f) {
     f_prev = c1;
     f_line = 0;
     fold_state = 0x0d;
 } else if ((f_prev == c1)
     || (f_prev == 0x0a)
    ) {
     if (f_line) {
  f_line = 0;
  fold_state = 0x0a;
     } else {
  f_line = 0;
  fold_state = 1;
     }
 } else {
     if (f_prev&0x80) {
  f_prev = c1;
  fold_state = 0;
     } else if (f_prev==0x20) {
  fold_state = 0;
     } else {
  f_prev = c1;
  if (++f_line<=fold_len)
      fold_state = 0x20;
  else {
      f_line = 0;
      fold_state = 0x0d;
  }
     }
 }
    } else if (c1=='\f') {
 f_prev = 0x0a;
 f_line = 0;
 fold_state = 0x0a;
    } else if ((c2==0 && (c1 == 0x20 || c1 == 0x09)) || (c2 == '!' && c1 == '!')) {

 if (f_prev == 0x20) {
     fold_state = 0;
 } else {
     f_prev = 0x20;
     if (++f_line<=fold_len)
  fold_state = 0x20;
     else {
  f_prev = 0x20; f_line = 0;
  fold_state = 0x0d;
     }
 }
    } else {
 prev0 = f_prev;
 f_prev = c1;
 if (c2 || c2 == JIS_X_0201_1976_K)
     f_prev |= 0x80;
 f_line += c2 == JIS_X_0201_1976_K ? 1: (c2?2:1);
 if (f_line<=fold_len) {
     fold_state = 1;
 } else {
     if (f_line>fold_len+fold_margin) {
  f_line = (c2?2:1);
  fold_state = 0x0a;
     } else if (c2 == JIS_X_0201_1976_K) {

  if (c1==(0xde&0x7f)) fold_state = 1;
  else if (c1==(0xdf&0x7f)) fold_state = 1;
  else if (c1==(0xa4&0x7f)) fold_state = 1;
  else if (c1==(0xa3&0x7f)) fold_state = 1;
  else if (c1==(0xa1&0x7f)) fold_state = 1;
  else if (c1==(0xb0&0x7f)) fold_state = 1;
  else if (0x20<=c1 && c1<=(0xdf&0x7f)) {
      f_line = 1;
      fold_state = 0x0a;
  } else {
      f_line = 1;
      fold_state = 0x0a;
  }
     } else if (c2==0) {

  if ( c1==')'||
      c1==']'||
      c1=='}'||
      c1=='.'||
      c1==','||
      c1=='!'||
      c1=='?'||
      c1=='/'||
      c1==':'||
      c1==';') {
      fold_state = 1;

  } else if (!(('a'<=prev0 && prev0<='z')||('A'<= prev0 && prev0<='Z')||('0'<=prev0 && prev0<='9'))) {
      f_line = (c2?2:1);
      fold_state = 0x0a;
  } else if ((prev0==0x20) ||
      (prev0==0x0a)||
      (prev0&0x80)) {
      f_line = (c2?2:1);
      fold_state = 0x0a;
  } else {
      fold_state = 1;
  }
     } else {
  if (c2=='!') {
      if (c1=='"') fold_state = 1;
      else if (c1=='#') fold_state = 1;
      else if (c1=='W') fold_state = 1;
      else if (c1=='K') fold_state = 1;
      else if (c1=='$') fold_state = 1;
      else if (c1=='%') fold_state = 1;
      else if (c1=='\'') fold_state = 1;
      else if (c1=='(') fold_state = 1;
      else if (c1==')') fold_state = 1;
      else if (c1=='*') fold_state = 1;
      else if (c1=='+') fold_state = 1;
      else if (c1==',') fold_state = 1;

      else {
   fold_state = 0x0a;
   f_line = (c2?2:1);

      }
  } else {
      f_line = (c2?2:1);
      fold_state = 0x0a;

  }
     }
 }
    }

    switch(fold_state) {
    case 0x0a:
 oconv_newline(o_fconv);
 (*o_fconv)(c2,c1);
 break;
    case 0:
 return;
    case 0x0d:
 oconv_newline(o_fconv);
 break;
    case 0x09:
    case 0x20:
 (*o_fconv)(0,0x20);
 break;
    default:
 (*o_fconv)(c2,c1);
    }
}

static nkf_char z_prev2=0,z_prev1=0;

static void
z_conv(nkf_char c2, nkf_char c1)
{



    if (c2 == JIS_X_0201_1976_K && (c1 == 0x20 || c1 == 0x7D || c1 == 0x7E)) {
 (*o_zconv)(c2,c1);
 return;
    }

    if (x0201_f) {
 if (z_prev2 == JIS_X_0201_1976_K) {
     if (c2 == JIS_X_0201_1976_K) {
  if (c1 == (0xde&0x7f)) {
      z_prev2 = 0;
      (*o_zconv)(dv[(z_prev1-0x20)*2], dv[(z_prev1-0x20)*2+1]);
      return;
  } else if (c1 == (0xdf&0x7f) && ev[(z_prev1-0x20)*2]) {
      z_prev2 = 0;
      (*o_zconv)(ev[(z_prev1-0x20)*2], ev[(z_prev1-0x20)*2+1]);
      return;
  } else if (x0213_f && c1 == (0xdf&0x7f) && ev_x0213[(z_prev1-0x20)*2]) {
      z_prev2 = 0;
      (*o_zconv)(ev_x0213[(z_prev1-0x20)*2], ev_x0213[(z_prev1-0x20)*2+1]);
      return;
  }
     }
     z_prev2 = 0;
     (*o_zconv)(cv[(z_prev1-0x20)*2], cv[(z_prev1-0x20)*2+1]);
 }
 if (c2 == JIS_X_0201_1976_K) {
     if (dv[(c1-0x20)*2] || ev[(c1-0x20)*2] || (x0213_f && ev_x0213[(c1-0x20)*2])) {

  z_prev1 = c1;
  z_prev2 = c2;
  return;
     } else {
  (*o_zconv)(cv[(c1-0x20)*2], cv[(c1-0x20)*2+1]);
  return;
     }
 }
    }

    if (c2 == (-1)) {
 (*o_zconv)(c2, c1);
 return;
    }

    if (alpha_f&1 && c2 == 0x23) {

 c2 = 0;
    } else if (c2 == 0x21) {

 if (0x21==c1) {
     if (alpha_f&2) {
  c2 = 0;
  c1 = 0x20;
     } else if (alpha_f&4) {
  (*o_zconv)(0, 0x20);
  (*o_zconv)(0, 0x20);
  return;
     }
 } else if (alpha_f&1 && 0x20<c1 && c1<0x7f && fv[c1-0x20]) {
     c2 = 0;
     c1 = fv[c1-0x20];
 }
    }

    if (alpha_f&8 && c2 == 0) {

 const char *entity = 0;
 switch (c1){
 case '>': entity = "&gt;"; break;
 case '<': entity = "&lt;"; break;
 case '\"': entity = "&quot;"; break;
 case '&': entity = "&amp;"; break;
 }
 if (entity){
     while (*entity) (*o_zconv)(0, *entity++);
     return;
 }
    }

    if (alpha_f & 16) {

 if (c2 == 0x21) {
     nkf_char c = 0;
     switch (c1) {
     case 0x23:

  c = 0xA1;
  break;
     case 0x56:

  c = 0xA2;
  break;
     case 0x57:

  c = 0xA3;
  break;
     case 0x22:

  c = 0xA4;
  break;
     case 0x26:

  c = 0xA5;
  break;
     case 0x3C:

  c = 0xB0;
  break;
     case 0x2B:

  c = 0xDE;
  break;
     case 0x2C:

  c = 0xDF;
  break;
     }
     if (c) {
  (*o_zconv)(JIS_X_0201_1976_K, c);
  return;
     }
 } else if (c2 == 0x25) {

     static const int fullwidth_to_halfwidth[] =
     {
  0x0000, 0x2700, 0x3100, 0x2800, 0x3200, 0x2900, 0x3300, 0x2A00,
  0x3400, 0x2B00, 0x3500, 0x3600, 0x365E, 0x3700, 0x375E, 0x3800,
  0x385E, 0x3900, 0x395E, 0x3A00, 0x3A5E, 0x3B00, 0x3B5E, 0x3C00,
  0x3C5E, 0x3D00, 0x3D5E, 0x3E00, 0x3E5E, 0x3F00, 0x3F5E, 0x4000,
  0x405E, 0x4100, 0x415E, 0x2F00, 0x4200, 0x425E, 0x4300, 0x435E,
  0x4400, 0x445E, 0x4500, 0x4600, 0x4700, 0x4800, 0x4900, 0x4A00,
  0x4A5E, 0x4A5F, 0x4B00, 0x4B5E, 0x4B5F, 0x4C00, 0x4C5E, 0x4C5F,
  0x4D00, 0x4D5E, 0x4D5F, 0x4E00, 0x4E5E, 0x4E5F, 0x4F00, 0x5000,
  0x5100, 0x5200, 0x5300, 0x2C00, 0x5400, 0x2D00, 0x5500, 0x2E00,
  0x5600, 0x5700, 0x5800, 0x5900, 0x5A00, 0x5B00, 0x0000, 0x5C00,
  0x0000, 0x0000, 0x2600, 0x5D00, 0x335E, 0x0000, 0x0000, 0x365F,
  0x375F, 0x385F, 0x395F, 0x3A5F, 0x3E5F, 0x425F, 0x445F, 0x0000
     };
     if (fullwidth_to_halfwidth[c1-0x20]){
  c2 = fullwidth_to_halfwidth[c1-0x20];
  (*o_zconv)(JIS_X_0201_1976_K, c2>>8);
  if (c2 & 0xFF) {
      (*o_zconv)(JIS_X_0201_1976_K, c2&0xFF);
  }
  return;
     }
 } else if (c2 == 0 && ((c1 & (0xFF000000)) == (0x01000000)) &&
     ((c1&(0x00FFFFFF)) == 0x3099 || (c1&(0x00FFFFFF)) == 0x309A)) {
     (*o_zconv)(JIS_X_0201_1976_K, 0x5E + (c1&(0x00FFFFFF)) - 0x3099);
     return;
 }
    }
    (*o_zconv)(c2,c1);
}
static void
rot_conv(nkf_char c2, nkf_char c1)
{
    if (c2 == 0 || c2 == JIS_X_0201_1976_K || c2 == ISO_8859_1) {
 c1 = ( ( c1 < 'A') ? c1: (c1 <= 'M') ? (c1 + 13): (c1 <= 'Z') ? (c1 - 13): (c1 < 'a') ? (c1): (c1 <= 'm') ? (c1 + 13): (c1 <= 'z') ? (c1 - 13): (c1) );
    } else if (c2) {
 c1 = ( ( c1 < '!') ? c1: ( c1 <= 'O') ? (c1 + 47) : ( c1 <= '~') ? (c1 - 47) : c1 );
 c2 = ( ( c2 < '!') ? c2: ( c2 <= 'O') ? (c2 + 47) : ( c2 <= '~') ? (c2 - 47) : c2 );
    }
    (*o_rot_conv)(c2,c1);
}

static void
hira_conv(nkf_char c2, nkf_char c1)
{
    if (hira_f & 1) {
 if (c2 == 0x25) {
     if (0x20 < c1 && c1 < 0x74) {
  c2 = 0x24;
  (*o_hira_conv)(c2,c1);
  return;
     } else if (c1 == 0x74 && ( (output_encoding)->base_encoding == &NkfEncodingUTF_8 || (output_encoding)->base_encoding == &NkfEncodingUTF_16 || (output_encoding)->base_encoding == &NkfEncodingUTF_32)) {
  c2 = 0;
  c1 = ((0x3094) | (0x01000000));
  (*o_hira_conv)(c2,c1);
  return;
     }
 } else if (c2 == 0x21 && (c1 == 0x33 || c1 == 0x34)) {
     c1 += 2;
     (*o_hira_conv)(c2,c1);
     return;
 }
    }
    if (hira_f & 2) {
 if (c2 == 0 && c1 == ((0x3094) | (0x01000000))) {
     c2 = 0x25;
     c1 = 0x74;
 } else if (c2 == 0x24 && 0x20 < c1 && c1 < 0x74) {
     c2 = 0x25;
 } else if (c2 == 0x21 && (c1 == 0x35 || c1 == 0x36)) {
     c1 -= 2;
 }
    }
    (*o_hira_conv)(c2,c1);
}


static void
iso2022jp_check_conv(nkf_char c2, nkf_char c1)
{

    static const nkf_char range[18][2] = {
 {0x222f, 0x2239,},
 {0x2242, 0x2249,},
 {0x2251, 0x225b,},
 {0x226b, 0x2271,},
 {0x227a, 0x227d,},
 {0x2321, 0x232f,},
 {0x233a, 0x2340,},
 {0x235b, 0x2360,},
 {0x237b, 0x237e,},
 {0x2474, 0x247e,},
 {0x2577, 0x257e,},
 {0x2639, 0x2640,},
 {0x2659, 0x267e,},
 {0x2742, 0x2750,},
 {0x2772, 0x277e,},
 {0x2841, 0x287e,},
 {0x4f54, 0x4f7e,},
 {0x7425, 0x747e},
    };
    nkf_char i;
    nkf_char start, end, c;

    if(c2 >= 0x00 && c2 <= 0x20 && c1 >= 0x7f && c1 <= 0xff) {
 c2 = 0x22;
 c1 = 0x2e;
    }
    if((c2 >= 0x29 && c2 <= 0x2f) || (c2 >= 0x75 && c2 <= 0x7e)) {
 c2 = 0x22;
 c1 = 0x2e;
    }

    for (i = 0; i < 18; i++) {
 start = range[i][0];
 end = range[i][1];
 c = (c2 << 8) + c1;
 if (c >= start && c <= end) {
     c2 = 0x22;
     c1 = 0x2e;
 }
    }
    (*o_iso2022jp_check_conv)(c2,c1);
}




static const unsigned char *mime_pattern[] = {
    (const unsigned char *)"\075?EUC-JP?B?",
    (const unsigned char *)"\075?SHIFT_JIS?B?",
    (const unsigned char *)"\075?ISO-8859-1?Q?",
    (const unsigned char *)"\075?ISO-8859-1?B?",
    (const unsigned char *)"\075?ISO-2022-JP?B?",
    (const unsigned char *)"\075?ISO-2022-JP?B?",
    (const unsigned char *)"\075?ISO-2022-JP?Q?",

    (const unsigned char *)"\075?UTF-8?B?",
    (const unsigned char *)"\075?UTF-8?Q?",

    (const unsigned char *)"\075?US-ASCII?Q?",
    ((void*)0)
};



nkf_char (*mime_priority_func[])(nkf_char c2, nkf_char c1, nkf_char c0) = {
    e_iconv, s_iconv, 0, 0, 0, 0, 0,

    w_iconv, w_iconv,

    0,
};

static const nkf_char mime_encode[] = {
    EUC_JP, SHIFT_JIS, ISO_8859_1, ISO_8859_1, JIS_X_0208, JIS_X_0201_1976_K, JIS_X_0201_1976_K,

    UTF_8, UTF_8,

    ASCII,
    0
};

static const nkf_char mime_encode_method[] = {
    'B', 'B','Q', 'B', 'B', 'B', 'Q',

    'B', 'Q',

    'Q',
    0
};







static struct {
    unsigned char buf[(1024)];
    unsigned int top;
    unsigned int last;
    unsigned int input;
} mime_input_state;
static nkf_char (*mime_iconv_back)(nkf_char c2,nkf_char c1,nkf_char c0) = ((void*)0);



static void
mime_input_buf_unshift(nkf_char c)
{
    mime_input_state.buf[(--mime_input_state.top)&((1024)-1)] = (unsigned char)c;
}

static nkf_char
mime_ungetc(nkf_char c,  FILE *f)
{
    mime_input_buf_unshift(c);
    return c;
}

static nkf_char
mime_ungetc_buf(nkf_char c, FILE *f)
{
    if (mimebuf_f)
 (*i_mungetc_buf)(c,f);
    else
 mime_input_state.buf[(--mime_input_state.input)&((1024)-1)] = (unsigned char)c;
    return c;
}

static nkf_char
mime_getc_buf(FILE *f)
{


    return ((mimebuf_f)?
     (*i_mgetc_buf)(f):mime_input_state.buf[(mime_input_state.input++)&((1024)-1)]);
}

static void
switch_mime_getc(void)
{
    if (i_getc!=mime_getc) {
 i_mgetc = i_getc; i_getc = mime_getc;
 i_mungetc = i_ungetc; i_ungetc = mime_ungetc;
 if(mime_f==8) {
     i_mgetc_buf = i_mgetc; i_mgetc = mime_getc_buf;
     i_mungetc_buf = i_mungetc; i_mungetc = mime_ungetc_buf;
 }
    }
}

static void
unswitch_mime_getc(void)
{
    if(mime_f==8) {
 i_mgetc = i_mgetc_buf;
 i_mungetc = i_mungetc_buf;
    }
    i_getc = i_mgetc;
    i_ungetc = i_mungetc;
    if(mime_iconv_back)set_iconv(0, mime_iconv_back);
    mime_iconv_back = ((void*)0);
}

static nkf_char
mime_integrity(FILE *f, const unsigned char *p)
{
    nkf_char c,d;
    unsigned int q;


    mime_input_state.input = mime_input_state.top;
    mime_input_state.last = mime_input_state.top;

    while(*p) mime_input_state.buf[(mime_input_state.input++)&((1024)-1)] = *p++;
    d = 0;
    q = mime_input_state.input;
    while((c=(*i_getc)(f))!=(-1)) {
 if (((mime_input_state.input-mime_input_state.top)&((1024)-1))==0) {
     break;
 }
 if (c=='=' && d=='?') {

     mime_input_state.buf[(mime_input_state.input++)&((1024)-1)] = (unsigned char)c;

     mime_input_state.input = q;
     switch_mime_getc();
     return 1;
 }
 if (!( (c=='+'||c=='/'|| c=='=' || c=='?' || (('a'<=c && c<='z')||('A'<= c && c<='Z')||('0'<=c && c<='9')))))
     break;

 mime_input_state.buf[(mime_input_state.input++)&((1024)-1)] = (unsigned char)c;
 d=c;
    }

    mime_input_state.buf[(mime_input_state.input++)&((1024)-1)] = (unsigned char)c;
    mime_input_state.last = mime_input_state.input;
    mime_decode_mode = 1;
    switch_mime_getc();
    return 1;
}

static nkf_char
mime_begin_strict(FILE *f)
{
    nkf_char c1 = 0;
    int i,j,k;
    const unsigned char *p,*q;
    nkf_char r[20];

    mime_decode_mode = 0;

    j = 0;
    p = mime_pattern[j];
    r[0]='='; r[1]='?';

    for(i=2;p[i]>0x20;i++) {
 if (((r[i] = c1 = (*i_getc)(f))==(-1)) || (('a'<=c1 && c1<='z')?(c1-('a'-'A')):c1) != p[i]) {

     q = p;
     while (mime_pattern[++j]) {
  p = mime_pattern[j];
  for(k=2;k<i;k++)
      if (p[k]!=q[k]) break;
  if (k==i && (('a'<=c1 && c1<='z')?(c1-('a'-'A')):c1)==p[k]) break;
     }
     p = mime_pattern[j];
     if (p) continue;

     (*i_ungetc)(c1,f);
     for(j=0;j<i;j++) {
  (*oconv)(0,r[j]);
     }
     return c1;
 }
    }
    mime_decode_mode = p[i-2];

    mime_iconv_back = iconv;
    set_iconv(0, mime_priority_func[j]);
    clr_code_score(find_inputcode_byfunc(mime_priority_func[j]), ((((((((1) << 1) << 1) << 1) << 1) << 1) << 1) << 1));

    if (mime_decode_mode=='B') {
 mimebuf_f = unbuf_f;
 if (!unbuf_f) {

     return mime_integrity(f,mime_pattern[j]);
 }
    }
    switch_mime_getc();
    mimebuf_f = 1;
    return c1;
}

static nkf_char
mime_begin(FILE *f)
{
    nkf_char c1 = 0;
    int i,k;





    k = mime_input_state.last;
    mime_input_state.buf[(mime_input_state.last++)&((1024)-1)]='='; mime_input_state.buf[(mime_input_state.last++)&((1024)-1)]='?';
    for(i=2;i<20;i++) {

 c1 = (*i_getc)(f); mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)c1;
 if (c1==0x0a||c1==0x20||c1==0x0d||
     c1=='-'||c1=='_'||(('a'<=c1 && c1<='z')||('A'<= c1 && c1<='Z')||('0'<=c1 && c1<='9'))) continue;
 if (c1=='=') {

     (*i_ungetc)(c1,f);
     mime_input_state.last--;
     break;
 }
 if (c1!='?') break;
 else {

     c1 = (*i_getc)(f); mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)c1;
     if (!(++i<20) || c1==(-1)) break;
     if (c1=='b'||c1=='B') {
  mime_decode_mode = 'B';
     } else if (c1=='q'||c1=='Q') {
  mime_decode_mode = 'Q';
     } else {
  break;
     }
     c1 = (*i_getc)(f); mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)c1;
     if (!(++i<20) || c1==(-1)) break;
     if (c1!='?') {
  mime_decode_mode = 0;
     }
     break;
 }
    }
    switch_mime_getc();
    if (!mime_decode_mode) {

 mime_decode_mode = 1;


 return c1;
    }

    mime_input_state.last = k;

    return c1;
}


static void
no_putc( nkf_char c)
{
    ;
}

static void
debug(const char *str)
{
    if (debug_f){
 fprintf(stderr, "%s\n", str ? str : "NULL");
    }
}


static void
set_input_codename(const char *codename)
{
    if (!input_codename) {
 input_codename = codename;
    } else if (strcmp(codename, input_codename) != 0) {
 input_codename = "";
    }
}

static const char*
get_guessed_code(void)
{
    if (input_codename && !*input_codename) {
 input_codename = "BINARY";
    } else {
 struct input_code *p = find_inputcode_byfunc(iconv);
 if (!input_codename) {
     input_codename = "ASCII";
 } else if (strcmp(input_codename, "Shift_JIS") == 0) {
     if (p->score & ((((1) << 1) << 1)|((((1) << 1) << 1) << 1)))
  input_codename = "CP932";
 } else if (strcmp(input_codename, "EUC-JP") == 0) {
     if (p->score & ((((((1) << 1) << 1) << 1) << 1) << 1))
  input_codename = "EUC-JIS-2004";
     else if (p->score & ((((((1) << 1) << 1) << 1) << 1)))
  input_codename = "EUCJP-MS";
     else if (p->score & ((((1) << 1) << 1)|((((1) << 1) << 1) << 1)))
  input_codename = "CP51932";
 } else if (strcmp(input_codename, "ISO-2022-JP") == 0) {
     if (p->score & (((1) << 1)))
  input_codename = "CP50221";
     else if (p->score & ((((1) << 1) << 1)|((((1) << 1) << 1) << 1)))
  input_codename = "CP50220";
 }
    }
    return input_codename;
}


static void
print_guessed_code(char *filename)
{
    if (filename != ((void*)0)) printf("%s: ", filename);
    if (input_codename && !*input_codename) {
 printf("BINARY\n");
    } else {
 input_codename = get_guessed_code();
 if (guess_f == 1) {
     printf("%s\n", input_codename);
 } else {
     printf("%s%s%s%s\n",
     input_codename,
     iconv != w_iconv16 && iconv != w_iconv32 ? "":
     input_endian == ENDIAN_LITTLE ? " LE":
     input_endian == ENDIAN_BIG ? " BE":
     "[BUG]",
     input_bom_f ? " (BOM)": "",
     input_eol == 0x0d ? " (CR)":
     input_eol == 0x0a ? " (LF)":
     input_eol == 0x0D0A ? " (CRLF)":
     input_eol == (-1) ? " (MIXED NL)":
     "");
 }
    }
}




static nkf_char
hex_getc(nkf_char ch, FILE *f, nkf_char (*g)(FILE *f), nkf_char (*u)(nkf_char c, FILE *f))
{
    nkf_char c1, c2, c3;
    c1 = (*g)(f);
    if (c1 != ch){
 return c1;
    }
    c2 = (*g)(f);
    if (!(('0'<=c2 && c2<='9') || ('a'<=c2 && c2<='f') || ('A'<=c2 && c2 <= 'F'))){
 (*u)(c2, f);
 return c1;
    }
    c3 = (*g)(f);
    if (!(('0'<=c3 && c3<='9') || ('a'<=c3 && c3<='f') || ('A'<=c3 && c3 <= 'F'))){
 (*u)(c2, f);
 (*u)(c3, f);
 return c1;
    }
    return ((('0'<=c2&&c2<='9') ? (c2-'0') : ('A'<=c2&&c2<='F') ? (c2-'A'+10) : ('a'<=c2&&c2<='f') ? (c2-'a'+10) : 0) << 4) | (('0'<=c3&&c3<='9') ? (c3-'0') : ('A'<=c3&&c3<='F') ? (c3-'A'+10) : ('a'<=c3&&c3<='f') ? (c3-'a'+10) : 0);
}

static nkf_char
cap_getc(FILE *f)
{
    return hex_getc(':', f, i_cgetc, i_cungetc);
}

static nkf_char
cap_ungetc(nkf_char c, FILE *f)
{
    return (*i_cungetc)(c, f);
}

static nkf_char
url_getc(FILE *f)
{
    return hex_getc('%', f, i_ugetc, i_uungetc);
}

static nkf_char
url_ungetc(nkf_char c, FILE *f)
{
    return (*i_uungetc)(c, f);
}



static nkf_char
numchar_getc(FILE *f)
{
    nkf_char (*g)(FILE *) = i_ngetc;
    nkf_char (*u)(nkf_char c ,FILE *f) = i_nungetc;
    int i = 0, j;
    nkf_char buf[12];
    nkf_char c = -1;

    buf[i] = (*g)(f);
    if (buf[i] == '&'){
 buf[++i] = (*g)(f);
 if (buf[i] == '#'){
     c = 0;
     buf[++i] = (*g)(f);
     if (buf[i] == 'x' || buf[i] == 'X'){
  for (j = 0; j < 7; j++){
      buf[++i] = (*g)(f);
      if (!(('0'<=buf[i] && buf[i]<='9') || ('a'<=buf[i] && buf[i]<='f') || ('A'<=buf[i] && buf[i] <= 'F'))){
   if (buf[i] != ';'){
       c = -1;
   }
   break;
      }
      c <<= 4;
      c |= (('0'<=buf[i]&&buf[i]<='9') ? (buf[i]-'0') : ('A'<=buf[i]&&buf[i]<='F') ? (buf[i]-'A'+10) : ('a'<=buf[i]&&buf[i]<='f') ? (buf[i]-'a'+10) : 0);
  }
     }else{
  for (j = 0; j < 8; j++){
      if (j){
   buf[++i] = (*g)(f);
      }
      if (!('0'<=buf[i] && buf[i]<='9')){
   if (buf[i] != ';'){
       c = -1;
   }
   break;
      }
      c *= 10;
      c += (('0'<=buf[i]&&buf[i]<='9') ? (buf[i]-'0') : ('A'<=buf[i]&&buf[i]<='F') ? (buf[i]-'A'+10) : ('a'<=buf[i]&&buf[i]<='f') ? (buf[i]-'a'+10) : 0);
  }
     }
 }
    }
    if (c != -1){
 return ((c) | (0x01000000));
    }
    while (i > 0){
 (*u)(buf[i], f);
 --i;
    }
    return buf[0];
}

static nkf_char
numchar_ungetc(nkf_char c, FILE *f)
{
    return (*i_nungetc)(c, f);
}




static nkf_char
nfc_getc(FILE *f)
{
    nkf_char (*g)(FILE *f) = i_nfc_getc;
    nkf_char (*u)(nkf_char c ,FILE *f) = i_nfc_ungetc;
    nkf_buf_t *buf = nkf_state->nfc_buf;
    const unsigned char *array;
    int lower=0, upper=942 -1;
    nkf_char c = (*g)(f);

    if (c == (-1) || c > 0xFF || (c & 0xc0) == 0x80) return c;

    nkf_buf_push(buf, c);
    do {
 while (lower <= upper) {
     int mid = (lower+upper) / 2;
     int len;
     array = normalization_table[mid].nfd;
     for (len=0; len < 9 && array[len]; len++) {
  if (len >= ((buf)->len)) {
      c = (*g)(f);
      if (c == (-1)) {
   len = 0;
   lower = 1, upper = 0;
   break;
      }
      nkf_buf_push(buf, c);
  }
  if (array[len] != nkf_buf_at(buf, len)) {
      if (array[len] < nkf_buf_at(buf, len)) lower = mid + 1;
      else upper = mid - 1;
      len = 0;
      break;
  }
     }
     if (len > 0) {
  int i;
  array = normalization_table[mid].nfc;
  nkf_buf_clear(buf);
  for (i=0; i < 3 && array[i]; i++)
      nkf_buf_push(buf, array[i]);
  break;
     }
 }
    } while (lower <= upper);

    while (((buf)->len) > 1) (*u)(nkf_buf_pop(buf), f);
    c = nkf_buf_pop(buf);

    return c;
}

static nkf_char
nfc_ungetc(nkf_char c, FILE *f)
{
    return (*i_nfc_ungetc)(c, f);
}



static nkf_char
base64decode(nkf_char c)
{
    int i;
    if (c > '@') {
 if (c < '[') {
     i = c - 'A';
 } else if (c == '_') {
     i = '?' ;
 } else {
     i = c - 'G' ;
 }
    } else if (c > '/') {
 i = c - '0' + '4' ;
    } else if (c == '+' || c == '-') {
 i = '>' ;
    } else {
 i = '?' ;
    }
    return (i);
}

static nkf_char
mime_getc(FILE *f)
{
    nkf_char c1, c2, c3, c4, cc;
    nkf_char t1, t2, t3, t4, mode, exit_mode;
    nkf_char lwsp_count;
    char *lwsp_buf;
    char *lwsp_buf_new;
    nkf_char lwsp_size = 128;

    if (mime_input_state.top != mime_input_state.last) {
 return mime_input_state.buf[(mime_input_state.top++)&((1024)-1)];
    }
    if (mime_decode_mode==1 ||mime_decode_mode==0) {
 mime_decode_mode=0;
 unswitch_mime_getc();
 return (*i_getc)(f);
    }

    if (mimebuf_f == 7)
 exit_mode = mime_decode_mode;
    else
 exit_mode = 0;
    if (mime_decode_mode == 'Q') {
 if ((c1 = (*i_mgetc)(f)) == (-1)) return ((-1));
      restart_mime_q:
 if (c1=='_' && mimebuf_f != 7) return 0x20;
 if (c1<=0x20 || 0x7f<=c1) {
     mime_decode_mode = exit_mode;
     return c1;
 }
 if (c1!='=' && (c1!='?' || mimebuf_f == 7)) {
     return c1;
 }

 mime_decode_mode = exit_mode;
 if ((c2 = (*i_mgetc)(f)) == (-1)) return ((-1));
 if (c1=='?'&&c2=='=' && mimebuf_f != 7) {

     input_mode = exit_mode;
     lwsp_count = 0;
     lwsp_buf = nkf_xmalloc((lwsp_size+5)*sizeof(char));
     while ((c1=(*i_getc)(f))!=(-1)) {
  switch (c1) {
  case 0x0a:
  case 0x0d:
      if (c1==0x0a) {
   if ((c1=(*i_getc)(f))!=(-1) && (c1 == 0x20 || c1 == 0x09)) {
       i_ungetc(0x20,f);
       continue;
   } else {
       i_ungetc(c1,f);
   }
   c1 = 0x0a;
      } else {
   if ((c1=(*i_getc)(f))!=(-1) && c1 == 0x0a) {
       if ((c1=(*i_getc)(f))!=(-1) && (c1 == 0x20 || c1 == 0x09)) {
    i_ungetc(0x20,f);
    continue;
       } else {
    i_ungetc(c1,f);
       }
       i_ungetc(0x0a,f);
   } else {
       i_ungetc(c1,f);
   }
   c1 = 0x0d;
      }
      break;
  case 0x20:
  case 0x09:
      lwsp_buf[lwsp_count] = (unsigned char)c1;
      if (lwsp_count++>lwsp_size){
   lwsp_size <<= 1;
   lwsp_buf_new = nkf_xrealloc(lwsp_buf, (lwsp_size+5)*sizeof(char));
   lwsp_buf = lwsp_buf_new;
      }
      continue;
  }
  break;
     }
     if (lwsp_count > 0 && (c1 != '=' || (lwsp_buf[lwsp_count-1] != 0x20 && lwsp_buf[lwsp_count-1] != 0x09))) {
  i_ungetc(c1,f);
  for(lwsp_count--;lwsp_count>0;lwsp_count--)
      i_ungetc(lwsp_buf[lwsp_count],f);
  c1 = lwsp_buf[0];
     }
     free(lwsp_buf);
     return c1;
 }
 if (c1=='='&&c2<0x20) {
     while((c1 = (*i_mgetc)(f)) <=0x20) {
  if (c1 == (-1)) return ((-1));
     }
     mime_decode_mode = 'Q';
     goto restart_mime_q;
 }
 if (c1=='?') {
     mime_decode_mode = 'Q';
     (*i_mungetc)(c2,f);
     return c1;
 }
 if ((c3 = (*i_mgetc)(f)) == (-1)) return ((-1));
 if (c2<=0x20) return c2;
 mime_decode_mode = 'Q';
 return (((('0'<=c2&&c2<='9') ? (c2-'0') : ('A'<=c2&&c2<='F') ? (c2-'A'+10) : ('a'<=c2&&c2<='f') ? (c2-'a'+10) : 0)<<4) + (('0'<=c3&&c3<='9') ? (c3-'0') : ('A'<=c3&&c3<='F') ? (c3-'A'+10) : ('a'<=c3&&c3<='f') ? (c3-'a'+10) : 0));
    }

    if (mime_decode_mode != 'B') {
 mime_decode_mode = 0;
 return (*i_mgetc)(f);
    }
    mode = mime_decode_mode;
    mime_decode_mode = exit_mode;

    while ((c1 = (*i_mgetc)(f))<=0x20) {
 if (c1==(-1))
     return ((-1));
    }
  mime_c2_retry:
    if ((c2 = (*i_mgetc)(f))<=0x20) {
 if (c2==(-1))
     return ((-1));
 if (mime_f != 8) goto mime_c2_retry;
 if (mimebuf_f!=7) input_mode = ASCII;
 return c2;
    }
    if ((c1 == '?') && (c2 == '=')) {
 input_mode = ASCII;
 lwsp_count = 0;
 lwsp_buf = nkf_xmalloc((lwsp_size+5)*sizeof(char));
 while ((c1=(*i_getc)(f))!=(-1)) {
     switch (c1) {
     case 0x0a:
     case 0x0d:
  if (c1==0x0a) {
      if ((c1=(*i_getc)(f))!=(-1) && (c1 == 0x20 || c1 == 0x09)) {
   i_ungetc(0x20,f);
   continue;
      } else {
   i_ungetc(c1,f);
      }
      c1 = 0x0a;
  } else {
      if ((c1=(*i_getc)(f))!=(-1)) {
   if (c1==0x20) {
       i_ungetc(0x20,f);
       continue;
   } else if ((c1=(*i_getc)(f))!=(-1) && (c1 == 0x20 || c1 == 0x09)) {
       i_ungetc(0x20,f);
       continue;
   } else {
       i_ungetc(c1,f);
   }
   i_ungetc(0x0a,f);
      } else {
   i_ungetc(c1,f);
      }
      c1 = 0x0d;
  }
  break;
     case 0x20:
     case 0x09:
  lwsp_buf[lwsp_count] = (unsigned char)c1;
  if (lwsp_count++>lwsp_size){
      lwsp_size <<= 1;
      lwsp_buf_new = nkf_xrealloc(lwsp_buf, (lwsp_size+5)*sizeof(char));
      lwsp_buf = lwsp_buf_new;
  }
  continue;
     }
     break;
 }
 if (lwsp_count > 0 && (c1 != '=' || (lwsp_buf[lwsp_count-1] != 0x20 && lwsp_buf[lwsp_count-1] != 0x09))) {
     i_ungetc(c1,f);
     for(lwsp_count--;lwsp_count>0;lwsp_count--)
  i_ungetc(lwsp_buf[lwsp_count],f);
     c1 = lwsp_buf[0];
 }
 free(lwsp_buf);
 return c1;
    }
  mime_c3_retry:
    if ((c3 = (*i_mgetc)(f))<=0x20) {
 if (c3==(-1))
     return ((-1));
 if (mime_f != 8) goto mime_c3_retry;
 if (mimebuf_f!=7) input_mode = ASCII;
 return c3;
    }
  mime_c4_retry:
    if ((c4 = (*i_mgetc)(f))<=0x20) {
 if (c4==(-1))
     return ((-1));
 if (mime_f != 8) goto mime_c4_retry;
 if (mimebuf_f!=7) input_mode = ASCII;
 return c4;
    }

    mime_decode_mode = mode;



    t1 = 0x3f & base64decode(c1);
    t2 = 0x3f & base64decode(c2);
    t3 = 0x3f & base64decode(c3);
    t4 = 0x3f & base64decode(c4);
    cc = ((t1 << 2) & 0x0fc) | ((t2 >> 4) & 0x03);
    if (c2 != '=') {
 mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)cc;
 cc = ((t2 << 4) & 0x0f0) | ((t3 >> 2) & 0x0f);
 if (c3 != '=') {
     mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)cc;
     cc = ((t3 << 6) & 0x0c0) | (t4 & 0x3f);
     if (c4 != '=')
  mime_input_state.buf[(mime_input_state.last++)&((1024)-1)] = (unsigned char)cc;
 }
    } else {
 return c1;
    }
    return mime_input_state.buf[(mime_input_state.top++)&((1024)-1)];
}

static const char basis_64[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";


static struct {
    unsigned char buf[74 +1];
    int count;
} mimeout_state;



static void
open_mime(nkf_char mode)
{
    const unsigned char *p;
    int i;
    int j;
    p = mime_pattern[0];
    for(i=0;mime_pattern[i];i++) {
 if (mode == mime_encode[i]) {
     p = mime_pattern[i];
     break;
 }
    }
    mimeout_mode = mime_encode_method[i];
    i = 0;
    if (base64_count>45) {
 if (mimeout_state.count>0 && (mimeout_state.buf[i] == 0x20 || mimeout_state.buf[i] == 0x09)){
     (*o_mputc)(mimeout_state.buf[i]);
     i++;
 }
 put_newline(o_mputc);
 (*o_mputc)(0x20);
 base64_count = 1;
 if (mimeout_state.count>0 && ((mimeout_state.buf[i] == 0x20 || mimeout_state.buf[i] == 0x09) || mimeout_state.buf[i] == 0x0d || mimeout_state.buf[i] == 0x0a)) {
     i++;
 }
    }
    for (;i<mimeout_state.count;i++) {
 if (((mimeout_state.buf[i] == 0x20 || mimeout_state.buf[i] == 0x09) || mimeout_state.buf[i] == 0x0d || mimeout_state.buf[i] == 0x0a)) {
     (*o_mputc)(mimeout_state.buf[i]);
     base64_count ++;
 } else {
     break;
 }
    }
    while(*p) {
 (*o_mputc)(*p++);
 base64_count ++;
    }
    j = mimeout_state.count;
    mimeout_state.count = 0;
    for (;i<j;i++) {
 mime_putc(mimeout_state.buf[i]);
    }
}

static void
mime_prechar(nkf_char c2, nkf_char c1)
{
    if (mimeout_mode > 0){
 if (c2 == (-1)){
     if (base64_count + mimeout_state.count/3*4> 73){
  (*o_base64conv)((-1),0);
  oconv_newline(o_base64conv);
  (*o_base64conv)(0,0x20);
  base64_count = 1;
     }
 } else {
     if ((c2 != 0 || c1 > 0x7f) && base64_count + mimeout_state.count/3*4> 66) {
  (*o_base64conv)((-1),0);
  oconv_newline(o_base64conv);
  (*o_base64conv)(0,0x20);
  base64_count = 1;
  mimeout_mode = -1;
     }
 }
    } else if (c2) {
 if (c2 != (-1) && base64_count + mimeout_state.count/3*4> 60) {
     mimeout_mode = (output_mode==ASCII ||output_mode == ISO_8859_1) ? 'Q' : 'B';
     open_mime(output_mode);
     (*o_base64conv)((-1),0);
     oconv_newline(o_base64conv);
     (*o_base64conv)(0,0x20);
     base64_count = 1;
     mimeout_mode = -1;
 }
    }
}

static void
close_mime(void)
{
    (*o_mputc)('?');
    (*o_mputc)('=');
    base64_count += 2;
    mimeout_mode = 0;
}

static void
eof_mime(void)
{
    switch(mimeout_mode) {
    case 'Q':
    case 'B':
 break;
    case 2:
 (*o_mputc)(basis_64[((nkf_state->mimeout_state & 0x3)<< 4)]);
 (*o_mputc)('=');
 (*o_mputc)('=');
 base64_count += 3;
 break;
    case 1:
 (*o_mputc)(basis_64[((nkf_state->mimeout_state & 0xF) << 2)]);
 (*o_mputc)('=');
 base64_count += 2;
 break;
    }
    if (mimeout_mode > 0) {
 if (mimeout_f!=7) {
     close_mime();
 } else if (mimeout_mode != 'Q')
     mimeout_mode = 'B';
    }
}

static void
mimeout_addchar(nkf_char c)
{
    switch(mimeout_mode) {
    case 'Q':
 if (c==0x0d||c==0x0a) {
     (*o_mputc)(c);
     base64_count = 0;
 } else if(!(('0'<=c && c<='9') || (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))) {
     (*o_mputc)('=');
     (*o_mputc)(("0123456789ABCDEF"[((c>>4)&0xf)&15]));
     (*o_mputc)(("0123456789ABCDEF"[(c&0xf)&15]));
     base64_count += 3;
 } else {
     (*o_mputc)(c);
     base64_count++;
 }
 break;
    case 'B':
 nkf_state->mimeout_state=c;
 (*o_mputc)(basis_64[c>>2]);
 mimeout_mode=2;
 base64_count ++;
 break;
    case 2:
 (*o_mputc)(basis_64[((nkf_state->mimeout_state & 0x3)<< 4) | ((c & 0xF0) >> 4)]);
 nkf_state->mimeout_state=c;
 mimeout_mode=1;
 base64_count ++;
 break;
    case 1:
 (*o_mputc)(basis_64[((nkf_state->mimeout_state & 0xF) << 2) | ((c & 0xC0) >>6)]);
 (*o_mputc)(basis_64[c & 0x3F]);
 mimeout_mode='B';
 base64_count += 2;
 break;
    default:
 (*o_mputc)(c);
 base64_count++;
 break;
    }
}

static void
mime_putc(nkf_char c)
{
    int i, j;
    nkf_char lastchar;

    if (mimeout_f == 7){
 if (mimeout_mode == 'Q'){
     if (base64_count > 71){
  if (c!=0x0d && c!=0x0a) {
      (*o_mputc)('=');
      put_newline(o_mputc);
  }
  base64_count = 0;
     }
 }else{
     if (base64_count > 71){
  eof_mime();
  put_newline(o_mputc);
  base64_count = 0;
     }
     if (c == (-1)) {
  eof_mime();
     }
 }
 if (c != (-1)) {
     mimeout_addchar(c);
 }
 return;
    }



    if (c == (-1)) {
 if (mimeout_mode == -1 && mimeout_state.count > 1) open_mime(output_mode);
 j = mimeout_state.count;
 mimeout_state.count = 0;
 i = 0;
 if (mimeout_mode > 0) {
     if (!(mimeout_state.buf[j-1] == 0x20 || mimeout_state.buf[j-1] == 0x09)) {
  for (;i<j;i++) {
      if (((mimeout_state.buf[i] == 0x20 || mimeout_state.buf[i] == 0x09) || mimeout_state.buf[i] == 0x0d || mimeout_state.buf[i] == 0x0a) && base64_count < 71){
   break;
      }
      mimeout_addchar(mimeout_state.buf[i]);
  }
  eof_mime();
  for (;i<j;i++) {
      mimeout_addchar(mimeout_state.buf[i]);
  }
     } else {
  for (;i<j;i++) {
      mimeout_addchar(mimeout_state.buf[i]);
  }
  eof_mime();
     }
 } else {
     for (;i<j;i++) {
  mimeout_addchar(mimeout_state.buf[i]);
     }
 }
 return;
    }

    if (mimeout_state.count > 0){
 lastchar = mimeout_state.buf[mimeout_state.count - 1];
    }else{
 lastchar = -1;
    }

    if (mimeout_mode=='Q') {
 if (c <= 0x7f && (output_mode==ASCII ||output_mode == ISO_8859_1)) {
     if (c == 0x0d || c == 0x0a) {
  close_mime();
  (*o_mputc)(c);
  base64_count = 0;
  return;
     } else if (c <= 0x20) {
  close_mime();
  if (base64_count > 70) {
      put_newline(o_mputc);
      base64_count = 0;
  }
  if (!(c == 0x20 || c == 0x09)) {
      (*o_mputc)(0x20);
      base64_count++;
  }
     } else {
  if (base64_count > 70) {
      close_mime();
      put_newline(o_mputc);
      (*o_mputc)(0x20);
      base64_count = 1;
      open_mime(output_mode);
  }
  if (!((c == 0x0d) || (c == 0x0a) || ((c > 0x20) && (c < 0x7f) && (c != '?') && (c != '=') && (c != '_') && (c != '(') && (c != ')') && (c != '.') && (c != 0x22)))) {
      mimeout_addchar(c);
      return;
  }
     }
     if (c != 0x1B) {
  (*o_mputc)(c);
  base64_count++;
  return;
     }
 }
    }

    if (mimeout_mode <= 0) {
 if (c <= 0x7f && (output_mode==ASCII || output_mode == ISO_8859_1 ||
      output_mode == UTF_8)) {
     if (((c == 0x20 || c == 0x09) || c == 0x0d || c == 0x0a)) {
  int flag = 0;
  if (mimeout_mode == -1) {
      flag = 1;
  }
  if (c==0x0d || c==0x0a) {
      if (flag) {
   open_mime(output_mode);
   output_mode = 0;
      } else {
   base64_count = 0;
      }
  }
  for (i=0;i<mimeout_state.count;i++) {
      (*o_mputc)(mimeout_state.buf[i]);
      if (mimeout_state.buf[i] == 0x0d || mimeout_state.buf[i] == 0x0a){
   base64_count = 0;
      }else{
   base64_count++;
      }
  }
  if (flag) {
      eof_mime();
      base64_count = 0;
      mimeout_mode = 0;
  }
  mimeout_state.buf[0] = (char)c;
  mimeout_state.count = 1;
     }else{
  if (base64_count > 1
      && base64_count + mimeout_state.count > 76
      && mimeout_state.buf[0] != 0x0d && mimeout_state.buf[0] != 0x0a){
      static const char *str = "boundary=\"";
      static int len = 10;
      i = 0;

      for (; i < mimeout_state.count - len; ++i) {
   if (!strncmp((char *)(mimeout_state.buf+i), str, len)) {
       i += len - 2;
       break;
   }
      }

      if (i == 0 || i == mimeout_state.count - len) {
   put_newline(o_mputc);
   base64_count = 0;
   if (!((mimeout_state.buf[0] == 0x20 || mimeout_state.buf[0] == 0x09) || mimeout_state.buf[0] == 0x0d || mimeout_state.buf[0] == 0x0a)){
       (*o_mputc)(0x20);
       base64_count++;
   }
      }
      else {
   int j;
   for (j = 0; j <= i; ++j) {
       (*o_mputc)(mimeout_state.buf[j]);
   }
   put_newline(o_mputc);
   base64_count = 1;
   for (; j <= mimeout_state.count; ++j) {
       mimeout_state.buf[j - i] = mimeout_state.buf[j];
   }
   mimeout_state.count -= i;
      }
  }
  mimeout_state.buf[mimeout_state.count++] = (char)c;
  if (mimeout_state.count>74) {
      open_mime(output_mode);
  }
     }
     return;
 }else{
     if (lastchar==0x0d || lastchar == 0x0a){
  for (i=0;i<mimeout_state.count;i++) {
      (*o_mputc)(mimeout_state.buf[i]);
  }
  base64_count = 0;
  mimeout_state.count = 0;
     }
     if (lastchar==0x20) {
  for (i=0;i<mimeout_state.count-1;i++) {
      (*o_mputc)(mimeout_state.buf[i]);
      base64_count++;
  }
  mimeout_state.buf[0] = 0x20;
  mimeout_state.count = 1;
     }
     open_mime(output_mode);
 }
    }else{

 if (c <= 0x7f && (output_mode==ASCII || output_mode == ISO_8859_1 ||
      output_mode == UTF_8)) {
     if (lastchar == 0x0d || lastchar == 0x0a){
  if ((c == 0x20 || c == 0x09)) {
      for (i=0;i<mimeout_state.count;i++) {
   mimeout_addchar(mimeout_state.buf[i]);
      }
      mimeout_state.count = 0;
  } else {
      eof_mime();
      for (i=0;i<mimeout_state.count;i++) {
   (*o_mputc)(mimeout_state.buf[i]);
      }
      base64_count = 0;
      mimeout_state.count = 0;
  }
  mimeout_state.buf[mimeout_state.count++] = (char)c;
  return;
     }
     if (((c == 0x20 || c == 0x09) || c == 0x0d || c == 0x0a)) {
  for (i=0;i<mimeout_state.count;i++) {
      if (0x20<mimeout_state.buf[i] && mimeout_state.buf[i]<0x7f) {
   eof_mime();
   for (i=0;i<mimeout_state.count;i++) {
       (*o_mputc)(mimeout_state.buf[i]);
       base64_count++;
   }
   mimeout_state.count = 0;
      }
  }
  mimeout_state.buf[mimeout_state.count++] = (char)c;
  if (mimeout_state.count>74) {
      eof_mime();
      for (j=0;j<mimeout_state.count;j++) {
   (*o_mputc)(mimeout_state.buf[j]);
   base64_count++;
      }
      mimeout_state.count = 0;
  }
  return;
     }
     if (mimeout_state.count>0 && 0x20<c && c!='=') {
  mimeout_state.buf[mimeout_state.count++] = (char)c;
  if (mimeout_state.count>74) {
      j = mimeout_state.count;
      mimeout_state.count = 0;
      for (i=0;i<j;i++) {
   mimeout_addchar(mimeout_state.buf[i]);
      }
  }
  return;
     }
 }
    }
    if (mimeout_state.count>0) {
 j = mimeout_state.count;
 mimeout_state.count = 0;
 for (i=0;i<j;i++) {
     if (mimeout_state.buf[i]==0x0d || mimeout_state.buf[i]==0x0a)
  break;
     mimeout_addchar(mimeout_state.buf[i]);
 }
 if (i<j) {
     eof_mime();
     base64_count=0;
     for (;i<j;i++) {
  (*o_mputc)(mimeout_state.buf[i]);
     }
     open_mime(output_mode);
 }
    }
    mimeout_addchar(c);
}

static void
base64_conv(nkf_char c2, nkf_char c1)
{
    mime_prechar(c2, c1);
    (*o_base64conv)(c2,c1);
}
static void
reinit(void)
{
    {
 struct input_code *p = input_code_list;
 while (p->name){
     status_reinit(p++);
 }
    }
    unbuf_f = 0;
    estab_f = 0;
    nop_f = 0;
    binmode_f = 1;
    rot_f = 0;
    hira_f = 0;
    alpha_f = 0;
    mime_f = 8;
    mime_decode_f = 0;
    mimebuf_f = 0;
    broken_f = 0;
    iso8859_f = 0;
    mimeout_f = 0;
    x0201_f = (-1);
    iso2022jp_f = 0;

    ms_ucs_map_f = 0;


    no_cp932ext_f = 0;
    no_best_fit_chars_f = 0;
    encode_fallback = ((void*)0);
    unicode_subchar = '?';
    input_endian = ENDIAN_BIG;


    output_bom_f = 0;
    output_endian = ENDIAN_BIG;


    nfc_f = 0;


    cap_f = 0;
    url_f = 0;
    numchar_f = 0;


    noout_f = 0;
    debug_f = 0;

    guess_f = 0;




    cp51932_f = 1;
    cp932inv_f = 1;


    x0212_f = 0;
    x0213_f = 0;

    {
 int i;
 for (i = 0; i < 256; i++){
     prefix_table[i] = 0;
 }
    }
    hold_count = 0;
    mimeout_state.count = 0;
    mimeout_mode = 0;
    base64_count = 0;
    f_line = 0;
    f_prev = 0;
    fold_preserve_f = 0;
    fold_f = 0;
    fold_len = 0;
    kanji_intro = 'B';
    ascii_intro = 'B';
    fold_margin = 10;
    o_zconv = no_connection;
    o_fconv = no_connection;
    o_eol_conv = no_connection;
    o_rot_conv = no_connection;
    o_hira_conv = no_connection;
    o_base64conv = no_connection;
    o_iso2022jp_check_conv = no_connection;
    o_putc = std_putc;
    i_getc = std_getc;
    i_ungetc = std_ungetc;
    i_bgetc = std_getc;
    i_bungetc = std_ungetc;
    o_mputc = std_putc;
    i_mgetc = std_getc;
    i_mungetc = std_ungetc;
    i_mgetc_buf = std_getc;
    i_mungetc_buf = std_ungetc;
    output_mode = ASCII;
    input_mode = ASCII;
    mime_decode_mode = 0;
    file_out_f = 0;
    eolmode_f = 0;
    input_eol = 0;
    prev_cr = 0;
    option_mode = 0;
    z_prev2=0,z_prev1=0;

    iconv_for_check = 0;

    input_codename = ((void*)0);
    input_encoding = ((void*)0);
    output_encoding = ((void*)0);
    nkf_state_init();



}

static int
module_connection(void)
{
    if (input_encoding) set_input_encoding(input_encoding);
    if (!output_encoding) {
 output_encoding = nkf_default_encoding();
    }
    if (!output_encoding) {
 if (noout_f || guess_f) output_encoding = nkf_enc_from_index(ISO_2022_JP);
 else return -1;
    }
    set_output_encoding(output_encoding);
    oconv = (output_encoding)->base_encoding->oconv;
    o_putc = std_putc;
    if (( (output_encoding)->base_encoding == &NkfEncodingUTF_8 || (output_encoding)->base_encoding == &NkfEncodingUTF_16 || (output_encoding)->base_encoding == &NkfEncodingUTF_32))
 output_mode = UTF_8;

    if (x0201_f == (-1)) {
 x0201_f = 1;
    }





    if (noout_f || guess_f){
 o_putc = no_putc;
    }

    if (mimeout_f) {
 o_mputc = o_putc;
 o_putc = mime_putc;
 if (mimeout_f == 1) {
     o_base64conv = oconv; oconv = base64_conv;
 }

    }

    if (eolmode_f || guess_f) {
 o_eol_conv = oconv; oconv = eol_conv;
    }
    if (rot_f) {
 o_rot_conv = oconv; oconv = rot_conv;
    }
    if (iso2022jp_f) {
 o_iso2022jp_check_conv = oconv; oconv = iso2022jp_check_conv;
    }
    if (hira_f) {
 o_hira_conv = oconv; oconv = hira_conv;
    }
    if (fold_f) {
 o_fconv = oconv; oconv = fold_conv;
 f_line = 0;
    }
    if (alpha_f || x0201_f) {
 o_zconv = oconv; oconv = z_conv;
    }

    i_getc = std_getc;
    i_ungetc = std_ungetc;


    if (cap_f){
 i_cgetc = i_getc; i_getc = cap_getc;
 i_cungetc = i_ungetc; i_ungetc= cap_ungetc;
    }
    if (url_f){
 i_ugetc = i_getc; i_getc = url_getc;
 i_uungetc = i_ungetc; i_ungetc= url_ungetc;
    }


    if (numchar_f){
 i_ngetc = i_getc; i_getc = numchar_getc;
 i_nungetc = i_ungetc; i_ungetc= numchar_ungetc;
    }


    if (nfc_f){
 i_nfc_getc = i_getc; i_getc = nfc_getc;
 i_nfc_ungetc = i_ungetc; i_ungetc= nfc_ungetc;
    }

    if (mime_f && mimebuf_f==7) {
 i_mgetc = i_getc; i_getc = mime_getc;
 i_mungetc = i_ungetc; i_ungetc = mime_ungetc;
    }
    if (broken_f & 1) {
 i_bgetc = i_getc; i_getc = broken_getc;
 i_bungetc = i_ungetc; i_ungetc = broken_ungetc;
    }
    if (input_encoding) {
 set_iconv(-1, (input_encoding)->base_encoding->iconv);
    } else {
 set_iconv(0, e_iconv);
    }

    {
 struct input_code *p = input_code_list;
 while (p->name){
     status_reinit(p++);
 }
    }
    return 0;
}






static nkf_char
noconvert(FILE *f)
{
    nkf_char c;

    if (nop_f == 2)
 module_connection();
    while ((c = (*i_getc)(f)) != (-1))
 (*o_putc)(c);
    (*o_putc)((-1));
    return 1;
}
static int
kanji_convert(FILE *f)
{
    nkf_char c1=0, c2=0, c3=0, c4=0;
    int shift_mode = 0;
    int g2 = 0;
    int is_8bit = 0;

    if (input_encoding && !( (input_encoding)->base_encoding == &NkfEncodingASCII || (input_encoding)->base_encoding == &NkfEncodingISO_2022_JP)) {
 is_8bit = 1;
    }

    input_mode = ASCII;
    output_mode = ASCII;

    if (module_connection() < 0) {

 fprintf(stderr, "no output encoding given\n");

 return -1;
    }
    check_bom(f);


    if(iconv == w_iconv32){
 while ((c1 = (*i_getc)(f)) != (-1) &&
        (c2 = (*i_getc)(f)) != (-1) &&
        (c3 = (*i_getc)(f)) != (-1) &&
        (c4 = (*i_getc)(f)) != (-1)) {
     nkf_char c5, c6, c7, c8;
     if (nkf_iconv_utf_32(c1, c2, c3, c4) == (size_t)-14) {
  if ((c5 = (*i_getc)(f)) != (-1) &&
      (c6 = (*i_getc)(f)) != (-1) &&
      (c7 = (*i_getc)(f)) != (-1) &&
      (c8 = (*i_getc)(f)) != (-1)) {
      if (nkf_iconv_utf_32_combine(c1, c2, c3, c4, c5, c6, c7, c8)) {
   (*i_ungetc)(c8, f);
   (*i_ungetc)(c7, f);
   (*i_ungetc)(c6, f);
   (*i_ungetc)(c5, f);
   nkf_iconv_utf_32_nocombine(c1, c2, c3, c4);
      }
  } else {
      nkf_iconv_utf_32_nocombine(c1, c2, c3, c4);
  }
     }
 }
 goto finished;
    }
    else if (iconv == w_iconv16) {
 while ((c1 = (*i_getc)(f)) != (-1) &&
        (c2 = (*i_getc)(f)) != (-1)) {
     size_t ret = nkf_iconv_utf_16(c1, c2, 0, 0);
     if (ret == (size_t)-2 &&
  (c3 = (*i_getc)(f)) != (-1) &&
  (c4 = (*i_getc)(f)) != (-1)) {
  nkf_iconv_utf_16(c1, c2, c3, c4);
     } else if (ret == (size_t)-14) {
  if ((c3 = (*i_getc)(f)) != (-1) &&
      (c4 = (*i_getc)(f)) != (-1)) {
      if (nkf_iconv_utf_16_combine(c1, c2, c3, c4)) {
   (*i_ungetc)(c4, f);
   (*i_ungetc)(c3, f);
   nkf_iconv_utf_16_nocombine(c1, c2);
      }
  } else {
      nkf_iconv_utf_16_nocombine(c1, c2);
  }
     }
 }
 goto finished;
    }


    while ((c1 = (*i_getc)(f)) != (-1)) {

 if (!input_encoding)

     code_status(c1);
 if (c2) {

     if (c2 > ((input_encoding && ( (input_encoding)->id == CP50220 || (input_encoding)->id == CP50221 || (input_encoding)->id == CP50222)) ? 0x92 : 0x7f)) {

  if (!estab_f&&!mime_decode_mode) {


      if (h_conv(f, c2, c1)==(-1)) {
   break;
      }
      else {
   c2=0;continue;
      }
  }
  else {

      if (c1 < 0x40) {

   c2=0;continue;
      } else {
   (void)0;
      }
  }
     }
     else {

  (void)0;
     }
 }
 else if (((c1 & (0xFF000000)) == (0x01000000))) {
     (*oconv)(0, c1);
     continue;
 }
 else {

     if (input_mode == JIS_X_0208 && 0x7f <= c1 && c1 < 0x92) {

  c2=c1;continue;
     }else if (input_codename && input_codename[0] == 'I' &&
      0xA1 <= c1 && c1 <= 0xDF) {

  c2 = JIS_X_0201_1976_K;
  c1 &= 0x7f;
  (void)0;
     } else if (c1 > 0x7f) {

  if (!estab_f && !iso8859_f) {

      c2=c1;continue;
  } else {
      if (iso8859_f) {
   c2 = ISO_8859_1;
   c1 &= 0x7f;
   (void)0;
      }
      else if ((iconv == s_iconv && 0xA0 <= c1 && c1 <= 0xDF) ||
        (ms_ucs_map_f == 3 && (c1 == 0xFD || c1 == 0xFE))) {

   c2 = JIS_X_0201_1976_K;
   c1 &= 0x7f;
   (void)0;
      }
      else {

   c2=c1;continue;
      }
  }
     } else if (0x20 < c1 && c1 < 0x7f) {

  if (shift_mode) {

      if (iso8859_f) {
   c2 = ISO_8859_1;
   (void)0;
      } else if ((0x20 <= c1 && c1 <= 0x5F)){

   c2 = JIS_X_0201_1976_K;
   (void)0;
      } else {

   c2=0;continue;
      }
  } else if (input_mode == JIS_X_0208 || input_mode == JIS_X_0212 ||
      input_mode == JIS_X_0213_1 || input_mode == JIS_X_0213_2) {

      c2=c1;continue;
  } else if (c1 == '=' && mime_f && !mime_decode_mode) {

      if ((c1 = (*i_getc)(f)) == (-1)) {
   (*oconv)(0, '=');
   break;
      } else if (c1 == '?') {

   if(mime_f == 8) {

       if (mime_begin_strict(f) == (-1))
    break;
       c2=0;continue;
   } else if (mime_begin(f) == (-1))
       break;
   c2=0;continue;
      } else {
   (*oconv)(0, '=');
   (*i_ungetc)(c1,f);
   c2=0;continue;
      }
  } else {

      (void)0;
  }
     } else if (c1 == 0x0f && (!is_8bit || mime_decode_mode)) {
  shift_mode = 0;
  c2=0;continue;
     } else if (c1 == 0x0e && (!is_8bit || mime_decode_mode)) {
  shift_mode = 1;
  c2=0;continue;
     } else if (c1 == 0x1b && (!is_8bit || mime_decode_mode)) {
  if ((c1 = (*i_getc)(f)) == (-1)) {
      (*oconv)(0, 0x1b);
      break;
  }
  else if (c1 == '&') {

      if ((c1 = (*i_getc)(f)) == (-1)) {
   break;
      } else {
   c2=0;continue;
      }
  }
  else if (c1 == '$') {

      if ((c1 = (*i_getc)(f)) == (-1)) {



   break;
      } else if (c1 == '@' || c1 == 'B') {

   do { input_mode = JIS_X_0208; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
   c2=0;continue;
      } else if (c1 == '(') {

   if ((c1 = (*i_getc)(f)) == (-1)) {





       break;
   } else if (c1 == '@'|| c1 == 'B') {

       do { input_mode = JIS_X_0208; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
       c2=0;continue;

   } else if (c1 == 'D'){
       do { input_mode = JIS_X_0212; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
       c2=0;continue;

   } else if (c1 == 'O' || c1 == 'Q'){
       do { input_mode = JIS_X_0213_1; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
       c2=0;continue;
   } else if (c1 == 'P'){
       do { input_mode = JIS_X_0213_2; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
       c2=0;continue;
   } else {

       (*oconv)(0, 0x1b);
       (*oconv)(0, '$');
       (*oconv)(0, '(');
       (*oconv)(0, c1);
       c2=0;continue;
   }
      } else if (broken_f&0x2) {

   input_mode = JIS_X_0208;
   shift_mode = 0;
   c2=0;continue;
      } else {
   (*oconv)(0, 0x1b);
   (*oconv)(0, '$');
   (*oconv)(0, c1);
   c2=0;continue;
      }
  } else if (c1 == '(') {

      if ((c1 = (*i_getc)(f)) == (-1)) {



   break;
      }
      else if (c1 == 'I') {

   do { input_mode = JIS_X_0201_1976_K; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
   shift_mode = 1;
   c2=0;continue;
      }
      else if (c1 == 'B' || c1 == 'J' || c1 == 'H') {

   do { input_mode = ASCII; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
   c2=0;continue;
      }
      else if (broken_f&0x2) {
   do { input_mode = ASCII; shift_mode = 0; set_input_codename("ISO-2022-JP"); debug("ISO-2022-JP"); } while (0);
   c2=0;continue;
      }
      else {
   (*oconv)(0, 0x1b);
   (*oconv)(0, '(');
   (void)0;
      }
  }
  else if (c1 == '.') {

      if ((c1 = (*i_getc)(f)) == (-1)) {
   break;
      }
      else if (c1 == 'A') {

   g2 = ISO_8859_1;
   c2=0;continue;
      }
      else {
   (*oconv)(0, 0x1b);
   (*oconv)(0, '.');
   (void)0;
      }
  }
  else if (c1 == 'N') {

      c1 = (*i_getc)(f);
      if (g2 == ISO_8859_1) {
   c2 = ISO_8859_1;
   (void)0;
      }else{
   (*i_ungetc)(c1, f);

   (*oconv)(0, 0x1b);
   (void)0;
      }
  }
  else {
      i_ungetc(c1,f);

      (*oconv)(0, 0x1b);
      c2=0;continue;
  }
     } else if (c1 == 0x1b && iconv == s_iconv) {

  if ((c1 = (*i_getc)(f)) == (-1)) {
      (*oconv)(0, 0x1b);
      break;
  } else if (c1 == '$') {

      if ((c1 = (*i_getc)(f)) == (-1)) {
   break;
      } else if (('E' <= c1 && c1 <= 'G') ||
          ('O' <= c1 && c1 <= 'Q')) {







   static const nkf_char jphone_emoji_first_table[7] =
   {0xE1E0, 0xDFE0, 0xE2E0, 0xE3E0, 0xE4E0, 0xDFE0, 0xE0E0};
   c3 = ((jphone_emoji_first_table[c1 % 7]) | (0x01000000));
   if ((c1 = (*i_getc)(f)) == (-1)) break;
   while (0x20 <= c1 && c1 <= 'z') {
       (*oconv)(0, c1 + c3);
       if ((c1 = (*i_getc)(f)) == (-1)) break;
   }
   c2=0;continue;
      }
      else {
   (*oconv)(0, 0x1b);
   (*oconv)(0, '$');
   (void)0;
      }
  }
  else {
      i_ungetc(c1,f);

      (*oconv)(0, 0x1b);
      c2=0;continue;
  }
     } else if (c1 == 0x0a || c1 == 0x0d) {
  if (broken_f&4) {
      input_mode = ASCII; set_iconv(0, 0);
      (void)0;
  } else if (mime_decode_f && !mime_decode_mode){
      if (c1 == 0x0a) {
   if ((c1=(*i_getc)(f))!=(-1) && c1 == 0x20) {
       i_ungetc(0x20,f);
       continue;
   } else {
       i_ungetc(c1,f);
   }
   c1 = 0x0a;
   (void)0;
      } else {
   if ((c1=(*i_getc)(f))!=(-1)) {
       if (c1==0x20) {
    i_ungetc(0x20,f);
    continue;
       } else if (c1 == 0x0a && (c1=(*i_getc)(f))!=(-1) && c1 == 0x20) {
    i_ungetc(0x20,f);
    continue;
       } else {
    i_ungetc(c1,f);
       }
       i_ungetc(0x0a,f);
   } else {
       i_ungetc(c1,f);
   }
   c1 = 0x0d;
   (void)0;
      }
  }
     } else
  (void)0;
 }

 switch(input_mode){
 case ASCII:
     switch ((*iconv)(c2, c1, 0)) {
     case -2:

  if ((c3 = (*i_getc)(f)) != (-1)) {
      code_status(c3);
      c3 <<= 8;
      if ((c4 = (*i_getc)(f)) != (-1)) {
   code_status(c4);
   (*iconv)(c2, c1, c3|c4);
      }
  }
  break;
     case -3:

  if ((c3 = (*i_getc)(f)) != (-1)) {
      if ((c4 = (*i_getc)(f)) != (-1)) {
   if (w_iconv_combine(c2, c1, 0, c3, c4, 0)) {
       (*i_ungetc)(c4, f);
       (*i_ungetc)(c3, f);
       w_iconv_nocombine(c2, c1, 0);
   }
      } else {
   (*i_ungetc)(c3, f);
   w_iconv_nocombine(c2, c1, 0);
      }
  } else {
      w_iconv_nocombine(c2, c1, 0);
  }
  break;
     case -1:

  if ((c3 = (*i_getc)(f)) != (-1)) {
      code_status(c3);
      if ((*iconv)(c2, c1, c3) == -3) {

   nkf_char c5, c6;
   if ((c4 = (*i_getc)(f)) != (-1)) {
       if ((c5 = (*i_getc)(f)) != (-1)) {
    if ((c6 = (*i_getc)(f)) != (-1)) {
        if (w_iconv_combine(c2, c1, c3, c4, c5, c6)) {
     (*i_ungetc)(c6, f);
     (*i_ungetc)(c5, f);
     (*i_ungetc)(c4, f);
     w_iconv_nocombine(c2, c1, c3);
        }
    } else {
        (*i_ungetc)(c5, f);
        (*i_ungetc)(c4, f);
        w_iconv_nocombine(c2, c1, c3);
    }
       } else {
    (*i_ungetc)(c4, f);
    w_iconv_nocombine(c2, c1, c3);
       }
   } else {
       w_iconv_nocombine(c2, c1, c3);
   }
      }
  }
  break;
     }
     break;
 case JIS_X_0208:
 case JIS_X_0213_1:
     if (ms_ucs_map_f &&
  0x7F <= c2 && c2 <= 0x92 &&
  0x21 <= c1 && c1 <= 0x7E) {

  c1 = (((c2 - 0x7F) * 94 + c1 - 0x21 + 0xE000) | (0x01000000));
  c2 = 0;
     }
     (*oconv)(c2, c1);
     break;

 case JIS_X_0212:
     (*oconv)((0x8F00) | c2, c1);
     break;

 case JIS_X_0213_2:
     (*oconv)((0x8F00) | c2, c1);
     break;
 default:
     (*oconv)(input_mode, c1);
 }

 c2 = 0;
 c3 = 0;
 continue;

    }

finished:

    (*iconv)((-1), 0, 0);
    if (!input_codename)
    {
 if (is_8bit) {
     struct input_code *p = input_code_list;
     struct input_code *result = p;
     while (p->name){
  if (p->score < result->score) result = p;
  ++p;
     }
     set_input_codename(result->name);

     debug(result->name);

 }
    }
    return 0;
}
static int
options(unsigned char *cp)
{
    nkf_char i, j;
    unsigned char *p;
    unsigned char *cp_back = ((void*)0);
    nkf_encoding *enc;

    if (option_mode==1)
 return 0;
    while(*cp && *cp++!='-');
    while (*cp || cp_back) {
 if(!*cp){
     cp = cp_back;
     cp_back = ((void*)0);
     continue;
 }
 p = 0;
 switch (*cp++) {
 case '-':
     if (!*cp || *cp == 0x20) {
  option_mode = 1;
  return 0;
     }
     for (i=0;i<(int)(sizeof(long_option)/sizeof(long_option[0]));i++) {
  p = (unsigned char *)long_option[i].name;
  for (j=0;*p && *p != '=' && *p == cp[j];p++, j++);
  if (*p == cp[j] || cp[j] == 0x20){
      p = &cp[j] + 1;
      break;
  }
  p = 0;
     }
     if (p == 0) {

  fprintf(stderr, "unknown long option: --%s\n", cp);

  return -1;
     }
     while(*cp && *cp != 0x20 && cp++);
     if (long_option[i].alias[0]){
  cp_back = cp;
  cp = (unsigned char *)long_option[i].alias;
     }else{

  if (strcmp(long_option[i].name, "help") == 0){
      usage();
      exit(0);
  }

  if (strcmp(long_option[i].name, "ic=") == 0){
      enc = nkf_enc_find((char *)p);
      if (!enc) continue;
      input_encoding = enc;
      continue;
  }
  if (strcmp(long_option[i].name, "oc=") == 0){
      enc = nkf_enc_find((char *)p);

      if (!enc) continue;
      output_encoding = enc;
      continue;
  }
  if (strcmp(long_option[i].name, "guess=") == 0){
      if (p[0] == '0' || p[0] == '1') {
   guess_f = 1;
      } else {
   guess_f = 2;
      }
      continue;
  }

  if (strcmp(long_option[i].name, "overwrite") == 0){
      file_out_f = 1;
      overwrite_f = 1;
      preserve_time_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "overwrite=") == 0){
      file_out_f = 1;
      overwrite_f = 1;
      preserve_time_f = 1;
      backup_f = 1;
      backup_suffix = (char *)p;
      continue;
  }
  if (strcmp(long_option[i].name, "in-place") == 0){
      file_out_f = 1;
      overwrite_f = 1;
      preserve_time_f = 0;
      continue;
  }
  if (strcmp(long_option[i].name, "in-place=") == 0){
      file_out_f = 1;
      overwrite_f = 1;
      preserve_time_f = 0;
      backup_f = 1;
      backup_suffix = (char *)p;
      continue;
  }


  if (strcmp(long_option[i].name, "cap-input") == 0){
      cap_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "url-input") == 0){
      url_f = 1;
      continue;
  }


  if (strcmp(long_option[i].name, "numchar-input") == 0){
      numchar_f = 1;
      continue;
  }


  if (strcmp(long_option[i].name, "no-output") == 0){
      noout_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "debug") == 0){
      debug_f = 1;
      continue;
  }

  if (strcmp(long_option[i].name, "cp932") == 0){

      cp51932_f = 1;
      cp932inv_f = -1;


      ms_ucs_map_f = 2;

      continue;
  }
  if (strcmp(long_option[i].name, "no-cp932") == 0){

      cp51932_f = 0;
      cp932inv_f = 0;


      ms_ucs_map_f = 0;

      continue;
  }

  if (strcmp(long_option[i].name, "cp932inv") == 0){
      cp932inv_f = -1;
      continue;
  }



  if (strcmp(long_option[i].name, "x0212") == 0){
      x0212_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "no-cp932ext") == 0){
      no_cp932ext_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "no-best-fit-chars") == 0){
      no_best_fit_chars_f = 1;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-skip") == 0){
      encode_fallback = ((void*)0);
      continue;
  }
  if (strcmp(long_option[i].name, "fb-html") == 0){
      encode_fallback = encode_fallback_html;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-xml") == 0){
      encode_fallback = encode_fallback_xml;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-java") == 0){
      encode_fallback = encode_fallback_java;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-perl") == 0){
      encode_fallback = encode_fallback_perl;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-subchar") == 0){
      encode_fallback = encode_fallback_subchar;
      continue;
  }
  if (strcmp(long_option[i].name, "fb-subchar=") == 0){
      encode_fallback = encode_fallback_subchar;
      unicode_subchar = 0;
      if (p[0] != '0'){

   for (i = 0; i < 7 && ('0'<=p[i] && p[i]<='9'); i++){
       unicode_subchar *= 10;
       unicode_subchar += (('0'<=p[i]&&p[i]<='9') ? (p[i]-'0') : ('A'<=p[i]&&p[i]<='F') ? (p[i]-'A'+10) : ('a'<=p[i]&&p[i]<='f') ? (p[i]-'a'+10) : 0);
   }
      }else if(p[1] == 'x' || p[1] == 'X'){

   for (i = 2; i < 8 && (('0'<=p[i] && p[i]<='9') || ('a'<=p[i] && p[i]<='f') || ('A'<=p[i] && p[i] <= 'F')); i++){
       unicode_subchar <<= 4;
       unicode_subchar |= (('0'<=p[i]&&p[i]<='9') ? (p[i]-'0') : ('A'<=p[i]&&p[i]<='F') ? (p[i]-'A'+10) : ('a'<=p[i]&&p[i]<='f') ? (p[i]-'a'+10) : 0);
   }
      }else{

   for (i = 1; i < 8 && ('0'<=p[i] && p[i]<='7'); i++){
       unicode_subchar *= 8;
       unicode_subchar += (('0'<=p[i]&&p[i]<='9') ? (p[i]-'0') : ('A'<=p[i]&&p[i]<='F') ? (p[i]-'A'+10) : ('a'<=p[i]&&p[i]<='f') ? (p[i]-'a'+10) : 0);
   }
      }
      w16e_conv(unicode_subchar, &i, &j);
      unicode_subchar = i<<8 | j;
      continue;
  }


  if (strcmp(long_option[i].name, "ms-ucs-map") == 0){
      ms_ucs_map_f = 1;
      continue;
  }


  if (strcmp(long_option[i].name, "utf8mac-input") == 0){
      nfc_f = 1;
      continue;
  }

  if (strcmp(long_option[i].name, "prefix=") == 0){
      if (('!'<=p[0] && p[0]<='~')){
   for (i = 1; ('!'<=p[i] && p[i]<='~'); i++){
       prefix_table[p[i]] = p[0];
   }
      }
      continue;
  }

  fprintf(stderr, "unsupported long option: --%s\n", long_option[i].name);

  return -1;
     }
     continue;
 case 'b':
     unbuf_f = 0;
     continue;
 case 'u':
     unbuf_f = 1;
     continue;
 case 't':
     if (*cp=='1') {

  cp++;
  nop_f = 1;
     } else if (*cp=='2') {






  cp++;
  nop_f = 2;
     } else
  nop_f = 1;
     continue;
 case 'j':
 case 'n':
     output_encoding = nkf_enc_from_index(ISO_2022_JP);
     continue;
 case 'e':
     output_encoding = nkf_enc_from_index(EUCJP_NKF);
     continue;
 case 's':
     output_encoding = nkf_enc_from_index(SHIFT_JIS);
     continue;
 case 'l':
     iso8859_f = 1;
     input_encoding = nkf_enc_from_index(ISO_8859_1);
     continue;
 case 'i':
     if (*cp=='@'||*cp=='B')
  kanji_intro = *cp++;
     continue;
 case 'o':

     if (*cp=='J'||*cp=='B'||*cp=='H')
  ascii_intro = *cp++;
     continue;
 case 'h':




     if ('9'>= *cp && *cp>='0')
  hira_f |= (*cp++ -'0');
     else
  hira_f |= 1;
     continue;
 case 'r':
     rot_f = 1;
     continue;






 case 'V':
     show_configuration();
     exit(0);
     break;
 case 'v':
     version();
     exit(0);
     break;


 case 'w':
     if (cp[0] == '8') {
  cp++;
  if (cp[0] == '0'){
      cp++;
      output_encoding = nkf_enc_from_index(UTF_8N);
  } else {
      output_bom_f = 1;
      output_encoding = nkf_enc_from_index(UTF_8_BOM);
  }
     } else {
  int enc_idx;
  if ('1'== cp[0] && '6'==cp[1]) {
      cp += 2;
      enc_idx = UTF_16;
  } else if ('3'== cp[0] && '2'==cp[1]) {
      cp += 2;
      enc_idx = UTF_32;
  } else {
      output_encoding = nkf_enc_from_index(UTF_8);
      continue;
  }
  if (cp[0]=='L') {
      cp++;
      output_endian = ENDIAN_LITTLE;
      output_bom_f = 1;
  } else if (cp[0] == 'B') {
      cp++;
      output_bom_f = 1;
  }
  if (cp[0] == '0'){
      output_bom_f = 0;
      cp++;
      enc_idx = enc_idx == UTF_16
   ? (output_endian == ENDIAN_LITTLE ? UTF_16LE : UTF_16BE)
   : (output_endian == ENDIAN_LITTLE ? UTF_32LE : UTF_32BE);
  } else {
      enc_idx = enc_idx == UTF_16
   ? (output_endian == ENDIAN_LITTLE ? UTF_16LE_BOM : UTF_16BE_BOM)
   : (output_endian == ENDIAN_LITTLE ? UTF_32LE_BOM : UTF_32BE_BOM);
  }
  output_encoding = nkf_enc_from_index(enc_idx);
     }
     continue;


 case 'W':
     if (cp[0] == '8') {
  cp++;
  input_encoding = nkf_enc_from_index(UTF_8);
     }else{
  int enc_idx;
  if ('1'== cp[0] && '6'==cp[1]) {
      cp += 2;
      input_endian = ENDIAN_BIG;
      enc_idx = UTF_16;
  } else if ('3'== cp[0] && '2'==cp[1]) {
      cp += 2;
      input_endian = ENDIAN_BIG;
      enc_idx = UTF_32;
  } else {
      input_encoding = nkf_enc_from_index(UTF_8);
      continue;
  }
  if (cp[0]=='L') {
      cp++;
      input_endian = ENDIAN_LITTLE;
  } else if (cp[0] == 'B') {
      cp++;
      input_endian = ENDIAN_BIG;
  }
  enc_idx = (enc_idx == UTF_16
      ? (input_endian == ENDIAN_LITTLE ? UTF_16LE : UTF_16BE)
      : (input_endian == ENDIAN_LITTLE ? UTF_32LE : UTF_32BE));
  input_encoding = nkf_enc_from_index(enc_idx);
     }
     continue;


 case 'J':
     input_encoding = nkf_enc_from_index(ISO_2022_JP);
     continue;
 case 'E':
     input_encoding = nkf_enc_from_index(EUCJP_NKF);
     continue;
 case 'S':
     input_encoding = nkf_enc_from_index(SHIFT_JIS);
     continue;
 case 'Z':







     while ('0'<= *cp && *cp <='4') {
  alpha_f |= 1 << (*cp++ - '0');
     }
     alpha_f |= 1;
     continue;
 case 'x':
     x0201_f = 0;
     continue;
 case 'X':
     x0201_f = 1;
     continue;
 case 'F':
     fold_preserve_f = 1;
 case 'f':
     fold_f = 1;
     fold_len = 0;
     while('0'<= *cp && *cp <='9') {
  fold_len *= 10;
  fold_len += *cp++ - '0';
     }
     if (!(0<fold_len && fold_len<8192))
  fold_len = 60;
     if (*cp=='-') {
  fold_margin = 0;
  cp++;
  while('0'<= *cp && *cp <='9') {
      fold_margin *= 10;
      fold_margin += *cp++ - '0';
  }
     }
     continue;
 case 'm':

     if (*cp=='B'||*cp=='Q') {
  mime_decode_mode = *cp++;
  mimebuf_f = 7;
     } else if (*cp=='N') {
  mime_f = 1; cp++;
     } else if (*cp=='S') {
  mime_f = 8; cp++;
     } else if (*cp=='0') {
  mime_decode_f = 0;
  mime_f = 0; cp++;
     } else {
  mime_f = 8;
     }
     continue;
 case 'M':
     if (*cp=='B') {
  mimeout_mode = 'B';
  mimeout_f = 7; cp++;
     } else if (*cp=='Q') {
  mimeout_mode = 'Q';
  mimeout_f = 7; cp++;
     } else {
  mimeout_f = 1;
     }
     continue;
 case 'B':




     if ('9'>= *cp && *cp>='0')
  broken_f |= 1<<(*cp++ -'0');
     else
  broken_f |= 1;
     continue;

 case 'O':
     file_out_f = 1;
     continue;

 case 'c':
     eolmode_f = 0x0D0A;
     continue;
 case 'd':
     eolmode_f = 0x0a;
     continue;
 case 'I':
     iso2022jp_f = 1;
     continue;
 case 'L':
     if (*cp=='u') {
  eolmode_f = 0x0a; cp++;
     } else if (*cp=='m') {
  eolmode_f = 0x0d; cp++;
     } else if (*cp=='w') {
  eolmode_f = 0x0D0A; cp++;
     } else if (*cp=='0') {
  eolmode_f = 0; cp++;
     }
     continue;

 case 'g':
     if ('2' <= *cp && *cp <= '9') {
  guess_f = 2;
  cp++;
     } else if (*cp == '0' || *cp == '1') {
  guess_f = 1;
  cp++;
     } else {
  guess_f = 1;
     }
     continue;

 case 0x20:

     while(*cp && *cp++!='-');
     continue;
 default:

     fprintf(stderr, "unknown option: -%c\n", *(cp-1));


     return -1;
 }
    }
    return 0;
}





int
main(int argc, char **argv)
{
    FILE *fin;
    unsigned char *cp;

    char *outfname = ((void*)0);
    char *origfname;





    setlocale(0, "");

    nkf_state_init();

    for (argc--,argv++; (argc > 0) && **argv == '-'; argc--, argv++) {
 cp = (unsigned char *)*argv;
 options(cp);
    }

    if (guess_f) {

 int debug_f_back = debug_f;





 int x0212_f_back = x0212_f;

 int x0213_f_back = x0213_f;
 int guess_f_back = guess_f;
 reinit();
 guess_f = guess_f_back;
 mime_f = 0;

 debug_f = debug_f_back;




 x0212_f = x0212_f_back;
 x0213_f = x0213_f_back;
    }

    if (binmode_f == 1)




    (void)(stdout);


    if (unbuf_f)
 setbuf(stdout, (char *) ((void*)0));
    else
 setvbuf(stdout, (char *) stdobuf, 0, 16384);

    if (argc == 0) {
 if (binmode_f == 1)



 (void)(stdin);

 setvbuf(stdin, (char *) stdibuf, 0, 16384);
 if (nop_f)
     noconvert(stdin);
 else {
     kanji_convert(stdin);
     if (guess_f) print_guessed_code(((void*)0));
 }
    } else {
 int nfiles = argc;
 int is_argument_error = 0;
 while (argc--) {
     input_codename = ((void*)0);
     input_eol = 0;

     iconv_for_check = 0;

     if ((fin = fopen((origfname = *argv++), "r")) == ((void*)0)) {
  perror(*(argv-1));
  is_argument_error = 1;
  continue;
     } else {

  int fd = 0;
  int fd_backup = 0;



  if (file_out_f == 1) {

      if (overwrite_f){
   outfname = nkf_xmalloc(strlen(origfname)
       + strlen(".nkftmpXXXXXX")
       + 1);
   strcpy(outfname, origfname);
   strcat(outfname, ".nkftmpXXXXXX");
   fd = mkstemp(outfname);

   if (fd < 0
       || (fd_backup = dup(fileno(stdout))) < 0
       || dup2(fd, fileno(stdout)) < 0
      ){
       perror(origfname);
       return -1;
   }
      }else

      if(argc == 1) {
   outfname = *argv++;
   argc--;
      } else {
   outfname = "nkf.out";
      }

      if(freopen(outfname, "w", stdout) == ((void*)0)) {
   perror (outfname);
   return (-1);
      }
      if (binmode_f == 1) {




   (void)(stdout);

      }
  }
  if (binmode_f == 1)




  (void)(fin);

  setvbuf(fin, (char *) stdibuf, 0, 16384);
  if (nop_f)
      noconvert(fin);
  else {
      char *filename = ((void*)0);
      kanji_convert(fin);
      if (nfiles > 1) filename = origfname;
      if (guess_f) print_guessed_code(filename);
  }
  fclose(fin);

  if (overwrite_f) {
      struct stat sb;



      struct utimbuf tb;


      fflush(stdout);
      close(fd);
      if (dup2(fd_backup, fileno(stdout)) < 0){
   perror("dup2");
      }
      if (stat(origfname, &sb)) {
   fprintf(stderr, "Can't stat %s\n", origfname);
      }

      if (chmod(outfname, sb.st_mode)) {
   fprintf(stderr, "Can't set permission %s\n", outfname);
      }


      if(preserve_time_f){






   tb.actime = sb.st_atime;
   tb.modtime = sb.st_mtime;
   if (utime(outfname, &tb)) {
       fprintf(stderr, "Can't set timestamp %s\n", outfname);
   }

      }
      if(backup_f){
   char *backup_filename = get_backup_filename(backup_suffix, origfname);



   if (rename(origfname, backup_filename)) {
       perror(backup_filename);
       fprintf(stderr, "Can't rename %s to %s\n",
        origfname, backup_filename);
   }
   free(backup_filename);
      }else{





      }
      if (rename(outfname, origfname)) {
   perror(origfname);
   fprintf(stderr, "Can't rename %s to %s\n",
    outfname, origfname);
      }
      free(outfname);
  }

     }
 }
 if (is_argument_error)
     return(-1);
    }






    if (file_out_f == 1)
 fclose(stdout);

    return (0);
}
