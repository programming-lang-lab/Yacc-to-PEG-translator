

typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;







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
static const int EncLen_UTF8[] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};

typedef enum {
  FAILURE = -2,
  ACCEPT,
  S0, S1, S2, S3,
  S4, S5, S6, S7
} state_t;


static const signed char trans[][0x100] = {
  {
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3,
            5, 6, 6, 6, 7, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
  {
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE
  },
};



static int
mbc_enc_len(const OnigUChar* p, const OnigUChar* e, OnigEncoding enc )
{
  int firstbyte = *p++;
  state_t s;
  s = trans[0][firstbyte];
  if (s < 0) return s == ACCEPT ? (1) :
                                  (-1);

  if (p == e) return (-1-(EncLen_UTF8[firstbyte]-1));
  s = trans[s][*p++];
  if (s < 0) return s == ACCEPT ? (2) :
                                  (-1);

  if (p == e) return (-1-(EncLen_UTF8[firstbyte]-2));
  s = trans[s][*p++];
  if (s < 0) return s == ACCEPT ? (3) :
                                  (-1);

  if (p == e) return (-1-(EncLen_UTF8[firstbyte]-3));
  s = trans[s][*p++];
  return s == ACCEPT ? (4) :
                       (-1);
}

static int
is_mbc_newline(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc)
{
  if (p < end) {
    if (*p == 0x0a) return 1;
  }

  return 0;
}

static OnigCodePoint
mbc_to_code(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc)
{
  int c, len;
  OnigCodePoint n;

  len = mbc_enc_len(p, end, enc);
  c = *p++;
  if (len > 1) {
    len--;
    n = c & ((1 << (6 - len)) - 1);
    while (len--) {
      c = *p++;
      n = (n << 6) | (c & ((1 << 6) - 1));
    }
    return n;
  }
  else {

    if (c > 0xfd) {
      return ((c == 0xfe) ? 0xfffffffe : 0xffffffff);
    }

    return (OnigCodePoint )c;
  }
}

static int
code_to_mbclen(OnigCodePoint code, OnigEncoding enc )
{
  if ((code & 0xffffff80) == 0) return 1;
  else if ((code & 0xfffff800) == 0) return 2;
  else if ((code & 0xffff0000) == 0) return 3;
  else if (code <= 0x0010ffff) return 4;

  else if (code == 0xfffffffe) return 1;
  else if (code == 0xffffffff) return 1;

  else
    return -401;
}

static int
code_to_mbc(OnigCodePoint code, OnigUChar *buf, OnigEncoding enc )
{



  if ((code & 0xffffff80) == 0) {
    *buf = (OnigUChar )code;
    return 1;
  }
  else {
    OnigUChar *p = buf;

    if ((code & 0xfffff800) == 0) {
      *p++ = (OnigUChar )(((code>>6)& 0x1f) | 0xc0);
    }
    else if ((code & 0xffff0000) == 0) {
      *p++ = (OnigUChar )(((code>>12) & 0x0f) | 0xe0);
      *p++ = (OnigUChar )((((code) >> (6)) & 0x3f) | 0x80);
    }
    else if (code <= 0x0010ffff) {
      *p++ = (OnigUChar )(((code>>18) & 0x07) | 0xf0);
      *p++ = (OnigUChar )((((code) >> (12)) & 0x3f) | 0x80);
      *p++ = (OnigUChar )((((code) >> (6)) & 0x3f) | 0x80);
    }

    else if (code == 0xfffffffe) {
      *p = 0xfe;
      return 1;
    }
    else if (code == 0xffffffff) {
      *p = 0xff;
      return 1;
    }

    else {
      return -401;
    }

    *p++ = (OnigUChar )(((code) & 0x3f) | 0x80);
    return (int )(p - buf);
  }
}

static int
mbc_case_fold(OnigCaseFoldType flag, const OnigUChar** pp,
       const OnigUChar* end, OnigUChar* fold, OnigEncoding enc)
{
  const OnigUChar* p = *pp;

  if ((*(p) < 128)) {
    *fold = OnigEncAsciiToLowerCaseTable[*p];
    (*pp)++;
    return 1;
  }
  else {
    return onigenc_unicode_mbc_case_fold(enc, flag, pp, end, fold);
  }
}


static int
get_ctype_code_range(OnigCtype ctype, OnigCodePoint *sb_out,
       const OnigCodePoint* ranges[], OnigEncoding enc )
{
  *sb_out = 0x80;
  return onigenc_unicode_ctype_code_range(ctype, ranges);
}


static OnigUChar*
left_adjust_char_head(const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, OnigEncoding enc )
{
  const OnigUChar *p;

  if (s <= start) return (OnigUChar* )s;
  p = s;

  while (!((OnigUChar )((*p) & 0xc0) != 0x80) && p > start) p--;
  return (OnigUChar* )p;
}

static int
get_case_fold_codes_by_str(OnigCaseFoldType flag,
    const OnigUChar* p, const OnigUChar* end, OnigCaseFoldCodeItem items[],
    OnigEncoding enc)
{
  return onigenc_unicode_get_case_fold_codes_by_str(enc, flag, p, end, items);
}

const OnigEncodingType OnigEncodingUTF_8 = {
  mbc_enc_len,
  "UTF-8",
  4,
  1,
  is_mbc_newline,
  mbc_to_code,
  code_to_mbclen,
  code_to_mbc,
  mbc_case_fold,
  onigenc_unicode_apply_all_case_fold,
  get_case_fold_codes_by_str,
  onigenc_unicode_property_name_to_ctype,
  onigenc_unicode_is_code_ctype,
  get_ctype_code_range,
  left_adjust_char_head,
  onigenc_always_true_is_allowed_reverse_match,
  onigenc_unicode_case_map,
  0,
  1U,
};