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
enum {


  FLAG_RETURNS_SMST = 1 << (31-31),
  FLAG_RETURNS_NOTHING = 1 << (31-30),
  FLAG_RETURNS_FP = 1 << (31-29),
  FLAG_RETURNS_64BITS = 1 << (31-28),


  FLAG_RETURNS_128BITS = 1 << (31-27),

  FLAG_COMPAT = 1 << (31- 8),


  FLAG_ARG_NEEDS_COPY = 1 << (31- 7),
  FLAG_ARG_NEEDS_PSAVE = FLAG_ARG_NEEDS_COPY,
  FLAG_FP_ARGUMENTS = 1 << (31- 6),
  FLAG_4_GPR_ARGUMENTS = 1 << (31- 5),
  FLAG_RETVAL_REFERENCE = 1 << (31- 4)
};

typedef union
{
  float f;
  double d;
} ffi_dblfl;

void  ffi_closure_SYSV (void);
void  ffi_call_SYSV(extended_cif *, unsigned, unsigned, unsigned *,
         void (*)(void));

void  ffi_prep_types_sysv (ffi_abi);
ffi_status  ffi_prep_cif_sysv (ffi_cif *);
int  ffi_closure_helper_SYSV (ffi_closure *, void *, unsigned long *,
     ffi_dblfl *, unsigned long *);

void  ffi_call_LINUX64(extended_cif *, unsigned long, unsigned long,
     unsigned long *, void (*)(void));
void  ffi_closure_LINUX64 (void);

void  ffi_prep_types_linux64 (ffi_abi);
ffi_status  ffi_prep_cif_linux64 (ffi_cif *);
ffi_status  ffi_prep_cif_linux64_var (ffi_cif *, unsigned int,
      unsigned int);
void  ffi_prep_args64 (extended_cif *, unsigned long *const);
int  ffi_closure_helper_LINUX64 (ffi_closure *, void *,
        unsigned long *, ffi_dblfl *);
static int
translate_float (int abi, int type)
{

  if (type == 4
      && (abi & FFI_SYSV_LONG_DOUBLE_128) == 0)
    type = 3;

  if ((abi & FFI_SYSV_SOFT_FLOAT) != 0)
    {
      if (type == 2)
 type = 9;
      else if (type == 3)
 type = 11;

      else if (type == 4)
 type = FFI_TYPE_UINT128;
    }
  else if ((abi & FFI_SYSV_IBM_LONG_DOUBLE) == 0)
    {
      if (type == 4)
 type = 13;

    }
  return type;
}


static ffi_status
ffi_prep_cif_sysv_core (ffi_cif *cif)
{
  ffi_type **ptr;
  unsigned bytes;
  unsigned i, fparg_count = 0, intarg_count = 0;
  unsigned flags = cif->flags;
  unsigned struct_copy_size = 0;
  unsigned type = cif->rtype->type;
  unsigned size = cif->rtype->size;





  bytes = (2 + 4) * sizeof (int);


  bytes += 8 * sizeof (int);
  type = translate_float (cif->abi, type);

  switch (type)
    {

    case 4:
      flags |= FLAG_RETURNS_128BITS;


    case 3:
      flags |= FLAG_RETURNS_64BITS;

    case 2:
      flags |= FLAG_RETURNS_FP;



      break;

    case FFI_TYPE_UINT128:
      flags |= FLAG_RETURNS_128BITS;

    case 11:
    case 12:
      flags |= FLAG_RETURNS_64BITS;
      break;

    case 13:



      if ((cif->abi & FFI_SYSV_STRUCT_RET) != 0 && size <= 8)
 {
   flags |= FLAG_RETURNS_SMST;
   break;
 }
      intarg_count++;
      flags |= FLAG_RETVAL_REFERENCE;

    case 0:
      flags |= FLAG_RETURNS_NOTHING;
      break;

    default:

      break;
    }






  for (ptr = cif->arg_types, i = cif->nargs; i > 0; i--, ptr++)
    {
      unsigned short typenum = (*ptr)->type;

      typenum = translate_float (cif->abi, typenum);

      switch (typenum)
 {

 case 4:
   fparg_count++;


 case 3:
   fparg_count++;


   if (fparg_count > 8
       && intarg_count >= 8
       && intarg_count % 2 != 0)
     intarg_count++;



   break;

 case 2:
   fparg_count++;



   break;

 case FFI_TYPE_UINT128:



   if (intarg_count >= 8 - 3
       && intarg_count < 8)
     intarg_count = 8;
   intarg_count += 4;
   break;

 case 11:
 case 12:
   if (intarg_count == 8 -1
       || intarg_count % 2 != 0)
     intarg_count++;
   intarg_count += 2;
   break;

 case 13:




   struct_copy_size += ((*ptr)->size + 15) & ~0xF;


 case 14:
 case 1:
 case 9:
 case 10:
 case 7:
 case 8:
 case 5:
 case 6:


   intarg_count++;
   break;

 default:
                 ;
 }
    }

  if (fparg_count != 0)
    flags |= FLAG_FP_ARGUMENTS;
  if (intarg_count > 4)
    flags |= FLAG_4_GPR_ARGUMENTS;
  if (struct_copy_size != 0)
    flags |= FLAG_ARG_NEEDS_COPY;


  if (fparg_count != 0)
    bytes += 8 * sizeof (double);


  if (intarg_count > 8)
    bytes += (intarg_count - 8) * sizeof (int);
  if (fparg_count > 8)
    bytes += (fparg_count - 8) * sizeof (double);


  bytes = (bytes + 15) & ~0xF;


  bytes += struct_copy_size;

  cif->flags = flags;
  cif->bytes = bytes;

  return FFI_OK;
}

ffi_status 
ffi_prep_cif_sysv (ffi_cif *cif)
{
  if ((cif->abi & FFI_SYSV) == 0)
    {

      cif->flags |= FLAG_COMPAT;
      switch (cif->abi)
 {
 default:
   return FFI_BAD_ABI;

 case FFI_COMPAT_SYSV:
   cif->abi = FFI_SYSV | FFI_SYSV_STRUCT_RET | FFI_SYSV_LONG_DOUBLE_128;
   break;

 case FFI_COMPAT_GCC_SYSV:
   cif->abi = FFI_SYSV | FFI_SYSV_LONG_DOUBLE_128;
   break;

 case FFI_COMPAT_LINUX:
   cif->abi = (FFI_SYSV | FFI_SYSV_IBM_LONG_DOUBLE
        | FFI_SYSV_LONG_DOUBLE_128);
   break;

 case FFI_COMPAT_LINUX_SOFT_FLOAT:
   cif->abi = (FFI_SYSV | FFI_SYSV_SOFT_FLOAT | FFI_SYSV_IBM_LONG_DOUBLE
        | FFI_SYSV_LONG_DOUBLE_128);
   break;
 }
    }
  return ffi_prep_cif_sysv_core (cif);
}
void 
ffi_prep_args_SYSV (extended_cif *ecif, unsigned *const stack)
{
  const unsigned bytes = ecif->cif->bytes;
  const unsigned flags = ecif->cif->flags;

  typedef union
  {
    char *c;
    unsigned *u;
    long long *ll;
    float *f;
    double *d;
  } valp;


  valp stacktop;



  valp gpr_base;
  int intarg_count;




  valp fpr_base;
  int fparg_count;




  valp copy_space;


  valp next_arg;

  int i;
  ffi_type **ptr;

  double double_tmp;

  union
  {
    void **v;
    char **c;
    signed char **sc;
    unsigned char **uc;
    signed short **ss;
    unsigned short **us;
    unsigned int **ui;
    long long **ll;
    float **f;
    double **d;
  } p_argv;
  size_t struct_copy_size;
  unsigned gprvalue;

  stacktop.c = (char *) stack + bytes;
  gpr_base.u = stacktop.u - 4 - 8;
  intarg_count = 0;

  fpr_base.d = gpr_base.d - 8;
  fparg_count = 0;
  copy_space.c = ((flags & FLAG_FP_ARGUMENTS) ? fpr_base.c : gpr_base.c);



  next_arg.u = stack + 2;


                                                          ;
                                                        ;
                                                      ;
                                 ;
                                         ;


  if (flags & FLAG_RETVAL_REFERENCE)
    {
      *gpr_base.u++ = (unsigned long) (char *) ecif->rvalue;
      intarg_count++;
    }


  p_argv.v = ecif->avalue;
  for (ptr = ecif->cif->arg_types, i = ecif->cif->nargs;
       i > 0;
       i--, ptr++, p_argv.v++)
    {
      unsigned int typenum = (*ptr)->type;

      typenum = translate_float (ecif->cif->abi, typenum);


      switch (typenum)
 {


 case 4:
   double_tmp = (*p_argv.d)[0];

   if (fparg_count >= 8 - 1)
     {
       if (intarg_count >= 8
    && intarg_count % 2 != 0)
  {
    intarg_count++;
    next_arg.u++;
  }
       *next_arg.d = double_tmp;
       next_arg.u += 2;
       double_tmp = (*p_argv.d)[1];
       *next_arg.d = double_tmp;
       next_arg.u += 2;
     }
   else
     {
       *fpr_base.d++ = double_tmp;
       double_tmp = (*p_argv.d)[1];
       *fpr_base.d++ = double_tmp;
     }

   fparg_count += 2;
                                         ;
   break;

 case 3:
   double_tmp = **p_argv.d;

   if (fparg_count >= 8)
     {
       if (intarg_count >= 8
    && intarg_count % 2 != 0)
  {
    intarg_count++;
    next_arg.u++;
  }
       *next_arg.d = double_tmp;
       next_arg.u += 2;
     }
   else
     *fpr_base.d++ = double_tmp;
   fparg_count++;
                                         ;
   break;

 case 2:
   double_tmp = **p_argv.f;
   if (fparg_count >= 8)
     {
       *next_arg.f = (float) double_tmp;
       next_arg.u += 1;
       intarg_count++;
     }
   else
     *fpr_base.d++ = double_tmp;
   fparg_count++;
                                         ;
   break;


 case FFI_TYPE_UINT128:




   {
     unsigned int int_tmp;
     unsigned int ii;
     if (intarg_count >= 8 - 3)
       {
  if (intarg_count < 8)
    intarg_count = 8;
  for (ii = 0; ii < 4; ii++)
    {
      int_tmp = (*p_argv.ui)[ii];
      *next_arg.u++ = int_tmp;
    }
       }
     else
       {
  for (ii = 0; ii < 4; ii++)
    {
      int_tmp = (*p_argv.ui)[ii];
      *gpr_base.u++ = int_tmp;
    }
       }
     intarg_count += 4;
     break;
   }

 case 11:
 case 12:
   if (intarg_count == 8 -1)
     intarg_count++;
   if (intarg_count >= 8)
     {
       if (intarg_count % 2 != 0)
  {
    intarg_count++;
    next_arg.u++;
  }
       *next_arg.ll = **p_argv.ll;
       next_arg.u += 2;
     }
   else
     {





       if (intarg_count % 2 != 0)
  {
    intarg_count ++;
    gpr_base.u++;
  }
       *gpr_base.ll++ = **p_argv.ll;
     }
   intarg_count += 2;
   break;

 case 13:
   struct_copy_size = ((*ptr)->size + 15) & ~0xF;
   copy_space.c -= struct_copy_size;
   memcpy (copy_space.c, *p_argv.c, (*ptr)->size);

   gprvalue = (unsigned long) copy_space.c;

                                         ;
                                           ;
   goto putgpr;

 case 5:
   gprvalue = **p_argv.uc;
   goto putgpr;
 case 6:
   gprvalue = **p_argv.sc;
   goto putgpr;
 case 7:
   gprvalue = **p_argv.us;
   goto putgpr;
 case 8:
   gprvalue = **p_argv.ss;
   goto putgpr;

 case 1:
 case 9:
 case 10:
 case 14:

   gprvalue = **p_argv.ui;

 putgpr:
   if (intarg_count >= 8)
     *next_arg.u++ = gprvalue;
   else
     *gpr_base.u++ = gprvalue;
   intarg_count++;
   break;
 }
    }


                                         ;
                                                             ;





  if (fparg_count > 8)
    intarg_count -= fparg_count - 8;

                                                                   ;

                                                                ;
}



static void
flush_icache (char *wraddr, char *xaddr, int size)
{
  int i;
  for (i = 0; i < size; i += 8)
    ;
  ;
}

ffi_status 
ffi_prep_closure_loc_sysv (ffi_closure *closure,
      ffi_cif *cif,
      void (*fun) (ffi_cif *, void *, void **, void *),
      void *user_data,
      void *codeloc)
{
  unsigned int *tramp;

  if (cif->abi < FFI_SYSV || cif->abi >= FFI_LAST_ABI)
    return FFI_BAD_ABI;

  tramp = (unsigned int *) &closure->tramp[0];
  tramp[0] = 0x7c0802a6;
  tramp[1] = 0x4800000d;
  tramp[4] = 0x7d6802a6;
  tramp[5] = 0x7c0803a6;
  tramp[6] = 0x800b0000;
  tramp[7] = 0x816b0004;
  tramp[8] = 0x7c0903a6;
  tramp[9] = 0x4e800420;
  *(void **) &tramp[2] = (void *) ffi_closure_SYSV;
  *(void **) &tramp[3] = codeloc;


  flush_icache ((char *)tramp, (char *)codeloc, 24);

  closure->cif = cif;
  closure->fun = fun;
  closure->user_data = user_data;

  return FFI_OK;
}
int
ffi_closure_helper_SYSV (ffi_closure *closure, void *rvalue,
    unsigned long *pgr, ffi_dblfl *pfr,
    unsigned long *pst)
{





  void ** avalue;
  ffi_type ** arg_types;
  long i, avn;

  long nf = 0;

  long ng = 0;

  ffi_cif *cif = closure->cif;
  unsigned size = cif->rtype->size;
  unsigned short rtypenum = cif->rtype->type;

  avalue = __builtin_alloca (cif->nargs * sizeof (void *));


  rtypenum = translate_float (cif->abi, rtypenum);





  if (rtypenum == 13
      && !((cif->abi & FFI_SYSV_STRUCT_RET) != 0 && size <= 8))
    {
      rvalue = (void *) *pgr;
      ng++;
      pgr++;
    }

  i = 0;
  avn = cif->nargs;
  arg_types = cif->arg_types;


  while (i < avn) {
    unsigned short typenum = arg_types[i]->type;


    typenum = translate_float (cif->abi, typenum);

    switch (typenum)
      {

      case 2:



 if (nf < 8)
   {




     double temp = pfr->d;
     pfr->f = (float) temp;
     avalue[i] = pfr;
     nf++;
     pfr++;
   }
 else
   {
     avalue[i] = pst;
     pst += 1;
   }
 break;

      case 3:
 if (nf < 8)
   {
     avalue[i] = pfr;
     nf++;
     pfr++;
   }
 else
   {
     if (((long) pst) & 4)
       pst++;
     avalue[i] = pst;
     pst += 2;
   }
 break;


      case 4:
 if (nf < 8 - 1)
   {
     avalue[i] = pfr;
     pfr += 2;
     nf += 2;
   }
 else
   {
     if (((long) pst) & 4)
       pst++;
     avalue[i] = pst;
     pst += 4;
     nf = 8;
   }
 break;



      case FFI_TYPE_UINT128:


 if (ng < 8 - 3)
   {
     avalue[i] = pgr;
     pgr += 4;
     ng += 4;
   }
 else
   {
     avalue[i] = pst;
     pst += 4;
     ng = 8+4;
   }
 break;

      case 6:
      case 5:
      case 8:
      case 7:
      case 10:
      case 9:
      case 14:
 if (ng < 8)
   {
     avalue[i] = pgr;
     ng++;
     pgr++;
   }
 else
   {
     avalue[i] = pst;
     pst++;
   }
 break;

      case 13:


 if (ng < 8)
   {
     avalue[i] = (void *) *pgr;
     ng++;
     pgr++;
   }
 else
   {
     avalue[i] = (void *) *pst;
     pst++;
   }
 break;

      case 12:
      case 11:
 if (ng < 8 - 1)
   {
     if (ng & 1)
       {

  ng++;
  pgr++;
       }
     avalue[i] = pgr;
     ng += 2;
     pgr += 2;
   }
 else
   {
     if (((long) pst) & 4)
       pst++;
     avalue[i] = pst;
     pst += 2;
     ng = 8;
   }
 break;

      default:
               ;
      }

    i++;
  }

  (closure->fun) (cif, rvalue, avalue, closure->user_data);







  if (rtypenum == 13
      && (cif->abi & FFI_SYSV_STRUCT_RET) != 0 && size <= 8)
    return FFI_SYSV_TYPE_SMALL_STRUCT - 1 + size;
  return rtypenum;
}
