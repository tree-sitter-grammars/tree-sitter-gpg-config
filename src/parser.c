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
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 0
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 20

enum {
  aux_sym_config_token1 = 1,
  aux_sym_unknown_option_token1 = 2,
  aux_sym_unknown_option_token2 = 3,
  anon_sym_default_DASHkey = 4,
  anon_sym_default_DASHrecipient = 5,
  anon_sym_default_DASHrecipient_DASHself = 6,
  anon_sym_no_DASHdefault_DASHrecipient = 7,
  anon_sym_verbose = 8,
  anon_sym_no_DASHtty = 9,
  anon_sym_list_DASHoptions = 10,
  anon_sym_COMMA = 11,
  sym__list_parameter = 12,
  anon_sym_verify_DASHoptions = 13,
  sym__verify_parameter = 14,
  anon_sym_enable_DASHlarge_DASHrsa = 15,
  anon_sym_disable_DASHlarge_DASHrsa = 16,
  anon_sym_enable_DASHdsa2 = 17,
  anon_sym_disable_DASHdsa2 = 18,
  anon_sym_photo_DASHviewer = 19,
  aux_sym__command_token1 = 20,
  anon_sym_DQUOTE = 21,
  aux_sym__command_token2 = 22,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 23,
  anon_sym_SQUOTE = 24,
  aux_sym__command_token3 = 25,
  sym_format = 26,
  anon_sym_exec_DASHpath = 27,
  anon_sym_keyring = 28,
  anon_sym_primary_DASHkeyring = 29,
  anon_sym_trustdb_DASHname = 30,
  anon_sym_display_DASHcharset = 31,
  sym__charset = 32,
  anon_sym_utf8_DASHstrings = 33,
  anon_sym_no_DASHutf8_DASHstrings = 34,
  anon_sym_compress_DASHlevel = 35,
  aux_sym_compress_level_token1 = 36,
  anon_sym_bzip2_DASHcompress_DASHlevel = 37,
  anon_sym_no_DASHcompress = 38,
  anon_sym_bzip2_DASHdecompress_DASHlowmem = 39,
  anon_sym_mangle_DASHdos_DASHfilenames = 40,
  anon_sym_no_DASHmangle_DASHdos_DASHfilenames = 41,
  anon_sym_ask_DASHcert_DASHlevel = 42,
  anon_sym_no_DASHask_DASHcert_DASHlevel = 43,
  anon_sym_default_DASHcert_DASHlevel = 44,
  aux_sym_default_cert_level_token1 = 45,
  anon_sym_min_DASHcert_DASHlevel = 46,
  anon_sym_trusted_DASHkey = 47,
  anon_sym_add_DASHdesig_DASHrevoker = 48,
  aux_sym_add_desig_revoker_token1 = 49,
  aux_sym_add_desig_revoker_token2 = 50,
  anon_sym_trust_DASHmodel = 51,
  sym__model = 52,
  anon_sym_always_DASHtrust = 53,
  anon_sym_assert_DASHsigner = 54,
  anon_sym_auto_DASHkey_DASHlocate = 55,
  sym__mechanism = 56,
  anon_sym_no_DASHauto_DASHkey_DASHlocate = 57,
  anon_sym_auto_DASHkey_DASHimport = 58,
  anon_sym_no_DASHauto_DASHkey_DASHimport = 59,
  anon_sym_auto_DASHkey_DASHretrieve = 60,
  anon_sym_no_DASHauto_DASHkey_DASHretrieve = 61,
  anon_sym_keyid_DASHformat = 62,
  sym__keyid_format = 63,
  anon_sym_keyserver = 64,
  anon_sym_completes_DASHneeded = 65,
  anon_sym_marginals_DASHneeded = 66,
  anon_sym_tofu_DASHdefault_DASHpolicy = 67,
  anon_sym_max_DASHcert_DASHdepth = 68,
  anon_sym_no_DASHsig_DASHcache = 69,
  anon_sym_auto_DASHcheck_DASHtrustdb = 70,
  anon_sym_no_DASHauto_DASHcheck_DASHtrustdb = 71,
  sym__tofu_policy = 72,
  anon_sym_agent_DASHprogram = 73,
  anon_sym_dirmngr_DASHprogram = 74,
  anon_sym_disable_DASHdirmngr = 75,
  anon_sym_no_DASHautostart = 76,
  anon_sym_lock_DASHonce = 77,
  anon_sym_lock_DASHmultiple = 78,
  anon_sym_lock_DASHnever = 79,
  anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror = 80,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 81,
  anon_sym_no_DASHrandom_DASHseed_DASHfile = 82,
  anon_sym_no_DASHgreeting = 83,
  anon_sym_no_DASHsecmem_DASHwarning = 84,
  anon_sym_no_DASHpermission_DASHwarning = 85,
  anon_sym_require_DASHsecmem = 86,
  anon_sym_no_DASHrequire_DASHsecmem = 87,
  anon_sym_require_DASHcross_DASHverification = 88,
  anon_sym_no_DASHrequire_DASHcross_DASHverification = 89,
  anon_sym_expert = 90,
  anon_sym_no_DASHexpert = 91,
  anon_sym_textmode = 92,
  anon_sym_no_DASHtextmode = 93,
  anon_sym_force_DASHocb = 94,
  anon_sym_force_DASHaead = 95,
  anon_sym_disable_DASHsigner_DASHuid = 96,
  anon_sym_include_DASHkey_DASHblock = 97,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 98,
  anon_sym_personal_DASHcipher_DASHpreferences = 99,
  anon_sym_personal_DASHdigest_DASHpreferences = 100,
  anon_sym_personal_DASHcompress_DASHpreferences = 101,
  anon_sym_s2k_DASHcipher_DASHalgo = 102,
  anon_sym_s2k_DASHdigest_DASHalgo = 103,
  anon_sym_s2k_DASHmode = 104,
  aux_sym_s2k_mode_token1 = 105,
  anon_sym_s2k_DASHcount = 106,
  anon_sym_gnupg = 107,
  anon_sym_openpgp = 108,
  anon_sym_rfc4880 = 109,
  anon_sym_rfc4880bis = 110,
  anon_sym_rfc2440 = 111,
  anon_sym_pgp7 = 112,
  anon_sym_pgp8 = 113,
  anon_sym_compliance = 114,
  sym__compliance = 115,
  anon_sym_min_DASHrsa_DASHlength = 116,
  anon_sym_require_DASHcompliance = 117,
  sym_key = 118,
  sym_url = 119,
  sym_number = 120,
  aux_sym_string_token1 = 121,
  sym_comment = 122,
  sym__cipher_algo = 123,
  sym__hash_algo = 124,
  sym__compression_algo = 125,
  sym__space = 126,
  sym_config = 127,
  sym_unknown_option = 128,
  sym_default_key = 129,
  sym_default_recipient = 130,
  sym_default_recipient_self = 131,
  sym_no_default_recipient = 132,
  sym_verbose = 133,
  sym_no_tty = 134,
  sym_list_options = 135,
  sym_verify_options = 136,
  sym_enable_large_rsa = 137,
  sym_disable_large_rsa = 138,
  sym_enable_dsa2 = 139,
  sym_disable_dsa2 = 140,
  sym_photo_viewer = 141,
  sym__command = 142,
  sym_exec_path = 143,
  sym_keyring = 144,
  sym_primary_keyring = 145,
  sym_trustdb_name = 146,
  sym_display_charset = 147,
  sym_utf8_strings = 148,
  sym_no_utf8_strings = 149,
  sym_compress_level = 150,
  sym_bzip2_compress_level = 151,
  sym_no_compress = 152,
  sym_bzip2_decompress_lowmem = 153,
  sym_mangle_dos_filenames = 154,
  sym_no_mangle_dos_filenames = 155,
  sym_ask_cert_level = 156,
  sym_no_ask_cert_level = 157,
  sym_default_cert_level = 158,
  sym_min_cert_level = 159,
  sym_trusted_key = 160,
  sym_add_desig_revoker = 161,
  sym_trust_model = 162,
  sym_always_trust = 163,
  sym_assert_signer = 164,
  sym_auto_key_locate = 165,
  sym_no_auto_key_locate = 166,
  sym_auto_key_import = 167,
  sym_no_auto_key_import = 168,
  sym_auto_key_retrieve = 169,
  sym_no_auto_key_retrieve = 170,
  sym_keyid_format = 171,
  sym_keyserver = 172,
  sym_completes_needed = 173,
  sym_marginals_needed = 174,
  sym_tofu_default_policy = 175,
  sym_max_cert_depth = 176,
  sym_no_sig_cache = 177,
  sym_auto_check_trustdb = 178,
  sym_no_auto_check_trustdb = 179,
  sym_agent_program = 180,
  sym_dirmngr_program = 181,
  sym_disable_dirmngr = 182,
  sym_no_autostart = 183,
  sym_lock_once = 184,
  sym_lock_multiple = 185,
  sym_lock_never = 186,
  sym_exit_on_status_write_error = 187,
  sym_limit_card_insert_tries = 188,
  sym_no_random_seed_file = 189,
  sym_no_greeting = 190,
  sym_no_secmem_warning = 191,
  sym_no_permission_warning = 192,
  sym_require_secmem = 193,
  sym_no_require_secmem = 194,
  sym_require_cross_verification = 195,
  sym_no_require_cross_verification = 196,
  sym_expert = 197,
  sym_no_expert = 198,
  sym_textmode = 199,
  sym_no_textmode = 200,
  sym_force_ocb = 201,
  sym_disable_signer_uid = 202,
  sym_include_key_block = 203,
  sym_no_include_key_block = 204,
  sym_personal_cipher_preferences = 205,
  sym_personal_digest_preferences = 206,
  sym_personal_compress_preferences = 207,
  sym_s2k_cipher_algo = 208,
  sym_s2k_digest_algo = 209,
  sym_s2k_mode = 210,
  sym_s2k_count = 211,
  sym_gnupg = 212,
  sym_openpgp = 213,
  sym_rfc4880 = 214,
  sym_rfc4880bis = 215,
  sym_rfc2440 = 216,
  sym_pgp7 = 217,
  sym_pgp8 = 218,
  sym_compliance = 219,
  sym_min_rsa_length = 220,
  sym_require_compliance = 221,
  sym_string = 222,
  aux_sym_config_repeat1 = 223,
  aux_sym_list_options_repeat1 = 224,
  aux_sym_verify_options_repeat1 = 225,
  aux_sym__command_repeat1 = 226,
  aux_sym__command_repeat2 = 227,
  aux_sym__command_repeat3 = 228,
  aux_sym_auto_key_locate_repeat1 = 229,
  aux_sym_personal_cipher_preferences_repeat1 = 230,
  aux_sym_personal_digest_preferences_repeat1 = 231,
  aux_sym_personal_compress_preferences_repeat1 = 232,
  aux_sym_string_repeat1 = 233,
  aux_sym_string_repeat2 = 234,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [aux_sym_unknown_option_token1] = "option",
  [aux_sym_unknown_option_token2] = "string",
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
  [aux_sym_add_desig_revoker_token1] = "sensitive:",
  [aux_sym_add_desig_revoker_token2] = "clear",
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
  [anon_sym_textmode] = "option",
  [anon_sym_no_DASHtextmode] = "option",
  [anon_sym_force_DASHocb] = "option",
  [anon_sym_force_DASHaead] = "option",
  [anon_sym_disable_DASHsigner_DASHuid] = "option",
  [anon_sym_include_DASHkey_DASHblock] = "option",
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = "option",
  [anon_sym_personal_DASHcipher_DASHpreferences] = "option",
  [anon_sym_personal_DASHdigest_DASHpreferences] = "option",
  [anon_sym_personal_DASHcompress_DASHpreferences] = "option",
  [anon_sym_s2k_DASHcipher_DASHalgo] = "option",
  [anon_sym_s2k_DASHdigest_DASHalgo] = "option",
  [anon_sym_s2k_DASHmode] = "option",
  [aux_sym_s2k_mode_token1] = "number",
  [anon_sym_s2k_DASHcount] = "option",
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
  [sym__cipher_algo] = "_cipher_algo",
  [sym__hash_algo] = "_hash_algo",
  [sym__compression_algo] = "_compression_algo",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_unknown_option] = "unknown_option",
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
  [sym_textmode] = "textmode",
  [sym_no_textmode] = "no_textmode",
  [sym_force_ocb] = "force_ocb",
  [sym_disable_signer_uid] = "disable_signer_uid",
  [sym_include_key_block] = "include_key_block",
  [sym_no_include_key_block] = "no_include_key_block",
  [sym_personal_cipher_preferences] = "personal_cipher_preferences",
  [sym_personal_digest_preferences] = "personal_digest_preferences",
  [sym_personal_compress_preferences] = "personal_compress_preferences",
  [sym_s2k_cipher_algo] = "s2k_cipher_algo",
  [sym_s2k_digest_algo] = "s2k_digest_algo",
  [sym_s2k_mode] = "s2k_mode",
  [sym_s2k_count] = "s2k_count",
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
  [aux_sym_personal_cipher_preferences_repeat1] = "personal_cipher_preferences_repeat1",
  [aux_sym_personal_digest_preferences_repeat1] = "personal_digest_preferences_repeat1",
  [aux_sym_personal_compress_preferences_repeat1] = "personal_compress_preferences_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [aux_sym_unknown_option_token1] = aux_sym_unknown_option_token1,
  [aux_sym_unknown_option_token2] = sym_string,
  [anon_sym_default_DASHkey] = aux_sym_unknown_option_token1,
  [anon_sym_default_DASHrecipient] = aux_sym_unknown_option_token1,
  [anon_sym_default_DASHrecipient_DASHself] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHdefault_DASHrecipient] = aux_sym_unknown_option_token1,
  [anon_sym_verbose] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHtty] = aux_sym_unknown_option_token1,
  [anon_sym_list_DASHoptions] = aux_sym_unknown_option_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = aux_sym_unknown_option_token1,
  [sym__verify_parameter] = sym__verify_parameter,
  [anon_sym_enable_DASHlarge_DASHrsa] = aux_sym_unknown_option_token1,
  [anon_sym_disable_DASHlarge_DASHrsa] = aux_sym_unknown_option_token1,
  [anon_sym_enable_DASHdsa2] = aux_sym_unknown_option_token1,
  [anon_sym_disable_DASHdsa2] = aux_sym_unknown_option_token1,
  [anon_sym_photo_DASHviewer] = aux_sym_unknown_option_token1,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__command_token3] = aux_sym__command_token3,
  [sym_format] = sym_format,
  [anon_sym_exec_DASHpath] = aux_sym_unknown_option_token1,
  [anon_sym_keyring] = aux_sym_unknown_option_token1,
  [anon_sym_primary_DASHkeyring] = aux_sym_unknown_option_token1,
  [anon_sym_trustdb_DASHname] = aux_sym_unknown_option_token1,
  [anon_sym_display_DASHcharset] = aux_sym_unknown_option_token1,
  [sym__charset] = sym__charset,
  [anon_sym_utf8_DASHstrings] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHutf8_DASHstrings] = aux_sym_unknown_option_token1,
  [anon_sym_compress_DASHlevel] = aux_sym_unknown_option_token1,
  [aux_sym_compress_level_token1] = sym_number,
  [anon_sym_bzip2_DASHcompress_DASHlevel] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHcompress] = aux_sym_unknown_option_token1,
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = aux_sym_unknown_option_token1,
  [anon_sym_mangle_DASHdos_DASHfilenames] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = aux_sym_unknown_option_token1,
  [anon_sym_ask_DASHcert_DASHlevel] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = aux_sym_unknown_option_token1,
  [anon_sym_default_DASHcert_DASHlevel] = aux_sym_unknown_option_token1,
  [aux_sym_default_cert_level_token1] = sym_number,
  [anon_sym_min_DASHcert_DASHlevel] = aux_sym_unknown_option_token1,
  [anon_sym_trusted_DASHkey] = aux_sym_unknown_option_token1,
  [anon_sym_add_DASHdesig_DASHrevoker] = aux_sym_unknown_option_token1,
  [aux_sym_add_desig_revoker_token1] = aux_sym_add_desig_revoker_token1,
  [aux_sym_add_desig_revoker_token2] = aux_sym_add_desig_revoker_token2,
  [anon_sym_trust_DASHmodel] = aux_sym_unknown_option_token1,
  [sym__model] = sym__model,
  [anon_sym_always_DASHtrust] = aux_sym_unknown_option_token1,
  [anon_sym_assert_DASHsigner] = aux_sym_unknown_option_token1,
  [anon_sym_auto_DASHkey_DASHlocate] = aux_sym_unknown_option_token1,
  [sym__mechanism] = sym__mechanism,
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = aux_sym_unknown_option_token1,
  [anon_sym_auto_DASHkey_DASHimport] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = aux_sym_unknown_option_token1,
  [anon_sym_auto_DASHkey_DASHretrieve] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = aux_sym_unknown_option_token1,
  [anon_sym_keyid_DASHformat] = aux_sym_unknown_option_token1,
  [sym__keyid_format] = sym__keyid_format,
  [anon_sym_keyserver] = aux_sym_unknown_option_token1,
  [anon_sym_completes_DASHneeded] = aux_sym_unknown_option_token1,
  [anon_sym_marginals_DASHneeded] = aux_sym_unknown_option_token1,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = aux_sym_unknown_option_token1,
  [anon_sym_max_DASHcert_DASHdepth] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHsig_DASHcache] = aux_sym_unknown_option_token1,
  [anon_sym_auto_DASHcheck_DASHtrustdb] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = aux_sym_unknown_option_token1,
  [sym__tofu_policy] = sym__tofu_policy,
  [anon_sym_agent_DASHprogram] = aux_sym_unknown_option_token1,
  [anon_sym_dirmngr_DASHprogram] = aux_sym_unknown_option_token1,
  [anon_sym_disable_DASHdirmngr] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHautostart] = aux_sym_unknown_option_token1,
  [anon_sym_lock_DASHonce] = aux_sym_unknown_option_token1,
  [anon_sym_lock_DASHmultiple] = aux_sym_unknown_option_token1,
  [anon_sym_lock_DASHnever] = aux_sym_unknown_option_token1,
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = aux_sym_unknown_option_token1,
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHgreeting] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHsecmem_DASHwarning] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHpermission_DASHwarning] = aux_sym_unknown_option_token1,
  [anon_sym_require_DASHsecmem] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHrequire_DASHsecmem] = aux_sym_unknown_option_token1,
  [anon_sym_require_DASHcross_DASHverification] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = aux_sym_unknown_option_token1,
  [anon_sym_expert] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHexpert] = aux_sym_unknown_option_token1,
  [anon_sym_textmode] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHtextmode] = aux_sym_unknown_option_token1,
  [anon_sym_force_DASHocb] = aux_sym_unknown_option_token1,
  [anon_sym_force_DASHaead] = aux_sym_unknown_option_token1,
  [anon_sym_disable_DASHsigner_DASHuid] = aux_sym_unknown_option_token1,
  [anon_sym_include_DASHkey_DASHblock] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = aux_sym_unknown_option_token1,
  [anon_sym_personal_DASHcipher_DASHpreferences] = aux_sym_unknown_option_token1,
  [anon_sym_personal_DASHdigest_DASHpreferences] = aux_sym_unknown_option_token1,
  [anon_sym_personal_DASHcompress_DASHpreferences] = aux_sym_unknown_option_token1,
  [anon_sym_s2k_DASHcipher_DASHalgo] = aux_sym_unknown_option_token1,
  [anon_sym_s2k_DASHdigest_DASHalgo] = aux_sym_unknown_option_token1,
  [anon_sym_s2k_DASHmode] = aux_sym_unknown_option_token1,
  [aux_sym_s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = aux_sym_unknown_option_token1,
  [anon_sym_gnupg] = aux_sym_unknown_option_token1,
  [anon_sym_openpgp] = aux_sym_unknown_option_token1,
  [anon_sym_rfc4880] = aux_sym_unknown_option_token1,
  [anon_sym_rfc4880bis] = aux_sym_unknown_option_token1,
  [anon_sym_rfc2440] = aux_sym_unknown_option_token1,
  [anon_sym_pgp7] = aux_sym_unknown_option_token1,
  [anon_sym_pgp8] = aux_sym_unknown_option_token1,
  [anon_sym_compliance] = aux_sym_unknown_option_token1,
  [sym__compliance] = sym__compliance,
  [anon_sym_min_DASHrsa_DASHlength] = aux_sym_unknown_option_token1,
  [anon_sym_require_DASHcompliance] = aux_sym_unknown_option_token1,
  [sym_key] = sym_key,
  [sym_url] = sym_url,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym__cipher_algo] = sym__cipher_algo,
  [sym__hash_algo] = sym__hash_algo,
  [sym__compression_algo] = sym__compression_algo,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_unknown_option] = sym_unknown_option,
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
  [sym_textmode] = sym_textmode,
  [sym_no_textmode] = sym_no_textmode,
  [sym_force_ocb] = sym_force_ocb,
  [sym_disable_signer_uid] = sym_disable_signer_uid,
  [sym_include_key_block] = sym_include_key_block,
  [sym_no_include_key_block] = sym_no_include_key_block,
  [sym_personal_cipher_preferences] = sym_personal_cipher_preferences,
  [sym_personal_digest_preferences] = sym_personal_digest_preferences,
  [sym_personal_compress_preferences] = sym_personal_compress_preferences,
  [sym_s2k_cipher_algo] = sym_s2k_cipher_algo,
  [sym_s2k_digest_algo] = sym_s2k_digest_algo,
  [sym_s2k_mode] = sym_s2k_mode,
  [sym_s2k_count] = sym_s2k_count,
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
  [aux_sym_personal_cipher_preferences_repeat1] = aux_sym_personal_cipher_preferences_repeat1,
  [aux_sym_personal_digest_preferences_repeat1] = aux_sym_personal_digest_preferences_repeat1,
  [aux_sym_personal_compress_preferences_repeat1] = aux_sym_personal_compress_preferences_repeat1,
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
  [aux_sym_unknown_option_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unknown_option_token2] = {
    .visible = true,
    .named = true,
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
  [aux_sym_add_desig_revoker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_add_desig_revoker_token2] = {
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
  [anon_sym_textmode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHtextmode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_force_DASHocb] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_force_DASHaead] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_disable_DASHsigner_DASHuid] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include_DASHkey_DASHblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_personal_DASHcipher_DASHpreferences] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_personal_DASHdigest_DASHpreferences] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_personal_DASHcompress_DASHpreferences] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHmode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_s2k_mode_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHcount] = {
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
  [sym__cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__compression_algo] = {
    .visible = false,
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
  [sym_unknown_option] = {
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
  [sym_textmode] = {
    .visible = true,
    .named = true,
  },
  [sym_no_textmode] = {
    .visible = true,
    .named = true,
  },
  [sym_force_ocb] = {
    .visible = true,
    .named = true,
  },
  [sym_disable_signer_uid] = {
    .visible = true,
    .named = true,
  },
  [sym_include_key_block] = {
    .visible = true,
    .named = true,
  },
  [sym_no_include_key_block] = {
    .visible = true,
    .named = true,
  },
  [sym_personal_cipher_preferences] = {
    .visible = true,
    .named = true,
  },
  [sym_personal_digest_preferences] = {
    .visible = true,
    .named = true,
  },
  [sym_personal_compress_preferences] = {
    .visible = true,
    .named = true,
  },
  [sym_s2k_cipher_algo] = {
    .visible = true,
    .named = true,
  },
  [sym_s2k_digest_algo] = {
    .visible = true,
    .named = true,
  },
  [sym_s2k_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_s2k_count] = {
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
  [aux_sym_personal_cipher_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_personal_digest_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_personal_compress_preferences_repeat1] = {
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
  field_algorithm = 1,
  field_charset = 2,
  field_content = 3,
  field_format = 4,
  field_mechanism = 5,
  field_mode = 6,
  field_model = 7,
  field_parameter = 8,
  field_policy = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_algorithm] = "algorithm",
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
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 2},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 1},
  [17] = {.index = 17, .length = 1},
  [18] = {.index = 18, .length = 2},
  [19] = {.index = 20, .length = 1},
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
    {field_algorithm, 2},
  [9] =
    {field_mode, 2},
  [10] =
    {field_parameter, 0},
  [11] =
    {field_mechanism, 0},
  [12] =
    {field_mechanism, 2},
    {field_mechanism, 3, .inherited = true},
  [14] =
    {field_algorithm, 0},
  [15] =
    {field_content, 1},
  [16] =
    {field_parameter, 1},
  [17] =
    {field_mechanism, 1},
  [18] =
    {field_mechanism, 0, .inherited = true},
    {field_mechanism, 1, .inherited = true},
  [20] =
    {field_algorithm, 1},
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
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
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
      if (eof) ADVANCE(421);
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '%') ADVANCE(1369);
      if (lookahead == '\'') ADVANCE(1376);
      if (lookahead == ',') ADVANCE(1359);
      if (lookahead == '2') ADVANCE(1350);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1372);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1350);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      if (lookahead != 0) ADVANCE(1368);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(422);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1369);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (lookahead != 0) ADVANCE(1368);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1359);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(260);
      if (lookahead == 'Z') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'g') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1392);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1359);
      if (lookahead == '0') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'g') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(288);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1359);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'c') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'h') ADVANCE(226);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead == 'k') ADVANCE(153);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(353);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1401);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '%') ADVANCE(1369);
      if (lookahead == '\'') ADVANCE(1376);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1368);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '%') ADVANCE(1374);
      if (lookahead == '\\') ADVANCE(1373);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1372);
      if (lookahead != 0) ADVANCE(1372);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1370);
      if (lookahead == '\\') ADVANCE(1373);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1372);
      if (lookahead != 0) ADVANCE(1372);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1371);
      if (lookahead == '\'') ADVANCE(1377);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1514);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1380);
      if (lookahead == '\'') ADVANCE(1376);
      if (lookahead == '\\') ADVANCE(1379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1378);
      if (lookahead != 0) ADVANCE(1378);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(1376);
      if (lookahead == '\\') ADVANCE(1379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1378);
      if (lookahead != 0) ADVANCE(1378);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(337);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(379);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(249);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(186);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(372);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(344);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(419);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(1518);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(1473);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(1474);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(1512);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1513);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(1518);
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '3') ADVANCE(62);
      if (lookahead == '5') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(1388);
      if (lookahead == '2') ADVANCE(1387);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == '1') ADVANCE(1392);
      END_STATE();
    case 46:
      if (lookahead == '1') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(1518);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '5') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(1516);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(1519);
      END_STATE();
    case 51:
      if (lookahead == '2') ADVANCE(55);
      if (lookahead == '4') ADVANCE(69);
      END_STATE();
    case 52:
      if (lookahead == '2') ADVANCE(65);
      if (lookahead == '9') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == '4') ADVANCE(1518);
      END_STATE();
    case 54:
      if (lookahead == '4') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '5') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == '5') ADVANCE(1516);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(1518);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(1516);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(1387);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1516);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead == '8') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == '8') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == '9') ADVANCE(49);
      END_STATE();
    case 71:
      if (lookahead == '9') ADVANCE(14);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(1405);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(1519);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 82:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'F') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 'H') ADVANCE(75);
      END_STATE();
    case 85:
      if (lookahead == 'H') ADVANCE(1516);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(98);
      if (lookahead == 'L') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'M') ADVANCE(79);
      END_STATE();
    case 95:
      if (lookahead == 'M') ADVANCE(82);
      if (lookahead == 'S') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(1519);
      END_STATE();
    case 99:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 101:
      if (lookahead == 'S') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 103:
      if (lookahead == 'W') ADVANCE(96);
      END_STATE();
    case 104:
      if (lookahead == 'Z') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(366);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(240);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(277);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(305);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(1408);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 133:
      if (lookahead == 'c') ADVANCE(350);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(403);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(1413);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(1519);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(1430);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(336);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(1516);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(1360);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(1519);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(1421);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 181:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(1473);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(1360);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(1421);
      END_STATE();
    case 191:
      if (lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 192:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 193:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 194:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 195:
      if (lookahead == 'g') ADVANCE(336);
      END_STATE();
    case 196:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 197:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 198:
      if (lookahead == 'h') ADVANCE(276);
      END_STATE();
    case 199:
      if (lookahead == 'h') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 200:
      if (lookahead == 'h') ADVANCE(291);
      END_STATE();
    case 201:
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 202:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 203:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 204:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 205:
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 206:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 208:
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 209:
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 210:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 211:
      if (lookahead == 'i') ADVANCE(279);
      END_STATE();
    case 212:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 213:
      if (lookahead == 'i') ADVANCE(335);
      END_STATE();
    case 214:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 215:
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 216:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 218:
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(373);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 219:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 220:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 221:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 222:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 223:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 224:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 225:
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 226:
      if (lookahead == 'k') ADVANCE(298);
      END_STATE();
    case 227:
      if (lookahead == 'k') ADVANCE(1430);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == 's') ADVANCE(355);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 230:
      if (lookahead == 'k') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(296);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 231:
      if (lookahead == 'k') ADVANCE(173);
      END_STATE();
    case 232:
      if (lookahead == 'k') ADVANCE(267);
      END_STATE();
    case 233:
      if (lookahead == 'k') ADVANCE(179);
      END_STATE();
    case 234:
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(1413);
      END_STATE();
    case 236:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 237:
      if (lookahead == 'l') ADVANCE(393);
      END_STATE();
    case 238:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 239:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 240:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(285);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 245:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 246:
      if (lookahead == 'l') ADVANCE(401);
      END_STATE();
    case 247:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 248:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 249:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 250:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(309);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(1430);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 256:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 257:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 258:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 259:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 260:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 261:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 262:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 263:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 264:
      if (lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 265:
      if (lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 266:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 267:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 268:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 269:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 270:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 271:
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 272:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 273:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 274:
      if (lookahead == 'o') ADVANCE(1408);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(1430);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 280:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 281:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 282:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 283:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(322);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 293:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 294:
      if (lookahead == 'o') ADVANCE(265);
      END_STATE();
    case 295:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 296:
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 297:
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 298:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 299:
      if (lookahead == 'p') ADVANCE(1408);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(1414);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(408);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(1473);
      END_STATE();
    case 303:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 310:
      if (lookahead == 'q') ADVANCE(405);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(1413);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(1387);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(1406);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 322:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 323:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 324:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 325:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 326:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 327:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 328:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 329:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 330:
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(1408);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(1362);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(1473);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(1360);
      END_STATE();
    case 337:
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 'u') ADVANCE(220);
      END_STATE();
    case 338:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 339:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 340:
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(364);
      END_STATE();
    case 341:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 342:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(1413);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(1421);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(393);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 356:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 357:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 358:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 359:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 361:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 362:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 363:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 364:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 365:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(1409);
      END_STATE();
    case 369:
      if (lookahead == 'u') ADVANCE(236);
      END_STATE();
    case 370:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 371:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 372:
      if (lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 373:
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 374:
      if (lookahead == 'u') ADVANCE(216);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 378:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 379:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 380:
      if (lookahead == 'v') ADVANCE(171);
      END_STATE();
    case 381:
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 382:
      if (lookahead == 'v') ADVANCE(164);
      END_STATE();
    case 383:
      if (lookahead == 'v') ADVANCE(180);
      END_STATE();
    case 384:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 385:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 386:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 387:
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 388:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 389:
      if (lookahead == 'x') ADVANCE(1360);
      END_STATE();
    case 390:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 391:
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 392:
      if (lookahead == 'x') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 393:
      if (lookahead == 'y') ADVANCE(1362);
      END_STATE();
    case 394:
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 395:
      if (lookahead == 'y') ADVANCE(1360);
      END_STATE();
    case 396:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 397:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 399:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 400:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 401:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 402:
      if (lookahead == 'y') ADVANCE(347);
      END_STATE();
    case 403:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 404:
      if (lookahead == '{') ADVANCE(310);
      END_STATE();
    case 405:
      if (lookahead == '}') ADVANCE(1375);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(1463);
      END_STATE();
    case 407:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1351);
      END_STATE();
    case 408:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1473);
      END_STATE();
    case 409:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1510);
      END_STATE();
    case 410:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1511);
      END_STATE();
    case 411:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 412:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1509);
      END_STATE();
    case 413:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 414:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      END_STATE();
    case 415:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 416:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 417:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 418:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 419:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 420:
      if (eof) ADVANCE(421);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1515);
      if (lookahead == 'a') ADVANCE(618);
      if (lookahead == 'b') ADVANCE(1349);
      if (lookahead == 'c') ADVANCE(1028);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == 'f') ADVANCE(1029);
      if (lookahead == 'g') ADVANCE(982);
      if (lookahead == 'i') ADVANCE(983);
      if (lookahead == 'k') ADVANCE(647);
      if (lookahead == 'l') ADVANCE(843);
      if (lookahead == 'm') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(1030);
      if (lookahead == 'o') ADVANCE(1089);
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 'r') ADVANCE(648);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead == 'u') ADVANCE(1247);
      if (lookahead == 'v') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == 'e') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == 's') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1469);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1467);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(514);
      if (lookahead == '4') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '7') ADVANCE(1470);
      if (lookahead == '8') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(984);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead == 'c') ADVANCE(1051);
      if (lookahead == 'd') ADVANCE(777);
      if (lookahead == 'e') ADVANCE(1333);
      if (lookahead == 'g') ADVANCE(1119);
      if (lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'm') ADVANCE(534);
      if (lookahead == 'p') ADVANCE(684);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == 's') ADVANCE(681);
      if (lookahead == 't') ADVANCE(785);
      if (lookahead == 'u') ADVANCE(1294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(987);
      if (lookahead == 'e') ADVANCE(1104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'p') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'i') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(837);
      if (lookahead == 'k') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1057);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(855);
      if (lookahead == 'd') ADVANCE(848);
      if (lookahead == 'm') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead == 'd') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1178);
      if (lookahead == 's') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'd') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(775);
      if (lookahead == 'r') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(784);
      if (lookahead == 'k') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(842);
      if (lookahead == 'k') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == 'g') ADVANCE(669);
      if (lookahead == 'l') ADVANCE(1326);
      if (lookahead == 's') ADVANCE(898);
      if (lookahead == 'u') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(861);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 's') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1199);
      if (lookahead == 'l') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(792);
      if (lookahead == 'i') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1103);
      if (lookahead == 'f') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == 'r') ADVANCE(1295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == 'g') ADVANCE(1073);
      if (lookahead == 'h') ADVANCE(1065);
      if (lookahead == 'r') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1259);
      if (lookahead == 'i') ADVANCE(552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead == 't') ADVANCE(1336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(954);
      if (lookahead == 'o') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1088);
      if (lookahead == 'o') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1154);
      if (lookahead == 's') ADVANCE(527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(629);
      if (lookahead == 'r') ADVANCE(846);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead == 'l') ADVANCE(1042);
      if (lookahead == 'r') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == 'l') ADVANCE(1067);
      if (lookahead == 'r') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(444);
      if (lookahead == 's') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(677);
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(871);
      if (lookahead == 's') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1299);
      if (lookahead == 'n') ADVANCE(758);
      if (lookahead == 'o') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(521);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(829);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == 'x') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(961);
      if (lookahead == 'r') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'q') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'q') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead == 's') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == 'u') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'z') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1350);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_unknown_option_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1351);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1381);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1514);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(404);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1381);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1514);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(404);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1381);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_keyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1387);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token1);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token2);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_expert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_textmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_s2k_mode_token1);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_gnupg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_openpgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_pgp7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_pgp8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym__compliance);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym__compliance);
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1477);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1478);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1479);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1480);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1481);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1482);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1483);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1484);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1485);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1486);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1487);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1488);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1489);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1490);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1491);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1492);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1493);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1494);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1495);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1496);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1497);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1498);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1499);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1500);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1501);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1502);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1503);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1504);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1505);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1506);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1507);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1508);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(419);
      if (lookahead == '.') ADVANCE(409);
      if (lookahead == ':') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1510);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1511);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1513);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1514);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1515);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym__cipher_algo);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym__cipher_algo);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym__hash_algo);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym__compression_algo);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 420},
  [2] = {.lex_state = 420},
  [3] = {.lex_state = 420},
  [4] = {.lex_state = 420},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 420},
  [67] = {.lex_state = 420},
  [68] = {.lex_state = 420},
  [69] = {.lex_state = 420},
  [70] = {.lex_state = 420},
  [71] = {.lex_state = 420},
  [72] = {.lex_state = 420},
  [73] = {.lex_state = 420},
  [74] = {.lex_state = 420},
  [75] = {.lex_state = 420},
  [76] = {.lex_state = 420},
  [77] = {.lex_state = 420},
  [78] = {.lex_state = 420},
  [79] = {.lex_state = 420},
  [80] = {.lex_state = 420},
  [81] = {.lex_state = 420},
  [82] = {.lex_state = 420},
  [83] = {.lex_state = 420},
  [84] = {.lex_state = 420},
  [85] = {.lex_state = 420},
  [86] = {.lex_state = 420},
  [87] = {.lex_state = 420},
  [88] = {.lex_state = 420},
  [89] = {.lex_state = 420},
  [90] = {.lex_state = 420},
  [91] = {.lex_state = 420},
  [92] = {.lex_state = 420},
  [93] = {.lex_state = 420},
  [94] = {.lex_state = 420},
  [95] = {.lex_state = 420},
  [96] = {.lex_state = 420},
  [97] = {.lex_state = 420},
  [98] = {.lex_state = 420},
  [99] = {.lex_state = 420},
  [100] = {.lex_state = 420},
  [101] = {.lex_state = 420},
  [102] = {.lex_state = 420},
  [103] = {.lex_state = 420},
  [104] = {.lex_state = 420},
  [105] = {.lex_state = 407},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 420},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 420},
  [117] = {.lex_state = 420},
  [118] = {.lex_state = 40},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 39},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 39},
  [124] = {.lex_state = 420},
  [125] = {.lex_state = 420},
  [126] = {.lex_state = 39},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 406},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 420},
  [137] = {.lex_state = 420},
  [138] = {.lex_state = 420},
  [139] = {.lex_state = 420},
  [140] = {.lex_state = 420},
  [141] = {.lex_state = 420},
  [142] = {.lex_state = 420},
  [143] = {.lex_state = 420},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 420},
  [147] = {.lex_state = 420},
  [148] = {.lex_state = 420},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 420},
  [151] = {.lex_state = 420},
  [152] = {.lex_state = 420},
  [153] = {.lex_state = 420},
  [154] = {.lex_state = 420},
  [155] = {.lex_state = 420},
  [156] = {.lex_state = 420},
  [157] = {.lex_state = 420},
  [158] = {.lex_state = 420},
  [159] = {.lex_state = 420},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 420},
  [162] = {.lex_state = 420},
  [163] = {.lex_state = 420},
  [164] = {.lex_state = 420},
  [165] = {.lex_state = 420},
  [166] = {.lex_state = 420},
  [167] = {.lex_state = 420},
  [168] = {.lex_state = 420},
  [169] = {.lex_state = 420},
  [170] = {.lex_state = 420},
  [171] = {.lex_state = 420},
  [172] = {.lex_state = 420},
  [173] = {.lex_state = 420},
  [174] = {.lex_state = 420},
  [175] = {.lex_state = 420},
  [176] = {.lex_state = 420},
  [177] = {.lex_state = 420},
  [178] = {.lex_state = 420},
  [179] = {.lex_state = 420},
  [180] = {.lex_state = 420},
  [181] = {.lex_state = 420},
  [182] = {.lex_state = 420},
  [183] = {.lex_state = 420},
  [184] = {.lex_state = 420},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 420},
  [187] = {.lex_state = 420},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 420},
  [190] = {.lex_state = 420},
  [191] = {.lex_state = 420},
  [192] = {.lex_state = 420},
  [193] = {.lex_state = 420},
  [194] = {.lex_state = 420},
  [195] = {.lex_state = 420},
  [196] = {.lex_state = 420},
  [197] = {.lex_state = 420},
  [198] = {.lex_state = 420},
  [199] = {.lex_state = 420},
  [200] = {.lex_state = 420},
  [201] = {.lex_state = 420},
  [202] = {.lex_state = 420},
  [203] = {.lex_state = 420},
  [204] = {.lex_state = 420},
  [205] = {.lex_state = 420},
  [206] = {.lex_state = 420},
  [207] = {.lex_state = 420},
  [208] = {.lex_state = 420},
  [209] = {.lex_state = 420},
  [210] = {.lex_state = 420},
  [211] = {.lex_state = 420},
  [212] = {.lex_state = 420},
  [213] = {.lex_state = 420},
  [214] = {.lex_state = 420},
  [215] = {.lex_state = 420},
  [216] = {.lex_state = 420},
  [217] = {.lex_state = 420},
  [218] = {.lex_state = 420},
  [219] = {.lex_state = 420},
  [220] = {.lex_state = 420},
  [221] = {.lex_state = 420},
  [222] = {.lex_state = 420},
  [223] = {.lex_state = 420},
  [224] = {.lex_state = 420},
  [225] = {.lex_state = 420},
  [226] = {.lex_state = 420},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_unknown_option_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [sym_format] = ACTIONS(1),
    [aux_sym_default_cert_level_token1] = ACTIONS(1),
    [aux_sym_s2k_mode_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(104),
    [sym_unknown_option] = STATE(103),
    [sym_default_key] = STATE(103),
    [sym_default_recipient] = STATE(103),
    [sym_default_recipient_self] = STATE(103),
    [sym_no_default_recipient] = STATE(103),
    [sym_verbose] = STATE(103),
    [sym_no_tty] = STATE(103),
    [sym_list_options] = STATE(103),
    [sym_verify_options] = STATE(103),
    [sym_enable_large_rsa] = STATE(103),
    [sym_disable_large_rsa] = STATE(103),
    [sym_enable_dsa2] = STATE(103),
    [sym_disable_dsa2] = STATE(103),
    [sym_photo_viewer] = STATE(103),
    [sym_exec_path] = STATE(103),
    [sym_keyring] = STATE(103),
    [sym_primary_keyring] = STATE(103),
    [sym_trustdb_name] = STATE(103),
    [sym_display_charset] = STATE(103),
    [sym_utf8_strings] = STATE(103),
    [sym_no_utf8_strings] = STATE(103),
    [sym_compress_level] = STATE(103),
    [sym_bzip2_compress_level] = STATE(103),
    [sym_no_compress] = STATE(103),
    [sym_bzip2_decompress_lowmem] = STATE(103),
    [sym_mangle_dos_filenames] = STATE(103),
    [sym_no_mangle_dos_filenames] = STATE(103),
    [sym_ask_cert_level] = STATE(103),
    [sym_no_ask_cert_level] = STATE(103),
    [sym_default_cert_level] = STATE(103),
    [sym_min_cert_level] = STATE(103),
    [sym_trusted_key] = STATE(103),
    [sym_add_desig_revoker] = STATE(103),
    [sym_trust_model] = STATE(103),
    [sym_always_trust] = STATE(103),
    [sym_assert_signer] = STATE(103),
    [sym_auto_key_locate] = STATE(103),
    [sym_no_auto_key_locate] = STATE(103),
    [sym_auto_key_import] = STATE(103),
    [sym_no_auto_key_import] = STATE(103),
    [sym_auto_key_retrieve] = STATE(103),
    [sym_no_auto_key_retrieve] = STATE(103),
    [sym_keyid_format] = STATE(103),
    [sym_keyserver] = STATE(103),
    [sym_completes_needed] = STATE(103),
    [sym_marginals_needed] = STATE(103),
    [sym_tofu_default_policy] = STATE(103),
    [sym_max_cert_depth] = STATE(103),
    [sym_no_sig_cache] = STATE(103),
    [sym_auto_check_trustdb] = STATE(103),
    [sym_no_auto_check_trustdb] = STATE(103),
    [sym_agent_program] = STATE(103),
    [sym_dirmngr_program] = STATE(103),
    [sym_disable_dirmngr] = STATE(103),
    [sym_no_autostart] = STATE(103),
    [sym_lock_once] = STATE(103),
    [sym_lock_multiple] = STATE(103),
    [sym_lock_never] = STATE(103),
    [sym_exit_on_status_write_error] = STATE(103),
    [sym_limit_card_insert_tries] = STATE(103),
    [sym_no_random_seed_file] = STATE(103),
    [sym_no_greeting] = STATE(103),
    [sym_no_secmem_warning] = STATE(103),
    [sym_no_permission_warning] = STATE(103),
    [sym_require_secmem] = STATE(103),
    [sym_no_require_secmem] = STATE(103),
    [sym_require_cross_verification] = STATE(103),
    [sym_no_require_cross_verification] = STATE(103),
    [sym_expert] = STATE(103),
    [sym_no_expert] = STATE(103),
    [sym_textmode] = STATE(103),
    [sym_no_textmode] = STATE(103),
    [sym_force_ocb] = STATE(103),
    [sym_disable_signer_uid] = STATE(103),
    [sym_include_key_block] = STATE(103),
    [sym_no_include_key_block] = STATE(103),
    [sym_personal_cipher_preferences] = STATE(103),
    [sym_personal_digest_preferences] = STATE(103),
    [sym_personal_compress_preferences] = STATE(103),
    [sym_s2k_cipher_algo] = STATE(103),
    [sym_s2k_digest_algo] = STATE(103),
    [sym_s2k_mode] = STATE(103),
    [sym_s2k_count] = STATE(103),
    [sym_gnupg] = STATE(103),
    [sym_openpgp] = STATE(103),
    [sym_rfc4880] = STATE(103),
    [sym_rfc4880bis] = STATE(103),
    [sym_rfc2440] = STATE(103),
    [sym_pgp7] = STATE(103),
    [sym_pgp8] = STATE(103),
    [sym_compliance] = STATE(103),
    [sym_min_rsa_length] = STATE(103),
    [sym_require_compliance] = STATE(103),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_config_token1] = ACTIONS(7),
    [aux_sym_unknown_option_token1] = ACTIONS(9),
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_default_DASHrecipient] = ACTIONS(13),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(15),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(17),
    [anon_sym_verbose] = ACTIONS(19),
    [anon_sym_no_DASHtty] = ACTIONS(21),
    [anon_sym_list_DASHoptions] = ACTIONS(23),
    [anon_sym_verify_DASHoptions] = ACTIONS(25),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(27),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(29),
    [anon_sym_enable_DASHdsa2] = ACTIONS(31),
    [anon_sym_disable_DASHdsa2] = ACTIONS(33),
    [anon_sym_photo_DASHviewer] = ACTIONS(35),
    [anon_sym_exec_DASHpath] = ACTIONS(37),
    [anon_sym_keyring] = ACTIONS(39),
    [anon_sym_primary_DASHkeyring] = ACTIONS(41),
    [anon_sym_trustdb_DASHname] = ACTIONS(43),
    [anon_sym_display_DASHcharset] = ACTIONS(45),
    [anon_sym_utf8_DASHstrings] = ACTIONS(47),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(49),
    [anon_sym_compress_DASHlevel] = ACTIONS(51),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(53),
    [anon_sym_no_DASHcompress] = ACTIONS(55),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(57),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(59),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(61),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(63),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(65),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(67),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(69),
    [anon_sym_trusted_DASHkey] = ACTIONS(71),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(73),
    [anon_sym_trust_DASHmodel] = ACTIONS(75),
    [anon_sym_always_DASHtrust] = ACTIONS(77),
    [anon_sym_assert_DASHsigner] = ACTIONS(79),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(81),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(83),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(85),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(87),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(89),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(91),
    [anon_sym_keyid_DASHformat] = ACTIONS(93),
    [anon_sym_keyserver] = ACTIONS(95),
    [anon_sym_completes_DASHneeded] = ACTIONS(97),
    [anon_sym_marginals_DASHneeded] = ACTIONS(99),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(101),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(103),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(105),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(107),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(109),
    [anon_sym_agent_DASHprogram] = ACTIONS(111),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(113),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(115),
    [anon_sym_no_DASHautostart] = ACTIONS(117),
    [anon_sym_lock_DASHonce] = ACTIONS(119),
    [anon_sym_lock_DASHmultiple] = ACTIONS(121),
    [anon_sym_lock_DASHnever] = ACTIONS(123),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(125),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(127),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(129),
    [anon_sym_no_DASHgreeting] = ACTIONS(131),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(133),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(135),
    [anon_sym_require_DASHsecmem] = ACTIONS(137),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(139),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(141),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(143),
    [anon_sym_expert] = ACTIONS(145),
    [anon_sym_no_DASHexpert] = ACTIONS(147),
    [anon_sym_textmode] = ACTIONS(149),
    [anon_sym_no_DASHtextmode] = ACTIONS(151),
    [anon_sym_force_DASHocb] = ACTIONS(153),
    [anon_sym_force_DASHaead] = ACTIONS(153),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(155),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(157),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(159),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(161),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(163),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(165),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(167),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(169),
    [anon_sym_s2k_DASHmode] = ACTIONS(171),
    [anon_sym_s2k_DASHcount] = ACTIONS(173),
    [anon_sym_gnupg] = ACTIONS(175),
    [anon_sym_openpgp] = ACTIONS(177),
    [anon_sym_rfc4880] = ACTIONS(179),
    [anon_sym_rfc4880bis] = ACTIONS(181),
    [anon_sym_rfc2440] = ACTIONS(183),
    [anon_sym_pgp7] = ACTIONS(185),
    [anon_sym_pgp8] = ACTIONS(187),
    [anon_sym_compliance] = ACTIONS(189),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(191),
    [anon_sym_require_DASHcompliance] = ACTIONS(193),
    [sym_comment] = ACTIONS(195),
    [sym__space] = ACTIONS(197),
  },
  [2] = {
    [sym_unknown_option] = STATE(103),
    [sym_default_key] = STATE(103),
    [sym_default_recipient] = STATE(103),
    [sym_default_recipient_self] = STATE(103),
    [sym_no_default_recipient] = STATE(103),
    [sym_verbose] = STATE(103),
    [sym_no_tty] = STATE(103),
    [sym_list_options] = STATE(103),
    [sym_verify_options] = STATE(103),
    [sym_enable_large_rsa] = STATE(103),
    [sym_disable_large_rsa] = STATE(103),
    [sym_enable_dsa2] = STATE(103),
    [sym_disable_dsa2] = STATE(103),
    [sym_photo_viewer] = STATE(103),
    [sym_exec_path] = STATE(103),
    [sym_keyring] = STATE(103),
    [sym_primary_keyring] = STATE(103),
    [sym_trustdb_name] = STATE(103),
    [sym_display_charset] = STATE(103),
    [sym_utf8_strings] = STATE(103),
    [sym_no_utf8_strings] = STATE(103),
    [sym_compress_level] = STATE(103),
    [sym_bzip2_compress_level] = STATE(103),
    [sym_no_compress] = STATE(103),
    [sym_bzip2_decompress_lowmem] = STATE(103),
    [sym_mangle_dos_filenames] = STATE(103),
    [sym_no_mangle_dos_filenames] = STATE(103),
    [sym_ask_cert_level] = STATE(103),
    [sym_no_ask_cert_level] = STATE(103),
    [sym_default_cert_level] = STATE(103),
    [sym_min_cert_level] = STATE(103),
    [sym_trusted_key] = STATE(103),
    [sym_add_desig_revoker] = STATE(103),
    [sym_trust_model] = STATE(103),
    [sym_always_trust] = STATE(103),
    [sym_assert_signer] = STATE(103),
    [sym_auto_key_locate] = STATE(103),
    [sym_no_auto_key_locate] = STATE(103),
    [sym_auto_key_import] = STATE(103),
    [sym_no_auto_key_import] = STATE(103),
    [sym_auto_key_retrieve] = STATE(103),
    [sym_no_auto_key_retrieve] = STATE(103),
    [sym_keyid_format] = STATE(103),
    [sym_keyserver] = STATE(103),
    [sym_completes_needed] = STATE(103),
    [sym_marginals_needed] = STATE(103),
    [sym_tofu_default_policy] = STATE(103),
    [sym_max_cert_depth] = STATE(103),
    [sym_no_sig_cache] = STATE(103),
    [sym_auto_check_trustdb] = STATE(103),
    [sym_no_auto_check_trustdb] = STATE(103),
    [sym_agent_program] = STATE(103),
    [sym_dirmngr_program] = STATE(103),
    [sym_disable_dirmngr] = STATE(103),
    [sym_no_autostart] = STATE(103),
    [sym_lock_once] = STATE(103),
    [sym_lock_multiple] = STATE(103),
    [sym_lock_never] = STATE(103),
    [sym_exit_on_status_write_error] = STATE(103),
    [sym_limit_card_insert_tries] = STATE(103),
    [sym_no_random_seed_file] = STATE(103),
    [sym_no_greeting] = STATE(103),
    [sym_no_secmem_warning] = STATE(103),
    [sym_no_permission_warning] = STATE(103),
    [sym_require_secmem] = STATE(103),
    [sym_no_require_secmem] = STATE(103),
    [sym_require_cross_verification] = STATE(103),
    [sym_no_require_cross_verification] = STATE(103),
    [sym_expert] = STATE(103),
    [sym_no_expert] = STATE(103),
    [sym_textmode] = STATE(103),
    [sym_no_textmode] = STATE(103),
    [sym_force_ocb] = STATE(103),
    [sym_disable_signer_uid] = STATE(103),
    [sym_include_key_block] = STATE(103),
    [sym_no_include_key_block] = STATE(103),
    [sym_personal_cipher_preferences] = STATE(103),
    [sym_personal_digest_preferences] = STATE(103),
    [sym_personal_compress_preferences] = STATE(103),
    [sym_s2k_cipher_algo] = STATE(103),
    [sym_s2k_digest_algo] = STATE(103),
    [sym_s2k_mode] = STATE(103),
    [sym_s2k_count] = STATE(103),
    [sym_gnupg] = STATE(103),
    [sym_openpgp] = STATE(103),
    [sym_rfc4880] = STATE(103),
    [sym_rfc4880bis] = STATE(103),
    [sym_rfc2440] = STATE(103),
    [sym_pgp7] = STATE(103),
    [sym_pgp8] = STATE(103),
    [sym_compliance] = STATE(103),
    [sym_min_rsa_length] = STATE(103),
    [sym_require_compliance] = STATE(103),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_config_token1] = ACTIONS(201),
    [aux_sym_unknown_option_token1] = ACTIONS(9),
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_default_DASHrecipient] = ACTIONS(13),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(15),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(17),
    [anon_sym_verbose] = ACTIONS(19),
    [anon_sym_no_DASHtty] = ACTIONS(21),
    [anon_sym_list_DASHoptions] = ACTIONS(23),
    [anon_sym_verify_DASHoptions] = ACTIONS(25),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(27),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(29),
    [anon_sym_enable_DASHdsa2] = ACTIONS(31),
    [anon_sym_disable_DASHdsa2] = ACTIONS(33),
    [anon_sym_photo_DASHviewer] = ACTIONS(35),
    [anon_sym_exec_DASHpath] = ACTIONS(37),
    [anon_sym_keyring] = ACTIONS(39),
    [anon_sym_primary_DASHkeyring] = ACTIONS(41),
    [anon_sym_trustdb_DASHname] = ACTIONS(43),
    [anon_sym_display_DASHcharset] = ACTIONS(45),
    [anon_sym_utf8_DASHstrings] = ACTIONS(47),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(49),
    [anon_sym_compress_DASHlevel] = ACTIONS(51),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(53),
    [anon_sym_no_DASHcompress] = ACTIONS(55),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(57),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(59),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(61),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(63),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(65),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(67),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(69),
    [anon_sym_trusted_DASHkey] = ACTIONS(71),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(73),
    [anon_sym_trust_DASHmodel] = ACTIONS(75),
    [anon_sym_always_DASHtrust] = ACTIONS(77),
    [anon_sym_assert_DASHsigner] = ACTIONS(79),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(81),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(83),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(85),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(87),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(89),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(91),
    [anon_sym_keyid_DASHformat] = ACTIONS(93),
    [anon_sym_keyserver] = ACTIONS(95),
    [anon_sym_completes_DASHneeded] = ACTIONS(97),
    [anon_sym_marginals_DASHneeded] = ACTIONS(99),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(101),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(103),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(105),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(107),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(109),
    [anon_sym_agent_DASHprogram] = ACTIONS(111),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(113),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(115),
    [anon_sym_no_DASHautostart] = ACTIONS(117),
    [anon_sym_lock_DASHonce] = ACTIONS(119),
    [anon_sym_lock_DASHmultiple] = ACTIONS(121),
    [anon_sym_lock_DASHnever] = ACTIONS(123),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(125),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(127),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(129),
    [anon_sym_no_DASHgreeting] = ACTIONS(131),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(133),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(135),
    [anon_sym_require_DASHsecmem] = ACTIONS(137),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(139),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(141),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(143),
    [anon_sym_expert] = ACTIONS(145),
    [anon_sym_no_DASHexpert] = ACTIONS(147),
    [anon_sym_textmode] = ACTIONS(149),
    [anon_sym_no_DASHtextmode] = ACTIONS(151),
    [anon_sym_force_DASHocb] = ACTIONS(153),
    [anon_sym_force_DASHaead] = ACTIONS(153),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(155),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(157),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(159),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(161),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(163),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(165),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(167),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(169),
    [anon_sym_s2k_DASHmode] = ACTIONS(171),
    [anon_sym_s2k_DASHcount] = ACTIONS(173),
    [anon_sym_gnupg] = ACTIONS(175),
    [anon_sym_openpgp] = ACTIONS(177),
    [anon_sym_rfc4880] = ACTIONS(179),
    [anon_sym_rfc4880bis] = ACTIONS(181),
    [anon_sym_rfc2440] = ACTIONS(183),
    [anon_sym_pgp7] = ACTIONS(185),
    [anon_sym_pgp8] = ACTIONS(187),
    [anon_sym_compliance] = ACTIONS(189),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(191),
    [anon_sym_require_DASHcompliance] = ACTIONS(193),
    [sym_comment] = ACTIONS(195),
    [sym__space] = ACTIONS(197),
  },
  [3] = {
    [sym_unknown_option] = STATE(103),
    [sym_default_key] = STATE(103),
    [sym_default_recipient] = STATE(103),
    [sym_default_recipient_self] = STATE(103),
    [sym_no_default_recipient] = STATE(103),
    [sym_verbose] = STATE(103),
    [sym_no_tty] = STATE(103),
    [sym_list_options] = STATE(103),
    [sym_verify_options] = STATE(103),
    [sym_enable_large_rsa] = STATE(103),
    [sym_disable_large_rsa] = STATE(103),
    [sym_enable_dsa2] = STATE(103),
    [sym_disable_dsa2] = STATE(103),
    [sym_photo_viewer] = STATE(103),
    [sym_exec_path] = STATE(103),
    [sym_keyring] = STATE(103),
    [sym_primary_keyring] = STATE(103),
    [sym_trustdb_name] = STATE(103),
    [sym_display_charset] = STATE(103),
    [sym_utf8_strings] = STATE(103),
    [sym_no_utf8_strings] = STATE(103),
    [sym_compress_level] = STATE(103),
    [sym_bzip2_compress_level] = STATE(103),
    [sym_no_compress] = STATE(103),
    [sym_bzip2_decompress_lowmem] = STATE(103),
    [sym_mangle_dos_filenames] = STATE(103),
    [sym_no_mangle_dos_filenames] = STATE(103),
    [sym_ask_cert_level] = STATE(103),
    [sym_no_ask_cert_level] = STATE(103),
    [sym_default_cert_level] = STATE(103),
    [sym_min_cert_level] = STATE(103),
    [sym_trusted_key] = STATE(103),
    [sym_add_desig_revoker] = STATE(103),
    [sym_trust_model] = STATE(103),
    [sym_always_trust] = STATE(103),
    [sym_assert_signer] = STATE(103),
    [sym_auto_key_locate] = STATE(103),
    [sym_no_auto_key_locate] = STATE(103),
    [sym_auto_key_import] = STATE(103),
    [sym_no_auto_key_import] = STATE(103),
    [sym_auto_key_retrieve] = STATE(103),
    [sym_no_auto_key_retrieve] = STATE(103),
    [sym_keyid_format] = STATE(103),
    [sym_keyserver] = STATE(103),
    [sym_completes_needed] = STATE(103),
    [sym_marginals_needed] = STATE(103),
    [sym_tofu_default_policy] = STATE(103),
    [sym_max_cert_depth] = STATE(103),
    [sym_no_sig_cache] = STATE(103),
    [sym_auto_check_trustdb] = STATE(103),
    [sym_no_auto_check_trustdb] = STATE(103),
    [sym_agent_program] = STATE(103),
    [sym_dirmngr_program] = STATE(103),
    [sym_disable_dirmngr] = STATE(103),
    [sym_no_autostart] = STATE(103),
    [sym_lock_once] = STATE(103),
    [sym_lock_multiple] = STATE(103),
    [sym_lock_never] = STATE(103),
    [sym_exit_on_status_write_error] = STATE(103),
    [sym_limit_card_insert_tries] = STATE(103),
    [sym_no_random_seed_file] = STATE(103),
    [sym_no_greeting] = STATE(103),
    [sym_no_secmem_warning] = STATE(103),
    [sym_no_permission_warning] = STATE(103),
    [sym_require_secmem] = STATE(103),
    [sym_no_require_secmem] = STATE(103),
    [sym_require_cross_verification] = STATE(103),
    [sym_no_require_cross_verification] = STATE(103),
    [sym_expert] = STATE(103),
    [sym_no_expert] = STATE(103),
    [sym_textmode] = STATE(103),
    [sym_no_textmode] = STATE(103),
    [sym_force_ocb] = STATE(103),
    [sym_disable_signer_uid] = STATE(103),
    [sym_include_key_block] = STATE(103),
    [sym_no_include_key_block] = STATE(103),
    [sym_personal_cipher_preferences] = STATE(103),
    [sym_personal_digest_preferences] = STATE(103),
    [sym_personal_compress_preferences] = STATE(103),
    [sym_s2k_cipher_algo] = STATE(103),
    [sym_s2k_digest_algo] = STATE(103),
    [sym_s2k_mode] = STATE(103),
    [sym_s2k_count] = STATE(103),
    [sym_gnupg] = STATE(103),
    [sym_openpgp] = STATE(103),
    [sym_rfc4880] = STATE(103),
    [sym_rfc4880bis] = STATE(103),
    [sym_rfc2440] = STATE(103),
    [sym_pgp7] = STATE(103),
    [sym_pgp8] = STATE(103),
    [sym_compliance] = STATE(103),
    [sym_min_rsa_length] = STATE(103),
    [sym_require_compliance] = STATE(103),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_config_token1] = ACTIONS(205),
    [aux_sym_unknown_option_token1] = ACTIONS(208),
    [anon_sym_default_DASHkey] = ACTIONS(211),
    [anon_sym_default_DASHrecipient] = ACTIONS(214),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(217),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(220),
    [anon_sym_verbose] = ACTIONS(223),
    [anon_sym_no_DASHtty] = ACTIONS(226),
    [anon_sym_list_DASHoptions] = ACTIONS(229),
    [anon_sym_verify_DASHoptions] = ACTIONS(232),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(235),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(238),
    [anon_sym_enable_DASHdsa2] = ACTIONS(241),
    [anon_sym_disable_DASHdsa2] = ACTIONS(244),
    [anon_sym_photo_DASHviewer] = ACTIONS(247),
    [anon_sym_exec_DASHpath] = ACTIONS(250),
    [anon_sym_keyring] = ACTIONS(253),
    [anon_sym_primary_DASHkeyring] = ACTIONS(256),
    [anon_sym_trustdb_DASHname] = ACTIONS(259),
    [anon_sym_display_DASHcharset] = ACTIONS(262),
    [anon_sym_utf8_DASHstrings] = ACTIONS(265),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(268),
    [anon_sym_compress_DASHlevel] = ACTIONS(271),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(274),
    [anon_sym_no_DASHcompress] = ACTIONS(277),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(280),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(283),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(286),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(289),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(292),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(295),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(298),
    [anon_sym_trusted_DASHkey] = ACTIONS(301),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(304),
    [anon_sym_trust_DASHmodel] = ACTIONS(307),
    [anon_sym_always_DASHtrust] = ACTIONS(310),
    [anon_sym_assert_DASHsigner] = ACTIONS(313),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(316),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(319),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(322),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(325),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(328),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(331),
    [anon_sym_keyid_DASHformat] = ACTIONS(334),
    [anon_sym_keyserver] = ACTIONS(337),
    [anon_sym_completes_DASHneeded] = ACTIONS(340),
    [anon_sym_marginals_DASHneeded] = ACTIONS(343),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(346),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(349),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(352),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(355),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(358),
    [anon_sym_agent_DASHprogram] = ACTIONS(361),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(364),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(367),
    [anon_sym_no_DASHautostart] = ACTIONS(370),
    [anon_sym_lock_DASHonce] = ACTIONS(373),
    [anon_sym_lock_DASHmultiple] = ACTIONS(376),
    [anon_sym_lock_DASHnever] = ACTIONS(379),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(382),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(385),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(388),
    [anon_sym_no_DASHgreeting] = ACTIONS(391),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(394),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(397),
    [anon_sym_require_DASHsecmem] = ACTIONS(400),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(403),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(406),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(409),
    [anon_sym_expert] = ACTIONS(412),
    [anon_sym_no_DASHexpert] = ACTIONS(415),
    [anon_sym_textmode] = ACTIONS(418),
    [anon_sym_no_DASHtextmode] = ACTIONS(421),
    [anon_sym_force_DASHocb] = ACTIONS(424),
    [anon_sym_force_DASHaead] = ACTIONS(424),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(427),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(430),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(433),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(436),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(439),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(442),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(445),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(448),
    [anon_sym_s2k_DASHmode] = ACTIONS(451),
    [anon_sym_s2k_DASHcount] = ACTIONS(454),
    [anon_sym_gnupg] = ACTIONS(457),
    [anon_sym_openpgp] = ACTIONS(460),
    [anon_sym_rfc4880] = ACTIONS(463),
    [anon_sym_rfc4880bis] = ACTIONS(466),
    [anon_sym_rfc2440] = ACTIONS(469),
    [anon_sym_pgp7] = ACTIONS(472),
    [anon_sym_pgp8] = ACTIONS(475),
    [anon_sym_compliance] = ACTIONS(478),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(481),
    [anon_sym_require_DASHcompliance] = ACTIONS(484),
    [sym_comment] = ACTIONS(487),
    [sym__space] = ACTIONS(197),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [aux_sym_config_token1] = ACTIONS(203),
    [aux_sym_unknown_option_token1] = ACTIONS(490),
    [anon_sym_default_DASHkey] = ACTIONS(490),
    [anon_sym_default_DASHrecipient] = ACTIONS(490),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(490),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(490),
    [anon_sym_verbose] = ACTIONS(490),
    [anon_sym_no_DASHtty] = ACTIONS(490),
    [anon_sym_list_DASHoptions] = ACTIONS(490),
    [anon_sym_verify_DASHoptions] = ACTIONS(490),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(490),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(490),
    [anon_sym_enable_DASHdsa2] = ACTIONS(490),
    [anon_sym_disable_DASHdsa2] = ACTIONS(490),
    [anon_sym_photo_DASHviewer] = ACTIONS(490),
    [anon_sym_exec_DASHpath] = ACTIONS(490),
    [anon_sym_keyring] = ACTIONS(490),
    [anon_sym_primary_DASHkeyring] = ACTIONS(490),
    [anon_sym_trustdb_DASHname] = ACTIONS(490),
    [anon_sym_display_DASHcharset] = ACTIONS(490),
    [anon_sym_utf8_DASHstrings] = ACTIONS(490),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(490),
    [anon_sym_compress_DASHlevel] = ACTIONS(490),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(490),
    [anon_sym_no_DASHcompress] = ACTIONS(490),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(490),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(490),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(490),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(490),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(490),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(490),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(490),
    [anon_sym_trusted_DASHkey] = ACTIONS(490),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(490),
    [anon_sym_trust_DASHmodel] = ACTIONS(490),
    [anon_sym_always_DASHtrust] = ACTIONS(490),
    [anon_sym_assert_DASHsigner] = ACTIONS(490),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(490),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(490),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(490),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(490),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(490),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(490),
    [anon_sym_keyid_DASHformat] = ACTIONS(490),
    [anon_sym_keyserver] = ACTIONS(490),
    [anon_sym_completes_DASHneeded] = ACTIONS(490),
    [anon_sym_marginals_DASHneeded] = ACTIONS(490),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(490),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(490),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(490),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(490),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(490),
    [anon_sym_agent_DASHprogram] = ACTIONS(490),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(490),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(490),
    [anon_sym_no_DASHautostart] = ACTIONS(490),
    [anon_sym_lock_DASHonce] = ACTIONS(490),
    [anon_sym_lock_DASHmultiple] = ACTIONS(490),
    [anon_sym_lock_DASHnever] = ACTIONS(490),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(490),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(490),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(490),
    [anon_sym_no_DASHgreeting] = ACTIONS(490),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(490),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(490),
    [anon_sym_require_DASHsecmem] = ACTIONS(490),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(490),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(490),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(490),
    [anon_sym_expert] = ACTIONS(490),
    [anon_sym_no_DASHexpert] = ACTIONS(490),
    [anon_sym_textmode] = ACTIONS(490),
    [anon_sym_no_DASHtextmode] = ACTIONS(490),
    [anon_sym_force_DASHocb] = ACTIONS(490),
    [anon_sym_force_DASHaead] = ACTIONS(490),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(490),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(490),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(490),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(490),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(490),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(490),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(490),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(490),
    [anon_sym_s2k_DASHmode] = ACTIONS(490),
    [anon_sym_s2k_DASHcount] = ACTIONS(490),
    [anon_sym_gnupg] = ACTIONS(490),
    [anon_sym_openpgp] = ACTIONS(490),
    [anon_sym_rfc4880] = ACTIONS(490),
    [anon_sym_rfc4880bis] = ACTIONS(490),
    [anon_sym_rfc2440] = ACTIONS(490),
    [anon_sym_pgp7] = ACTIONS(490),
    [anon_sym_pgp8] = ACTIONS(490),
    [anon_sym_compliance] = ACTIONS(490),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(490),
    [anon_sym_require_DASHcompliance] = ACTIONS(490),
    [sym_comment] = ACTIONS(203),
    [sym__space] = ACTIONS(197),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(492), 1,
      aux_sym__command_token1,
    ACTIONS(494), 1,
      anon_sym_DQUOTE,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      sym_format,
    STATE(44), 1,
      aux_sym__command_repeat1,
    STATE(148), 1,
      sym__command,
  [22] = 6,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(500), 1,
      aux_sym_config_token1,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      sym__mechanism,
    ACTIONS(506), 1,
      sym_url,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [41] = 6,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      sym__mechanism,
    ACTIONS(506), 1,
      sym_url,
    ACTIONS(508), 1,
      aux_sym_config_token1,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [60] = 6,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(510), 1,
      aux_sym_config_token1,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      sym__mechanism,
    ACTIONS(518), 1,
      sym_url,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [79] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    ACTIONS(525), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(521), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [96] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
    ACTIONS(532), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(527), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [113] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(535), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(540), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [130] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(545), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [147] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(547), 1,
      aux_sym_config_token1,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [163] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(553), 1,
      aux_sym_config_token1,
    ACTIONS(555), 1,
      aux_sym__command_token1,
    ACTIONS(558), 1,
      sym_format,
    STATE(14), 1,
      aux_sym__command_repeat1,
  [179] = 3,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(563), 1,
      sym__mechanism,
    ACTIONS(561), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [191] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(565), 1,
      aux_sym_config_token1,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [207] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(150), 1,
      sym_string,
  [223] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(579), 1,
      aux_sym_config_token1,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__list_parameter,
    STATE(18), 1,
      aux_sym_list_options_repeat1,
  [239] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(587), 1,
      aux_sym_config_token1,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      sym__hash_algo,
    STATE(19), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [255] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(595), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    ACTIONS(600), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [271] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      aux_sym__command_token2,
    ACTIONS(608), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [287] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(611), 1,
      aux_sym_config_token1,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      sym__hash_algo,
    STATE(19), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [303] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(617), 1,
      aux_sym_config_token1,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__cipher_algo,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [319] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(623), 1,
      aux_sym_config_token1,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      sym__compression_algo,
    STATE(43), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [335] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(153), 1,
      sym_string,
  [351] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      sym__hash_algo,
    ACTIONS(629), 1,
      aux_sym_config_token1,
    STATE(19), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [367] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(143), 1,
      sym_string,
  [383] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__cipher_algo,
    ACTIONS(631), 1,
      aux_sym_config_token1,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [399] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(152), 1,
      sym_string,
  [415] = 3,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(635), 1,
      sym__mechanism,
    ACTIONS(633), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [427] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(151), 1,
      sym_string,
  [443] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(172), 1,
      sym_string,
  [459] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(163), 1,
      sym_string,
  [475] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(637), 1,
      aux_sym_config_token1,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      sym__list_parameter,
    STATE(18), 1,
      aux_sym_list_options_repeat1,
  [491] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      anon_sym_SQUOTE,
    ACTIONS(577), 1,
      aux_sym_string_token1,
    STATE(171), 1,
      sym_string,
  [507] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(643), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
    ACTIONS(647), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [523] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
    ACTIONS(649), 1,
      aux_sym__command_token2,
    ACTIONS(651), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [539] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      sym__hash_algo,
    ACTIONS(653), 1,
      aux_sym_config_token1,
    STATE(22), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [555] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__cipher_algo,
    ACTIONS(655), 1,
      aux_sym_config_token1,
    STATE(23), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [571] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      sym__compression_algo,
    ACTIONS(657), 1,
      aux_sym_config_token1,
    STATE(24), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [587] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      sym__hash_algo,
    ACTIONS(659), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [603] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__cipher_algo,
    ACTIONS(661), 1,
      aux_sym_config_token1,
    STATE(28), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [619] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(663), 1,
      aux_sym_config_token1,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      sym__compression_algo,
    STATE(43), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [635] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(671), 1,
      aux_sym_config_token1,
    ACTIONS(673), 1,
      aux_sym__command_token1,
    ACTIONS(675), 1,
      sym_format,
    STATE(14), 1,
      aux_sym__command_repeat1,
  [651] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(679), 1,
      aux_sym__command_token3,
    STATE(9), 1,
      aux_sym__command_repeat3,
    ACTIONS(677), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [665] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(681), 1,
      aux_sym__command_token2,
    STATE(12), 1,
      aux_sym__command_repeat2,
    ACTIONS(683), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [679] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      sym__verify_parameter,
    ACTIONS(685), 1,
      aux_sym_config_token1,
    STATE(13), 1,
      aux_sym_verify_options_repeat1,
  [695] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      sym__list_parameter,
    ACTIONS(687), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym_list_options_repeat1,
  [711] = 5,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(689), 1,
      aux_sym_config_token1,
    ACTIONS(691), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      sym__cipher_algo,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [727] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(697), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [736] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(699), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(701), 1,
      aux_sym__command_token3,
    STATE(36), 1,
      aux_sym_string_repeat2,
  [749] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(703), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [758] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(705), 1,
      aux_sym__command_token2,
    ACTIONS(707), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [771] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(709), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [780] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(711), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [789] = 3,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(713), 1,
      aux_sym_add_desig_revoker_token1,
    ACTIONS(715), 2,
      aux_sym_add_desig_revoker_token2,
      sym_key,
  [800] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(717), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [809] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(719), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [818] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(721), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [827] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(723), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [836] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(725), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [845] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(727), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [854] = 3,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(729), 1,
      sym__mechanism,
    ACTIONS(731), 1,
      sym_url,
  [864] = 3,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(733), 1,
      sym__mechanism,
    ACTIONS(735), 1,
      sym_url,
  [874] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(737), 1,
      aux_sym_default_cert_level_token1,
  [881] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(739), 1,
      aux_sym_config_token1,
  [888] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(741), 1,
      aux_sym_config_token1,
  [895] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(743), 1,
      aux_sym_config_token1,
  [902] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(745), 1,
      aux_sym_config_token1,
  [909] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(747), 1,
      aux_sym_config_token1,
  [916] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(749), 1,
      aux_sym_config_token1,
  [923] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(751), 1,
      aux_sym_config_token1,
  [930] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(753), 1,
      aux_sym_config_token1,
  [937] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(755), 1,
      aux_sym_config_token1,
  [944] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(757), 1,
      aux_sym_config_token1,
  [951] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(759), 1,
      aux_sym_config_token1,
  [958] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(761), 1,
      aux_sym_config_token1,
  [965] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(763), 1,
      aux_sym_config_token1,
  [972] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(765), 1,
      aux_sym_config_token1,
  [979] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(767), 1,
      aux_sym_config_token1,
  [986] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(769), 1,
      aux_sym_config_token1,
  [993] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(771), 1,
      aux_sym_config_token1,
  [1000] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(773), 1,
      aux_sym_config_token1,
  [1007] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(775), 1,
      aux_sym_config_token1,
  [1014] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(777), 1,
      aux_sym_config_token1,
  [1021] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(779), 1,
      aux_sym_config_token1,
  [1028] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(781), 1,
      aux_sym_config_token1,
  [1035] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(783), 1,
      aux_sym_config_token1,
  [1042] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(785), 1,
      aux_sym_config_token1,
  [1049] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(787), 1,
      aux_sym_config_token1,
  [1056] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(789), 1,
      aux_sym_config_token1,
  [1063] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(791), 1,
      aux_sym_config_token1,
  [1070] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(793), 1,
      aux_sym_config_token1,
  [1077] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(795), 1,
      aux_sym_config_token1,
  [1084] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(797), 1,
      aux_sym_config_token1,
  [1091] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(799), 1,
      aux_sym_config_token1,
  [1098] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(801), 1,
      aux_sym_config_token1,
  [1105] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(803), 1,
      aux_sym_config_token1,
  [1112] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(805), 1,
      aux_sym_config_token1,
  [1119] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(807), 1,
      aux_sym_config_token1,
  [1126] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(809), 1,
      aux_sym_config_token1,
  [1133] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(811), 1,
      aux_sym_config_token1,
  [1140] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(813), 1,
      aux_sym_config_token1,
  [1147] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(815), 1,
      ts_builtin_sym_end,
  [1154] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(817), 1,
      aux_sym_unknown_option_token2,
  [1161] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(819), 1,
      sym_key,
  [1168] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(821), 1,
      sym__list_parameter,
  [1175] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(823), 1,
      sym__verify_parameter,
  [1182] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(825), 1,
      sym__charset,
  [1189] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(827), 1,
      aux_sym_compress_level_token1,
  [1196] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(829), 1,
      aux_sym_compress_level_token1,
  [1203] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(831), 1,
      aux_sym_default_cert_level_token1,
  [1210] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(833), 1,
      sym_key,
  [1217] = 2,
    ACTIONS(835), 1,
      aux_sym_config_token1,
    ACTIONS(837), 1,
      sym__space,
  [1224] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(839), 1,
      sym__model,
  [1231] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(841), 1,
      aux_sym_config_token1,
  [1238] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(843), 1,
      aux_sym_config_token1,
  [1245] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(845), 1,
      sym__keyid_format,
  [1252] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(847), 1,
      sym_url,
  [1259] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(849), 1,
      sym_number,
  [1266] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(851), 1,
      sym_number,
  [1273] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(853), 1,
      sym__tofu_policy,
  [1280] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(855), 1,
      sym_number,
  [1287] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(857), 1,
      aux_sym_config_token1,
  [1294] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(859), 1,
      aux_sym_config_token1,
  [1301] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(861), 1,
      sym_number,
  [1308] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(863), 1,
      sym__cipher_algo,
  [1315] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(865), 1,
      sym__hash_algo,
  [1322] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(867), 1,
      sym__compression_algo,
  [1329] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(869), 1,
      sym__cipher_algo,
  [1336] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(871), 1,
      sym__hash_algo,
  [1343] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(873), 1,
      aux_sym_s2k_mode_token1,
  [1350] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(875), 1,
      sym_number,
  [1357] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(877), 1,
      sym__compliance,
  [1364] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(879), 1,
      sym_number,
  [1371] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(881), 1,
      aux_sym_config_token1,
  [1378] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(883), 1,
      aux_sym_config_token1,
  [1385] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(885), 1,
      aux_sym_config_token1,
  [1392] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(887), 1,
      aux_sym_config_token1,
  [1399] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(889), 1,
      aux_sym_config_token1,
  [1406] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(891), 1,
      aux_sym_config_token1,
  [1413] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(893), 1,
      aux_sym_config_token1,
  [1420] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(895), 1,
      aux_sym_config_token1,
  [1427] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(897), 1,
      sym__compression_algo,
  [1434] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(899), 1,
      sym__hash_algo,
  [1441] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(901), 1,
      aux_sym_config_token1,
  [1448] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(903), 1,
      aux_sym_config_token1,
  [1455] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(905), 1,
      aux_sym_config_token1,
  [1462] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(907), 1,
      sym__cipher_algo,
  [1469] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(909), 1,
      aux_sym_config_token1,
  [1476] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(911), 1,
      aux_sym_config_token1,
  [1483] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(913), 1,
      aux_sym_config_token1,
  [1490] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(915), 1,
      aux_sym_config_token1,
  [1497] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(917), 1,
      aux_sym_config_token1,
  [1504] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(919), 1,
      aux_sym_config_token1,
  [1511] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(921), 1,
      aux_sym_config_token1,
  [1518] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(923), 1,
      aux_sym_config_token1,
  [1525] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(925), 1,
      aux_sym_config_token1,
  [1532] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(927), 1,
      aux_sym_config_token1,
  [1539] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(929), 1,
      sym_key,
  [1546] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(931), 1,
      aux_sym_config_token1,
  [1553] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(933), 1,
      aux_sym_config_token1,
  [1560] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(935), 1,
      aux_sym_config_token1,
  [1567] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(937), 1,
      aux_sym_config_token1,
  [1574] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(939), 1,
      aux_sym_config_token1,
  [1581] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(941), 1,
      aux_sym_config_token1,
  [1588] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(943), 1,
      aux_sym_config_token1,
  [1595] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(945), 1,
      aux_sym_config_token1,
  [1602] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(947), 1,
      aux_sym_config_token1,
  [1609] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(949), 1,
      aux_sym_config_token1,
  [1616] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(951), 1,
      aux_sym_config_token1,
  [1623] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(953), 1,
      aux_sym_config_token1,
  [1630] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(955), 1,
      aux_sym_config_token1,
  [1637] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(957), 1,
      aux_sym_config_token1,
  [1644] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(959), 1,
      aux_sym_config_token1,
  [1651] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(961), 1,
      aux_sym_config_token1,
  [1658] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(963), 1,
      aux_sym_config_token1,
  [1665] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(965), 1,
      aux_sym_config_token1,
  [1672] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(967), 1,
      aux_sym_config_token1,
  [1679] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(969), 1,
      aux_sym_config_token1,
  [1686] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(971), 1,
      aux_sym_config_token1,
  [1693] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(973), 1,
      aux_sym_config_token1,
  [1700] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(975), 1,
      aux_sym_config_token1,
  [1707] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(977), 1,
      aux_sym_config_token1,
  [1714] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(979), 1,
      sym__list_parameter,
  [1721] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(981), 1,
      aux_sym_config_token1,
  [1728] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(983), 1,
      aux_sym_config_token1,
  [1735] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(985), 1,
      sym__verify_parameter,
  [1742] = 2,
    ACTIONS(197), 1,
      sym__space,
    ACTIONS(987), 1,
      aux_sym_config_token1,
  [1749] = 1,
    ACTIONS(989), 1,
      sym__space,
  [1753] = 1,
    ACTIONS(991), 1,
      sym__space,
  [1757] = 1,
    ACTIONS(993), 1,
      sym__space,
  [1761] = 1,
    ACTIONS(995), 1,
      sym__space,
  [1765] = 1,
    ACTIONS(997), 1,
      sym__space,
  [1769] = 1,
    ACTIONS(999), 1,
      sym__space,
  [1773] = 1,
    ACTIONS(1001), 1,
      sym__space,
  [1777] = 1,
    ACTIONS(1003), 1,
      sym__space,
  [1781] = 1,
    ACTIONS(1005), 1,
      sym__space,
  [1785] = 1,
    ACTIONS(1007), 1,
      sym__space,
  [1789] = 1,
    ACTIONS(1009), 1,
      sym__space,
  [1793] = 1,
    ACTIONS(1011), 1,
      sym__space,
  [1797] = 1,
    ACTIONS(1013), 1,
      sym__space,
  [1801] = 1,
    ACTIONS(1015), 1,
      sym__space,
  [1805] = 1,
    ACTIONS(1017), 1,
      sym__space,
  [1809] = 1,
    ACTIONS(1019), 1,
      sym__space,
  [1813] = 1,
    ACTIONS(1021), 1,
      sym__space,
  [1817] = 1,
    ACTIONS(1023), 1,
      sym__space,
  [1821] = 1,
    ACTIONS(1025), 1,
      sym__space,
  [1825] = 1,
    ACTIONS(1027), 1,
      sym__space,
  [1829] = 1,
    ACTIONS(1029), 1,
      sym__space,
  [1833] = 1,
    ACTIONS(1031), 1,
      sym__space,
  [1837] = 1,
    ACTIONS(1033), 1,
      sym__space,
  [1841] = 1,
    ACTIONS(1035), 1,
      sym__space,
  [1845] = 1,
    ACTIONS(1037), 1,
      sym__space,
  [1849] = 1,
    ACTIONS(1039), 1,
      sym__space,
  [1853] = 1,
    ACTIONS(1041), 1,
      sym__space,
  [1857] = 1,
    ACTIONS(1043), 1,
      sym__space,
  [1861] = 1,
    ACTIONS(1045), 1,
      sym__space,
  [1865] = 1,
    ACTIONS(1047), 1,
      sym__space,
  [1869] = 1,
    ACTIONS(1049), 1,
      sym__space,
  [1873] = 1,
    ACTIONS(1051), 1,
      sym__space,
  [1877] = 1,
    ACTIONS(1053), 1,
      sym__space,
  [1881] = 1,
    ACTIONS(1055), 1,
      sym__space,
  [1885] = 1,
    ACTIONS(1057), 1,
      sym__space,
  [1889] = 1,
    ACTIONS(1059), 1,
      sym__space,
  [1893] = 1,
    ACTIONS(1061), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 113,
  [SMALL_STATE(12)] = 130,
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
  [SMALL_STATE(25)] = 335,
  [SMALL_STATE(26)] = 351,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 383,
  [SMALL_STATE(29)] = 399,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 443,
  [SMALL_STATE(33)] = 459,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 491,
  [SMALL_STATE(36)] = 507,
  [SMALL_STATE(37)] = 523,
  [SMALL_STATE(38)] = 539,
  [SMALL_STATE(39)] = 555,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 587,
  [SMALL_STATE(42)] = 603,
  [SMALL_STATE(43)] = 619,
  [SMALL_STATE(44)] = 635,
  [SMALL_STATE(45)] = 651,
  [SMALL_STATE(46)] = 665,
  [SMALL_STATE(47)] = 679,
  [SMALL_STATE(48)] = 695,
  [SMALL_STATE(49)] = 711,
  [SMALL_STATE(50)] = 727,
  [SMALL_STATE(51)] = 736,
  [SMALL_STATE(52)] = 749,
  [SMALL_STATE(53)] = 758,
  [SMALL_STATE(54)] = 771,
  [SMALL_STATE(55)] = 780,
  [SMALL_STATE(56)] = 789,
  [SMALL_STATE(57)] = 800,
  [SMALL_STATE(58)] = 809,
  [SMALL_STATE(59)] = 818,
  [SMALL_STATE(60)] = 827,
  [SMALL_STATE(61)] = 836,
  [SMALL_STATE(62)] = 845,
  [SMALL_STATE(63)] = 854,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 874,
  [SMALL_STATE(66)] = 881,
  [SMALL_STATE(67)] = 888,
  [SMALL_STATE(68)] = 895,
  [SMALL_STATE(69)] = 902,
  [SMALL_STATE(70)] = 909,
  [SMALL_STATE(71)] = 916,
  [SMALL_STATE(72)] = 923,
  [SMALL_STATE(73)] = 930,
  [SMALL_STATE(74)] = 937,
  [SMALL_STATE(75)] = 944,
  [SMALL_STATE(76)] = 951,
  [SMALL_STATE(77)] = 958,
  [SMALL_STATE(78)] = 965,
  [SMALL_STATE(79)] = 972,
  [SMALL_STATE(80)] = 979,
  [SMALL_STATE(81)] = 986,
  [SMALL_STATE(82)] = 993,
  [SMALL_STATE(83)] = 1000,
  [SMALL_STATE(84)] = 1007,
  [SMALL_STATE(85)] = 1014,
  [SMALL_STATE(86)] = 1021,
  [SMALL_STATE(87)] = 1028,
  [SMALL_STATE(88)] = 1035,
  [SMALL_STATE(89)] = 1042,
  [SMALL_STATE(90)] = 1049,
  [SMALL_STATE(91)] = 1056,
  [SMALL_STATE(92)] = 1063,
  [SMALL_STATE(93)] = 1070,
  [SMALL_STATE(94)] = 1077,
  [SMALL_STATE(95)] = 1084,
  [SMALL_STATE(96)] = 1091,
  [SMALL_STATE(97)] = 1098,
  [SMALL_STATE(98)] = 1105,
  [SMALL_STATE(99)] = 1112,
  [SMALL_STATE(100)] = 1119,
  [SMALL_STATE(101)] = 1126,
  [SMALL_STATE(102)] = 1133,
  [SMALL_STATE(103)] = 1140,
  [SMALL_STATE(104)] = 1147,
  [SMALL_STATE(105)] = 1154,
  [SMALL_STATE(106)] = 1161,
  [SMALL_STATE(107)] = 1168,
  [SMALL_STATE(108)] = 1175,
  [SMALL_STATE(109)] = 1182,
  [SMALL_STATE(110)] = 1189,
  [SMALL_STATE(111)] = 1196,
  [SMALL_STATE(112)] = 1203,
  [SMALL_STATE(113)] = 1210,
  [SMALL_STATE(114)] = 1217,
  [SMALL_STATE(115)] = 1224,
  [SMALL_STATE(116)] = 1231,
  [SMALL_STATE(117)] = 1238,
  [SMALL_STATE(118)] = 1245,
  [SMALL_STATE(119)] = 1252,
  [SMALL_STATE(120)] = 1259,
  [SMALL_STATE(121)] = 1266,
  [SMALL_STATE(122)] = 1273,
  [SMALL_STATE(123)] = 1280,
  [SMALL_STATE(124)] = 1287,
  [SMALL_STATE(125)] = 1294,
  [SMALL_STATE(126)] = 1301,
  [SMALL_STATE(127)] = 1308,
  [SMALL_STATE(128)] = 1315,
  [SMALL_STATE(129)] = 1322,
  [SMALL_STATE(130)] = 1329,
  [SMALL_STATE(131)] = 1336,
  [SMALL_STATE(132)] = 1343,
  [SMALL_STATE(133)] = 1350,
  [SMALL_STATE(134)] = 1357,
  [SMALL_STATE(135)] = 1364,
  [SMALL_STATE(136)] = 1371,
  [SMALL_STATE(137)] = 1378,
  [SMALL_STATE(138)] = 1385,
  [SMALL_STATE(139)] = 1392,
  [SMALL_STATE(140)] = 1399,
  [SMALL_STATE(141)] = 1406,
  [SMALL_STATE(142)] = 1413,
  [SMALL_STATE(143)] = 1420,
  [SMALL_STATE(144)] = 1427,
  [SMALL_STATE(145)] = 1434,
  [SMALL_STATE(146)] = 1441,
  [SMALL_STATE(147)] = 1448,
  [SMALL_STATE(148)] = 1455,
  [SMALL_STATE(149)] = 1462,
  [SMALL_STATE(150)] = 1469,
  [SMALL_STATE(151)] = 1476,
  [SMALL_STATE(152)] = 1483,
  [SMALL_STATE(153)] = 1490,
  [SMALL_STATE(154)] = 1497,
  [SMALL_STATE(155)] = 1504,
  [SMALL_STATE(156)] = 1511,
  [SMALL_STATE(157)] = 1518,
  [SMALL_STATE(158)] = 1525,
  [SMALL_STATE(159)] = 1532,
  [SMALL_STATE(160)] = 1539,
  [SMALL_STATE(161)] = 1546,
  [SMALL_STATE(162)] = 1553,
  [SMALL_STATE(163)] = 1560,
  [SMALL_STATE(164)] = 1567,
  [SMALL_STATE(165)] = 1574,
  [SMALL_STATE(166)] = 1581,
  [SMALL_STATE(167)] = 1588,
  [SMALL_STATE(168)] = 1595,
  [SMALL_STATE(169)] = 1602,
  [SMALL_STATE(170)] = 1609,
  [SMALL_STATE(171)] = 1616,
  [SMALL_STATE(172)] = 1623,
  [SMALL_STATE(173)] = 1630,
  [SMALL_STATE(174)] = 1637,
  [SMALL_STATE(175)] = 1644,
  [SMALL_STATE(176)] = 1651,
  [SMALL_STATE(177)] = 1658,
  [SMALL_STATE(178)] = 1665,
  [SMALL_STATE(179)] = 1672,
  [SMALL_STATE(180)] = 1679,
  [SMALL_STATE(181)] = 1686,
  [SMALL_STATE(182)] = 1693,
  [SMALL_STATE(183)] = 1700,
  [SMALL_STATE(184)] = 1707,
  [SMALL_STATE(185)] = 1714,
  [SMALL_STATE(186)] = 1721,
  [SMALL_STATE(187)] = 1728,
  [SMALL_STATE(188)] = 1735,
  [SMALL_STATE(189)] = 1742,
  [SMALL_STATE(190)] = 1749,
  [SMALL_STATE(191)] = 1753,
  [SMALL_STATE(192)] = 1757,
  [SMALL_STATE(193)] = 1761,
  [SMALL_STATE(194)] = 1765,
  [SMALL_STATE(195)] = 1769,
  [SMALL_STATE(196)] = 1773,
  [SMALL_STATE(197)] = 1777,
  [SMALL_STATE(198)] = 1781,
  [SMALL_STATE(199)] = 1785,
  [SMALL_STATE(200)] = 1789,
  [SMALL_STATE(201)] = 1793,
  [SMALL_STATE(202)] = 1797,
  [SMALL_STATE(203)] = 1801,
  [SMALL_STATE(204)] = 1805,
  [SMALL_STATE(205)] = 1809,
  [SMALL_STATE(206)] = 1813,
  [SMALL_STATE(207)] = 1817,
  [SMALL_STATE(208)] = 1821,
  [SMALL_STATE(209)] = 1825,
  [SMALL_STATE(210)] = 1829,
  [SMALL_STATE(211)] = 1833,
  [SMALL_STATE(212)] = 1837,
  [SMALL_STATE(213)] = 1841,
  [SMALL_STATE(214)] = 1845,
  [SMALL_STATE(215)] = 1849,
  [SMALL_STATE(216)] = 1853,
  [SMALL_STATE(217)] = 1857,
  [SMALL_STATE(218)] = 1861,
  [SMALL_STATE(219)] = 1865,
  [SMALL_STATE(220)] = 1869,
  [SMALL_STATE(221)] = 1873,
  [SMALL_STATE(222)] = 1877,
  [SMALL_STATE(223)] = 1881,
  [SMALL_STATE(224)] = 1885,
  [SMALL_STATE(225)] = 1889,
  [SMALL_STATE(226)] = 1893,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(114),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(69),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(86),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(87),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(88),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(219),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(218),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(89),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(90),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(92),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(100),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(213),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(212),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(195),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(190),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(207),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(125),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(136),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(203),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(202),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(146),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(147),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(183),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(184),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(189),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(208),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(209),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(193),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(194),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(66),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(210),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(196),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(178),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(177),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(176),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(175),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(174),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(201),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(204),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(140),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(137),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(206),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(124),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(117),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(116),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(186),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(67),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(68),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(226),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(70),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(71),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(72),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(73),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(74),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(75),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(76),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(77),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(78),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(79),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(80),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(81),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(82),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(83),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(84),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(85),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(225),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(224),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(223),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(222),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(217),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(93),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(94),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(95),
  [466] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(96),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(97),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(98),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(102),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(103),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 13),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(64),
  [515] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(30),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(30),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(14),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(14),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(188),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(57),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(185),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(55),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(145),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(59),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 4, .production_id = 9),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 4, .production_id = 9),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 4, .production_id = 9),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 4, .production_id = 9),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 4, .production_id = 9),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 3, .production_id = 9),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 3, .production_id = 9),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 3, .production_id = 9),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 3, .production_id = 9),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 3, .production_id = 9),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(144),
  [668] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(50),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(149),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(58),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 1, .production_id = 14),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2, .production_id = 19),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 16),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 11),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 11),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 1, .production_id = 14),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 1, .production_id = 14),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2, .production_id = 19),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2, .production_id = 19),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 16),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textmode, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_textmode, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_ocb, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_signer_uid, 1),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_key_block, 1),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_include_key_block, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 15),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gnupg, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openpgp, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880, 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880bis, 1),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc2440, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp7, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp8, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 15),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_compliance, 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [815] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 3),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_mode, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_count, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compliance, 3, .production_id = 10),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_rsa_length, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
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
