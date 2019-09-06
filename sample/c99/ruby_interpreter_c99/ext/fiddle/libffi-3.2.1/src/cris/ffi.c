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



static ffi_status
initialize_aggregate_packed_struct (ffi_type * arg)
{
  ffi_type **ptr;

                          ;

                                    ;
                             ;
                                  ;

  ptr = &(arg->elements[0]);

  while ((*ptr) != ((void*)0))
    {
      if (((*ptr)->size == 0)
   && (initialize_aggregate_packed_struct ((*ptr)) != FFI_OK))
 return FFI_BAD_TYPEDEF;

                                         ;

      arg->size += (*ptr)->size;

      arg->alignment = (arg->alignment > (*ptr)->alignment) ?
 arg->alignment : (*ptr)->alignment;

      ptr++;
    }

  if (arg->size == 0)
    return FFI_BAD_TYPEDEF;
  else
    return FFI_OK;
}

int
ffi_prep_args (char *stack, extended_cif * ecif)
{
  unsigned int i;
  unsigned int struct_count = 0;
  void **p_argv;
  char *argp;
  ffi_type **p_arg;

  argp = stack;

  p_argv = ecif->avalue;

  for (i = ecif->cif->nargs, p_arg = ecif->cif->arg_types;
       (i != 0); i--, p_arg++)
    {
      size_t z;

      switch ((*p_arg)->type)
 {
 case 13:
   {
     z = (*p_arg)->size;
     if (z <= 4)
       {
  memcpy (argp, *p_argv, z);
  z = 4;
       }
     else if (z <= 8)
       {
  memcpy (argp, *p_argv, z);
  z = 8;
       }
     else
       {
  unsigned int uiLocOnStack;
  z = sizeof (void *);
  uiLocOnStack = 4 * ecif->cif->nargs + struct_count;
  struct_count = struct_count + (*p_arg)->size;
  *(unsigned int *) argp =
    (unsigned int) (UINT32 *) (stack + uiLocOnStack);
  memcpy ((stack + uiLocOnStack), *p_argv, (*p_arg)->size);
       }
     break;
   }
 default:
   z = (*p_arg)->size;
   if (z < sizeof (int))
     {
       switch ((*p_arg)->type)
  {
  case 6:
    *(signed int *) argp = (signed int) *(SINT8 *) (*p_argv);
    break;

  case 5:
    *(unsigned int *) argp =
      (unsigned int) *(UINT8 *) (*p_argv);
    break;

  case 8:
    *(signed int *) argp = (signed int) *(SINT16 *) (*p_argv);
    break;

  case 7:
    *(unsigned int *) argp =
      (unsigned int) *(UINT16 *) (*p_argv);
    break;

  default:
                  ;
  }
       z = sizeof (int);
     }
   else if (z == sizeof (int))
     *(unsigned int *) argp = (unsigned int) *(UINT32 *) (*p_argv);
   else
     memcpy (argp, *p_argv, z);
   break;
 }
      p_argv++;
      argp += z;
    }

  return (struct_count);
}

ffi_status 
ffi_prep_cif_core (ffi_cif * cif,
            ffi_abi abi, unsigned int isvariadic,
     unsigned int nfixedargs, unsigned int ntotalargs,
            ffi_type * rtype, ffi_type ** atypes)
{
  unsigned bytes = 0;
  unsigned int i;
  ffi_type **ptr;

                          ;
                                                ;
                                      ;
                                                        ;

  cif->abi = abi;
  cif->arg_types = atypes;
  cif->nargs = ntotalargs;
  cif->rtype = rtype;

  cif->flags = 0;

  if ((cif->rtype->size == 0)
      && (initialize_aggregate_packed_struct (cif->rtype) != FFI_OK))
    return FFI_BAD_TYPEDEF;

                                    ;

  for (ptr = cif->arg_types, i = cif->nargs; i > 0; i--, ptr++)
    {
      if (((*ptr)->size == 0)
   && (initialize_aggregate_packed_struct ((*ptr)) != FFI_OK))
 return FFI_BAD_TYPEDEF;

                                  ;

      if (((*ptr)->alignment - 1) & bytes)
 bytes = (((((size_t) (bytes))-1) | (((*ptr)->alignment)-1))+1);
      if ((*ptr)->type == 13)
 {
   if ((*ptr)->size > 8)
     {
       bytes += (*ptr)->size;
       bytes += sizeof (void *);
     }
   else
     {
       if ((*ptr)->size > 4)
  bytes += 8;
       else
  bytes += 4;
     }
 }
      else
 bytes += (((((size_t) ((*ptr)->size))-1) | ((8)-1))+1);
    }

  cif->bytes = bytes;

  return ffi_prep_cif_machdep (cif);
}

ffi_status
ffi_prep_cif_machdep (ffi_cif * cif)
{
  switch (cif->rtype->type)
    {
    case 0:
    case 13:
    case 2:
    case 3:
    case 12:
    case 11:
      cif->flags = (unsigned) cif->rtype->type;
      break;

    default:
      cif->flags = 1;
      break;
    }

  return FFI_OK;
}

extern void ffi_call_SYSV (int (*)(char *, extended_cif *),
      extended_cif *,
      unsigned, unsigned, unsigned *, void (*fn) ())
     ;

void
ffi_call (ffi_cif * cif, void (*fn) (), void *rvalue, void **avalue)
{
  extended_cif ecif;

  ecif.cif = cif;
  ecif.avalue = avalue;

  if ((rvalue == ((void*)0)) && (cif->rtype->type == 13))
    {
      ecif.rvalue = __builtin_alloca (cif->rtype->size);
    }
  else
    ecif.rvalue = rvalue;

  switch (cif->abi)
    {
    case FFI_SYSV:
      ffi_call_SYSV (ffi_prep_args, &ecif, cif->bytes,
       cif->flags, ecif.rvalue, fn);
      break;
    default:
                    ;
      break;
    }
}





extern const char ffi_cris_trampoline_template[]
 ;



extern const int ffi_cris_trampoline_fn_offset
 ;



extern const int ffi_cris_trampoline_closure_offset
 ;
static unsigned long long
ffi_prep_closure_inner (void **params, ffi_closure* closure)
{
  char *register_args = (char *) params;
  void *struct_ret = params[5];
  char *stack_args = params[6];
  char *ptr = register_args;
  ffi_cif *cif = closure->cif;
  ffi_type **arg_types = cif->arg_types;


  void **avalue = __builtin_alloca (closure->cif->nargs * sizeof(void *));
  int i;
  int doing_regs;
  long long llret = 0;


  for (i = 0, doing_regs = 1; i < cif->nargs; i++)
    {

      if (arg_types[i]->size <= 4)
 {
   avalue[i] = ptr;
   ptr += 4;
 }
      else if (arg_types[i]->size <= 8)
 {
   avalue[i] = ptr;
   ptr += 8;
 }
      else
 {
                                                     ;


   avalue[i] = *(void **) ptr;
   ptr += 4;
 }




      if (doing_regs && ptr >= register_args + 4*4)
 {
   ptr = stack_args + ((ptr > register_args + 4*4) ? 4 : 0);
   doing_regs = 0;
 }
    }


  (closure->fun) (cif,

    cif->rtype->type == 13



    ? struct_ret




    : (void *) &llret,

    avalue, closure->user_data);

  return llret;
}



ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun)(ffi_cif *, void *, void **, void*),
        void *user_data,
        void *codeloc)
{
  void *innerfn = ffi_prep_closure_inner;
                                   ;
  closure->cif = cif;
  closure->user_data = user_data;
  closure->fun = fun;
  memcpy (closure->tramp, ffi_cris_trampoline_template,
   FFI_CRIS_TRAMPOLINE_CODE_PART_SIZE);
  memcpy (closure->tramp + ffi_cris_trampoline_fn_offset,
   &innerfn, sizeof (void *));
  memcpy (closure->tramp + ffi_cris_trampoline_closure_offset,
   &codeloc, sizeof (void *));

  return FFI_OK;
}
