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




void* ffi_prep_args(char *stack, extended_cif *ecif)
{
  char *stacktemp = stack;
  int i, s;
  ffi_type **arg;
  int count = 0;
  int nfixedargs;

  nfixedargs = ecif->cif->nfixedargs;
  arg = ecif->cif->arg_types;
  void **argv = ecif->avalue;

  if (ecif->cif->rtype->type == 13)
    {
      *(void **) stack = ecif->rvalue;
      stack += 4;
      count = 4;
    }
  for(i=0; i<ecif->cif->nargs; i++)
  {


    if ((nfixedargs == 0) && (count < 24))
      {
        count = 24;
        stack = stacktemp + 24;
      }
    nfixedargs--;

    s = 4;
    switch((*arg)->type)
      {
      case 13:
        *(void **)stack = *argv;
        break;

      case 6:
        *(signed int *) stack = (signed int)*(SINT8 *)(* argv);
        break;

      case 5:
        *(unsigned int *) stack = (unsigned int)*(UINT8 *)(* argv);
        break;

      case 8:
        *(signed int *) stack = (signed int)*(SINT16 *)(* argv);
        break;

      case 7:
        *(unsigned int *) stack = (unsigned int)*(UINT16 *)(* argv);
        break;

      case 10:
      case 9:
      case 2:
      case 14:
        *(int *)stack = *(int*)(*argv);
        break;

      default:
        if (count == 20)
          {
            stack += 4;
            count += 4;
          }
        s = (*arg)->size;
        memcpy(stack, *argv, s);
        break;
      }

    stack += s;
    count += s;
    argv++;
    arg++;
  }
  return stacktemp + ((count>24)?24:0);
}

extern void ffi_call_SYSV(unsigned,
                          extended_cif *,
                          void *(*)(int *, extended_cif *),
                          unsigned *,
                          void (*fn)(void),
                          unsigned);


void ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  int i;
  int size;
  ffi_type **arg;



  for(i = 0, arg = cif->arg_types, size=0; i < cif->nargs; i++, arg++)
    {
      if ((*arg)->type == 13)
        size += 4;
      else
      if ((*arg)->size <= 4)
        size += 4;
      else
        size += 8;
    }


  if (cif->nargs != cif->nfixedargs)
    size += 24;

  if (cif->rtype->type == 13)
    size += 4;


  extended_cif ecif;
  ecif.cif = cif;
  ecif.avalue = avalue;
  ecif.rvalue = rvalue;

  switch (cif->abi)
  {
    case FFI_SYSV:
      ffi_call_SYSV(size, &ecif, ffi_prep_args, rvalue, fn, cif->flags);
      break;
    default:
                   ;
      break;
  }
}


void ffi_closure_SYSV(unsigned long r3, unsigned long r4, unsigned long r5,
                      unsigned long r6, unsigned long r7, unsigned long r8)
{
  register int *sp ;
  register int *r13 ;

  ffi_closure* closure = (ffi_closure*) r13;
  char *stack_args = sp;


  unsigned register_args[6] =
    { r3, r4, r5, r6, r7, r8 };


  void *struct_rvalue = (void *) r3;

  ffi_cif *cif = closure->cif;
  ffi_type **arg_types = cif->arg_types;
  void **avalue = __builtin_alloca (cif->nargs * sizeof(void *));
  char *ptr = (char *) register_args;
  int count = 0;
  int nfixedargs = cif->nfixedargs;
  int i;



  if ((cif->rtype != ((void*)0)) && (cif->rtype->type == 13))
  {
    ptr += 4;
    count = 4;
  }


  for (i = 0; i < cif->nargs; i++)
    {


      if ((nfixedargs == 0) && (count < 24))
        {
          ptr = stack_args;
          count = 24;
        }
      nfixedargs--;

      switch (arg_types[i]->type)
        {
        case 6:
        case 5:
          avalue[i] = ptr + 3;
          break;

        case 8:
        case 7:
          avalue[i] = ptr + 2;
          break;

        case 10:
        case 9:
        case 2:
        case 14:
          avalue[i] = ptr;
          break;

        case 13:
          avalue[i] = *(void**)ptr;
          break;

        default:



          if (ptr == &register_args[5])
            ptr = stack_args;
          avalue[i] = ptr;
          ptr += 4;
          count += 4;
          break;
        }
      ptr += 4;
      count += 4;




      if (count == 24)
        ptr = stack_args;
    }

  if (cif->rtype && (cif->rtype->type == 13))
    {
      (closure->fun) (cif, struct_rvalue, avalue, closure->user_data);
    } else
    {
      long long rvalue;
      (closure->fun) (cif, &rvalue, avalue, closure->user_data);
      if (cif->rtype)
       ;
    }
}


ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
                      ffi_cif* cif,
                      void (*fun)(ffi_cif*,void*,void**,void*),
                      void *user_data,
                      void *codeloc)
{
  unsigned short *tramp = (unsigned short *) closure->tramp;
  unsigned long fn = (unsigned long) ffi_closure_SYSV;
  unsigned long cls = (unsigned long) codeloc;

  if (cif->abi != FFI_SYSV)
    return FFI_BAD_ABI;

  closure->cif = cif;
  closure->user_data = user_data;
  closure->fun = fun;


  tramp[0] = (0x6 << 10) | (13 << 5);
  tramp[1] = cls >> 16;
  tramp[2] = (0x2a << 10) | (13 << 5) | 13;
  tramp[3] = cls & 0xFFFF;

  tramp[4] = (0x6 << 10) | (15 << 5);
  tramp[5] = fn >> 16;
  tramp[6] = (0x2a << 10) | (15 << 5) | 15;
  tramp[7] = fn & 0xFFFF;

  tramp[8] = (0x11 << 10);
  tramp[9] = 15 << 11;

  tramp[10] = (0x2a << 10) | (17 << 5) | 1;
  tramp[11] = 0x0;

  return FFI_OK;
}


ffi_status ffi_prep_cif_machdep (ffi_cif *cif)
{
  cif->flags = 0;


  if (cif->rtype->type == 13)
    cif->flags = 13;
  else
  if (cif->rtype->size > 4)
    cif->flags = 11;

  cif->nfixedargs = cif->nargs;

  return FFI_OK;
}


ffi_status ffi_prep_cif_machdep_var(ffi_cif *cif,
         unsigned int nfixedargs, unsigned int ntotalargs)
{
  ffi_status status;

  status = ffi_prep_cif_machdep (cif);
  cif->nfixedargs = nfixedargs;
  return status;
}
