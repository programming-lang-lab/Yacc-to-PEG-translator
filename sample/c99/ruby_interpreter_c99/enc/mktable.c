




typedef long unsigned int size_t;
typedef int wchar_t;
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








typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;



struct _IO_FILE;
typedef struct _IO_FILE __FILE;



struct _IO_FILE;


typedef struct _IO_FILE FILE;




typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef char* va_list;
typedef char* __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * restrict, const char * restrict,
   __gnuc_va_list, int *restrict);
extern int _IO_vfprintf (_IO_FILE *restrict, const char *restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;
typedef _G_fpos_t fpos_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s)  ;
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
extern FILE *fopen (const char *restrict __filename,
      const char *restrict __modes) ;




extern FILE *freopen (const char *restrict __filename,
        const char *restrict __modes,
        FILE *restrict __stream) ;
extern void setbuf (FILE *restrict __stream, char *restrict __buf) ;



extern int setvbuf (FILE *restrict __stream, char *restrict __buf,
      int __modes, size_t __n) ;
extern int fprintf (FILE *restrict __stream,
      const char *restrict __format, ...);




extern int printf (const char *restrict __format, ...);

extern int sprintf (char *restrict __s,
      const char *restrict __format, ...) ;





extern int vfprintf (FILE *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *restrict __s, const char *restrict __format,
       __gnuc_va_list __arg) ;



extern int snprintf (char *restrict __s, size_t __maxlen,
       const char *restrict __format, ...)
      ;

extern int vsnprintf (char *restrict __s, size_t __maxlen,
        const char *restrict __format, __gnuc_va_list __arg)
      ;
extern int fscanf (FILE *restrict __stream,
     const char *restrict __format, ...) ;




extern int scanf (const char *restrict __format, ...) ;

extern int sscanf (const char *restrict __s,
     const char *restrict __format, ...) ;
extern int fscanf (FILE *restrict __stream, const char *restrict __format, ...)  ;


extern int scanf (const char *restrict __format, ...)  ;

extern int sscanf (const char *restrict __s, const char *restrict __format, ...)  ;
extern int vfscanf (FILE *restrict __s, const char *restrict __format,
      __gnuc_va_list __arg)
      ;





extern int vscanf (const char *restrict __format, __gnuc_va_list __arg)
      ;


extern int vsscanf (const char *restrict __s,
      const char *restrict __format, __gnuc_va_list __arg)
      ;
extern int vfscanf (FILE *restrict __s, const char *restrict __format, __gnuc_va_list __arg) 



      ;
extern int vscanf (const char *restrict __format, __gnuc_va_list __arg) 

      ;
extern int vsscanf (const char *restrict __s, const char *restrict __format, __gnuc_va_list __arg)  



     ;
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
extern char *fgets (char *restrict __s, int __n, FILE *restrict __stream)
          ;
extern char *gets (char *__s) ;
extern int fputs (const char *restrict __s, FILE *restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *restrict __ptr, size_t __size,
       size_t __n, FILE *restrict __stream) ;




extern size_t fwrite (const void *restrict __ptr, size_t __size,
        size_t __n, FILE *restrict __s);
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
extern int fgetpos (FILE *restrict __stream, fpos_t *restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream)  ;

extern int ferror (FILE *__stream)  ;
extern void perror (const char *__s);






struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, const char *__locale) ;


extern struct lconv *localeconv (void) ;











enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
      ;
extern const __int32_t **__ctype_tolower_loc (void)
      ;
extern const __int32_t **__ctype_toupper_loc (void)
      ;
extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;




extern int isblank (int) ;



typedef long int ptrdiff_t;







typedef unsigned char OnigUChar;
typedef unsigned int OnigCodePoint;
typedef unsigned int OnigCtype;
typedef size_t OnigDistance;
typedef ptrdiff_t OnigPosition;
typedef unsigned int OnigCaseFoldType;

extern OnigCaseFoldType OnigDefaultCaseFoldFlag;
typedef struct {
  int byte_len;
  int code_len;
  OnigCodePoint code[3];
} OnigCaseFoldCodeItem;

typedef struct {
  OnigCodePoint esc;
  OnigCodePoint anychar;
  OnigCodePoint anytime;
  OnigCodePoint zero_or_one_time;
  OnigCodePoint one_or_more_time;
  OnigCodePoint anychar_anytime;
} OnigMetaCharTableType;

typedef int (*OnigApplyAllCaseFoldFunc)(OnigCodePoint from, OnigCodePoint* to, int to_len, void* arg);

typedef struct OnigEncodingTypeST {
  int (*precise_mbc_enc_len)(const OnigUChar* p,const OnigUChar* e, const struct OnigEncodingTypeST* enc);
  const char* name;
  int max_enc_len;
  int min_enc_len;
  int (*is_mbc_newline)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  OnigCodePoint (*mbc_to_code)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*code_to_mbclen)(OnigCodePoint code, const struct OnigEncodingTypeST* enc);
  int (*code_to_mbc)(OnigCodePoint code, OnigUChar *buf, const struct OnigEncodingTypeST* enc);
  int (*mbc_case_fold)(OnigCaseFoldType flag, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, const struct OnigEncodingTypeST* enc);
  int (*apply_all_case_fold)(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, const struct OnigEncodingTypeST* enc);
  int (*get_case_fold_codes_by_str)(OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem acs[], const struct OnigEncodingTypeST* enc);
  int (*property_name_to_ctype)(const struct OnigEncodingTypeST* enc, const OnigUChar* p, const OnigUChar* end);
  int (*is_code_ctype)(OnigCodePoint code, OnigCtype ctype, const struct OnigEncodingTypeST* enc);
  int (*get_ctype_code_range)(OnigCtype ctype, OnigCodePoint* sb_out, const OnigCodePoint* ranges[], const struct OnigEncodingTypeST* enc);
  OnigUChar* (*left_adjust_char_head)(const OnigUChar* start, const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*is_allowed_reverse_match)(const OnigUChar* p, const OnigUChar* end, const struct OnigEncodingTypeST* enc);
  int (*case_map)(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);
  int ruby_encoding_index;
  unsigned int flags;
} OnigEncodingType;

typedef const OnigEncodingType* OnigEncoding;

extern const OnigEncodingType OnigEncodingASCII;

extern const OnigEncodingType OnigEncodingISO_8859_1;
extern const OnigEncodingType OnigEncodingISO_8859_2;
extern const OnigEncodingType OnigEncodingISO_8859_3;
extern const OnigEncodingType OnigEncodingISO_8859_4;
extern const OnigEncodingType OnigEncodingISO_8859_5;
extern const OnigEncodingType OnigEncodingISO_8859_6;
extern const OnigEncodingType OnigEncodingISO_8859_7;
extern const OnigEncodingType OnigEncodingISO_8859_8;
extern const OnigEncodingType OnigEncodingISO_8859_9;
extern const OnigEncodingType OnigEncodingISO_8859_10;
extern const OnigEncodingType OnigEncodingISO_8859_11;
extern const OnigEncodingType OnigEncodingISO_8859_13;
extern const OnigEncodingType OnigEncodingISO_8859_14;
extern const OnigEncodingType OnigEncodingISO_8859_15;
extern const OnigEncodingType OnigEncodingISO_8859_16;
extern const OnigEncodingType OnigEncodingUTF_8;
extern const OnigEncodingType OnigEncodingUTF_16BE;
extern const OnigEncodingType OnigEncodingUTF_16LE;
extern const OnigEncodingType OnigEncodingUTF_32BE;
extern const OnigEncodingType OnigEncodingUTF_32LE;
extern const OnigEncodingType OnigEncodingEUC_JP;
extern const OnigEncodingType OnigEncodingEUC_TW;
extern const OnigEncodingType OnigEncodingEUC_KR;
extern const OnigEncodingType OnigEncodingEUC_CN;
extern const OnigEncodingType OnigEncodingShift_JIS;
extern const OnigEncodingType OnigEncodingWindows_31J;

extern const OnigEncodingType OnigEncodingKOI8_R;
extern const OnigEncodingType OnigEncodingKOI8_U;
extern const OnigEncodingType OnigEncodingWindows_1250;
extern const OnigEncodingType OnigEncodingWindows_1251;
extern const OnigEncodingType OnigEncodingWindows_1252;
extern const OnigEncodingType OnigEncodingWindows_1253;
extern const OnigEncodingType OnigEncodingWindows_1254;
extern const OnigEncodingType OnigEncodingWindows_1257;
extern const OnigEncodingType OnigEncodingBIG5;
extern const OnigEncodingType OnigEncodingGB18030;
extern
int onigenc_ascii_only_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);
extern
int onigenc_mbclen_approximate(const OnigUChar* p,const OnigUChar* e, const struct OnigEncodingTypeST* enc);
extern
OnigUChar* onigenc_step_back(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, int n);



extern
int onigenc_init(void);
extern
int onigenc_set_default_encoding(OnigEncoding enc);
extern
OnigEncoding onigenc_get_default_encoding(void);
extern
OnigUChar* onigenc_get_right_adjust_char_head_with_prev(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, const OnigUChar** prev);
extern
OnigUChar* onigenc_get_prev_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
OnigUChar* onigenc_get_left_adjust_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
OnigUChar* onigenc_get_right_adjust_char_head(OnigEncoding enc, const OnigUChar* start, const OnigUChar* s, const OnigUChar* end);
extern
int onigenc_strlen(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern
int onigenc_strlen_null(OnigEncoding enc, const OnigUChar* p);
extern
int onigenc_str_bytelen_null(OnigEncoding enc, const OnigUChar* p);
typedef unsigned int OnigOptionType;
typedef struct {
  unsigned int op;
  unsigned int op2;
  unsigned int behavior;
  OnigOptionType options;
  OnigMetaCharTableType meta_char_table;
} OnigSyntaxType;

extern const OnigSyntaxType OnigSyntaxASIS;
extern const OnigSyntaxType OnigSyntaxPosixBasic;
extern const OnigSyntaxType OnigSyntaxPosixExtended;
extern const OnigSyntaxType OnigSyntaxEmacs;
extern const OnigSyntaxType OnigSyntaxGrep;
extern const OnigSyntaxType OnigSyntaxGnuRegex;
extern const OnigSyntaxType OnigSyntaxJava;
extern const OnigSyntaxType OnigSyntaxPerl58;
extern const OnigSyntaxType OnigSyntaxPerl58_NG;
extern const OnigSyntaxType OnigSyntaxPerl;
extern const OnigSyntaxType OnigSyntaxRuby;
extern const OnigSyntaxType OnigSyntaxPython;
extern const OnigSyntaxType* OnigDefaultSyntax;
typedef struct OnigCaptureTreeNodeStruct {
  int group;
  OnigPosition beg;
  OnigPosition end;
  int allocated;
  int num_childs;
  struct OnigCaptureTreeNodeStruct** childs;
} OnigCaptureTreeNode;


struct re_registers {
  int allocated;
  int num_regs;
  OnigPosition* beg;
  OnigPosition* end;

  OnigCaptureTreeNode* history_root;
};
typedef struct re_registers OnigRegion;

typedef struct {
  OnigEncoding enc;
  OnigUChar* par;
  OnigUChar* par_end;
} OnigErrorInfo;

typedef struct {
  int lower;
  int upper;
} OnigRepeatRange;

typedef void (*OnigWarnFunc)(const char* s);
extern void onig_null_warn(const char* s);




typedef struct re_pattern_buffer {

  unsigned char* p;
  unsigned int used;
  unsigned int alloc;

  int num_mem;
  int num_repeat;
  int num_null_check;
  int num_comb_exp_check;
  int num_call;
  unsigned int capture_history;
  unsigned int bt_mem_start;
  unsigned int bt_mem_end;
  int stack_pop_level;
  int repeat_range_alloc;

  OnigOptionType options;

  OnigRepeatRange* repeat_range;

  OnigEncoding enc;
  const OnigSyntaxType* syntax;
  void* name_table;
  OnigCaseFoldType case_fold_flag;


  int optimize;
  int threshold_len;
  int anchor;
  OnigDistance anchor_dmin;
  OnigDistance anchor_dmax;
  int sub_anchor;
  unsigned char *exact;
  unsigned char *exact_end;
  unsigned char map[256];
  int *int_map;
  int *int_map_backward;
  OnigDistance dmin;
  OnigDistance dmax;


  struct re_pattern_buffer* chain;
} OnigRegexType;

typedef OnigRegexType* OnigRegex;


typedef OnigRegexType regex_t;



typedef struct {
  int num_of_elements;
  OnigEncoding pattern_enc;
  OnigEncoding target_enc;
  const OnigSyntaxType* syntax;
  OnigOptionType option;
  OnigCaseFoldType case_fold_flag;
} OnigCompileInfo;


extern
int onig_initialize(OnigEncoding encodings[], int n);
extern
int onig_init(void);
extern
int onig_error_code_to_str(OnigUChar* s, OnigPosition err_code, ...);
extern
void onig_set_warn_func(OnigWarnFunc f);
extern
void onig_set_verb_warn_func(OnigWarnFunc f);
extern
int onig_new(OnigRegex*, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax, OnigErrorInfo* einfo);
extern
int onig_reg_init(OnigRegex reg, OnigOptionType option, OnigCaseFoldType case_fold_flag, OnigEncoding enc, const OnigSyntaxType* syntax);
extern
int onig_new_without_alloc(OnigRegex, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigOptionType option, OnigEncoding enc, const OnigSyntaxType* syntax, OnigErrorInfo* einfo);
extern
int onig_new_deluxe(OnigRegex* reg, const OnigUChar* pattern, const OnigUChar* pattern_end, OnigCompileInfo* ci, OnigErrorInfo* einfo);
extern
void onig_free(OnigRegex);
extern
void onig_free_body(OnigRegex);
extern
OnigPosition onig_scan(OnigRegex reg, const OnigUChar* str, const OnigUChar* end, OnigRegion* region, OnigOptionType option, int (*scan_callback)(OnigPosition, OnigPosition, OnigRegion*, void*), void* callback_arg);
extern
OnigPosition onig_search(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* start, const OnigUChar* range, OnigRegion* region, OnigOptionType option);
extern
OnigPosition onig_search_gpos(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* global_pos, const OnigUChar* start, const OnigUChar* range, OnigRegion* region, OnigOptionType option);
extern
OnigPosition onig_match(OnigRegex, const OnigUChar* str, const OnigUChar* end, const OnigUChar* at, OnigRegion* region, OnigOptionType option);
extern
OnigRegion* onig_region_new(void);
extern
void onig_region_init(OnigRegion* region);
extern
void onig_region_free(OnigRegion* region, int free_self);
extern
void onig_region_copy(OnigRegion* to, const OnigRegion* from);
extern
void onig_region_clear(OnigRegion* region);
extern
int onig_region_resize(OnigRegion* region, int n);
extern
int onig_region_set(OnigRegion* region, int at, int beg, int end);
extern
int onig_name_to_group_numbers(OnigRegex reg, const OnigUChar* name, const OnigUChar* name_end, int** nums);
extern
int onig_name_to_backref_number(OnigRegex reg, const OnigUChar* name, const OnigUChar* name_end, const OnigRegion *region);
extern
int onig_foreach_name(OnigRegex reg, int (*func)(const OnigUChar*, const OnigUChar*,int,int*,OnigRegex,void*), void* arg);
extern
int onig_number_of_names(const OnigRegexType *reg);
extern
int onig_number_of_captures(const OnigRegexType *reg);
extern
int onig_number_of_capture_histories(const OnigRegexType *reg);
extern
OnigCaptureTreeNode* onig_get_capture_tree(OnigRegion* region);
extern
int onig_capture_tree_traverse(OnigRegion* region, int at, int(*callback_func)(int,OnigPosition,OnigPosition,int,int,void*), void* arg);
extern
int onig_noname_group_capture_is_active(const OnigRegexType *reg);
extern
OnigEncoding onig_get_encoding(const OnigRegexType *reg);
extern
OnigOptionType onig_get_options(const OnigRegexType *reg);
extern
OnigCaseFoldType onig_get_case_fold_flag(const OnigRegexType *reg);
extern
const OnigSyntaxType* onig_get_syntax(const OnigRegexType *reg);
extern
int onig_set_default_syntax(const OnigSyntaxType* syntax);
extern
void onig_copy_syntax(OnigSyntaxType* to, const OnigSyntaxType* from);
extern
unsigned int onig_get_syntax_op(const OnigSyntaxType* syntax);
extern
unsigned int onig_get_syntax_op2(const OnigSyntaxType* syntax);
extern
unsigned int onig_get_syntax_behavior(const OnigSyntaxType* syntax);
extern
OnigOptionType onig_get_syntax_options(const OnigSyntaxType* syntax);
extern
void onig_set_syntax_op(OnigSyntaxType* syntax, unsigned int op);
extern
void onig_set_syntax_op2(OnigSyntaxType* syntax, unsigned int op2);
extern
void onig_set_syntax_behavior(OnigSyntaxType* syntax, unsigned int behavior);
extern
void onig_set_syntax_options(OnigSyntaxType* syntax, OnigOptionType options);
extern
int onig_set_meta_char(OnigSyntaxType* syntax, unsigned int what, OnigCodePoint code);
extern
void onig_copy_encoding(OnigEncodingType *to, OnigEncoding from);
extern
OnigCaseFoldType onig_get_default_case_fold_flag(void);
extern
int onig_set_default_case_fold_flag(OnigCaseFoldType case_fold_flag);
extern
unsigned int onig_get_match_stack_limit_size(void);
extern
int onig_set_match_stack_limit_size(unsigned int size);
extern
unsigned int onig_get_parse_depth_limit(void);
extern
int onig_set_parse_depth_limit(unsigned int depth);
extern
int onig_end(void);
extern
const char* onig_version(void);
extern
const char* onig_copyright(void);




typedef struct {
  OnigCodePoint from;
  OnigCodePoint to;
} OnigPairCaseFoldCodes;
typedef struct {
  short int len;
  const OnigUChar name[6];
  int ctype;
} PosixBracketEntryType;
extern int onigenc_ascii_apply_all_case_fold(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, OnigEncoding enc);
extern int onigenc_ascii_get_case_fold_codes_by_str(OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[], OnigEncoding enc);
extern int onigenc_apply_all_case_fold_with_map(int map_size, const OnigPairCaseFoldCodes map[], int ess_tsett_flag, OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg);
extern int onigenc_get_case_fold_codes_by_str_with_map(int map_size, const OnigPairCaseFoldCodes map[], int ess_tsett_flag, OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[]);
extern int onigenc_not_support_get_ctype_code_range(OnigCtype ctype, OnigCodePoint* sb_out, const OnigCodePoint* ranges[], OnigEncoding enc);
extern int onigenc_is_mbc_newline_0x0a(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_single_byte_ascii_only_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);



extern int onigenc_ascii_mbc_case_fold(OnigCaseFoldType flag, const OnigUChar** p, const OnigUChar* end, OnigUChar* lower, OnigEncoding enc);
extern int onigenc_single_byte_mbc_enc_len(const OnigUChar* p, const OnigUChar* e, OnigEncoding enc);
extern OnigCodePoint onigenc_single_byte_mbc_to_code(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_single_byte_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_single_byte_code_to_mbc(OnigCodePoint code, OnigUChar *buf, OnigEncoding enc);
extern OnigUChar* onigenc_single_byte_left_adjust_char_head(const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_always_true_is_allowed_reverse_match(const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_always_false_is_allowed_reverse_match(const OnigUChar* s, const OnigUChar* end, OnigEncoding enc);
extern int onigenc_ascii_is_code_ctype(OnigCodePoint code, unsigned int ctype, OnigEncoding enc);


extern OnigCodePoint onigenc_mbn_mbc_to_code(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_mbn_mbc_case_fold(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar** p, const OnigUChar* end, OnigUChar* lower);
extern int onigenc_mb2_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_mb2_code_to_mbc(OnigEncoding enc, OnigCodePoint code, OnigUChar *buf);
extern int onigenc_minimum_property_name_to_ctype(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_unicode_property_name_to_ctype(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end);
extern int onigenc_mb2_is_code_ctype(OnigEncoding enc, OnigCodePoint code, unsigned int ctype);
extern int onigenc_mb4_code_to_mbclen(OnigCodePoint code, OnigEncoding enc);
extern int onigenc_mb4_code_to_mbc(OnigEncoding enc, OnigCodePoint code, OnigUChar *buf);
extern int onigenc_mb4_is_code_ctype(OnigEncoding enc, OnigCodePoint code, unsigned int ctype);

extern int onigenc_unicode_case_map(OnigCaseFoldType* flagP, const OnigUChar** pp, const OnigUChar* end, OnigUChar* to, OnigUChar* to_end, const struct OnigEncodingTypeST* enc);



extern int onigenc_unicode_is_code_ctype(OnigCodePoint code, unsigned int ctype, OnigEncoding enc);
extern int onigenc_utf16_32_get_ctype_code_range(OnigCtype ctype, OnigCodePoint *sb_out, const OnigCodePoint* ranges[], OnigEncoding enc);
extern int onigenc_unicode_ctype_code_range(int ctype, const OnigCodePoint* ranges[]);
extern int onigenc_unicode_get_case_fold_codes_by_str(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[]);
extern int onigenc_unicode_mbc_case_fold(OnigEncoding enc, OnigCaseFoldType flag, const OnigUChar** pp, const OnigUChar* end, OnigUChar* fold);
extern int onigenc_unicode_apply_all_case_fold(OnigCaseFoldType flag, OnigApplyAllCaseFoldFunc f, void* arg, OnigEncoding enc);
extern const OnigUChar OnigEncISO_8859_1_ToLowerCaseTable[];
extern const OnigUChar OnigEncISO_8859_1_ToUpperCaseTable[];

extern int
onigenc_with_ascii_strncmp(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, const OnigUChar* sascii , int n);
extern int
onigenc_with_ascii_strnicmp(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, const OnigUChar* sascii , int n);
extern OnigUChar*
onigenc_step(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end, int n);


extern int onig_is_in_code_range(const OnigUChar* p, OnigCodePoint code);

extern OnigEncoding OnigEncDefaultCharEncoding;
extern const OnigUChar OnigEncAsciiToLowerCaseTable[];
extern const OnigUChar OnigEncAsciiToUpperCaseTable[];
extern const unsigned short OnigEncAsciiCtypeTable[];
typedef struct {
  int num;
  const char* name;
} ENC_INFO;

static ENC_INFO Info[] = {
  { 0, "ASCII"},
  { 1, "UNICODE_ISO_8859_1"},
  { 2, "ISO_8859_1"},
  { 3, "ISO_8859_2"},
  { 4, "ISO_8859_3"},
  { 5, "ISO_8859_4"},
  { 6, "ISO_8859_5"},
  { 7, "ISO_8859_6"},
  { 8, "ISO_8859_7"},
  { 9, "ISO_8859_8"},
  { 10, "ISO_8859_9"},
  { 11, "ISO_8859_10"},
  { 12, "ISO_8859_11"},
  { 13, "ISO_8859_13"},
  { 14, "ISO_8859_14"},
  { 15, "ISO_8859_15"},
  { 16, "ISO_8859_16"},
  { 17, "KOI8"},
  { 18, "KOI8_R"}
};


static int IsAlpha(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha);

  if (c >= 0x41 && c <= 0x5a) return 1;
  if (c >= 0x61 && c <= 0x7a) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 10:
    if (c == 0xaa) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    break;

  case 3:
    if (c == 0xa1 || c == 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c >= 0xae && c <= 0xaf) return 1;
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 4:
    if (c == 0xa1) return 1;
    if (c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb1) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xc2) return 1;
    if (c >= 0xc4 && c <= 0xcf) return 1;
    if (c >= 0xd1 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xe2) return 1;
    if (c >= 0xe4 && c <= 0xef) return 1;
    if (c >= 0xf1 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 5:
    if (c >= 0xa1 && c <= 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xae) return 1;
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 6:
    if (c >= 0xa1 && c <= 0xcf && c != 0xad) return 1;
    if (c >= 0xd0 && c <= 0xff && c != 0xf0 && c != 0xfd) return 1;
    break;

  case 7:
    if (c >= 0xc1 && c <= 0xda) return 1;
    if (c >= 0xe0 && c <= 0xf2) return 1;
    break;

  case 8:
    if (c == 0xb6) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c == 0xc0) return 1;
    if (c >= 0xc1 && c <= 0xdb && c != 0xd2) return 1;
    if (c >= 0xdc && c <= 0xfe) return 1;
    break;

  case 9:
    if (c == 0xb5) return 1;
    if (c >= 0xe0 && c <= 0xfa) return 1;
    break;

  case 11:
    if (c >= 0xa1 && c <= 0xa6) return 1;
    if (c >= 0xa8 && c <= 0xac) return 1;
    if (c == 0xae || c == 0xaf) return 1;
    if (c >= 0xb1 && c <= 0xb6) return 1;
    if (c >= 0xb8 && c <= 0xbc) return 1;
    if (c >= 0xbe && c <= 0xff) return 1;
    break;

  case 12:
    if (c >= 0xa1 && c <= 0xda) return 1;
    if (c >= 0xdf && c <= 0xfb) return 1;
    break;

  case 13:
    if (c == 0xa8) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xb8) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xbf && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 14:
    if (c == 0xa1 || c == 0xa2) return 1;
    if (c == 0xa4 || c == 0xa5) return 1;
    if (c == 0xa6 || c == 0xa8) return 1;
    if (c >= 0xaa && c <= 0xac) return 1;
    if (c >= 0xaf && c <= 0xb5) return 1;
    if (c >= 0xb7 && c <= 0xff) return 1;
    break;

  case 15:
    if (c == 0xaa) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xb4) return 1;
    if (c == 0xb8) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbd) return 1;
    if (c == 0xbe) return 1;
    break;

  case 16:
    if (c == 0xa1) return 1;
    if (c == 0xa2) return 1;
    if (c == 0xa3) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xac) return 1;
    if (c == 0xae) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb2) return 1;
    if (c == 0xb3) return 1;
    if (c == 0xb4) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbd) return 1;
    if (c == 0xbe) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xde) return 1;
    if (c >= 0xdf && c <= 0xff) return 1;
    break;

  case 18:
    if (c == 0xa3 || c == 0xb3) return 1;

  case 17:
    if (c >= 0xc0 && c <= 0xff) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsBlank(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISblank);

  if (c == 0x09 || c == 0x20) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
    if (c == 0xa0) return 1;
    break;

  case 18:
    if (c == 0x9a) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsCntrl(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _IScntrl);

  if (c >= 0x00 && c <= 0x1F) return 1;

  switch (enc) {
  case 1:
    if (c == 0xad) return 1;

  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
    if (c >= 0x7f && c <= 0x9F) return 1;
    break;


  case 18:
    if (c == 0x7f) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsDigit(int enc , int c)
{
  if (c >= 0x30 && c <= 0x39) return 1;
  return 0;
}

static int IsGraph(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISgraph);

  if (c >= 0x21 && c <= 0x7e) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 10:
  case 11:
  case 13:
  case 14:
  case 15:
  case 16:
    if (c >= 0xa1 && c <= 0xff) return 1;
    break;

  case 4:
    if (c >= 0xa1) {
      if (c == 0xa5 || c == 0xae || c == 0xbe || c == 0xc3 || c == 0xd0 ||
   c == 0xe3 || c == 0xf0)
 return 0;
      else
 return 1;
    }
    break;

  case 7:
    if (c == 0xa4 || c == 0xac || c == 0xad || c == 0xbb || c == 0xbf)
      return 1;
    if (c >= 0xc1 && c <= 0xda) return 1;
    if (c >= 0xe0 && c <= 0xf2) return 1;
    break;

  case 8:
    if (c >= 0xa1 && c <= 0xfe &&
 c != 0xa4 && c != 0xa5 && c != 0xaa &&
 c != 0xae && c != 0xd2) return 1;
    break;

  case 9:
    if (c >= 0xa2 && c <= 0xfa) {
      if (c >= 0xbf && c <= 0xde) return 0;
      return 1;
    }
    break;

  case 12:
    if (c >= 0xa1 && c <= 0xda) return 1;
    if (c >= 0xdf && c <= 0xfb) return 1;
    break;

  case 17:
    if (c >= 0xc0 && c <= 0xff) return 1;
    break;

  case 18:
    if (c >= 0x80 && c <= 0xff && c != 0x9a) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsLower(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISlower);

  if (c >= 0x61 && c <= 0x7a) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 10:
    if (c == 0xaa) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xdf && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    break;

  case 3:
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c >= 0xdf && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 4:
    if (c == 0xb1) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c == 0xbf) return 1;
    if (c == 0xdf) return 1;
    if (c >= 0xe0 && c <= 0xe2) return 1;
    if (c >= 0xe4 && c <= 0xef) return 1;
    if (c >= 0xf1 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 5:
    if (c == 0xa2) return 1;
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c == 0xdf) return 1;
    if (c >= 0xe0 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 6:
    if (c >= 0xd0 && c <= 0xff && c != 0xf0 && c != 0xfd) return 1;
    break;

  case 7:
    break;

  case 8:
    if (c == 0xc0) return 1;
    if (c >= 0xdc && c <= 0xfe) return 1;
    break;

  case 9:
    if (c == 0xb5) return 1;
    break;

  case 11:
    if (c >= 0xb1 && c <= 0xb6) return 1;
    if (c >= 0xb8 && c <= 0xbc) return 1;
    if (c == 0xbe || c == 0xbf) return 1;
    if (c >= 0xdf && c <= 0xff) return 1;
    break;

  case 12:
    break;

  case 13:
    if (c == 0xb5) return 1;
    if (c == 0xb8) return 1;
    if (c == 0xba) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xdf && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 14:
    if (c == 0xa2) return 1;
    if (c == 0xa5) return 1;
    if (c == 0xab) return 1;
    if (c == 0xb1 || c == 0xb3 || c == 0xb5) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbe || c == 0xbf) return 1;
    if (c >= 0xdf && c <= 0xff) return 1;
    break;

  case 15:
    if (c == 0xaa) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xdf && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xb8) return 1;
    if (c == 0xbd) return 1;
    break;

  case 16:
    if (c == 0xa2) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xae) return 1;
    if (c == 0xb3) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbd) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xdf && c <= 0xff) return 1;
    break;

  case 18:
    if (c == 0xa3) return 1;

  case 17:
    if (c >= 0xc0 && c <= 0xdf) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsPrint(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISprint);

  if (c >= 0x20 && c <= 0x7e) return 1;

  switch (enc) {
  case 1:

    if (c == 0x85) return 1;

  case 2:
  case 3:
  case 5:
  case 6:
  case 10:
  case 11:
  case 13:
  case 14:
  case 15:
  case 16:
    if (c >= 0xa0 && c <= 0xff) return 1;
    break;

  case 4:
    if (c >= 0xa0) {
      if (c == 0xa5 || c == 0xae || c == 0xbe || c == 0xc3 || c == 0xd0 ||
   c == 0xe3 || c == 0xf0)
 return 0;
      else
 return 1;
    }
    break;

  case 7:
    if (c == 0xa0) return 1;
    if (c == 0xa4 || c == 0xac || c == 0xad || c == 0xbb || c == 0xbf)
      return 1;
    if (c >= 0xc1 && c <= 0xda) return 1;
    if (c >= 0xe0 && c <= 0xf2) return 1;
    break;

  case 8:
    if (c >= 0xa0 && c <= 0xfe &&
 c != 0xa4 && c != 0xa5 && c != 0xaa &&
 c != 0xae && c != 0xd2) return 1;
    break;

  case 9:
    if (c >= 0xa0 && c <= 0xfa) {
      if (c >= 0xbf && c <= 0xde) return 0;
      if (c == 0xa1) return 0;
      return 1;
    }
    break;

  case 12:
    if (c >= 0xa0 && c <= 0xda) return 1;
    if (c >= 0xdf && c <= 0xfb) return 1;
    break;

  case 17:
    if (c == 0xa0) return 1;
    if (c >= 0xc0 && c <= 0xff) return 1;
    break;

  case 18:
    if (c >= 0x80 && c <= 0xff) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsPunct(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISpunct);

  if (enc == 1) {
    if (c == 0x24 || c == 0x2b || c == 0x5e || c == 0x60 ||
        c == 0x7c || c == 0x7e) return 1;
    if (c >= 0x3c && c <= 0x3e) return 1;
  }

  if (c >= 0x21 && c <= 0x2f) return 1;
  if (c >= 0x3a && c <= 0x40) return 1;
  if (c >= 0x5b && c <= 0x60) return 1;
  if (c >= 0x7b && c <= 0x7e) return 1;

  switch (enc) {
  case 2:
  case 10:
  case 15:
    if (c == 0xad) return 1;

  case 1:
    if (c == 0xa1) return 1;
    if (c == 0xab) return 1;
    if (c == 0xb7) return 1;
    if (c == 0xbb) return 1;
    if (c == 0xbf) return 1;
    break;

  case 3:
  case 5:
  case 6:
  case 14:
    if (c == 0xad) return 1;
    break;

  case 4:
  case 11:
    if (c == 0xad) return 1;
    if (c == 0xb7) return 1;
    if (c == 0xbd) return 1;
    break;

  case 7:
    if (c == 0xac) return 1;
    if (c == 0xad) return 1;
    if (c == 0xbb) return 1;
    if (c == 0xbf) return 1;
    break;

  case 8:
    if (c == 0xa1 || c == 0xa2) return 1;
    if (c == 0xab) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xad) return 1;
    if (c == 0xb7 || c == 0xbb) return 1;
    break;

  case 9:
    if (c == 0xab) return 1;
    if (c == 0xad) return 1;
    if (c == 0xb7) return 1;
    if (c == 0xbb) return 1;
    if (c == 0xdf) return 1;
    break;

  case 13:
    if (c == 0xa1 || c == 0xa5) return 1;
    if (c == 0xab || c == 0xad) return 1;
    if (c == 0xb4 || c == 0xb7) return 1;
    if (c == 0xbb) return 1;
    if (c == 0xff) return 1;
    break;

  case 16:
    if (c == 0xa5) return 1;
    if (c == 0xab) return 1;
    if (c == 0xad) return 1;
    if (c == 0xb5) return 1;
    if (c == 0xb7) return 1;
    if (c == 0xbb) return 1;
    break;

  case 18:
    if (c == 0x9e) return 1;
    break;

  case 12:
  case 17:
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsSpace(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISspace);

  if (c >= 0x09 && c <= 0x0d) return 1;
  if (c == 0x20) return 1;

  switch (enc) {
  case 1:
    if (c == 0x85) return 1;

  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 11:
  case 12:
  case 13:
  case 14:
  case 15:
  case 16:
  case 17:
    if (c == 0xa0) return 1;
    break;

  case 18:
    if (c == 0x9a) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsUpper(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISupper);

  if (c >= 0x41 && c <= 0x5a) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 10:
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    break;

  case 3:
    if (c == 0xa1 || c == 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c >= 0xae && c <= 0xaf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    break;

  case 4:
    if (c == 0xa1) return 1;
    if (c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xaf) return 1;
    if (c >= 0xc0 && c <= 0xc2) return 1;
    if (c >= 0xc4 && c <= 0xcf) return 1;
    if (c >= 0xd1 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    break;

  case 5:
    if (c == 0xa1 || c == 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xae) return 1;
    if (c == 0xbd) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    break;

  case 6:
    if (c >= 0xa1 && c <= 0xcf && c != 0xad) return 1;
    break;

  case 7:
    break;

  case 8:
    if (c == 0xb6) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c >= 0xc1 && c <= 0xdb && c != 0xd2) return 1;
    break;

  case 9:
  case 12:
    break;

  case 11:
    if (c >= 0xa1 && c <= 0xa6) return 1;
    if (c >= 0xa8 && c <= 0xac) return 1;
    if (c == 0xae || c == 0xaf) return 1;
    if (c >= 0xc0 && c <= 0xde) return 1;
    break;

  case 13:
    if (c == 0xa8) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xaf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    break;

  case 14:
    if (c == 0xa1) return 1;
    if (c == 0xa4 || c == 0xa6) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xaa || c == 0xac) return 1;
    if (c == 0xaf || c == 0xb0) return 1;
    if (c == 0xb2 || c == 0xb4 || c == 0xb7) return 1;
    if (c == 0xbb || c == 0xbd) return 1;
    if (c >= 0xc0 && c <= 0xde) return 1;
    break;

  case 15:
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xde) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xb4) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbe) return 1;
    break;

  case 16:
    if (c == 0xa1) return 1;
    if (c == 0xa3) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xac) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb2) return 1;
    if (c == 0xb4) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbe) return 1;
    if (c >= 0xc0 && c <= 0xde) return 1;
    break;

  case 18:
    if (c == 0xb3) return 1;

  case 17:
    if (c >= 0xe0 && c <= 0xff) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsXDigit(int enc, int c)
{
  if (enc == 0)
    return ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISxdigit);

  if (c >= 0x30 && c <= 0x39) return 1;
  if (c >= 0x41 && c <= 0x46) return 1;
  if (c >= 0x61 && c <= 0x66) return 1;
  return 0;
}

static int IsWord(int enc, int c)
{
  if (enc == 0) {
    return (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha) || ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISdigit) || c == 0x5f);
  }

  if (c >= 0x30 && c <= 0x39) return 1;
  if (c >= 0x41 && c <= 0x5a) return 1;
  if (c == 0x5f) return 1;
  if (c >= 0x61 && c <= 0x7a) return 1;

  switch (enc) {
  case 1:
  case 2:
  case 10:
    if (c == 0xaa) return 1;
    if (c >= 0xb2 && c <= 0xb3) return 1;
    if (c == 0xb5) return 1;
    if (c >= 0xb9 && c <= 0xba) return 1;
    if (c >= 0xbc && c <= 0xbe) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    break;

  case 3:
    if (c == 0xa1 || c == 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c >= 0xae && c <= 0xaf) return 1;
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbc) return 1;
    if (c >= 0xbe && c <= 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 4:
    if (c == 0xa1) return 1;
    if (c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xaf) return 1;
    if (c >= 0xb1 && c <= 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbd) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xc2) return 1;
    if (c >= 0xc4 && c <= 0xcf) return 1;
    if (c >= 0xd1 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xe2) return 1;
    if (c >= 0xe4 && c <= 0xef) return 1;
    if (c >= 0xf1 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 5:
    if (c >= 0xa1 && c <= 0xa3) return 1;
    if (c == 0xa5 || c == 0xa6) return 1;
    if (c >= 0xa9 && c <= 0xac) return 1;
    if (c == 0xae) return 1;
    if (c == 0xb1 || c == 0xb3) return 1;
    if (c == 0xb5 || c == 0xb6) return 1;
    if (c >= 0xb9 && c <= 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 6:
    if (c >= 0xa1 && c <= 0xcf && c != 0xad) return 1;
    if (c >= 0xd0 && c <= 0xff && c != 0xf0 && c != 0xfd) return 1;
    break;

  case 7:
    if (c >= 0xc1 && c <= 0xda) return 1;
    if (c >= 0xe0 && c <= 0xea) return 1;
    if (c >= 0xeb && c <= 0xf2) return 1;
    break;

  case 8:
    if (c == 0xb2 || c == 0xb3) return 1;
    if (c == 0xb6) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c >= 0xbc && c <= 0xbf) return 1;
    if (c == 0xc0) return 1;
    if (c >= 0xc1 && c <= 0xdb && c != 0xd2) return 1;
    if (c >= 0xdc && c <= 0xfe) return 1;
    break;

  case 9:
    if (c == 0xb2 || c == 0xb3 || c == 0xb5 || c == 0xb9) return 1;
    if (c >= 0xbc && c <= 0xbe) return 1;
    if (c >= 0xe0 && c <= 0xfa) return 1;
    break;

  case 11:
    if (c >= 0xa1 && c <= 0xff) {
      if (c != 0xa7 && c != 0xad && c != 0xb0 && c != 0xb7 && c != 0xbd)
 return 1;
    }
    break;

  case 12:
    if (c >= 0xa1 && c <= 0xda) return 1;
    if (c >= 0xdf && c <= 0xfb) return 1;
    break;

  case 13:
    if (c == 0xa8) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb2 || c == 0xb3 || c == 0xb5 || c == 0xb9) return 1;
    if (c >= 0xbc && c <= 0xbe) return 1;
    if (c == 0xb8) return 1;
    if (c == 0xba) return 1;
    if (c >= 0xbf && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xfe) return 1;
    break;

  case 14:
    if (c >= 0xa1 && c <= 0xff) {
      if (c == 0xa3 || c == 0xa7 || c == 0xa9 || c == 0xad || c == 0xae ||
   c == 0xb6) return 0;
      return 1;
    }
    break;

  case 15:
    if (c == 0xaa) return 1;
    if (c >= 0xb2 && c <= 0xb3) return 1;
    if (c == 0xb5) return 1;
    if (c >= 0xb9 && c <= 0xba) return 1;
    if (c >= 0xbc && c <= 0xbe) return 1;
    if (c >= 0xc0 && c <= 0xd6) return 1;
    if (c >= 0xd8 && c <= 0xf6) return 1;
    if (c >= 0xf8 && c <= 0xff) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xb4) return 1;
    if (c == 0xb8) return 1;
    break;

  case 16:
    if (c == 0xa1) return 1;
    if (c == 0xa2) return 1;
    if (c == 0xa3) return 1;
    if (c == 0xa6) return 1;
    if (c == 0xa8) return 1;
    if (c == 0xaa) return 1;
    if (c == 0xac) return 1;
    if (c == 0xae) return 1;
    if (c == 0xaf) return 1;
    if (c == 0xb2) return 1;
    if (c == 0xb3) return 1;
    if (c == 0xb4) return 1;
    if (c >= 0xb8 && c <= 0xba) return 1;
    if (c == 0xbc) return 1;
    if (c == 0xbd) return 1;
    if (c == 0xbe) return 1;
    if (c == 0xbf) return 1;
    if (c >= 0xc0 && c <= 0xde) return 1;
    if (c >= 0xdf && c <= 0xff) return 1;
    break;

  case 18:
    if (c == 0x9d) return 1;
    if (c == 0xa3 || c == 0xb3) return 1;

  case 17:
    if (c >= 0xc0 && c <= 0xff) return 1;
    break;

  default:
    exit(-1);
  }

  return 0;
}

static int IsAscii(int enc , int c)
{
  if (c >= 0x00 && c <= 0x7f) return 1;
  return 0;
}

static int IsNewline(int enc , int c)
{
  if (c == 0x0a) return 1;
  return 0;
}

static int exec(FILE* fp, ENC_INFO* einfo)
{


  int c, val, enc;
  int r;

  enc = einfo->num;

  r = fprintf(fp, "static const unsigned short Enc%s_CtypeTable[256] = {\n",
              einfo->name);
  if (r < 0) return -1;

  for (c = 0; c < 256; c++) {
    val = 0;
    if (IsNewline(enc, c)) val |= (1<< 0);
    if (IsAlpha (enc, c)) val |= ((1<< 1) | (1<< 13));
    if (IsBlank (enc, c)) val |= (1<< 2);
    if (IsCntrl (enc, c)) val |= (1<< 3);
    if (IsDigit (enc, c)) val |= ((1<< 4) | (1<< 13));
    if (IsGraph (enc, c)) val |= (1<< 5);
    if (IsLower (enc, c)) val |= (1<< 6);
    if (IsPrint (enc, c)) val |= (1<< 7);
    if (IsPunct (enc, c)) val |= (1<< 8);
    if (IsSpace (enc, c)) val |= (1<< 9);
    if (IsUpper (enc, c)) val |= (1<< 10);
    if (IsXDigit(enc, c)) val |= (1<< 11);
    if (IsWord (enc, c)) val |= (1<< 12);
    if (IsAscii (enc, c)) val |= (1<< 14);

    if (c % 8 == 0) {
      r = fputs("  ", fp);
      if (r < 0) return -1;
    }
    r = fprintf(fp, "0x%04x", val);
    if (r < 0) return -1;

    if (c != 255) {
      r = fputs(",", fp);
      if (r < 0) return -1;
    }
    if (c != 0 && c % 8 == (8 -1))
      r = fputs("\n", fp);
    else
      r = fputs(" ", fp);

    if (r < 0) return -1;
  }
  r = fprintf(fp, "};\n");
  if (r < 0) return -1;

  return 0;
}

extern int main(int argc , char* argv[] )
{
  int r;
  int i;
  FILE* fp = stdout;

  setlocale(6, "C");





  for (i = 0; i < (int )(sizeof(Info)/sizeof(ENC_INFO)); i++) {
    r = exec(fp, &Info[i]);
    if (r < 0) {
      fprintf(stderr, "FAIL exec(): %d\n", r);
      return -1;
    }
  }

  return 0;
}
