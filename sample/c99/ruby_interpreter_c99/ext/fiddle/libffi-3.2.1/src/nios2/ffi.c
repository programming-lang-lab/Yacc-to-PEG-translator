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
extern UINT64 ffi_call_sysv (void (*) (char *, extended_cif *),
        extended_cif *,
        unsigned,
        void (*fn) (void));
extern void ffi_closure_sysv (void);



ffi_status ffi_prep_cif_machdep (ffi_cif *cif)
{




  if (cif->bytes < 16)
    cif->bytes = 16;
  else
    cif->bytes = (cif->bytes + 3) & ~3;

  return FFI_OK;
}
void ffi_prep_args (char *stack, extended_cif *ecif)
{
  char *argp = stack;
  unsigned int i;



  if (ecif->cif->rtype->type == 13
      && ecif->cif->rtype->size > 8)
    {
      (*(void **) argp) = ecif->rvalue;
      argp += 4;
    }

  for (i = 0; i < ecif->cif->nargs; i++)
    {
      void *avalue = ecif->avalue[i];
      ffi_type *atype = ecif->cif->arg_types[i];
      size_t size = atype->size;
      size_t alignment = atype->alignment;


      if ((alignment - 1) & (unsigned) argp)
 argp = (char *) (((((size_t) (argp))-1) | ((alignment)-1))+1);



      if (size < sizeof (int))
 {
   size = sizeof (int);
   switch (atype->type)
     {
     case 6:
       *(signed int *) argp = (signed int) *(SINT8 *) avalue;
       break;

     case 5:
       *(unsigned int *) argp = (unsigned int) *(UINT8 *) avalue;
       break;

     case 8:
       *(signed int *) argp = (signed int) *(SINT16 *) avalue;
       break;

     case 7:
       *(unsigned int *) argp = (unsigned int) *(UINT16 *) avalue;
       break;

     case 13:
       memcpy (argp, avalue, atype->size);
       break;

     default:
                    ;
     }
 }
      else if (size == sizeof (int))
 *(unsigned int *) argp = (unsigned int) *(UINT32 *) avalue;
      else
 memcpy (argp, avalue, size);
      argp += size;
    }
}






void ffi_call (ffi_cif *cif, void (*fn) (void), void *rvalue, void **avalue)
{

  extended_cif ecif;
  UINT64 result;




  int bigret = (cif->rtype->type == 13
  && cif->rtype->size > 8);

  ecif.cif = cif;
  ecif.avalue = avalue;



  if (rvalue == ((void*)0) && bigret)
    ecif.rvalue = __builtin_alloca (cif->rtype->size);
  else
    ecif.rvalue = rvalue;

  result = ffi_call_sysv (ffi_prep_args, &ecif, cif->bytes, fn);




  if (rvalue && !bigret)
    switch (cif->rtype->size)
      {
      case 1:
 *(UINT8 *)rvalue = (UINT8) result;
 break;
      case 2:
 *(UINT16 *)rvalue = (UINT16) result;
 break;
      case 4:
 *(UINT32 *)rvalue = (UINT32) result;
 break;
      case 8:
 *(UINT64 *)rvalue = (UINT64) result;
 break;
      default:
 memcpy (rvalue, (void *)&result, cif->rtype->size);
 break;
      }
}





static UINT64
ffi_closure_helper (unsigned char *args,
      ffi_closure *closure)
{
  ffi_cif *cif = closure->cif;
  unsigned char *argp = args;
  void **parsed_args = __builtin_alloca (cif->nargs * sizeof (void *));
  UINT64 result;
  void *retptr;
  unsigned int i;




  if (cif->rtype->type == 13
      && cif->rtype->size > 8)
    {
      retptr = *((void **) argp);
      argp += 4;
    }
  else
    retptr = (void *) &result;


  for (i = 0; i < cif->nargs; i++)
    {
      size_t size = cif->arg_types[i]->size;
      size_t alignment = cif->arg_types[i]->alignment;


      if ((alignment - 1) & (unsigned) argp)
 argp = (char *) (((((size_t) (argp))-1) | ((alignment)-1))+1);


      if (size < sizeof (int))
 size = sizeof (int);


      parsed_args[i] = argp;
      argp += size;
    }


  (closure->fun) (cif, retptr, parsed_args, closure->user_data);
  return result;
}




ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun) (ffi_cif*, void*, void**, void*),
        void *user_data,
        void *codeloc)
{
  unsigned int *tramp = (unsigned int *) &closure->tramp[0];
  int i;

  if (cif->abi != FFI_SYSV)
    return FFI_BAD_ABI;
  tramp[0] = (0 << 27) | (8 << 22) | (((((unsigned int) (ffi_closure_sysv)) >> 16) & 0xffff) << 6) | 0x34;
  tramp[1] = (8 << 27) | (8 << 22) | ((((unsigned int) (ffi_closure_sysv)) & 0xffff) << 6) | 0x14;
  tramp[2] = (0 << 27) | (9 << 22) | (((((unsigned int) (ffi_closure_helper)) >> 16) & 0xffff) << 6) | 0x34;
  tramp[3] = (9 << 27) | (9 << 22) | ((((unsigned int) (ffi_closure_helper)) & 0xffff) << 6) | 0x14;
  tramp[4] = (0 << 27) | (10 << 22) | (((((unsigned int) (closure)) >> 16) & 0xffff) << 6) | 0x34;
  tramp[5] = (10 << 27) | (10 << 22) | ((((unsigned int) (closure)) & 0xffff) << 6) | 0x14;
  tramp[6] = (8 << 27) | (0x0d << 11) | 0x3a;





  for (i = 0; i < 7; i++)
   ;
 ;

  closure->cif = cif;
  closure->fun = fun;
  closure->user_data = user_data;

  return FFI_OK;
}
