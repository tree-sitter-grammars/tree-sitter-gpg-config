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
#define STATE_COUNT 311
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 309
#define ALIAS_COUNT 0
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 22

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
  anon_sym_armor = 109,
  anon_sym_no_DASHarmor = 110,
  anon_sym_output = 111,
  anon_sym_max_DASHoutput = 112,
  anon_sym_chunk_DASHsize = 113,
  anon_sym_input_DASHsize_DASHhint = 114,
  anon_sym_key_DASHorigin = 115,
  sym__origin = 116,
  anon_sym_import_DASHoptions = 117,
  sym__import_parameter = 118,
  anon_sym_export_DASHoptions = 119,
  sym__export_parameter = 120,
  anon_sym_with_DASHcolons = 121,
  anon_sym_legacy_DASHlist_DASHmode = 122,
  anon_sym_with_DASHfingerprint = 123,
  anon_sym_with_DASHsubkey_DASHfingerprint = 124,
  anon_sym_with_DASHicao_DASHspelling = 125,
  anon_sym_with_DASHkeygrip = 126,
  anon_sym_with_DASHkey_DASHorigin = 127,
  anon_sym_with_DASHwkd_DASHhash = 128,
  anon_sym_with_DASHsecret = 129,
  anon_sym_textmode = 130,
  anon_sym_no_DASHtextmode = 131,
  anon_sym_force_DASHocb = 132,
  anon_sym_force_DASHaead = 133,
  anon_sym_disable_DASHsigner_DASHuid = 134,
  anon_sym_include_DASHkey_DASHblock = 135,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 136,
  anon_sym_personal_DASHcipher_DASHpreferences = 137,
  anon_sym_personal_DASHdigest_DASHpreferences = 138,
  anon_sym_personal_DASHcompress_DASHpreferences = 139,
  anon_sym_s2k_DASHcipher_DASHalgo = 140,
  anon_sym_s2k_DASHdigest_DASHalgo = 141,
  anon_sym_s2k_DASHmode = 142,
  aux_sym_s2k_mode_token1 = 143,
  anon_sym_s2k_DASHcount = 144,
  anon_sym_gnupg = 145,
  anon_sym_openpgp = 146,
  anon_sym_rfc4880 = 147,
  anon_sym_rfc4880bis = 148,
  anon_sym_rfc2440 = 149,
  anon_sym_pgp7 = 150,
  anon_sym_pgp8 = 151,
  anon_sym_compliance = 152,
  sym__compliance = 153,
  anon_sym_min_DASHrsa_DASHlength = 154,
  anon_sym_require_DASHcompliance = 155,
  sym_key = 156,
  sym_url = 157,
  sym_number = 158,
  aux_sym_string_token1 = 159,
  sym_comment = 160,
  sym__cipher_algo = 161,
  sym__hash_algo = 162,
  sym__compression_algo = 163,
  sym__space = 164,
  sym_config = 165,
  sym_unknown_option = 166,
  sym_default_key = 167,
  sym_default_recipient = 168,
  sym_default_recipient_self = 169,
  sym_no_default_recipient = 170,
  sym_verbose = 171,
  sym_no_tty = 172,
  sym_list_options = 173,
  sym_verify_options = 174,
  sym_enable_large_rsa = 175,
  sym_disable_large_rsa = 176,
  sym_enable_dsa2 = 177,
  sym_disable_dsa2 = 178,
  sym_photo_viewer = 179,
  sym__command = 180,
  sym_exec_path = 181,
  sym_keyring = 182,
  sym_primary_keyring = 183,
  sym_trustdb_name = 184,
  sym_display_charset = 185,
  sym_utf8_strings = 186,
  sym_no_utf8_strings = 187,
  sym_compress_level = 188,
  sym_bzip2_compress_level = 189,
  sym_no_compress = 190,
  sym_bzip2_decompress_lowmem = 191,
  sym_mangle_dos_filenames = 192,
  sym_no_mangle_dos_filenames = 193,
  sym_ask_cert_level = 194,
  sym_no_ask_cert_level = 195,
  sym_default_cert_level = 196,
  sym_min_cert_level = 197,
  sym_trusted_key = 198,
  sym_add_desig_revoker = 199,
  sym_trust_model = 200,
  sym_always_trust = 201,
  sym_assert_signer = 202,
  sym_auto_key_locate = 203,
  sym_no_auto_key_locate = 204,
  sym_auto_key_import = 205,
  sym_no_auto_key_import = 206,
  sym_auto_key_retrieve = 207,
  sym_no_auto_key_retrieve = 208,
  sym_keyid_format = 209,
  sym_keyserver = 210,
  sym_completes_needed = 211,
  sym_marginals_needed = 212,
  sym_tofu_default_policy = 213,
  sym_max_cert_depth = 214,
  sym_no_sig_cache = 215,
  sym_auto_check_trustdb = 216,
  sym_no_auto_check_trustdb = 217,
  sym_agent_program = 218,
  sym_dirmngr_program = 219,
  sym_disable_dirmngr = 220,
  sym_no_autostart = 221,
  sym_lock_once = 222,
  sym_lock_multiple = 223,
  sym_lock_never = 224,
  sym_exit_on_status_write_error = 225,
  sym_limit_card_insert_tries = 226,
  sym_no_random_seed_file = 227,
  sym_no_greeting = 228,
  sym_no_secmem_warning = 229,
  sym_no_permission_warning = 230,
  sym_require_secmem = 231,
  sym_no_require_secmem = 232,
  sym_require_cross_verification = 233,
  sym_no_require_cross_verification = 234,
  sym_expert = 235,
  sym_no_expert = 236,
  sym_recipient = 237,
  sym_hidden_recipient = 238,
  sym_recipient_file = 239,
  sym_hidden_recipient_file = 240,
  sym_encrypt_to = 241,
  sym_hidden_encrypt_to = 242,
  sym_no_encrypt_to = 243,
  sym_group = 244,
  sym_ungroup = 245,
  sym_no_groups = 246,
  sym_local_user = 247,
  sym_sender = 248,
  sym_try_secret_name = 249,
  sym_try_all_secrets = 250,
  sym_skip_hidden_recipients = 251,
  sym_no_skip_hidden_recipients = 252,
  sym_armor = 253,
  sym_no_armor = 254,
  sym_output = 255,
  sym_max_output = 256,
  sym_chunk_size = 257,
  sym_input_size_hint = 258,
  sym_key_origin = 259,
  sym_import_options = 260,
  sym_export_options = 261,
  sym_with_colons = 262,
  sym_legacy_list_mode = 263,
  sym_with_fingerprint = 264,
  sym_with_subkey_fingerprint = 265,
  sym_with_icao_spelling = 266,
  sym_with_keygrip = 267,
  sym_with_key_origin = 268,
  sym_with_wkd_hash = 269,
  sym_with_secret = 270,
  sym_textmode = 271,
  sym_no_textmode = 272,
  sym_force_ocb = 273,
  sym_disable_signer_uid = 274,
  sym_include_key_block = 275,
  sym_no_include_key_block = 276,
  sym_personal_cipher_preferences = 277,
  sym_personal_digest_preferences = 278,
  sym_personal_compress_preferences = 279,
  sym_s2k_cipher_algo = 280,
  sym_s2k_digest_algo = 281,
  sym_s2k_mode = 282,
  sym_s2k_count = 283,
  sym_gnupg = 284,
  sym_openpgp = 285,
  sym_rfc4880 = 286,
  sym_rfc4880bis = 287,
  sym_rfc2440 = 288,
  sym_pgp7 = 289,
  sym_pgp8 = 290,
  sym_compliance = 291,
  sym_min_rsa_length = 292,
  sym_require_compliance = 293,
  sym_string = 294,
  aux_sym_config_repeat1 = 295,
  aux_sym_list_options_repeat1 = 296,
  aux_sym_verify_options_repeat1 = 297,
  aux_sym__command_repeat1 = 298,
  aux_sym__command_repeat2 = 299,
  aux_sym__command_repeat3 = 300,
  aux_sym_auto_key_locate_repeat1 = 301,
  aux_sym_import_options_repeat1 = 302,
  aux_sym_export_options_repeat1 = 303,
  aux_sym_personal_cipher_preferences_repeat1 = 304,
  aux_sym_personal_digest_preferences_repeat1 = 305,
  aux_sym_personal_compress_preferences_repeat1 = 306,
  aux_sym_string_repeat1 = 307,
  aux_sym_string_repeat2 = 308,
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
  [anon_sym_armor] = "option",
  [anon_sym_no_DASHarmor] = "option",
  [anon_sym_output] = "option",
  [anon_sym_max_DASHoutput] = "option",
  [anon_sym_chunk_DASHsize] = "option",
  [anon_sym_input_DASHsize_DASHhint] = "option",
  [anon_sym_key_DASHorigin] = "option",
  [sym__origin] = "_origin",
  [anon_sym_import_DASHoptions] = "option",
  [sym__import_parameter] = "_import_parameter",
  [anon_sym_export_DASHoptions] = "option",
  [sym__export_parameter] = "_export_parameter",
  [anon_sym_with_DASHcolons] = "option",
  [anon_sym_legacy_DASHlist_DASHmode] = "option",
  [anon_sym_with_DASHfingerprint] = "option",
  [anon_sym_with_DASHsubkey_DASHfingerprint] = "option",
  [anon_sym_with_DASHicao_DASHspelling] = "option",
  [anon_sym_with_DASHkeygrip] = "option",
  [anon_sym_with_DASHkey_DASHorigin] = "option",
  [anon_sym_with_DASHwkd_DASHhash] = "option",
  [anon_sym_with_DASHsecret] = "option",
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
  [sym_armor] = "armor",
  [sym_no_armor] = "no_armor",
  [sym_output] = "output",
  [sym_max_output] = "max_output",
  [sym_chunk_size] = "chunk_size",
  [sym_input_size_hint] = "input_size_hint",
  [sym_key_origin] = "key_origin",
  [sym_import_options] = "import_options",
  [sym_export_options] = "export_options",
  [sym_with_colons] = "with_colons",
  [sym_legacy_list_mode] = "legacy_list_mode",
  [sym_with_fingerprint] = "with_fingerprint",
  [sym_with_subkey_fingerprint] = "with_subkey_fingerprint",
  [sym_with_icao_spelling] = "with_icao_spelling",
  [sym_with_keygrip] = "with_keygrip",
  [sym_with_key_origin] = "with_key_origin",
  [sym_with_wkd_hash] = "with_wkd_hash",
  [sym_with_secret] = "with_secret",
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
  [aux_sym_import_options_repeat1] = "import_options_repeat1",
  [aux_sym_export_options_repeat1] = "export_options_repeat1",
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
  [anon_sym_armor] = aux_sym_unknown_option_token1,
  [anon_sym_no_DASHarmor] = aux_sym_unknown_option_token1,
  [anon_sym_output] = aux_sym_unknown_option_token1,
  [anon_sym_max_DASHoutput] = aux_sym_unknown_option_token1,
  [anon_sym_chunk_DASHsize] = aux_sym_unknown_option_token1,
  [anon_sym_input_DASHsize_DASHhint] = aux_sym_unknown_option_token1,
  [anon_sym_key_DASHorigin] = aux_sym_unknown_option_token1,
  [sym__origin] = sym__origin,
  [anon_sym_import_DASHoptions] = aux_sym_unknown_option_token1,
  [sym__import_parameter] = sym__import_parameter,
  [anon_sym_export_DASHoptions] = aux_sym_unknown_option_token1,
  [sym__export_parameter] = sym__export_parameter,
  [anon_sym_with_DASHcolons] = aux_sym_unknown_option_token1,
  [anon_sym_legacy_DASHlist_DASHmode] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHfingerprint] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHsubkey_DASHfingerprint] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHicao_DASHspelling] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHkeygrip] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHkey_DASHorigin] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHwkd_DASHhash] = aux_sym_unknown_option_token1,
  [anon_sym_with_DASHsecret] = aux_sym_unknown_option_token1,
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
  [sym_armor] = sym_armor,
  [sym_no_armor] = sym_no_armor,
  [sym_output] = sym_output,
  [sym_max_output] = sym_max_output,
  [sym_chunk_size] = sym_chunk_size,
  [sym_input_size_hint] = sym_input_size_hint,
  [sym_key_origin] = sym_key_origin,
  [sym_import_options] = sym_import_options,
  [sym_export_options] = sym_export_options,
  [sym_with_colons] = sym_with_colons,
  [sym_legacy_list_mode] = sym_legacy_list_mode,
  [sym_with_fingerprint] = sym_with_fingerprint,
  [sym_with_subkey_fingerprint] = sym_with_subkey_fingerprint,
  [sym_with_icao_spelling] = sym_with_icao_spelling,
  [sym_with_keygrip] = sym_with_keygrip,
  [sym_with_key_origin] = sym_with_key_origin,
  [sym_with_wkd_hash] = sym_with_wkd_hash,
  [sym_with_secret] = sym_with_secret,
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
  [aux_sym_import_options_repeat1] = aux_sym_import_options_repeat1,
  [aux_sym_export_options_repeat1] = aux_sym_export_options_repeat1,
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
  [anon_sym_armor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHarmor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_max_DASHoutput] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_chunk_DASHsize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_input_DASHsize_DASHhint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_key_DASHorigin] = {
    .visible = true,
    .named = true,
  },
  [sym__origin] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import_DASHoptions] = {
    .visible = true,
    .named = true,
  },
  [sym__import_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_export_DASHoptions] = {
    .visible = true,
    .named = true,
  },
  [sym__export_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_with_DASHcolons] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_legacy_DASHlist_DASHmode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHfingerprint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHsubkey_DASHfingerprint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHicao_DASHspelling] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHkeygrip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHkey_DASHorigin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHwkd_DASHhash] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with_DASHsecret] = {
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
  [sym_armor] = {
    .visible = true,
    .named = true,
  },
  [sym_no_armor] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_max_output] = {
    .visible = true,
    .named = true,
  },
  [sym_chunk_size] = {
    .visible = true,
    .named = true,
  },
  [sym_input_size_hint] = {
    .visible = true,
    .named = true,
  },
  [sym_key_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_import_options] = {
    .visible = true,
    .named = true,
  },
  [sym_export_options] = {
    .visible = true,
    .named = true,
  },
  [sym_with_colons] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_list_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_with_fingerprint] = {
    .visible = true,
    .named = true,
  },
  [sym_with_subkey_fingerprint] = {
    .visible = true,
    .named = true,
  },
  [sym_with_icao_spelling] = {
    .visible = true,
    .named = true,
  },
  [sym_with_keygrip] = {
    .visible = true,
    .named = true,
  },
  [sym_with_key_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_with_wkd_hash] = {
    .visible = true,
    .named = true,
  },
  [sym_with_secret] = {
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
  [aux_sym_import_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_options_repeat1] = {
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
  field_origin = 9,
  field_parameter = 10,
  field_policy = 11,
  field_value = 12,
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
  [field_origin] = "origin",
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
  [13] = {.index = 12, .length = 1},
  [14] = {.index = 13, .length = 2},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 1},
  [17] = {.index = 17, .length = 1},
  [18] = {.index = 18, .length = 1},
  [19] = {.index = 19, .length = 2},
  [20] = {.index = 21, .length = 2},
  [21] = {.index = 23, .length = 1},
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
    {field_origin, 2},
  [9] =
    {field_algorithm, 2},
  [10] =
    {field_mode, 2},
  [11] =
    {field_parameter, 0},
  [12] =
    {field_mechanism, 0},
  [13] =
    {field_mechanism, 2},
    {field_mechanism, 3, .inherited = true},
  [15] =
    {field_algorithm, 0},
  [16] =
    {field_content, 1},
  [17] =
    {field_parameter, 1},
  [18] =
    {field_mechanism, 1},
  [19] =
    {field_mechanism, 0, .inherited = true},
    {field_mechanism, 1, .inherited = true},
  [21] =
    {field_name, 2},
    {field_value, 4},
  [23] =
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
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
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
      if (eof) ADVANCE(603);
      if (lookahead == '"') ADVANCE(1837);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead == '\'') ADVANCE(1843);
      if (lookahead == ',') ADVANCE(1826);
      if (lookahead == '2') ADVANCE(1817);
      if (lookahead == '=') ADVANCE(1925);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1839);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1839);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1817);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      if (lookahead != 0) ADVANCE(1835);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(604);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (lookahead != 0) ADVANCE(1835);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1826);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'B') ADVANCE(120);
      if (lookahead == 'U') ADVANCE(366);
      if (lookahead == 'Z') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'g') ADVANCE(406);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'u') ADVANCE(385);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1859);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1826);
      if (lookahead == '0') ADVANCE(570);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(342);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'k') ADVANCE(482);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 'u') ADVANCE(363);
      if (lookahead == 'w') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(600);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1826);
      if (lookahead == '0') ADVANCE(570);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(356);
      if (lookahead == 'k') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(510);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'f') ADVANCE(600);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1837);
      if (lookahead == '%') ADVANCE(1836);
      if (lookahead == '\'') ADVANCE(1843);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1835);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1837);
      if (lookahead == '%') ADVANCE(1841);
      if (lookahead == '\\') ADVANCE(1840);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1839);
      if (lookahead != 0) ADVANCE(1839);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1837);
      if (lookahead == '\\') ADVANCE(1840);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1839);
      if (lookahead != 0) ADVANCE(1839);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1838);
      if (lookahead == '\'') ADVANCE(1844);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2020);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1847);
      if (lookahead == '\'') ADVANCE(1843);
      if (lookahead == '\\') ADVANCE(1846);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1845);
      if (lookahead != 0) ADVANCE(1845);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(1843);
      if (lookahead == '\\') ADVANCE(1846);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1845);
      if (lookahead != 0) ADVANCE(1845);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(313);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(601);
      if (lookahead == '.') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(170);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(320);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(485);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(316);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(270);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(350);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(367);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(446);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(488);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(541);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(248);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(391);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(543);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(409);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(464);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(502);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(556);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(386);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(601);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(2024);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(1979);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(1980);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(2018);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(567);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(2024);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == '5') ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(53);
      END_STATE();
    case 58:
      if (lookahead == '1') ADVANCE(1855);
      if (lookahead == '2') ADVANCE(1854);
      END_STATE();
    case 59:
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == '1') ADVANCE(1859);
      END_STATE();
    case 61:
      if (lookahead == '1') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(2024);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '5') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(2022);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(2025);
      END_STATE();
    case 66:
      if (lookahead == '2') ADVANCE(70);
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '9') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == '3') ADVANCE(1946);
      END_STATE();
    case 69:
      if (lookahead == '4') ADVANCE(2024);
      END_STATE();
    case 70:
      if (lookahead == '4') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == '4') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == '5') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == '5') ADVANCE(2022);
      END_STATE();
    case 74:
      if (lookahead == '5') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == '6') ADVANCE(2024);
      END_STATE();
    case 76:
      if (lookahead == '6') ADVANCE(2022);
      END_STATE();
    case 77:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 78:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == '8') ADVANCE(1854);
      END_STATE();
    case 80:
      if (lookahead == '8') ADVANCE(72);
      END_STATE();
    case 81:
      if (lookahead == '8') ADVANCE(2022);
      END_STATE();
    case 82:
      if (lookahead == '8') ADVANCE(28);
      END_STATE();
    case 83:
      if (lookahead == '8') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == '8') ADVANCE(51);
      END_STATE();
    case 85:
      if (lookahead == '8') ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == '9') ADVANCE(64);
      END_STATE();
    case 87:
      if (lookahead == '9') ADVANCE(17);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1872);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(55);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(2025);
      END_STATE();
    case 95:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 96:
      if (lookahead == 'E') ADVANCE(110);
      END_STATE();
    case 97:
      if (lookahead == 'E') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 98:
      if (lookahead == 'E') ADVANCE(108);
      END_STATE();
    case 99:
      if (lookahead == 'F') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'H') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(2022);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'I') ADVANCE(94);
      END_STATE();
    case 105:
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 'I') ADVANCE(93);
      END_STATE();
    case 107:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 'L') ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'L') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(95);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(2025);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(2023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 119:
      if (lookahead == 'W') ADVANCE(112);
      END_STATE();
    case 120:
      if (lookahead == 'Z') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'u') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead == 'i') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(575);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(280);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(408);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(469);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(264);
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(348);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(315);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(535);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(438);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(395);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(340);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(344);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(322);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(1875);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(577);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(506);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(127);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(317);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(584);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(1880);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(1941);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(2025);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(1897);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(214);
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(1880);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(1946);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(1944);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(1829);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(410);
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(1941);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(2022);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(1888);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(393);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(568);
      if (lookahead == 's') ADVANCE(537);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'y') ADVANCE(490);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(460);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 243:
      if (lookahead == 'f') ADVANCE(533);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(1941);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(441);
      END_STATE();
    case 249:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(1944);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(1979);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(1827);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(1888);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(498);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(430);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(480);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(198);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(484);
      END_STATE();
    case 264:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(414);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(396);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(419);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(351);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(412);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(513);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(416);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 306:
      if (lookahead == 'k') ADVANCE(1897);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(425);
      END_STATE();
    case 308:
      if (lookahead == 'k') ADVANCE(21);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(538);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      END_STATE();
    case 311:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(176);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(401);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == 's') ADVANCE(512);
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 314:
      if (lookahead == 'k') ADVANCE(500);
      END_STATE();
    case 315:
      if (lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 316:
      if (lookahead == 'k') ADVANCE(218);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(372);
      if (lookahead == 'p') ADVANCE(268);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 317:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 318:
      if (lookahead == 'k') ADVANCE(374);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(383);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 322:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(1880);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(1946);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(1944);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(1941);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(507);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(245);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(572);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(505);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(276);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 349:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(138);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(437);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 356:
      if (lookahead == 'm') ADVANCE(443);
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(1946);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(1941);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(1897);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(481);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(540);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 386:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(1875);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(362);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(1897);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(561);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(355);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(481);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(365);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(371);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(523);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(471);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(1875);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(1881);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(1946);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(590);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(1979);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(251);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(397);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(465);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(463);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(421);
      END_STATE();
    case 444:
      if (lookahead == 'q') ADVANCE(586);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(1880);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(1854);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(548);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(1873);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(522);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(578);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(518);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(1875);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(1880);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(1946);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(1944);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(1829);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(1942);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(1979);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(1827);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(534);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(527);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(508);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(514);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(495);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(233);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(294);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 506:
      if (lookahead == 't') ADVANCE(1875);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(1880);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(1944);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(1888);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(572);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(407);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(470);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 533:
      if (lookahead == 'u') ADVANCE(1876);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(330);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 543:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 544:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 545:
      if (lookahead == 'u') ADVANCE(492);
      END_STATE();
    case 546:
      if (lookahead == 'u') ADVANCE(472);
      END_STATE();
    case 547:
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 548:
      if (lookahead == 'v') ADVANCE(212);
      END_STATE();
    case 549:
      if (lookahead == 'v') ADVANCE(400);
      END_STATE();
    case 550:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 551:
      if (lookahead == 'v') ADVANCE(483);
      END_STATE();
    case 552:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 553:
      if (lookahead == 'v') ADVANCE(226);
      END_STATE();
    case 554:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 555:
      if (lookahead == 'v') ADVANCE(321);
      END_STATE();
    case 556:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 557:
      if (lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 558:
      if (lookahead == 'w') ADVANCE(1944);
      END_STATE();
    case 559:
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 560:
      if (lookahead == 'w') ADVANCE(373);
      END_STATE();
    case 561:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 562:
      if (lookahead == 'w') ADVANCE(359);
      END_STATE();
    case 563:
      if (lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 564:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 565:
      if (lookahead == 'x') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 566:
      if (lookahead == 'x') ADVANCE(1827);
      END_STATE();
    case 567:
      if (lookahead == 'x') ADVANCE(341);
      END_STATE();
    case 568:
      if (lookahead == 'x') ADVANCE(435);
      END_STATE();
    case 569:
      if (lookahead == 'x') ADVANCE(437);
      END_STATE();
    case 570:
      if (lookahead == 'x') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 571:
      if (lookahead == 'y') ADVANCE(1944);
      END_STATE();
    case 572:
      if (lookahead == 'y') ADVANCE(1829);
      END_STATE();
    case 573:
      if (lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 574:
      if (lookahead == 'y') ADVANCE(1827);
      END_STATE();
    case 575:
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 576:
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 577:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 579:
      if (lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 580:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 581:
      if (lookahead == 'y') ADVANCE(484);
      END_STATE();
    case 582:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 583:
      if (lookahead == 'y') ADVANCE(501);
      END_STATE();
    case 584:
      if (lookahead == 'y') ADVANCE(43);
      END_STATE();
    case 585:
      if (lookahead == '{') ADVANCE(444);
      END_STATE();
    case 586:
      if (lookahead == '}') ADVANCE(1842);
      END_STATE();
    case 587:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(1969);
      END_STATE();
    case 588:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1868);
      END_STATE();
    case 589:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1818);
      END_STATE();
    case 590:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1979);
      END_STATE();
    case 591:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2016);
      END_STATE();
    case 592:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2017);
      END_STATE();
    case 593:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 594:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2015);
      END_STATE();
    case 595:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      END_STATE();
    case 596:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      END_STATE();
    case 597:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(596);
      END_STATE();
    case 598:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      END_STATE();
    case 599:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      END_STATE();
    case 600:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 601:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 602:
      if (eof) ADVANCE(603);
      if (lookahead == '\n') ADVANCE(604);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2021);
      if (lookahead == ',') ADVANCE(1826);
      if (lookahead == '=') ADVANCE(1925);
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == 'b') ADVANCE(1814);
      if (lookahead == 'c') ADVANCE(1110);
      if (lookahead == 'd') ADVANCE(881);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == 'f') ADVANCE(1380);
      if (lookahead == 'g') ADVANCE(1315);
      if (lookahead == 'h') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(1273);
      if (lookahead == 'k') ADVANCE(882);
      if (lookahead == 'l') ADVANCE(883);
      if (lookahead == 'm') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(1381);
      if (lookahead == 'o') ADVANCE(1464);
      if (lookahead == 'p') ADVANCE(907);
      if (lookahead == 'r') ADVANCE(884);
      if (lookahead == 's') ADVANCE(715);
      if (lookahead == 't') ADVANCE(885);
      if (lookahead == 'u') ADVANCE(1316);
      if (lookahead == 'v') ADVANCE(908);
      if (lookahead == 'w') ADVANCE(1128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1394);
      if (lookahead == 'i') ADVANCE(860);
      if (lookahead == 'r') ADVANCE(1133);
      if (lookahead == 's') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == 'd') ADVANCE(784);
      if (lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1438);
      if (lookahead == 'g') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(842);
      if (lookahead == 's') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1975);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '0') ADVANCE(1973);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1212);
      if (lookahead == 'e') ADVANCE(1318);
      if (lookahead == 'k') ADVANCE(1132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(721);
      if (lookahead == '4') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(1833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '2') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '4') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '7') ADVANCE(1976);
      if (lookahead == '8') ADVANCE(1977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '8') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1317);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(781);
      if (lookahead == 'c') ADVANCE(1510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1558);
      if (lookahead == 'c') ADVANCE(1413);
      if (lookahead == 'd') ADVANCE(1039);
      if (lookahead == 'e') ADVANCE(1321);
      if (lookahead == 'g') ADVANCE(1508);
      if (lookahead == 'i') ADVANCE(1324);
      if (lookahead == 'm') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(932);
      if (lookahead == 'r') ADVANCE(758);
      if (lookahead == 's') ADVANCE(923);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead == 'u') ADVANCE(1744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1239);
      if (lookahead == 'k') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1251);
      if (lookahead == 's') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(929);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1319);
      if (lookahead == 'e') ADVANCE(1493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(785);
      if (lookahead == 'p') ADVANCE(1249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1390);
      if (lookahead == 'i') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1232);
      if (lookahead == 'p') ADVANCE(1761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1146);
      if (lookahead == 'd') ADVANCE(1136);
      if (lookahead == 'm') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1416);
      if (lookahead == 's') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1184);
      if (lookahead == 'd') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1119);
      if (lookahead == 'k') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1395);
      if (lookahead == 'f') ADVANCE(1142);
      if (lookahead == 'i') ADVANCE(803);
      if (lookahead == 'k') ADVANCE(916);
      if (lookahead == 's') ADVANCE(990);
      if (lookahead == 'w') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1590);
      if (lookahead == 's') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1135);
      if (lookahead == 'q') ADVANCE(1750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(988);
      if (lookahead == 'o') ADVANCE(1769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1434);
      if (lookahead == 'd') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1030);
      if (lookahead == 'r') ADVANCE(1612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1038);
      if (lookahead == 'k') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1124);
      if (lookahead == 'k') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(850);
      if (lookahead == 'g') ADVANCE(910);
      if (lookahead == 'l') ADVANCE(1786);
      if (lookahead == 'r') ADVANCE(1294);
      if (lookahead == 's') ADVANCE(1211);
      if (lookahead == 'u') ADVANCE(1680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1159);
      if (lookahead == 'l') ADVANCE(777);
      if (lookahead == 's') ADVANCE(1196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1616);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'd') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == 'i') ADVANCE(1509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1083);
      if (lookahead == 'i') ADVANCE(1295);
      if (lookahead == 'o') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == 'f') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1792);
      if (lookahead == 'o') ADVANCE(1059);
      if (lookahead == 'r') ADVANCE(1746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1494);
      if (lookahead == 'g') ADVANCE(1442);
      if (lookahead == 'h') ADVANCE(1430);
      if (lookahead == 'r') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(802);
      if (lookahead == 'i') ADVANCE(1685);
      if (lookahead == 'p') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1514);
      if (lookahead == 'o') ADVANCE(1574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(801);
      if (lookahead == 'i') ADVANCE(1100);
      if (lookahead == 'k') ADVANCE(1208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1693);
      if (lookahead == 'i') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead == 'o') ADVANCE(1756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1375);
      if (lookahead == 'r') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(808);
      if (lookahead == 'u') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1793);
      if (lookahead == 't') ADVANCE(1795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'e') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1747);
      if (lookahead == 'o') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1300);
      if (lookahead == 'l') ADVANCE(1400);
      if (lookahead == 'r') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1449);
      if (lookahead == 'o') ADVANCE(1760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1571);
      if (lookahead == 's') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1475);
      if (lookahead == 'o') ADVANCE(1309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1305);
      if (lookahead == 'l') ADVANCE(1433);
      if (lookahead == 'r') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(628);
      if (lookahead == 's') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'k') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(926);
      if (lookahead == 'r') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1467);
      if (lookahead == 'n') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1752);
      if (lookahead == 'n') ADVANCE(1019);
      if (lookahead == 'o') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(728);
      if (lookahead == 'x') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1748);
      if (lookahead == 'r') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1084);
      if (lookahead == 't') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1098);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == 'x') ADVANCE(606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(839);
      if (lookahead == 'x') ADVANCE(1472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1285);
      if (lookahead == 'r') ADVANCE(1431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(912);
      if (lookahead == 'u') ADVANCE(1683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'p') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'q') ADVANCE(1770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1281);
      if (lookahead == 's') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1299);
      if (lookahead == 's') ADVANCE(1223);
      if (lookahead == 'u') ADVANCE(1690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 's') ADVANCE(1657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1611);
      if (lookahead == 'y') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'u') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'w') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'y') ADVANCE(700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1817);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'z') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1817);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == 'z') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1817);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym_unknown_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym_unknown_option_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1818);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1848);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2020);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(585);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1848);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2020);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(585);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1848);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(anon_sym_keyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym__charset);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym__charset);
      if (lookahead == '5') ADVANCE(1854);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(anon_sym_utf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(anon_sym_no_DASHutf8_DASHstrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym_compress_level_token1);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym_default_cert_level_token1);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token1);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym_add_desig_revoker_token2);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(sym__mechanism);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(sym__mechanism);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym__keyid_format);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym__tofu_policy);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_expert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_ungroup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(anon_sym_sender);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_armor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym__origin);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(sym__origin);
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_textmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym_s2k_mode_token1);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(anon_sym_gnupg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_openpgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_pgp7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_pgp8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(anon_sym_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(sym__compliance);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(sym__compliance);
      if (lookahead == 'b') ADVANCE(286);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(anon_sym_require_DASHcompliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1817);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1983);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1984);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1985);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1986);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1987);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1988);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1989);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1990);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1991);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1992);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1993);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1994);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1995);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1996);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1997);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1998);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1999);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2000);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2001);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2002);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2003);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2004);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2005);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2006);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2007);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2008);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2009);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2010);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2011);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2012);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2013);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2014);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(601);
      if (lookahead == '.') ADVANCE(591);
      if (lookahead == ':') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2016);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2017);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2020);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2021);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__cipher_algo);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__cipher_algo);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__hash_algo);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__compression_algo);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 602},
  [2] = {.lex_state = 602},
  [3] = {.lex_state = 602},
  [4] = {.lex_state = 602},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 602},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 602},
  [90] = {.lex_state = 602},
  [91] = {.lex_state = 602},
  [92] = {.lex_state = 602},
  [93] = {.lex_state = 602},
  [94] = {.lex_state = 602},
  [95] = {.lex_state = 602},
  [96] = {.lex_state = 602},
  [97] = {.lex_state = 602},
  [98] = {.lex_state = 602},
  [99] = {.lex_state = 602},
  [100] = {.lex_state = 602},
  [101] = {.lex_state = 602},
  [102] = {.lex_state = 602},
  [103] = {.lex_state = 602},
  [104] = {.lex_state = 602},
  [105] = {.lex_state = 602},
  [106] = {.lex_state = 602},
  [107] = {.lex_state = 602},
  [108] = {.lex_state = 602},
  [109] = {.lex_state = 602},
  [110] = {.lex_state = 602},
  [111] = {.lex_state = 602},
  [112] = {.lex_state = 602},
  [113] = {.lex_state = 602},
  [114] = {.lex_state = 602},
  [115] = {.lex_state = 602},
  [116] = {.lex_state = 602},
  [117] = {.lex_state = 602},
  [118] = {.lex_state = 602},
  [119] = {.lex_state = 602},
  [120] = {.lex_state = 602},
  [121] = {.lex_state = 602},
  [122] = {.lex_state = 602},
  [123] = {.lex_state = 602},
  [124] = {.lex_state = 602},
  [125] = {.lex_state = 602},
  [126] = {.lex_state = 602},
  [127] = {.lex_state = 602},
  [128] = {.lex_state = 602},
  [129] = {.lex_state = 602},
  [130] = {.lex_state = 602},
  [131] = {.lex_state = 602},
  [132] = {.lex_state = 589},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 602},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 5},
  [137] = {.lex_state = 602},
  [138] = {.lex_state = 602},
  [139] = {.lex_state = 602},
  [140] = {.lex_state = 602},
  [141] = {.lex_state = 602},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 588},
  [146] = {.lex_state = 588},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 602},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 602},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 54},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 52},
  [155] = {.lex_state = 52},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 52},
  [158] = {.lex_state = 602},
  [159] = {.lex_state = 602},
  [160] = {.lex_state = 52},
  [161] = {.lex_state = 602},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 602},
  [164] = {.lex_state = 602},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 5},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 602},
  [170] = {.lex_state = 602},
  [171] = {.lex_state = 602},
  [172] = {.lex_state = 602},
  [173] = {.lex_state = 52},
  [174] = {.lex_state = 52},
  [175] = {.lex_state = 52},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 587},
  [185] = {.lex_state = 52},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 52},
  [188] = {.lex_state = 602},
  [189] = {.lex_state = 602},
  [190] = {.lex_state = 602},
  [191] = {.lex_state = 602},
  [192] = {.lex_state = 602},
  [193] = {.lex_state = 602},
  [194] = {.lex_state = 602},
  [195] = {.lex_state = 602},
  [196] = {.lex_state = 602},
  [197] = {.lex_state = 602},
  [198] = {.lex_state = 602},
  [199] = {.lex_state = 602},
  [200] = {.lex_state = 602},
  [201] = {.lex_state = 602},
  [202] = {.lex_state = 602},
  [203] = {.lex_state = 602},
  [204] = {.lex_state = 602},
  [205] = {.lex_state = 602},
  [206] = {.lex_state = 602},
  [207] = {.lex_state = 602},
  [208] = {.lex_state = 602},
  [209] = {.lex_state = 602},
  [210] = {.lex_state = 602},
  [211] = {.lex_state = 602},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 602},
  [214] = {.lex_state = 602},
  [215] = {.lex_state = 602},
  [216] = {.lex_state = 602},
  [217] = {.lex_state = 602},
  [218] = {.lex_state = 602},
  [219] = {.lex_state = 602},
  [220] = {.lex_state = 602},
  [221] = {.lex_state = 602},
  [222] = {.lex_state = 602},
  [223] = {.lex_state = 602},
  [224] = {.lex_state = 602},
  [225] = {.lex_state = 602},
  [226] = {.lex_state = 602},
  [227] = {.lex_state = 602},
  [228] = {.lex_state = 602},
  [229] = {.lex_state = 602},
  [230] = {.lex_state = 602},
  [231] = {.lex_state = 602},
  [232] = {.lex_state = 602},
  [233] = {.lex_state = 602},
  [234] = {.lex_state = 602},
  [235] = {.lex_state = 602},
  [236] = {.lex_state = 602},
  [237] = {.lex_state = 602},
  [238] = {.lex_state = 602},
  [239] = {.lex_state = 602},
  [240] = {.lex_state = 602},
  [241] = {.lex_state = 602},
  [242] = {.lex_state = 602},
  [243] = {.lex_state = 602},
  [244] = {.lex_state = 602},
  [245] = {.lex_state = 602},
  [246] = {.lex_state = 602},
  [247] = {.lex_state = 602},
  [248] = {.lex_state = 602},
  [249] = {.lex_state = 602},
  [250] = {.lex_state = 602},
  [251] = {.lex_state = 602},
  [252] = {.lex_state = 602},
  [253] = {.lex_state = 602},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 602},
  [257] = {.lex_state = 602},
  [258] = {.lex_state = 602},
  [259] = {.lex_state = 602},
  [260] = {.lex_state = 602},
  [261] = {.lex_state = 602},
  [262] = {.lex_state = 602},
  [263] = {.lex_state = 602},
  [264] = {.lex_state = 602},
  [265] = {.lex_state = 602},
  [266] = {.lex_state = 602},
  [267] = {.lex_state = 602},
  [268] = {.lex_state = 602},
  [269] = {.lex_state = 602},
  [270] = {.lex_state = 602},
  [271] = {.lex_state = 602},
  [272] = {.lex_state = 602},
  [273] = {.lex_state = 602},
  [274] = {.lex_state = 602},
  [275] = {.lex_state = 602},
  [276] = {.lex_state = 602},
  [277] = {.lex_state = 602},
  [278] = {.lex_state = 602},
  [279] = {.lex_state = 602},
  [280] = {.lex_state = 602},
  [281] = {.lex_state = 602},
  [282] = {.lex_state = 602},
  [283] = {.lex_state = 602},
  [284] = {.lex_state = 602},
  [285] = {.lex_state = 602},
  [286] = {.lex_state = 602},
  [287] = {.lex_state = 602},
  [288] = {.lex_state = 602},
  [289] = {.lex_state = 602},
  [290] = {.lex_state = 602},
  [291] = {.lex_state = 602},
  [292] = {.lex_state = 602},
  [293] = {.lex_state = 602},
  [294] = {.lex_state = 602},
  [295] = {.lex_state = 602},
  [296] = {.lex_state = 602},
  [297] = {.lex_state = 602},
  [298] = {.lex_state = 602},
  [299] = {.lex_state = 602},
  [300] = {.lex_state = 602},
  [301] = {.lex_state = 602},
  [302] = {.lex_state = 602},
  [303] = {.lex_state = 602},
  [304] = {.lex_state = 602},
  [305] = {.lex_state = 602},
  [306] = {.lex_state = 602},
  [307] = {.lex_state = 602},
  [308] = {.lex_state = 602},
  [309] = {.lex_state = 602},
  [310] = {.lex_state = 602},
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
    [sym_config] = STATE(130),
    [sym_unknown_option] = STATE(129),
    [sym_default_key] = STATE(129),
    [sym_default_recipient] = STATE(129),
    [sym_default_recipient_self] = STATE(129),
    [sym_no_default_recipient] = STATE(129),
    [sym_verbose] = STATE(129),
    [sym_no_tty] = STATE(129),
    [sym_list_options] = STATE(129),
    [sym_verify_options] = STATE(129),
    [sym_enable_large_rsa] = STATE(129),
    [sym_disable_large_rsa] = STATE(129),
    [sym_enable_dsa2] = STATE(129),
    [sym_disable_dsa2] = STATE(129),
    [sym_photo_viewer] = STATE(129),
    [sym_exec_path] = STATE(129),
    [sym_keyring] = STATE(129),
    [sym_primary_keyring] = STATE(129),
    [sym_trustdb_name] = STATE(129),
    [sym_display_charset] = STATE(129),
    [sym_utf8_strings] = STATE(129),
    [sym_no_utf8_strings] = STATE(129),
    [sym_compress_level] = STATE(129),
    [sym_bzip2_compress_level] = STATE(129),
    [sym_no_compress] = STATE(129),
    [sym_bzip2_decompress_lowmem] = STATE(129),
    [sym_mangle_dos_filenames] = STATE(129),
    [sym_no_mangle_dos_filenames] = STATE(129),
    [sym_ask_cert_level] = STATE(129),
    [sym_no_ask_cert_level] = STATE(129),
    [sym_default_cert_level] = STATE(129),
    [sym_min_cert_level] = STATE(129),
    [sym_trusted_key] = STATE(129),
    [sym_add_desig_revoker] = STATE(129),
    [sym_trust_model] = STATE(129),
    [sym_always_trust] = STATE(129),
    [sym_assert_signer] = STATE(129),
    [sym_auto_key_locate] = STATE(129),
    [sym_no_auto_key_locate] = STATE(129),
    [sym_auto_key_import] = STATE(129),
    [sym_no_auto_key_import] = STATE(129),
    [sym_auto_key_retrieve] = STATE(129),
    [sym_no_auto_key_retrieve] = STATE(129),
    [sym_keyid_format] = STATE(129),
    [sym_keyserver] = STATE(129),
    [sym_completes_needed] = STATE(129),
    [sym_marginals_needed] = STATE(129),
    [sym_tofu_default_policy] = STATE(129),
    [sym_max_cert_depth] = STATE(129),
    [sym_no_sig_cache] = STATE(129),
    [sym_auto_check_trustdb] = STATE(129),
    [sym_no_auto_check_trustdb] = STATE(129),
    [sym_agent_program] = STATE(129),
    [sym_dirmngr_program] = STATE(129),
    [sym_disable_dirmngr] = STATE(129),
    [sym_no_autostart] = STATE(129),
    [sym_lock_once] = STATE(129),
    [sym_lock_multiple] = STATE(129),
    [sym_lock_never] = STATE(129),
    [sym_exit_on_status_write_error] = STATE(129),
    [sym_limit_card_insert_tries] = STATE(129),
    [sym_no_random_seed_file] = STATE(129),
    [sym_no_greeting] = STATE(129),
    [sym_no_secmem_warning] = STATE(129),
    [sym_no_permission_warning] = STATE(129),
    [sym_require_secmem] = STATE(129),
    [sym_no_require_secmem] = STATE(129),
    [sym_require_cross_verification] = STATE(129),
    [sym_no_require_cross_verification] = STATE(129),
    [sym_expert] = STATE(129),
    [sym_no_expert] = STATE(129),
    [sym_recipient] = STATE(129),
    [sym_hidden_recipient] = STATE(129),
    [sym_recipient_file] = STATE(129),
    [sym_hidden_recipient_file] = STATE(129),
    [sym_encrypt_to] = STATE(129),
    [sym_hidden_encrypt_to] = STATE(129),
    [sym_no_encrypt_to] = STATE(129),
    [sym_group] = STATE(129),
    [sym_ungroup] = STATE(129),
    [sym_no_groups] = STATE(129),
    [sym_local_user] = STATE(129),
    [sym_sender] = STATE(129),
    [sym_try_secret_name] = STATE(129),
    [sym_try_all_secrets] = STATE(129),
    [sym_skip_hidden_recipients] = STATE(129),
    [sym_no_skip_hidden_recipients] = STATE(129),
    [sym_armor] = STATE(129),
    [sym_no_armor] = STATE(129),
    [sym_output] = STATE(129),
    [sym_max_output] = STATE(129),
    [sym_chunk_size] = STATE(129),
    [sym_input_size_hint] = STATE(129),
    [sym_key_origin] = STATE(129),
    [sym_import_options] = STATE(129),
    [sym_export_options] = STATE(129),
    [sym_with_colons] = STATE(129),
    [sym_legacy_list_mode] = STATE(129),
    [sym_with_fingerprint] = STATE(129),
    [sym_with_subkey_fingerprint] = STATE(129),
    [sym_with_icao_spelling] = STATE(129),
    [sym_with_keygrip] = STATE(129),
    [sym_with_key_origin] = STATE(129),
    [sym_with_wkd_hash] = STATE(129),
    [sym_with_secret] = STATE(129),
    [sym_textmode] = STATE(129),
    [sym_no_textmode] = STATE(129),
    [sym_force_ocb] = STATE(129),
    [sym_disable_signer_uid] = STATE(129),
    [sym_include_key_block] = STATE(129),
    [sym_no_include_key_block] = STATE(129),
    [sym_personal_cipher_preferences] = STATE(129),
    [sym_personal_digest_preferences] = STATE(129),
    [sym_personal_compress_preferences] = STATE(129),
    [sym_s2k_cipher_algo] = STATE(129),
    [sym_s2k_digest_algo] = STATE(129),
    [sym_s2k_mode] = STATE(129),
    [sym_s2k_count] = STATE(129),
    [sym_gnupg] = STATE(129),
    [sym_openpgp] = STATE(129),
    [sym_rfc4880] = STATE(129),
    [sym_rfc4880bis] = STATE(129),
    [sym_rfc2440] = STATE(129),
    [sym_pgp7] = STATE(129),
    [sym_pgp8] = STATE(129),
    [sym_compliance] = STATE(129),
    [sym_min_rsa_length] = STATE(129),
    [sym_require_compliance] = STATE(129),
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
    [anon_sym_armor] = ACTIONS(181),
    [anon_sym_no_DASHarmor] = ACTIONS(183),
    [anon_sym_output] = ACTIONS(185),
    [anon_sym_max_DASHoutput] = ACTIONS(187),
    [anon_sym_chunk_DASHsize] = ACTIONS(189),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(191),
    [anon_sym_key_DASHorigin] = ACTIONS(193),
    [anon_sym_import_DASHoptions] = ACTIONS(195),
    [anon_sym_export_DASHoptions] = ACTIONS(197),
    [anon_sym_with_DASHcolons] = ACTIONS(199),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(201),
    [anon_sym_with_DASHfingerprint] = ACTIONS(203),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(205),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(207),
    [anon_sym_with_DASHkeygrip] = ACTIONS(209),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(211),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(213),
    [anon_sym_with_DASHsecret] = ACTIONS(215),
    [anon_sym_textmode] = ACTIONS(217),
    [anon_sym_no_DASHtextmode] = ACTIONS(219),
    [anon_sym_force_DASHocb] = ACTIONS(221),
    [anon_sym_force_DASHaead] = ACTIONS(221),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(223),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(225),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(227),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(229),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(231),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(233),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(235),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(237),
    [anon_sym_s2k_DASHmode] = ACTIONS(239),
    [anon_sym_s2k_DASHcount] = ACTIONS(241),
    [anon_sym_gnupg] = ACTIONS(243),
    [anon_sym_openpgp] = ACTIONS(245),
    [anon_sym_rfc4880] = ACTIONS(247),
    [anon_sym_rfc4880bis] = ACTIONS(249),
    [anon_sym_rfc2440] = ACTIONS(251),
    [anon_sym_pgp7] = ACTIONS(253),
    [anon_sym_pgp8] = ACTIONS(255),
    [anon_sym_compliance] = ACTIONS(257),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(259),
    [anon_sym_require_DASHcompliance] = ACTIONS(261),
    [sym_comment] = ACTIONS(263),
    [sym__space] = ACTIONS(265),
  },
  [2] = {
    [sym_unknown_option] = STATE(129),
    [sym_default_key] = STATE(129),
    [sym_default_recipient] = STATE(129),
    [sym_default_recipient_self] = STATE(129),
    [sym_no_default_recipient] = STATE(129),
    [sym_verbose] = STATE(129),
    [sym_no_tty] = STATE(129),
    [sym_list_options] = STATE(129),
    [sym_verify_options] = STATE(129),
    [sym_enable_large_rsa] = STATE(129),
    [sym_disable_large_rsa] = STATE(129),
    [sym_enable_dsa2] = STATE(129),
    [sym_disable_dsa2] = STATE(129),
    [sym_photo_viewer] = STATE(129),
    [sym_exec_path] = STATE(129),
    [sym_keyring] = STATE(129),
    [sym_primary_keyring] = STATE(129),
    [sym_trustdb_name] = STATE(129),
    [sym_display_charset] = STATE(129),
    [sym_utf8_strings] = STATE(129),
    [sym_no_utf8_strings] = STATE(129),
    [sym_compress_level] = STATE(129),
    [sym_bzip2_compress_level] = STATE(129),
    [sym_no_compress] = STATE(129),
    [sym_bzip2_decompress_lowmem] = STATE(129),
    [sym_mangle_dos_filenames] = STATE(129),
    [sym_no_mangle_dos_filenames] = STATE(129),
    [sym_ask_cert_level] = STATE(129),
    [sym_no_ask_cert_level] = STATE(129),
    [sym_default_cert_level] = STATE(129),
    [sym_min_cert_level] = STATE(129),
    [sym_trusted_key] = STATE(129),
    [sym_add_desig_revoker] = STATE(129),
    [sym_trust_model] = STATE(129),
    [sym_always_trust] = STATE(129),
    [sym_assert_signer] = STATE(129),
    [sym_auto_key_locate] = STATE(129),
    [sym_no_auto_key_locate] = STATE(129),
    [sym_auto_key_import] = STATE(129),
    [sym_no_auto_key_import] = STATE(129),
    [sym_auto_key_retrieve] = STATE(129),
    [sym_no_auto_key_retrieve] = STATE(129),
    [sym_keyid_format] = STATE(129),
    [sym_keyserver] = STATE(129),
    [sym_completes_needed] = STATE(129),
    [sym_marginals_needed] = STATE(129),
    [sym_tofu_default_policy] = STATE(129),
    [sym_max_cert_depth] = STATE(129),
    [sym_no_sig_cache] = STATE(129),
    [sym_auto_check_trustdb] = STATE(129),
    [sym_no_auto_check_trustdb] = STATE(129),
    [sym_agent_program] = STATE(129),
    [sym_dirmngr_program] = STATE(129),
    [sym_disable_dirmngr] = STATE(129),
    [sym_no_autostart] = STATE(129),
    [sym_lock_once] = STATE(129),
    [sym_lock_multiple] = STATE(129),
    [sym_lock_never] = STATE(129),
    [sym_exit_on_status_write_error] = STATE(129),
    [sym_limit_card_insert_tries] = STATE(129),
    [sym_no_random_seed_file] = STATE(129),
    [sym_no_greeting] = STATE(129),
    [sym_no_secmem_warning] = STATE(129),
    [sym_no_permission_warning] = STATE(129),
    [sym_require_secmem] = STATE(129),
    [sym_no_require_secmem] = STATE(129),
    [sym_require_cross_verification] = STATE(129),
    [sym_no_require_cross_verification] = STATE(129),
    [sym_expert] = STATE(129),
    [sym_no_expert] = STATE(129),
    [sym_recipient] = STATE(129),
    [sym_hidden_recipient] = STATE(129),
    [sym_recipient_file] = STATE(129),
    [sym_hidden_recipient_file] = STATE(129),
    [sym_encrypt_to] = STATE(129),
    [sym_hidden_encrypt_to] = STATE(129),
    [sym_no_encrypt_to] = STATE(129),
    [sym_group] = STATE(129),
    [sym_ungroup] = STATE(129),
    [sym_no_groups] = STATE(129),
    [sym_local_user] = STATE(129),
    [sym_sender] = STATE(129),
    [sym_try_secret_name] = STATE(129),
    [sym_try_all_secrets] = STATE(129),
    [sym_skip_hidden_recipients] = STATE(129),
    [sym_no_skip_hidden_recipients] = STATE(129),
    [sym_armor] = STATE(129),
    [sym_no_armor] = STATE(129),
    [sym_output] = STATE(129),
    [sym_max_output] = STATE(129),
    [sym_chunk_size] = STATE(129),
    [sym_input_size_hint] = STATE(129),
    [sym_key_origin] = STATE(129),
    [sym_import_options] = STATE(129),
    [sym_export_options] = STATE(129),
    [sym_with_colons] = STATE(129),
    [sym_legacy_list_mode] = STATE(129),
    [sym_with_fingerprint] = STATE(129),
    [sym_with_subkey_fingerprint] = STATE(129),
    [sym_with_icao_spelling] = STATE(129),
    [sym_with_keygrip] = STATE(129),
    [sym_with_key_origin] = STATE(129),
    [sym_with_wkd_hash] = STATE(129),
    [sym_with_secret] = STATE(129),
    [sym_textmode] = STATE(129),
    [sym_no_textmode] = STATE(129),
    [sym_force_ocb] = STATE(129),
    [sym_disable_signer_uid] = STATE(129),
    [sym_include_key_block] = STATE(129),
    [sym_no_include_key_block] = STATE(129),
    [sym_personal_cipher_preferences] = STATE(129),
    [sym_personal_digest_preferences] = STATE(129),
    [sym_personal_compress_preferences] = STATE(129),
    [sym_s2k_cipher_algo] = STATE(129),
    [sym_s2k_digest_algo] = STATE(129),
    [sym_s2k_mode] = STATE(129),
    [sym_s2k_count] = STATE(129),
    [sym_gnupg] = STATE(129),
    [sym_openpgp] = STATE(129),
    [sym_rfc4880] = STATE(129),
    [sym_rfc4880bis] = STATE(129),
    [sym_rfc2440] = STATE(129),
    [sym_pgp7] = STATE(129),
    [sym_pgp8] = STATE(129),
    [sym_compliance] = STATE(129),
    [sym_min_rsa_length] = STATE(129),
    [sym_require_compliance] = STATE(129),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(267),
    [aux_sym_config_token1] = ACTIONS(269),
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
    [anon_sym_armor] = ACTIONS(181),
    [anon_sym_no_DASHarmor] = ACTIONS(183),
    [anon_sym_output] = ACTIONS(185),
    [anon_sym_max_DASHoutput] = ACTIONS(187),
    [anon_sym_chunk_DASHsize] = ACTIONS(189),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(191),
    [anon_sym_key_DASHorigin] = ACTIONS(193),
    [anon_sym_import_DASHoptions] = ACTIONS(195),
    [anon_sym_export_DASHoptions] = ACTIONS(197),
    [anon_sym_with_DASHcolons] = ACTIONS(199),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(201),
    [anon_sym_with_DASHfingerprint] = ACTIONS(203),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(205),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(207),
    [anon_sym_with_DASHkeygrip] = ACTIONS(209),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(211),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(213),
    [anon_sym_with_DASHsecret] = ACTIONS(215),
    [anon_sym_textmode] = ACTIONS(217),
    [anon_sym_no_DASHtextmode] = ACTIONS(219),
    [anon_sym_force_DASHocb] = ACTIONS(221),
    [anon_sym_force_DASHaead] = ACTIONS(221),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(223),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(225),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(227),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(229),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(231),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(233),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(235),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(237),
    [anon_sym_s2k_DASHmode] = ACTIONS(239),
    [anon_sym_s2k_DASHcount] = ACTIONS(241),
    [anon_sym_gnupg] = ACTIONS(243),
    [anon_sym_openpgp] = ACTIONS(245),
    [anon_sym_rfc4880] = ACTIONS(247),
    [anon_sym_rfc4880bis] = ACTIONS(249),
    [anon_sym_rfc2440] = ACTIONS(251),
    [anon_sym_pgp7] = ACTIONS(253),
    [anon_sym_pgp8] = ACTIONS(255),
    [anon_sym_compliance] = ACTIONS(257),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(259),
    [anon_sym_require_DASHcompliance] = ACTIONS(261),
    [sym_comment] = ACTIONS(263),
    [sym__space] = ACTIONS(265),
  },
  [3] = {
    [sym_unknown_option] = STATE(129),
    [sym_default_key] = STATE(129),
    [sym_default_recipient] = STATE(129),
    [sym_default_recipient_self] = STATE(129),
    [sym_no_default_recipient] = STATE(129),
    [sym_verbose] = STATE(129),
    [sym_no_tty] = STATE(129),
    [sym_list_options] = STATE(129),
    [sym_verify_options] = STATE(129),
    [sym_enable_large_rsa] = STATE(129),
    [sym_disable_large_rsa] = STATE(129),
    [sym_enable_dsa2] = STATE(129),
    [sym_disable_dsa2] = STATE(129),
    [sym_photo_viewer] = STATE(129),
    [sym_exec_path] = STATE(129),
    [sym_keyring] = STATE(129),
    [sym_primary_keyring] = STATE(129),
    [sym_trustdb_name] = STATE(129),
    [sym_display_charset] = STATE(129),
    [sym_utf8_strings] = STATE(129),
    [sym_no_utf8_strings] = STATE(129),
    [sym_compress_level] = STATE(129),
    [sym_bzip2_compress_level] = STATE(129),
    [sym_no_compress] = STATE(129),
    [sym_bzip2_decompress_lowmem] = STATE(129),
    [sym_mangle_dos_filenames] = STATE(129),
    [sym_no_mangle_dos_filenames] = STATE(129),
    [sym_ask_cert_level] = STATE(129),
    [sym_no_ask_cert_level] = STATE(129),
    [sym_default_cert_level] = STATE(129),
    [sym_min_cert_level] = STATE(129),
    [sym_trusted_key] = STATE(129),
    [sym_add_desig_revoker] = STATE(129),
    [sym_trust_model] = STATE(129),
    [sym_always_trust] = STATE(129),
    [sym_assert_signer] = STATE(129),
    [sym_auto_key_locate] = STATE(129),
    [sym_no_auto_key_locate] = STATE(129),
    [sym_auto_key_import] = STATE(129),
    [sym_no_auto_key_import] = STATE(129),
    [sym_auto_key_retrieve] = STATE(129),
    [sym_no_auto_key_retrieve] = STATE(129),
    [sym_keyid_format] = STATE(129),
    [sym_keyserver] = STATE(129),
    [sym_completes_needed] = STATE(129),
    [sym_marginals_needed] = STATE(129),
    [sym_tofu_default_policy] = STATE(129),
    [sym_max_cert_depth] = STATE(129),
    [sym_no_sig_cache] = STATE(129),
    [sym_auto_check_trustdb] = STATE(129),
    [sym_no_auto_check_trustdb] = STATE(129),
    [sym_agent_program] = STATE(129),
    [sym_dirmngr_program] = STATE(129),
    [sym_disable_dirmngr] = STATE(129),
    [sym_no_autostart] = STATE(129),
    [sym_lock_once] = STATE(129),
    [sym_lock_multiple] = STATE(129),
    [sym_lock_never] = STATE(129),
    [sym_exit_on_status_write_error] = STATE(129),
    [sym_limit_card_insert_tries] = STATE(129),
    [sym_no_random_seed_file] = STATE(129),
    [sym_no_greeting] = STATE(129),
    [sym_no_secmem_warning] = STATE(129),
    [sym_no_permission_warning] = STATE(129),
    [sym_require_secmem] = STATE(129),
    [sym_no_require_secmem] = STATE(129),
    [sym_require_cross_verification] = STATE(129),
    [sym_no_require_cross_verification] = STATE(129),
    [sym_expert] = STATE(129),
    [sym_no_expert] = STATE(129),
    [sym_recipient] = STATE(129),
    [sym_hidden_recipient] = STATE(129),
    [sym_recipient_file] = STATE(129),
    [sym_hidden_recipient_file] = STATE(129),
    [sym_encrypt_to] = STATE(129),
    [sym_hidden_encrypt_to] = STATE(129),
    [sym_no_encrypt_to] = STATE(129),
    [sym_group] = STATE(129),
    [sym_ungroup] = STATE(129),
    [sym_no_groups] = STATE(129),
    [sym_local_user] = STATE(129),
    [sym_sender] = STATE(129),
    [sym_try_secret_name] = STATE(129),
    [sym_try_all_secrets] = STATE(129),
    [sym_skip_hidden_recipients] = STATE(129),
    [sym_no_skip_hidden_recipients] = STATE(129),
    [sym_armor] = STATE(129),
    [sym_no_armor] = STATE(129),
    [sym_output] = STATE(129),
    [sym_max_output] = STATE(129),
    [sym_chunk_size] = STATE(129),
    [sym_input_size_hint] = STATE(129),
    [sym_key_origin] = STATE(129),
    [sym_import_options] = STATE(129),
    [sym_export_options] = STATE(129),
    [sym_with_colons] = STATE(129),
    [sym_legacy_list_mode] = STATE(129),
    [sym_with_fingerprint] = STATE(129),
    [sym_with_subkey_fingerprint] = STATE(129),
    [sym_with_icao_spelling] = STATE(129),
    [sym_with_keygrip] = STATE(129),
    [sym_with_key_origin] = STATE(129),
    [sym_with_wkd_hash] = STATE(129),
    [sym_with_secret] = STATE(129),
    [sym_textmode] = STATE(129),
    [sym_no_textmode] = STATE(129),
    [sym_force_ocb] = STATE(129),
    [sym_disable_signer_uid] = STATE(129),
    [sym_include_key_block] = STATE(129),
    [sym_no_include_key_block] = STATE(129),
    [sym_personal_cipher_preferences] = STATE(129),
    [sym_personal_digest_preferences] = STATE(129),
    [sym_personal_compress_preferences] = STATE(129),
    [sym_s2k_cipher_algo] = STATE(129),
    [sym_s2k_digest_algo] = STATE(129),
    [sym_s2k_mode] = STATE(129),
    [sym_s2k_count] = STATE(129),
    [sym_gnupg] = STATE(129),
    [sym_openpgp] = STATE(129),
    [sym_rfc4880] = STATE(129),
    [sym_rfc4880bis] = STATE(129),
    [sym_rfc2440] = STATE(129),
    [sym_pgp7] = STATE(129),
    [sym_pgp8] = STATE(129),
    [sym_compliance] = STATE(129),
    [sym_min_rsa_length] = STATE(129),
    [sym_require_compliance] = STATE(129),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_config_token1] = ACTIONS(273),
    [aux_sym_unknown_option_token1] = ACTIONS(276),
    [anon_sym_default_DASHkey] = ACTIONS(279),
    [anon_sym_default_DASHrecipient] = ACTIONS(282),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(285),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(288),
    [anon_sym_verbose] = ACTIONS(291),
    [anon_sym_no_DASHtty] = ACTIONS(294),
    [anon_sym_list_DASHoptions] = ACTIONS(297),
    [anon_sym_verify_DASHoptions] = ACTIONS(300),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(303),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(306),
    [anon_sym_enable_DASHdsa2] = ACTIONS(309),
    [anon_sym_disable_DASHdsa2] = ACTIONS(312),
    [anon_sym_photo_DASHviewer] = ACTIONS(315),
    [anon_sym_exec_DASHpath] = ACTIONS(318),
    [anon_sym_keyring] = ACTIONS(321),
    [anon_sym_primary_DASHkeyring] = ACTIONS(324),
    [anon_sym_trustdb_DASHname] = ACTIONS(327),
    [anon_sym_display_DASHcharset] = ACTIONS(330),
    [anon_sym_utf8_DASHstrings] = ACTIONS(333),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(336),
    [anon_sym_compress_DASHlevel] = ACTIONS(339),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(342),
    [anon_sym_no_DASHcompress] = ACTIONS(345),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(348),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(351),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(354),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(357),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(360),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(363),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(366),
    [anon_sym_trusted_DASHkey] = ACTIONS(369),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(372),
    [anon_sym_trust_DASHmodel] = ACTIONS(375),
    [anon_sym_always_DASHtrust] = ACTIONS(378),
    [anon_sym_assert_DASHsigner] = ACTIONS(381),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(384),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(387),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(390),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(393),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(396),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(399),
    [anon_sym_keyid_DASHformat] = ACTIONS(402),
    [anon_sym_keyserver] = ACTIONS(405),
    [anon_sym_completes_DASHneeded] = ACTIONS(408),
    [anon_sym_marginals_DASHneeded] = ACTIONS(411),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(414),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(417),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(420),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(423),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(426),
    [anon_sym_agent_DASHprogram] = ACTIONS(429),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(432),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(435),
    [anon_sym_no_DASHautostart] = ACTIONS(438),
    [anon_sym_lock_DASHonce] = ACTIONS(441),
    [anon_sym_lock_DASHmultiple] = ACTIONS(444),
    [anon_sym_lock_DASHnever] = ACTIONS(447),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(450),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(453),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(456),
    [anon_sym_no_DASHgreeting] = ACTIONS(459),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(462),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(465),
    [anon_sym_require_DASHsecmem] = ACTIONS(468),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(471),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(474),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(477),
    [anon_sym_expert] = ACTIONS(480),
    [anon_sym_no_DASHexpert] = ACTIONS(483),
    [anon_sym_recipient] = ACTIONS(486),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(489),
    [anon_sym_recipient_DASHfile] = ACTIONS(492),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(495),
    [anon_sym_encrypt_DASHto] = ACTIONS(498),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(501),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(504),
    [anon_sym_group] = ACTIONS(507),
    [anon_sym_ungroup] = ACTIONS(510),
    [anon_sym_no_DASHgroups] = ACTIONS(513),
    [anon_sym_local_DASHuser] = ACTIONS(516),
    [anon_sym_sender] = ACTIONS(519),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(522),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(525),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(528),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(531),
    [anon_sym_armor] = ACTIONS(534),
    [anon_sym_no_DASHarmor] = ACTIONS(537),
    [anon_sym_output] = ACTIONS(540),
    [anon_sym_max_DASHoutput] = ACTIONS(543),
    [anon_sym_chunk_DASHsize] = ACTIONS(546),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(549),
    [anon_sym_key_DASHorigin] = ACTIONS(552),
    [anon_sym_import_DASHoptions] = ACTIONS(555),
    [anon_sym_export_DASHoptions] = ACTIONS(558),
    [anon_sym_with_DASHcolons] = ACTIONS(561),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(564),
    [anon_sym_with_DASHfingerprint] = ACTIONS(567),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(570),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(573),
    [anon_sym_with_DASHkeygrip] = ACTIONS(576),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(579),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(582),
    [anon_sym_with_DASHsecret] = ACTIONS(585),
    [anon_sym_textmode] = ACTIONS(588),
    [anon_sym_no_DASHtextmode] = ACTIONS(591),
    [anon_sym_force_DASHocb] = ACTIONS(594),
    [anon_sym_force_DASHaead] = ACTIONS(594),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(597),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(600),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(603),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(606),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(609),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(612),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(615),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(618),
    [anon_sym_s2k_DASHmode] = ACTIONS(621),
    [anon_sym_s2k_DASHcount] = ACTIONS(624),
    [anon_sym_gnupg] = ACTIONS(627),
    [anon_sym_openpgp] = ACTIONS(630),
    [anon_sym_rfc4880] = ACTIONS(633),
    [anon_sym_rfc4880bis] = ACTIONS(636),
    [anon_sym_rfc2440] = ACTIONS(639),
    [anon_sym_pgp7] = ACTIONS(642),
    [anon_sym_pgp8] = ACTIONS(645),
    [anon_sym_compliance] = ACTIONS(648),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(651),
    [anon_sym_require_DASHcompliance] = ACTIONS(654),
    [sym_comment] = ACTIONS(657),
    [sym__space] = ACTIONS(265),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [aux_sym_config_token1] = ACTIONS(271),
    [aux_sym_unknown_option_token1] = ACTIONS(660),
    [anon_sym_default_DASHkey] = ACTIONS(660),
    [anon_sym_default_DASHrecipient] = ACTIONS(660),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(660),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(660),
    [anon_sym_verbose] = ACTIONS(660),
    [anon_sym_no_DASHtty] = ACTIONS(660),
    [anon_sym_list_DASHoptions] = ACTIONS(660),
    [anon_sym_verify_DASHoptions] = ACTIONS(660),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(660),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(660),
    [anon_sym_enable_DASHdsa2] = ACTIONS(660),
    [anon_sym_disable_DASHdsa2] = ACTIONS(660),
    [anon_sym_photo_DASHviewer] = ACTIONS(660),
    [anon_sym_exec_DASHpath] = ACTIONS(660),
    [anon_sym_keyring] = ACTIONS(660),
    [anon_sym_primary_DASHkeyring] = ACTIONS(660),
    [anon_sym_trustdb_DASHname] = ACTIONS(660),
    [anon_sym_display_DASHcharset] = ACTIONS(660),
    [anon_sym_utf8_DASHstrings] = ACTIONS(660),
    [anon_sym_no_DASHutf8_DASHstrings] = ACTIONS(660),
    [anon_sym_compress_DASHlevel] = ACTIONS(660),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(660),
    [anon_sym_no_DASHcompress] = ACTIONS(660),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(660),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(660),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(660),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(660),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(660),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(660),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(660),
    [anon_sym_trusted_DASHkey] = ACTIONS(660),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(660),
    [anon_sym_trust_DASHmodel] = ACTIONS(660),
    [anon_sym_always_DASHtrust] = ACTIONS(660),
    [anon_sym_assert_DASHsigner] = ACTIONS(660),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(660),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(660),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(660),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(660),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(660),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(660),
    [anon_sym_keyid_DASHformat] = ACTIONS(660),
    [anon_sym_keyserver] = ACTIONS(660),
    [anon_sym_completes_DASHneeded] = ACTIONS(660),
    [anon_sym_marginals_DASHneeded] = ACTIONS(660),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(660),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(660),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(660),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(660),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(660),
    [anon_sym_agent_DASHprogram] = ACTIONS(660),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(660),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(660),
    [anon_sym_no_DASHautostart] = ACTIONS(660),
    [anon_sym_lock_DASHonce] = ACTIONS(660),
    [anon_sym_lock_DASHmultiple] = ACTIONS(660),
    [anon_sym_lock_DASHnever] = ACTIONS(660),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(660),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(660),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(660),
    [anon_sym_no_DASHgreeting] = ACTIONS(660),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(660),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(660),
    [anon_sym_require_DASHsecmem] = ACTIONS(660),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(660),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(660),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(660),
    [anon_sym_expert] = ACTIONS(660),
    [anon_sym_no_DASHexpert] = ACTIONS(660),
    [anon_sym_recipient] = ACTIONS(660),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(660),
    [anon_sym_recipient_DASHfile] = ACTIONS(660),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(660),
    [anon_sym_encrypt_DASHto] = ACTIONS(660),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(660),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(660),
    [anon_sym_group] = ACTIONS(660),
    [anon_sym_ungroup] = ACTIONS(660),
    [anon_sym_no_DASHgroups] = ACTIONS(660),
    [anon_sym_local_DASHuser] = ACTIONS(660),
    [anon_sym_sender] = ACTIONS(660),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(660),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(660),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(660),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(660),
    [anon_sym_armor] = ACTIONS(660),
    [anon_sym_no_DASHarmor] = ACTIONS(660),
    [anon_sym_output] = ACTIONS(660),
    [anon_sym_max_DASHoutput] = ACTIONS(660),
    [anon_sym_chunk_DASHsize] = ACTIONS(660),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(660),
    [anon_sym_key_DASHorigin] = ACTIONS(660),
    [anon_sym_import_DASHoptions] = ACTIONS(660),
    [anon_sym_export_DASHoptions] = ACTIONS(660),
    [anon_sym_with_DASHcolons] = ACTIONS(660),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(660),
    [anon_sym_with_DASHfingerprint] = ACTIONS(660),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(660),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(660),
    [anon_sym_with_DASHkeygrip] = ACTIONS(660),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(660),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(660),
    [anon_sym_with_DASHsecret] = ACTIONS(660),
    [anon_sym_textmode] = ACTIONS(660),
    [anon_sym_no_DASHtextmode] = ACTIONS(660),
    [anon_sym_force_DASHocb] = ACTIONS(660),
    [anon_sym_force_DASHaead] = ACTIONS(660),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(660),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(660),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(660),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(660),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(660),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(660),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(660),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(660),
    [anon_sym_s2k_DASHmode] = ACTIONS(660),
    [anon_sym_s2k_DASHcount] = ACTIONS(660),
    [anon_sym_gnupg] = ACTIONS(660),
    [anon_sym_openpgp] = ACTIONS(660),
    [anon_sym_rfc4880] = ACTIONS(660),
    [anon_sym_rfc4880bis] = ACTIONS(660),
    [anon_sym_rfc2440] = ACTIONS(660),
    [anon_sym_pgp7] = ACTIONS(660),
    [anon_sym_pgp8] = ACTIONS(660),
    [anon_sym_compliance] = ACTIONS(660),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(660),
    [anon_sym_require_DASHcompliance] = ACTIONS(660),
    [sym_comment] = ACTIONS(271),
    [sym__space] = ACTIONS(265),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(662), 1,
      aux_sym__command_token1,
    ACTIONS(664), 1,
      anon_sym_DQUOTE,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
    ACTIONS(668), 1,
      sym_format,
    STATE(58), 1,
      aux_sym__command_repeat1,
    STATE(92), 1,
      sym__command,
  [22] = 6,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(670), 1,
      aux_sym_config_token1,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      sym__mechanism,
    ACTIONS(676), 1,
      sym_url,
    STATE(9), 1,
      aux_sym_auto_key_locate_repeat1,
  [41] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(681), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym__command_token3,
    STATE(7), 1,
      aux_sym__command_repeat3,
    ACTIONS(678), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [58] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(686), 1,
      anon_sym_DQUOTE,
    ACTIONS(688), 1,
      aux_sym__command_token2,
    STATE(8), 1,
      aux_sym__command_repeat2,
    ACTIONS(691), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [75] = 6,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      sym__mechanism,
    ACTIONS(676), 1,
      sym_url,
    ACTIONS(694), 1,
      aux_sym_config_token1,
    STATE(12), 1,
      aux_sym_auto_key_locate_repeat1,
  [94] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    ACTIONS(698), 1,
      aux_sym__command_token2,
    STATE(8), 1,
      aux_sym__command_repeat2,
    ACTIONS(700), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [111] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
    ACTIONS(704), 1,
      aux_sym__command_token3,
    STATE(7), 1,
      aux_sym__command_repeat3,
    ACTIONS(702), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [128] = 6,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(706), 1,
      aux_sym_config_token1,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      sym__mechanism,
    ACTIONS(714), 1,
      sym_url,
    STATE(12), 1,
      aux_sym_auto_key_locate_repeat1,
  [147] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(717), 1,
      aux_sym_config_token1,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      sym__hash_algo,
    STATE(67), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [163] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(723), 1,
      aux_sym_config_token1,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      sym__cipher_algo,
    STATE(32), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [179] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(729), 1,
      aux_sym_config_token1,
    ACTIONS(731), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      sym__export_parameter,
    STATE(15), 1,
      aux_sym_export_options_repeat1,
  [195] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(195), 1,
      sym_string,
  [211] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(743), 1,
      aux_sym_config_token1,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      sym__import_parameter,
    STATE(17), 1,
      aux_sym_import_options_repeat1,
  [227] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(202), 1,
      sym_string,
  [243] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(753), 1,
      sym__mechanism,
    ACTIONS(751), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [255] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(755), 1,
      aux_sym_config_token1,
    ACTIONS(757), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      sym__verify_parameter,
    STATE(20), 1,
      aux_sym_verify_options_repeat1,
  [271] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(203), 1,
      sym_string,
  [287] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(763), 1,
      aux_sym_config_token1,
    ACTIONS(765), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      sym__list_parameter,
    STATE(22), 1,
      aux_sym_list_options_repeat1,
  [303] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(204), 1,
      sym_string,
  [319] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(771), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
    ACTIONS(776), 1,
      aux_sym__command_token3,
    STATE(24), 1,
      aux_sym_string_repeat2,
  [335] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(779), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      aux_sym__command_token2,
    ACTIONS(784), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [351] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(205), 1,
      sym_string,
  [367] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      sym__cipher_algo,
    ACTIONS(787), 1,
      aux_sym_config_token1,
    STATE(57), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [383] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(789), 1,
      aux_sym_config_token1,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      sym__compression_algo,
    STATE(56), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [399] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(215), 1,
      sym_string,
  [415] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      sym__hash_algo,
    ACTIONS(795), 1,
      aux_sym_config_token1,
    STATE(67), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [431] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(223), 1,
      sym_string,
  [447] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      sym__cipher_algo,
    ACTIONS(797), 1,
      aux_sym_config_token1,
    STATE(57), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [463] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(224), 1,
      sym_string,
  [479] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(799), 1,
      aux_sym_config_token1,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      sym__export_parameter,
    STATE(15), 1,
      aux_sym_export_options_repeat1,
  [495] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(226), 1,
      sym_string,
  [511] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(805), 1,
      aux_sym_config_token1,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      sym__import_parameter,
    STATE(17), 1,
      aux_sym_import_options_repeat1,
  [527] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(227), 1,
      sym_string,
  [543] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(115), 1,
      sym_string,
  [559] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(813), 1,
      sym__mechanism,
    ACTIONS(811), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [571] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(228), 1,
      sym_string,
  [587] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(815), 1,
      aux_sym_config_token1,
    ACTIONS(817), 1,
      aux_sym__command_token1,
    ACTIONS(820), 1,
      sym_format,
    STATE(41), 1,
      aux_sym__command_repeat1,
  [603] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(823), 1,
      aux_sym_config_token1,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      sym__verify_parameter,
    STATE(20), 1,
      aux_sym_verify_options_repeat1,
  [619] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(229), 1,
      sym_string,
  [635] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(829), 1,
      aux_sym_config_token1,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      sym__list_parameter,
    STATE(22), 1,
      aux_sym_list_options_repeat1,
  [651] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(230), 1,
      sym_string,
  [667] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(835), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(837), 1,
      anon_sym_SQUOTE,
    ACTIONS(839), 1,
      aux_sym__command_token3,
    STATE(24), 1,
      aux_sym_string_repeat2,
  [683] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(837), 1,
      anon_sym_DQUOTE,
    ACTIONS(841), 1,
      aux_sym__command_token2,
    ACTIONS(843), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(25), 1,
      aux_sym_string_repeat1,
  [699] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      sym__hash_algo,
    ACTIONS(845), 1,
      aux_sym_config_token1,
    STATE(13), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [715] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      sym__cipher_algo,
    ACTIONS(847), 1,
      aux_sym_config_token1,
    STATE(27), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [731] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(791), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      sym__compression_algo,
    ACTIONS(849), 1,
      aux_sym_config_token1,
    STATE(28), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [747] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      sym__hash_algo,
    ACTIONS(851), 1,
      aux_sym_config_token1,
    STATE(30), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [763] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(91), 1,
      sym_string,
  [779] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(801), 1,
      anon_sym_COMMA,
    ACTIONS(803), 1,
      sym__export_parameter,
    ACTIONS(853), 1,
      aux_sym_config_token1,
    STATE(34), 1,
      aux_sym_export_options_repeat1,
  [795] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(807), 1,
      anon_sym_COMMA,
    ACTIONS(809), 1,
      sym__import_parameter,
    ACTIONS(855), 1,
      aux_sym_config_token1,
    STATE(36), 1,
      aux_sym_import_options_repeat1,
  [811] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(232), 1,
      sym_string,
  [827] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(857), 1,
      aux_sym_config_token1,
    ACTIONS(859), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      sym__compression_algo,
    STATE(56), 1,
      aux_sym_personal_compress_preferences_repeat1,
  [843] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(865), 1,
      aux_sym_config_token1,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    ACTIONS(870), 1,
      sym__cipher_algo,
    STATE(57), 1,
      aux_sym_personal_cipher_preferences_repeat1,
  [859] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(873), 1,
      aux_sym_config_token1,
    ACTIONS(875), 1,
      aux_sym__command_token1,
    ACTIONS(877), 1,
      sym_format,
    STATE(41), 1,
      aux_sym__command_repeat1,
  [875] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(881), 1,
      aux_sym__command_token3,
    STATE(11), 1,
      aux_sym__command_repeat3,
    ACTIONS(879), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [889] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(883), 1,
      aux_sym__command_token2,
    STATE(10), 1,
      aux_sym__command_repeat2,
    ACTIONS(885), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [903] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      sym__verify_parameter,
    ACTIONS(887), 1,
      aux_sym_config_token1,
    STATE(42), 1,
      aux_sym_verify_options_repeat1,
  [919] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    ACTIONS(833), 1,
      sym__list_parameter,
    ACTIONS(889), 1,
      aux_sym_config_token1,
    STATE(44), 1,
      aux_sym_list_options_repeat1,
  [935] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(233), 1,
      sym_string,
  [951] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(234), 1,
      sym_string,
  [967] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(235), 1,
      sym_string,
  [983] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(236), 1,
      sym_string,
  [999] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(891), 1,
      aux_sym_config_token1,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    ACTIONS(896), 1,
      sym__hash_algo,
    STATE(67), 1,
      aux_sym_personal_digest_preferences_repeat1,
  [1015] = 5,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    ACTIONS(739), 1,
      anon_sym_SQUOTE,
    ACTIONS(741), 1,
      aux_sym_string_token1,
    STATE(237), 1,
      sym_string,
  [1031] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(899), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1040] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(901), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [1049] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(903), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(905), 1,
      aux_sym__command_token3,
    STATE(46), 1,
      aux_sym_string_repeat2,
  [1062] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(907), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1071] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(909), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1080] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(911), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [1089] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(913), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1098] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(915), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1107] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(917), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1116] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(919), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [1125] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(921), 1,
      aux_sym__command_token2,
    ACTIONS(923), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(47), 1,
      aux_sym_string_repeat1,
  [1138] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(925), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [1147] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(927), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1156] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(929), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1165] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(931), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1174] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(933), 1,
      aux_sym_add_desig_revoker_token1,
    ACTIONS(935), 2,
      aux_sym_add_desig_revoker_token2,
      sym_key,
  [1185] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(937), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1194] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(939), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1202] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(941), 1,
      sym__mechanism,
    ACTIONS(943), 1,
      sym_url,
  [1212] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(945), 1,
      sym__mechanism,
    ACTIONS(947), 1,
      sym_url,
  [1222] = 3,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(949), 1,
      aux_sym_config_token1,
    ACTIONS(951), 1,
      anon_sym_COMMA,
  [1232] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(953), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1240] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(955), 1,
      aux_sym_config_token1,
  [1247] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(957), 1,
      aux_sym_config_token1,
  [1254] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(959), 1,
      aux_sym_config_token1,
  [1261] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(961), 1,
      aux_sym_config_token1,
  [1268] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(963), 1,
      aux_sym_config_token1,
  [1275] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(965), 1,
      aux_sym_config_token1,
  [1282] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(967), 1,
      aux_sym_config_token1,
  [1289] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(969), 1,
      aux_sym_config_token1,
  [1296] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(971), 1,
      aux_sym_config_token1,
  [1303] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(973), 1,
      aux_sym_config_token1,
  [1310] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(975), 1,
      aux_sym_config_token1,
  [1317] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(977), 1,
      aux_sym_config_token1,
  [1324] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(979), 1,
      aux_sym_config_token1,
  [1331] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(981), 1,
      aux_sym_config_token1,
  [1338] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(983), 1,
      aux_sym_config_token1,
  [1345] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(985), 1,
      aux_sym_config_token1,
  [1352] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(987), 1,
      aux_sym_config_token1,
  [1359] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(989), 1,
      aux_sym_config_token1,
  [1366] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(991), 1,
      aux_sym_config_token1,
  [1373] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(993), 1,
      aux_sym_config_token1,
  [1380] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(995), 1,
      aux_sym_config_token1,
  [1387] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(997), 1,
      aux_sym_config_token1,
  [1394] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(999), 1,
      aux_sym_config_token1,
  [1401] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1001), 1,
      aux_sym_config_token1,
  [1408] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1003), 1,
      aux_sym_config_token1,
  [1415] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1005), 1,
      aux_sym_config_token1,
  [1422] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1007), 1,
      aux_sym_config_token1,
  [1429] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1009), 1,
      aux_sym_config_token1,
  [1436] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1011), 1,
      aux_sym_config_token1,
  [1443] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1013), 1,
      aux_sym_config_token1,
  [1450] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1015), 1,
      aux_sym_config_token1,
  [1457] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1017), 1,
      aux_sym_config_token1,
  [1464] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1019), 1,
      aux_sym_config_token1,
  [1471] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1021), 1,
      aux_sym_config_token1,
  [1478] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1023), 1,
      aux_sym_config_token1,
  [1485] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1025), 1,
      aux_sym_config_token1,
  [1492] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1027), 1,
      aux_sym_config_token1,
  [1499] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1029), 1,
      aux_sym_config_token1,
  [1506] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1031), 1,
      aux_sym_config_token1,
  [1513] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
  [1520] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1035), 1,
      aux_sym_config_token1,
  [1527] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1037), 1,
      aux_sym_unknown_option_token2,
  [1534] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1039), 1,
      sym_key,
  [1541] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1041), 1,
      aux_sym_config_token1,
  [1548] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1043), 1,
      sym__list_parameter,
  [1555] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1045), 1,
      sym__verify_parameter,
  [1562] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1047), 1,
      aux_sym_config_token1,
  [1569] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1049), 1,
      aux_sym_config_token1,
  [1576] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1051), 1,
      aux_sym_config_token1,
  [1583] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1053), 1,
      aux_sym_config_token1,
  [1590] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1055), 1,
      aux_sym_config_token1,
  [1597] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1057), 1,
      sym__charset,
  [1604] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1059), 1,
      aux_sym_compress_level_token1,
  [1611] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1061), 1,
      aux_sym_compress_level_token1,
  [1618] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1063), 1,
      aux_sym_default_cert_level_token1,
  [1625] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1065), 1,
      aux_sym_default_cert_level_token1,
  [1632] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1067), 1,
      sym_key,
  [1639] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1069), 1,
      aux_sym_config_token1,
  [1646] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1071), 1,
      sym__model,
  [1653] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1073), 1,
      aux_sym_config_token1,
  [1660] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1075), 1,
      sym__compression_algo,
  [1667] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1077), 1,
      sym__keyid_format,
  [1674] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1079), 1,
      sym_url,
  [1681] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1081), 1,
      sym_number,
  [1688] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1083), 1,
      sym_number,
  [1695] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1085), 1,
      sym__tofu_policy,
  [1702] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1087), 1,
      sym_number,
  [1709] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1089), 1,
      aux_sym_config_token1,
  [1716] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1091), 1,
      aux_sym_config_token1,
  [1723] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1093), 1,
      sym_number,
  [1730] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1095), 1,
      aux_sym_config_token1,
  [1737] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1097), 1,
      sym__hash_algo,
  [1744] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1099), 1,
      aux_sym_config_token1,
  [1751] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1101), 1,
      aux_sym_config_token1,
  [1758] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1103), 1,
      sym__cipher_algo,
  [1765] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1105), 1,
      sym__export_parameter,
  [1772] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1107), 1,
      sym__import_parameter,
  [1779] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1109), 1,
      sym_url,
  [1786] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1111), 1,
      aux_sym_config_token1,
  [1793] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1113), 1,
      aux_sym_config_token1,
  [1800] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1115), 1,
      aux_sym_config_token1,
  [1807] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1117), 1,
      aux_sym_config_token1,
  [1814] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1119), 1,
      sym_number,
  [1821] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1121), 1,
      sym_number,
  [1828] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1123), 1,
      sym_number,
  [1835] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1125), 1,
      sym__origin,
  [1842] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1127), 1,
      sym__import_parameter,
  [1849] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1129), 1,
      sym__export_parameter,
  [1856] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1131), 1,
      sym__cipher_algo,
  [1863] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1133), 1,
      sym__hash_algo,
  [1870] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1135), 1,
      sym__compression_algo,
  [1877] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1137), 1,
      sym__cipher_algo,
  [1884] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1139), 1,
      sym__hash_algo,
  [1891] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1141), 1,
      aux_sym_s2k_mode_token1,
  [1898] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1143), 1,
      sym_number,
  [1905] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1145), 1,
      sym__compliance,
  [1912] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1147), 1,
      sym_number,
  [1919] = 2,
    ACTIONS(1149), 1,
      aux_sym_config_token1,
    ACTIONS(1151), 1,
      sym__space,
  [1926] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1153), 1,
      aux_sym_config_token1,
  [1933] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1155), 1,
      aux_sym_config_token1,
  [1940] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1157), 1,
      aux_sym_config_token1,
  [1947] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1159), 1,
      aux_sym_config_token1,
  [1954] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1161), 1,
      aux_sym_config_token1,
  [1961] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1163), 1,
      aux_sym_config_token1,
  [1968] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1165), 1,
      aux_sym_config_token1,
  [1975] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1167), 1,
      aux_sym_config_token1,
  [1982] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1169), 1,
      aux_sym_config_token1,
  [1989] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1171), 1,
      aux_sym_config_token1,
  [1996] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1173), 1,
      aux_sym_config_token1,
  [2003] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1175), 1,
      aux_sym_config_token1,
  [2010] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1177), 1,
      aux_sym_config_token1,
  [2017] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1179), 1,
      aux_sym_config_token1,
  [2024] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1181), 1,
      aux_sym_config_token1,
  [2031] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1183), 1,
      aux_sym_config_token1,
  [2038] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1185), 1,
      aux_sym_config_token1,
  [2045] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1187), 1,
      aux_sym_config_token1,
  [2052] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1189), 1,
      aux_sym_config_token1,
  [2059] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1191), 1,
      aux_sym_config_token1,
  [2066] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1193), 1,
      aux_sym_config_token1,
  [2073] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1195), 1,
      aux_sym_config_token1,
  [2080] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1197), 1,
      aux_sym_config_token1,
  [2087] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1199), 1,
      sym_key,
  [2094] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1201), 1,
      aux_sym_config_token1,
  [2101] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1203), 1,
      aux_sym_config_token1,
  [2108] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1205), 1,
      aux_sym_config_token1,
  [2115] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1207), 1,
      aux_sym_config_token1,
  [2122] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1209), 1,
      aux_sym_config_token1,
  [2129] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1211), 1,
      aux_sym_config_token1,
  [2136] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1213), 1,
      aux_sym_config_token1,
  [2143] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1215), 1,
      aux_sym_config_token1,
  [2150] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1217), 1,
      aux_sym_config_token1,
  [2157] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1219), 1,
      aux_sym_config_token1,
  [2164] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1221), 1,
      aux_sym_config_token1,
  [2171] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1223), 1,
      aux_sym_config_token1,
  [2178] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1225), 1,
      aux_sym_config_token1,
  [2185] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1227), 1,
      aux_sym_config_token1,
  [2192] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1229), 1,
      aux_sym_config_token1,
  [2199] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1231), 1,
      aux_sym_config_token1,
  [2206] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1233), 1,
      aux_sym_config_token1,
  [2213] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1235), 1,
      aux_sym_config_token1,
  [2220] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1237), 1,
      aux_sym_config_token1,
  [2227] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1239), 1,
      anon_sym_EQ,
  [2234] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1241), 1,
      aux_sym_config_token1,
  [2241] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1243), 1,
      aux_sym_config_token1,
  [2248] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1245), 1,
      aux_sym_config_token1,
  [2255] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1247), 1,
      aux_sym_config_token1,
  [2262] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1249), 1,
      aux_sym_config_token1,
  [2269] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1251), 1,
      aux_sym_config_token1,
  [2276] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1253), 1,
      aux_sym_config_token1,
  [2283] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1255), 1,
      aux_sym_config_token1,
  [2290] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1257), 1,
      aux_sym_config_token1,
  [2297] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1259), 1,
      aux_sym_config_token1,
  [2304] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1261), 1,
      aux_sym_config_token1,
  [2311] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1263), 1,
      aux_sym_config_token1,
  [2318] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1265), 1,
      aux_sym_config_token1,
  [2325] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1267), 1,
      aux_sym_config_token1,
  [2332] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1269), 1,
      aux_sym_config_token1,
  [2339] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1271), 1,
      aux_sym_config_token1,
  [2346] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1273), 1,
      aux_sym_config_token1,
  [2353] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1275), 1,
      aux_sym_config_token1,
  [2360] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1277), 1,
      aux_sym_config_token1,
  [2367] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1279), 1,
      aux_sym_config_token1,
  [2374] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1281), 1,
      aux_sym_config_token1,
  [2381] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1283), 1,
      sym__verify_parameter,
  [2388] = 2,
    ACTIONS(265), 1,
      sym__space,
    ACTIONS(1285), 1,
      sym__list_parameter,
  [2395] = 1,
    ACTIONS(1287), 1,
      sym__space,
  [2399] = 1,
    ACTIONS(1289), 1,
      sym__space,
  [2403] = 1,
    ACTIONS(1291), 1,
      sym__space,
  [2407] = 1,
    ACTIONS(1293), 1,
      sym__space,
  [2411] = 1,
    ACTIONS(1295), 1,
      sym__space,
  [2415] = 1,
    ACTIONS(1297), 1,
      sym__space,
  [2419] = 1,
    ACTIONS(1299), 1,
      sym__space,
  [2423] = 1,
    ACTIONS(1301), 1,
      sym__space,
  [2427] = 1,
    ACTIONS(1303), 1,
      sym__space,
  [2431] = 1,
    ACTIONS(1305), 1,
      sym__space,
  [2435] = 1,
    ACTIONS(1307), 1,
      sym__space,
  [2439] = 1,
    ACTIONS(1309), 1,
      sym__space,
  [2443] = 1,
    ACTIONS(1311), 1,
      sym__space,
  [2447] = 1,
    ACTIONS(1313), 1,
      sym__space,
  [2451] = 1,
    ACTIONS(1315), 1,
      sym__space,
  [2455] = 1,
    ACTIONS(1317), 1,
      sym__space,
  [2459] = 1,
    ACTIONS(1319), 1,
      sym__space,
  [2463] = 1,
    ACTIONS(1321), 1,
      sym__space,
  [2467] = 1,
    ACTIONS(1323), 1,
      sym__space,
  [2471] = 1,
    ACTIONS(1325), 1,
      sym__space,
  [2475] = 1,
    ACTIONS(1327), 1,
      sym__space,
  [2479] = 1,
    ACTIONS(1329), 1,
      sym__space,
  [2483] = 1,
    ACTIONS(1331), 1,
      sym__space,
  [2487] = 1,
    ACTIONS(1333), 1,
      sym__space,
  [2491] = 1,
    ACTIONS(1335), 1,
      sym__space,
  [2495] = 1,
    ACTIONS(1337), 1,
      sym__space,
  [2499] = 1,
    ACTIONS(1339), 1,
      sym__space,
  [2503] = 1,
    ACTIONS(1341), 1,
      sym__space,
  [2507] = 1,
    ACTIONS(1343), 1,
      sym__space,
  [2511] = 1,
    ACTIONS(1345), 1,
      sym__space,
  [2515] = 1,
    ACTIONS(1347), 1,
      sym__space,
  [2519] = 1,
    ACTIONS(1349), 1,
      sym__space,
  [2523] = 1,
    ACTIONS(1351), 1,
      sym__space,
  [2527] = 1,
    ACTIONS(1353), 1,
      sym__space,
  [2531] = 1,
    ACTIONS(1355), 1,
      sym__space,
  [2535] = 1,
    ACTIONS(1357), 1,
      sym__space,
  [2539] = 1,
    ACTIONS(1359), 1,
      sym__space,
  [2543] = 1,
    ACTIONS(1361), 1,
      sym__space,
  [2547] = 1,
    ACTIONS(1363), 1,
      sym__space,
  [2551] = 1,
    ACTIONS(1365), 1,
      sym__space,
  [2555] = 1,
    ACTIONS(1367), 1,
      sym__space,
  [2559] = 1,
    ACTIONS(1369), 1,
      sym__space,
  [2563] = 1,
    ACTIONS(1371), 1,
      sym__space,
  [2567] = 1,
    ACTIONS(1373), 1,
      sym__space,
  [2571] = 1,
    ACTIONS(1375), 1,
      sym__space,
  [2575] = 1,
    ACTIONS(1377), 1,
      sym__space,
  [2579] = 1,
    ACTIONS(1379), 1,
      sym__space,
  [2583] = 1,
    ACTIONS(1381), 1,
      sym__space,
  [2587] = 1,
    ACTIONS(1383), 1,
      sym__space,
  [2591] = 1,
    ACTIONS(1385), 1,
      sym__space,
  [2595] = 1,
    ACTIONS(1387), 1,
      sym__space,
  [2599] = 1,
    ACTIONS(1389), 1,
      sym__space,
  [2603] = 1,
    ACTIONS(1391), 1,
      sym__space,
  [2607] = 1,
    ACTIONS(1393), 1,
      sym__space,
  [2611] = 1,
    ACTIONS(1395), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 179,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 227,
  [SMALL_STATE(19)] = 243,
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
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 447,
  [SMALL_STATE(33)] = 463,
  [SMALL_STATE(34)] = 479,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 527,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 559,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 587,
  [SMALL_STATE(42)] = 603,
  [SMALL_STATE(43)] = 619,
  [SMALL_STATE(44)] = 635,
  [SMALL_STATE(45)] = 651,
  [SMALL_STATE(46)] = 667,
  [SMALL_STATE(47)] = 683,
  [SMALL_STATE(48)] = 699,
  [SMALL_STATE(49)] = 715,
  [SMALL_STATE(50)] = 731,
  [SMALL_STATE(51)] = 747,
  [SMALL_STATE(52)] = 763,
  [SMALL_STATE(53)] = 779,
  [SMALL_STATE(54)] = 795,
  [SMALL_STATE(55)] = 811,
  [SMALL_STATE(56)] = 827,
  [SMALL_STATE(57)] = 843,
  [SMALL_STATE(58)] = 859,
  [SMALL_STATE(59)] = 875,
  [SMALL_STATE(60)] = 889,
  [SMALL_STATE(61)] = 903,
  [SMALL_STATE(62)] = 919,
  [SMALL_STATE(63)] = 935,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 967,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 999,
  [SMALL_STATE(68)] = 1015,
  [SMALL_STATE(69)] = 1031,
  [SMALL_STATE(70)] = 1040,
  [SMALL_STATE(71)] = 1049,
  [SMALL_STATE(72)] = 1062,
  [SMALL_STATE(73)] = 1071,
  [SMALL_STATE(74)] = 1080,
  [SMALL_STATE(75)] = 1089,
  [SMALL_STATE(76)] = 1098,
  [SMALL_STATE(77)] = 1107,
  [SMALL_STATE(78)] = 1116,
  [SMALL_STATE(79)] = 1125,
  [SMALL_STATE(80)] = 1138,
  [SMALL_STATE(81)] = 1147,
  [SMALL_STATE(82)] = 1156,
  [SMALL_STATE(83)] = 1165,
  [SMALL_STATE(84)] = 1174,
  [SMALL_STATE(85)] = 1185,
  [SMALL_STATE(86)] = 1194,
  [SMALL_STATE(87)] = 1202,
  [SMALL_STATE(88)] = 1212,
  [SMALL_STATE(89)] = 1222,
  [SMALL_STATE(90)] = 1232,
  [SMALL_STATE(91)] = 1240,
  [SMALL_STATE(92)] = 1247,
  [SMALL_STATE(93)] = 1254,
  [SMALL_STATE(94)] = 1261,
  [SMALL_STATE(95)] = 1268,
  [SMALL_STATE(96)] = 1275,
  [SMALL_STATE(97)] = 1282,
  [SMALL_STATE(98)] = 1289,
  [SMALL_STATE(99)] = 1296,
  [SMALL_STATE(100)] = 1303,
  [SMALL_STATE(101)] = 1310,
  [SMALL_STATE(102)] = 1317,
  [SMALL_STATE(103)] = 1324,
  [SMALL_STATE(104)] = 1331,
  [SMALL_STATE(105)] = 1338,
  [SMALL_STATE(106)] = 1345,
  [SMALL_STATE(107)] = 1352,
  [SMALL_STATE(108)] = 1359,
  [SMALL_STATE(109)] = 1366,
  [SMALL_STATE(110)] = 1373,
  [SMALL_STATE(111)] = 1380,
  [SMALL_STATE(112)] = 1387,
  [SMALL_STATE(113)] = 1394,
  [SMALL_STATE(114)] = 1401,
  [SMALL_STATE(115)] = 1408,
  [SMALL_STATE(116)] = 1415,
  [SMALL_STATE(117)] = 1422,
  [SMALL_STATE(118)] = 1429,
  [SMALL_STATE(119)] = 1436,
  [SMALL_STATE(120)] = 1443,
  [SMALL_STATE(121)] = 1450,
  [SMALL_STATE(122)] = 1457,
  [SMALL_STATE(123)] = 1464,
  [SMALL_STATE(124)] = 1471,
  [SMALL_STATE(125)] = 1478,
  [SMALL_STATE(126)] = 1485,
  [SMALL_STATE(127)] = 1492,
  [SMALL_STATE(128)] = 1499,
  [SMALL_STATE(129)] = 1506,
  [SMALL_STATE(130)] = 1513,
  [SMALL_STATE(131)] = 1520,
  [SMALL_STATE(132)] = 1527,
  [SMALL_STATE(133)] = 1534,
  [SMALL_STATE(134)] = 1541,
  [SMALL_STATE(135)] = 1548,
  [SMALL_STATE(136)] = 1555,
  [SMALL_STATE(137)] = 1562,
  [SMALL_STATE(138)] = 1569,
  [SMALL_STATE(139)] = 1576,
  [SMALL_STATE(140)] = 1583,
  [SMALL_STATE(141)] = 1590,
  [SMALL_STATE(142)] = 1597,
  [SMALL_STATE(143)] = 1604,
  [SMALL_STATE(144)] = 1611,
  [SMALL_STATE(145)] = 1618,
  [SMALL_STATE(146)] = 1625,
  [SMALL_STATE(147)] = 1632,
  [SMALL_STATE(148)] = 1639,
  [SMALL_STATE(149)] = 1646,
  [SMALL_STATE(150)] = 1653,
  [SMALL_STATE(151)] = 1660,
  [SMALL_STATE(152)] = 1667,
  [SMALL_STATE(153)] = 1674,
  [SMALL_STATE(154)] = 1681,
  [SMALL_STATE(155)] = 1688,
  [SMALL_STATE(156)] = 1695,
  [SMALL_STATE(157)] = 1702,
  [SMALL_STATE(158)] = 1709,
  [SMALL_STATE(159)] = 1716,
  [SMALL_STATE(160)] = 1723,
  [SMALL_STATE(161)] = 1730,
  [SMALL_STATE(162)] = 1737,
  [SMALL_STATE(163)] = 1744,
  [SMALL_STATE(164)] = 1751,
  [SMALL_STATE(165)] = 1758,
  [SMALL_STATE(166)] = 1765,
  [SMALL_STATE(167)] = 1772,
  [SMALL_STATE(168)] = 1779,
  [SMALL_STATE(169)] = 1786,
  [SMALL_STATE(170)] = 1793,
  [SMALL_STATE(171)] = 1800,
  [SMALL_STATE(172)] = 1807,
  [SMALL_STATE(173)] = 1814,
  [SMALL_STATE(174)] = 1821,
  [SMALL_STATE(175)] = 1828,
  [SMALL_STATE(176)] = 1835,
  [SMALL_STATE(177)] = 1842,
  [SMALL_STATE(178)] = 1849,
  [SMALL_STATE(179)] = 1856,
  [SMALL_STATE(180)] = 1863,
  [SMALL_STATE(181)] = 1870,
  [SMALL_STATE(182)] = 1877,
  [SMALL_STATE(183)] = 1884,
  [SMALL_STATE(184)] = 1891,
  [SMALL_STATE(185)] = 1898,
  [SMALL_STATE(186)] = 1905,
  [SMALL_STATE(187)] = 1912,
  [SMALL_STATE(188)] = 1919,
  [SMALL_STATE(189)] = 1926,
  [SMALL_STATE(190)] = 1933,
  [SMALL_STATE(191)] = 1940,
  [SMALL_STATE(192)] = 1947,
  [SMALL_STATE(193)] = 1954,
  [SMALL_STATE(194)] = 1961,
  [SMALL_STATE(195)] = 1968,
  [SMALL_STATE(196)] = 1975,
  [SMALL_STATE(197)] = 1982,
  [SMALL_STATE(198)] = 1989,
  [SMALL_STATE(199)] = 1996,
  [SMALL_STATE(200)] = 2003,
  [SMALL_STATE(201)] = 2010,
  [SMALL_STATE(202)] = 2017,
  [SMALL_STATE(203)] = 2024,
  [SMALL_STATE(204)] = 2031,
  [SMALL_STATE(205)] = 2038,
  [SMALL_STATE(206)] = 2045,
  [SMALL_STATE(207)] = 2052,
  [SMALL_STATE(208)] = 2059,
  [SMALL_STATE(209)] = 2066,
  [SMALL_STATE(210)] = 2073,
  [SMALL_STATE(211)] = 2080,
  [SMALL_STATE(212)] = 2087,
  [SMALL_STATE(213)] = 2094,
  [SMALL_STATE(214)] = 2101,
  [SMALL_STATE(215)] = 2108,
  [SMALL_STATE(216)] = 2115,
  [SMALL_STATE(217)] = 2122,
  [SMALL_STATE(218)] = 2129,
  [SMALL_STATE(219)] = 2136,
  [SMALL_STATE(220)] = 2143,
  [SMALL_STATE(221)] = 2150,
  [SMALL_STATE(222)] = 2157,
  [SMALL_STATE(223)] = 2164,
  [SMALL_STATE(224)] = 2171,
  [SMALL_STATE(225)] = 2178,
  [SMALL_STATE(226)] = 2185,
  [SMALL_STATE(227)] = 2192,
  [SMALL_STATE(228)] = 2199,
  [SMALL_STATE(229)] = 2206,
  [SMALL_STATE(230)] = 2213,
  [SMALL_STATE(231)] = 2220,
  [SMALL_STATE(232)] = 2227,
  [SMALL_STATE(233)] = 2234,
  [SMALL_STATE(234)] = 2241,
  [SMALL_STATE(235)] = 2248,
  [SMALL_STATE(236)] = 2255,
  [SMALL_STATE(237)] = 2262,
  [SMALL_STATE(238)] = 2269,
  [SMALL_STATE(239)] = 2276,
  [SMALL_STATE(240)] = 2283,
  [SMALL_STATE(241)] = 2290,
  [SMALL_STATE(242)] = 2297,
  [SMALL_STATE(243)] = 2304,
  [SMALL_STATE(244)] = 2311,
  [SMALL_STATE(245)] = 2318,
  [SMALL_STATE(246)] = 2325,
  [SMALL_STATE(247)] = 2332,
  [SMALL_STATE(248)] = 2339,
  [SMALL_STATE(249)] = 2346,
  [SMALL_STATE(250)] = 2353,
  [SMALL_STATE(251)] = 2360,
  [SMALL_STATE(252)] = 2367,
  [SMALL_STATE(253)] = 2374,
  [SMALL_STATE(254)] = 2381,
  [SMALL_STATE(255)] = 2388,
  [SMALL_STATE(256)] = 2395,
  [SMALL_STATE(257)] = 2399,
  [SMALL_STATE(258)] = 2403,
  [SMALL_STATE(259)] = 2407,
  [SMALL_STATE(260)] = 2411,
  [SMALL_STATE(261)] = 2415,
  [SMALL_STATE(262)] = 2419,
  [SMALL_STATE(263)] = 2423,
  [SMALL_STATE(264)] = 2427,
  [SMALL_STATE(265)] = 2431,
  [SMALL_STATE(266)] = 2435,
  [SMALL_STATE(267)] = 2439,
  [SMALL_STATE(268)] = 2443,
  [SMALL_STATE(269)] = 2447,
  [SMALL_STATE(270)] = 2451,
  [SMALL_STATE(271)] = 2455,
  [SMALL_STATE(272)] = 2459,
  [SMALL_STATE(273)] = 2463,
  [SMALL_STATE(274)] = 2467,
  [SMALL_STATE(275)] = 2471,
  [SMALL_STATE(276)] = 2475,
  [SMALL_STATE(277)] = 2479,
  [SMALL_STATE(278)] = 2483,
  [SMALL_STATE(279)] = 2487,
  [SMALL_STATE(280)] = 2491,
  [SMALL_STATE(281)] = 2495,
  [SMALL_STATE(282)] = 2499,
  [SMALL_STATE(283)] = 2503,
  [SMALL_STATE(284)] = 2507,
  [SMALL_STATE(285)] = 2511,
  [SMALL_STATE(286)] = 2515,
  [SMALL_STATE(287)] = 2519,
  [SMALL_STATE(288)] = 2523,
  [SMALL_STATE(289)] = 2527,
  [SMALL_STATE(290)] = 2531,
  [SMALL_STATE(291)] = 2535,
  [SMALL_STATE(292)] = 2539,
  [SMALL_STATE(293)] = 2543,
  [SMALL_STATE(294)] = 2547,
  [SMALL_STATE(295)] = 2551,
  [SMALL_STATE(296)] = 2555,
  [SMALL_STATE(297)] = 2559,
  [SMALL_STATE(298)] = 2563,
  [SMALL_STATE(299)] = 2567,
  [SMALL_STATE(300)] = 2571,
  [SMALL_STATE(301)] = 2575,
  [SMALL_STATE(302)] = 2579,
  [SMALL_STATE(303)] = 2583,
  [SMALL_STATE(304)] = 2587,
  [SMALL_STATE(305)] = 2591,
  [SMALL_STATE(306)] = 2595,
  [SMALL_STATE(307)] = 2599,
  [SMALL_STATE(308)] = 2603,
  [SMALL_STATE(309)] = 2607,
  [SMALL_STATE(310)] = 2611,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(188),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(93),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(94),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(95),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(96),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(304),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(112),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(113),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(116),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(117),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(295),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(126),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(127),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(134),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(137),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(150),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(158),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(161),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(164),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(277),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(275),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(274),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(272),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(271),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(169),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(267),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(266),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(243),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(244),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(248),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(253),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(259),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(282),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(258),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(260),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(261),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(247),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(245),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(262),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(242),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(241),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(231),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(201),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(265),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(196),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(194),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(193),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(189),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(131),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(172),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(171),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(170),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(268),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(269),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(270),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(273),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(276),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(278),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(163),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(279),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(280),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(159),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(281),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(256),
  [522] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(302),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(148),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(141),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(140),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(139),
  [537] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(138),
  [540] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(263),
  [543] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [546] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(264),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [558] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [561] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(97),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(98),
  [567] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(99),
  [570] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(100),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(101),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(102),
  [579] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(103),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(104),
  [585] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(105),
  [588] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(106),
  [591] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(107),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(108),
  [597] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(109),
  [600] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(110),
  [603] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(111),
  [606] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(257),
  [609] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(301),
  [612] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(299),
  [618] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(298),
  [621] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(297),
  [624] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(294),
  [627] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(119),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(120),
  [633] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(121),
  [636] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(122),
  [639] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(123),
  [642] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(124),
  [645] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(125),
  [648] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [651] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(128),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(129),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [662] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 3, .production_id = 6),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(7),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(7),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(8),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(8),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_locate, 4, .production_id = 14),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 19),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 19), SHIFT_REPEAT(88),
  [711] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 19), SHIFT_REPEAT(39),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 19), SHIFT_REPEAT(39),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 4, .production_id = 10),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 3, .production_id = 10),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_options_repeat1, 2),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_options_repeat1, 2), SHIFT_REPEAT(166),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_export_options_repeat1, 2), SHIFT_REPEAT(69),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_options_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_options_repeat1, 2), SHIFT_REPEAT(167),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_options_repeat1, 2), SHIFT_REPEAT(81),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 2, .production_id = 18),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(254),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2), SHIFT_REPEAT(76),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(255),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2), SHIFT_REPEAT(75),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(24),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(24),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [781] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(25),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(25),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 4, .production_id = 10),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 4, .production_id = 10),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 4, .production_id = 10),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_cipher_preferences, 4, .production_id = 10),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_options, 4, .production_id = 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_options, 4, .production_id = 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 13),
  [813] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_auto_key_locate_repeat1, 1, .production_id = 13),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [817] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(41),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(41),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 4, .production_id = 2),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 4, .production_id = 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [839] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_digest_algo, 3, .production_id = 10),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_cipher_algo, 3, .production_id = 10),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_compress_preferences, 3, .production_id = 10),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_personal_digest_preferences, 3, .production_id = 10),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_options, 3, .production_id = 2),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_options, 3, .production_id = 2),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(151),
  [862] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(83),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(165),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(70),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [883] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verify_options, 3, .production_id = 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_options, 3, .production_id = 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(162),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(78),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_options_repeat1, 1, .production_id = 12),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 1, .production_id = 15),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_options_repeat1, 2, .production_id = 17),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 2, .production_id = 21),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_cipher_preferences_repeat1, 2, .production_id = 21),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 1, .production_id = 12),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 1, .production_id = 12),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_options_repeat1, 2, .production_id = 17),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 1, .production_id = 15),
  [921] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_digest_preferences_repeat1, 2, .production_id = 21),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_options_repeat1, 1, .production_id = 12),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_verify_options_repeat1, 2, .production_id = 17),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_personal_compress_preferences_repeat1, 1, .production_id = 15),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_options_repeat1, 2, .production_id = 17),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 16),
  [941] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_origin, 3, .production_id = 9),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 1),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_encrypt_to, 3),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_photo_viewer, 3, .production_id = 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient_self, 1),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_default_recipient, 1),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verbose, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_tty, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_colons, 1),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_list_mode, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_fingerprint, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_subkey_fingerprint, 1),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_icao_spelling, 1),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_keygrip, 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_key_origin, 1),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_wkd_hash, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_secret, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textmode, 1),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_textmode, 1),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force_ocb, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_signer_uid, 1),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_key_block, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_include_key_block, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_large_rsa, 1),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_large_rsa, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_origin, 5, .production_id = 9),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 5, .production_id = 20),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enable_dsa2, 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dsa2, 1),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 16),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gnupg, 1),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_openpgp, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880, 1),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc4880bis, 1),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rfc2440, 1),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp7, 1),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pgp8, 1),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_utf8_strings, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_utf8_strings, 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_compliance, 1),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1033] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_cross_verification, 1),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_compress, 1),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_decompress_lowmem, 1),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_armor, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_armor, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_skip_hidden_recipients, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_skip_hidden_recipients, 1),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_all_secrets, 1),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mangle_dos_filenames, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1089] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_mangle_dos_filenames, 1),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_groups, 1),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ask_cert_level, 1),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_encrypt_to, 1),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_ask_cert_level, 1),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_always_trust, 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_expert, 1),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expert, 1),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_cross_verification, 1),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_require_secmem, 1),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unknown_option, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_key, 3),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require_secmem, 1),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_permission_warning, 1),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_secmem_warning, 1),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_recipient, 3),
  [1167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_greeting, 1),
  [1169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_random_seed_file, 1),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_locate, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_on_status_write_error, 1),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 4),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_never, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_path, 3),
  [1181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyring, 3),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_keyring, 3),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trustdb_name, 3),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_charset, 3, .production_id = 4),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compress_level, 3),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bzip2_compress_level, 3),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_cert_level, 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_cert_level, 3),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trusted_key, 3),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_desig_revoker, 3),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trust_model, 3, .production_id = 5),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_signer, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_multiple, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyid_format, 3, .production_id = 7),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyserver, 3),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_completes_needed, 3),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marginals_needed, 3),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tofu_default_policy, 3, .production_id = 8),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_cert_depth, 3),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_agent_program, 3),
  [1223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dirmngr_program, 3),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_card_insert_tries, 3),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipient, 3),
  [1229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_recipient, 3),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipient_file, 3),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hidden_recipient_file, 3),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encrypt_to, 3),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lock_once, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ungroup, 3),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_user, 3),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sender, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_try_secret_name, 3),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_max_output, 3),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chunk_size, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_size_hint, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_autostart, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disable_dirmngr, 1),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_import, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_import, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_check_trustdb, 1),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_check_trustdb, 1),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_sig_cache, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auto_key_retrieve, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_mode, 3),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_s2k_count, 3),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compliance, 3, .production_id = 11),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min_rsa_length, 3),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_no_auto_key_retrieve, 1),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
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
