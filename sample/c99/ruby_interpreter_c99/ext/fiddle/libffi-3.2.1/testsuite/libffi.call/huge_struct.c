




typedef long unsigned int size_t;
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
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
typedef __mode_t mode_t;





typedef __off_t off_t;
typedef __pid_t pid_t;
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int creat (const char *__file, mode_t __mode) ;
typedef unsigned long ffi_arg;
typedef signed long ffi_sarg;



typedef enum ffi_abi {
  FFI_FIRST_ABI = 0,
  FFI_SYSV,
  FFI_UNIX64,
  FFI_THISCALL,
  FFI_FASTCALL,
  FFI_STDCALL,
  FFI_PASCAL,
  FFI_REGISTER,
  FFI_LAST_ABI,



  FFI_DEFAULT_ABI = FFI_UNIX64


} ffi_abi;







typedef long int ptrdiff_t;
typedef struct _ffi_type
{
  size_t size;
  unsigned short alignment;
  unsigned short type;
  struct _ffi_type **elements;
} ffi_type;
extern ffi_type ffi_type_void;
extern ffi_type ffi_type_uint8;
extern ffi_type ffi_type_sint8;
extern ffi_type ffi_type_uint16;
extern ffi_type ffi_type_sint16;
extern ffi_type ffi_type_uint32;
extern ffi_type ffi_type_sint32;
extern ffi_type ffi_type_uint64;
extern ffi_type ffi_type_sint64;
extern ffi_type ffi_type_float;
extern ffi_type ffi_type_double;
extern ffi_type ffi_type_pointer;


extern ffi_type ffi_type_longdouble;





extern ffi_type ffi_type_complex_float;
extern ffi_type ffi_type_complex_double;

extern ffi_type ffi_type_complex_longdouble;






typedef enum {
  FFI_OK = 0,
  FFI_BAD_TYPEDEF,
  FFI_BAD_ABI
} ffi_status;

typedef unsigned FFI_TYPE;

typedef struct {
  ffi_abi abi;
  unsigned nargs;
  ffi_type **arg_types;
  ffi_type *rtype;
  unsigned bytes;
  unsigned flags;



} ffi_cif;







ffi_status ffi_prep_cif_core(ffi_cif *cif,
        ffi_abi abi,
        unsigned int isvariadic,
        unsigned int nfixedargs,
        unsigned int ntotalargs,
        ffi_type *rtype,
        ffi_type **atypes);
typedef union {
  ffi_sarg sint;
  ffi_arg uint;
  float flt;
  char data[8];
  void* ptr;
} ffi_raw;
typedef ffi_raw ffi_java_raw;



void ffi_raw_call (ffi_cif *cif,
     void (*fn)(void),
     void *rvalue,
     ffi_raw *avalue);

void ffi_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_raw *raw);
void ffi_raw_to_ptrarray (ffi_cif *cif, ffi_raw *raw, void **args);
size_t ffi_raw_size (ffi_cif *cif);





void ffi_java_raw_call (ffi_cif *cif,
   void (*fn)(void),
   void *rvalue,
   ffi_java_raw *avalue);

void ffi_java_ptrarray_to_raw (ffi_cif *cif, void **args, ffi_java_raw *raw);
void ffi_java_raw_to_ptrarray (ffi_cif *cif, ffi_java_raw *raw, void **args);
size_t ffi_java_raw_size (ffi_cif *cif);
typedef struct {




  char tramp[24];

  ffi_cif *cif;
  void (*fun)(ffi_cif*,void*,void**,void*);
  void *user_data;

} ffi_closure ;







void *ffi_closure_alloc (size_t size, void **code);
void ffi_closure_free (void *);

ffi_status
ffi_prep_closure (ffi_closure*,
    ffi_cif *,
    void (*fun)(ffi_cif*,void*,void**,void*),
    void *user_data);

ffi_status
ffi_prep_closure_loc (ffi_closure*,
        ffi_cif *,
        void (*fun)(ffi_cif*,void*,void**,void*),
        void *user_data,
        void*codeloc);




typedef struct {




  char tramp[24];

  ffi_cif *cif;







  void (*translate_args)(ffi_cif*,void*,void**,void*);
  void *this_closure;



  void (*fun)(ffi_cif*,void*,ffi_raw*,void*);
  void *user_data;

} ffi_raw_closure;

typedef struct {




  char tramp[24];


  ffi_cif *cif;







  void (*translate_args)(ffi_cif*,void*,void**,void*);
  void *this_closure;



  void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*);
  void *user_data;

} ffi_java_raw_closure;

ffi_status
ffi_prep_raw_closure (ffi_raw_closure*,
        ffi_cif *cif,
        void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
        void *user_data);

ffi_status
ffi_prep_raw_closure_loc (ffi_raw_closure*,
     ffi_cif *cif,
     void (*fun)(ffi_cif*,void*,ffi_raw*,void*),
     void *user_data,
     void *codeloc);

ffi_status
ffi_prep_java_raw_closure (ffi_java_raw_closure*,
             ffi_cif *cif,
             void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
             void *user_data);

ffi_status
ffi_prep_java_raw_closure_loc (ffi_java_raw_closure*,
          ffi_cif *cif,
          void (*fun)(ffi_cif*,void*,ffi_java_raw*,void*),
          void *user_data,
          void *codeloc);





ffi_status ffi_prep_cif(ffi_cif *cif,
   ffi_abi abi,
   unsigned int nargs,
   ffi_type *rtype,
   ffi_type **atypes);

ffi_status ffi_prep_cif_var(ffi_cif *cif,
       ffi_abi abi,
       unsigned int nfixedargs,
       unsigned int ntotalargs,
       ffi_type *rtype,
       ffi_type **atypes);

void ffi_call(ffi_cif *cif,
       void (*fn)(void),
       void *rvalue,
       void **avalue);







typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;


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

typedef struct BigStruct{
 uint8_t a;
 int8_t b;
 uint16_t c;
 int16_t d;
 uint32_t e;
 int32_t f;
 uint64_t g;
 int64_t h;
 float i;
 double j;
 long double k;
 char* l;
 uint8_t m;
 int8_t n;
 uint16_t o;
 int16_t p;
 uint32_t q;
 int32_t r;
 uint64_t s;
 int64_t t;
 float u;
 double v;
 long double w;
 char* x;
 uint8_t y;
 int8_t z;
 uint16_t aa;
 int16_t bb;
 uint32_t cc;
 int32_t dd;
 uint64_t ee;
 int64_t ff;
 float gg;
 double hh;
 long double ii;
 char* jj;
 uint8_t kk;
 int8_t ll;
 uint16_t mm;
 int16_t nn;
 uint32_t oo;
 int32_t pp;
 uint64_t qq;
 int64_t rr;
 float ss;
 double tt;
 long double uu;
 char* vv;
 uint8_t ww;
 int8_t xx;
} BigStruct;

BigStruct
test_large_fn(
 uint8_t ui8_1,
 int8_t si8_1,
 uint16_t ui16_1,
 int16_t si16_1,
 uint32_t ui32_1,
 int32_t si32_1,
 uint64_t ui64_1,
 int64_t si64_1,
 float f_1,
 double d_1,
 long double ld_1,
 char* p_1,
 uint8_t ui8_2,
 int8_t si8_2,
 uint16_t ui16_2,
 int16_t si16_2,
 uint32_t ui32_2,
 int32_t si32_2,
 uint64_t ui64_2,
 int64_t si64_2,
 float f_2,
 double d_2,
 long double ld_2,
 char* p_2,
 uint8_t ui8_3,
 int8_t si8_3,
 uint16_t ui16_3,
 int16_t si16_3,
 uint32_t ui32_3,
 int32_t si32_3,
 uint64_t ui64_3,
 int64_t si64_3,
 float f_3,
 double d_3,
 long double ld_3,
 char* p_3,
 uint8_t ui8_4,
 int8_t si8_4,
 uint16_t ui16_4,
 int16_t si16_4,
 uint32_t ui32_4,
 int32_t si32_4,
 uint64_t ui64_4,
 int64_t si64_4,
 float f_4,
 double d_4,
 long double ld_4,
 char* p_4,
 uint8_t ui8_5,
 int8_t si8_5)
{
 BigStruct retVal = {
  ui8_1 + 1, si8_1 + 1, ui16_1 + 1, si16_1 + 1, ui32_1 + 1, si32_1 + 1,
   ui64_1 + 1, si64_1 + 1, f_1 + 1, d_1 + 1, ld_1 + 1, (char*)((intptr_t)p_1 + 1),
  ui8_2 + 2, si8_2 + 2, ui16_2 + 2, si16_2 + 2, ui32_2 + 2, si32_2 + 2,
   ui64_2 + 2, si64_2 + 2, f_2 + 2, d_2 + 2, ld_2 + 2, (char*)((intptr_t)p_2 + 2),
  ui8_3 + 3, si8_3 + 3, ui16_3 + 3, si16_3 + 3, ui32_3 + 3, si32_3 + 3,
   ui64_3 + 3, si64_3 + 3, f_3 + 3, d_3 + 3, ld_3 + 3, (char*)((intptr_t)p_3 + 3),
  ui8_4 + 4, si8_4 + 4, ui16_4 + 4, si16_4 + 4, ui32_4 + 4, si32_4 + 4,
   ui64_4 + 4, si64_4 + 4, f_4 + 4, d_4 + 4, ld_4 + 4, (char*)((intptr_t)p_4 + 4),
  ui8_5 + 5, si8_5 + 5};

 printf("%u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d: %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d\n",
        ui8_1, si8_1, ui16_1, si16_1, ui32_1, si32_1, ui64_1, si64_1, f_1, d_1, ld_1, (unsigned long)p_1,
  ui8_2, si8_2, ui16_2, si16_2, ui32_2, si32_2, ui64_2, si64_2, f_2, d_2, ld_2, (unsigned long)p_2,
  ui8_3, si8_3, ui16_3, si16_3, ui32_3, si32_3, ui64_3, si64_3, f_3, d_3, ld_3, (unsigned long)p_3,
  ui8_4, si8_4, ui16_4, si16_4, ui32_4, si32_4, ui64_4, si64_4, f_4, d_4, ld_4, (unsigned long)p_4, ui8_5, si8_5,
  retVal.a, retVal.b, retVal.c, retVal.d, retVal.e, retVal.f,
        retVal.g, retVal.h, retVal.i, retVal.j, retVal.k, (unsigned long)retVal.l,
  retVal.m, retVal.n, retVal.o, retVal.p, retVal.q, retVal.r,
        retVal.s, retVal.t, retVal.u, retVal.v, retVal.w, (unsigned long)retVal.x,
  retVal.y, retVal.z, retVal.aa, retVal.bb, retVal.cc, retVal.dd,
        retVal.ee, retVal.ff, retVal.gg, retVal.hh, retVal.ii, (unsigned long)retVal.jj,
  retVal.kk, retVal.ll, retVal.mm, retVal.nn, retVal.oo, retVal.pp,
        retVal.qq, retVal.rr, retVal.ss, retVal.tt, retVal.uu, (unsigned long)retVal.vv, retVal.ww, retVal.xx);

 return retVal;
}

static void
cls_large_fn(ffi_cif* cif , void* resp, void** args, void* userdata )
{
 uint8_t ui8_1 = *(uint8_t*)args[0];
 int8_t si8_1 = *(int8_t*)args[1];
 uint16_t ui16_1 = *(uint16_t*)args[2];
 int16_t si16_1 = *(int16_t*)args[3];
 uint32_t ui32_1 = *(uint32_t*)args[4];
 int32_t si32_1 = *(int32_t*)args[5];
 uint64_t ui64_1 = *(uint64_t*)args[6];
 int64_t si64_1 = *(int64_t*)args[7];
 float f_1 = *(float*)args[8];
 double d_1 = *(double*)args[9];
 long double ld_1 = *(long double*)args[10];
 char* p_1 = *(char**)args[11];
 uint8_t ui8_2 = *(uint8_t*)args[12];
 int8_t si8_2 = *(int8_t*)args[13];
 uint16_t ui16_2 = *(uint16_t*)args[14];
 int16_t si16_2 = *(int16_t*)args[15];
 uint32_t ui32_2 = *(uint32_t*)args[16];
 int32_t si32_2 = *(int32_t*)args[17];
 uint64_t ui64_2 = *(uint64_t*)args[18];
 int64_t si64_2 = *(int64_t*)args[19];
 float f_2 = *(float*)args[20];
 double d_2 = *(double*)args[21];
 long double ld_2 = *(long double*)args[22];
 char* p_2 = *(char**)args[23];
 uint8_t ui8_3 = *(uint8_t*)args[24];
 int8_t si8_3 = *(int8_t*)args[25];
 uint16_t ui16_3 = *(uint16_t*)args[26];
 int16_t si16_3 = *(int16_t*)args[27];
 uint32_t ui32_3 = *(uint32_t*)args[28];
 int32_t si32_3 = *(int32_t*)args[29];
 uint64_t ui64_3 = *(uint64_t*)args[30];
 int64_t si64_3 = *(int64_t*)args[31];
 float f_3 = *(float*)args[32];
 double d_3 = *(double*)args[33];
 long double ld_3 = *(long double*)args[34];
 char* p_3 = *(char**)args[35];
 uint8_t ui8_4 = *(uint8_t*)args[36];
 int8_t si8_4 = *(int8_t*)args[37];
 uint16_t ui16_4 = *(uint16_t*)args[38];
 int16_t si16_4 = *(int16_t*)args[39];
 uint32_t ui32_4 = *(uint32_t*)args[40];
 int32_t si32_4 = *(int32_t*)args[41];
 uint64_t ui64_4 = *(uint64_t*)args[42];
 int64_t si64_4 = *(int64_t*)args[43];
 float f_4 = *(float*)args[44];
 double d_4 = *(double*)args[45];
 long double ld_4 = *(long double*)args[46];
 char* p_4 = *(char**)args[47];
 uint8_t ui8_5 = *(uint8_t*)args[48];
 int8_t si8_5 = *(int8_t*)args[49];

 *(BigStruct*)resp = test_large_fn(
  ui8_1, si8_1, ui16_1, si16_1, ui32_1, si32_1, ui64_1, si64_1, f_1, d_1, ld_1, p_1,
  ui8_2, si8_2, ui16_2, si16_2, ui32_2, si32_2, ui64_2, si64_2, f_2, d_2, ld_2, p_2,
  ui8_3, si8_3, ui16_3, si16_3, ui32_3, si32_3, ui64_3, si64_3, f_3, d_3, ld_3, p_3,
  ui8_4, si8_4, ui16_4, si16_4, ui32_4, si32_4, ui64_4, si64_4, f_4, d_4, ld_4, p_4,
  ui8_5, si8_5);
}

int
main(int argc , const char** argv )
{
        void *code;
 ffi_closure *pcl = ffi_closure_alloc(sizeof(ffi_closure), &code);

 ffi_cif cif;
 ffi_type* argTypes[51];
 void* argValues[51];

 ffi_type ret_struct_type;
 ffi_type* st_fields[51];
 BigStruct retVal;

 uint8_t ui8 = 1;
 int8_t si8 = 2;
 uint16_t ui16 = 3;
 int16_t si16 = 4;
 uint32_t ui32 = 5;
 int32_t si32 = 6;
 uint64_t ui64 = 7;
 int64_t si64 = 8;
 float f = 9;
 double d = 10;
 long double ld = 11;
 char* p = (char*)0x12345678;

 memset (&retVal, 0, sizeof(retVal));

 ret_struct_type.size = 0;
 ret_struct_type.alignment = 0;
 ret_struct_type.type = 13;
 ret_struct_type.elements = st_fields;

 st_fields[0] = st_fields[12] = st_fields[24] = st_fields[36] = st_fields[48] = &ffi_type_uint8;
 st_fields[1] = st_fields[13] = st_fields[25] = st_fields[37] = st_fields[49] = &ffi_type_sint8;
 st_fields[2] = st_fields[14] = st_fields[26] = st_fields[38] = &ffi_type_uint16;
 st_fields[3] = st_fields[15] = st_fields[27] = st_fields[39] = &ffi_type_sint16;
 st_fields[4] = st_fields[16] = st_fields[28] = st_fields[40] = &ffi_type_uint32;
 st_fields[5] = st_fields[17] = st_fields[29] = st_fields[41] = &ffi_type_sint32;
 st_fields[6] = st_fields[18] = st_fields[30] = st_fields[42] = &ffi_type_uint64;
 st_fields[7] = st_fields[19] = st_fields[31] = st_fields[43] = &ffi_type_sint64;
 st_fields[8] = st_fields[20] = st_fields[32] = st_fields[44] = &ffi_type_float;
 st_fields[9] = st_fields[21] = st_fields[33] = st_fields[45] = &ffi_type_double;
 st_fields[10] = st_fields[22] = st_fields[34] = st_fields[46] = &ffi_type_longdouble;
 st_fields[11] = st_fields[23] = st_fields[35] = st_fields[47] = &ffi_type_pointer;

 st_fields[50] = ((void*)0);

 argTypes[0] = argTypes[12] = argTypes[24] = argTypes[36] = argTypes[48] = &ffi_type_uint8;
 argValues[0] = argValues[12] = argValues[24] = argValues[36] = argValues[48] = &ui8;
 argTypes[1] = argTypes[13] = argTypes[25] = argTypes[37] = argTypes[49] = &ffi_type_sint8;
 argValues[1] = argValues[13] = argValues[25] = argValues[37] = argValues[49] = &si8;
 argTypes[2] = argTypes[14] = argTypes[26] = argTypes[38] = &ffi_type_uint16;
 argValues[2] = argValues[14] = argValues[26] = argValues[38] = &ui16;
 argTypes[3] = argTypes[15] = argTypes[27] = argTypes[39] = &ffi_type_sint16;
 argValues[3] = argValues[15] = argValues[27] = argValues[39] = &si16;
 argTypes[4] = argTypes[16] = argTypes[28] = argTypes[40] = &ffi_type_uint32;
 argValues[4] = argValues[16] = argValues[28] = argValues[40] = &ui32;
 argTypes[5] = argTypes[17] = argTypes[29] = argTypes[41] = &ffi_type_sint32;
 argValues[5] = argValues[17] = argValues[29] = argValues[41] = &si32;
 argTypes[6] = argTypes[18] = argTypes[30] = argTypes[42] = &ffi_type_uint64;
 argValues[6] = argValues[18] = argValues[30] = argValues[42] = &ui64;
 argTypes[7] = argTypes[19] = argTypes[31] = argTypes[43] = &ffi_type_sint64;
 argValues[7] = argValues[19] = argValues[31] = argValues[43] = &si64;
 argTypes[8] = argTypes[20] = argTypes[32] = argTypes[44] = &ffi_type_float;
 argValues[8] = argValues[20] = argValues[32] = argValues[44] = &f;
 argTypes[9] = argTypes[21] = argTypes[33] = argTypes[45] = &ffi_type_double;
 argValues[9] = argValues[21] = argValues[33] = argValues[45] = &d;
 argTypes[10] = argTypes[22] = argTypes[34] = argTypes[46] = &ffi_type_longdouble;
 argValues[10] = argValues[22] = argValues[34] = argValues[46] = &ld;
 argTypes[11] = argTypes[23] = argTypes[35] = argTypes[47] = &ffi_type_pointer;
 argValues[11] = argValues[23] = argValues[35] = argValues[47] = &p;

 argTypes[50] = ((void*)0);
 argValues[50] = ((void*)0);

 (void)(!(ffi_prep_cif(&cif, FFI_DEFAULT_ABI, 50, &ret_struct_type, argTypes) == FFI_OK) ? (abort(), 1) : 0);

 ffi_call(&cif, ((void (*)(void))test_large_fn), &retVal, argValues);

 printf("res: %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d\n",
  retVal.a, retVal.b, retVal.c, retVal.d, retVal.e, retVal.f,
        retVal.g, retVal.h, retVal.i, retVal.j, retVal.k, (unsigned long)retVal.l,
  retVal.m, retVal.n, retVal.o, retVal.p, retVal.q, retVal.r,
        retVal.s, retVal.t, retVal.u, retVal.v, retVal.w, (unsigned long)retVal.x,
  retVal.y, retVal.z, retVal.aa, retVal.bb, retVal.cc, retVal.dd,
        retVal.ee, retVal.ff, retVal.gg, retVal.hh, retVal.ii, (unsigned long)retVal.jj,
  retVal.kk, retVal.ll, retVal.mm, retVal.nn, retVal.oo, retVal.pp,
        retVal.qq, retVal.rr, retVal.ss, retVal.tt, retVal.uu, (unsigned long)retVal.vv, retVal.ww, retVal.xx);


 (void)(!(ffi_prep_closure_loc(pcl, &cif, cls_large_fn, ((void*)0), code) == FFI_OK) ? (abort(), 1) : 0);

 retVal = ((BigStruct(*)(
  uint8_t, int8_t, uint16_t, int16_t, uint32_t, int32_t, uint64_t, int64_t, float, double, long double, char*,
  uint8_t, int8_t, uint16_t, int16_t, uint32_t, int32_t, uint64_t, int64_t, float, double, long double, char*,
  uint8_t, int8_t, uint16_t, int16_t, uint32_t, int32_t, uint64_t, int64_t, float, double, long double, char*,
  uint8_t, int8_t, uint16_t, int16_t, uint32_t, int32_t, uint64_t, int64_t, float, double, long double, char*,
  uint8_t, int8_t))(code))(
  ui8, si8, ui16, si16, ui32, si32, ui64, si64, f, d, ld, p,
  ui8, si8, ui16, si16, ui32, si32, ui64, si64, f, d, ld, p,
  ui8, si8, ui16, si16, ui32, si32, ui64, si64, f, d, ld, p,
  ui8, si8, ui16, si16, ui32, si32, ui64, si64, f, d, ld, p,
  ui8, si8);

 printf("res: %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d %hu %hd %u %d %lu %ld %.0f %.0f %.0Lf %#lx %u %d\n",
  retVal.a, retVal.b, retVal.c, retVal.d, retVal.e, retVal.f,
        retVal.g, retVal.h, retVal.i, retVal.j, retVal.k, (unsigned long)retVal.l,
  retVal.m, retVal.n, retVal.o, retVal.p, retVal.q, retVal.r,
        retVal.s, retVal.t, retVal.u, retVal.v, retVal.w, (unsigned long)retVal.x,
  retVal.y, retVal.z, retVal.aa, retVal.bb, retVal.cc, retVal.dd,
        retVal.ee, retVal.ff, retVal.gg, retVal.hh, retVal.ii, (unsigned long)retVal.jj,
  retVal.kk, retVal.ll, retVal.mm, retVal.nn, retVal.oo, retVal.pp,
        retVal.qq, retVal.rr, retVal.ss, retVal.tt, retVal.uu, (unsigned long)retVal.vv, retVal.ww, retVal.xx);


    return 0;
}
