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
#define STATE_COUNT 374
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 381
#define ALIAS_COUNT 0
#define TOKEN_COUNT 265
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym_config_token1 = 1,
  anon_sym_default_DASHrecipient = 2,
  anon_sym_default_DASHrecipient_DASHself = 3,
  anon_sym_no_DASHdefault_DASHrecipient = 4,
  anon_sym_verbose = 5,
  anon_sym_no_DASHtty = 6,
  anon_sym_enable_DASHlarge_DASHrsa = 7,
  anon_sym_disable_DASHlarge_DASHrsa = 8,
  anon_sym_enable_DASHdsa2 = 9,
  anon_sym_disable_DASHdsa2 = 10,
  anon_sym_no_DASHcompress = 11,
  anon_sym_bzip2_DASHdecompress_DASHlowmem = 12,
  anon_sym_mangle_DASHdos_DASHfilenames = 13,
  anon_sym_no_DASHmangle_DASHdos_DASHfilenames = 14,
  anon_sym_ask_DASHcert_DASHlevel = 15,
  anon_sym_no_DASHask_DASHcert_DASHlevel = 16,
  anon_sym_always_DASHtrust = 17,
  anon_sym_no_DASHauto_DASHkey_DASHlocate = 18,
  anon_sym_auto_DASHkey_DASHimport = 19,
  anon_sym_no_DASHauto_DASHkey_DASHimport = 20,
  anon_sym_auto_DASHkey_DASHretrieve = 21,
  anon_sym_no_DASHauto_DASHkey_DASHretrieve = 22,
  anon_sym_no_DASHsig_DASHcache = 23,
  anon_sym_auto_DASHcheck_DASHtrustdb = 24,
  anon_sym_no_DASHauto_DASHcheck_DASHtrustdb = 25,
  anon_sym_disable_DASHdirmngr = 26,
  anon_sym_no_DASHautostart = 27,
  anon_sym_lock_DASHonce = 28,
  anon_sym_lock_DASHmultiple = 29,
  anon_sym_lock_DASHnever = 30,
  anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror = 31,
  anon_sym_no_DASHrandom_DASHseed_DASHfile = 32,
  anon_sym_no_DASHgreeting = 33,
  anon_sym_no_DASHsecmem_DASHwarning = 34,
  anon_sym_no_DASHpermission_DASHwarning = 35,
  anon_sym_require_DASHsecmem = 36,
  anon_sym_no_DASHrequire_DASHsecmem = 37,
  anon_sym_require_DASHcross_DASHverification = 38,
  anon_sym_no_DASHrequire_DASHcross_DASHverification = 39,
  anon_sym_expert = 40,
  anon_sym_no_DASHexpert = 41,
  anon_sym_no_DASHencrypt_DASHto = 42,
  anon_sym_no_DASHgroups = 43,
  anon_sym_try_DASHall_DASHsecrets = 44,
  anon_sym_skip_DASHhidden_DASHrecipients = 45,
  anon_sym_no_DASHskip_DASHhidden_DASHrecipients = 46,
  anon_sym_armor = 47,
  anon_sym_no_DASHarmor = 48,
  anon_sym_with_DASHcolons = 49,
  anon_sym_legacy_DASHlist_DASHmode = 50,
  anon_sym_with_DASHfingerprint = 51,
  anon_sym_with_DASHsubkey_DASHfingerprint = 52,
  anon_sym_with_DASHicao_DASHspelling = 53,
  anon_sym_with_DASHkeygrip = 54,
  anon_sym_with_DASHkey_DASHorigin = 55,
  anon_sym_with_DASHwkd_DASHhash = 56,
  anon_sym_with_DASHsecret = 57,
  anon_sym_textmode = 58,
  anon_sym_no_DASHtextmode = 59,
  anon_sym_force_DASHocb = 60,
  anon_sym_force_DASHaead = 61,
  anon_sym_disable_DASHsigner_DASHuid = 62,
  anon_sym_include_DASHkey_DASHblock = 63,
  anon_sym_no_DASHinclude_DASHkey_DASHblock = 64,
  anon_sym_gnupg = 65,
  anon_sym_openpgp = 66,
  anon_sym_rfc4880 = 67,
  anon_sym_rfc4880bis = 68,
  anon_sym_rfc2440 = 69,
  anon_sym_pgp7 = 70,
  anon_sym_pgp8 = 71,
  anon_sym_list_DASHonly = 72,
  anon_sym_interactive = 73,
  anon_sym_debug_DASHall = 74,
  anon_sym_debug_DASHiolbf = 75,
  anon_sym_debug_DASHallow_DASHlarge_DASHchunks = 76,
  anon_sym_debug_DASHignore_DASHexpiration = 77,
  anon_sym_full_DASHtimestrings = 78,
  anon_sym_enable_DASHprogress_DASHfilter = 79,
  anon_sym_log_DASHtime = 80,
  anon_sym_no_DASHcomments = 81,
  anon_sym_emit_DASHversion = 82,
  anon_sym_no_DASHemit_DASHversion = 83,
  anon_sym_for_DASHyour_DASHeyes_DASHonly = 84,
  anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly = 85,
  anon_sym_use_DASHembedded_DASHfilename = 86,
  anon_sym_no_DASHuse_DASHembedded_DASHfilename = 87,
  anon_sym_throw_DASHkeyids = 88,
  anon_sym_no_DASHthrow_DASHkeyids = 89,
  anon_sym_not_DASHdash_DASHescaped = 90,
  anon_sym_escape_DASHfrom_DASHlines = 91,
  anon_sym_no_DASHescape_DASHfrom_DASHlines = 92,
  anon_sym_no_DASHsymkey_DASHcache = 93,
  anon_sym_allow_DASHnon_DASHselfsigned_DASHuid = 94,
  anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid = 95,
  anon_sym_allow_DASHfreeform_DASHuid = 96,
  anon_sym_ignore_DASHtime_DASHconflict = 97,
  anon_sym_ignore_DASHvalid_DASHfrom = 98,
  anon_sym_ignore_DASHcrc_DASHerror = 99,
  anon_sym_ignore_DASHmdc_DASHerror = 100,
  anon_sym_allow_DASHold_DASHcipher_DASHalgos = 101,
  anon_sym_allow_DASHweak_DASHdigest_DASHalgos = 102,
  anon_sym_allow_DASHweak_DASHkey_DASHsignatures = 103,
  anon_sym_override_DASHcompliance_DASHcheck = 104,
  anon_sym_no_DASHdefault_DASHkeyring = 105,
  anon_sym_no_DASHkeyring = 106,
  anon_sym_skip_DASHverify = 107,
  anon_sym_with_DASHkey_DASHdata = 108,
  anon_sym_list_DASHsignatures = 109,
  anon_sym_list_DASHsigs = 110,
  anon_sym_fast_DASHlist_DASHmode = 111,
  anon_sym_show_DASHsession_DASHkey = 112,
  anon_sym_ask_DASHsig_DASHexpire = 113,
  anon_sym_no_DASHask_DASHsig_DASHexpire = 114,
  anon_sym_ask_DASHcert_DASHexpire = 115,
  anon_sym_no_DASHask_DASHcert_DASHexpire = 116,
  anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey = 117,
  anon_sym_force_DASHsign_DASHkey = 118,
  anon_sym_forbid_DASHgen_DASHkey = 119,
  anon_sym_enable_DASHspecial_DASHfilenames = 120,
  anon_sym_preserve_DASHpermissions = 121,
  aux_sym__unknown_option_token1 = 122,
  aux_sym__unknown_option_token2 = 123,
  anon_sym_default_DASHkey = 124,
  anon_sym_list_DASHoptions = 125,
  anon_sym_COMMA = 126,
  sym__list_parameter = 127,
  anon_sym_verify_DASHoptions = 128,
  sym__verify_parameter = 129,
  anon_sym_photo_DASHviewer = 130,
  aux_sym__command_token1 = 131,
  anon_sym_DQUOTE = 132,
  aux_sym__command_token2 = 133,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 134,
  anon_sym_SQUOTE = 135,
  aux_sym__command_token3 = 136,
  aux_sym__command_format_token1 = 137,
  anon_sym_exec_DASHpath = 138,
  anon_sym_keyring = 139,
  anon_sym_primary_DASHkeyring = 140,
  anon_sym_trustdb_DASHname = 141,
  anon_sym_display_DASHcharset = 142,
  sym__charset_value = 143,
  sym__utf8_strings = 144,
  sym__no_utf8_strings = 145,
  anon_sym_compress_DASHlevel = 146,
  aux_sym__compress_level_token1 = 147,
  anon_sym_bzip2_DASHcompress_DASHlevel = 148,
  anon_sym_default_DASHcert_DASHlevel = 149,
  aux_sym__default_cert_level_token1 = 150,
  anon_sym_min_DASHcert_DASHlevel = 151,
  anon_sym_trusted_DASHkey = 152,
  anon_sym_add_DASHdesig_DASHrevoker = 153,
  aux_sym__add_desig_revoker_token1 = 154,
  aux_sym__add_desig_revoker_token2 = 155,
  anon_sym_trust_DASHmodel = 156,
  sym__model = 157,
  anon_sym_assert_DASHsigner = 158,
  anon_sym_auto_DASHkey_DASHlocate = 159,
  sym__key_locate_value = 160,
  anon_sym_keyid_DASHformat = 161,
  sym__keyid_format_value = 162,
  anon_sym_keyserver = 163,
  anon_sym_completes_DASHneeded = 164,
  anon_sym_marginals_DASHneeded = 165,
  anon_sym_tofu_DASHdefault_DASHpolicy = 166,
  sym__tofu_policy_value = 167,
  anon_sym_max_DASHcert_DASHdepth = 168,
  anon_sym_agent_DASHprogram = 169,
  anon_sym_dirmngr_DASHprogram = 170,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 171,
  anon_sym_recipient = 172,
  anon_sym_hidden_DASHrecipient = 173,
  anon_sym_recipient_DASHfile = 174,
  anon_sym_hidden_DASHrecipient_DASHfile = 175,
  anon_sym_encrypt_DASHto = 176,
  anon_sym_hidden_DASHencrypt_DASHto = 177,
  anon_sym_group = 178,
  anon_sym_EQ = 179,
  anon_sym_ungroup = 180,
  anon_sym_local_DASHuser = 181,
  anon_sym_sender = 182,
  anon_sym_try_DASHsecret_DASHname = 183,
  anon_sym_output = 184,
  anon_sym_max_DASHoutput = 185,
  anon_sym_chunk_DASHsize = 186,
  anon_sym_input_DASHsize_DASHhint = 187,
  anon_sym_key_DASHorigin = 188,
  sym__key_origin_value = 189,
  anon_sym_import_DASHoptions = 190,
  sym__import_parameter = 191,
  anon_sym_export_DASHoptions = 192,
  sym__export_parameter = 193,
  anon_sym_personal_DASHcipher_DASHpreferences = 194,
  anon_sym_personal_DASHdigest_DASHpreferences = 195,
  anon_sym_personal_DASHcompress_DASHpreferences = 196,
  anon_sym_s2k_DASHcipher_DASHalgo = 197,
  anon_sym_s2k_DASHdigest_DASHalgo = 198,
  anon_sym_s2k_DASHmode = 199,
  aux_sym__s2k_mode_token1 = 200,
  anon_sym_s2k_DASHcount = 201,
  anon_sym_compliance = 202,
  sym__compliance_value = 203,
  anon_sym_min_DASHrsa_DASHlength = 204,
  sym__require_compliance = 205,
  anon_sym_debug_DASHlevel = 206,
  sym__debug_level_value = 207,
  anon_sym_debug = 208,
  aux_sym__debug_token1 = 209,
  sym__debug_flag_value = 210,
  anon_sym_debug_DASHset_DASHiobuf_DASHsize = 211,
  anon_sym_faked_DASHsystem_DASHtime = 212,
  anon_sym_BANG = 213,
  anon_sym_status_DASHfd = 214,
  anon_sym_status_DASHfile = 215,
  anon_sym_logger_DASHfd = 216,
  anon_sym_logger_DASHfile = 217,
  anon_sym_log_DASHfile = 218,
  anon_sym_comment = 219,
  aux_sym__notation_format_token1 = 220,
  anon_sym_known_DASHnotation = 221,
  anon_sym_sig_DASHpolicy_DASHurl = 222,
  anon_sym_cert_DASHpolicy_DASHurl = 223,
  anon_sym_set_DASHpolicy_DASHurl = 224,
  anon_sym_sig_DASHkeyserver_DASHurl = 225,
  anon_sym_set_DASHfilename = 226,
  anon_sym_cipher_DASHalgo = 227,
  anon_sym_digest_DASHalgo = 228,
  anon_sym_compress_DASHalgo = 229,
  anon_sym_cert_DASHdigest_DASHalgo = 230,
  anon_sym_disable_DASHcipher_DASHalgo = 231,
  anon_sym_disable_DASHpubkey_DASHalgo = 232,
  anon_sym_passphrase_DASHrepeat = 233,
  anon_sym_passphrase_DASHfd = 234,
  anon_sym_passphrase_DASHfile = 235,
  anon_sym_passphrase = 236,
  anon_sym_pinentry_DASHmode = 237,
  sym__pinentry_mode_value = 238,
  anon_sym_request_DASHorigin = 239,
  sym__request_origin_value = 240,
  anon_sym_command_DASHfd = 241,
  anon_sym_command_DASHfile = 242,
  anon_sym_weak_DASHdigest = 243,
  anon_sym_override_DASHsession_DASHkey = 244,
  anon_sym_override_DASHsession_DASHkey_DASHfd = 245,
  anon_sym_default_DASHsig_DASHexpire = 246,
  anon_sym_default_DASHcert_DASHexpire = 247,
  anon_sym_default_DASHnew_DASHkey_DASHalgo = 248,
  sym__new_key_algo = 249,
  anon_sym_default_DASHpreference_DASHlist = 250,
  anon_sym_default_DASHkeyserver_DASHurl = 251,
  anon_sym_chuid = 252,
  sym_key = 253,
  sym_url = 254,
  sym_number = 255,
  sym_iso_time = 256,
  sym_expire_time = 257,
  aux_sym_string_token1 = 258,
  sym_comment = 259,
  sym__pubkey_algo_value = 260,
  sym__cipher_algo_value = 261,
  sym__hash_algo_value = 262,
  sym__compression_algo_value = 263,
  sym__space = 264,
  sym_config = 265,
  sym_option = 266,
  sym__unknown_option = 267,
  sym__default_key = 268,
  sym__list_options = 269,
  sym__verify_options = 270,
  sym__photo_viewer = 271,
  sym__command = 272,
  sym__command_format = 273,
  sym__exec_path = 274,
  sym__keyring = 275,
  sym__primary_keyring = 276,
  sym__trustdb_name = 277,
  sym__display_charset = 278,
  sym__compress_level = 279,
  sym__bzip2_compress_level = 280,
  sym__default_cert_level = 281,
  sym__min_cert_level = 282,
  sym__trusted_key = 283,
  sym__add_desig_revoker = 284,
  sym__trust_model = 285,
  sym__assert_signer = 286,
  sym__auto_key_locate = 287,
  sym__keyid_format = 288,
  sym__keyserver = 289,
  sym__completes_needed = 290,
  sym__marginals_needed = 291,
  sym__tofu_default_policy = 292,
  sym__max_cert_depth = 293,
  sym__agent_program = 294,
  sym__dirmngr_program = 295,
  sym__limit_card_insert_tries = 296,
  sym__recipient = 297,
  sym__hidden_recipient = 298,
  sym__recipient_file = 299,
  sym__hidden_recipient_file = 300,
  sym__encrypt_to = 301,
  sym__hidden_encrypt_to = 302,
  sym__group = 303,
  sym__ungroup = 304,
  sym__local_user = 305,
  sym__sender = 306,
  sym__try_secret_name = 307,
  sym__output = 308,
  sym__max_output = 309,
  sym__chunk_size = 310,
  sym__input_size_hint = 311,
  sym__key_origin = 312,
  sym__import_options = 313,
  sym__export_options = 314,
  sym__personal_cipher_preferences = 315,
  sym__personal_digest_preferences = 316,
  sym__personal_compress_preferences = 317,
  sym__s2k_cipher_algo = 318,
  sym__s2k_digest_algo = 319,
  sym__s2k_mode = 320,
  sym__s2k_count = 321,
  sym__compliance = 322,
  sym__min_rsa_length = 323,
  sym__debug_level = 324,
  sym__debug = 325,
  sym__debug_set_iobuf_size = 326,
  sym__faked_system_time = 327,
  sym__status_fd = 328,
  sym__status_file = 329,
  sym__logger_fd = 330,
  sym__logger_file = 331,
  sym__comment = 332,
  sym__notation_format = 333,
  sym__known_notation = 334,
  sym__sig_policy_url = 335,
  sym__cert_policy_url = 336,
  sym__set_policy_url = 337,
  sym__sig_keyserver_url = 338,
  aux_sym__formatted_url = 339,
  sym__set_filename = 340,
  sym__cipher_algo = 341,
  sym__digest_algo = 342,
  sym__compress_algo = 343,
  sym__cert_digest_algo = 344,
  sym__disable_cipher_algo = 345,
  sym__disable_pubkey_algo = 346,
  sym__passphrase_repeat = 347,
  sym__passphrase_fd = 348,
  sym__passphrase_file = 349,
  sym__passphrase = 350,
  sym__pinentry_mode = 351,
  sym__request_origin = 352,
  sym__command_fd = 353,
  sym__command_file = 354,
  sym__weak_digest = 355,
  sym__override_session_key = 356,
  sym__override_session_key_fd = 357,
  sym__default_sig_expire = 358,
  sym__default_cert_expire = 359,
  sym__default_new_key_algo = 360,
  sym__default_preference_list = 361,
  sym__default_keyserver_url = 362,
  sym__chuid = 363,
  sym_string = 364,
  aux_sym_config_repeat1 = 365,
  aux_sym__list_options_repeat1 = 366,
  aux_sym__verify_options_repeat1 = 367,
  aux_sym__command_repeat1 = 368,
  aux_sym__command_repeat2 = 369,
  aux_sym__command_repeat3 = 370,
  aux_sym__auto_key_locate_repeat1 = 371,
  aux_sym__import_options_repeat1 = 372,
  aux_sym__export_options_repeat1 = 373,
  aux_sym__personal_cipher_preferences_repeat1 = 374,
  aux_sym__personal_digest_preferences_repeat1 = 375,
  aux_sym__personal_compress_preferences_repeat1 = 376,
  aux_sym__debug_repeat1 = 377,
  aux_sym__default_new_key_algo_repeat1 = 378,
  aux_sym_string_repeat1 = 379,
  aux_sym_string_repeat2 = 380,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
  [anon_sym_default_DASHrecipient] = "default-recipient",
  [anon_sym_default_DASHrecipient_DASHself] = "default-recipient-self",
  [anon_sym_no_DASHdefault_DASHrecipient] = "no-default-recipient",
  [anon_sym_verbose] = "verbose",
  [anon_sym_no_DASHtty] = "no-tty",
  [anon_sym_enable_DASHlarge_DASHrsa] = "enable-large-rsa",
  [anon_sym_disable_DASHlarge_DASHrsa] = "disable-large-rsa",
  [anon_sym_enable_DASHdsa2] = "enable-dsa2",
  [anon_sym_disable_DASHdsa2] = "disable-dsa2",
  [anon_sym_no_DASHcompress] = "no-compress",
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = "bzip2-decompress-lowmem",
  [anon_sym_mangle_DASHdos_DASHfilenames] = "mangle-dos-filenames",
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = "no-mangle-dos-filenames",
  [anon_sym_ask_DASHcert_DASHlevel] = "ask-cert-level",
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = "no-ask-cert-level",
  [anon_sym_always_DASHtrust] = "always-trust",
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = "no-auto-key-locate",
  [anon_sym_auto_DASHkey_DASHimport] = "auto-key-import",
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = "no-auto-key-import",
  [anon_sym_auto_DASHkey_DASHretrieve] = "auto-key-retrieve",
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = "no-auto-key-retrieve",
  [anon_sym_no_DASHsig_DASHcache] = "no-sig-cache",
  [anon_sym_auto_DASHcheck_DASHtrustdb] = "auto-check-trustdb",
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = "no-auto-check-trustdb",
  [anon_sym_disable_DASHdirmngr] = "disable-dirmngr",
  [anon_sym_no_DASHautostart] = "no-autostart",
  [anon_sym_lock_DASHonce] = "lock-once",
  [anon_sym_lock_DASHmultiple] = "lock-multiple",
  [anon_sym_lock_DASHnever] = "lock-never",
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = "exit-on-status-write-error",
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = "no-random-seed-file",
  [anon_sym_no_DASHgreeting] = "no-greeting",
  [anon_sym_no_DASHsecmem_DASHwarning] = "no-secmem-warning",
  [anon_sym_no_DASHpermission_DASHwarning] = "no-permission-warning",
  [anon_sym_require_DASHsecmem] = "require-secmem",
  [anon_sym_no_DASHrequire_DASHsecmem] = "no-require-secmem",
  [anon_sym_require_DASHcross_DASHverification] = "require-cross-verification",
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = "no-require-cross-verification",
  [anon_sym_expert] = "expert",
  [anon_sym_no_DASHexpert] = "no-expert",
  [anon_sym_no_DASHencrypt_DASHto] = "no-encrypt-to",
  [anon_sym_no_DASHgroups] = "no-groups",
  [anon_sym_try_DASHall_DASHsecrets] = "try-all-secrets",
  [anon_sym_skip_DASHhidden_DASHrecipients] = "skip-hidden-recipients",
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = "no-skip-hidden-recipients",
  [anon_sym_armor] = "armor",
  [anon_sym_no_DASHarmor] = "no-armor",
  [anon_sym_with_DASHcolons] = "with-colons",
  [anon_sym_legacy_DASHlist_DASHmode] = "legacy-list-mode",
  [anon_sym_with_DASHfingerprint] = "with-fingerprint",
  [anon_sym_with_DASHsubkey_DASHfingerprint] = "with-subkey-fingerprint",
  [anon_sym_with_DASHicao_DASHspelling] = "with-icao-spelling",
  [anon_sym_with_DASHkeygrip] = "with-keygrip",
  [anon_sym_with_DASHkey_DASHorigin] = "with-key-origin",
  [anon_sym_with_DASHwkd_DASHhash] = "with-wkd-hash",
  [anon_sym_with_DASHsecret] = "with-secret",
  [anon_sym_textmode] = "textmode",
  [anon_sym_no_DASHtextmode] = "no-textmode",
  [anon_sym_force_DASHocb] = "force-ocb",
  [anon_sym_force_DASHaead] = "force-aead",
  [anon_sym_disable_DASHsigner_DASHuid] = "disable-signer-uid",
  [anon_sym_include_DASHkey_DASHblock] = "include-key-block",
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = "no-include-key-block",
  [anon_sym_gnupg] = "gnupg",
  [anon_sym_openpgp] = "openpgp",
  [anon_sym_rfc4880] = "rfc4880",
  [anon_sym_rfc4880bis] = "rfc4880bis",
  [anon_sym_rfc2440] = "rfc2440",
  [anon_sym_pgp7] = "pgp7",
  [anon_sym_pgp8] = "pgp8",
  [anon_sym_list_DASHonly] = "list-only",
  [anon_sym_interactive] = "interactive",
  [anon_sym_debug_DASHall] = "debug-all",
  [anon_sym_debug_DASHiolbf] = "debug-iolbf",
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = "debug-allow-large-chunks",
  [anon_sym_debug_DASHignore_DASHexpiration] = "debug-ignore-expiration",
  [anon_sym_full_DASHtimestrings] = "full-timestrings",
  [anon_sym_enable_DASHprogress_DASHfilter] = "enable-progress-filter",
  [anon_sym_log_DASHtime] = "log-time",
  [anon_sym_no_DASHcomments] = "no-comments",
  [anon_sym_emit_DASHversion] = "emit-version",
  [anon_sym_no_DASHemit_DASHversion] = "no-emit-version",
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = "for-your-eyes-only",
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = "no-for-your-eyes-only",
  [anon_sym_use_DASHembedded_DASHfilename] = "use-embedded-filename",
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = "no-use-embedded-filename",
  [anon_sym_throw_DASHkeyids] = "throw-keyids",
  [anon_sym_no_DASHthrow_DASHkeyids] = "no-throw-keyids",
  [anon_sym_not_DASHdash_DASHescaped] = "not-dash-escaped",
  [anon_sym_escape_DASHfrom_DASHlines] = "escape-from-lines",
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = "no-escape-from-lines",
  [anon_sym_no_DASHsymkey_DASHcache] = "no-symkey-cache",
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = "allow-non-selfsigned-uid",
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = "no-allow-non-selfsigned-uid",
  [anon_sym_allow_DASHfreeform_DASHuid] = "allow-freeform-uid",
  [anon_sym_ignore_DASHtime_DASHconflict] = "ignore-time-conflict",
  [anon_sym_ignore_DASHvalid_DASHfrom] = "ignore-valid-from",
  [anon_sym_ignore_DASHcrc_DASHerror] = "ignore-crc-error",
  [anon_sym_ignore_DASHmdc_DASHerror] = "ignore-mdc-error",
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = "allow-old-cipher-algos",
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = "allow-weak-digest-algos",
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = "allow-weak-key-signatures",
  [anon_sym_override_DASHcompliance_DASHcheck] = "override-compliance-check",
  [anon_sym_no_DASHdefault_DASHkeyring] = "no-default-keyring",
  [anon_sym_no_DASHkeyring] = "no-keyring",
  [anon_sym_skip_DASHverify] = "skip-verify",
  [anon_sym_with_DASHkey_DASHdata] = "with-key-data",
  [anon_sym_list_DASHsignatures] = "list-signatures",
  [anon_sym_list_DASHsigs] = "list-sigs",
  [anon_sym_fast_DASHlist_DASHmode] = "fast-list-mode",
  [anon_sym_show_DASHsession_DASHkey] = "show-session-key",
  [anon_sym_ask_DASHsig_DASHexpire] = "ask-sig-expire",
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = "no-ask-sig-expire",
  [anon_sym_ask_DASHcert_DASHexpire] = "ask-cert-expire",
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = "no-ask-cert-expire",
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = "no-auto-trust-new-key",
  [anon_sym_force_DASHsign_DASHkey] = "force-sign-key",
  [anon_sym_forbid_DASHgen_DASHkey] = "forbid-gen-key",
  [anon_sym_enable_DASHspecial_DASHfilenames] = "enable-special-filenames",
  [anon_sym_preserve_DASHpermissions] = "preserve-permissions",
  [aux_sym__unknown_option_token1] = "_unknown_option_token1",
  [aux_sym__unknown_option_token2] = "string",
  [anon_sym_default_DASHkey] = "default-key",
  [anon_sym_list_DASHoptions] = "list-options",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "_list_parameter",
  [anon_sym_verify_DASHoptions] = "verify-options",
  [sym__verify_parameter] = "_verify_parameter",
  [anon_sym_photo_DASHviewer] = "photo-viewer",
  [aux_sym__command_token1] = "_command_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__command_token2] = "_command_token2",
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = "\\${q}",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__command_token3] = "_command_token3",
  [aux_sym__command_format_token1] = "format",
  [anon_sym_exec_DASHpath] = "exec-path",
  [anon_sym_keyring] = "keyring",
  [anon_sym_primary_DASHkeyring] = "primary-keyring",
  [anon_sym_trustdb_DASHname] = "trustdb-name",
  [anon_sym_display_DASHcharset] = "display-charset",
  [sym__charset_value] = "_charset_value",
  [sym__utf8_strings] = "_utf8_strings",
  [sym__no_utf8_strings] = "_no_utf8_strings",
  [anon_sym_compress_DASHlevel] = "compress-level",
  [aux_sym__compress_level_token1] = "number",
  [anon_sym_bzip2_DASHcompress_DASHlevel] = "bzip2-compress-level",
  [anon_sym_default_DASHcert_DASHlevel] = "default-cert-level",
  [aux_sym__default_cert_level_token1] = "number",
  [anon_sym_min_DASHcert_DASHlevel] = "min-cert-level",
  [anon_sym_trusted_DASHkey] = "trusted-key",
  [anon_sym_add_DASHdesig_DASHrevoker] = "add-desig-revoker",
  [aux_sym__add_desig_revoker_token1] = "sensitive:",
  [aux_sym__add_desig_revoker_token2] = "clear",
  [anon_sym_trust_DASHmodel] = "trust-model",
  [sym__model] = "_model",
  [anon_sym_assert_DASHsigner] = "assert-signer",
  [anon_sym_auto_DASHkey_DASHlocate] = "auto-key-locate",
  [sym__key_locate_value] = "_key_locate_value",
  [anon_sym_keyid_DASHformat] = "keyid-format",
  [sym__keyid_format_value] = "_keyid_format_value",
  [anon_sym_keyserver] = "keyserver",
  [anon_sym_completes_DASHneeded] = "completes-needed",
  [anon_sym_marginals_DASHneeded] = "marginals-needed",
  [anon_sym_tofu_DASHdefault_DASHpolicy] = "tofu-default-policy",
  [sym__tofu_policy_value] = "_tofu_policy_value",
  [anon_sym_max_DASHcert_DASHdepth] = "max-cert-depth",
  [anon_sym_agent_DASHprogram] = "agent-program",
  [anon_sym_dirmngr_DASHprogram] = "dirmngr-program",
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = "limit-card-insert-tries",
  [anon_sym_recipient] = "recipient",
  [anon_sym_hidden_DASHrecipient] = "hidden-recipient",
  [anon_sym_recipient_DASHfile] = "recipient-file",
  [anon_sym_hidden_DASHrecipient_DASHfile] = "hidden-recipient-file",
  [anon_sym_encrypt_DASHto] = "encrypt-to",
  [anon_sym_hidden_DASHencrypt_DASHto] = "hidden-encrypt-to",
  [anon_sym_group] = "group",
  [anon_sym_EQ] = "=",
  [anon_sym_ungroup] = "ungroup",
  [anon_sym_local_DASHuser] = "local-user",
  [anon_sym_sender] = "sender",
  [anon_sym_try_DASHsecret_DASHname] = "try-secret-name",
  [anon_sym_output] = "output",
  [anon_sym_max_DASHoutput] = "max-output",
  [anon_sym_chunk_DASHsize] = "chunk-size",
  [anon_sym_input_DASHsize_DASHhint] = "input-size-hint",
  [anon_sym_key_DASHorigin] = "key-origin",
  [sym__key_origin_value] = "_key_origin_value",
  [anon_sym_import_DASHoptions] = "import-options",
  [sym__import_parameter] = "_import_parameter",
  [anon_sym_export_DASHoptions] = "export-options",
  [sym__export_parameter] = "_export_parameter",
  [anon_sym_personal_DASHcipher_DASHpreferences] = "personal-cipher-preferences",
  [anon_sym_personal_DASHdigest_DASHpreferences] = "personal-digest-preferences",
  [anon_sym_personal_DASHcompress_DASHpreferences] = "personal-compress-preferences",
  [anon_sym_s2k_DASHcipher_DASHalgo] = "s2k-cipher-algo",
  [anon_sym_s2k_DASHdigest_DASHalgo] = "s2k-digest-algo",
  [anon_sym_s2k_DASHmode] = "s2k-mode",
  [aux_sym__s2k_mode_token1] = "number",
  [anon_sym_s2k_DASHcount] = "s2k-count",
  [anon_sym_compliance] = "compliance",
  [sym__compliance_value] = "_compliance_value",
  [anon_sym_min_DASHrsa_DASHlength] = "min-rsa-length",
  [sym__require_compliance] = "_require_compliance",
  [anon_sym_debug_DASHlevel] = "debug-level",
  [sym__debug_level_value] = "_debug_level_value",
  [anon_sym_debug] = "debug",
  [aux_sym__debug_token1] = "number",
  [sym__debug_flag_value] = "_debug_flag_value",
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = "debug-set-iobuf-size",
  [anon_sym_faked_DASHsystem_DASHtime] = "faked-system-time",
  [anon_sym_BANG] = "!",
  [anon_sym_status_DASHfd] = "status-fd",
  [anon_sym_status_DASHfile] = "status-file",
  [anon_sym_logger_DASHfd] = "logger-fd",
  [anon_sym_logger_DASHfile] = "logger-file",
  [anon_sym_log_DASHfile] = "log-file",
  [anon_sym_comment] = "comment",
  [aux_sym__notation_format_token1] = "format",
  [anon_sym_known_DASHnotation] = "known-notation",
  [anon_sym_sig_DASHpolicy_DASHurl] = "sig-policy-url",
  [anon_sym_cert_DASHpolicy_DASHurl] = "cert-policy-url",
  [anon_sym_set_DASHpolicy_DASHurl] = "set-policy-url",
  [anon_sym_sig_DASHkeyserver_DASHurl] = "sig-keyserver-url",
  [anon_sym_set_DASHfilename] = "set-filename",
  [anon_sym_cipher_DASHalgo] = "cipher-algo",
  [anon_sym_digest_DASHalgo] = "digest-algo",
  [anon_sym_compress_DASHalgo] = "compress-algo",
  [anon_sym_cert_DASHdigest_DASHalgo] = "cert-digest-algo",
  [anon_sym_disable_DASHcipher_DASHalgo] = "disable-cipher-algo",
  [anon_sym_disable_DASHpubkey_DASHalgo] = "disable-pubkey-algo",
  [anon_sym_passphrase_DASHrepeat] = "passphrase-repeat",
  [anon_sym_passphrase_DASHfd] = "passphrase-fd",
  [anon_sym_passphrase_DASHfile] = "passphrase-file",
  [anon_sym_passphrase] = "passphrase",
  [anon_sym_pinentry_DASHmode] = "pinentry-mode",
  [sym__pinentry_mode_value] = "_pinentry_mode_value",
  [anon_sym_request_DASHorigin] = "request-origin",
  [sym__request_origin_value] = "_request_origin_value",
  [anon_sym_command_DASHfd] = "command-fd",
  [anon_sym_command_DASHfile] = "command-file",
  [anon_sym_weak_DASHdigest] = "weak-digest",
  [anon_sym_override_DASHsession_DASHkey] = "override-session-key",
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = "override-session-key-fd",
  [anon_sym_default_DASHsig_DASHexpire] = "default-sig-expire",
  [anon_sym_default_DASHcert_DASHexpire] = "default-cert-expire",
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = "default-new-key-algo",
  [sym__new_key_algo] = "_new_key_algo",
  [anon_sym_default_DASHpreference_DASHlist] = "default-preference-list",
  [anon_sym_default_DASHkeyserver_DASHurl] = "default-keyserver-url",
  [anon_sym_chuid] = "chuid",
  [sym_key] = "key",
  [sym_url] = "url",
  [sym_number] = "number",
  [sym_iso_time] = "iso_time",
  [sym_expire_time] = "expire_time",
  [aux_sym_string_token1] = "string_token1",
  [sym_comment] = "comment",
  [sym__pubkey_algo_value] = "_pubkey_algo_value",
  [sym__cipher_algo_value] = "_cipher_algo_value",
  [sym__hash_algo_value] = "_hash_algo_value",
  [sym__compression_algo_value] = "_compression_algo_value",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_option] = "option",
  [sym__unknown_option] = "_unknown_option",
  [sym__default_key] = "_default_key",
  [sym__list_options] = "_list_options",
  [sym__verify_options] = "_verify_options",
  [sym__photo_viewer] = "_photo_viewer",
  [sym__command] = "string",
  [sym__command_format] = "_command_format",
  [sym__exec_path] = "_exec_path",
  [sym__keyring] = "_keyring",
  [sym__primary_keyring] = "_primary_keyring",
  [sym__trustdb_name] = "_trustdb_name",
  [sym__display_charset] = "_display_charset",
  [sym__compress_level] = "_compress_level",
  [sym__bzip2_compress_level] = "_bzip2_compress_level",
  [sym__default_cert_level] = "_default_cert_level",
  [sym__min_cert_level] = "_min_cert_level",
  [sym__trusted_key] = "_trusted_key",
  [sym__add_desig_revoker] = "_add_desig_revoker",
  [sym__trust_model] = "_trust_model",
  [sym__assert_signer] = "_assert_signer",
  [sym__auto_key_locate] = "_auto_key_locate",
  [sym__keyid_format] = "_keyid_format",
  [sym__keyserver] = "_keyserver",
  [sym__completes_needed] = "_completes_needed",
  [sym__marginals_needed] = "_marginals_needed",
  [sym__tofu_default_policy] = "_tofu_default_policy",
  [sym__max_cert_depth] = "_max_cert_depth",
  [sym__agent_program] = "_agent_program",
  [sym__dirmngr_program] = "_dirmngr_program",
  [sym__limit_card_insert_tries] = "_limit_card_insert_tries",
  [sym__recipient] = "_recipient",
  [sym__hidden_recipient] = "_hidden_recipient",
  [sym__recipient_file] = "_recipient_file",
  [sym__hidden_recipient_file] = "_hidden_recipient_file",
  [sym__encrypt_to] = "_encrypt_to",
  [sym__hidden_encrypt_to] = "_hidden_encrypt_to",
  [sym__group] = "_group",
  [sym__ungroup] = "_ungroup",
  [sym__local_user] = "_local_user",
  [sym__sender] = "_sender",
  [sym__try_secret_name] = "_try_secret_name",
  [sym__output] = "_output",
  [sym__max_output] = "_max_output",
  [sym__chunk_size] = "_chunk_size",
  [sym__input_size_hint] = "_input_size_hint",
  [sym__key_origin] = "_key_origin",
  [sym__import_options] = "_import_options",
  [sym__export_options] = "_export_options",
  [sym__personal_cipher_preferences] = "_personal_cipher_preferences",
  [sym__personal_digest_preferences] = "_personal_digest_preferences",
  [sym__personal_compress_preferences] = "_personal_compress_preferences",
  [sym__s2k_cipher_algo] = "_s2k_cipher_algo",
  [sym__s2k_digest_algo] = "_s2k_digest_algo",
  [sym__s2k_mode] = "_s2k_mode",
  [sym__s2k_count] = "_s2k_count",
  [sym__compliance] = "_compliance",
  [sym__min_rsa_length] = "_min_rsa_length",
  [sym__debug_level] = "_debug_level",
  [sym__debug] = "_debug",
  [sym__debug_set_iobuf_size] = "_debug_set_iobuf_size",
  [sym__faked_system_time] = "_faked_system_time",
  [sym__status_fd] = "_status_fd",
  [sym__status_file] = "_status_file",
  [sym__logger_fd] = "_logger_fd",
  [sym__logger_file] = "_logger_file",
  [sym__comment] = "_comment",
  [sym__notation_format] = "_notation_format",
  [sym__known_notation] = "_known_notation",
  [sym__sig_policy_url] = "_sig_policy_url",
  [sym__cert_policy_url] = "_cert_policy_url",
  [sym__set_policy_url] = "_set_policy_url",
  [sym__sig_keyserver_url] = "_sig_keyserver_url",
  [aux_sym__formatted_url] = "_formatted_url",
  [sym__set_filename] = "_set_filename",
  [sym__cipher_algo] = "_cipher_algo",
  [sym__digest_algo] = "_digest_algo",
  [sym__compress_algo] = "_compress_algo",
  [sym__cert_digest_algo] = "_cert_digest_algo",
  [sym__disable_cipher_algo] = "_disable_cipher_algo",
  [sym__disable_pubkey_algo] = "_disable_pubkey_algo",
  [sym__passphrase_repeat] = "_passphrase_repeat",
  [sym__passphrase_fd] = "_passphrase_fd",
  [sym__passphrase_file] = "_passphrase_file",
  [sym__passphrase] = "_passphrase",
  [sym__pinentry_mode] = "_pinentry_mode",
  [sym__request_origin] = "_request_origin",
  [sym__command_fd] = "_command_fd",
  [sym__command_file] = "_command_file",
  [sym__weak_digest] = "_weak_digest",
  [sym__override_session_key] = "_override_session_key",
  [sym__override_session_key_fd] = "_override_session_key_fd",
  [sym__default_sig_expire] = "_default_sig_expire",
  [sym__default_cert_expire] = "_default_cert_expire",
  [sym__default_new_key_algo] = "_default_new_key_algo",
  [sym__default_preference_list] = "_default_preference_list",
  [sym__default_keyserver_url] = "_default_keyserver_url",
  [sym__chuid] = "_chuid",
  [sym_string] = "string",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__list_options_repeat1] = "_list_options_repeat1",
  [aux_sym__verify_options_repeat1] = "_verify_options_repeat1",
  [aux_sym__command_repeat1] = "_command_repeat1",
  [aux_sym__command_repeat2] = "_command_repeat2",
  [aux_sym__command_repeat3] = "_command_repeat3",
  [aux_sym__auto_key_locate_repeat1] = "_auto_key_locate_repeat1",
  [aux_sym__import_options_repeat1] = "_import_options_repeat1",
  [aux_sym__export_options_repeat1] = "_export_options_repeat1",
  [aux_sym__personal_cipher_preferences_repeat1] = "_personal_cipher_preferences_repeat1",
  [aux_sym__personal_digest_preferences_repeat1] = "_personal_digest_preferences_repeat1",
  [aux_sym__personal_compress_preferences_repeat1] = "_personal_compress_preferences_repeat1",
  [aux_sym__debug_repeat1] = "_debug_repeat1",
  [aux_sym__default_new_key_algo_repeat1] = "_default_new_key_algo_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
  [anon_sym_default_DASHrecipient] = anon_sym_default_DASHrecipient,
  [anon_sym_default_DASHrecipient_DASHself] = anon_sym_default_DASHrecipient_DASHself,
  [anon_sym_no_DASHdefault_DASHrecipient] = anon_sym_no_DASHdefault_DASHrecipient,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_no_DASHtty] = anon_sym_no_DASHtty,
  [anon_sym_enable_DASHlarge_DASHrsa] = anon_sym_enable_DASHlarge_DASHrsa,
  [anon_sym_disable_DASHlarge_DASHrsa] = anon_sym_disable_DASHlarge_DASHrsa,
  [anon_sym_enable_DASHdsa2] = anon_sym_enable_DASHdsa2,
  [anon_sym_disable_DASHdsa2] = anon_sym_disable_DASHdsa2,
  [anon_sym_no_DASHcompress] = anon_sym_no_DASHcompress,
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = anon_sym_bzip2_DASHdecompress_DASHlowmem,
  [anon_sym_mangle_DASHdos_DASHfilenames] = anon_sym_mangle_DASHdos_DASHfilenames,
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = anon_sym_no_DASHmangle_DASHdos_DASHfilenames,
  [anon_sym_ask_DASHcert_DASHlevel] = anon_sym_ask_DASHcert_DASHlevel,
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = anon_sym_no_DASHask_DASHcert_DASHlevel,
  [anon_sym_always_DASHtrust] = anon_sym_always_DASHtrust,
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = anon_sym_no_DASHauto_DASHkey_DASHlocate,
  [anon_sym_auto_DASHkey_DASHimport] = anon_sym_auto_DASHkey_DASHimport,
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = anon_sym_no_DASHauto_DASHkey_DASHimport,
  [anon_sym_auto_DASHkey_DASHretrieve] = anon_sym_auto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = anon_sym_no_DASHauto_DASHkey_DASHretrieve,
  [anon_sym_no_DASHsig_DASHcache] = anon_sym_no_DASHsig_DASHcache,
  [anon_sym_auto_DASHcheck_DASHtrustdb] = anon_sym_auto_DASHcheck_DASHtrustdb,
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = anon_sym_no_DASHauto_DASHcheck_DASHtrustdb,
  [anon_sym_disable_DASHdirmngr] = anon_sym_disable_DASHdirmngr,
  [anon_sym_no_DASHautostart] = anon_sym_no_DASHautostart,
  [anon_sym_lock_DASHonce] = anon_sym_lock_DASHonce,
  [anon_sym_lock_DASHmultiple] = anon_sym_lock_DASHmultiple,
  [anon_sym_lock_DASHnever] = anon_sym_lock_DASHnever,
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror,
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = anon_sym_no_DASHrandom_DASHseed_DASHfile,
  [anon_sym_no_DASHgreeting] = anon_sym_no_DASHgreeting,
  [anon_sym_no_DASHsecmem_DASHwarning] = anon_sym_no_DASHsecmem_DASHwarning,
  [anon_sym_no_DASHpermission_DASHwarning] = anon_sym_no_DASHpermission_DASHwarning,
  [anon_sym_require_DASHsecmem] = anon_sym_require_DASHsecmem,
  [anon_sym_no_DASHrequire_DASHsecmem] = anon_sym_no_DASHrequire_DASHsecmem,
  [anon_sym_require_DASHcross_DASHverification] = anon_sym_require_DASHcross_DASHverification,
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = anon_sym_no_DASHrequire_DASHcross_DASHverification,
  [anon_sym_expert] = anon_sym_expert,
  [anon_sym_no_DASHexpert] = anon_sym_no_DASHexpert,
  [anon_sym_no_DASHencrypt_DASHto] = anon_sym_no_DASHencrypt_DASHto,
  [anon_sym_no_DASHgroups] = anon_sym_no_DASHgroups,
  [anon_sym_try_DASHall_DASHsecrets] = anon_sym_try_DASHall_DASHsecrets,
  [anon_sym_skip_DASHhidden_DASHrecipients] = anon_sym_skip_DASHhidden_DASHrecipients,
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = anon_sym_no_DASHskip_DASHhidden_DASHrecipients,
  [anon_sym_armor] = anon_sym_armor,
  [anon_sym_no_DASHarmor] = anon_sym_no_DASHarmor,
  [anon_sym_with_DASHcolons] = anon_sym_with_DASHcolons,
  [anon_sym_legacy_DASHlist_DASHmode] = anon_sym_legacy_DASHlist_DASHmode,
  [anon_sym_with_DASHfingerprint] = anon_sym_with_DASHfingerprint,
  [anon_sym_with_DASHsubkey_DASHfingerprint] = anon_sym_with_DASHsubkey_DASHfingerprint,
  [anon_sym_with_DASHicao_DASHspelling] = anon_sym_with_DASHicao_DASHspelling,
  [anon_sym_with_DASHkeygrip] = anon_sym_with_DASHkeygrip,
  [anon_sym_with_DASHkey_DASHorigin] = anon_sym_with_DASHkey_DASHorigin,
  [anon_sym_with_DASHwkd_DASHhash] = anon_sym_with_DASHwkd_DASHhash,
  [anon_sym_with_DASHsecret] = anon_sym_with_DASHsecret,
  [anon_sym_textmode] = anon_sym_textmode,
  [anon_sym_no_DASHtextmode] = anon_sym_no_DASHtextmode,
  [anon_sym_force_DASHocb] = anon_sym_force_DASHocb,
  [anon_sym_force_DASHaead] = anon_sym_force_DASHaead,
  [anon_sym_disable_DASHsigner_DASHuid] = anon_sym_disable_DASHsigner_DASHuid,
  [anon_sym_include_DASHkey_DASHblock] = anon_sym_include_DASHkey_DASHblock,
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = anon_sym_no_DASHinclude_DASHkey_DASHblock,
  [anon_sym_gnupg] = anon_sym_gnupg,
  [anon_sym_openpgp] = anon_sym_openpgp,
  [anon_sym_rfc4880] = anon_sym_rfc4880,
  [anon_sym_rfc4880bis] = anon_sym_rfc4880bis,
  [anon_sym_rfc2440] = anon_sym_rfc2440,
  [anon_sym_pgp7] = anon_sym_pgp7,
  [anon_sym_pgp8] = anon_sym_pgp8,
  [anon_sym_list_DASHonly] = anon_sym_list_DASHonly,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_debug_DASHall] = anon_sym_debug_DASHall,
  [anon_sym_debug_DASHiolbf] = anon_sym_debug_DASHiolbf,
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = anon_sym_debug_DASHallow_DASHlarge_DASHchunks,
  [anon_sym_debug_DASHignore_DASHexpiration] = anon_sym_debug_DASHignore_DASHexpiration,
  [anon_sym_full_DASHtimestrings] = anon_sym_full_DASHtimestrings,
  [anon_sym_enable_DASHprogress_DASHfilter] = anon_sym_enable_DASHprogress_DASHfilter,
  [anon_sym_log_DASHtime] = anon_sym_log_DASHtime,
  [anon_sym_no_DASHcomments] = anon_sym_no_DASHcomments,
  [anon_sym_emit_DASHversion] = anon_sym_emit_DASHversion,
  [anon_sym_no_DASHemit_DASHversion] = anon_sym_no_DASHemit_DASHversion,
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = anon_sym_for_DASHyour_DASHeyes_DASHonly,
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly,
  [anon_sym_use_DASHembedded_DASHfilename] = anon_sym_use_DASHembedded_DASHfilename,
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = anon_sym_no_DASHuse_DASHembedded_DASHfilename,
  [anon_sym_throw_DASHkeyids] = anon_sym_throw_DASHkeyids,
  [anon_sym_no_DASHthrow_DASHkeyids] = anon_sym_no_DASHthrow_DASHkeyids,
  [anon_sym_not_DASHdash_DASHescaped] = anon_sym_not_DASHdash_DASHescaped,
  [anon_sym_escape_DASHfrom_DASHlines] = anon_sym_escape_DASHfrom_DASHlines,
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = anon_sym_no_DASHescape_DASHfrom_DASHlines,
  [anon_sym_no_DASHsymkey_DASHcache] = anon_sym_no_DASHsymkey_DASHcache,
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_allow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid,
  [anon_sym_allow_DASHfreeform_DASHuid] = anon_sym_allow_DASHfreeform_DASHuid,
  [anon_sym_ignore_DASHtime_DASHconflict] = anon_sym_ignore_DASHtime_DASHconflict,
  [anon_sym_ignore_DASHvalid_DASHfrom] = anon_sym_ignore_DASHvalid_DASHfrom,
  [anon_sym_ignore_DASHcrc_DASHerror] = anon_sym_ignore_DASHcrc_DASHerror,
  [anon_sym_ignore_DASHmdc_DASHerror] = anon_sym_ignore_DASHmdc_DASHerror,
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = anon_sym_allow_DASHold_DASHcipher_DASHalgos,
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = anon_sym_allow_DASHweak_DASHdigest_DASHalgos,
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = anon_sym_allow_DASHweak_DASHkey_DASHsignatures,
  [anon_sym_override_DASHcompliance_DASHcheck] = anon_sym_override_DASHcompliance_DASHcheck,
  [anon_sym_no_DASHdefault_DASHkeyring] = anon_sym_no_DASHdefault_DASHkeyring,
  [anon_sym_no_DASHkeyring] = anon_sym_no_DASHkeyring,
  [anon_sym_skip_DASHverify] = anon_sym_skip_DASHverify,
  [anon_sym_with_DASHkey_DASHdata] = anon_sym_with_DASHkey_DASHdata,
  [anon_sym_list_DASHsignatures] = anon_sym_list_DASHsignatures,
  [anon_sym_list_DASHsigs] = anon_sym_list_DASHsigs,
  [anon_sym_fast_DASHlist_DASHmode] = anon_sym_fast_DASHlist_DASHmode,
  [anon_sym_show_DASHsession_DASHkey] = anon_sym_show_DASHsession_DASHkey,
  [anon_sym_ask_DASHsig_DASHexpire] = anon_sym_ask_DASHsig_DASHexpire,
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = anon_sym_no_DASHask_DASHsig_DASHexpire,
  [anon_sym_ask_DASHcert_DASHexpire] = anon_sym_ask_DASHcert_DASHexpire,
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = anon_sym_no_DASHask_DASHcert_DASHexpire,
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey,
  [anon_sym_force_DASHsign_DASHkey] = anon_sym_force_DASHsign_DASHkey,
  [anon_sym_forbid_DASHgen_DASHkey] = anon_sym_forbid_DASHgen_DASHkey,
  [anon_sym_enable_DASHspecial_DASHfilenames] = anon_sym_enable_DASHspecial_DASHfilenames,
  [anon_sym_preserve_DASHpermissions] = anon_sym_preserve_DASHpermissions,
  [aux_sym__unknown_option_token1] = aux_sym__unknown_option_token1,
  [aux_sym__unknown_option_token2] = sym_string,
  [anon_sym_default_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_list_DASHoptions] = anon_sym_list_DASHoptions,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_verify_DASHoptions,
  [sym__verify_parameter] = sym__verify_parameter,
  [anon_sym_photo_DASHviewer] = anon_sym_photo_DASHviewer,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__command_token3] = aux_sym__command_token3,
  [aux_sym__command_format_token1] = aux_sym__command_format_token1,
  [anon_sym_exec_DASHpath] = anon_sym_exec_DASHpath,
  [anon_sym_keyring] = anon_sym_keyring,
  [anon_sym_primary_DASHkeyring] = anon_sym_primary_DASHkeyring,
  [anon_sym_trustdb_DASHname] = anon_sym_trustdb_DASHname,
  [anon_sym_display_DASHcharset] = anon_sym_display_DASHcharset,
  [sym__charset_value] = sym__charset_value,
  [sym__utf8_strings] = sym__utf8_strings,
  [sym__no_utf8_strings] = sym__no_utf8_strings,
  [anon_sym_compress_DASHlevel] = anon_sym_compress_DASHlevel,
  [aux_sym__compress_level_token1] = sym_number,
  [anon_sym_bzip2_DASHcompress_DASHlevel] = anon_sym_bzip2_DASHcompress_DASHlevel,
  [anon_sym_default_DASHcert_DASHlevel] = anon_sym_default_DASHcert_DASHlevel,
  [aux_sym__default_cert_level_token1] = sym_number,
  [anon_sym_min_DASHcert_DASHlevel] = anon_sym_min_DASHcert_DASHlevel,
  [anon_sym_trusted_DASHkey] = anon_sym_trusted_DASHkey,
  [anon_sym_add_DASHdesig_DASHrevoker] = anon_sym_add_DASHdesig_DASHrevoker,
  [aux_sym__add_desig_revoker_token1] = aux_sym__add_desig_revoker_token1,
  [aux_sym__add_desig_revoker_token2] = aux_sym__add_desig_revoker_token2,
  [anon_sym_trust_DASHmodel] = anon_sym_trust_DASHmodel,
  [sym__model] = sym__model,
  [anon_sym_assert_DASHsigner] = anon_sym_assert_DASHsigner,
  [anon_sym_auto_DASHkey_DASHlocate] = anon_sym_auto_DASHkey_DASHlocate,
  [sym__key_locate_value] = sym__key_locate_value,
  [anon_sym_keyid_DASHformat] = anon_sym_keyid_DASHformat,
  [sym__keyid_format_value] = sym__keyid_format_value,
  [anon_sym_keyserver] = anon_sym_keyserver,
  [anon_sym_completes_DASHneeded] = anon_sym_completes_DASHneeded,
  [anon_sym_marginals_DASHneeded] = anon_sym_marginals_DASHneeded,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = anon_sym_tofu_DASHdefault_DASHpolicy,
  [sym__tofu_policy_value] = sym__tofu_policy_value,
  [anon_sym_max_DASHcert_DASHdepth] = anon_sym_max_DASHcert_DASHdepth,
  [anon_sym_agent_DASHprogram] = anon_sym_agent_DASHprogram,
  [anon_sym_dirmngr_DASHprogram] = anon_sym_dirmngr_DASHprogram,
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = anon_sym_limit_DASHcard_DASHinsert_DASHtries,
  [anon_sym_recipient] = anon_sym_recipient,
  [anon_sym_hidden_DASHrecipient] = anon_sym_hidden_DASHrecipient,
  [anon_sym_recipient_DASHfile] = anon_sym_recipient_DASHfile,
  [anon_sym_hidden_DASHrecipient_DASHfile] = anon_sym_hidden_DASHrecipient_DASHfile,
  [anon_sym_encrypt_DASHto] = anon_sym_encrypt_DASHto,
  [anon_sym_hidden_DASHencrypt_DASHto] = anon_sym_hidden_DASHencrypt_DASHto,
  [anon_sym_group] = anon_sym_group,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ungroup] = anon_sym_ungroup,
  [anon_sym_local_DASHuser] = anon_sym_local_DASHuser,
  [anon_sym_sender] = anon_sym_sender,
  [anon_sym_try_DASHsecret_DASHname] = anon_sym_try_DASHsecret_DASHname,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_max_DASHoutput] = anon_sym_max_DASHoutput,
  [anon_sym_chunk_DASHsize] = anon_sym_chunk_DASHsize,
  [anon_sym_input_DASHsize_DASHhint] = anon_sym_input_DASHsize_DASHhint,
  [anon_sym_key_DASHorigin] = anon_sym_key_DASHorigin,
  [sym__key_origin_value] = sym__key_origin_value,
  [anon_sym_import_DASHoptions] = anon_sym_import_DASHoptions,
  [sym__import_parameter] = sym__import_parameter,
  [anon_sym_export_DASHoptions] = anon_sym_export_DASHoptions,
  [sym__export_parameter] = sym__export_parameter,
  [anon_sym_personal_DASHcipher_DASHpreferences] = anon_sym_personal_DASHcipher_DASHpreferences,
  [anon_sym_personal_DASHdigest_DASHpreferences] = anon_sym_personal_DASHdigest_DASHpreferences,
  [anon_sym_personal_DASHcompress_DASHpreferences] = anon_sym_personal_DASHcompress_DASHpreferences,
  [anon_sym_s2k_DASHcipher_DASHalgo] = anon_sym_s2k_DASHcipher_DASHalgo,
  [anon_sym_s2k_DASHdigest_DASHalgo] = anon_sym_s2k_DASHdigest_DASHalgo,
  [anon_sym_s2k_DASHmode] = anon_sym_s2k_DASHmode,
  [aux_sym__s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = anon_sym_s2k_DASHcount,
  [anon_sym_compliance] = anon_sym_compliance,
  [sym__compliance_value] = sym__compliance_value,
  [anon_sym_min_DASHrsa_DASHlength] = anon_sym_min_DASHrsa_DASHlength,
  [sym__require_compliance] = sym__require_compliance,
  [anon_sym_debug_DASHlevel] = anon_sym_debug_DASHlevel,
  [sym__debug_level_value] = sym__debug_level_value,
  [anon_sym_debug] = anon_sym_debug,
  [aux_sym__debug_token1] = sym_number,
  [sym__debug_flag_value] = sym__debug_flag_value,
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = anon_sym_debug_DASHset_DASHiobuf_DASHsize,
  [anon_sym_faked_DASHsystem_DASHtime] = anon_sym_faked_DASHsystem_DASHtime,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_status_DASHfd] = anon_sym_status_DASHfd,
  [anon_sym_status_DASHfile] = anon_sym_status_DASHfile,
  [anon_sym_logger_DASHfd] = anon_sym_logger_DASHfd,
  [anon_sym_logger_DASHfile] = anon_sym_logger_DASHfile,
  [anon_sym_log_DASHfile] = anon_sym_log_DASHfile,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym__notation_format_token1] = aux_sym__command_format_token1,
  [anon_sym_known_DASHnotation] = anon_sym_known_DASHnotation,
  [anon_sym_sig_DASHpolicy_DASHurl] = anon_sym_sig_DASHpolicy_DASHurl,
  [anon_sym_cert_DASHpolicy_DASHurl] = anon_sym_cert_DASHpolicy_DASHurl,
  [anon_sym_set_DASHpolicy_DASHurl] = anon_sym_set_DASHpolicy_DASHurl,
  [anon_sym_sig_DASHkeyserver_DASHurl] = anon_sym_sig_DASHkeyserver_DASHurl,
  [anon_sym_set_DASHfilename] = anon_sym_set_DASHfilename,
  [anon_sym_cipher_DASHalgo] = anon_sym_cipher_DASHalgo,
  [anon_sym_digest_DASHalgo] = anon_sym_digest_DASHalgo,
  [anon_sym_compress_DASHalgo] = anon_sym_compress_DASHalgo,
  [anon_sym_cert_DASHdigest_DASHalgo] = anon_sym_cert_DASHdigest_DASHalgo,
  [anon_sym_disable_DASHcipher_DASHalgo] = anon_sym_disable_DASHcipher_DASHalgo,
  [anon_sym_disable_DASHpubkey_DASHalgo] = anon_sym_disable_DASHpubkey_DASHalgo,
  [anon_sym_passphrase_DASHrepeat] = anon_sym_passphrase_DASHrepeat,
  [anon_sym_passphrase_DASHfd] = anon_sym_passphrase_DASHfd,
  [anon_sym_passphrase_DASHfile] = anon_sym_passphrase_DASHfile,
  [anon_sym_passphrase] = anon_sym_passphrase,
  [anon_sym_pinentry_DASHmode] = anon_sym_pinentry_DASHmode,
  [sym__pinentry_mode_value] = sym__pinentry_mode_value,
  [anon_sym_request_DASHorigin] = anon_sym_request_DASHorigin,
  [sym__request_origin_value] = sym__request_origin_value,
  [anon_sym_command_DASHfd] = anon_sym_command_DASHfd,
  [anon_sym_command_DASHfile] = anon_sym_command_DASHfile,
  [anon_sym_weak_DASHdigest] = anon_sym_weak_DASHdigest,
  [anon_sym_override_DASHsession_DASHkey] = anon_sym_override_DASHsession_DASHkey,
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = anon_sym_override_DASHsession_DASHkey_DASHfd,
  [anon_sym_default_DASHsig_DASHexpire] = anon_sym_default_DASHsig_DASHexpire,
  [anon_sym_default_DASHcert_DASHexpire] = anon_sym_default_DASHcert_DASHexpire,
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = anon_sym_default_DASHnew_DASHkey_DASHalgo,
  [sym__new_key_algo] = sym__new_key_algo,
  [anon_sym_default_DASHpreference_DASHlist] = anon_sym_default_DASHpreference_DASHlist,
  [anon_sym_default_DASHkeyserver_DASHurl] = anon_sym_default_DASHkeyserver_DASHurl,
  [anon_sym_chuid] = anon_sym_chuid,
  [sym_key] = sym_key,
  [sym_url] = sym_url,
  [sym_number] = sym_number,
  [sym_iso_time] = sym_iso_time,
  [sym_expire_time] = sym_expire_time,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_comment] = sym_comment,
  [sym__pubkey_algo_value] = sym__pubkey_algo_value,
  [sym__cipher_algo_value] = sym__cipher_algo_value,
  [sym__hash_algo_value] = sym__hash_algo_value,
  [sym__compression_algo_value] = sym__compression_algo_value,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_option] = sym_option,
  [sym__unknown_option] = sym__unknown_option,
  [sym__default_key] = sym__default_key,
  [sym__list_options] = sym__list_options,
  [sym__verify_options] = sym__verify_options,
  [sym__photo_viewer] = sym__photo_viewer,
  [sym__command] = sym_string,
  [sym__command_format] = sym__command_format,
  [sym__exec_path] = sym__exec_path,
  [sym__keyring] = sym__keyring,
  [sym__primary_keyring] = sym__primary_keyring,
  [sym__trustdb_name] = sym__trustdb_name,
  [sym__display_charset] = sym__display_charset,
  [sym__compress_level] = sym__compress_level,
  [sym__bzip2_compress_level] = sym__bzip2_compress_level,
  [sym__default_cert_level] = sym__default_cert_level,
  [sym__min_cert_level] = sym__min_cert_level,
  [sym__trusted_key] = sym__trusted_key,
  [sym__add_desig_revoker] = sym__add_desig_revoker,
  [sym__trust_model] = sym__trust_model,
  [sym__assert_signer] = sym__assert_signer,
  [sym__auto_key_locate] = sym__auto_key_locate,
  [sym__keyid_format] = sym__keyid_format,
  [sym__keyserver] = sym__keyserver,
  [sym__completes_needed] = sym__completes_needed,
  [sym__marginals_needed] = sym__marginals_needed,
  [sym__tofu_default_policy] = sym__tofu_default_policy,
  [sym__max_cert_depth] = sym__max_cert_depth,
  [sym__agent_program] = sym__agent_program,
  [sym__dirmngr_program] = sym__dirmngr_program,
  [sym__limit_card_insert_tries] = sym__limit_card_insert_tries,
  [sym__recipient] = sym__recipient,
  [sym__hidden_recipient] = sym__hidden_recipient,
  [sym__recipient_file] = sym__recipient_file,
  [sym__hidden_recipient_file] = sym__hidden_recipient_file,
  [sym__encrypt_to] = sym__encrypt_to,
  [sym__hidden_encrypt_to] = sym__hidden_encrypt_to,
  [sym__group] = sym__group,
  [sym__ungroup] = sym__ungroup,
  [sym__local_user] = sym__local_user,
  [sym__sender] = sym__sender,
  [sym__try_secret_name] = sym__try_secret_name,
  [sym__output] = sym__output,
  [sym__max_output] = sym__max_output,
  [sym__chunk_size] = sym__chunk_size,
  [sym__input_size_hint] = sym__input_size_hint,
  [sym__key_origin] = sym__key_origin,
  [sym__import_options] = sym__import_options,
  [sym__export_options] = sym__export_options,
  [sym__personal_cipher_preferences] = sym__personal_cipher_preferences,
  [sym__personal_digest_preferences] = sym__personal_digest_preferences,
  [sym__personal_compress_preferences] = sym__personal_compress_preferences,
  [sym__s2k_cipher_algo] = sym__s2k_cipher_algo,
  [sym__s2k_digest_algo] = sym__s2k_digest_algo,
  [sym__s2k_mode] = sym__s2k_mode,
  [sym__s2k_count] = sym__s2k_count,
  [sym__compliance] = sym__compliance,
  [sym__min_rsa_length] = sym__min_rsa_length,
  [sym__debug_level] = sym__debug_level,
  [sym__debug] = sym__debug,
  [sym__debug_set_iobuf_size] = sym__debug_set_iobuf_size,
  [sym__faked_system_time] = sym__faked_system_time,
  [sym__status_fd] = sym__status_fd,
  [sym__status_file] = sym__status_file,
  [sym__logger_fd] = sym__logger_fd,
  [sym__logger_file] = sym__logger_file,
  [sym__comment] = sym__comment,
  [sym__notation_format] = sym__notation_format,
  [sym__known_notation] = sym__known_notation,
  [sym__sig_policy_url] = sym__sig_policy_url,
  [sym__cert_policy_url] = sym__cert_policy_url,
  [sym__set_policy_url] = sym__set_policy_url,
  [sym__sig_keyserver_url] = sym__sig_keyserver_url,
  [aux_sym__formatted_url] = aux_sym__formatted_url,
  [sym__set_filename] = sym__set_filename,
  [sym__cipher_algo] = sym__cipher_algo,
  [sym__digest_algo] = sym__digest_algo,
  [sym__compress_algo] = sym__compress_algo,
  [sym__cert_digest_algo] = sym__cert_digest_algo,
  [sym__disable_cipher_algo] = sym__disable_cipher_algo,
  [sym__disable_pubkey_algo] = sym__disable_pubkey_algo,
  [sym__passphrase_repeat] = sym__passphrase_repeat,
  [sym__passphrase_fd] = sym__passphrase_fd,
  [sym__passphrase_file] = sym__passphrase_file,
  [sym__passphrase] = sym__passphrase,
  [sym__pinentry_mode] = sym__pinentry_mode,
  [sym__request_origin] = sym__request_origin,
  [sym__command_fd] = sym__command_fd,
  [sym__command_file] = sym__command_file,
  [sym__weak_digest] = sym__weak_digest,
  [sym__override_session_key] = sym__override_session_key,
  [sym__override_session_key_fd] = sym__override_session_key_fd,
  [sym__default_sig_expire] = sym__default_sig_expire,
  [sym__default_cert_expire] = sym__default_cert_expire,
  [sym__default_new_key_algo] = sym__default_new_key_algo,
  [sym__default_preference_list] = sym__default_preference_list,
  [sym__default_keyserver_url] = sym__default_keyserver_url,
  [sym__chuid] = sym__chuid,
  [sym_string] = sym_string,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__list_options_repeat1] = aux_sym__list_options_repeat1,
  [aux_sym__verify_options_repeat1] = aux_sym__verify_options_repeat1,
  [aux_sym__command_repeat1] = aux_sym__command_repeat1,
  [aux_sym__command_repeat2] = aux_sym__command_repeat2,
  [aux_sym__command_repeat3] = aux_sym__command_repeat3,
  [aux_sym__auto_key_locate_repeat1] = aux_sym__auto_key_locate_repeat1,
  [aux_sym__import_options_repeat1] = aux_sym__import_options_repeat1,
  [aux_sym__export_options_repeat1] = aux_sym__export_options_repeat1,
  [aux_sym__personal_cipher_preferences_repeat1] = aux_sym__personal_cipher_preferences_repeat1,
  [aux_sym__personal_digest_preferences_repeat1] = aux_sym__personal_digest_preferences_repeat1,
  [aux_sym__personal_compress_preferences_repeat1] = aux_sym__personal_compress_preferences_repeat1,
  [aux_sym__debug_repeat1] = aux_sym__debug_repeat1,
  [aux_sym__default_new_key_algo_repeat1] = aux_sym__default_new_key_algo_repeat1,
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
  [anon_sym_default_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHrecipient_DASHself] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHlarge_DASHrsa] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdsa2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bzip2_DASHdecompress_DASHlowmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_always_DASHtrust] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsig_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHdirmngr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHautostart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHonce] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHmultiple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lock_DASHnever] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrandom_DASHseed_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgreeting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsecmem_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHpermission_DASHwarning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHsecmem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHrequire_DASHcross_DASHverification] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHexpert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHgroups] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHall_DASHsecrets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_armor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHarmor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHcolons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_legacy_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsubkey_DASHfingerprint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHicao_DASHspelling] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkeygrip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHwkd_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHsecret] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHtextmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHocb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHaead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHsigner_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHinclude_DASHkey_DASHblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gnupg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_openpgp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc4880bis] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rfc2440] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pgp8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHiolbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_DASHignore_DASHexpiration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_full_DASHtimestrings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHprogress_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHcomments] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_emit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHemit_DASHversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHthrow_DASHkeyids] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_DASHdash_DASHescaped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_escape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHescape_DASHfrom_DASHlines] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHsymkey_DASHcache] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHfreeform_DASHuid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHtime_DASHconflict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHvalid_DASHfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHcrc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_DASHmdc_DASHerror] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHcompliance_DASHcheck] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdefault_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skip_DASHverify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with_DASHkey_DASHdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsignatures] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHsigs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fast_DASHlist_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHask_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force_DASHsign_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forbid_DASHgen_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enable_DASHspecial_DASHfilenames] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_preserve_DASHpermissions] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__unknown_option_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unknown_option_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_default_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list_DASHoptions] = {
    .visible = true,
    .named = false,
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
    .named = false,
  },
  [sym__verify_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_photo_DASHviewer] = {
    .visible = true,
    .named = false,
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
  [aux_sym__command_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_exec_DASHpath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primary_DASHkeyring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trustdb_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_display_DASHcharset] = {
    .visible = true,
    .named = false,
  },
  [sym__charset_value] = {
    .visible = false,
    .named = true,
  },
  [sym__utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [sym__no_utf8_strings] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_compress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__compress_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bzip2_DASHcompress_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__default_cert_level_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_min_DASHcert_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trusted_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_add_DASHdesig_DASHrevoker] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__add_desig_revoker_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trust_DASHmodel] = {
    .visible = true,
    .named = false,
  },
  [sym__model] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_assert_DASHsigner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_DASHkey_DASHlocate] = {
    .visible = true,
    .named = false,
  },
  [sym__key_locate_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_keyid_DASHformat] = {
    .visible = true,
    .named = false,
  },
  [sym__keyid_format_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_keyserver] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_completes_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_marginals_DASHneeded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tofu_DASHdefault_DASHpolicy] = {
    .visible = true,
    .named = false,
  },
  [sym__tofu_policy_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_max_DASHcert_DASHdepth] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_agent_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dirmngr_DASHprogram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_recipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHrecipient_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden_DASHencrypt_DASHto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ungroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local_DASHuser] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sender] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try_DASHsecret_DASHname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_DASHoutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chunk_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input_DASHsize_DASHhint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__key_origin_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__import_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_export_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__export_parameter] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_personal_DASHcipher_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHdigest_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_personal_DASHcompress_DASHpreferences] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2k_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__s2k_mode_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s2k_DASHcount] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compliance] = {
    .visible = true,
    .named = false,
  },
  [sym__compliance_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_min_DASHrsa_DASHlength] = {
    .visible = true,
    .named = false,
  },
  [sym__require_compliance] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_debug_DASHlevel] = {
    .visible = true,
    .named = false,
  },
  [sym__debug_level_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__debug_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__debug_flag_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_faked_DASHsystem_DASHtime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_status_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_logger_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__notation_format_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_known_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHpolicy_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sig_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHfilename] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_digest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_compress_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHdigest_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHcipher_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_DASHpubkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHrepeat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_passphrase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pinentry_DASHmode] = {
    .visible = true,
    .named = false,
  },
  [sym__pinentry_mode_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_request_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__request_origin_value] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_command_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_command_DASHfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak_DASHdigest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHsig_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHcert_DASHexpire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = {
    .visible = true,
    .named = false,
  },
  [sym__new_key_algo] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_default_DASHpreference_DASHlist] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_DASHkeyserver_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chuid] = {
    .visible = true,
    .named = false,
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
  [sym_iso_time] = {
    .visible = true,
    .named = true,
  },
  [sym_expire_time] = {
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
  [sym__pubkey_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__hash_algo_value] = {
    .visible = false,
    .named = true,
  },
  [sym__compression_algo_value] = {
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
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym__unknown_option] = {
    .visible = false,
    .named = true,
  },
  [sym__default_key] = {
    .visible = false,
    .named = true,
  },
  [sym__list_options] = {
    .visible = false,
    .named = true,
  },
  [sym__verify_options] = {
    .visible = false,
    .named = true,
  },
  [sym__photo_viewer] = {
    .visible = false,
    .named = true,
  },
  [sym__command] = {
    .visible = true,
    .named = true,
  },
  [sym__command_format] = {
    .visible = false,
    .named = true,
  },
  [sym__exec_path] = {
    .visible = false,
    .named = true,
  },
  [sym__keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_keyring] = {
    .visible = false,
    .named = true,
  },
  [sym__trustdb_name] = {
    .visible = false,
    .named = true,
  },
  [sym__display_charset] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__bzip2_compress_level] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__min_cert_level] = {
    .visible = false,
    .named = true,
  },
  [sym__trusted_key] = {
    .visible = false,
    .named = true,
  },
  [sym__add_desig_revoker] = {
    .visible = false,
    .named = true,
  },
  [sym__trust_model] = {
    .visible = false,
    .named = true,
  },
  [sym__assert_signer] = {
    .visible = false,
    .named = true,
  },
  [sym__auto_key_locate] = {
    .visible = false,
    .named = true,
  },
  [sym__keyid_format] = {
    .visible = false,
    .named = true,
  },
  [sym__keyserver] = {
    .visible = false,
    .named = true,
  },
  [sym__completes_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__marginals_needed] = {
    .visible = false,
    .named = true,
  },
  [sym__tofu_default_policy] = {
    .visible = false,
    .named = true,
  },
  [sym__max_cert_depth] = {
    .visible = false,
    .named = true,
  },
  [sym__agent_program] = {
    .visible = false,
    .named = true,
  },
  [sym__dirmngr_program] = {
    .visible = false,
    .named = true,
  },
  [sym__limit_card_insert_tries] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient] = {
    .visible = false,
    .named = true,
  },
  [sym__recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_recipient_file] = {
    .visible = false,
    .named = true,
  },
  [sym__encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__hidden_encrypt_to] = {
    .visible = false,
    .named = true,
  },
  [sym__group] = {
    .visible = false,
    .named = true,
  },
  [sym__ungroup] = {
    .visible = false,
    .named = true,
  },
  [sym__local_user] = {
    .visible = false,
    .named = true,
  },
  [sym__sender] = {
    .visible = false,
    .named = true,
  },
  [sym__try_secret_name] = {
    .visible = false,
    .named = true,
  },
  [sym__output] = {
    .visible = false,
    .named = true,
  },
  [sym__max_output] = {
    .visible = false,
    .named = true,
  },
  [sym__chunk_size] = {
    .visible = false,
    .named = true,
  },
  [sym__input_size_hint] = {
    .visible = false,
    .named = true,
  },
  [sym__key_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__import_options] = {
    .visible = false,
    .named = true,
  },
  [sym__export_options] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_cipher_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_digest_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__personal_compress_preferences] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__s2k_count] = {
    .visible = false,
    .named = true,
  },
  [sym__compliance] = {
    .visible = false,
    .named = true,
  },
  [sym__min_rsa_length] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_level] = {
    .visible = false,
    .named = true,
  },
  [sym__debug] = {
    .visible = false,
    .named = true,
  },
  [sym__debug_set_iobuf_size] = {
    .visible = false,
    .named = true,
  },
  [sym__faked_system_time] = {
    .visible = false,
    .named = true,
  },
  [sym__status_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__status_file] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__logger_file] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [sym__notation_format] = {
    .visible = false,
    .named = true,
  },
  [sym__known_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__set_policy_url] = {
    .visible = false,
    .named = true,
  },
  [sym__sig_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__formatted_url] = {
    .visible = false,
    .named = false,
  },
  [sym__set_filename] = {
    .visible = false,
    .named = true,
  },
  [sym__cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__compress_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_digest_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_cipher_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__disable_pubkey_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_repeat] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase_file] = {
    .visible = false,
    .named = true,
  },
  [sym__passphrase] = {
    .visible = false,
    .named = true,
  },
  [sym__pinentry_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__request_origin] = {
    .visible = false,
    .named = true,
  },
  [sym__command_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__command_file] = {
    .visible = false,
    .named = true,
  },
  [sym__weak_digest] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key] = {
    .visible = false,
    .named = true,
  },
  [sym__override_session_key_fd] = {
    .visible = false,
    .named = true,
  },
  [sym__default_sig_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_cert_expire] = {
    .visible = false,
    .named = true,
  },
  [sym__default_new_key_algo] = {
    .visible = false,
    .named = true,
  },
  [sym__default_preference_list] = {
    .visible = false,
    .named = true,
  },
  [sym__default_keyserver_url] = {
    .visible = false,
    .named = true,
  },
  [sym__chuid] = {
    .visible = false,
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
  [aux_sym__list_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat1] = {
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
  [aux_sym__auto_key_locate_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat1] = {
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
  field_content = 1,
  field_name = 2,
  field_parameter = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_parameter] = "parameter",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_parameter, 0, .inherited = true},
  [1] =
    {field_name, 0, .inherited = true},
    {field_value, 0, .inherited = true},
  [3] =
    {field_parameter, 2},
  [4] =
    {field_content, 2, .inherited = true},
  [5] =
    {field_content, 0},
  [6] =
    {field_parameter, 0},
  [7] =
    {field_parameter, 2},
    {field_parameter, 3, .inherited = true},
  [9] =
    {field_parameter, 1},
  [10] =
    {field_content, 1},
  [11] =
    {field_parameter, 0, .inherited = true},
    {field_parameter, 1, .inherited = true},
  [13] =
    {field_name, 2},
    {field_value, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [2] = sym_url,
  },
  [9] = {
    [3] = sym_url,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__formatted_url, 2,
    aux_sym__formatted_url,
    sym_url,
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
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
};

static inline bool aux_sym__command_format_token1_character_set_1(int32_t c) {
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
      if (eof) ADVANCE(757);
      if (lookahead == '!') ADVANCE(3040);
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '2') ADVANCE(2931);
      if (lookahead == '=') ADVANCE(2999);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(2945);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2931);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(758);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead != 0) ADVANCE(2940);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(3129);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead == 'B') ADVANCE(128);
      if (lookahead == 'C') ADVANCE(99);
      if (lookahead == 'I') ADVANCE(107);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == 'a') ADVANCE(595);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(693);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead == 'h') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(426);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(470);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(265);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == 'u') ADVANCE(440);
      if (lookahead == 'w') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(724);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'U') ADVANCE(444);
      if (lookahead == 'Z') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'b') ADVANCE(568);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'f') ADVANCE(368);
      if (lookahead == 'k') ADVANCE(591);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead == 'n') ADVANCE(507);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead == 'u') ADVANCE(467);
      if (lookahead == 'w') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(754);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '0') ADVANCE(3032);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == 'S') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'f') ADVANCE(337);
      if (lookahead == 'h') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(494);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'n') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead == 't') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3036);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3076);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(3040);
      if (lookahead == '%') ADVANCE(2941);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2940);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2940);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2947);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead == '0') ADVANCE(3126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3130);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(3130);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(2953);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2951);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2951);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(384);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(755);
      if (lookahead == '.') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(218);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(594);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(387);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(681);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2965);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(427);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(336);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(665);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(599);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(311);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(666);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(486);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(598);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(733);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(450);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(501);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(672);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(740);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(740);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 54:
      if (lookahead == '/') ADVANCE(755);
      END_STATE();
    case 55:
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(3024);
      END_STATE();
    case 57:
      if (lookahead == '0') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == '0') ADVANCE(3025);
      END_STATE();
    case 59:
      if (lookahead == '0') ADVANCE(3135);
      END_STATE();
    case 60:
      if (lookahead == '0') ADVANCE(3120);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'b') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == 'g') ADVANCE(668);
      if (lookahead == 'n') ADVANCE(511);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3124);
      END_STATE();
    case 61:
      if (lookahead == '0') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == '0') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      END_STATE();
    case 63:
      if (lookahead == '1') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 65:
      if (lookahead == '1') ADVANCE(2961);
      if (lookahead == '2') ADVANCE(2960);
      END_STATE();
    case 66:
      if (lookahead == '1') ADVANCE(3135);
      if (lookahead == '2') ADVANCE(74);
      if (lookahead == '3') ADVANCE(89);
      if (lookahead == '5') ADVANCE(68);
      END_STATE();
    case 67:
      if (lookahead == '1') ADVANCE(2965);
      END_STATE();
    case 68:
      if (lookahead == '1') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == '1') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == '2') ADVANCE(3133);
      END_STATE();
    case 71:
      if (lookahead == '2') ADVANCE(78);
      if (lookahead == '4') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == '2') ADVANCE(3136);
      END_STATE();
    case 73:
      if (lookahead == '2') ADVANCE(3135);
      END_STATE();
    case 74:
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '5') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '9') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == '3') ADVANCE(3014);
      END_STATE();
    case 77:
      if (lookahead == '4') ADVANCE(3135);
      END_STATE();
    case 78:
      if (lookahead == '4') ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 80:
      if (lookahead == '5') ADVANCE(3133);
      END_STATE();
    case 81:
      if (lookahead == '5') ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == '5') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == '6') ADVANCE(3133);
      END_STATE();
    case 84:
      if (lookahead == '6') ADVANCE(3135);
      END_STATE();
    case 85:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == '8') ADVANCE(3133);
      END_STATE();
    case 87:
      if (lookahead == '8') ADVANCE(2960);
      END_STATE();
    case 88:
      if (lookahead == '8') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == '8') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == '8') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == '8') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == '8') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == '8') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == '9') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == '9') ADVANCE(26);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(2972);
      END_STATE();
    case 99:
      if (lookahead == 'A') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'A') ADVANCE(3133);
      END_STATE();
    case 101:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 'A') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(3132);
      END_STATE();
    case 104:
      if (lookahead == 'B') ADVANCE(3136);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 106:
      if (lookahead == 'D') ADVANCE(120);
      END_STATE();
    case 107:
      if (lookahead == 'D') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 'D') ADVANCE(69);
      END_STATE();
    case 109:
      if (lookahead == 'D') ADVANCE(141);
      END_STATE();
    case 110:
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == 'R') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2968);
      END_STATE();
    case 111:
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      END_STATE();
    case 112:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 114:
      if (lookahead == 'E') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 117:
      if (lookahead == 'F') ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == 'G') ADVANCE(3132);
      END_STATE();
    case 119:
      if (lookahead == 'H') ADVANCE(3133);
      END_STATE();
    case 120:
      if (lookahead == 'H') ADVANCE(3132);
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'H') ADVANCE(102);
      END_STATE();
    case 122:
      if (lookahead == 'I') ADVANCE(135);
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 124:
      if (lookahead == 'I') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 126:
      if (lookahead == 'I') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'I') ADVANCE(137);
      END_STATE();
    case 128:
      if (lookahead == 'L') ADVANCE(134);
      END_STATE();
    case 129:
      if (lookahead == 'L') ADVANCE(125);
      END_STATE();
    case 130:
      if (lookahead == 'L') ADVANCE(129);
      END_STATE();
    case 131:
      if (lookahead == 'M') ADVANCE(108);
      END_STATE();
    case 132:
      if (lookahead == 'M') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(142);
      END_STATE();
    case 133:
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 134:
      if (lookahead == 'O') ADVANCE(144);
      END_STATE();
    case 135:
      if (lookahead == 'P') ADVANCE(3136);
      END_STATE();
    case 136:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 137:
      if (lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(3134);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(3133);
      END_STATE();
    case 140:
      if (lookahead == 'S') ADVANCE(119);
      END_STATE();
    case 141:
      if (lookahead == 'S') ADVANCE(103);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(80);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(746);
      END_STATE();
    case 144:
      if (lookahead == 'W') ADVANCE(117);
      END_STATE();
    case 145:
      if (lookahead == 'W') ADVANCE(133);
      END_STATE();
    case 146:
      if (lookahead == 'Z') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(403);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(550);
      if (lookahead == 'l') ADVANCE(262);
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'l') ADVANCE(499);
      if (lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(439);
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(596);
      if (lookahead == 'k') ADVANCE(519);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(545);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(521);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(349);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(619);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(634);
      if (lookahead == 'b') ADVANCE(181);
      if (lookahead == 'c') ADVANCE(411);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'l') ADVANCE(485);
      if (lookahead == 'm') ADVANCE(345);
      if (lookahead == 'r') ADVANCE(268);
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(522);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(421);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(437);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(577);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(465);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(326);
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(409);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(456);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(327);
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(712);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(419);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(606);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(648);
      END_STATE();
    case 190:
      if (lookahead == 'b') ADVANCE(655);
      END_STATE();
    case 191:
      if (lookahead == 'b') ADVANCE(670);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(660);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(535);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(478);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(386);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(414);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(392);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(417);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(3037);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(2975);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(3029);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(389);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(389);
      if (lookahead == 'd') ADVANCE(2987);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(383);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(709);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(377);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'e') ADVANCE(699);
      if (lookahead == 'l') ADVANCE(516);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(188);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(2987);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(2979);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(3136);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(3009);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(3029);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(586);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(247);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(590);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(352);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(593);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(202);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(3037);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(2979);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(3133);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(3014);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(3012);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(2938);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(404);
      if (lookahead == 'h') ADVANCE(495);
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(3136);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(3009);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(3067);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(2936);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(3135);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(3029);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(2982);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(3132);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(418);
      if (lookahead == 'h') ADVANCE(473);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(677);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'p') ADVANCE(334);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(531);
      if (lookahead == 'y') ADVANCE(600);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(704);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(711);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 305:
      if (lookahead == 'f') ADVANCE(3037);
      END_STATE();
    case 306:
      if (lookahead == 'f') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(752);
      END_STATE();
    case 307:
      if (lookahead == 'f') ADVANCE(3009);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 309:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(653);
      END_STATE();
    case 311:
      if (lookahead == 'f') ADVANCE(537);
      END_STATE();
    case 312:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(3037);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(3024);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(3012);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(2936);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(2982);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(610);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(523);
      END_STATE();
    case 322:
      if (lookahead == 'g') ADVANCE(525);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(588);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 325:
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 326:
      if (lookahead == 'g') ADVANCE(251);
      END_STATE();
    case 327:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 328:
      if (lookahead == 'h') ADVANCE(340);
      END_STATE();
    case 329:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 330:
      if (lookahead == 'h') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 331:
      if (lookahead == 'h') ADVANCE(483);
      END_STATE();
    case 332:
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 333:
      if (lookahead == 'h') ADVANCE(514);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(3037);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(401);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(587);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(318);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(320);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(325);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(325);
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(573);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(649);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(673);
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 375:
      if (lookahead == 'k') ADVANCE(2987);
      END_STATE();
    case 376:
      if (lookahead == 'k') ADVANCE(3037);
      END_STATE();
    case 377:
      if (lookahead == 'k') ADVANCE(3065);
      END_STATE();
    case 378:
      if (lookahead == 'k') ADVANCE(443);
      END_STATE();
    case 379:
      if (lookahead == 'k') ADVANCE(225);
      END_STATE();
    case 380:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 381:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 382:
      if (lookahead == 'k') ADVANCE(604);
      END_STATE();
    case 383:
      if (lookahead == 'k') ADVANCE(270);
      END_STATE();
    case 384:
      if (lookahead == 'k') ADVANCE(266);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(442);
      if (lookahead == 'p') ADVANCE(330);
      if (lookahead == 's') ADVANCE(628);
      if (lookahead == 'u') ADVANCE(344);
      END_STATE();
    case 385:
      if (lookahead == 'k') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(382);
      END_STATE();
    case 386:
      if (lookahead == 'k') ADVANCE(298);
      END_STATE();
    case 387:
      if (lookahead == 'k') ADVANCE(278);
      if (lookahead == 'n') ADVANCE(517);
      if (lookahead == 'o') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(332);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 388:
      if (lookahead == 'k') ADVANCE(289);
      END_STATE();
    case 389:
      if (lookahead == 'k') ADVANCE(663);
      END_STATE();
    case 390:
      if (lookahead == 'k') ADVANCE(293);
      END_STATE();
    case 391:
      if (lookahead == 'k') ADVANCE(664);
      END_STATE();
    case 392:
      if (lookahead == 'k') ADVANCE(300);
      END_STATE();
    case 393:
      if (lookahead == 'k') ADVANCE(464);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(2979);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(3014);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(3012);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(3065);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(3009);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(3067);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(620);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(632);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(702);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(380);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(307);
      if (lookahead == 'n') ADVANCE(618);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(689);
      if (lookahead == 's') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(703);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(343);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(590);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(505);
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(714);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 424:
      if (lookahead == 'm') ADVANCE(484);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(540);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(201);
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 428:
      if (lookahead == 'm') ADVANCE(504);
      END_STATE();
    case 429:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 430:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 431:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 432:
      if (lookahead == 'm') ADVANCE(539);
      END_STATE();
    case 433:
      if (lookahead == 'm') ADVANCE(542);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(2987);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(3014);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(3012);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(3009);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(378);
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(477);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(316);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(527);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(593);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(370);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(201);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(2987);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(3037);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(2975);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(220);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(551);
      if (lookahead == 's') ADVANCE(627);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(447);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(642);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(459);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 518:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 519:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 520:
      if (lookahead == 'p') ADVANCE(3037);
      END_STATE();
    case 521:
      if (lookahead == 'p') ADVANCE(721);
      END_STATE();
    case 522:
      if (lookahead == 'p') ADVANCE(2980);
      END_STATE();
    case 523:
      if (lookahead == 'p') ADVANCE(3024);
      END_STATE();
    case 524:
      if (lookahead == 'p') ADVANCE(3014);
      END_STATE();
    case 525:
      if (lookahead == 'p') ADVANCE(2975);
      END_STATE();
    case 526:
      if (lookahead == 'p') ADVANCE(314);
      END_STATE();
    case 527:
      if (lookahead == 'p') ADVANCE(321);
      END_STATE();
    case 528:
      if (lookahead == 'p') ADVANCE(555);
      END_STATE();
    case 529:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 530:
      if (lookahead == 'p') ADVANCE(162);
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(497);
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 533:
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 534:
      if (lookahead == 'p') ADVANCE(369);
      END_STATE();
    case 535:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 536:
      if (lookahead == 'p') ADVANCE(633);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 538:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 540:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 542:
      if (lookahead == 'p') ADVANCE(508);
      END_STATE();
    case 543:
      if (lookahead == 'q') ADVANCE(718);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(3037);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(2979);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(2960);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(3065);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(2973);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(3067);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(701);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(625);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(638);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(710);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(492);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(412);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(671);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(684);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(2979);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(3024);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(3014);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(3012);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(2938);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(3010);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(2975);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(2936);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(367);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(375);
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 602:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(360);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(287);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(608);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(605);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(3037);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(2979);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(3012);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(3065);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(2975);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(3029);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(2982);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(489);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(703);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(472);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(639);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(705);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(491);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(593);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(474);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(2976);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(3029);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(597);
      END_STATE();
    case 658:
      if (lookahead == 'u') ADVANCE(400);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(315);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(601);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(520);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(560);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(348);
      END_STATE();
    case 667:
      if (lookahead == 'u') ADVANCE(356);
      END_STATE();
    case 668:
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 669:
      if (lookahead == 'u') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(750);
      END_STATE();
    case 670:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 671:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 672:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 673:
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 674:
      if (lookahead == 'v') ADVANCE(587);
      END_STATE();
    case 675:
      if (lookahead == 'v') ADVANCE(264);
      END_STATE();
    case 676:
      if (lookahead == 'v') ADVANCE(174);
      END_STATE();
    case 677:
      if (lookahead == 'v') ADVANCE(488);
      END_STATE();
    case 678:
      if (lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 679:
      if (lookahead == 'v') ADVANCE(295);
      END_STATE();
    case 680:
      if (lookahead == 'v') ADVANCE(263);
      END_STATE();
    case 681:
      if (lookahead == 'v') ADVANCE(178);
      END_STATE();
    case 682:
      if (lookahead == 'v') ADVANCE(390);
      END_STATE();
    case 683:
      if (lookahead == 'v') ADVANCE(183);
      END_STATE();
    case 684:
      if (lookahead == 'v') ADVANCE(303);
      END_STATE();
    case 685:
      if (lookahead == 'w') ADVANCE(3012);
      END_STATE();
    case 686:
      if (lookahead == 'w') ADVANCE(435);
      END_STATE();
    case 687:
      if (lookahead == 'w') ADVANCE(17);
      END_STATE();
    case 688:
      if (lookahead == 'w') ADVANCE(438);
      END_STATE();
    case 689:
      if (lookahead == 'w') ADVANCE(182);
      END_STATE();
    case 690:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 691:
      if (lookahead == 'w') ADVANCE(453);
      END_STATE();
    case 692:
      if (lookahead == 'w') ADVANCE(607);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(532);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(2936);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(416);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(534);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(629);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(541);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(542);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 701:
      if (lookahead == 'y') ADVANCE(3037);
      END_STATE();
    case 702:
      if (lookahead == 'y') ADVANCE(3012);
      END_STATE();
    case 703:
      if (lookahead == 'y') ADVANCE(2938);
      END_STATE();
    case 704:
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 705:
      if (lookahead == 'y') ADVANCE(2936);
      END_STATE();
    case 706:
      if (lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 707:
      if (lookahead == 'y') ADVANCE(589);
      END_STATE();
    case 708:
      if (lookahead == 'y') ADVANCE(588);
      END_STATE();
    case 709:
      if (lookahead == 'y') ADVANCE(32);
      END_STATE();
    case 710:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 711:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 712:
      if (lookahead == 'y') ADVANCE(592);
      END_STATE();
    case 713:
      if (lookahead == 'y') ADVANCE(593);
      END_STATE();
    case 714:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 715:
      if (lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 716:
      if (lookahead == 'y') ADVANCE(47);
      END_STATE();
    case 717:
      if (lookahead == '{') ADVANCE(543);
      END_STATE();
    case 718:
      if (lookahead == '}') ADVANCE(2948);
      END_STATE();
    case 719:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(3021);
      END_STATE();
    case 720:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2932);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2932);
      END_STATE();
    case 721:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(3024);
      END_STATE();
    case 722:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 723:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      END_STATE();
    case 724:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      END_STATE();
    case 725:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      END_STATE();
    case 726:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3128);
      END_STATE();
    case 727:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3113);
      END_STATE();
    case 728:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3114);
      END_STATE();
    case 729:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3036);
      END_STATE();
    case 730:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3127);
      END_STATE();
    case 731:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 732:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 733:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      END_STATE();
    case 734:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 735:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      END_STATE();
    case 736:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      END_STATE();
    case 737:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 738:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 739:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      END_STATE();
    case 740:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 741:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      END_STATE();
    case 742:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      END_STATE();
    case 743:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      END_STATE();
    case 744:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      END_STATE();
    case 745:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      END_STATE();
    case 746:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      END_STATE();
    case 747:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 748:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3112);
      END_STATE();
    case 749:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(748);
      END_STATE();
    case 750:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(749);
      END_STATE();
    case 751:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(750);
      END_STATE();
    case 752:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      END_STATE();
    case 753:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      END_STATE();
    case 754:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 755:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 756:
      if (eof) ADVANCE(757);
      if (lookahead == '\n') ADVANCE(758);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(3040);
      if (lookahead == '#') ADVANCE(3131);
      if (lookahead == ',') ADVANCE(2935);
      if (lookahead == '=') ADVANCE(2999);
      if (lookahead == 'a') ADVANCE(1272);
      if (lookahead == 'b') ADVANCE(2927);
      if (lookahead == 'c') ADVANCE(1342);
      if (lookahead == 'd') ADVANCE(1343);
      if (lookahead == 'e') ADVANCE(2063);
      if (lookahead == 'f') ADVANCE(1096);
      if (lookahead == 'g') ADVANCE(2122);
      if (lookahead == 'h') ADVANCE(1778);
      if (lookahead == 'i') ADVANCE(1688);
      if (lookahead == 'k') ADVANCE(1344);
      if (lookahead == 'l') ADVANCE(1345);
      if (lookahead == 'm') ADVANCE(1089);
      if (lookahead == 'n') ADVANCE(2223);
      if (lookahead == 'o') ADVANCE(2355);
      if (lookahead == 'p') ADVANCE(1090);
      if (lookahead == 'r') ADVANCE(1346);
      if (lookahead == 's') ADVANCE(1077);
      if (lookahead == 't') ADVANCE(1347);
      if (lookahead == 'u') ADVANCE(2123);
      if (lookahead == 'v') ADVANCE(1398);
      if (lookahead == 'w') ADVANCE(1390);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(2616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_expert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_armor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_textmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_gnupg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_openpgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_pgp7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_pgp8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_list_DASHonly);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_debug_DASHall);
      if (lookahead == 'o') ADVANCE(2861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_debug_DASHiolbf);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_debug_DASHallow_DASHlarge_DASHchunks);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_debug_DASHignore_DASHexpiration);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_full_DASHtimestrings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_enable_DASHprogress_DASHfilter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_log_DASHtime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_no_DASHcomments);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_emit_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_no_DASHemit_DASHversion);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_for_DASHyour_DASHeyes_DASHonly);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_use_DASHembedded_DASHfilename);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_no_DASHuse_DASHembedded_DASHfilename);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_throw_DASHkeyids);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_no_DASHthrow_DASHkeyids);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_not_DASHdash_DASHescaped);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_escape_DASHfrom_DASHlines);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_no_DASHescape_DASHfrom_DASHlines);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_no_DASHsymkey_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_allow_DASHnon_DASHselfsigned_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_allow_DASHfreeform_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_ignore_DASHtime_DASHconflict);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_ignore_DASHvalid_DASHfrom);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcrc_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_ignore_DASHmdc_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_allow_DASHold_DASHcipher_DASHalgos);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHdigest_DASHalgos);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHkey_DASHsignatures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_override_DASHcompliance_DASHcheck);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_no_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_skip_DASHverify);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHdata);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_list_DASHsignatures);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_list_DASHsigs);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_fast_DASHlist_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_show_DASHsession_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_ask_DASHsig_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHsig_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_force_DASHsign_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_forbid_DASHgen_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_enable_DASHspecial_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_preserve_DASHpermissions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1092);
      if (lookahead == 't') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1653);
      if (lookahead == 'g') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == 's') ADVANCE(2717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == 'g') ADVANCE(2478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2904);
      if (lookahead == 'b') ADVANCE(1834);
      if (lookahead == 'c') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2252);
      if (lookahead == 'i') ADVANCE(1299);
      if (lookahead == 'r') ADVANCE(1786);
      if (lookahead == 's') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2088);
      if (lookahead == 'd') ADVANCE(1188);
      if (lookahead == 'e') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(2856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '0') ADVANCE(826);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '0') ADVANCE(824);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(1930);
      if (lookahead == 'e') ADVANCE(2124);
      if (lookahead == 'h') ADVANCE(2239);
      if (lookahead == 'i') ADVANCE(1703);
      if (lookahead == 'k') ADVANCE(1781);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(1083);
      if (lookahead == '4') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '4') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '4') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '7') ADVANCE(827);
      if (lookahead == '8') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(1057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2125);
      if (lookahead == 'i') ADVANCE(2126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2587);
      if (lookahead == 'e') ADVANCE(2416);
      if (lookahead == 'g') ADVANCE(2332);
      if (lookahead == 'h') ADVANCE(2311);
      if (lookahead == 'i') ADVANCE(2179);
      if (lookahead == 'r') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1182);
      if (lookahead == 'c') ADVANCE(2415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1975);
      if (lookahead == 'c') ADVANCE(2241);
      if (lookahead == 'd') ADVANCE(1396);
      if (lookahead == 'e') ADVANCE(2109);
      if (lookahead == 'f') ADVANCE(2291);
      if (lookahead == 'g') ADVANCE(2414);
      if (lookahead == 'i') ADVANCE(2127);
      if (lookahead == 'k') ADVANCE(1401);
      if (lookahead == 'm') ADVANCE(1106);
      if (lookahead == 'p') ADVANCE(1429);
      if (lookahead == 'r') ADVANCE(1107);
      if (lookahead == 's') ADVANCE(1405);
      if (lookahead == 't') ADVANCE(1615);
      if (lookahead == 'u') ADVANCE(2673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1929);
      if (lookahead == 'o') ADVANCE(2398);
      if (lookahead == 'u') ADVANCE(1971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2183);
      if (lookahead == 'e') ADVANCE(2133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2131);
      if (lookahead == 'e') ADVANCE(2397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == 'o') ADVANCE(1204);
      if (lookahead == 's') ADVANCE(1791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1984);
      if (lookahead == 'i') ADVANCE(1742);
      if (lookahead == 'l') ADVANCE(1397);
      if (lookahead == 's') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1994);
      if (lookahead == 'k') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2012);
      if (lookahead == 's') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2014);
      if (lookahead == 'l') ADVANCE(1519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1190);
      if (lookahead == 'p') ADVANCE(1977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(2394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(2796);
      if (lookahead == 'f') ADVANCE(1102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(2013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(2246);
      if (lookahead == 'i') ADVANCE(1659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(2803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(2018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1128);
      if (lookahead == 'g') ADVANCE(881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1919);
      if (lookahead == 'd') ADVANCE(1787);
      if (lookahead == 'm') ADVANCE(2249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2282);
      if (lookahead == 's') ADVANCE(1566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1900);
      if (lookahead == 'd') ADVANCE(1903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1974);
      if (lookahead == 'p') ADVANCE(2821);
      if (lookahead == 't') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1758);
      if (lookahead == 'k') ADVANCE(1528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2253);
      if (lookahead == 'f') ADVANCE(1793);
      if (lookahead == 'i') ADVANCE(1212);
      if (lookahead == 'k') ADVANCE(1407);
      if (lookahead == 's') ADVANCE(1514);
      if (lookahead == 'w') ADVANCE(1943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2248);
      if (lookahead == 'd') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1920);
      if (lookahead == 'd') ADVANCE(1812);
      if (lookahead == 'l') ADVANCE(1170);
      if (lookahead == 'p') ADVANCE(2834);
      if (lookahead == 's') ADVANCE(1905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2509);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2463);
      if (lookahead == 'm') ADVANCE(1331);
      if (lookahead == 't') ADVANCE(1790);
      if (lookahead == 'v') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2317);
      if (lookahead == 's') ADVANCE(1636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1784);
      if (lookahead == 'q') ADVANCE(2793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2554);
      if (lookahead == 's') ADVANCE(1579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1509);
      if (lookahead == 'o') ADVANCE(2832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1583);
      if (lookahead == 's') ADVANCE(1829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1587);
      if (lookahead == 'r') ADVANCE(2592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1604);
      if (lookahead == 's') ADVANCE(1912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1611);
      if (lookahead == 'k') ADVANCE(1412);
      if (lookahead == 'n') ADVANCE(1532);
      if (lookahead == 'p') ADVANCE(2452);
      if (lookahead == 'r') ADVANCE(1596);
      if (lookahead == 's') ADVANCE(1918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1775);
      if (lookahead == 'k') ADVANCE(1621);
      if (lookahead == 't') ADVANCE(2429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(2327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1273);
      if (lookahead == 'g') ADVANCE(1394);
      if (lookahead == 'l') ADVANCE(2008);
      if (lookahead == 'r') ADVANCE(2065);
      if (lookahead == 's') ADVANCE(1928);
      if (lookahead == 'u') ADVANCE(2703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3043);
      if (lookahead == 'i') ADVANCE(1998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3041);
      if (lookahead == 'i') ADVANCE(1999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3068);
      if (lookahead == 'i') ADVANCE(2000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3061);
      if (lookahead == 'i') ADVANCE(2005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(3072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1366);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2594);
      if (lookahead == 'l') ADVANCE(1122);
      if (lookahead == 'p') ADVANCE(2508);
      if (lookahead == 's') ADVANCE(2349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1132);
      if (lookahead == 'o') ADVANCE(2537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(2329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1922);
      if (lookahead == 'p') ADVANCE(2320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1924);
      if (lookahead == 'k') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2418);
      if (lookahead == 'h') ADVANCE(2792);
      if (lookahead == 'i') ADVANCE(2331);
      if (lookahead == 'o') ADVANCE(2053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1181);
      if (lookahead == 'i') ADVANCE(1700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2880);
      if (lookahead == 'n') ADVANCE(2224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1702);
      if (lookahead == 'i') ADVANCE(2099);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1231);
      if (lookahead == 'f') ADVANCE(1195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2871);
      if (lookahead == 'h') ADVANCE(2469);
      if (lookahead == 'o') ADVANCE(1654);
      if (lookahead == 'r') ADVANCE(2795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(3038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead == 'i') ADVANCE(2700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1209);
      if (lookahead == 'i') ADVANCE(2709);
      if (lookahead == 'p') ADVANCE(1498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2633);
      if (lookahead == 'i') ADVANCE(2067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2399);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead == 'i') ADVANCE(1740);
      if (lookahead == 'k') ADVANCE(1821);
      if (lookahead == 'y') ADVANCE(2061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2750);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1428);
      if (lookahead == 'o') ADVANCE(2805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2218);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2419);
      if (lookahead == 'o') ADVANCE(2491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1220);
      if (lookahead == 'u') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2353);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2637);
      if (lookahead == 'i') ADVANCE(2483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2874);
      if (lookahead == 'h') ADVANCE(2533);
      if (lookahead == 't') ADVANCE(2881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2875);
      if (lookahead == 'l') ADVANCE(1513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2922);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2878);
      if (lookahead == 'l') ADVANCE(1533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2879);
      if (lookahead == 'l') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(2112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1279);
      if (lookahead == 'r') ADVANCE(1525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1820);
      if (lookahead == 't') ADVANCE(1782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2441);
      if (lookahead == 'n') ADVANCE(2299);
      if (lookahead == 'o') ADVANCE(2022);
      if (lookahead == 'w') ADVANCE(1562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1785);
      if (lookahead == 'p') ADVANCE(2281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(2662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2174);
      if (lookahead == 'm') ADVANCE(2341);
      if (lookahead == 'n') ADVANCE(1199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(3030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1402);
      if (lookahead == 'r') ADVANCE(2066);
      if (lookahead == 's') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2505);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2562);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2200);
      if (lookahead == 'o') ADVANCE(1973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2536);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(2052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(2955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(2988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(3026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(2807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(2425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1901);
      if (lookahead == 'v') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1274);
      if (lookahead == 'n') ADVANCE(1932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2345);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2098);
      if (lookahead == 'l') ADVANCE(2298);
      if (lookahead == 'r') ADVANCE(1521);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1393);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2522);
      if (lookahead == 's') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1547);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1549);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2364);
      if (lookahead == 'o') ADVANCE(2111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2103);
      if (lookahead == 'l') ADVANCE(2313);
      if (lookahead == 'r') ADVANCE(1620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2393);
      if (lookahead == 'o') ADVANCE(2816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(2396);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(820);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(880);
      if (lookahead == 's') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1497);
      if (lookahead == 's') ADVANCE(2711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1501);
      if (lookahead == 'p') ADVANCE(2316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(2580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1441);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(932);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1605);
      if (lookahead == 'r') ADVANCE(1607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(3078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1417);
      if (lookahead == 'r') ADVANCE(1499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2015);
      if (lookahead == 'r') ADVANCE(2092);
      if (lookahead == 's') ADVANCE(1955);
      if (lookahead == 'u') ADVANCE(2710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(929);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1986:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1988:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1990:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1992:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1993:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1994:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1995:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1996:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1997:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1998:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 1999:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2001:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2002:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2003:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2004:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2280);
      if (lookahead == 'w') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2010:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2011:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2012:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2013:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2014:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2015:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2029:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2030:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2031:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1863);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2033:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1830);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2038:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2043:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2044:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(2835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2049:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1105);
      if (lookahead == 'p') ADVANCE(1972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2063:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1817);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 's') ADVANCE(1203);
      if (lookahead == 'x') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2065:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2066:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2070:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2072:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1504);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2074:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2077:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2078:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2079:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2080:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1377);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2081:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2082:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1388);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2083:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2085:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2801);
      if (lookahead == 'n') ADVANCE(1577);
      if (lookahead == 'o') ADVANCE(2130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2086:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2088:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2091:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2093:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1530);
      if (lookahead == 'p') ADVANCE(2514);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2094:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2096:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2097:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2098:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1850);
      if (lookahead == 's') ADVANCE(2713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2102:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2105:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2108:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1910);
      if (lookahead == 'n') ADVANCE(1261);
      if (lookahead == 's') ADVANCE(1270);
      if (lookahead == 'x') ADVANCE(2362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2110:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2391);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2111:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(2392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2112:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(3008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2115:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(3048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2116:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(3066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2117:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2121:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2794);
      if (lookahead == 'r') ADVANCE(2279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2123:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1704);
      if (lookahead == 's') ADVANCE(1408);
      if (lookahead == 't') ADVANCE(1646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1321);
      if (lookahead == 't') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1701);
      if (lookahead == 'r') ADVANCE(1729);
      if (lookahead == 'x') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2130:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2131:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1976);
      if (lookahead == 'p') ADVANCE(2714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2151:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2154:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2167:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2168:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2170:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2172:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2173:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2175:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1487);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2186:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2189:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1129);
      if (lookahead == 's') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2195:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2196:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2199:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2202:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2203:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2205:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2207:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2208:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2209:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2211:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2212:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2213:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2214:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2217:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2218:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2220:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2221:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(2328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2225:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2134);
      if (lookahead == 's') ADVANCE(1789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2227:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2230:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2232:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2233:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(3075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2242:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2251:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2255:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2259:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2262:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2263:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2264:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2267:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2271:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2275:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2276:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2277:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2278:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2280:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2281:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2070);
      if (lookahead == 'r') ADVANCE(2312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2284:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2285:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2286:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2288:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2290:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2292:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2296:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2300:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2445);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2307:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2311:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2315:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2318:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2319:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2321:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2389);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2326:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(2674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2332:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2998);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2335:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2336:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(3000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2345:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2346:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1507);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2350:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2351:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1510);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2355:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1399);
      if (lookahead == 'u') ADVANCE(2702);
      if (lookahead == 'v') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2356:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2357:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1469);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2364:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1865);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2367:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2369:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2373:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2381:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2529);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2386:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2388:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2539);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2390:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2541);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2392:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(2544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2395:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2396:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'q') ADVANCE(2802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2399:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(3002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2403:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(3001);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2406:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2407:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2410:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2414:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2896);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2418:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2424:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2425:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2426:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2436:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2437:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2443:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2445:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2447:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2449:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2450:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1416);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2453:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2455:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2460:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2461:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2462:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2466:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2467:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2382);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2468:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2472:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2473:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2908);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2474:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2478:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2479:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2900);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2480:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2481:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2482:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2483:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2484:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2485:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2486:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2487:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2488:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2489:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2490:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2491:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2492:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1453);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2493:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2494:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2495:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2496:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2497:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2498:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2499:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2500:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1466);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2501:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2502:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2503:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2504:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2505:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2506:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2507:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2508:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2509:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2510:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2511:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2512:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2513:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2514:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2515:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2516:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2517:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2518:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2519:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2520:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2521:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2522:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2523:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2524:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2525:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1886);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2526:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2527:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2528:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2529:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2530:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2531:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1899);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2532:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2533:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2534:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2535:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2536:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2537:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2538:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2539:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2540:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2541:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2542:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2543:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2544:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2545:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2546:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2547:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2548:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2549:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2550:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2551:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2552:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2553:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2554:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(2330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2555:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2556:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2557:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2558:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2559:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2560:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2561:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2562:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2563:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(3013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2564:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(3011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2565:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2566:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2567:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2568:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2569:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2570:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2571:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2572:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2573:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2574:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2575:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(858);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2576:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2577:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2578:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2579:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2580:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2581:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2582:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2583:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2584:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(3015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2585:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(3016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2586:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(3017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2587:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2588:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2589:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2590:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2591:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2592:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2593:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2594:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2595:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2596:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2597:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2598:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2599:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2600:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2601:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2602:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2603:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2604:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2605:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2606:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2607:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2608:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2609:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2610:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2611:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2612:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2613:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2614:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2615:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2616:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2617:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2618:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2619:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2620:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2621:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2622:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2623:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2624:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2625:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2626:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2627:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2628:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2629:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2630:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2631:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2632:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2633:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2634:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2635:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2636:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2637:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2638:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2639:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2640:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2641:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2642:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2643:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2644:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2645:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2646:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2647:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2648:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2649:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2650:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2651:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2652:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2653:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2654:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2655:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2656:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2657:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2658:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2659:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2660:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2661:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2662:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1911);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2663:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2664:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2665:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2666:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2667:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2668:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2669:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2670:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1062);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2671:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2672:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2673:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1645);
      if (lookahead == 't') ADVANCE(1686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2674:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(2672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2675:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2676:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2677:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3004);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2678:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2679:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2680:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2681:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2682:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2683:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2684:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2685:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2686:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2687:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2688:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2689:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2690:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3007);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2691:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2993);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2692:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2693:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2694:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3060);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2695:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2696:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2697:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2698:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(3077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2699:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2700:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2701:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2702:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2703:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2704:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2705:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2706:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2707:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2708:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(890);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2709:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2710:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2711:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2712:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1819);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2713:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2714:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2715:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2716:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2717:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2718:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2719:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2720:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2721:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2722:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2723:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2724:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2725:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2726:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2727:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2728:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2729:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2730:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2731:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2732:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2733:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2734:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2735:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2736:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2737:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2738:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2739:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1371);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2740:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2741:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2742:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2743:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2744:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2745:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2746:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2747:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2748:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2749:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2750:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2751:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2752:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2753:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2754:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2755:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1488);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2756:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2757:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2758:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2759:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2760:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2761:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1523);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2762:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2763:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2764:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(982);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2765:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2766:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2767:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2768:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2769:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2770:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2091);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2771:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2772:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2773:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2774:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2775:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2776:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2777:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2778:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2779:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2780:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2781:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2782:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2783:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2784:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2785:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2786:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1052);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2787:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2788:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2789:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(2531);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2790:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2791:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2792:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2793:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2794:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2795:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2588);
      if (lookahead == 'y') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2796:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2797:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2798:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2799:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2800:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2801:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2802:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2803:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2804:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2805:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2806:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2807:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2808:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2809:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2810:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2811:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(2530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(2240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1357);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1502);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1452);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1600);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(2462);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(2161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(2083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2367);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2378);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2380);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(2383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(864);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(3071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2472);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(956);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(995);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2372);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(2323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2931);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1354);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2931);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2931);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(2931);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(aux_sym__unknown_option_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2932);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == 's') ADVANCE(1608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (lookahead == '%' ||
          lookahead == 'K' ||
          lookahead == 'S' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(3047);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3130);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(717);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3130);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(717);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(2954);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(aux_sym__command_format_token1);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(anon_sym_keyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(sym__charset_value);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(sym__charset_value);
      if (lookahead == '5') ADVANCE(2960);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(sym__utf8_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(sym__no_utf8_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(anon_sym_ungroup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(anon_sym_sender);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(sym__key_origin_value);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(sym__key_origin_value);
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(anon_sym_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'b') ADVANCE(341);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(sym__require_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(anon_sym_debug_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(sym__debug_level_value);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '-') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3035);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3031);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3033);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3034);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3035);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(sym__debug_flag_value);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(anon_sym_debug_DASHset_DASHiobuf_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(anon_sym_faked_DASHsystem_DASHtime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(anon_sym_status_DASHfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(anon_sym_status_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(anon_sym_logger_DASHfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(anon_sym_logger_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(anon_sym_log_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(aux_sym__notation_format_token1);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(anon_sym_known_DASHnotation);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(anon_sym_sig_DASHpolicy_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(anon_sym_cert_DASHpolicy_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(anon_sym_set_DASHpolicy_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(anon_sym_sig_DASHkeyserver_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(anon_sym_set_DASHfilename);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(anon_sym_cipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(anon_sym_digest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(anon_sym_compress_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(anon_sym_cert_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(anon_sym_disable_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(anon_sym_disable_DASHpubkey_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHrepeat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(anon_sym_passphrase);
      if (lookahead == '-') ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(anon_sym_pinentry_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(sym__pinentry_mode_value);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(anon_sym_request_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(sym__request_origin_value);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(anon_sym_command_DASHfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(anon_sym_command_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(anon_sym_weak_DASHdigest);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey);
      if (lookahead == '-') ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey_DASHfd);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(anon_sym_default_DASHsig_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHexpire);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(anon_sym_default_DASHnew_DASHkey_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(sym__new_key_algo);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3076);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(anon_sym_default_DASHpreference_DASHlist);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(anon_sym_default_DASHkeyserver_DASHurl);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(anon_sym_chuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2931);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3080);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3081);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3082);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3083);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3084);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3085);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3086);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3087);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3088);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3089);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3090);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3091);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3092);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3093);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3094);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3095);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3096);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3097);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3098);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3099);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3100);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3101);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3102);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3103);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3104);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3105);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3106);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3107);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3108);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3109);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3110);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3111);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead == '.') ADVANCE(727);
      if (lookahead == ':') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3113);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3114);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'T') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3125);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3130);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3115);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3117);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3118);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3119);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3121);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3122);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3123);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3125);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3130);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(sym_iso_time);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(sym_expire_time);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(sym_expire_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3130);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3131);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(sym__pubkey_algo_value);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(81);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(sym__hash_algo_value);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(sym__compression_algo_value);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 756},
  [2] = {.lex_state = 756},
  [3] = {.lex_state = 756},
  [4] = {.lex_state = 756},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 13},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 13},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 15},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 13},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 13},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 13},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 15},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 60},
  [124] = {.lex_state = 756},
  [125] = {.lex_state = 756},
  [126] = {.lex_state = 756},
  [127] = {.lex_state = 756},
  [128] = {.lex_state = 756},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 756},
  [131] = {.lex_state = 60},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 60},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 110},
  [140] = {.lex_state = 110},
  [141] = {.lex_state = 60},
  [142] = {.lex_state = 60},
  [143] = {.lex_state = 60},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 719},
  [153] = {.lex_state = 60},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 60},
  [156] = {.lex_state = 60},
  [157] = {.lex_state = 29},
  [158] = {.lex_state = 60},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 60},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 60},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 720},
  [167] = {.lex_state = 756},
  [168] = {.lex_state = 756},
  [169] = {.lex_state = 756},
  [170] = {.lex_state = 756},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 110},
  [177] = {.lex_state = 60},
  [178] = {.lex_state = 60},
  [179] = {.lex_state = 756},
  [180] = {.lex_state = 756},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 5},
  [183] = {.lex_state = 60},
  [184] = {.lex_state = 756},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 7},
  [187] = {.lex_state = 60},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 7},
  [191] = {.lex_state = 756},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 756},
  [197] = {.lex_state = 756},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 756},
  [203] = {.lex_state = 756},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 756},
  [206] = {.lex_state = 756},
  [207] = {.lex_state = 756},
  [208] = {.lex_state = 756},
  [209] = {.lex_state = 756},
  [210] = {.lex_state = 756},
  [211] = {.lex_state = 756},
  [212] = {.lex_state = 756},
  [213] = {.lex_state = 756},
  [214] = {.lex_state = 756},
  [215] = {.lex_state = 756},
  [216] = {.lex_state = 756},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 756},
  [219] = {.lex_state = 756},
  [220] = {.lex_state = 756},
  [221] = {.lex_state = 756},
  [222] = {.lex_state = 756},
  [223] = {.lex_state = 756},
  [224] = {.lex_state = 756},
  [225] = {.lex_state = 756},
  [226] = {.lex_state = 756},
  [227] = {.lex_state = 756},
  [228] = {.lex_state = 756},
  [229] = {.lex_state = 756},
  [230] = {.lex_state = 756},
  [231] = {.lex_state = 756},
  [232] = {.lex_state = 756},
  [233] = {.lex_state = 756},
  [234] = {.lex_state = 756},
  [235] = {.lex_state = 756},
  [236] = {.lex_state = 756},
  [237] = {.lex_state = 756},
  [238] = {.lex_state = 756},
  [239] = {.lex_state = 756},
  [240] = {.lex_state = 756},
  [241] = {.lex_state = 756},
  [242] = {.lex_state = 756},
  [243] = {.lex_state = 756},
  [244] = {.lex_state = 756},
  [245] = {.lex_state = 756},
  [246] = {.lex_state = 756},
  [247] = {.lex_state = 756},
  [248] = {.lex_state = 756},
  [249] = {.lex_state = 756},
  [250] = {.lex_state = 60},
  [251] = {.lex_state = 756},
  [252] = {.lex_state = 756},
  [253] = {.lex_state = 756},
  [254] = {.lex_state = 756},
  [255] = {.lex_state = 756},
  [256] = {.lex_state = 756},
  [257] = {.lex_state = 756},
  [258] = {.lex_state = 756},
  [259] = {.lex_state = 756},
  [260] = {.lex_state = 756},
  [261] = {.lex_state = 756},
  [262] = {.lex_state = 756},
  [263] = {.lex_state = 756},
  [264] = {.lex_state = 756},
  [265] = {.lex_state = 756},
  [266] = {.lex_state = 756},
  [267] = {.lex_state = 756},
  [268] = {.lex_state = 756},
  [269] = {.lex_state = 756},
  [270] = {.lex_state = 756},
  [271] = {.lex_state = 756},
  [272] = {.lex_state = 756},
  [273] = {.lex_state = 756},
  [274] = {.lex_state = 756},
  [275] = {.lex_state = 756},
  [276] = {.lex_state = 756},
  [277] = {.lex_state = 756},
  [278] = {.lex_state = 756},
  [279] = {.lex_state = 756},
  [280] = {.lex_state = 756},
  [281] = {.lex_state = 756},
  [282] = {.lex_state = 756},
  [283] = {.lex_state = 756},
  [284] = {.lex_state = 756},
  [285] = {.lex_state = 756},
  [286] = {.lex_state = 756},
  [287] = {.lex_state = 756},
  [288] = {.lex_state = 756},
  [289] = {.lex_state = 756},
  [290] = {.lex_state = 756},
  [291] = {.lex_state = 756},
  [292] = {.lex_state = 756},
  [293] = {.lex_state = 756},
  [294] = {.lex_state = 756},
  [295] = {.lex_state = 756},
  [296] = {.lex_state = 756},
  [297] = {.lex_state = 756},
  [298] = {.lex_state = 756},
  [299] = {.lex_state = 756},
  [300] = {.lex_state = 756},
  [301] = {.lex_state = 756},
  [302] = {.lex_state = 756},
  [303] = {.lex_state = 756},
  [304] = {.lex_state = 756},
  [305] = {.lex_state = 756},
  [306] = {.lex_state = 756},
  [307] = {.lex_state = 756},
  [308] = {.lex_state = 756},
  [309] = {.lex_state = 756},
  [310] = {.lex_state = 756},
  [311] = {.lex_state = 756},
  [312] = {.lex_state = 756},
  [313] = {.lex_state = 756},
  [314] = {.lex_state = 756},
  [315] = {.lex_state = 756},
  [316] = {.lex_state = 756},
  [317] = {.lex_state = 756},
  [318] = {.lex_state = 756},
  [319] = {.lex_state = 756},
  [320] = {.lex_state = 756},
  [321] = {.lex_state = 756},
  [322] = {.lex_state = 756},
  [323] = {.lex_state = 756},
  [324] = {.lex_state = 756},
  [325] = {.lex_state = 756},
  [326] = {.lex_state = 756},
  [327] = {.lex_state = 756},
  [328] = {.lex_state = 756},
  [329] = {.lex_state = 756},
  [330] = {.lex_state = 756},
  [331] = {.lex_state = 756},
  [332] = {.lex_state = 756},
  [333] = {.lex_state = 756},
  [334] = {.lex_state = 756},
  [335] = {.lex_state = 756},
  [336] = {.lex_state = 756},
  [337] = {.lex_state = 756},
  [338] = {.lex_state = 756},
  [339] = {.lex_state = 756},
  [340] = {.lex_state = 756},
  [341] = {.lex_state = 756},
  [342] = {.lex_state = 756},
  [343] = {.lex_state = 756},
  [344] = {.lex_state = 756},
  [345] = {.lex_state = 756},
  [346] = {.lex_state = 756},
  [347] = {.lex_state = 756},
  [348] = {.lex_state = 756},
  [349] = {.lex_state = 756},
  [350] = {.lex_state = 756},
  [351] = {.lex_state = 756},
  [352] = {.lex_state = 756},
  [353] = {.lex_state = 756},
  [354] = {.lex_state = 756},
  [355] = {.lex_state = 756},
  [356] = {.lex_state = 756},
  [357] = {.lex_state = 756},
  [358] = {.lex_state = 756},
  [359] = {.lex_state = 756},
  [360] = {.lex_state = 756},
  [361] = {.lex_state = 756},
  [362] = {.lex_state = 756},
  [363] = {.lex_state = 756},
  [364] = {.lex_state = 756},
  [365] = {.lex_state = 756},
  [366] = {.lex_state = 756},
  [367] = {.lex_state = 756},
  [368] = {.lex_state = 756},
  [369] = {.lex_state = 756},
  [370] = {.lex_state = 756},
  [371] = {.lex_state = 756},
  [372] = {.lex_state = 756},
  [373] = {.lex_state = 756},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__unknown_option_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [aux_sym__command_format_token1] = ACTIONS(1),
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(169),
    [sym_option] = STATE(170),
    [sym__unknown_option] = STATE(246),
    [sym__default_key] = STATE(246),
    [sym__list_options] = STATE(246),
    [sym__verify_options] = STATE(246),
    [sym__photo_viewer] = STATE(246),
    [sym__exec_path] = STATE(246),
    [sym__keyring] = STATE(246),
    [sym__primary_keyring] = STATE(246),
    [sym__trustdb_name] = STATE(246),
    [sym__display_charset] = STATE(246),
    [sym__compress_level] = STATE(246),
    [sym__bzip2_compress_level] = STATE(246),
    [sym__default_cert_level] = STATE(246),
    [sym__min_cert_level] = STATE(246),
    [sym__trusted_key] = STATE(246),
    [sym__add_desig_revoker] = STATE(246),
    [sym__trust_model] = STATE(246),
    [sym__assert_signer] = STATE(246),
    [sym__auto_key_locate] = STATE(168),
    [sym__keyid_format] = STATE(246),
    [sym__keyserver] = STATE(246),
    [sym__completes_needed] = STATE(246),
    [sym__marginals_needed] = STATE(246),
    [sym__tofu_default_policy] = STATE(246),
    [sym__max_cert_depth] = STATE(246),
    [sym__agent_program] = STATE(246),
    [sym__dirmngr_program] = STATE(246),
    [sym__limit_card_insert_tries] = STATE(246),
    [sym__recipient] = STATE(246),
    [sym__hidden_recipient] = STATE(246),
    [sym__recipient_file] = STATE(246),
    [sym__hidden_recipient_file] = STATE(246),
    [sym__encrypt_to] = STATE(246),
    [sym__hidden_encrypt_to] = STATE(246),
    [sym__group] = STATE(167),
    [sym__ungroup] = STATE(246),
    [sym__local_user] = STATE(246),
    [sym__sender] = STATE(246),
    [sym__try_secret_name] = STATE(246),
    [sym__output] = STATE(246),
    [sym__max_output] = STATE(246),
    [sym__chunk_size] = STATE(246),
    [sym__input_size_hint] = STATE(246),
    [sym__key_origin] = STATE(246),
    [sym__import_options] = STATE(246),
    [sym__export_options] = STATE(246),
    [sym__personal_cipher_preferences] = STATE(246),
    [sym__personal_digest_preferences] = STATE(246),
    [sym__personal_compress_preferences] = STATE(246),
    [sym__s2k_cipher_algo] = STATE(246),
    [sym__s2k_digest_algo] = STATE(246),
    [sym__s2k_mode] = STATE(246),
    [sym__s2k_count] = STATE(246),
    [sym__compliance] = STATE(246),
    [sym__min_rsa_length] = STATE(246),
    [sym__debug_level] = STATE(246),
    [sym__debug] = STATE(246),
    [sym__debug_set_iobuf_size] = STATE(246),
    [sym__faked_system_time] = STATE(246),
    [sym__status_fd] = STATE(246),
    [sym__status_file] = STATE(246),
    [sym__logger_fd] = STATE(246),
    [sym__logger_file] = STATE(246),
    [sym__comment] = STATE(246),
    [sym__known_notation] = STATE(246),
    [sym__sig_policy_url] = STATE(246),
    [sym__cert_policy_url] = STATE(246),
    [sym__set_policy_url] = STATE(246),
    [sym__sig_keyserver_url] = STATE(246),
    [sym__set_filename] = STATE(246),
    [sym__cipher_algo] = STATE(246),
    [sym__digest_algo] = STATE(246),
    [sym__compress_algo] = STATE(246),
    [sym__cert_digest_algo] = STATE(246),
    [sym__disable_cipher_algo] = STATE(246),
    [sym__disable_pubkey_algo] = STATE(246),
    [sym__passphrase_repeat] = STATE(246),
    [sym__passphrase_fd] = STATE(246),
    [sym__passphrase_file] = STATE(246),
    [sym__passphrase] = STATE(246),
    [sym__pinentry_mode] = STATE(246),
    [sym__request_origin] = STATE(246),
    [sym__command_fd] = STATE(246),
    [sym__command_file] = STATE(246),
    [sym__weak_digest] = STATE(246),
    [sym__override_session_key] = STATE(246),
    [sym__override_session_key_fd] = STATE(246),
    [sym__default_sig_expire] = STATE(246),
    [sym__default_cert_expire] = STATE(246),
    [sym__default_new_key_algo] = STATE(246),
    [sym__default_preference_list] = STATE(246),
    [sym__default_keyserver_url] = STATE(246),
    [sym__chuid] = STATE(246),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_config_token1] = ACTIONS(7),
    [anon_sym_default_DASHrecipient] = ACTIONS(9),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(9),
    [anon_sym_verbose] = ACTIONS(9),
    [anon_sym_no_DASHtty] = ACTIONS(9),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_enable_DASHdsa2] = ACTIONS(9),
    [anon_sym_disable_DASHdsa2] = ACTIONS(9),
    [anon_sym_no_DASHcompress] = ACTIONS(9),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(9),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_always_DASHtrust] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(9),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(9),
    [anon_sym_no_DASHautostart] = ACTIONS(9),
    [anon_sym_lock_DASHonce] = ACTIONS(9),
    [anon_sym_lock_DASHmultiple] = ACTIONS(9),
    [anon_sym_lock_DASHnever] = ACTIONS(9),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(9),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(9),
    [anon_sym_no_DASHgreeting] = ACTIONS(9),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(9),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(9),
    [anon_sym_require_DASHsecmem] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(9),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_expert] = ACTIONS(9),
    [anon_sym_no_DASHexpert] = ACTIONS(9),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(9),
    [anon_sym_no_DASHgroups] = ACTIONS(9),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(9),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_armor] = ACTIONS(9),
    [anon_sym_no_DASHarmor] = ACTIONS(9),
    [anon_sym_with_DASHcolons] = ACTIONS(9),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_with_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(9),
    [anon_sym_with_DASHkeygrip] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(9),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(9),
    [anon_sym_with_DASHsecret] = ACTIONS(9),
    [anon_sym_textmode] = ACTIONS(9),
    [anon_sym_no_DASHtextmode] = ACTIONS(9),
    [anon_sym_force_DASHocb] = ACTIONS(9),
    [anon_sym_force_DASHaead] = ACTIONS(9),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(9),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_gnupg] = ACTIONS(9),
    [anon_sym_openpgp] = ACTIONS(9),
    [anon_sym_rfc4880] = ACTIONS(9),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(9),
    [anon_sym_debug_DASHiolbf] = ACTIONS(9),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(9),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(9),
    [anon_sym_full_DASHtimestrings] = ACTIONS(9),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(9),
    [anon_sym_log_DASHtime] = ACTIONS(9),
    [anon_sym_no_DASHcomments] = ACTIONS(9),
    [anon_sym_emit_DASHversion] = ACTIONS(9),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(9),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_throw_DASHkeyids] = ACTIONS(9),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(9),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(9),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(9),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(9),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(9),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(9),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(9),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(9),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(9),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(9),
    [anon_sym_no_DASHkeyring] = ACTIONS(9),
    [anon_sym_skip_DASHverify] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(9),
    [anon_sym_list_DASHsignatures] = ACTIONS(9),
    [anon_sym_list_DASHsigs] = ACTIONS(9),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(9),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(9),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(9),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(9),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(9),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(9),
    [aux_sym__unknown_option_token1] = ACTIONS(11),
    [anon_sym_default_DASHkey] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [sym__utf8_strings] = ACTIONS(9),
    [sym__no_utf8_strings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_completes_DASHneeded] = ACTIONS(53),
    [anon_sym_marginals_DASHneeded] = ACTIONS(55),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(57),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(59),
    [anon_sym_agent_DASHprogram] = ACTIONS(61),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(63),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(65),
    [anon_sym_recipient] = ACTIONS(67),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(69),
    [anon_sym_recipient_DASHfile] = ACTIONS(71),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(73),
    [anon_sym_encrypt_DASHto] = ACTIONS(75),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(77),
    [anon_sym_group] = ACTIONS(79),
    [anon_sym_ungroup] = ACTIONS(81),
    [anon_sym_local_DASHuser] = ACTIONS(83),
    [anon_sym_sender] = ACTIONS(85),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_max_DASHoutput] = ACTIONS(91),
    [anon_sym_chunk_DASHsize] = ACTIONS(93),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(95),
    [anon_sym_key_DASHorigin] = ACTIONS(97),
    [anon_sym_import_DASHoptions] = ACTIONS(99),
    [anon_sym_export_DASHoptions] = ACTIONS(101),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(105),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(107),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(111),
    [anon_sym_s2k_DASHmode] = ACTIONS(113),
    [anon_sym_s2k_DASHcount] = ACTIONS(115),
    [anon_sym_compliance] = ACTIONS(117),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(119),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(123),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(125),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(127),
    [anon_sym_status_DASHfd] = ACTIONS(129),
    [anon_sym_status_DASHfile] = ACTIONS(131),
    [anon_sym_logger_DASHfd] = ACTIONS(133),
    [anon_sym_logger_DASHfile] = ACTIONS(135),
    [anon_sym_log_DASHfile] = ACTIONS(135),
    [anon_sym_comment] = ACTIONS(137),
    [anon_sym_known_DASHnotation] = ACTIONS(139),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(141),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(143),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(145),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(147),
    [anon_sym_set_DASHfilename] = ACTIONS(149),
    [anon_sym_cipher_DASHalgo] = ACTIONS(151),
    [anon_sym_digest_DASHalgo] = ACTIONS(153),
    [anon_sym_compress_DASHalgo] = ACTIONS(155),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(157),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(159),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(161),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(163),
    [anon_sym_passphrase_DASHfd] = ACTIONS(165),
    [anon_sym_passphrase_DASHfile] = ACTIONS(167),
    [anon_sym_passphrase] = ACTIONS(169),
    [anon_sym_pinentry_DASHmode] = ACTIONS(171),
    [anon_sym_request_DASHorigin] = ACTIONS(173),
    [anon_sym_command_DASHfd] = ACTIONS(175),
    [anon_sym_command_DASHfile] = ACTIONS(177),
    [anon_sym_weak_DASHdigest] = ACTIONS(179),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(181),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(183),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(185),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(187),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(189),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(191),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(193),
    [anon_sym_chuid] = ACTIONS(195),
    [sym_comment] = ACTIONS(197),
    [sym__space] = ACTIONS(199),
  },
  [2] = {
    [sym_option] = STATE(170),
    [sym__unknown_option] = STATE(246),
    [sym__default_key] = STATE(246),
    [sym__list_options] = STATE(246),
    [sym__verify_options] = STATE(246),
    [sym__photo_viewer] = STATE(246),
    [sym__exec_path] = STATE(246),
    [sym__keyring] = STATE(246),
    [sym__primary_keyring] = STATE(246),
    [sym__trustdb_name] = STATE(246),
    [sym__display_charset] = STATE(246),
    [sym__compress_level] = STATE(246),
    [sym__bzip2_compress_level] = STATE(246),
    [sym__default_cert_level] = STATE(246),
    [sym__min_cert_level] = STATE(246),
    [sym__trusted_key] = STATE(246),
    [sym__add_desig_revoker] = STATE(246),
    [sym__trust_model] = STATE(246),
    [sym__assert_signer] = STATE(246),
    [sym__auto_key_locate] = STATE(168),
    [sym__keyid_format] = STATE(246),
    [sym__keyserver] = STATE(246),
    [sym__completes_needed] = STATE(246),
    [sym__marginals_needed] = STATE(246),
    [sym__tofu_default_policy] = STATE(246),
    [sym__max_cert_depth] = STATE(246),
    [sym__agent_program] = STATE(246),
    [sym__dirmngr_program] = STATE(246),
    [sym__limit_card_insert_tries] = STATE(246),
    [sym__recipient] = STATE(246),
    [sym__hidden_recipient] = STATE(246),
    [sym__recipient_file] = STATE(246),
    [sym__hidden_recipient_file] = STATE(246),
    [sym__encrypt_to] = STATE(246),
    [sym__hidden_encrypt_to] = STATE(246),
    [sym__group] = STATE(167),
    [sym__ungroup] = STATE(246),
    [sym__local_user] = STATE(246),
    [sym__sender] = STATE(246),
    [sym__try_secret_name] = STATE(246),
    [sym__output] = STATE(246),
    [sym__max_output] = STATE(246),
    [sym__chunk_size] = STATE(246),
    [sym__input_size_hint] = STATE(246),
    [sym__key_origin] = STATE(246),
    [sym__import_options] = STATE(246),
    [sym__export_options] = STATE(246),
    [sym__personal_cipher_preferences] = STATE(246),
    [sym__personal_digest_preferences] = STATE(246),
    [sym__personal_compress_preferences] = STATE(246),
    [sym__s2k_cipher_algo] = STATE(246),
    [sym__s2k_digest_algo] = STATE(246),
    [sym__s2k_mode] = STATE(246),
    [sym__s2k_count] = STATE(246),
    [sym__compliance] = STATE(246),
    [sym__min_rsa_length] = STATE(246),
    [sym__debug_level] = STATE(246),
    [sym__debug] = STATE(246),
    [sym__debug_set_iobuf_size] = STATE(246),
    [sym__faked_system_time] = STATE(246),
    [sym__status_fd] = STATE(246),
    [sym__status_file] = STATE(246),
    [sym__logger_fd] = STATE(246),
    [sym__logger_file] = STATE(246),
    [sym__comment] = STATE(246),
    [sym__known_notation] = STATE(246),
    [sym__sig_policy_url] = STATE(246),
    [sym__cert_policy_url] = STATE(246),
    [sym__set_policy_url] = STATE(246),
    [sym__sig_keyserver_url] = STATE(246),
    [sym__set_filename] = STATE(246),
    [sym__cipher_algo] = STATE(246),
    [sym__digest_algo] = STATE(246),
    [sym__compress_algo] = STATE(246),
    [sym__cert_digest_algo] = STATE(246),
    [sym__disable_cipher_algo] = STATE(246),
    [sym__disable_pubkey_algo] = STATE(246),
    [sym__passphrase_repeat] = STATE(246),
    [sym__passphrase_fd] = STATE(246),
    [sym__passphrase_file] = STATE(246),
    [sym__passphrase] = STATE(246),
    [sym__pinentry_mode] = STATE(246),
    [sym__request_origin] = STATE(246),
    [sym__command_fd] = STATE(246),
    [sym__command_file] = STATE(246),
    [sym__weak_digest] = STATE(246),
    [sym__override_session_key] = STATE(246),
    [sym__override_session_key_fd] = STATE(246),
    [sym__default_sig_expire] = STATE(246),
    [sym__default_cert_expire] = STATE(246),
    [sym__default_new_key_algo] = STATE(246),
    [sym__default_preference_list] = STATE(246),
    [sym__default_keyserver_url] = STATE(246),
    [sym__chuid] = STATE(246),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_config_token1] = ACTIONS(203),
    [anon_sym_default_DASHrecipient] = ACTIONS(9),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(9),
    [anon_sym_verbose] = ACTIONS(9),
    [anon_sym_no_DASHtty] = ACTIONS(9),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(9),
    [anon_sym_enable_DASHdsa2] = ACTIONS(9),
    [anon_sym_disable_DASHdsa2] = ACTIONS(9),
    [anon_sym_no_DASHcompress] = ACTIONS(9),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(9),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(9),
    [anon_sym_always_DASHtrust] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(9),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(9),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(9),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(9),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(9),
    [anon_sym_no_DASHautostart] = ACTIONS(9),
    [anon_sym_lock_DASHonce] = ACTIONS(9),
    [anon_sym_lock_DASHmultiple] = ACTIONS(9),
    [anon_sym_lock_DASHnever] = ACTIONS(9),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(9),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(9),
    [anon_sym_no_DASHgreeting] = ACTIONS(9),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(9),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(9),
    [anon_sym_require_DASHsecmem] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(9),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(9),
    [anon_sym_expert] = ACTIONS(9),
    [anon_sym_no_DASHexpert] = ACTIONS(9),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(9),
    [anon_sym_no_DASHgroups] = ACTIONS(9),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(9),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(9),
    [anon_sym_armor] = ACTIONS(9),
    [anon_sym_no_DASHarmor] = ACTIONS(9),
    [anon_sym_with_DASHcolons] = ACTIONS(9),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_with_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(9),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(9),
    [anon_sym_with_DASHkeygrip] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(9),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(9),
    [anon_sym_with_DASHsecret] = ACTIONS(9),
    [anon_sym_textmode] = ACTIONS(9),
    [anon_sym_no_DASHtextmode] = ACTIONS(9),
    [anon_sym_force_DASHocb] = ACTIONS(9),
    [anon_sym_force_DASHaead] = ACTIONS(9),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(9),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(9),
    [anon_sym_gnupg] = ACTIONS(9),
    [anon_sym_openpgp] = ACTIONS(9),
    [anon_sym_rfc4880] = ACTIONS(9),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(9),
    [anon_sym_debug_DASHiolbf] = ACTIONS(9),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(9),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(9),
    [anon_sym_full_DASHtimestrings] = ACTIONS(9),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(9),
    [anon_sym_log_DASHtime] = ACTIONS(9),
    [anon_sym_no_DASHcomments] = ACTIONS(9),
    [anon_sym_emit_DASHversion] = ACTIONS(9),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(9),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(9),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(9),
    [anon_sym_throw_DASHkeyids] = ACTIONS(9),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(9),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(9),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(9),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(9),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(9),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(9),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(9),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(9),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(9),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(9),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(9),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(9),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(9),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(9),
    [anon_sym_no_DASHkeyring] = ACTIONS(9),
    [anon_sym_skip_DASHverify] = ACTIONS(9),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(9),
    [anon_sym_list_DASHsignatures] = ACTIONS(9),
    [anon_sym_list_DASHsigs] = ACTIONS(9),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(9),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(9),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(9),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(9),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(9),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(9),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(9),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(9),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(9),
    [aux_sym__unknown_option_token1] = ACTIONS(11),
    [anon_sym_default_DASHkey] = ACTIONS(13),
    [anon_sym_list_DASHoptions] = ACTIONS(15),
    [anon_sym_verify_DASHoptions] = ACTIONS(17),
    [anon_sym_photo_DASHviewer] = ACTIONS(19),
    [anon_sym_exec_DASHpath] = ACTIONS(21),
    [anon_sym_keyring] = ACTIONS(23),
    [anon_sym_primary_DASHkeyring] = ACTIONS(25),
    [anon_sym_trustdb_DASHname] = ACTIONS(27),
    [anon_sym_display_DASHcharset] = ACTIONS(29),
    [sym__utf8_strings] = ACTIONS(9),
    [sym__no_utf8_strings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(31),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(33),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(37),
    [anon_sym_trusted_DASHkey] = ACTIONS(39),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(41),
    [anon_sym_trust_DASHmodel] = ACTIONS(43),
    [anon_sym_assert_DASHsigner] = ACTIONS(45),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(47),
    [anon_sym_keyid_DASHformat] = ACTIONS(49),
    [anon_sym_keyserver] = ACTIONS(51),
    [anon_sym_completes_DASHneeded] = ACTIONS(53),
    [anon_sym_marginals_DASHneeded] = ACTIONS(55),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(57),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(59),
    [anon_sym_agent_DASHprogram] = ACTIONS(61),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(63),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(65),
    [anon_sym_recipient] = ACTIONS(67),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(69),
    [anon_sym_recipient_DASHfile] = ACTIONS(71),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(73),
    [anon_sym_encrypt_DASHto] = ACTIONS(75),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(77),
    [anon_sym_group] = ACTIONS(79),
    [anon_sym_ungroup] = ACTIONS(81),
    [anon_sym_local_DASHuser] = ACTIONS(83),
    [anon_sym_sender] = ACTIONS(85),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(87),
    [anon_sym_output] = ACTIONS(89),
    [anon_sym_max_DASHoutput] = ACTIONS(91),
    [anon_sym_chunk_DASHsize] = ACTIONS(93),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(95),
    [anon_sym_key_DASHorigin] = ACTIONS(97),
    [anon_sym_import_DASHoptions] = ACTIONS(99),
    [anon_sym_export_DASHoptions] = ACTIONS(101),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(105),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(107),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(111),
    [anon_sym_s2k_DASHmode] = ACTIONS(113),
    [anon_sym_s2k_DASHcount] = ACTIONS(115),
    [anon_sym_compliance] = ACTIONS(117),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(119),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(123),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(125),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(127),
    [anon_sym_status_DASHfd] = ACTIONS(129),
    [anon_sym_status_DASHfile] = ACTIONS(131),
    [anon_sym_logger_DASHfd] = ACTIONS(133),
    [anon_sym_logger_DASHfile] = ACTIONS(135),
    [anon_sym_log_DASHfile] = ACTIONS(135),
    [anon_sym_comment] = ACTIONS(137),
    [anon_sym_known_DASHnotation] = ACTIONS(139),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(141),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(143),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(145),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(147),
    [anon_sym_set_DASHfilename] = ACTIONS(149),
    [anon_sym_cipher_DASHalgo] = ACTIONS(151),
    [anon_sym_digest_DASHalgo] = ACTIONS(153),
    [anon_sym_compress_DASHalgo] = ACTIONS(155),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(157),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(159),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(161),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(163),
    [anon_sym_passphrase_DASHfd] = ACTIONS(165),
    [anon_sym_passphrase_DASHfile] = ACTIONS(167),
    [anon_sym_passphrase] = ACTIONS(169),
    [anon_sym_pinentry_DASHmode] = ACTIONS(171),
    [anon_sym_request_DASHorigin] = ACTIONS(173),
    [anon_sym_command_DASHfd] = ACTIONS(175),
    [anon_sym_command_DASHfile] = ACTIONS(177),
    [anon_sym_weak_DASHdigest] = ACTIONS(179),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(181),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(183),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(185),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(187),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(189),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(191),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(193),
    [anon_sym_chuid] = ACTIONS(195),
    [sym_comment] = ACTIONS(197),
    [sym__space] = ACTIONS(199),
  },
  [3] = {
    [sym_option] = STATE(170),
    [sym__unknown_option] = STATE(246),
    [sym__default_key] = STATE(246),
    [sym__list_options] = STATE(246),
    [sym__verify_options] = STATE(246),
    [sym__photo_viewer] = STATE(246),
    [sym__exec_path] = STATE(246),
    [sym__keyring] = STATE(246),
    [sym__primary_keyring] = STATE(246),
    [sym__trustdb_name] = STATE(246),
    [sym__display_charset] = STATE(246),
    [sym__compress_level] = STATE(246),
    [sym__bzip2_compress_level] = STATE(246),
    [sym__default_cert_level] = STATE(246),
    [sym__min_cert_level] = STATE(246),
    [sym__trusted_key] = STATE(246),
    [sym__add_desig_revoker] = STATE(246),
    [sym__trust_model] = STATE(246),
    [sym__assert_signer] = STATE(246),
    [sym__auto_key_locate] = STATE(168),
    [sym__keyid_format] = STATE(246),
    [sym__keyserver] = STATE(246),
    [sym__completes_needed] = STATE(246),
    [sym__marginals_needed] = STATE(246),
    [sym__tofu_default_policy] = STATE(246),
    [sym__max_cert_depth] = STATE(246),
    [sym__agent_program] = STATE(246),
    [sym__dirmngr_program] = STATE(246),
    [sym__limit_card_insert_tries] = STATE(246),
    [sym__recipient] = STATE(246),
    [sym__hidden_recipient] = STATE(246),
    [sym__recipient_file] = STATE(246),
    [sym__hidden_recipient_file] = STATE(246),
    [sym__encrypt_to] = STATE(246),
    [sym__hidden_encrypt_to] = STATE(246),
    [sym__group] = STATE(167),
    [sym__ungroup] = STATE(246),
    [sym__local_user] = STATE(246),
    [sym__sender] = STATE(246),
    [sym__try_secret_name] = STATE(246),
    [sym__output] = STATE(246),
    [sym__max_output] = STATE(246),
    [sym__chunk_size] = STATE(246),
    [sym__input_size_hint] = STATE(246),
    [sym__key_origin] = STATE(246),
    [sym__import_options] = STATE(246),
    [sym__export_options] = STATE(246),
    [sym__personal_cipher_preferences] = STATE(246),
    [sym__personal_digest_preferences] = STATE(246),
    [sym__personal_compress_preferences] = STATE(246),
    [sym__s2k_cipher_algo] = STATE(246),
    [sym__s2k_digest_algo] = STATE(246),
    [sym__s2k_mode] = STATE(246),
    [sym__s2k_count] = STATE(246),
    [sym__compliance] = STATE(246),
    [sym__min_rsa_length] = STATE(246),
    [sym__debug_level] = STATE(246),
    [sym__debug] = STATE(246),
    [sym__debug_set_iobuf_size] = STATE(246),
    [sym__faked_system_time] = STATE(246),
    [sym__status_fd] = STATE(246),
    [sym__status_file] = STATE(246),
    [sym__logger_fd] = STATE(246),
    [sym__logger_file] = STATE(246),
    [sym__comment] = STATE(246),
    [sym__known_notation] = STATE(246),
    [sym__sig_policy_url] = STATE(246),
    [sym__cert_policy_url] = STATE(246),
    [sym__set_policy_url] = STATE(246),
    [sym__sig_keyserver_url] = STATE(246),
    [sym__set_filename] = STATE(246),
    [sym__cipher_algo] = STATE(246),
    [sym__digest_algo] = STATE(246),
    [sym__compress_algo] = STATE(246),
    [sym__cert_digest_algo] = STATE(246),
    [sym__disable_cipher_algo] = STATE(246),
    [sym__disable_pubkey_algo] = STATE(246),
    [sym__passphrase_repeat] = STATE(246),
    [sym__passphrase_fd] = STATE(246),
    [sym__passphrase_file] = STATE(246),
    [sym__passphrase] = STATE(246),
    [sym__pinentry_mode] = STATE(246),
    [sym__request_origin] = STATE(246),
    [sym__command_fd] = STATE(246),
    [sym__command_file] = STATE(246),
    [sym__weak_digest] = STATE(246),
    [sym__override_session_key] = STATE(246),
    [sym__override_session_key_fd] = STATE(246),
    [sym__default_sig_expire] = STATE(246),
    [sym__default_cert_expire] = STATE(246),
    [sym__default_new_key_algo] = STATE(246),
    [sym__default_preference_list] = STATE(246),
    [sym__default_keyserver_url] = STATE(246),
    [sym__chuid] = STATE(246),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_config_token1] = ACTIONS(207),
    [anon_sym_default_DASHrecipient] = ACTIONS(210),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(210),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(210),
    [anon_sym_verbose] = ACTIONS(210),
    [anon_sym_no_DASHtty] = ACTIONS(210),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(210),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(210),
    [anon_sym_enable_DASHdsa2] = ACTIONS(210),
    [anon_sym_disable_DASHdsa2] = ACTIONS(210),
    [anon_sym_no_DASHcompress] = ACTIONS(210),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(210),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(210),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(210),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(210),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(210),
    [anon_sym_always_DASHtrust] = ACTIONS(210),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(210),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(210),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(210),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(210),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(210),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(210),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(210),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(210),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(210),
    [anon_sym_no_DASHautostart] = ACTIONS(210),
    [anon_sym_lock_DASHonce] = ACTIONS(210),
    [anon_sym_lock_DASHmultiple] = ACTIONS(210),
    [anon_sym_lock_DASHnever] = ACTIONS(210),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(210),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(210),
    [anon_sym_no_DASHgreeting] = ACTIONS(210),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(210),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(210),
    [anon_sym_require_DASHsecmem] = ACTIONS(210),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(210),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(210),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(210),
    [anon_sym_expert] = ACTIONS(210),
    [anon_sym_no_DASHexpert] = ACTIONS(210),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(210),
    [anon_sym_no_DASHgroups] = ACTIONS(210),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(210),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(210),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(210),
    [anon_sym_armor] = ACTIONS(210),
    [anon_sym_no_DASHarmor] = ACTIONS(210),
    [anon_sym_with_DASHcolons] = ACTIONS(210),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(210),
    [anon_sym_with_DASHfingerprint] = ACTIONS(210),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(210),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(210),
    [anon_sym_with_DASHkeygrip] = ACTIONS(210),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(210),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(210),
    [anon_sym_with_DASHsecret] = ACTIONS(210),
    [anon_sym_textmode] = ACTIONS(210),
    [anon_sym_no_DASHtextmode] = ACTIONS(210),
    [anon_sym_force_DASHocb] = ACTIONS(210),
    [anon_sym_force_DASHaead] = ACTIONS(210),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(210),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(210),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(210),
    [anon_sym_gnupg] = ACTIONS(210),
    [anon_sym_openpgp] = ACTIONS(210),
    [anon_sym_rfc4880] = ACTIONS(210),
    [anon_sym_rfc4880bis] = ACTIONS(210),
    [anon_sym_rfc2440] = ACTIONS(210),
    [anon_sym_pgp7] = ACTIONS(210),
    [anon_sym_pgp8] = ACTIONS(210),
    [anon_sym_list_DASHonly] = ACTIONS(210),
    [anon_sym_interactive] = ACTIONS(210),
    [anon_sym_debug_DASHall] = ACTIONS(210),
    [anon_sym_debug_DASHiolbf] = ACTIONS(210),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(210),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(210),
    [anon_sym_full_DASHtimestrings] = ACTIONS(210),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(210),
    [anon_sym_log_DASHtime] = ACTIONS(210),
    [anon_sym_no_DASHcomments] = ACTIONS(210),
    [anon_sym_emit_DASHversion] = ACTIONS(210),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(210),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(210),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(210),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(210),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(210),
    [anon_sym_throw_DASHkeyids] = ACTIONS(210),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(210),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(210),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(210),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(210),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(210),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(210),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(210),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(210),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(210),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(210),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(210),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(210),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(210),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(210),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(210),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(210),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(210),
    [anon_sym_no_DASHkeyring] = ACTIONS(210),
    [anon_sym_skip_DASHverify] = ACTIONS(210),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(210),
    [anon_sym_list_DASHsignatures] = ACTIONS(210),
    [anon_sym_list_DASHsigs] = ACTIONS(210),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(210),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(210),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(210),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(210),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(210),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(210),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(210),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(210),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(210),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(210),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(210),
    [aux_sym__unknown_option_token1] = ACTIONS(213),
    [anon_sym_default_DASHkey] = ACTIONS(216),
    [anon_sym_list_DASHoptions] = ACTIONS(219),
    [anon_sym_verify_DASHoptions] = ACTIONS(222),
    [anon_sym_photo_DASHviewer] = ACTIONS(225),
    [anon_sym_exec_DASHpath] = ACTIONS(228),
    [anon_sym_keyring] = ACTIONS(231),
    [anon_sym_primary_DASHkeyring] = ACTIONS(234),
    [anon_sym_trustdb_DASHname] = ACTIONS(237),
    [anon_sym_display_DASHcharset] = ACTIONS(240),
    [sym__utf8_strings] = ACTIONS(210),
    [sym__no_utf8_strings] = ACTIONS(210),
    [anon_sym_compress_DASHlevel] = ACTIONS(243),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(246),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(249),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(252),
    [anon_sym_trusted_DASHkey] = ACTIONS(255),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(258),
    [anon_sym_trust_DASHmodel] = ACTIONS(261),
    [anon_sym_assert_DASHsigner] = ACTIONS(264),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(267),
    [anon_sym_keyid_DASHformat] = ACTIONS(270),
    [anon_sym_keyserver] = ACTIONS(273),
    [anon_sym_completes_DASHneeded] = ACTIONS(276),
    [anon_sym_marginals_DASHneeded] = ACTIONS(279),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(282),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(285),
    [anon_sym_agent_DASHprogram] = ACTIONS(288),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(291),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(294),
    [anon_sym_recipient] = ACTIONS(297),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(300),
    [anon_sym_recipient_DASHfile] = ACTIONS(303),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(306),
    [anon_sym_encrypt_DASHto] = ACTIONS(309),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(312),
    [anon_sym_group] = ACTIONS(315),
    [anon_sym_ungroup] = ACTIONS(318),
    [anon_sym_local_DASHuser] = ACTIONS(321),
    [anon_sym_sender] = ACTIONS(324),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(327),
    [anon_sym_output] = ACTIONS(330),
    [anon_sym_max_DASHoutput] = ACTIONS(333),
    [anon_sym_chunk_DASHsize] = ACTIONS(336),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(339),
    [anon_sym_key_DASHorigin] = ACTIONS(342),
    [anon_sym_import_DASHoptions] = ACTIONS(345),
    [anon_sym_export_DASHoptions] = ACTIONS(348),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(351),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(354),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(357),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(360),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(363),
    [anon_sym_s2k_DASHmode] = ACTIONS(366),
    [anon_sym_s2k_DASHcount] = ACTIONS(369),
    [anon_sym_compliance] = ACTIONS(372),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(375),
    [sym__require_compliance] = ACTIONS(210),
    [anon_sym_debug_DASHlevel] = ACTIONS(378),
    [anon_sym_debug] = ACTIONS(381),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(384),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(387),
    [anon_sym_status_DASHfd] = ACTIONS(390),
    [anon_sym_status_DASHfile] = ACTIONS(393),
    [anon_sym_logger_DASHfd] = ACTIONS(396),
    [anon_sym_logger_DASHfile] = ACTIONS(399),
    [anon_sym_log_DASHfile] = ACTIONS(399),
    [anon_sym_comment] = ACTIONS(402),
    [anon_sym_known_DASHnotation] = ACTIONS(405),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(408),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(411),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(414),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(417),
    [anon_sym_set_DASHfilename] = ACTIONS(420),
    [anon_sym_cipher_DASHalgo] = ACTIONS(423),
    [anon_sym_digest_DASHalgo] = ACTIONS(426),
    [anon_sym_compress_DASHalgo] = ACTIONS(429),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(432),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(435),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(438),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(441),
    [anon_sym_passphrase_DASHfd] = ACTIONS(444),
    [anon_sym_passphrase_DASHfile] = ACTIONS(447),
    [anon_sym_passphrase] = ACTIONS(450),
    [anon_sym_pinentry_DASHmode] = ACTIONS(453),
    [anon_sym_request_DASHorigin] = ACTIONS(456),
    [anon_sym_command_DASHfd] = ACTIONS(459),
    [anon_sym_command_DASHfile] = ACTIONS(462),
    [anon_sym_weak_DASHdigest] = ACTIONS(465),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(468),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(471),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(474),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(477),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(480),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(483),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(486),
    [anon_sym_chuid] = ACTIONS(489),
    [sym_comment] = ACTIONS(492),
    [sym__space] = ACTIONS(199),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_config_token1] = ACTIONS(205),
    [anon_sym_default_DASHrecipient] = ACTIONS(495),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(495),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(495),
    [anon_sym_verbose] = ACTIONS(495),
    [anon_sym_no_DASHtty] = ACTIONS(495),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(495),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(495),
    [anon_sym_enable_DASHdsa2] = ACTIONS(495),
    [anon_sym_disable_DASHdsa2] = ACTIONS(495),
    [anon_sym_no_DASHcompress] = ACTIONS(495),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(495),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(495),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(495),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(495),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(495),
    [anon_sym_always_DASHtrust] = ACTIONS(495),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(495),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(495),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(495),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(495),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(495),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(495),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(495),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(495),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(495),
    [anon_sym_no_DASHautostart] = ACTIONS(495),
    [anon_sym_lock_DASHonce] = ACTIONS(495),
    [anon_sym_lock_DASHmultiple] = ACTIONS(495),
    [anon_sym_lock_DASHnever] = ACTIONS(495),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(495),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(495),
    [anon_sym_no_DASHgreeting] = ACTIONS(495),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(495),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(495),
    [anon_sym_require_DASHsecmem] = ACTIONS(495),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(495),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(495),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(495),
    [anon_sym_expert] = ACTIONS(495),
    [anon_sym_no_DASHexpert] = ACTIONS(495),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(495),
    [anon_sym_no_DASHgroups] = ACTIONS(495),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(495),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(495),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(495),
    [anon_sym_armor] = ACTIONS(495),
    [anon_sym_no_DASHarmor] = ACTIONS(495),
    [anon_sym_with_DASHcolons] = ACTIONS(495),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(495),
    [anon_sym_with_DASHfingerprint] = ACTIONS(495),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(495),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(495),
    [anon_sym_with_DASHkeygrip] = ACTIONS(495),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(495),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(495),
    [anon_sym_with_DASHsecret] = ACTIONS(495),
    [anon_sym_textmode] = ACTIONS(495),
    [anon_sym_no_DASHtextmode] = ACTIONS(495),
    [anon_sym_force_DASHocb] = ACTIONS(495),
    [anon_sym_force_DASHaead] = ACTIONS(495),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(495),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(495),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(495),
    [anon_sym_gnupg] = ACTIONS(495),
    [anon_sym_openpgp] = ACTIONS(495),
    [anon_sym_rfc4880] = ACTIONS(495),
    [anon_sym_rfc4880bis] = ACTIONS(495),
    [anon_sym_rfc2440] = ACTIONS(495),
    [anon_sym_pgp7] = ACTIONS(495),
    [anon_sym_pgp8] = ACTIONS(495),
    [anon_sym_list_DASHonly] = ACTIONS(495),
    [anon_sym_interactive] = ACTIONS(495),
    [anon_sym_debug_DASHall] = ACTIONS(495),
    [anon_sym_debug_DASHiolbf] = ACTIONS(495),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(495),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(495),
    [anon_sym_full_DASHtimestrings] = ACTIONS(495),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(495),
    [anon_sym_log_DASHtime] = ACTIONS(495),
    [anon_sym_no_DASHcomments] = ACTIONS(495),
    [anon_sym_emit_DASHversion] = ACTIONS(495),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(495),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(495),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(495),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(495),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(495),
    [anon_sym_throw_DASHkeyids] = ACTIONS(495),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(495),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(495),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(495),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(495),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(495),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(495),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(495),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(495),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(495),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(495),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(495),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(495),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(495),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(495),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(495),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(495),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(495),
    [anon_sym_no_DASHkeyring] = ACTIONS(495),
    [anon_sym_skip_DASHverify] = ACTIONS(495),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(495),
    [anon_sym_list_DASHsignatures] = ACTIONS(495),
    [anon_sym_list_DASHsigs] = ACTIONS(495),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(495),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(495),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(495),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(495),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(495),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(495),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(495),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(495),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(495),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(495),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(495),
    [aux_sym__unknown_option_token1] = ACTIONS(495),
    [anon_sym_default_DASHkey] = ACTIONS(495),
    [anon_sym_list_DASHoptions] = ACTIONS(495),
    [anon_sym_verify_DASHoptions] = ACTIONS(495),
    [anon_sym_photo_DASHviewer] = ACTIONS(495),
    [anon_sym_exec_DASHpath] = ACTIONS(495),
    [anon_sym_keyring] = ACTIONS(495),
    [anon_sym_primary_DASHkeyring] = ACTIONS(495),
    [anon_sym_trustdb_DASHname] = ACTIONS(495),
    [anon_sym_display_DASHcharset] = ACTIONS(495),
    [sym__utf8_strings] = ACTIONS(495),
    [sym__no_utf8_strings] = ACTIONS(495),
    [anon_sym_compress_DASHlevel] = ACTIONS(495),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(495),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(495),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(495),
    [anon_sym_trusted_DASHkey] = ACTIONS(495),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(495),
    [anon_sym_trust_DASHmodel] = ACTIONS(495),
    [anon_sym_assert_DASHsigner] = ACTIONS(495),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(495),
    [anon_sym_keyid_DASHformat] = ACTIONS(495),
    [anon_sym_keyserver] = ACTIONS(495),
    [anon_sym_completes_DASHneeded] = ACTIONS(495),
    [anon_sym_marginals_DASHneeded] = ACTIONS(495),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(495),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(495),
    [anon_sym_agent_DASHprogram] = ACTIONS(495),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(495),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(495),
    [anon_sym_recipient] = ACTIONS(495),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(495),
    [anon_sym_recipient_DASHfile] = ACTIONS(495),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(495),
    [anon_sym_encrypt_DASHto] = ACTIONS(495),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(495),
    [anon_sym_group] = ACTIONS(495),
    [anon_sym_ungroup] = ACTIONS(495),
    [anon_sym_local_DASHuser] = ACTIONS(495),
    [anon_sym_sender] = ACTIONS(495),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(495),
    [anon_sym_output] = ACTIONS(495),
    [anon_sym_max_DASHoutput] = ACTIONS(495),
    [anon_sym_chunk_DASHsize] = ACTIONS(495),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(495),
    [anon_sym_key_DASHorigin] = ACTIONS(495),
    [anon_sym_import_DASHoptions] = ACTIONS(495),
    [anon_sym_export_DASHoptions] = ACTIONS(495),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(495),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(495),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(495),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(495),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(495),
    [anon_sym_s2k_DASHmode] = ACTIONS(495),
    [anon_sym_s2k_DASHcount] = ACTIONS(495),
    [anon_sym_compliance] = ACTIONS(495),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(495),
    [sym__require_compliance] = ACTIONS(495),
    [anon_sym_debug_DASHlevel] = ACTIONS(495),
    [anon_sym_debug] = ACTIONS(495),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(495),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(495),
    [anon_sym_status_DASHfd] = ACTIONS(495),
    [anon_sym_status_DASHfile] = ACTIONS(495),
    [anon_sym_logger_DASHfd] = ACTIONS(495),
    [anon_sym_logger_DASHfile] = ACTIONS(495),
    [anon_sym_log_DASHfile] = ACTIONS(495),
    [anon_sym_comment] = ACTIONS(495),
    [anon_sym_known_DASHnotation] = ACTIONS(495),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(495),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(495),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(495),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(495),
    [anon_sym_set_DASHfilename] = ACTIONS(495),
    [anon_sym_cipher_DASHalgo] = ACTIONS(495),
    [anon_sym_digest_DASHalgo] = ACTIONS(495),
    [anon_sym_compress_DASHalgo] = ACTIONS(495),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(495),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(495),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(495),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(495),
    [anon_sym_passphrase_DASHfd] = ACTIONS(495),
    [anon_sym_passphrase_DASHfile] = ACTIONS(495),
    [anon_sym_passphrase] = ACTIONS(495),
    [anon_sym_pinentry_DASHmode] = ACTIONS(495),
    [anon_sym_request_DASHorigin] = ACTIONS(495),
    [anon_sym_command_DASHfd] = ACTIONS(495),
    [anon_sym_command_DASHfile] = ACTIONS(495),
    [anon_sym_weak_DASHdigest] = ACTIONS(495),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(495),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(495),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(495),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(495),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(495),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(495),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(495),
    [anon_sym_chuid] = ACTIONS(495),
    [sym_comment] = ACTIONS(205),
    [sym__space] = ACTIONS(199),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(497), 1,
      aux_sym__command_token1,
    ACTIONS(499), 1,
      anon_sym_DQUOTE,
    ACTIONS(501), 1,
      anon_sym_SQUOTE,
    ACTIONS(503), 1,
      aux_sym__command_format_token1,
    STATE(202), 1,
      sym__command,
    STATE(19), 2,
      sym__command_format,
      aux_sym__command_repeat1,
  [23] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      aux_sym__command_token2,
    ACTIONS(510), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(6), 2,
      sym__command_format,
      aux_sym__command_repeat2,
  [41] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(513), 1,
      anon_sym_DQUOTE,
    ACTIONS(515), 1,
      aux_sym__command_token2,
    ACTIONS(517), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(6), 2,
      sym__command_format,
      aux_sym__command_repeat2,
  [59] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
    ACTIONS(521), 1,
      aux_sym__command_token3,
    ACTIONS(519), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(9), 2,
      sym__command_format,
      aux_sym__command_repeat3,
  [77] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
    ACTIONS(528), 1,
      aux_sym__command_token3,
    ACTIONS(523), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(9), 2,
      sym__command_format,
      aux_sym__command_repeat3,
  [95] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(531), 1,
      aux_sym_config_token1,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [114] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(537), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [133] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(539), 1,
      anon_sym_BANG,
    STATE(22), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [152] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(541), 1,
      anon_sym_BANG,
    STATE(10), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [171] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(543), 1,
      anon_sym_BANG,
    STATE(23), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [190] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(545), 1,
      anon_sym_BANG,
    STATE(24), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [209] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(551), 1,
      sym_number,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(206), 1,
      sym_string,
  [228] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(555), 1,
      aux_sym__command_token2,
    ACTIONS(557), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(7), 2,
      sym__command_format,
      aux_sym__command_repeat2,
  [243] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(561), 1,
      aux_sym__command_token3,
    ACTIONS(559), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
    STATE(8), 2,
      sym__command_format,
      aux_sym__command_repeat3,
  [258] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(563), 1,
      aux_sym_config_token1,
    ACTIONS(565), 1,
      aux_sym__command_token1,
    ACTIONS(567), 1,
      aux_sym__command_format_token1,
    STATE(28), 2,
      sym__command_format,
      aux_sym__command_repeat1,
  [275] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(569), 1,
      aux_sym_config_token1,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      sym__key_locate_value,
    ACTIONS(575), 1,
      sym_url,
    STATE(29), 1,
      aux_sym__auto_key_locate_repeat1,
  [294] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(577), 1,
      aux_sym_config_token1,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      sym__key_locate_value,
    ACTIONS(585), 1,
      sym_url,
    STATE(21), 1,
      aux_sym__auto_key_locate_repeat1,
  [313] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(588), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [332] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(590), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [351] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(592), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [370] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(594), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [389] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(596), 1,
      aux_sym_config_token1,
    ACTIONS(598), 1,
      aux_sym__command_token1,
    ACTIONS(601), 1,
      aux_sym__notation_format_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [408] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(604), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [427] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(606), 1,
      aux_sym_config_token1,
    ACTIONS(608), 1,
      aux_sym__command_token1,
    ACTIONS(611), 1,
      aux_sym__command_format_token1,
    STATE(28), 2,
      sym__command_format,
      aux_sym__command_repeat1,
  [444] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      sym__key_locate_value,
    ACTIONS(575), 1,
      sym_url,
    ACTIONS(614), 1,
      aux_sym_config_token1,
    STATE(21), 1,
      aux_sym__auto_key_locate_repeat1,
  [463] = 6,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    ACTIONS(616), 1,
      aux_sym_config_token1,
    STATE(26), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [482] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(618), 1,
      aux_sym_config_token1,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      sym__cipher_algo_value,
    STATE(96), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [498] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(262), 1,
      sym_string,
  [514] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(229), 1,
      sym_string,
  [530] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(228), 1,
      sym_string,
  [546] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(624), 1,
      aux_sym_config_token1,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      sym__new_key_algo,
    STATE(54), 1,
      aux_sym__default_new_key_algo_repeat1,
  [562] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(232), 1,
      sym_string,
  [578] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(630), 1,
      aux_sym_config_token1,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      sym__debug_flag_value,
    STATE(88), 1,
      aux_sym__debug_repeat1,
  [594] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(233), 1,
      sym_string,
  [610] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(636), 1,
      aux_sym_config_token1,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      sym__compression_algo_value,
    STATE(87), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [626] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(234), 1,
      sym_string,
  [642] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(642), 1,
      aux_sym_config_token1,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      sym__hash_algo_value,
    STATE(43), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [658] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(235), 1,
      sym_string,
  [674] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(648), 1,
      aux_sym_config_token1,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      sym__hash_algo_value,
    STATE(43), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [690] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(236), 1,
      sym_string,
  [706] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(656), 1,
      aux_sym_config_token1,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      sym__export_parameter,
    STATE(97), 1,
      aux_sym__export_options_repeat1,
  [722] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(237), 1,
      sym_string,
  [738] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(662), 1,
      aux_sym_config_token1,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      sym__import_parameter,
    STATE(89), 1,
      aux_sym__import_options_repeat1,
  [754] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(220), 1,
      sym_string,
  [770] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(180), 1,
      sym_string,
  [786] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(670), 1,
      sym__key_locate_value,
    ACTIONS(668), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [798] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      sym_string,
  [814] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(672), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(676), 1,
      aux_sym__command_token3,
    STATE(78), 1,
      aux_sym_string_repeat2,
  [830] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    ACTIONS(678), 1,
      aux_sym__command_token2,
    ACTIONS(680), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(70), 1,
      aux_sym_string_repeat1,
  [846] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(682), 1,
      aux_sym_config_token1,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    ACTIONS(687), 1,
      sym__new_key_algo,
    STATE(54), 1,
      aux_sym__default_new_key_algo_repeat1,
  [862] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(690), 1,
      aux_sym_config_token1,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      sym__verify_parameter,
    STATE(63), 1,
      aux_sym__verify_options_repeat1,
  [878] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(239), 1,
      sym_string,
  [894] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(696), 1,
      aux_sym_config_token1,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      sym__list_parameter,
    STATE(69), 1,
      aux_sym__list_options_repeat1,
  [910] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(240), 1,
      sym_string,
  [926] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      sym__new_key_algo,
    ACTIONS(702), 1,
      aux_sym_config_token1,
    STATE(35), 1,
      aux_sym__default_new_key_algo_repeat1,
  [942] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(241), 1,
      sym_string,
  [958] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(242), 1,
      sym_string,
  [974] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    STATE(30), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [990] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(704), 1,
      aux_sym_config_token1,
    ACTIONS(706), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      sym__verify_parameter,
    STATE(63), 1,
      aux_sym__verify_options_repeat1,
  [1006] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    STATE(27), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [1022] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(231), 1,
      sym_string,
  [1038] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    STATE(25), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [1054] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(210), 1,
      sym_string,
  [1070] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(533), 1,
      aux_sym__command_token1,
    ACTIONS(535), 1,
      aux_sym__notation_format_token1,
    STATE(11), 1,
      aux_sym__formatted_url,
    STATE(102), 1,
      sym__notation_format,
  [1086] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(712), 1,
      aux_sym_config_token1,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      sym__list_parameter,
    STATE(69), 1,
      aux_sym__list_options_repeat1,
  [1102] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    ACTIONS(722), 1,
      aux_sym__command_token2,
    ACTIONS(725), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(70), 1,
      aux_sym_string_repeat1,
  [1118] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      sym__debug_flag_value,
    ACTIONS(728), 1,
      aux_sym_config_token1,
    STATE(37), 1,
      aux_sym__debug_repeat1,
  [1134] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(638), 1,
      anon_sym_COMMA,
    ACTIONS(640), 1,
      sym__compression_algo_value,
    ACTIONS(730), 1,
      aux_sym_config_token1,
    STATE(39), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [1150] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    ACTIONS(646), 1,
      sym__hash_algo_value,
    ACTIONS(732), 1,
      aux_sym_config_token1,
    STATE(41), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [1166] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(620), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      sym__cipher_algo_value,
    ACTIONS(734), 1,
      aux_sym_config_token1,
    STATE(31), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [1182] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      sym__export_parameter,
    ACTIONS(736), 1,
      aux_sym_config_token1,
    STATE(45), 1,
      aux_sym__export_options_repeat1,
  [1198] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    ACTIONS(666), 1,
      sym__import_parameter,
    ACTIONS(738), 1,
      aux_sym_config_token1,
    STATE(47), 1,
      aux_sym__import_options_repeat1,
  [1214] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(209), 1,
      sym_string,
  [1230] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(740), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(743), 1,
      anon_sym_SQUOTE,
    ACTIONS(745), 1,
      aux_sym__command_token3,
    STATE(78), 1,
      aux_sym_string_repeat2,
  [1246] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(208), 1,
      sym_string,
  [1262] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(207), 1,
      sym_string,
  [1278] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(264), 1,
      sym_string,
  [1294] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(750), 1,
      sym__key_locate_value,
    ACTIONS(748), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [1306] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(265), 1,
      sym_string,
  [1322] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(266), 1,
      sym_string,
  [1338] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(692), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      sym__verify_parameter,
    ACTIONS(752), 1,
      aux_sym_config_token1,
    STATE(55), 1,
      aux_sym__verify_options_repeat1,
  [1354] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      sym__list_parameter,
    ACTIONS(754), 1,
      aux_sym_config_token1,
    STATE(57), 1,
      aux_sym__list_options_repeat1,
  [1370] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(756), 1,
      aux_sym_config_token1,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      sym__compression_algo_value,
    STATE(87), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [1386] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(764), 1,
      aux_sym_config_token1,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(769), 1,
      sym__debug_flag_value,
    STATE(88), 1,
      aux_sym__debug_repeat1,
  [1402] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(772), 1,
      aux_sym_config_token1,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(777), 1,
      sym__import_parameter,
    STATE(89), 1,
      aux_sym__import_options_repeat1,
  [1418] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(247), 1,
      sym_string,
  [1434] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(205), 1,
      sym_string,
  [1450] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(280), 1,
      sym_string,
  [1466] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(276), 1,
      sym_string,
  [1482] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(275), 1,
      sym_string,
  [1498] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
    ACTIONS(553), 1,
      aux_sym_string_token1,
    STATE(267), 1,
      sym_string,
  [1514] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(780), 1,
      aux_sym_config_token1,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      sym__cipher_algo_value,
    STATE(96), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [1530] = 5,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(788), 1,
      aux_sym_config_token1,
    ACTIONS(790), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      sym__export_parameter,
    STATE(97), 1,
      aux_sym__export_options_repeat1,
  [1546] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(796), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo_value,
  [1555] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(798), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1564] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(800), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__debug_flag_value,
  [1573] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(802), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1582] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(806), 1,
      aux_sym__command_token1,
    ACTIONS(804), 2,
      aux_sym_config_token1,
      aux_sym__notation_format_token1,
  [1593] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(808), 1,
      aux_sym__command_token2,
    ACTIONS(810), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(53), 1,
      aux_sym_string_repeat1,
  [1606] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(812), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1615] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(814), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__new_key_algo,
  [1624] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(816), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(818), 1,
      aux_sym__command_token3,
    STATE(52), 1,
      aux_sym_string_repeat2,
  [1637] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(820), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1646] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(822), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__new_key_algo,
  [1655] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(824), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__debug_flag_value,
  [1664] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(826), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo_value,
  [1673] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(828), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo_value,
  [1682] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(830), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1691] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(832), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo_value,
  [1700] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(834), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1709] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(836), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1718] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(838), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(840), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [1729] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(842), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo_value,
  [1738] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(844), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo_value,
  [1747] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(846), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1756] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(848), 1,
      sym__key_locate_value,
    ACTIONS(850), 1,
      sym_url,
  [1766] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(852), 1,
      sym__key_locate_value,
    ACTIONS(854), 1,
      sym_url,
  [1776] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(856), 1,
      aux_sym__debug_token1,
    ACTIONS(858), 1,
      sym__debug_flag_value,
  [1786] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(860), 1,
      sym_number,
    ACTIONS(862), 1,
      sym_iso_time,
  [1796] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(864), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1804] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(866), 1,
      aux_sym_config_token1,
    ACTIONS(868), 1,
      anon_sym_COMMA,
  [1814] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(870), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1822] = 3,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(872), 1,
      aux_sym_config_token1,
    ACTIONS(874), 1,
      anon_sym_BANG,
  [1832] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(876), 1,
      aux_sym_config_token1,
  [1839] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(878), 1,
      sym__list_parameter,
  [1846] = 2,
    ACTIONS(880), 1,
      aux_sym_config_token1,
    ACTIONS(882), 1,
      sym__space,
  [1853] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(884), 1,
      sym_number,
  [1860] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(886), 1,
      sym__tofu_policy_value,
  [1867] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(888), 1,
      sym_number,
  [1874] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(890), 1,
      sym_number,
  [1881] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(892), 1,
      sym_url,
  [1888] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(894), 1,
      sym__keyid_format_value,
  [1895] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(896), 1,
      sym__model,
  [1902] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(898), 1,
      sym_key,
  [1909] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(900), 1,
      aux_sym__default_cert_level_token1,
  [1916] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(902), 1,
      aux_sym__default_cert_level_token1,
  [1923] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(904), 1,
      sym_number,
  [1930] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(906), 1,
      sym_number,
  [1937] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(908), 1,
      sym_number,
  [1944] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(910), 1,
      sym__key_origin_value,
  [1951] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(912), 1,
      sym__import_parameter,
  [1958] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(914), 1,
      sym__export_parameter,
  [1965] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(916), 1,
      sym__cipher_algo_value,
  [1972] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(918), 1,
      sym__hash_algo_value,
  [1979] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(920), 1,
      sym__compression_algo_value,
  [1986] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(922), 1,
      sym__cipher_algo_value,
  [1993] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(924), 1,
      sym__hash_algo_value,
  [2000] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(926), 1,
      aux_sym__s2k_mode_token1,
  [2007] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(928), 1,
      sym_number,
  [2014] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(930), 1,
      sym__compliance_value,
  [2021] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(932), 1,
      sym_number,
  [2028] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(934), 1,
      sym__debug_level_value,
  [2035] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(936), 1,
      aux_sym__compress_level_token1,
  [2042] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(938), 1,
      sym_number,
  [2049] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(940), 1,
      aux_sym__compress_level_token1,
  [2056] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(942), 1,
      sym_number,
  [2063] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(944), 1,
      sym__charset_value,
  [2070] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(946), 1,
      sym_number,
  [2077] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(948), 1,
      sym__verify_parameter,
  [2084] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(950), 1,
      sym__list_parameter,
  [2091] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(952), 1,
      sym_key,
  [2098] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(954), 1,
      aux_sym__unknown_option_token2,
  [2105] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(956), 1,
      aux_sym_config_token1,
  [2112] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(958), 1,
      aux_sym_config_token1,
  [2119] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(960), 1,
      ts_builtin_sym_end,
  [2126] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(962), 1,
      aux_sym_config_token1,
  [2133] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(964), 1,
      sym__cipher_algo_value,
  [2140] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(966), 1,
      sym__hash_algo_value,
  [2147] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(968), 1,
      sym__compression_algo_value,
  [2154] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(970), 1,
      sym__hash_algo_value,
  [2161] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(972), 1,
      sym__cipher_algo_value,
  [2168] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(974), 1,
      sym__pubkey_algo_value,
  [2175] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(976), 1,
      sym_number,
  [2182] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(978), 1,
      sym_number,
  [2189] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(980), 1,
      aux_sym_config_token1,
  [2196] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(982), 1,
      aux_sym_config_token1,
  [2203] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(984), 1,
      sym__pinentry_mode_value,
  [2210] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(986), 1,
      sym__request_origin_value,
  [2217] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(988), 1,
      sym_number,
  [2224] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(990), 1,
      aux_sym_config_token1,
  [2231] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(992), 1,
      sym__hash_algo_value,
  [2238] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(994), 1,
      sym__new_key_algo,
  [2245] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(996), 1,
      sym_number,
  [2252] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(998), 1,
      sym_expire_time,
  [2259] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1000), 1,
      sym_expire_time,
  [2266] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1002), 1,
      sym__new_key_algo,
  [2273] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1004), 1,
      aux_sym_config_token1,
  [2280] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1006), 1,
      sym_url,
  [2287] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1008), 1,
      sym__debug_flag_value,
  [2294] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1010), 1,
      sym__compression_algo_value,
  [2301] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1012), 1,
      sym__hash_algo_value,
  [2308] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1014), 1,
      aux_sym_config_token1,
  [2315] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1016), 1,
      aux_sym_config_token1,
  [2322] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1018), 1,
      sym__cipher_algo_value,
  [2329] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1020), 1,
      sym__export_parameter,
  [2336] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1022), 1,
      sym__import_parameter,
  [2343] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1024), 1,
      sym_url,
  [2350] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1026), 1,
      aux_sym_config_token1,
  [2357] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1028), 1,
      aux_sym_config_token1,
  [2364] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1030), 1,
      sym__verify_parameter,
  [2371] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1032), 1,
      aux_sym_config_token1,
  [2378] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1034), 1,
      aux_sym_config_token1,
  [2385] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1036), 1,
      aux_sym_config_token1,
  [2392] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1038), 1,
      aux_sym_config_token1,
  [2399] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1040), 1,
      aux_sym_config_token1,
  [2406] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1042), 1,
      aux_sym_config_token1,
  [2413] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1044), 1,
      aux_sym_config_token1,
  [2420] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1046), 1,
      aux_sym_config_token1,
  [2427] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1048), 1,
      aux_sym_config_token1,
  [2434] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1050), 1,
      aux_sym_config_token1,
  [2441] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1052), 1,
      aux_sym_config_token1,
  [2448] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1054), 1,
      aux_sym_config_token1,
  [2455] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1056), 1,
      sym_key,
  [2462] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1058), 1,
      aux_sym_config_token1,
  [2469] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1060), 1,
      aux_sym_config_token1,
  [2476] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1062), 1,
      aux_sym_config_token1,
  [2483] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1064), 1,
      aux_sym_config_token1,
  [2490] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1066), 1,
      aux_sym_config_token1,
  [2497] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1068), 1,
      aux_sym_config_token1,
  [2504] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1070), 1,
      aux_sym_config_token1,
  [2511] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1072), 1,
      aux_sym_config_token1,
  [2518] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1074), 1,
      aux_sym_config_token1,
  [2525] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1076), 1,
      aux_sym_config_token1,
  [2532] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1078), 1,
      aux_sym_config_token1,
  [2539] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1080), 1,
      aux_sym_config_token1,
  [2546] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1082), 1,
      aux_sym_config_token1,
  [2553] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1084), 1,
      aux_sym_config_token1,
  [2560] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1086), 1,
      aux_sym_config_token1,
  [2567] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1088), 1,
      aux_sym_config_token1,
  [2574] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1090), 1,
      aux_sym_config_token1,
  [2581] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1092), 1,
      aux_sym_config_token1,
  [2588] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1094), 1,
      aux_sym_config_token1,
  [2595] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1096), 1,
      anon_sym_EQ,
  [2602] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1098), 1,
      aux_sym_config_token1,
  [2609] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1100), 1,
      aux_sym_config_token1,
  [2616] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1102), 1,
      aux_sym_config_token1,
  [2623] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1104), 1,
      aux_sym_config_token1,
  [2630] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1106), 1,
      aux_sym_config_token1,
  [2637] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1108), 1,
      aux_sym_config_token1,
  [2644] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1110), 1,
      aux_sym_config_token1,
  [2651] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1112), 1,
      aux_sym_config_token1,
  [2658] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1114), 1,
      aux_sym_config_token1,
  [2665] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1116), 1,
      aux_sym_config_token1,
  [2672] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1118), 1,
      aux_sym_config_token1,
  [2679] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1120), 1,
      aux_sym_config_token1,
  [2686] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1122), 1,
      sym_number,
  [2693] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1124), 1,
      aux_sym_config_token1,
  [2700] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1126), 1,
      aux_sym_config_token1,
  [2707] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1128), 1,
      aux_sym_config_token1,
  [2714] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1130), 1,
      aux_sym_config_token1,
  [2721] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1132), 1,
      aux_sym_config_token1,
  [2728] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1134), 1,
      aux_sym_config_token1,
  [2735] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1136), 1,
      aux_sym_config_token1,
  [2742] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1138), 1,
      aux_sym_config_token1,
  [2749] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1140), 1,
      aux_sym_config_token1,
  [2756] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1142), 1,
      aux_sym_config_token1,
  [2763] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1144), 1,
      aux_sym_config_token1,
  [2770] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1146), 1,
      aux_sym_config_token1,
  [2777] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1148), 1,
      aux_sym_config_token1,
  [2784] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1150), 1,
      aux_sym_config_token1,
  [2791] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1152), 1,
      aux_sym_config_token1,
  [2798] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1154), 1,
      aux_sym_config_token1,
  [2805] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1156), 1,
      aux_sym_config_token1,
  [2812] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1158), 1,
      aux_sym_config_token1,
  [2819] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1160), 1,
      aux_sym_config_token1,
  [2826] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1162), 1,
      aux_sym_config_token1,
  [2833] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1164), 1,
      aux_sym_config_token1,
  [2840] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1166), 1,
      aux_sym_config_token1,
  [2847] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1168), 1,
      aux_sym_config_token1,
  [2854] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1170), 1,
      aux_sym_config_token1,
  [2861] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1172), 1,
      aux_sym_config_token1,
  [2868] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1174), 1,
      aux_sym_config_token1,
  [2875] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1176), 1,
      aux_sym_config_token1,
  [2882] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1178), 1,
      aux_sym_config_token1,
  [2889] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1180), 1,
      aux_sym_config_token1,
  [2896] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1182), 1,
      aux_sym_config_token1,
  [2903] = 2,
    ACTIONS(199), 1,
      sym__space,
    ACTIONS(1184), 1,
      aux_sym_config_token1,
  [2910] = 1,
    ACTIONS(1186), 1,
      sym__space,
  [2914] = 1,
    ACTIONS(1188), 1,
      sym__space,
  [2918] = 1,
    ACTIONS(1190), 1,
      sym__space,
  [2922] = 1,
    ACTIONS(1192), 1,
      sym__space,
  [2926] = 1,
    ACTIONS(1194), 1,
      sym__space,
  [2930] = 1,
    ACTIONS(1196), 1,
      sym__space,
  [2934] = 1,
    ACTIONS(1198), 1,
      sym__space,
  [2938] = 1,
    ACTIONS(1200), 1,
      sym__space,
  [2942] = 1,
    ACTIONS(1202), 1,
      sym__space,
  [2946] = 1,
    ACTIONS(1204), 1,
      sym__space,
  [2950] = 1,
    ACTIONS(1206), 1,
      sym__space,
  [2954] = 1,
    ACTIONS(1208), 1,
      sym__space,
  [2958] = 1,
    ACTIONS(1210), 1,
      sym__space,
  [2962] = 1,
    ACTIONS(1212), 1,
      sym__space,
  [2966] = 1,
    ACTIONS(1214), 1,
      sym__space,
  [2970] = 1,
    ACTIONS(1216), 1,
      sym__space,
  [2974] = 1,
    ACTIONS(1218), 1,
      sym__space,
  [2978] = 1,
    ACTIONS(1220), 1,
      sym__space,
  [2982] = 1,
    ACTIONS(1222), 1,
      sym__space,
  [2986] = 1,
    ACTIONS(1224), 1,
      sym__space,
  [2990] = 1,
    ACTIONS(1226), 1,
      sym__space,
  [2994] = 1,
    ACTIONS(1228), 1,
      sym__space,
  [2998] = 1,
    ACTIONS(1230), 1,
      sym__space,
  [3002] = 1,
    ACTIONS(1232), 1,
      sym__space,
  [3006] = 1,
    ACTIONS(1234), 1,
      sym__space,
  [3010] = 1,
    ACTIONS(1236), 1,
      sym__space,
  [3014] = 1,
    ACTIONS(1238), 1,
      sym__space,
  [3018] = 1,
    ACTIONS(1240), 1,
      sym__space,
  [3022] = 1,
    ACTIONS(1242), 1,
      sym__space,
  [3026] = 1,
    ACTIONS(1244), 1,
      sym__space,
  [3030] = 1,
    ACTIONS(1246), 1,
      sym__space,
  [3034] = 1,
    ACTIONS(1248), 1,
      sym__space,
  [3038] = 1,
    ACTIONS(1250), 1,
      sym__space,
  [3042] = 1,
    ACTIONS(1252), 1,
      sym__space,
  [3046] = 1,
    ACTIONS(1254), 1,
      sym__space,
  [3050] = 1,
    ACTIONS(1256), 1,
      sym__space,
  [3054] = 1,
    ACTIONS(1258), 1,
      sym__space,
  [3058] = 1,
    ACTIONS(1260), 1,
      sym__space,
  [3062] = 1,
    ACTIONS(1262), 1,
      sym__space,
  [3066] = 1,
    ACTIONS(1264), 1,
      sym__space,
  [3070] = 1,
    ACTIONS(1266), 1,
      sym__space,
  [3074] = 1,
    ACTIONS(1268), 1,
      sym__space,
  [3078] = 1,
    ACTIONS(1270), 1,
      sym__space,
  [3082] = 1,
    ACTIONS(1272), 1,
      sym__space,
  [3086] = 1,
    ACTIONS(1274), 1,
      sym__space,
  [3090] = 1,
    ACTIONS(1276), 1,
      sym__space,
  [3094] = 1,
    ACTIONS(1278), 1,
      sym__space,
  [3098] = 1,
    ACTIONS(1280), 1,
      sym__space,
  [3102] = 1,
    ACTIONS(1282), 1,
      sym__space,
  [3106] = 1,
    ACTIONS(1284), 1,
      sym__space,
  [3110] = 1,
    ACTIONS(1286), 1,
      sym__space,
  [3114] = 1,
    ACTIONS(1288), 1,
      sym__space,
  [3118] = 1,
    ACTIONS(1290), 1,
      sym__space,
  [3122] = 1,
    ACTIONS(1292), 1,
      sym__space,
  [3126] = 1,
    ACTIONS(1294), 1,
      sym__space,
  [3130] = 1,
    ACTIONS(1296), 1,
      sym__space,
  [3134] = 1,
    ACTIONS(1298), 1,
      sym__space,
  [3138] = 1,
    ACTIONS(1300), 1,
      sym__space,
  [3142] = 1,
    ACTIONS(1302), 1,
      sym__space,
  [3146] = 1,
    ACTIONS(1304), 1,
      sym__space,
  [3150] = 1,
    ACTIONS(1306), 1,
      sym__space,
  [3154] = 1,
    ACTIONS(1308), 1,
      sym__space,
  [3158] = 1,
    ACTIONS(1310), 1,
      sym__space,
  [3162] = 1,
    ACTIONS(1312), 1,
      sym__space,
  [3166] = 1,
    ACTIONS(1314), 1,
      sym__space,
  [3170] = 1,
    ACTIONS(1316), 1,
      sym__space,
  [3174] = 1,
    ACTIONS(1318), 1,
      sym__space,
  [3178] = 1,
    ACTIONS(1320), 1,
      sym__space,
  [3182] = 1,
    ACTIONS(1322), 1,
      sym__space,
  [3186] = 1,
    ACTIONS(1324), 1,
      sym__space,
  [3190] = 1,
    ACTIONS(1326), 1,
      sym__space,
  [3194] = 1,
    ACTIONS(1328), 1,
      sym__space,
  [3198] = 1,
    ACTIONS(1330), 1,
      sym__space,
  [3202] = 1,
    ACTIONS(1332), 1,
      sym__space,
  [3206] = 1,
    ACTIONS(1334), 1,
      sym__space,
  [3210] = 1,
    ACTIONS(1336), 1,
      sym__space,
  [3214] = 1,
    ACTIONS(1338), 1,
      sym__space,
  [3218] = 1,
    ACTIONS(1340), 1,
      sym__space,
  [3222] = 1,
    ACTIONS(1342), 1,
      sym__space,
  [3226] = 1,
    ACTIONS(1344), 1,
      sym__space,
  [3230] = 1,
    ACTIONS(1346), 1,
      sym__space,
  [3234] = 1,
    ACTIONS(1348), 1,
      sym__space,
  [3238] = 1,
    ACTIONS(1350), 1,
      sym__space,
  [3242] = 1,
    ACTIONS(1352), 1,
      sym__space,
  [3246] = 1,
    ACTIONS(1354), 1,
      sym__space,
  [3250] = 1,
    ACTIONS(1356), 1,
      sym__space,
  [3254] = 1,
    ACTIONS(1358), 1,
      sym__space,
  [3258] = 1,
    ACTIONS(1360), 1,
      sym__space,
  [3262] = 1,
    ACTIONS(1362), 1,
      sym__space,
  [3266] = 1,
    ACTIONS(1364), 1,
      sym__space,
  [3270] = 1,
    ACTIONS(1366), 1,
      sym__space,
  [3274] = 1,
    ACTIONS(1368), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 23,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 114,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 152,
  [SMALL_STATE(14)] = 171,
  [SMALL_STATE(15)] = 190,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 243,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 408,
  [SMALL_STATE(28)] = 427,
  [SMALL_STATE(29)] = 444,
  [SMALL_STATE(30)] = 463,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 498,
  [SMALL_STATE(33)] = 514,
  [SMALL_STATE(34)] = 530,
  [SMALL_STATE(35)] = 546,
  [SMALL_STATE(36)] = 562,
  [SMALL_STATE(37)] = 578,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 610,
  [SMALL_STATE(40)] = 626,
  [SMALL_STATE(41)] = 642,
  [SMALL_STATE(42)] = 658,
  [SMALL_STATE(43)] = 674,
  [SMALL_STATE(44)] = 690,
  [SMALL_STATE(45)] = 706,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 738,
  [SMALL_STATE(48)] = 754,
  [SMALL_STATE(49)] = 770,
  [SMALL_STATE(50)] = 786,
  [SMALL_STATE(51)] = 798,
  [SMALL_STATE(52)] = 814,
  [SMALL_STATE(53)] = 830,
  [SMALL_STATE(54)] = 846,
  [SMALL_STATE(55)] = 862,
  [SMALL_STATE(56)] = 878,
  [SMALL_STATE(57)] = 894,
  [SMALL_STATE(58)] = 910,
  [SMALL_STATE(59)] = 926,
  [SMALL_STATE(60)] = 942,
  [SMALL_STATE(61)] = 958,
  [SMALL_STATE(62)] = 974,
  [SMALL_STATE(63)] = 990,
  [SMALL_STATE(64)] = 1006,
  [SMALL_STATE(65)] = 1022,
  [SMALL_STATE(66)] = 1038,
  [SMALL_STATE(67)] = 1054,
  [SMALL_STATE(68)] = 1070,
  [SMALL_STATE(69)] = 1086,
  [SMALL_STATE(70)] = 1102,
  [SMALL_STATE(71)] = 1118,
  [SMALL_STATE(72)] = 1134,
  [SMALL_STATE(73)] = 1150,
  [SMALL_STATE(74)] = 1166,
  [SMALL_STATE(75)] = 1182,
  [SMALL_STATE(76)] = 1198,
  [SMALL_STATE(77)] = 1214,
  [SMALL_STATE(78)] = 1230,
  [SMALL_STATE(79)] = 1246,
  [SMALL_STATE(80)] = 1262,
  [SMALL_STATE(81)] = 1278,
  [SMALL_STATE(82)] = 1294,
  [SMALL_STATE(83)] = 1306,
  [SMALL_STATE(84)] = 1322,
  [SMALL_STATE(85)] = 1338,
  [SMALL_STATE(86)] = 1354,
  [SMALL_STATE(87)] = 1370,
  [SMALL_STATE(88)] = 1386,
  [SMALL_STATE(89)] = 1402,
  [SMALL_STATE(90)] = 1418,
  [SMALL_STATE(91)] = 1434,
  [SMALL_STATE(92)] = 1450,
  [SMALL_STATE(93)] = 1466,
  [SMALL_STATE(94)] = 1482,
  [SMALL_STATE(95)] = 1498,
  [SMALL_STATE(96)] = 1514,
  [SMALL_STATE(97)] = 1530,
  [SMALL_STATE(98)] = 1546,
  [SMALL_STATE(99)] = 1555,
  [SMALL_STATE(100)] = 1564,
  [SMALL_STATE(101)] = 1573,
  [SMALL_STATE(102)] = 1582,
  [SMALL_STATE(103)] = 1593,
  [SMALL_STATE(104)] = 1606,
  [SMALL_STATE(105)] = 1615,
  [SMALL_STATE(106)] = 1624,
  [SMALL_STATE(107)] = 1637,
  [SMALL_STATE(108)] = 1646,
  [SMALL_STATE(109)] = 1655,
  [SMALL_STATE(110)] = 1664,
  [SMALL_STATE(111)] = 1673,
  [SMALL_STATE(112)] = 1682,
  [SMALL_STATE(113)] = 1691,
  [SMALL_STATE(114)] = 1700,
  [SMALL_STATE(115)] = 1709,
  [SMALL_STATE(116)] = 1718,
  [SMALL_STATE(117)] = 1729,
  [SMALL_STATE(118)] = 1738,
  [SMALL_STATE(119)] = 1747,
  [SMALL_STATE(120)] = 1756,
  [SMALL_STATE(121)] = 1766,
  [SMALL_STATE(122)] = 1776,
  [SMALL_STATE(123)] = 1786,
  [SMALL_STATE(124)] = 1796,
  [SMALL_STATE(125)] = 1804,
  [SMALL_STATE(126)] = 1814,
  [SMALL_STATE(127)] = 1822,
  [SMALL_STATE(128)] = 1832,
  [SMALL_STATE(129)] = 1839,
  [SMALL_STATE(130)] = 1846,
  [SMALL_STATE(131)] = 1853,
  [SMALL_STATE(132)] = 1860,
  [SMALL_STATE(133)] = 1867,
  [SMALL_STATE(134)] = 1874,
  [SMALL_STATE(135)] = 1881,
  [SMALL_STATE(136)] = 1888,
  [SMALL_STATE(137)] = 1895,
  [SMALL_STATE(138)] = 1902,
  [SMALL_STATE(139)] = 1909,
  [SMALL_STATE(140)] = 1916,
  [SMALL_STATE(141)] = 1923,
  [SMALL_STATE(142)] = 1930,
  [SMALL_STATE(143)] = 1937,
  [SMALL_STATE(144)] = 1944,
  [SMALL_STATE(145)] = 1951,
  [SMALL_STATE(146)] = 1958,
  [SMALL_STATE(147)] = 1965,
  [SMALL_STATE(148)] = 1972,
  [SMALL_STATE(149)] = 1979,
  [SMALL_STATE(150)] = 1986,
  [SMALL_STATE(151)] = 1993,
  [SMALL_STATE(152)] = 2000,
  [SMALL_STATE(153)] = 2007,
  [SMALL_STATE(154)] = 2014,
  [SMALL_STATE(155)] = 2021,
  [SMALL_STATE(156)] = 2028,
  [SMALL_STATE(157)] = 2035,
  [SMALL_STATE(158)] = 2042,
  [SMALL_STATE(159)] = 2049,
  [SMALL_STATE(160)] = 2056,
  [SMALL_STATE(161)] = 2063,
  [SMALL_STATE(162)] = 2070,
  [SMALL_STATE(163)] = 2077,
  [SMALL_STATE(164)] = 2084,
  [SMALL_STATE(165)] = 2091,
  [SMALL_STATE(166)] = 2098,
  [SMALL_STATE(167)] = 2105,
  [SMALL_STATE(168)] = 2112,
  [SMALL_STATE(169)] = 2119,
  [SMALL_STATE(170)] = 2126,
  [SMALL_STATE(171)] = 2133,
  [SMALL_STATE(172)] = 2140,
  [SMALL_STATE(173)] = 2147,
  [SMALL_STATE(174)] = 2154,
  [SMALL_STATE(175)] = 2161,
  [SMALL_STATE(176)] = 2168,
  [SMALL_STATE(177)] = 2175,
  [SMALL_STATE(178)] = 2182,
  [SMALL_STATE(179)] = 2189,
  [SMALL_STATE(180)] = 2196,
  [SMALL_STATE(181)] = 2203,
  [SMALL_STATE(182)] = 2210,
  [SMALL_STATE(183)] = 2217,
  [SMALL_STATE(184)] = 2224,
  [SMALL_STATE(185)] = 2231,
  [SMALL_STATE(186)] = 2238,
  [SMALL_STATE(187)] = 2245,
  [SMALL_STATE(188)] = 2252,
  [SMALL_STATE(189)] = 2259,
  [SMALL_STATE(190)] = 2266,
  [SMALL_STATE(191)] = 2273,
  [SMALL_STATE(192)] = 2280,
  [SMALL_STATE(193)] = 2287,
  [SMALL_STATE(194)] = 2294,
  [SMALL_STATE(195)] = 2301,
  [SMALL_STATE(196)] = 2308,
  [SMALL_STATE(197)] = 2315,
  [SMALL_STATE(198)] = 2322,
  [SMALL_STATE(199)] = 2329,
  [SMALL_STATE(200)] = 2336,
  [SMALL_STATE(201)] = 2343,
  [SMALL_STATE(202)] = 2350,
  [SMALL_STATE(203)] = 2357,
  [SMALL_STATE(204)] = 2364,
  [SMALL_STATE(205)] = 2371,
  [SMALL_STATE(206)] = 2378,
  [SMALL_STATE(207)] = 2385,
  [SMALL_STATE(208)] = 2392,
  [SMALL_STATE(209)] = 2399,
  [SMALL_STATE(210)] = 2406,
  [SMALL_STATE(211)] = 2413,
  [SMALL_STATE(212)] = 2420,
  [SMALL_STATE(213)] = 2427,
  [SMALL_STATE(214)] = 2434,
  [SMALL_STATE(215)] = 2441,
  [SMALL_STATE(216)] = 2448,
  [SMALL_STATE(217)] = 2455,
  [SMALL_STATE(218)] = 2462,
  [SMALL_STATE(219)] = 2469,
  [SMALL_STATE(220)] = 2476,
  [SMALL_STATE(221)] = 2483,
  [SMALL_STATE(222)] = 2490,
  [SMALL_STATE(223)] = 2497,
  [SMALL_STATE(224)] = 2504,
  [SMALL_STATE(225)] = 2511,
  [SMALL_STATE(226)] = 2518,
  [SMALL_STATE(227)] = 2525,
  [SMALL_STATE(228)] = 2532,
  [SMALL_STATE(229)] = 2539,
  [SMALL_STATE(230)] = 2546,
  [SMALL_STATE(231)] = 2553,
  [SMALL_STATE(232)] = 2560,
  [SMALL_STATE(233)] = 2567,
  [SMALL_STATE(234)] = 2574,
  [SMALL_STATE(235)] = 2581,
  [SMALL_STATE(236)] = 2588,
  [SMALL_STATE(237)] = 2595,
  [SMALL_STATE(238)] = 2602,
  [SMALL_STATE(239)] = 2609,
  [SMALL_STATE(240)] = 2616,
  [SMALL_STATE(241)] = 2623,
  [SMALL_STATE(242)] = 2630,
  [SMALL_STATE(243)] = 2637,
  [SMALL_STATE(244)] = 2644,
  [SMALL_STATE(245)] = 2651,
  [SMALL_STATE(246)] = 2658,
  [SMALL_STATE(247)] = 2665,
  [SMALL_STATE(248)] = 2672,
  [SMALL_STATE(249)] = 2679,
  [SMALL_STATE(250)] = 2686,
  [SMALL_STATE(251)] = 2693,
  [SMALL_STATE(252)] = 2700,
  [SMALL_STATE(253)] = 2707,
  [SMALL_STATE(254)] = 2714,
  [SMALL_STATE(255)] = 2721,
  [SMALL_STATE(256)] = 2728,
  [SMALL_STATE(257)] = 2735,
  [SMALL_STATE(258)] = 2742,
  [SMALL_STATE(259)] = 2749,
  [SMALL_STATE(260)] = 2756,
  [SMALL_STATE(261)] = 2763,
  [SMALL_STATE(262)] = 2770,
  [SMALL_STATE(263)] = 2777,
  [SMALL_STATE(264)] = 2784,
  [SMALL_STATE(265)] = 2791,
  [SMALL_STATE(266)] = 2798,
  [SMALL_STATE(267)] = 2805,
  [SMALL_STATE(268)] = 2812,
  [SMALL_STATE(269)] = 2819,
  [SMALL_STATE(270)] = 2826,
  [SMALL_STATE(271)] = 2833,
  [SMALL_STATE(272)] = 2840,
  [SMALL_STATE(273)] = 2847,
  [SMALL_STATE(274)] = 2854,
  [SMALL_STATE(275)] = 2861,
  [SMALL_STATE(276)] = 2868,
  [SMALL_STATE(277)] = 2875,
  [SMALL_STATE(278)] = 2882,
  [SMALL_STATE(279)] = 2889,
  [SMALL_STATE(280)] = 2896,
  [SMALL_STATE(281)] = 2903,
  [SMALL_STATE(282)] = 2910,
  [SMALL_STATE(283)] = 2914,
  [SMALL_STATE(284)] = 2918,
  [SMALL_STATE(285)] = 2922,
  [SMALL_STATE(286)] = 2926,
  [SMALL_STATE(287)] = 2930,
  [SMALL_STATE(288)] = 2934,
  [SMALL_STATE(289)] = 2938,
  [SMALL_STATE(290)] = 2942,
  [SMALL_STATE(291)] = 2946,
  [SMALL_STATE(292)] = 2950,
  [SMALL_STATE(293)] = 2954,
  [SMALL_STATE(294)] = 2958,
  [SMALL_STATE(295)] = 2962,
  [SMALL_STATE(296)] = 2966,
  [SMALL_STATE(297)] = 2970,
  [SMALL_STATE(298)] = 2974,
  [SMALL_STATE(299)] = 2978,
  [SMALL_STATE(300)] = 2982,
  [SMALL_STATE(301)] = 2986,
  [SMALL_STATE(302)] = 2990,
  [SMALL_STATE(303)] = 2994,
  [SMALL_STATE(304)] = 2998,
  [SMALL_STATE(305)] = 3002,
  [SMALL_STATE(306)] = 3006,
  [SMALL_STATE(307)] = 3010,
  [SMALL_STATE(308)] = 3014,
  [SMALL_STATE(309)] = 3018,
  [SMALL_STATE(310)] = 3022,
  [SMALL_STATE(311)] = 3026,
  [SMALL_STATE(312)] = 3030,
  [SMALL_STATE(313)] = 3034,
  [SMALL_STATE(314)] = 3038,
  [SMALL_STATE(315)] = 3042,
  [SMALL_STATE(316)] = 3046,
  [SMALL_STATE(317)] = 3050,
  [SMALL_STATE(318)] = 3054,
  [SMALL_STATE(319)] = 3058,
  [SMALL_STATE(320)] = 3062,
  [SMALL_STATE(321)] = 3066,
  [SMALL_STATE(322)] = 3070,
  [SMALL_STATE(323)] = 3074,
  [SMALL_STATE(324)] = 3078,
  [SMALL_STATE(325)] = 3082,
  [SMALL_STATE(326)] = 3086,
  [SMALL_STATE(327)] = 3090,
  [SMALL_STATE(328)] = 3094,
  [SMALL_STATE(329)] = 3098,
  [SMALL_STATE(330)] = 3102,
  [SMALL_STATE(331)] = 3106,
  [SMALL_STATE(332)] = 3110,
  [SMALL_STATE(333)] = 3114,
  [SMALL_STATE(334)] = 3118,
  [SMALL_STATE(335)] = 3122,
  [SMALL_STATE(336)] = 3126,
  [SMALL_STATE(337)] = 3130,
  [SMALL_STATE(338)] = 3134,
  [SMALL_STATE(339)] = 3138,
  [SMALL_STATE(340)] = 3142,
  [SMALL_STATE(341)] = 3146,
  [SMALL_STATE(342)] = 3150,
  [SMALL_STATE(343)] = 3154,
  [SMALL_STATE(344)] = 3158,
  [SMALL_STATE(345)] = 3162,
  [SMALL_STATE(346)] = 3166,
  [SMALL_STATE(347)] = 3170,
  [SMALL_STATE(348)] = 3174,
  [SMALL_STATE(349)] = 3178,
  [SMALL_STATE(350)] = 3182,
  [SMALL_STATE(351)] = 3186,
  [SMALL_STATE(352)] = 3190,
  [SMALL_STATE(353)] = 3194,
  [SMALL_STATE(354)] = 3198,
  [SMALL_STATE(355)] = 3202,
  [SMALL_STATE(356)] = 3206,
  [SMALL_STATE(357)] = 3210,
  [SMALL_STATE(358)] = 3214,
  [SMALL_STATE(359)] = 3218,
  [SMALL_STATE(360)] = 3222,
  [SMALL_STATE(361)] = 3226,
  [SMALL_STATE(362)] = 3230,
  [SMALL_STATE(363)] = 3234,
  [SMALL_STATE(364)] = 3238,
  [SMALL_STATE(365)] = 3242,
  [SMALL_STATE(366)] = 3246,
  [SMALL_STATE(367)] = 3250,
  [SMALL_STATE(368)] = 3254,
  [SMALL_STATE(369)] = 3258,
  [SMALL_STATE(370)] = 3262,
  [SMALL_STATE(371)] = 3266,
  [SMALL_STATE(372)] = 3270,
  [SMALL_STATE(373)] = 3274,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(246),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(130),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(370),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(368),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(367),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(366),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(365),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(364),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(361),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(360),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(357),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(356),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(353),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(352),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(349),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(348),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(345),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(344),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(339),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(338),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(335),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(327),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(326),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(324),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(323),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(321),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(320),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(317),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(316),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(312),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(311),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(310),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(309),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(308),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(307),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(306),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(304),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(303),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(298),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(289),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(288),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(287),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(286),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(285),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(284),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(283),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(294),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(293),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(296),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(282),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(297),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(299),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(300),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(295),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(301),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(302),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [450] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(319),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(325),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(331),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(337),
  [477] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(343),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [483] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [486] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(170),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(6),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(6),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(9),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [528] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(9),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 3, .production_id = 6),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 4, .production_id = 9),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 5),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3, .production_id = 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12), SHIFT_REPEAT(121),
  [582] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12), SHIFT_REPEAT(50),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 12), SHIFT_REPEAT(50),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 3, .production_id = 6),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 3, .production_id = 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 3, .production_id = 6),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 4, .production_id = 9),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__formatted_url, 2),
  [598] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__formatted_url, 2), SHIFT_REPEAT(102),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__formatted_url, 2), SHIFT_REPEAT(102),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 4, .production_id = 9),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(28),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(28),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4, .production_id = 8),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 4, .production_id = 9),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, .production_id = 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 4, .production_id = 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 4, .production_id = 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(195),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(111),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4, .production_id = 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4, .production_id = 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 7),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 7),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(186),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(108),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4, .production_id = 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4, .production_id = 3),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 3, .production_id = 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2),
  [706] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(204),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(115),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(129),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(119),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [722] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(70),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(70),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3, .production_id = 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, .production_id = 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, .production_id = 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, .production_id = 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3, .production_id = 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3, .production_id = 3),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(78),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [745] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(78),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 10),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 10),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3, .production_id = 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3, .production_id = 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(194),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(110),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(193),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(109),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(200),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(99),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(198),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(117),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(199),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(114),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, .production_id = 10),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 1, .production_id = 7),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2, .production_id = 10),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2, .production_id = 10),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__formatted_url, 1),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__formatted_url, 1),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2, .production_id = 10),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2, .production_id = 10),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2, .production_id = 10),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 1, .production_id = 7),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 1, .production_id = 7),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 1, .production_id = 7),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 1, .production_id = 7),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2, .production_id = 10),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, .production_id = 10),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 1, .production_id = 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 1, .production_id = 7),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 1, .production_id = 7),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, .production_id = 10),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 1, .production_id = 7),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 11),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3, .production_id = 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 5),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cipher_algo, 3, .production_id = 3),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unknown_option, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 1),
  [960] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5, .production_id = 3),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, .production_id = 13),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 11),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 4),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unknown_option, 3),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3, .production_id = 4),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key, 3),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chuid, 3),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3, .production_id = 3),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3, .production_id = 3),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_keyserver_url, 3),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3, .production_id = 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3, .production_id = 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 3),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_expire, 3),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_sig_expire, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key_fd, 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, .production_id = 3),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, .production_id = 3),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3, .production_id = 3),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_level, 3, .production_id = 3),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_set_iobuf_size, 3),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_fd, 3),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_file, 3),
  [1148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_fd, 3),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_file, 3),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_notation, 3),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_filename, 3),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digest_algo, 3, .production_id = 3),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_algo, 3, .production_id = 3),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_digest_algo, 3, .production_id = 3),
  [1164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_cipher_algo, 3, .production_id = 3),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_pubkey_algo, 3, .production_id = 3),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_repeat, 3),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_fd, 3),
  [1172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_file, 3),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase, 3),
  [1176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pinentry_mode, 3, .production_id = 3),
  [1178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_origin, 3, .production_id = 3),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_fd, 3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_file, 3),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__weak_digest, 3, .production_id = 3),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
