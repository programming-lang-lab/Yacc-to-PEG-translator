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

extern void ffi_call_SYSV(void (*)(void*, extended_cif*), extended_cif*,
  unsigned int, unsigned int, unsigned int*, void (*fn)(void),
  unsigned int, unsigned int);

extern void ffi_closure_SYSV(void);







void ffi_prep_args(void* stack, extended_cif* ecif)
{
 unsigned int i;
 ffi_type** p_arg;
 void** p_argv;
 void* stack_args_p = stack;

 p_argv = ecif->avalue;

 if (ecif == ((void*)0) || ecif->cif == ((void*)0)) {
  return;
 }

 if ((ecif->cif->rtype != ((void*)0)) &&
   (ecif->cif->rtype->type == 13))
 {



  char* addr = stack_args_p;
  memcpy(addr, &(ecif->rvalue), sizeof(unsigned int));
  stack_args_p += sizeof(unsigned int);
 }

 if (ecif->avalue == ((void*)0)) {
  return;
 }

 for (i = 0, p_arg = ecif->cif->arg_types; i < ecif->cif->nargs;
   i++, p_arg++)
 {
  size_t size = (*p_arg)->size;
  int type = (*p_arg)->type;
  void* value = p_argv[i];
  char* addr = stack_args_p;
  int aligned_size = (((((size_t) (size))-1) | ((sizeof(unsigned int))-1))+1);


  stack_args_p += aligned_size;

  switch (type)
  {
   case 5:
    *(unsigned int *)addr = (unsigned int)*(UINT8*)(value);
    break;
   case 6:
    *(signed int *)addr = (signed int)*(SINT8*)(value);
    break;
   case 7:
    *(unsigned int *)addr = (unsigned int)*(UINT16*)(value);
    break;
   case 8:
    *(signed int *)addr = (signed int)*(SINT16*)(value);
    break;
   case 13:
   case 10:
   case 9:
   case 2:
   case 12:
   case 11:
   case 3:
   default:
    memcpy(addr, value, aligned_size);
  }
 }
}

ffi_status ffi_prep_cif_machdep(ffi_cif* cif)
{

 switch (cif->abi)
 {
  case FFI_SYSV:
   break;
  default:
   return FFI_BAD_ABI;
 }
 return FFI_OK;
}

void ffi_call(ffi_cif* cif, void (*fn)(void), void* rvalue, void** avalue)
{
 extended_cif ecif;
 ecif.cif = cif;
 ecif.avalue = avalue;



 if ((rvalue == ((void*)0)) && (cif->rtype->type == 13)) {
  ecif.rvalue = __builtin_alloca (cif->rtype->size);
 } else {
  ecif.rvalue = rvalue;
 }

 switch (cif->abi)
 {
 case FFI_SYSV:
  ffi_call_SYSV(ffi_prep_args, &ecif, cif->bytes, cif->flags,
    ecif.rvalue, fn, cif->rtype->type, cif->rtype->size);
  break;
 default:
               ;
  break;
 }
}

void ffi_closure_call_SYSV(void* register_args, void* stack_args,
   ffi_closure* closure, void* rvalue,
   unsigned int* rtype, unsigned int* rsize)
{

 ffi_cif* cif = closure->cif;
 ffi_type** arg_types = cif->arg_types;






 char* stackclone = __builtin_alloca (cif->bytes);
 void** avalue = __builtin_alloca (cif->nargs * sizeof(void*));
 void* struct_rvalue = ((void*)0);
 char* ptr = stackclone;
 int i;


 int registers_used = cif->bytes;
 if (registers_used > (sizeof(unsigned int) * 6)) {
  registers_used = (sizeof(unsigned int) * 6);
 }
 memcpy(stackclone, register_args, registers_used);


 if (cif->bytes > (sizeof(unsigned int) * 6)) {
  int stack_used = cif->bytes - (sizeof(unsigned int) * 6);
  memcpy(stackclone + (sizeof(unsigned int) * 6), stack_args, stack_used);
 }


 if ((cif->rtype != ((void*)0)) && (cif->rtype->type == 13)) {
  struct_rvalue = *((void**)ptr);
  ptr += sizeof(unsigned int);
 }


 for (i = 0; i < cif->nargs; i++)
 {
  switch (arg_types[i]->type)
  {
   case 6:
   case 5:



    avalue[i] = ptr;

    break;
   case 8:
   case 7:



    avalue[i] = ptr;

    break;
   case 13:
    avalue[i] = (void*)ptr;
    break;
   case 11:
   case 12:
   case 3:
    avalue[i] = ptr;
    break;
   case 10:
   case 9:
   case 2:
   default:

    avalue[i] = ptr;
    break;
  }
  ptr += (((((size_t) (arg_types[i]->size))-1) | ((sizeof(unsigned int))-1))+1);
 }


 *rsize = cif->rtype->size;
 *rtype = cif->rtype->type;
 if (struct_rvalue != ((void*)0)) {
  closure->fun(cif, struct_rvalue, avalue, closure->user_data);

  *((void**)rvalue) = struct_rvalue;
 } else {
  closure->fun(cif, rvalue, avalue, closure->user_data);
 }
}

ffi_status ffi_prep_closure_loc(
  ffi_closure* closure, ffi_cif* cif,
  void (*fun)(ffi_cif*, void*, void**, void*),
  void* user_data, void* codeloc)
{
 unsigned long* tramp = (unsigned long*)&(closure->tramp[0]);
 unsigned long cls = (unsigned long)codeloc;
 unsigned long fn = 0;
 unsigned long fn_closure_call_sysv = (unsigned long)ffi_closure_call_SYSV;

 closure->cif = cif;
 closure->fun = fun;
 closure->user_data = user_data;

 switch (cif->abi)
 {
 case FFI_SYSV:
  fn = (unsigned long)ffi_closure_SYSV;



  tramp[0] = 0xb0000000 | ((fn >> 16) & 0xffff);

  tramp[1] = 0x31600000 | (fn & 0xffff);



  tramp[2] = 0xb0000000 | ((cls >> 16) & 0xffff);

  tramp[3] = 0x31800000 | (cls & 0xffff);



  tramp[4] = 0xb0000000 | ((fn_closure_call_sysv >> 16) & 0xffff);

  tramp[5] = 0x30600000 | (fn_closure_call_sysv & 0xffff);

  tramp[6] = 0x98085800;

  break;
 default:
  return FFI_BAD_ABI;
 }
 return FFI_OK;
}
