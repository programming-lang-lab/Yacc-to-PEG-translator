

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



static const int EncLen_EUCJP[] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1
};

typedef enum { FAILURE = -2, ACCEPT = -1, S0 = 0, S1, S2 } state_t;


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
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, 1, 2,
            FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE, FAILURE,
            FAILURE, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, FAILURE
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
            FAILURE, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT,
            ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, ACCEPT, FAILURE
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
            FAILURE, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, FAILURE
  },

};



static const OnigPairCaseFoldCodes CaseFoldMap[] = {

  { 0xa3c1, 0xa3e1 },
  { 0xa3c2, 0xa3e2 },
  { 0xa3c3, 0xa3e3 },
  { 0xa3c4, 0xa3e4 },
  { 0xa3c5, 0xa3e5 },
  { 0xa3c6, 0xa3e6 },
  { 0xa3c7, 0xa3e7 },
  { 0xa3c8, 0xa3e8 },
  { 0xa3c9, 0xa3e9 },
  { 0xa3ca, 0xa3ea },
  { 0xa3cb, 0xa3eb },
  { 0xa3cc, 0xa3ec },
  { 0xa3cd, 0xa3ed },
  { 0xa3ce, 0xa3ee },
  { 0xa3cf, 0xa3ef },
  { 0xa3d0, 0xa3f0 },
  { 0xa3d1, 0xa3f1 },
  { 0xa3d2, 0xa3f2 },
  { 0xa3d3, 0xa3f3 },
  { 0xa3d4, 0xa3f4 },
  { 0xa3d5, 0xa3f5 },
  { 0xa3d6, 0xa3f6 },
  { 0xa3d7, 0xa3f7 },
  { 0xa3d8, 0xa3f8 },
  { 0xa3d9, 0xa3f9 },
  { 0xa3da, 0xa3fa },


  { 0xa6a1, 0xa6c1 },
  { 0xa6a2, 0xa6c2 },
  { 0xa6a3, 0xa6c3 },
  { 0xa6a4, 0xa6c4 },
  { 0xa6a5, 0xa6c5 },
  { 0xa6a6, 0xa6c6 },
  { 0xa6a7, 0xa6c7 },
  { 0xa6a8, 0xa6c8 },
  { 0xa6a9, 0xa6c9 },
  { 0xa6aa, 0xa6ca },
  { 0xa6ab, 0xa6cb },
  { 0xa6ac, 0xa6cc },
  { 0xa6ad, 0xa6cd },
  { 0xa6ae, 0xa6ce },
  { 0xa6af, 0xa6cf },
  { 0xa6b0, 0xa6d0 },
  { 0xa6b1, 0xa6d1 },
  { 0xa6b2, 0xa6d2 },
  { 0xa6b3, 0xa6d3 },
  { 0xa6b4, 0xa6d4 },
  { 0xa6b5, 0xa6d5 },
  { 0xa6b6, 0xa6d6 },
  { 0xa6b7, 0xa6d7 },
  { 0xa6b8, 0xa6d8 },


  { 0xa7a1, 0xa7d1 },
  { 0xa7a2, 0xa7d2 },
  { 0xa7a3, 0xa7d3 },
  { 0xa7a4, 0xa7d4 },
  { 0xa7a5, 0xa7d5 },
  { 0xa7a6, 0xa7d6 },
  { 0xa7a7, 0xa7d7 },
  { 0xa7a8, 0xa7d8 },
  { 0xa7a9, 0xa7d9 },
  { 0xa7aa, 0xa7da },
  { 0xa7ab, 0xa7db },
  { 0xa7ac, 0xa7dc },
  { 0xa7ad, 0xa7dd },
  { 0xa7ae, 0xa7de },
  { 0xa7af, 0xa7df },
  { 0xa7b0, 0xa7e0 },
  { 0xa7b1, 0xa7e1 },
  { 0xa7b2, 0xa7e2 },
  { 0xa7b3, 0xa7e3 },
  { 0xa7b4, 0xa7e4 },
  { 0xa7b5, 0xa7e5 },
  { 0xa7b6, 0xa7e6 },
  { 0xa7b7, 0xa7e7 },
  { 0xa7b8, 0xa7e8 },
  { 0xa7b9, 0xa7e9 },
  { 0xa7ba, 0xa7ea },
  { 0xa7bb, 0xa7eb },
  { 0xa7bc, 0xa7ec },
  { 0xa7bd, 0xa7ed },
  { 0xa7be, 0xa7ee },
  { 0xa7bf, 0xa7ef },
  { 0xa7c0, 0xa7f0 },
  { 0xa7c1, 0xa7f1 },
};

static int
mbc_enc_len(const OnigUChar* p, const OnigUChar* e, OnigEncoding enc )
{
  int firstbyte = *p++;
  state_t s;
  s = trans[0][firstbyte];
  if (s < 0) return s == ACCEPT ? (1) :
                                  (-1);
  if (p == e) return (-1-(EncLen_EUCJP[firstbyte]-1));
  s = trans[s][*p++];
  if (s < 0) return s == ACCEPT ? (2) :
                                  (-1);
  if (p == e) return (-1-(EncLen_EUCJP[firstbyte]-2));
  s = trans[s][*p++];
  return s == ACCEPT ? (3) :
                       (-1);
}

static OnigCodePoint
mbc_to_code(const OnigUChar* p, const OnigUChar* end, OnigEncoding enc)
{
  int c, i, len;
  OnigCodePoint n;

  len = mbc_enc_len(p, end, enc);
  n = (OnigCodePoint )*p++;
  if (len == 1) return n;

  for (i = 1; i < len; i++) {
    if (p >= end) break;
    c = *p++;
    n <<= 8; n += c;
  }
  return n;
}

static int
code_to_mbclen(OnigCodePoint code, OnigEncoding enc )
{
  if (((code) < 128)) return 1;
  else if (code > 0x00ffffff)
    return -401;
  else if ((code & 0xff808080) == 0x00808080) return 3;
  else if ((code & 0xffff8080) == 0x00008080) return 2;
  else
    return -400;
}
static int
code_to_mbc(OnigCodePoint code, OnigUChar *buf, OnigEncoding enc)
{
  OnigUChar *p = buf;

  if ((code & 0xff0000) != 0) *p++ = (OnigUChar )(((code >> 16) & 0xff));
  if ((code & 0xff00) != 0) *p++ = (OnigUChar )(((code >> 8) & 0xff));
  *p++ = (OnigUChar )(code & 0xff);


  if (mbc_enc_len(buf, p, enc) != (p - buf))
    return -400;

  return (int )(p - buf);
}

static int
apply_all_case_fold(OnigCaseFoldType flag,
      OnigApplyAllCaseFoldFunc f, void* arg, OnigEncoding enc)
{
  return onigenc_apply_all_case_fold_with_map(
            (int )(sizeof(CaseFoldMap) / sizeof((CaseFoldMap)[0])), CaseFoldMap, 0,
            flag, f, arg);
}

static OnigCodePoint
get_lower_case(OnigCodePoint code)
{
  if (((OnigCodePoint )((code) - (0xa3c1)) <= (OnigCodePoint )((0xa3da) - (0xa3c1)))) {

    return (OnigCodePoint )(code + 0x0020);
  }
  else if (((OnigCodePoint )((code) - (0xa6a1)) <= (OnigCodePoint )((0xa6b8) - (0xa6a1)))) {

    return (OnigCodePoint )(code + 0x0020);
  }
  else if (((OnigCodePoint )((code) - (0xa7a1)) <= (OnigCodePoint )((0xa7c1) - (0xa7a1)))) {

    return (OnigCodePoint )(code + 0x0030);
  }
  return code;
}

static OnigCodePoint
get_upper_case(OnigCodePoint code)
{
  if (((OnigCodePoint )((code) - (0xa3e1)) <= (OnigCodePoint )((0xa3fa) - (0xa3e1)))) {

    return (OnigCodePoint )(code - 0x0020);
  }
  else if (((OnigCodePoint )((code) - (0xa6c1)) <= (OnigCodePoint )((0xa6d8) - (0xa6c1)))) {

    return (OnigCodePoint )(code - 0x0020);
  }
  else if (((OnigCodePoint )((code) - (0xa7d1)) <= (OnigCodePoint )((0xa7f1) - (0xa7d1)))) {

    return (OnigCodePoint )(code - 0x0030);
  }
  return code;
}

static int
get_case_fold_codes_by_str(OnigCaseFoldType flag,
      const OnigUChar* p, const OnigUChar* end,
      OnigCaseFoldCodeItem items[], OnigEncoding enc)
{
  int len;
  OnigCodePoint code, code_lo, code_up;

  code = mbc_to_code(p, end, enc);
  if (((code) < 0x80))
    return onigenc_ascii_get_case_fold_codes_by_str(flag, p, end, items, enc);

  len = mbc_enc_len(p, end, enc);
  code_lo = get_lower_case(code);
  code_up = get_upper_case(code);

  if (code != code_lo) {
    items[0].byte_len = len;
    items[0].code_len = 1;
    items[0].code[0] = code_lo;
    return 1;
  }
  else if (code != code_up) {
    items[0].byte_len = len;
    items[0].code_len = 1;
    items[0].code[0] = code_up;
    return 1;
  }

  return 0;
}

static int
mbc_case_fold(OnigCaseFoldType flag,
       const OnigUChar** pp, const OnigUChar* end, OnigUChar* lower,
       OnigEncoding enc)
{
  const OnigUChar* p = *pp;

  if ((*(p) < 128)) {
    *lower = OnigEncAsciiToLowerCaseTable[*p];
    (*pp)++;
    return 1;
  }
  else {
    OnigCodePoint code;
    int len;

    len = mbc_enc_len(p, end, enc);
    code = get_lower_case(mbc_to_code(p, end, enc));
    len = code_to_mbc(code, lower, enc);
    if (len == -400) len = 1;
    (*pp) += len;
    return len;
  }
}

static OnigUChar*
left_adjust_char_head(const OnigUChar* start, const OnigUChar* s, const OnigUChar* end, OnigEncoding enc)
{



  const OnigUChar *p;
  int len;

  if (s <= start) return (OnigUChar* )s;
  p = s;

  while (!((OnigUChar )((*p) - 0xa1) > 0xfe - 0xa1) && p > start) p--;
  len = mbc_enc_len(p, end, enc);
  if (p + len > s) return (OnigUChar* )p;
  p += len;
  return (OnigUChar* )(p + ((s - p) & ~1));
}

static int
is_allowed_reverse_match(const OnigUChar* s, const OnigUChar* end, OnigEncoding enc )
{
  const OnigUChar c = *s;
  if (c <= 0x7e || c == 0x8e || c == 0x8f)
    return 1;
  else
    return 0;
}


static const OnigCodePoint CR_Hiragana[] = {
  1,



  0xa4a1, 0xa4f3

};
static const OnigCodePoint CR_Katakana[] = {
  3,
  0x8ea6, 0x8eaf,
  0x8eb1, 0x8edd,
  0xa5a1, 0xa5f6,
};
static const OnigCodePoint CR_Han[] = {

  4,
  0xa1b8, 0xa1b8,
  0xb0a1, 0xcfd3,
  0xd0a1, 0xf4a6,
  0x8fb0a1, 0x8fedf3
};


static const OnigCodePoint CR_Latin[] = {
  4,
  0x0041, 0x005a,
  0x0061, 0x007a,
  0xa3c1, 0xa3da,
  0xa3e1, 0xa3fa,


};

static const OnigCodePoint CR_Greek[] = {
  2,
  0xa6a1, 0xa6b8,



  0xa6c1, 0xa6d8,


};

static const OnigCodePoint CR_Cyrillic[] = {
  2,
  0xa7a1, 0xa7c1,
  0xa7d1, 0xa7f1,

};






static inline int
gperf_case_strncmp(const char *s1, const char *s2, size_t n)
{
    const OnigUChar *str = (const OnigUChar *)s1;
    const OnigUChar *s = (const OnigUChar *)s2;
    return onigenc_with_ascii_strnicmp((&OnigEncodingASCII), str, str + n, s, (int)n);
}

enum onigenc_jis_ctype {
    onigenc_jis_min = 14,
    onigenc_jis_hiragana,
    onigenc_jis_katakana,
    onigenc_jis_han,
    onigenc_jis_latin,
    onigenc_jis_greek,
    onigenc_jis_cyrillic,
    onigenc_jis_max
};

enum {PropertyListNum = onigenc_jis_max - onigenc_jis_min - 1};

static const OnigCodePoint* const PropertyList[PropertyListNum] = {
    CR_Hiragana,
    CR_Katakana,
    CR_Han,
    CR_Latin,
    CR_Greek,
    CR_Cyrillic,
};

struct enc_property {
    signed char name;
    unsigned char ctype;
};

static const struct enc_property *onig_jis_property( );
struct enc_property;
inline





static unsigned int
onig_jis_property_hash (register const char *str, register size_t len)
{
  static const unsigned char asso_values[] =
    {
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 3, 13, 2,
      13, 1, 1, 13, 13, 2, 1, 13, 1, 13,
      13, 13, 1, 13, 1, 13, 13, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13, 13, 3,
      13, 2, 13, 1, 1, 13, 13, 2, 1, 13,
       1, 13, 13, 13, 1, 13, 1, 13, 13, 13,
      13, 13, 13, 13, 13, 13, 13, 13
    };
  return (unsigned int)len + asso_values[(unsigned char)str[2]] + asso_values[(unsigned char)str[0]];
}

struct onig_jis_property_pool_t
  {
    char onig_jis_property_pool_str5[sizeof("han")];
    char onig_jis_property_pool_str7[sizeof("latin")];
    char onig_jis_property_pool_str8[sizeof("greek")];
    char onig_jis_property_pool_str10[sizeof("hiragana")];
    char onig_jis_property_pool_str11[sizeof("katakana")];
    char onig_jis_property_pool_str12[sizeof("cyrillic")];
  };
static const struct onig_jis_property_pool_t onig_jis_property_pool_contents =
  {
    "han",
    "latin",
    "greek",
    "hiragana",
    "katakana",
    "cyrillic"};

const struct enc_property *
onig_jis_property (register const char *str, register size_t len)
{
  static const struct enc_property wordlist[] =
    {
      {-1}, {-1}, {-1}, {-1}, {-1},
 {(short)__builtin_offsetof(), onigenc_jis_han},
      {-1},
 {(short)__builtin_offsetof(), onigenc_jis_latin},
 {(short)__builtin_offsetof(), onigenc_jis_greek},
      {-1},
 {(short)__builtin_offsetof(), onigenc_jis_hiragana},
 {(short)__builtin_offsetof(), onigenc_jis_katakana},
 {(short)__builtin_offsetof(), onigenc_jis_cyrillic}
    };

  if (len <= 8 && len >= 3)
    {
      register unsigned int key = onig_jis_property_hash (str, len);

      if (key <= 12)
        {
          register int o = wordlist[key].name;
          if (o >= 0)
            {
              register const char *s = o + ((const char *) &onig_jis_property_pool_contents);

              if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strncmp (str, s, len) && s[len] == '\0')
                return &wordlist[key];
            }
        }
    }
  return 0;
}

static int
property_name_to_ctype(OnigEncoding enc, const OnigUChar* p, const OnigUChar* end)
{
  const OnigUChar *s = p, *e = end;
  const struct enc_property *prop =
    onig_jis_property((const char* )s, (unsigned int )(e - s));

  if (!prop) {
    return onigenc_minimum_property_name_to_ctype(enc, s, e);
  }

  return (int )prop->ctype;
}

static int
is_code_ctype(OnigCodePoint code, unsigned int ctype, OnigEncoding enc )
{
  if (ctype <= 14) {
    if (code < 128)
      return ((OnigEncAsciiCtypeTable[code] & (1<<(ctype))) != 0);
    else {
      if (((ctype) == 12 || (ctype) == 5 || (ctype) == 7)) {
 return (code_to_mbclen(code, enc) > 1 ? 1 : 0);
      }
    }
  }
  else {
    ctype -= (14 + 1);
    if (ctype >= (unsigned int )PropertyListNum)
      return -6;

    return onig_is_in_code_range((OnigUChar* )PropertyList[ctype], code);
  }

  return 0;
}

static int
get_ctype_code_range(OnigCtype ctype, OnigCodePoint* sb_out,
       const OnigCodePoint* ranges[], OnigEncoding enc )
{
  if (ctype <= 14) {
    return -2;
  }
  else {
    *sb_out = 0x80;

    ctype -= (14 + 1);
    if (ctype >= (OnigCtype )PropertyListNum)
      return -6;

    *ranges = PropertyList[ctype];
    return 0;
  }
}


const OnigEncodingType OnigEncodingEUC_JP = {
  mbc_enc_len,
  "EUC-JP",
  3,
  1,
  onigenc_is_mbc_newline_0x0a,
  mbc_to_code,
  code_to_mbclen,
  code_to_mbc,
  mbc_case_fold,
  apply_all_case_fold,
  get_case_fold_codes_by_str,
  property_name_to_ctype,
  is_code_ctype,
  get_ctype_code_range,
  left_adjust_char_head,
  is_allowed_reverse_match,
  onigenc_ascii_only_case_map,
  0,
  0U,
};
