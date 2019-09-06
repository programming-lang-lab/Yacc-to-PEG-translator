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
extern void ffi_call_SYSV(void *rvalue, unsigned rsize, unsigned flags,
     void(*fn)(void), unsigned nbytes, extended_cif*);
extern void ffi_closure_SYSV(void) ;

ffi_status ffi_prep_cif_machdep(ffi_cif *cif)
{
  switch(cif->rtype->type) {
    case 6:
    case 5:
    case 8:
    case 7:
      cif->flags = cif->rtype->type;
      break;
    case 0:
    case 2:
      cif->flags = 9;
      break;
    case 3:
    case 11:
    case 12:
      cif->flags = 11;
      break;
    case 13:
      cif->flags = 13;

      if (cif->rtype->size > 4 * 4) {


        cif->flags = 13;
        cif->bytes += 8;
      }
      break;

    default:
      cif->flags = 9;
      break;
  }




  cif->bytes = (((((size_t) (cif->bytes))-1) | ((16)-1))+1);

  return FFI_OK;
}

void ffi_prep_args(extended_cif *ecif, unsigned char* stack)
{
  unsigned int i;
  unsigned long *addr;
  ffi_type **ptr;

  union {
    void **v;
    char **c;
    signed char **sc;
    unsigned char **uc;
    signed short **ss;
    unsigned short **us;
    unsigned int **i;
    long long **ll;
    float **f;
    double **d;
  } p_argv;


                                                 ;

  p_argv.v = ecif->avalue;
  addr = (unsigned long*)stack;


  if (ecif->cif->rtype->type == 13 && ecif->cif->rtype->size > 16)
  {
    *addr++ = (unsigned long)ecif->rvalue;
  }

  for (i = ecif->cif->nargs, ptr = ecif->cif->arg_types;
       i > 0;
       i--, ptr++, p_argv.v++)
  {
    switch ((*ptr)->type)
    {
      case 6:
        *addr++ = **p_argv.sc;
        break;
      case 5:
        *addr++ = **p_argv.uc;
        break;
      case 8:
        *addr++ = **p_argv.ss;
        break;
      case 7:
        *addr++ = **p_argv.us;
        break;
      case 2:
      case 1:
      case 9:
      case 10:
      case 14:
        *addr++ = **p_argv.i;
        break;
      case 3:
      case 11:
      case 12:
        if (((unsigned long)addr & 4) != 0)
          addr++;
        *(unsigned long long*)addr = **p_argv.ll;
 addr += sizeof(unsigned long long) / sizeof (addr);
        break;

      case 13:
      {
        unsigned long offs;
        unsigned long size;

        if (((unsigned long)addr & 4) != 0 && (*ptr)->alignment > 4)
          addr++;

        offs = (unsigned long) addr - (unsigned long) stack;
        size = (*ptr)->size;


        if (offs < FFI_REGISTER_NARGS * 4
            && offs + size > FFI_REGISTER_NARGS * 4)
          addr = (unsigned long*) (stack + FFI_REGISTER_NARGS * 4);

        memcpy((char*) addr, *p_argv.c, size);
        addr += (size + 3) / 4;
        break;
      }

      default:
                     ;
    }
  }
}


void ffi_call(ffi_cif* cif, void(*fn)(void), void *rvalue, void **avalue)
{
  extended_cif ecif;
  unsigned long rsize = cif->rtype->size;
  int flags = cif->flags;
  void *alloc = ((void*)0);

  ecif.cif = cif;
  ecif.avalue = avalue;







  if (flags == 13 && (rsize <= 16 || rvalue == ((void*)0)))
  {
    alloc = __builtin_alloca ((((((size_t) (rsize))-1) | ((4)-1))+1));
    ecif.rvalue = alloc;
  }
  else
  {
    ecif.rvalue = rvalue;
  }

  if (cif->abi != FFI_SYSV)
                 ;

  ffi_call_SYSV (ecif.rvalue, rsize, cif->flags, fn, cif->bytes, &ecif);

  if (alloc != ((void*)0) && rvalue != ((void*)0))
    memcpy(rvalue, alloc, rsize);
}

extern void ffi_trampoline();
extern void ffi_cacheflush(void* start, void* end);

ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
                      ffi_cif* cif,
                      void (*fun)(ffi_cif*, void*, void**, void*),
                      void *user_data,
                      void *codeloc)
{

  memcpy(closure->tramp, ffi_trampoline, 24);
  *(unsigned int*)(&closure->tramp[8]) = (unsigned int)ffi_closure_SYSV;



  ffi_cacheflush(closure->tramp, closure->tramp + 24);

  closure->cif = cif;
  closure->fun = fun;
  closure->user_data = user_data;
  return FFI_OK;
}


long 
ffi_closure_SYSV_inner(ffi_closure *closure, void **values, void *rvalue)
{
  ffi_cif *cif;
  ffi_type **arg_types;
  void **avalue;
  int i, areg;

  cif = closure->cif;
  if (cif->abi != FFI_SYSV)
    return FFI_BAD_ABI;

  areg = 0;

  int rtype = cif->rtype->type;
  if (rtype == 13 && cif->rtype->size > 4 * 4)
  {
    rvalue = *values;
    areg++;
  }

  cif = closure->cif;
  arg_types = cif->arg_types;
  avalue = __builtin_alloca (cif->nargs * sizeof(void *));

  for (i = 0; i < cif->nargs; i++)
  {
    if (arg_types[i]->alignment == 8 && (areg & 1) != 0)
      areg++;


    if (areg == FFI_REGISTER_NARGS)
      areg += 4;

    if (arg_types[i]->type == 13)
    {
      int numregs = ((arg_types[i]->size + 3) & ~3) / 4;
      if (areg < FFI_REGISTER_NARGS && areg + numregs > FFI_REGISTER_NARGS)
        areg = FFI_REGISTER_NARGS + 4;
    }

    avalue[i] = &values[areg];
    areg += (arg_types[i]->size + 3) / 4;
  }

  (closure->fun)(cif, rvalue, avalue, closure->user_data);

  return rtype;
}
