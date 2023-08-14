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
#define STATE_COUNT 267
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 268
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_recipient = 92,
  anon_sym_hidden_DASHrecipient = 93,
  anon_sym_recipient_DASHfile = 94,
  anon_sym_hidden_DASHrecipient_DASHfile = 95,
  anon_sym_encrypt_DASHto = 96,
  anon_sym_hidden_DASHencrypt_DASHto = 97,
  anon_sym_no_DASHencrypt_DASHto = 98,
  anon_sym_group = 99,
  anon_sym_EQ = 100,
  anon_sym_ungroup = 101,
  anon_sym_no_DASHgroups = 102,
  anon_sym_local_DASHuser = 103,
  anon_sym_sender = 104,
  anon_sym_try_DASHsecret_DASHname = 105,
  anon_sym_try_DASHall_DASHsecrets = 106,
  anon_sym_skip_DASHhidden_DASHrecipients = 107,
  anon_sym_no_DASHskip_DASHhidden_DASHrecipients = 108,
  anon_sym_textmode = 109,
  anon_sym_no_DASHtextmode = 110,
  anon_sym_force_DASHocb = 111,
  anon_sym_force_DASHaead = 112,
  anon_sym_disable_DASHsigner_DASHuid = 113,
  anon_sym_include_DASHkey_DASHblock = 114,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 115,
  anon_sym_personal_DASHcipher_DASHpreferences = 116,
  anon_sym_personal_DASHdigest_DASHpreferences = 117,
  anon_sym_personal_DASHcompress_DASHpreferences = 118,
  anon_sym_s2k_DASHcipher_DASHalgo = 119,
  anon_sym_s2k_DASHdigest_DASHalgo = 120,
  anon_sym_s2k_DASHmode = 121,
  aux_sym_s2k_mode_token1 = 122,
  anon_sym_s2k_DASHcount = 123,
  anon_sym_gnupg = 124,
  anon_sym_openpgp = 125,
  anon_sym_rfc4880 = 126,
  anon_sym_rfc4880bis = 127,
  anon_sym_rfc2440 = 128,
  anon_sym_pgp7 = 129,
  anon_sym_pgp8 = 130,
  anon_sym_compliance = 131,
  sym__compliance = 132,
  anon_sym_min_DASHrsa_DASHlength = 133,
  anon_sym_require_DASHcompliance = 134,
  sym_key = 135,
  sym_url = 136,
  sym_number = 137,
  aux_sym_string_token1 = 138,
  sym_comment = 139,
  sym__cipher_algo = 140,
  sym__hash_algo = 141,
  sym__compression_algo = 142,
  sym__space = 143,
  sym_config = 144,
  sym_unknown_option = 145,
  sym_default_key = 146,
  sym_default_recipient = 147,
  sym_default_recipient_self = 148,
  sym_no_default_recipient = 149,
  sym_verbose = 150,
  sym_no_tty = 151,
  sym_list_options = 152,
  sym_verify_options = 153,
  sym_enable_large_rsa = 154,
  sym_disable_large_rsa = 155,
  sym_enable_dsa2 = 156,
  sym_disable_dsa2 = 157,
  sym_photo_viewer = 158,
  sym__command = 159,
  sym_exec_path = 160,
  sym_keyring = 161,
  sym_primary_keyring = 162,
  sym_trustdb_name = 163,
  sym_display_charset = 164,
  sym_utf8_strings = 165,
  sym_no_utf8_strings = 166,
  sym_compress_level = 167,
  sym_bzip2_compress_level = 168,
  sym_no_compress = 169,
  sym_bzip2_decompress_lowmem = 170,
  sym_mangle_dos_filenames = 171,
  sym_no_mangle_dos_filenames = 172,
  sym_ask_cert_level = 173,
  sym_no_ask_cert_level = 174,
  sym_default_cert_level = 175,
  sym_min_cert_level = 176,
  sym_trusted_key = 177,
  sym_add_desig_revoker = 178,
  sym_trust_model = 179,
  sym_always_trust = 180,
  sym_assert_signer = 181,
  sym_auto_key_locate = 182,
  sym_no_auto_key_locate = 183,
  sym_auto_key_import = 184,
  sym_no_auto_key_import = 185,
  sym_auto_key_retrieve = 186,
  sym_no_auto_key_retrieve = 187,
  sym_keyid_format = 188,
  sym_keyserver = 189,
  sym_completes_needed = 190,
  sym_marginals_needed = 191,
  sym_tofu_default_policy = 192,
  sym_max_cert_depth = 193,
  sym_no_sig_cache = 194,
  sym_auto_check_trustdb = 195,
  sym_no_auto_check_trustdb = 196,
  sym_agent_program = 197,
  sym_dirmngr_program = 198,
  sym_disable_dirmngr = 199,
  sym_no_autostart = 200,
  sym_lock_once = 201,
  sym_lock_multiple = 202,
  sym_lock_never = 203,
  sym_exit_on_status_write_error = 204,
  sym_limit_card_insert_tries = 205,
  sym_no_random_seed_file = 206,
  sym_no_greeting = 207,
  sym_no_secmem_warning = 208,
  sym_no_permission_warning = 209,
  sym_require_secmem = 210,
  sym_no_require_secmem = 211,
  sym_require_cross_verification = 212,
  sym_no_require_cross_verification = 213,
  sym_expert = 214,
  sym_no_expert = 215,
  sym_recipient = 216,
  sym_hidden_recipient = 217,
  sym_recipient_file = 218,
  sym_hidden_recipient_file = 219,
  sym_encrypt_to = 220,
  sym_hidden_encrypt_to = 221,
  sym_no_encrypt_to = 222,
  sym_group = 223,
  sym_ungroup = 224,
  sym_no_groups = 225,
  sym_local_user = 226,
  sym_sender = 227,
  sym_try_secret_name = 228,
  sym_try_all_secrets = 229,
  sym_skip_hidden_recipients = 230,
  sym_no_skip_hidden_recipients = 231,
  sym_textmode = 232,
  sym_no_textmode = 233,
  sym_force_ocb = 234,
  sym_disable_signer_uid = 235,
  sym_include_key_block = 236,
  sym_no_include_key_block = 237,
  sym_personal_cipher_preferences = 238,
  sym_personal_digest_preferences = 239,
  sym_personal_compress_preferences = 240,
  sym_s2k_cipher_algo = 241,
  sym_s2k_digest_algo = 242,
  sym_s2k_mode = 243,
  sym_s2k_count = 244,
  sym_gnupg = 245,
  sym_openpgp = 246,
  sym_rfc4880 = 247,
  sym_rfc4880bis = 248,
  sym_rfc2440 = 249,
  sym_pgp7 = 250,
  sym_pgp8 = 251,
  sym_compliance = 252,
  sym_min_rsa_length = 253,
  sym_require_compliance = 254,
  sym_string = 255,
  aux_sym_config_repeat1 = 256,
  aux_sym_list_options_repeat1 = 257,
  aux_sym_verify_options_repeat1 = 258,
  aux_sym__command_repeat1 = 259,
  aux_sym__command_repeat2 = 260,
  aux_sym__command_repeat3 = 261,
  aux_sym_auto_key_locate_repeat1 = 262,
  aux_sym_personal_cipher_preferences_repeat1 = 263,
  aux_sym_personal_digest_preferences_repeat1 = 264,
  aux_sym_personal_compress_preferences_repeat1 = 265,
  aux_sym_string_repeat1 = 266,
  aux_sym_string_repeat2 = 267,
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
  [anon_sym_recipient] = "option",
  [anon_sym_hidden_DASHrecipient] = "option",
  [anon_sym_recipient_DASHfile] = "option",
  [anon_sym_hidden_DASHrecipient_DASHfile] = "option",
  [anon_sym_encrypt_DASHto] = "option",
  [anon_sym_hidden_DASHencrypt_DASHto] = "option",
  [anon_sym_no_DASHencrypt_DASHto] = "option",
  [anon_sym_group] = "option",
  [anon_sym_EQ] = "=",
  [anon_sym_ungroup] = "option",
  [anon_sym_no_DASHgroups] = "option",
  [anon_sym_local_DASHuser] = "option",
  [anon_sym_sender] = "option",
  [anon_sym_try_DASHsecret_DASHname] = "option",
  [anon_sym_try_DASHall_DASHsecrets] = "option",
  [anon_sym_skip_DASHhidden_DASHrecipients] = "option",
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = "option",
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
  [sym_recipient] = "recipient",
  [sym_hidden_recipient] = "hidden_recipient",
  [sym_recipient_file] = "recipient_file",
  [sym_hidden_recipient_file] = "hidden_recipient_file",
  [sym_encrypt_to] = "encrypt_to",
  [sym_hidden_encrypt_to] = "hidden_encrypt_to",
  [sym_no_encrypt_to] = "no_encrypt_to",
  [sym_group] = "group",
  [sym_ungroup] = "ungroup",
  [sym_no_groups] = "no_groups",
  [sym_local_user] = "local_user",
  [sym_sender] = "sender",
  [sym_try_secret_name] = "try_secret_name",
  [sym_try_all_secrets] = "try_all_secrets",
  [sym_skip_hidden_recipients] = "skip_hidden_recipients",
  [sym_no_skip_hidden_recipients] = "no_skip_hidden_recipients",
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
  [anon_sym_recipient] = aux_sym_unknown_option_token1,
  [anon_sym_hidden_DASHrecipient] = aux_sym_unknown_option_token1,
  [anon_sym_recipient_DASHfile] = aux_sym_unknown_option_token1,
  [anon_sym_hidden_DASHrecipient_DASHfile] = aux_sym_unknown_option_token1,
  [anon_sym_encrypt_DASHto] = aux_sym_unknown_option_token1,
  [anon_sym_hidden_DASHencrypt_DASHto] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHencrypt_DASHto] = aux_sym_unknown_option_token1,
  [anon_sym_group] = aux_sym_unknown_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ungroup] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHgroups] = aux_sym_unknown_option_token1,
  [anon_sym_local_DASHuser] = aux_sym_unknown_option_token1,
  [anon_sym_sender] = aux_sym_unknown_option_token1,
  [anon_sym_try_DASHsecret_DASHname] = aux_sym_unknown_option_token1,
  [anon_sym_try_DASHall_DASHsecrets] = aux_sym_unknown_option_token1,
  [anon_sym_skip_DASHhidden_DASHrecipients] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = aux_sym_unknown_option_token1,
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
  [sym_recipient] = sym_recipient,
  [sym_hidden_recipient] = sym_hidden_recipient,
  [sym_recipient_file] = sym_recipient_file,
  [sym_hidden_recipient_file] = sym_hidden_recipient_file,
  [sym_encrypt_to] = sym_encrypt_to,
  [sym_hidden_encrypt_to] = sym_hidden_encrypt_to,
  [sym_no_encrypt_to] = sym_no_encrypt_to,
  [sym_group] = sym_group,
  [sym_ungroup] = sym_ungroup,
  [sym_no_groups] = sym_no_groups,
  [sym_local_user] = sym_local_user,
  [sym_sender] = sym_sender,
  [sym_try_secret_name] = sym_try_secret_name,
  [sym_try_all_secrets] = sym_try_all_secrets,
  [sym_skip_hidden_recipients] = sym_skip_hidden_recipients,
  [sym_no_skip_hidden_recipients] = sym_no_skip_hidden_recipients,
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
  [anon_sym_recipient] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hidden_DASHrecipient] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_recipient_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hidden_DASHrecipient_DASHfile] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_encrypt_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hidden_DASHencrypt_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHencrypt_DASHto] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHgroups] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_local_DASHuser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sender] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_try_DASHsecret_DASHname] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_try_DASHall_DASHsecrets] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = {
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
  [sym_recipient] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_recipient] = {
    .visible = true,
    .named = true,
  },
  [sym_recipient_file] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_recipient_file] = {
    .visible = true,
    .named = true,
  },
  [sym_encrypt_to] = {
    .visible = true,
    .named = true,
  },
  [sym_hidden_encrypt_to] = {
    .visible = true,
    .named = true,
  },
  [sym_no_encrypt_to] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_ungroup] = {
    .visible = true,
    .named = true,
  },
  [sym_no_groups] = {
    .visible = true,
    .named = true,
  },
  [sym_local_user] = {
    .visible = true,
    .named = true,
  },
  [sym_sender] = {
    .visible = true,
    .named = true,
  },
  [sym_try_secret_name] = {
    .visible = true,
    .named = true,
  },
  [sym_try_all_secrets] = {
    .visible = true,
    .named = true,
  },
  [sym_skip_hidden_recipients] = {
    .visible = true,
    .named = true,
  },
  [sym_no_skip_hidden_recipients] = {
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
  field_name = 8,
  field_parameter = 9,
  field_policy = 10,
  field_value = 11,
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
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_policy] = "policy",
  [field_value] = "value",
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
  [19] = {.index = 20, .length = 2},
  [20] = {.index = 22, .length = 1},
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
    {field_name, 2},
    {field_value, 4},
  [22] =
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
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
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
      if (eof) ADVANCE(422);
      if (lookahead == '"') ADVANCE(1507);
      if (lookahead == '%') ADVANCE(1506);
      if (lookahead == '\'') ADVANCE(1513);
      if (lookahead == ',') ADVANCE(1496);
      if (lookahead == '2') ADVANCE(1487);
      if (lookahead == '=') ADVANCE(1595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1509);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1487);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      if (lookahead != 0) ADVANCE(1505);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(423);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (lookahead != 0) ADVANCE(1505);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1496);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == 'B') ADVANCE(104);
      if (lookahead == 'U') ADVANCE(260);
      if (lookahead == 'Z') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'g') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1529);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1496);
      if (lookahead == '0') ADVANCE(392);
      if (lookahead == 'A') ADVANCE(81);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead == 'g') ADVANCE(257);
      if (lookahead == 'n') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1496);
      if (lookahead == '0') ADVANCE(392);
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
          lookahead == ' ') ADVANCE(1674);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1507);
      if (lookahead == '%') ADVANCE(1506);
      if (lookahead == '\'') ADVANCE(1513);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1505);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1507);
      if (lookahead == '%') ADVANCE(1511);
      if (lookahead == '\\') ADVANCE(1510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1509);
      if (lookahead != 0) ADVANCE(1509);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1507);
      if (lookahead == '\\') ADVANCE(1510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1509);
      if (lookahead != 0) ADVANCE(1509);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1508);
      if (lookahead == '\'') ADVANCE(1514);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1668);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1517);
      if (lookahead == '\'') ADVANCE(1513);
      if (lookahead == '\\') ADVANCE(1516);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1515);
      if (lookahead != 0) ADVANCE(1515);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(1513);
      if (lookahead == '\\') ADVANCE(1516);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1515);
      if (lookahead != 0) ADVANCE(1515);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '.') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(255);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(337);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(312);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(374);
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
      if (lookahead == '-') ADVANCE(375);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(376);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(383);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 34:
      if (lookahead == '/') ADVANCE(420);
      END_STATE();
    case 35:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(1672);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(1627);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(1628);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(1666);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(1667);
      END_STATE();
    case 40:
      if (lookahead == '0') ADVANCE(390);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      END_STATE();
    case 41:
      if (lookahead == '1') ADVANCE(1672);
      if (lookahead == '2') ADVANCE(48);
      if (lookahead == '3') ADVANCE(62);
      if (lookahead == '5') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == '1') ADVANCE(1525);
      if (lookahead == '2') ADVANCE(1524);
      END_STATE();
    case 44:
      if (lookahead == '1') ADVANCE(52);
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == '1') ADVANCE(1529);
      END_STATE();
    case 46:
      if (lookahead == '1') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == '2') ADVANCE(1672);
      END_STATE();
    case 48:
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == '5') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == '2') ADVANCE(1670);
      END_STATE();
    case 50:
      if (lookahead == '2') ADVANCE(1673);
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
      if (lookahead == '4') ADVANCE(1672);
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
      if (lookahead == '5') ADVANCE(1670);
      END_STATE();
    case 58:
      if (lookahead == '5') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == '6') ADVANCE(1672);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(36);
      END_STATE();
    case 61:
      if (lookahead == '6') ADVANCE(1670);
      END_STATE();
    case 62:
      if (lookahead == '8') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == '8') ADVANCE(1524);
      END_STATE();
    case 64:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == '8') ADVANCE(1670);
      END_STATE();
    case 66:
      if (lookahead == '8') ADVANCE(23);
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
      if (lookahead == ':') ADVANCE(1542);
      END_STATE();
    case 75:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 77:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(1673);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
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
      if (lookahead == 'H') ADVANCE(1670);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 96:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(1673);
      END_STATE();
    case 99:
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 100:
      if (lookahead == 'S') ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(311);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(369);
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
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(357);
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
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 126:
      if (lookahead == 'b') ADVANCE(304);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(244);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(1545);
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
      if (lookahead == 'd') ADVANCE(1550);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(1673);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(1567);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(15);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(1672);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(1499);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(1670);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(1497);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(1673);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(320);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(319);
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
      if (lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 183:
      if (lookahead == 'f') ADVANCE(368);
      END_STATE();
    case 184:
      if (lookahead == 'f') ADVANCE(111);
      END_STATE();
    case 185:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 186:
      if (lookahead == 'f') ADVANCE(309);
      END_STATE();
    case 187:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 188:
      if (lookahead == 'g') ADVANCE(1627);
      END_STATE();
    case 189:
      if (lookahead == 'g') ADVANCE(1497);
      END_STATE();
    case 190:
      if (lookahead == 'g') ADVANCE(1558);
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
      if (lookahead == 'g') ADVANCE(17);
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
      if (lookahead == 'h') ADVANCE(292);
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
      if (lookahead == 'i') ADVANCE(277);
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
      if (lookahead == 'i') ADVANCE(324);
      END_STATE();
    case 217:
      if (lookahead == 'i') ADVANCE(146);
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
      if (lookahead == 'k') ADVANCE(1567);
      END_STATE();
    case 228:
      if (lookahead == 'k') ADVANCE(138);
      END_STATE();
    case 229:
      if (lookahead == 'k') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(284);
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
      if (lookahead == 'k') ADVANCE(172);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 235:
      if (lookahead == 'l') ADVANCE(1550);
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
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 242:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 's') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'l') ADVANCE(173);
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
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 251:
      if (lookahead == 'm') ADVANCE(308);
      END_STATE();
    case 252:
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 253:
      if (lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 254:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 255:
      if (lookahead == 'n') ADVANCE(284);
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
      if (lookahead == 'n') ADVANCE(307);
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
      if (lookahead == 'n') ADVANCE(279);
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
      if (lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 275:
      if (lookahead == 'o') ADVANCE(1567);
      END_STATE();
    case 276:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 277:
      if (lookahead == 'o') ADVANCE(262);
      END_STATE();
    case 278:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 279:
      if (lookahead == 'o') ADVANCE(388);
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
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 284:
      if (lookahead == 'o') ADVANCE(359);
      END_STATE();
    case 285:
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 286:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 287:
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 288:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 289:
      if (lookahead == 'o') ADVANCE(360);
      END_STATE();
    case 290:
      if (lookahead == 'o') ADVANCE(387);
      END_STATE();
    case 291:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 292:
      if (lookahead == 'o') ADVANCE(322);
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
      if (lookahead == 'p') ADVANCE(1545);
      END_STATE();
    case 300:
      if (lookahead == 'p') ADVANCE(1551);
      END_STATE();
    case 301:
      if (lookahead == 'p') ADVANCE(409);
      END_STATE();
    case 302:
      if (lookahead == 'p') ADVANCE(1627);
      END_STATE();
    case 303:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 304:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 305:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 306:
      if (lookahead == 'p') ADVANCE(216);
      END_STATE();
    case 307:
      if (lookahead == 'p') ADVANCE(193);
      END_STATE();
    case 308:
      if (lookahead == 'p') ADVANCE(325);
      END_STATE();
    case 309:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 310:
      if (lookahead == 'q') ADVANCE(405);
      END_STATE();
    case 311:
      if (lookahead == 'r') ADVANCE(1550);
      END_STATE();
    case 312:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 313:
      if (lookahead == 'r') ADVANCE(378);
      END_STATE();
    case 314:
      if (lookahead == 'r') ADVANCE(1543);
      END_STATE();
    case 315:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 316:
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 317:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 318:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 319:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 320:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 321:
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(182);
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
      if (lookahead == 'r') ADVANCE(174);
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
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 331:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 332:
      if (lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 333:
      if (lookahead == 's') ADVANCE(1550);
      END_STATE();
    case 334:
      if (lookahead == 's') ADVANCE(1499);
      END_STATE();
    case 335:
      if (lookahead == 's') ADVANCE(1627);
      END_STATE();
    case 336:
      if (lookahead == 's') ADVANCE(1497);
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
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 343:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 344:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 345:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 346:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 348:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 349:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 350:
      if (lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 351:
      if (lookahead == 't') ADVANCE(1550);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(1558);
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
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 360:
      if (lookahead == 't') ADVANCE(285);
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
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 366:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 367:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 368:
      if (lookahead == 'u') ADVANCE(1546);
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
      if (lookahead == 'u') ADVANCE(318);
      END_STATE();
    case 375:
      if (lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 376:
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 377:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 378:
      if (lookahead == 'v') ADVANCE(163);
      END_STATE();
    case 379:
      if (lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 380:
      if (lookahead == 'v') ADVANCE(177);
      END_STATE();
    case 381:
      if (lookahead == 'v') ADVANCE(335);
      END_STATE();
    case 382:
      if (lookahead == 'v') ADVANCE(165);
      END_STATE();
    case 383:
      if (lookahead == 'v') ADVANCE(123);
      END_STATE();
    case 384:
      if (lookahead == 'v') ADVANCE(180);
      END_STATE();
    case 385:
      if (lookahead == 'w') ADVANCE(119);
      END_STATE();
    case 386:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 387:
      if (lookahead == 'w') ADVANCE(16);
      END_STATE();
    case 388:
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 389:
      if (lookahead == 'x') ADVANCE(1497);
      END_STATE();
    case 390:
      if (lookahead == 'x') ADVANCE(243);
      END_STATE();
    case 391:
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 392:
      if (lookahead == 'x') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 393:
      if (lookahead == 'y') ADVANCE(1499);
      END_STATE();
    case 394:
      if (lookahead == 'y') ADVANCE(321);
      END_STATE();
    case 395:
      if (lookahead == 'y') ADVANCE(1497);
      END_STATE();
    case 396:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 397:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 398:
      if (lookahead == 'y') ADVANCE(25);
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
      if (lookahead == '}') ADVANCE(1512);
      END_STATE();
    case 406:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(1617);
      END_STATE();
    case 407:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1538);
      END_STATE();
    case 408:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1488);
      END_STATE();
    case 409:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1627);
      END_STATE();
    case 410:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1664);
      END_STATE();
    case 411:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1665);
      END_STATE();
    case 412:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 413:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1663);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 420:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 421:
      if (eof) ADVANCE(422);
      if (lookahead == '\n') ADVANCE(423);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(1669);
      if (lookahead == '=') ADVANCE(1595);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'b') ADVANCE(1486);
      if (lookahead == 'c') ADVANCE(1116);
      if (lookahead == 'd') ADVANCE(677);
      if (lookahead == 'e') ADVANCE(1057);
      if (lookahead == 'f') ADVANCE(1117);
      if (lookahead == 'g') ADVANCE(1058);
      if (lookahead == 'h') ADVANCE(900);
      if (lookahead == 'i') ADVANCE(1059);
      if (lookahead == 'k') ADVANCE(678);
      if (lookahead == 'l') ADVANCE(899);
      if (lookahead == 'm') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead == 'o') ADVANCE(1186);
      if (lookahead == 'p') ADVANCE(700);
      if (lookahead == 'r') ADVANCE(679);
      if (lookahead == 's') ADVANCE(521);
      if (lookahead == 't') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(1060);
      if (lookahead == 'v') ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(587);
      if (lookahead == 'e') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(640);
      if (lookahead == 's') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1623);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1621);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(970);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead == 'k') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(527);
      if (lookahead == '4') ADVANCE(530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '7') ADVANCE(1624);
      if (lookahead == '8') ADVANCE(1625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == 'c') ADVANCE(1223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1331);
      if (lookahead == 'c') ADVANCE(1143);
      if (lookahead == 'd') ADVANCE(834);
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == 'g') ADVANCE(1211);
      if (lookahead == 'i') ADVANCE(1114);
      if (lookahead == 'm') ADVANCE(548);
      if (lookahead == 'p') ADVANCE(720);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == 's') ADVANCE(714);
      if (lookahead == 't') ADVANCE(835);
      if (lookahead == 'u') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(994);
      if (lookahead == 'k') ADVANCE(429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1004);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead == 'o') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1066);
      if (lookahead == 'e') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'p') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1150);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(914);
      if (lookahead == 'd') ADVANCE(906);
      if (lookahead == 'm') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(892);
      if (lookahead == 'k') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(952);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1292);
      if (lookahead == 's') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(907);
      if (lookahead == 'q') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1161);
      if (lookahead == 'd') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(816);
      if (lookahead == 'r') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(828);
      if (lookahead == 'k') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(897);
      if (lookahead == 'k') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(648);
      if (lookahead == 'g') ADVANCE(703);
      if (lookahead == 'l') ADVANCE(1461);
      if (lookahead == 's') ADVANCE(969);
      if (lookahead == 'u') ADVANCE(1370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(919);
      if (lookahead == 'l') ADVANCE(576);
      if (lookahead == 's') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1314);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == 'i') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'f') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1467);
      if (lookahead == 'o') ADVANCE(844);
      if (lookahead == 'r') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1209);
      if (lookahead == 'g') ADVANCE(1166);
      if (lookahead == 'h') ADVANCE(1158);
      if (lookahead == 'r') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(603);
      if (lookahead == 'i') ADVANCE(1374);
      if (lookahead == 'p') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1380);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead == 'i') ADVANCE(882);
      if (lookahead == 'k') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead == 'o') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1112);
      if (lookahead == 'r') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1468);
      if (lookahead == 't') ADVANCE(1470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1029);
      if (lookahead == 'o') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == 'o') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1276);
      if (lookahead == 's') ADVANCE(540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(904);
      if (lookahead == 's') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1035);
      if (lookahead == 'l') ADVANCE(1136);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1193);
      if (lookahead == 'o') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'l') ADVANCE(1160);
      if (lookahead == 'r') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(447);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(708);
      if (lookahead == 'r') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(930);
      if (lookahead == 's') ADVANCE(1376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1431);
      if (lookahead == 'n') ADVANCE(804);
      if (lookahead == 'o') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead == 'x') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1427);
      if (lookahead == 'r') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(866);
      if (lookahead == 't') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(880);
      if (lookahead == 'r') ADVANCE(881);
      if (lookahead == 'x') ADVANCE(501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(636);
      if (lookahead == 'x') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1036);
      if (lookahead == 'r') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'q') ADVANCE(1445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead == 'u') ADVANCE(1378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1309);
      if (lookahead == 'y') ADVANCE(427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'z') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1487);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_unknown_option_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1488);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1518);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1668);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(404);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1518);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1668);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(404);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1518);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_keyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1524);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token1);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token2);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(297);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_expert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_ungroup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_sender);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_textmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_s2k_mode_token1);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_gnupg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_openpgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_pgp7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_pgp8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym__compliance);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym__compliance);
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1487);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1631);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1632);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1633);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1634);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1635);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1636);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1637);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1638);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1639);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1640);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1641);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1642);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1643);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1644);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1645);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1646);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1647);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1648);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1649);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1650);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1651);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1652);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1653);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1654);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1655);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1656);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1657);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1658);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1659);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1660);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1661);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1662);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(420);
      if (lookahead == '.') ADVANCE(410);
      if (lookahead == ':') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(1664);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1665);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1667);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1668);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1669);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(sym__cipher_algo);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(sym__cipher_algo);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '2') ADVANCE(58);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(sym__hash_algo);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(sym__compression_algo);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 421},
  [2] = {.lex_state = 421},
  [3] = {.lex_state = 421},
  [4] = {.lex_state = 421},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 421},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 421},
  [79] = {.lex_state = 421},
  [80] = {.lex_state = 421},
  [81] = {.lex_state = 421},
  [82] = {.lex_state = 421},
  [83] = {.lex_state = 421},
  [84] = {.lex_state = 421},
  [85] = {.lex_state = 421},
  [86] = {.lex_state = 421},
  [87] = {.lex_state = 421},
  [88] = {.lex_state = 421},
  [89] = {.lex_state = 421},
  [90] = {.lex_state = 421},
  [91] = {.lex_state = 421},
  [92] = {.lex_state = 421},
  [93] = {.lex_state = 421},
  [94] = {.lex_state = 421},
  [95] = {.lex_state = 421},
  [96] = {.lex_state = 421},
  [97] = {.lex_state = 421},
  [98] = {.lex_state = 421},
  [99] = {.lex_state = 421},
  [100] = {.lex_state = 421},
  [101] = {.lex_state = 421},
  [102] = {.lex_state = 421},
  [103] = {.lex_state = 421},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 421},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 421},
  [108] = {.lex_state = 421},
  [109] = {.lex_state = 421},
  [110] = {.lex_state = 421},
  [111] = {.lex_state = 421},
  [112] = {.lex_state = 421},
  [113] = {.lex_state = 421},
  [114] = {.lex_state = 421},
  [115] = {.lex_state = 421},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 421},
  [118] = {.lex_state = 421},
  [119] = {.lex_state = 421},
  [120] = {.lex_state = 408},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 407},
  [128] = {.lex_state = 407},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 421},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 421},
  [133] = {.lex_state = 421},
  [134] = {.lex_state = 40},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 39},
  [140] = {.lex_state = 421},
  [141] = {.lex_state = 421},
  [142] = {.lex_state = 39},
  [143] = {.lex_state = 421},
  [144] = {.lex_state = 421},
  [145] = {.lex_state = 421},
  [146] = {.lex_state = 421},
  [147] = {.lex_state = 421},
  [148] = {.lex_state = 421},
  [149] = {.lex_state = 421},
  [150] = {.lex_state = 421},
  [151] = {.lex_state = 421},
  [152] = {.lex_state = 421},
  [153] = {.lex_state = 421},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 406},
  [160] = {.lex_state = 39},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 39},
  [163] = {.lex_state = 421},
  [164] = {.lex_state = 421},
  [165] = {.lex_state = 421},
  [166] = {.lex_state = 421},
  [167] = {.lex_state = 421},
  [168] = {.lex_state = 421},
  [169] = {.lex_state = 421},
  [170] = {.lex_state = 421},
  [171] = {.lex_state = 421},
  [172] = {.lex_state = 421},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 421},
  [176] = {.lex_state = 421},
  [177] = {.lex_state = 421},
  [178] = {.lex_state = 421},
  [179] = {.lex_state = 421},
  [180] = {.lex_state = 421},
  [181] = {.lex_state = 421},
  [182] = {.lex_state = 421},
  [183] = {.lex_state = 421},
  [184] = {.lex_state = 421},
  [185] = {.lex_state = 421},
  [186] = {.lex_state = 421},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 421},
  [189] = {.lex_state = 421},
  [190] = {.lex_state = 421},
  [191] = {.lex_state = 421},
  [192] = {.lex_state = 421},
  [193] = {.lex_state = 421},
  [194] = {.lex_state = 421},
  [195] = {.lex_state = 421},
  [196] = {.lex_state = 421},
  [197] = {.lex_state = 421},
  [198] = {.lex_state = 421},
  [199] = {.lex_state = 421},
  [200] = {.lex_state = 421},
  [201] = {.lex_state = 421},
  [202] = {.lex_state = 421},
  [203] = {.lex_state = 421},
  [204] = {.lex_state = 421},
  [205] = {.lex_state = 421},
  [206] = {.lex_state = 421},
  [207] = {.lex_state = 421},
  [208] = {.lex_state = 421},
  [209] = {.lex_state = 421},
  [210] = {.lex_state = 421},
  [211] = {.lex_state = 421},
  [212] = {.lex_state = 421},
  [213] = {.lex_state = 421},
  [214] = {.lex_state = 421},
  [215] = {.lex_state = 421},
  [216] = {.lex_state = 421},
  [217] = {.lex_state = 421},
  [218] = {.lex_state = 421},
  [219] = {.lex_state = 421},
  [220] = {.lex_state = 421},
  [221] = {.lex_state = 421},
  [222] = {.lex_state = 421},
  [223] = {.lex_state = 421},
  [224] = {.lex_state = 421},
  [225] = {.lex_state = 421},
  [226] = {.lex_state = 421},
  [227] = {.lex_state = 421},
  [228] = {.lex_state = 421},
  [229] = {.lex_state = 421},
  [230] = {.lex_state = 421},
  [231] = {.lex_state = 421},
  [232] = {.lex_state = 421},
  [233] = {.lex_state = 421},
  [234] = {.lex_state = 421},
  [235] = {.lex_state = 421},
  [236] = {.lex_state = 421},
  [237] = {.lex_state = 421},
  [238] = {.lex_state = 421},
  [239] = {.lex_state = 421},
  [240] = {.lex_state = 421},
  [241] = {.lex_state = 421},
  [242] = {.lex_state = 421},
  [243] = {.lex_state = 421},
  [244] = {.lex_state = 421},
  [245] = {.lex_state = 421},
  [246] = {.lex_state = 421},
  [247] = {.lex_state = 421},
  [248] = {.lex_state = 421},
  [249] = {.lex_state = 421},
  [250] = {.lex_state = 421},
  [251] = {.lex_state = 421},
  [252] = {.lex_state = 421},
  [253] = {.lex_state = 421},
  [254] = {.lex_state = 421},
  [255] = {.lex_state = 421},
  [256] = {.lex_state = 421},
  [257] = {.lex_state = 421},
  [258] = {.lex_state = 421},
  [259] = {.lex_state = 421},
  [260] = {.lex_state = 421},
  [261] = {.lex_state = 421},
  [262] = {.lex_state = 421},
  [263] = {.lex_state = 421},
  [264] = {.lex_state = 421},
  [265] = {.lex_state = 421},
  [266] = {.lex_state = 421},
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
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_s2k_mode_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(119),
    [sym_unknown_option] = STATE(118),
    [sym_default_key] = STATE(118),
    [sym_default_recipient] = STATE(118),
    [sym_default_recipient_self] = STATE(118),
    [sym_no_default_recipient] = STATE(118),
    [sym_verbose] = STATE(118),
    [sym_no_tty] = STATE(118),
    [sym_list_options] = STATE(118),
    [sym_verify_options] = STATE(118),
    [sym_enable_large_rsa] = STATE(118),
    [sym_disable_large_rsa] = STATE(118),
    [sym_enable_dsa2] = STATE(118),
    [sym_disable_dsa2] = STATE(118),
    [sym_photo_viewer] = STATE(118),
    [sym_exec_path] = STATE(118),
    [sym_keyring] = STATE(118),
    [sym_primary_keyring] = STATE(118),
    [sym_trustdb_name] = STATE(118),
    [sym_display_charset] = STATE(118),
    [sym_utf8_strings] = STATE(118),
    [sym_no_utf8_strings] = STATE(118),
    [sym_compress_level] = STATE(118),
    [sym_bzip2_compress_level] = STATE(118),
    [sym_no_compress] = STATE(118),
    [sym_bzip2_decompress_lowmem] = STATE(118),
    [sym_mangle_dos_filenames] = STATE(118),
    [sym_no_mangle_dos_filenames] = STATE(118),
    [sym_ask_cert_level] = STATE(118),
    [sym_no_ask_cert_level] = STATE(118),
    [sym_default_cert_level] = STATE(118),
    [sym_min_cert_level] = STATE(118),
    [sym_trusted_key] = STATE(118),
    [sym_add_desig_revoker] = STATE(118),
    [sym_trust_model] = STATE(118),
    [sym_always_trust] = STATE(118),
    [sym_assert_signer] = STATE(118),
    [sym_auto_key_locate] = STATE(118),
    [sym_no_auto_key_locate] = STATE(118),
    [sym_auto_key_import] = STATE(118),
    [sym_no_auto_key_import] = STATE(118),
    [sym_auto_key_retrieve] = STATE(118),
    [sym_no_auto_key_retrieve] = STATE(118),
    [sym_keyid_format] = STATE(118),
    [sym_keyserver] = STATE(118),
    [sym_completes_needed] = STATE(118),
    [sym_marginals_needed] = STATE(118),
    [sym_tofu_default_policy] = STATE(118),
    [sym_max_cert_depth] = STATE(118),
    [sym_no_sig_cache] = STATE(118),
    [sym_auto_check_trustdb] = STATE(118),
    [sym_no_auto_check_trustdb] = STATE(118),
    [sym_agent_program] = STATE(118),
    [sym_dirmngr_program] = STATE(118),
    [sym_disable_dirmngr] = STATE(118),
    [sym_no_autostart] = STATE(118),
    [sym_lock_once] = STATE(118),
    [sym_lock_multiple] = STATE(118),
    [sym_lock_never] = STATE(118),
    [sym_exit_on_status_write_error] = STATE(118),
    [sym_limit_card_insert_tries] = STATE(118),
    [sym_no_random_seed_file] = STATE(118),
    [sym_no_greeting] = STATE(118),
    [sym_no_secmem_warning] = STATE(118),
    [sym_no_permission_warning] = STATE(118),
    [sym_require_secmem] = STATE(118),
    [sym_no_require_secmem] = STATE(118),
    [sym_require_cross_verification] = STATE(118),
    [sym_no_require_cross_verification] = STATE(118),
    [sym_expert] = STATE(118),
    [sym_no_expert] = STATE(118),
    [sym_recipient] = STATE(118),
    [sym_hidden_recipient] = STATE(118),
    [sym_recipient_file] = STATE(118),
    [sym_hidden_recipient_file] = STATE(118),
    [sym_encrypt_to] = STATE(118),
    [sym_hidden_encrypt_to] = STATE(118),
    [sym_no_encrypt_to] = STATE(118),
    [sym_group] = STATE(118),
    [sym_ungroup] = STATE(118),
    [sym_no_groups] = STATE(118),
    [sym_local_user] = STATE(118),
    [sym_sender] = STATE(118),
    [sym_try_secret_name] = STATE(118),
    [sym_try_all_secrets] = STATE(118),
    [sym_skip_hidden_recipients] = STATE(118),
    [sym_no_skip_hidden_recipients] = STATE(118),
    [sym_textmode] = STATE(118),
    [sym_no_textmode] = STATE(118),
    [sym_force_ocb] = STATE(118),
    [sym_disable_signer_uid] = STATE(118),
    [sym_include_key_block] = STATE(118),
    [sym_no_include_key_block] = STATE(118),
    [sym_personal_cipher_preferences] = STATE(118),
    [sym_personal_digest_preferences] = STATE(118),
    [sym_personal_compress_preferences] = STATE(118),
    [sym_s2k_cipher_algo] = STATE(118),
    [sym_s2k_digest_algo] = STATE(118),
    [sym_s2k_mode] = STATE(118),
    [sym_s2k_count] = STATE(118),
    [sym_gnupg] = STATE(118),
    [sym_openpgp] = STATE(118),
    [sym_rfc4880] = STATE(118),
    [sym_rfc4880bis] = STATE(118),
    [sym_rfc2440] = STATE(118),
    [sym_pgp7] = STATE(118),
    [sym_pgp8] = STATE(118),
    [sym_compliance] = STATE(118),
    [sym_min_rsa_length] = STATE(118),
    [sym_require_compliance] = STATE(118),
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
    [anon_sym_recipient] = ACTIONS(149),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(151),
    [anon_sym_recipient_DASHfile] = ACTIONS(153),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(155),
    [anon_sym_encrypt_DASHto] = ACTIONS(157),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(159),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(161),
    [anon_sym_group] = ACTIONS(163),
    [anon_sym_ungroup] = ACTIONS(165),
    [anon_sym_no_DASHgroups] = ACTIONS(167),
    [anon_sym_local_DASHuser] = ACTIONS(169),
    [anon_sym_sender] = ACTIONS(171),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(173),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(175),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(177),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(179),
    [anon_sym_textmode] = ACTIONS(181),
    [anon_sym_no_DASHtextmode] = ACTIONS(183),
    [anon_sym_force_DASHocb] = ACTIONS(185),
    [anon_sym_force_DASHaead] = ACTIONS(185),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(187),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(189),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(191),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(193),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(195),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(197),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(199),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(201),
    [anon_sym_s2k_DASHmode] = ACTIONS(203),
    [anon_sym_s2k_DASHcount] = ACTIONS(205),
    [anon_sym_gnupg] = ACTIONS(207),
    [anon_sym_openpgp] = ACTIONS(209),
    [anon_sym_rfc4880] = ACTIONS(211),
    [anon_sym_rfc4880bis] = ACTIONS(213),
    [anon_sym_rfc2440] = ACTIONS(215),
    [anon_sym_pgp7] = ACTIONS(217),
    [anon_sym_pgp8] = ACTIONS(219),
    [anon_sym_compliance] = ACTIONS(221),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(223),
    [anon_sym_require_DASHcompliance] = ACTIONS(225),
    [sym_comment] = ACTIONS(227),
    [sym__space] = ACTIONS(229),
  },
  [2] = {
    [sym_unknown_option] = STATE(118),
    [sym_default_key] = STATE(118),
    [sym_default_recipient] = STATE(118),
    [sym_default_recipient_self] = STATE(118),
    [sym_no_default_recipient] = STATE(118),
    [sym_verbose] = STATE(118),
    [sym_no_tty] = STATE(118),
    [sym_list_options] = STATE(118),
    [sym_verify_options] = STATE(118),
    [sym_enable_large_rsa] = STATE(118),
    [sym_disable_large_rsa] = STATE(118),
    [sym_enable_dsa2] = STATE(118),
    [sym_disable_dsa2] = STATE(118),
    [sym_photo_viewer] = STATE(118),
    [sym_exec_path] = STATE(118),
    [sym_keyring] = STATE(118),
    [sym_primary_keyring] = STATE(118),
    [sym_trustdb_name] = STATE(118),
    [sym_display_charset] = STATE(118),
    [sym_utf8_strings] = STATE(118),
    [sym_no_utf8_strings] = STATE(118),
    [sym_compress_level] = STATE(118),
    [sym_bzip2_compress_level] = STATE(118),
    [sym_no_compress] = STATE(118),
    [sym_bzip2_decompress_lowmem] = STATE(118),
    [sym_mangle_dos_filenames] = STATE(118),
    [sym_no_mangle_dos_filenames] = STATE(118),
    [sym_ask_cert_level] = STATE(118),
    [sym_no_ask_cert_level] = STATE(118),
    [sym_default_cert_level] = STATE(118),
    [sym_min_cert_level] = STATE(118),
    [sym_trusted_key] = STATE(118),
    [sym_add_desig_revoker] = STATE(118),
    [sym_trust_model] = STATE(118),
    [sym_always_trust] = STATE(118),
    [sym_assert_signer] = STATE(118),
    [sym_auto_key_locate] = STATE(118),
    [sym_no_auto_key_locate] = STATE(118),
    [sym_auto_key_import] = STATE(118),
    [sym_no_auto_key_import] = STATE(118),
    [sym_auto_key_retrieve] = STATE(118),
    [sym_no_auto_key_retrieve] = STATE(118),
    [sym_keyid_format] = STATE(118),
    [sym_keyserver] = STATE(118),
    [sym_completes_needed] = STATE(118),
    [sym_marginals_needed] = STATE(118),
    [sym_tofu_default_policy] = STATE(118),
    [sym_max_cert_depth] = STATE(118),
    [sym_no_sig_cache] = STATE(118),
    [sym_auto_check_trustdb] = STATE(118),
    [sym_no_auto_check_trustdb] = STATE(118),
    [sym_agent_program] = STATE(118),
    [sym_dirmngr_program] = STATE(118),
    [sym_disable_dirmngr] = STATE(118),
    [sym_no_autostart] = STATE(118),
    [sym_lock_once] = STATE(118),
    [sym_lock_multiple] = STATE(118),
    [sym_lock_never] = STATE(118),
    [sym_exit_on_status_write_error] = STATE(118),
    [sym_limit_card_insert_tries] = STATE(118),
    [sym_no_random_seed_file] = STATE(118),
    [sym_no_greeting] = STATE(118),
    [sym_no_secmem_warning] = STATE(118),
    [sym_no_permission_warning] = STATE(118),
    [sym_require_secmem] = STATE(118),
    [sym_no_require_secmem] = STATE(118),
    [sym_require_cross_verification] = STATE(118),
    [sym_no_require_cross_verification] = STATE(118),
    [sym_expert] = STATE(118),
    [sym_no_expert] = STATE(118),
    [sym_recipient] = STATE(118),
    [sym_hidden_recipient] = STATE(118),
    [sym_recipient_file] = STATE(118),
    [sym_hidden_recipient_file] = STATE(118),
    [sym_encrypt_to] = STATE(118),
    [sym_hidden_encrypt_to] = STATE(118),
    [sym_no_encrypt_to] = STATE(118),
    [sym_group] = STATE(118),
    [sym_ungroup] = STATE(118),
    [sym_no_groups] = STATE(118),
    [sym_local_user] = STATE(118),
    [sym_sender] = STATE(118),
    [sym_try_secret_name] = STATE(118),
    [sym_try_all_secrets] = STATE(118),
    [sym_skip_hidden_recipients] = STATE(118),
    [sym_no_skip_hidden_recipients] = STATE(118),
    [sym_textmode] = STATE(118),
    [sym_no_textmode] = STATE(118),
    [sym_force_ocb] = STATE(118),
    [sym_disable_signer_uid] = STATE(118),
    [sym_include_key_block] = STATE(118),
    [sym_no_include_key_block] = STATE(118),
    [sym_personal_cipher_preferences] = STATE(118),
    [sym_personal_digest_preferences] = STATE(118),
    [sym_personal_compress_preferences] = STATE(118),
    [sym_s2k_cipher_algo] = STATE(118),
    [sym_s2k_digest_algo] = STATE(118),
    [sym_s2k_mode] = STATE(118),
    [sym_s2k_count] = STATE(118),
    [sym_gnupg] = STATE(118),
    [sym_openpgp] = STATE(118),
    [sym_rfc4880] = STATE(118),
    [sym_rfc4880bis] = STATE(118),
    [sym_rfc2440] = STATE(118),
    [sym_pgp7] = STATE(118),
    [sym_pgp8] = STATE(118),
    [sym_compliance] = STATE(118),
    [sym_min_rsa_length] = STATE(118),
    [sym_require_compliance] = STATE(118),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(231),
    [aux_sym_config_token1] = ACTIONS(233),
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
    [anon_sym_recipient] = ACTIONS(149),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(151),
    [anon_sym_recipient_DASHfile] = ACTIONS(153),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(155),
    [anon_sym_encrypt_DASHto] = ACTIONS(157),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(159),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(161),
    [anon_sym_group] = ACTIONS(163),
    [anon_sym_ungroup] = ACTIONS(165),
    [anon_sym_no_DASHgroups] = ACTIONS(167),
    [anon_sym_local_DASHuser] = ACTIONS(169),
    [anon_sym_sender] = ACTIONS(171),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(173),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(175),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(177),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(179),
    [anon_sym_textmode] = ACTIONS(181),
    [anon_sym_no_DASHtextmode] = ACTIONS(183),
    [anon_sym_force_DASHocb] = ACTIONS(185),
    [anon_sym_force_DASHaead] = ACTIONS(185),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(187),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(189),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(191),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(193),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(195),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(197),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(199),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(201),
    [anon_sym_s2k_DASHmode] = ACTIONS(203),
    [anon_sym_s2k_DASHcount] = ACTIONS(205),
    [anon_sym_gnupg] = ACTIONS(207),
    [anon_sym_openpgp] = ACTIONS(209),
    [anon_sym_rfc4880] = ACTIONS(211),
    [anon_sym_rfc4880bis] = ACTIONS(213),
    [anon_sym_rfc2440] = ACTIONS(215),
    [anon_sym_pgp7] = ACTIONS(217),
    [anon_sym_pgp8] = ACTIONS(219),
    [anon_sym_compliance] = ACTIONS(221),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(223),
    [anon_sym_require_DASHcompliance] = ACTIONS(225),
    [sym_comment] = ACTIONS(227),
    [sym__space] = ACTIONS(229),
  },
  [3] = {
    [sym_unknown_option] = STATE(118),
    [sym_default_key] = STATE(118),
    [sym_default_recipient] = STATE(118),
    [sym_default_recipient_self] = STATE(118),
    [sym_no_default_recipient] = STATE(118),
    [sym_verbose] = STATE(118),
    [sym_no_tty] = STATE(118),
    [sym_list_options] = STATE(118),
    [sym_verify_options] = STATE(118),
    [sym_enable_large_rsa] = STATE(118),
    [sym_disable_large_rsa] = STATE(118),
    [sym_enable_dsa2] = STATE(118),
    [sym_disable_dsa2] = STATE(118),
    [sym_photo_viewer] = STATE(118),
    [sym_exec_path] = STATE(118),
    [sym_keyring] = STATE(118),
    [sym_primary_keyring] = STATE(118),
    [sym_trustdb_name] = STATE(118),
    [sym_display_charset] = STATE(118),
    [sym_utf8_strings] = STATE(118),
    [sym_no_utf8_strings] = STATE(118),
    [sym_compress_level] = STATE(118),
    [sym_bzip2_compress_level] = STATE(118),
    [sym_no_compress] = STATE(118),
    [sym_bzip2_decompress_lowmem] = STATE(118),
    [sym_mangle_dos_filenames] = STATE(118),
    [sym_no_mangle_dos_filenames] = STATE(118),
    [sym_ask_cert_level] = STATE(118),
    [sym_no_ask_cert_level] = STATE(118),
    [sym_default_cert_level] = STATE(118),
    [sym_min_cert_level] = STATE(118),
    [sym_trusted_key] = STATE(118),
    [sym_add_desig_revoker] = STATE(118),
    [sym_trust_model] = STATE(118),
    [sym_always_trust] = STATE(118),
    [sym_assert_signer] = STATE(118),
    [sym_auto_key_locate] = STATE(118),
    [sym_no_auto_key_locate] = STATE(118),
    [sym_auto_key_import] = STATE(118),
    [sym_no_auto_key_import] = STATE(118),
    [sym_auto_key_retrieve] = STATE(118),
    [sym_no_auto_key_retrieve] = STATE(118),
    [sym_keyid_format] = STATE(118),
    [sym_keyserver] = STATE(118),
    [sym_completes_needed] = STATE(118),
    [sym_marginals_needed] = STATE(118),
    [sym_tofu_default_policy] = STATE(118),
    [sym_max_cert_depth] = STATE(118),
    [sym_no_sig_cache] = STATE(118),
    [sym_auto_check_trustdb] = STATE(118),
    [sym_no_auto_check_trustdb] = STATE(118),
    [sym_agent_program] = STATE(118),
    [sym_dirmngr_program] = STATE(118),
    [sym_disable_dirmngr] = STATE(118),
    [sym_no_autostart] = STATE(118),
    [sym_lock_once] = STATE(118),
    [sym_lock_multiple] = STATE(118),
    [sym_lock_never] = STATE(118),
    [sym_exit_on_status_write_error] = STATE(118),
    [sym_limit_card_insert_tries] = STATE(118),
    [sym_no_random_seed_file] = STATE(118),
    [sym_no_greeting] = STATE(118),
    [sym_no_secmem_warning] = STATE(118),
    [sym_no_permission_warning] = STATE(118),
    [sym_require_secmem] = STATE(118),
    [sym_no_require_secmem] = STATE(118),
    [sym_require_cross_verification] = STATE(118),
    [sym_no_require_cross_verification] = STATE(118),
    [sym_expert] = STATE(118),
    [sym_no_expert] = STATE(118),
    [sym_recipient] = STATE(118),
    [sym_hidden_recipient] = STATE(118),
    [sym_recipient_file] = STATE(118),
    [sym_hidden_recipient_file] = STATE(118),
    [sym_encrypt_to] = STATE(118),
    [sym_hidden_encrypt_to] = STATE(118),
    [sym_no_encrypt_to] = STATE(118),
    [sym_group] = STATE(118),
    [sym_ungroup] = STATE(118),
    [sym_no_groups] = STATE(118),
    [sym_local_user] = STATE(118),
    [sym_sender] = STATE(118),
    [sym_try_secret_name] = STATE(118),
    [sym_try_all_secrets] = STATE(118),
    [sym_skip_hidden_recipients] = STATE(118),
    [sym_no_skip_hidden_recipients] = STATE(118),
    [sym_textmode] = STATE(118),
    [sym_no_textmode] = STATE(118),
    [sym_force_ocb] = STATE(118),
    [sym_disable_signer_uid] = STATE(118),
    [sym_include_key_block] = STATE(118),
    [sym_no_include_key_block] = STATE(118),
    [sym_personal_cipher_preferences] = STATE(118),
    [sym_personal_digest_preferences] = STATE(118),
    [sym_personal_compress_preferences] = STATE(118),
    [sym_s2k_cipher_algo] = STATE(118),
    [sym_s2k_digest_algo] = STATE(118),
    [sym_s2k_mode] = STATE(118),
    [sym_s2k_count] = STATE(118),
    [sym_gnupg] = STATE(118),
    [sym_openpgp] = STATE(118),
    [sym_rfc4880] = STATE(118),
    [sym_rfc4880bis] = STATE(118),
    [sym_rfc2440] = STATE(118),
    [sym_pgp7] = STATE(118),
    [sym_pgp8] = STATE(118),
    [sym_compliance] = STATE(118),
    [sym_min_rsa_length] = STATE(118),
    [sym_require_compliance] = STATE(118),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_config_token1] = ACTIONS(237),
    [aux_sym_unknown_option_token1] = ACTIONS(240),
    [anon_sym_default_DASHkey] = ACTIONS(243),
    [anon_sym_default_DASHrecipient] = ACTIONS(246),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(249),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(252),
    [anon_sym_verbose] = ACTIONS(255),
    [anon_sym_no_DASHtty] = ACTIONS(258),
    [anon_sym_list_DASHoptions] = ACTIONS(261),
    [anon_sym_verify_DASHoptions] = ACTIONS(264),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(267),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(270),
    [anon_sym_enable_DASHdsa2] = ACTIONS(273),
    [anon_sym_disable_DASHdsa2] = ACTIONS(276),
    [anon_sym_photo_DASHviewer] = ACTIONS(279),
    [anon_sym_exec_DASHpath] = ACTIONS(282),
    [anon_sym_keyring] = ACTIONS(285),
    [anon_sym_primary_DASHkeyring] = ACTIONS(288),
    [anon_sym_trustdb_DASHname] = ACTIONS(291),
    [anon_sym_display_DASHcharset] = ACTIONS(294),
    [anon_sym_utf8_DASHstrings] = ACTIONS(297),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(300),
    [anon_sym_compress_DASHlevel] = ACTIONS(303),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(306),
    [anon_sym_no_DASHcompress] = ACTIONS(309),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(312),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(315),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(318),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(321),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(324),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(327),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(330),
    [anon_sym_trusted_DASHkey] = ACTIONS(333),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(336),
    [anon_sym_trust_DASHmodel] = ACTIONS(339),
    [anon_sym_always_DASHtrust] = ACTIONS(342),
    [anon_sym_assert_DASHsigner] = ACTIONS(345),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(348),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(351),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(354),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(357),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(360),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(363),
    [anon_sym_keyid_DASHformat] = ACTIONS(366),
    [anon_sym_keyserver] = ACTIONS(369),
    [anon_sym_completes_DASHneeded] = ACTIONS(372),
    [anon_sym_marginals_DASHneeded] = ACTIONS(375),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(378),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(381),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(384),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(387),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(390),
    [anon_sym_agent_DASHprogram] = ACTIONS(393),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(396),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(399),
    [anon_sym_no_DASHautostart] = ACTIONS(402),
    [anon_sym_lock_DASHonce] = ACTIONS(405),
    [anon_sym_lock_DASHmultiple] = ACTIONS(408),
    [anon_sym_lock_DASHnever] = ACTIONS(411),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(414),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(417),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(420),
    [anon_sym_no_DASHgreeting] = ACTIONS(423),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(426),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(429),
    [anon_sym_require_DASHsecmem] = ACTIONS(432),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(435),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(438),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(441),
    [anon_sym_expert] = ACTIONS(444),
    [anon_sym_no_DASHexpert] = ACTIONS(447),
    [anon_sym_recipient] = ACTIONS(450),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(453),
    [anon_sym_recipient_DASHfile] = ACTIONS(456),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(459),
    [anon_sym_encrypt_DASHto] = ACTIONS(462),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(465),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(468),
    [anon_sym_group] = ACTIONS(471),
    [anon_sym_ungroup] = ACTIONS(474),
    [anon_sym_no_DASHgroups] = ACTIONS(477),
    [anon_sym_local_DASHuser] = ACTIONS(480),
    [anon_sym_sender] = ACTIONS(483),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(486),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(489),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(492),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(495),
    [anon_sym_textmode] = ACTIONS(498),
    [anon_sym_no_DASHtextmode] = ACTIONS(501),
    [anon_sym_force_DASHocb] = ACTIONS(504),
    [anon_sym_force_DASHaead] = ACTIONS(504),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(507),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(510),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(513),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(516),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(519),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(522),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(525),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(528),
    [anon_sym_s2k_DASHmode] = ACTIONS(531),
    [anon_sym_s2k_DASHcount] = ACTIONS(534),
    [anon_sym_gnupg] = ACTIONS(537),
    [anon_sym_openpgp] = ACTIONS(540),
    [anon_sym_rfc4880] = ACTIONS(543),
    [anon_sym_rfc4880bis] = ACTIONS(546),
    [anon_sym_rfc2440] = ACTIONS(549),
    [anon_sym_pgp7] = ACTIONS(552),
    [anon_sym_pgp8] = ACTIONS(555),
    [anon_sym_compliance] = ACTIONS(558),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(561),
    [anon_sym_require_DASHcompliance] = ACTIONS(564),
    [sym_comment] = ACTIONS(567),
    [sym__space] = ACTIONS(229),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [aux_sym_config_token1] = ACTIONS(235),
    [aux_sym_unknown_option_token1] = ACTIONS(570),
    [anon_sym_default_DASHkey] = ACTIONS(570),
    [anon_sym_default_DASHrecipient] = ACTIONS(570),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(570),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(570),
    [anon_sym_verbose] = ACTIONS(570),
    [anon_sym_no_DASHtty] = ACTIONS(570),
    [anon_sym_list_DASHoptions] = ACTIONS(570),
    [anon_sym_verify_DASHoptions] = ACTIONS(570),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(570),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(570),
    [anon_sym_enable_DASHdsa2] = ACTIONS(570),
    [anon_sym_disable_DASHdsa2] = ACTIONS(570),
    [anon_sym_photo_DASHviewer] = ACTIONS(570),
    [anon_sym_exec_DASHpath] = ACTIONS(570),
    [anon_sym_keyring] = ACTIONS(570),
    [anon_sym_primary_DASHkeyring] = ACTIONS(570),
    [anon_sym_trustdb_DASHname] = ACTIONS(570),
    [anon_sym_display_DASHcharset] = ACTIONS(570),
    [anon_sym_utf8_DASHstrings] = ACTIONS(570),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(570),
    [anon_sym_compress_DASHlevel] = ACTIONS(570),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(570),
    [anon_sym_no_DASHcompress] = ACTIONS(570),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(570),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(570),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(570),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(570),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(570),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(570),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(570),
    [anon_sym_trusted_DASHkey] = ACTIONS(570),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(570),
    [anon_sym_trust_DASHmodel] = ACTIONS(570),
    [anon_sym_always_DASHtrust] = ACTIONS(570),
    [anon_sym_assert_DASHsigner] = ACTIONS(570),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(570),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(570),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(570),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(570),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(570),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(570),
    [anon_sym_keyid_DASHformat] = ACTIONS(570),
    [anon_sym_keyserver] = ACTIONS(570),
    [anon_sym_completes_DASHneeded] = ACTIONS(570),
    [anon_sym_marginals_DASHneeded] = ACTIONS(570),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(570),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(570),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(570),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(570),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(570),
    [anon_sym_agent_DASHprogram] = ACTIONS(570),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(570),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(570),
    [anon_sym_no_DASHautostart] = ACTIONS(570),
    [anon_sym_lock_DASHonce] = ACTIONS(570),
    [anon_sym_lock_DASHmultiple] = ACTIONS(570),
    [anon_sym_lock_DASHnever] = ACTIONS(570),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(570),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(570),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(570),
    [anon_sym_no_DASHgreeting] = ACTIONS(570),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(570),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(570),
    [anon_sym_require_DASHsecmem] = ACTIONS(570),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(570),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(570),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(570),
    [anon_sym_expert] = ACTIONS(570),
    [anon_sym_no_DASHexpert] = ACTIONS(570),
    [anon_sym_recipient] = ACTIONS(570),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(570),
    [anon_sym_recipient_DASHfile] = ACTIONS(570),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(570),
    [anon_sym_encrypt_DASHto] = ACTIONS(570),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(570),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(570),
    [anon_sym_group] = ACTIONS(570),
    [anon_sym_ungroup] = ACTIONS(570),
    [anon_sym_no_DASHgroups] = ACTIONS(570),
    [anon_sym_local_DASHuser] = ACTIONS(570),
    [anon_sym_sender] = ACTIONS(570),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(570),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(570),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(570),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(570),
    [anon_sym_textmode] = ACTIONS(570),
    [anon_sym_no_DASHtextmode] = ACTIONS(570),
    [anon_sym_force_DASHocb] = ACTIONS(570),
    [anon_sym_force_DASHaead] = ACTIONS(570),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(570),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(570),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(570),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(570),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(570),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(570),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(570),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(570),
    [anon_sym_s2k_DASHmode] = ACTIONS(570),
    [anon_sym_s2k_DASHcount] = ACTIONS(570),
    [anon_sym_gnupg] = ACTIONS(570),
    [anon_sym_openpgp] = ACTIONS(570),
    [anon_sym_rfc4880] = ACTIONS(570),
    [anon_sym_rfc4880bis] = ACTIONS(570),
    [anon_sym_rfc2440] = ACTIONS(570),
    [anon_sym_pgp7] = ACTIONS(570),
    [anon_sym_pgp8] = ACTIONS(570),
    [anon_sym_compliance] = ACTIONS(570),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(570),
    [anon_sym_require_DASHcompliance] = ACTIONS(570),
    [sym_comment] = ACTIONS(235),
    [sym__space] = ACTIONS(229),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(572), 1,
      aux_sym__command_token1,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
    ACTIONS(578), 1,
      sym_format,
    STATE(14), 1,
      aux_sym__command_repeat1,
    STATE(175), 1,
      sym__command,
  [22] = 6,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(580), 1,
      aux_sym_config_token1,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__mechanism,
    ACTIONS(586), 1,
      sym_url,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [41] = 6,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      sym__mechanism,
    ACTIONS(586), 1,
      sym_url,
    ACTIONS(588), 1,
      aux_sym_config_token1,
    STATE(6), 1,
      aux_sym_auto_key_locate_repeat1,
  [60] = 6,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(590), 1,
      aux_sym_config_token1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      sym__mechanism,
    ACTIONS(598), 1,
      sym_url,
    STATE(8), 1,
      aux_sym_auto_key_locate_repeat1,
  [79] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(601), 1,
      anon_sym_DQUOTE,
    ACTIONS(603), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(605), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [96] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(612), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(607), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [113] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      aux_sym__command_token2,
    STATE(11), 1,
      aux_sym__command_repeat2,
    ACTIONS(620), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [130] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    ACTIONS(625), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(623), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [147] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    ACTIONS(629), 1,
      aux_sym__command_token2,
    ACTIONS(631), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [163] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(633), 1,
      aux_sym_config_token1,
    ACTIONS(635), 1,
      aux_sym__command_token1,
    ACTIONS(637), 1,
      sym_format,
    STATE(33), 1,
      aux_sym__command_repeat1,
  [179] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(639), 1,
      aux_sym_config_token1,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      sym__verify_parameter,
    STATE(15), 1,
      aux_sym_verify_options_repeat1,
  [195] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(647), 1,
      aux_sym_config_token1,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      sym__hash_algo,
    STATE(16), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [211] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(655), 1,
      aux_sym_config_token1,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      sym__list_parameter,
    STATE(17), 1,
      aux_sym_list_options_repeat1,
  [227] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(180), 1,
      sym_string,
  [243] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(669), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(672), 1,
      anon_sym_SQUOTE,
    ACTIONS(674), 1,
      aux_sym__command_token3,
    STATE(19), 1,
      aux_sym_string_repeat2,
  [259] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      aux_sym__command_token2,
    ACTIONS(682), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(20), 1,
      aux_sym_string_repeat1,
  [275] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(179), 1,
      sym_string,
  [291] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(685), 1,
      aux_sym_config_token1,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      sym__hash_algo,
    STATE(16), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [307] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(691), 1,
      aux_sym_config_token1,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      sym__cipher_algo,
    STATE(55), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [323] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(697), 1,
      aux_sym_config_token1,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      sym__compression_algo,
    STATE(45), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [339] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(170), 1,
      sym_string,
  [355] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      sym__hash_algo,
    ACTIONS(703), 1,
      aux_sym_config_token1,
    STATE(16), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [371] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(178), 1,
      sym_string,
  [387] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      sym__cipher_algo,
    ACTIONS(705), 1,
      aux_sym_config_token1,
    STATE(55), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [403] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(190), 1,
      sym_string,
  [419] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(86), 1,
      sym_string,
  [435] = 3,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(709), 1,
      sym__mechanism,
    ACTIONS(707), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [447] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(198), 1,
      sym_string,
  [463] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(711), 1,
      aux_sym_config_token1,
    ACTIONS(713), 1,
      aux_sym__command_token1,
    ACTIONS(716), 1,
      sym_format,
    STATE(33), 1,
      aux_sym__command_repeat1,
  [479] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(719), 1,
      aux_sym_config_token1,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      sym__verify_parameter,
    STATE(15), 1,
      aux_sym_verify_options_repeat1,
  [495] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(199), 1,
      sym_string,
  [511] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(725), 1,
      aux_sym_config_token1,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      sym__list_parameter,
    STATE(17), 1,
      aux_sym_list_options_repeat1,
  [527] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(201), 1,
      sym_string,
  [543] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
    ACTIONS(731), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(733), 1,
      aux_sym__command_token3,
    STATE(19), 1,
      aux_sym_string_repeat2,
  [559] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(177), 1,
      sym_string,
  [575] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      sym__hash_algo,
    ACTIONS(735), 1,
      aux_sym_config_token1,
    STATE(22), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [591] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      sym__cipher_algo,
    ACTIONS(737), 1,
      aux_sym_config_token1,
    STATE(23), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [607] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      sym__compression_algo,
    ACTIONS(739), 1,
      aux_sym_config_token1,
    STATE(24), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [623] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      sym__hash_algo,
    ACTIONS(741), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [639] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      sym__cipher_algo,
    ACTIONS(743), 1,
      aux_sym_config_token1,
    STATE(28), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [655] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(745), 1,
      aux_sym_config_token1,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    ACTIONS(750), 1,
      sym__compression_algo,
    STATE(45), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [671] = 3,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(755), 1,
      sym__mechanism,
    ACTIONS(753), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [683] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(759), 1,
      aux_sym__command_token3,
    STATE(12), 1,
      aux_sym__command_repeat3,
    ACTIONS(757), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [697] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(761), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(763), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [711] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(721), 1,
      anon_sym_COMMA,
    ACTIONS(723), 1,
      sym__verify_parameter,
    ACTIONS(765), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym_verify_options_repeat1,
  [727] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(727), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      sym__list_parameter,
    ACTIONS(767), 1,
      aux_sym_config_token1,
    STATE(36), 1,
      aux_sym_list_options_repeat1,
  [743] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(202), 1,
      sym_string,
  [759] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(203), 1,
      sym_string,
  [775] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(204), 1,
      sym_string,
  [791] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(205), 1,
      sym_string,
  [807] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(769), 1,
      aux_sym_config_token1,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      sym__cipher_algo,
    STATE(55), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [823] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(211), 1,
      sym_string,
  [839] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(210), 1,
      sym_string,
  [855] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(209), 1,
      sym_string,
  [871] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(208), 1,
      sym_string,
  [887] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(207), 1,
      sym_string,
  [903] = 5,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      anon_sym_SQUOTE,
    ACTIONS(667), 1,
      aux_sym_string_token1,
    STATE(206), 1,
      sym_string,
  [919] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(777), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [928] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(779), 1,
      aux_sym__command_token2,
    ACTIONS(781), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [941] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(783), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(785), 1,
      aux_sym__command_token3,
    STATE(38), 1,
      aux_sym_string_repeat2,
  [954] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(787), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [963] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(789), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [972] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(791), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [981] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(793), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [990] = 3,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(795), 1,
      aux_sym_add_desig_revoker_token1,
    ACTIONS(797), 2,
      aux_sym_add_desig_revoker_token2,
      sym_key,
  [1001] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(799), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [1010] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(801), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1019] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(803), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1028] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(805), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1037] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(807), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1046] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(809), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1054] = 3,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(811), 1,
      sym__mechanism,
    ACTIONS(813), 1,
      sym_url,
  [1064] = 3,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(815), 1,
      sym__mechanism,
    ACTIONS(817), 1,
      sym_url,
  [1074] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(819), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1082] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(821), 1,
      aux_sym_config_token1,
  [1089] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(823), 1,
      aux_sym_config_token1,
  [1096] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(825), 1,
      aux_sym_config_token1,
  [1103] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(827), 1,
      aux_sym_config_token1,
  [1110] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(829), 1,
      aux_sym_config_token1,
  [1117] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(831), 1,
      aux_sym_config_token1,
  [1124] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(833), 1,
      aux_sym_config_token1,
  [1131] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(835), 1,
      aux_sym_config_token1,
  [1138] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(837), 1,
      aux_sym_config_token1,
  [1145] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(839), 1,
      aux_sym_config_token1,
  [1152] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(841), 1,
      aux_sym_config_token1,
  [1159] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(843), 1,
      aux_sym_config_token1,
  [1166] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(845), 1,
      aux_sym_config_token1,
  [1173] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(847), 1,
      aux_sym_config_token1,
  [1180] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(849), 1,
      aux_sym_config_token1,
  [1187] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(851), 1,
      aux_sym_config_token1,
  [1194] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(853), 1,
      aux_sym_config_token1,
  [1201] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(855), 1,
      aux_sym_config_token1,
  [1208] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(857), 1,
      aux_sym_config_token1,
  [1215] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(859), 1,
      aux_sym_config_token1,
  [1222] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(861), 1,
      aux_sym_config_token1,
  [1229] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(863), 1,
      aux_sym_config_token1,
  [1236] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(865), 1,
      aux_sym_config_token1,
  [1243] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(867), 1,
      aux_sym_config_token1,
  [1250] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(869), 1,
      aux_sym_config_token1,
  [1257] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(871), 1,
      sym__compression_algo,
  [1264] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(873), 1,
      aux_sym_config_token1,
  [1271] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(875), 1,
      sym__hash_algo,
  [1278] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(877), 1,
      aux_sym_config_token1,
  [1285] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(879), 1,
      aux_sym_config_token1,
  [1292] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(881), 1,
      aux_sym_config_token1,
  [1299] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(883), 1,
      aux_sym_config_token1,
  [1306] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(885), 1,
      aux_sym_config_token1,
  [1313] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(887), 1,
      aux_sym_config_token1,
  [1320] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(889), 1,
      aux_sym_config_token1,
  [1327] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(891), 1,
      aux_sym_config_token1,
  [1334] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(893), 1,
      aux_sym_config_token1,
  [1341] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(895), 1,
      sym__cipher_algo,
  [1348] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(897), 1,
      aux_sym_config_token1,
  [1355] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(899), 1,
      aux_sym_config_token1,
  [1362] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
  [1369] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(903), 1,
      aux_sym_unknown_option_token2,
  [1376] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(905), 1,
      sym_key,
  [1383] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(907), 1,
      sym__list_parameter,
  [1390] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(909), 1,
      sym__verify_parameter,
  [1397] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(911), 1,
      sym__charset,
  [1404] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(913), 1,
      aux_sym_compress_level_token1,
  [1411] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(915), 1,
      aux_sym_compress_level_token1,
  [1418] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(917), 1,
      aux_sym_default_cert_level_token1,
  [1425] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(919), 1,
      aux_sym_default_cert_level_token1,
  [1432] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(921), 1,
      sym_key,
  [1439] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(923), 1,
      aux_sym_config_token1,
  [1446] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(925), 1,
      sym__model,
  [1453] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(927), 1,
      aux_sym_config_token1,
  [1460] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(929), 1,
      aux_sym_config_token1,
  [1467] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(931), 1,
      sym__keyid_format,
  [1474] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(933), 1,
      sym_url,
  [1481] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(935), 1,
      sym_number,
  [1488] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(937), 1,
      sym_number,
  [1495] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(939), 1,
      sym__tofu_policy,
  [1502] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(941), 1,
      sym_number,
  [1509] = 2,
    ACTIONS(943), 1,
      aux_sym_config_token1,
    ACTIONS(945), 1,
      sym__space,
  [1516] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(947), 1,
      aux_sym_config_token1,
  [1523] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(949), 1,
      sym_number,
  [1530] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(951), 1,
      aux_sym_config_token1,
  [1537] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(953), 1,
      aux_sym_config_token1,
  [1544] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(955), 1,
      aux_sym_config_token1,
  [1551] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(957), 1,
      aux_sym_config_token1,
  [1558] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(959), 1,
      aux_sym_config_token1,
  [1565] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(961), 1,
      aux_sym_config_token1,
  [1572] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(963), 1,
      aux_sym_config_token1,
  [1579] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(965), 1,
      aux_sym_config_token1,
  [1586] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(967), 1,
      aux_sym_config_token1,
  [1593] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(969), 1,
      aux_sym_config_token1,
  [1600] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(971), 1,
      aux_sym_config_token1,
  [1607] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(973), 1,
      sym__cipher_algo,
  [1614] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(975), 1,
      sym__hash_algo,
  [1621] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(977), 1,
      sym__compression_algo,
  [1628] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(979), 1,
      sym__cipher_algo,
  [1635] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(981), 1,
      sym__hash_algo,
  [1642] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(983), 1,
      aux_sym_s2k_mode_token1,
  [1649] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(985), 1,
      sym_number,
  [1656] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(987), 1,
      sym__compliance,
  [1663] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(989), 1,
      sym_number,
  [1670] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(991), 1,
      aux_sym_config_token1,
  [1677] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(993), 1,
      aux_sym_config_token1,
  [1684] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(995), 1,
      aux_sym_config_token1,
  [1691] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(997), 1,
      aux_sym_config_token1,
  [1698] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(999), 1,
      aux_sym_config_token1,
  [1705] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1001), 1,
      aux_sym_config_token1,
  [1712] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1003), 1,
      aux_sym_config_token1,
  [1719] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1005), 1,
      aux_sym_config_token1,
  [1726] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1007), 1,
      aux_sym_config_token1,
  [1733] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1009), 1,
      aux_sym_config_token1,
  [1740] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1011), 1,
      sym__verify_parameter,
  [1747] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1013), 1,
      sym__list_parameter,
  [1754] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1015), 1,
      aux_sym_config_token1,
  [1761] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1017), 1,
      aux_sym_config_token1,
  [1768] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1019), 1,
      aux_sym_config_token1,
  [1775] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1021), 1,
      aux_sym_config_token1,
  [1782] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1023), 1,
      aux_sym_config_token1,
  [1789] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1025), 1,
      aux_sym_config_token1,
  [1796] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1027), 1,
      aux_sym_config_token1,
  [1803] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1029), 1,
      aux_sym_config_token1,
  [1810] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1031), 1,
      aux_sym_config_token1,
  [1817] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1033), 1,
      aux_sym_config_token1,
  [1824] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1035), 1,
      aux_sym_config_token1,
  [1831] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1037), 1,
      aux_sym_config_token1,
  [1838] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1039), 1,
      sym_key,
  [1845] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1041), 1,
      aux_sym_config_token1,
  [1852] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1043), 1,
      aux_sym_config_token1,
  [1859] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1045), 1,
      aux_sym_config_token1,
  [1866] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1047), 1,
      aux_sym_config_token1,
  [1873] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1049), 1,
      aux_sym_config_token1,
  [1880] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1051), 1,
      aux_sym_config_token1,
  [1887] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1053), 1,
      aux_sym_config_token1,
  [1894] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1055), 1,
      aux_sym_config_token1,
  [1901] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1057), 1,
      aux_sym_config_token1,
  [1908] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1059), 1,
      aux_sym_config_token1,
  [1915] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1061), 1,
      aux_sym_config_token1,
  [1922] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1063), 1,
      aux_sym_config_token1,
  [1929] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1065), 1,
      aux_sym_config_token1,
  [1936] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1067), 1,
      aux_sym_config_token1,
  [1943] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1069), 1,
      aux_sym_config_token1,
  [1950] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1071), 1,
      aux_sym_config_token1,
  [1957] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1073), 1,
      aux_sym_config_token1,
  [1964] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1075), 1,
      aux_sym_config_token1,
  [1971] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1077), 1,
      aux_sym_config_token1,
  [1978] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1079), 1,
      anon_sym_EQ,
  [1985] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1081), 1,
      aux_sym_config_token1,
  [1992] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1083), 1,
      aux_sym_config_token1,
  [1999] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1085), 1,
      aux_sym_config_token1,
  [2006] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1087), 1,
      aux_sym_config_token1,
  [2013] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1089), 1,
      aux_sym_config_token1,
  [2020] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1091), 1,
      aux_sym_config_token1,
  [2027] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1093), 1,
      aux_sym_config_token1,
  [2034] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1095), 1,
      aux_sym_config_token1,
  [2041] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1097), 1,
      aux_sym_config_token1,
  [2048] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1099), 1,
      aux_sym_config_token1,
  [2055] = 2,
    ACTIONS(229), 1,
      sym__space,
    ACTIONS(1101), 1,
      aux_sym_config_token1,
  [2062] = 1,
    ACTIONS(1103), 1,
      sym__space,
  [2066] = 1,
    ACTIONS(1105), 1,
      sym__space,
  [2070] = 1,
    ACTIONS(1107), 1,
      sym__space,
  [2074] = 1,
    ACTIONS(1109), 1,
      sym__space,
  [2078] = 1,
    ACTIONS(1111), 1,
      sym__space,
  [2082] = 1,
    ACTIONS(1113), 1,
      sym__space,
  [2086] = 1,
    ACTIONS(1115), 1,
      sym__space,
  [2090] = 1,
    ACTIONS(1117), 1,
      sym__space,
  [2094] = 1,
    ACTIONS(1119), 1,
      sym__space,
  [2098] = 1,
    ACTIONS(1121), 1,
      sym__space,
  [2102] = 1,
    ACTIONS(1123), 1,
      sym__space,
  [2106] = 1,
    ACTIONS(1125), 1,
      sym__space,
  [2110] = 1,
    ACTIONS(1127), 1,
      sym__space,
  [2114] = 1,
    ACTIONS(1129), 1,
      sym__space,
  [2118] = 1,
    ACTIONS(1131), 1,
      sym__space,
  [2122] = 1,
    ACTIONS(1133), 1,
      sym__space,
  [2126] = 1,
    ACTIONS(1135), 1,
      sym__space,
  [2130] = 1,
    ACTIONS(1137), 1,
      sym__space,
  [2134] = 1,
    ACTIONS(1139), 1,
      sym__space,
  [2138] = 1,
    ACTIONS(1141), 1,
      sym__space,
  [2142] = 1,
    ACTIONS(1143), 1,
      sym__space,
  [2146] = 1,
    ACTIONS(1145), 1,
      sym__space,
  [2150] = 1,
    ACTIONS(1147), 1,
      sym__space,
  [2154] = 1,
    ACTIONS(1149), 1,
      sym__space,
  [2158] = 1,
    ACTIONS(1151), 1,
      sym__space,
  [2162] = 1,
    ACTIONS(1153), 1,
      sym__space,
  [2166] = 1,
    ACTIONS(1155), 1,
      sym__space,
  [2170] = 1,
    ACTIONS(1157), 1,
      sym__space,
  [2174] = 1,
    ACTIONS(1159), 1,
      sym__space,
  [2178] = 1,
    ACTIONS(1161), 1,
      sym__space,
  [2182] = 1,
    ACTIONS(1163), 1,
      sym__space,
  [2186] = 1,
    ACTIONS(1165), 1,
      sym__space,
  [2190] = 1,
    ACTIONS(1167), 1,
      sym__space,
  [2194] = 1,
    ACTIONS(1169), 1,
      sym__space,
  [2198] = 1,
    ACTIONS(1171), 1,
      sym__space,
  [2202] = 1,
    ACTIONS(1173), 1,
      sym__space,
  [2206] = 1,
    ACTIONS(1175), 1,
      sym__space,
  [2210] = 1,
    ACTIONS(1177), 1,
      sym__space,
  [2214] = 1,
    ACTIONS(1179), 1,
      sym__space,
  [2218] = 1,
    ACTIONS(1181), 1,
      sym__space,
  [2222] = 1,
    ACTIONS(1183), 1,
      sym__space,
  [2226] = 1,
    ACTIONS(1185), 1,
      sym__space,
  [2230] = 1,
    ACTIONS(1187), 1,
      sym__space,
  [2234] = 1,
    ACTIONS(1189), 1,
      sym__space,
  [2238] = 1,
    ACTIONS(1191), 1,
      sym__space,
  [2242] = 1,
    ACTIONS(1193), 1,
      sym__space,
  [2246] = 1,
    ACTIONS(1195), 1,
      sym__space,
  [2250] = 1,
    ACTIONS(1197), 1,
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
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 243,
  [SMALL_STATE(20)] = 259,
  [SMALL_STATE(21)] = 275,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 307,
  [SMALL_STATE(24)] = 323,
  [SMALL_STATE(25)] = 339,
  [SMALL_STATE(26)] = 355,
  [SMALL_STATE(27)] = 371,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 403,
  [SMALL_STATE(30)] = 419,
  [SMALL_STATE(31)] = 435,
  [SMALL_STATE(32)] = 447,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 479,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 559,
  [SMALL_STATE(40)] = 575,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 607,
  [SMALL_STATE(43)] = 623,
  [SMALL_STATE(44)] = 639,
  [SMALL_STATE(45)] = 655,
  [SMALL_STATE(46)] = 671,
  [SMALL_STATE(47)] = 683,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 711,
  [SMALL_STATE(50)] = 727,
  [SMALL_STATE(51)] = 743,
  [SMALL_STATE(52)] = 759,
  [SMALL_STATE(53)] = 775,
  [SMALL_STATE(54)] = 791,
  [SMALL_STATE(55)] = 807,
  [SMALL_STATE(56)] = 823,
  [SMALL_STATE(57)] = 839,
  [SMALL_STATE(58)] = 855,
  [SMALL_STATE(59)] = 871,
  [SMALL_STATE(60)] = 887,
  [SMALL_STATE(61)] = 903,
  [SMALL_STATE(62)] = 919,
  [SMALL_STATE(63)] = 928,
  [SMALL_STATE(64)] = 941,
  [SMALL_STATE(65)] = 954,
  [SMALL_STATE(66)] = 963,
  [SMALL_STATE(67)] = 972,
  [SMALL_STATE(68)] = 981,
  [SMALL_STATE(69)] = 990,
  [SMALL_STATE(70)] = 1001,
  [SMALL_STATE(71)] = 1010,
  [SMALL_STATE(72)] = 1019,
  [SMALL_STATE(73)] = 1028,
  [SMALL_STATE(74)] = 1037,
  [SMALL_STATE(75)] = 1046,
  [SMALL_STATE(76)] = 1054,
  [SMALL_STATE(77)] = 1064,
  [SMALL_STATE(78)] = 1074,
  [SMALL_STATE(79)] = 1082,
  [SMALL_STATE(80)] = 1089,
  [SMALL_STATE(81)] = 1096,
  [SMALL_STATE(82)] = 1103,
  [SMALL_STATE(83)] = 1110,
  [SMALL_STATE(84)] = 1117,
  [SMALL_STATE(85)] = 1124,
  [SMALL_STATE(86)] = 1131,
  [SMALL_STATE(87)] = 1138,
  [SMALL_STATE(88)] = 1145,
  [SMALL_STATE(89)] = 1152,
  [SMALL_STATE(90)] = 1159,
  [SMALL_STATE(91)] = 1166,
  [SMALL_STATE(92)] = 1173,
  [SMALL_STATE(93)] = 1180,
  [SMALL_STATE(94)] = 1187,
  [SMALL_STATE(95)] = 1194,
  [SMALL_STATE(96)] = 1201,
  [SMALL_STATE(97)] = 1208,
  [SMALL_STATE(98)] = 1215,
  [SMALL_STATE(99)] = 1222,
  [SMALL_STATE(100)] = 1229,
  [SMALL_STATE(101)] = 1236,
  [SMALL_STATE(102)] = 1243,
  [SMALL_STATE(103)] = 1250,
  [SMALL_STATE(104)] = 1257,
  [SMALL_STATE(105)] = 1264,
  [SMALL_STATE(106)] = 1271,
  [SMALL_STATE(107)] = 1278,
  [SMALL_STATE(108)] = 1285,
  [SMALL_STATE(109)] = 1292,
  [SMALL_STATE(110)] = 1299,
  [SMALL_STATE(111)] = 1306,
  [SMALL_STATE(112)] = 1313,
  [SMALL_STATE(113)] = 1320,
  [SMALL_STATE(114)] = 1327,
  [SMALL_STATE(115)] = 1334,
  [SMALL_STATE(116)] = 1341,
  [SMALL_STATE(117)] = 1348,
  [SMALL_STATE(118)] = 1355,
  [SMALL_STATE(119)] = 1362,
  [SMALL_STATE(120)] = 1369,
  [SMALL_STATE(121)] = 1376,
  [SMALL_STATE(122)] = 1383,
  [SMALL_STATE(123)] = 1390,
  [SMALL_STATE(124)] = 1397,
  [SMALL_STATE(125)] = 1404,
  [SMALL_STATE(126)] = 1411,
  [SMALL_STATE(127)] = 1418,
  [SMALL_STATE(128)] = 1425,
  [SMALL_STATE(129)] = 1432,
  [SMALL_STATE(130)] = 1439,
  [SMALL_STATE(131)] = 1446,
  [SMALL_STATE(132)] = 1453,
  [SMALL_STATE(133)] = 1460,
  [SMALL_STATE(134)] = 1467,
  [SMALL_STATE(135)] = 1474,
  [SMALL_STATE(136)] = 1481,
  [SMALL_STATE(137)] = 1488,
  [SMALL_STATE(138)] = 1495,
  [SMALL_STATE(139)] = 1502,
  [SMALL_STATE(140)] = 1509,
  [SMALL_STATE(141)] = 1516,
  [SMALL_STATE(142)] = 1523,
  [SMALL_STATE(143)] = 1530,
  [SMALL_STATE(144)] = 1537,
  [SMALL_STATE(145)] = 1544,
  [SMALL_STATE(146)] = 1551,
  [SMALL_STATE(147)] = 1558,
  [SMALL_STATE(148)] = 1565,
  [SMALL_STATE(149)] = 1572,
  [SMALL_STATE(150)] = 1579,
  [SMALL_STATE(151)] = 1586,
  [SMALL_STATE(152)] = 1593,
  [SMALL_STATE(153)] = 1600,
  [SMALL_STATE(154)] = 1607,
  [SMALL_STATE(155)] = 1614,
  [SMALL_STATE(156)] = 1621,
  [SMALL_STATE(157)] = 1628,
  [SMALL_STATE(158)] = 1635,
  [SMALL_STATE(159)] = 1642,
  [SMALL_STATE(160)] = 1649,
  [SMALL_STATE(161)] = 1656,
  [SMALL_STATE(162)] = 1663,
  [SMALL_STATE(163)] = 1670,
  [SMALL_STATE(164)] = 1677,
  [SMALL_STATE(165)] = 1684,
  [SMALL_STATE(166)] = 1691,
  [SMALL_STATE(167)] = 1698,
  [SMALL_STATE(168)] = 1705,
  [SMALL_STATE(169)] = 1712,
  [SMALL_STATE(170)] = 1719,
  [SMALL_STATE(171)] = 1726,
  [SMALL_STATE(172)] = 1733,
  [SMALL_STATE(173)] = 1740,
  [SMALL_STATE(174)] = 1747,
  [SMALL_STATE(175)] = 1754,
  [SMALL_STATE(176)] = 1761,
  [SMALL_STATE(177)] = 1768,
  [SMALL_STATE(178)] = 1775,
  [SMALL_STATE(179)] = 1782,
  [SMALL_STATE(180)] = 1789,
  [SMALL_STATE(181)] = 1796,
  [SMALL_STATE(182)] = 1803,
  [SMALL_STATE(183)] = 1810,
  [SMALL_STATE(184)] = 1817,
  [SMALL_STATE(185)] = 1824,
  [SMALL_STATE(186)] = 1831,
  [SMALL_STATE(187)] = 1838,
  [SMALL_STATE(188)] = 1845,
  [SMALL_STATE(189)] = 1852,
  [SMALL_STATE(190)] = 1859,
  [SMALL_STATE(191)] = 1866,
  [SMALL_STATE(192)] = 1873,
  [SMALL_STATE(193)] = 1880,
  [SMALL_STATE(194)] = 1887,
  [SMALL_STATE(195)] = 1894,
  [SMALL_STATE(196)] = 1901,
  [SMALL_STATE(197)] = 1908,
  [SMALL_STATE(198)] = 1915,
  [SMALL_STATE(199)] = 1922,
  [SMALL_STATE(200)] = 1929,
  [SMALL_STATE(201)] = 1936,
  [SMALL_STATE(202)] = 1943,
  [SMALL_STATE(203)] = 1950,
  [SMALL_STATE(204)] = 1957,
  [SMALL_STATE(205)] = 1964,
  [SMALL_STATE(206)] = 1971,
  [SMALL_STATE(207)] = 1978,
  [SMALL_STATE(208)] = 1985,
  [SMALL_STATE(209)] = 1992,
  [SMALL_STATE(210)] = 1999,
  [SMALL_STATE(211)] = 2006,
  [SMALL_STATE(212)] = 2013,
  [SMALL_STATE(213)] = 2020,
  [SMALL_STATE(214)] = 2027,
  [SMALL_STATE(215)] = 2034,
  [SMALL_STATE(216)] = 2041,
  [SMALL_STATE(217)] = 2048,
  [SMALL_STATE(218)] = 2055,
  [SMALL_STATE(219)] = 2062,
  [SMALL_STATE(220)] = 2066,
  [SMALL_STATE(221)] = 2070,
  [SMALL_STATE(222)] = 2074,
  [SMALL_STATE(223)] = 2078,
  [SMALL_STATE(224)] = 2082,
  [SMALL_STATE(225)] = 2086,
  [SMALL_STATE(226)] = 2090,
  [SMALL_STATE(227)] = 2094,
  [SMALL_STATE(228)] = 2098,
  [SMALL_STATE(229)] = 2102,
  [SMALL_STATE(230)] = 2106,
  [SMALL_STATE(231)] = 2110,
  [SMALL_STATE(232)] = 2114,
  [SMALL_STATE(233)] = 2118,
  [SMALL_STATE(234)] = 2122,
  [SMALL_STATE(235)] = 2126,
  [SMALL_STATE(236)] = 2130,
  [SMALL_STATE(237)] = 2134,
  [SMALL_STATE(238)] = 2138,
  [SMALL_STATE(239)] = 2142,
  [SMALL_STATE(240)] = 2146,
  [SMALL_STATE(241)] = 2150,
  [SMALL_STATE(242)] = 2154,
  [SMALL_STATE(243)] = 2158,
  [SMALL_STATE(244)] = 2162,
  [SMALL_STATE(245)] = 2166,
  [SMALL_STATE(246)] = 2170,
  [SMALL_STATE(247)] = 2174,
  [SMALL_STATE(248)] = 2178,
  [SMALL_STATE(249)] = 2182,
  [SMALL_STATE(250)] = 2186,
  [SMALL_STATE(251)] = 2190,
  [SMALL_STATE(252)] = 2194,
  [SMALL_STATE(253)] = 2198,
  [SMALL_STATE(254)] = 2202,
  [SMALL_STATE(255)] = 2206,
  [SMALL_STATE(256)] = 2210,
  [SMALL_STATE(257)] = 2214,
  [SMALL_STATE(258)] = 2218,
  [SMALL_STATE(259)] = 2222,
  [SMALL_STATE(260)] = 2226,
  [SMALL_STATE(261)] = 2230,
  [SMALL_STATE(262)] = 2234,
  [SMALL_STATE(263)] = 2238,
  [SMALL_STATE(264)] = 2242,
  [SMALL_STATE(265)] = 2246,
  [SMALL_STATE(266)] = 2250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(140),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(266),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(265),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(81),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(82),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(83),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(84),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(259),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(258),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(87),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(89),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(91),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(101),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(252),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(251),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(250),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(249),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(102),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(103),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(244),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(105),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(107),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(115),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(132),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(149),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(167),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(233),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(231),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(230),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(225),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(224),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(176),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(228),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(241),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(222),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(223),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(226),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(80),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(171),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(169),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(234),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(163),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(153),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(152),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(151),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(150),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(235),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(148),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(147),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(146),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(145),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(79),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(144),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(143),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(130),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(133),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(227),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(264),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(263),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(261),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(85),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(260),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(257),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(88),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(256),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(255),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(254),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(92),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(93),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(94),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(95),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(96),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(97),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(98),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(100),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(245),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(219),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(242),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(240),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(108),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(109),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(110),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(111),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(112),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(113),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(114),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(238),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(237),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(117),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(118),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 13),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(76),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(31),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18), SHIFT_REPEAT(31),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(10),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(11),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(173),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(67),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(106),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(70),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(174),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(66),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(19),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(19),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [682] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 4, .production_id = 9),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 4, .production_id = 9),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 4, .production_id = 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 4, .production_id = 9),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 4, .production_id = 9),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 12),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [713] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(33),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(33),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 3, .production_id = 9),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 3, .production_id = 9),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 3, .production_id = 9),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 3, .production_id = 9),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 3, .production_id = 9),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(104),
  [750] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(71),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 17),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(116),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(68),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2, .production_id = 20),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2, .production_id = 20),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 11),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 11),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 1, .production_id = 14),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 1, .production_id = 14),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 1, .production_id = 14),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 16),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 16),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2, .production_id = 20),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 15),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_encrypt_to, 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5, .production_id = 19),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_groups, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 15),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_all_secrets, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip_hidden_recipients, 1),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_skip_hidden_recipients, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textmode, 1),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_textmode, 1),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_ocb, 1),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_signer_uid, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_key_block, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_include_key_block, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gnupg, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openpgp, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880bis, 1),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc2440, 1),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp7, 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp8, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_compliance, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [901] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 1),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipient, 3),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_recipient, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipient_file, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_recipient_file, 3),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encrypt_to, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_encrypt_to, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ungroup, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_user, 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_secret_name, 3),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_rsa_length, 3),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compliance, 3, .production_id = 10),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_mode, 3),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_count, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
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
