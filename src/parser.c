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
#define STATE_COUNT 224
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 232
#define ALIAS_COUNT 0
#define TOKEN_COUNT 125
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 20

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
  aux_sym_add_desig_revoker_token1 = 47,
  aux_sym_add_desig_revoker_token2 = 48,
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
  anon_sym_textmode = 90,
  anon_sym_no_DASHtextmode = 91,
  anon_sym_force_DASHocb = 92,
  anon_sym_force_DASHaead = 93,
  anon_sym_disable_DASHsigner_DASHuid = 94,
  anon_sym_include_DASHkey_DASHblock = 95,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 96,
  anon_sym_personal_DASHcipher_DASHpreferences = 97,
  anon_sym_personal_DASHdigest_DASHpreferences = 98,
  anon_sym_personal_DASHcompress_DASHpreferences = 99,
  anon_sym_s2k_DASHcipher_DASHalgo = 100,
  anon_sym_s2k_DASHdigest_DASHalgo = 101,
  anon_sym_s2k_DASHmode = 102,
  aux_sym_s2k_mode_token1 = 103,
  anon_sym_s2k_DASHcount = 104,
  anon_sym_gnupg = 105,
  anon_sym_openpgp = 106,
  anon_sym_rfc4880 = 107,
  anon_sym_rfc4880bis = 108,
  anon_sym_rfc2440 = 109,
  anon_sym_pgp7 = 110,
  anon_sym_pgp8 = 111,
  anon_sym_compliance = 112,
  sym__compliance = 113,
  anon_sym_min_DASHrsa_DASHlength = 114,
  anon_sym_require_DASHcompliance = 115,
  sym_key = 116,
  sym_url = 117,
  sym_number = 118,
  aux_sym_string_token1 = 119,
  sym_comment = 120,
  sym__cipher_algo = 121,
  sym__hash_algo = 122,
  sym__compression_algo = 123,
  sym__space = 124,
  sym_config = 125,
  sym_default_key = 126,
  sym_default_recipient = 127,
  sym_default_recipient_self = 128,
  sym_no_default_recipient = 129,
  sym_verbose = 130,
  sym_no_tty = 131,
  sym_list_options = 132,
  sym_verify_options = 133,
  sym_enable_large_rsa = 134,
  sym_disable_large_rsa = 135,
  sym_enable_dsa2 = 136,
  sym_disable_dsa2 = 137,
  sym_photo_viewer = 138,
  sym__command = 139,
  sym_exec_path = 140,
  sym_keyring = 141,
  sym_primary_keyring = 142,
  sym_trustdb_name = 143,
  sym_display_charset = 144,
  sym_utf8_strings = 145,
  sym_no_utf8_strings = 146,
  sym_compress_level = 147,
  sym_bzip2_compress_level = 148,
  sym_no_compress = 149,
  sym_bzip2_decompress_lowmem = 150,
  sym_mangle_dos_filenames = 151,
  sym_no_mangle_dos_filenames = 152,
  sym_ask_cert_level = 153,
  sym_no_ask_cert_level = 154,
  sym_default_cert_level = 155,
  sym_min_cert_level = 156,
  sym_trusted_key = 157,
  sym_add_desig_revoker = 158,
  sym_trust_model = 159,
  sym_always_trust = 160,
  sym_assert_signer = 161,
  sym_auto_key_locate = 162,
  sym_no_auto_key_locate = 163,
  sym_auto_key_import = 164,
  sym_no_auto_key_import = 165,
  sym_auto_key_retrieve = 166,
  sym_no_auto_key_retrieve = 167,
  sym_keyid_format = 168,
  sym_keyserver = 169,
  sym_completes_needed = 170,
  sym_marginals_needed = 171,
  sym_tofu_default_policy = 172,
  sym_max_cert_depth = 173,
  sym_no_sig_cache = 174,
  sym_auto_check_trustdb = 175,
  sym_no_auto_check_trustdb = 176,
  sym_agent_program = 177,
  sym_dirmngr_program = 178,
  sym_disable_dirmngr = 179,
  sym_no_autostart = 180,
  sym_lock_once = 181,
  sym_lock_multiple = 182,
  sym_lock_never = 183,
  sym_exit_on_status_write_error = 184,
  sym_limit_card_insert_tries = 185,
  sym_no_random_seed_file = 186,
  sym_no_greeting = 187,
  sym_no_secmem_warning = 188,
  sym_no_permission_warning = 189,
  sym_require_secmem = 190,
  sym_no_require_secmem = 191,
  sym_require_cross_verification = 192,
  sym_no_require_cross_verification = 193,
  sym_expert = 194,
  sym_no_expert = 195,
  sym_textmode = 196,
  sym_no_textmode = 197,
  sym_force_ocb = 198,
  sym_disable_signer_uid = 199,
  sym_include_key_block = 200,
  sym_no_include_key_block = 201,
  sym_personal_cipher_preferences = 202,
  sym_personal_digest_preferences = 203,
  sym_personal_compress_preferences = 204,
  sym_s2k_cipher_algo = 205,
  sym_s2k_digest_algo = 206,
  sym_s2k_mode = 207,
  sym_s2k_count = 208,
  sym_gnupg = 209,
  sym_openpgp = 210,
  sym_rfc4880 = 211,
  sym_rfc4880bis = 212,
  sym_rfc2440 = 213,
  sym_pgp7 = 214,
  sym_pgp8 = 215,
  sym_compliance = 216,
  sym_min_rsa_length = 217,
  sym_require_compliance = 218,
  sym_string = 219,
  aux_sym_config_repeat1 = 220,
  aux_sym_list_options_repeat1 = 221,
  aux_sym_verify_options_repeat1 = 222,
  aux_sym__command_repeat1 = 223,
  aux_sym__command_repeat2 = 224,
  aux_sym__command_repeat3 = 225,
  aux_sym_auto_key_locate_repeat1 = 226,
  aux_sym_personal_cipher_preferences_repeat1 = 227,
  aux_sym_personal_digest_preferences_repeat1 = 228,
  aux_sym_personal_compress_preferences_repeat1 = 229,
  aux_sym_string_repeat1 = 230,
  aux_sym_string_repeat2 = 231,
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
  [aux_sym_add_desig_revoker_token1] = aux_sym_add_desig_revoker_token1,
  [aux_sym_add_desig_revoker_token2] = aux_sym_add_desig_revoker_token2,
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
  [anon_sym_textmode] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHtextmode] = anon_sym_default_DASHkey,
  [anon_sym_force_DASHocb] = anon_sym_default_DASHkey,
  [anon_sym_force_DASHaead] = anon_sym_default_DASHkey,
  [anon_sym_disable_DASHsigner_DASHuid] = anon_sym_default_DASHkey,
  [anon_sym_include_DASHkey_DASHblock] = anon_sym_default_DASHkey,
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = anon_sym_default_DASHkey,
  [anon_sym_personal_DASHcipher_DASHpreferences] = anon_sym_default_DASHkey,
  [anon_sym_personal_DASHdigest_DASHpreferences] = anon_sym_default_DASHkey,
  [anon_sym_personal_DASHcompress_DASHpreferences] = anon_sym_default_DASHkey,
  [anon_sym_s2k_DASHcipher_DASHalgo] = anon_sym_default_DASHkey,
  [anon_sym_s2k_DASHdigest_DASHalgo] = anon_sym_default_DASHkey,
  [anon_sym_s2k_DASHmode] = anon_sym_default_DASHkey,
  [aux_sym_s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = anon_sym_default_DASHkey,
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
  [sym__cipher_algo] = sym__cipher_algo,
  [sym__hash_algo] = sym__hash_algo,
  [sym__compression_algo] = sym__compression_algo,
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
      if (eof) ADVANCE(1338);
      if (lookahead == '"') ADVANCE(1358);
      if (lookahead == '%') ADVANCE(1357);
      if (lookahead == '\'') ADVANCE(1364);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '2') ADVANCE(1356);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1360);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1356);
      if (lookahead != 0) ADVANCE(1356);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1339);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1339);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1357);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (lookahead != 0) ADVANCE(1356);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(1339);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead == 'c') ADVANCE(503);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'h') ADVANCE(700);
      if (lookahead == 'k') ADVANCE(540);
      if (lookahead == 'l') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(877);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 's') ADVANCE(613);
      if (lookahead == 't') ADVANCE(910);
      if (lookahead == 'w') ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1380);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(1339);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == 'B') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(867);
      if (lookahead == 'Z') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(1102);
      if (lookahead == 'b') ADVANCE(223);
      if (lookahead == 'd') ADVANCE(476);
      if (lookahead == 'g') ADVANCE(847);
      if (lookahead == 'n') ADVANCE(915);
      if (lookahead == 'o') ADVANCE(976);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead == 'r') ADVANCE(564);
      if (lookahead == 'u') ADVANCE(821);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1389);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1358);
      if (lookahead == '%') ADVANCE(1357);
      if (lookahead == '\'') ADVANCE(1364);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1356);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1358);
      if (lookahead == '%') ADVANCE(1362);
      if (lookahead == '\\') ADVANCE(1361);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1360);
      if (lookahead != 0) ADVANCE(1360);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1358);
      if (lookahead == '\\') ADVANCE(1361);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1360);
      if (lookahead != 0) ADVANCE(1360);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1359);
      if (lookahead == '\'') ADVANCE(1365);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1502);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(1368);
      if (lookahead == '\'') ADVANCE(1364);
      if (lookahead == '\\') ADVANCE(1367);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1366);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(1364);
      if (lookahead == '\\') ADVANCE(1367);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1366);
      if (lookahead != 0) ADVANCE(1366);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1332);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(322);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(281);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(282);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(780);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(704);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(319);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(363);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(327);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(333);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(283);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(708);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(405);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(1097);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(285);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1258);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(305);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(711);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(1281);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '8') ADVANCE(63);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(1259);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(317);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(1262);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(557);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(911);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(952);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(308);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(889);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(989);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(1245);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(749);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(561);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(294);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(781);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(287);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(828);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(824);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(221);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(850);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(1035);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(1286);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(1241);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(742);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(1104);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(348);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(705);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(1128);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(1246);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(1183);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(959);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(274);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(1242);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(1137);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(706);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(1019);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(739);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(1243);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(646);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(903);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(1073);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(357);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(253);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(1040);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(1127);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(761);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(1214);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(1130);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(763);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(1274);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(971);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(764);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(765);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(691);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(801);
      if (lookahead == 'd') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(865);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(1288);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(1141);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(1221);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(980);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(766);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(1224);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(982);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(1277);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(326);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(936);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(979);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(330);
      if (lookahead == 's') ADVANCE(1208);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(869);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(374);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(1278);
      END_STATE();
    case 116:
      if (lookahead == '/') ADVANCE(1336);
      END_STATE();
    case 117:
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '0') ADVANCE(1506);
      END_STATE();
    case 119:
      if (lookahead == '0') ADVANCE(1457);
      END_STATE();
    case 120:
      if (lookahead == '0') ADVANCE(1455);
      END_STATE();
    case 121:
      if (lookahead == '0') ADVANCE(1461);
      END_STATE();
    case 122:
      if (lookahead == '0') ADVANCE(1462);
      END_STATE();
    case 123:
      if (lookahead == '0') ADVANCE(1500);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1501);
      END_STATE();
    case 124:
      if (lookahead == '0') ADVANCE(1290);
      if (lookahead == 'l') ADVANCE(908);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      END_STATE();
    case 125:
      if (lookahead == '1') ADVANCE(1506);
      if (lookahead == '2') ADVANCE(138);
      if (lookahead == '3') ADVANCE(157);
      if (lookahead == '5') ADVANCE(129);
      END_STATE();
    case 126:
      if (lookahead == '1') ADVANCE(1376);
      if (lookahead == '2') ADVANCE(1375);
      END_STATE();
    case 127:
      if (lookahead == '1') ADVANCE(1380);
      END_STATE();
    case 128:
      if (lookahead == '1') ADVANCE(139);
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == '1') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == '1') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == '2') ADVANCE(1506);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '4') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == '2') ADVANCE(1353);
      END_STATE();
    case 134:
      if (lookahead == '2') ADVANCE(1354);
      END_STATE();
    case 135:
      if (lookahead == '2') ADVANCE(1504);
      END_STATE();
    case 136:
      if (lookahead == '2') ADVANCE(1507);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == 'h') ADVANCE(880);
      END_STATE();
    case 138:
      if (lookahead == '2') ADVANCE(142);
      if (lookahead == '5') ADVANCE(150);
      END_STATE();
    case 139:
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == '9') ADVANCE(135);
      END_STATE();
    case 140:
      if (lookahead == '2') ADVANCE(18);
      END_STATE();
    case 141:
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '4') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == '4') ADVANCE(1506);
      END_STATE();
    case 143:
      if (lookahead == '4') ADVANCE(119);
      END_STATE();
    case 144:
      if (lookahead == '4') ADVANCE(143);
      END_STATE();
    case 145:
      if (lookahead == '4') ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == '4') ADVANCE(121);
      END_STATE();
    case 147:
      if (lookahead == '5') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == '5') ADVANCE(1504);
      END_STATE();
    case 149:
      if (lookahead == '5') ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == '6') ADVANCE(1506);
      END_STATE();
    case 151:
      if (lookahead == '6') ADVANCE(1504);
      END_STATE();
    case 152:
      if (lookahead == '6') ADVANCE(118);
      END_STATE();
    case 153:
      if (lookahead == '7') ADVANCE(1458);
      if (lookahead == '8') ADVANCE(1459);
      END_STATE();
    case 154:
      if (lookahead == '8') ADVANCE(1375);
      END_STATE();
    case 155:
      if (lookahead == '8') ADVANCE(147);
      END_STATE();
    case 156:
      if (lookahead == '8') ADVANCE(1504);
      END_STATE();
    case 157:
      if (lookahead == '8') ADVANCE(142);
      END_STATE();
    case 158:
      if (lookahead == '8') ADVANCE(120);
      END_STATE();
    case 159:
      if (lookahead == '8') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == '8') ADVANCE(122);
      END_STATE();
    case 161:
      if (lookahead == '8') ADVANCE(158);
      END_STATE();
    case 162:
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 163:
      if (lookahead == '8') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == '8') ADVANCE(101);
      END_STATE();
    case 165:
      if (lookahead == '9') ADVANCE(135);
      END_STATE();
    case 166:
      if (lookahead == '9') ADVANCE(26);
      END_STATE();
    case 167:
      if (lookahead == ':') ADVANCE(117);
      END_STATE();
    case 168:
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 169:
      if (lookahead == ':') ADVANCE(1393);
      END_STATE();
    case 170:
      if (lookahead == 'A') ADVANCE(125);
      END_STATE();
    case 171:
      if (lookahead == 'A') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'A') ADVANCE(128);
      END_STATE();
    case 173:
      if (lookahead == 'B') ADVANCE(1507);
      END_STATE();
    case 174:
      if (lookahead == 'D') ADVANCE(130);
      END_STATE();
    case 175:
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 176:
      if (lookahead == 'E') ADVANCE(195);
      END_STATE();
    case 177:
      if (lookahead == 'E') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 'F') ADVANCE(184);
      END_STATE();
    case 179:
      if (lookahead == 'H') ADVANCE(170);
      END_STATE();
    case 180:
      if (lookahead == 'H') ADVANCE(1504);
      END_STATE();
    case 181:
      if (lookahead == 'I') ADVANCE(192);
      END_STATE();
    case 182:
      if (lookahead == 'I') ADVANCE(173);
      END_STATE();
    case 183:
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 184:
      if (lookahead == 'I') ADVANCE(196);
      END_STATE();
    case 185:
      if (lookahead == 'I') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'I') ADVANCE(172);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 189:
      if (lookahead == 'M') ADVANCE(174);
      END_STATE();
    case 190:
      if (lookahead == 'M') ADVANCE(177);
      if (lookahead == 'S') ADVANCE(197);
      END_STATE();
    case 191:
      if (lookahead == 'O') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 'P') ADVANCE(175);
      END_STATE();
    case 193:
      if (lookahead == 'P') ADVANCE(1507);
      END_STATE();
    case 194:
      if (lookahead == 'P') ADVANCE(136);
      END_STATE();
    case 195:
      if (lookahead == 'S') ADVANCE(1505);
      END_STATE();
    case 196:
      if (lookahead == 'S') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(148);
      END_STATE();
    case 198:
      if (lookahead == 'W') ADVANCE(191);
      END_STATE();
    case 199:
      if (lookahead == 'Z') ADVANCE(185);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(810);
      if (lookahead == 'i') ADVANCE(815);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1332);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(1099);
      if (lookahead == 'c') ADVANCE(909);
      if (lookahead == 'd') ADVANCE(410);
      if (lookahead == 'e') ADVANCE(1293);
      if (lookahead == 'g') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(416);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead == 'u') ADVANCE(1171);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(1351);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(1352);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(940);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(1304);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(988);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(1315);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(768);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(1253);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(871);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(816);
      if (lookahead == 'e') ADVANCE(985);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(1169);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(1042);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(1203);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(724);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(1158);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(1036);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(1014);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == 'i') ADVANCE(1026);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(432);
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(1248);
      END_STATE();
    case 240:
      if (lookahead == 'a') ADVANCE(734);
      END_STATE();
    case 241:
      if (lookahead == 'a') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 242:
      if (lookahead == 'a') ADVANCE(1194);
      END_STATE();
    case 243:
      if (lookahead == 'a') ADVANCE(851);
      END_STATE();
    case 244:
      if (lookahead == 'a') ADVANCE(1306);
      END_STATE();
    case 245:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 246:
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'e') ADVANCE(1078);
      END_STATE();
    case 247:
      if (lookahead == 'a') ADVANCE(1195);
      END_STATE();
    case 248:
      if (lookahead == 'a') ADVANCE(853);
      END_STATE();
    case 249:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 250:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 251:
      if (lookahead == 'a') ADVANCE(1129);
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 252:
      if (lookahead == 'a') ADVANCE(1045);
      END_STATE();
    case 253:
      if (lookahead == 'a') ADVANCE(748);
      END_STATE();
    case 254:
      if (lookahead == 'a') ADVANCE(1210);
      END_STATE();
    case 255:
      if (lookahead == 'a') ADVANCE(1059);
      END_STATE();
    case 256:
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 257:
      if (lookahead == 'a') ADVANCE(1218);
      END_STATE();
    case 258:
      if (lookahead == 'a') ADVANCE(1219);
      END_STATE();
    case 259:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 260:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(728);
      END_STATE();
    case 261:
      if (lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 262:
      if (lookahead == 'a') ADVANCE(1066);
      END_STATE();
    case 263:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 264:
      if (lookahead == 'a') ADVANCE(278);
      END_STATE();
    case 265:
      if (lookahead == 'b') ADVANCE(1440);
      END_STATE();
    case 266:
      if (lookahead == 'b') ADVANCE(1416);
      END_STATE();
    case 267:
      if (lookahead == 'b') ADVANCE(1417);
      END_STATE();
    case 268:
      if (lookahead == 'b') ADVANCE(746);
      END_STATE();
    case 269:
      if (lookahead == 'b') ADVANCE(887);
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 270:
      if (lookahead == 'b') ADVANCE(737);
      END_STATE();
    case 271:
      if (lookahead == 'b') ADVANCE(964);
      END_STATE();
    case 272:
      if (lookahead == 'b') ADVANCE(54);
      END_STATE();
    case 273:
      if (lookahead == 'b') ADVANCE(882);
      END_STATE();
    case 274:
      if (lookahead == 'b') ADVANCE(738);
      END_STATE();
    case 275:
      if (lookahead == 'b') ADVANCE(712);
      END_STATE();
    case 276:
      if (lookahead == 'b') ADVANCE(752);
      END_STATE();
    case 277:
      if (lookahead == 'b') ADVANCE(756);
      END_STATE();
    case 278:
      if (lookahead == 'b') ADVANCE(758);
      END_STATE();
    case 279:
      if (lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 280:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 281:
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(920);
      END_STATE();
    case 282:
      if (lookahead == 'c') ADVANCE(611);
      if (lookahead == 'k') ADVANCE(489);
      END_STATE();
    case 283:
      if (lookahead == 'c') ADVANCE(919);
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 284:
      if (lookahead == 'c') ADVANCE(1396);
      END_STATE();
    case 285:
      if (lookahead == 'c') ADVANCE(681);
      if (lookahead == 'd') ADVANCE(688);
      END_STATE();
    case 286:
      if (lookahead == 'c') ADVANCE(265);
      END_STATE();
    case 287:
      if (lookahead == 'c') ADVANCE(614);
      END_STATE();
    case 288:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 289:
      if (lookahead == 'c') ADVANCE(697);
      END_STATE();
    case 290:
      if (lookahead == 'c') ADVANCE(786);
      END_STATE();
    case 291:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 292:
      if (lookahead == 'c') ADVANCE(698);
      END_STATE();
    case 293:
      if (lookahead == 'c') ADVANCE(1301);
      END_STATE();
    case 294:
      if (lookahead == 'c') ADVANCE(224);
      END_STATE();
    case 295:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 296:
      if (lookahead == 'c') ADVANCE(229);
      END_STATE();
    case 297:
      if (lookahead == 'c') ADVANCE(384);
      END_STATE();
    case 298:
      if (lookahead == 'c') ADVANCE(1165);
      END_STATE();
    case 299:
      if (lookahead == 'c') ADVANCE(393);
      END_STATE();
    case 300:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 301:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 302:
      if (lookahead == 'c') ADVANCE(460);
      END_STATE();
    case 303:
      if (lookahead == 'c') ADVANCE(612);
      END_STATE();
    case 304:
      if (lookahead == 'c') ADVANCE(702);
      END_STATE();
    case 305:
      if (lookahead == 'c') ADVANCE(1080);
      if (lookahead == 's') ADVANCE(521);
      END_STATE();
    case 306:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 307:
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 309:
      if (lookahead == 'c') ADVANCE(790);
      END_STATE();
    case 310:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 311:
      if (lookahead == 'c') ADVANCE(791);
      END_STATE();
    case 312:
      if (lookahead == 'c') ADVANCE(1310);
      END_STATE();
    case 313:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 314:
      if (lookahead == 'c') ADVANCE(247);
      END_STATE();
    case 315:
      if (lookahead == 'c') ADVANCE(1314);
      END_STATE();
    case 316:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 317:
      if (lookahead == 'c') ADVANCE(513);
      END_STATE();
    case 318:
      if (lookahead == 'c') ADVANCE(524);
      END_STATE();
    case 319:
      if (lookahead == 'c') ADVANCE(933);
      if (lookahead == 'd') ADVANCE(433);
      END_STATE();
    case 320:
      if (lookahead == 'c') ADVANCE(257);
      END_STATE();
    case 321:
      if (lookahead == 'c') ADVANCE(690);
      END_STATE();
    case 322:
      if (lookahead == 'c') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(1103);
      END_STATE();
    case 323:
      if (lookahead == 'c') ADVANCE(934);
      END_STATE();
    case 324:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 325:
      if (lookahead == 'c') ADVANCE(935);
      END_STATE();
    case 326:
      if (lookahead == 'c') ADVANCE(542);
      END_STATE();
    case 327:
      if (lookahead == 'c') ADVANCE(543);
      if (lookahead == 'k') ADVANCE(414);
      if (lookahead == 'r') ADVANCE(441);
      END_STATE();
    case 328:
      if (lookahead == 'c') ADVANCE(715);
      END_STATE();
    case 329:
      if (lookahead == 'c') ADVANCE(770);
      END_STATE();
    case 330:
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'k') ADVANCE(532);
      END_STATE();
    case 331:
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == 'g') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(1279);
      if (lookahead == 's') ADVANCE(696);
      if (lookahead == 'u') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 332:
      if (lookahead == 'd') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1333);
      END_STATE();
    case 333:
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 's') ADVANCE(689);
      END_STATE();
    case 334:
      if (lookahead == 'd') ADVANCE(1441);
      END_STATE();
    case 335:
      if (lookahead == 'd') ADVANCE(1411);
      END_STATE();
    case 336:
      if (lookahead == 'd') ADVANCE(1412);
      END_STATE();
    case 337:
      if (lookahead == 'd') ADVANCE(1442);
      END_STATE();
    case 338:
      if (lookahead == 'd') ADVANCE(1401);
      END_STATE();
    case 339:
      if (lookahead == 'd') ADVANCE(1507);
      END_STATE();
    case 340:
      if (lookahead == 'd') ADVANCE(1418);
      END_STATE();
    case 341:
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(777);
      if (lookahead == 'o') ADVANCE(304);
      END_STATE();
    case 342:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 343:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 344:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 345:
      if (lookahead == 'd') ADVANCE(888);
      END_STATE();
    case 346:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 347:
      if (lookahead == 'd') ADVANCE(1082);
      END_STATE();
    case 348:
      if (lookahead == 'd') ADVANCE(921);
      END_STATE();
    case 349:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 350:
      if (lookahead == 'd') ADVANCE(382);
      END_STATE();
    case 351:
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 352:
      if (lookahead == 'd') ADVANCE(1095);
      END_STATE();
    case 353:
      if (lookahead == 'd') ADVANCE(1096);
      END_STATE();
    case 354:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 355:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 356:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 357:
      if (lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 358:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 359:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 360:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 361:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 362:
      if (lookahead == 'd') ADVANCE(419);
      END_STATE();
    case 363:
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 364:
      if (lookahead == 'd') ADVANCE(480);
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 365:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 366:
      if (lookahead == 'd') ADVANCE(653);
      END_STATE();
    case 367:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 368:
      if (lookahead == 'd') ADVANCE(656);
      END_STATE();
    case 369:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 370:
      if (lookahead == 'd') ADVANCE(531);
      END_STATE();
    case 371:
      if (lookahead == 'd') ADVANCE(538);
      END_STATE();
    case 372:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 373:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 374:
      if (lookahead == 'd') ADVANCE(938);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead == 'o') ADVANCE(620);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead == 'f') ADVANCE(280);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(1291);
      if (lookahead == 'o') ADVANCE(552);
      if (lookahead == 'r') ADVANCE(1232);
      END_STATE();
    case 379:
      if (lookahead == 'e') ADVANCE(1506);
      END_STATE();
    case 380:
      if (lookahead == 'e') ADVANCE(1344);
      END_STATE();
    case 381:
      if (lookahead == 'e') ADVANCE(1450);
      END_STATE();
    case 382:
      if (lookahead == 'e') ADVANCE(1438);
      END_STATE();
    case 383:
      if (lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 384:
      if (lookahead == 'e') ADVANCE(1460);
      END_STATE();
    case 385:
      if (lookahead == 'e') ADVANCE(1350);
      END_STATE();
    case 386:
      if (lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 387:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 388:
      if (lookahead == 'e') ADVANCE(1373);
      END_STATE();
    case 389:
      if (lookahead == 'e') ADVANCE(1424);
      END_STATE();
    case 390:
      if (lookahead == 'e') ADVANCE(1400);
      END_STATE();
    case 391:
      if (lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 392:
      if (lookahead == 'e') ADVANCE(1403);
      END_STATE();
    case 393:
      if (lookahead == 'e') ADVANCE(1464);
      END_STATE();
    case 394:
      if (lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 395:
      if (lookahead == 'e') ADVANCE(1407);
      END_STATE();
    case 396:
      if (lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 397:
      if (lookahead == 'e') ADVANCE(1504);
      END_STATE();
    case 398:
      if (lookahead == 'e') ADVANCE(1348);
      END_STATE();
    case 399:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 400:
      if (lookahead == 'e') ADVANCE(1409);
      END_STATE();
    case 401:
      if (lookahead == 'e') ADVANCE(986);
      if (lookahead == 'g') ADVANCE(941);
      if (lookahead == 'h') ADVANCE(929);
      if (lookahead == 'r') ADVANCE(622);
      END_STATE();
    case 402:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 403:
      if (lookahead == 'e') ADVANCE(1287);
      END_STATE();
    case 404:
      if (lookahead == 'e') ADVANCE(987);
      END_STATE();
    case 405:
      if (lookahead == 'e') ADVANCE(1292);
      if (lookahead == 's') ADVANCE(1237);
      END_STATE();
    case 406:
      if (lookahead == 'e') ADVANCE(848);
      END_STATE();
    case 407:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 408:
      if (lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 409:
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'i') ADVANCE(1174);
      if (lookahead == 'p') ADVANCE(413);
      END_STATE();
    case 410:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 411:
      if (lookahead == 'e') ADVANCE(818);
      END_STATE();
    case 412:
      if (lookahead == 'e') ADVANCE(1260);
      END_STATE();
    case 413:
      if (lookahead == 'e') ADVANCE(1002);
      END_STATE();
    case 414:
      if (lookahead == 'e') ADVANCE(1299);
      END_STATE();
    case 415:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 416:
      if (lookahead == 'e') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 417:
      if (lookahead == 'e') ADVANCE(1317);
      END_STATE();
    case 418:
      if (lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 419:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 420:
      if (lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 421:
      if (lookahead == 'e') ADVANCE(1300);
      END_STATE();
    case 422:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 423:
      if (lookahead == 'e') ADVANCE(773);
      END_STATE();
    case 424:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 425:
      if (lookahead == 'e') ADVANCE(1184);
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 426:
      if (lookahead == 'e') ADVANCE(1000);
      END_STATE();
    case 427:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 428:
      if (lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 429:
      if (lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 430:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 431:
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 432:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 433:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(1108);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(827);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(992);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1090);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1092);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1093);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(994);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1133);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(996);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(1011);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(1048);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(998);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(1124);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(1263);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(788);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(841);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(1022);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(1264);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(1115);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 492:
      if (lookahead == 'e') ADVANCE(843);
      END_STATE();
    case 493:
      if (lookahead == 'e') ADVANCE(1062);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(1265);
      END_STATE();
    case 496:
      if (lookahead == 'e') ADVANCE(1309);
      END_STATE();
    case 497:
      if (lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(1023);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(1266);
      END_STATE();
    case 500:
      if (lookahead == 'e') ADVANCE(856);
      END_STATE();
    case 501:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 502:
      if (lookahead == 'e') ADVANCE(1267);
      END_STATE();
    case 503:
      if (lookahead == 'e') ADVANCE(1018);
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 504:
      if (lookahead == 'e') ADVANCE(857);
      END_STATE();
    case 505:
      if (lookahead == 'e') ADVANCE(1033);
      END_STATE();
    case 506:
      if (lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 507:
      if (lookahead == 'e') ADVANCE(1269);
      END_STATE();
    case 508:
      if (lookahead == 'e') ADVANCE(361);
      END_STATE();
    case 509:
      if (lookahead == 'e') ADVANCE(1270);
      END_STATE();
    case 510:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 511:
      if (lookahead == 'e') ADVANCE(1272);
      END_STATE();
    case 512:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 513:
      if (lookahead == 'e') ADVANCE(1043);
      END_STATE();
    case 514:
      if (lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 515:
      if (lookahead == 'e') ADVANCE(1060);
      END_STATE();
    case 516:
      if (lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 517:
      if (lookahead == 'e') ADVANCE(1041);
      END_STATE();
    case 518:
      if (lookahead == 'e') ADVANCE(1051);
      END_STATE();
    case 519:
      if (lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 520:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 521:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 522:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 523:
      if (lookahead == 'e') ADVANCE(1316);
      END_STATE();
    case 524:
      if (lookahead == 'e') ADVANCE(1044);
      END_STATE();
    case 525:
      if (lookahead == 'e') ADVANCE(1134);
      END_STATE();
    case 526:
      if (lookahead == 'e') ADVANCE(1052);
      END_STATE();
    case 527:
      if (lookahead == 'e') ADVANCE(1053);
      END_STATE();
    case 528:
      if (lookahead == 'e') ADVANCE(1136);
      END_STATE();
    case 529:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 530:
      if (lookahead == 'e') ADVANCE(864);
      END_STATE();
    case 531:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 532:
      if (lookahead == 'e') ADVANCE(1318);
      END_STATE();
    case 533:
      if (lookahead == 'e') ADVANCE(1070);
      END_STATE();
    case 534:
      if (lookahead == 'e') ADVANCE(1064);
      END_STATE();
    case 535:
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 536:
      if (lookahead == 'e') ADVANCE(866);
      END_STATE();
    case 537:
      if (lookahead == 'e') ADVANCE(1065);
      END_STATE();
    case 538:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 539:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 540:
      if (lookahead == 'e') ADVANCE(1319);
      END_STATE();
    case 541:
      if (lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 542:
      if (lookahead == 'e') ADVANCE(1075);
      END_STATE();
    case 543:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 544:
      if (lookahead == 'e') ADVANCE(1294);
      if (lookahead == 't') ADVANCE(1297);
      END_STATE();
    case 545:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 546:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 547:
      if (lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 548:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 549:
      if (lookahead == 'f') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1333);
      END_STATE();
    case 550:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 551:
      if (lookahead == 'f') ADVANCE(1342);
      END_STATE();
    case 552:
      if (lookahead == 'f') ADVANCE(1238);
      END_STATE();
    case 553:
      if (lookahead == 'f') ADVANCE(1320);
      END_STATE();
    case 554:
      if (lookahead == 'f') ADVANCE(216);
      END_STATE();
    case 555:
      if (lookahead == 'f') ADVANCE(1231);
      END_STATE();
    case 556:
      if (lookahead == 'f') ADVANCE(895);
      END_STATE();
    case 557:
      if (lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 558:
      if (lookahead == 'f') ADVANCE(669);
      END_STATE();
    case 559:
      if (lookahead == 'f') ADVANCE(239);
      END_STATE();
    case 560:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 561:
      if (lookahead == 'f') ADVANCE(969);
      END_STATE();
    case 562:
      if (lookahead == 'f') ADVANCE(684);
      END_STATE();
    case 563:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 564:
      if (lookahead == 'f') ADVANCE(316);
      END_STATE();
    case 565:
      if (lookahead == 'f') ADVANCE(518);
      END_STATE();
    case 566:
      if (lookahead == 'f') ADVANCE(526);
      END_STATE();
    case 567:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 568:
      if (lookahead == 'f') ADVANCE(693);
      END_STATE();
    case 569:
      if (lookahead == 'f') ADVANCE(694);
      END_STATE();
    case 570:
      if (lookahead == 'g') ADVANCE(1453);
      END_STATE();
    case 571:
      if (lookahead == 'g') ADVANCE(1371);
      END_STATE();
    case 572:
      if (lookahead == 'g') ADVANCE(1429);
      END_STATE();
    case 573:
      if (lookahead == 'g') ADVANCE(1372);
      END_STATE();
    case 574:
      if (lookahead == 'g') ADVANCE(1430);
      END_STATE();
    case 575:
      if (lookahead == 'g') ADVANCE(1431);
      END_STATE();
    case 576:
      if (lookahead == 'g') ADVANCE(1348);
      END_STATE();
    case 577:
      if (lookahead == 'g') ADVANCE(1461);
      END_STATE();
    case 578:
      if (lookahead == 'g') ADVANCE(1409);
      END_STATE();
    case 579:
      if (lookahead == 'g') ADVANCE(944);
      END_STATE();
    case 580:
      if (lookahead == 'g') ADVANCE(1074);
      END_STATE();
    case 581:
      if (lookahead == 'g') ADVANCE(1085);
      END_STATE();
    case 582:
      if (lookahead == 'g') ADVANCE(945);
      END_STATE();
    case 583:
      if (lookahead == 'g') ADVANCE(860);
      END_STATE();
    case 584:
      if (lookahead == 'g') ADVANCE(424);
      END_STATE();
    case 585:
      if (lookahead == 'g') ADVANCE(1087);
      END_STATE();
    case 586:
      if (lookahead == 'g') ADVANCE(947);
      END_STATE();
    case 587:
      if (lookahead == 'g') ADVANCE(1007);
      END_STATE();
    case 588:
      if (lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 589:
      if (lookahead == 'g') ADVANCE(948);
      END_STATE();
    case 590:
      if (lookahead == 'g') ADVANCE(876);
      END_STATE();
    case 591:
      if (lookahead == 'g') ADVANCE(1173);
      END_STATE();
    case 592:
      if (lookahead == 'g') ADVANCE(1096);
      END_STATE();
    case 593:
      if (lookahead == 'g') ADVANCE(1009);
      END_STATE();
    case 594:
      if (lookahead == 'g') ADVANCE(385);
      END_STATE();
    case 595:
      if (lookahead == 'g') ADVANCE(995);
      END_STATE();
    case 596:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 597:
      if (lookahead == 'g') ADVANCE(28);
      END_STATE();
    case 598:
      if (lookahead == 'g') ADVANCE(398);
      END_STATE();
    case 599:
      if (lookahead == 'g') ADVANCE(630);
      END_STATE();
    case 600:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 601:
      if (lookahead == 'g') ADVANCE(484);
      END_STATE();
    case 602:
      if (lookahead == 'g') ADVANCE(750);
      END_STATE();
    case 603:
      if (lookahead == 'g') ADVANCE(861);
      END_STATE();
    case 604:
      if (lookahead == 'g') ADVANCE(516);
      END_STATE();
    case 605:
      if (lookahead == 'g') ADVANCE(522);
      END_STATE();
    case 606:
      if (lookahead == 'g') ADVANCE(771);
      END_STATE();
    case 607:
      if (lookahead == 'h') ADVANCE(1370);
      END_STATE();
    case 608:
      if (lookahead == 'h') ADVANCE(1414);
      END_STATE();
    case 609:
      if (lookahead == 'h') ADVANCE(1463);
      END_STATE();
    case 610:
      if (lookahead == 'h') ADVANCE(914);
      if (lookahead == 'o') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(687);
      END_STATE();
    case 611:
      if (lookahead == 'h') ADVANCE(512);
      END_STATE();
    case 612:
      if (lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 613:
      if (lookahead == 'h') ADVANCE(912);
      if (lookahead == 'o') ADVANCE(1069);
      END_STATE();
    case 614:
      if (lookahead == 'h') ADVANCE(233);
      END_STATE();
    case 615:
      if (lookahead == 'h') ADVANCE(487);
      END_STATE();
    case 616:
      if (lookahead == 'h') ADVANCE(517);
      END_STATE();
    case 617:
      if (lookahead == 'h') ADVANCE(923);
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 618:
      if (lookahead == 'h') ADVANCE(927);
      END_STATE();
    case 619:
      if (lookahead == 'h') ADVANCE(546);
      END_STATE();
    case 620:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 621:
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 622:
      if (lookahead == 'i') ADVANCE(795);
      END_STATE();
    case 623:
      if (lookahead == 'i') ADVANCE(1261);
      END_STATE();
    case 624:
      if (lookahead == 'i') ADVANCE(942);
      END_STATE();
    case 625:
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 626:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 627:
      if (lookahead == 'i') ADVANCE(819);
      END_STATE();
    case 628:
      if (lookahead == 'i') ADVANCE(584);
      END_STATE();
    case 629:
      if (lookahead == 'i') ADVANCE(1126);
      END_STATE();
    case 630:
      if (lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 631:
      if (lookahead == 'i') ADVANCE(1175);
      END_STATE();
    case 632:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 633:
      if (lookahead == 'i') ADVANCE(347);
      END_STATE();
    case 634:
      if (lookahead == 'i') ADVANCE(583);
      END_STATE();
    case 635:
      if (lookahead == 'i') ADVANCE(337);
      END_STATE();
    case 636:
      if (lookahead == 'i') ADVANCE(1046);
      END_STATE();
    case 637:
      if (lookahead == 'i') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(1240);
      END_STATE();
    case 638:
      if (lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 639:
      if (lookahead == 'i') ADVANCE(965);
      END_STATE();
    case 640:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 641:
      if (lookahead == 'i') ADVANCE(825);
      END_STATE();
    case 642:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 643:
      if (lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 644:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 645:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 646:
      if (lookahead == 'i') ADVANCE(862);
      END_STATE();
    case 647:
      if (lookahead == 'i') ADVANCE(403);
      END_STATE();
    case 648:
      if (lookahead == 'i') ADVANCE(1055);
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 649:
      if (lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 650:
      if (lookahead == 'i') ADVANCE(832);
      END_STATE();
    case 651:
      if (lookahead == 'i') ADVANCE(1098);
      END_STATE();
    case 652:
      if (lookahead == 'i') ADVANCE(833);
      END_STATE();
    case 653:
      if (lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 654:
      if (lookahead == 'i') ADVANCE(1209);
      END_STATE();
    case 655:
      if (lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 656:
      if (lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 657:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 658:
      if (lookahead == 'i') ADVANCE(899);
      END_STATE();
    case 659:
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 660:
      if (lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 661:
      if (lookahead == 'i') ADVANCE(784);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == 'r') ADVANCE(491);
      END_STATE();
    case 662:
      if (lookahead == 'i') ADVANCE(900);
      END_STATE();
    case 663:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 664:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 665:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 666:
      if (lookahead == 'i') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(275);
      END_STATE();
    case 667:
      if (lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 668:
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(1239);
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 669:
      if (lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 670:
      if (lookahead == 'i') ADVANCE(901);
      END_STATE();
    case 671:
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 672:
      if (lookahead == 'i') ADVANCE(904);
      END_STATE();
    case 673:
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 674:
      if (lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 675:
      if (lookahead == 'i') ADVANCE(906);
      END_STATE();
    case 676:
      if (lookahead == 'i') ADVANCE(1027);
      END_STATE();
    case 677:
      if (lookahead == 'i') ADVANCE(368);
      END_STATE();
    case 678:
      if (lookahead == 'i') ADVANCE(916);
      END_STATE();
    case 679:
      if (lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 680:
      if (lookahead == 'i') ADVANCE(1049);
      END_STATE();
    case 681:
      if (lookahead == 'i') ADVANCE(973);
      if (lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 682:
      if (lookahead == 'i') ADVANCE(315);
      END_STATE();
    case 683:
      if (lookahead == 'i') ADVANCE(248);
      END_STATE();
    case 684:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 685:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 686:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 687:
      if (lookahead == 'i') ADVANCE(800);
      END_STATE();
    case 688:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 689:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 690:
      if (lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 691:
      if (lookahead == 'i') ADVANCE(805);
      if (lookahead == 'l') ADVANCE(932);
      if (lookahead == 'r') ADVANCE(541);
      END_STATE();
    case 692:
      if (lookahead == 'i') ADVANCE(372);
      if (lookahead == 'n') ADVANCE(1257);
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 693:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 694:
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 695:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 696:
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 697:
      if (lookahead == 'k') ADVANCE(1443);
      END_STATE();
    case 698:
      if (lookahead == 'k') ADVANCE(1444);
      END_STATE();
    case 699:
      if (lookahead == 'k') ADVANCE(1418);
      END_STATE();
    case 700:
      if (lookahead == 'k') ADVANCE(940);
      END_STATE();
    case 701:
      if (lookahead == 'k') ADVANCE(14);
      END_STATE();
    case 702:
      if (lookahead == 'k') ADVANCE(16);
      END_STATE();
    case 703:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 704:
      if (lookahead == 'k') ADVANCE(477);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead == 'p') ADVANCE(610);
      if (lookahead == 's') ADVANCE(1204);
      if (lookahead == 'u') ADVANCE(668);
      END_STATE();
    case 705:
      if (lookahead == 'k') ADVANCE(417);
      END_STATE();
    case 706:
      if (lookahead == 'k') ADVANCE(421);
      END_STATE();
    case 707:
      if (lookahead == 'k') ADVANCE(842);
      END_STATE();
    case 708:
      if (lookahead == 'k') ADVANCE(429);
      if (lookahead == 'n') ADVANCE(937);
      if (lookahead == 'o') ADVANCE(839);
      if (lookahead == 'p') ADVANCE(617);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead == 'u') ADVANCE(692);
      END_STATE();
    case 709:
      if (lookahead == 'k') ADVANCE(469);
      END_STATE();
    case 710:
      if (lookahead == 'k') ADVANCE(465);
      END_STATE();
    case 711:
      if (lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 712:
      if (lookahead == 'k') ADVANCE(494);
      END_STATE();
    case 713:
      if (lookahead == 'k') ADVANCE(523);
      END_STATE();
    case 714:
      if (lookahead == 'k') ADVANCE(102);
      END_STATE();
    case 715:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 716:
      if (lookahead == 'k') ADVANCE(108);
      END_STATE();
    case 717:
      if (lookahead == 'l') ADVANCE(1395);
      END_STATE();
    case 718:
      if (lookahead == 'l') ADVANCE(1386);
      END_STATE();
    case 719:
      if (lookahead == 'l') ADVANCE(1379);
      END_STATE();
    case 720:
      if (lookahead == 'l') ADVANCE(1390);
      END_STATE();
    case 721:
      if (lookahead == 'l') ADVANCE(1387);
      END_STATE();
    case 722:
      if (lookahead == 'l') ADVANCE(1388);
      END_STATE();
    case 723:
      if (lookahead == 'l') ADVANCE(1381);
      END_STATE();
    case 724:
      if (lookahead == 'l') ADVANCE(1401);
      END_STATE();
    case 725:
      if (lookahead == 'l') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 726:
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 727:
      if (lookahead == 'l') ADVANCE(1247);
      END_STATE();
    case 728:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 729:
      if (lookahead == 'l') ADVANCE(1298);
      END_STATE();
    case 730:
      if (lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 731:
      if (lookahead == 'l') ADVANCE(640);
      END_STATE();
    case 732:
      if (lookahead == 'l') ADVANCE(588);
      END_STATE();
    case 733:
      if (lookahead == 'l') ADVANCE(1082);
      END_STATE();
    case 734:
      if (lookahead == 'l') ADVANCE(626);
      END_STATE();
    case 735:
      if (lookahead == 'l') ADVANCE(1196);
      END_STATE();
    case 736:
      if (lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 737:
      if (lookahead == 'l') ADVANCE(897);
      END_STATE();
    case 738:
      if (lookahead == 'l') ADVANCE(898);
      END_STATE();
    case 739:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 740:
      if (lookahead == 'l') ADVANCE(1096);
      END_STATE();
    case 741:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 742:
      if (lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 743:
      if (lookahead == 'l') ADVANCE(1166);
      END_STATE();
    case 744:
      if (lookahead == 'l') ADVANCE(389);
      END_STATE();
    case 745:
      if (lookahead == 'l') ADVANCE(394);
      END_STATE();
    case 746:
      if (lookahead == 'l') ADVANCE(445);
      END_STATE();
    case 747:
      if (lookahead == 'l') ADVANCE(644);
      END_STATE();
    case 748:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 749:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 750:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 751:
      if (lookahead == 'l') ADVANCE(1187);
      END_STATE();
    case 752:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 753:
      if (lookahead == 'l') ADVANCE(530);
      END_STATE();
    case 754:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 755:
      if (lookahead == 'l') ADVANCE(1312);
      END_STATE();
    case 756:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 757:
      if (lookahead == 'l') ADVANCE(908);
      if (lookahead == 's') ADVANCE(618);
      END_STATE();
    case 758:
      if (lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 759:
      if (lookahead == 'l') ADVANCE(1284);
      if (lookahead == 'u') ADVANCE(1191);
      END_STATE();
    case 760:
      if (lookahead == 'l') ADVANCE(677);
      END_STATE();
    case 761:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 762:
      if (lookahead == 'l') ADVANCE(1206);
      END_STATE();
    case 763:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 764:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 765:
      if (lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 766:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 767:
      if (lookahead == 'l') ADVANCE(682);
      END_STATE();
    case 768:
      if (lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 769:
      if (lookahead == 'l') ADVANCE(536);
      END_STATE();
    case 770:
      if (lookahead == 'l') ADVANCE(1256);
      END_STATE();
    case 771:
      if (lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 772:
      if (lookahead == 'm') ADVANCE(1419);
      END_STATE();
    case 773:
      if (lookahead == 'm') ADVANCE(1432);
      END_STATE();
    case 774:
      if (lookahead == 'm') ADVANCE(1420);
      END_STATE();
    case 775:
      if (lookahead == 'm') ADVANCE(1433);
      END_STATE();
    case 776:
      if (lookahead == 'm') ADVANCE(1383);
      END_STATE();
    case 777:
      if (lookahead == 'm') ADVANCE(625);
      if (lookahead == 's') ADVANCE(1201);
      END_STATE();
    case 778:
      if (lookahead == 'm') ADVANCE(943);
      END_STATE();
    case 779:
      if (lookahead == 'm') ADVANCE(817);
      END_STATE();
    case 780:
      if (lookahead == 'm') ADVANCE(1234);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(822);
      END_STATE();
    case 781:
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 782:
      if (lookahead == 'm') ADVANCE(629);
      END_STATE();
    case 783:
      if (lookahead == 'm') ADVANCE(963);
      END_STATE();
    case 784:
      if (lookahead == 'm') ADVANCE(957);
      END_STATE();
    case 785:
      if (lookahead == 'm') ADVANCE(966);
      END_STATE();
    case 786:
      if (lookahead == 'm') ADVANCE(482);
      END_STATE();
    case 787:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 788:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 789:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 790:
      if (lookahead == 'm') ADVANCE(423);
      END_STATE();
    case 791:
      if (lookahead == 'm') ADVANCE(428);
      END_STATE();
    case 792:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 793:
      if (lookahead == 'm') ADVANCE(431);
      END_STATE();
    case 794:
      if (lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 795:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 796:
      if (lookahead == 'm') ADVANCE(854);
      END_STATE();
    case 797:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 798:
      if (lookahead == 'm') ADVANCE(924);
      END_STATE();
    case 799:
      if (lookahead == 'm') ADVANCE(968);
      END_STATE();
    case 800:
      if (lookahead == 'm') ADVANCE(252);
      END_STATE();
    case 801:
      if (lookahead == 'm') ADVANCE(926);
      END_STATE();
    case 802:
      if (lookahead == 'm') ADVANCE(977);
      END_STATE();
    case 803:
      if (lookahead == 'm') ADVANCE(928);
      END_STATE();
    case 804:
      if (lookahead == 'm') ADVANCE(972);
      END_STATE();
    case 805:
      if (lookahead == 'm') ADVANCE(975);
      END_STATE();
    case 806:
      if (lookahead == 'm') ADVANCE(981);
      END_STATE();
    case 807:
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 'x') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 808:
      if (lookahead == 'n') ADVANCE(1235);
      END_STATE();
    case 809:
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 's') ADVANCE(881);
      END_STATE();
    case 810:
      if (lookahead == 'n') ADVANCE(602);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 811:
      if (lookahead == 'n') ADVANCE(1434);
      END_STATE();
    case 812:
      if (lookahead == 'n') ADVANCE(1435);
      END_STATE();
    case 813:
      if (lookahead == 'n') ADVANCE(1418);
      END_STATE();
    case 814:
      if (lookahead == 'n') ADVANCE(1122);
      END_STATE();
    case 815:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 816:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 817:
      if (lookahead == 'n') ADVANCE(580);
      END_STATE();
    case 818:
      if (lookahead == 'n') ADVANCE(951);
      END_STATE();
    case 819:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 820:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 821:
      if (lookahead == 'n') ADVANCE(707);
      END_STATE();
    case 822:
      if (lookahead == 'n') ADVANCE(295);
      END_STATE();
    case 823:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 824:
      if (lookahead == 'n') ADVANCE(893);
      END_STATE();
    case 825:
      if (lookahead == 'n') ADVANCE(572);
      END_STATE();
    case 826:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 827:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 828:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 829:
      if (lookahead == 'n') ADVANCE(1082);
      END_STATE();
    case 830:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 831:
      if (lookahead == 'n') ADVANCE(1084);
      END_STATE();
    case 832:
      if (lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 833:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 834:
      if (lookahead == 'n') ADVANCE(1086);
      END_STATE();
    case 835:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 836:
      if (lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 837:
      if (lookahead == 'n') ADVANCE(729);
      END_STATE();
    case 838:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 839:
      if (lookahead == 'n') ADVANCE(755);
      END_STATE();
    case 840:
      if (lookahead == 'n') ADVANCE(1096);
      END_STATE();
    case 841:
      if (lookahead == 'n') ADVANCE(1162);
      END_STATE();
    case 842:
      if (lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 843:
      if (lookahead == 'n') ADVANCE(1164);
      END_STATE();
    case 844:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 845:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 846:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 847:
      if (lookahead == 'n') ADVANCE(1244);
      if (lookahead == 'o') ADVANCE(891);
      END_STATE();
    case 848:
      if (lookahead == 'n') ADVANCE(1199);
      END_STATE();
    case 849:
      if (lookahead == 'n') ADVANCE(967);
      END_STATE();
    case 850:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 851:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 852:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 853:
      if (lookahead == 'n') ADVANCE(299);
      END_STATE();
    case 854:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 855:
      if (lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 856:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 857:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 858:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 859:
      if (lookahead == 'n') ADVANCE(652);
      END_STATE();
    case 860:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 861:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 862:
      if (lookahead == 'n') ADVANCE(1140);
      END_STATE();
    case 863:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 864:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 865:
      if (lookahead == 'n') ADVANCE(519);
      END_STATE();
    case 866:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 867:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 868:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 869:
      if (lookahead == 'n') ADVANCE(937);
      END_STATE();
    case 870:
      if (lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 871:
      if (lookahead == 'n') ADVANCE(606);
      END_STATE();
    case 872:
      if (lookahead == 'o') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 873:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 874:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 875:
      if (lookahead == 'o') ADVANCE(1448);
      END_STATE();
    case 876:
      if (lookahead == 'o') ADVANCE(1449);
      END_STATE();
    case 877:
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 878:
      if (lookahead == 'o') ADVANCE(1396);
      END_STATE();
    case 879:
      if (lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 880:
      if (lookahead == 'o') ADVANCE(1280);
      END_STATE();
    case 881:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 882:
      if (lookahead == 'o') ADVANCE(1289);
      END_STATE();
    case 883:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 884:
      if (lookahead == 'o') ADVANCE(1285);
      END_STATE();
    case 885:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 886:
      if (lookahead == 'o') ADVANCE(1282);
      END_STATE();
    case 887:
      if (lookahead == 'o') ADVANCE(1105);
      END_STATE();
    case 888:
      if (lookahead == 'o') ADVANCE(787);
      END_STATE();
    case 889:
      if (lookahead == 'o') ADVANCE(953);
      END_STATE();
    case 890:
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 891:
      if (lookahead == 'o') ADVANCE(340);
      END_STATE();
    case 892:
      if (lookahead == 'o') ADVANCE(1082);
      END_STATE();
    case 893:
      if (lookahead == 'o') ADVANCE(1200);
      END_STATE();
    case 894:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 895:
      if (lookahead == 'o') ADVANCE(1029);
      END_STATE();
    case 896:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 897:
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 898:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 899:
      if (lookahead == 'o') ADVANCE(831);
      END_STATE();
    case 900:
      if (lookahead == 'o') ADVANCE(829);
      END_STATE();
    case 901:
      if (lookahead == 'o') ADVANCE(834);
      END_STATE();
    case 902:
      if (lookahead == 'o') ADVANCE(1096);
      END_STATE();
    case 903:
      if (lookahead == 'o') ADVANCE(837);
      END_STATE();
    case 904:
      if (lookahead == 'o') ADVANCE(811);
      END_STATE();
    case 905:
      if (lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 906:
      if (lookahead == 'o') ADVANCE(840);
      END_STATE();
    case 907:
      if (lookahead == 'o') ADVANCE(997);
      END_STATE();
    case 908:
      if (lookahead == 'o') ADVANCE(838);
      END_STATE();
    case 909:
      if (lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 910:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 911:
      if (lookahead == 'o') ADVANCE(863);
      END_STATE();
    case 912:
      if (lookahead == 'o') ADVANCE(1283);
      END_STATE();
    case 913:
      if (lookahead == 'o') ADVANCE(587);
      END_STATE();
    case 914:
      if (lookahead == 'o') ADVANCE(1185);
      END_STATE();
    case 915:
      if (lookahead == 'o') ADVANCE(845);
      END_STATE();
    case 916:
      if (lookahead == 'o') ADVANCE(868);
      END_STATE();
    case 917:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 918:
      if (lookahead == 'o') ADVANCE(846);
      END_STATE();
    case 919:
      if (lookahead == 'o') ADVANCE(785);
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 920:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 921:
      if (lookahead == 'o') ADVANCE(1116);
      END_STATE();
    case 922:
      if (lookahead == 'o') ADVANCE(1015);
      END_STATE();
    case 923:
      if (lookahead == 'o') ADVANCE(1192);
      END_STATE();
    case 924:
      if (lookahead == 'o') ADVANCE(350);
      END_STATE();
    case 925:
      if (lookahead == 'o') ADVANCE(1017);
      END_STATE();
    case 926:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 927:
      if (lookahead == 'o') ADVANCE(1021);
      END_STATE();
    case 928:
      if (lookahead == 'o') ADVANCE(358);
      END_STATE();
    case 929:
      if (lookahead == 'o') ADVANCE(1202);
      END_STATE();
    case 930:
      if (lookahead == 'o') ADVANCE(1132);
      END_STATE();
    case 931:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 932:
      if (lookahead == 'o') ADVANCE(314);
      END_STATE();
    case 933:
      if (lookahead == 'o') ADVANCE(799);
      END_STATE();
    case 934:
      if (lookahead == 'o') ADVANCE(802);
      END_STATE();
    case 935:
      if (lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 936:
      if (lookahead == 'o') ADVANCE(978);
      END_STATE();
    case 937:
      if (lookahead == 'o') ADVANCE(1227);
      END_STATE();
    case 938:
      if (lookahead == 'o') ADVANCE(1150);
      END_STATE();
    case 939:
      if (lookahead == 'o') ADVANCE(1152);
      END_STATE();
    case 940:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 941:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 942:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 943:
      if (lookahead == 'p') ADVANCE(725);
      END_STATE();
    case 944:
      if (lookahead == 'p') ADVANCE(1454);
      END_STATE();
    case 945:
      if (lookahead == 'p') ADVANCE(1396);
      END_STATE();
    case 946:
      if (lookahead == 'p') ADVANCE(1402);
      END_STATE();
    case 947:
      if (lookahead == 'p') ADVANCE(1325);
      END_STATE();
    case 948:
      if (lookahead == 'p') ADVANCE(1461);
      END_STATE();
    case 949:
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 950:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 951:
      if (lookahead == 'p') ADVANCE(579);
      END_STATE();
    case 952:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 953:
      if (lookahead == 'p') ADVANCE(1179);
      END_STATE();
    case 954:
      if (lookahead == 'p') ADVANCE(1005);
      END_STATE();
    case 955:
      if (lookahead == 'p') ADVANCE(667);
      END_STATE();
    case 956:
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 957:
      if (lookahead == 'p') ADVANCE(922);
      END_STATE();
    case 958:
      if (lookahead == 'p') ADVANCE(1172);
      END_STATE();
    case 959:
      if (lookahead == 'p') ADVANCE(931);
      END_STATE();
    case 960:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 961:
      if (lookahead == 'p') ADVANCE(676);
      END_STATE();
    case 962:
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(962);
      END_STATE();
    case 963:
      if (lookahead == 'p') ADVANCE(1010);
      END_STATE();
    case 964:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 965:
      if (lookahead == 'p') ADVANCE(744);
      END_STATE();
    case 966:
      if (lookahead == 'p') ADVANCE(736);
      END_STATE();
    case 967:
      if (lookahead == 'p') ADVANCE(589);
      END_STATE();
    case 968:
      if (lookahead == 'p') ADVANCE(1077);
      END_STATE();
    case 969:
      if (lookahead == 'p') ADVANCE(1024);
      END_STATE();
    case 970:
      if (lookahead == 'p') ADVANCE(481);
      END_STATE();
    case 971:
      if (lookahead == 'p') ADVANCE(1025);
      END_STATE();
    case 972:
      if (lookahead == 'p') ADVANCE(1028);
      END_STATE();
    case 973:
      if (lookahead == 'p') ADVANCE(616);
      END_STATE();
    case 974:
      if (lookahead == 'p') ADVANCE(671);
      END_STATE();
    case 975:
      if (lookahead == 'p') ADVANCE(925);
      END_STATE();
    case 976:
      if (lookahead == 'p') ADVANCE(514);
      END_STATE();
    case 977:
      if (lookahead == 'p') ADVANCE(1057);
      END_STATE();
    case 978:
      if (lookahead == 'p') ADVANCE(1217);
      END_STATE();
    case 979:
      if (lookahead == 'p') ADVANCE(1058);
      END_STATE();
    case 980:
      if (lookahead == 'p') ADVANCE(1067);
      END_STATE();
    case 981:
      if (lookahead == 'p') ADVANCE(1071);
      END_STATE();
    case 982:
      if (lookahead == 'p') ADVANCE(1072);
      END_STATE();
    case 983:
      if (lookahead == 'q') ADVANCE(1323);
      END_STATE();
    case 984:
      if (lookahead == 'q') ADVANCE(1236);
      END_STATE();
    case 985:
      if (lookahead == 'q') ADVANCE(1255);
      END_STATE();
    case 986:
      if (lookahead == 'r') ADVANCE(1100);
      END_STATE();
    case 987:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 988:
      if (lookahead == 'r') ADVANCE(1394);
      END_STATE();
    case 989:
      if (lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 990:
      if (lookahead == 'r') ADVANCE(1271);
      END_STATE();
    case 991:
      if (lookahead == 'r') ADVANCE(1410);
      END_STATE();
    case 992:
      if (lookahead == 'r') ADVANCE(1425);
      END_STATE();
    case 993:
      if (lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 994:
      if (lookahead == 'r') ADVANCE(1399);
      END_STATE();
    case 995:
      if (lookahead == 'r') ADVANCE(1421);
      END_STATE();
    case 996:
      if (lookahead == 'r') ADVANCE(1392);
      END_STATE();
    case 997:
      if (lookahead == 'r') ADVANCE(1426);
      END_STATE();
    case 998:
      if (lookahead == 'r') ADVANCE(1401);
      END_STATE();
    case 999:
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 1000:
      if (lookahead == 'r') ADVANCE(782);
      END_STATE();
    case 1001:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 1002:
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 1003:
      if (lookahead == 'r') ADVANCE(430);
      END_STATE();
    case 1004:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 1005:
      if (lookahead == 'r') ADVANCE(913);
      END_STATE();
    case 1006:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 1007:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 1008:
      if (lookahead == 'r') ADVANCE(1155);
      END_STATE();
    case 1009:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 1010:
      if (lookahead == 'r') ADVANCE(435);
      END_STATE();
    case 1011:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 1012:
      if (lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 1013:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 1014:
      if (lookahead == 'r') ADVANCE(858);
      END_STATE();
    case 1015:
      if (lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 1016:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 1017:
      if (lookahead == 'r') ADVANCE(1163);
      END_STATE();
    case 1018:
      if (lookahead == 'r') ADVANCE(1166);
      END_STATE();
    case 1019:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 1020:
      if (lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 1021:
      if (lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 1022:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 1023:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 1024:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 1025:
      if (lookahead == 'r') ADVANCE(422);
      END_STATE();
    case 1026:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 1027:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 1028:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 1029:
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 1030:
      if (lookahead == 'r') ADVANCE(1313);
      END_STATE();
    case 1031:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 1032:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 1033:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 1034:
      if (lookahead == 'r') ADVANCE(1186);
      END_STATE();
    case 1035:
      if (lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 1036:
      if (lookahead == 'r') ADVANCE(1125);
      END_STATE();
    case 1037:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 1038:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 1039:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 1040:
      if (lookahead == 'r') ADVANCE(1112);
      END_STATE();
    case 1041:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 1042:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 1043:
      if (lookahead == 'r') ADVANCE(1188);
      END_STATE();
    case 1044:
      if (lookahead == 'r') ADVANCE(1211);
      END_STATE();
    case 1045:
      if (lookahead == 'r') ADVANCE(1311);
      END_STATE();
    case 1046:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 1047:
      if (lookahead == 'r') ADVANCE(660);
      END_STATE();
    case 1048:
      if (lookahead == 'r') ADVANCE(497);
      END_STATE();
    case 1049:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 1050:
      if (lookahead == 'r') ADVANCE(649);
      END_STATE();
    case 1051:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 1052:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 1053:
      if (lookahead == 'r') ADVANCE(1213);
      END_STATE();
    case 1054:
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 1055:
      if (lookahead == 'r') ADVANCE(796);
      END_STATE();
    case 1056:
      if (lookahead == 'r') ADVANCE(1249);
      END_STATE();
    case 1057:
      if (lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 1058:
      if (lookahead == 'r') ADVANCE(917);
      END_STATE();
    case 1059:
      if (lookahead == 'r') ADVANCE(859);
      END_STATE();
    case 1060:
      if (lookahead == 'r') ADVANCE(1273);
      END_STATE();
    case 1061:
      if (lookahead == 'r') ADVANCE(1250);
      END_STATE();
    case 1062:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 1063:
      if (lookahead == 'r') ADVANCE(1251);
      END_STATE();
    case 1064:
      if (lookahead == 'r') ADVANCE(1275);
      END_STATE();
    case 1065:
      if (lookahead == 'r') ADVANCE(1276);
      END_STATE();
    case 1066:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 1067:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 1068:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 1069:
      if (lookahead == 'r') ADVANCE(1222);
      END_STATE();
    case 1070:
      if (lookahead == 'r') ADVANCE(1225);
      END_STATE();
    case 1071:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 1072:
      if (lookahead == 'r') ADVANCE(535);
      END_STATE();
    case 1073:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 1074:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 1075:
      if (lookahead == 'r') ADVANCE(1226);
      END_STATE();
    case 1076:
      if (lookahead == 'r') ADVANCE(1228);
      END_STATE();
    case 1077:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 1078:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 1079:
      if (lookahead == 'r') ADVANCE(695);
      END_STATE();
    case 1080:
      if (lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 1081:
      if (lookahead == 's') ADVANCE(1456);
      END_STATE();
    case 1082:
      if (lookahead == 's') ADVANCE(1350);
      END_STATE();
    case 1083:
      if (lookahead == 's') ADVANCE(1382);
      END_STATE();
    case 1084:
      if (lookahead == 's') ADVANCE(1346);
      END_STATE();
    case 1085:
      if (lookahead == 's') ADVANCE(1377);
      END_STATE();
    case 1086:
      if (lookahead == 's') ADVANCE(1349);
      END_STATE();
    case 1087:
      if (lookahead == 's') ADVANCE(1378);
      END_STATE();
    case 1088:
      if (lookahead == 's') ADVANCE(1384);
      END_STATE();
    case 1089:
      if (lookahead == 's') ADVANCE(1427);
      END_STATE();
    case 1090:
      if (lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 1091:
      if (lookahead == 's') ADVANCE(1445);
      END_STATE();
    case 1092:
      if (lookahead == 's') ADVANCE(1446);
      END_STATE();
    case 1093:
      if (lookahead == 's') ADVANCE(1447);
      END_STATE();
    case 1094:
      if (lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1095:
      if (lookahead == 's') ADVANCE(1401);
      END_STATE();
    case 1096:
      if (lookahead == 's') ADVANCE(1348);
      END_STATE();
    case 1097:
      if (lookahead == 's') ADVANCE(666);
      if (lookahead == 'u') ADVANCE(664);
      END_STATE();
    case 1098:
      if (lookahead == 's') ADVANCE(1461);
      END_STATE();
    case 1099:
      if (lookahead == 's') ADVANCE(716);
      if (lookahead == 'u') ADVANCE(1178);
      END_STATE();
    case 1100:
      if (lookahead == 's') ADVANCE(890);
      END_STATE();
    case 1101:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 1102:
      if (lookahead == 's') ADVANCE(699);
      if (lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 1103:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 1104:
      if (lookahead == 's') ADVANCE(1182);
      END_STATE();
    case 1105:
      if (lookahead == 's') ADVANCE(380);
      END_STATE();
    case 1106:
      if (lookahead == 's') ADVANCE(678);
      END_STATE();
    case 1107:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 1108:
      if (lookahead == 's') ADVANCE(1083);
      END_STATE();
    case 1109:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 1110:
      if (lookahead == 's') ADVANCE(1157);
      END_STATE();
    case 1111:
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 1112:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 1113:
      if (lookahead == 's') ADVANCE(1176);
      END_STATE();
    case 1114:
      if (lookahead == 's') ADVANCE(1180);
      END_STATE();
    case 1115:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 1116:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 1117:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 1118:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 1119:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 1120:
      if (lookahead == 's') ADVANCE(450);
      END_STATE();
    case 1121:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 1122:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 1123:
      if (lookahead == 's') ADVANCE(1142);
      END_STATE();
    case 1124:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 1125:
      if (lookahead == 's') ADVANCE(463);
      END_STATE();
    case 1126:
      if (lookahead == 's') ADVANCE(1106);
      END_STATE();
    case 1127:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 1128:
      if (lookahead == 's') ADVANCE(473);
      END_STATE();
    case 1129:
      if (lookahead == 's') ADVANCE(1131);
      END_STATE();
    case 1130:
      if (lookahead == 's') ADVANCE(665);
      END_STATE();
    case 1131:
      if (lookahead == 's') ADVANCE(645);
      END_STATE();
    case 1132:
      if (lookahead == 's') ADVANCE(1117);
      END_STATE();
    case 1133:
      if (lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 1134:
      if (lookahead == 's') ADVANCE(1119);
      END_STATE();
    case 1135:
      if (lookahead == 's') ADVANCE(1216);
      END_STATE();
    case 1136:
      if (lookahead == 's') ADVANCE(1149);
      END_STATE();
    case 1137:
      if (lookahead == 's') ADVANCE(1207);
      END_STATE();
    case 1138:
      if (lookahead == 's') ADVANCE(515);
      END_STATE();
    case 1139:
      if (lookahead == 's') ADVANCE(1230);
      END_STATE();
    case 1140:
      if (lookahead == 's') ADVANCE(527);
      END_STATE();
    case 1141:
      if (lookahead == 's') ADVANCE(1212);
      END_STATE();
    case 1142:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 1143:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 1144:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 1145:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 1146:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 1147:
      if (lookahead == 's') ADVANCE(1145);
      END_STATE();
    case 1148:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 1149:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 1150:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 1152:
      if (lookahead == 's') ADVANCE(1151);
      END_STATE();
    case 1153:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 1154:
      if (lookahead == 't') ADVANCE(1436);
      END_STATE();
    case 1155:
      if (lookahead == 't') ADVANCE(1437);
      END_STATE();
    case 1156:
      if (lookahead == 't') ADVANCE(1452);
      END_STATE();
    case 1157:
      if (lookahead == 't') ADVANCE(1398);
      END_STATE();
    case 1158:
      if (lookahead == 't') ADVANCE(1408);
      END_STATE();
    case 1159:
      if (lookahead == 't') ADVANCE(1422);
      END_STATE();
    case 1160:
      if (lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 1161:
      if (lookahead == 't') ADVANCE(1374);
      END_STATE();
    case 1162:
      if (lookahead == 't') ADVANCE(1341);
      END_STATE();
    case 1163:
      if (lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1164:
      if (lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 1165:
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 1166:
      if (lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 1167:
      if (lookahead == 't') ADVANCE(1409);
      END_STATE();
    case 1168:
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 1169:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 1170:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 1171:
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 1172:
      if (lookahead == 't') ADVANCE(608);
      END_STATE();
    case 1173:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 1174:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 1175:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 1176:
      if (lookahead == 't') ADVANCE(342);
      END_STATE();
    case 1177:
      if (lookahead == 't') ADVANCE(1298);
      END_STATE();
    case 1178:
      if (lookahead == 't') ADVANCE(874);
      END_STATE();
    case 1179:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 1180:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 1181:
      if (lookahead == 't') ADVANCE(1302);
      END_STATE();
    case 1182:
      if (lookahead == 't') ADVANCE(1039);
      END_STATE();
    case 1183:
      if (lookahead == 't') ADVANCE(1056);
      END_STATE();
    case 1184:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 1185:
      if (lookahead == 't') ADVANCE(892);
      END_STATE();
    case 1186:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 1187:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 1188:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 1189:
      if (lookahead == 't') ADVANCE(1031);
      END_STATE();
    case 1190:
      if (lookahead == 't') ADVANCE(1096);
      END_STATE();
    case 1191:
      if (lookahead == 't') ADVANCE(878);
      END_STATE();
    case 1192:
      if (lookahead == 't') ADVANCE(902);
      END_STATE();
    case 1193:
      if (lookahead == 't') ADVANCE(879);
      END_STATE();
    case 1194:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 1195:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 1196:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 1197:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 1198:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 1199:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 1200:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 1201:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 1202:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 1203:
      if (lookahead == 't') ADVANCE(1252);
      END_STATE();
    case 1204:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 1205:
      if (lookahead == 't') ADVANCE(641);
      END_STATE();
    case 1206:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 1207:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 1208:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 1209:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 1210:
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 1211:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 1212:
      if (lookahead == 't') ADVANCE(1047);
      END_STATE();
    case 1213:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 1214:
      if (lookahead == 't') ADVANCE(1037);
      END_STATE();
    case 1215:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 1216:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 1217:
      if (lookahead == 't') ADVANCE(670);
      END_STATE();
    case 1218:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 1219:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 1220:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 1221:
      if (lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 1222:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 1223:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 1224:
      if (lookahead == 't') ADVANCE(1063);
      END_STATE();
    case 1225:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 1226:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 1227:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 1228:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 1229:
      if (lookahead == 't') ADVANCE(1068);
      END_STATE();
    case 1230:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 1231:
      if (lookahead == 'u') ADVANCE(1397);
      END_STATE();
    case 1232:
      if (lookahead == 'u') ADVANCE(1101);
      END_STATE();
    case 1233:
      if (lookahead == 'u') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1331);
      END_STATE();
    case 1234:
      if (lookahead == 'u') ADVANCE(735);
      END_STATE();
    case 1235:
      if (lookahead == 'u') ADVANCE(950);
      END_STATE();
    case 1236:
      if (lookahead == 'u') ADVANCE(636);
      END_STATE();
    case 1237:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 1238:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 1239:
      if (lookahead == 'u') ADVANCE(1146);
      END_STATE();
    case 1240:
      if (lookahead == 'u') ADVANCE(836);
      END_STATE();
    case 1241:
      if (lookahead == 'u') ADVANCE(673);
      END_STATE();
    case 1242:
      if (lookahead == 'u') ADVANCE(633);
      END_STATE();
    case 1243:
      if (lookahead == 'u') ADVANCE(635);
      END_STATE();
    case 1244:
      if (lookahead == 'u') ADVANCE(956);
      END_STATE();
    case 1245:
      if (lookahead == 'u') ADVANCE(1006);
      END_STATE();
    case 1246:
      if (lookahead == 'u') ADVANCE(1013);
      END_STATE();
    case 1247:
      if (lookahead == 'u') ADVANCE(369);
      END_STATE();
    case 1248:
      if (lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 1249:
      if (lookahead == 'u') ADVANCE(1110);
      END_STATE();
    case 1250:
      if (lookahead == 'u') ADVANCE(1113);
      END_STATE();
    case 1251:
      if (lookahead == 'u') ADVANCE(1114);
      END_STATE();
    case 1252:
      if (lookahead == 'u') ADVANCE(1118);
      END_STATE();
    case 1253:
      if (lookahead == 'u') ADVANCE(754);
      END_STATE();
    case 1254:
      if (lookahead == 'u') ADVANCE(762);
      END_STATE();
    case 1255:
      if (lookahead == 'u') ADVANCE(680);
      END_STATE();
    case 1256:
      if (lookahead == 'u') ADVANCE(370);
      END_STATE();
    case 1257:
      if (lookahead == 'u') ADVANCE(1148);
      END_STATE();
    case 1258:
      if (lookahead == 'v') ADVANCE(647);
      END_STATE();
    case 1259:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 1260:
      if (lookahead == 'v') ADVANCE(883);
      END_STATE();
    case 1261:
      if (lookahead == 'v') ADVANCE(402);
      END_STATE();
    case 1262:
      if (lookahead == 'v') ADVANCE(1098);
      END_STATE();
    case 1263:
      if (lookahead == 'v') ADVANCE(434);
      END_STATE();
    case 1264:
      if (lookahead == 'v') ADVANCE(436);
      END_STATE();
    case 1265:
      if (lookahead == 'v') ADVANCE(440);
      END_STATE();
    case 1266:
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 1267:
      if (lookahead == 'v') ADVANCE(391);
      END_STATE();
    case 1268:
      if (lookahead == 'v') ADVANCE(444);
      END_STATE();
    case 1269:
      if (lookahead == 'v') ADVANCE(446);
      END_STATE();
    case 1270:
      if (lookahead == 'v') ADVANCE(395);
      END_STATE();
    case 1271:
      if (lookahead == 'v') ADVANCE(443);
      END_STATE();
    case 1272:
      if (lookahead == 'v') ADVANCE(453);
      END_STATE();
    case 1273:
      if (lookahead == 'v') ADVANCE(498);
      END_STATE();
    case 1274:
      if (lookahead == 'v') ADVANCE(466);
      END_STATE();
    case 1275:
      if (lookahead == 'v') ADVANCE(471);
      END_STATE();
    case 1276:
      if (lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 1277:
      if (lookahead == 'v') ADVANCE(256);
      END_STATE();
    case 1278:
      if (lookahead == 'v') ADVANCE(547);
      END_STATE();
    case 1279:
      if (lookahead == 'w') ADVANCE(207);
      END_STATE();
    case 1280:
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 1281:
      if (lookahead == 'w') ADVANCE(1038);
      END_STATE();
    case 1282:
      if (lookahead == 'w') ADVANCE(813);
      END_STATE();
    case 1283:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 1284:
      if (lookahead == 'w') ADVANCE(244);
      END_STATE();
    case 1285:
      if (lookahead == 'w') ADVANCE(793);
      END_STATE();
    case 1286:
      if (lookahead == 'w') ADVANCE(234);
      END_STATE();
    case 1287:
      if (lookahead == 'w') ADVANCE(461);
      END_STATE();
    case 1288:
      if (lookahead == 'w') ADVANCE(255);
      END_STATE();
    case 1289:
      if (lookahead == 'x') ADVANCE(1348);
      END_STATE();
    case 1290:
      if (lookahead == 'x') ADVANCE(757);
      END_STATE();
    case 1291:
      if (lookahead == 'x') ADVANCE(1170);
      END_STATE();
    case 1292:
      if (lookahead == 'x') ADVANCE(961);
      END_STATE();
    case 1293:
      if (lookahead == 'x') ADVANCE(970);
      END_STATE();
    case 1294:
      if (lookahead == 'x') ADVANCE(1223);
      END_STATE();
    case 1295:
      if (lookahead == 'x') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 1296:
      if (lookahead == 'y') ADVANCE(621);
      END_STATE();
    case 1297:
      if (lookahead == 'y') ADVANCE(1345);
      END_STATE();
    case 1298:
      if (lookahead == 'y') ADVANCE(1350);
      END_STATE();
    case 1299:
      if (lookahead == 'y') ADVANCE(1340);
      END_STATE();
    case 1300:
      if (lookahead == 'y') ADVANCE(1391);
      END_STATE();
    case 1301:
      if (lookahead == 'y') ADVANCE(1413);
      END_STATE();
    case 1302:
      if (lookahead == 'y') ADVANCE(1348);
      END_STATE();
    case 1303:
      if (lookahead == 'y') ADVANCE(1054);
      END_STATE();
    case 1304:
      if (lookahead == 'y') ADVANCE(1109);
      END_STATE();
    case 1305:
      if (lookahead == 'y') ADVANCE(1138);
      END_STATE();
    case 1306:
      if (lookahead == 'y') ADVANCE(1094);
      END_STATE();
    case 1307:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 1308:
      if (lookahead == 'y') ADVANCE(1096);
      END_STATE();
    case 1309:
      if (lookahead == 'y') ADVANCE(60);
      END_STATE();
    case 1310:
      if (lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 1311:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 1312:
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 1313:
      if (lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 1314:
      if (lookahead == 'y') ADVANCE(68);
      END_STATE();
    case 1315:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 1316:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 1317:
      if (lookahead == 'y') ADVANCE(1050);
      END_STATE();
    case 1318:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 1319:
      if (lookahead == 'y') ADVANCE(1144);
      END_STATE();
    case 1320:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 1321:
      if (lookahead == 'z') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 1322:
      if (lookahead == '{') ADVANCE(983);
      END_STATE();
    case 1323:
      if (lookahead == '}') ADVANCE(1363);
      END_STATE();
    case 1324:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(1451);
      END_STATE();
    case 1325:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1461);
      END_STATE();
    case 1326:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1498);
      END_STATE();
    case 1327:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1499);
      END_STATE();
    case 1328:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1335);
      END_STATE();
    case 1329:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1497);
      END_STATE();
    case 1330:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1329);
      END_STATE();
    case 1331:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1330);
      END_STATE();
    case 1332:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1331);
      END_STATE();
    case 1333:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1332);
      END_STATE();
    case 1334:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1333);
      END_STATE();
    case 1335:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1334);
      END_STATE();
    case 1336:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1337:
      if (eof) ADVANCE(1338);
      if (lookahead == '\n') ADVANCE(1339);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1503);
      if (lookahead == ',') ADVANCE(1347);
      if (lookahead == '0') ADVANCE(1295);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'b') ADVANCE(1321);
      if (lookahead == 'c') ADVANCE(726);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == 'f') ADVANCE(872);
      if (lookahead == 'g') ADVANCE(808);
      if (lookahead == 'h') ADVANCE(700);
      if (lookahead == 'i') ADVANCE(809);
      if (lookahead == 'k') ADVANCE(376);
      if (lookahead == 'l') ADVANCE(341);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(873);
      if (lookahead == 'o') ADVANCE(960);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(1168);
      if (lookahead == 'v') ADVANCE(404);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1508);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(1335);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1120);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1369);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1502);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(1322);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1369);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1502);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(1322);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1369);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1375);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token1);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token2);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'u') ADVANCE(962);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_textmode);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_s2k_mode_token1);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(638);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym__compliance);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym__compliance);
      if (lookahead == 'b') ADVANCE(651);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1465);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1466);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1467);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1468);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1469);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1470);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1471);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1472);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1473);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1474);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1475);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1476);
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
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1326);
      if (lookahead == ':') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1498);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1499);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1501);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1502);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1503);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__cipher_algo);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__cipher_algo);
      if (lookahead == '1') ADVANCE(165);
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym__hash_algo);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__compression_algo);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1337},
  [2] = {.lex_state = 1337},
  [3] = {.lex_state = 1337},
  [4] = {.lex_state = 1337},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 1337},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1337},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 1337},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1337},
  [26] = {.lex_state = 1337},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 1337},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 1337},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 1337},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 1337},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 1337},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 1337},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 1337},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 1337},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 1337},
  [66] = {.lex_state = 1337},
  [67] = {.lex_state = 1337},
  [68] = {.lex_state = 1337},
  [69] = {.lex_state = 1337},
  [70] = {.lex_state = 1337},
  [71] = {.lex_state = 1337},
  [72] = {.lex_state = 1337},
  [73] = {.lex_state = 1337},
  [74] = {.lex_state = 1337},
  [75] = {.lex_state = 1337},
  [76] = {.lex_state = 1337},
  [77] = {.lex_state = 1337},
  [78] = {.lex_state = 1337},
  [79] = {.lex_state = 1337},
  [80] = {.lex_state = 1337},
  [81] = {.lex_state = 1337},
  [82] = {.lex_state = 1337},
  [83] = {.lex_state = 1337},
  [84] = {.lex_state = 1337},
  [85] = {.lex_state = 1337},
  [86] = {.lex_state = 1337},
  [87] = {.lex_state = 1337},
  [88] = {.lex_state = 1337},
  [89] = {.lex_state = 1337},
  [90] = {.lex_state = 1337},
  [91] = {.lex_state = 1337},
  [92] = {.lex_state = 1337},
  [93] = {.lex_state = 1337},
  [94] = {.lex_state = 1337},
  [95] = {.lex_state = 1337},
  [96] = {.lex_state = 1337},
  [97] = {.lex_state = 1337},
  [98] = {.lex_state = 1337},
  [99] = {.lex_state = 1337},
  [100] = {.lex_state = 1337},
  [101] = {.lex_state = 1337},
  [102] = {.lex_state = 1337},
  [103] = {.lex_state = 1337},
  [104] = {.lex_state = 1337},
  [105] = {.lex_state = 1337},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 1337},
  [108] = {.lex_state = 1337},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 1337},
  [115] = {.lex_state = 1337},
  [116] = {.lex_state = 124},
  [117] = {.lex_state = 1337},
  [118] = {.lex_state = 123},
  [119] = {.lex_state = 123},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 123},
  [122] = {.lex_state = 1337},
  [123] = {.lex_state = 1337},
  [124] = {.lex_state = 123},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 1337},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 1337},
  [130] = {.lex_state = 1324},
  [131] = {.lex_state = 123},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 123},
  [134] = {.lex_state = 1337},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 1337},
  [137] = {.lex_state = 1337},
  [138] = {.lex_state = 1337},
  [139] = {.lex_state = 1337},
  [140] = {.lex_state = 1337},
  [141] = {.lex_state = 1337},
  [142] = {.lex_state = 1337},
  [143] = {.lex_state = 1337},
  [144] = {.lex_state = 1337},
  [145] = {.lex_state = 1337},
  [146] = {.lex_state = 1337},
  [147] = {.lex_state = 1337},
  [148] = {.lex_state = 1337},
  [149] = {.lex_state = 1337},
  [150] = {.lex_state = 1337},
  [151] = {.lex_state = 1337},
  [152] = {.lex_state = 1337},
  [153] = {.lex_state = 1337},
  [154] = {.lex_state = 1337},
  [155] = {.lex_state = 1337},
  [156] = {.lex_state = 1337},
  [157] = {.lex_state = 1337},
  [158] = {.lex_state = 1337},
  [159] = {.lex_state = 1337},
  [160] = {.lex_state = 1337},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 1337},
  [163] = {.lex_state = 1337},
  [164] = {.lex_state = 1337},
  [165] = {.lex_state = 1337},
  [166] = {.lex_state = 1337},
  [167] = {.lex_state = 1337},
  [168] = {.lex_state = 1337},
  [169] = {.lex_state = 1337},
  [170] = {.lex_state = 1337},
  [171] = {.lex_state = 1337},
  [172] = {.lex_state = 1337},
  [173] = {.lex_state = 1337},
  [174] = {.lex_state = 1337},
  [175] = {.lex_state = 1337},
  [176] = {.lex_state = 1337},
  [177] = {.lex_state = 1337},
  [178] = {.lex_state = 1337},
  [179] = {.lex_state = 1337},
  [180] = {.lex_state = 1337},
  [181] = {.lex_state = 1337},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 1337},
  [184] = {.lex_state = 1337},
  [185] = {.lex_state = 1337},
  [186] = {.lex_state = 1337},
  [187] = {.lex_state = 1337},
  [188] = {.lex_state = 1337},
  [189] = {.lex_state = 1337},
  [190] = {.lex_state = 1337},
  [191] = {.lex_state = 1337},
  [192] = {.lex_state = 1337},
  [193] = {.lex_state = 1337},
  [194] = {.lex_state = 1337},
  [195] = {.lex_state = 1337},
  [196] = {.lex_state = 1337},
  [197] = {.lex_state = 1337},
  [198] = {.lex_state = 1337},
  [199] = {.lex_state = 1337},
  [200] = {.lex_state = 1337},
  [201] = {.lex_state = 1337},
  [202] = {.lex_state = 1337},
  [203] = {.lex_state = 1337},
  [204] = {.lex_state = 1337},
  [205] = {.lex_state = 1337},
  [206] = {.lex_state = 1337},
  [207] = {.lex_state = 1337},
  [208] = {.lex_state = 1337},
  [209] = {.lex_state = 1337},
  [210] = {.lex_state = 1337},
  [211] = {.lex_state = 1337},
  [212] = {.lex_state = 1337},
  [213] = {.lex_state = 1337},
  [214] = {.lex_state = 1337},
  [215] = {.lex_state = 1337},
  [216] = {.lex_state = 1337},
  [217] = {.lex_state = 1337},
  [218] = {.lex_state = 1337},
  [219] = {.lex_state = 1337},
  [220] = {.lex_state = 1337},
  [221] = {.lex_state = 1337},
  [222] = {.lex_state = 1337},
  [223] = {.lex_state = 1337},
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
    [aux_sym_s2k_mode_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(104),
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
    [anon_sym_textmode] = ACTIONS(147),
    [anon_sym_no_DASHtextmode] = ACTIONS(149),
    [anon_sym_force_DASHocb] = ACTIONS(151),
    [anon_sym_force_DASHaead] = ACTIONS(151),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(153),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(155),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(157),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(159),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(161),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(163),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(165),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(167),
    [anon_sym_s2k_DASHmode] = ACTIONS(169),
    [anon_sym_s2k_DASHcount] = ACTIONS(171),
    [anon_sym_gnupg] = ACTIONS(173),
    [anon_sym_openpgp] = ACTIONS(175),
    [anon_sym_rfc4880] = ACTIONS(177),
    [anon_sym_rfc4880bis] = ACTIONS(179),
    [anon_sym_rfc2440] = ACTIONS(181),
    [anon_sym_pgp7] = ACTIONS(183),
    [anon_sym_pgp8] = ACTIONS(185),
    [anon_sym_compliance] = ACTIONS(187),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(189),
    [anon_sym_require_DASHcompliance] = ACTIONS(191),
    [sym_comment] = ACTIONS(193),
    [sym__space] = ACTIONS(195),
  },
  [2] = {
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
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_config_token1] = ACTIONS(199),
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
    [anon_sym_textmode] = ACTIONS(147),
    [anon_sym_no_DASHtextmode] = ACTIONS(149),
    [anon_sym_force_DASHocb] = ACTIONS(151),
    [anon_sym_force_DASHaead] = ACTIONS(151),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(153),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(155),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(157),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(159),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(161),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(163),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(165),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(167),
    [anon_sym_s2k_DASHmode] = ACTIONS(169),
    [anon_sym_s2k_DASHcount] = ACTIONS(171),
    [anon_sym_gnupg] = ACTIONS(173),
    [anon_sym_openpgp] = ACTIONS(175),
    [anon_sym_rfc4880] = ACTIONS(177),
    [anon_sym_rfc4880bis] = ACTIONS(179),
    [anon_sym_rfc2440] = ACTIONS(181),
    [anon_sym_pgp7] = ACTIONS(183),
    [anon_sym_pgp8] = ACTIONS(185),
    [anon_sym_compliance] = ACTIONS(187),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(189),
    [anon_sym_require_DASHcompliance] = ACTIONS(191),
    [sym_comment] = ACTIONS(193),
    [sym__space] = ACTIONS(195),
  },
  [3] = {
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
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_config_token1] = ACTIONS(203),
    [anon_sym_default_DASHkey] = ACTIONS(206),
    [anon_sym_default_DASHrecipient] = ACTIONS(209),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(212),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(215),
    [anon_sym_verbose] = ACTIONS(218),
    [anon_sym_no_DASHtty] = ACTIONS(221),
    [anon_sym_list_DASHoptions] = ACTIONS(224),
    [anon_sym_verify_DASHoptions] = ACTIONS(227),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(230),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(233),
    [anon_sym_enable_DASHdsa2] = ACTIONS(236),
    [anon_sym_disable_DASHdsa2] = ACTIONS(239),
    [anon_sym_photo_DASHviewer] = ACTIONS(242),
    [anon_sym_exec_DASHpath] = ACTIONS(245),
    [anon_sym_keyring] = ACTIONS(248),
    [anon_sym_primary_DASHkeyring] = ACTIONS(251),
    [anon_sym_trustdb_DASHname] = ACTIONS(254),
    [anon_sym_display_DASHcharset] = ACTIONS(257),
    [anon_sym_utf8_DASHstrings] = ACTIONS(260),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(263),
    [anon_sym_compress_DASHlevel] = ACTIONS(266),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(269),
    [anon_sym_no_DASHcompress] = ACTIONS(272),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(275),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(278),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(281),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(284),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(287),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(290),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(293),
    [anon_sym_trusted_DASHkey] = ACTIONS(296),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(299),
    [anon_sym_trust_DASHmodel] = ACTIONS(302),
    [anon_sym_always_DASHtrust] = ACTIONS(305),
    [anon_sym_assert_DASHsigner] = ACTIONS(308),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(311),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(314),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(317),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(320),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(323),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(326),
    [anon_sym_keyid_DASHformat] = ACTIONS(329),
    [anon_sym_keyserver] = ACTIONS(332),
    [anon_sym_completes_DASHneeded] = ACTIONS(335),
    [anon_sym_marginals_DASHneeded] = ACTIONS(338),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(341),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(344),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(347),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(350),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(353),
    [anon_sym_agent_DASHprogram] = ACTIONS(356),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(359),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(362),
    [anon_sym_no_DASHautostart] = ACTIONS(365),
    [anon_sym_lock_DASHonce] = ACTIONS(368),
    [anon_sym_lock_DASHmultiple] = ACTIONS(371),
    [anon_sym_lock_DASHnever] = ACTIONS(374),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(377),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(380),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(383),
    [anon_sym_no_DASHgreeting] = ACTIONS(386),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(389),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(392),
    [anon_sym_require_DASHsecmem] = ACTIONS(395),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(398),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(401),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(404),
    [anon_sym_expert] = ACTIONS(407),
    [anon_sym_no_DASHexpert] = ACTIONS(410),
    [anon_sym_textmode] = ACTIONS(413),
    [anon_sym_no_DASHtextmode] = ACTIONS(416),
    [anon_sym_force_DASHocb] = ACTIONS(419),
    [anon_sym_force_DASHaead] = ACTIONS(419),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(422),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(425),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(428),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(431),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(434),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(437),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(440),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(443),
    [anon_sym_s2k_DASHmode] = ACTIONS(446),
    [anon_sym_s2k_DASHcount] = ACTIONS(449),
    [anon_sym_gnupg] = ACTIONS(452),
    [anon_sym_openpgp] = ACTIONS(455),
    [anon_sym_rfc4880] = ACTIONS(458),
    [anon_sym_rfc4880bis] = ACTIONS(461),
    [anon_sym_rfc2440] = ACTIONS(464),
    [anon_sym_pgp7] = ACTIONS(467),
    [anon_sym_pgp8] = ACTIONS(470),
    [anon_sym_compliance] = ACTIONS(473),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(476),
    [anon_sym_require_DASHcompliance] = ACTIONS(479),
    [sym_comment] = ACTIONS(482),
    [sym__space] = ACTIONS(195),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_config_token1] = ACTIONS(201),
    [anon_sym_default_DASHkey] = ACTIONS(201),
    [anon_sym_default_DASHrecipient] = ACTIONS(485),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(201),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(201),
    [anon_sym_verbose] = ACTIONS(201),
    [anon_sym_no_DASHtty] = ACTIONS(201),
    [anon_sym_list_DASHoptions] = ACTIONS(201),
    [anon_sym_verify_DASHoptions] = ACTIONS(201),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(201),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(201),
    [anon_sym_enable_DASHdsa2] = ACTIONS(201),
    [anon_sym_disable_DASHdsa2] = ACTIONS(201),
    [anon_sym_photo_DASHviewer] = ACTIONS(201),
    [anon_sym_exec_DASHpath] = ACTIONS(201),
    [anon_sym_keyring] = ACTIONS(201),
    [anon_sym_primary_DASHkeyring] = ACTIONS(201),
    [anon_sym_trustdb_DASHname] = ACTIONS(201),
    [anon_sym_display_DASHcharset] = ACTIONS(201),
    [anon_sym_utf8_DASHstrings] = ACTIONS(201),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(201),
    [anon_sym_compress_DASHlevel] = ACTIONS(201),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(201),
    [anon_sym_no_DASHcompress] = ACTIONS(201),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(201),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(201),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(201),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(201),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(201),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(201),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(201),
    [anon_sym_trusted_DASHkey] = ACTIONS(201),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(201),
    [anon_sym_trust_DASHmodel] = ACTIONS(201),
    [anon_sym_always_DASHtrust] = ACTIONS(201),
    [anon_sym_assert_DASHsigner] = ACTIONS(201),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(201),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(201),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(201),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(201),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(201),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(201),
    [anon_sym_keyid_DASHformat] = ACTIONS(201),
    [anon_sym_keyserver] = ACTIONS(201),
    [anon_sym_completes_DASHneeded] = ACTIONS(201),
    [anon_sym_marginals_DASHneeded] = ACTIONS(201),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(201),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(201),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(201),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(201),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(201),
    [anon_sym_agent_DASHprogram] = ACTIONS(201),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(201),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(201),
    [anon_sym_no_DASHautostart] = ACTIONS(201),
    [anon_sym_lock_DASHonce] = ACTIONS(201),
    [anon_sym_lock_DASHmultiple] = ACTIONS(201),
    [anon_sym_lock_DASHnever] = ACTIONS(201),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(201),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(201),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(201),
    [anon_sym_no_DASHgreeting] = ACTIONS(201),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(201),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(201),
    [anon_sym_require_DASHsecmem] = ACTIONS(201),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(201),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(201),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(201),
    [anon_sym_expert] = ACTIONS(201),
    [anon_sym_no_DASHexpert] = ACTIONS(201),
    [anon_sym_textmode] = ACTIONS(201),
    [anon_sym_no_DASHtextmode] = ACTIONS(201),
    [anon_sym_force_DASHocb] = ACTIONS(201),
    [anon_sym_force_DASHaead] = ACTIONS(201),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(201),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(201),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(201),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(201),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(201),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(201),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(201),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(201),
    [anon_sym_s2k_DASHmode] = ACTIONS(201),
    [anon_sym_s2k_DASHcount] = ACTIONS(201),
    [anon_sym_gnupg] = ACTIONS(201),
    [anon_sym_openpgp] = ACTIONS(201),
    [anon_sym_rfc4880] = ACTIONS(485),
    [anon_sym_rfc4880bis] = ACTIONS(201),
    [anon_sym_rfc2440] = ACTIONS(201),
    [anon_sym_pgp7] = ACTIONS(201),
    [anon_sym_pgp8] = ACTIONS(201),
    [anon_sym_compliance] = ACTIONS(201),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(201),
    [anon_sym_require_DASHcompliance] = ACTIONS(201),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(195),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(487), 1,
      aux_sym__command_token1,
    ACTIONS(489), 1,
      anon_sym_DQUOTE,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      sym_format,
    STATE(44), 1,
      aux_sym__command_repeat1,
    STATE(145), 1,
      sym__command,
  [22] = 6,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(495), 1,
      aux_sym_config_token1,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      sym__mechanism,
    ACTIONS(501), 1,
      sym_url,
    STATE(7), 1,
      aux_sym_auto_key_locate_repeat1,
  [41] = 6,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      sym__mechanism,
    ACTIONS(501), 1,
      sym_url,
    ACTIONS(503), 1,
      aux_sym_config_token1,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [60] = 6,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(505), 1,
      aux_sym_config_token1,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      sym__mechanism,
    ACTIONS(513), 1,
      sym_url,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [79] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(518), 1,
      anon_sym_SQUOTE,
    ACTIONS(520), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(516), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [96] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
    ACTIONS(527), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(522), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [113] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(530), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(535), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [130] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(518), 1,
      anon_sym_DQUOTE,
    ACTIONS(538), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(540), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [147] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(542), 1,
      aux_sym_config_token1,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [163] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(548), 1,
      aux_sym_config_token1,
    ACTIONS(550), 1,
      aux_sym__command_token1,
    ACTIONS(553), 1,
      sym_format,
    STATE(14), 1,
      aux_sym__command_repeat1,
  [179] = 3,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(558), 1,
      sym__mechanism,
    ACTIONS(556), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [191] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(560), 1,
      aux_sym_config_token1,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      sym__verify_parameter,
    STATE(16), 1,
      aux_sym_verify_options_repeat1,
  [207] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(140), 1,
      sym_string,
  [223] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(574), 1,
      aux_sym_config_token1,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(579), 1,
      sym__list_parameter,
    STATE(18), 1,
      aux_sym_list_options_repeat1,
  [239] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(150), 1,
      sym_string,
  [255] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(582), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
    ACTIONS(587), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [271] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
    ACTIONS(592), 1,
      aux_sym__command_token2,
    ACTIONS(595), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [287] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(598), 1,
      aux_sym_config_token1,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      sym__hash_algo,
    STATE(25), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [303] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(604), 1,
      aux_sym_config_token1,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      sym__cipher_algo,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [319] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(610), 1,
      aux_sym_config_token1,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      sym__compression_algo,
    STATE(43), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [335] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(616), 1,
      aux_sym_config_token1,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__hash_algo,
    STATE(25), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [351] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      sym__hash_algo,
    ACTIONS(624), 1,
      aux_sym_config_token1,
    STATE(25), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [367] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(149), 1,
      sym_string,
  [383] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      sym__cipher_algo,
    ACTIONS(626), 1,
      aux_sym_config_token1,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [399] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(148), 1,
      sym_string,
  [415] = 3,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(630), 1,
      sym__mechanism,
    ACTIONS(628), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [427] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(147), 1,
      sym_string,
  [443] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(169), 1,
      sym_string,
  [459] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(160), 1,
      sym_string,
  [475] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(632), 1,
      aux_sym_config_token1,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      sym__list_parameter,
    STATE(18), 1,
      aux_sym_list_options_repeat1,
  [491] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(572), 1,
      aux_sym_string_token1,
    STATE(168), 1,
      sym_string,
  [507] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(638), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(640), 1,
      anon_sym_SQUOTE,
    ACTIONS(642), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [523] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      aux_sym__command_token2,
    ACTIONS(646), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [539] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      sym__hash_algo,
    ACTIONS(648), 1,
      aux_sym_config_token1,
    STATE(22), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [555] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      sym__cipher_algo,
    ACTIONS(650), 1,
      aux_sym_config_token1,
    STATE(23), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [571] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      sym__compression_algo,
    ACTIONS(652), 1,
      aux_sym_config_token1,
    STATE(24), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [587] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      sym__hash_algo,
    ACTIONS(654), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [603] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      sym__cipher_algo,
    ACTIONS(656), 1,
      aux_sym_config_token1,
    STATE(28), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [619] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(658), 1,
      aux_sym_config_token1,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      sym__compression_algo,
    STATE(43), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [635] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(666), 1,
      aux_sym_config_token1,
    ACTIONS(668), 1,
      aux_sym__command_token1,
    ACTIONS(670), 1,
      sym_format,
    STATE(14), 1,
      aux_sym__command_repeat1,
  [651] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(674), 1,
      aux_sym__command_token3,
    STATE(9), 1,
      aux_sym__command_repeat3,
    ACTIONS(672), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [665] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(676), 1,
      aux_sym__command_token2,
    STATE(12), 1,
      aux_sym__command_repeat2,
    ACTIONS(678), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [679] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      sym__verify_parameter,
    ACTIONS(680), 1,
      aux_sym_config_token1,
    STATE(13), 1,
      aux_sym_verify_options_repeat1,
  [695] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      sym__list_parameter,
    ACTIONS(682), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym_list_options_repeat1,
  [711] = 5,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(684), 1,
      aux_sym_config_token1,
    ACTIONS(686), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      sym__cipher_algo,
    STATE(49), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [727] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(692), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [736] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(694), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(696), 1,
      aux_sym__command_token3,
    STATE(36), 1,
      aux_sym_string_repeat2,
  [749] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(698), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [758] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(700), 1,
      aux_sym__command_token2,
    ACTIONS(702), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [771] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(704), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [780] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(706), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [789] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(708), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [798] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(710), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [807] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(712), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [816] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(714), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [825] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(716), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [834] = 3,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(718), 1,
      aux_sym_add_desig_revoker_token1,
    ACTIONS(720), 2,
      aux_sym_add_desig_revoker_token2,
      sym_key,
  [845] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(722), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [854] = 3,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(724), 1,
      sym__mechanism,
    ACTIONS(726), 1,
      sym_url,
  [864] = 3,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(728), 1,
      sym__mechanism,
    ACTIONS(730), 1,
      sym_url,
  [874] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(732), 1,
      sym_key,
  [881] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(734), 1,
      aux_sym_config_token1,
  [888] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(736), 1,
      aux_sym_config_token1,
  [895] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(738), 1,
      aux_sym_config_token1,
  [902] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(740), 1,
      aux_sym_config_token1,
  [909] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(742), 1,
      aux_sym_config_token1,
  [916] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(744), 1,
      aux_sym_config_token1,
  [923] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(746), 1,
      aux_sym_config_token1,
  [930] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(748), 1,
      aux_sym_config_token1,
  [937] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(750), 1,
      aux_sym_config_token1,
  [944] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(752), 1,
      aux_sym_config_token1,
  [951] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(754), 1,
      aux_sym_config_token1,
  [958] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(756), 1,
      aux_sym_config_token1,
  [965] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(758), 1,
      aux_sym_config_token1,
  [972] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(760), 1,
      aux_sym_config_token1,
  [979] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(762), 1,
      aux_sym_config_token1,
  [986] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(764), 1,
      aux_sym_config_token1,
  [993] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(766), 1,
      aux_sym_config_token1,
  [1000] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(768), 1,
      aux_sym_config_token1,
  [1007] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(770), 1,
      aux_sym_config_token1,
  [1014] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(772), 1,
      aux_sym_config_token1,
  [1021] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(774), 1,
      aux_sym_config_token1,
  [1028] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(776), 1,
      aux_sym_config_token1,
  [1035] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(778), 1,
      aux_sym_config_token1,
  [1042] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(780), 1,
      aux_sym_config_token1,
  [1049] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(782), 1,
      aux_sym_config_token1,
  [1056] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(784), 1,
      aux_sym_config_token1,
  [1063] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(786), 1,
      aux_sym_config_token1,
  [1070] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(788), 1,
      aux_sym_config_token1,
  [1077] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(790), 1,
      aux_sym_config_token1,
  [1084] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(792), 1,
      aux_sym_config_token1,
  [1091] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(794), 1,
      aux_sym_config_token1,
  [1098] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(796), 1,
      aux_sym_config_token1,
  [1105] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(798), 1,
      aux_sym_config_token1,
  [1112] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(800), 1,
      aux_sym_config_token1,
  [1119] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(802), 1,
      aux_sym_config_token1,
  [1126] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(804), 1,
      aux_sym_config_token1,
  [1133] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(806), 1,
      aux_sym_config_token1,
  [1140] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(808), 1,
      aux_sym_config_token1,
  [1147] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(810), 1,
      ts_builtin_sym_end,
  [1154] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(812), 1,
      sym_key,
  [1161] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(814), 1,
      sym__list_parameter,
  [1168] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(816), 1,
      sym__verify_parameter,
  [1175] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(818), 1,
      sym__charset,
  [1182] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(820), 1,
      aux_sym_compress_level_token1,
  [1189] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(822), 1,
      aux_sym_compress_level_token1,
  [1196] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(824), 1,
      aux_sym_default_cert_level_token1,
  [1203] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(826), 1,
      aux_sym_default_cert_level_token1,
  [1210] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(828), 1,
      sym__model,
  [1217] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(830), 1,
      aux_sym_config_token1,
  [1224] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(832), 1,
      aux_sym_config_token1,
  [1231] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(834), 1,
      sym__keyid_format,
  [1238] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(836), 1,
      sym_url,
  [1245] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(838), 1,
      sym_number,
  [1252] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(840), 1,
      sym_number,
  [1259] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(842), 1,
      sym__tofu_policy,
  [1266] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(844), 1,
      sym_number,
  [1273] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(846), 1,
      aux_sym_config_token1,
  [1280] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(848), 1,
      aux_sym_config_token1,
  [1287] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(850), 1,
      sym_number,
  [1294] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(852), 1,
      sym__cipher_algo,
  [1301] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(854), 1,
      sym__hash_algo,
  [1308] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(856), 1,
      sym__compression_algo,
  [1315] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(858), 1,
      sym__cipher_algo,
  [1322] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(860), 1,
      sym__hash_algo,
  [1329] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(862), 1,
      aux_sym_s2k_mode_token1,
  [1336] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(864), 1,
      sym_number,
  [1343] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(866), 1,
      sym__compliance,
  [1350] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(868), 1,
      sym_number,
  [1357] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(870), 1,
      aux_sym_config_token1,
  [1364] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(872), 1,
      sym__compression_algo,
  [1371] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(874), 1,
      aux_sym_config_token1,
  [1378] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(876), 1,
      aux_sym_config_token1,
  [1385] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(878), 1,
      aux_sym_config_token1,
  [1392] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(880), 1,
      aux_sym_config_token1,
  [1399] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(882), 1,
      aux_sym_config_token1,
  [1406] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(884), 1,
      aux_sym_config_token1,
  [1413] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(886), 1,
      aux_sym_config_token1,
  [1420] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(888), 1,
      sym__hash_algo,
  [1427] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(890), 1,
      aux_sym_config_token1,
  [1434] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(892), 1,
      aux_sym_config_token1,
  [1441] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(894), 1,
      aux_sym_config_token1,
  [1448] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(896), 1,
      aux_sym_config_token1,
  [1455] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(898), 1,
      aux_sym_config_token1,
  [1462] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(900), 1,
      aux_sym_config_token1,
  [1469] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(902), 1,
      aux_sym_config_token1,
  [1476] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(904), 1,
      aux_sym_config_token1,
  [1483] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(906), 1,
      aux_sym_config_token1,
  [1490] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(908), 1,
      aux_sym_config_token1,
  [1497] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(910), 1,
      aux_sym_config_token1,
  [1504] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(912), 1,
      aux_sym_config_token1,
  [1511] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(914), 1,
      aux_sym_config_token1,
  [1518] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(916), 1,
      sym_key,
  [1525] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(918), 1,
      aux_sym_config_token1,
  [1532] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(920), 1,
      aux_sym_config_token1,
  [1539] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(922), 1,
      aux_sym_config_token1,
  [1546] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(924), 1,
      sym__cipher_algo,
  [1553] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(926), 1,
      aux_sym_config_token1,
  [1560] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(928), 1,
      aux_sym_config_token1,
  [1567] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(930), 1,
      aux_sym_config_token1,
  [1574] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(932), 1,
      aux_sym_config_token1,
  [1581] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(934), 1,
      aux_sym_config_token1,
  [1588] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(936), 1,
      aux_sym_config_token1,
  [1595] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(938), 1,
      aux_sym_config_token1,
  [1602] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(940), 1,
      aux_sym_config_token1,
  [1609] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(942), 1,
      aux_sym_config_token1,
  [1616] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(944), 1,
      aux_sym_config_token1,
  [1623] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(946), 1,
      aux_sym_config_token1,
  [1630] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(948), 1,
      aux_sym_config_token1,
  [1637] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(950), 1,
      aux_sym_config_token1,
  [1644] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(952), 1,
      aux_sym_config_token1,
  [1651] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(954), 1,
      aux_sym_config_token1,
  [1658] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(956), 1,
      aux_sym_config_token1,
  [1665] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(958), 1,
      aux_sym_config_token1,
  [1672] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(960), 1,
      aux_sym_config_token1,
  [1679] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(962), 1,
      aux_sym_config_token1,
  [1686] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(964), 1,
      aux_sym_config_token1,
  [1693] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(966), 1,
      sym__list_parameter,
  [1700] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(968), 1,
      aux_sym_config_token1,
  [1707] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(970), 1,
      aux_sym_config_token1,
  [1714] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(972), 1,
      sym__verify_parameter,
  [1721] = 2,
    ACTIONS(195), 1,
      sym__space,
    ACTIONS(974), 1,
      aux_sym_config_token1,
  [1728] = 1,
    ACTIONS(976), 1,
      sym__space,
  [1732] = 1,
    ACTIONS(978), 1,
      sym__space,
  [1736] = 1,
    ACTIONS(980), 1,
      sym__space,
  [1740] = 1,
    ACTIONS(982), 1,
      sym__space,
  [1744] = 1,
    ACTIONS(984), 1,
      sym__space,
  [1748] = 1,
    ACTIONS(986), 1,
      sym__space,
  [1752] = 1,
    ACTIONS(988), 1,
      sym__space,
  [1756] = 1,
    ACTIONS(990), 1,
      sym__space,
  [1760] = 1,
    ACTIONS(992), 1,
      sym__space,
  [1764] = 1,
    ACTIONS(994), 1,
      sym__space,
  [1768] = 1,
    ACTIONS(996), 1,
      sym__space,
  [1772] = 1,
    ACTIONS(998), 1,
      sym__space,
  [1776] = 1,
    ACTIONS(1000), 1,
      sym__space,
  [1780] = 1,
    ACTIONS(1002), 1,
      sym__space,
  [1784] = 1,
    ACTIONS(1004), 1,
      sym__space,
  [1788] = 1,
    ACTIONS(1006), 1,
      sym__space,
  [1792] = 1,
    ACTIONS(1008), 1,
      sym__space,
  [1796] = 1,
    ACTIONS(1010), 1,
      sym__space,
  [1800] = 1,
    ACTIONS(1012), 1,
      sym__space,
  [1804] = 1,
    ACTIONS(1014), 1,
      sym__space,
  [1808] = 1,
    ACTIONS(1016), 1,
      sym__space,
  [1812] = 1,
    ACTIONS(1018), 1,
      sym__space,
  [1816] = 1,
    ACTIONS(1020), 1,
      sym__space,
  [1820] = 1,
    ACTIONS(1022), 1,
      sym__space,
  [1824] = 1,
    ACTIONS(1024), 1,
      sym__space,
  [1828] = 1,
    ACTIONS(1026), 1,
      sym__space,
  [1832] = 1,
    ACTIONS(1028), 1,
      sym__space,
  [1836] = 1,
    ACTIONS(1030), 1,
      sym__space,
  [1840] = 1,
    ACTIONS(1032), 1,
      sym__space,
  [1844] = 1,
    ACTIONS(1034), 1,
      sym__space,
  [1848] = 1,
    ACTIONS(1036), 1,
      sym__space,
  [1852] = 1,
    ACTIONS(1038), 1,
      sym__space,
  [1856] = 1,
    ACTIONS(1040), 1,
      sym__space,
  [1860] = 1,
    ACTIONS(1042), 1,
      sym__space,
  [1864] = 1,
    ACTIONS(1044), 1,
      sym__space,
  [1868] = 1,
    ACTIONS(1046), 1,
      sym__space,
  [1872] = 1,
    ACTIONS(1048), 1,
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
  [SMALL_STATE(57)] = 798,
  [SMALL_STATE(58)] = 807,
  [SMALL_STATE(59)] = 816,
  [SMALL_STATE(60)] = 825,
  [SMALL_STATE(61)] = 834,
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
  [SMALL_STATE(188)] = 1732,
  [SMALL_STATE(189)] = 1736,
  [SMALL_STATE(190)] = 1740,
  [SMALL_STATE(191)] = 1744,
  [SMALL_STATE(192)] = 1748,
  [SMALL_STATE(193)] = 1752,
  [SMALL_STATE(194)] = 1756,
  [SMALL_STATE(195)] = 1760,
  [SMALL_STATE(196)] = 1764,
  [SMALL_STATE(197)] = 1768,
  [SMALL_STATE(198)] = 1772,
  [SMALL_STATE(199)] = 1776,
  [SMALL_STATE(200)] = 1780,
  [SMALL_STATE(201)] = 1784,
  [SMALL_STATE(202)] = 1788,
  [SMALL_STATE(203)] = 1792,
  [SMALL_STATE(204)] = 1796,
  [SMALL_STATE(205)] = 1800,
  [SMALL_STATE(206)] = 1804,
  [SMALL_STATE(207)] = 1808,
  [SMALL_STATE(208)] = 1812,
  [SMALL_STATE(209)] = 1816,
  [SMALL_STATE(210)] = 1820,
  [SMALL_STATE(211)] = 1824,
  [SMALL_STATE(212)] = 1828,
  [SMALL_STATE(213)] = 1832,
  [SMALL_STATE(214)] = 1836,
  [SMALL_STATE(215)] = 1840,
  [SMALL_STATE(216)] = 1844,
  [SMALL_STATE(217)] = 1848,
  [SMALL_STATE(218)] = 1852,
  [SMALL_STATE(219)] = 1856,
  [SMALL_STATE(220)] = 1860,
  [SMALL_STATE(221)] = 1864,
  [SMALL_STATE(222)] = 1868,
  [SMALL_STATE(223)] = 1872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(204),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(223),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(69),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(86),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(87),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(88),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(218),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(217),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(89),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(90),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(91),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(100),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(210),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(209),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(208),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(187),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(114),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(134),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(202),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(142),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(144),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(146),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(171),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(181),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(183),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(190),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(189),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(206),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(66),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(207),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(193),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(180),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(175),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(174),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(173),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(194),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(195),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(196),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(138),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(137),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(201),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(203),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(123),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(122),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(115),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(184),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(67),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(68),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(222),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(70),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(71),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(72),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(73),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(74),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(75),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(76),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(77),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(78),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(79),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(80),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(81),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(82),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(83),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(84),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(85),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(219),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(213),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(93),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(94),
  [458] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(95),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(96),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(97),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(98),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(212),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(188),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(102),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(103),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 13),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(64),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(30),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(30),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [532] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(14),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(14),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(185),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(56),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(182),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(55),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 4, .production_id = 9),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 4, .production_id = 9),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 4, .production_id = 9),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(143),
  [621] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(58),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 4, .production_id = 9),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 4, .production_id = 9),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 3, .production_id = 9),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 3, .production_id = 9),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 3, .production_id = 9),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 3, .production_id = 9),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 3, .production_id = 9),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(135),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(50),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(161),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(57),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 1, .production_id = 14),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2, .production_id = 19),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 16),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 11),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 11),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 1, .production_id = 14),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 1, .production_id = 14),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2, .production_id = 19),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 16),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2, .production_id = 19),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textmode, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_textmode, 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_ocb, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_signer_uid, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_key_block, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_include_key_block, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 15),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gnupg, 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openpgp, 1),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880bis, 1),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc2440, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp7, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp8, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 15),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_compliance, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [810] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [928] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [940] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_mode, 3),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_count, 3),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compliance, 3, .production_id = 10),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_rsa_length, 3),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
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
