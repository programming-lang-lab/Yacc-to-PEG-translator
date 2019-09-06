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
const ffi_type ffi_type_void = {
  1, 1, 0, ((void*)0)
};

struct struct_align_uint8 { char c; UINT8 x; }; const ffi_type ffi_type_uint8 = { sizeof(UINT8), __builtin_offsetof(), 5, ((void*)0) };
struct struct_align_sint8 { char c; SINT8 x; }; const ffi_type ffi_type_sint8 = { sizeof(SINT8), __builtin_offsetof(), 6, ((void*)0) };
struct struct_align_uint16 { char c; UINT16 x; }; const ffi_type ffi_type_uint16 = { sizeof(UINT16), __builtin_offsetof(), 7, ((void*)0) };
struct struct_align_sint16 { char c; SINT16 x; }; const ffi_type ffi_type_sint16 = { sizeof(SINT16), __builtin_offsetof(), 8, ((void*)0) };
struct struct_align_uint32 { char c; UINT32 x; }; const ffi_type ffi_type_uint32 = { sizeof(UINT32), __builtin_offsetof(), 9, ((void*)0) };
struct struct_align_sint32 { char c; SINT32 x; }; const ffi_type ffi_type_sint32 = { sizeof(SINT32), __builtin_offsetof(), 10, ((void*)0) };
struct struct_align_uint64 { char c; UINT64 x; }; const ffi_type ffi_type_uint64 = { sizeof(UINT64), __builtin_offsetof(), 11, ((void*)0) };
struct struct_align_sint64 { char c; SINT64 x; }; const ffi_type ffi_type_sint64 = { sizeof(SINT64), __builtin_offsetof(), 12, ((void*)0) };

struct struct_align_pointer { char c; void* x; }; const ffi_type ffi_type_pointer = { sizeof(void*), __builtin_offsetof(), 14, ((void*)0) };

struct struct_align_float { char c; float x; }; const ffi_type ffi_type_float = { sizeof(float), __builtin_offsetof(), 2, ((void*)0) };
struct struct_align_double { char c; double x; }; const ffi_type ffi_type_double = { sizeof(double), __builtin_offsetof(), 3, ((void*)0) };
struct struct_align_longdouble { char c; long double x; }; const ffi_type ffi_type_longdouble = { sizeof(long double), __builtin_offsetof(), 4, ((void*)0) };



static ffi_type *ffi_elements_complex_float [2] = { (ffi_type *)(&ffi_type_float), ((void*)0) }; struct struct_align_complex_float { char c; _Complex float x; }; const ffi_type ffi_type_complex_float = { sizeof(_Complex float), __builtin_offsetof(), 15, (ffi_type **)ffi_elements_complex_float };
static ffi_type *ffi_elements_complex_double [2] = { (ffi_type *)(&ffi_type_double), ((void*)0) }; struct struct_align_complex_double { char c; _Complex double x; }; const ffi_type ffi_type_complex_double = { sizeof(_Complex double), __builtin_offsetof(), 15, (ffi_type **)ffi_elements_complex_double };

static ffi_type *ffi_elements_complex_longdouble [2] = { (ffi_type *)(&ffi_type_longdouble), ((void*)0) }; struct struct_align_complex_longdouble { char c; _Complex long double x; }; const ffi_type ffi_type_complex_longdouble = { sizeof(_Complex long double), __builtin_offsetof(), 15, (ffi_type **)ffi_elements_complex_longdouble };
