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
#define STATE_COUNT 180
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 198
#define ALIAS_COUNT 0
#define TOKEN_COUNT 107
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_gnupg = 90,
  anon_sym_openpgp = 91,
  anon_sym_rfc4880 = 92,
  anon_sym_rfc4880bis = 93,
  anon_sym_rfc2440 = 94,
  anon_sym_pgp7 = 95,
  anon_sym_pgp8 = 96,
  anon_sym_compliance = 97,
  sym__compliance = 98,
  anon_sym_min_DASHrsa_DASHlength = 99,
  anon_sym_require_DASHcompliance = 100,
  sym_key = 101,
  sym_url = 102,
  sym_number = 103,
  aux_sym_string_token1 = 104,
  sym_comment = 105,
  sym__space = 106,
  sym_config = 107,
  sym_default_key = 108,
  sym_default_recipient = 109,
  sym_default_recipient_self = 110,
  sym_no_default_recipient = 111,
  sym_verbose = 112,
  sym_no_tty = 113,
  sym_list_options = 114,
  sym_verify_options = 115,
  sym_enable_large_rsa = 116,
  sym_disable_large_rsa = 117,
  sym_enable_dsa2 = 118,
  sym_disable_dsa2 = 119,
  sym_photo_viewer = 120,
  sym__command = 121,
  sym_exec_path = 122,
  sym_keyring = 123,
  sym_primary_keyring = 124,
  sym_trustdb_name = 125,
  sym_display_charset = 126,
  sym_utf8_strings = 127,
  sym_no_utf8_strings = 128,
  sym_compress_level = 129,
  sym_bzip2_compress_level = 130,
  sym_no_compress = 131,
  sym_bzip2_decompress_lowmem = 132,
  sym_mangle_dos_filenames = 133,
  sym_no_mangle_dos_filenames = 134,
  sym_ask_cert_level = 135,
  sym_no_ask_cert_level = 136,
  sym_default_cert_level = 137,
  sym_min_cert_level = 138,
  sym_trusted_key = 139,
  sym_add_desig_revoker = 140,
  sym_trust_model = 141,
  sym_always_trust = 142,
  sym_assert_signer = 143,
  sym_auto_key_locate = 144,
  sym_no_auto_key_locate = 145,
  sym_auto_key_import = 146,
  sym_no_auto_key_import = 147,
  sym_auto_key_retrieve = 148,
  sym_no_auto_key_retrieve = 149,
  sym_keyid_format = 150,
  sym_keyserver = 151,
  sym_completes_needed = 152,
  sym_marginals_needed = 153,
  sym_tofu_default_policy = 154,
  sym_max_cert_depth = 155,
  sym_no_sig_cache = 156,
  sym_auto_check_trustdb = 157,
  sym_no_auto_check_trustdb = 158,
  sym_agent_program = 159,
  sym_dirmngr_program = 160,
  sym_disable_dirmngr = 161,
  sym_no_autostart = 162,
  sym_lock_once = 163,
  sym_lock_multiple = 164,
  sym_lock_never = 165,
  sym_exit_on_status_write_error = 166,
  sym_limit_card_insert_tries = 167,
  sym_no_random_seed_file = 168,
  sym_no_greeting = 169,
  sym_no_secmem_warning = 170,
  sym_no_permission_warning = 171,
  sym_require_secmem = 172,
  sym_no_require_secmem = 173,
  sym_require_cross_verification = 174,
  sym_no_require_cross_verification = 175,
  sym_expert = 176,
  sym_no_expert = 177,
  sym_gnupg = 178,
  sym_openpgp = 179,
  sym_rfc4880 = 180,
  sym_rfc4880bis = 181,
  sym_rfc2440 = 182,
  sym_pgp7 = 183,
  sym_pgp8 = 184,
  sym_compliance = 185,
  sym_min_rsa_length = 186,
  sym_require_compliance = 187,
  sym_string = 188,
  aux_sym_config_repeat1 = 189,
  aux_sym_list_options_repeat1 = 190,
  aux_sym_verify_options_repeat1 = 191,
  aux_sym__command_repeat1 = 192,
  aux_sym__command_repeat2 = 193,
  aux_sym__command_repeat3 = 194,
  aux_sym_auto_key_locate_repeat1 = 195,
  aux_sym_string_repeat1 = 196,
  aux_sym_string_repeat2 = 197,
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
  [anon_sym_gnupg] = "option",
  [anon_sym_openpgp] = "option",
  [anon_sym_rfc4880] = "option",
  [anon_sym_rfc4880bis] = "option",
  [anon_sym_rfc2440] = "option",
  [anon_sym_pgp7] = "option",
  [anon_sym_pgp8] = "option",
  [anon_sym_compliance] = "option",
  [sym__compliance] = "_compliance",
  [anon_sym_min_DASHrsa_DASHlength] = "option",
  [anon_sym_require_DASHcompliance] = "option",
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
  [sym_gnupg] = "gnupg",
  [sym_openpgp] = "openpgp",
  [sym_rfc4880] = "rfc4880",
  [sym_rfc4880bis] = "rfc4880bis",
  [sym_rfc2440] = "rfc2440",
  [sym_pgp7] = "pgp7",
  [sym_pgp8] = "pgp8",
  [sym_compliance] = "compliance",
  [sym_min_rsa_length] = "min_rsa_length",
  [sym_require_compliance] = "require_compliance",
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
  [anon_sym_gnupg] = anon_sym_default_DASHkey,
  [anon_sym_openpgp] = anon_sym_default_DASHkey,
  [anon_sym_rfc4880] = anon_sym_default_DASHkey,
  [anon_sym_rfc4880bis] = anon_sym_default_DASHkey,
  [anon_sym_rfc2440] = anon_sym_default_DASHkey,
  [anon_sym_pgp7] = anon_sym_default_DASHkey,
  [anon_sym_pgp8] = anon_sym_default_DASHkey,
  [anon_sym_compliance] = anon_sym_default_DASHkey,
  [sym__compliance] = sym__compliance,
  [anon_sym_min_DASHrsa_DASHlength] = anon_sym_default_DASHkey,
  [anon_sym_require_DASHcompliance] = anon_sym_default_DASHkey,
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
  [sym_gnupg] = sym_gnupg,
  [sym_openpgp] = sym_openpgp,
  [sym_rfc4880] = sym_rfc4880,
  [sym_rfc4880bis] = sym_rfc4880bis,
  [sym_rfc2440] = sym_rfc2440,
  [sym_pgp7] = sym_pgp7,
  [sym_pgp8] = sym_pgp8,
  [sym_compliance] = sym_compliance,
  [sym_min_rsa_length] = sym_min_rsa_length,
  [sym_require_compliance] = sym_require_compliance,
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
  [anon_sym_gnupg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_openpgp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rfc4880] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rfc4880bis] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_rfc2440] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pgp7] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pgp8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_compliance] = {
    .visible = true,
    .named = true,
  },
  [sym__compliance] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_min_DASHrsa_DASHlength] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_require_DASHcompliance] = {
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
  [sym_gnupg] = {
    .visible = true,
    .named = true,
  },
  [sym_openpgp] = {
    .visible = true,
    .named = true,
  },
  [sym_rfc4880] = {
    .visible = true,
    .named = true,
  },
  [sym_rfc4880bis] = {
    .visible = true,
    .named = true,
  },
  [sym_rfc2440] = {
    .visible = true,
    .named = true,
  },
  [sym_pgp7] = {
    .visible = true,
    .named = true,
  },
  [sym_pgp8] = {
    .visible = true,
    .named = true,
  },
  [sym_compliance] = {
    .visible = true,
    .named = true,
  },
  [sym_min_rsa_length] = {
    .visible = true,
    .named = true,
  },
  [sym_require_compliance] = {
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
  field_mode = 5,
  field_model = 6,
  field_parameter = 7,
  field_policy = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_charset] = "charset",
  [field_content] = "content",
  [field_format] = "format",
  [field_mechanism] = "mechanism",
  [field_mode] = "mode",
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
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 2},
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
    {field_mode, 2},
  [9] =
    {field_parameter, 0},
  [10] =
    {field_mechanism, 0},
  [11] =
    {field_mechanism, 2},
    {field_mechanism, 3, .inherited = true},
  [13] =
    {field_content, 1},
  [14] =
    {field_parameter, 1},
  [15] =
    {field_mechanism, 1},
  [16] =
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
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
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
      if (eof) ADVANCE(1115);
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '%') ADVANCE(1134);
      if (lookahead == '\'') ADVANCE(1141);
      if (lookahead == ',') ADVANCE(1124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1133);
      if (lookahead != 0) ADVANCE(1133);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1116);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1134);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (lookahead != 0) ADVANCE(1133);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1124);
      if (lookahead == '0') ADVANCE(1262);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == 'c') ADVANCE(390);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'h') ADVANCE(556);
      if (lookahead == 'k') ADVANCE(375);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'n') ADVANCE(750);
      if (lookahead == 'p') ADVANCE(456);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == 't') ADVANCE(735);
      if (lookahead == 'w') ADVANCE(558);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '%') ADVANCE(1134);
      if (lookahead == '\'') ADVANCE(1141);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1133);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '%') ADVANCE(1139);
      if (lookahead == '\\') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0) ADVANCE(1137);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1135);
      if (lookahead == '\\') ADVANCE(1138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1137);
      if (lookahead != 0) ADVANCE(1137);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1136);
      if (lookahead == '\'') ADVANCE(1142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1264);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(1145);
      if (lookahead == '\'') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(1144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1143);
      if (lookahead != 0) ADVANCE(1143);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(1141);
      if (lookahead == '\\') ADVANCE(1144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1143);
      if (lookahead != 0) ADVANCE(1143);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(239);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(210);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(559);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(1113);
      if (lookahead == '.') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(244);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(518);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(899);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'g') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(795);
      if (lookahead == 'p') ADVANCE(458);
      if (lookahead == 'r') ADVANCE(436);
      if (lookahead == 'u') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1157);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(125);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(1042);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(224);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1065);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(234);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(560);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(1043);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(223);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(633);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(801);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(429);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(1046);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(435);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(771);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(1029);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(430);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(736);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(772);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(720);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(624);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(976);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(688);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(777);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(843);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(1068);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(278);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(902);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(904);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(1028);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(215);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(1030);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(670);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(931);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(1033);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(506);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(832);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(874);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(732);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(1058);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(612);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(613);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(235);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(1011);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(695);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(1004);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(933);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(1012);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(243);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(1061);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(756);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(1071);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(438);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(700);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == 's') ADVANCE(977);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(1062);
      END_STATE();
    case 103:
      if (lookahead == '/') ADVANCE(1113);
      END_STATE();
    case 104:
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == '0') ADVANCE(1219);
      END_STATE();
    case 106:
      if (lookahead == '0') ADVANCE(1217);
      END_STATE();
    case 107:
      if (lookahead == '0') ADVANCE(1223);
      END_STATE();
    case 108:
      if (lookahead == '0') ADVANCE(1224);
      END_STATE();
    case 109:
      if (lookahead == '1') ADVANCE(1153);
      if (lookahead == '2') ADVANCE(1152);
      END_STATE();
    case 110:
      if (lookahead == '1') ADVANCE(1157);
      END_STATE();
    case 111:
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '4') ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == '2') ADVANCE(1130);
      END_STATE();
    case 113:
      if (lookahead == '2') ADVANCE(1131);
      END_STATE();
    case 114:
      if (lookahead == '2') ADVANCE(16);
      END_STATE();
    case 115:
      if (lookahead == '2') ADVANCE(118);
      if (lookahead == '4') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == '4') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == '4') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == '4') ADVANCE(107);
      END_STATE();
    case 120:
      if (lookahead == '5') ADVANCE(131);
      END_STATE();
    case 121:
      if (lookahead == '7') ADVANCE(1220);
      if (lookahead == '8') ADVANCE(1221);
      END_STATE();
    case 122:
      if (lookahead == '8') ADVANCE(1152);
      END_STATE();
    case 123:
      if (lookahead == '8') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == '8') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == '8') ADVANCE(123);
      END_STATE();
    case 126:
      if (lookahead == '8') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == '8') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == '8') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == '8') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == '8') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == '9') ADVANCE(22);
      END_STATE();
    case 132:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 133:
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 134:
      if (lookahead == ':') ADVANCE(1170);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(656);
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(898);
      if (lookahead == 'c') ADVANCE(734);
      if (lookahead == 'd') ADVANCE(310);
      if (lookahead == 'e') ADVANCE(1075);
      if (lookahead == 'g') ADVANCE(816);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead == 's') ADVANCE(309);
      if (lookahead == 't') ADVANCE(960);
      if (lookahead == 'u') ADVANCE(962);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(1128);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(1129);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(1084);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(800);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(1093);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(615);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(1038);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(839);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(702);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(620);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(222);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(798);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(830);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(961);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(850);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(817);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(844);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(996);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(950);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(685);
      if (lookahead == 'i') ADVANCE(836);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(825);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(1031);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(986);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(879);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(687);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(988);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(690);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(1087);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(854);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(1003);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(609);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(1007);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1008);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(1009);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(581);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(1039);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(870);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(871);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(1193);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(1194);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(582);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(716);
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(710);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(775);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(563);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(599);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(604);
      END_STATE();
    case 205:
      if (lookahead == 'b') ADVANCE(606);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(1173);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(744);
      if (lookahead == 's') ADVANCE(395);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead == 'k') ADVANCE(378);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(481);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(634);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(1081);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(957);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(566);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(480);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(881);
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(505);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(1090);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(1092);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(753);
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(186);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(547);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(567);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(414);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'k') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'k') ADVANCE(413);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(1063);
      if (lookahead == 's') ADVANCE(554);
      if (lookahead == 'u') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(1188);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(1189);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(1178);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(1195);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(882);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(718);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(745);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(894);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(895);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(325);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(313);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(906);
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(370);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(510);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(411);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(758);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead == 'i') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(797);
      if (lookahead == 'f') ADVANCE(206);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(1186);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(1222);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(1177);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(1183);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(1226);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(1127);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(965);
      if (lookahead == 'p') ADVANCE(367);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(1074);
      if (lookahead == 's') ADVANCE(1021);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == 'h') ADVANCE(705);
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(689);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(468);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(1083);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(922);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(812);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(905);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(978);
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(804);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(891);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(892);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(683);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(953);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(808);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(846);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(969);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(1085);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(778);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(923);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(1094);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(915);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(834);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(1049);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(1050);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1054);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1056);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(861);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(930);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(860);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(873);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(1096);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(877);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(1017);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(1098);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(880);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 422:
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1110);
      END_STATE();
    case 423:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 424:
      if (lookahead == 'f') ADVANCE(1119);
      END_STATE();
    case 425:
      if (lookahead == 'f') ADVANCE(1027);
      END_STATE();
    case 426:
      if (lookahead == 'f') ADVANCE(1097);
      END_STATE();
    case 427:
      if (lookahead == 'f') ADVANCE(1019);
      END_STATE();
    case 428:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 429:
      if (lookahead == 'f') ADVANCE(722);
      END_STATE();
    case 430:
      if (lookahead == 'f') ADVANCE(540);
      END_STATE();
    case 431:
      if (lookahead == 'f') ADVANCE(525);
      END_STATE();
    case 432:
      if (lookahead == 'f') ADVANCE(527);
      END_STATE();
    case 433:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 434:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 435:
      if (lookahead == 'f') ADVANCE(781);
      END_STATE();
    case 436:
      if (lookahead == 'f') ADVANCE(233);
      END_STATE();
    case 437:
      if (lookahead == 'f') ADVANCE(190);
      END_STATE();
    case 438:
      if (lookahead == 'f') ADVANCE(549);
      END_STATE();
    case 439:
      if (lookahead == 'f') ADVANCE(552);
      END_STATE();
    case 440:
      if (lookahead == 'g') ADVANCE(1186);
      END_STATE();
    case 441:
      if (lookahead == 'g') ADVANCE(1215);
      END_STATE();
    case 442:
      if (lookahead == 'g') ADVANCE(1148);
      END_STATE();
    case 443:
      if (lookahead == 'g') ADVANCE(1125);
      END_STATE();
    case 444:
      if (lookahead == 'g') ADVANCE(1206);
      END_STATE();
    case 445:
      if (lookahead == 'g') ADVANCE(1149);
      END_STATE();
    case 446:
      if (lookahead == 'g') ADVANCE(1207);
      END_STATE();
    case 447:
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 448:
      if (lookahead == 'g') ADVANCE(1223);
      END_STATE();
    case 449:
      if (lookahead == 'g') ADVANCE(761);
      if (lookahead == 'h') ADVANCE(751);
      if (lookahead == 'r') ADVANCE(486);
      END_STATE();
    case 450:
      if (lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 451:
      if (lookahead == 'g') ADVANCE(882);
      END_STATE();
    case 452:
      if (lookahead == 'g') ADVANCE(764);
      END_STATE();
    case 453:
      if (lookahead == 'g') ADVANCE(692);
      END_STATE();
    case 454:
      if (lookahead == 'g') ADVANCE(886);
      END_STATE();
    case 455:
      if (lookahead == 'g') ADVANCE(888);
      END_STATE();
    case 456:
      if (lookahead == 'g') ADVANCE(765);
      END_STATE();
    case 457:
      if (lookahead == 'g') ADVANCE(820);
      END_STATE();
    case 458:
      if (lookahead == 'g') ADVANCE(767);
      END_STATE();
    case 459:
      if (lookahead == 'g') ADVANCE(768);
      END_STATE();
    case 460:
      if (lookahead == 'g') ADVANCE(821);
      END_STATE();
    case 461:
      if (lookahead == 'g') ADVANCE(964);
      END_STATE();
    case 462:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 463:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 464:
      if (lookahead == 'g') ADVANCE(807);
      END_STATE();
    case 465:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 466:
      if (lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 467:
      if (lookahead == 'g') ADVANCE(494);
      END_STATE();
    case 468:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 469:
      if (lookahead == 'g') ADVANCE(362);
      END_STATE();
    case 470:
      if (lookahead == 'g') ADVANCE(597);
      END_STATE();
    case 471:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 472:
      if (lookahead == 'g') ADVANCE(617);
      END_STATE();
    case 473:
      if (lookahead == 'h') ADVANCE(1147);
      END_STATE();
    case 474:
      if (lookahead == 'h') ADVANCE(1191);
      END_STATE();
    case 475:
      if (lookahead == 'h') ADVANCE(1225);
      END_STATE();
    case 476:
      if (lookahead == 'h') ADVANCE(739);
      END_STATE();
    case 477:
      if (lookahead == 'h') ADVANCE(738);
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 478:
      if (lookahead == 'h') ADVANCE(319);
      END_STATE();
    case 479:
      if (lookahead == 'h') ADVANCE(714);
      END_STATE();
    case 480:
      if (lookahead == 'h') ADVANCE(290);
      END_STATE();
    case 481:
      if (lookahead == 'h') ADVANCE(163);
      END_STATE();
    case 482:
      if (lookahead == 'h') ADVANCE(747);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 483:
      if (lookahead == 'h') ADVANCE(417);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'r') ADVANCE(491);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(990);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(927);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(463);
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(967);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(883);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(453);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(782);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(774);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(856);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(301);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(896);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(970);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(999);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(849);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(742);
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 521:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 522:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 523:
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 524:
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(1026);
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 525:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 526:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 527:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 528:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 529:
      if (lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 530:
      if (lookahead == 'i') ADVANCE(373);
      END_STATE();
    case 531:
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 532:
      if (lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 533:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 534:
      if (lookahead == 'i') ADVANCE(829);
      END_STATE();
    case 535:
      if (lookahead == 'i') ADVANCE(731);
      END_STATE();
    case 536:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 537:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 538:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 539:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 540:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 541:
      if (lookahead == 'i') ADVANCE(741);
      END_STATE();
    case 542:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 543:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 544:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 545:
      if (lookahead == 'i') ADVANCE(388);
      END_STATE();
    case 546:
      if (lookahead == 'i') ADVANCE(392);
      END_STATE();
    case 547:
      if (lookahead == 'i') ADVANCE(790);
      END_STATE();
    case 548:
      if (lookahead == 'i') ADVANCE(648);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 549:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 550:
      if (lookahead == 'i') ADVANCE(647);
      END_STATE();
    case 551:
      if (lookahead == 'i') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(1041);
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 552:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 553:
      if (lookahead == 'i') ADVANCE(439);
      END_STATE();
    case 554:
      if (lookahead == 'k') ADVANCE(32);
      if (lookahead == 's') ADVANCE(406);
      END_STATE();
    case 555:
      if (lookahead == 'k') ADVANCE(1195);
      END_STATE();
    case 556:
      if (lookahead == 'k') ADVANCE(760);
      END_STATE();
    case 557:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 558:
      if (lookahead == 'k') ADVANCE(251);
      END_STATE();
    case 559:
      if (lookahead == 'k') ADVANCE(315);
      if (lookahead == 'n') ADVANCE(725);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'p') ADVANCE(477);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 560:
      if (lookahead == 'k') ADVANCE(321);
      END_STATE();
    case 561:
      if (lookahead == 'k') ADVANCE(682);
      END_STATE();
    case 562:
      if (lookahead == 'k') ADVANCE(324);
      END_STATE();
    case 563:
      if (lookahead == 'k') ADVANCE(368);
      END_STATE();
    case 564:
      if (lookahead == 'k') ADVANCE(358);
      END_STATE();
    case 565:
      if (lookahead == 'k') ADVANCE(355);
      END_STATE();
    case 566:
      if (lookahead == 'k') ADVANCE(86);
      END_STATE();
    case 567:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 568:
      if (lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 569:
      if (lookahead == 'k') ADVANCE(419);
      if (lookahead == 'n') ADVANCE(757);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 570:
      if (lookahead == 'l') ADVANCE(1172);
      END_STATE();
    case 571:
      if (lookahead == 'l') ADVANCE(1163);
      END_STATE();
    case 572:
      if (lookahead == 'l') ADVANCE(1156);
      END_STATE();
    case 573:
      if (lookahead == 'l') ADVANCE(1167);
      END_STATE();
    case 574:
      if (lookahead == 'l') ADVANCE(1164);
      END_STATE();
    case 575:
      if (lookahead == 'l') ADVANCE(1165);
      END_STATE();
    case 576:
      if (lookahead == 'l') ADVANCE(1158);
      END_STATE();
    case 577:
      if (lookahead == 'l') ADVANCE(1178);
      END_STATE();
    case 578:
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 579:
      if (lookahead == 'l') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 580:
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead == 's') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1112);
      END_STATE();
    case 581:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 582:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 583:
      if (lookahead == 'l') ADVANCE(424);
      END_STATE();
    case 584:
      if (lookahead == 'l') ADVANCE(882);
      END_STATE();
    case 585:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 586:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 587:
      if (lookahead == 'l') ADVANCE(490);
      END_STATE();
    case 588:
      if (lookahead == 'l') ADVANCE(989);
      END_STATE();
    case 589:
      if (lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 590:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 591:
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 592:
      if (lookahead == 'l') ADVANCE(711);
      END_STATE();
    case 593:
      if (lookahead == 'l') ADVANCE(369);
      END_STATE();
    case 594:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 595:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 596:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 597:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 598:
      if (lookahead == 'l') ADVANCE(382);
      END_STATE();
    case 599:
      if (lookahead == 'l') ADVANCE(347);
      END_STATE();
    case 600:
      if (lookahead == 'l') ADVANCE(980);
      END_STATE();
    case 601:
      if (lookahead == 'l') ADVANCE(1089);
      END_STATE();
    case 602:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 603:
      if (lookahead == 'l') ADVANCE(1005);
      END_STATE();
    case 604:
      if (lookahead == 'l') ADVANCE(364);
      END_STATE();
    case 605:
      if (lookahead == 'l') ADVANCE(997);
      END_STATE();
    case 606:
      if (lookahead == 'l') ADVANCE(399);
      END_STATE();
    case 607:
      if (lookahead == 'l') ADVANCE(1067);
      if (lookahead == 'u') ADVANCE(983);
      END_STATE();
    case 608:
      if (lookahead == 'l') ADVANCE(542);
      END_STATE();
    case 609:
      if (lookahead == 'l') ADVANCE(539);
      END_STATE();
    case 610:
      if (lookahead == 'l') ADVANCE(376);
      END_STATE();
    case 611:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 612:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 613:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 614:
      if (lookahead == 'l') ADVANCE(391);
      END_STATE();
    case 615:
      if (lookahead == 'l') ADVANCE(935);
      END_STATE();
    case 616:
      if (lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 617:
      if (lookahead == 'l') ADVANCE(421);
      END_STATE();
    case 618:
      if (lookahead == 'm') ADVANCE(1196);
      END_STATE();
    case 619:
      if (lookahead == 'm') ADVANCE(1209);
      END_STATE();
    case 620:
      if (lookahead == 'm') ADVANCE(1197);
      END_STATE();
    case 621:
      if (lookahead == 'm') ADVANCE(1210);
      END_STATE();
    case 622:
      if (lookahead == 'm') ADVANCE(1160);
      END_STATE();
    case 623:
      if (lookahead == 'm') ADVANCE(489);
      if (lookahead == 's') ADVANCE(993);
      END_STATE();
    case 624:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 625:
      if (lookahead == 'm') ADVANCE(763);
      END_STATE();
    case 626:
      if (lookahead == 'm') ADVANCE(1023);
      if (lookahead == 'n') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 627:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 628:
      if (lookahead == 'm') ADVANCE(659);
      END_STATE();
    case 629:
      if (lookahead == 'm') ADVANCE(492);
      END_STATE();
    case 630:
      if (lookahead == 'm') ADVANCE(783);
      END_STATE();
    case 631:
      if (lookahead == 'm') ADVANCE(788);
      END_STATE();
    case 632:
      if (lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 633:
      if (lookahead == 'm') ADVANCE(740);
      END_STATE();
    case 634:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 635:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 636:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 637:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 638:
      if (lookahead == 'm') ADVANCE(323);
      END_STATE();
    case 639:
      if (lookahead == 'm') ADVANCE(331);
      END_STATE();
    case 640:
      if (lookahead == 'm') ADVANCE(345);
      END_STATE();
    case 641:
      if (lookahead == 'm') ADVANCE(334);
      END_STATE();
    case 642:
      if (lookahead == 'm') ADVANCE(348);
      END_STATE();
    case 643:
      if (lookahead == 'm') ADVANCE(691);
      END_STATE();
    case 644:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 645:
      if (lookahead == 'm') ADVANCE(786);
      END_STATE();
    case 646:
      if (lookahead == 'm') ADVANCE(791);
      END_STATE();
    case 647:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 648:
      if (lookahead == 'm') ADVANCE(792);
      END_STATE();
    case 649:
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'x') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 650:
      if (lookahead == 'n') ADVANCE(1024);
      END_STATE();
    case 651:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 652:
      if (lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 653:
      if (lookahead == 'n') ADVANCE(1212);
      END_STATE();
    case 654:
      if (lookahead == 'n') ADVANCE(1195);
      END_STATE();
    case 655:
      if (lookahead == 'n') ADVANCE(901);
      END_STATE();
    case 656:
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'r') ADVANCE(467);
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 657:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 658:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 659:
      if (lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 660:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 661:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 662:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 663:
      if (lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 664:
      if (lookahead == 'n') ADVANCE(442);
      END_STATE();
    case 665:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 666:
      if (lookahead == 'n') ADVANCE(882);
      END_STATE();
    case 667:
      if (lookahead == 'n') ADVANCE(725);
      END_STATE();
    case 668:
      if (lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 669:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 670:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 671:
      if (lookahead == 'n') ADVANCE(454);
      END_STATE();
    case 672:
      if (lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 673:
      if (lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 674:
      if (lookahead == 'n') ADVANCE(887);
      END_STATE();
    case 675:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 676:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 677:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 678:
      if (lookahead == 'n') ADVANCE(446);
      END_STATE();
    case 679:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 680:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 681:
      if (lookahead == 'n') ADVANCE(895);
      END_STATE();
    case 682:
      if (lookahead == 'n') ADVANCE(717);
      END_STATE();
    case 683:
      if (lookahead == 'n') ADVANCE(954);
      END_STATE();
    case 684:
      if (lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 685:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 686:
      if (lookahead == 'n') ADVANCE(1032);
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 687:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 688:
      if (lookahead == 'n') ADVANCE(360);
      END_STATE();
    case 689:
      if (lookahead == 'n') ADVANCE(992);
      END_STATE();
    case 690:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 691:
      if (lookahead == 'n') ADVANCE(464);
      END_STATE();
    case 692:
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 693:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 694:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 695:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 696:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 697:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 698:
      if (lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 699:
      if (lookahead == 'n') ADVANCE(538);
      END_STATE();
    case 700:
      if (lookahead == 'n') ADVANCE(757);
      END_STATE();
    case 701:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 702:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 703:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 704:
      if (lookahead == 'o') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(1020);
      END_STATE();
    case 705:
      if (lookahead == 'o') ADVANCE(814);
      END_STATE();
    case 706:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 707:
      if (lookahead == 'o') ADVANCE(1173);
      END_STATE();
    case 708:
      if (lookahead == 'o') ADVANCE(1195);
      END_STATE();
    case 709:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 710:
      if (lookahead == 'o') ADVANCE(1073);
      END_STATE();
    case 711:
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 712:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 713:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 714:
      if (lookahead == 'o') ADVANCE(1066);
      END_STATE();
    case 715:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 716:
      if (lookahead == 'o') ADVANCE(907);
      END_STATE();
    case 717:
      if (lookahead == 'o') ADVANCE(1064);
      END_STATE();
    case 718:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 719:
      if (lookahead == 'o') ADVANCE(882);
      END_STATE();
    case 720:
      if (lookahead == 'o') ADVANCE(773);
      END_STATE();
    case 721:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 722:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 723:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 724:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 725:
      if (lookahead == 'o') ADVANCE(994);
      END_STATE();
    case 726:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 727:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 728:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 729:
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 730:
      if (lookahead == 'o') ADVANCE(895);
      END_STATE();
    case 731:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 732:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 733:
      if (lookahead == 'o') ADVANCE(809);
      END_STATE();
    case 734:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 735:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 736:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 737:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 738:
      if (lookahead == 'o') ADVANCE(979);
      END_STATE();
    case 739:
      if (lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 740:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 741:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 742:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 743:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 744:
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 745:
      if (lookahead == 'o') ADVANCE(917);
      END_STATE();
    case 746:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 747:
      if (lookahead == 'o') ADVANCE(984);
      END_STATE();
    case 748:
      if (lookahead == 'o') ADVANCE(828);
      END_STATE();
    case 749:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 750:
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 751:
      if (lookahead == 'o') ADVANCE(995);
      END_STATE();
    case 752:
      if (lookahead == 'o') ADVANCE(928);
      END_STATE();
    case 753:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 754:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 755:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 756:
      if (lookahead == 'o') ADVANCE(793);
      END_STATE();
    case 757:
      if (lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 758:
      if (lookahead == 'o') ADVANCE(942);
      END_STATE();
    case 759:
      if (lookahead == 'o') ADVANCE(944);
      END_STATE();
    case 760:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 761:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 762:
      if (lookahead == 'p') ADVANCE(114);
      END_STATE();
    case 763:
      if (lookahead == 'p') ADVANCE(578);
      END_STATE();
    case 764:
      if (lookahead == 'p') ADVANCE(1216);
      END_STATE();
    case 765:
      if (lookahead == 'p') ADVANCE(1173);
      END_STATE();
    case 766:
      if (lookahead == 'p') ADVANCE(1179);
      END_STATE();
    case 767:
      if (lookahead == 'p') ADVANCE(1103);
      END_STATE();
    case 768:
      if (lookahead == 'p') ADVANCE(1223);
      END_STATE();
    case 769:
      if (lookahead == 'p') ADVANCE(441);
      END_STATE();
    case 770:
      if (lookahead == 'p') ADVANCE(452);
      END_STATE();
    case 771:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 772:
      if (lookahead == 'p') ADVANCE(819);
      END_STATE();
    case 773:
      if (lookahead == 'p') ADVANCE(974);
      END_STATE();
    case 774:
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 775:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 776:
      if (lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 777:
      if (lookahead == 'p') ADVANCE(746);
      END_STATE();
    case 778:
      if (lookahead == 'p') ADVANCE(963);
      END_STATE();
    case 779:
      if (lookahead == 'p') ADVANCE(311);
      END_STATE();
    case 780:
      if (lookahead == 'p') ADVANCE(456);
      END_STATE();
    case 781:
      if (lookahead == 'p') ADVANCE(835);
      END_STATE();
    case 782:
      if (lookahead == 'p') ADVANCE(595);
      END_STATE();
    case 783:
      if (lookahead == 'p') ADVANCE(823);
      END_STATE();
    case 784:
      if (lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 785:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 786:
      if (lookahead == 'p') ADVANCE(878);
      END_STATE();
    case 787:
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 788:
      if (lookahead == 'p') ADVANCE(748);
      END_STATE();
    case 789:
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 790:
      if (lookahead == 'p') ADVANCE(530);
      END_STATE();
    case 791:
      if (lookahead == 'p') ADVANCE(858);
      END_STATE();
    case 792:
      if (lookahead == 'p') ADVANCE(749);
      END_STATE();
    case 793:
      if (lookahead == 'p') ADVANCE(1006);
      END_STATE();
    case 794:
      if (lookahead == 'p') ADVANCE(859);
      END_STATE();
    case 795:
      if (lookahead == 'p') ADVANCE(407);
      END_STATE();
    case 796:
      if (lookahead == 'q') ADVANCE(1101);
      END_STATE();
    case 797:
      if (lookahead == 'q') ADVANCE(1025);
      END_STATE();
    case 798:
      if (lookahead == 'q') ADVANCE(1040);
      END_STATE();
    case 799:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 800:
      if (lookahead == 'r') ADVANCE(1171);
      END_STATE();
    case 801:
      if (lookahead == 'r') ADVANCE(1152);
      END_STATE();
    case 802:
      if (lookahead == 'r') ADVANCE(1055);
      END_STATE();
    case 803:
      if (lookahead == 'r') ADVANCE(1187);
      END_STATE();
    case 804:
      if (lookahead == 'r') ADVANCE(1202);
      END_STATE();
    case 805:
      if (lookahead == 'r') ADVANCE(1132);
      END_STATE();
    case 806:
      if (lookahead == 'r') ADVANCE(1176);
      END_STATE();
    case 807:
      if (lookahead == 'r') ADVANCE(1198);
      END_STATE();
    case 808:
      if (lookahead == 'r') ADVANCE(1169);
      END_STATE();
    case 809:
      if (lookahead == 'r') ADVANCE(1203);
      END_STATE();
    case 810:
      if (lookahead == 'r') ADVANCE(1178);
      END_STATE();
    case 811:
      if (lookahead == 'r') ADVANCE(628);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 812:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 813:
      if (lookahead == 'r') ADVANCE(945);
      END_STATE();
    case 814:
      if (lookahead == 'r') ADVANCE(945);
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 815:
      if (lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 816:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 817:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 818:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 819:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 820:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 821:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 822:
      if (lookahead == 'r') ADVANCE(948);
      END_STATE();
    case 823:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 824:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 825:
      if (lookahead == 'r') ADVANCE(698);
      END_STATE();
    case 826:
      if (lookahead == 'r') ADVANCE(521);
      END_STATE();
    case 827:
      if (lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 828:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 829:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 830:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 831:
      if (lookahead == 'r') ADVANCE(955);
      END_STATE();
    case 832:
      if (lookahead == 'r') ADVANCE(314);
      END_STATE();
    case 833:
      if (lookahead == 'r') ADVANCE(958);
      END_STATE();
    case 834:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 835:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 836:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 837:
      if (lookahead == 'r') ADVANCE(971);
      END_STATE();
    case 838:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 839:
      if (lookahead == 'r') ADVANCE(1086);
      END_STATE();
    case 840:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 841:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 842:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 843:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 844:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 845:
      if (lookahead == 'r') ADVANCE(511);
      END_STATE();
    case 846:
      if (lookahead == 'r') ADVANCE(841);
      END_STATE();
    case 847:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 848:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 849:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 850:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 851:
      if (lookahead == 'r') ADVANCE(982);
      END_STATE();
    case 852:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 853:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 854:
      if (lookahead == 'r') ADVANCE(1091);
      END_STATE();
    case 855:
      if (lookahead == 'r') ADVANCE(987);
      END_STATE();
    case 856:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 857:
      if (lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 858:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 859:
      if (lookahead == 'r') ADVANCE(743);
      END_STATE();
    case 860:
      if (lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 861:
      if (lookahead == 'r') ADVANCE(1057);
      END_STATE();
    case 862:
      if (lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 863:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 864:
      if (lookahead == 'r') ADVANCE(1036);
      END_STATE();
    case 865:
      if (lookahead == 'r') ADVANCE(529);
      if (lookahead == 's') ADVANCE(396);
      END_STATE();
    case 866:
      if (lookahead == 'r') ADVANCE(1059);
      END_STATE();
    case 867:
      if (lookahead == 'r') ADVANCE(532);
      END_STATE();
    case 868:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 869:
      if (lookahead == 'r') ADVANCE(536);
      END_STATE();
    case 870:
      if (lookahead == 'r') ADVANCE(471);
      END_STATE();
    case 871:
      if (lookahead == 'r') ADVANCE(699);
      END_STATE();
    case 872:
      if (lookahead == 'r') ADVANCE(546);
      END_STATE();
    case 873:
      if (lookahead == 'r') ADVANCE(1013);
      END_STATE();
    case 874:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 875:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 876:
      if (lookahead == 'r') ADVANCE(1014);
      END_STATE();
    case 877:
      if (lookahead == 'r') ADVANCE(1016);
      END_STATE();
    case 878:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 879:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 880:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 881:
      if (lookahead == 'r') ADVANCE(759);
      END_STATE();
    case 882:
      if (lookahead == 's') ADVANCE(1125);
      END_STATE();
    case 883:
      if (lookahead == 's') ADVANCE(1218);
      END_STATE();
    case 884:
      if (lookahead == 's') ADVANCE(1159);
      END_STATE();
    case 885:
      if (lookahead == 's') ADVANCE(1123);
      END_STATE();
    case 886:
      if (lookahead == 's') ADVANCE(1154);
      END_STATE();
    case 887:
      if (lookahead == 's') ADVANCE(1126);
      END_STATE();
    case 888:
      if (lookahead == 's') ADVANCE(1155);
      END_STATE();
    case 889:
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 890:
      if (lookahead == 's') ADVANCE(1161);
      END_STATE();
    case 891:
      if (lookahead == 's') ADVANCE(1204);
      END_STATE();
    case 892:
      if (lookahead == 's') ADVANCE(1162);
      END_STATE();
    case 893:
      if (lookahead == 's') ADVANCE(1173);
      END_STATE();
    case 894:
      if (lookahead == 's') ADVANCE(1178);
      END_STATE();
    case 895:
      if (lookahead == 's') ADVANCE(1127);
      END_STATE();
    case 896:
      if (lookahead == 's') ADVANCE(1223);
      END_STATE();
    case 897:
      if (lookahead == 's') ADVANCE(709);
      END_STATE();
    case 898:
      if (lookahead == 's') ADVANCE(568);
      if (lookahead == 'u') ADVANCE(972);
      END_STATE();
    case 899:
      if (lookahead == 's') ADVANCE(555);
      if (lookahead == 'u') ADVANCE(985);
      END_STATE();
    case 900:
      if (lookahead == 's') ADVANCE(946);
      END_STATE();
    case 901:
      if (lookahead == 's') ADVANCE(496);
      END_STATE();
    case 902:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 903:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 904:
      if (lookahead == 's') ADVANCE(973);
      END_STATE();
    case 905:
      if (lookahead == 's') ADVANCE(884);
      END_STATE();
    case 906:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 907:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 908:
      if (lookahead == 's') ADVANCE(541);
      END_STATE();
    case 909:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 910:
      if (lookahead == 's') ADVANCE(949);
      END_STATE();
    case 911:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 912:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 913:
      if (lookahead == 's') ADVANCE(504);
      END_STATE();
    case 914:
      if (lookahead == 's') ADVANCE(966);
      END_STATE();
    case 915:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 916:
      if (lookahead == 's') ADVANCE(968);
      END_STATE();
    case 917:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 918:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 919:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 920:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 921:
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 922:
      if (lookahead == 's') ADVANCE(934);
      END_STATE();
    case 923:
      if (lookahead == 's') ADVANCE(517);
      END_STATE();
    case 924:
      if (lookahead == 's') ADVANCE(363);
      END_STATE();
    case 925:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 926:
      if (lookahead == 's') ADVANCE(354);
      END_STATE();
    case 927:
      if (lookahead == 's') ADVANCE(908);
      END_STATE();
    case 928:
      if (lookahead == 's') ADVANCE(918);
      END_STATE();
    case 929:
      if (lookahead == 's') ADVANCE(913);
      END_STATE();
    case 930:
      if (lookahead == 's') ADVANCE(920);
      END_STATE();
    case 931:
      if (lookahead == 's') ADVANCE(998);
      END_STATE();
    case 932:
      if (lookahead == 's') ADVANCE(405);
      END_STATE();
    case 933:
      if (lookahead == 's') ADVANCE(1010);
      END_STATE();
    case 934:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 935:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 936:
      if (lookahead == 's') ADVANCE(409);
      END_STATE();
    case 937:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 938:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 939:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 940:
      if (lookahead == 's') ADVANCE(938);
      END_STATE();
    case 941:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 942:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 943:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 944:
      if (lookahead == 's') ADVANCE(943);
      END_STATE();
    case 945:
      if (lookahead == 't') ADVANCE(1186);
      END_STATE();
    case 946:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 947:
      if (lookahead == 't') ADVANCE(1213);
      END_STATE();
    case 948:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 949:
      if (lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 950:
      if (lookahead == 't') ADVANCE(1185);
      END_STATE();
    case 951:
      if (lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 952:
      if (lookahead == 't') ADVANCE(1181);
      END_STATE();
    case 953:
      if (lookahead == 't') ADVANCE(1151);
      END_STATE();
    case 954:
      if (lookahead == 't') ADVANCE(1118);
      END_STATE();
    case 955:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 956:
      if (lookahead == 't') ADVANCE(1120);
      END_STATE();
    case 957:
      if (lookahead == 't') ADVANCE(1173);
      END_STATE();
    case 958:
      if (lookahead == 't') ADVANCE(1178);
      END_STATE();
    case 959:
      if (lookahead == 't') ADVANCE(423);
      END_STATE();
    case 960:
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 961:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 962:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 963:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 964:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 965:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 966:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 967:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 968:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 969:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 970:
      if (lookahead == 't') ADVANCE(1078);
      END_STATE();
    case 971:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 972:
      if (lookahead == 't') ADVANCE(706);
      END_STATE();
    case 973:
      if (lookahead == 't') ADVANCE(863);
      END_STATE();
    case 974:
      if (lookahead == 't') ADVANCE(515);
      END_STATE();
    case 975:
      if (lookahead == 't') ADVANCE(1082);
      END_STATE();
    case 976:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 977:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 978:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 979:
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 980:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 981:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 982:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 983:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 984:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 985:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 986:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 987:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 988:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 989:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 990:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 991:
      if (lookahead == 't') ADVANCE(712);
      END_STATE();
    case 992:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 993:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 994:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 995:
      if (lookahead == 't') ADVANCE(723);
      END_STATE();
    case 996:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 997:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 998:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 999:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 1000:
      if (lookahead == 't') ADVANCE(516);
      END_STATE();
    case 1001:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 1002:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 1003:
      if (lookahead == 't') ADVANCE(519);
      END_STATE();
    case 1004:
      if (lookahead == 't') ADVANCE(847);
      END_STATE();
    case 1005:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 1006:
      if (lookahead == 't') ADVANCE(526);
      END_STATE();
    case 1007:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 1008:
      if (lookahead == 't') ADVANCE(531);
      END_STATE();
    case 1009:
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 1010:
      if (lookahead == 't') ADVANCE(867);
      END_STATE();
    case 1011:
      if (lookahead == 't') ADVANCE(862);
      END_STATE();
    case 1012:
      if (lookahead == 't') ADVANCE(864);
      END_STATE();
    case 1013:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 1014:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 1015:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 1016:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 1017:
      if (lookahead == 't') ADVANCE(872);
      END_STATE();
    case 1018:
      if (lookahead == 't') ADVANCE(280);
      END_STATE();
    case 1019:
      if (lookahead == 'u') ADVANCE(1174);
      END_STATE();
    case 1020:
      if (lookahead == 'u') ADVANCE(900);
      END_STATE();
    case 1021:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 1022:
      if (lookahead == 'u') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      END_STATE();
    case 1023:
      if (lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 1024:
      if (lookahead == 'u') ADVANCE(769);
      END_STATE();
    case 1025:
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 1026:
      if (lookahead == 'u') ADVANCE(939);
      END_STATE();
    case 1027:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 1028:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 1029:
      if (lookahead == 'u') ADVANCE(818);
      END_STATE();
    case 1030:
      if (lookahead == 'u') ADVANCE(824);
      END_STATE();
    case 1031:
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 1032:
      if (lookahead == 'u') ADVANCE(776);
      END_STATE();
    case 1033:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 1034:
      if (lookahead == 'u') ADVANCE(910);
      END_STATE();
    case 1035:
      if (lookahead == 'u') ADVANCE(914);
      END_STATE();
    case 1036:
      if (lookahead == 'u') ADVANCE(916);
      END_STATE();
    case 1037:
      if (lookahead == 'u') ADVANCE(919);
      END_STATE();
    case 1038:
      if (lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 1039:
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 1040:
      if (lookahead == 'u') ADVANCE(543);
      END_STATE();
    case 1041:
      if (lookahead == 'u') ADVANCE(941);
      END_STATE();
    case 1042:
      if (lookahead == 'v') ADVANCE(508);
      END_STATE();
    case 1043:
      if (lookahead == 'v') ADVANCE(172);
      END_STATE();
    case 1044:
      if (lookahead == 'v') ADVANCE(713);
      END_STATE();
    case 1045:
      if (lookahead == 'v') ADVANCE(304);
      END_STATE();
    case 1046:
      if (lookahead == 'v') ADVANCE(896);
      END_STATE();
    case 1047:
      if (lookahead == 'v') ADVANCE(326);
      END_STATE();
    case 1048:
      if (lookahead == 'v') ADVANCE(329);
      END_STATE();
    case 1049:
      if (lookahead == 'v') ADVANCE(333);
      END_STATE();
    case 1050:
      if (lookahead == 'v') ADVANCE(336);
      END_STATE();
    case 1051:
      if (lookahead == 'v') ADVANCE(294);
      END_STATE();
    case 1052:
      if (lookahead == 'v') ADVANCE(339);
      END_STATE();
    case 1053:
      if (lookahead == 'v') ADVANCE(341);
      END_STATE();
    case 1054:
      if (lookahead == 'v') ADVANCE(298);
      END_STATE();
    case 1055:
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 1056:
      if (lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 1057:
      if (lookahead == 'v') ADVANCE(379);
      END_STATE();
    case 1058:
      if (lookahead == 'v') ADVANCE(356);
      END_STATE();
    case 1059:
      if (lookahead == 'v') ADVANCE(359);
      END_STATE();
    case 1060:
      if (lookahead == 'v') ADVANCE(383);
      END_STATE();
    case 1061:
      if (lookahead == 'v') ADVANCE(185);
      END_STATE();
    case 1062:
      if (lookahead == 'v') ADVANCE(420);
      END_STATE();
    case 1063:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 1064:
      if (lookahead == 'w') ADVANCE(654);
      END_STATE();
    case 1065:
      if (lookahead == 'w') ADVANCE(845);
      END_STATE();
    case 1066:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 1067:
      if (lookahead == 'w') ADVANCE(178);
      END_STATE();
    case 1068:
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 1069:
      if (lookahead == 'w') ADVANCE(641);
      END_STATE();
    case 1070:
      if (lookahead == 'w') ADVANCE(351);
      END_STATE();
    case 1071:
      if (lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 1072:
      if (lookahead == 'x') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 1073:
      if (lookahead == 'x') ADVANCE(1125);
      END_STATE();
    case 1074:
      if (lookahead == 'x') ADVANCE(789);
      END_STATE();
    case 1075:
      if (lookahead == 'x') ADVANCE(787);
      END_STATE();
    case 1076:
      if (lookahead == 'y') ADVANCE(485);
      END_STATE();
    case 1077:
      if (lookahead == 'y') ADVANCE(1122);
      END_STATE();
    case 1078:
      if (lookahead == 'y') ADVANCE(1125);
      END_STATE();
    case 1079:
      if (lookahead == 'y') ADVANCE(1117);
      END_STATE();
    case 1080:
      if (lookahead == 'y') ADVANCE(1168);
      END_STATE();
    case 1081:
      if (lookahead == 'y') ADVANCE(1190);
      END_STATE();
    case 1082:
      if (lookahead == 'y') ADVANCE(1127);
      END_STATE();
    case 1083:
      if (lookahead == 'y') ADVANCE(865);
      END_STATE();
    case 1084:
      if (lookahead == 'y') ADVANCE(909);
      END_STATE();
    case 1085:
      if (lookahead == 'y') ADVANCE(882);
      END_STATE();
    case 1086:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 1087:
      if (lookahead == 'y') ADVANCE(893);
      END_STATE();
    case 1088:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 1089:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 1090:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 1091:
      if (lookahead == 'y') ADVANCE(62);
      END_STATE();
    case 1092:
      if (lookahead == 'y') ADVANCE(67);
      END_STATE();
    case 1093:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 1094:
      if (lookahead == 'y') ADVANCE(936);
      END_STATE();
    case 1095:
      if (lookahead == 'y') ADVANCE(869);
      END_STATE();
    case 1096:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 1097:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 1098:
      if (lookahead == 'y') ADVANCE(937);
      END_STATE();
    case 1099:
      if (lookahead == 'z') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 1100:
      if (lookahead == '{') ADVANCE(796);
      END_STATE();
    case 1101:
      if (lookahead == '}') ADVANCE(1140);
      END_STATE();
    case 1102:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1166);
      END_STATE();
    case 1103:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1223);
      END_STATE();
    case 1104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1261);
      END_STATE();
    case 1106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1259);
      END_STATE();
    case 1107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1106);
      END_STATE();
    case 1108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1107);
      END_STATE();
    case 1109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1108);
      END_STATE();
    case 1110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1109);
      END_STATE();
    case 1111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1110);
      END_STATE();
    case 1112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1111);
      END_STATE();
    case 1113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1114:
      if (eof) ADVANCE(1115);
      if (lookahead == '\n') ADVANCE(1116);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1265);
      if (lookahead == ',') ADVANCE(1124);
      if (lookahead == '0') ADVANCE(1072);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'b') ADVANCE(1099);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == 'd') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(649);
      if (lookahead == 'g') ADVANCE(650);
      if (lookahead == 'h') ADVANCE(556);
      if (lookahead == 'i') ADVANCE(897);
      if (lookahead == 'k') ADVANCE(283);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(703);
      if (lookahead == 'o') ADVANCE(779);
      if (lookahead == 'p') ADVANCE(449);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 't') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(959);
      if (lookahead == 'v') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1266);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(1112);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(921);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1146);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1264);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(1100);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1146);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1264);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(1100);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1146);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1152);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_sensitive_COLON);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_clear);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == '+') ADVANCE(780);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(500);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym__compliance);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__compliance);
      if (lookahead == 'b') ADVANCE(509);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1227);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1228);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1229);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1230);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1231);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1232);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1233);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1234);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1235);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1236);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1237);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1238);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1239);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1240);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1241);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1242);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1243);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1244);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1245);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1246);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1247);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1248);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1249);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1250);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1251);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1252);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1253);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1254);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1255);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1256);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1257);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1258);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(1113);
      if (lookahead == '.') ADVANCE(1104);
      if (lookahead == ':') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1261);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1263);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1264);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1265);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1114},
  [2] = {.lex_state = 1114},
  [3] = {.lex_state = 1114},
  [4] = {.lex_state = 1114},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 1114},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1114},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 1114},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 1114},
  [38] = {.lex_state = 1114},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 1114},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1114},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1114},
  [49] = {.lex_state = 1114},
  [50] = {.lex_state = 1114},
  [51] = {.lex_state = 1114},
  [52] = {.lex_state = 1114},
  [53] = {.lex_state = 1114},
  [54] = {.lex_state = 1114},
  [55] = {.lex_state = 1114},
  [56] = {.lex_state = 1114},
  [57] = {.lex_state = 1114},
  [58] = {.lex_state = 1114},
  [59] = {.lex_state = 1114},
  [60] = {.lex_state = 1114},
  [61] = {.lex_state = 1114},
  [62] = {.lex_state = 1114},
  [63] = {.lex_state = 1114},
  [64] = {.lex_state = 1114},
  [65] = {.lex_state = 1114},
  [66] = {.lex_state = 1114},
  [67] = {.lex_state = 1114},
  [68] = {.lex_state = 1114},
  [69] = {.lex_state = 1114},
  [70] = {.lex_state = 1114},
  [71] = {.lex_state = 1114},
  [72] = {.lex_state = 1114},
  [73] = {.lex_state = 1114},
  [74] = {.lex_state = 1114},
  [75] = {.lex_state = 1114},
  [76] = {.lex_state = 1114},
  [77] = {.lex_state = 1114},
  [78] = {.lex_state = 1114},
  [79] = {.lex_state = 1114},
  [80] = {.lex_state = 1114},
  [81] = {.lex_state = 1114},
  [82] = {.lex_state = 1114},
  [83] = {.lex_state = 1114},
  [84] = {.lex_state = 1114},
  [85] = {.lex_state = 1114},
  [86] = {.lex_state = 1114},
  [87] = {.lex_state = 1114},
  [88] = {.lex_state = 1114},
  [89] = {.lex_state = 1114},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 1114},
  [92] = {.lex_state = 1114},
  [93] = {.lex_state = 1114},
  [94] = {.lex_state = 25},
  [95] = {.lex_state = 25},
  [96] = {.lex_state = 1102},
  [97] = {.lex_state = 1102},
  [98] = {.lex_state = 1114},
  [99] = {.lex_state = 1114},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 1114},
  [102] = {.lex_state = 1114},
  [103] = {.lex_state = 1114},
  [104] = {.lex_state = 1114},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 25},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1114},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 25},
  [113] = {.lex_state = 1114},
  [114] = {.lex_state = 1114},
  [115] = {.lex_state = 1114},
  [116] = {.lex_state = 1114},
  [117] = {.lex_state = 1114},
  [118] = {.lex_state = 1114},
  [119] = {.lex_state = 1114},
  [120] = {.lex_state = 1114},
  [121] = {.lex_state = 1114},
  [122] = {.lex_state = 1114},
  [123] = {.lex_state = 1114},
  [124] = {.lex_state = 1114},
  [125] = {.lex_state = 1114},
  [126] = {.lex_state = 1114},
  [127] = {.lex_state = 1114},
  [128] = {.lex_state = 1114},
  [129] = {.lex_state = 1114},
  [130] = {.lex_state = 1114},
  [131] = {.lex_state = 1114},
  [132] = {.lex_state = 1114},
  [133] = {.lex_state = 1114},
  [134] = {.lex_state = 1114},
  [135] = {.lex_state = 1114},
  [136] = {.lex_state = 1114},
  [137] = {.lex_state = 1114},
  [138] = {.lex_state = 1114},
  [139] = {.lex_state = 1114},
  [140] = {.lex_state = 1114},
  [141] = {.lex_state = 1114},
  [142] = {.lex_state = 1114},
  [143] = {.lex_state = 1114},
  [144] = {.lex_state = 1114},
  [145] = {.lex_state = 1114},
  [146] = {.lex_state = 1114},
  [147] = {.lex_state = 1114},
  [148] = {.lex_state = 1114},
  [149] = {.lex_state = 1114},
  [150] = {.lex_state = 1114},
  [151] = {.lex_state = 1114},
  [152] = {.lex_state = 1114},
  [153] = {.lex_state = 1114},
  [154] = {.lex_state = 1114},
  [155] = {.lex_state = 1114},
  [156] = {.lex_state = 1114},
  [157] = {.lex_state = 1114},
  [158] = {.lex_state = 1114},
  [159] = {.lex_state = 1114},
  [160] = {.lex_state = 1114},
  [161] = {.lex_state = 1114},
  [162] = {.lex_state = 1114},
  [163] = {.lex_state = 1114},
  [164] = {.lex_state = 1114},
  [165] = {.lex_state = 1114},
  [166] = {.lex_state = 1114},
  [167] = {.lex_state = 1114},
  [168] = {.lex_state = 1114},
  [169] = {.lex_state = 1114},
  [170] = {.lex_state = 1114},
  [171] = {.lex_state = 1114},
  [172] = {.lex_state = 1114},
  [173] = {.lex_state = 1114},
  [174] = {.lex_state = 1114},
  [175] = {.lex_state = 1114},
  [176] = {.lex_state = 1114},
  [177] = {.lex_state = 1114},
  [178] = {.lex_state = 1114},
  [179] = {.lex_state = 1114},
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
    [sym_config] = STATE(87),
    [sym_default_key] = STATE(86),
    [sym_default_recipient] = STATE(86),
    [sym_default_recipient_self] = STATE(86),
    [sym_no_default_recipient] = STATE(86),
    [sym_verbose] = STATE(86),
    [sym_no_tty] = STATE(86),
    [sym_list_options] = STATE(86),
    [sym_verify_options] = STATE(86),
    [sym_enable_large_rsa] = STATE(86),
    [sym_disable_large_rsa] = STATE(86),
    [sym_enable_dsa2] = STATE(86),
    [sym_disable_dsa2] = STATE(86),
    [sym_photo_viewer] = STATE(86),
    [sym_exec_path] = STATE(86),
    [sym_keyring] = STATE(86),
    [sym_primary_keyring] = STATE(86),
    [sym_trustdb_name] = STATE(86),
    [sym_display_charset] = STATE(86),
    [sym_utf8_strings] = STATE(86),
    [sym_no_utf8_strings] = STATE(86),
    [sym_compress_level] = STATE(86),
    [sym_bzip2_compress_level] = STATE(86),
    [sym_no_compress] = STATE(86),
    [sym_bzip2_decompress_lowmem] = STATE(86),
    [sym_mangle_dos_filenames] = STATE(86),
    [sym_no_mangle_dos_filenames] = STATE(86),
    [sym_ask_cert_level] = STATE(86),
    [sym_no_ask_cert_level] = STATE(86),
    [sym_default_cert_level] = STATE(86),
    [sym_min_cert_level] = STATE(86),
    [sym_trusted_key] = STATE(86),
    [sym_add_desig_revoker] = STATE(86),
    [sym_trust_model] = STATE(86),
    [sym_always_trust] = STATE(86),
    [sym_assert_signer] = STATE(86),
    [sym_auto_key_locate] = STATE(86),
    [sym_no_auto_key_locate] = STATE(86),
    [sym_auto_key_import] = STATE(86),
    [sym_no_auto_key_import] = STATE(86),
    [sym_auto_key_retrieve] = STATE(86),
    [sym_no_auto_key_retrieve] = STATE(86),
    [sym_keyid_format] = STATE(86),
    [sym_keyserver] = STATE(86),
    [sym_completes_needed] = STATE(86),
    [sym_marginals_needed] = STATE(86),
    [sym_tofu_default_policy] = STATE(86),
    [sym_max_cert_depth] = STATE(86),
    [sym_no_sig_cache] = STATE(86),
    [sym_auto_check_trustdb] = STATE(86),
    [sym_no_auto_check_trustdb] = STATE(86),
    [sym_agent_program] = STATE(86),
    [sym_dirmngr_program] = STATE(86),
    [sym_disable_dirmngr] = STATE(86),
    [sym_no_autostart] = STATE(86),
    [sym_lock_once] = STATE(86),
    [sym_lock_multiple] = STATE(86),
    [sym_lock_never] = STATE(86),
    [sym_exit_on_status_write_error] = STATE(86),
    [sym_limit_card_insert_tries] = STATE(86),
    [sym_no_random_seed_file] = STATE(86),
    [sym_no_greeting] = STATE(86),
    [sym_no_secmem_warning] = STATE(86),
    [sym_no_permission_warning] = STATE(86),
    [sym_require_secmem] = STATE(86),
    [sym_no_require_secmem] = STATE(86),
    [sym_require_cross_verification] = STATE(86),
    [sym_no_require_cross_verification] = STATE(86),
    [sym_expert] = STATE(86),
    [sym_no_expert] = STATE(86),
    [sym_gnupg] = STATE(86),
    [sym_openpgp] = STATE(86),
    [sym_rfc4880] = STATE(86),
    [sym_rfc4880bis] = STATE(86),
    [sym_rfc2440] = STATE(86),
    [sym_pgp7] = STATE(86),
    [sym_pgp8] = STATE(86),
    [sym_compliance] = STATE(86),
    [sym_min_rsa_length] = STATE(86),
    [sym_require_compliance] = STATE(86),
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
    [anon_sym_gnupg] = ACTIONS(147),
    [anon_sym_openpgp] = ACTIONS(149),
    [anon_sym_rfc4880] = ACTIONS(151),
    [anon_sym_rfc4880bis] = ACTIONS(153),
    [anon_sym_rfc2440] = ACTIONS(155),
    [anon_sym_pgp7] = ACTIONS(157),
    [anon_sym_pgp8] = ACTIONS(159),
    [anon_sym_compliance] = ACTIONS(161),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(163),
    [anon_sym_require_DASHcompliance] = ACTIONS(165),
    [sym_comment] = ACTIONS(167),
    [sym__space] = ACTIONS(169),
  },
  [2] = {
    [sym_default_key] = STATE(86),
    [sym_default_recipient] = STATE(86),
    [sym_default_recipient_self] = STATE(86),
    [sym_no_default_recipient] = STATE(86),
    [sym_verbose] = STATE(86),
    [sym_no_tty] = STATE(86),
    [sym_list_options] = STATE(86),
    [sym_verify_options] = STATE(86),
    [sym_enable_large_rsa] = STATE(86),
    [sym_disable_large_rsa] = STATE(86),
    [sym_enable_dsa2] = STATE(86),
    [sym_disable_dsa2] = STATE(86),
    [sym_photo_viewer] = STATE(86),
    [sym_exec_path] = STATE(86),
    [sym_keyring] = STATE(86),
    [sym_primary_keyring] = STATE(86),
    [sym_trustdb_name] = STATE(86),
    [sym_display_charset] = STATE(86),
    [sym_utf8_strings] = STATE(86),
    [sym_no_utf8_strings] = STATE(86),
    [sym_compress_level] = STATE(86),
    [sym_bzip2_compress_level] = STATE(86),
    [sym_no_compress] = STATE(86),
    [sym_bzip2_decompress_lowmem] = STATE(86),
    [sym_mangle_dos_filenames] = STATE(86),
    [sym_no_mangle_dos_filenames] = STATE(86),
    [sym_ask_cert_level] = STATE(86),
    [sym_no_ask_cert_level] = STATE(86),
    [sym_default_cert_level] = STATE(86),
    [sym_min_cert_level] = STATE(86),
    [sym_trusted_key] = STATE(86),
    [sym_add_desig_revoker] = STATE(86),
    [sym_trust_model] = STATE(86),
    [sym_always_trust] = STATE(86),
    [sym_assert_signer] = STATE(86),
    [sym_auto_key_locate] = STATE(86),
    [sym_no_auto_key_locate] = STATE(86),
    [sym_auto_key_import] = STATE(86),
    [sym_no_auto_key_import] = STATE(86),
    [sym_auto_key_retrieve] = STATE(86),
    [sym_no_auto_key_retrieve] = STATE(86),
    [sym_keyid_format] = STATE(86),
    [sym_keyserver] = STATE(86),
    [sym_completes_needed] = STATE(86),
    [sym_marginals_needed] = STATE(86),
    [sym_tofu_default_policy] = STATE(86),
    [sym_max_cert_depth] = STATE(86),
    [sym_no_sig_cache] = STATE(86),
    [sym_auto_check_trustdb] = STATE(86),
    [sym_no_auto_check_trustdb] = STATE(86),
    [sym_agent_program] = STATE(86),
    [sym_dirmngr_program] = STATE(86),
    [sym_disable_dirmngr] = STATE(86),
    [sym_no_autostart] = STATE(86),
    [sym_lock_once] = STATE(86),
    [sym_lock_multiple] = STATE(86),
    [sym_lock_never] = STATE(86),
    [sym_exit_on_status_write_error] = STATE(86),
    [sym_limit_card_insert_tries] = STATE(86),
    [sym_no_random_seed_file] = STATE(86),
    [sym_no_greeting] = STATE(86),
    [sym_no_secmem_warning] = STATE(86),
    [sym_no_permission_warning] = STATE(86),
    [sym_require_secmem] = STATE(86),
    [sym_no_require_secmem] = STATE(86),
    [sym_require_cross_verification] = STATE(86),
    [sym_no_require_cross_verification] = STATE(86),
    [sym_expert] = STATE(86),
    [sym_no_expert] = STATE(86),
    [sym_gnupg] = STATE(86),
    [sym_openpgp] = STATE(86),
    [sym_rfc4880] = STATE(86),
    [sym_rfc4880bis] = STATE(86),
    [sym_rfc2440] = STATE(86),
    [sym_pgp7] = STATE(86),
    [sym_pgp8] = STATE(86),
    [sym_compliance] = STATE(86),
    [sym_min_rsa_length] = STATE(86),
    [sym_require_compliance] = STATE(86),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(171),
    [aux_sym_config_token1] = ACTIONS(173),
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
    [anon_sym_gnupg] = ACTIONS(147),
    [anon_sym_openpgp] = ACTIONS(149),
    [anon_sym_rfc4880] = ACTIONS(151),
    [anon_sym_rfc4880bis] = ACTIONS(153),
    [anon_sym_rfc2440] = ACTIONS(155),
    [anon_sym_pgp7] = ACTIONS(157),
    [anon_sym_pgp8] = ACTIONS(159),
    [anon_sym_compliance] = ACTIONS(161),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(163),
    [anon_sym_require_DASHcompliance] = ACTIONS(165),
    [sym_comment] = ACTIONS(167),
    [sym__space] = ACTIONS(169),
  },
  [3] = {
    [sym_default_key] = STATE(86),
    [sym_default_recipient] = STATE(86),
    [sym_default_recipient_self] = STATE(86),
    [sym_no_default_recipient] = STATE(86),
    [sym_verbose] = STATE(86),
    [sym_no_tty] = STATE(86),
    [sym_list_options] = STATE(86),
    [sym_verify_options] = STATE(86),
    [sym_enable_large_rsa] = STATE(86),
    [sym_disable_large_rsa] = STATE(86),
    [sym_enable_dsa2] = STATE(86),
    [sym_disable_dsa2] = STATE(86),
    [sym_photo_viewer] = STATE(86),
    [sym_exec_path] = STATE(86),
    [sym_keyring] = STATE(86),
    [sym_primary_keyring] = STATE(86),
    [sym_trustdb_name] = STATE(86),
    [sym_display_charset] = STATE(86),
    [sym_utf8_strings] = STATE(86),
    [sym_no_utf8_strings] = STATE(86),
    [sym_compress_level] = STATE(86),
    [sym_bzip2_compress_level] = STATE(86),
    [sym_no_compress] = STATE(86),
    [sym_bzip2_decompress_lowmem] = STATE(86),
    [sym_mangle_dos_filenames] = STATE(86),
    [sym_no_mangle_dos_filenames] = STATE(86),
    [sym_ask_cert_level] = STATE(86),
    [sym_no_ask_cert_level] = STATE(86),
    [sym_default_cert_level] = STATE(86),
    [sym_min_cert_level] = STATE(86),
    [sym_trusted_key] = STATE(86),
    [sym_add_desig_revoker] = STATE(86),
    [sym_trust_model] = STATE(86),
    [sym_always_trust] = STATE(86),
    [sym_assert_signer] = STATE(86),
    [sym_auto_key_locate] = STATE(86),
    [sym_no_auto_key_locate] = STATE(86),
    [sym_auto_key_import] = STATE(86),
    [sym_no_auto_key_import] = STATE(86),
    [sym_auto_key_retrieve] = STATE(86),
    [sym_no_auto_key_retrieve] = STATE(86),
    [sym_keyid_format] = STATE(86),
    [sym_keyserver] = STATE(86),
    [sym_completes_needed] = STATE(86),
    [sym_marginals_needed] = STATE(86),
    [sym_tofu_default_policy] = STATE(86),
    [sym_max_cert_depth] = STATE(86),
    [sym_no_sig_cache] = STATE(86),
    [sym_auto_check_trustdb] = STATE(86),
    [sym_no_auto_check_trustdb] = STATE(86),
    [sym_agent_program] = STATE(86),
    [sym_dirmngr_program] = STATE(86),
    [sym_disable_dirmngr] = STATE(86),
    [sym_no_autostart] = STATE(86),
    [sym_lock_once] = STATE(86),
    [sym_lock_multiple] = STATE(86),
    [sym_lock_never] = STATE(86),
    [sym_exit_on_status_write_error] = STATE(86),
    [sym_limit_card_insert_tries] = STATE(86),
    [sym_no_random_seed_file] = STATE(86),
    [sym_no_greeting] = STATE(86),
    [sym_no_secmem_warning] = STATE(86),
    [sym_no_permission_warning] = STATE(86),
    [sym_require_secmem] = STATE(86),
    [sym_no_require_secmem] = STATE(86),
    [sym_require_cross_verification] = STATE(86),
    [sym_no_require_cross_verification] = STATE(86),
    [sym_expert] = STATE(86),
    [sym_no_expert] = STATE(86),
    [sym_gnupg] = STATE(86),
    [sym_openpgp] = STATE(86),
    [sym_rfc4880] = STATE(86),
    [sym_rfc4880bis] = STATE(86),
    [sym_rfc2440] = STATE(86),
    [sym_pgp7] = STATE(86),
    [sym_pgp8] = STATE(86),
    [sym_compliance] = STATE(86),
    [sym_min_rsa_length] = STATE(86),
    [sym_require_compliance] = STATE(86),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_config_token1] = ACTIONS(177),
    [anon_sym_default_DASHkey] = ACTIONS(180),
    [anon_sym_default_DASHrecipient] = ACTIONS(183),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(186),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(189),
    [anon_sym_verbose] = ACTIONS(192),
    [anon_sym_no_DASHtty] = ACTIONS(195),
    [anon_sym_list_DASHoptions] = ACTIONS(198),
    [anon_sym_verify_DASHoptions] = ACTIONS(201),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(204),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(207),
    [anon_sym_enable_DASHdsa2] = ACTIONS(210),
    [anon_sym_disable_DASHdsa2] = ACTIONS(213),
    [anon_sym_photo_DASHviewer] = ACTIONS(216),
    [anon_sym_exec_DASHpath] = ACTIONS(219),
    [anon_sym_keyring] = ACTIONS(222),
    [anon_sym_primary_DASHkeyring] = ACTIONS(225),
    [anon_sym_trustdb_DASHname] = ACTIONS(228),
    [anon_sym_display_DASHcharset] = ACTIONS(231),
    [anon_sym_utf8_DASHstrings] = ACTIONS(234),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(237),
    [anon_sym_compress_DASHlevel] = ACTIONS(240),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(243),
    [anon_sym_no_DASHcompress] = ACTIONS(246),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(249),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(252),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(255),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(258),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(261),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(264),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(267),
    [anon_sym_trusted_DASHkey] = ACTIONS(270),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(273),
    [anon_sym_trust_DASHmodel] = ACTIONS(276),
    [anon_sym_always_DASHtrust] = ACTIONS(279),
    [anon_sym_assert_DASHsigner] = ACTIONS(282),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(285),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(288),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(291),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(294),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(297),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(300),
    [anon_sym_keyid_DASHformat] = ACTIONS(303),
    [anon_sym_keyserver] = ACTIONS(306),
    [anon_sym_completes_DASHneeded] = ACTIONS(309),
    [anon_sym_marginals_DASHneeded] = ACTIONS(312),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(315),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(318),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(321),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(324),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(327),
    [anon_sym_agent_DASHprogram] = ACTIONS(330),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(333),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(336),
    [anon_sym_no_DASHautostart] = ACTIONS(339),
    [anon_sym_lock_DASHonce] = ACTIONS(342),
    [anon_sym_lock_DASHmultiple] = ACTIONS(345),
    [anon_sym_lock_DASHnever] = ACTIONS(348),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(351),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(354),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(357),
    [anon_sym_no_DASHgreeting] = ACTIONS(360),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(363),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(366),
    [anon_sym_require_DASHsecmem] = ACTIONS(369),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(372),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(375),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(378),
    [anon_sym_expert] = ACTIONS(381),
    [anon_sym_no_DASHexpert] = ACTIONS(384),
    [anon_sym_gnupg] = ACTIONS(387),
    [anon_sym_openpgp] = ACTIONS(390),
    [anon_sym_rfc4880] = ACTIONS(393),
    [anon_sym_rfc4880bis] = ACTIONS(396),
    [anon_sym_rfc2440] = ACTIONS(399),
    [anon_sym_pgp7] = ACTIONS(402),
    [anon_sym_pgp8] = ACTIONS(405),
    [anon_sym_compliance] = ACTIONS(408),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(411),
    [anon_sym_require_DASHcompliance] = ACTIONS(414),
    [sym_comment] = ACTIONS(417),
    [sym__space] = ACTIONS(169),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(175),
    [aux_sym_config_token1] = ACTIONS(175),
    [anon_sym_default_DASHkey] = ACTIONS(175),
    [anon_sym_default_DASHrecipient] = ACTIONS(420),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(175),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(175),
    [anon_sym_verbose] = ACTIONS(175),
    [anon_sym_no_DASHtty] = ACTIONS(175),
    [anon_sym_list_DASHoptions] = ACTIONS(175),
    [anon_sym_verify_DASHoptions] = ACTIONS(175),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(175),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(175),
    [anon_sym_enable_DASHdsa2] = ACTIONS(175),
    [anon_sym_disable_DASHdsa2] = ACTIONS(175),
    [anon_sym_photo_DASHviewer] = ACTIONS(175),
    [anon_sym_exec_DASHpath] = ACTIONS(175),
    [anon_sym_keyring] = ACTIONS(175),
    [anon_sym_primary_DASHkeyring] = ACTIONS(175),
    [anon_sym_trustdb_DASHname] = ACTIONS(175),
    [anon_sym_display_DASHcharset] = ACTIONS(175),
    [anon_sym_utf8_DASHstrings] = ACTIONS(175),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(175),
    [anon_sym_compress_DASHlevel] = ACTIONS(175),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(175),
    [anon_sym_no_DASHcompress] = ACTIONS(175),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(175),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(175),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(175),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(175),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(175),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(175),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(175),
    [anon_sym_trusted_DASHkey] = ACTIONS(175),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(175),
    [anon_sym_trust_DASHmodel] = ACTIONS(175),
    [anon_sym_always_DASHtrust] = ACTIONS(175),
    [anon_sym_assert_DASHsigner] = ACTIONS(175),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(175),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(175),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(175),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(175),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(175),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(175),
    [anon_sym_keyid_DASHformat] = ACTIONS(175),
    [anon_sym_keyserver] = ACTIONS(175),
    [anon_sym_completes_DASHneeded] = ACTIONS(175),
    [anon_sym_marginals_DASHneeded] = ACTIONS(175),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(175),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(175),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(175),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(175),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(175),
    [anon_sym_agent_DASHprogram] = ACTIONS(175),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(175),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(175),
    [anon_sym_no_DASHautostart] = ACTIONS(175),
    [anon_sym_lock_DASHonce] = ACTIONS(175),
    [anon_sym_lock_DASHmultiple] = ACTIONS(175),
    [anon_sym_lock_DASHnever] = ACTIONS(175),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(175),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(175),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(175),
    [anon_sym_no_DASHgreeting] = ACTIONS(175),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(175),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(175),
    [anon_sym_require_DASHsecmem] = ACTIONS(175),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(175),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(175),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(175),
    [anon_sym_expert] = ACTIONS(175),
    [anon_sym_no_DASHexpert] = ACTIONS(175),
    [anon_sym_gnupg] = ACTIONS(175),
    [anon_sym_openpgp] = ACTIONS(175),
    [anon_sym_rfc4880] = ACTIONS(420),
    [anon_sym_rfc4880bis] = ACTIONS(175),
    [anon_sym_rfc2440] = ACTIONS(175),
    [anon_sym_pgp7] = ACTIONS(175),
    [anon_sym_pgp8] = ACTIONS(175),
    [anon_sym_compliance] = ACTIONS(175),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(175),
    [anon_sym_require_DASHcompliance] = ACTIONS(175),
    [sym_comment] = ACTIONS(175),
    [sym__space] = ACTIONS(169),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(422), 1,
      aux_sym__command_token1,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      sym_format,
    STATE(26), 1,
      aux_sym__command_repeat1,
    STATE(125), 1,
      sym__command,
  [22] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(430), 1,
      anon_sym_DQUOTE,
    ACTIONS(432), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(434), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [39] = 6,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(436), 1,
      aux_sym_config_token1,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      sym__mechanism,
    ACTIONS(444), 1,
      sym_url,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [58] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(450), 1,
      anon_sym_SQUOTE,
    ACTIONS(452), 1,
      aux_sym__command_token3,
    STATE(8), 1,
      aux_sym__command_repeat3,
    ACTIONS(447), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [75] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    ACTIONS(457), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(460), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [92] = 6,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(463), 1,
      aux_sym_config_token1,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      sym__mechanism,
    ACTIONS(469), 1,
      sym_url,
    STATE(12), 1,
      aux_sym_auto_key_locate_repeat1,
  [111] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(473), 1,
      aux_sym__command_token3,
    STATE(8), 1,
      aux_sym__command_repeat3,
    ACTIONS(471), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [128] = 6,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      sym__mechanism,
    ACTIONS(469), 1,
      sym_url,
    ACTIONS(475), 1,
      aux_sym_config_token1,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [147] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(477), 1,
      anon_sym_DQUOTE,
    ACTIONS(479), 1,
      aux_sym__command_token2,
    ACTIONS(482), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [163] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(485), 1,
      aux_sym_config_token1,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      sym__list_parameter,
    STATE(20), 1,
      aux_sym_list_options_repeat1,
  [179] = 3,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(493), 1,
      sym__mechanism,
    ACTIONS(491), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [191] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(120), 1,
      sym_string,
  [207] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(501), 1,
      aux_sym_config_token1,
    ACTIONS(503), 1,
      aux_sym__command_token1,
    ACTIONS(506), 1,
      sym_format,
    STATE(17), 1,
      aux_sym__command_repeat1,
  [223] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(509), 1,
      aux_sym_config_token1,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      sym__verify_parameter,
    STATE(19), 1,
      aux_sym_verify_options_repeat1,
  [239] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(515), 1,
      aux_sym_config_token1,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      sym__verify_parameter,
    STATE(19), 1,
      aux_sym_verify_options_repeat1,
  [255] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      sym__list_parameter,
    ACTIONS(523), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym_list_options_repeat1,
  [271] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(128), 1,
      sym_string,
  [287] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(525), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
    ACTIONS(529), 1,
      aux_sym__command_token3,
    STATE(25), 1,
      aux_sym_string_repeat2,
  [303] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      aux_sym__command_token2,
    ACTIONS(533), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [319] = 3,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(537), 1,
      sym__mechanism,
    ACTIONS(535), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [331] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(539), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(542), 1,
      anon_sym_SQUOTE,
    ACTIONS(544), 1,
      aux_sym__command_token3,
    STATE(25), 1,
      aux_sym_string_repeat2,
  [347] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(547), 1,
      aux_sym_config_token1,
    ACTIONS(549), 1,
      aux_sym__command_token1,
    ACTIONS(551), 1,
      sym_format,
    STATE(17), 1,
      aux_sym__command_repeat1,
  [363] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(555), 1,
      aux_sym__command_token3,
    STATE(11), 1,
      aux_sym__command_repeat3,
    ACTIONS(553), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [377] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(557), 1,
      aux_sym__command_token2,
    STATE(6), 1,
      aux_sym__command_repeat2,
    ACTIONS(559), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [391] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      sym__verify_parameter,
    ACTIONS(561), 1,
      aux_sym_config_token1,
    STATE(18), 1,
      aux_sym_verify_options_repeat1,
  [407] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(127), 1,
      sym_string,
  [423] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(129), 1,
      sym_string,
  [439] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(130), 1,
      sym_string,
  [455] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(140), 1,
      sym_string,
  [471] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(563), 1,
      aux_sym_config_token1,
    ACTIONS(565), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      sym__list_parameter,
    STATE(34), 1,
      aux_sym_list_options_repeat1,
  [487] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(149), 1,
      sym_string,
  [503] = 5,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    STATE(148), 1,
      sym_string,
  [519] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(571), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [528] = 3,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_sensitive_COLON,
    ACTIONS(575), 2,
      anon_sym_clear,
      sym_key,
  [539] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(577), 1,
      aux_sym__command_token2,
    ACTIONS(579), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [552] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(581), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(583), 1,
      aux_sym__command_token3,
    STATE(22), 1,
      aux_sym_string_repeat2,
  [565] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(585), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [574] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(587), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [583] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(589), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [592] = 3,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(591), 1,
      sym__mechanism,
    ACTIONS(593), 1,
      sym_url,
  [602] = 3,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(595), 1,
      sym__mechanism,
    ACTIONS(597), 1,
      sym_url,
  [612] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(599), 1,
      aux_sym_config_token1,
  [619] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(601), 1,
      sym_number,
  [626] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(603), 1,
      aux_sym_config_token1,
  [633] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(605), 1,
      aux_sym_config_token1,
  [640] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(607), 1,
      aux_sym_config_token1,
  [647] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(609), 1,
      aux_sym_config_token1,
  [654] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(611), 1,
      aux_sym_config_token1,
  [661] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(613), 1,
      aux_sym_config_token1,
  [668] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(615), 1,
      aux_sym_config_token1,
  [675] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(617), 1,
      aux_sym_config_token1,
  [682] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(619), 1,
      aux_sym_config_token1,
  [689] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(621), 1,
      aux_sym_config_token1,
  [696] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(623), 1,
      aux_sym_config_token1,
  [703] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(625), 1,
      aux_sym_config_token1,
  [710] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(627), 1,
      aux_sym_config_token1,
  [717] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(629), 1,
      aux_sym_config_token1,
  [724] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(631), 1,
      aux_sym_config_token1,
  [731] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(633), 1,
      aux_sym_config_token1,
  [738] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(635), 1,
      aux_sym_config_token1,
  [745] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(637), 1,
      aux_sym_config_token1,
  [752] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(639), 1,
      aux_sym_config_token1,
  [759] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(641), 1,
      aux_sym_config_token1,
  [766] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(643), 1,
      aux_sym_config_token1,
  [773] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(645), 1,
      aux_sym_config_token1,
  [780] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(647), 1,
      aux_sym_config_token1,
  [787] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(649), 1,
      aux_sym_config_token1,
  [794] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(651), 1,
      aux_sym_config_token1,
  [801] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(653), 1,
      aux_sym_config_token1,
  [808] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(655), 1,
      aux_sym_config_token1,
  [815] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(657), 1,
      aux_sym_config_token1,
  [822] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(659), 1,
      aux_sym_config_token1,
  [829] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(661), 1,
      aux_sym_config_token1,
  [836] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(663), 1,
      aux_sym_config_token1,
  [843] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(665), 1,
      aux_sym_config_token1,
  [850] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(667), 1,
      aux_sym_config_token1,
  [857] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(669), 1,
      aux_sym_config_token1,
  [864] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(671), 1,
      aux_sym_config_token1,
  [871] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(673), 1,
      aux_sym_config_token1,
  [878] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(675), 1,
      aux_sym_config_token1,
  [885] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(677), 1,
      aux_sym_config_token1,
  [892] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(679), 1,
      aux_sym_config_token1,
  [899] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(681), 1,
      ts_builtin_sym_end,
  [906] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(683), 1,
      sym_key,
  [913] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(685), 1,
      sym__list_parameter,
  [920] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(687), 1,
      sym__verify_parameter,
  [927] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(689), 1,
      aux_sym_config_token1,
  [934] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(691), 1,
      aux_sym_config_token1,
  [941] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(693), 1,
      sym__charset,
  [948] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(695), 1,
      aux_sym_compress_level_token1,
  [955] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(697), 1,
      aux_sym_compress_level_token1,
  [962] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(699), 1,
      aux_sym_default_cert_level_token1,
  [969] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(701), 1,
      aux_sym_default_cert_level_token1,
  [976] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(703), 1,
      sym_key,
  [983] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(705), 1,
      aux_sym_config_token1,
  [990] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(707), 1,
      sym__model,
  [997] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(709), 1,
      aux_sym_config_token1,
  [1004] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(711), 1,
      aux_sym_config_token1,
  [1011] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(713), 1,
      sym__keyid_format,
  [1018] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(715), 1,
      sym_url,
  [1025] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(717), 1,
      sym_number,
  [1032] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(719), 1,
      sym_number,
  [1039] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(721), 1,
      sym__tofu_policy,
  [1046] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(723), 1,
      sym_number,
  [1053] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(725), 1,
      sym__verify_parameter,
  [1060] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(727), 1,
      aux_sym_config_token1,
  [1067] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(729), 1,
      sym_number,
  [1074] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(731), 1,
      sym__compliance,
  [1081] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(733), 1,
      aux_sym_config_token1,
  [1088] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(735), 1,
      aux_sym_config_token1,
  [1095] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(737), 1,
      sym__list_parameter,
  [1102] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(739), 1,
      aux_sym_config_token1,
  [1109] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(741), 1,
      aux_sym_config_token1,
  [1116] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(743), 1,
      aux_sym_config_token1,
  [1123] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(745), 1,
      aux_sym_config_token1,
  [1130] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(747), 1,
      aux_sym_config_token1,
  [1137] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(749), 1,
      aux_sym_config_token1,
  [1144] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(751), 1,
      aux_sym_config_token1,
  [1151] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(753), 1,
      aux_sym_config_token1,
  [1158] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(755), 1,
      aux_sym_config_token1,
  [1165] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(757), 1,
      aux_sym_config_token1,
  [1172] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(759), 1,
      aux_sym_config_token1,
  [1179] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(761), 1,
      aux_sym_config_token1,
  [1186] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(763), 1,
      aux_sym_config_token1,
  [1193] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(765), 1,
      aux_sym_config_token1,
  [1200] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(767), 1,
      aux_sym_config_token1,
  [1207] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(769), 1,
      aux_sym_config_token1,
  [1214] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(771), 1,
      aux_sym_config_token1,
  [1221] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(773), 1,
      aux_sym_config_token1,
  [1228] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(775), 1,
      aux_sym_config_token1,
  [1235] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(777), 1,
      aux_sym_config_token1,
  [1242] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(779), 1,
      aux_sym_config_token1,
  [1249] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(781), 1,
      sym_key,
  [1256] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(783), 1,
      aux_sym_config_token1,
  [1263] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(785), 1,
      aux_sym_config_token1,
  [1270] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(787), 1,
      aux_sym_config_token1,
  [1277] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(789), 1,
      aux_sym_config_token1,
  [1284] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(791), 1,
      aux_sym_config_token1,
  [1291] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(793), 1,
      aux_sym_config_token1,
  [1298] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(795), 1,
      aux_sym_config_token1,
  [1305] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(797), 1,
      aux_sym_config_token1,
  [1312] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(799), 1,
      aux_sym_config_token1,
  [1319] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(801), 1,
      aux_sym_config_token1,
  [1326] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(803), 1,
      aux_sym_config_token1,
  [1333] = 2,
    ACTIONS(169), 1,
      sym__space,
    ACTIONS(805), 1,
      aux_sym_config_token1,
  [1340] = 1,
    ACTIONS(807), 1,
      sym__space,
  [1344] = 1,
    ACTIONS(809), 1,
      sym__space,
  [1348] = 1,
    ACTIONS(811), 1,
      sym__space,
  [1352] = 1,
    ACTIONS(813), 1,
      sym__space,
  [1356] = 1,
    ACTIONS(815), 1,
      sym__space,
  [1360] = 1,
    ACTIONS(817), 1,
      sym__space,
  [1364] = 1,
    ACTIONS(819), 1,
      sym__space,
  [1368] = 1,
    ACTIONS(821), 1,
      sym__space,
  [1372] = 1,
    ACTIONS(823), 1,
      sym__space,
  [1376] = 1,
    ACTIONS(825), 1,
      sym__space,
  [1380] = 1,
    ACTIONS(827), 1,
      sym__space,
  [1384] = 1,
    ACTIONS(829), 1,
      sym__space,
  [1388] = 1,
    ACTIONS(831), 1,
      sym__space,
  [1392] = 1,
    ACTIONS(833), 1,
      sym__space,
  [1396] = 1,
    ACTIONS(835), 1,
      sym__space,
  [1400] = 1,
    ACTIONS(837), 1,
      sym__space,
  [1404] = 1,
    ACTIONS(839), 1,
      sym__space,
  [1408] = 1,
    ACTIONS(841), 1,
      sym__space,
  [1412] = 1,
    ACTIONS(843), 1,
      sym__space,
  [1416] = 1,
    ACTIONS(845), 1,
      sym__space,
  [1420] = 1,
    ACTIONS(847), 1,
      sym__space,
  [1424] = 1,
    ACTIONS(849), 1,
      sym__space,
  [1428] = 1,
    ACTIONS(851), 1,
      sym__space,
  [1432] = 1,
    ACTIONS(853), 1,
      sym__space,
  [1436] = 1,
    ACTIONS(855), 1,
      sym__space,
  [1440] = 1,
    ACTIONS(857), 1,
      sym__space,
  [1444] = 1,
    ACTIONS(859), 1,
      sym__space,
  [1448] = 1,
    ACTIONS(861), 1,
      sym__space,
  [1452] = 1,
    ACTIONS(863), 1,
      sym__space,
  [1456] = 1,
    ACTIONS(865), 1,
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
  [SMALL_STATE(15)] = 179,
  [SMALL_STATE(16)] = 191,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 255,
  [SMALL_STATE(21)] = 271,
  [SMALL_STATE(22)] = 287,
  [SMALL_STATE(23)] = 303,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 347,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 377,
  [SMALL_STATE(29)] = 391,
  [SMALL_STATE(30)] = 407,
  [SMALL_STATE(31)] = 423,
  [SMALL_STATE(32)] = 439,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 487,
  [SMALL_STATE(36)] = 503,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 528,
  [SMALL_STATE(39)] = 539,
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
  [SMALL_STATE(139)] = 1263,
  [SMALL_STATE(140)] = 1270,
  [SMALL_STATE(141)] = 1277,
  [SMALL_STATE(142)] = 1284,
  [SMALL_STATE(143)] = 1291,
  [SMALL_STATE(144)] = 1298,
  [SMALL_STATE(145)] = 1305,
  [SMALL_STATE(146)] = 1312,
  [SMALL_STATE(147)] = 1319,
  [SMALL_STATE(148)] = 1326,
  [SMALL_STATE(149)] = 1333,
  [SMALL_STATE(150)] = 1340,
  [SMALL_STATE(151)] = 1344,
  [SMALL_STATE(152)] = 1348,
  [SMALL_STATE(153)] = 1352,
  [SMALL_STATE(154)] = 1356,
  [SMALL_STATE(155)] = 1360,
  [SMALL_STATE(156)] = 1364,
  [SMALL_STATE(157)] = 1368,
  [SMALL_STATE(158)] = 1372,
  [SMALL_STATE(159)] = 1376,
  [SMALL_STATE(160)] = 1380,
  [SMALL_STATE(161)] = 1384,
  [SMALL_STATE(162)] = 1388,
  [SMALL_STATE(163)] = 1392,
  [SMALL_STATE(164)] = 1396,
  [SMALL_STATE(165)] = 1400,
  [SMALL_STATE(166)] = 1404,
  [SMALL_STATE(167)] = 1408,
  [SMALL_STATE(168)] = 1412,
  [SMALL_STATE(169)] = 1416,
  [SMALL_STATE(170)] = 1420,
  [SMALL_STATE(171)] = 1424,
  [SMALL_STATE(172)] = 1428,
  [SMALL_STATE(173)] = 1432,
  [SMALL_STATE(174)] = 1436,
  [SMALL_STATE(175)] = 1440,
  [SMALL_STATE(176)] = 1444,
  [SMALL_STATE(177)] = 1448,
  [SMALL_STATE(178)] = 1452,
  [SMALL_STATE(179)] = 1456,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(159),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(179),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(48),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(49),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(50),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(52),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(173),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(166),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(53),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(57),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(58),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(83),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(170),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(163),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(162),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(161),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(160),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(91),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(110),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(156),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(154),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(117),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(135),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(126),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(124),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(123),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(165),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(152),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(153),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(155),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(114),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(157),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(158),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(102),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(101),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(92),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(113),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(178),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(177),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(176),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(175),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(174),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(171),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(54),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(55),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(56),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(151),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(169),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(59),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(60),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(61),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(63),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(64),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(168),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(66),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(67),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(68),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(69),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(70),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(71),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(72),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(73),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(74),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(75),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(76),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(77),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(78),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(79),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(80),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(81),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(82),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(167),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(150),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(85),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(86),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 16),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 16), SHIFT_REPEAT(45),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 16), SHIFT_REPEAT(15),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 16), SHIFT_REPEAT(15),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(8),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(8),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(9),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(9),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 12),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(13),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 11),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 11),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [503] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(17),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(17),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(109),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(43),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 15),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(25),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [544] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(25),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(115),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(41),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 14),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 14),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 10),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 13),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 13),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gnupg, 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openpgp, 1),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880bis, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc2440, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp7, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp8, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_compliance, 1),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [681] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_rsa_length, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compliance, 3, .production_id = 9),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
