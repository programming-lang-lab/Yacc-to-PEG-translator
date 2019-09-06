













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
const char *
yaml_get_version_string(void);
void
yaml_get_version(int *major, int *minor, int *patch);
typedef unsigned char yaml_char_t;


typedef struct yaml_version_directive_s {

    int major;

    int minor;
} yaml_version_directive_t;


typedef struct yaml_tag_directive_s {

    yaml_char_t *handle;

    yaml_char_t *prefix;
} yaml_tag_directive_t;


typedef enum yaml_encoding_e {

    YAML_ANY_ENCODING,

    YAML_UTF8_ENCODING,

    YAML_UTF16LE_ENCODING,

    YAML_UTF16BE_ENCODING
} yaml_encoding_t;



typedef enum yaml_break_e {

    YAML_ANY_BREAK,

    YAML_CR_BREAK,

    YAML_LN_BREAK,

    YAML_CRLN_BREAK
} yaml_break_t;


typedef enum yaml_error_type_e {

    YAML_NO_ERROR,


    YAML_MEMORY_ERROR,


    YAML_READER_ERROR,

    YAML_SCANNER_ERROR,

    YAML_PARSER_ERROR,

    YAML_COMPOSER_ERROR,


    YAML_WRITER_ERROR,

    YAML_EMITTER_ERROR
} yaml_error_type_t;


typedef struct yaml_mark_s {

    size_t index;


    size_t line;


    size_t column;
} yaml_mark_t;
typedef enum yaml_scalar_style_e {

    YAML_ANY_SCALAR_STYLE,


    YAML_PLAIN_SCALAR_STYLE,


    YAML_SINGLE_QUOTED_SCALAR_STYLE,

    YAML_DOUBLE_QUOTED_SCALAR_STYLE,


    YAML_LITERAL_SCALAR_STYLE,

    YAML_FOLDED_SCALAR_STYLE
} yaml_scalar_style_t;


typedef enum yaml_sequence_style_e {

    YAML_ANY_SEQUENCE_STYLE,


    YAML_BLOCK_SEQUENCE_STYLE,

    YAML_FLOW_SEQUENCE_STYLE
} yaml_sequence_style_t;


typedef enum yaml_mapping_style_e {

    YAML_ANY_MAPPING_STYLE,


    YAML_BLOCK_MAPPING_STYLE,

    YAML_FLOW_MAPPING_STYLE

} yaml_mapping_style_t;
typedef enum yaml_token_type_e {

    YAML_NO_TOKEN,


    YAML_STREAM_START_TOKEN,

    YAML_STREAM_END_TOKEN,


    YAML_VERSION_DIRECTIVE_TOKEN,

    YAML_TAG_DIRECTIVE_TOKEN,

    YAML_DOCUMENT_START_TOKEN,

    YAML_DOCUMENT_END_TOKEN,


    YAML_BLOCK_SEQUENCE_START_TOKEN,

    YAML_BLOCK_MAPPING_START_TOKEN,

    YAML_BLOCK_END_TOKEN,


    YAML_FLOW_SEQUENCE_START_TOKEN,

    YAML_FLOW_SEQUENCE_END_TOKEN,

    YAML_FLOW_MAPPING_START_TOKEN,

    YAML_FLOW_MAPPING_END_TOKEN,


    YAML_BLOCK_ENTRY_TOKEN,

    YAML_FLOW_ENTRY_TOKEN,

    YAML_KEY_TOKEN,

    YAML_VALUE_TOKEN,


    YAML_ALIAS_TOKEN,

    YAML_ANCHOR_TOKEN,

    YAML_TAG_TOKEN,

    YAML_SCALAR_TOKEN
} yaml_token_type_t;


typedef struct yaml_token_s {


    yaml_token_type_t type;


    union {


        struct {

            yaml_encoding_t encoding;
        } stream_start;


        struct {

            yaml_char_t *value;
        } alias;


        struct {

            yaml_char_t *value;
        } anchor;


        struct {

            yaml_char_t *handle;

            yaml_char_t *suffix;
        } tag;


        struct {

            yaml_char_t *value;

            size_t length;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            int major;

            int minor;
        } version_directive;


        struct {

            yaml_char_t *handle;

            yaml_char_t *prefix;
        } tag_directive;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_token_t;







void
yaml_token_delete(yaml_token_t *token);
typedef enum yaml_event_type_e {

    YAML_NO_EVENT,


    YAML_STREAM_START_EVENT,

    YAML_STREAM_END_EVENT,


    YAML_DOCUMENT_START_EVENT,

    YAML_DOCUMENT_END_EVENT,


    YAML_ALIAS_EVENT,

    YAML_SCALAR_EVENT,


    YAML_SEQUENCE_START_EVENT,

    YAML_SEQUENCE_END_EVENT,


    YAML_MAPPING_START_EVENT,

    YAML_MAPPING_END_EVENT
} yaml_event_type_t;


typedef struct yaml_event_s {


    yaml_event_type_t type;


    union {


        struct {

            yaml_encoding_t encoding;
        } stream_start;


        struct {

            yaml_version_directive_t *version_directive;


            struct {

                yaml_tag_directive_t *start;

                yaml_tag_directive_t *end;
            } tag_directives;


            int implicit;
        } document_start;


        struct {

            int implicit;
        } document_end;


        struct {

            yaml_char_t *anchor;
        } alias;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            yaml_char_t *value;

            size_t length;

            int plain_implicit;

            int quoted_implicit;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            int implicit;

            yaml_sequence_style_t style;
        } sequence_start;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            int implicit;

            yaml_mapping_style_t style;
        } mapping_start;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_event_t;
int
yaml_stream_start_event_initialize(yaml_event_t *event,
        yaml_encoding_t encoding);
int
yaml_stream_end_event_initialize(yaml_event_t *event);
int
yaml_document_start_event_initialize(yaml_event_t *event,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int implicit);
int
yaml_document_end_event_initialize(yaml_event_t *event, int implicit);
int
yaml_alias_event_initialize(yaml_event_t *event, yaml_char_t *anchor);
int
yaml_scalar_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag,
        yaml_char_t *value, int length,
        int plain_implicit, int quoted_implicit,
        yaml_scalar_style_t style);
int
yaml_sequence_start_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_sequence_style_t style);
int
yaml_sequence_end_event_initialize(yaml_event_t *event);
int
yaml_mapping_start_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_mapping_style_t style);
int
yaml_mapping_end_event_initialize(yaml_event_t *event);







void
yaml_event_delete(yaml_event_t *event);
typedef enum yaml_node_type_e {

    YAML_NO_NODE,


    YAML_SCALAR_NODE,

    YAML_SEQUENCE_NODE,

    YAML_MAPPING_NODE
} yaml_node_type_t;


typedef struct yaml_node_s yaml_node_t;


typedef int yaml_node_item_t;


typedef struct yaml_node_pair_s {

    int key;

    int value;
} yaml_node_pair_t;


struct yaml_node_s {


    yaml_node_type_t type;


    yaml_char_t *tag;


    union {


        struct {

            yaml_char_t *value;

            size_t length;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            struct {

                yaml_node_item_t *start;

                yaml_node_item_t *end;

                yaml_node_item_t *top;
            } items;

            yaml_sequence_style_t style;
        } sequence;


        struct {

            struct {

                yaml_node_pair_t *start;

                yaml_node_pair_t *end;

                yaml_node_pair_t *top;
            } pairs;

            yaml_mapping_style_t style;
        } mapping;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

};


typedef struct yaml_document_s {


    struct {

        yaml_node_t *start;

        yaml_node_t *end;

        yaml_node_t *top;
    } nodes;


    yaml_version_directive_t *version_directive;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;
    } tag_directives;


    int start_implicit;

    int end_implicit;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_document_t;
int
yaml_document_initialize(yaml_document_t *document,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int start_implicit, int end_implicit);







void
yaml_document_delete(yaml_document_t *document);
yaml_node_t *
yaml_document_get_node(yaml_document_t *document, int index);
yaml_node_t *
yaml_document_get_root_node(yaml_document_t *document);
int
yaml_document_add_scalar(yaml_document_t *document,
        yaml_char_t *tag, yaml_char_t *value, int length,
        yaml_scalar_style_t style);
int
yaml_document_add_sequence(yaml_document_t *document,
        yaml_char_t *tag, yaml_sequence_style_t style);
int
yaml_document_add_mapping(yaml_document_t *document,
        yaml_char_t *tag, yaml_mapping_style_t style);
int
yaml_document_append_sequence_item(yaml_document_t *document,
        int sequence, int item);
int
yaml_document_append_mapping_pair(yaml_document_t *document,
        int mapping, int key, int value);
typedef int yaml_read_handler_t(void *data, unsigned char *buffer, size_t size,
        size_t *size_read);





typedef struct yaml_simple_key_s {

    int possible;


    int required;


    size_t token_number;


    yaml_mark_t mark;
} yaml_simple_key_t;




typedef enum yaml_parser_state_e {

    YAML_PARSE_STREAM_START_STATE,

    YAML_PARSE_IMPLICIT_DOCUMENT_START_STATE,

    YAML_PARSE_DOCUMENT_START_STATE,

    YAML_PARSE_DOCUMENT_CONTENT_STATE,

    YAML_PARSE_DOCUMENT_END_STATE,

    YAML_PARSE_BLOCK_NODE_STATE,

    YAML_PARSE_BLOCK_NODE_OR_INDENTLESS_SEQUENCE_STATE,

    YAML_PARSE_FLOW_NODE_STATE,

    YAML_PARSE_BLOCK_SEQUENCE_FIRST_ENTRY_STATE,

    YAML_PARSE_BLOCK_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_INDENTLESS_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_BLOCK_MAPPING_FIRST_KEY_STATE,

    YAML_PARSE_BLOCK_MAPPING_KEY_STATE,

    YAML_PARSE_BLOCK_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_SEQUENCE_FIRST_ENTRY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_KEY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_END_STATE,

    YAML_PARSE_FLOW_MAPPING_FIRST_KEY_STATE,

    YAML_PARSE_FLOW_MAPPING_KEY_STATE,

    YAML_PARSE_FLOW_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_MAPPING_EMPTY_VALUE_STATE,

    YAML_PARSE_END_STATE
} yaml_parser_state_t;





typedef struct yaml_alias_data_s {

    yaml_char_t *anchor;

    int index;

    yaml_mark_t mark;
} yaml_alias_data_t;
typedef struct yaml_parser_s {







    yaml_error_type_t error;

    const char *problem;

    size_t problem_offset;

    int problem_value;

    yaml_mark_t problem_mark;

    const char *context;

    yaml_mark_t context_mark;
    yaml_read_handler_t *read_handler;


    void *read_handler_data;


    union {

        struct {

            const unsigned char *start;

            const unsigned char *end;

            const unsigned char *current;
        } string;


        FILE *file;
    } input;


    int eof;


    struct {

        yaml_char_t *start;

        yaml_char_t *end;

        yaml_char_t *pointer;

        yaml_char_t *last;
    } buffer;


    size_t unread;


    struct {

        unsigned char *start;

        unsigned char *end;

        unsigned char *pointer;

        unsigned char *last;
    } raw_buffer;


    yaml_encoding_t encoding;


    size_t offset;


    yaml_mark_t mark;
    int stream_start_produced;


    int stream_end_produced;


    int flow_level;


    struct {

        yaml_token_t *start;

        yaml_token_t *end;

        yaml_token_t *head;

        yaml_token_t *tail;
    } tokens;


    size_t tokens_parsed;


    int token_available;


    struct {

        int *start;

        int *end;

        int *top;
    } indents;


    int indent;


    int simple_key_allowed;


    struct {

        yaml_simple_key_t *start;

        yaml_simple_key_t *end;

        yaml_simple_key_t *top;
    } simple_keys;
    struct {

        yaml_parser_state_t *start;

        yaml_parser_state_t *end;

        yaml_parser_state_t *top;
    } states;


    yaml_parser_state_t state;


    struct {

        yaml_mark_t *start;

        yaml_mark_t *end;

        yaml_mark_t *top;
    } marks;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;

        yaml_tag_directive_t *top;
    } tag_directives;
    struct {

        yaml_alias_data_t *start;

        yaml_alias_data_t *end;

        yaml_alias_data_t *top;
    } aliases;


    yaml_document_t *document;





} yaml_parser_t;
int
yaml_parser_initialize(yaml_parser_t *parser);







void
yaml_parser_delete(yaml_parser_t *parser);
void
yaml_parser_set_input_string(yaml_parser_t *parser,
        const unsigned char *input, size_t size);
void
yaml_parser_set_input_file(yaml_parser_t *parser, FILE *file);
void
yaml_parser_set_input(yaml_parser_t *parser,
        yaml_read_handler_t *handler, void *data);
void
yaml_parser_set_encoding(yaml_parser_t *parser, yaml_encoding_t encoding);
int
yaml_parser_scan(yaml_parser_t *parser, yaml_token_t *token);
int
yaml_parser_parse(yaml_parser_t *parser, yaml_event_t *event);
int
yaml_parser_load(yaml_parser_t *parser, yaml_document_t *document);
typedef int yaml_write_handler_t(void *data, unsigned char *buffer, size_t size);


typedef enum yaml_emitter_state_e {

    YAML_EMIT_STREAM_START_STATE,

    YAML_EMIT_FIRST_DOCUMENT_START_STATE,

    YAML_EMIT_DOCUMENT_START_STATE,

    YAML_EMIT_DOCUMENT_CONTENT_STATE,

    YAML_EMIT_DOCUMENT_END_STATE,

    YAML_EMIT_FLOW_SEQUENCE_FIRST_ITEM_STATE,

    YAML_EMIT_FLOW_SEQUENCE_ITEM_STATE,

    YAML_EMIT_FLOW_MAPPING_FIRST_KEY_STATE,

    YAML_EMIT_FLOW_MAPPING_KEY_STATE,

    YAML_EMIT_FLOW_MAPPING_SIMPLE_VALUE_STATE,

    YAML_EMIT_FLOW_MAPPING_VALUE_STATE,

    YAML_EMIT_BLOCK_SEQUENCE_FIRST_ITEM_STATE,

    YAML_EMIT_BLOCK_SEQUENCE_ITEM_STATE,

    YAML_EMIT_BLOCK_MAPPING_FIRST_KEY_STATE,

    YAML_EMIT_BLOCK_MAPPING_KEY_STATE,

    YAML_EMIT_BLOCK_MAPPING_SIMPLE_VALUE_STATE,

    YAML_EMIT_BLOCK_MAPPING_VALUE_STATE,

    YAML_EMIT_END_STATE
} yaml_emitter_state_t;
typedef struct yaml_emitter_s {







    yaml_error_type_t error;

    const char *problem;
    yaml_write_handler_t *write_handler;


    void *write_handler_data;


    union {

        struct {

            unsigned char *buffer;

            size_t size;

            size_t *size_written;
        } string;


        FILE *file;
    } output;


    struct {

        yaml_char_t *start;

        yaml_char_t *end;

        yaml_char_t *pointer;

        yaml_char_t *last;
    } buffer;


    struct {

        unsigned char *start;

        unsigned char *end;

        unsigned char *pointer;

        unsigned char *last;
    } raw_buffer;


    yaml_encoding_t encoding;
    int canonical;

    int best_indent;

    int best_width;

    int unicode;

    yaml_break_t line_break;


    struct {

        yaml_emitter_state_t *start;

        yaml_emitter_state_t *end;

        yaml_emitter_state_t *top;
    } states;


    yaml_emitter_state_t state;


    struct {

        yaml_event_t *start;

        yaml_event_t *end;

        yaml_event_t *head;

        yaml_event_t *tail;
    } events;


    struct {

        int *start;

        int *end;

        int *top;
    } indents;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;

        yaml_tag_directive_t *top;
    } tag_directives;


    int indent;


    int flow_level;


    int root_context;

    int sequence_context;

    int mapping_context;

    int simple_key_context;


    int line;

    int column;

    int whitespace;

    int indention;

    int open_ended;


    struct {

        yaml_char_t *anchor;

        size_t anchor_length;

        int alias;
    } anchor_data;


    struct {

        yaml_char_t *handle;

        size_t handle_length;

        yaml_char_t *suffix;

        size_t suffix_length;
    } tag_data;


    struct {

        yaml_char_t *value;

        size_t length;

        int multiline;

        int flow_plain_allowed;

        int block_plain_allowed;

        int single_quoted_allowed;

        int block_allowed;

        yaml_scalar_style_t style;
    } scalar_data;
    int opened;

    int closed;


    struct {

        int references;

        int anchor;

        int serialized;
    } *anchors;


    int last_anchor_id;


    yaml_document_t *document;





} yaml_emitter_t;
int
yaml_emitter_initialize(yaml_emitter_t *emitter);







void
yaml_emitter_delete(yaml_emitter_t *emitter);
void
yaml_emitter_set_output_string(yaml_emitter_t *emitter,
        unsigned char *output, size_t size, size_t *size_written);
void
yaml_emitter_set_output_file(yaml_emitter_t *emitter, FILE *file);
void
yaml_emitter_set_output(yaml_emitter_t *emitter,
        yaml_write_handler_t *handler, void *data);
void
yaml_emitter_set_encoding(yaml_emitter_t *emitter, yaml_encoding_t encoding);
void
yaml_emitter_set_canonical(yaml_emitter_t *emitter, int canonical);
void
yaml_emitter_set_indent(yaml_emitter_t *emitter, int indent);
void
yaml_emitter_set_width(yaml_emitter_t *emitter, int width);
void
yaml_emitter_set_unicode(yaml_emitter_t *emitter, int unicode);
void
yaml_emitter_set_break(yaml_emitter_t *emitter, yaml_break_t line_break);
int
yaml_emitter_emit(yaml_emitter_t *emitter, yaml_event_t *event);
int
yaml_emitter_open(yaml_emitter_t *emitter);
int
yaml_emitter_close(yaml_emitter_t *emitter);
int
yaml_emitter_dump(yaml_emitter_t *emitter, yaml_document_t *document);
int
yaml_emitter_flush(yaml_emitter_t *emitter);

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
      ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
      ;




extern void __assert (const char *__assertion, const char *__file, int __line)
      ;
typedef long int ptrdiff_t;







typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;


typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
void *
yaml_malloc(size_t size);

void *
yaml_realloc(void *ptr, size_t size);

void
yaml_free(void *ptr);

yaml_char_t *
yaml_strdup(const yaml_char_t *);





int
yaml_parser_update_buffer(yaml_parser_t *parser, size_t length);





int
yaml_parser_fetch_more_tokens(yaml_parser_t *parser);
typedef struct {
    yaml_char_t *start;
    yaml_char_t *end;
    yaml_char_t *pointer;
} yaml_string_t;

int
yaml_string_extend(yaml_char_t **start,
        yaml_char_t **pointer, yaml_char_t **end);

int
yaml_string_join(
        yaml_char_t **a_start, yaml_char_t **a_pointer, yaml_char_t **a_end,
        yaml_char_t **b_start, yaml_char_t **b_pointer, yaml_char_t **b_end);
int
yaml_stack_extend(void **start, void **top, void **end);

int
yaml_queue_extend(void **start, void **head, void **tail, void **end);





const char *
yaml_get_version_string(void)
{
    return YAML_VERSION_STRING;
}





void
yaml_get_version(int *major, int *minor, int *patch)
{
    *major = YAML_VERSION_MAJOR;
    *minor = YAML_VERSION_MINOR;
    *patch = YAML_VERSION_PATCH;
}





void *
yaml_malloc(size_t size)
{
    return malloc(size ? size : 1);
}





void *
yaml_realloc(void *ptr, size_t size)
{
    return ptr ? realloc(ptr, size ? size : 1) : malloc(size ? size : 1);
}





void
yaml_free(void *ptr)
{
    if (ptr) free(ptr);
}





yaml_char_t *
yaml_strdup(const yaml_char_t *str)
{
    if (!str)
        return ((void*)0);

    return (yaml_char_t *)strdup((char *)str);
}





int
yaml_string_extend(yaml_char_t **start,
        yaml_char_t **pointer, yaml_char_t **end)
{
    yaml_char_t *new_start = yaml_realloc(*start, (*end - *start)*2);

    if (!new_start) return 0;

    memset(new_start + (*end - *start), 0, *end - *start);

    *pointer = new_start + (*pointer - *start);
    *end = new_start + (*end - *start)*2;
    *start = new_start;

    return 1;
}





int
yaml_string_join(
        yaml_char_t **a_start, yaml_char_t **a_pointer, yaml_char_t **a_end,
        yaml_char_t **b_start, yaml_char_t **b_pointer, yaml_char_t **b_end)
{
    if (*b_start == *b_pointer)
        return 1;

    while (*a_end - *a_pointer <= *b_pointer - *b_start) {
        if (!yaml_string_extend(a_start, a_pointer, a_end))
            return 0;
    }

    memcpy(*a_pointer, *b_start, *b_pointer - *b_start);
    *a_pointer += *b_pointer - *b_start;

    return 1;
}





int
yaml_stack_extend(void **start, void **top, void **end)
{
    void *new_start = yaml_realloc(*start, ((char *)*end - (char *)*start)*2);

    if (!new_start) return 0;

    *top = (char *)new_start + ((char *)*top - (char *)*start);
    *end = (char *)new_start + ((char *)*end - (char *)*start)*2;
    *start = new_start;

    return 1;
}





int
yaml_queue_extend(void **start, void **head, void **tail, void **end)
{


    if (*start == *head && *tail == *end) {
        void *new_start = yaml_realloc(*start,
                ((char *)*end - (char *)*start)*2);

        if (!new_start) return 0;

        *head = (char *)new_start + ((char *)*head - (char *)*start);
        *tail = (char *)new_start + ((char *)*tail - (char *)*start);
        *end = (char *)new_start + ((char *)*end - (char *)*start)*2;
        *start = new_start;
    }



    if (*tail == *end) {
        if (*head != *tail) {
            memmove(*start, *head, (char *)*tail - (char *)*head);
        }
        *tail = (char *)*tail - (char *)*head + (char *)*start;
        *head = *start;
    }

    return 1;
}






int
yaml_parser_initialize(yaml_parser_t *parser)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 173,  __PRETTY_FUNCTION__));

    memset(parser, 0, sizeof(yaml_parser_t));
    if (!(((parser->raw_buffer).start = yaml_malloc(16384)) ? ((parser->raw_buffer).last = (parser->raw_buffer).pointer = (parser->raw_buffer).start, (parser->raw_buffer).end = (parser->raw_buffer).start+(16384), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->buffer).start = yaml_malloc((16384*3))) ? ((parser->buffer).last = (parser->buffer).pointer = (parser->buffer).start, (parser->buffer).end = (parser->buffer).start+((16384*3)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->tokens).start = yaml_malloc((16)*sizeof(*(parser->tokens).start))) ? ((parser->tokens).head = (parser->tokens).tail = (parser->tokens).start, (parser->tokens).end = (parser->tokens).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->indents).start = yaml_malloc((16)*sizeof(*(parser->indents).start))) ? ((parser->indents).top = (parser->indents).start, (parser->indents).end = (parser->indents).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->simple_keys).start = yaml_malloc((16)*sizeof(*(parser->simple_keys).start))) ? ((parser->simple_keys).top = (parser->simple_keys).start, (parser->simple_keys).end = (parser->simple_keys).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->states).start = yaml_malloc((16)*sizeof(*(parser->states).start))) ? ((parser->states).top = (parser->states).start, (parser->states).end = (parser->states).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->marks).start = yaml_malloc((16)*sizeof(*(parser->marks).start))) ? ((parser->marks).top = (parser->marks).start, (parser->marks).end = (parser->marks).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->tag_directives).start = yaml_malloc((16)*sizeof(*(parser->tag_directives).start))) ? ((parser->tag_directives).top = (parser->tag_directives).start, (parser->tag_directives).end = (parser->tag_directives).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;

    return 1;

error:

    (yaml_free((parser->raw_buffer).start), (parser->raw_buffer).start = (parser->raw_buffer).pointer = (parser->raw_buffer).end = 0);
    (yaml_free((parser->buffer).start), (parser->buffer).start = (parser->buffer).pointer = (parser->buffer).end = 0);
    (yaml_free((parser->tokens).start), (parser->tokens).start = (parser->tokens).head = (parser->tokens).tail = (parser->tokens).end = 0);
    (yaml_free((parser->indents).start), (parser->indents).start = (parser->indents).top = (parser->indents).end = 0);
    (yaml_free((parser->simple_keys).start), (parser->simple_keys).start = (parser->simple_keys).top = (parser->simple_keys).end = 0);
    (yaml_free((parser->states).start), (parser->states).start = (parser->states).top = (parser->states).end = 0);
    (yaml_free((parser->marks).start), (parser->marks).start = (parser->marks).top = (parser->marks).end = 0);
    (yaml_free((parser->tag_directives).start), (parser->tag_directives).start = (parser->tag_directives).top = (parser->tag_directives).end = 0);

    return 0;
}





void
yaml_parser_delete(yaml_parser_t *parser)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 216,  __PRETTY_FUNCTION__));

    (yaml_free((parser->raw_buffer).start), (parser->raw_buffer).start = (parser->raw_buffer).pointer = (parser->raw_buffer).end = 0);
    (yaml_free((parser->buffer).start), (parser->buffer).start = (parser->buffer).pointer = (parser->buffer).end = 0);
    while (!((parser->tokens).head == (parser->tokens).tail)) {
        yaml_token_delete(&(*((parser->tokens).head++)));
    }
    (yaml_free((parser->tokens).start), (parser->tokens).start = (parser->tokens).head = (parser->tokens).tail = (parser->tokens).end = 0);
    (yaml_free((parser->indents).start), (parser->indents).start = (parser->indents).top = (parser->indents).end = 0);
    (yaml_free((parser->simple_keys).start), (parser->simple_keys).start = (parser->simple_keys).top = (parser->simple_keys).end = 0);
    (yaml_free((parser->states).start), (parser->states).start = (parser->states).top = (parser->states).end = 0);
    (yaml_free((parser->marks).start), (parser->marks).start = (parser->marks).top = (parser->marks).end = 0);
    while (!((parser->tag_directives).start == (parser->tag_directives).top)) {
        yaml_tag_directive_t tag_directive = (*(--(parser->tag_directives).top));
        yaml_free(tag_directive.handle);
        yaml_free(tag_directive.prefix);
    }
    (yaml_free((parser->tag_directives).start), (parser->tag_directives).start = (parser->tag_directives).top = (parser->tag_directives).end = 0);

    memset(parser, 0, sizeof(yaml_parser_t));
}





static int
yaml_string_read_handler(void *data, unsigned char *buffer, size_t size,
        size_t *size_read)
{
    yaml_parser_t *parser = data;

    if (parser->input.string.current == parser->input.string.end) {
        *size_read = 0;
        return 1;
    }

    if (size > (size_t)(parser->input.string.end
                - parser->input.string.current)) {
        size = parser->input.string.end - parser->input.string.current;
    }

    memcpy(buffer, parser->input.string.current, size);
    parser->input.string.current += size;
    *size_read = size;
    return 1;
}





static int
yaml_file_read_handler(void *data, unsigned char *buffer, size_t size,
        size_t *size_read)
{
    yaml_parser_t *parser = data;

    *size_read = fread(buffer, 1, size, parser->input.file);
    return !ferror(parser->input.file);
}





void
yaml_parser_set_input_string(yaml_parser_t *parser,
        const unsigned char *input, size_t size)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 286,  __PRETTY_FUNCTION__));
    ((!parser->read_handler) ? (void) (0) : __assert_fail ("!parser->read_handler", "ext/psych/yaml/api.c", 287,  __PRETTY_FUNCTION__));
    ((input) ? (void) (0) : __assert_fail ("input", "ext/psych/yaml/api.c", 288,  __PRETTY_FUNCTION__));

    parser->read_handler = yaml_string_read_handler;
    parser->read_handler_data = parser;

    parser->input.string.start = input;
    parser->input.string.current = input;
    parser->input.string.end = input+size;
}





void
yaml_parser_set_input_file(yaml_parser_t *parser, FILE *file)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 305,  __PRETTY_FUNCTION__));
    ((!parser->read_handler) ? (void) (0) : __assert_fail ("!parser->read_handler", "ext/psych/yaml/api.c", 306,  __PRETTY_FUNCTION__));
    ((file) ? (void) (0) : __assert_fail ("file", "ext/psych/yaml/api.c", 307,  __PRETTY_FUNCTION__));

    parser->read_handler = yaml_file_read_handler;
    parser->read_handler_data = parser;

    parser->input.file = file;
}





void
yaml_parser_set_input(yaml_parser_t *parser,
        yaml_read_handler_t *handler, void *data)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 323,  __PRETTY_FUNCTION__));
    ((!parser->read_handler) ? (void) (0) : __assert_fail ("!parser->read_handler", "ext/psych/yaml/api.c", 324,  __PRETTY_FUNCTION__));
    ((handler) ? (void) (0) : __assert_fail ("handler", "ext/psych/yaml/api.c", 325,  __PRETTY_FUNCTION__));

    parser->read_handler = handler;
    parser->read_handler_data = data;
}





void
yaml_parser_set_encoding(yaml_parser_t *parser, yaml_encoding_t encoding)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/api.c", 338,  __PRETTY_FUNCTION__));
    ((!parser->encoding) ? (void) (0) : __assert_fail ("!parser->encoding", "ext/psych/yaml/api.c", 339,  __PRETTY_FUNCTION__));

    parser->encoding = encoding;
}





int
yaml_emitter_initialize(yaml_emitter_t *emitter)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 351,  __PRETTY_FUNCTION__));

    memset(emitter, 0, sizeof(yaml_emitter_t));
    if (!(((emitter->buffer).start = yaml_malloc(16384)) ? ((emitter->buffer).last = (emitter->buffer).pointer = (emitter->buffer).start, (emitter->buffer).end = (emitter->buffer).start+(16384), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->raw_buffer).start = yaml_malloc((16384*2+2))) ? ((emitter->raw_buffer).last = (emitter->raw_buffer).pointer = (emitter->raw_buffer).start, (emitter->raw_buffer).end = (emitter->raw_buffer).start+((16384*2+2)), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->states).start = yaml_malloc((16)*sizeof(*(emitter->states).start))) ? ((emitter->states).top = (emitter->states).start, (emitter->states).end = (emitter->states).start+(16), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->events).start = yaml_malloc((16)*sizeof(*(emitter->events).start))) ? ((emitter->events).head = (emitter->events).tail = (emitter->events).start, (emitter->events).end = (emitter->events).start+(16), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->indents).start = yaml_malloc((16)*sizeof(*(emitter->indents).start))) ? ((emitter->indents).top = (emitter->indents).start, (emitter->indents).end = (emitter->indents).start+(16), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->tag_directives).start = yaml_malloc((16)*sizeof(*(emitter->tag_directives).start))) ? ((emitter->tag_directives).top = (emitter->tag_directives).start, (emitter->tag_directives).end = (emitter->tag_directives).start+(16), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;

    return 1;

error:

    (yaml_free((emitter->buffer).start), (emitter->buffer).start = (emitter->buffer).pointer = (emitter->buffer).end = 0);
    (yaml_free((emitter->raw_buffer).start), (emitter->raw_buffer).start = (emitter->raw_buffer).pointer = (emitter->raw_buffer).end = 0);
    (yaml_free((emitter->states).start), (emitter->states).start = (emitter->states).top = (emitter->states).end = 0);
    (yaml_free((emitter->events).start), (emitter->events).start = (emitter->events).head = (emitter->events).tail = (emitter->events).end = 0);
    (yaml_free((emitter->indents).start), (emitter->indents).start = (emitter->indents).top = (emitter->indents).end = 0);
    (yaml_free((emitter->tag_directives).start), (emitter->tag_directives).start = (emitter->tag_directives).top = (emitter->tag_directives).end = 0);

    return 0;
}





void
yaml_emitter_delete(yaml_emitter_t *emitter)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 388,  __PRETTY_FUNCTION__));

    (yaml_free((emitter->buffer).start), (emitter->buffer).start = (emitter->buffer).pointer = (emitter->buffer).end = 0);
    (yaml_free((emitter->raw_buffer).start), (emitter->raw_buffer).start = (emitter->raw_buffer).pointer = (emitter->raw_buffer).end = 0);
    (yaml_free((emitter->states).start), (emitter->states).start = (emitter->states).top = (emitter->states).end = 0);
    while (!((emitter->events).head == (emitter->events).tail)) {
        yaml_event_delete(&(*((emitter->events).head++)));
    }
    (yaml_free((emitter->events).start), (emitter->events).start = (emitter->events).head = (emitter->events).tail = (emitter->events).end = 0);
    (yaml_free((emitter->indents).start), (emitter->indents).start = (emitter->indents).top = (emitter->indents).end = 0);
    while (!((emitter->tag_directives).start == (emitter->tag_directives).top)) {
        yaml_tag_directive_t tag_directive = (*(--(emitter->tag_directives).top));
        yaml_free(tag_directive.handle);
        yaml_free(tag_directive.prefix);
    }
    (yaml_free((emitter->tag_directives).start), (emitter->tag_directives).start = (emitter->tag_directives).top = (emitter->tag_directives).end = 0);
    yaml_free(emitter->anchors);

    memset(emitter, 0, sizeof(yaml_emitter_t));
}





static int
yaml_string_write_handler(void *data, unsigned char *buffer, size_t size)
{
    yaml_emitter_t *emitter = data;

    if (emitter->output.string.size - *emitter->output.string.size_written
            < size) {
        memcpy(emitter->output.string.buffer
                + *emitter->output.string.size_written,
                buffer,
                emitter->output.string.size
                - *emitter->output.string.size_written);
        *emitter->output.string.size_written = emitter->output.string.size;
        return 0;
    }

    memcpy(emitter->output.string.buffer
            + *emitter->output.string.size_written, buffer, size);
    *emitter->output.string.size_written += size;
    return 1;
}





static int
yaml_file_write_handler(void *data, unsigned char *buffer, size_t size)
{
    yaml_emitter_t *emitter = data;

    return (fwrite(buffer, 1, size, emitter->output.file) == size);
}




void
yaml_emitter_set_output_string(yaml_emitter_t *emitter,
        unsigned char *output, size_t size, size_t *size_written)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 454,  __PRETTY_FUNCTION__));
    ((!emitter->write_handler) ? (void) (0) : __assert_fail ("!emitter->write_handler", "ext/psych/yaml/api.c", 455,  __PRETTY_FUNCTION__));
    ((output) ? (void) (0) : __assert_fail ("output", "ext/psych/yaml/api.c", 456,  __PRETTY_FUNCTION__));

    emitter->write_handler = yaml_string_write_handler;
    emitter->write_handler_data = emitter;

    emitter->output.string.buffer = output;
    emitter->output.string.size = size;
    emitter->output.string.size_written = size_written;
    *size_written = 0;
}





void
yaml_emitter_set_output_file(yaml_emitter_t *emitter, FILE *file)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 474,  __PRETTY_FUNCTION__));
    ((!emitter->write_handler) ? (void) (0) : __assert_fail ("!emitter->write_handler", "ext/psych/yaml/api.c", 475,  __PRETTY_FUNCTION__));
    ((file) ? (void) (0) : __assert_fail ("file", "ext/psych/yaml/api.c", 476,  __PRETTY_FUNCTION__));

    emitter->write_handler = yaml_file_write_handler;
    emitter->write_handler_data = emitter;

    emitter->output.file = file;
}





void
yaml_emitter_set_output(yaml_emitter_t *emitter,
        yaml_write_handler_t *handler, void *data)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 492,  __PRETTY_FUNCTION__));
    ((!emitter->write_handler) ? (void) (0) : __assert_fail ("!emitter->write_handler", "ext/psych/yaml/api.c", 493,  __PRETTY_FUNCTION__));
    ((handler) ? (void) (0) : __assert_fail ("handler", "ext/psych/yaml/api.c", 494,  __PRETTY_FUNCTION__));

    emitter->write_handler = handler;
    emitter->write_handler_data = data;
}





void
yaml_emitter_set_encoding(yaml_emitter_t *emitter, yaml_encoding_t encoding)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 507,  __PRETTY_FUNCTION__));
    ((!emitter->encoding) ? (void) (0) : __assert_fail ("!emitter->encoding", "ext/psych/yaml/api.c", 508,  __PRETTY_FUNCTION__));

    emitter->encoding = encoding;
}





void
yaml_emitter_set_canonical(yaml_emitter_t *emitter, int canonical)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 520,  __PRETTY_FUNCTION__));

    emitter->canonical = (canonical != 0);
}





void
yaml_emitter_set_indent(yaml_emitter_t *emitter, int indent)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 532,  __PRETTY_FUNCTION__));

    emitter->best_indent = (1 < indent && indent < 10) ? indent : 2;
}





void
yaml_emitter_set_width(yaml_emitter_t *emitter, int width)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 544,  __PRETTY_FUNCTION__));

    emitter->best_width = (width >= 0) ? width : -1;
}





void
yaml_emitter_set_unicode(yaml_emitter_t *emitter, int unicode)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 556,  __PRETTY_FUNCTION__));

    emitter->unicode = (unicode != 0);
}





void
yaml_emitter_set_break(yaml_emitter_t *emitter, yaml_break_t line_break)
{
    ((emitter) ? (void) (0) : __assert_fail ("emitter", "ext/psych/yaml/api.c", 568,  __PRETTY_FUNCTION__));

    emitter->line_break = line_break;
}





void
yaml_token_delete(yaml_token_t *token)
{
    ((token) ? (void) (0) : __assert_fail ("token", "ext/psych/yaml/api.c", 580,  __PRETTY_FUNCTION__));

    switch (token->type)
    {
        case YAML_TAG_DIRECTIVE_TOKEN:
            yaml_free(token->data.tag_directive.handle);
            yaml_free(token->data.tag_directive.prefix);
            break;

        case YAML_ALIAS_TOKEN:
            yaml_free(token->data.alias.value);
            break;

        case YAML_ANCHOR_TOKEN:
            yaml_free(token->data.anchor.value);
            break;

        case YAML_TAG_TOKEN:
            yaml_free(token->data.tag.handle);
            yaml_free(token->data.tag.suffix);
            break;

        case YAML_SCALAR_TOKEN:
            yaml_free(token->data.scalar.value);
            break;

        default:
            break;
    }

    memset(token, 0, sizeof(yaml_token_t));
}







static int
yaml_check_utf8(yaml_char_t *start, size_t length)
{
    yaml_char_t *end = start+length;
    yaml_char_t *pointer = start;

    while (pointer < end) {
        unsigned char octet;
        unsigned int width;
        unsigned int value;
        size_t k;

        octet = pointer[0];
        width = (octet & 0x80) == 0x00 ? 1 :
                (octet & 0xE0) == 0xC0 ? 2 :
                (octet & 0xF0) == 0xE0 ? 3 :
                (octet & 0xF8) == 0xF0 ? 4 : 0;
        value = (octet & 0x80) == 0x00 ? octet & 0x7F :
                (octet & 0xE0) == 0xC0 ? octet & 0x1F :
                (octet & 0xF0) == 0xE0 ? octet & 0x0F :
                (octet & 0xF8) == 0xF0 ? octet & 0x07 : 0;
        if (!width) return 0;
        if (pointer+width > end) return 0;
        for (k = 1; k < width; k ++) {
            octet = pointer[k];
            if ((octet & 0xC0) != 0x80) return 0;
            value = (value << 6) + (octet & 0x3F);
        }
        if (!((width == 1) ||
            (width == 2 && value >= 0x80) ||
            (width == 3 && value >= 0x800) ||
            (width == 4 && value >= 0x10000))) return 0;

        pointer += width;
    }

    return 1;
}





int
yaml_stream_start_event_initialize(yaml_event_t *event,
        yaml_encoding_t encoding)
{
    yaml_mark_t mark = { 0, 0, 0 };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 668,  __PRETTY_FUNCTION__));

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_STREAM_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.stream_start.encoding = (encoding));

    return 1;
}





int
yaml_stream_end_event_initialize(yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 684,  __PRETTY_FUNCTION__));

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_STREAM_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





int
yaml_document_start_event_initialize(yaml_event_t *event,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int implicit)
{
    struct {
        yaml_error_type_t error;
    } context;
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_version_directive_t *version_directive_copy = ((void*)0);
    struct {
        yaml_tag_directive_t *start;
        yaml_tag_directive_t *end;
        yaml_tag_directive_t *top;
    } tag_directives_copy = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_tag_directive_t value = { ((void*)0), ((void*)0) };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 714,  __PRETTY_FUNCTION__));
    (((tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)) ? (void) (0) : __assert_fail ("(tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)", "ext/psych/yaml/api.c", 716,  __PRETTY_FUNCTION__));



    if (version_directive) {
        version_directive_copy = yaml_malloc(sizeof(yaml_version_directive_t));
        if (!version_directive_copy) goto error;
        version_directive_copy->major = version_directive->major;
        version_directive_copy->minor = version_directive->minor;
    }

    if (tag_directives_start != tag_directives_end) {
        yaml_tag_directive_t *tag_directive;
        if (!(((tag_directives_copy).start = yaml_malloc((16)*sizeof(*(tag_directives_copy).start))) ? ((tag_directives_copy).top = (tag_directives_copy).start, (tag_directives_copy).end = (tag_directives_copy).start+(16), 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
            goto error;
        for (tag_directive = tag_directives_start;
                tag_directive != tag_directives_end; tag_directive ++) {
            ((tag_directive->handle) ? (void) (0) : __assert_fail ("tag_directive->handle", "ext/psych/yaml/api.c", 732,  __PRETTY_FUNCTION__));
            ((tag_directive->prefix) ? (void) (0) : __assert_fail ("tag_directive->prefix", "ext/psych/yaml/api.c", 733,  __PRETTY_FUNCTION__));
            if (!yaml_check_utf8(tag_directive->handle,
                        strlen((char *)tag_directive->handle)))
                goto error;
            if (!yaml_check_utf8(tag_directive->prefix,
                        strlen((char *)tag_directive->prefix)))
                goto error;
            value.handle = yaml_strdup(tag_directive->handle);
            value.prefix = yaml_strdup(tag_directive->prefix);
            if (!value.handle || !value.prefix) goto error;
            if (!(((tag_directives_copy).top != (tag_directives_copy).end || yaml_stack_extend((void **)&(tag_directives_copy).start, (void **)&(tag_directives_copy).top, (void **)&(tag_directives_copy).end)) ? (*((tag_directives_copy).top++) = value, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
                goto error;
            value.handle = ((void*)0);
            value.prefix = ((void*)0);
        }
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_DOCUMENT_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.document_start.version_directive = (version_directive_copy), (*event).data.document_start.tag_directives.start = (tag_directives_copy.start), (*event).data.document_start.tag_directives.end = (tag_directives_copy.top), (*event).data.document_start.implicit = (implicit));



    return 1;

error:
    yaml_free(version_directive_copy);
    while (!((tag_directives_copy).start == (tag_directives_copy).top)) {
        yaml_tag_directive_t value = (*(--(tag_directives_copy).top));
        yaml_free(value.handle);
        yaml_free(value.prefix);
    }
    (yaml_free((tag_directives_copy).start), (tag_directives_copy).start = (tag_directives_copy).top = (tag_directives_copy).end = 0);
    yaml_free(value.handle);
    yaml_free(value.prefix);

    return 0;
}





int
yaml_document_end_event_initialize(yaml_event_t *event, int implicit)
{
    yaml_mark_t mark = { 0, 0, 0 };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 779,  __PRETTY_FUNCTION__));

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_DOCUMENT_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.document_end.implicit = (implicit));

    return 1;
}





int
yaml_alias_event_initialize(yaml_event_t *event, yaml_char_t *anchor)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = ((void*)0);

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 796,  __PRETTY_FUNCTION__));
    ((anchor) ? (void) (0) : __assert_fail ("anchor", "ext/psych/yaml/api.c", 797,  __PRETTY_FUNCTION__));

    if (!yaml_check_utf8(anchor, strlen((char *)anchor))) return 0;

    anchor_copy = yaml_strdup(anchor);
    if (!anchor_copy)
        return 0;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_ALIAS_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.alias.anchor = (anchor_copy));

    return 1;
}





int
yaml_scalar_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag,
        yaml_char_t *value, int length,
        int plain_implicit, int quoted_implicit,
        yaml_scalar_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = ((void*)0);
    yaml_char_t *tag_copy = ((void*)0);
    yaml_char_t *value_copy = ((void*)0);

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 826,  __PRETTY_FUNCTION__));
    ((value) ? (void) (0) : __assert_fail ("value", "ext/psych/yaml/api.c", 827,  __PRETTY_FUNCTION__));

    if (anchor) {
        if (!yaml_check_utf8(anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(tag);
        if (!tag_copy) goto error;
    }

    if (length < 0) {
        length = strlen((char *)value);
    }

    if (!yaml_check_utf8(value, length)) goto error;
    value_copy = yaml_malloc(length+1);
    if (!value_copy) goto error;
    memcpy(value_copy, value, length);
    value_copy[length] = '\0';

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SCALAR_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.scalar.anchor = (anchor_copy), (*event).data.scalar.tag = (tag_copy), (*event).data.scalar.value = (value_copy), (*event).data.scalar.length = (length), (*event).data.scalar.plain_implicit = (plain_implicit), (*event).data.scalar.quoted_implicit = (quoted_implicit), (*event).data.scalar.style = (style));


    return 1;

error:
    yaml_free(anchor_copy);
    yaml_free(tag_copy);
    yaml_free(value_copy);

    return 0;
}





int
yaml_sequence_start_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_sequence_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = ((void*)0);
    yaml_char_t *tag_copy = ((void*)0);

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 877,  __PRETTY_FUNCTION__));

    if (anchor) {
        if (!yaml_check_utf8(anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(tag);
        if (!tag_copy) goto error;
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SEQUENCE_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.sequence_start.anchor = (anchor_copy), (*event).data.sequence_start.tag = (tag_copy), (*event).data.sequence_start.implicit = (implicit), (*event).data.sequence_start.style = (style));


    return 1;

error:
    yaml_free(anchor_copy);
    yaml_free(tag_copy);

    return 0;
}





int
yaml_sequence_end_event_initialize(yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 912,  __PRETTY_FUNCTION__));

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SEQUENCE_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





int
yaml_mapping_start_event_initialize(yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_mapping_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = ((void*)0);
    yaml_char_t *tag_copy = ((void*)0);

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 932,  __PRETTY_FUNCTION__));

    if (anchor) {
        if (!yaml_check_utf8(anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(tag);
        if (!tag_copy) goto error;
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_MAPPING_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.mapping_start.anchor = (anchor_copy), (*event).data.mapping_start.tag = (tag_copy), (*event).data.mapping_start.implicit = (implicit), (*event).data.mapping_start.style = (style));


    return 1;

error:
    yaml_free(anchor_copy);
    yaml_free(tag_copy);

    return 0;
}





int
yaml_mapping_end_event_initialize(yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 967,  __PRETTY_FUNCTION__));

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_MAPPING_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





void
yaml_event_delete(yaml_event_t *event)
{
    yaml_tag_directive_t *tag_directive;

    ((event) ? (void) (0) : __assert_fail ("event", "ext/psych/yaml/api.c", 983,  __PRETTY_FUNCTION__));

    switch (event->type)
    {
        case YAML_DOCUMENT_START_EVENT:
            yaml_free(event->data.document_start.version_directive);
            for (tag_directive = event->data.document_start.tag_directives.start;
                    tag_directive != event->data.document_start.tag_directives.end;
                    tag_directive++) {
                yaml_free(tag_directive->handle);
                yaml_free(tag_directive->prefix);
            }
            yaml_free(event->data.document_start.tag_directives.start);
            break;

        case YAML_ALIAS_EVENT:
            yaml_free(event->data.alias.anchor);
            break;

        case YAML_SCALAR_EVENT:
            yaml_free(event->data.scalar.anchor);
            yaml_free(event->data.scalar.tag);
            yaml_free(event->data.scalar.value);
            break;

        case YAML_SEQUENCE_START_EVENT:
            yaml_free(event->data.sequence_start.anchor);
            yaml_free(event->data.sequence_start.tag);
            break;

        case YAML_MAPPING_START_EVENT:
            yaml_free(event->data.mapping_start.anchor);
            yaml_free(event->data.mapping_start.tag);
            break;

        default:
            break;
    }

    memset(event, 0, sizeof(yaml_event_t));
}





int
yaml_document_initialize(yaml_document_t *document,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int start_implicit, int end_implicit)
{
    struct {
        yaml_error_type_t error;
    } context;
    struct {
        yaml_node_t *start;
        yaml_node_t *end;
        yaml_node_t *top;
    } nodes = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_version_directive_t *version_directive_copy = ((void*)0);
    struct {
        yaml_tag_directive_t *start;
        yaml_tag_directive_t *end;
        yaml_tag_directive_t *top;
    } tag_directives_copy = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_tag_directive_t value = { ((void*)0), ((void*)0) };
    yaml_mark_t mark = { 0, 0, 0 };

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1053,  __PRETTY_FUNCTION__));
    (((tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)) ? (void) (0) : __assert_fail ("(tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)", "ext/psych/yaml/api.c", 1055,  __PRETTY_FUNCTION__));



    if (!(((nodes).start = yaml_malloc((16)*sizeof(*(nodes).start))) ? ((nodes).top = (nodes).start, (nodes).end = (nodes).start+(16), 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    if (version_directive) {
        version_directive_copy = yaml_malloc(sizeof(yaml_version_directive_t));
        if (!version_directive_copy) goto error;
        version_directive_copy->major = version_directive->major;
        version_directive_copy->minor = version_directive->minor;
    }

    if (tag_directives_start != tag_directives_end) {
        yaml_tag_directive_t *tag_directive;
        if (!(((tag_directives_copy).start = yaml_malloc((16)*sizeof(*(tag_directives_copy).start))) ? ((tag_directives_copy).top = (tag_directives_copy).start, (tag_directives_copy).end = (tag_directives_copy).start+(16), 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
            goto error;
        for (tag_directive = tag_directives_start;
                tag_directive != tag_directives_end; tag_directive ++) {
            ((tag_directive->handle) ? (void) (0) : __assert_fail ("tag_directive->handle", "ext/psych/yaml/api.c", 1073,  __PRETTY_FUNCTION__));
            ((tag_directive->prefix) ? (void) (0) : __assert_fail ("tag_directive->prefix", "ext/psych/yaml/api.c", 1074,  __PRETTY_FUNCTION__));
            if (!yaml_check_utf8(tag_directive->handle,
                        strlen((char *)tag_directive->handle)))
                goto error;
            if (!yaml_check_utf8(tag_directive->prefix,
                        strlen((char *)tag_directive->prefix)))
                goto error;
            value.handle = yaml_strdup(tag_directive->handle);
            value.prefix = yaml_strdup(tag_directive->prefix);
            if (!value.handle || !value.prefix) goto error;
            if (!(((tag_directives_copy).top != (tag_directives_copy).end || yaml_stack_extend((void **)&(tag_directives_copy).start, (void **)&(tag_directives_copy).top, (void **)&(tag_directives_copy).end)) ? (*((tag_directives_copy).top++) = value, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
                goto error;
            value.handle = ((void*)0);
            value.prefix = ((void*)0);
        }
    }

    (memset(&(*document), 0, sizeof(yaml_document_t)), (*document).nodes.start = (nodes.start), (*document).nodes.end = (nodes.end), (*document).nodes.top = (nodes.start), (*document).version_directive = (version_directive_copy), (*document).tag_directives.start = (tag_directives_copy.start), (*document).tag_directives.end = (tag_directives_copy.top), (*document).start_implicit = (start_implicit), (*document).end_implicit = (end_implicit), (*document).start_mark = (mark), (*document).end_mark = (mark));



    return 1;

error:
    (yaml_free((nodes).start), (nodes).start = (nodes).top = (nodes).end = 0);
    yaml_free(version_directive_copy);
    while (!((tag_directives_copy).start == (tag_directives_copy).top)) {
        yaml_tag_directive_t value = (*(--(tag_directives_copy).top));
        yaml_free(value.handle);
        yaml_free(value.prefix);
    }
    (yaml_free((tag_directives_copy).start), (tag_directives_copy).start = (tag_directives_copy).top = (tag_directives_copy).end = 0);
    yaml_free(value.handle);
    yaml_free(value.prefix);

    return 0;
}





void
yaml_document_delete(yaml_document_t *document)
{
    struct {
        yaml_error_type_t error;
    } context;
    yaml_tag_directive_t *tag_directive;

    context.error = YAML_NO_ERROR;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1126,  __PRETTY_FUNCTION__));

    while (!((document->nodes).start == (document->nodes).top)) {
        yaml_node_t node = (*(--(document->nodes).top));
        yaml_free(node.tag);
        switch (node.type) {
            case YAML_SCALAR_NODE:
                yaml_free(node.data.scalar.value);
                break;
            case YAML_SEQUENCE_NODE:
                (yaml_free((node.data.sequence.items).start), (node.data.sequence.items).start = (node.data.sequence.items).top = (node.data.sequence.items).end = 0);
                break;
            case YAML_MAPPING_NODE:
                (yaml_free((node.data.mapping.pairs).start), (node.data.mapping.pairs).start = (node.data.mapping.pairs).top = (node.data.mapping.pairs).end = 0);
                break;
            default:
                ((0) ? (void) (0) : __assert_fail ("0", "ext/psych/yaml/api.c", 1142,  __PRETTY_FUNCTION__));
        }
    }
    (yaml_free((document->nodes).start), (document->nodes).start = (document->nodes).top = (document->nodes).end = 0);

    yaml_free(document->version_directive);
    for (tag_directive = document->tag_directives.start;
            tag_directive != document->tag_directives.end;
            tag_directive++) {
        yaml_free(tag_directive->handle);
        yaml_free(tag_directive->prefix);
    }
    yaml_free(document->tag_directives.start);

    memset(document, 0, sizeof(yaml_document_t));
}





yaml_node_t *
yaml_document_get_node(yaml_document_t *document, int index)
{
    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1166,  __PRETTY_FUNCTION__));

    if (index > 0 && document->nodes.start + index <= document->nodes.top) {
        return document->nodes.start + index - 1;
    }
    return ((void*)0);
}





yaml_node_t *
yaml_document_get_root_node(yaml_document_t *document)
{
    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1181,  __PRETTY_FUNCTION__));

    if (document->nodes.top != document->nodes.start) {
        return document->nodes.start;
    }
    return ((void*)0);
}





int
yaml_document_add_scalar(yaml_document_t *document,
        yaml_char_t *tag, yaml_char_t *value, int length,
        yaml_scalar_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context;
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = ((void*)0);
    yaml_char_t *value_copy = ((void*)0);
    yaml_node_t node;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1206,  __PRETTY_FUNCTION__));
    ((value) ? (void) (0) : __assert_fail ("value", "ext/psych/yaml/api.c", 1207,  __PRETTY_FUNCTION__));

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:str";
    }

    if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(tag);
    if (!tag_copy) goto error;

    if (length < 0) {
        length = strlen((char *)value);
    }

    if (!yaml_check_utf8(value, length)) goto error;
    value_copy = yaml_malloc(length+1);
    if (!value_copy) goto error;
    memcpy(value_copy, value, length);
    value_copy[length] = '\0';

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_SCALAR_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.scalar.value = (value_copy), (node).data.scalar.length = (length), (node).data.scalar.style = (style));
    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend((void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    yaml_free(tag_copy);
    yaml_free(value_copy);

    return 0;
}





int
yaml_document_add_sequence(yaml_document_t *document,
        yaml_char_t *tag, yaml_sequence_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context;
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = ((void*)0);
    struct {
        yaml_node_item_t *start;
        yaml_node_item_t *end;
        yaml_node_item_t *top;
    } items = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_node_t node;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1259,  __PRETTY_FUNCTION__));

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:seq";
    }

    if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(tag);
    if (!tag_copy) goto error;

    if (!(((items).start = yaml_malloc((16)*sizeof(*(items).start))) ? ((items).top = (items).start, (items).end = (items).start+(16), 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_SEQUENCE_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.sequence.items.start = (items.start), (node).data.sequence.items.end = (items.end), (node).data.sequence.items.top = (items.start), (node).data.sequence.style = (style));

    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend((void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    (yaml_free((items).start), (items).start = (items).top = (items).end = 0);
    yaml_free(tag_copy);

    return 0;
}





int
yaml_document_add_mapping(yaml_document_t *document,
        yaml_char_t *tag, yaml_mapping_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context;
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = ((void*)0);
    struct {
        yaml_node_pair_t *start;
        yaml_node_pair_t *end;
        yaml_node_pair_t *top;
    } pairs = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_node_t node;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1304,  __PRETTY_FUNCTION__));

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:map";
    }

    if (!yaml_check_utf8(tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(tag);
    if (!tag_copy) goto error;

    if (!(((pairs).start = yaml_malloc((16)*sizeof(*(pairs).start))) ? ((pairs).top = (pairs).start, (pairs).end = (pairs).start+(16), 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_MAPPING_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.mapping.pairs.start = (pairs.start), (node).data.mapping.pairs.end = (pairs.end), (node).data.mapping.pairs.top = (pairs.start), (node).data.mapping.style = (style));

    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend((void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    (yaml_free((pairs).start), (pairs).start = (pairs).top = (pairs).end = 0);
    yaml_free(tag_copy);

    return 0;
}





int
yaml_document_append_sequence_item(yaml_document_t *document,
        int sequence, int item)
{
    struct {
        yaml_error_type_t error;
    } context;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1341,  __PRETTY_FUNCTION__));
    ((sequence > 0 && document->nodes.start + sequence <= document->nodes.top) ? (void) (0) : __assert_fail ("sequence > 0 && document->nodes.start + sequence <= document->nodes.top", "ext/psych/yaml/api.c", 1343,  __PRETTY_FUNCTION__));


    ((document->nodes.start[sequence-1].type == YAML_SEQUENCE_NODE) ? (void) (0) : __assert_fail ("document->nodes.start[sequence-1].type == YAML_SEQUENCE_NODE", "ext/psych/yaml/api.c", 1345,  __PRETTY_FUNCTION__));

    ((item > 0 && document->nodes.start + item <= document->nodes.top) ? (void) (0) : __assert_fail ("item > 0 && document->nodes.start + item <= document->nodes.top", "ext/psych/yaml/api.c", 1347,  __PRETTY_FUNCTION__));


    if (!(((document->nodes.start[sequence-1].data.sequence.items).top != (document->nodes.start[sequence-1].data.sequence.items).end || yaml_stack_extend((void **)&(document->nodes.start[sequence-1].data.sequence.items).start, (void **)&(document->nodes.start[sequence-1].data.sequence.items).top, (void **)&(document->nodes.start[sequence-1].data.sequence.items).end)) ? (*((document->nodes.start[sequence-1].data.sequence.items).top++) = item, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))

        return 0;

    return 1;
}





int
yaml_document_append_mapping_pair(yaml_document_t *document,
        int mapping, int key, int value)
{
    struct {
        yaml_error_type_t error;
    } context;

    yaml_node_pair_t pair;

    ((document) ? (void) (0) : __assert_fail ("document", "ext/psych/yaml/api.c", 1371,  __PRETTY_FUNCTION__));
    ((mapping > 0 && document->nodes.start + mapping <= document->nodes.top) ? (void) (0) : __assert_fail ("mapping > 0 && document->nodes.start + mapping <= document->nodes.top", "ext/psych/yaml/api.c", 1373,  __PRETTY_FUNCTION__));


    ((document->nodes.start[mapping-1].type == YAML_MAPPING_NODE) ? (void) (0) : __assert_fail ("document->nodes.start[mapping-1].type == YAML_MAPPING_NODE", "ext/psych/yaml/api.c", 1375,  __PRETTY_FUNCTION__));

    ((key > 0 && document->nodes.start + key <= document->nodes.top) ? (void) (0) : __assert_fail ("key > 0 && document->nodes.start + key <= document->nodes.top", "ext/psych/yaml/api.c", 1377,  __PRETTY_FUNCTION__));

    ((value > 0 && document->nodes.start + value <= document->nodes.top) ? (void) (0) : __assert_fail ("value > 0 && document->nodes.start + value <= document->nodes.top", "ext/psych/yaml/api.c", 1379,  __PRETTY_FUNCTION__));


    pair.key = key;
    pair.value = value;

    if (!(((document->nodes.start[mapping-1].data.mapping.pairs).top != (document->nodes.start[mapping-1].data.mapping.pairs).end || yaml_stack_extend((void **)&(document->nodes.start[mapping-1].data.mapping.pairs).start, (void **)&(document->nodes.start[mapping-1].data.mapping.pairs).top, (void **)&(document->nodes.start[mapping-1].data.mapping.pairs).end)) ? (*((document->nodes.start[mapping-1].data.mapping.pairs).top++) = pair, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))

        return 0;

    return 1;
}
