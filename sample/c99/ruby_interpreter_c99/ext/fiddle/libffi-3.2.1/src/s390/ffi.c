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
typedef long unsigned int size_t;
typedef int wchar_t;
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












extern void *alloca (size_t __size) ;














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
ffi_status ffi_prep_cif_machdep(ffi_cif *cif);
ffi_status ffi_prep_cif_machdep_var(ffi_cif *cif,
  unsigned int nfixedargs, unsigned int ntotalargs);


typedef struct
{
  ffi_cif *cif;
  void *rvalue;
  void **avalue;
} extended_cif;
typedef unsigned int UINT8 ;
typedef signed int SINT8 ;
typedef unsigned int UINT16 ;
typedef signed int SINT16 ;
typedef unsigned int UINT32 ;
typedef signed int SINT32 ;
typedef unsigned int UINT64 ;
typedef signed int SINT64 ;


typedef float FLOAT32;






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






static void ffi_prep_args (unsigned char *, extended_cif *);
void



ffi_closure_helper_SYSV (ffi_closure *, unsigned long *,
    unsigned long long *, unsigned long *);
extern void ffi_call_SYSV(unsigned,
     extended_cif *,
     void (*)(unsigned char *, extended_cif *),
     unsigned,
     void *,
     void (*fn)(void));

extern void ffi_closure_SYSV(void);
static int
ffi_check_struct_type (ffi_type *arg)
{
  size_t size = arg->size;



  while (arg->type == 13
         && arg->elements[0] && !arg->elements[1])
    arg = arg->elements[0];



  switch (size)
    {
      case 1:
        return 5;

      case 2:
        return 7;

      case 4:
 if (arg->type == 2)
          return 2;
 else
   return 9;

      case 8:
 if (arg->type == 3)
          return 3;
 else
   return 11;

      default:
 break;
    }


  return 14;
}
static void
ffi_prep_args (unsigned char *stack, extended_cif *ecif)
{
  int gpr_off = ecif->cif->bytes;
  int fpr_off = gpr_off + (((5 * sizeof (long)) + 15) & ~15);

  unsigned long long *p_fpr = (unsigned long long *)(stack + fpr_off);
  unsigned long *p_gpr = (unsigned long *)(stack + gpr_off);
  unsigned char *p_struct = (unsigned char *)p_gpr;
  unsigned long *p_ov = (unsigned long *)stack;

  int n_fpr = 0;
  int n_gpr = 0;
  int n_ov = 0;

  ffi_type **ptr;
  void **p_argv = ecif->avalue;
  int i;




  if (ecif->cif->flags == 1)
    p_gpr[n_gpr++] = (unsigned long) ecif->rvalue;



  for (ptr = ecif->cif->arg_types, i = ecif->cif->nargs;
       i > 0;
       i--, ptr++, p_argv++)
    {
      void *arg = *p_argv;
      int type = (*ptr)->type;



      if (type == 4)
 type = 13;



      if (type == 13 || type == 15)
 {
   if (type == 15)
     type = 14;
   else
     type = ffi_check_struct_type (*ptr);


   if (type == 14)
     {
       p_struct -= ((((*ptr)->size) + 15) & ~15);
       memcpy (p_struct, (char *)arg, (*ptr)->size);
       arg = &p_struct;
     }
 }


      switch (type)
 {
   case 3:
     if (n_fpr < 2)
       p_fpr[n_fpr++] = *(unsigned long long *) arg;
     else



       p_ov[n_ov++] = ((unsigned long *) arg)[0],
       p_ov[n_ov++] = ((unsigned long *) arg)[1];

     break;

   case 2:
     if (n_fpr < 2)
       p_fpr[n_fpr++] = (long long) *(unsigned int *) arg << 32;
     else
       p_ov[n_ov++] = *(unsigned int *) arg;
     break;

   case 14:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = (unsigned long)*(unsigned char **) arg;
     else
       p_ov[n_ov++] = (unsigned long)*(unsigned char **) arg;
     break;

   case 11:
   case 12:






     if (n_gpr == 5 -1)
       n_gpr = 5;
     if (n_gpr < 5)
       p_gpr[n_gpr++] = ((unsigned long *) arg)[0],
       p_gpr[n_gpr++] = ((unsigned long *) arg)[1];
     else
       p_ov[n_ov++] = ((unsigned long *) arg)[0],
       p_ov[n_ov++] = ((unsigned long *) arg)[1];

     break;

   case 9:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(unsigned int *) arg;
     else
       p_ov[n_ov++] = *(unsigned int *) arg;
     break;

   case 1:
   case 10:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(signed int *) arg;
     else
       p_ov[n_ov++] = *(signed int *) arg;
     break;

   case 7:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(unsigned short *) arg;
     else
       p_ov[n_ov++] = *(unsigned short *) arg;
     break;

   case 8:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(signed short *) arg;
     else
       p_ov[n_ov++] = *(signed short *) arg;
     break;

   case 5:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(unsigned char *) arg;
     else
       p_ov[n_ov++] = *(unsigned char *) arg;
     break;

   case 6:
     if (n_gpr < 5)
       p_gpr[n_gpr++] = *(signed char *) arg;
     else
       p_ov[n_ov++] = *(signed char *) arg;
     break;

   default:
                   ;
     break;
        }
    }
}
ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
{
  size_t struct_size = 0;
  int n_gpr = 0;
  int n_fpr = 0;
  int n_ov = 0;

  ffi_type **ptr;
  int i;



  switch (cif->rtype->type)
    {

      case 0:
 cif->flags = 0;
 break;


      case 13:
      case 15:
 cif->flags = 1;
 n_gpr++;
 break;


      case 2:
 cif->flags = 2;
 break;

      case 3:
 cif->flags = 3;
 break;


      case 4:
 cif->flags = 1;
 n_gpr++;
 break;



      case 11:
      case 12:
 cif->flags = 5;
 break;

      case 14:
      case 1:
      case 9:
      case 10:
      case 7:
      case 8:
      case 5:
      case 6:




 cif->flags = 4;

 break;

      default:
                      ;
        break;
    }



  for (ptr = cif->arg_types, i = cif->nargs;
       i > 0;
       i--, ptr++)
    {
      int type = (*ptr)->type;



      if (type == 4)
 type = 13;



      if (type == 13 || type == 15)
 {
   if (type == 15)
     type = 14;
   else
     type = ffi_check_struct_type (*ptr);



   if (type == 14)
     struct_size += ((((*ptr)->size) + 15) & ~15);
 }


      switch (type)
 {



   case 3:
     if (n_fpr < 2)
       n_fpr++;
     else
       n_ov += sizeof (double) / sizeof (long);
     break;

   case 2:
     if (n_fpr < 2)
       n_fpr++;
     else
       n_ov++;
     break;







   case 11:
   case 12:
     if (n_gpr == 5 -1)
       n_gpr = 5;
     if (n_gpr < 5)
       n_gpr += 2;
     else
       n_ov += 2;
     break;





   default:
     if (n_gpr < 5)
       n_gpr++;
     else
       n_ov++;
     break;
        }
    }




  cif->bytes = (((n_ov * sizeof (long)) + 15) & ~15) + struct_size;

  return FFI_OK;
}
void
ffi_call(ffi_cif *cif,
  void (*fn)(void),
  void *rvalue,
  void **avalue)
{
  int ret_type = cif->flags;
  extended_cif ecif;

  ecif.cif = cif;
  ecif.avalue = avalue;
  ecif.rvalue = rvalue;


  if (rvalue == ((void*)0))
    {
      if (ret_type == 1)
 ecif.rvalue = __builtin_alloca (cif->rtype->size);
      else
 ret_type = 0;
    }

  switch (cif->abi)
    {
      case FFI_SYSV:
        ffi_call_SYSV (cif->bytes, &ecif, ffi_prep_args,
         ret_type, ecif.rvalue, fn);
        break;

      default:
                      ;
        break;
    }
}
void
ffi_closure_helper_SYSV (ffi_closure *closure,
    unsigned long *p_gpr,
    unsigned long long *p_fpr,
    unsigned long *p_ov)
{
  unsigned long long ret_buffer;

  void *rvalue = &ret_buffer;
  void **avalue;
  void **p_arg;

  int n_gpr = 0;
  int n_fpr = 0;
  int n_ov = 0;

  ffi_type **ptr;
  int i;



  p_arg = avalue = __builtin_alloca (closure->cif->nargs * sizeof (void *));





  if (closure->cif->flags == 1)
    rvalue = (void *) p_gpr[n_gpr++];



  for (ptr = closure->cif->arg_types, i = closure->cif->nargs;
       i > 0;
       i--, p_arg++, ptr++)
    {
      int deref_struct_pointer = 0;
      int type = (*ptr)->type;



      if (type == 4)
 type = 13;



      if (type == 13 || type == 15)
 {
   if (type == 15)
     type = 14;
   else
     type = ffi_check_struct_type (*ptr);



   if (type == 14)
     deref_struct_pointer = 1;
 }


      if (type == 14)



 type = 9;



      switch (type)
 {
   case 3:
     if (n_fpr < 2)
       *p_arg = &p_fpr[n_fpr++];
     else
       *p_arg = &p_ov[n_ov],
       n_ov += sizeof (double) / sizeof (long);
     break;

   case 2:
     if (n_fpr < 2)
       *p_arg = &p_fpr[n_fpr++];
     else
       *p_arg = (char *)&p_ov[n_ov++] + sizeof (long) - 4;
     break;

   case 11:
   case 12:






     if (n_gpr == 5 -1)
       n_gpr = 5;
     if (n_gpr < 5)
       *p_arg = &p_gpr[n_gpr], n_gpr += 2;
     else
       *p_arg = &p_ov[n_ov], n_ov += 2;

     break;

   case 1:
   case 9:
   case 10:
     if (n_gpr < 5)
       *p_arg = (char *)&p_gpr[n_gpr++] + sizeof (long) - 4;
     else
       *p_arg = (char *)&p_ov[n_ov++] + sizeof (long) - 4;
     break;

   case 7:
   case 8:
     if (n_gpr < 5)
       *p_arg = (char *)&p_gpr[n_gpr++] + sizeof (long) - 2;
     else
       *p_arg = (char *)&p_ov[n_ov++] + sizeof (long) - 2;
     break;

   case 5:
   case 6:
     if (n_gpr < 5)
       *p_arg = (char *)&p_gpr[n_gpr++] + sizeof (long) - 1;
     else
       *p_arg = (char *)&p_ov[n_ov++] + sizeof (long) - 1;
     break;

   default:
                   ;
     break;
        }



      if (deref_struct_pointer)
 *p_arg = *(void **)*p_arg;
    }



  (closure->fun) (closure->cif, rvalue, avalue, closure->user_data);


  switch (closure->cif->rtype->type)
    {

      case 0:
      case 13:
      case 15:

      case 4:

 break;


      case 2:
 p_fpr[0] = (long long) *(unsigned int *) rvalue << 32;
 break;

      case 3:
 p_fpr[0] = *(unsigned long long *) rvalue;
 break;



      case 11:
      case 12:



 p_gpr[0] = ((unsigned long *) rvalue)[0],
 p_gpr[1] = ((unsigned long *) rvalue)[1];

 break;

      case 14:
      case 9:
      case 7:
      case 5:
 p_gpr[0] = *(unsigned long *) rvalue;
 break;

      case 1:
      case 10:
      case 8:
      case 6:
 p_gpr[0] = *(signed long *) rvalue;
 break;

      default:
                      ;
        break;
    }
}
ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
        ffi_cif *cif,
        void (*fun) (ffi_cif *, void *, void **, void *),
        void *user_data,
        void *codeloc)
{
  if (cif->abi != FFI_SYSV)
    return FFI_BAD_ABI;


  *(short *)&closure->tramp [0] = 0x0d10;
  *(short *)&closure->tramp [2] = 0x9801;
  *(short *)&closure->tramp [4] = 0x1006;
  *(short *)&closure->tramp [6] = 0x07f1;
  *(long *)&closure->tramp [8] = (long)codeloc;
  *(long *)&closure->tramp[12] = (long)&ffi_closure_SYSV;
  closure->cif = cif;
  closure->user_data = user_data;
  closure->fun = fun;

  return FFI_OK;
}
