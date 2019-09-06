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





void ffi_prep_args_v8(char *stack, extended_cif *ecif)
{
  int i;
  void **p_argv;
  char *argp;
  ffi_type **p_arg;


  argp = stack + 16*sizeof(int);





  *(int *) argp = (long)ecif->rvalue;


  argp += sizeof(int);
  p_argv = ecif->avalue;

  for (i = ecif->cif->nargs, p_arg = ecif->cif->arg_types; i; i--, p_arg++)
    {
      size_t z;

   if ((*p_arg)->type == 13

       || (*p_arg)->type == 4

       )
     {
       *(unsigned int *) argp = (unsigned long)(* p_argv);
       z = sizeof(int);
     }
   else
     {
       z = (*p_arg)->size;
       if (z < sizeof(int))
  {
    z = sizeof(int);
    switch ((*p_arg)->type)
      {
      case 6:
        *(signed int *) argp = *(SINT8 *)(* p_argv);
        break;

      case 5:
        *(unsigned int *) argp = *(UINT8 *)(* p_argv);
        break;

      case 8:
        *(signed int *) argp = *(SINT16 *)(* p_argv);
        break;

      case 7:
        *(unsigned int *) argp = *(UINT16 *)(* p_argv);
        break;

      default:
                     ;
      }
  }
       else
  {
    memcpy(argp, *p_argv, z);
  }
     }
   p_argv++;
   argp += z;
    }

  return;
}

int ffi_prep_args_v9(char *stack, extended_cif *ecif)
{
  int i, ret = 0;
  int tmp;
  void **p_argv;
  char *argp;
  ffi_type **p_arg;

  tmp = 0;


  argp = stack + 16*sizeof(long long);
  p_argv = ecif->avalue;

  if (ecif->cif->rtype->type == 13 &&
      ecif->cif->rtype->size > 32)
    {
      *(unsigned long long *) argp = (unsigned long)ecif->rvalue;
      argp += sizeof(long long);
      tmp = 1;
    }

  for (i = 0, p_arg = ecif->cif->arg_types; i < ecif->cif->nargs;
       i++, p_arg++)
    {
      size_t z;

      z = (*p_arg)->size;
      switch ((*p_arg)->type)
 {
 case 13:
   if (z > 16)
     {

       *(unsigned long long *) argp = (unsigned long)* p_argv;
       argp += sizeof(long long);
       tmp++;
       p_argv++;
       continue;
     }

 case 2:
 case 3:

 case 4:

   ret = 1;
   break;
 }
      if (z < sizeof(long long))
 {
   switch ((*p_arg)->type)
     {
     case 6:
       *(signed long long *) argp = *(SINT8 *)(* p_argv);
       break;

     case 5:
       *(unsigned long long *) argp = *(UINT8 *)(* p_argv);
       break;

     case 8:
       *(signed long long *) argp = *(SINT16 *)(* p_argv);
       break;

     case 7:
       *(unsigned long long *) argp = *(UINT16 *)(* p_argv);
       break;

     case 10:
       *(signed long long *) argp = *(SINT32 *)(* p_argv);
       break;

     case 9:
       *(unsigned long long *) argp = *(UINT32 *)(* p_argv);
       break;

     case 2:
       *(float *) (argp + 4) = *(FLOAT32 *)(* p_argv);
       break;

     case 13:
       memcpy(argp, *p_argv, z);
       break;

     default:
                    ;
     }
   z = sizeof(long long);
   tmp++;
 }
      else if (z == sizeof(long long))
 {
   memcpy(argp, *p_argv, z);
   z = sizeof(long long);
   tmp++;
 }
      else
 {
   if ((tmp & 1) && (*p_arg)->alignment > 8)
     {
       tmp++;
       argp += sizeof(long long);
     }
   memcpy(argp, *p_argv, z);
   z = 2 * sizeof(long long);
   tmp += 2;
 }
      p_argv++;
      argp += z;
    }

  return ret;
}


ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
{
  int wordsize;

  if (cif->abi != FFI_V9)
    {
      wordsize = 4;




      if (cif->rtype->type != 13)
 cif->bytes += wordsize;




      if (cif->bytes < 4*6+4)
 cif->bytes = 4*6+4;
    }
  else
    {
      wordsize = 8;




      if (cif->bytes < 8*6)
 cif->bytes = 8*6;
    }




  cif->bytes += 16 * wordsize;




  cif->bytes = (((((size_t) (cif->bytes))-1) | ((2 * wordsize)-1))+1);


  switch (cif->rtype->type)
    {
    case 0:
    case 2:
    case 3:

    case 4:

      cif->flags = cif->rtype->type;
      break;

    case 13:
      if (cif->abi == FFI_V9 && cif->rtype->size > 32)
 cif->flags = 0;
      else
 cif->flags = 13;
      break;

    case 6:
    case 5:
    case 8:
    case 7:
      if (cif->abi == FFI_V9)
 cif->flags = 1;
      else
 cif->flags = cif->rtype->type;
      break;

    case 12:
    case 11:
      if (cif->abi == FFI_V9)
 cif->flags = 1;
      else
 cif->flags = 12;
      break;

    default:
      cif->flags = 1;
      break;
    }
  return FFI_OK;
}

int ffi_v9_layout_struct(ffi_type *arg, int off, char *ret, char *intg, char *flt)
{
  ffi_type **ptr = &arg->elements[0];

  while (*ptr != ((void*)0))
    {
      if (off & ((*ptr)->alignment - 1))
 off = (((((size_t) (off))-1) | (((*ptr)->alignment)-1))+1);

      switch ((*ptr)->type)
 {
 case 13:
   off = ffi_v9_layout_struct(*ptr, off, ret, intg, flt);
   off = (((((size_t) (off))-1) | ((8)-1))+1);
   break;
 case 2:
 case 3:

 case 4:

   memmove(ret + off, flt + off, (*ptr)->size);
   off += (*ptr)->size;
   break;
 default:
   memmove(ret + off, intg + off, (*ptr)->size);
   off += (*ptr)->size;
   break;
 }
      ptr++;
    }
  return off;
}






extern int ffi_call_v8(void *, extended_cif *, unsigned,
         unsigned, unsigned *, void (*fn)(void));






void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  extended_cif ecif;
  void *rval = rvalue;

  ecif.cif = cif;
  ecif.avalue = avalue;




  ecif.rvalue = rvalue;
  if (cif->rtype->type == 13)
    {
      if (cif->rtype->size <= 32)
 rval = __builtin_alloca (64);
      else
 {
   rval = ((void*)0);
   if (rvalue == ((void*)0))
     ecif.rvalue = __builtin_alloca (cif->rtype->size);
 }
    }

  switch (cif->abi)
    {
    case FFI_V8:




      if (rvalue && (cif->rtype->type == 13

   || cif->flags == 4

   ))
 {



   unsigned int *call_struct = ((void*)0);
   ffi_closure_alloc(32, (void **)&call_struct);
   if (call_struct)
     {
       unsigned long f = (unsigned long)fn;
       call_struct[0] = 0xae10001f;
       call_struct[1] = 0xbe10000f;
       call_struct[2] = 0x03000000 | f >> 10;
       call_struct[3] = 0x9fc06000 | (f & 0x3ff);
       call_struct[4] = 0x01000000;
       if (cif->rtype->size < 0x7f)
  call_struct[5] = cif->rtype->size;
       else
  call_struct[5] = 0x01000000;
       call_struct[6] = 0x81c7e008;
       call_struct[7] = 0xbe100017;

      ;

      ;



       ffi_call_v8(ffi_prep_args_v8, &ecif, cif->bytes,
     cif->flags, rvalue, call_struct);
       ffi_closure_free(call_struct);
     }
   else
     {
       ffi_call_v8(ffi_prep_args_v8, &ecif, cif->bytes,
     cif->flags, rvalue, fn);
     }
 }
      else
 {
   ffi_call_v8(ffi_prep_args_v8, &ecif, cif->bytes,
        cif->flags, rvalue, fn);
 }

      break;
    case FFI_V9:







                   ;

      break;
    default:
                   ;
      break;
    }
}





extern void ffi_closure_v8(void);


ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun)(ffi_cif*, void*, void**, void*),
        void *user_data,
        void *codeloc)
{
  unsigned int *tramp = (unsigned int *) &closure->tramp[0];
  unsigned long fn;
  unsigned long ctx = (unsigned long) codeloc;
  if (cif->abi != FFI_V8)
    return FFI_BAD_ABI;
  fn = (unsigned long) ffi_closure_v8;
  tramp[0] = 0x03000000 | fn >> 10;
  tramp[1] = 0x05000000 | ctx >> 10;
  tramp[2] = 0x81c06000 | (fn & 0x3ff);
  tramp[3] = 0x8410a000 | (ctx & 0x3ff);


  closure->cif = cif;
  closure->fun = fun;
  closure->user_data = user_data;






 ;

 ;





  return FFI_OK;
}

int
ffi_closure_sparc_inner_v8(ffi_closure *closure,
  void *rvalue, unsigned long *gpr, unsigned long *scratch)
{
  ffi_cif *cif;
  ffi_type **arg_types;
  void **avalue;
  int i, argn;

  cif = closure->cif;
  arg_types = cif->arg_types;
  avalue = __builtin_alloca (cif->nargs * sizeof(void *));



  if (cif->flags == 13

      || cif->flags == 4

     )
    rvalue = (void *) gpr[0];


  argn = 1;


  for (i = 0; i < cif->nargs; i++)
    {
      if (arg_types[i]->type == 13

   || arg_types[i]->type == 4

         )
 {

   avalue[i] = (void *)gpr[argn++];
 }
      else if ((arg_types[i]->type == 3
        || arg_types[i]->type == 12
        || arg_types[i]->type == 11)

        && (argn % 2) != 0)
 {

   scratch[0] = gpr[argn];
   scratch[1] = gpr[argn+1];
   avalue[i] = scratch;
   scratch -= 2;
   argn += 2;
 }
      else
 {

   argn += (((((size_t) (arg_types[i]->size))-1) | ((8)-1))+1) / 8;
   avalue[i] = ((char *) &gpr[argn]) - arg_types[i]->size;
 }
    }


  (closure->fun) (cif, rvalue, avalue, closure->user_data);


  return cif->rtype->type;
}

int
ffi_closure_sparc_inner_v9(ffi_closure *closure,
  void *rvalue, unsigned long *gpr, double *fpr)
{
  ffi_cif *cif;
  ffi_type **arg_types;
  void **avalue;
  int i, argn, fp_slot_max;

  cif = closure->cif;
  arg_types = cif->arg_types;
  avalue = __builtin_alloca (cif->nargs * sizeof(void *));



  if (cif->flags == 0
      && cif->rtype->type == 13)
    {
      rvalue = (void *) gpr[0];

      argn = 1;
    }
  else
    argn = 0;

  fp_slot_max = 16 - argn;


  for (i = 0; i < cif->nargs; i++)
    {
      if (arg_types[i]->type == 13)
 {
   if (arg_types[i]->size > 16)
     {

       avalue[i] = (void *)gpr[argn++];
     }
   else
     {

       ffi_v9_layout_struct(arg_types[i],
       0,
       (char *) &gpr[argn],
       (char *) &gpr[argn],
       (char *) &fpr[argn]);
       avalue[i] = &gpr[argn];
       argn += (((((size_t) (arg_types[i]->size))-1) | ((8)-1))+1) / 8;
     }
 }
      else
 {

   argn += (((((size_t) (arg_types[i]->size))-1) | ((8)-1))+1) / 8;



   if (arg_types[i]->type == 4 && (argn % 2) != 0)
     argn++;

   if (i < fp_slot_max
       && (arg_types[i]->type == 2
    || arg_types[i]->type == 3

    || arg_types[i]->type == 4

    ))
     avalue[i] = ((char *) &fpr[argn]) - arg_types[i]->size;
   else
     avalue[i] = ((char *) &gpr[argn]) - arg_types[i]->size;
 }
    }


  (closure->fun) (cif, rvalue, avalue, closure->user_data);


  return cif->rtype->type;
}
