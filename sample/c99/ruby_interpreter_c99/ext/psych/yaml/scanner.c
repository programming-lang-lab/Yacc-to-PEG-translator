












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
int
yaml_parser_scan(yaml_parser_t *parser, yaml_token_t *token);





static int
yaml_parser_set_scanner_error(yaml_parser_t *parser, const char *context,
        yaml_mark_t context_mark, const char *problem);





int
yaml_parser_fetch_more_tokens(yaml_parser_t *parser);

static int
yaml_parser_fetch_next_token(yaml_parser_t *parser);





static int
yaml_parser_stale_simple_keys(yaml_parser_t *parser);

static int
yaml_parser_save_simple_key(yaml_parser_t *parser);

static int
yaml_parser_remove_simple_key(yaml_parser_t *parser);

static int
yaml_parser_increase_flow_level(yaml_parser_t *parser);

static int
yaml_parser_decrease_flow_level(yaml_parser_t *parser);





static int
yaml_parser_roll_indent(yaml_parser_t *parser, ptrdiff_t column,
        ptrdiff_t number, yaml_token_type_t type, yaml_mark_t mark);

static int
yaml_parser_unroll_indent(yaml_parser_t *parser, ptrdiff_t column);





static int
yaml_parser_fetch_stream_start(yaml_parser_t *parser);

static int
yaml_parser_fetch_stream_end(yaml_parser_t *parser);

static int
yaml_parser_fetch_directive(yaml_parser_t *parser);

static int
yaml_parser_fetch_document_indicator(yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_collection_start(yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_collection_end(yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_entry(yaml_parser_t *parser);

static int
yaml_parser_fetch_block_entry(yaml_parser_t *parser);

static int
yaml_parser_fetch_key(yaml_parser_t *parser);

static int
yaml_parser_fetch_value(yaml_parser_t *parser);

static int
yaml_parser_fetch_anchor(yaml_parser_t *parser, yaml_token_type_t type);

static int
yaml_parser_fetch_tag(yaml_parser_t *parser);

static int
yaml_parser_fetch_block_scalar(yaml_parser_t *parser, int literal);

static int
yaml_parser_fetch_flow_scalar(yaml_parser_t *parser, int single);

static int
yaml_parser_fetch_plain_scalar(yaml_parser_t *parser);





static int
yaml_parser_scan_to_next_token(yaml_parser_t *parser);

static int
yaml_parser_scan_directive(yaml_parser_t *parser, yaml_token_t *token);

static int
yaml_parser_scan_directive_name(yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **name);

static int
yaml_parser_scan_version_directive_value(yaml_parser_t *parser,
        yaml_mark_t start_mark, int *major, int *minor);

static int
yaml_parser_scan_version_directive_number(yaml_parser_t *parser,
        yaml_mark_t start_mark, int *number);

static int
yaml_parser_scan_tag_directive_value(yaml_parser_t *parser,
        yaml_mark_t mark, yaml_char_t **handle, yaml_char_t **prefix);

static int
yaml_parser_scan_anchor(yaml_parser_t *parser, yaml_token_t *token,
        yaml_token_type_t type);

static int
yaml_parser_scan_tag(yaml_parser_t *parser, yaml_token_t *token);

static int
yaml_parser_scan_tag_handle(yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_char_t **handle);

static int
yaml_parser_scan_tag_uri(yaml_parser_t *parser, int directive,
        yaml_char_t *head, yaml_mark_t start_mark, yaml_char_t **uri);

static int
yaml_parser_scan_uri_escapes(yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_string_t *string);

static int
yaml_parser_scan_block_scalar(yaml_parser_t *parser, yaml_token_t *token,
        int literal);

static int
yaml_parser_scan_block_scalar_breaks(yaml_parser_t *parser,
        int *indent, yaml_string_t *breaks,
        yaml_mark_t start_mark, yaml_mark_t *end_mark);

static int
yaml_parser_scan_flow_scalar(yaml_parser_t *parser, yaml_token_t *token,
        int single);

static int
yaml_parser_scan_plain_scalar(yaml_parser_t *parser, yaml_token_t *token);





int
yaml_parser_scan(yaml_parser_t *parser, yaml_token_t *token)
{
    ((parser) ? (void) (0) : __assert_fail ("parser", "ext/psych/yaml/scanner.c", 744,  __PRETTY_FUNCTION__));
    ((token) ? (void) (0) : __assert_fail ("token", "ext/psych/yaml/scanner.c", 745,  __PRETTY_FUNCTION__));



    memset(token, 0, sizeof(yaml_token_t));



    if (parser->stream_end_produced || parser->error) {
        return 1;
    }



    if (!parser->token_available) {
        if (!yaml_parser_fetch_more_tokens(parser))
            return 0;
    }



    *token = (*((parser->tokens).head++));
    parser->token_available = 0;
    parser->tokens_parsed ++;

    if (token->type == YAML_STREAM_END_TOKEN) {
        parser->stream_end_produced = 1;
    }

    return 1;
}





static int
yaml_parser_set_scanner_error(yaml_parser_t *parser, const char *context,
        yaml_mark_t context_mark, const char *problem)
{
    parser->error = YAML_SCANNER_ERROR;
    parser->context = context;
    parser->context_mark = context_mark;
    parser->problem = problem;
    parser->problem_mark = parser->mark;

    return 0;
}






int
yaml_parser_fetch_more_tokens(yaml_parser_t *parser)
{
    int need_more_tokens;



    while (1)
    {




        need_more_tokens = 0;

        if (parser->tokens.head == parser->tokens.tail)
        {


            need_more_tokens = 1;
        }
        else
        {
            yaml_simple_key_t *simple_key;



            if (!yaml_parser_stale_simple_keys(parser))
                return 0;

            for (simple_key = parser->simple_keys.start;
                    simple_key != parser->simple_keys.top; simple_key++) {
                if (simple_key->possible
                        && simple_key->token_number == parser->tokens_parsed) {
                    need_more_tokens = 1;
                    break;
                }
            }
        }



        if (!need_more_tokens)
            break;



        if (!yaml_parser_fetch_next_token(parser))
            return 0;
    }

    parser->token_available = 1;

    return 1;
}





static int
yaml_parser_fetch_next_token(yaml_parser_t *parser)
{


    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1))))
        return 0;



    if (!parser->stream_start_produced)
        return yaml_parser_fetch_stream_start(parser);



    if (!yaml_parser_scan_to_next_token(parser))
        return 0;



    if (!yaml_parser_stale_simple_keys(parser))
        return 0;



    if (!yaml_parser_unroll_indent(parser, parser->mark.column))
        return 0;






    if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(parser, (4))))
        return 0;



    if (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0')))
        return yaml_parser_fetch_stream_end(parser);



    if (parser->mark.column == 0 && (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))))
        return yaml_parser_fetch_directive(parser);



    if (parser->mark.column == 0
            && ((parser->buffer).pointer[0] == (yaml_char_t)('-'))
            && ((parser->buffer).pointer[1] == (yaml_char_t)('-'))
            && ((parser->buffer).pointer[2] == (yaml_char_t)('-'))
            && (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_document_indicator(parser,
                YAML_DOCUMENT_START_TOKEN);



    if (parser->mark.column == 0
            && ((parser->buffer).pointer[0] == (yaml_char_t)('.'))
            && ((parser->buffer).pointer[1] == (yaml_char_t)('.'))
            && ((parser->buffer).pointer[2] == (yaml_char_t)('.'))
            && (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_document_indicator(parser,
                YAML_DOCUMENT_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('['))))
        return yaml_parser_fetch_flow_collection_start(parser,
                YAML_FLOW_SEQUENCE_START_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('{'))))
        return yaml_parser_fetch_flow_collection_start(parser,
                YAML_FLOW_MAPPING_START_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((']'))))
        return yaml_parser_fetch_flow_collection_end(parser,
                YAML_FLOW_SEQUENCE_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))))
        return yaml_parser_fetch_flow_collection_end(parser,
                YAML_FLOW_MAPPING_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((','))))
        return yaml_parser_fetch_flow_entry(parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))) && (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_block_entry(parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
            && (parser->flow_level || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_key(parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
            && (parser->flow_level || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_value(parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('*'))))
        return yaml_parser_fetch_anchor(parser, YAML_ALIAS_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))))
        return yaml_parser_fetch_anchor(parser, YAML_ANCHOR_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))))
        return yaml_parser_fetch_tag(parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('|'))) && !parser->flow_level)
        return yaml_parser_fetch_block_scalar(parser, 1);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('>'))) && !parser->flow_level)
        return yaml_parser_fetch_block_scalar(parser, 0);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('\''))))
        return yaml_parser_fetch_flow_scalar(parser, 1);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('"'))))
        return yaml_parser_fetch_flow_scalar(parser, 0);
    if (!(((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('[')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('{')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('*')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('|')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('>'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('\'')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('"'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('`')))) ||
            ((((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))) && !(((((parser->buffer))).pointer[((1))] == (yaml_char_t)(' ')) || ((((parser->buffer))).pointer[((1))] == (yaml_char_t)('\t')))) ||
            (!parser->flow_level &&
             ((((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))))
             && !(((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_plain_scalar(parser);





    return yaml_parser_set_scanner_error(parser,
            "while scanning for the next token", parser->mark,
            "found character that cannot start any token");
}






static int
yaml_parser_stale_simple_keys(yaml_parser_t *parser)
{
    yaml_simple_key_t *simple_key;



    for (simple_key = parser->simple_keys.start;
            simple_key != parser->simple_keys.top; simple_key ++)
    {







        if (simple_key->possible
                && (simple_key->mark.line < parser->mark.line
                    || simple_key->mark.index+1024 < parser->mark.index)) {



            if (simple_key->required) {
                return yaml_parser_set_scanner_error(parser,
                        "while scanning a simple key", simple_key->mark,
                        "could not find expected ':'");
            }

            simple_key->possible = 0;
        }
    }

    return 1;
}






static int
yaml_parser_save_simple_key(yaml_parser_t *parser)
{






    int required = (!parser->flow_level
            && parser->indent == (ptrdiff_t)parser->mark.column);





    if (parser->simple_key_allowed)
    {
        yaml_simple_key_t simple_key;
        simple_key.possible = 1;
        simple_key.required = required;
        simple_key.token_number =
            parser->tokens_parsed + (parser->tokens.tail - parser->tokens.head);
        simple_key.mark = parser->mark;

        if (!yaml_parser_remove_simple_key(parser)) return 0;

        *(parser->simple_keys.top-1) = simple_key;
    }

    return 1;
}





static int
yaml_parser_remove_simple_key(yaml_parser_t *parser)
{
    yaml_simple_key_t *simple_key = parser->simple_keys.top-1;

    if (simple_key->possible)
    {


        if (simple_key->required) {
            return yaml_parser_set_scanner_error(parser,
                    "while scanning a simple key", simple_key->mark,
                    "could not find expected ':'");
        }
    }



    simple_key->possible = 0;

    return 1;
}





static int
yaml_parser_increase_flow_level(yaml_parser_t *parser)
{
    yaml_simple_key_t empty_simple_key = { 0, 0, 0, { 0, 0, 0 } };



    if (!(((parser->simple_keys).top != (parser->simple_keys).end || yaml_stack_extend((void **)&(parser->simple_keys).start, (void **)&(parser->simple_keys).top, (void **)&(parser->simple_keys).end)) ? (*((parser->simple_keys).top++) = empty_simple_key, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;



    if (parser->flow_level == 2147483647) {
        parser->error = YAML_MEMORY_ERROR;
        return 0;
    }

    parser->flow_level++;

    return 1;
}





static int
yaml_parser_decrease_flow_level(yaml_parser_t *parser)
{
    if (parser->flow_level) {
        parser->flow_level --;
 (void)(*(--(parser->simple_keys).top));
    }

    return 1;
}
static int
yaml_parser_roll_indent(yaml_parser_t *parser, ptrdiff_t column,
        ptrdiff_t number, yaml_token_type_t type, yaml_mark_t mark)
{
    yaml_token_t token;



    if (parser->flow_level)
        return 1;

    if (parser->indent < column)
    {





        if (!(((parser->indents).top != (parser->indents).end || yaml_stack_extend((void **)&(parser->indents).start, (void **)&(parser->indents).top, (void **)&(parser->indents).end)) ? (*((parser->indents).top++) = parser->indent, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            return 0;

        if (column > 2147483647) {
            parser->error = YAML_MEMORY_ERROR;
            return 0;
        }

        parser->indent = column;



        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (mark), (token).end_mark = (mark));

        if (number == -1) {
            if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
                return 0;
        }
        else {
            if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (memmove((parser->tokens).head+(number - parser->tokens_parsed)+1,(parser->tokens).head+(number - parser->tokens_parsed), ((parser->tokens).tail-(parser->tokens).head-(number - parser->tokens_parsed))*sizeof(*(parser->tokens).start)), *((parser->tokens).head+(number - parser->tokens_parsed)) = token, (parser->tokens).tail++, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))

                return 0;
        }
    }

    return 1;
}
static int
yaml_parser_unroll_indent(yaml_parser_t *parser, ptrdiff_t column)
{
    yaml_token_t token;



    if (parser->flow_level)
        return 1;



    while (parser->indent > column)
    {


        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_BLOCK_END_TOKEN), (token).start_mark = (parser->mark), (token).end_mark = (parser->mark));

        if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            return 0;



        parser->indent = (*(--(parser->indents).top));
    }

    return 1;
}





static int
yaml_parser_fetch_stream_start(yaml_parser_t *parser)
{
    yaml_simple_key_t simple_key = { 0, 0, 0, { 0, 0, 0 } };
    yaml_token_t token;



    parser->indent = -1;



    if (!(((parser->simple_keys).top != (parser->simple_keys).end || yaml_stack_extend((void **)&(parser->simple_keys).start, (void **)&(parser->simple_keys).top, (void **)&(parser->simple_keys).end)) ? (*((parser->simple_keys).top++) = simple_key, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;



    parser->simple_key_allowed = 1;



    parser->stream_start_produced = 1;



    ((memset(&((token)), 0, sizeof(yaml_token_t)), ((token)).type = (YAML_STREAM_START_TOKEN), ((token)).start_mark = ((parser->mark)), ((token)).end_mark = ((parser->mark))), (token).data.stream_start.encoding = (parser->encoding));


    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_stream_end(yaml_parser_t *parser)
{
    yaml_token_t token;



    if (parser->mark.column != 0) {
        parser->mark.column = 0;
        parser->mark.line ++;
    }



    if (!yaml_parser_unroll_indent(parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;

    parser->simple_key_allowed = 0;



    ((memset(&((token)), 0, sizeof(yaml_token_t)), ((token)).type = (YAML_STREAM_END_TOKEN), ((token)).start_mark = ((parser->mark)), ((token)).end_mark = ((parser->mark))));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_directive(yaml_parser_t *parser)
{
    yaml_token_t token;



    if (!yaml_parser_unroll_indent(parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;

    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_directive(parser, &token))
        return 0;



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_document_indicator(yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!yaml_parser_unroll_indent(parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;

    parser->simple_key_allowed = 0;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_collection_start(yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!yaml_parser_save_simple_key(parser))
        return 0;



    if (!yaml_parser_increase_flow_level(parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_collection_end(yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;



    if (!yaml_parser_decrease_flow_level(parser))
        return 0;



    parser->simple_key_allowed = 0;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_entry(yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_FLOW_ENTRY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_block_entry(yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!parser->flow_level)
    {


        if (!parser->simple_key_allowed) {
            return yaml_parser_set_scanner_error(parser, ((void*)0), parser->mark,
                    "block sequence entries are not allowed in this context");
        }



        if (!yaml_parser_roll_indent(parser, parser->mark.column, -1,
                    YAML_BLOCK_SEQUENCE_START_TOKEN, parser->mark))
            return 0;
    }
    else
    {





    }



    if (!yaml_parser_remove_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_BLOCK_ENTRY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_key(yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;



    if (!parser->flow_level)
    {


        if (!parser->simple_key_allowed) {
            return yaml_parser_set_scanner_error(parser, ((void*)0), parser->mark,
                    "mapping keys are not allowed in this context");
        }



        if (!yaml_parser_roll_indent(parser, parser->mark.column, -1,
                    YAML_BLOCK_MAPPING_START_TOKEN, parser->mark))
            return 0;
    }



    if (!yaml_parser_remove_simple_key(parser))
        return 0;



    parser->simple_key_allowed = (!parser->flow_level);



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_KEY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_value(yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark;
    yaml_token_t token;
    yaml_simple_key_t *simple_key = parser->simple_keys.top-1;



    if (simple_key->possible)
    {



        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_KEY_TOKEN), (token).start_mark = (simple_key->mark), (token).end_mark = (simple_key->mark));

        if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (memmove((parser->tokens).head+(simple_key->token_number - parser->tokens_parsed)+1,(parser->tokens).head+(simple_key->token_number - parser->tokens_parsed), ((parser->tokens).tail-(parser->tokens).head-(simple_key->token_number - parser->tokens_parsed))*sizeof(*(parser->tokens).start)), *((parser->tokens).head+(simple_key->token_number - parser->tokens_parsed)) = token, (parser->tokens).tail++, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))

            return 0;



        if (!yaml_parser_roll_indent(parser, simple_key->mark.column,
                    simple_key->token_number,
                    YAML_BLOCK_MAPPING_START_TOKEN, simple_key->mark))
            return 0;



        simple_key->possible = 0;



        parser->simple_key_allowed = 0;
    }
    else
    {




        if (!parser->flow_level)
        {


            if (!parser->simple_key_allowed) {
                return yaml_parser_set_scanner_error(parser, ((void*)0), parser->mark,
                        "mapping values are not allowed in this context");
            }



            if (!yaml_parser_roll_indent(parser, parser->mark.column, -1,
                        YAML_BLOCK_MAPPING_START_TOKEN, parser->mark))
                return 0;
        }



        parser->simple_key_allowed = (!parser->flow_level);
    }



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_VALUE_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_anchor(yaml_parser_t *parser, yaml_token_type_t type)
{
    yaml_token_t token;



    if (!yaml_parser_save_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_anchor(parser, &token, type))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }
    return 1;
}





static int
yaml_parser_fetch_tag(yaml_parser_t *parser)
{
    yaml_token_t token;



    if (!yaml_parser_save_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_tag(parser, &token))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_block_scalar(yaml_parser_t *parser, int literal)
{
    yaml_token_t token;



    if (!yaml_parser_remove_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 1;



    if (!yaml_parser_scan_block_scalar(parser, &token, literal))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_flow_scalar(yaml_parser_t *parser, int single)
{
    yaml_token_t token;



    if (!yaml_parser_save_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_flow_scalar(parser, &token, single))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_plain_scalar(yaml_parser_t *parser)
{
    yaml_token_t token;



    if (!yaml_parser_save_simple_key(parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_plain_scalar(parser, &token))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend((void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(&token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_scan_to_next_token(yaml_parser_t *parser)
{


    while (1)
    {


        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;

        if (parser->mark.column == 0 && ((((parser->buffer)).pointer[(0)] == (yaml_char_t)('\xEF')) && (((parser->buffer)).pointer[(0)+1] == (yaml_char_t)('\xBB')) && (((parser->buffer)).pointer[(0)+2] == (yaml_char_t)('\xBF'))))
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;

        while ((((parser->buffer)).pointer[0] == (yaml_char_t)((' '))) ||
                ((parser->flow_level || !parser->simple_key_allowed) &&
                 (((parser->buffer)).pointer[0] == (yaml_char_t)(('\t'))))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;
        }



        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
            while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;
            }
        }



        if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) return 0;
            ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);



            if (!parser->flow_level) {
                parser->simple_key_allowed = 1;
            }
        }
        else
        {


            break;
        }
    }

    return 1;
}
int
yaml_parser_scan_directive(yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_mark_t start_mark, end_mark;
    yaml_char_t *name = ((void*)0);
    int major, minor;
    yaml_char_t *handle = ((void*)0), *prefix = ((void*)0);



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!yaml_parser_scan_directive_name(parser, start_mark, &name))
        goto error;



    if (strcmp((char *)name, "YAML") == 0)
    {


        if (!yaml_parser_scan_version_directive_value(parser, start_mark,
                    &major, &minor))
            goto error;

        end_mark = parser->mark;



        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_VERSION_DIRECTIVE_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.version_directive.major = (major), (*token).data.version_directive.minor = (minor));

    }



    else if (strcmp((char *)name, "TAG") == 0)
    {


        if (!yaml_parser_scan_tag_directive_value(parser, start_mark,
                    &handle, &prefix))
            goto error;

        end_mark = parser->mark;



        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_TAG_DIRECTIVE_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.tag_directive.handle = (handle), (*token).data.tag_directive.prefix = (prefix));

    }



    else
    {
        yaml_parser_set_scanner_error(parser, "while scanning a directive",
                start_mark, "found unknown directive name");
        goto error;
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }

    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        }
    }



    if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
        yaml_parser_set_scanner_error(parser, "while scanning a directive",
                start_mark, "did not find expected comment or line break");
        goto error;
    }



    if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) {
        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;
        ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
    }

    yaml_free(name);

    return 1;

error:
    yaml_free(prefix);
    yaml_free(handle);
    yaml_free(name);
    return 0;
}
static int
yaml_parser_scan_directive_name(yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **name)
{
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-'))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }



    if (string.start == string.pointer) {
        yaml_parser_set_scanner_error(parser, "while scanning a directive",
                start_mark, "could not find expected directive name");
        goto error;
    }



    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(parser, "while scanning a directive",
                start_mark, "found unexpected non-alphabetical character");
        goto error;
    }

    *name = string.start;

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}
static int
yaml_parser_scan_version_directive_value(yaml_parser_t *parser,
        yaml_mark_t start_mark, int *major, int *minor)
{


    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;
    }



    if (!yaml_parser_scan_version_directive_number(parser, start_mark, major))
        return 0;



    if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('.')))) {
        return yaml_parser_set_scanner_error(parser, "while scanning a %YAML directive",
                start_mark, "did not find expected digit or '.' character");
    }

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!yaml_parser_scan_version_directive_number(parser, start_mark, minor))
        return 0;

    return 1;
}
static int
yaml_parser_scan_version_directive_number(yaml_parser_t *parser,
        yaml_mark_t start_mark, int *number)
{
    int value = 0;
    size_t length = 0;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
    {


        if (++length > 9) {
            return yaml_parser_set_scanner_error(parser, "while scanning a %YAML directive",
                    start_mark, "found extremely long version number");
        }

        value = value*10 + (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;
    }



    if (!length) {
        return yaml_parser_set_scanner_error(parser, "while scanning a %YAML directive",
                start_mark, "did not find expected version number");
    }

    *number = value;

    return 1;
}
static int
yaml_parser_scan_tag_directive_value(yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **handle, yaml_char_t **prefix)
{
    yaml_char_t *handle_value = ((void*)0);
    yaml_char_t *prefix_value = ((void*)0);



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }



    if (!yaml_parser_scan_tag_handle(parser, 1, start_mark, &handle_value))
        goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    if (!((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        yaml_parser_set_scanner_error(parser, "while scanning a %TAG directive",
                start_mark, "did not find expected whitespace");
        goto error;
    }



    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }



    if (!yaml_parser_scan_tag_uri(parser, 1, ((void*)0), start_mark, &prefix_value))
        goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(parser, "while scanning a %TAG directive",
                start_mark, "did not find expected whitespace or line break");
        goto error;
    }

    *handle = handle_value;
    *prefix = prefix_value;

    return 1;

error:
    yaml_free(handle_value);
    yaml_free(prefix_value);
    return 0;
}

static int
yaml_parser_scan_anchor(yaml_parser_t *parser, yaml_token_t *token,
        yaml_token_type_t type)
{
    int length = 0;
    yaml_mark_t start_mark, end_mark;
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-')) {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        length ++;
    }

    end_mark = parser->mark;
    if (!length || !(((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((',')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('`'))))) {
        yaml_parser_set_scanner_error(parser, type == YAML_ANCHOR_TOKEN ?
                "while scanning an anchor": "while scanning an alias", start_mark,
                "did not find expected alphabetic or numeric character");
        goto error;
    }



    if (type == YAML_ANCHOR_TOKEN) {
        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_ANCHOR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.anchor.value = (string.start));
    }
    else {
        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_ALIAS_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.alias.value = (string.start));
    }

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_tag(yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_char_t *handle = ((void*)0);
    yaml_char_t *suffix = ((void*)0);
    yaml_mark_t start_mark, end_mark;

    start_mark = parser->mark;



    if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;

    if (((parser->buffer).pointer[1] == (yaml_char_t)('<')))
    {


        handle = yaml_malloc(1);
        if (!handle) goto error;
        handle[0] = '\0';



        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



        if (!yaml_parser_scan_tag_uri(parser, 0, ((void*)0), start_mark, &suffix))
            goto error;



        if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('>')))) {
            yaml_parser_set_scanner_error(parser, "while scanning a tag",
                    start_mark, "did not find the expected '>'");
            goto error;
        }

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    }
    else
    {




        if (!yaml_parser_scan_tag_handle(parser, 0, start_mark, &handle))
            goto error;



        if (handle[0] == '!' && handle[1] != '\0' && handle[strlen((char *)handle)-1] == '!')
        {


            if (!yaml_parser_scan_tag_uri(parser, 0, ((void*)0), start_mark, &suffix))
                goto error;
        }
        else
        {


            if (!yaml_parser_scan_tag_uri(parser, 0, handle, start_mark, &suffix))
                goto error;



            yaml_free(handle);
            handle = yaml_malloc(2);
            if (!handle) goto error;
            handle[0] = '!';
            handle[1] = '\0';






            if (suffix[0] == '\0') {
                yaml_char_t *tmp = handle;
                handle = suffix;
                suffix = tmp;
            }
        }
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(parser, "while scanning a tag",
                start_mark, "did not find expected whitespace or line break");
        goto error;
    }

    end_mark = parser->mark;



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_TAG_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.tag.handle = (handle), (*token).data.tag.suffix = (suffix));

    return 1;

error:
    yaml_free(handle);
    yaml_free(suffix);
    return 0;
}





static int
yaml_parser_scan_tag_handle(yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_char_t **handle)
{
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('!')))) {
        yaml_parser_set_scanner_error(parser, directive ?
                "while scanning a tag directive": "while scanning a tag",
                start_mark, "did not find expected '!'");
        goto error;
    }



    if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-'))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
    }
    else
    {






        if (directive && !(string.start[0] == '!' && string.start[1] == '\0')) {
            yaml_parser_set_scanner_error(parser, "while parsing a tag directive",
                    start_mark, "did not find expected '!'");
            goto error;
        }
    }

    *handle = string.start;

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_tag_uri(yaml_parser_t *parser, int directive,
        yaml_char_t *head, yaml_mark_t start_mark, yaml_char_t **uri)
{
    size_t length = head ? strlen((char *)head) : 0;
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    while ((size_t)(string.end - string.start) <= length) {
        if (!yaml_string_extend(&string.start, &string.pointer, &string.end)) {
            parser->error = YAML_MEMORY_ERROR;
            goto error;
        }
    }







    if (length > 1) {
        memcpy(string.start, head+1, length-1);
        string.pointer += length-1;
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-') || (((parser->buffer)).pointer[0] == (yaml_char_t)((';')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('/'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('=')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('$')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('.')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('~')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('*'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('\'')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('('))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((')')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('['))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((']')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))))
    {


        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))) {
            if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)))
                goto error;

            if (!yaml_parser_scan_uri_escapes(parser,
                        directive, start_mark, &string)) goto error;
        }
        else {
            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        }

        length ++;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }



    if (!length) {
        if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            goto error;

        yaml_parser_set_scanner_error(parser, directive ?
                "while parsing a %TAG directive": "while parsing a tag",
                start_mark, "did not find expected tag URI");
        goto error;
    }

    *uri = string.start;

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_uri_escapes(yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_string_t *string)
{
    int width = 0;



    do {

        unsigned char octet = 0;



        if (!(parser->unread >= (3) ? 1 : yaml_parser_update_buffer(parser, (3)))) return 0;

        if (!((((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))
                    && (((parser->buffer).pointer[1] >= (yaml_char_t) '0' && (parser->buffer).pointer[1] <= (yaml_char_t) '9') || ((parser->buffer).pointer[1] >= (yaml_char_t) 'A' && (parser->buffer).pointer[1] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[1] >= (yaml_char_t) 'a' && (parser->buffer).pointer[1] <= (yaml_char_t) 'f'))
                    && (((parser->buffer).pointer[2] >= (yaml_char_t) '0' && (parser->buffer).pointer[2] <= (yaml_char_t) '9') || ((parser->buffer).pointer[2] >= (yaml_char_t) 'A' && (parser->buffer).pointer[2] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[2] >= (yaml_char_t) 'a' && (parser->buffer).pointer[2] <= (yaml_char_t) 'f')))) {
            return yaml_parser_set_scanner_error(parser, directive ?
                    "while parsing a %TAG directive": "while parsing a tag",
                    start_mark, "did not find URI escaped octet");
        }



        octet = ((((parser->buffer).pointer[1] >= (yaml_char_t) 'A' && (parser->buffer).pointer[1] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[1] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[1] >= (yaml_char_t) 'a' && (parser->buffer).pointer[1] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[1] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[1] - (yaml_char_t) '0')) << 4) + (((parser->buffer).pointer[2] >= (yaml_char_t) 'A' && (parser->buffer).pointer[2] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[2] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[2] >= (yaml_char_t) 'a' && (parser->buffer).pointer[2] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[2] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[2] - (yaml_char_t) '0'));



        if (!width)
        {
            width = (octet & 0x80) == 0x00 ? 1 :
                    (octet & 0xE0) == 0xC0 ? 2 :
                    (octet & 0xF0) == 0xE0 ? 3 :
                    (octet & 0xF8) == 0xF0 ? 4 : 0;
            if (!width) {
                return yaml_parser_set_scanner_error(parser, directive ?
                        "while parsing a %TAG directive": "while parsing a tag",
                        start_mark, "found an incorrect leading UTF-8 octet");
            }
        }
        else
        {


            if ((octet & 0xC0) != 0x80) {
                return yaml_parser_set_scanner_error(parser, directive ?
                        "while parsing a %TAG directive": "while parsing a tag",
                        start_mark, "found an incorrect trailing UTF-8 octet");
            }
        }



        *(string->pointer++) = octet;
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    } while (--width);

    return 1;
}





static int
yaml_parser_scan_block_scalar(yaml_parser_t *parser, yaml_token_t *token,
        int literal)
{
    yaml_mark_t start_mark;
    yaml_mark_t end_mark;
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t leading_break = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t trailing_breaks = { ((void*)0), ((void*)0), ((void*)0) };
    int chomping = 0;
    int increment = 0;
    int indent = 0;
    int leading_blank = 0;
    int trailing_blank = 0;

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = yaml_malloc(16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = yaml_malloc(16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))))
    {


        chomping = (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) ? +1 : -1;

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

        if (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
        {


            if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('0')))) {
                yaml_parser_set_scanner_error(parser, "while scanning a block scalar",
                        start_mark, "found an indentation indicator equal to 0");
                goto error;
            }



            increment = (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        }
    }



    else if (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
    {
        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('0')))) {
            yaml_parser_set_scanner_error(parser, "while scanning a block scalar",
                    start_mark, "found an indentation indicator equal to 0");
            goto error;
        }

        increment = (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-')))) {
            chomping = (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) ? +1 : -1;

            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        }
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
    }

    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        }
    }



    if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
        yaml_parser_set_scanner_error(parser, "while scanning a block scalar",
                start_mark, "did not find expected comment or line break");
        goto error;
    }



    if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) {
        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;
        ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
    }

    end_mark = parser->mark;



    if (increment) {
        indent = parser->indent >= 0 ? parser->indent+increment : increment;
    }



    if (!yaml_parser_scan_block_scalar_breaks(parser, &indent, &trailing_breaks,
                start_mark, &end_mark)) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

    while ((int)parser->mark.column == indent && !((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0')))
    {






        trailing_blank = ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')));



        if (!literal && (*leading_break.start == '\n')
                && !leading_blank && !trailing_blank)
        {


            if (*trailing_breaks.start == '\0') {
                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                *(string.pointer ++) = ' ';
            }

            ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
        }
        else {
            if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
            ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
        }



        if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
        ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));



        leading_blank = ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')));



        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        }



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;

        if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(&(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;



        if (!yaml_parser_scan_block_scalar_breaks(parser,
                    &indent, &trailing_breaks, start_mark, &end_mark)) goto error;
    }



    if (chomping != -1) {
        if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    }
    if (chomping == 1) {
        if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    }



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (literal ? YAML_LITERAL_SCALAR_STYLE : YAML_FOLDED_SCALAR_STYLE));



    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);

    return 0;
}






static int
yaml_parser_scan_block_scalar_breaks(yaml_parser_t *parser,
        int *indent, yaml_string_t *breaks,
        yaml_mark_t start_mark, yaml_mark_t *end_mark)
{
    int max_indent = 0;

    *end_mark = parser->mark;



    while (1)
    {


        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;

        while ((!*indent || (int)parser->mark.column < *indent)
                && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)(' '))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) return 0;
        }

        if ((int)parser->mark.column > max_indent)
            max_indent = (int)parser->mark.column;



        if ((!*indent || (int)parser->mark.column < *indent)
                && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\t'))) {
            return yaml_parser_set_scanner_error(parser, "while scanning a block scalar",
                    start_mark, "found a tab character where an indentation space is expected");
        }



        if (!(((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) break;



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) return 0;
        if (!(((((*breaks).pointer+5 < (*breaks).end) || yaml_string_extend(&(*breaks).start, &(*breaks).pointer, &(*breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((*breaks).pointer++) = *(parser->buffer.pointer++), *((*breaks).pointer++) = *(parser->buffer.pointer++), *((*breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) return 0;
        *end_mark = parser->mark;
    }



    if (!*indent) {
        *indent = max_indent;
        if (*indent < parser->indent + 1)
            *indent = parser->indent + 1;
        if (*indent < 1)
            *indent = 1;
    }

   return 1;
}





static int
yaml_parser_scan_flow_scalar(yaml_parser_t *parser, yaml_token_t *token,
        int single)
{
    yaml_mark_t start_mark;
    yaml_mark_t end_mark;
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t leading_break = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t trailing_breaks = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t whitespaces = { ((void*)0), ((void*)0), ((void*)0) };
    int leading_blanks;

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = yaml_malloc(16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = yaml_malloc(16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((whitespaces).start = yaml_malloc(16)) ? ((whitespaces).pointer = (whitespaces).start, (whitespaces).end = (whitespaces).start+(16), memset((whitespaces).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    while (1)
    {


        if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(parser, (4)))) goto error;

        if (parser->mark.column == 0 &&
            ((((parser->buffer).pointer[0] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('-'))) ||
             (((parser->buffer).pointer[0] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('.')))) &&
            (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        {
            yaml_parser_set_scanner_error(parser, "while scanning a quoted scalar",
                    start_mark, "found unexpected document indicator");
            goto error;
        }



        if (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0'))) {
            yaml_parser_set_scanner_error(parser, "while scanning a quoted scalar",
                    start_mark, "found unexpected end of stream");
            goto error;
        }



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;

        leading_blanks = 0;

        while (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))))
        {


            if (single && ((parser->buffer).pointer[0] == (yaml_char_t)('\''))
                    && ((parser->buffer).pointer[1] == (yaml_char_t)('\'')))
            {
                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                *(string.pointer++) = '\'';
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }



            else if ((((parser->buffer)).pointer[0] == (yaml_char_t)((single ? '\'' : '"'))))
            {
                break;
            }



            else if (!single && (((parser->buffer)).pointer[0] == (yaml_char_t)(('\\')))
                    && ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\r')) || (((parser->buffer)).pointer[(1)] == (yaml_char_t)('\n')) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xC2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x85'))) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xE2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x80')) && (((parser->buffer)).pointer[(1)+2] == (yaml_char_t)('\xA8'))) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xE2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x80')) && (((parser->buffer)).pointer[(1)+2] == (yaml_char_t)('\xA9')))))
            {
                if (!(parser->unread >= (3) ? 1 : yaml_parser_update_buffer(parser, (3)))) goto error;
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
                leading_blanks = 1;
                break;
            }



            else if (!single && (((parser->buffer)).pointer[0] == (yaml_char_t)(('\\'))))
            {
                size_t code_length = 0;

                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



                switch (parser->buffer.pointer[1])
                {
                    case '0':
                        *(string.pointer++) = '\0';
                        break;

                    case 'a':
                        *(string.pointer++) = '\x07';
                        break;

                    case 'b':
                        *(string.pointer++) = '\x08';
                        break;

                    case 't':
                    case '\t':
                        *(string.pointer++) = '\x09';
                        break;

                    case 'n':
                        *(string.pointer++) = '\x0A';
                        break;

                    case 'v':
                        *(string.pointer++) = '\x0B';
                        break;

                    case 'f':
                        *(string.pointer++) = '\x0C';
                        break;

                    case 'r':
                        *(string.pointer++) = '\x0D';
                        break;

                    case 'e':
                        *(string.pointer++) = '\x1B';
                        break;

                    case ' ':
                        *(string.pointer++) = '\x20';
                        break;

                    case '"':
                        *(string.pointer++) = '"';
                        break;

                    case '\'':
                        *(string.pointer++) = '\'';
                        break;

                    case '\\':
                        *(string.pointer++) = '\\';
                        break;

                    case 'N':
                        *(string.pointer++) = '\xC2';
                        *(string.pointer++) = '\x85';
                        break;

                    case '_':
                        *(string.pointer++) = '\xC2';
                        *(string.pointer++) = '\xA0';
                        break;

                    case 'L':
                        *(string.pointer++) = '\xE2';
                        *(string.pointer++) = '\x80';
                        *(string.pointer++) = '\xA8';
                        break;

                    case 'P':
                        *(string.pointer++) = '\xE2';
                        *(string.pointer++) = '\x80';
                        *(string.pointer++) = '\xA9';
                        break;

                    case 'x':
                        code_length = 2;
                        break;

                    case 'u':
                        code_length = 4;
                        break;

                    case 'U':
                        code_length = 8;
                        break;

                    default:
                        yaml_parser_set_scanner_error(parser, "while parsing a quoted scalar",
                                start_mark, "found unknown escape character");
                        goto error;
                }

                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



                if (code_length)
                {
                    unsigned int value = 0;
                    size_t k;



                    if (!(parser->unread >= (code_length) ? 1 : yaml_parser_update_buffer(parser, (code_length)))) goto error;

                    for (k = 0; k < code_length; k ++) {
                        if (!(((parser->buffer).pointer[k] >= (yaml_char_t) '0' && (parser->buffer).pointer[k] <= (yaml_char_t) '9') || ((parser->buffer).pointer[k] >= (yaml_char_t) 'A' && (parser->buffer).pointer[k] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[k] >= (yaml_char_t) 'a' && (parser->buffer).pointer[k] <= (yaml_char_t) 'f'))) {
                            yaml_parser_set_scanner_error(parser, "while parsing a quoted scalar",
                                    start_mark, "did not find expected hexdecimal number");
                            goto error;
                        }
                        value = (value << 4) + (((parser->buffer).pointer[k] >= (yaml_char_t) 'A' && (parser->buffer).pointer[k] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[k] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[k] >= (yaml_char_t) 'a' && (parser->buffer).pointer[k] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[k] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[k] - (yaml_char_t) '0'));
                    }



                    if ((value >= 0xD800 && value <= 0xDFFF) || value > 0x10FFFF) {
                        yaml_parser_set_scanner_error(parser, "while parsing a quoted scalar",
                                start_mark, "found invalid Unicode character escape code");
                        goto error;
                    }

                    if (value <= 0x7F) {
                        *(string.pointer++) = value;
                    }
                    else if (value <= 0x7FF) {
                        *(string.pointer++) = 0xC0 + (value >> 6);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }
                    else if (value <= 0xFFFF) {
                        *(string.pointer++) = 0xE0 + (value >> 12);
                        *(string.pointer++) = 0x80 + ((value >> 6) & 0x3F);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }
                    else {
                        *(string.pointer++) = 0xF0 + (value >> 18);
                        *(string.pointer++) = 0x80 + ((value >> 12) & 0x3F);
                        *(string.pointer++) = 0x80 + ((value >> 6) & 0x3F);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }



                    for (k = 0; k < code_length; k ++) {
                        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                    }
                }
            }

            else
            {


                if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
            }

            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;
        }



        if ((((parser->buffer)).pointer[0] == (yaml_char_t)((single ? '\'' : '"'))))
            break;



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

        while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))))
            {


                if (!leading_blanks) {
                    if (!(((((whitespaces).pointer+5 < (whitespaces).end) || yaml_string_extend(&(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
                }
                else {
                    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                }
            }
            else
            {
                if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;



                if (!leading_blanks)
                {
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                    if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(&(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                    leading_blanks = 1;
                }
                else
                {
                    if (!(((((trailing_breaks).pointer+5 < (trailing_breaks).end) || yaml_string_extend(&(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                }
            }
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        }



        if (leading_blanks)
        {


            if (leading_break.start[0] == '\n') {
                if (trailing_breaks.start[0] == '\0') {
                    if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    *(string.pointer++) = ' ';
                }
                else {
                    if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                }
                ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
            }
            else {
                if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
            }
        }
        else
        {
            if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? ((whitespaces).pointer = (whitespaces).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
            ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
        }
    }



    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    end_mark = parser->mark;



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (single ? YAML_SINGLE_QUOTED_SCALAR_STYLE : YAML_DOUBLE_QUOTED_SCALAR_STYLE));



    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free((whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free((whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 0;
}





static int
yaml_parser_scan_plain_scalar(yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_mark_t start_mark;
    yaml_mark_t end_mark;
    yaml_string_t string = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t leading_break = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t trailing_breaks = { ((void*)0), ((void*)0), ((void*)0) };
    yaml_string_t whitespaces = { ((void*)0), ((void*)0), ((void*)0) };
    int leading_blanks = 0;
    int indent = parser->indent+1;

    if (!(((string).start = yaml_malloc(16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = yaml_malloc(16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = yaml_malloc(16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((whitespaces).start = yaml_malloc(16)) ? ((whitespaces).pointer = (whitespaces).start, (whitespaces).end = (whitespaces).start+(16), memset((whitespaces).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;

    start_mark = end_mark = parser->mark;



    while (1)
    {


        if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(parser, (4)))) goto error;

        if (parser->mark.column == 0 &&
            ((((parser->buffer).pointer[0] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('-'))) ||
             (((parser->buffer).pointer[0] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('.')))) &&
            (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0'))))) break;



        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#'))))
            break;



        while (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))))
        {


            if (parser->flow_level
                    && (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                    && !(((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))) {
                yaml_parser_set_scanner_error(parser, "while scanning a plain scalar",
                        start_mark, "found unexpected ':'");
                goto error;
            }



            if (((((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) && (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0')))))
                    || (parser->flow_level &&
                        ((((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('[')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('{')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))))))
                break;



            if (leading_blanks || whitespaces.start != whitespaces.pointer)
            {
                if (leading_blanks)
                {


                    if (leading_break.start[0] == '\n') {
                        if (trailing_breaks.start[0] == '\0') {
                            if (!((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                            *(string.pointer++) = ' ';
                        }
                        else {
                            if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                            ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                        }
                        ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                    }
                    else {
                        if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                        if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                        ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                        ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                    }

                    leading_blanks = 0;
                }
                else
                {
                    if (!((yaml_string_join(&(string).start, &(string).pointer, &(string).end, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? ((whitespaces).pointer = (whitespaces).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                }
            }



            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(&(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;

            end_mark = parser->mark;

            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;
        }



        if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))))
            break;



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;

        while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))))
            {


                if (leading_blanks && (int)parser->mark.column < indent
                        && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\t'))) {
                    yaml_parser_set_scanner_error(parser, "while scanning a plain scalar",
                            start_mark, "found a tab character that violates indentation");
                    goto error;
                }



                if (!leading_blanks) {
                    if (!(((((whitespaces).pointer+5 < (whitespaces).end) || yaml_string_extend(&(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
                }
                else {
                    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                }
            }
            else
            {
                if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(parser, (2)))) goto error;



                if (!leading_blanks)
                {
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                    if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(&(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                    leading_blanks = 1;
                }
                else
                {
                    if (!(((((trailing_breaks).pointer+5 < (trailing_breaks).end) || yaml_string_extend(&(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                }
            }
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(parser, (1)))) goto error;
        }



        if (!parser->flow_level && (int)parser->mark.column < indent)
            break;
    }



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (YAML_PLAIN_SCALAR_STYLE));




    if (leading_blanks) {
        parser->simple_key_allowed = 1;
    }

    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free((whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 1;

error:
    (yaml_free((string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free((leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free((trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free((whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 0;
}
