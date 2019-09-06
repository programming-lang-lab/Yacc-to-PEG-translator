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
typedef int _Bool;





typedef void *PTR64 ;




typedef struct
{
  UINT64 x[2] ;
} fpreg;




struct ia64_args
{
  fpreg fp_regs[8];
  UINT64 gp_regs[8];
  UINT64 other_args[];
};




static inline void *
endian_adjust (void *addr, size_t len)
{



  return addr;

}
static size_t
hfa_type_size (int type)
{
  switch (type)
    {
    case (15 + 2):
      return sizeof(float);
    case (15 + 3):
      return sizeof(double);
    case (15 + 4):
      return sizeof(float);
    default:
      abort ();
    }
}




static void
hfa_type_load (fpreg *fpaddr, int type, void *addr)
{
  switch (type)
    {
    case (15 + 2):
     ;;
      return;
    case (15 + 3):
     ;;
      return;
    case (15 + 4):
     ;;
      return;
    default:
      abort ();
    }
}




static void
hfa_type_store (int type, void *addr, fpreg *fpaddr)
{
  switch (type)
    {
    case (15 + 2):
      {
 float result;
;;
 *(float *) addr = result;
 break;
      }
    case (15 + 3):
      {
 double result;
;;
 *(double *) addr = result;
 break;
      }
    case (15 + 4):
      {
 float result;
;;
 *(float *) addr = result;
 break;
      }
    default:
      abort ();
    }
}





static int
hfa_element_type (ffi_type *type, int nested)
{
  int element = 0;

  switch (type->type)
    {
    case 2:


      if (nested)
 element = (15 + 2);
      break;

    case 3:

      if (nested)
 element = (15 + 3);
      break;

    case 4:



      if (64 == 64 && nested)
 element = (15 + 4);
      break;

    case 13:
      {
 ffi_type **ptr = &type->elements[0];

 for (ptr = &type->elements[0]; *ptr ; ptr++)
   {
     int sub_element = hfa_element_type (*ptr, 1);
     if (sub_element == 0)
       return 0;

     if (element == 0)
       element = sub_element;
     else if (element != sub_element)
       return 0;
   }
      }
      break;

    default:
      return 0;
    }

  return element;
}




ffi_status
ffi_prep_cif_machdep(ffi_cif *cif)
{
  int flags;





  cif->bytes += __builtin_offsetof();
  if (cif->bytes < sizeof(struct ia64_args))
    cif->bytes = sizeof(struct ia64_args);


  flags = cif->rtype->type;
  switch (cif->rtype->type)
    {
    case 4:


      if (64 != 64)
 flags = (15 + 1) | (16 << 8);
      break;

    case 13:
      {
        size_t size = cif->rtype->size;
   int hfa_type = hfa_element_type (cif->rtype, 0);

 if (hfa_type != 0)
   {
     size_t nelts = size / hfa_type_size (hfa_type);
     if (nelts <= 8)
       flags = hfa_type | (size << 8);
   }
 else
   {
     if (size <= 32)
       flags = (15 + 1) | (size << 8);
   }
      }
      break;

    default:
      break;
    }
  cif->flags = flags;

  return FFI_OK;
}

extern int ffi_call_unix (struct ia64_args *, PTR64, void (*)(void), UINT64);

void
ffi_call(ffi_cif *cif, void (*fn)(void), void *rvalue, void **avalue)
{
  struct ia64_args *stack;
  long i, avn, gpcount, fpcount;
  ffi_type **p_arg;

                                   ;


  if (rvalue == ((void*)0) && cif->rtype->type != 0)
    rvalue = __builtin_alloca (cif->rtype->size);


  stack = __builtin_alloca (cif->bytes);

  gpcount = fpcount = 0;
  avn = cif->nargs;
  for (i = 0, p_arg = cif->arg_types; i < avn; i++, p_arg++)
    {
      switch ((*p_arg)->type)
 {
 case 6:
   stack->gp_regs[gpcount++] = *(SINT8 *)avalue[i];
   break;
 case 5:
   stack->gp_regs[gpcount++] = *(UINT8 *)avalue[i];
   break;
 case 8:
   stack->gp_regs[gpcount++] = *(SINT16 *)avalue[i];
   break;
 case 7:
   stack->gp_regs[gpcount++] = *(UINT16 *)avalue[i];
   break;
 case 10:
   stack->gp_regs[gpcount++] = *(SINT32 *)avalue[i];
   break;
 case 9:
   stack->gp_regs[gpcount++] = *(UINT32 *)avalue[i];
   break;
 case 12:
 case 11:
   stack->gp_regs[gpcount++] = *(UINT64 *)avalue[i];
   break;

 case 14:
   stack->gp_regs[gpcount++] = (UINT64)(PTR64) *(void **)avalue[i];
   break;

 case 2:
   if (gpcount < 8 && fpcount < 8)
    ;;
   {
     UINT32 tmp;
     memcpy (&tmp, avalue[i], sizeof (UINT32));
     stack->gp_regs[gpcount++] = tmp;
   }
   break;

 case 3:
   if (gpcount < 8 && fpcount < 8)
    ;;
   memcpy (&stack->gp_regs[gpcount++], avalue[i], sizeof (UINT64));
   break;

 case 4:
   if (gpcount & 1)
     gpcount++;
   if (64 == 64 && gpcount < 8 && fpcount < 8)
    ;;
   memcpy (&stack->gp_regs[gpcount], avalue[i], 16);
   gpcount += 2;
   break;

 case 13:
   {
     size_t size = (*p_arg)->size;
     size_t align = (*p_arg)->alignment;
     int hfa_type = hfa_element_type (*p_arg, 0);

                             ;
     if (align == 16 && (gpcount & 1))
       gpcount++;

     if (hfa_type != 0)
       {
  size_t hfa_size = hfa_type_size (hfa_type);
  size_t offset = 0;
  size_t gp_offset = gpcount * 8;

  while (fpcount < 8
         && offset < size
         && gp_offset < 8 * 8)
    {
      hfa_type_load (&stack->fp_regs[fpcount], hfa_type,
       avalue[i] + offset);
      offset += hfa_size;
      gp_offset += hfa_size;
      fpcount += 1;
    }
       }

     memcpy (&stack->gp_regs[gpcount], avalue[i], size);
     gpcount += (size + 7) / 8;
   }
   break;

 default:
   abort ();
 }
    }

  ffi_call_unix (stack, rvalue, fn, cif->flags);
}
extern void ffi_closure_unix ();

ffi_status
ffi_prep_closure_loc (ffi_closure* closure,
        ffi_cif* cif,
        void (*fun)(ffi_cif*,void*,void**,void*),
        void *user_data,
        void *codeloc)
{


  struct ia64_fd
  {
    UINT64 code_pointer;
    UINT64 gp;
  };

  struct ffi_ia64_trampoline_struct
  {
    UINT64 code_pointer;
    UINT64 fake_gp;
    UINT64 real_gp;
  };

  struct ffi_ia64_trampoline_struct *tramp;
  struct ia64_fd *fd;

  if (cif->abi != FFI_UNIX)
    return FFI_BAD_ABI;

  tramp = (struct ffi_ia64_trampoline_struct *)closure->tramp;
  fd = (struct ia64_fd *)(void *)ffi_closure_unix;

  tramp->code_pointer = fd->code_pointer;
  tramp->real_gp = fd->gp;
  tramp->fake_gp = (UINT64)(PTR64)codeloc;
  closure->cif = cif;
  closure->user_data = user_data;
  closure->fun = fun;

  return FFI_OK;
}


UINT64
ffi_closure_unix_inner (ffi_closure *closure, struct ia64_args *stack,
   void *rvalue, void *r8)
{
  ffi_cif *cif;
  void **avalue;
  ffi_type **p_arg;
  long i, avn, gpcount, fpcount;

  cif = closure->cif;
  avn = cif->nargs;
  avalue = __builtin_alloca (avn * sizeof (void *));



  if (cif->flags == 13)
    rvalue = r8;

  gpcount = fpcount = 0;
  for (i = 0, p_arg = cif->arg_types; i < avn; i++, p_arg++)
    {
      switch ((*p_arg)->type)
 {
 case 6:
 case 5:
   avalue[i] = endian_adjust(&stack->gp_regs[gpcount++], 1);
   break;
 case 8:
 case 7:
   avalue[i] = endian_adjust(&stack->gp_regs[gpcount++], 2);
   break;
 case 10:
 case 9:
   avalue[i] = endian_adjust(&stack->gp_regs[gpcount++], 4);
   break;
 case 12:
 case 11:
   avalue[i] = &stack->gp_regs[gpcount++];
   break;
 case 14:
   avalue[i] = endian_adjust(&stack->gp_regs[gpcount++], sizeof(void*));
   break;

 case 2:
   if (gpcount < 8 && fpcount < 8)
     {
       fpreg *addr = &stack->fp_regs[fpcount++];
       float result;
       avalue[i] = addr;
      ;;
       *(float *)addr = result;
     }
   else
     avalue[i] = endian_adjust(&stack->gp_regs[gpcount], 4);
   gpcount++;
   break;

 case 3:
   if (gpcount < 8 && fpcount < 8)
     {
       fpreg *addr = &stack->fp_regs[fpcount++];
       double result;
       avalue[i] = addr;
      ;;
       *(double *)addr = result;
     }
   else
     avalue[i] = &stack->gp_regs[gpcount];
   gpcount++;
   break;

 case 4:
   if (gpcount & 1)
     gpcount++;
   if (64 == 64 && gpcount < 8 && fpcount < 8)
     {
       fpreg *addr = &stack->fp_regs[fpcount++];
       float result;
       avalue[i] = addr;
      ;;
       *(float *)addr = result;
     }
   else
     avalue[i] = &stack->gp_regs[gpcount];
   gpcount += 2;
   break;

 case 13:
   {
     size_t size = (*p_arg)->size;
     size_t align = (*p_arg)->alignment;
     int hfa_type = hfa_element_type (*p_arg, 0);

                             ;
     if (align == 16 && (gpcount & 1))
       gpcount++;

     if (hfa_type != 0)
       {
  size_t hfa_size = hfa_type_size (hfa_type);
  size_t offset = 0;
  size_t gp_offset = gpcount * 8;
  void *addr = __builtin_alloca (size);

  avalue[i] = addr;

  while (fpcount < 8
         && offset < size
         && gp_offset < 8 * 8)
    {
      hfa_type_store (hfa_type, addr + offset,
        &stack->fp_regs[fpcount]);
      offset += hfa_size;
      gp_offset += hfa_size;
      fpcount += 1;
    }

  if (offset < size)
    memcpy (addr + offset, (char *)stack->gp_regs + gp_offset,
     size - offset);
       }
     else
       avalue[i] = &stack->gp_regs[gpcount];

     gpcount += (size + 7) / 8;
   }
   break;

 default:
   abort ();
 }
    }

  closure->fun (cif, rvalue, avalue, closure->user_data);

  return cif->flags;
}
