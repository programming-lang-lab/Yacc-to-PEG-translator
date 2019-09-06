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








unsigned int ffi_prep_args(char *stack, extended_cif *ecif)
{
 register unsigned int i;
 register void **p_argv;
 register char *argp;
 register ffi_type **p_arg;

 argp = stack;


 if ( ecif->cif->flags == 13 ) {
  argp -= 4;
  *(void **) argp = ecif->rvalue;
 }

 p_argv = ecif->avalue;


 for (i = ecif->cif->nargs, p_arg = ecif->cif->arg_types; (i != 0); i--, p_arg++, p_argv++)
 {
  size_t z;


  z = (*p_arg)->size;
  argp -= z;


  argp = (char *) (((size_t) ((((size_t) (argp)) & -(*p_arg)->alignment))) & -4);

  if (z < sizeof(int)) {
   z = sizeof(int);
   switch ((*p_arg)->type)
   {
   case 6:
    *(signed int *) argp = (signed int)*(SINT8 *)(* p_argv);
    break;
   case 5:
    *(unsigned int *) argp = (unsigned int)*(UINT8 *)(* p_argv);
    break;
   case 8:
    *(signed int *) argp = (signed int)*(SINT16 *)(* p_argv);
    break;
   case 7:
    *(unsigned int *) argp = (unsigned int)*(UINT16 *)(* p_argv);
   case 13:
    memcpy(argp, *p_argv, (*p_arg)->size);
    break;
   default:
                 ;
   }
  } else if ( z == sizeof(int)) {
   *(unsigned int *) argp = (unsigned int)*(UINT32 *)(* p_argv);
  } else {
   memcpy(argp, *p_argv, z);
  }
 }



 return (((((size_t) ((((stack - argp) < (6*4)) ? (stack - argp) : (6*4))))-1) | ((8)-1))+1);
}


ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
{
 ffi_type **ptr;
 unsigned i, bytes = 0;

 for (ptr = cif->arg_types, i = cif->nargs; i > 0; i--, ptr++) {
  if ((*ptr)->size == 0)
   return FFI_BAD_TYPEDEF;



                             ;


  if (((*ptr)->alignment - 1) & bytes)
   bytes = (((((size_t) (bytes))-1) | (((*ptr)->alignment)-1))+1);

  bytes += (((((size_t) ((*ptr)->size))-1) | ((4)-1))+1);
 }


 bytes = (((((size_t) (bytes))-1) | ((8)-1))+1);


 if (cif->rtype->type == 13) {
  bytes += sizeof(void*);


  bytes = (((((size_t) (bytes))-1) | ((8)-1))+1);
 }

 cif->bytes = bytes;


 switch (cif->rtype->type) {
 case 0:
 case 2:
 case 3:
  cif->flags = (unsigned) cif->rtype->type;
  break;
 case 12:
 case 11:
  cif->flags = (unsigned) 12;
  break;
 case 13:

  if (cif->rtype->size <= 4)

   cif->flags = (unsigned)1;
  else if ((cif->rtype->size > 4) && (cif->rtype->size <= 8))

   cif->flags = (unsigned)3;
  else

   cif->flags = (unsigned)13;
  break;
 default:
  cif->flags = (unsigned)1;
  break;
 }
 return FFI_OK;
}

extern void ffi_call_SYSV(void (*fn)(void), extended_cif *, unsigned, unsigned, double *);
void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
 extended_cif ecif;

 int small_struct = (((cif->flags == 1) || (cif->flags == 3)) && (cif->rtype->type == 13));
 ecif.cif = cif;
 ecif.avalue = avalue;

 double temp;






 if ((rvalue == ((void*)0) ) && (cif->flags == 13))
  ecif.rvalue = __builtin_alloca (cif->rtype->size);
 else if (small_struct)
  ecif.rvalue = &temp;
 else
  ecif.rvalue = rvalue;

 switch (cif->abi) {
 case FFI_SYSV:
  ffi_call_SYSV(fn, &ecif, cif->bytes, cif->flags, ecif.rvalue);
  break;
 default:
               ;
  break;
 }

 if (small_struct)
  memcpy (rvalue, &temp, cif->rtype->size);
}



static void ffi_prep_incoming_args_SYSV (char *, void **, void **,
 ffi_cif*, float *);

void ffi_closure_SYSV (ffi_closure *);


extern unsigned int ffi_metag_trampoline[10];
void ffi_init_trampoline(unsigned char *__tramp, unsigned int __fun, unsigned int __ctx) {
 memcpy (__tramp, ffi_metag_trampoline, sizeof(ffi_metag_trampoline));
 *(unsigned int*) &__tramp[40] = __ctx;
 *(unsigned int*) &__tramp[44] = __fun;

 __builtin_meta2_cachewd(&__tramp[0], 1);
 __builtin_meta2_cachewd(&__tramp[47], 1);
}





ffi_status
ffi_prep_closure_loc (ffi_closure *closure,
 ffi_cif* cif,
 void (*fun)(ffi_cif*,void*,void**,void*),
 void *user_data,
 void *codeloc)
{
 void (*closure_func)(ffi_closure*) = ((void*)0);

 if (cif->abi == FFI_SYSV)
  closure_func = &ffi_closure_SYSV;
 else
  return FFI_BAD_ABI;

 ffi_init_trampoline(
  (unsigned char*)&closure->tramp[0],
  (unsigned int)closure_func,
  (unsigned int)codeloc);

 closure->cif = cif;
 closure->user_data = user_data;
 closure->fun = fun;

 return FFI_OK;
}



unsigned int ffi_closure_SYSV_inner (closure, respp, args, vfp_args)
 ffi_closure *closure;
 void **respp;
 void *args;
 void *vfp_args;
{
 ffi_cif *cif;
 void **arg_area;

 cif = closure->cif;
 arg_area = (void**) __builtin_alloca (cif->nargs * sizeof (void*));
 ffi_prep_incoming_args_SYSV(args, respp, arg_area, cif, vfp_args);

 (closure->fun) ( cif, *respp, arg_area, closure->user_data);

 return cif->flags;
}

static void ffi_prep_incoming_args_SYSV(char *stack, void **rvalue,
 void **avalue, ffi_cif *cif,
 float *vfp_stack)
{
 register unsigned int i;
 register void **p_argv;
 register char *argp;
 register ffi_type **p_arg;


 argp = stack;


 if ( cif->flags == 13 ) {
  argp -= 4;
  *rvalue = *(void **) argp;
 }

 p_argv = avalue;

 for (i = cif->nargs, p_arg = cif->arg_types; (i != 0); i--, p_arg++) {
  size_t z;
  size_t alignment;

  alignment = (*p_arg)->alignment;
  if (alignment < 4)
   alignment = 4;
  if ((alignment - 1) & (unsigned)argp)
   argp = (char *) (((((size_t) (argp))-1) | ((alignment)-1))+1);

  z = (*p_arg)->size;
  *p_argv = (void*) argp;
  p_argv++;
  argp -= z;
 }
 return;
}
