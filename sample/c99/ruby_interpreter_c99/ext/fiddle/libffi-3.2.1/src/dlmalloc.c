




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
typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;






typedef __clockid_t clockid_t;






typedef __time_t time_t;






typedef __timer_t timer_t;
typedef long unsigned int size_t;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
struct mallinfo {
  size_t arena;
  size_t ordblks;
  size_t smblks;
  size_t hblks;
  size_t hblkhd;
  size_t usmblks;
  size_t fsmblks;
  size_t uordblks;
  size_t fordblks;
  size_t keepcost;
};
void* malloc(size_t);
void free(void*);






void* calloc(size_t, size_t);
void* realloc(void*, size_t);
void* memalign(size_t, size_t);






void* valloc(size_t);
int mallopt(int, int);
size_t malloc_footprint(void);
size_t malloc_max_footprint(void);
struct mallinfo mallinfo(void);
void** independent_calloc(size_t, size_t, void**);
void** independent_comalloc(size_t, size_t*, void**);







void* pvalloc(size_t);
int malloc_trim(size_t);
size_t malloc_usable_size(void*);
void malloc_stats(void);










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




















extern int *__errno_location (void)  ;










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








extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) ;
extern int munmap (void *__addr, size_t __len) ;




extern int mprotect (void *__addr, size_t __len, int __prot) ;







extern int msync (void *__addr, size_t __len, int __flags);
extern int mlock (const void *__addr, size_t __len) ;


extern int munlock (const void *__addr, size_t __len) ;




extern int mlockall (int __flags) ;



extern int munlockall (void) ;
extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int creat (const char *__file, mode_t __mode) ;




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
static int dev_zero_fd = -1;
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
  flag_t sflags;

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

    mparams.mmap_threshold = ((size_t)256U * (size_t)1024U);
    mparams.trim_threshold = ((size_t)2U * (size_t)1024U * (size_t)1024U);

    mparams.default_mflags = (0U)|(((size_t)1));
    s = (size_t)0x58585858U;

                             ;
    if (mparams.magic == 0) {
      mparams.magic = s;

                              ;
      (&_gm_)->mflags = mparams.default_mflags;
    }
                             ;


    mparams.page_size = sysconf(_SC_PAGESIZE);
    mparams.granularity = (((0) != 0)?
                           (0) : mparams.page_size);
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
static struct mallinfo internal_mallinfo(mstate m) {
  struct mallinfo nm = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if (!(0)) {
                         ;
    if (((m)->top != 0)) {
      size_t nfree = ((size_t)1);
      size_t mfree = m->topsize + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1))));
      size_t sum = mfree;
      msegmentptr s = &m->seg;
      while (s != 0) {
        mchunkptr q = (mchunkptr)((s->base) + ((((size_t)(((void*)((char*)(s->base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(s->base) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1)))));
        while (((char*)(q) >= s->base && (char*)(q) < s->base + s->size) &&
               q != m->top && q->head != (((((size_t)1))|(((size_t)2)))|(sizeof(size_t)))) {
          size_t sz = ((q)->head & ~(((((size_t)1))|(((size_t)2)))));
          sum += sz;
          if (!((q)->head & (((size_t)2)))) {
            mfree += sz;
            ++nfree;
          }
          q = ((mchunkptr)( ((char*)(q)) + ((q)->head & ~((((size_t)1))|(((size_t)2))))));
        }
        s = s->next;
      }

      nm.arena = sum;
      nm.ordblks = nfree;
      nm.hblkhd = m->footprint - sum;
      nm.usmblks = m->max_footprint;
      nm.uordblks = m->footprint - mfree;
      nm.fordblks = mfree;
      nm.keepcost = m->topsize;
    }

                 ;
  }
  return nm;
}


static void internal_malloc_stats(mstate m) {
  if (!(0)) {
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

                 ;
  }
}
static void* mmap_alloc(mstate m, size_t nb) {
  size_t mmsize = (((nb + (((sizeof(size_t))<<2)+((sizeof(size_t))<<1)) + (((size_t)8U) - ((size_t)1))) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
  if (mmsize > nb) {
    char* mm = (char*)(((dev_zero_fd < 0) ? (dev_zero_fd = open("/dev/zero", 02), mmap(0, (mmsize), (0x1|0x2), (0x02), dev_zero_fd, 0)) : mmap(0, (mmsize), (0x1|0x2), (0x02), dev_zero_fd, 0)));
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
  (void)((&m->seg)->sflags = (mmapped));
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
  if (1 && !((m)->mflags & (4U))) {
    char* br = ((char*)(((void*)((~(size_t)0)))));
    msegmentptr ss = (m->top == 0)? 0 : segment_holding(m, (char*)m->top);
    size_t asize = 0;
                           ;

    if (ss == 0) {
      char* base = (char*)sbrk(0);
      if (base != ((char*)(((void*)((~(size_t)0)))))) {
        asize = (((nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));

        if (!(((size_t)(base) & (mparams.page_size - ((size_t)1))) == 0))
          asize += (((((size_t)base) + (mparams.page_size)) & ~(mparams.page_size - ((size_t)1))) - (size_t)base);

        if (asize < ((~(size_t)0) / 2U) &&
            (br = (char*)(sbrk(asize))) == base) {
          tbase = base;
          tsize = asize;
        }
      }
    }
    else {

      asize = (((nb - m->topsize + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));

      if (asize < ((~(size_t)0) / 2U) &&
          (br = (char*)(sbrk(asize))) == ss->base+ss->size) {
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
            char* end = (char*)sbrk(esize);
            if (end != ((char*)(((void*)((~(size_t)0))))))
              asize += esize;
            else {
              (void)sbrk(-asize);
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
      char* mp = (char*)(((dev_zero_fd < 0) ? (dev_zero_fd = open("/dev/zero", 02), mmap(0, (rsize), (0x1|0x2), (0x02), dev_zero_fd, 0)) : mmap(0, (rsize), (0x1|0x2), (0x02), dev_zero_fd, 0)));
      if (mp != ((char*)(((void*)((~(size_t)0)))))) {
        tbase = mp;
        tsize = rsize;
        mmap_flag = (((size_t)1));
      }
    }
  }

  if (1 && tbase == ((char*)(((void*)((~(size_t)0)))))) {
    size_t asize = (((nb + (((((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1))) == 0)? 0 : ((((size_t)8U) - ((size_t)(((void*)((char*)(0) + ((sizeof(size_t))<<1)))) & (((size_t)8U) - ((size_t)1)))) & (((size_t)8U) - ((size_t)1))))+(((sizeof(struct malloc_segment)) + ((sizeof(size_t))) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))+(((sizeof(mchunk)) + (((size_t)8U) - ((size_t)1))) & ~(((size_t)8U) - ((size_t)1)))) + ((size_t)1)) + (mparams.granularity)) & ~(mparams.granularity - ((size_t)1)));
    if (asize < ((~(size_t)0) / 2U)) {
      char* br = ((char*)(((void*)((~(size_t)0)))));
      char* end = ((char*)(((void*)((~(size_t)0)))));
                             ;
      br = (char*)(sbrk(asize));
      end = (char*)(sbrk(0));
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
      (void)((&m->seg)->sflags = (mmap_flag));
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
          !(((sp)->sflags) & (8U)) &&
   (1) &&
          (((sp)->sflags) & (((size_t)1))) == mmap_flag &&
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
            !(((sp)->sflags) & (8U)) &&
     (1) &&
            (((sp)->sflags) & (((size_t)1))) == mmap_flag) {
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
    if ((((sp)->sflags) & (((size_t)1))) && !(((sp)->sflags) & (8U))) {
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
        if (munmap((base), (size)) == 0) {
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

      if (!(((sp)->sflags) & (8U))) {
        if ((((sp)->sflags) & (((size_t)1)))) {
          if (1 &&
              sp->size >= extra &&
              !has_segment_link(m, sp)) {
            size_t newsize = sp->size - extra;

            if ((((void*)((~(size_t)0))) != ((void*)((~(size_t)0)))) ||
                (munmap((sp->base + newsize), (extra)) == 0)) {
              released = extra;
            }
          }
        }
        else if (1) {
          if (extra >= ((~(size_t)0) / 2U))
            extra = (((~(size_t)0) / 2U)) + ((size_t)1) - unit;
                                 ;
          {

            char* old_br = (char*)(sbrk(0));
            if (old_br == sp->base + sp->size) {
              char* rel_br = (char*)(sbrk(-extra));
              char* new_br = (char*)(sbrk(0));
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
      { unsigned int Y = leastbit - 1; unsigned int K = Y >> (16-4) & 16; unsigned int N = K; Y >>= K; N += K = Y >> (8-3) & 8; Y >>= K; N += K = Y >> (4-2) & 4; Y >>= K; N += K = Y >> (2-1) & 2; Y >>= K; N += K = Y >> (1-0) & 1; Y >>= K; i = (bindex_t)(N + Y);};
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
  { unsigned int Y = leastbit - 1; unsigned int K = Y >> (16-4) & 16; unsigned int N = K; Y >>= K; N += K = Y >> (8-3) & 8; Y >>= K; N += K = Y >> (4-2) & 4; Y >>= K; N += K = Y >> (2-1) & 2; Y >>= K; N += K = Y >> (1-0) & 1; Y >>= K; i = (bindex_t)(N + Y);};

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
  if (!(0)) {
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
                   ;
      return 0;
    }

                 ;

    if (newp != 0) {
      if (extra != 0) {
        free(extra);
      }
                                ;
      return ((void*)((char*)(newp) + ((sizeof(size_t))<<1)));
    }
    else {
      void* newmem = malloc(bytes);
      if (newmem != 0) {
        size_t oc = oldsize - ((!((oldp)->head & (((size_t)1))) && ((oldp)->prev_foot & (((size_t)1))))? (((sizeof(size_t))<<1)) : ((sizeof(size_t))));
        memcpy(newmem, oldmem, (oc < bytes)? oc : bytes);
        free(oldmem);
      }
      return newmem;
    }
  }
  return 0;
}



static void* internal_memalign(mstate m, size_t alignment, size_t bytes) {
  if (alignment <= ((size_t)8U))
    return malloc(bytes);
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
    char* mem = (char*)malloc(req);
    if (mem != 0) {
      void* leader = 0;
      void* trailer = 0;
      mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));

      if ((0)) return 0;
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
                   ;
      if (leader != 0) {
        free(leader);
      }
      if (trailer != 0) {
        free(trailer);
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
      return (void**)malloc(0);
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
  mem = malloc(size - ((sizeof(size_t))));
  if (was_enabled)
    ((m)->mflags |= (((size_t)1)));
  if (mem == 0)
    return 0;

  if ((0)) return 0;
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
               ;
  return marray;
}






void* malloc(size_t bytes) {
  if (!(0)) {
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
          { unsigned int Y = leastbit - 1; unsigned int K = Y >> (16-4) & 16; unsigned int N = K; Y >>= K; N += K = Y >> (8-3) & 8; Y >>= K; N += K = Y >> (4-2) & 4; Y >>= K; N += K = Y >> (2-1) & 2; Y >>= K; N += K = Y >> (1-0) & 1; Y >>= K; i = (bindex_t)(N + Y);};
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
                  ;
    return mem;
  }

  return 0;
}

void free(void* mem) {






  if (mem != 0) {
    mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));
    if (!(0)) {
                              ;
      if (__builtin_expect(((char*)(p) >= ((&_gm_))->least_addr) && ((p)->head & (((size_t)2))), 1)) {
        size_t psize = ((p)->head & ~(((((size_t)1))|(((size_t)2)))));
        mchunkptr next = ((mchunkptr)(((char*)(p)) + (psize)));
        if (!((p)->head & (((size_t)1)))) {
          size_t prevsize = p->prev_foot;
          if ((prevsize & (((size_t)1))) != 0) {
            prevsize &= ~(((size_t)1));
            psize += prevsize + (((sizeof(size_t))<<2));
            if (munmap(((char*)p - prevsize), (psize)) == 0)
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
                    ;
    }
  }



}

void* calloc(size_t n_elements, size_t elem_size) {
  void* mem;
  size_t req = 0;
  if (n_elements != 0) {
    req = n_elements * elem_size;
    if (((n_elements | elem_size) & ~(size_t)0xffff) &&
        (req / n_elements != elem_size))
      req = (~(size_t)0);
  }
  mem = malloc(req);
  if (mem != 0 && (!(!((((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1))))->head & (((size_t)1))) && ((((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1))))->prev_foot & (((size_t)1))))))
    memset(mem, 0, req);
  return mem;
}

void* realloc(void* oldmem, size_t bytes) {
  if (oldmem == 0)
    return malloc(bytes);






  else {

    mstate m = (&_gm_);







    return internal_realloc(m, oldmem, bytes);
  }
}

void* memalign(size_t alignment, size_t bytes) {
  return internal_memalign((&_gm_), alignment, bytes);
}

void** independent_calloc(size_t n_elements, size_t elem_size,
                                 void* chunks[]) {
  size_t sz = elem_size;
  return ialloc((&_gm_), n_elements, &sz, 3, chunks);
}

void** independent_comalloc(size_t n_elements, size_t sizes[],
                                   void* chunks[]) {
  return ialloc((&_gm_), n_elements, sizes, 0, chunks);
}

void* valloc(size_t bytes) {
  size_t pagesz;
  init_mparams();
  pagesz = mparams.page_size;
  return memalign(pagesz, bytes);
}

void* pvalloc(size_t bytes) {
  size_t pagesz;
  init_mparams();
  pagesz = mparams.page_size;
  return memalign(pagesz, (bytes + pagesz - ((size_t)1)) & ~(pagesz - ((size_t)1)));
}

int malloc_trim(size_t pad) {
  int result = 0;
  if (!(0)) {
    result = sys_trim((&_gm_), pad);
                  ;
  }
  return result;
}

size_t malloc_footprint(void) {
  return (&_gm_)->footprint;
}

size_t malloc_max_footprint(void) {
  return (&_gm_)->max_footprint;
}


struct mallinfo mallinfo(void) {
  return internal_mallinfo((&_gm_));
}


void malloc_stats() {
  internal_malloc_stats((&_gm_));
}

size_t malloc_usable_size(void* mem) {
  if (mem != 0) {
    mchunkptr p = ((mchunkptr)((char*)(mem) - ((sizeof(size_t))<<1)));
    if (((p)->head & (((size_t)2))))
      return ((p)->head & ~(((((size_t)1))|(((size_t)2))))) - ((!((p)->head & (((size_t)1))) && ((p)->prev_foot & (((size_t)1))))? (((sizeof(size_t))<<1)) : ((sizeof(size_t))));
  }
  return 0;
}

int mallopt(int param_number, int value) {
  return change_mparam(param_number, value);
}
