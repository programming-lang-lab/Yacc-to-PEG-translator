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

extern void ffi_closure_ASM (void);

enum {





  FLAG_RETURNS_128BITS = 1 << (31-31),
  FLAG_RETURNS_NOTHING = 1 << (31-30),
  FLAG_RETURNS_FP = 1 << (31-29),
  FLAG_RETURNS_64BITS = 1 << (31-28),

  FLAG_RETURNS_STRUCT = 1 << (31-27),

  FLAG_ARG_NEEDS_COPY = 1 << (31- 7),
  FLAG_FP_ARGUMENTS = 1 << (31- 6),
  FLAG_4_GPR_ARGUMENTS = 1 << (31- 5),
  FLAG_RETVAL_REFERENCE = 1 << (31- 4)
};


enum {
  NUM_GPR_ARG_REGISTERS = 8,
  NUM_FPR_ARG_REGISTERS = 13,
  LINKAGE_AREA_GPRS = 6
};

enum { ASM_NEEDS_REGISTERS = 4 };
void
ffi_prep_args (extended_cif *ecif, unsigned long *const stack)
{
  const unsigned bytes = ecif->cif->bytes;
  const unsigned flags = ecif->cif->flags;
  const unsigned nargs = ecif->cif->nargs;

  const ffi_abi abi = ecif->cif->abi;



  unsigned long *const stacktop = stack + (bytes / sizeof(unsigned long));



  double *fpr_base = (double *) (stacktop - ASM_NEEDS_REGISTERS) - NUM_FPR_ARG_REGISTERS;
  int gp_count = 0, fparg_count = 0;


  unsigned long *next_arg = stack + LINKAGE_AREA_GPRS;

  int i;
  double double_tmp;
  void **p_argv = ecif->avalue;
  unsigned long gprvalue;
  ffi_type** ptr = ecif->cif->arg_types;

  char *dest_cpy;

  unsigned size_al = 0;


                                                    ;
                                                       ;
                                ;





  if (flags & FLAG_RETVAL_REFERENCE)
    *next_arg++ = (unsigned long) (char *) ecif->rvalue;


  for (i = nargs; i > 0; i--, ptr++, p_argv++)
    {
      switch ((*ptr)->type)
 {



 case 2:
   double_tmp = *(float *) *p_argv;
   if (fparg_count < NUM_FPR_ARG_REGISTERS)
     *fpr_base++ = double_tmp;



   *(double *)next_arg = double_tmp;

   next_arg++;
   gp_count++;
   fparg_count++;
                                        ;
   break;

 case 3:
   double_tmp = *(double *) *p_argv;
   if (fparg_count < NUM_FPR_ARG_REGISTERS)
     *fpr_base++ = double_tmp;
   *(double *)next_arg = double_tmp;




   next_arg += 2;
   gp_count += 2;

   fparg_count++;
                                        ;
   break;



 case 4:
   double_tmp = ((double *) *p_argv)[0];
   if (fparg_count < NUM_FPR_ARG_REGISTERS)
     *fpr_base++ = double_tmp;
   *(double *) next_arg = double_tmp;




   next_arg += 2;
   gp_count += 2;

   fparg_count++;
   double_tmp = ((double *) *p_argv)[1];
   if (fparg_count < NUM_FPR_ARG_REGISTERS)
     *fpr_base++ = double_tmp;
   *(double *) next_arg = double_tmp;




   next_arg += 2;
   gp_count += 2;

   fparg_count++;

                                        ;
   break;

 case 11:
 case 12:




   *(long long *) next_arg = *(long long *) *p_argv;
   next_arg += 2;
   gp_count += 2;

   break;
 case 14:
   gprvalue = *(unsigned long *) *p_argv;
   goto putgpr;
 case 5:
   gprvalue = *(unsigned char *) *p_argv;
   goto putgpr;
 case 6:
   gprvalue = *(signed char *) *p_argv;
   goto putgpr;
 case 7:
   gprvalue = *(unsigned short *) *p_argv;
   goto putgpr;
 case 8:
   gprvalue = *(signed short *) *p_argv;
   goto putgpr;

 case 13:
   size_al = (*ptr)->size;







   dest_cpy = (char *) next_arg;



   if ((*ptr)->elements[0]->type == 3)
     size_al = (((((size_t) ((*ptr)->size))-1) | ((8)-1))+1);
   if (size_al < 3 && abi == FFI_DARWIN)
     dest_cpy += 4 - size_al;

   memcpy((char *) dest_cpy, (char *) *p_argv, size_al);
   next_arg += (size_al + 3) / 4;


   break;

 case 1:
 case 10:
   gprvalue = *(signed int *) *p_argv;
   goto putgpr;

 case 9:
   gprvalue = *(unsigned int *) *p_argv;
 putgpr:
   *next_arg++ = gprvalue;
   gp_count++;
   break;
 default:
   break;
 }
    }






}
static void
darwin_adjust_aggregate_sizes (ffi_type *s)
{
  int i;

  if (s->type != 13)
    return;

  s->size = 0;
  for (i = 0; s->elements[i] != ((void*)0); i++)
    {
      ffi_type *p;
      int align;

      p = s->elements[i];
      if (p->type == 13)
 darwin_adjust_aggregate_sizes (p);





      if (i == 0)
 align = p->alignment;
      else if (p->alignment == 16 || p->alignment < 4)

 align = p->alignment;
      else

 align = 4;


      s->size = (((((size_t) (s->size))-1) | ((align)-1))+1) + p->size;
    }

  s->size = (((((size_t) (s->size))-1) | ((s->alignment)-1))+1);


  if (s->elements[0]->type == 11
      || s->elements[0]->type == 12
      || s->elements[0]->type == 3
      || s->elements[0]->alignment == 8)
    s->alignment = s->alignment > 8 ? s->alignment : 8;

}




static void
aix_adjust_aggregate_sizes (ffi_type *s)
{
  int i;

  if (s->type != 13)
    return;

  s->size = 0;
  for (i = 0; s->elements[i] != ((void*)0); i++)
    {
      ffi_type *p;
      int align;

      p = s->elements[i];
      aix_adjust_aggregate_sizes (p);
      align = p->alignment;
      if (i != 0 && p->type == 3)
 align = 4;
      s->size = (((((size_t) (s->size))-1) | ((align)-1))+1) + p->size;
    }

  s->size = (((((size_t) (s->size))-1) | ((s->alignment)-1))+1);

  if (s->elements[0]->type == 11
      || s->elements[0]->type == 12
      || s->elements[0]->type == 3
      || s->elements[0]->alignment == 8)
    s->alignment = s->alignment > 8 ? s->alignment : 8;

}


ffi_status
ffi_prep_cif_machdep (ffi_cif *cif)
{

  unsigned i;
  ffi_type **ptr;
  unsigned bytes;
  unsigned fparg_count = 0, intarg_count = 0;
  unsigned flags = 0;
  unsigned size_al = 0;





  if (cif->abi == FFI_DARWIN)
    {
      darwin_adjust_aggregate_sizes (cif->rtype);
      for (i = 0; i < cif->nargs; i++)
 darwin_adjust_aggregate_sizes (cif->arg_types[i]);
    }

  if (cif->abi == FFI_AIX)
    {
      aix_adjust_aggregate_sizes (cif->rtype);
      for (i = 0; i < cif->nargs; i++)
 aix_adjust_aggregate_sizes (cif->arg_types[i]);
    }




  bytes = (LINKAGE_AREA_GPRS + ASM_NEEDS_REGISTERS) * sizeof(unsigned long);
  switch (cif->rtype->type)
    {


    case 4:
      flags |= FLAG_RETURNS_128BITS;
      flags |= FLAG_RETURNS_FP;
      break;


    case 3:
      flags |= FLAG_RETURNS_64BITS;

    case 2:
      flags |= FLAG_RETURNS_FP;
      break;

    case 11:
    case 12:



      flags |= FLAG_RETURNS_64BITS;
      break;

    case 13:
      flags |= FLAG_RETVAL_REFERENCE;
      flags |= FLAG_RETURNS_NOTHING;
      intarg_count++;

      break;
    case 0:
      flags |= FLAG_RETURNS_NOTHING;
      break;

    default:

      break;
    }







  for (ptr = cif->arg_types, i = cif->nargs; i > 0; i--, ptr++)
    {
      unsigned align_words;
      switch ((*ptr)->type)
 {
 case 2:
 case 3:
   fparg_count++;



   if (fparg_count > NUM_FPR_ARG_REGISTERS
       && (intarg_count & 0x01) != 0)
     intarg_count++;

   break;


 case 4:
   fparg_count += 2;


   if (fparg_count >= NUM_FPR_ARG_REGISTERS)



     intarg_count = (((((size_t) (intarg_count))-1) | ((4)-1))+1);

   break;


 case 11:
 case 12:







   if (intarg_count == NUM_GPR_ARG_REGISTERS-1
       || (intarg_count >= NUM_GPR_ARG_REGISTERS
           && (intarg_count & 0x01) != 0))
     intarg_count++;
   intarg_count += 2;

   break;

 case 13:
   size_al = (*ptr)->size;
   align_words = (*ptr)->alignment >> 2;
   if (align_words)
     intarg_count = (((((size_t) (intarg_count))-1) | ((align_words)-1))+1);







   intarg_count += (size_al + 3) / 4;


   break;

 default:


   intarg_count++;
   break;
 }
    }

  if (fparg_count != 0)
    flags |= FLAG_FP_ARGUMENTS;
  if (fparg_count != 0)
    bytes += NUM_FPR_ARG_REGISTERS * sizeof(double);







  if ((intarg_count + 2 * fparg_count) > NUM_GPR_ARG_REGISTERS)
    bytes += (intarg_count + 2 * fparg_count) * sizeof(long);

  else
    bytes += NUM_GPR_ARG_REGISTERS * sizeof(long);


  bytes = (((((size_t) (bytes))-1) | ((16)-1))+1) ;

  cif->flags = flags;
  cif->bytes = bytes;

  return FFI_OK;
}

extern void ffi_call_AIX(extended_cif *, long, unsigned, unsigned *,
    void (*fn)(void), void (*fn2)(void));

extern void ffi_call_DARWIN(extended_cif *, long, unsigned, unsigned *,
       void (*fn)(void), void (*fn2)(void), ffi_type*);

void
ffi_call (ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  extended_cif ecif;

  ecif.cif = cif;
  ecif.avalue = avalue;




  if ((rvalue == ((void*)0)) &&
      (cif->rtype->type == 13))
    {
      ecif.rvalue = __builtin_alloca (cif->rtype->size);
    }
  else
    ecif.rvalue = rvalue;

  switch (cif->abi)
    {
    case FFI_AIX:
      ffi_call_AIX(&ecif, -(long)cif->bytes, cif->flags, ecif.rvalue, fn,
     ((void (*)(void))ffi_prep_args));
      break;
    case FFI_DARWIN:
      ffi_call_DARWIN(&ecif, -(long)cif->bytes, cif->flags, ecif.rvalue, fn,
        ((void (*)(void))ffi_prep_args), cif->rtype);
      break;
    default:
                   ;
      break;
    }
}

static void flush_icache(char *);
static void flush_range(char *, int);




typedef struct aix_fd_struct {
  void *code_pointer;
  void *toc;
} aix_fd;
ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun)(ffi_cif*, void*, void**, void*),
        void *user_data,
        void *codeloc)
{
  unsigned int *tramp;
  struct ffi_aix_trampoline_struct *tramp_aix;
  aix_fd *fd;

  switch (cif->abi)
    {
      case FFI_DARWIN:

                                    ;

 tramp = (unsigned int *) &closure->tramp[0];
 tramp[0] = 0x7c0802a6;
 tramp[1] = 0x429f000d;
 tramp[4] = 0x7d6802a6;
 tramp[5] = 0x818b0000;
 tramp[6] = 0x7c0803a6;
 tramp[7] = 0x7d8903a6;
 tramp[8] = 0x816b0004;
 tramp[9] = 0x4e800420;
 tramp[2] = (unsigned long) ffi_closure_ASM;
 tramp[3] = (unsigned long) codeloc;

 closure->cif = cif;
 closure->fun = fun;
 closure->user_data = user_data;


 flush_range(codeloc, 24);

 break;

    case FFI_AIX:

      tramp_aix = (struct ffi_aix_trampoline_struct *) (closure->tramp);
      fd = (aix_fd *)(void *)ffi_closure_ASM;

                                      ;

      tramp_aix->code_pointer = fd->code_pointer;
      tramp_aix->toc = fd->toc;
      tramp_aix->static_chain = codeloc;
      closure->cif = cif;
      closure->fun = fun;
      closure->user_data = user_data;
      break;

    default:
      return FFI_BAD_ABI;
      break;
    }
  return FFI_OK;
}

static void
flush_icache(char *addr)
{

  ;

}

static void
flush_range(char * addr1, int size)
{

  int i;
  for (i = 0; i < size; i += 32)
    flush_icache(addr1+i);
  flush_icache(addr1+size-1);
}

typedef union
{
  float f;
  double d;
} ffi_dblfl;

ffi_type *
ffi_closure_helper_DARWIN (ffi_closure *, void *,
      unsigned long *, ffi_dblfl *);
ffi_type *
ffi_closure_helper_DARWIN (ffi_closure *closure, void *rvalue,
      unsigned long *pgr, ffi_dblfl *pfr)
{




  typedef double ldbits[2];

  union ldu
  {
    ldbits lb;
    long double ld;
  };

  void ** avalue;
  ffi_type ** arg_types;
  long i, avn;
  ffi_cif * cif;
  ffi_dblfl * end_pfr = pfr + NUM_FPR_ARG_REGISTERS;
  unsigned size_al;




  cif = closure->cif;
  avalue = __builtin_alloca (cif->nargs * sizeof(void *));

  if (cif->rtype->type == 13)
    {
      rvalue = (void *) *pgr;
      pgr++;

    }

  i = 0;
  avn = cif->nargs;
  arg_types = cif->arg_types;


  while (i < avn)
    {
      switch (arg_types[i]->type)
 {
 case 6:
 case 5:



   avalue[i] = (char *) pgr + 3;

   pgr++;
   break;

 case 8:
 case 7:



   avalue[i] = (char *) pgr + 2;

   pgr++;
   break;

 case 10:
 case 9:



 case 14:
   avalue[i] = pgr;

   pgr++;
   break;

 case 13:
   size_al = arg_types[i]->size;
   if (arg_types[i]->elements[0]->type == 3)
     size_al = (((((size_t) (arg_types[i]->size))-1) | ((8)-1))+1);







   if (size_al < 3 && cif->abi == FFI_DARWIN)
     avalue[i] = (char*) pgr + 4 - size_al;
   else
     avalue[i] = pgr;
   pgr += (size_al + 3) / 4;


   break;

 case 12:
 case 11:







   avalue[i] = pgr;
   pgr += 2;
   break;


 case 2:


   if (pfr < end_pfr)
     {
       double temp = pfr->d;
       pfr->f = (float) temp;
       avalue[i] = pfr;
       pfr++;
     }
   else
     {
       avalue[i] = pgr;
     }
   pgr++;
   break;

 case 3:


   if (pfr < end_pfr)
     {
       avalue[i] = pfr;
       pfr++;
     }
   else
     {
       avalue[i] = pgr;
     }



   pgr += 2;

   break;



 case 4:
   if (pfr + 1 < end_pfr)
     {
       avalue[i] = pfr;
       pfr += 2;
     }



   else if (pfr + 1 == end_pfr)
     {
       union ldu temp_ld;
       memcpy (&temp_ld.lb[0], pfr, sizeof(ldbits));
       memcpy (&temp_ld.lb[1], pgr + 2, sizeof(ldbits));
       avalue[i] = &temp_ld.ld;
       pfr++;
     }
   else
     {
       avalue[i] = pgr;
     }
   pgr += 4;

   break;

 default:
                ;
 }
      i++;
    }

  (closure->fun) (cif, rvalue, avalue, closure->user_data);


  return cif->rtype;
}
