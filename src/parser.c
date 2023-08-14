#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 166
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 177
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 16

enum {
  aux_sym_config_token1 = 1,
  anon_sym_default_DASHkey = 2,
  anon_sym_default_DASHrecipient = 3,
  anon_sym_default_DASHrecipient_DASHself = 4,
  anon_sym_no_DASHdefault_DASHrecipient = 5,
  anon_sym_verbose = 6,
  anon_sym_no_DASHtty = 7,
  anon_sym_list_DASHoptions = 8,
  anon_sym_COMMA = 9,
  sym__list_parameter = 10,
  anon_sym_verify_DASHoptions = 11,
  sym__verify_parameter = 12,
  anon_sym_enable_DASHlarge_DASHrsa = 13,
  anon_sym_disable_DASHlarge_DASHrsa = 14,
  anon_sym_enable_DASHdsa2 = 15,
  anon_sym_disable_DASHdsa2 = 16,
  anon_sym_photo_DASHviewer = 17,
  aux_sym__command_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym__command_token2 = 20,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 21,
  anon_sym_SQUOTE = 22,
  aux_sym__command_token3 = 23,
  sym_format = 24,
  anon_sym_exec_DASHpath = 25,
  anon_sym_keyring = 26,
  anon_sym_primary_DASHkeyring = 27,
  anon_sym_trustdb_DASHname = 28,
  anon_sym_display_DASHcharset = 29,
  sym__charset = 30,
  anon_sym_utf8_DASHstrings = 31,
  anon_sym_no_DASHutf8_DASHstrings = 32,
  anon_sym_compress_DASHlevel = 33,
  aux_sym_compress_level_token1 = 34,
  anon_sym_bzip2_DASHcompress_DASHlevel = 35,
  anon_sym_no_DASHcompress = 36,
  anon_sym_bzip2_DASHdecompress_DASHlowmem = 37,
  anon_sym_mangle_DASHdos_DASHfilenames = 38,
  anon_sym_no_DASHmangle_DASHdos_DASHfilenames = 39,
  anon_sym_ask_DASHcert_DASHlevel = 40,
  anon_sym_no_DASHask_DASHcert_DASHlevel = 41,
  anon_sym_default_DASHcert_DASHlevel = 42,
  aux_sym_default_cert_level_token1 = 43,
  anon_sym_min_DASHcert_DASHlevel = 44,
  anon_sym_trusted_DASHkey = 45,
  anon_sym_add_DASHdesig_DASHrevoker = 46,
  anon_sym_sensitive_COLON = 47,
  anon_sym_clear = 48,
  anon_sym_trust_DASHmodel = 49,
  sym__model = 50,
  anon_sym_always_DASHtrust = 51,
  anon_sym_assert_DASHsigner = 52,
  anon_sym_auto_DASHkey_DASHlocate = 53,
  sym__mechanism = 54,
  anon_sym_no_DASHauto_DASHkey_DASHlocate = 55,
  anon_sym_auto_DASHkey_DASHimport = 56,
  anon_sym_no_DASHauto_DASHkey_DASHimport = 57,
  anon_sym_auto_DASHkey_DASHretrieve = 58,
  anon_sym_no_DASHauto_DASHkey_DASHretrieve = 59,
  anon_sym_keyid_DASHformat = 60,
  sym__keyid_format = 61,
  anon_sym_keyserver = 62,
  anon_sym_completes_DASHneeded = 63,
  anon_sym_marginals_DASHneeded = 64,
  anon_sym_tofu_DASHdefault_DASHpolicy = 65,
  anon_sym_max_DASHcert_DASHdepth = 66,
  anon_sym_no_DASHsig_DASHcache = 67,
  anon_sym_auto_DASHcheck_DASHtrustdb = 68,
  anon_sym_no_DASHauto_DASHcheck_DASHtrustdb = 69,
  sym__tofu_policy = 70,
  anon_sym_agent_DASHprogram = 71,
  anon_sym_dirmngr_DASHprogram = 72,
  anon_sym_disable_DASHdirmngr = 73,
  anon_sym_no_DASHautostart = 74,
  anon_sym_lock_DASHonce = 75,
  anon_sym_lock_DASHmultiple = 76,
  anon_sym_lock_DASHnever = 77,
  anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror = 78,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 79,
  anon_sym_no_DASHrandom_DASHseed_DASHfile = 80,
  anon_sym_no_DASHgreeting = 81,
  anon_sym_no_DASHsecmem_DASHwarning = 82,
  anon_sym_no_DASHpermission_DASHwarning = 83,
  anon_sym_require_DASHsecmem = 84,
  anon_sym_no_DASHrequire_DASHsecmem = 85,
  anon_sym_require_DASHcross_DASHverification = 86,
  anon_sym_no_DASHrequire_DASHcross_DASHverification = 87,
  anon_sym_expert = 88,
  anon_sym_no_DASHexpert = 89,
  sym_key = 90,
  sym_url = 91,
  sym_number = 92,
  aux_sym_string_token1 = 93,
  sym_comment = 94,
  sym__space = 95,
  sym_config = 96,
  sym_default_key = 97,
  sym_default_recipient = 98,
  sym_default_recipient_self = 99,
  sym_no_default_recipient = 100,
  sym_verbose = 101,
  sym_no_tty = 102,
  sym_list_options = 103,
  sym_verify_options = 104,
  sym_enable_large_rsa = 105,
  sym_disable_large_rsa = 106,
  sym_enable_dsa2 = 107,
  sym_disable_dsa2 = 108,
  sym_photo_viewer = 109,
  sym__command = 110,
  sym_exec_path = 111,
  sym_keyring = 112,
  sym_primary_keyring = 113,
  sym_trustdb_name = 114,
  sym_display_charset = 115,
  sym_utf8_strings = 116,
  sym_no_utf8_strings = 117,
  sym_compress_level = 118,
  sym_bzip2_compress_level = 119,
  sym_no_compress = 120,
  sym_bzip2_decompress_lowmem = 121,
  sym_mangle_dos_filenames = 122,
  sym_no_mangle_dos_filenames = 123,
  sym_ask_cert_level = 124,
  sym_no_ask_cert_level = 125,
  sym_default_cert_level = 126,
  sym_min_cert_level = 127,
  sym_trusted_key = 128,
  sym_add_desig_revoker = 129,
  sym_trust_model = 130,
  sym_always_trust = 131,
  sym_assert_signer = 132,
  sym_auto_key_locate = 133,
  sym_no_auto_key_locate = 134,
  sym_auto_key_import = 135,
  sym_no_auto_key_import = 136,
  sym_auto_key_retrieve = 137,
  sym_no_auto_key_retrieve = 138,
  sym_keyid_format = 139,
  sym_keyserver = 140,
  sym_completes_needed = 141,
  sym_marginals_needed = 142,
  sym_tofu_default_policy = 143,
  sym_max_cert_depth = 144,
  sym_no_sig_cache = 145,
  sym_auto_check_trustdb = 146,
  sym_no_auto_check_trustdb = 147,
  sym_agent_program = 148,
  sym_dirmngr_program = 149,
  sym_disable_dirmngr = 150,
  sym_no_autostart = 151,
  sym_lock_once = 152,
  sym_lock_multiple = 153,
  sym_lock_never = 154,
  sym_exit_on_status_write_error = 155,
  sym_limit_card_insert_tries = 156,
  sym_no_random_seed_file = 157,
  sym_no_greeting = 158,
  sym_no_secmem_warning = 159,
  sym_no_permission_warning = 160,
  sym_require_secmem = 161,
  sym_no_require_secmem = 162,
  sym_require_cross_verification = 163,
  sym_no_require_cross_verification = 164,
  sym_expert = 165,
  sym_no_expert = 166,
  sym_string = 167,
  aux_sym_config_repeat1 = 168,
  aux_sym_list_options_repeat1 = 169,
  aux_sym_verify_options_repeat1 = 170,
  aux_sym__command_repeat1 = 171,
  aux_sym__command_repeat2 = 172,
  aux_sym__command_repeat3 = 173,
  aux_sym_auto_key_locate_repeat1 = 174,
  aux_sym_string_repeat1 = 175,
  aux_sym_string_repeat2 = 176,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [anon_sym_default_DASHkey] = "option",
  [anon_sym_default_DASHrecipient] = "option",
  [anon_sym_default_DASHrecipient_DASHself] = "option",
  [anon_sym_no_DASHdefault_DASHrecipient] = "option",
  [anon_sym_verbose] = "option",
  [anon_sym_no_DASHtty] = "option",
  [anon_sym_list_DASHoptions] = "option",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "_list_parameter",
  [anon_sym_verify_DASHoptions] = "option",
  [sym__verify_parameter] = "_verify_parameter",
  [anon_sym_enable_DASHlarge_DASHrsa] = "option",
  [anon_sym_disable_DASHlarge_DASHrsa] = "option",
  [anon_sym_enable_DASHdsa2] = "option",
  [anon_sym_disable_DASHdsa2] = "option",
  [anon_sym_photo_DASHviewer] = "option",
  [aux_sym__command_token1] = "_command_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__command_token2] = "_command_token2",
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = "\\${q}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__command_token3] = "_command_token3",
  [sym_format] = "format",
  [anon_sym_exec_DASHpath] = "option",
  [anon_sym_keyring] = "option",
  [anon_sym_primary_DASHkeyring] = "option",
  [anon_sym_trustdb_DASHname] = "option",
  [anon_sym_display_DASHcharset] = "option",
  [sym__charset] = "_charset",
  [anon_sym_utf8_DASHstrings] = "option",
  [anon_sym_no_DASHutf8_DASHstrings] = "option",
  [anon_sym_compress_DASHlevel] = "option",
  [aux_sym_compress_level_token1] = "number",
  [anon_sym_bzip2_DASHcompress_DASHlevel] = "option",
  [anon_sym_no_DASHcompress] = "option",
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = "option",
  [anon_sym_mangle_DASHdos_DASHfilenames] = "option",
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = "option",
  [anon_sym_ask_DASHcert_DASHlevel] = "option",
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = "option",
  [anon_sym_default_DASHcert_DASHlevel] = "option",
  [aux_sym_default_cert_level_token1] = "number",
  [anon_sym_min_DASHcert_DASHlevel] = "option",
  [anon_sym_trusted_DASHkey] = "option",
  [anon_sym_add_DASHdesig_DASHrevoker] = "option",
  [anon_sym_sensitive_COLON] = "sensitive:",
  [anon_sym_clear] = "clear",
  [anon_sym_trust_DASHmodel] = "option",
  [sym__model] = "_model",
  [anon_sym_always_DASHtrust] = "option",
  [anon_sym_assert_DASHsigner] = "option",
  [anon_sym_auto_DASHkey_DASHlocate] = "option",
  [sym__mechanism] = "_mechanism",
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = "option",
  [anon_sym_auto_DASHkey_DASHimport] = "option",
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = "option",
  [anon_sym_auto_DASHkey_DASHretrieve] = "option",
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = "option",
  [anon_sym_keyid_DASHformat] = "option",
  [sym__keyid_format] = "_keyid_format",
  [anon_sym_keyserver] = "option",
  [anon_sym_completes_DASHneeded] = "option",
  [anon_sym_marginals_DASHneeded] = "option",
  [anon_sym_tofu_DASHdefault_DASHpolicy] = "option",
  [anon_sym_max_DASHcert_DASHdepth] = "option",
  [anon_sym_no_DASHsig_DASHcache] = "option",
  [anon_sym_auto_DASHcheck_DASHtrustdb] = "option",
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = "option",
  [sym__tofu_policy] = "_tofu_policy",
  [anon_sym_agent_DASHprogram] = "option",
  [anon_sym_dirmngr_DASHprogram] = "option",
  [anon_sym_disable_DASHdirmngr] = "option",
  [anon_sym_no_DASHautostart] = "option",
  [anon_sym_lock_DASHonce] = "option",
  [anon_sym_lock_DASHmultiple] = "option",
  [anon_sym_lock_DASHnever] = "option",
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = "option",
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = "option",
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = "option",
  [anon_sym_no_DASHgreeting] = "option",
  [anon_sym_no_DASHsecmem_DASHwarning] = "option",
  [anon_sym_no_DASHpermission_DASHwarning] = "option",
  [anon_sym_require_DASHsecmem] = "option",
  [anon_sym_no_DASHrequire_DASHsecmem] = "option",
  [anon_sym_require_DASHcross_DASHverification] = "option",
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = "option",
  [anon_sym_expert] = "option",
  [anon_sym_no_DASHexpert] = "option",
  [sym_key] = "key",
  [sym_url] = "url",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_default_key] = "default_key",
  [sym_default_recipient] = "default_recipient",
  [sym_default_recipient_self] = "default_recipient_self",
  [sym_no_default_recipient] = "no_default_recipient",
  [sym_verbose] = "verbose",
  [sym_no_tty] = "no_tty",
  [sym_list_options] = "list_options",
  [sym_verify_options] = "verify_options",
  [sym_enable_large_rsa] = "enable_large_rsa",
  [sym_disable_large_rsa] = "disable_large_rsa",
  [sym_enable_dsa2] = "enable_dsa2",
  [sym_disable_dsa2] = "disable_dsa2",
  [sym_photo_viewer] = "photo_viewer",
  [sym__command] = "string",
  [sym_exec_path] = "exec_path",
  [sym_keyring] = "keyring",
  [sym_primary_keyring] = "primary_keyring",
  [sym_trustdb_name] = "trustdb_name",
  [sym_display_charset] = "display_charset",
  [sym_utf8_strings] = "utf8_strings",
  [sym_no_utf8_strings] = "no_utf8_strings",
  [sym_compress_level] = "compress_level",
  [sym_bzip2_compress_level] = "bzip2_compress_level",
  [sym_no_compress] = "no_compress",
  [sym_bzip2_decompress_lowmem] = "bzip2_decompress_lowmem",
  [sym_mangle_dos_filenames] = "mangle_dos_filenames",
  [sym_no_mangle_dos_filenames] = "no_mangle_dos_filenames",
  [sym_ask_cert_level] = "ask_cert_level",
  [sym_no_ask_cert_level] = "no_ask_cert_level",
  [sym_default_cert_level] = "default_cert_level",
  [sym_min_cert_level] = "min_cert_level",
  [sym_trusted_key] = "trusted_key",
  [sym_add_desig_revoker] = "add_desig_revoker",
  [sym_trust_model] = "trust_model",
  [sym_always_trust] = "always_trust",
  [sym_assert_signer] = "assert_signer",
  [sym_auto_key_locate] = "auto_key_locate",
  [sym_no_auto_key_locate] = "no_auto_key_locate",
  [sym_auto_key_import] = "auto_key_import",
  [sym_no_auto_key_import] = "no_auto_key_import",
  [sym_auto_key_retrieve] = "auto_key_retrieve",
  [sym_no_auto_key_retrieve] = "no_auto_key_retrieve",
  [sym_keyid_format] = "keyid_format",
  [sym_keyserver] = "keyserver",
  [sym_completes_needed] = "completes_needed",
  [sym_marginals_needed] = "marginals_needed",
  [sym_tofu_default_policy] = "tofu_default_policy",
  [sym_max_cert_depth] = "max_cert_depth",
  [sym_no_sig_cache] = "no_sig_cache",
  [sym_auto_check_trustdb] = "auto_check_trustdb",
  [sym_no_auto_check_trustdb] = "no_auto_check_trustdb",
  [sym_agent_program] = "agent_program",
  [sym_dirmngr_program] = "dirmngr_program",
  [sym_disable_dirmngr] = "disable_dirmngr",
  [sym_no_autostart] = "no_autostart",
  [sym_lock_once] = "lock_once",
  [sym_lock_multiple] = "lock_multiple",
  [sym_lock_never] = "lock_never",
  [sym_exit_on_status_write_error] = "exit_on_status_write_error",
  [sym_limit_card_insert_tries] = "limit_card_insert_tries",
  [sym_no_random_seed_file] = "no_random_seed_file",
  [sym_no_greeting] = "no_greeting",
  [sym_no_secmem_warning] = "no_secmem_warning",
  [sym_no_permission_warning] = "no_permission_warning",
  [sym_require_secmem] = "require_secmem",
  [sym_no_require_secmem] = "no_require_secmem",
  [sym_require_cross_verification] = "require_cross_verification",
  [sym_no_require_cross_verification] = "no_require_cross_verification",
  [sym_expert] = "expert",
  [sym_no_expert] = "no_expert",
  [sym_string] = "string",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_list_options_repeat1] = "list_options_repeat1",
  [aux_sym_verify_options_repeat1] = "verify_options_repeat1",
  [aux_sym__command_repeat1] = "_command_repeat1",
  [aux_sym__command_repeat2] = "_command_repeat2",
  [aux_sym__command_repeat3] = "_command_repeat3",
  [aux_sym_auto_key_locate_repeat1] = "auto_key_locate_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [anon_sym_default_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_default_DASHrecipient] = anon_sym_default_DASHkey,
  [anon_sym_default_DASHrecipient_DASHself] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHdefault_DASHrecipient] = anon_sym_default_DASHkey,
  [anon_sym_verbose] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHtty] = anon_sym_default_DASHkey,
  [anon_sym_list_DASHoptions] = anon_sym_default_DASHkey,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_default_DASHkey,
  [sym__verify_parameter] = sym__verify_parameter,
  [anon_sym_enable_DASHlarge_DASHrsa] = anon_sym_default_DASHkey,
  [anon_sym_disable_DASHlarge_DASHrsa] = anon_sym_default_DASHkey,
  [anon_sym_enable_DASHdsa2] = anon_sym_default_DASHkey,
  [anon_sym_disable_DASHdsa2] = anon_sym_default_DASHkey,
  [anon_sym_photo_DASHviewer] = anon_sym_default_DASHkey,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__command_token3] = aux_sym__command_token3,
  [sym_format] = sym_format,
  [anon_sym_exec_DASHpath] = anon_sym_default_DASHkey,
  [anon_sym_keyring] = anon_sym_default_DASHkey,
  [anon_sym_primary_DASHkeyring] = anon_sym_default_DASHkey,
  [anon_sym_trustdb_DASHname] = anon_sym_default_DASHkey,
  [anon_sym_display_DASHcharset] = anon_sym_default_DASHkey,
  [sym__charset] = sym__charset,
  [anon_sym_utf8_DASHstrings] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHutf8_DASHstrings] = anon_sym_default_DASHkey,
  [anon_sym_compress_DASHlevel] = anon_sym_default_DASHkey,
  [aux_sym_compress_level_token1] = sym_number,
  [anon_sym_bzip2_DASHcompress_DASHlevel] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHcompress] = anon_sym_default_DASHkey,
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = anon_sym_default_DASHkey,
  [anon_sym_mangle_DASHdos_DASHfilenames] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = anon_sym_default_DASHkey,
  [anon_sym_ask_DASHcert_DASHlevel] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = anon_sym_default_DASHkey,
  [anon_sym_default_DASHcert_DASHlevel] = anon_sym_default_DASHkey,
  [aux_sym_default_cert_level_token1] = sym_number,
  [anon_sym_min_DASHcert_DASHlevel] = anon_sym_default_DASHkey,
  [anon_sym_trusted_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_add_DASHdesig_DASHrevoker] = anon_sym_default_DASHkey,
  [anon_sym_sensitive_COLON] = anon_sym_sensitive_COLON,
  [anon_sym_clear] = anon_sym_clear,
  [anon_sym_trust_DASHmodel] = anon_sym_default_DASHkey,
  [sym__model] = sym__model,
  [anon_sym_always_DASHtrust] = anon_sym_default_DASHkey,
  [anon_sym_assert_DASHsigner] = anon_sym_default_DASHkey,
  [anon_sym_auto_DASHkey_DASHlocate] = anon_sym_default_DASHkey,
  [sym__mechanism] = sym__mechanism,
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = anon_sym_default_DASHkey,
  [anon_sym_auto_DASHkey_DASHimport] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = anon_sym_default_DASHkey,
  [anon_sym_auto_DASHkey_DASHretrieve] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = anon_sym_default_DASHkey,
  [anon_sym_keyid_DASHformat] = anon_sym_default_DASHkey,
  [sym__keyid_format] = sym__keyid_format,
  [anon_sym_keyserver] = anon_sym_default_DASHkey,
  [anon_sym_completes_DASHneeded] = anon_sym_default_DASHkey,
  [anon_sym_marginals_DASHneeded] = anon_sym_default_DASHkey,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = anon_sym_default_DASHkey,
  [anon_sym_max_DASHcert_DASHdepth] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHsig_DASHcache] = anon_sym_default_DASHkey,
  [anon_sym_auto_DASHcheck_DASHtrustdb] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = anon_sym_default_DASHkey,
  [sym__tofu_policy] = sym__tofu_policy,
  [anon_sym_agent_DASHprogram] = anon_sym_default_DASHkey,
  [anon_sym_dirmngr_DASHprogram] = anon_sym_default_DASHkey,
  [anon_sym_disable_DASHdirmngr] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHautostart] = anon_sym_default_DASHkey,
  [anon_sym_lock_DASHonce] = anon_sym_default_DASHkey,
  [anon_sym_lock_DASHmultiple] = anon_sym_default_DASHkey,
  [anon_sym_lock_DASHnever] = anon_sym_default_DASHkey,
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = anon_sym_default_DASHkey,
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHgreeting] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHsecmem_DASHwarning] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHpermission_DASHwarning] = anon_sym_default_DASHkey,
  [anon_sym_require_DASHsecmem] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHrequire_DASHsecmem] = anon_sym_default_DASHkey,
  [anon_sym_require_DASHcross_DASHverification] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = anon_sym_default_DASHkey,
  [anon_sym_expert] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHexpert] = anon_sym_default_DASHkey,
  [sym_key] = sym_key,
  [sym_url] = sym_url,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_default_key] = sym_default_key,
  [sym_default_recipient] = sym_default_recipient,
  [sym_default_recipient_self] = sym_default_recipient_self,
  [sym_no_default_recipient] = sym_no_default_recipient,
  [sym_verbose] = sym_verbose,
  [sym_no_tty] = sym_no_tty,
  [sym_list_options] = sym_list_options,
  [sym_verify_options] = sym_verify_options,
  [sym_enable_large_rsa] = sym_enable_large_rsa,
  [sym_disable_large_rsa] = sym_disable_large_rsa,
  [sym_enable_dsa2] = sym_enable_dsa2,
  [sym_disable_dsa2] = sym_disable_dsa2,
  [sym_photo_viewer] = sym_photo_viewer,
  [sym__command] = sym_string,
  [sym_exec_path] = sym_exec_path,
  [sym_keyring] = sym_keyring,
  [sym_primary_keyring] = sym_primary_keyring,
  [sym_trustdb_name] = sym_trustdb_name,
  [sym_display_charset] = sym_display_charset,
  [sym_utf8_strings] = sym_utf8_strings,
  [sym_no_utf8_strings] = sym_no_utf8_strings,
  [sym_compress_level] = sym_compress_level,
  [sym_bzip2_compress_level] = sym_bzip2_compress_level,
  [sym_no_compress] = sym_no_compress,
  [sym_bzip2_decompress_lowmem] = sym_bzip2_decompress_lowmem,
  [sym_mangle_dos_filenames] = sym_mangle_dos_filenames,
  [sym_no_mangle_dos_filenames] = sym_no_mangle_dos_filenames,
  [sym_ask_cert_level] = sym_ask_cert_level,
  [sym_no_ask_cert_level] = sym_no_ask_cert_level,
  [sym_default_cert_level] = sym_default_cert_level,
  [sym_min_cert_level] = sym_min_cert_level,
  [sym_trusted_key] = sym_trusted_key,
  [sym_add_desig_revoker] = sym_add_desig_revoker,
  [sym_trust_model] = sym_trust_model,
  [sym_always_trust] = sym_always_trust,
  [sym_assert_signer] = sym_assert_signer,
  [sym_auto_key_locate] = sym_auto_key_locate,
  [sym_no_auto_key_locate] = sym_no_auto_key_locate,
  [sym_auto_key_import] = sym_auto_key_import,
  [sym_no_auto_key_import] = sym_no_auto_key_import,
  [sym_auto_key_retrieve] = sym_auto_key_retrieve,
  [sym_no_auto_key_retrieve] = sym_no_auto_key_retrieve,
  [sym_keyid_format] = sym_keyid_format,
  [sym_keyserver] = sym_keyserver,
  [sym_completes_needed] = sym_completes_needed,
  [sym_marginals_needed] = sym_marginals_needed,
  [sym_tofu_default_policy] = sym_tofu_default_policy,
  [sym_max_cert_depth] = sym_max_cert_depth,
  [sym_no_sig_cache] = sym_no_sig_cache,
  [sym_auto_check_trustdb] = sym_auto_check_trustdb,
  [sym_no_auto_check_trustdb] = sym_no_auto_check_trustdb,
  [sym_agent_program] = sym_agent_program,
  [sym_dirmngr_program] = sym_dirmngr_program,
  [sym_disable_dirmngr] = sym_disable_dirmngr,
  [sym_no_autostart] = sym_no_autostart,
  [sym_lock_once] = sym_lock_once,
  [sym_lock_multiple] = sym_lock_multiple,
  [sym_lock_never] = sym_lock_never,
  [sym_exit_on_status_write_error] = sym_exit_on_status_write_error,
  [sym_limit_card_insert_tries] = sym_limit_card_insert_tries,
  [sym_no_random_seed_file] = sym_no_random_seed_file,
  [sym_no_greeting] = sym_no_greeting,
  [sym_no_secmem_warning] = sym_no_secmem_warning,
  [sym_no_permission_warning] = sym_no_permission_warning,
  [sym_require_secmem] = sym_require_secmem,
  [sym_no_require_secmem] = sym_no_require_secmem,
  [sym_require_cross_verification] = sym_require_cross_verification,
  [sym_no_require_cross_verification] = sym_no_require_cross_verification,
  [sym_expert] = sym_expert,
  [sym_no_expert] = sym_no_expert,
  [sym_string] = sym_string,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_list_options_repeat1] = aux_sym_list_options_repeat1,
  [aux_sym_verify_options_repeat1] = aux_sym_verify_options_repeat1,
  [aux_sym__command_repeat1] = aux_sym__command_repeat1,
  [aux_sym__command_repeat2] = aux_sym__command_repeat2,
  [aux_sym__command_repeat3] = aux_sym__command_repeat3,
  [aux_sym_auto_key_locate_repeat1] = aux_sym_auto_key_locate_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_default_DASHkey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHrecipient] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHrecipient_DASHself] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHdefault_DASHrecipient] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHtty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_list_DASHoptions] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__list_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_verify_DASHoptions] = {
    .visible = true,
    .named = true,
  },
  [sym__verify_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_enable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_disable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_enable_DASHdsa2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_disable_DASHdsa2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_photo_DASHviewer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__command_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__command_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec_DASHpath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keyring] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_primary_DASHkeyring] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_trustdb_DASHname] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_display_DASHcharset] = {
    .visible = true,
    .named = true,
  },
  [sym__charset] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_utf8_DASHstrings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHutf8_DASHstrings] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_compress_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_compress_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bzip2_DASHcompress_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHcompress] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_mangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHcert_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_default_cert_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHcert_DASHlevel] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_trusted_DASHkey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_add_DASHdesig_DASHrevoker] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sensitive_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_clear] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trust_DASHmodel] = {
    .visible = true,
    .named = true,
  },
  [sym__model] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_always_DASHtrust] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert_DASHsigner] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = true,
  },
  [sym__mechanism] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_DASHkey_DASHimport] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_keyid_DASHformat] = {
    .visible = true,
    .named = true,
  },
  [sym__keyid_format] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_keyserver] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_completes_DASHneeded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_marginals_DASHneeded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tofu_DASHdefault_DASHpolicy] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_DASHcert_DASHdepth] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHsig_DASHcache] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = true,
  },
  [sym__tofu_policy] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_agent_DASHprogram] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dirmngr_DASHprogram] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_disable_DASHdirmngr] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHautostart] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lock_DASHonce] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lock_DASHmultiple] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_lock_DASHnever] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHgreeting] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHsecmem_DASHwarning] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHpermission_DASHwarning] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_require_DASHsecmem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHrequire_DASHsecmem] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_require_DASHcross_DASHverification] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_expert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHexpert] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_default_key] = {
    .visible = true,
    .named = true,
  },
  [sym_default_recipient] = {
    .visible = true,
    .named = true,
  },
  [sym_default_recipient_self] = {
    .visible = true,
    .named = true,
  },
  [sym_no_default_recipient] = {
    .visible = true,
    .named = true,
  },
  [sym_verbose] = {
    .visible = true,
    .named = true,
  },
  [sym_no_tty] = {
    .visible = true,
    .named = true,
  },
  [sym_list_options] = {
    .visible = true,
    .named = true,
  },
  [sym_verify_options] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_large_rsa] = {
    .visible = true,
    .named = true,
  },
  [sym_disable_large_rsa] = {
    .visible = true,
    .named = true,
  },
  [sym_enable_dsa2] = {
    .visible = true,
    .named = true,
  },
  [sym_disable_dsa2] = {
    .visible = true,
    .named = true,
  },
  [sym_photo_viewer] = {
    .visible = true,
    .named = true,
  },
  [sym__command] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_path] = {
    .visible = true,
    .named = true,
  },
  [sym_keyring] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_keyring] = {
    .visible = true,
    .named = true,
  },
  [sym_trustdb_name] = {
    .visible = true,
    .named = true,
  },
  [sym_display_charset] = {
    .visible = true,
    .named = true,
  },
  [sym_utf8_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_no_utf8_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_compress_level] = {
    .visible = true,
    .named = true,
  },
  [sym_bzip2_compress_level] = {
    .visible = true,
    .named = true,
  },
  [sym_no_compress] = {
    .visible = true,
    .named = true,
  },
  [sym_bzip2_decompress_lowmem] = {
    .visible = true,
    .named = true,
  },
  [sym_mangle_dos_filenames] = {
    .visible = true,
    .named = true,
  },
  [sym_no_mangle_dos_filenames] = {
    .visible = true,
    .named = true,
  },
  [sym_ask_cert_level] = {
    .visible = true,
    .named = true,
  },
  [sym_no_ask_cert_level] = {
    .visible = true,
    .named = true,
  },
  [sym_default_cert_level] = {
    .visible = true,
    .named = true,
  },
  [sym_min_cert_level] = {
    .visible = true,
    .named = true,
  },
  [sym_trusted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_add_desig_revoker] = {
    .visible = true,
    .named = true,
  },
  [sym_trust_model] = {
    .visible = true,
    .named = true,
  },
  [sym_always_trust] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_signer] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_key_locate] = {
    .visible = true,
    .named = true,
  },
  [sym_no_auto_key_locate] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_key_import] = {
    .visible = true,
    .named = true,
  },
  [sym_no_auto_key_import] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_key_retrieve] = {
    .visible = true,
    .named = true,
  },
  [sym_no_auto_key_retrieve] = {
    .visible = true,
    .named = true,
  },
  [sym_keyid_format] = {
    .visible = true,
    .named = true,
  },
  [sym_keyserver] = {
    .visible = true,
    .named = true,
  },
  [sym_completes_needed] = {
    .visible = true,
    .named = true,
  },
  [sym_marginals_needed] = {
    .visible = true,
    .named = true,
  },
  [sym_tofu_default_policy] = {
    .visible = true,
    .named = true,
  },
  [sym_max_cert_depth] = {
    .visible = true,
    .named = true,
  },
  [sym_no_sig_cache] = {
    .visible = true,
    .named = true,
  },
  [sym_auto_check_trustdb] = {
    .visible = true,
    .named = true,
  },
  [sym_no_auto_check_trustdb] = {
    .visible = true,
    .named = true,
  },
  [sym_agent_program] = {
    .visible = true,
    .named = true,
  },
  [sym_dirmngr_program] = {
    .visible = true,
    .named = true,
  },
  [sym_disable_dirmngr] = {
    .visible = true,
    .named = true,
  },
  [sym_no_autostart] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_once] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_multiple] = {
    .visible = true,
    .named = true,
  },
  [sym_lock_never] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_on_status_write_error] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_card_insert_tries] = {
    .visible = true,
    .named = true,
  },
  [sym_no_random_seed_file] = {
    .visible = true,
    .named = true,
  },
  [sym_no_greeting] = {
    .visible = true,
    .named = true,
  },
  [sym_no_secmem_warning] = {
    .visible = true,
    .named = true,
  },
  [sym_no_permission_warning] = {
    .visible = true,
    .named = true,
  },
  [sym_require_secmem] = {
    .visible = true,
    .named = true,
  },
  [sym_no_require_secmem] = {
    .visible = true,
    .named = true,
  },
  [sym_require_cross_verification] = {
    .visible = true,
    .named = true,
  },
  [sym_no_require_cross_verification] = {
    .visible = true,
    .named = true,
  },
  [sym_expert] = {
    .visible = true,
    .named = true,
  },
  [sym_no_expert] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verify_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__command_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_auto_key_locate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_charset = 1,
  field_content = 2,
  field_format = 3,
  field_mechanism = 4,
  field_model = 5,
  field_parameter = 6,
  field_policy = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_charset] = "charset",
  [field_content] = "content",
  [field_format] = "format",
  [field_mechanism] = "mechanism",
  [field_model] = "model",
  [field_parameter] = "parameter",
  [field_policy] = "policy",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 2},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_parameter, 2},
  [2] =
    {field_content, 2, .inherited = true},
  [3] =
    {field_charset, 2},
  [4] =
    {field_model, 2},
  [5] =
    {field_mechanism, 2},
  [6] =
    {field_format, 2},
  [7] =
    {field_policy, 2},
  [8] =
    {field_parameter, 0},
  [9] =
    {field_mechanism, 0},
  [10] =
    {field_mechanism, 2},
    {field_mechanism, 3, .inherited = true},
  [12] =
    {field_content, 1},
  [13] =
    {field_parameter, 1},
  [14] =
    {field_mechanism, 1},
  [15] =
    {field_mechanism, 0, .inherited = true},
    {field_mechanism, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
};

static inline bool sym_format_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < 'K'
      ? (c < 'I'
        ? c == '%'
        : c <= 'I')
      : (c <= 'K' || (c >= 'T' && c <= 'V')))
    : (c <= 'f' || (c < 't'
      ? (c < 'k'
        ? c == 'i'
        : c <= 'k')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1046);
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '%') ADVANCE(1065);
      if (lookahead == '\'') ADVANCE(1072);
      if (lookahead == ',') ADVANCE(1055);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1068);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1064);
      if (lookahead != 0) ADVANCE(1064);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1047);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1065);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (lookahead != 0) ADVANCE(1064);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1055);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'c') ADVANCE(361);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead == 'k') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(699);
      if (lookahead == 'p') ADVANCE(419);
      if (lookahead == 's') ADVANCE(442);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'w') ADVANCE(518);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '%') ADVANCE(1065);
      if (lookahead == '\'') ADVANCE(1072);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1064);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '%') ADVANCE(1070);
      if (lookahead == '\\') ADVANCE(1069);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(1068);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1066);
      if (lookahead == '\\') ADVANCE(1069);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1068);
      if (lookahead != 0) ADVANCE(1068);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1067);
      if (lookahead == '\'') ADVANCE(1073);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1183);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(1076);
      if (lookahead == '\'') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(1075);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(1074);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(1072);
      if (lookahead == '\\') ADVANCE(1075);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1074);
      if (lookahead != 0) ADVANCE(1074);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1040);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(583);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(519);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(214);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead == '.') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(233);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(220);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(523);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(338);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(834);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(976);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(225);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(998);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(977);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(520);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(715);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(590);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(716);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(400);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(965);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(740);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(401);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(685);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(668);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(621);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(721);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(586);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(910);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(677);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(330);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(1002);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(963);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(565);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(844);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(238);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(521);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(625);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(842);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(964);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(863);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(465);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(771);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(813);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(987);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(967);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(703);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(783);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(212);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(406);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(949);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(945);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(648);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(950);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(222);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(507);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(993);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(734);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(1004);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(995);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(219);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == 's') ADVANCE(912);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(258);
      END_STATE();
    case 100:
      if (lookahead == '/') ADVANCE(1044);
      END_STATE();
    case 101:
      if (lookahead == '/') ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '0') ADVANCE(1181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1182);
      END_STATE();
    case 103:
      if (lookahead == '1') ADVANCE(1084);
      if (lookahead == '2') ADVANCE(1083);
      END_STATE();
    case 104:
      if (lookahead == '1') ADVANCE(1088);
      END_STATE();
    case 105:
      if (lookahead == '2') ADVANCE(1061);
      END_STATE();
    case 106:
      if (lookahead == '2') ADVANCE(1062);
      END_STATE();
    case 107:
      if (lookahead == '2') ADVANCE(15);
      END_STATE();
    case 108:
      if (lookahead == '5') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == '8') ADVANCE(1083);
      END_STATE();
    case 110:
      if (lookahead == '8') ADVANCE(108);
      END_STATE();
    case 111:
      if (lookahead == '8') ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == '8') ADVANCE(39);
      END_STATE();
    case 113:
      if (lookahead == '8') ADVANCE(81);
      END_STATE();
    case 114:
      if (lookahead == '9') ADVANCE(21);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 116:
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == ':') ADVANCE(1101);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(710);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1040);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(836);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == 'd') ADVANCE(285);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead == 'g') ADVANCE(756);
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(295);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == 'u') ADVANCE(899);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(1059);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(1060);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(739);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(1026);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(972);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(776);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'e') ADVANCE(766);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(898);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(537);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(933);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(887);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(759);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(749);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(683);
      if (lookahead == 'u') ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1097);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(925);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(932);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(429);
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(926);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(938);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(765);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(939);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(966);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'p') ADVANCE(540);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(973);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(808);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(809);
      END_STATE();
    case 176:
      if (lookahead == 'b') ADVANCE(1124);
      END_STATE();
    case 177:
      if (lookahead == 'b') ADVANCE(1125);
      END_STATE();
    case 178:
      if (lookahead == 'b') ADVANCE(545);
      END_STATE();
    case 179:
      if (lookahead == 'b') ADVANCE(664);
      if (lookahead == 'i') ADVANCE(397);
      END_STATE();
    case 180:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 181:
      if (lookahead == 'b') ADVANCE(660);
      END_STATE();
    case 182:
      if (lookahead == 'b') ADVANCE(720);
      END_STATE();
    case 183:
      if (lookahead == 'b') ADVANCE(526);
      END_STATE();
    case 184:
      if (lookahead == 'b') ADVANCE(557);
      END_STATE();
    case 185:
      if (lookahead == 'b') ADVANCE(560);
      END_STATE();
    case 186:
      if (lookahead == 'b') ADVANCE(563);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(1104);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(517);
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(441);
      if (lookahead == 'k') ADVANCE(350);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 191:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 192:
      if (lookahead == 'c') ADVANCE(591);
      END_STATE();
    case 193:
      if (lookahead == 'c') ADVANCE(1014);
      END_STATE();
    case 194:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 195:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 196:
      if (lookahead == 'c') ADVANCE(266);
      END_STATE();
    case 197:
      if (lookahead == 'c') ADVANCE(894);
      END_STATE();
    case 198:
      if (lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 199:
      if (lookahead == 'c') ADVANCE(443);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == 's') ADVANCE(367);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(595);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(525);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(1022);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(596);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(158);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(366);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(1027);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(374);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(706);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(528);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(385);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'k') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'k') ADVANCE(384);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(821);
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(224);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(996);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1041);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(1119);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(1120);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(1109);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(1126);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(582);
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(177);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(843);
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(340);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(822);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(667);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(696);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(832);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(833);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(293);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(736);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(738);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'i') ADVANCE(901);
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(1131);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(1058);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1081);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1114);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1111);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1115);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(1109);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'h') ADVANCE(655);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(782);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(399);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1012);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(751);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(531);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(828);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(743);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(829);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(744);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(745);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(918);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(747);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == 's') ADVANCE(959);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(1025);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(793);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(854);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(1021);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(769);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(982);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(986);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(988);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(790);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(795);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(792);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(794);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(1029);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(1031);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 393:
      if (lookahead == 'f') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1041);
      END_STATE();
    case 394:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 395:
      if (lookahead == 'f') ADVANCE(1050);
      END_STATE();
    case 396:
      if (lookahead == 'f') ADVANCE(962);
      END_STATE();
    case 397:
      if (lookahead == 'f') ADVANCE(1028);
      END_STATE();
    case 398:
      if (lookahead == 'f') ADVANCE(955);
      END_STATE();
    case 399:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 400:
      if (lookahead == 'f') ADVANCE(672);
      END_STATE();
    case 401:
      if (lookahead == 'f') ADVANCE(489);
      END_STATE();
    case 402:
      if (lookahead == 'f') ADVANCE(491);
      END_STATE();
    case 403:
      if (lookahead == 'f') ADVANCE(166);
      END_STATE();
    case 404:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 405:
      if (lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 406:
      if (lookahead == 'f') ADVANCE(494);
      END_STATE();
    case 407:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 408:
      if (lookahead == 'f') ADVANCE(508);
      END_STATE();
    case 409:
      if (lookahead == 'f') ADVANCE(509);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(1117);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(1079);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(1137);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(1080);
      END_STATE();
    case 414:
      if (lookahead == 'g') ADVANCE(1138);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(1139);
      END_STATE();
    case 416:
      if (lookahead == 'g') ADVANCE(1056);
      END_STATE();
    case 417:
      if (lookahead == 'g') ADVANCE(812);
      END_STATE();
    case 418:
      if (lookahead == 'g') ADVANCE(634);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(713);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(825);
      END_STATE();
    case 421:
      if (lookahead == 'g') ADVANCE(827);
      END_STATE();
    case 422:
      if (lookahead == 'g') ADVANCE(758);
      END_STATE();
    case 423:
      if (lookahead == 'g') ADVANCE(833);
      END_STATE();
    case 424:
      if (lookahead == 'g') ADVANCE(760);
      END_STATE();
    case 425:
      if (lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 426:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 427:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 428:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 429:
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 430:
      if (lookahead == 'g') ADVANCE(454);
      END_STATE();
    case 431:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 432:
      if (lookahead == 'g') ADVANCE(332);
      END_STATE();
    case 433:
      if (lookahead == 'g') ADVANCE(555);
      END_STATE();
    case 434:
      if (lookahead == 'g') ADVANCE(368);
      END_STATE();
    case 435:
      if (lookahead == 'g') ADVANCE(575);
      END_STATE();
    case 436:
      if (lookahead == 'h') ADVANCE(1078);
      END_STATE();
    case 437:
      if (lookahead == 'h') ADVANCE(1122);
      END_STATE();
    case 438:
      if (lookahead == 'h') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 439:
      if (lookahead == 'h') ADVANCE(691);
      END_STATE();
    case 440:
      if (lookahead == 'h') ADVANCE(688);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 441:
      if (lookahead == 'h') ADVANCE(288);
      END_STATE();
    case 442:
      if (lookahead == 'h') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(801);
      END_STATE();
    case 443:
      if (lookahead == 'h') ADVANCE(268);
      END_STATE();
    case 444:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 445:
      if (lookahead == 'h') ADVANCE(697);
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 446:
      if (lookahead == 'h') ADVANCE(386);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(711);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(864);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(418);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(903);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(642);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(909);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(319);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(618);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 'l') ADVANCE(693);
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(981);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(423);
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(961);
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(348);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(941);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(365);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(974);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(814);
      END_STATE();
    case 514:
      if (lookahead == 'k') ADVANCE(710);
      END_STATE();
    case 515:
      if (lookahead == 'k') ADVANCE(24);
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 516:
      if (lookahead == 'k') ADVANCE(1126);
      END_STATE();
    case 517:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 518:
      if (lookahead == 'k') ADVANCE(228);
      END_STATE();
    case 519:
      if (lookahead == 'k') ADVANCE(341);
      if (lookahead == 'n') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead == 's') ADVANCE(935);
      if (lookahead == 'u') ADVANCE(488);
      END_STATE();
    case 520:
      if (lookahead == 'k') ADVANCE(294);
      END_STATE();
    case 521:
      if (lookahead == 'k') ADVANCE(297);
      END_STATE();
    case 522:
      if (lookahead == 'k') ADVANCE(328);
      END_STATE();
    case 523:
      if (lookahead == 'k') ADVANCE(306);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead == 'p') ADVANCE(445);
      if (lookahead == 's') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 524:
      if (lookahead == 'k') ADVANCE(635);
      END_STATE();
    case 525:
      if (lookahead == 'k') ADVANCE(333);
      END_STATE();
    case 526:
      if (lookahead == 'k') ADVANCE(353);
      END_STATE();
    case 527:
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 528:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 529:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(1103);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(1094);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(1087);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(1098);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(1095);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(1096);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(1109);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 539:
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead == 's') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      END_STATE();
    case 540:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 541:
      if (lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 542:
      if (lookahead == 'l') ADVANCE(1011);
      END_STATE();
    case 543:
      if (lookahead == 'l') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 544:
      if (lookahead == 'l') ADVANCE(822);
      END_STATE();
    case 545:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 546:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 547:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 548:
      if (lookahead == 'l') ADVANCE(927);
      END_STATE();
    case 549:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 550:
      if (lookahead == 'l') ADVANCE(833);
      END_STATE();
    case 551:
      if (lookahead == 'l') ADVANCE(662);
      END_STATE();
    case 552:
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 553:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 554:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 555:
      if (lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 556:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 557:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 558:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 559:
      if (lookahead == 'l') ADVANCE(1024);
      END_STATE();
    case 560:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 561:
      if (lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 562:
      if (lookahead == 'l') ADVANCE(922);
      END_STATE();
    case 563:
      if (lookahead == 'l') ADVANCE(337);
      END_STATE();
    case 564:
      if (lookahead == 'l') ADVANCE(1001);
      if (lookahead == 'u') ADVANCE(920);
      END_STATE();
    case 565:
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 566:
      if (lookahead == 'l') ADVANCE(501);
      END_STATE();
    case 567:
      if (lookahead == 'l') ADVANCE(356);
      END_STATE();
    case 568:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 569:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(875);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 576:
      if (lookahead == 'm') ADVANCE(1127);
      END_STATE();
    case 577:
      if (lookahead == 'm') ADVANCE(1140);
      END_STATE();
    case 578:
      if (lookahead == 'm') ADVANCE(1128);
      END_STATE();
    case 579:
      if (lookahead == 'm') ADVANCE(1141);
      END_STATE();
    case 580:
      if (lookahead == 'm') ADVANCE(1091);
      END_STATE();
    case 581:
      if (lookahead == 'm') ADVANCE(712);
      END_STATE();
    case 582:
      if (lookahead == 'm') ADVANCE(451);
      if (lookahead == 's') ADVANCE(930);
      END_STATE();
    case 583:
      if (lookahead == 'm') ADVANCE(958);
      if (lookahead == 'n') ADVANCE(339);
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 584:
      if (lookahead == 'm') ADVANCE(614);
      END_STATE();
    case 585:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 586:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 587:
      if (lookahead == 'm') ADVANCE(724);
      END_STATE();
    case 588:
      if (lookahead == 'm') ADVANCE(456);
      END_STATE();
    case 589:
      if (lookahead == 'm') ADVANCE(729);
      END_STATE();
    case 590:
      if (lookahead == 'm') ADVANCE(690);
      END_STATE();
    case 591:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 592:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 593:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 594:
      if (lookahead == 'm') ADVANCE(269);
      END_STATE();
    case 595:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 596:
      if (lookahead == 'm') ADVANCE(305);
      END_STATE();
    case 597:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 598:
      if (lookahead == 'm') ADVANCE(307);
      END_STATE();
    case 599:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 600:
      if (lookahead == 'm') ADVANCE(641);
      END_STATE();
    case 601:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 602:
      if (lookahead == 'm') ADVANCE(728);
      END_STATE();
    case 603:
      if (lookahead == 'm') ADVANCE(732);
      END_STATE();
    case 604:
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 605:
      if (lookahead == 'm') ADVANCE(733);
      END_STATE();
    case 606:
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 607:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 608:
      if (lookahead == 'n') ADVANCE(1142);
      END_STATE();
    case 609:
      if (lookahead == 'n') ADVANCE(1143);
      END_STATE();
    case 610:
      if (lookahead == 'n') ADVANCE(1126);
      END_STATE();
    case 611:
      if (lookahead == 'n') ADVANCE(839);
      END_STATE();
    case 612:
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(430);
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 613:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 614:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 615:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 616:
      if (lookahead == 'n') ADVANCE(524);
      END_STATE();
    case 617:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 618:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 619:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 620:
      if (lookahead == 'n') ADVANCE(822);
      END_STATE();
    case 621:
      if (lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 622:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 623:
      if (lookahead == 'n') ADVANCE(824);
      END_STATE();
    case 624:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 625:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 626:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 627:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 628:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 629:
      if (lookahead == 'n') ADVANCE(542);
      END_STATE();
    case 630:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 631:
      if (lookahead == 'n') ADVANCE(833);
      END_STATE();
    case 632:
      if (lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 633:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 634:
      if (lookahead == 'n') ADVANCE(324);
      END_STATE();
    case 635:
      if (lookahead == 'n') ADVANCE(666);
      END_STATE();
    case 636:
      if (lookahead == 'n') ADVANCE(335);
      END_STATE();
    case 637:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 638:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 639:
      if (lookahead == 'n') ADVANCE(908);
      END_STATE();
    case 640:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 641:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 642:
      if (lookahead == 'n') ADVANCE(871);
      END_STATE();
    case 643:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 644:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 645:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 646:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 647:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 648:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(435);
      END_STATE();
    case 653:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 654:
      if (lookahead == 'o') ADVANCE(396);
      if (lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 655:
      if (lookahead == 'o') ADVANCE(753);
      END_STATE();
    case 656:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 657:
      if (lookahead == 'o') ADVANCE(1104);
      END_STATE();
    case 658:
      if (lookahead == 'o') ADVANCE(1126);
      END_STATE();
    case 659:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 660:
      if (lookahead == 'o') ADVANCE(1006);
      END_STATE();
    case 661:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 662:
      if (lookahead == 'o') ADVANCE(1003);
      END_STATE();
    case 663:
      if (lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 664:
      if (lookahead == 'o') ADVANCE(847);
      END_STATE();
    case 665:
      if (lookahead == 'o') ADVANCE(1000);
      END_STATE();
    case 666:
      if (lookahead == 'o') ADVANCE(997);
      END_STATE();
    case 667:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 668:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 669:
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 670:
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 671:
      if (lookahead == 'o') ADVANCE(623);
      END_STATE();
    case 672:
      if (lookahead == 'o') ADVANCE(775);
      END_STATE();
    case 673:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 674:
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 675:
      if (lookahead == 'o') ADVANCE(627);
      END_STATE();
    case 676:
      if (lookahead == 'o') ADVANCE(931);
      END_STATE();
    case 677:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 678:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 679:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 680:
      if (lookahead == 'o') ADVANCE(833);
      END_STATE();
    case 681:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 682:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 683:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 684:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 685:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 686:
      if (lookahead == 'o') ADVANCE(398);
      END_STATE();
    case 687:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 688:
      if (lookahead == 'o') ADVANCE(915);
      END_STATE();
    case 689:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 690:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 691:
      if (lookahead == 'o') ADVANCE(752);
      END_STATE();
    case 692:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 693:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 694:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 695:
      if (lookahead == 'o') ADVANCE(549);
      END_STATE();
    case 696:
      if (lookahead == 'o') ADVANCE(856);
      END_STATE();
    case 697:
      if (lookahead == 'o') ADVANCE(921);
      END_STATE();
    case 698:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 699:
      if (lookahead == 'o') ADVANCE(250);
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 700:
      if (lookahead == 'o') ADVANCE(768);
      END_STATE();
    case 701:
      if (lookahead == 'o') ADVANCE(934);
      END_STATE();
    case 702:
      if (lookahead == 'o') ADVANCE(867);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(947);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(881);
      END_STATE();
    case 710:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 711:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 712:
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 713:
      if (lookahead == 'p') ADVANCE(1104);
      END_STATE();
    case 714:
      if (lookahead == 'p') ADVANCE(1110);
      END_STATE();
    case 715:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 716:
      if (lookahead == 'p') ADVANCE(757);
      END_STATE();
    case 717:
      if (lookahead == 'p') ADVANCE(419);
      END_STATE();
    case 718:
      if (lookahead == 'p') ADVANCE(911);
      END_STATE();
    case 719:
      if (lookahead == 'p') ADVANCE(477);
      END_STATE();
    case 720:
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 721:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 722:
      if (lookahead == 'p') ADVANCE(900);
      END_STATE();
    case 723:
      if (lookahead == 'p') ADVANCE(553);
      END_STATE();
    case 724:
      if (lookahead == 'p') ADVANCE(764);
      END_STATE();
    case 725:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 726:
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 727:
      if (lookahead == 'p') ADVANCE(772);
      END_STATE();
    case 728:
      if (lookahead == 'p') ADVANCE(820);
      END_STATE();
    case 729:
      if (lookahead == 'p') ADVANCE(698);
      END_STATE();
    case 730:
      if (lookahead == 'p') ADVANCE(499);
      END_STATE();
    case 731:
      if (lookahead == 'p') ADVANCE(490);
      END_STATE();
    case 732:
      if (lookahead == 'p') ADVANCE(798);
      END_STATE();
    case 733:
      if (lookahead == 'p') ADVANCE(700);
      END_STATE();
    case 734:
      if (lookahead == 'p') ADVANCE(799);
      END_STATE();
    case 735:
      if (lookahead == 'q') ADVANCE(1034);
      END_STATE();
    case 736:
      if (lookahead == 'q') ADVANCE(960);
      END_STATE();
    case 737:
      if (lookahead == 'q') ADVANCE(975);
      END_STATE();
    case 738:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 739:
      if (lookahead == 'r') ADVANCE(1102);
      END_STATE();
    case 740:
      if (lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 741:
      if (lookahead == 'r') ADVANCE(978);
      END_STATE();
    case 742:
      if (lookahead == 'r') ADVANCE(1118);
      END_STATE();
    case 743:
      if (lookahead == 'r') ADVANCE(1133);
      END_STATE();
    case 744:
      if (lookahead == 'r') ADVANCE(1063);
      END_STATE();
    case 745:
      if (lookahead == 'r') ADVANCE(1107);
      END_STATE();
    case 746:
      if (lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 747:
      if (lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 748:
      if (lookahead == 'r') ADVANCE(1134);
      END_STATE();
    case 749:
      if (lookahead == 'r') ADVANCE(1109);
      END_STATE();
    case 750:
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 751:
      if (lookahead == 'r') ADVANCE(588);
      END_STATE();
    case 752:
      if (lookahead == 'r') ADVANCE(882);
      END_STATE();
    case 753:
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 754:
      if (lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 755:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 756:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 757:
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 758:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 759:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 760:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 761:
      if (lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 762:
      if (lookahead == 'r') ADVANCE(702);
      END_STATE();
    case 763:
      if (lookahead == 'r') ADVANCE(480);
      END_STATE();
    case 764:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 765:
      if (lookahead == 'r') ADVANCE(888);
      END_STATE();
    case 766:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 767:
      if (lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 768:
      if (lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 769:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 770:
      if (lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 771:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 772:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 773:
      if (lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 774:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 775:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 776:
      if (lookahead == 'r') ADVANCE(1019);
      END_STATE();
    case 777:
      if (lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 778:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 779:
      if (lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 780:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 781:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 782:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 783:
      if (lookahead == 'r') ADVANCE(849);
      END_STATE();
    case 784:
      if (lookahead == 'r') ADVANCE(493);
      END_STATE();
    case 785:
      if (lookahead == 'r') ADVANCE(781);
      END_STATE();
    case 786:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 787:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 788:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 789:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 790:
      if (lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 791:
      if (lookahead == 'r') ADVANCE(1023);
      END_STATE();
    case 792:
      if (lookahead == 'r') ADVANCE(943);
      END_STATE();
    case 793:
      if (lookahead == 'r') ADVANCE(985);
      END_STATE();
    case 794:
      if (lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 795:
      if (lookahead == 'r') ADVANCE(992);
      END_STATE();
    case 796:
      if (lookahead == 'r') ADVANCE(968);
      END_STATE();
    case 797:
      if (lookahead == 'r') ADVANCE(600);
      END_STATE();
    case 798:
      if (lookahead == 'r') ADVANCE(376);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(694);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(944);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(969);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(484);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(495);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(994);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 813:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(381);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 818:
      if (lookahead == 'r') ADVANCE(953);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(954);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 821:
      if (lookahead == 'r') ADVANCE(709);
      END_STATE();
    case 822:
      if (lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 823:
      if (lookahead == 's') ADVANCE(1090);
      END_STATE();
    case 824:
      if (lookahead == 's') ADVANCE(1054);
      END_STATE();
    case 825:
      if (lookahead == 's') ADVANCE(1085);
      END_STATE();
    case 826:
      if (lookahead == 's') ADVANCE(1057);
      END_STATE();
    case 827:
      if (lookahead == 's') ADVANCE(1086);
      END_STATE();
    case 828:
      if (lookahead == 's') ADVANCE(1092);
      END_STATE();
    case 829:
      if (lookahead == 's') ADVANCE(1135);
      END_STATE();
    case 830:
      if (lookahead == 's') ADVANCE(1093);
      END_STATE();
    case 831:
      if (lookahead == 's') ADVANCE(1104);
      END_STATE();
    case 832:
      if (lookahead == 's') ADVANCE(1109);
      END_STATE();
    case 833:
      if (lookahead == 's') ADVANCE(1056);
      END_STATE();
    case 834:
      if (lookahead == 's') ADVANCE(487);
      if (lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 835:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 836:
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 'u') ADVANCE(906);
      END_STATE();
    case 837:
      if (lookahead == 's') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(923);
      END_STATE();
    case 838:
      if (lookahead == 's') ADVANCE(883);
      END_STATE();
    case 839:
      if (lookahead == 's') ADVANCE(461);
      END_STATE();
    case 840:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 841:
      if (lookahead == 's') ADVANCE(823);
      END_STATE();
    case 842:
      if (lookahead == 's') ADVANCE(460);
      END_STATE();
    case 843:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 844:
      if (lookahead == 's') ADVANCE(907);
      END_STATE();
    case 845:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 846:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 847:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 848:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 849:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 850:
      if (lookahead == 's') ADVANCE(886);
      END_STATE();
    case 851:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 852:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 853:
      if (lookahead == 's') ADVANCE(902);
      END_STATE();
    case 854:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 855:
      if (lookahead == 's') ADVANCE(905);
      END_STATE();
    case 856:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 857:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 858:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 859:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 860:
      if (lookahead == 's') ADVANCE(317);
      END_STATE();
    case 861:
      if (lookahead == 's') ADVANCE(874);
      END_STATE();
    case 862:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 863:
      if (lookahead == 's') ADVANCE(336);
      END_STATE();
    case 864:
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 865:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 866:
      if (lookahead == 's') ADVANCE(851);
      END_STATE();
    case 867:
      if (lookahead == 's') ADVANCE(857);
      END_STATE();
    case 868:
      if (lookahead == 's') ADVANCE(859);
      END_STATE();
    case 869:
      if (lookahead == 's') ADVANCE(936);
      END_STATE();
    case 870:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 871:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 872:
      if (lookahead == 's') ADVANCE(948);
      END_STATE();
    case 873:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 874:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 875:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 876:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 877:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 878:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 879:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 880:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 881:
      if (lookahead == 's') ADVANCE(880);
      END_STATE();
    case 882:
      if (lookahead == 't') ADVANCE(1117);
      END_STATE();
    case 883:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 884:
      if (lookahead == 't') ADVANCE(1144);
      END_STATE();
    case 885:
      if (lookahead == 't') ADVANCE(1145);
      END_STATE();
    case 886:
      if (lookahead == 't') ADVANCE(1106);
      END_STATE();
    case 887:
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 888:
      if (lookahead == 't') ADVANCE(1130);
      END_STATE();
    case 889:
      if (lookahead == 't') ADVANCE(1112);
      END_STATE();
    case 890:
      if (lookahead == 't') ADVANCE(1082);
      END_STATE();
    case 891:
      if (lookahead == 't') ADVANCE(1049);
      END_STATE();
    case 892:
      if (lookahead == 't') ADVANCE(1113);
      END_STATE();
    case 893:
      if (lookahead == 't') ADVANCE(1051);
      END_STATE();
    case 894:
      if (lookahead == 't') ADVANCE(1104);
      END_STATE();
    case 895:
      if (lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 896:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 897:
      if (lookahead == 't') ADVANCE(1010);
      END_STATE();
    case 898:
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 899:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 900:
      if (lookahead == 't') ADVANCE(437);
      END_STATE();
    case 901:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 902:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 903:
      if (lookahead == 't') ADVANCE(483);
      END_STATE();
    case 904:
      if (lookahead == 't') ADVANCE(1011);
      END_STATE();
    case 905:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 906:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 907:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 908:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 909:
      if (lookahead == 't') ADVANCE(1015);
      END_STATE();
    case 910:
      if (lookahead == 't') ADVANCE(796);
      END_STATE();
    case 911:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 912:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 913:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 914:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 915:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 916:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 917:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 918:
      if (lookahead == 't') ADVANCE(779);
      END_STATE();
    case 919:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 920:
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 921:
      if (lookahead == 't') ADVANCE(680);
      END_STATE();
    case 922:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 923:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 924:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 925:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 926:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 927:
      if (lookahead == 't') ADVANCE(458);
      END_STATE();
    case 928:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 929:
      if (lookahead == 't') ADVANCE(661);
      END_STATE();
    case 930:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 931:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 932:
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 933:
      if (lookahead == 't') ADVANCE(971);
      END_STATE();
    case 934:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 935:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 936:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 937:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 938:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 939:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 940:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 941:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 942:
      if (lookahead == 't') ADVANCE(479);
      END_STATE();
    case 943:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 944:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 945:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 946:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 947:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 948:
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 950:
      if (lookahead == 't') ADVANCE(804);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 952:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 953:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 955:
      if (lookahead == 'u') ADVANCE(1105);
      END_STATE();
    case 956:
      if (lookahead == 'u') ADVANCE(838);
      END_STATE();
    case 957:
      if (lookahead == 'u') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 958:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 959:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 960:
      if (lookahead == 'u') ADVANCE(478);
      END_STATE();
    case 961:
      if (lookahead == 'u') ADVANCE(873);
      END_STATE();
    case 962:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 963:
      if (lookahead == 'u') ADVANCE(497);
      END_STATE();
    case 964:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 965:
      if (lookahead == 'u') ADVANCE(755);
      END_STATE();
    case 966:
      if (lookahead == 'u') ADVANCE(552);
      END_STATE();
    case 967:
      if (lookahead == 'u') ADVANCE(780);
      END_STATE();
    case 968:
      if (lookahead == 'u') ADVANCE(850);
      END_STATE();
    case 969:
      if (lookahead == 'u') ADVANCE(853);
      END_STATE();
    case 970:
      if (lookahead == 'u') ADVANCE(855);
      END_STATE();
    case 971:
      if (lookahead == 'u') ADVANCE(858);
      END_STATE();
    case 972:
      if (lookahead == 'u') ADVANCE(561);
      END_STATE();
    case 973:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 974:
      if (lookahead == 'u') ADVANCE(876);
      END_STATE();
    case 975:
      if (lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 976:
      if (lookahead == 'v') ADVANCE(470);
      END_STATE();
    case 977:
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 978:
      if (lookahead == 'v') ADVANCE(310);
      END_STATE();
    case 979:
      if (lookahead == 'v') ADVANCE(315);
      END_STATE();
    case 980:
      if (lookahead == 'v') ADVANCE(692);
      END_STATE();
    case 981:
      if (lookahead == 'v') ADVANCE(281);
      END_STATE();
    case 982:
      if (lookahead == 'v') ADVANCE(298);
      END_STATE();
    case 983:
      if (lookahead == 'v') ADVANCE(300);
      END_STATE();
    case 984:
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 985:
      if (lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 986:
      if (lookahead == 'v') ADVANCE(309);
      END_STATE();
    case 987:
      if (lookahead == 'v') ADVANCE(329);
      END_STATE();
    case 988:
      if (lookahead == 'v') ADVANCE(272);
      END_STATE();
    case 989:
      if (lookahead == 'v') ADVANCE(311);
      END_STATE();
    case 990:
      if (lookahead == 'v') ADVANCE(312);
      END_STATE();
    case 991:
      if (lookahead == 'v') ADVANCE(275);
      END_STATE();
    case 992:
      if (lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 993:
      if (lookahead == 'v') ADVANCE(169);
      END_STATE();
    case 994:
      if (lookahead == 'v') ADVANCE(373);
      END_STATE();
    case 995:
      if (lookahead == 'v') ADVANCE(388);
      END_STATE();
    case 996:
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 997:
      if (lookahead == 'w') ADVANCE(610);
      END_STATE();
    case 998:
      if (lookahead == 'w') ADVANCE(784);
      END_STATE();
    case 999:
      if (lookahead == 'w') ADVANCE(323);
      END_STATE();
    case 1000:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 1001:
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 1002:
      if (lookahead == 'w') ADVANCE(149);
      END_STATE();
    case 1003:
      if (lookahead == 'w') ADVANCE(598);
      END_STATE();
    case 1004:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 1005:
      if (lookahead == 'x') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 1006:
      if (lookahead == 'x') ADVANCE(1056);
      END_STATE();
    case 1007:
      if (lookahead == 'x') ADVANCE(725);
      END_STATE();
    case 1008:
      if (lookahead == 'x') ADVANCE(730);
      END_STATE();
    case 1009:
      if (lookahead == 'y') ADVANCE(449);
      END_STATE();
    case 1010:
      if (lookahead == 'y') ADVANCE(1053);
      END_STATE();
    case 1011:
      if (lookahead == 'y') ADVANCE(1058);
      END_STATE();
    case 1012:
      if (lookahead == 'y') ADVANCE(1048);
      END_STATE();
    case 1013:
      if (lookahead == 'y') ADVANCE(1099);
      END_STATE();
    case 1014:
      if (lookahead == 'y') ADVANCE(1121);
      END_STATE();
    case 1015:
      if (lookahead == 'y') ADVANCE(1056);
      END_STATE();
    case 1016:
      if (lookahead == 'y') ADVANCE(807);
      END_STATE();
    case 1017:
      if (lookahead == 'y') ADVANCE(846);
      END_STATE();
    case 1018:
      if (lookahead == 'y') ADVANCE(831);
      END_STATE();
    case 1019:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 1020:
      if (lookahead == 'y') ADVANCE(833);
      END_STATE();
    case 1021:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 1022:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 1023:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 1024:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 1025:
      if (lookahead == 'y') ADVANCE(862);
      END_STATE();
    case 1026:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 1027:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 1028:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 1029:
      if (lookahead == 'y') ADVANCE(870);
      END_STATE();
    case 1030:
      if (lookahead == 'y') ADVANCE(806);
      END_STATE();
    case 1031:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 1032:
      if (lookahead == 'z') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 1033:
      if (lookahead == '{') ADVANCE(735);
      END_STATE();
    case 1034:
      if (lookahead == '}') ADVANCE(1071);
      END_STATE();
    case 1035:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1179);
      END_STATE();
    case 1036:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1180);
      END_STATE();
    case 1037:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1178);
      END_STATE();
    case 1038:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1037);
      END_STATE();
    case 1039:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1038);
      END_STATE();
    case 1040:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1039);
      END_STATE();
    case 1041:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1040);
      END_STATE();
    case 1042:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1041);
      END_STATE();
    case 1043:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1042);
      END_STATE();
    case 1044:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1045:
      if (eof) ADVANCE(1046);
      if (lookahead == '\n') ADVANCE(1047);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1184);
      if (lookahead == ',') ADVANCE(1055);
      if (lookahead == '0') ADVANCE(1005);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(1032);
      if (lookahead == 'c') ADVANCE(538);
      if (lookahead == 'd') ADVANCE(259);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'h') ADVANCE(514);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == 'k') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead == 'r') ADVANCE(261);
      if (lookahead == 's') ADVANCE(279);
      if (lookahead == 't') ADVANCE(654);
      if (lookahead == 'u') ADVANCE(896);
      if (lookahead == 'v') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1185);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1043);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(860);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1077);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1183);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(1033);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1077);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1183);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(1033);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1077);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1083);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_sensitive_COLON);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == '+') ADVANCE(717);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1146);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1147);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1148);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1149);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1150);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1151);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1152);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1153);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1154);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1155);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1156);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1157);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1158);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1159);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1160);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1161);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1162);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1163);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1164);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1165);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1166);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1167);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1168);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1169);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1170);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1171);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1172);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1173);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1174);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1175);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1176);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1177);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(1044);
      if (lookahead == '.') ADVANCE(1035);
      if (lookahead == ':') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1179);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1180);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1182);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1183);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1184);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1045},
  [2] = {.lex_state = 1045},
  [3] = {.lex_state = 1045},
  [4] = {.lex_state = 1045},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1045},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 1045},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1045},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 1045},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 1045},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 1045},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1045},
  [47] = {.lex_state = 1045},
  [48] = {.lex_state = 1045},
  [49] = {.lex_state = 1045},
  [50] = {.lex_state = 1045},
  [51] = {.lex_state = 1045},
  [52] = {.lex_state = 1045},
  [53] = {.lex_state = 1045},
  [54] = {.lex_state = 1045},
  [55] = {.lex_state = 1045},
  [56] = {.lex_state = 1045},
  [57] = {.lex_state = 1045},
  [58] = {.lex_state = 1045},
  [59] = {.lex_state = 1045},
  [60] = {.lex_state = 1045},
  [61] = {.lex_state = 1045},
  [62] = {.lex_state = 1045},
  [63] = {.lex_state = 1045},
  [64] = {.lex_state = 1045},
  [65] = {.lex_state = 1045},
  [66] = {.lex_state = 1045},
  [67] = {.lex_state = 1045},
  [68] = {.lex_state = 1045},
  [69] = {.lex_state = 1045},
  [70] = {.lex_state = 1045},
  [71] = {.lex_state = 1045},
  [72] = {.lex_state = 1045},
  [73] = {.lex_state = 1045},
  [74] = {.lex_state = 1045},
  [75] = {.lex_state = 1045},
  [76] = {.lex_state = 1045},
  [77] = {.lex_state = 1045},
  [78] = {.lex_state = 1045},
  [79] = {.lex_state = 1045},
  [80] = {.lex_state = 1045},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 1045},
  [83] = {.lex_state = 1045},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 151},
  [88] = {.lex_state = 1045},
  [89] = {.lex_state = 1045},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1045},
  [92] = {.lex_state = 1045},
  [93] = {.lex_state = 1045},
  [94] = {.lex_state = 1045},
  [95] = {.lex_state = 102},
  [96] = {.lex_state = 102},
  [97] = {.lex_state = 151},
  [98] = {.lex_state = 102},
  [99] = {.lex_state = 1045},
  [100] = {.lex_state = 1045},
  [101] = {.lex_state = 102},
  [102] = {.lex_state = 1045},
  [103] = {.lex_state = 1045},
  [104] = {.lex_state = 1045},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 1045},
  [107] = {.lex_state = 1045},
  [108] = {.lex_state = 1045},
  [109] = {.lex_state = 1045},
  [110] = {.lex_state = 1045},
  [111] = {.lex_state = 1045},
  [112] = {.lex_state = 1045},
  [113] = {.lex_state = 1045},
  [114] = {.lex_state = 1045},
  [115] = {.lex_state = 1045},
  [116] = {.lex_state = 1045},
  [117] = {.lex_state = 1045},
  [118] = {.lex_state = 1045},
  [119] = {.lex_state = 1045},
  [120] = {.lex_state = 1045},
  [121] = {.lex_state = 1045},
  [122] = {.lex_state = 1045},
  [123] = {.lex_state = 1045},
  [124] = {.lex_state = 1045},
  [125] = {.lex_state = 1045},
  [126] = {.lex_state = 1045},
  [127] = {.lex_state = 1045},
  [128] = {.lex_state = 1045},
  [129] = {.lex_state = 1045},
  [130] = {.lex_state = 1045},
  [131] = {.lex_state = 1045},
  [132] = {.lex_state = 1045},
  [133] = {.lex_state = 1045},
  [134] = {.lex_state = 1045},
  [135] = {.lex_state = 1045},
  [136] = {.lex_state = 1045},
  [137] = {.lex_state = 1045},
  [138] = {.lex_state = 1045},
  [139] = {.lex_state = 1045},
  [140] = {.lex_state = 1045},
  [141] = {.lex_state = 1045},
  [142] = {.lex_state = 1045},
  [143] = {.lex_state = 1045},
  [144] = {.lex_state = 1045},
  [145] = {.lex_state = 1045},
  [146] = {.lex_state = 1045},
  [147] = {.lex_state = 1045},
  [148] = {.lex_state = 1045},
  [149] = {.lex_state = 1045},
  [150] = {.lex_state = 1045},
  [151] = {.lex_state = 1045},
  [152] = {.lex_state = 1045},
  [153] = {.lex_state = 1045},
  [154] = {.lex_state = 1045},
  [155] = {.lex_state = 1045},
  [156] = {.lex_state = 1045},
  [157] = {.lex_state = 1045},
  [158] = {.lex_state = 1045},
  [159] = {.lex_state = 1045},
  [160] = {.lex_state = 1045},
  [161] = {.lex_state = 1045},
  [162] = {.lex_state = 1045},
  [163] = {.lex_state = 1045},
  [164] = {.lex_state = 1045},
  [165] = {.lex_state = 1045},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [sym_format] = ACTIONS(1),
    [aux_sym_default_cert_level_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(79),
    [sym_default_key] = STATE(78),
    [sym_default_recipient] = STATE(78),
    [sym_default_recipient_self] = STATE(78),
    [sym_no_default_recipient] = STATE(78),
    [sym_verbose] = STATE(78),
    [sym_no_tty] = STATE(78),
    [sym_list_options] = STATE(78),
    [sym_verify_options] = STATE(78),
    [sym_enable_large_rsa] = STATE(78),
    [sym_disable_large_rsa] = STATE(78),
    [sym_enable_dsa2] = STATE(78),
    [sym_disable_dsa2] = STATE(78),
    [sym_photo_viewer] = STATE(78),
    [sym_exec_path] = STATE(78),
    [sym_keyring] = STATE(78),
    [sym_primary_keyring] = STATE(78),
    [sym_trustdb_name] = STATE(78),
    [sym_display_charset] = STATE(78),
    [sym_utf8_strings] = STATE(78),
    [sym_no_utf8_strings] = STATE(78),
    [sym_compress_level] = STATE(78),
    [sym_bzip2_compress_level] = STATE(78),
    [sym_no_compress] = STATE(78),
    [sym_bzip2_decompress_lowmem] = STATE(78),
    [sym_mangle_dos_filenames] = STATE(78),
    [sym_no_mangle_dos_filenames] = STATE(78),
    [sym_ask_cert_level] = STATE(78),
    [sym_no_ask_cert_level] = STATE(78),
    [sym_default_cert_level] = STATE(78),
    [sym_min_cert_level] = STATE(78),
    [sym_trusted_key] = STATE(78),
    [sym_add_desig_revoker] = STATE(78),
    [sym_trust_model] = STATE(78),
    [sym_always_trust] = STATE(78),
    [sym_assert_signer] = STATE(78),
    [sym_auto_key_locate] = STATE(78),
    [sym_no_auto_key_locate] = STATE(78),
    [sym_auto_key_import] = STATE(78),
    [sym_no_auto_key_import] = STATE(78),
    [sym_auto_key_retrieve] = STATE(78),
    [sym_no_auto_key_retrieve] = STATE(78),
    [sym_keyid_format] = STATE(78),
    [sym_keyserver] = STATE(78),
    [sym_completes_needed] = STATE(78),
    [sym_marginals_needed] = STATE(78),
    [sym_tofu_default_policy] = STATE(78),
    [sym_max_cert_depth] = STATE(78),
    [sym_no_sig_cache] = STATE(78),
    [sym_auto_check_trustdb] = STATE(78),
    [sym_no_auto_check_trustdb] = STATE(78),
    [sym_agent_program] = STATE(78),
    [sym_dirmngr_program] = STATE(78),
    [sym_disable_dirmngr] = STATE(78),
    [sym_no_autostart] = STATE(78),
    [sym_lock_once] = STATE(78),
    [sym_lock_multiple] = STATE(78),
    [sym_lock_never] = STATE(78),
    [sym_exit_on_status_write_error] = STATE(78),
    [sym_limit_card_insert_tries] = STATE(78),
    [sym_no_random_seed_file] = STATE(78),
    [sym_no_greeting] = STATE(78),
    [sym_no_secmem_warning] = STATE(78),
    [sym_no_permission_warning] = STATE(78),
    [sym_require_secmem] = STATE(78),
    [sym_no_require_secmem] = STATE(78),
    [sym_require_cross_verification] = STATE(78),
    [sym_no_require_cross_verification] = STATE(78),
    [sym_expert] = STATE(78),
    [sym_no_expert] = STATE(78),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_config_token1] = ACTIONS(7),
    [anon_sym_default_DASHkey] = ACTIONS(9),
    [anon_sym_default_DASHrecipient] = ACTIONS(11),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(13),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(15),
    [anon_sym_verbose] = ACTIONS(17),
    [anon_sym_no_DASHtty] = ACTIONS(19),
    [anon_sym_list_DASHoptions] = ACTIONS(21),
    [anon_sym_verify_DASHoptions] = ACTIONS(23),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(25),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(27),
    [anon_sym_enable_DASHdsa2] = ACTIONS(29),
    [anon_sym_disable_DASHdsa2] = ACTIONS(31),
    [anon_sym_photo_DASHviewer] = ACTIONS(33),
    [anon_sym_exec_DASHpath] = ACTIONS(35),
    [anon_sym_keyring] = ACTIONS(37),
    [anon_sym_primary_DASHkeyring] = ACTIONS(39),
    [anon_sym_trustdb_DASHname] = ACTIONS(41),
    [anon_sym_display_DASHcharset] = ACTIONS(43),
    [anon_sym_utf8_DASHstrings] = ACTIONS(45),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(47),
    [anon_sym_compress_DASHlevel] = ACTIONS(49),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(51),
    [anon_sym_no_DASHcompress] = ACTIONS(53),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(55),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(57),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(59),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(61),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(63),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(65),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(67),
    [anon_sym_trusted_DASHkey] = ACTIONS(69),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(71),
    [anon_sym_trust_DASHmodel] = ACTIONS(73),
    [anon_sym_always_DASHtrust] = ACTIONS(75),
    [anon_sym_assert_DASHsigner] = ACTIONS(77),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(79),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(81),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(83),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(85),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(87),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(89),
    [anon_sym_keyid_DASHformat] = ACTIONS(91),
    [anon_sym_keyserver] = ACTIONS(93),
    [anon_sym_completes_DASHneeded] = ACTIONS(95),
    [anon_sym_marginals_DASHneeded] = ACTIONS(97),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(99),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(101),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(103),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(105),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(107),
    [anon_sym_agent_DASHprogram] = ACTIONS(109),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(111),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(113),
    [anon_sym_no_DASHautostart] = ACTIONS(115),
    [anon_sym_lock_DASHonce] = ACTIONS(117),
    [anon_sym_lock_DASHmultiple] = ACTIONS(119),
    [anon_sym_lock_DASHnever] = ACTIONS(121),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(123),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(125),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(127),
    [anon_sym_no_DASHgreeting] = ACTIONS(129),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(131),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(133),
    [anon_sym_require_DASHsecmem] = ACTIONS(135),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(137),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(139),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(141),
    [anon_sym_expert] = ACTIONS(143),
    [anon_sym_no_DASHexpert] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [sym__space] = ACTIONS(149),
  },
  [2] = {
    [sym_default_key] = STATE(78),
    [sym_default_recipient] = STATE(78),
    [sym_default_recipient_self] = STATE(78),
    [sym_no_default_recipient] = STATE(78),
    [sym_verbose] = STATE(78),
    [sym_no_tty] = STATE(78),
    [sym_list_options] = STATE(78),
    [sym_verify_options] = STATE(78),
    [sym_enable_large_rsa] = STATE(78),
    [sym_disable_large_rsa] = STATE(78),
    [sym_enable_dsa2] = STATE(78),
    [sym_disable_dsa2] = STATE(78),
    [sym_photo_viewer] = STATE(78),
    [sym_exec_path] = STATE(78),
    [sym_keyring] = STATE(78),
    [sym_primary_keyring] = STATE(78),
    [sym_trustdb_name] = STATE(78),
    [sym_display_charset] = STATE(78),
    [sym_utf8_strings] = STATE(78),
    [sym_no_utf8_strings] = STATE(78),
    [sym_compress_level] = STATE(78),
    [sym_bzip2_compress_level] = STATE(78),
    [sym_no_compress] = STATE(78),
    [sym_bzip2_decompress_lowmem] = STATE(78),
    [sym_mangle_dos_filenames] = STATE(78),
    [sym_no_mangle_dos_filenames] = STATE(78),
    [sym_ask_cert_level] = STATE(78),
    [sym_no_ask_cert_level] = STATE(78),
    [sym_default_cert_level] = STATE(78),
    [sym_min_cert_level] = STATE(78),
    [sym_trusted_key] = STATE(78),
    [sym_add_desig_revoker] = STATE(78),
    [sym_trust_model] = STATE(78),
    [sym_always_trust] = STATE(78),
    [sym_assert_signer] = STATE(78),
    [sym_auto_key_locate] = STATE(78),
    [sym_no_auto_key_locate] = STATE(78),
    [sym_auto_key_import] = STATE(78),
    [sym_no_auto_key_import] = STATE(78),
    [sym_auto_key_retrieve] = STATE(78),
    [sym_no_auto_key_retrieve] = STATE(78),
    [sym_keyid_format] = STATE(78),
    [sym_keyserver] = STATE(78),
    [sym_completes_needed] = STATE(78),
    [sym_marginals_needed] = STATE(78),
    [sym_tofu_default_policy] = STATE(78),
    [sym_max_cert_depth] = STATE(78),
    [sym_no_sig_cache] = STATE(78),
    [sym_auto_check_trustdb] = STATE(78),
    [sym_no_auto_check_trustdb] = STATE(78),
    [sym_agent_program] = STATE(78),
    [sym_dirmngr_program] = STATE(78),
    [sym_disable_dirmngr] = STATE(78),
    [sym_no_autostart] = STATE(78),
    [sym_lock_once] = STATE(78),
    [sym_lock_multiple] = STATE(78),
    [sym_lock_never] = STATE(78),
    [sym_exit_on_status_write_error] = STATE(78),
    [sym_limit_card_insert_tries] = STATE(78),
    [sym_no_random_seed_file] = STATE(78),
    [sym_no_greeting] = STATE(78),
    [sym_no_secmem_warning] = STATE(78),
    [sym_no_permission_warning] = STATE(78),
    [sym_require_secmem] = STATE(78),
    [sym_no_require_secmem] = STATE(78),
    [sym_require_cross_verification] = STATE(78),
    [sym_no_require_cross_verification] = STATE(78),
    [sym_expert] = STATE(78),
    [sym_no_expert] = STATE(78),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_config_token1] = ACTIONS(153),
    [anon_sym_default_DASHkey] = ACTIONS(9),
    [anon_sym_default_DASHrecipient] = ACTIONS(11),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(13),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(15),
    [anon_sym_verbose] = ACTIONS(17),
    [anon_sym_no_DASHtty] = ACTIONS(19),
    [anon_sym_list_DASHoptions] = ACTIONS(21),
    [anon_sym_verify_DASHoptions] = ACTIONS(23),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(25),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(27),
    [anon_sym_enable_DASHdsa2] = ACTIONS(29),
    [anon_sym_disable_DASHdsa2] = ACTIONS(31),
    [anon_sym_photo_DASHviewer] = ACTIONS(33),
    [anon_sym_exec_DASHpath] = ACTIONS(35),
    [anon_sym_keyring] = ACTIONS(37),
    [anon_sym_primary_DASHkeyring] = ACTIONS(39),
    [anon_sym_trustdb_DASHname] = ACTIONS(41),
    [anon_sym_display_DASHcharset] = ACTIONS(43),
    [anon_sym_utf8_DASHstrings] = ACTIONS(45),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(47),
    [anon_sym_compress_DASHlevel] = ACTIONS(49),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(51),
    [anon_sym_no_DASHcompress] = ACTIONS(53),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(55),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(57),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(59),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(61),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(63),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(65),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(67),
    [anon_sym_trusted_DASHkey] = ACTIONS(69),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(71),
    [anon_sym_trust_DASHmodel] = ACTIONS(73),
    [anon_sym_always_DASHtrust] = ACTIONS(75),
    [anon_sym_assert_DASHsigner] = ACTIONS(77),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(79),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(81),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(83),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(85),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(87),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(89),
    [anon_sym_keyid_DASHformat] = ACTIONS(91),
    [anon_sym_keyserver] = ACTIONS(93),
    [anon_sym_completes_DASHneeded] = ACTIONS(95),
    [anon_sym_marginals_DASHneeded] = ACTIONS(97),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(99),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(101),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(103),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(105),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(107),
    [anon_sym_agent_DASHprogram] = ACTIONS(109),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(111),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(113),
    [anon_sym_no_DASHautostart] = ACTIONS(115),
    [anon_sym_lock_DASHonce] = ACTIONS(117),
    [anon_sym_lock_DASHmultiple] = ACTIONS(119),
    [anon_sym_lock_DASHnever] = ACTIONS(121),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(123),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(125),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(127),
    [anon_sym_no_DASHgreeting] = ACTIONS(129),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(131),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(133),
    [anon_sym_require_DASHsecmem] = ACTIONS(135),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(137),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(139),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(141),
    [anon_sym_expert] = ACTIONS(143),
    [anon_sym_no_DASHexpert] = ACTIONS(145),
    [sym_comment] = ACTIONS(147),
    [sym__space] = ACTIONS(149),
  },
  [3] = {
    [sym_default_key] = STATE(78),
    [sym_default_recipient] = STATE(78),
    [sym_default_recipient_self] = STATE(78),
    [sym_no_default_recipient] = STATE(78),
    [sym_verbose] = STATE(78),
    [sym_no_tty] = STATE(78),
    [sym_list_options] = STATE(78),
    [sym_verify_options] = STATE(78),
    [sym_enable_large_rsa] = STATE(78),
    [sym_disable_large_rsa] = STATE(78),
    [sym_enable_dsa2] = STATE(78),
    [sym_disable_dsa2] = STATE(78),
    [sym_photo_viewer] = STATE(78),
    [sym_exec_path] = STATE(78),
    [sym_keyring] = STATE(78),
    [sym_primary_keyring] = STATE(78),
    [sym_trustdb_name] = STATE(78),
    [sym_display_charset] = STATE(78),
    [sym_utf8_strings] = STATE(78),
    [sym_no_utf8_strings] = STATE(78),
    [sym_compress_level] = STATE(78),
    [sym_bzip2_compress_level] = STATE(78),
    [sym_no_compress] = STATE(78),
    [sym_bzip2_decompress_lowmem] = STATE(78),
    [sym_mangle_dos_filenames] = STATE(78),
    [sym_no_mangle_dos_filenames] = STATE(78),
    [sym_ask_cert_level] = STATE(78),
    [sym_no_ask_cert_level] = STATE(78),
    [sym_default_cert_level] = STATE(78),
    [sym_min_cert_level] = STATE(78),
    [sym_trusted_key] = STATE(78),
    [sym_add_desig_revoker] = STATE(78),
    [sym_trust_model] = STATE(78),
    [sym_always_trust] = STATE(78),
    [sym_assert_signer] = STATE(78),
    [sym_auto_key_locate] = STATE(78),
    [sym_no_auto_key_locate] = STATE(78),
    [sym_auto_key_import] = STATE(78),
    [sym_no_auto_key_import] = STATE(78),
    [sym_auto_key_retrieve] = STATE(78),
    [sym_no_auto_key_retrieve] = STATE(78),
    [sym_keyid_format] = STATE(78),
    [sym_keyserver] = STATE(78),
    [sym_completes_needed] = STATE(78),
    [sym_marginals_needed] = STATE(78),
    [sym_tofu_default_policy] = STATE(78),
    [sym_max_cert_depth] = STATE(78),
    [sym_no_sig_cache] = STATE(78),
    [sym_auto_check_trustdb] = STATE(78),
    [sym_no_auto_check_trustdb] = STATE(78),
    [sym_agent_program] = STATE(78),
    [sym_dirmngr_program] = STATE(78),
    [sym_disable_dirmngr] = STATE(78),
    [sym_no_autostart] = STATE(78),
    [sym_lock_once] = STATE(78),
    [sym_lock_multiple] = STATE(78),
    [sym_lock_never] = STATE(78),
    [sym_exit_on_status_write_error] = STATE(78),
    [sym_limit_card_insert_tries] = STATE(78),
    [sym_no_random_seed_file] = STATE(78),
    [sym_no_greeting] = STATE(78),
    [sym_no_secmem_warning] = STATE(78),
    [sym_no_permission_warning] = STATE(78),
    [sym_require_secmem] = STATE(78),
    [sym_no_require_secmem] = STATE(78),
    [sym_require_cross_verification] = STATE(78),
    [sym_no_require_cross_verification] = STATE(78),
    [sym_expert] = STATE(78),
    [sym_no_expert] = STATE(78),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_config_token1] = ACTIONS(157),
    [anon_sym_default_DASHkey] = ACTIONS(160),
    [anon_sym_default_DASHrecipient] = ACTIONS(163),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(166),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(169),
    [anon_sym_verbose] = ACTIONS(172),
    [anon_sym_no_DASHtty] = ACTIONS(175),
    [anon_sym_list_DASHoptions] = ACTIONS(178),
    [anon_sym_verify_DASHoptions] = ACTIONS(181),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(184),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(187),
    [anon_sym_enable_DASHdsa2] = ACTIONS(190),
    [anon_sym_disable_DASHdsa2] = ACTIONS(193),
    [anon_sym_photo_DASHviewer] = ACTIONS(196),
    [anon_sym_exec_DASHpath] = ACTIONS(199),
    [anon_sym_keyring] = ACTIONS(202),
    [anon_sym_primary_DASHkeyring] = ACTIONS(205),
    [anon_sym_trustdb_DASHname] = ACTIONS(208),
    [anon_sym_display_DASHcharset] = ACTIONS(211),
    [anon_sym_utf8_DASHstrings] = ACTIONS(214),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(217),
    [anon_sym_compress_DASHlevel] = ACTIONS(220),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(223),
    [anon_sym_no_DASHcompress] = ACTIONS(226),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(229),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(232),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(235),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(238),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(241),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(244),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(247),
    [anon_sym_trusted_DASHkey] = ACTIONS(250),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(253),
    [anon_sym_trust_DASHmodel] = ACTIONS(256),
    [anon_sym_always_DASHtrust] = ACTIONS(259),
    [anon_sym_assert_DASHsigner] = ACTIONS(262),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(265),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(268),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(271),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(274),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(277),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(280),
    [anon_sym_keyid_DASHformat] = ACTIONS(283),
    [anon_sym_keyserver] = ACTIONS(286),
    [anon_sym_completes_DASHneeded] = ACTIONS(289),
    [anon_sym_marginals_DASHneeded] = ACTIONS(292),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(295),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(298),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(301),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(304),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(307),
    [anon_sym_agent_DASHprogram] = ACTIONS(310),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(313),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(316),
    [anon_sym_no_DASHautostart] = ACTIONS(319),
    [anon_sym_lock_DASHonce] = ACTIONS(322),
    [anon_sym_lock_DASHmultiple] = ACTIONS(325),
    [anon_sym_lock_DASHnever] = ACTIONS(328),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(331),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(334),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(337),
    [anon_sym_no_DASHgreeting] = ACTIONS(340),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(343),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(346),
    [anon_sym_require_DASHsecmem] = ACTIONS(349),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(352),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(355),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(358),
    [anon_sym_expert] = ACTIONS(361),
    [anon_sym_no_DASHexpert] = ACTIONS(364),
    [sym_comment] = ACTIONS(367),
    [sym__space] = ACTIONS(149),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_config_token1] = ACTIONS(155),
    [anon_sym_default_DASHkey] = ACTIONS(155),
    [anon_sym_default_DASHrecipient] = ACTIONS(370),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(155),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(155),
    [anon_sym_verbose] = ACTIONS(155),
    [anon_sym_no_DASHtty] = ACTIONS(155),
    [anon_sym_list_DASHoptions] = ACTIONS(155),
    [anon_sym_verify_DASHoptions] = ACTIONS(155),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(155),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(155),
    [anon_sym_enable_DASHdsa2] = ACTIONS(155),
    [anon_sym_disable_DASHdsa2] = ACTIONS(155),
    [anon_sym_photo_DASHviewer] = ACTIONS(155),
    [anon_sym_exec_DASHpath] = ACTIONS(155),
    [anon_sym_keyring] = ACTIONS(155),
    [anon_sym_primary_DASHkeyring] = ACTIONS(155),
    [anon_sym_trustdb_DASHname] = ACTIONS(155),
    [anon_sym_display_DASHcharset] = ACTIONS(155),
    [anon_sym_utf8_DASHstrings] = ACTIONS(155),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(155),
    [anon_sym_compress_DASHlevel] = ACTIONS(155),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(155),
    [anon_sym_no_DASHcompress] = ACTIONS(155),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(155),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(155),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(155),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(155),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(155),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(155),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(155),
    [anon_sym_trusted_DASHkey] = ACTIONS(155),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(155),
    [anon_sym_trust_DASHmodel] = ACTIONS(155),
    [anon_sym_always_DASHtrust] = ACTIONS(155),
    [anon_sym_assert_DASHsigner] = ACTIONS(155),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(155),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(155),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(155),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(155),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(155),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(155),
    [anon_sym_keyid_DASHformat] = ACTIONS(155),
    [anon_sym_keyserver] = ACTIONS(155),
    [anon_sym_completes_DASHneeded] = ACTIONS(155),
    [anon_sym_marginals_DASHneeded] = ACTIONS(155),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(155),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(155),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(155),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(155),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(155),
    [anon_sym_agent_DASHprogram] = ACTIONS(155),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(155),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(155),
    [anon_sym_no_DASHautostart] = ACTIONS(155),
    [anon_sym_lock_DASHonce] = ACTIONS(155),
    [anon_sym_lock_DASHmultiple] = ACTIONS(155),
    [anon_sym_lock_DASHnever] = ACTIONS(155),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(155),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(155),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(155),
    [anon_sym_no_DASHgreeting] = ACTIONS(155),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(155),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(155),
    [anon_sym_require_DASHsecmem] = ACTIONS(155),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(155),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(155),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(155),
    [anon_sym_expert] = ACTIONS(155),
    [anon_sym_no_DASHexpert] = ACTIONS(155),
    [sym_comment] = ACTIONS(155),
    [sym__space] = ACTIONS(149),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(372), 1,
      aux_sym__command_token1,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      sym_format,
    STATE(25), 1,
      aux_sym__command_repeat1,
    STATE(113), 1,
      sym__command,
  [22] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(384), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [39] = 6,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(386), 1,
      aux_sym_config_token1,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      sym__mechanism,
    ACTIONS(394), 1,
      sym_url,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [58] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(400), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      aux_sym__command_token3,
    STATE(8), 1,
      aux_sym__command_repeat3,
    ACTIONS(397), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [75] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    ACTIONS(407), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(410), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [92] = 6,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(413), 1,
      aux_sym_config_token1,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      sym__mechanism,
    ACTIONS(419), 1,
      sym_url,
    STATE(12), 1,
      aux_sym_auto_key_locate_repeat1,
  [111] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(380), 1,
      anon_sym_SQUOTE,
    ACTIONS(423), 1,
      aux_sym__command_token3,
    STATE(8), 1,
      aux_sym__command_repeat3,
    ACTIONS(421), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [128] = 6,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      sym__mechanism,
    ACTIONS(419), 1,
      sym_url,
    ACTIONS(425), 1,
      aux_sym_config_token1,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [147] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym__command_token2,
    ACTIONS(432), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [163] = 3,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(437), 1,
      sym__mechanism,
    ACTIONS(435), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [175] = 3,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(441), 1,
      sym__mechanism,
    ACTIONS(439), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [187] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(443), 1,
      aux_sym_config_token1,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [203] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(451), 1,
      aux_sym_config_token1,
    ACTIONS(453), 1,
      aux_sym__command_token1,
    ACTIONS(456), 1,
      sym_format,
    STATE(17), 1,
      aux_sym__command_repeat1,
  [219] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(459), 1,
      aux_sym_config_token1,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [235] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(115), 1,
      sym_string,
  [251] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(471), 1,
      aux_sym_config_token1,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      sym__list_parameter,
    STATE(24), 1,
      aux_sym_list_options_repeat1,
  [267] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(118), 1,
      sym_string,
  [283] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(477), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(479), 1,
      anon_sym_SQUOTE,
    ACTIONS(481), 1,
      aux_sym__command_token3,
    STATE(31), 1,
      aux_sym_string_repeat2,
  [299] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    ACTIONS(483), 1,
      aux_sym__command_token2,
    ACTIONS(485), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [315] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(487), 1,
      aux_sym_config_token1,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      sym__list_parameter,
    STATE(24), 1,
      aux_sym_list_options_repeat1,
  [331] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(495), 1,
      aux_sym_config_token1,
    ACTIONS(497), 1,
      aux_sym__command_token1,
    ACTIONS(499), 1,
      sym_format,
    STATE(17), 1,
      aux_sym__command_repeat1,
  [347] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(503), 1,
      aux_sym__command_token3,
    STATE(11), 1,
      aux_sym__command_repeat3,
    ACTIONS(501), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [361] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(505), 1,
      aux_sym__command_token2,
    STATE(6), 1,
      aux_sym__command_repeat2,
    ACTIONS(507), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [375] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      sym__verify_parameter,
    ACTIONS(509), 1,
      aux_sym_config_token1,
    STATE(18), 1,
      aux_sym_verify_options_repeat1,
  [391] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      sym__list_parameter,
    ACTIONS(511), 1,
      aux_sym_config_token1,
    STATE(20), 1,
      aux_sym_list_options_repeat1,
  [407] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(116), 1,
      sym_string,
  [423] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(513), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
    ACTIONS(518), 1,
      aux_sym__command_token3,
    STATE(31), 1,
      aux_sym_string_repeat2,
  [439] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(137), 1,
      sym_string,
  [455] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(136), 1,
      sym_string,
  [471] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(128), 1,
      sym_string,
  [487] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(108), 1,
      sym_string,
  [503] = 5,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    STATE(117), 1,
      sym_string,
  [519] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(521), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(523), 1,
      aux_sym__command_token3,
    STATE(22), 1,
      aux_sym_string_repeat2,
  [532] = 3,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(525), 1,
      anon_sym_sensitive_COLON,
    ACTIONS(527), 2,
      anon_sym_clear,
      sym_key,
  [543] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(529), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [552] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(531), 1,
      aux_sym__command_token2,
    ACTIONS(533), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [565] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(535), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [574] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(537), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [583] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(539), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [592] = 3,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(541), 1,
      sym__mechanism,
    ACTIONS(543), 1,
      sym_url,
  [602] = 3,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(545), 1,
      sym__mechanism,
    ACTIONS(547), 1,
      sym_url,
  [612] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(549), 1,
      aux_sym_config_token1,
  [619] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(551), 1,
      aux_sym_config_token1,
  [626] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(553), 1,
      aux_sym_config_token1,
  [633] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(555), 1,
      aux_sym_config_token1,
  [640] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(557), 1,
      aux_sym_config_token1,
  [647] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(559), 1,
      aux_sym_config_token1,
  [654] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(561), 1,
      aux_sym_config_token1,
  [661] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(563), 1,
      aux_sym_config_token1,
  [668] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(565), 1,
      aux_sym_config_token1,
  [675] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(567), 1,
      aux_sym_config_token1,
  [682] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(569), 1,
      aux_sym_config_token1,
  [689] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(571), 1,
      aux_sym_config_token1,
  [696] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(573), 1,
      aux_sym_config_token1,
  [703] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(575), 1,
      aux_sym_config_token1,
  [710] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(577), 1,
      aux_sym_config_token1,
  [717] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(579), 1,
      aux_sym_config_token1,
  [724] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(581), 1,
      aux_sym_config_token1,
  [731] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(583), 1,
      aux_sym_config_token1,
  [738] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(585), 1,
      aux_sym_config_token1,
  [745] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym_config_token1,
  [752] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(589), 1,
      aux_sym_config_token1,
  [759] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(591), 1,
      aux_sym_config_token1,
  [766] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(593), 1,
      aux_sym_config_token1,
  [773] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(595), 1,
      aux_sym_config_token1,
  [780] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(597), 1,
      aux_sym_config_token1,
  [787] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(599), 1,
      aux_sym_config_token1,
  [794] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(601), 1,
      aux_sym_config_token1,
  [801] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(603), 1,
      aux_sym_config_token1,
  [808] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(605), 1,
      aux_sym_config_token1,
  [815] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(607), 1,
      aux_sym_config_token1,
  [822] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(609), 1,
      aux_sym_config_token1,
  [829] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(611), 1,
      aux_sym_config_token1,
  [836] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(613), 1,
      aux_sym_config_token1,
  [843] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
  [850] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(617), 1,
      sym_key,
  [857] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(619), 1,
      sym__list_parameter,
  [864] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(621), 1,
      sym__verify_parameter,
  [871] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(623), 1,
      sym__charset,
  [878] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(625), 1,
      aux_sym_compress_level_token1,
  [885] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(627), 1,
      aux_sym_compress_level_token1,
  [892] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(629), 1,
      aux_sym_default_cert_level_token1,
  [899] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(631), 1,
      aux_sym_default_cert_level_token1,
  [906] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(633), 1,
      sym_key,
  [913] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(635), 1,
      aux_sym_config_token1,
  [920] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(637), 1,
      sym__model,
  [927] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(639), 1,
      aux_sym_config_token1,
  [934] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(641), 1,
      aux_sym_config_token1,
  [941] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(643), 1,
      sym__keyid_format,
  [948] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(645), 1,
      sym_url,
  [955] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(647), 1,
      sym_number,
  [962] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(649), 1,
      sym_number,
  [969] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(651), 1,
      sym__tofu_policy,
  [976] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(653), 1,
      sym_number,
  [983] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(655), 1,
      aux_sym_config_token1,
  [990] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(657), 1,
      aux_sym_config_token1,
  [997] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(659), 1,
      sym_number,
  [1004] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(661), 1,
      sym__verify_parameter,
  [1011] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(663), 1,
      aux_sym_config_token1,
  [1018] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(665), 1,
      aux_sym_config_token1,
  [1025] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(667), 1,
      sym__list_parameter,
  [1032] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(669), 1,
      aux_sym_config_token1,
  [1039] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(671), 1,
      aux_sym_config_token1,
  [1046] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(673), 1,
      aux_sym_config_token1,
  [1053] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(675), 1,
      aux_sym_config_token1,
  [1060] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(677), 1,
      aux_sym_config_token1,
  [1067] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(679), 1,
      aux_sym_config_token1,
  [1074] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(681), 1,
      aux_sym_config_token1,
  [1081] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(683), 1,
      aux_sym_config_token1,
  [1088] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(685), 1,
      aux_sym_config_token1,
  [1095] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(687), 1,
      aux_sym_config_token1,
  [1102] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(689), 1,
      aux_sym_config_token1,
  [1109] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(691), 1,
      aux_sym_config_token1,
  [1116] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(693), 1,
      aux_sym_config_token1,
  [1123] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(695), 1,
      aux_sym_config_token1,
  [1130] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(697), 1,
      aux_sym_config_token1,
  [1137] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(699), 1,
      aux_sym_config_token1,
  [1144] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(701), 1,
      aux_sym_config_token1,
  [1151] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(703), 1,
      aux_sym_config_token1,
  [1158] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(705), 1,
      aux_sym_config_token1,
  [1165] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(707), 1,
      sym_key,
  [1172] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(709), 1,
      aux_sym_config_token1,
  [1179] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(711), 1,
      aux_sym_config_token1,
  [1186] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(713), 1,
      aux_sym_config_token1,
  [1193] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(715), 1,
      aux_sym_config_token1,
  [1200] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(717), 1,
      aux_sym_config_token1,
  [1207] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(719), 1,
      aux_sym_config_token1,
  [1214] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(721), 1,
      aux_sym_config_token1,
  [1221] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(723), 1,
      aux_sym_config_token1,
  [1228] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(725), 1,
      aux_sym_config_token1,
  [1235] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(727), 1,
      aux_sym_config_token1,
  [1242] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(729), 1,
      aux_sym_config_token1,
  [1249] = 2,
    ACTIONS(149), 1,
      sym__space,
    ACTIONS(731), 1,
      aux_sym_config_token1,
  [1256] = 1,
    ACTIONS(733), 1,
      sym__space,
  [1260] = 1,
    ACTIONS(735), 1,
      sym__space,
  [1264] = 1,
    ACTIONS(737), 1,
      sym__space,
  [1268] = 1,
    ACTIONS(739), 1,
      sym__space,
  [1272] = 1,
    ACTIONS(741), 1,
      sym__space,
  [1276] = 1,
    ACTIONS(743), 1,
      sym__space,
  [1280] = 1,
    ACTIONS(745), 1,
      sym__space,
  [1284] = 1,
    ACTIONS(747), 1,
      sym__space,
  [1288] = 1,
    ACTIONS(749), 1,
      sym__space,
  [1292] = 1,
    ACTIONS(751), 1,
      sym__space,
  [1296] = 1,
    ACTIONS(753), 1,
      sym__space,
  [1300] = 1,
    ACTIONS(755), 1,
      sym__space,
  [1304] = 1,
    ACTIONS(757), 1,
      sym__space,
  [1308] = 1,
    ACTIONS(759), 1,
      sym__space,
  [1312] = 1,
    ACTIONS(761), 1,
      sym__space,
  [1316] = 1,
    ACTIONS(763), 1,
      sym__space,
  [1320] = 1,
    ACTIONS(765), 1,
      sym__space,
  [1324] = 1,
    ACTIONS(767), 1,
      sym__space,
  [1328] = 1,
    ACTIONS(769), 1,
      sym__space,
  [1332] = 1,
    ACTIONS(771), 1,
      sym__space,
  [1336] = 1,
    ACTIONS(773), 1,
      sym__space,
  [1340] = 1,
    ACTIONS(775), 1,
      sym__space,
  [1344] = 1,
    ACTIONS(777), 1,
      sym__space,
  [1348] = 1,
    ACTIONS(779), 1,
      sym__space,
  [1352] = 1,
    ACTIONS(781), 1,
      sym__space,
  [1356] = 1,
    ACTIONS(783), 1,
      sym__space,
  [1360] = 1,
    ACTIONS(785), 1,
      sym__space,
  [1364] = 1,
    ACTIONS(787), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 39,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 187,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 219,
  [SMALL_STATE(19)] = 235,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 315,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 347,
  [SMALL_STATE(27)] = 361,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 407,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 439,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 503,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 532,
  [SMALL_STATE(39)] = 543,
  [SMALL_STATE(40)] = 552,
  [SMALL_STATE(41)] = 565,
  [SMALL_STATE(42)] = 574,
  [SMALL_STATE(43)] = 583,
  [SMALL_STATE(44)] = 592,
  [SMALL_STATE(45)] = 602,
  [SMALL_STATE(46)] = 612,
  [SMALL_STATE(47)] = 619,
  [SMALL_STATE(48)] = 626,
  [SMALL_STATE(49)] = 633,
  [SMALL_STATE(50)] = 640,
  [SMALL_STATE(51)] = 647,
  [SMALL_STATE(52)] = 654,
  [SMALL_STATE(53)] = 661,
  [SMALL_STATE(54)] = 668,
  [SMALL_STATE(55)] = 675,
  [SMALL_STATE(56)] = 682,
  [SMALL_STATE(57)] = 689,
  [SMALL_STATE(58)] = 696,
  [SMALL_STATE(59)] = 703,
  [SMALL_STATE(60)] = 710,
  [SMALL_STATE(61)] = 717,
  [SMALL_STATE(62)] = 724,
  [SMALL_STATE(63)] = 731,
  [SMALL_STATE(64)] = 738,
  [SMALL_STATE(65)] = 745,
  [SMALL_STATE(66)] = 752,
  [SMALL_STATE(67)] = 759,
  [SMALL_STATE(68)] = 766,
  [SMALL_STATE(69)] = 773,
  [SMALL_STATE(70)] = 780,
  [SMALL_STATE(71)] = 787,
  [SMALL_STATE(72)] = 794,
  [SMALL_STATE(73)] = 801,
  [SMALL_STATE(74)] = 808,
  [SMALL_STATE(75)] = 815,
  [SMALL_STATE(76)] = 822,
  [SMALL_STATE(77)] = 829,
  [SMALL_STATE(78)] = 836,
  [SMALL_STATE(79)] = 843,
  [SMALL_STATE(80)] = 850,
  [SMALL_STATE(81)] = 857,
  [SMALL_STATE(82)] = 864,
  [SMALL_STATE(83)] = 871,
  [SMALL_STATE(84)] = 878,
  [SMALL_STATE(85)] = 885,
  [SMALL_STATE(86)] = 892,
  [SMALL_STATE(87)] = 899,
  [SMALL_STATE(88)] = 906,
  [SMALL_STATE(89)] = 913,
  [SMALL_STATE(90)] = 920,
  [SMALL_STATE(91)] = 927,
  [SMALL_STATE(92)] = 934,
  [SMALL_STATE(93)] = 941,
  [SMALL_STATE(94)] = 948,
  [SMALL_STATE(95)] = 955,
  [SMALL_STATE(96)] = 962,
  [SMALL_STATE(97)] = 969,
  [SMALL_STATE(98)] = 976,
  [SMALL_STATE(99)] = 983,
  [SMALL_STATE(100)] = 990,
  [SMALL_STATE(101)] = 997,
  [SMALL_STATE(102)] = 1004,
  [SMALL_STATE(103)] = 1011,
  [SMALL_STATE(104)] = 1018,
  [SMALL_STATE(105)] = 1025,
  [SMALL_STATE(106)] = 1032,
  [SMALL_STATE(107)] = 1039,
  [SMALL_STATE(108)] = 1046,
  [SMALL_STATE(109)] = 1053,
  [SMALL_STATE(110)] = 1060,
  [SMALL_STATE(111)] = 1067,
  [SMALL_STATE(112)] = 1074,
  [SMALL_STATE(113)] = 1081,
  [SMALL_STATE(114)] = 1088,
  [SMALL_STATE(115)] = 1095,
  [SMALL_STATE(116)] = 1102,
  [SMALL_STATE(117)] = 1109,
  [SMALL_STATE(118)] = 1116,
  [SMALL_STATE(119)] = 1123,
  [SMALL_STATE(120)] = 1130,
  [SMALL_STATE(121)] = 1137,
  [SMALL_STATE(122)] = 1144,
  [SMALL_STATE(123)] = 1151,
  [SMALL_STATE(124)] = 1158,
  [SMALL_STATE(125)] = 1165,
  [SMALL_STATE(126)] = 1172,
  [SMALL_STATE(127)] = 1179,
  [SMALL_STATE(128)] = 1186,
  [SMALL_STATE(129)] = 1193,
  [SMALL_STATE(130)] = 1200,
  [SMALL_STATE(131)] = 1207,
  [SMALL_STATE(132)] = 1214,
  [SMALL_STATE(133)] = 1221,
  [SMALL_STATE(134)] = 1228,
  [SMALL_STATE(135)] = 1235,
  [SMALL_STATE(136)] = 1242,
  [SMALL_STATE(137)] = 1249,
  [SMALL_STATE(138)] = 1256,
  [SMALL_STATE(139)] = 1260,
  [SMALL_STATE(140)] = 1264,
  [SMALL_STATE(141)] = 1268,
  [SMALL_STATE(142)] = 1272,
  [SMALL_STATE(143)] = 1276,
  [SMALL_STATE(144)] = 1280,
  [SMALL_STATE(145)] = 1284,
  [SMALL_STATE(146)] = 1288,
  [SMALL_STATE(147)] = 1292,
  [SMALL_STATE(148)] = 1296,
  [SMALL_STATE(149)] = 1300,
  [SMALL_STATE(150)] = 1304,
  [SMALL_STATE(151)] = 1308,
  [SMALL_STATE(152)] = 1312,
  [SMALL_STATE(153)] = 1316,
  [SMALL_STATE(154)] = 1320,
  [SMALL_STATE(155)] = 1324,
  [SMALL_STATE(156)] = 1328,
  [SMALL_STATE(157)] = 1332,
  [SMALL_STATE(158)] = 1336,
  [SMALL_STATE(159)] = 1340,
  [SMALL_STATE(160)] = 1344,
  [SMALL_STATE(161)] = 1348,
  [SMALL_STATE(162)] = 1352,
  [SMALL_STATE(163)] = 1356,
  [SMALL_STATE(164)] = 1360,
  [SMALL_STATE(165)] = 1364,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(153),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(165),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(50),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(51),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(52),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(54),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(159),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(158),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(55),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(59),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(60),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(89),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(138),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(161),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(149),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(148),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(147),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(146),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(103),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(152),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(140),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(106),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(129),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(114),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(112),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(111),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(110),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(142),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(150),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(143),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(144),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(100),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(145),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(151),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(91),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(134),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(48),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(46),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(49),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(163),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(162),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(139),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(160),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(157),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(56),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(57),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(58),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(156),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(155),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(61),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(62),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(63),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(64),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(65),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(66),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(154),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(68),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(69),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(70),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(71),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(72),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(73),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(74),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(75),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(76),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(77),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(78),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15), SHIFT_REPEAT(45),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15), SHIFT_REPEAT(15),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15), SHIFT_REPEAT(15),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(8),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(9),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(9),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 11),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 14),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 14),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 10),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 10),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(102),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(43),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(17),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(17),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(105),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(42),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(31),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(31),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 13),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 13),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 9),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 12),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [615] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gpg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
