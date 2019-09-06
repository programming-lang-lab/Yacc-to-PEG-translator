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
typedef char* va_list;
typedef char* __gnuc_va_list;
union big_int_union
{
  UINT32 i32;
  UINT64 i64;
  int i128;
};

struct register_args
{

  UINT64 gpr[6];
  union big_int_union sse[8];
};

extern void ffi_call_unix64 (void *args, unsigned long bytes, unsigned flags,
        void *raddr, void (*fnaddr)(void), unsigned ssecount);
enum x86_64_reg_class
  {
    X86_64_NO_CLASS,
    X86_64_INTEGER_CLASS,
    X86_64_INTEGERSI_CLASS,
    X86_64_SSE_CLASS,
    X86_64_SSESF_CLASS,
    X86_64_SSEDF_CLASS,
    X86_64_SSEUP_CLASS,
    X86_64_X87_CLASS,
    X86_64_X87UP_CLASS,
    X86_64_COMPLEX_X87_CLASS,
    X86_64_MEMORY_CLASS
  };
static enum x86_64_reg_class
merge_classes (enum x86_64_reg_class class1, enum x86_64_reg_class class2)
{

  if (class1 == class2)
    return class1;



  if (class1 == X86_64_NO_CLASS)
    return class2;
  if (class2 == X86_64_NO_CLASS)
    return class1;


  if (class1 == X86_64_MEMORY_CLASS || class2 == X86_64_MEMORY_CLASS)
    return X86_64_MEMORY_CLASS;


  if ((class1 == X86_64_INTEGERSI_CLASS && class2 == X86_64_SSESF_CLASS)
      || (class2 == X86_64_INTEGERSI_CLASS && class1 == X86_64_SSESF_CLASS))
    return X86_64_INTEGERSI_CLASS;
  if (class1 == X86_64_INTEGER_CLASS || class1 == X86_64_INTEGERSI_CLASS
      || class2 == X86_64_INTEGER_CLASS || class2 == X86_64_INTEGERSI_CLASS)
    return X86_64_INTEGER_CLASS;



  if (class1 == X86_64_X87_CLASS
      || class1 == X86_64_X87UP_CLASS
      || class1 == X86_64_COMPLEX_X87_CLASS
      || class2 == X86_64_X87_CLASS
      || class2 == X86_64_X87UP_CLASS
      || class2 == X86_64_COMPLEX_X87_CLASS)
    return X86_64_MEMORY_CLASS;


  return X86_64_SSE_CLASS;
}
static size_t
classify_argument (ffi_type *type, enum x86_64_reg_class classes[],
     size_t byte_offset)
{
  switch (type->type)
    {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
      {
 size_t size = byte_offset + type->size;

 if (size <= 4)
   {
     classes[0] = X86_64_INTEGERSI_CLASS;
     return 1;
   }
 else if (size <= 8)
   {
     classes[0] = X86_64_INTEGER_CLASS;
     return 1;
   }
 else if (size <= 12)
   {
     classes[0] = X86_64_INTEGER_CLASS;
     classes[1] = X86_64_INTEGERSI_CLASS;
     return 2;
   }
 else if (size <= 16)
   {
     classes[0] = classes[1] = X86_64_INTEGERSI_CLASS;
     return 2;
   }
 else
                 ;
      }
    case 2:
      if (!(byte_offset % 8))
 classes[0] = X86_64_SSESF_CLASS;
      else
 classes[0] = X86_64_SSE_CLASS;
      return 1;
    case 3:
      classes[0] = X86_64_SSEDF_CLASS;
      return 1;

    case 4:
      classes[0] = X86_64_X87_CLASS;
      classes[1] = X86_64_X87UP_CLASS;
      return 2;

    case 13:
      {
 const size_t UNITS_PER_WORD = 8;
 size_t words = (type->size + UNITS_PER_WORD - 1) / UNITS_PER_WORD;
 ffi_type **ptr;
 int i;
 enum x86_64_reg_class subclasses[4];


 if (type->size > 32)
   return 0;

 for (i = 0; i < words; i++)
   classes[i] = X86_64_NO_CLASS;



 if (!words)
   {
     classes[0] = X86_64_NO_CLASS;
     return 1;
   }


 for (ptr = type->elements; *ptr != ((void*)0); ptr++)
   {
     size_t num;

     byte_offset = (((((size_t) (byte_offset))-1) | (((*ptr)->alignment)-1))+1);

     num = classify_argument (*ptr, subclasses, byte_offset % 8);
     if (num == 0)
       return 0;
     for (i = 0; i < num; i++)
       {
  size_t pos = byte_offset / 8;
  classes[i + pos] =
    merge_classes (subclasses[i], classes[i + pos]);
       }

     byte_offset += (*ptr)->size;
   }

 if (words > 2)
   {




     if (classes[0] != X86_64_SSE_CLASS)
       return 0;

     for (i = 1; i < words; i++)
       if (classes[i] != X86_64_SSEUP_CLASS)
  return 0;
   }


 for (i = 0; i < words; i++)
   {


     if (classes[i] == X86_64_MEMORY_CLASS)
       return 0;



     if (classes[i] == X86_64_SSEUP_CLASS
  && classes[i - 1] != X86_64_SSE_CLASS
  && classes[i - 1] != X86_64_SSEUP_CLASS)
       {

                     ;
  classes[i] = X86_64_SSE_CLASS;
       }



     if (classes[i] == X86_64_X87UP_CLASS
  && (classes[i - 1] != X86_64_X87_CLASS))
       {

                     ;
  return 0;
       }
   }
 return words;
      }

    default:
                   ;
    }
  return 0;
}





static size_t
examine_argument (ffi_type *type, enum x86_64_reg_class classes[4],
    _Bool in_return, int *pngpr, int *pnsse)
{
  size_t n;
  int i, ngpr, nsse;

  n = classify_argument (type, classes, 0);
  if (n == 0)
    return 0;

  ngpr = nsse = 0;
  for (i = 0; i < n; ++i)
    switch (classes[i])
      {
      case X86_64_INTEGER_CLASS:
      case X86_64_INTEGERSI_CLASS:
 ngpr++;
 break;
      case X86_64_SSE_CLASS:
      case X86_64_SSESF_CLASS:
      case X86_64_SSEDF_CLASS:
 nsse++;
 break;
      case X86_64_NO_CLASS:
      case X86_64_SSEUP_CLASS:
 break;
      case X86_64_X87_CLASS:
      case X86_64_X87UP_CLASS:
      case X86_64_COMPLEX_X87_CLASS:
 return in_return != 0;
      default:
 abort ();
      }

  *pngpr = ngpr;
  *pnsse = nsse;

  return n;
}



ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
{
  int gprcount, ssecount, i, avn, ngpr, nsse, flags;
  enum x86_64_reg_class classes[4];
  size_t bytes, n;

  gprcount = ssecount = 0;

  flags = cif->rtype->type;
  if (flags != 0)
    {
      n = examine_argument (cif->rtype, classes, 1, &ngpr, &nsse);
      if (n == 0)
 {


   gprcount++;

   flags = 0;
 }
      else if (flags == 13)
 {

   _Bool sse0 = ((classes[0]) >= X86_64_SSE_CLASS && classes[0] <= X86_64_SSEUP_CLASS);
   _Bool sse1 = n == 2 && ((classes[1]) >= X86_64_SSE_CLASS && classes[1] <= X86_64_SSEUP_CLASS);
   if (sse0 && !sse1)
     flags |= 1 << 8;
   else if (!sse0 && sse1)
     flags |= 1 << 9;
   else if (sse0 && sse1)
     flags |= 1 << 10;

   flags |= cif->rtype->size << 12;
 }
    }




  for (bytes = 0, i = 0, avn = cif->nargs; i < avn; i++)
    {
      if (examine_argument (cif->arg_types[i], classes, 0, &ngpr, &nsse) == 0
   || gprcount + ngpr > 6
   || ssecount + nsse > 8)
 {
   long align = cif->arg_types[i]->alignment;

   if (align < 8)
     align = 8;

   bytes = (((((size_t) (bytes))-1) | ((align)-1))+1);
   bytes += cif->arg_types[i]->size;
 }
      else
 {
   gprcount += ngpr;
   ssecount += nsse;
 }
    }
  if (ssecount)
    flags |= 1 << 11;
  cif->flags = flags;
  cif->bytes = (unsigned)(((((size_t) (bytes))-1) | ((8)-1))+1);

  return FFI_OK;
}

void
ffi_call (ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  enum x86_64_reg_class classes[4];
  char *stack, *argp;
  ffi_type **arg_types;
  int gprcount, ssecount, ngpr, nsse, i, avn;
  _Bool ret_in_memory;
  struct register_args *reg_args;


                                     ;




  ret_in_memory = (cif->rtype->type == 13
     && (cif->flags & 0xff) == 0);
  if (rvalue == ((void*)0) && ret_in_memory)
    rvalue = __builtin_alloca (cif->rtype->size);


  stack = __builtin_alloca (sizeof (struct register_args) + cif->bytes + 4*8);
  reg_args = (struct register_args *) stack;
  argp = stack + sizeof (struct register_args);

  gprcount = ssecount = 0;



  if (ret_in_memory)
    reg_args->gpr[gprcount++] = (unsigned long) rvalue;

  avn = cif->nargs;
  arg_types = cif->arg_types;

  for (i = 0; i < avn; ++i)
    {
      size_t n, size = arg_types[i]->size;

      n = examine_argument (arg_types[i], classes, 0, &ngpr, &nsse);
      if (n == 0
   || gprcount + ngpr > 6
   || ssecount + nsse > 8)
 {
   long align = arg_types[i]->alignment;


   if (align < 8)
     align = 8;


   argp = (void *) (((((size_t) (argp))-1) | ((align)-1))+1);
   memcpy (argp, avalue[i], size);
   argp += size;
 }
      else
 {

   char *a = (char *) avalue[i];
   int j;

   for (j = 0; j < n; j++, a += 8, size -= 8)
     {
       switch (classes[j])
  {
  case X86_64_INTEGER_CLASS:
  case X86_64_INTEGERSI_CLASS:




    switch (arg_types[i]->type)
      {
      case 6:
        *(SINT64 *)&reg_args->gpr[gprcount] = (SINT64) *((SINT8 *) a);
        break;
      case 8:
        *(SINT64 *)&reg_args->gpr[gprcount] = (SINT64) *((SINT16 *) a);
        break;
      case 10:
        *(SINT64 *)&reg_args->gpr[gprcount] = (SINT64) *((SINT32 *) a);
        break;
      default:
        reg_args->gpr[gprcount] = 0;
        memcpy (&reg_args->gpr[gprcount], a, size < 8 ? size : 8);
      }
    gprcount++;
    break;
  case X86_64_SSE_CLASS:
  case X86_64_SSEDF_CLASS:
    reg_args->sse[ssecount++].i64 = *(UINT64 *) a;
    break;
  case X86_64_SSESF_CLASS:
    reg_args->sse[ssecount++].i32 = *(UINT32 *) a;
    break;
  default:
    abort();
  }
     }
 }
    }

  ffi_call_unix64 (stack, cif->bytes + sizeof (struct register_args),
     cif->flags, rvalue, fn, ssecount);
}


extern void ffi_closure_unix64(void);

ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun)(ffi_cif*, void*, void**, void*),
        void *user_data,
        void *codeloc)
{
  volatile unsigned short *tramp;


  {
    int abi = cif->abi;
    if (__builtin_expect((! (abi > FFI_FIRST_ABI && abi < FFI_LAST_ABI))!=0,0))
      return FFI_BAD_ABI;
  }

  tramp = (volatile unsigned short *) &closure->tramp[0];

  tramp[0] = 0xbb49;
  *((unsigned long long * volatile) &tramp[1])
    = (unsigned long) ffi_closure_unix64;
  tramp[5] = 0xba49;
  *((unsigned long long * volatile) &tramp[6])
    = (unsigned long) codeloc;



  tramp[10] = cif->flags & (1 << 11) ? 0x49f9 : 0x49f8;

  tramp[11] = 0xe3ff;

  closure->cif = cif;
  closure->fun = fun;
  closure->user_data = user_data;

  return FFI_OK;
}

int
ffi_closure_unix64_inner(ffi_closure *closure, void *rvalue,
    struct register_args *reg_args, char *argp)
{
  ffi_cif *cif;
  void **avalue;
  ffi_type **arg_types;
  long i, avn;
  int gprcount, ssecount, ngpr, nsse;
  int ret;

  cif = closure->cif;
  avalue = __builtin_alloca (cif->nargs * sizeof(void *));
  gprcount = ssecount = 0;

  ret = cif->rtype->type;
  if (ret != 0)
    {
      enum x86_64_reg_class classes[4];
      size_t n = examine_argument (cif->rtype, classes, 1, &ngpr, &nsse);
      if (n == 0)
 {


   rvalue = (void *) (unsigned long) reg_args->gpr[gprcount++];

   ret = 0;
 }
      else if (ret == 13 && n == 2)
 {

   _Bool sse0 = ((classes[0]) >= X86_64_SSE_CLASS && classes[0] <= X86_64_SSEUP_CLASS);
   _Bool sse1 = ((classes[1]) >= X86_64_SSE_CLASS && classes[1] <= X86_64_SSEUP_CLASS);
   if (!sse0 && sse1)
     ret |= 1 << 8;
   else if (sse0 && !sse1)
     ret |= 1 << 9;
 }
    }

  avn = cif->nargs;
  arg_types = cif->arg_types;

  for (i = 0; i < avn; ++i)
    {
      enum x86_64_reg_class classes[4];
      size_t n;

      n = examine_argument (arg_types[i], classes, 0, &ngpr, &nsse);
      if (n == 0
   || gprcount + ngpr > 6
   || ssecount + nsse > 8)
 {
   long align = arg_types[i]->alignment;


   if (align < 8)
     align = 8;


   argp = (void *) (((((size_t) (argp))-1) | ((align)-1))+1);
   avalue[i] = argp;
   argp += arg_types[i]->size;
 }


      else if (n == 1
        || (n == 2 && !(((classes[0]) >= X86_64_SSE_CLASS && classes[0] <= X86_64_SSEUP_CLASS)
          || ((classes[1]) >= X86_64_SSE_CLASS && classes[1] <= X86_64_SSEUP_CLASS))))
 {

   if (((classes[0]) >= X86_64_SSE_CLASS && classes[0] <= X86_64_SSEUP_CLASS))
     {
       avalue[i] = &reg_args->sse[ssecount];
       ssecount += n;
     }
   else
     {
       avalue[i] = &reg_args->gpr[gprcount];
       gprcount += n;
     }
 }

      else
 {
   char *a = __builtin_alloca (16);
   int j;

   avalue[i] = a;
   for (j = 0; j < n; j++, a += 8)
     {
       if (((classes[j]) >= X86_64_SSE_CLASS && classes[j] <= X86_64_SSEUP_CLASS))
  memcpy (a, &reg_args->sse[ssecount++], 8);
       else
  memcpy (a, &reg_args->gpr[gprcount++], 8);
     }
 }
    }


  closure->fun (cif, rvalue, avalue, closure->user_data);


  return ret;
}
