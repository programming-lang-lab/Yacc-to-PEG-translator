




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
union _d
{
  UINT64 d;
  UINT32 s[2];
};

struct call_context
{
  UINT64 x [AARCH64_N_XREG];
  struct
  {
    union _d d[2];
  } v [AARCH64_N_VREG];
};






static inline void
ffi_clear_cache (void *start, void *end)
{



 __builtin___clear_cache (start, end);



}

static void *
get_x_addr (struct call_context *context, unsigned n)
{
  return &context->x[n];
}

static void *
get_s_addr (struct call_context *context, unsigned n)
{



  return &context->v[n].d[0].s[0];

}

static void *
get_d_addr (struct call_context *context, unsigned n)
{



  return &context->v[n].d[0];

}

static void *
get_v_addr (struct call_context *context, unsigned n)
{
  return &context->v[n];
}




static void *
get_basic_type_addr (unsigned short type, struct call_context *context,
       unsigned n)
{
  switch (type)
    {
    case 2:
      return get_s_addr (context, n);
    case 3:
      return get_d_addr (context, n);

    case 4:
      return get_v_addr (context, n);

    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 1:
    case 14:
    case 11:
    case 12:
      return get_x_addr (context, n);
    case 0:
      return ((void*)0);
    default:
                    ;
      return ((void*)0);
    }
}



static size_t
get_basic_type_alignment (unsigned short type)
{
  switch (type)
    {
    case 2:



    case 3:
      return sizeof (UINT64);

    case 4:
      return sizeof (long double);

    case 5:
    case 6:



    case 7:
    case 8:



    case 9:
    case 1:
    case 10:



    case 14:
    case 11:
    case 12:
      return sizeof (UINT64);

    default:
                    ;
      return 0;
    }
}



static size_t
get_basic_type_size (unsigned short type)
{
  switch (type)
    {
    case 2:
      return sizeof (UINT32);
    case 3:
      return sizeof (UINT64);

    case 4:
      return sizeof (long double);

    case 5:
      return sizeof (UINT8);
    case 6:
      return sizeof (SINT8);
    case 7:
      return sizeof (UINT16);
    case 8:
      return sizeof (SINT16);
    case 9:
      return sizeof (UINT32);
    case 1:
    case 10:
      return sizeof (SINT32);
    case 14:
    case 11:
      return sizeof (UINT64);
    case 12:
      return sizeof (SINT64);

    default:
                    ;
      return 0;
    }
}

extern void
ffi_call_SYSV (unsigned (*)(struct call_context *context, unsigned char *,
       extended_cif *),
               struct call_context *context,
               extended_cif *,
               size_t,
               void (*fn)(void));

extern void
ffi_closure_SYSV (ffi_closure *);



static unsigned
is_floating_type (unsigned short type)
{
  return (type == 2 || type == 3
   || type == 4);
}



static unsigned short
get_homogeneous_type (ffi_type *ty)
{
  if (ty->type == 13 && ty->elements)
    {
      unsigned i;
      unsigned short candidate_type
 = get_homogeneous_type (ty->elements[0]);
      for (i =1; ty->elements[i]; i++)
 {
   unsigned short iteration_type = 0;



   if (ty->elements[i]->type == 13
       && ty->elements[i]->elements)
     {
       iteration_type = get_homogeneous_type (ty->elements[i]);
     }
   else
     {
       iteration_type = ty->elements[i]->type;
     }


   if (candidate_type != iteration_type)
     return 13;
 }
      return candidate_type;
    }



  return ty->type;
}







static unsigned
element_count (ffi_type *ty)
{
  if (ty->type == 13 && ty->elements)
    {
      unsigned n;
      unsigned elems = 0;
      for (n = 0; ty->elements[n]; n++)
 {
   if (ty->elements[n]->type == 13
       && ty->elements[n]->elements)
     elems += element_count (ty->elements[n]);
   else
     elems++;
 }
      return elems;
    }
  return 0;
}
static int
is_hfa (ffi_type *ty)
{
  if (ty->type == 13
      && ty->elements[0]
      && is_floating_type (get_homogeneous_type (ty)))
    {
      unsigned n = element_count (ty);
      return n >= 1 && n <= 4;
    }
  return 0;
}
static int
is_register_candidate (ffi_type *ty)
{
  switch (ty->type)
    {
    case 0:
    case 2:
    case 3:

    case 4:

    case 5:
    case 7:
    case 9:
    case 11:
    case 14:
    case 6:
    case 8:
    case 10:
    case 1:
    case 12:
      return 1;

    case 13:
      if (is_hfa (ty))
        {
          return 1;
        }
      else if (ty->size > 16)
        {




          return 0;
        }
      else
        {


          return (ty->size + 7) / 8 < 8;
        }
      break;

    default:
                    ;
      break;
    }

  return 0;
}




static int
is_v_register_candidate (ffi_type *ty)
{
  return is_floating_type (ty->type)
    || (ty->type == 13 && is_hfa (ty));
}







struct arg_state
{
  unsigned ngrn;
  unsigned nsrn;
  size_t nsaa;




};


static void
arg_init (struct arg_state *state, size_t call_frame_size)
{
  state->ngrn = 0;
  state->nsrn = 0;
  state->nsaa = 0;




}




static unsigned
available_x (struct arg_state *state)
{
  return 8 - state->ngrn;
}




static unsigned
available_v (struct arg_state *state)
{
  return 8 - state->nsrn;
}

static void *
allocate_to_x (struct call_context *context, struct arg_state *state)
{
                                        ;
  return get_x_addr (context, (state->ngrn)++);
}

static void *
allocate_to_s (struct call_context *context, struct arg_state *state)
{
                                        ;
  return get_s_addr (context, (state->nsrn)++);
}

static void *
allocate_to_d (struct call_context *context, struct arg_state *state)
{
                                        ;
  return get_d_addr (context, (state->nsrn)++);
}

static void *
allocate_to_v (struct call_context *context, struct arg_state *state)
{
                                        ;
  return get_v_addr (context, (state->nsrn)++);
}


static void *
allocate_to_stack (struct arg_state *state, void *stack, size_t alignment,
     size_t size)
{
  void *allocation;



  state->nsaa = (((((size_t) (state->nsaa))-1) | ((alignment)-1))+1);
  state->nsaa = (((((size_t) (state->nsaa))-1) | ((alignment)-1))+1);




  state->nsaa = (((((size_t) (state->nsaa))-1) | ((8)-1))+1);


  allocation = stack + state->nsaa;

  state->nsaa += size;
  return allocation;
}

static void
copy_basic_type (void *dest, void *source, unsigned short type)
{


  switch (type)
    {
    case 2:
      *(float *) dest = *(float *) source;
      break;
    case 3:
      *(double *) dest = *(double *) source;
      break;

    case 4:
      *(long double *) dest = *(long double *) source;
      break;

    case 5:
      *(ffi_arg *) dest = *(UINT8 *) source;
      break;
    case 6:
      *(ffi_sarg *) dest = *(SINT8 *) source;
      break;
    case 7:
      *(ffi_arg *) dest = *(UINT16 *) source;
      break;
    case 8:
      *(ffi_sarg *) dest = *(SINT16 *) source;
      break;
    case 9:
      *(ffi_arg *) dest = *(UINT32 *) source;
      break;
    case 1:
    case 10:
      *(ffi_sarg *) dest = *(SINT32 *) source;
      break;
    case 14:
    case 11:
      *(ffi_arg *) dest = *(UINT64 *) source;
      break;
    case 12:
      *(ffi_sarg *) dest = *(SINT64 *) source;
      break;
    case 0:
      break;

    default:
                    ;
    }
}

static void
copy_hfa_to_reg_or_stack (void *memory,
     ffi_type *ty,
     struct call_context *context,
     unsigned char *stack,
     struct arg_state *state)
{
  unsigned elems = element_count (ty);
  if (available_v (state) < elems)
    {



      state->nsrn = 8;
      memcpy (allocate_to_stack (state, stack, ty->alignment, ty->size),
       memory,
       ty->size);
    }
  else
    {
      int i;
      unsigned short type = get_homogeneous_type (ty);
      for (i = 0; i < elems; i++)
 {
   void *reg = allocate_to_v (context, state);
   copy_basic_type (reg, memory, type);
   memory += get_basic_type_size (type);
 }
    }
}





static void *
allocate_to_register_or_stack (struct call_context *context,
          unsigned char *stack,
          struct arg_state *state,
          unsigned short type)
{
  size_t alignment = get_basic_type_alignment (type);
  size_t size = alignment;
  switch (type)
    {
    case 2:


      size = sizeof (UINT32);

    case 3:
      if (state->nsrn < 8)
 return allocate_to_d (context, state);
      state->nsrn = 8;
      break;

    case 4:
      if (state->nsrn < 8)
 return allocate_to_v (context, state);
      state->nsrn = 8;
      break;

    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 1:
    case 14:
    case 11:
    case 12:
      if (state->ngrn < 8)
 return allocate_to_x (context, state);
      state->ngrn = 8;
      break;
    default:
                    ;
    }

    return allocate_to_stack (state, stack, alignment, size);
}




static void
copy_to_register_or_stack (struct call_context *context,
      unsigned char *stack,
      struct arg_state *state,
      void *value,
      unsigned short type)
{
  copy_basic_type (
   allocate_to_register_or_stack (context, stack, state, type),
   value,
   type);
}




static unsigned
aarch64_prep_args (struct call_context *context, unsigned char *stack,
     extended_cif *ecif)
{
  int i;
  struct arg_state state;

  arg_init (&state, (((((size_t) (ecif->cif->bytes))-1) | ((16)-1))+1));

  for (i = 0; i < ecif->cif->nargs; i++)
    {
      ffi_type *ty = ecif->cif->arg_types[i];
      switch (ty->type)
 {
 case 0:
                 ;
   break;



 case 2:
 case 3:

 case 4:

 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
 case 1:
 case 10:
 case 14:
 case 11:
 case 12:
   copy_to_register_or_stack (context, stack, &state,
         ecif->avalue[i], ty->type);
   break;

 case 13:
   if (is_hfa (ty))
     {
       copy_hfa_to_reg_or_stack (ecif->avalue[i], ty, context,
     stack, &state);
     }
   else if (ty->size > 16)
     {




       copy_to_register_or_stack (context, stack, &state,
      &(ecif->avalue[i]), 14);
     }
   else if (available_x (&state) >= (ty->size + 7) / 8)
     {




       int j;
       for (j = 0; j < (ty->size + 7) / 8; j++)
  {
    memcpy (allocate_to_x (context, &state),
     &(((UINT64 *) ecif->avalue[i])[j]),
     sizeof (UINT64));
  }
     }
   else
     {




       state.ngrn = 8;

       memcpy (allocate_to_stack (&state, stack, ty->alignment,
      ty->size), ecif->avalue + i, ty->size);
     }
   break;

 default:
                 ;
   break;
 }
    }

  return ecif->cif->aarch64_flags;
}

ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
{

  cif->bytes =
    (cif->bytes + (16 - 1)) & ~ (16 - 1);





  cif->aarch64_flags = 0;

  if (is_v_register_candidate (cif->rtype))
    {
      cif->aarch64_flags |= (1 << AARCH64_FFI_WITH_V_BIT);
    }
  else
    {
      int i;
      for (i = 0; i < cif->nargs; i++)
        if (is_v_register_candidate (cif->arg_types[i]))
          {
            cif->aarch64_flags |= (1 << AARCH64_FFI_WITH_V_BIT);
            break;
          }
    }





  return FFI_OK;
}
void
ffi_call (ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  extended_cif ecif;

  ecif.cif = cif;
  ecif.avalue = avalue;
  ecif.rvalue = rvalue;

  switch (cif->abi)
    {
    case FFI_SYSV:
      {
        struct call_context context;
 size_t stack_bytes;





 stack_bytes = (((((size_t) (cif->bytes))-1) | ((16)-1))+1);

 memset (&context, 0, sizeof (context));
        if (is_register_candidate (cif->rtype))
          {
            ffi_call_SYSV (aarch64_prep_args, &context, &ecif, stack_bytes, fn);
            switch (cif->rtype->type)
              {
              case 0:
              case 2:
              case 3:

              case 4:

              case 5:
              case 6:
              case 7:
              case 8:
              case 9:
              case 10:
              case 14:
              case 11:
              case 1:
              case 12:
  {
    void *addr = get_basic_type_addr (cif->rtype->type,
          &context, 0);
    copy_basic_type (rvalue, addr, cif->rtype->type);
    break;
  }

              case 13:
                if (is_hfa (cif->rtype))
    {
      int j;
      unsigned short type = get_homogeneous_type (cif->rtype);
      unsigned elems = element_count (cif->rtype);
      for (j = 0; j < elems; j++)
        {
   void *reg = get_basic_type_addr (type, &context, j);
   copy_basic_type (rvalue, reg, type);
   rvalue += get_basic_type_size (type);
        }
    }
                else if ((cif->rtype->size + 7) / 8 < 8)
                  {
                    size_t size = (((((size_t) (cif->rtype->size))-1) | ((sizeof (UINT64))-1))+1);
                    memcpy (rvalue, get_x_addr (&context, 0), size);
                  }
                else
                  {
                                  ;
                  }
                break;

              default:
                              ;
                break;
              }
          }
        else
          {
            memcpy (get_x_addr (&context, 8), &rvalue, sizeof (UINT64));
            ffi_call_SYSV (aarch64_prep_args, &context, &ecif,
      stack_bytes, fn);
          }
        break;
      }

    default:
                    ;
      break;
    }
}

static unsigned char trampoline [] =
{ 0x70, 0x00, 0x00, 0x58,
  0x91, 0x00, 0x00, 0x10,
  0x00, 0x02, 0x1f, 0xd6
};
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
                      ffi_cif* cif,
                      void (*fun)(ffi_cif*,void*,void**,void*),
                      void *user_data,
                      void *codeloc)
{
  if (cif->abi != FFI_SYSV)
    return FFI_BAD_ABI;

  ({unsigned char *__tramp = (unsigned char*)(&closure->tramp[0]); UINT64 __fun = (UINT64)(&ffi_closure_SYSV); UINT64 __ctx = (UINT64)(codeloc); UINT64 __flags = (UINT64)(cif->aarch64_flags); memcpy (__tramp, trampoline, sizeof (trampoline)); memcpy (__tramp + 12, &__fun, sizeof (__fun)); memcpy (__tramp + 20, &__ctx, sizeof (__ctx)); memcpy (__tramp + 28, &__flags, sizeof (__flags)); ffi_clear_cache(__tramp, __tramp + 24); });


  closure->cif = cif;
  closure->user_data = user_data;
  closure->fun = fun;

  return FFI_OK;
}
void 
ffi_closure_SYSV_inner (ffi_closure *closure, struct call_context *context,
   void *stack)
{
  ffi_cif *cif = closure->cif;
  void **avalue = (void**) __builtin_alloca (cif->nargs * sizeof (void*));
  void *rvalue = ((void*)0);
  int i;
  struct arg_state state;

  arg_init (&state, (((((size_t) (cif->bytes))-1) | ((16)-1))+1));

  for (i = 0; i < cif->nargs; i++)
    {
      ffi_type *ty = cif->arg_types[i];

      switch (ty->type)
 {
 case 0:
                 ;
   break;

 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
 case 10:
 case 1:
 case 14:
 case 11:
 case 12:
 case 2:
 case 3:

 case 4:
   avalue[i] = allocate_to_register_or_stack (context, stack,
           &state, ty->type);
   break;


 case 13:
   if (is_hfa (ty))
     {
       unsigned n = element_count (ty);
       if (available_v (&state) < n)
  {
    state.nsrn = 8;
    avalue[i] = allocate_to_stack (&state, stack, ty->alignment,
       ty->size);
  }
       else
  {
    switch (get_homogeneous_type (ty))
      {
      case 2:
        {
   int j;
   UINT32 *p = avalue[i] = __builtin_alloca (ty->size);
   for (j = 0; j < element_count (ty); j++)
     memcpy (&p[j],
      allocate_to_s (context, &state),
      sizeof (*p));
   break;
        }

      case 3:
        {
   int j;
   UINT64 *p = avalue[i] = __builtin_alloca (ty->size);
   for (j = 0; j < element_count (ty); j++)
     memcpy (&p[j],
      allocate_to_d (context, &state),
      sizeof (*p));
   break;
        }


      case 4:
     memcpy (&avalue[i],
      allocate_to_v (context, &state),
      sizeof (*avalue));
        break;


      default:
                      ;
        break;
      }
  }
     }
   else if (ty->size > 16)
     {


       memcpy (&avalue[i],
        allocate_to_register_or_stack (context, stack,
           &state, 14),
        sizeof (avalue[i]));
     }
   else if (available_x (&state) >= (ty->size + 7) / 8)
     {
       avalue[i] = get_x_addr (context, state.ngrn);
       state.ngrn += (ty->size + 7) / 8;
     }
   else
     {
       state.ngrn = 8;

       avalue[i] = allocate_to_stack (&state, stack, ty->alignment,
          ty->size);
     }
   break;

 default:
                 ;
   break;
 }
    }





  if (is_register_candidate (cif->rtype))
    {






      rvalue = __builtin_alloca (cif->rtype->size);
      (closure->fun) (cif, rvalue, avalue, closure->user_data);



      switch (cif->rtype->type)
        {
        case 0:
          break;

        case 5:
        case 7:
        case 9:
        case 14:
        case 11:
        case 6:
        case 8:
        case 1:
        case 10:
        case 12:
        case 2:
        case 3:

        case 4:

   {
     void *addr = get_basic_type_addr (cif->rtype->type, context, 0);
     copy_basic_type (addr, rvalue, cif->rtype->type);
            break;
   }
        case 13:
          if (is_hfa (cif->rtype))
     {
       int j;
       unsigned short type = get_homogeneous_type (cif->rtype);
       unsigned elems = element_count (cif->rtype);
       for (j = 0; j < elems; j++)
  {
    void *reg = get_basic_type_addr (type, context, j);
    copy_basic_type (reg, rvalue, type);
    rvalue += get_basic_type_size (type);
  }
     }
          else if ((cif->rtype->size + 7) / 8 < 8)
            {
              size_t size = (((((size_t) (cif->rtype->size))-1) | ((sizeof (UINT64))-1))+1) ;
              memcpy (get_x_addr (context, 0), rvalue, size);
            }
          else
            {
                            ;
            }
          break;
        default:
                        ;
          break;
        }
    }
  else
    {
      memcpy (&rvalue, get_x_addr (context, 8), sizeof (UINT64));
      (closure->fun) (cif, rvalue, avalue, closure->user_data);
    }
}
