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
#define STATE_COUNT 452
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 399
#define ALIAS_COUNT 0
#define TOKEN_COUNT 268
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_default_DASHkey = 122,
  anon_sym_list_DASHoptions = 123,
  anon_sym_COMMA = 124,
  sym__list_parameter = 125,
  anon_sym_verify_DASHoptions = 126,
  sym__verify_parameter = 127,
  anon_sym_photo_DASHviewer = 128,
  aux_sym__command_token1 = 129,
  anon_sym_DQUOTE = 130,
  aux_sym__command_token2 = 131,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 132,
  anon_sym_SQUOTE = 133,
  aux_sym__command_token3 = 134,
  aux_sym__command_format_token1 = 135,
  anon_sym_exec_DASHpath = 136,
  anon_sym_keyring = 137,
  anon_sym_primary_DASHkeyring = 138,
  anon_sym_trustdb_DASHname = 139,
  anon_sym_display_DASHcharset = 140,
  sym__charset_value = 141,
  sym__utf8_strings = 142,
  sym__no_utf8_strings = 143,
  anon_sym_compress_DASHlevel = 144,
  aux_sym__compress_level_token1 = 145,
  anon_sym_bzip2_DASHcompress_DASHlevel = 146,
  anon_sym_default_DASHcert_DASHlevel = 147,
  aux_sym__default_cert_level_token1 = 148,
  anon_sym_min_DASHcert_DASHlevel = 149,
  anon_sym_trusted_DASHkey = 150,
  anon_sym_add_DASHdesig_DASHrevoker = 151,
  aux_sym__add_desig_revoker_token1 = 152,
  aux_sym__add_desig_revoker_token2 = 153,
  anon_sym_trust_DASHmodel = 154,
  sym__model = 155,
  anon_sym_assert_DASHsigner = 156,
  anon_sym_auto_DASHkey_DASHlocate = 157,
  sym__key_locate_value = 158,
  anon_sym_keyid_DASHformat = 159,
  sym__keyid_format_value = 160,
  anon_sym_keyserver = 161,
  anon_sym_completes_DASHneeded = 162,
  anon_sym_marginals_DASHneeded = 163,
  anon_sym_tofu_DASHdefault_DASHpolicy = 164,
  sym__tofu_policy_value = 165,
  anon_sym_max_DASHcert_DASHdepth = 166,
  anon_sym_agent_DASHprogram = 167,
  anon_sym_dirmngr_DASHprogram = 168,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 169,
  anon_sym_recipient = 170,
  anon_sym_hidden_DASHrecipient = 171,
  anon_sym_recipient_DASHfile = 172,
  anon_sym_hidden_DASHrecipient_DASHfile = 173,
  anon_sym_encrypt_DASHto = 174,
  anon_sym_hidden_DASHencrypt_DASHto = 175,
  anon_sym_group = 176,
  aux_sym__group_token1 = 177,
  anon_sym_EQ = 178,
  anon_sym_ungroup = 179,
  anon_sym_local_DASHuser = 180,
  anon_sym_sender = 181,
  anon_sym_try_DASHsecret_DASHname = 182,
  anon_sym_output = 183,
  anon_sym_max_DASHoutput = 184,
  anon_sym_chunk_DASHsize = 185,
  anon_sym_input_DASHsize_DASHhint = 186,
  anon_sym_key_DASHorigin = 187,
  sym__key_origin_value = 188,
  anon_sym_import_DASHoptions = 189,
  sym__import_parameter = 190,
  anon_sym_export_DASHoptions = 191,
  sym__export_parameter = 192,
  anon_sym_personal_DASHcipher_DASHpreferences = 193,
  anon_sym_personal_DASHdigest_DASHpreferences = 194,
  anon_sym_personal_DASHcompress_DASHpreferences = 195,
  anon_sym_s2k_DASHcipher_DASHalgo = 196,
  anon_sym_s2k_DASHdigest_DASHalgo = 197,
  anon_sym_s2k_DASHmode = 198,
  aux_sym__s2k_mode_token1 = 199,
  anon_sym_s2k_DASHcount = 200,
  anon_sym_compliance = 201,
  sym__compliance_value = 202,
  anon_sym_min_DASHrsa_DASHlength = 203,
  sym__require_compliance = 204,
  anon_sym_debug_DASHlevel = 205,
  sym__debug_level_value = 206,
  anon_sym_debug = 207,
  aux_sym__debug_token1 = 208,
  sym__debug_flag_value = 209,
  anon_sym_debug_DASHset_DASHiobuf_DASHsize = 210,
  anon_sym_faked_DASHsystem_DASHtime = 211,
  anon_sym_BANG = 212,
  anon_sym_status_DASHfd = 213,
  anon_sym_status_DASHfile = 214,
  anon_sym_logger_DASHfd = 215,
  anon_sym_logger_DASHfile = 216,
  anon_sym_log_DASHfile = 217,
  anon_sym_comment = 218,
  anon_sym_sig_DASHnotation = 219,
  anon_sym_cert_DASHnotation = 220,
  anon_sym_set_DASHnotation = 221,
  aux_sym__notation_token1 = 222,
  aux_sym__notation_format_token1 = 223,
  anon_sym_known_DASHnotation = 224,
  anon_sym_sig_DASHpolicy_DASHurl = 225,
  anon_sym_cert_DASHpolicy_DASHurl = 226,
  anon_sym_set_DASHpolicy_DASHurl = 227,
  anon_sym_sig_DASHkeyserver_DASHurl = 228,
  anon_sym_set_DASHfilename = 229,
  anon_sym_cipher_DASHalgo = 230,
  anon_sym_digest_DASHalgo = 231,
  anon_sym_compress_DASHalgo = 232,
  anon_sym_cert_DASHdigest_DASHalgo = 233,
  anon_sym_disable_DASHcipher_DASHalgo = 234,
  anon_sym_disable_DASHpubkey_DASHalgo = 235,
  anon_sym_passphrase_DASHrepeat = 236,
  anon_sym_passphrase_DASHfd = 237,
  anon_sym_passphrase_DASHfile = 238,
  anon_sym_passphrase = 239,
  anon_sym_pinentry_DASHmode = 240,
  sym__pinentry_mode_value = 241,
  anon_sym_request_DASHorigin = 242,
  sym__request_origin_value = 243,
  anon_sym_command_DASHfd = 244,
  anon_sym_command_DASHfile = 245,
  anon_sym_weak_DASHdigest = 246,
  anon_sym_override_DASHsession_DASHkey = 247,
  anon_sym_override_DASHsession_DASHkey_DASHfd = 248,
  anon_sym_default_DASHsig_DASHexpire = 249,
  anon_sym_default_DASHcert_DASHexpire = 250,
  anon_sym_default_DASHnew_DASHkey_DASHalgo = 251,
  sym__new_key_algo = 252,
  anon_sym_default_DASHpreference_DASHlist = 253,
  anon_sym_default_DASHkeyserver_DASHurl = 254,
  anon_sym_chuid = 255,
  sym_key = 256,
  sym_url = 257,
  sym_number = 258,
  sym_iso_time = 259,
  sym_expire_time = 260,
  aux_sym_string_token1 = 261,
  sym_comment = 262,
  sym__pubkey_algo_value = 263,
  sym__cipher_algo_value = 264,
  sym__hash_algo_value = 265,
  sym__compression_algo_value = 266,
  sym__space = 267,
  sym_config = 268,
  sym_option = 269,
  sym__default_key = 270,
  sym__list_options = 271,
  sym__verify_options = 272,
  sym__photo_viewer = 273,
  sym__command = 274,
  sym__command_format = 275,
  sym__exec_path = 276,
  sym__keyring = 277,
  sym__primary_keyring = 278,
  sym__trustdb_name = 279,
  sym__display_charset = 280,
  sym__compress_level = 281,
  sym__bzip2_compress_level = 282,
  sym__default_cert_level = 283,
  sym__min_cert_level = 284,
  sym__trusted_key = 285,
  sym__add_desig_revoker = 286,
  sym__trust_model = 287,
  sym__assert_signer = 288,
  sym__auto_key_locate = 289,
  sym__keyid_format = 290,
  sym__keyserver = 291,
  sym__completes_needed = 292,
  sym__marginals_needed = 293,
  sym__tofu_default_policy = 294,
  sym__max_cert_depth = 295,
  sym__agent_program = 296,
  sym__dirmngr_program = 297,
  sym__limit_card_insert_tries = 298,
  sym__recipient = 299,
  sym__hidden_recipient = 300,
  sym__recipient_file = 301,
  sym__hidden_recipient_file = 302,
  sym__encrypt_to = 303,
  sym__hidden_encrypt_to = 304,
  sym__group = 305,
  sym__ungroup = 306,
  sym__local_user = 307,
  sym__sender = 308,
  sym__try_secret_name = 309,
  sym__output = 310,
  sym__max_output = 311,
  sym__chunk_size = 312,
  sym__input_size_hint = 313,
  sym__key_origin = 314,
  sym__import_options = 315,
  sym__export_options = 316,
  sym__personal_cipher_preferences = 317,
  sym__personal_digest_preferences = 318,
  sym__personal_compress_preferences = 319,
  sym__s2k_cipher_algo = 320,
  sym__s2k_digest_algo = 321,
  sym__s2k_mode = 322,
  sym__s2k_count = 323,
  sym__compliance = 324,
  sym__min_rsa_length = 325,
  sym__debug_level = 326,
  sym__debug = 327,
  sym__debug_set_iobuf_size = 328,
  sym__faked_system_time = 329,
  sym__status_fd = 330,
  sym__status_file = 331,
  sym__logger_fd = 332,
  sym__logger_file = 333,
  sym__comment = 334,
  sym__sig_notation = 335,
  sym__cert_notation = 336,
  sym__set_notation = 337,
  aux_sym__notation = 338,
  sym__notation_format = 339,
  sym__known_notation = 340,
  sym__sig_policy_url = 341,
  sym__cert_policy_url = 342,
  sym__set_policy_url = 343,
  sym__sig_keyserver_url = 344,
  sym__set_filename = 345,
  sym__cipher_algo = 346,
  sym__digest_algo = 347,
  sym__compress_algo = 348,
  sym__cert_digest_algo = 349,
  sym__disable_cipher_algo = 350,
  sym__disable_pubkey_algo = 351,
  sym__passphrase_repeat = 352,
  sym__passphrase_fd = 353,
  sym__passphrase_file = 354,
  sym__passphrase = 355,
  sym__pinentry_mode = 356,
  sym__request_origin = 357,
  sym__command_fd = 358,
  sym__command_file = 359,
  sym__weak_digest = 360,
  sym__override_session_key = 361,
  sym__override_session_key_fd = 362,
  sym__default_sig_expire = 363,
  sym__default_cert_expire = 364,
  sym__default_new_key_algo = 365,
  sym__default_preference_list = 366,
  sym__default_preference_value = 367,
  sym__default_keyserver_url = 368,
  sym__chuid = 369,
  sym_string = 370,
  aux_sym_config_repeat1 = 371,
  aux_sym__list_options_repeat1 = 372,
  aux_sym__list_options_repeat2 = 373,
  aux_sym__verify_options_repeat1 = 374,
  aux_sym__verify_options_repeat2 = 375,
  aux_sym__command_repeat1 = 376,
  aux_sym__command_repeat2 = 377,
  aux_sym__command_repeat3 = 378,
  aux_sym__auto_key_locate_repeat1 = 379,
  aux_sym__auto_key_locate_repeat2 = 380,
  aux_sym__import_options_repeat1 = 381,
  aux_sym__import_options_repeat2 = 382,
  aux_sym__export_options_repeat1 = 383,
  aux_sym__export_options_repeat2 = 384,
  aux_sym__personal_cipher_preferences_repeat1 = 385,
  aux_sym__personal_cipher_preferences_repeat2 = 386,
  aux_sym__personal_digest_preferences_repeat1 = 387,
  aux_sym__personal_digest_preferences_repeat2 = 388,
  aux_sym__personal_compress_preferences_repeat1 = 389,
  aux_sym__personal_compress_preferences_repeat2 = 390,
  aux_sym__debug_repeat1 = 391,
  aux_sym__debug_repeat2 = 392,
  aux_sym__default_new_key_algo_repeat1 = 393,
  aux_sym__default_new_key_algo_repeat2 = 394,
  aux_sym__default_preference_list_repeat1 = 395,
  aux_sym__default_preference_list_repeat2 = 396,
  aux_sym_string_repeat1 = 397,
  aux_sym_string_repeat2 = 398,
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
  [anon_sym_default_DASHkey] = "default-key",
  [anon_sym_list_DASHoptions] = "list-options",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "value",
  [anon_sym_verify_DASHoptions] = "verify-options",
  [sym__verify_parameter] = "value",
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
  [sym__charset_value] = "value",
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
  [sym__model] = "value",
  [anon_sym_assert_DASHsigner] = "assert-signer",
  [anon_sym_auto_DASHkey_DASHlocate] = "auto-key-locate",
  [sym__key_locate_value] = "value",
  [anon_sym_keyid_DASHformat] = "keyid-format",
  [sym__keyid_format_value] = "value",
  [anon_sym_keyserver] = "keyserver",
  [anon_sym_completes_DASHneeded] = "completes-needed",
  [anon_sym_marginals_DASHneeded] = "marginals-needed",
  [anon_sym_tofu_DASHdefault_DASHpolicy] = "tofu-default-policy",
  [sym__tofu_policy_value] = "value",
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
  [aux_sym__group_token1] = "name",
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
  [sym__key_origin_value] = "value",
  [anon_sym_import_DASHoptions] = "import-options",
  [sym__import_parameter] = "value",
  [anon_sym_export_DASHoptions] = "export-options",
  [sym__export_parameter] = "value",
  [anon_sym_personal_DASHcipher_DASHpreferences] = "personal-cipher-preferences",
  [anon_sym_personal_DASHdigest_DASHpreferences] = "personal-digest-preferences",
  [anon_sym_personal_DASHcompress_DASHpreferences] = "personal-compress-preferences",
  [anon_sym_s2k_DASHcipher_DASHalgo] = "s2k-cipher-algo",
  [anon_sym_s2k_DASHdigest_DASHalgo] = "s2k-digest-algo",
  [anon_sym_s2k_DASHmode] = "s2k-mode",
  [aux_sym__s2k_mode_token1] = "number",
  [anon_sym_s2k_DASHcount] = "s2k-count",
  [anon_sym_compliance] = "compliance",
  [sym__compliance_value] = "value",
  [anon_sym_min_DASHrsa_DASHlength] = "min-rsa-length",
  [sym__require_compliance] = "_require_compliance",
  [anon_sym_debug_DASHlevel] = "debug-level",
  [sym__debug_level_value] = "value",
  [anon_sym_debug] = "debug",
  [aux_sym__debug_token1] = "number",
  [sym__debug_flag_value] = "value",
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = "debug-set-iobuf-size",
  [anon_sym_faked_DASHsystem_DASHtime] = "faked-system-time",
  [anon_sym_BANG] = "!",
  [anon_sym_status_DASHfd] = "status-fd",
  [anon_sym_status_DASHfile] = "status-file",
  [anon_sym_logger_DASHfd] = "logger-fd",
  [anon_sym_logger_DASHfile] = "logger-file",
  [anon_sym_log_DASHfile] = "log-file",
  [anon_sym_comment] = "comment",
  [anon_sym_sig_DASHnotation] = "sig-notation",
  [anon_sym_cert_DASHnotation] = "cert-notation",
  [anon_sym_set_DASHnotation] = "set-notation",
  [aux_sym__notation_token1] = "_notation_token1",
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
  [sym__pinentry_mode_value] = "value",
  [anon_sym_request_DASHorigin] = "request-origin",
  [sym__request_origin_value] = "value",
  [anon_sym_command_DASHfd] = "command-fd",
  [anon_sym_command_DASHfile] = "command-file",
  [anon_sym_weak_DASHdigest] = "weak-digest",
  [anon_sym_override_DASHsession_DASHkey] = "override-session-key",
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = "override-session-key-fd",
  [anon_sym_default_DASHsig_DASHexpire] = "default-sig-expire",
  [anon_sym_default_DASHcert_DASHexpire] = "default-cert-expire",
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = "default-new-key-algo",
  [sym__new_key_algo] = "value",
  [anon_sym_default_DASHpreference_DASHlist] = "default-preference-list",
  [anon_sym_default_DASHkeyserver_DASHurl] = "default-keyserver-url",
  [anon_sym_chuid] = "chuid",
  [sym_key] = "key",
  [sym_url] = "url",
  [sym_number] = "number",
  [sym_iso_time] = "iso_time",
  [sym_expire_time] = "expire_time",
  [aux_sym_string_token1] = "content",
  [sym_comment] = "comment",
  [sym__pubkey_algo_value] = "_pubkey_algo_value",
  [sym__cipher_algo_value] = "_cipher_algo_value",
  [sym__hash_algo_value] = "_hash_algo_value",
  [sym__compression_algo_value] = "_compression_algo_value",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_option] = "option",
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
  [sym__sig_notation] = "_sig_notation",
  [sym__cert_notation] = "_cert_notation",
  [sym__set_notation] = "_set_notation",
  [aux_sym__notation] = "_notation",
  [sym__notation_format] = "_notation_format",
  [sym__known_notation] = "_known_notation",
  [sym__sig_policy_url] = "_sig_policy_url",
  [sym__cert_policy_url] = "_cert_policy_url",
  [sym__set_policy_url] = "_set_policy_url",
  [sym__sig_keyserver_url] = "_sig_keyserver_url",
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
  [sym__default_preference_value] = "value",
  [sym__default_keyserver_url] = "_default_keyserver_url",
  [sym__chuid] = "_chuid",
  [sym_string] = "string",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__list_options_repeat1] = "_list_options_repeat1",
  [aux_sym__list_options_repeat2] = "_list_options_repeat2",
  [aux_sym__verify_options_repeat1] = "_verify_options_repeat1",
  [aux_sym__verify_options_repeat2] = "_verify_options_repeat2",
  [aux_sym__command_repeat1] = "_command_repeat1",
  [aux_sym__command_repeat2] = "_command_repeat2",
  [aux_sym__command_repeat3] = "_command_repeat3",
  [aux_sym__auto_key_locate_repeat1] = "_auto_key_locate_repeat1",
  [aux_sym__auto_key_locate_repeat2] = "_auto_key_locate_repeat2",
  [aux_sym__import_options_repeat1] = "_import_options_repeat1",
  [aux_sym__import_options_repeat2] = "_import_options_repeat2",
  [aux_sym__export_options_repeat1] = "_export_options_repeat1",
  [aux_sym__export_options_repeat2] = "_export_options_repeat2",
  [aux_sym__personal_cipher_preferences_repeat1] = "_personal_cipher_preferences_repeat1",
  [aux_sym__personal_cipher_preferences_repeat2] = "_personal_cipher_preferences_repeat2",
  [aux_sym__personal_digest_preferences_repeat1] = "_personal_digest_preferences_repeat1",
  [aux_sym__personal_digest_preferences_repeat2] = "_personal_digest_preferences_repeat2",
  [aux_sym__personal_compress_preferences_repeat1] = "_personal_compress_preferences_repeat1",
  [aux_sym__personal_compress_preferences_repeat2] = "_personal_compress_preferences_repeat2",
  [aux_sym__debug_repeat1] = "_debug_repeat1",
  [aux_sym__debug_repeat2] = "_debug_repeat2",
  [aux_sym__default_new_key_algo_repeat1] = "_default_new_key_algo_repeat1",
  [aux_sym__default_new_key_algo_repeat2] = "_default_new_key_algo_repeat2",
  [aux_sym__default_preference_list_repeat1] = "_default_preference_list_repeat1",
  [aux_sym__default_preference_list_repeat2] = "_default_preference_list_repeat2",
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
  [anon_sym_default_DASHkey] = anon_sym_default_DASHkey,
  [anon_sym_list_DASHoptions] = anon_sym_list_DASHoptions,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_verify_DASHoptions,
  [sym__verify_parameter] = sym__list_parameter,
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
  [sym__charset_value] = sym__list_parameter,
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
  [sym__model] = sym__list_parameter,
  [anon_sym_assert_DASHsigner] = anon_sym_assert_DASHsigner,
  [anon_sym_auto_DASHkey_DASHlocate] = anon_sym_auto_DASHkey_DASHlocate,
  [sym__key_locate_value] = sym__list_parameter,
  [anon_sym_keyid_DASHformat] = anon_sym_keyid_DASHformat,
  [sym__keyid_format_value] = sym__list_parameter,
  [anon_sym_keyserver] = anon_sym_keyserver,
  [anon_sym_completes_DASHneeded] = anon_sym_completes_DASHneeded,
  [anon_sym_marginals_DASHneeded] = anon_sym_marginals_DASHneeded,
  [anon_sym_tofu_DASHdefault_DASHpolicy] = anon_sym_tofu_DASHdefault_DASHpolicy,
  [sym__tofu_policy_value] = sym__list_parameter,
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
  [aux_sym__group_token1] = aux_sym__group_token1,
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
  [sym__key_origin_value] = sym__list_parameter,
  [anon_sym_import_DASHoptions] = anon_sym_import_DASHoptions,
  [sym__import_parameter] = sym__list_parameter,
  [anon_sym_export_DASHoptions] = anon_sym_export_DASHoptions,
  [sym__export_parameter] = sym__list_parameter,
  [anon_sym_personal_DASHcipher_DASHpreferences] = anon_sym_personal_DASHcipher_DASHpreferences,
  [anon_sym_personal_DASHdigest_DASHpreferences] = anon_sym_personal_DASHdigest_DASHpreferences,
  [anon_sym_personal_DASHcompress_DASHpreferences] = anon_sym_personal_DASHcompress_DASHpreferences,
  [anon_sym_s2k_DASHcipher_DASHalgo] = anon_sym_s2k_DASHcipher_DASHalgo,
  [anon_sym_s2k_DASHdigest_DASHalgo] = anon_sym_s2k_DASHdigest_DASHalgo,
  [anon_sym_s2k_DASHmode] = anon_sym_s2k_DASHmode,
  [aux_sym__s2k_mode_token1] = sym_number,
  [anon_sym_s2k_DASHcount] = anon_sym_s2k_DASHcount,
  [anon_sym_compliance] = anon_sym_compliance,
  [sym__compliance_value] = sym__list_parameter,
  [anon_sym_min_DASHrsa_DASHlength] = anon_sym_min_DASHrsa_DASHlength,
  [sym__require_compliance] = sym__require_compliance,
  [anon_sym_debug_DASHlevel] = anon_sym_debug_DASHlevel,
  [sym__debug_level_value] = sym__list_parameter,
  [anon_sym_debug] = anon_sym_debug,
  [aux_sym__debug_token1] = sym_number,
  [sym__debug_flag_value] = sym__list_parameter,
  [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = anon_sym_debug_DASHset_DASHiobuf_DASHsize,
  [anon_sym_faked_DASHsystem_DASHtime] = anon_sym_faked_DASHsystem_DASHtime,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_status_DASHfd] = anon_sym_status_DASHfd,
  [anon_sym_status_DASHfile] = anon_sym_status_DASHfile,
  [anon_sym_logger_DASHfd] = anon_sym_logger_DASHfd,
  [anon_sym_logger_DASHfile] = anon_sym_logger_DASHfile,
  [anon_sym_log_DASHfile] = anon_sym_log_DASHfile,
  [anon_sym_comment] = anon_sym_comment,
  [anon_sym_sig_DASHnotation] = anon_sym_sig_DASHnotation,
  [anon_sym_cert_DASHnotation] = anon_sym_cert_DASHnotation,
  [anon_sym_set_DASHnotation] = anon_sym_set_DASHnotation,
  [aux_sym__notation_token1] = aux_sym__notation_token1,
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
  [sym__pinentry_mode_value] = sym__list_parameter,
  [anon_sym_request_DASHorigin] = anon_sym_request_DASHorigin,
  [sym__request_origin_value] = sym__list_parameter,
  [anon_sym_command_DASHfd] = anon_sym_command_DASHfd,
  [anon_sym_command_DASHfile] = anon_sym_command_DASHfile,
  [anon_sym_weak_DASHdigest] = anon_sym_weak_DASHdigest,
  [anon_sym_override_DASHsession_DASHkey] = anon_sym_override_DASHsession_DASHkey,
  [anon_sym_override_DASHsession_DASHkey_DASHfd] = anon_sym_override_DASHsession_DASHkey_DASHfd,
  [anon_sym_default_DASHsig_DASHexpire] = anon_sym_default_DASHsig_DASHexpire,
  [anon_sym_default_DASHcert_DASHexpire] = anon_sym_default_DASHcert_DASHexpire,
  [anon_sym_default_DASHnew_DASHkey_DASHalgo] = anon_sym_default_DASHnew_DASHkey_DASHalgo,
  [sym__new_key_algo] = sym__list_parameter,
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
  [sym__sig_notation] = sym__sig_notation,
  [sym__cert_notation] = sym__cert_notation,
  [sym__set_notation] = sym__set_notation,
  [aux_sym__notation] = aux_sym__notation,
  [sym__notation_format] = sym__notation_format,
  [sym__known_notation] = sym__known_notation,
  [sym__sig_policy_url] = sym__sig_policy_url,
  [sym__cert_policy_url] = sym__cert_policy_url,
  [sym__set_policy_url] = sym__set_policy_url,
  [sym__sig_keyserver_url] = sym__sig_keyserver_url,
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
  [sym__default_preference_value] = sym__list_parameter,
  [sym__default_keyserver_url] = sym__default_keyserver_url,
  [sym__chuid] = sym__chuid,
  [sym_string] = sym_string,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__list_options_repeat1] = aux_sym__list_options_repeat1,
  [aux_sym__list_options_repeat2] = aux_sym__list_options_repeat2,
  [aux_sym__verify_options_repeat1] = aux_sym__verify_options_repeat1,
  [aux_sym__verify_options_repeat2] = aux_sym__verify_options_repeat2,
  [aux_sym__command_repeat1] = aux_sym__command_repeat1,
  [aux_sym__command_repeat2] = aux_sym__command_repeat2,
  [aux_sym__command_repeat3] = aux_sym__command_repeat3,
  [aux_sym__auto_key_locate_repeat1] = aux_sym__auto_key_locate_repeat1,
  [aux_sym__auto_key_locate_repeat2] = aux_sym__auto_key_locate_repeat2,
  [aux_sym__import_options_repeat1] = aux_sym__import_options_repeat1,
  [aux_sym__import_options_repeat2] = aux_sym__import_options_repeat2,
  [aux_sym__export_options_repeat1] = aux_sym__export_options_repeat1,
  [aux_sym__export_options_repeat2] = aux_sym__export_options_repeat2,
  [aux_sym__personal_cipher_preferences_repeat1] = aux_sym__personal_cipher_preferences_repeat1,
  [aux_sym__personal_cipher_preferences_repeat2] = aux_sym__personal_cipher_preferences_repeat2,
  [aux_sym__personal_digest_preferences_repeat1] = aux_sym__personal_digest_preferences_repeat1,
  [aux_sym__personal_digest_preferences_repeat2] = aux_sym__personal_digest_preferences_repeat2,
  [aux_sym__personal_compress_preferences_repeat1] = aux_sym__personal_compress_preferences_repeat1,
  [aux_sym__personal_compress_preferences_repeat2] = aux_sym__personal_compress_preferences_repeat2,
  [aux_sym__debug_repeat1] = aux_sym__debug_repeat1,
  [aux_sym__debug_repeat2] = aux_sym__debug_repeat2,
  [aux_sym__default_new_key_algo_repeat1] = aux_sym__default_new_key_algo_repeat1,
  [aux_sym__default_new_key_algo_repeat2] = aux_sym__default_new_key_algo_repeat2,
  [aux_sym__default_preference_list_repeat1] = aux_sym__default_preference_list_repeat1,
  [aux_sym__default_preference_list_repeat2] = aux_sym__default_preference_list_repeat2,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_verify_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__verify_parameter] = {
    .visible = true,
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
    .visible = true,
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
    .visible = true,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_keyid_DASHformat] = {
    .visible = true,
    .named = false,
  },
  [sym__keyid_format_value] = {
    .visible = true,
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
    .visible = true,
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
  [aux_sym__group_token1] = {
    .visible = true,
    .named = true,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_import_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__import_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export_DASHoptions] = {
    .visible = true,
    .named = false,
  },
  [sym__export_parameter] = {
    .visible = true,
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
    .visible = true,
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
    .visible = true,
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
    .visible = true,
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
  [anon_sym_sig_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cert_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_DASHnotation] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__notation_token1] = {
    .visible = false,
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
    .visible = true,
    .named = true,
  },
  [anon_sym_request_DASHorigin] = {
    .visible = true,
    .named = false,
  },
  [sym__request_origin_value] = {
    .visible = true,
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
    .visible = true,
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
    .visible = true,
    .named = true,
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
  [sym__sig_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__cert_notation] = {
    .visible = false,
    .named = true,
  },
  [sym__set_notation] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__notation] = {
    .visible = false,
    .named = false,
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
  [sym__default_preference_value] = {
    .visible = true,
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
  [aux_sym__list_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__verify_options_repeat2] = {
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
  [aux_sym__auto_key_locate_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__import_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__export_options_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_cipher_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_digest_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__personal_compress_preferences_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__debug_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_new_key_algo_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_preference_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__default_preference_list_repeat2] = {
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
  field_value = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [7] = {.index = 1, .length = 1},
  [9] = {.index = 1, .length = 1},
  [10] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 0, .inherited = true},
  [1] =
    {field_value, 4},
  [2] =
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = aux_sym_string_token1,
  },
  [3] = {
    [2] = sym__list_parameter,
  },
  [4] = {
    [2] = sym_url,
  },
  [5] = {
    [3] = sym_url,
  },
  [6] = {
    [1] = aux_sym_string_token1,
  },
  [8] = {
    [1] = sym__list_parameter,
  },
  [9] = {
    [2] = aux_sym__group_token1,
  },
  [10] = {
    [3] = aux_sym__group_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__notation, 3,
    aux_sym__notation,
    aux_sym__group_token1,
    sym_url,
  aux_sym__command_repeat1, 2,
    aux_sym__command_repeat1,
    aux_sym_string_token1,
  aux_sym__command_repeat2, 2,
    aux_sym__command_repeat2,
    aux_sym_string_token1,
  aux_sym__command_repeat3, 2,
    aux_sym__command_repeat3,
    aux_sym_string_token1,
  aux_sym_string_repeat1, 2,
    aux_sym_string_repeat1,
    aux_sym_string_token1,
  aux_sym_string_repeat2, 2,
    aux_sym_string_repeat2,
    aux_sym_string_token1,
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
  [50] = 12,
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
  [137] = 82,
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
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
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
      if (eof) ADVANCE(2812);
      if (lookahead == '!') ADVANCE(3049);
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == ',') ADVANCE(2936);
      if (lookahead == '2') ADVANCE(2941);
      if (lookahead == '=') ADVANCE(3000);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2945);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(2945);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2941);
      if (lookahead != 0) ADVANCE(2941);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2813);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2813);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3152);
      if (lookahead != 0) ADVANCE(2941);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2813);
      if (lookahead == '\r') ADVANCE(3060);
      if (lookahead == '%') ADVANCE(3061);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3152);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(3059);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(3049);
      if (lookahead == '%') ADVANCE(3061);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3059);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2942);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2941);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '%') ADVANCE(2947);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(2943);
      if (lookahead == '\\') ADVANCE(2946);
      if (lookahead != 0) ADVANCE(2945);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead == '0') ADVANCE(3141);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(2944);
      if (lookahead == '\'') ADVANCE(2950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(3061);
      if (lookahead == '=') ADVANCE(3000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(3059);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(2953);
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(2949);
      if (lookahead == '\\') ADVANCE(2952);
      if (lookahead != 0) ADVANCE(2951);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(715);
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(606);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(1086);
      if (lookahead == 'g') ADVANCE(903);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(608);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(609);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(524);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(1105);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(1435);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(458);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(531);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(709);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(2656);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(1819);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(1617);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(1436);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(1211);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(1098);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(604);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(431);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(2808);
      if (lookahead == '.') ADVANCE(2780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(677);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(395);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(929);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(611);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(617);
      if (lookahead == 's') ADVANCE(2468);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(1039);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(1254);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(468);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(1048);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(683);
      if (lookahead == 'g') ADVANCE(2175);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(710);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(1473);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(2283);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(1475);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(585);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(1464);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(525);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(2639);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(260);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(293);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(562);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(2742);
      if (lookahead == 'b') ADVANCE(1309);
      if (lookahead == 'c') ADVANCE(844);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(2681);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == '8') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(261);
      if (lookahead == 'R') ADVANCE(330);
      if (lookahead == 'S') ADVANCE(329);
      if (lookahead == 'a') ADVANCE(2312);
      if (lookahead == 'b') ADVANCE(401);
      if (lookahead == 'd') ADVANCE(892);
      if (lookahead == 'g') ADVANCE(1780);
      if (lookahead == 'l') ADVANCE(1918);
      if (lookahead == 'n') ADVANCE(1930);
      if (lookahead == 'o') ADVANCE(2034);
      if (lookahead == 'p') ADVANCE(1160);
      if (lookahead == 'r') ADVANCE(906);
      if (lookahead == 'u') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2965);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(568);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(2677);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(2654);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(1235);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(645);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(1101);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(2644);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(1506);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(649);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(1096);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(1226);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(2529);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(2313);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(1078);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(567);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(2626);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(1082);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(510);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(1184);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(1083);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(794);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(2360);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(1915);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(1097);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(538);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(2012);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(2014);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(1618);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(2072);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(1967);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(2614);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(1092);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(2358);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(1580);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(1562);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(542);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(773);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(1901);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(803);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(2408);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(1438);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(2031);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(2354);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(1224);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(651);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(2314);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(392);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(1761);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(2630);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(2470);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(1809);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(1471);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(1903);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(2355);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(1858);
      if (lookahead == 'i') ADVANCE(655);
      if (lookahead == 'r') ADVANCE(1299);
      if (lookahead == 's') ADVANCE(818);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(1407);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(2599);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(2357);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(2390);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(2475);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(1788);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(1816);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(2166);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(696);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(1440);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(826);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(2600);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(2320);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(1529);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(2478);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(1441);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(2788);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(1267);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(2601);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(2340);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(1279);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(2485);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(1442);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(1524);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(2602);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(2341);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(2490);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(1586);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(1444);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(2603);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(2160);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(2604);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(663);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(1447);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(2605);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(2363);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(2252);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(1448);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(2362);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(2330);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(2153);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(873);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(2054);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(1100);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(2356);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(511);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(2059);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(620);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(2616);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(1908);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(1460);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(592);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(460);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(1782);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(1783);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(2536);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(1567);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(2170);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(2388);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(569);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(2619);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(1919);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(473);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(1793);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(2544);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(2621);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(1926);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(2661);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(2623);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(2663);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(1055);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(1402);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(1463);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(2543);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(1111);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(2039);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(1582);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(1014);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(1655);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'e') ADVANCE(691);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(1792);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(1957);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(2796);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(2796);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2779);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(1587);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(1018);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(475);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(1056);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(1119);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(1028);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(477);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(1113);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(1659);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(478);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(1467);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(1114);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(1660);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(479);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(1115);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(1661);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(480);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(1120);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(482);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(610);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(2690);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(2665);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(1052);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(1808);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(2256);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(2056);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(1472);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(2058);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(1972);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(2401);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(703);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(2410);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(2670);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(1054);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(2767);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(1601);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(1074);
      END_STATE();
    case 245:
      if (lookahead == '/') ADVANCE(2808);
      END_STATE();
    case 246:
      if (lookahead == '/') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == '0') ADVANCE(3150);
      END_STATE();
    case 248:
      if (lookahead == '0') ADVANCE(275);
      END_STATE();
    case 249:
      if (lookahead == '0') ADVANCE(2881);
      END_STATE();
    case 250:
      if (lookahead == '0') ADVANCE(2879);
      END_STATE();
    case 251:
      if (lookahead == '0') ADVANCE(3037);
      if (lookahead == 'c') ADVANCE(3033);
      if (lookahead == 'e') ADVANCE(3038);
      if (lookahead == 'f') ADVANCE(3036);
      if (lookahead == 'h') ADVANCE(417);
      if (lookahead == 'i') ADVANCE(1898);
      if (lookahead == 'l') ADVANCE(1833);
      if (lookahead == 'm') ADVANCE(832);
      if (lookahead == 'n') ADVANCE(1920);
      if (lookahead == 'p') ADVANCE(463);
      if (lookahead == 's') ADVANCE(1218);
      if (lookahead == 't') ADVANCE(2215);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'd')) ADVANCE(3045);
      END_STATE();
    case 252:
      if (lookahead == '0') ADVANCE(3133);
      if (lookahead == 'B') ADVANCE(360);
      if (lookahead == 'U') ADVANCE(1671);
      if (lookahead == 'Z') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(1502);
      if (lookahead == 'b') ADVANCE(2597);
      if (lookahead == 'c') ADVANCE(453);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(2219);
      if (lookahead == 'h') ADVANCE(1432);
      if (lookahead == 'i') ADVANCE(1666);
      if (lookahead == 'k') ADVANCE(767);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == 'm') ADVANCE(994);
      if (lookahead == 'n') ADVANCE(1836);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(768);
      if (lookahead == 's') ADVANCE(862);
      if (lookahead == 't') ADVANCE(1891);
      if (lookahead == 'w') ADVANCE(1437);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3139);
      END_STATE();
    case 253:
      if (lookahead == '0') ADVANCE(3025);
      END_STATE();
    case 254:
      if (lookahead == '0') ADVANCE(3026);
      END_STATE();
    case 255:
      if (lookahead == '0') ADVANCE(3144);
      if (lookahead == '3') ADVANCE(315);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead == 'B') ADVANCE(337);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(1940);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2778);
      END_STATE();
    case 256:
      if (lookahead == '0') ADVANCE(248);
      END_STATE();
    case 257:
      if (lookahead == '1') ADVANCE(3150);
      if (lookahead == '2') ADVANCE(271);
      if (lookahead == '3') ADVANCE(290);
      if (lookahead == '5') ADVANCE(263);
      END_STATE();
    case 258:
      if (lookahead == '1') ADVANCE(256);
      END_STATE();
    case 259:
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(282);
      END_STATE();
    case 260:
      if (lookahead == '1') ADVANCE(2961);
      if (lookahead == '2') ADVANCE(2960);
      END_STATE();
    case 261:
      if (lookahead == '1') ADVANCE(2965);
      END_STATE();
    case 262:
      if (lookahead == '1') ADVANCE(286);
      END_STATE();
    case 263:
      if (lookahead == '1') ADVANCE(267);
      END_STATE();
    case 264:
      if (lookahead == '2') ADVANCE(1433);
      if (lookahead == 'e') ADVANCE(1497);
      if (lookahead == 'h') ADVANCE(1840);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead == 'k') ADVANCE(1243);
      if (lookahead == 'o') ADVANCE(2173);
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 265:
      if (lookahead == '2') ADVANCE(3151);
      END_STATE();
    case 266:
      if (lookahead == '2') ADVANCE(3148);
      END_STATE();
    case 267:
      if (lookahead == '2') ADVANCE(3150);
      END_STATE();
    case 268:
      if (lookahead == '2') ADVANCE(277);
      if (lookahead == '4') ADVANCE(294);
      END_STATE();
    case 269:
      if (lookahead == '2') ADVANCE(2821);
      END_STATE();
    case 270:
      if (lookahead == '2') ADVANCE(2822);
      END_STATE();
    case 271:
      if (lookahead == '2') ADVANCE(276);
      if (lookahead == '5') ADVANCE(285);
      END_STATE();
    case 272:
      if (lookahead == '2') ADVANCE(288);
      if (lookahead == '9') ADVANCE(266);
      END_STATE();
    case 273:
      if (lookahead == '2') ADVANCE(31);
      END_STATE();
    case 274:
      if (lookahead == '2') ADVANCE(280);
      if (lookahead == '4') ADVANCE(296);
      END_STATE();
    case 275:
      if (lookahead == '3') ADVANCE(3015);
      END_STATE();
    case 276:
      if (lookahead == '4') ADVANCE(3150);
      END_STATE();
    case 277:
      if (lookahead == '4') ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == '4') ADVANCE(249);
      END_STATE();
    case 279:
      if (lookahead == '4') ADVANCE(253);
      END_STATE();
    case 280:
      if (lookahead == '4') ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '5') ADVANCE(3148);
      END_STATE();
    case 282:
      if (lookahead == '5') ADVANCE(284);
      END_STATE();
    case 283:
      if (lookahead == '5') ADVANCE(300);
      END_STATE();
    case 284:
      if (lookahead == '6') ADVANCE(3148);
      END_STATE();
    case 285:
      if (lookahead == '6') ADVANCE(3150);
      END_STATE();
    case 286:
      if (lookahead == '6') ADVANCE(247);
      END_STATE();
    case 287:
      if (lookahead == '7') ADVANCE(2882);
      if (lookahead == '8') ADVANCE(2883);
      END_STATE();
    case 288:
      if (lookahead == '8') ADVANCE(3148);
      END_STATE();
    case 289:
      if (lookahead == '8') ADVANCE(2960);
      END_STATE();
    case 290:
      if (lookahead == '8') ADVANCE(276);
      END_STATE();
    case 291:
      if (lookahead == '8') ADVANCE(283);
      END_STATE();
    case 292:
      if (lookahead == '8') ADVANCE(250);
      END_STATE();
    case 293:
      if (lookahead == '8') ADVANCE(291);
      END_STATE();
    case 294:
      if (lookahead == '8') ADVANCE(292);
      END_STATE();
    case 295:
      if (lookahead == '8') ADVANCE(254);
      END_STATE();
    case 296:
      if (lookahead == '8') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '8') ADVANCE(91);
      END_STATE();
    case 298:
      if (lookahead == '8') ADVANCE(237);
      END_STATE();
    case 299:
      if (lookahead == '9') ADVANCE(266);
      END_STATE();
    case 300:
      if (lookahead == '9') ADVANCE(55);
      END_STATE();
    case 301:
      if (lookahead == ':') ADVANCE(246);
      END_STATE();
    case 302:
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 303:
      if (lookahead == ':') ADVANCE(2972);
      END_STATE();
    case 304:
      if (lookahead == 'A') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 305:
      if (lookahead == 'A') ADVANCE(3147);
      END_STATE();
    case 306:
      if (lookahead == 'A') ADVANCE(257);
      END_STATE();
    case 307:
      if (lookahead == 'A') ADVANCE(3148);
      END_STATE();
    case 308:
      if (lookahead == 'A') ADVANCE(259);
      END_STATE();
    case 309:
      if (lookahead == 'A') ADVANCE(342);
      END_STATE();
    case 310:
      if (lookahead == 'B') ADVANCE(3151);
      END_STATE();
    case 311:
      if (lookahead == 'C') ADVANCE(313);
      if (lookahead == 'D') ADVANCE(317);
      if (lookahead == 'L') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 312:
      if (lookahead == 'D') ADVANCE(323);
      END_STATE();
    case 313:
      if (lookahead == 'D') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 314:
      if (lookahead == 'D') ADVANCE(262);
      END_STATE();
    case 315:
      if (lookahead == 'D') ADVANCE(324);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2777);
      END_STATE();
    case 316:
      if (lookahead == 'D') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 317:
      if (lookahead == 'D') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 318:
      if (lookahead == 'E') ADVANCE(339);
      END_STATE();
    case 319:
      if (lookahead == 'E') ADVANCE(341);
      END_STATE();
    case 320:
      if (lookahead == 'E') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 321:
      if (lookahead == 'E') ADVANCE(351);
      END_STATE();
    case 322:
      if (lookahead == 'E') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 323:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 324:
      if (lookahead == 'E') ADVANCE(353);
      END_STATE();
    case 325:
      if (lookahead == 'F') ADVANCE(333);
      END_STATE();
    case 326:
      if (lookahead == 'G') ADVANCE(3147);
      END_STATE();
    case 327:
      if (lookahead == 'H') ADVANCE(3147);
      if (lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 328:
      if (lookahead == 'H') ADVANCE(3148);
      END_STATE();
    case 329:
      if (lookahead == 'H') ADVANCE(306);
      END_STATE();
    case 330:
      if (lookahead == 'I') ADVANCE(348);
      END_STATE();
    case 331:
      if (lookahead == 'I') ADVANCE(348);
      if (lookahead == 'S') ADVANCE(305);
      END_STATE();
    case 332:
      if (lookahead == 'I') ADVANCE(310);
      END_STATE();
    case 333:
      if (lookahead == 'I') ADVANCE(355);
      END_STATE();
    case 334:
      if (lookahead == 'I') ADVANCE(346);
      if (lookahead == 'L') ADVANCE(332);
      END_STATE();
    case 335:
      if (lookahead == 'I') ADVANCE(347);
      END_STATE();
    case 336:
      if (lookahead == 'I') ADVANCE(308);
      END_STATE();
    case 337:
      if (lookahead == 'L') ADVANCE(345);
      END_STATE();
    case 338:
      if (lookahead == 'L') ADVANCE(345);
      if (lookahead == 'Z') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 339:
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'L') ADVANCE(336);
      END_STATE();
    case 341:
      if (lookahead == 'M') ADVANCE(314);
      END_STATE();
    case 342:
      if (lookahead == 'M') ADVANCE(318);
      if (lookahead == 'S') ADVANCE(356);
      END_STATE();
    case 343:
      if (lookahead == 'M') ADVANCE(318);
      if (lookahead == 'S') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 344:
      if (lookahead == 'O') ADVANCE(325);
      END_STATE();
    case 345:
      if (lookahead == 'O') ADVANCE(358);
      END_STATE();
    case 346:
      if (lookahead == 'P') ADVANCE(3151);
      END_STATE();
    case 347:
      if (lookahead == 'P') ADVANCE(265);
      END_STATE();
    case 348:
      if (lookahead == 'P') ADVANCE(319);
      END_STATE();
    case 349:
      if (lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 350:
      if (lookahead == 'S') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 351:
      if (lookahead == 'S') ADVANCE(3149);
      END_STATE();
    case 352:
      if (lookahead == 'S') ADVANCE(3149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 353:
      if (lookahead == 'S') ADVANCE(3148);
      END_STATE();
    case 354:
      if (lookahead == 'S') ADVANCE(3148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 355:
      if (lookahead == 'S') ADVANCE(328);
      END_STATE();
    case 356:
      if (lookahead == 'T') ADVANCE(281);
      END_STATE();
    case 357:
      if (lookahead == 'T') ADVANCE(2799);
      END_STATE();
    case 358:
      if (lookahead == 'W') ADVANCE(325);
      END_STATE();
    case 359:
      if (lookahead == 'W') ADVANCE(344);
      END_STATE();
    case 360:
      if (lookahead == 'Z') ADVANCE(335);
      END_STATE();
    case 361:
      if (lookahead == 'a') ADVANCE(521);
      if (lookahead == 'z') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 362:
      if (lookahead == 'a') ADVANCE(1692);
      if (lookahead == 'e') ADVANCE(495);
      if (lookahead == 'i') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 363:
      if (lookahead == 'a') ADVANCE(1434);
      if (lookahead == 'i') ADVANCE(1499);
      if (lookahead == 'o') ADVANCE(2068);
      if (lookahead == 'u') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 364:
      if (lookahead == 'a') ADVANCE(1690);
      if (lookahead == 'i') ADVANCE(1691);
      if (lookahead == 'o') ADVANCE(644);
      END_STATE();
    case 365:
      if (lookahead == 'a') ADVANCE(2307);
      if (lookahead == 'e') ADVANCE(2092);
      if (lookahead == 'g') ADVANCE(1978);
      if (lookahead == 'h') ADVANCE(1949);
      if (lookahead == 'i') ADVANCE(1762);
      if (lookahead == 'r') ADVANCE(780);
      END_STATE();
    case 366:
      if (lookahead == 'a') ADVANCE(509);
      if (lookahead == 'c') ADVANCE(2091);
      END_STATE();
    case 367:
      if (lookahead == 'a') ADVANCE(1504);
      if (lookahead == 'c') ADVANCE(1844);
      if (lookahead == 'd') ADVANCE(785);
      if (lookahead == 'e') ADVANCE(1665);
      if (lookahead == 'f') ADVANCE(1909);
      if (lookahead == 'g') ADVANCE(2090);
      if (lookahead == 'i') ADVANCE(1693);
      if (lookahead == 'k') ADVANCE(788);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'p') ADVANCE(825);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead == 's') ADVANCE(793);
      if (lookahead == 't') ADVANCE(1057);
      if (lookahead == 'u') ADVANCE(2416);
      END_STATE();
    case 368:
      if (lookahead == 'a') ADVANCE(2920);
      END_STATE();
    case 369:
      if (lookahead == 'a') ADVANCE(2819);
      END_STATE();
    case 370:
      if (lookahead == 'a') ADVANCE(2820);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(1977);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(2726);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(2580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(533);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(2451);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(1768);
      if (lookahead == 'e') ADVANCE(1702);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(605);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(2020);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(2071);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(1815);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(1696);
      if (lookahead == 'e') ADVANCE(2067);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(1596);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(2352);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(2627);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1749);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1604);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(530);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(2450);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(1511);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(1606);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(2512);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'c') ADVANCE(1550);
      if (lookahead == 'd') ADVANCE(388);
      if (lookahead == 'l') ADVANCE(1906);
      if (lookahead == 'm') ADVANCE(1258);
      if (lookahead == 'o') ADVANCE(2051);
      if (lookahead == 'r') ADVANCE(781);
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(1576);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(1674);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(1644);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(2164);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead == 'r') ADVANCE(1850);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(2309);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(1477);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(674);
      if (lookahead == 'b') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(2696);
      if (lookahead == 'g') ADVANCE(2606);
      if (lookahead == 'n') ADVANCE(1935);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(2968);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(2428);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(541);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(1986);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(2180);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(2106);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1687);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(2436);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(1334);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(1493);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(1494);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1495);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(2112);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(2353);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(2442);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(2088);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(1450);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(1508);
      if (lookahead == 'i') ADVANCE(1190);
      if (lookahead == 'l') ADVANCE(912);
      if (lookahead == 's') ADVANCE(974);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(1522);
      if (lookahead == 'k') ADVANCE(26);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(2504);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(2334);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == 'e') ADVANCE(2264);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(1551);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(2474);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(2497);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(2177);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'o') ADVANCE(534);
      if (lookahead == 's') ADVANCE(1257);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(2732);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(1890);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(2507);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1179);
      if (lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(2008);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(2500);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(2117);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(1535);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1624);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(2511);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1443);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(1577);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(1625);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(2514);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(1751);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead == 'i') ADVANCE(2154);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(2733);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(1597);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(2516);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(1763);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1631);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(1769);
      if (lookahead == 'e') ADVANCE(2137);
      if (lookahead == 'l') ADVANCE(471);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1772);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(1636);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(2332);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(1548);
      if (lookahead == 's') ADVANCE(901);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(2611);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(1544);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(566);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(1646);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(583);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(2198);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1784);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(2518);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(2613);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(1549);
      if (lookahead == 'l') ADVANCE(940);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(1647);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(2187);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(2376);
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(2520);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(1553);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(2522);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(1555);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(2523);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(1557);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(1561);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(1564);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(1566);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(1568);
      END_STATE();
    case 482:
      if (lookahead == 'a') ADVANCE(1569);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead == 'p') ADVANCE(1503);
      END_STATE();
    case 484:
      if (lookahead == 'a') ADVANCE(2528);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(2631);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(2235);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(2541);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(1579);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(1584);
      END_STATE();
    case 490:
      if (lookahead == 'a') ADVANCE(515);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(2566);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(2261);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(2063);
      END_STATE();
    case 495:
      if (lookahead == 'b') ADVANCE(2577);
      if (lookahead == 'f') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(2805);
      END_STATE();
    case 496:
      if (lookahead == 'b') ADVANCE(2872);
      END_STATE();
    case 497:
      if (lookahead == 'b') ADVANCE(2836);
      END_STATE();
    case 498:
      if (lookahead == 'b') ADVANCE(2837);
      END_STATE();
    case 499:
      if (lookahead == 'b') ADVANCE(1079);
      END_STATE();
    case 500:
      if (lookahead == 'b') ADVANCE(1851);
      if (lookahead == 'i') ADVANCE(1095);
      END_STATE();
    case 501:
      if (lookahead == 'b') ADVANCE(2586);
      END_STATE();
    case 502:
      if (lookahead == 'b') ADVANCE(2590);
      END_STATE();
    case 503:
      if (lookahead == 'b') ADVANCE(2595);
      END_STATE();
    case 504:
      if (lookahead == 'b') ADVANCE(2000);
      END_STATE();
    case 505:
      if (lookahead == 'b') ADVANCE(893);
      END_STATE();
    case 506:
      if (lookahead == 'b') ADVANCE(406);
      END_STATE();
    case 507:
      if (lookahead == 'b') ADVANCE(1841);
      END_STATE();
    case 508:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 509:
      if (lookahead == 'b') ADVANCE(1547);
      END_STATE();
    case 510:
      if (lookahead == 'b') ADVANCE(1525);
      END_STATE();
    case 511:
      if (lookahead == 'b') ADVANCE(1527);
      END_STATE();
    case 512:
      if (lookahead == 'b') ADVANCE(2628);
      END_STATE();
    case 513:
      if (lookahead == 'b') ADVANCE(1458);
      END_STATE();
    case 514:
      if (lookahead == 'b') ADVANCE(1560);
      END_STATE();
    case 515:
      if (lookahead == 'b') ADVANCE(1570);
      END_STATE();
    case 516:
      if (lookahead == 'b') ADVANCE(1573);
      END_STATE();
    case 517:
      if (lookahead == 'b') ADVANCE(1465);
      END_STATE();
    case 518:
      if (lookahead == 'b') ADVANCE(1466);
      END_STATE();
    case 519:
      if (lookahead == 'b') ADVANCE(1468);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(1073);
      END_STATE();
    case 521:
      if (lookahead == 'c') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 522:
      if (lookahead == 'c') ADVANCE(423);
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 523:
      if (lookahead == 'c') ADVANCE(268);
      END_STATE();
    case 524:
      if (lookahead == 'c') ADVANCE(1420);
      if (lookahead == 'd') ADVANCE(1246);
      if (lookahead == 'm') ADVANCE(1928);
      END_STATE();
    case 525:
      if (lookahead == 'c') ADVANCE(1895);
      if (lookahead == 's') ADVANCE(981);
      END_STATE();
    case 526:
      if (lookahead == 'c') ADVANCE(3046);
      END_STATE();
    case 527:
      if (lookahead == 'c') ADVANCE(2975);
      END_STATE();
    case 528:
      if (lookahead == 'c') ADVANCE(3030);
      END_STATE();
    case 529:
      if (lookahead == 'c') ADVANCE(1398);
      if (lookahead == 'd') ADVANCE(1401);
      END_STATE();
    case 530:
      if (lookahead == 'c') ADVANCE(1452);
      END_STATE();
    case 531:
      if (lookahead == 'c') ADVANCE(1213);
      if (lookahead == 'k') ADVANCE(933);
      END_STATE();
    case 532:
      if (lookahead == 'c') ADVANCE(1500);
      if (lookahead == 'p') ADVANCE(2618);
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 533:
      if (lookahead == 'c') ADVANCE(2768);
      END_STATE();
    case 534:
      if (lookahead == 'c') ADVANCE(496);
      END_STATE();
    case 535:
      if (lookahead == 'c') ADVANCE(1426);
      END_STATE();
    case 536:
      if (lookahead == 'c') ADVANCE(1842);
      END_STATE();
    case 537:
      if (lookahead == 'c') ADVANCE(1427);
      END_STATE();
    case 538:
      if (lookahead == 'c') ADVANCE(1214);
      END_STATE();
    case 539:
      if (lookahead == 'c') ADVANCE(1428);
      END_STATE();
    case 540:
      if (lookahead == 'c') ADVANCE(1429);
      END_STATE();
    case 541:
      if (lookahead == 'c') ADVANCE(1430);
      END_STATE();
    case 542:
      if (lookahead == 'c') ADVANCE(1212);
      END_STATE();
    case 543:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(433);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(1856);
      if (lookahead == 'f') ADVANCE(1310);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'k') ADVANCE(796);
      if (lookahead == 's') ADVANCE(985);
      if (lookahead == 'w') ADVANCE(1455);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(394);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(2718);
      END_STATE();
    case 548:
      if (lookahead == 'c') ADVANCE(2267);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(1378);
      END_STATE();
    case 550:
      if (lookahead == 'c') ADVANCE(2156);
      if (lookahead == 'm') ADVANCE(699);
      if (lookahead == 't') ADVANCE(1247);
      if (lookahead == 'v') ADVANCE(396);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(1874);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(729);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(2438);
      END_STATE();
    case 555:
      if (lookahead == 'c') ADVANCE(2445);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(756);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(868);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(842);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(1219);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(1968);
      if (lookahead == 's') ADVANCE(1072);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(1622);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(1249);
      if (lookahead == 'q') ADVANCE(2576);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(436);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(1221);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 568:
      if (lookahead == 'c') ADVANCE(2266);
      if (lookahead == 's') ADVANCE(993);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(1222);
      END_STATE();
    case 570:
      if (lookahead == 'c') ADVANCE(2200);
      END_STATE();
    case 571:
      if (lookahead == 'c') ADVANCE(1421);
      if (lookahead == 'd') ADVANCE(1284);
      if (lookahead == 'l') ADVANCE(493);
      if (lookahead == 'p') ADVANCE(2634);
      if (lookahead == 's') ADVANCE(1403);
      END_STATE();
    case 572:
      if (lookahead == 'c') ADVANCE(2136);
      END_STATE();
    case 573:
      if (lookahead == 'c') ADVANCE(1469);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 575:
      if (lookahead == 'c') ADVANCE(1628);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(413);
      if (lookahead == 'o') ADVANCE(1997);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(437);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(1446);
      END_STATE();
    case 579:
      if (lookahead == 'c') ADVANCE(1632);
      END_STATE();
    case 580:
      if (lookahead == 'c') ADVANCE(415);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(2142);
      END_STATE();
    case 582:
      if (lookahead == 'c') ADVANCE(2738);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(1449);
      END_STATE();
    case 584:
      if (lookahead == 'c') ADVANCE(872);
      END_STATE();
    case 585:
      if (lookahead == 'c') ADVANCE(1554);
      if (lookahead == 'e') ADVANCE(2697);
      if (lookahead == 'l') ADVANCE(1969);
      if (lookahead == 'm') ADVANCE(1409);
      if (lookahead == 'r') ADVANCE(878);
      if (lookahead == 's') ADVANCE(1220);
      END_STATE();
    case 586:
      if (lookahead == 'c') ADVANCE(874);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(904);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(875);
      END_STATE();
    case 589:
      if (lookahead == 'c') ADVANCE(891);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 591:
      if (lookahead == 'c') ADVANCE(444);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(461);
      END_STATE();
    case 593:
      if (lookahead == 'c') ADVANCE(1365);
      END_STATE();
    case 594:
      if (lookahead == 'c') ADVANCE(2749);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(1376);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(2753);
      END_STATE();
    case 597:
      if (lookahead == 'c') ADVANCE(1384);
      END_STATE();
    case 598:
      if (lookahead == 'c') ADVANCE(2755);
      END_STATE();
    case 599:
      if (lookahead == 'c') ADVANCE(1389);
      END_STATE();
    case 600:
      if (lookahead == 'c') ADVANCE(2756);
      END_STATE();
    case 601:
      if (lookahead == 'c') ADVANCE(1393);
      END_STATE();
    case 602:
      if (lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 603:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 604:
      if (lookahead == 'c') ADVANCE(1955);
      if (lookahead == 'd') ADVANCE(1038);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(2531);
      END_STATE();
    case 606:
      if (lookahead == 'c') ADVANCE(1005);
      if (lookahead == 's') ADVANCE(1308);
      END_STATE();
    case 607:
      if (lookahead == 'c') ADVANCE(489);
      END_STATE();
    case 608:
      if (lookahead == 'c') ADVANCE(1010);
      if (lookahead == 'o') ADVANCE(2633);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(1012);
      if (lookahead == 'r') ADVANCE(2311);
      END_STATE();
    case 610:
      if (lookahead == 'c') ADVANCE(1024);
      if (lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 611:
      if (lookahead == 'c') ADVANCE(1030);
      if (lookahead == 'k') ADVANCE(801);
      if (lookahead == 'n') ADVANCE(938);
      if (lookahead == 'p') ADVANCE(2138);
      if (lookahead == 'r') ADVANCE(1016);
      if (lookahead == 's') ADVANCE(1419);
      END_STATE();
    case 612:
      if (lookahead == 'c') ADVANCE(2259);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(1470);
      END_STATE();
    case 615:
      if (lookahead == 'c') ADVANCE(1971);
      END_STATE();
    case 616:
      if (lookahead == 'c') ADVANCE(2263);
      END_STATE();
    case 617:
      if (lookahead == 'c') ADVANCE(1234);
      if (lookahead == 'k') ADVANCE(1021);
      if (lookahead == 't') ADVANCE(2104);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 619:
      if (lookahead == 'c') ADVANCE(1600);
      END_STATE();
    case 620:
      if (lookahead == 'c') ADVANCE(1422);
      END_STATE();
    case 621:
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == 'g') ADVANCE(782);
      if (lookahead == 'l') ADVANCE(1543);
      if (lookahead == 'r') ADVANCE(1616);
      if (lookahead == 's') ADVANCE(1425);
      if (lookahead == 'u') ADVANCE(2453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 622:
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == 'i') ADVANCE(1648);
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 623:
      if (lookahead == 'd') ADVANCE(3151);
      END_STATE();
    case 624:
      if (lookahead == 'd') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 625:
      if (lookahead == 'd') ADVANCE(3010);
      END_STATE();
    case 626:
      if (lookahead == 'd') ADVANCE(3094);
      END_STATE();
    case 627:
      if (lookahead == 'd') ADVANCE(3052);
      if (lookahead == 'i') ADVANCE(1533);
      END_STATE();
    case 628:
      if (lookahead == 'd') ADVANCE(3050);
      if (lookahead == 'i') ADVANCE(1534);
      END_STATE();
    case 629:
      if (lookahead == 'd') ADVANCE(3083);
      if (lookahead == 'i') ADVANCE(1537);
      END_STATE();
    case 630:
      if (lookahead == 'd') ADVANCE(2873);
      END_STATE();
    case 631:
      if (lookahead == 'd') ADVANCE(3076);
      if (lookahead == 'i') ADVANCE(1540);
      END_STATE();
    case 632:
      if (lookahead == 'd') ADVANCE(2984);
      END_STATE();
    case 633:
      if (lookahead == 'd') ADVANCE(2985);
      END_STATE();
    case 634:
      if (lookahead == 'd') ADVANCE(2902);
      END_STATE();
    case 635:
      if (lookahead == 'd') ADVANCE(2908);
      END_STATE();
    case 636:
      if (lookahead == 'd') ADVANCE(2874);
      END_STATE();
    case 637:
      if (lookahead == 'd') ADVANCE(3087);
      END_STATE();
    case 638:
      if (lookahead == 'd') ADVANCE(2906);
      END_STATE();
    case 639:
      if (lookahead == 'd') ADVANCE(2907);
      END_STATE();
    case 640:
      if (lookahead == 'd') ADVANCE(2979);
      END_STATE();
    case 641:
      if (lookahead == 'd') ADVANCE(2987);
      END_STATE();
    case 642:
      if (lookahead == 'd') ADVANCE(3030);
      END_STATE();
    case 643:
      if (lookahead == 'd') ADVANCE(681);
      END_STATE();
    case 644:
      if (lookahead == 'd') ADVANCE(774);
      END_STATE();
    case 645:
      if (lookahead == 'd') ADVANCE(386);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(497);
      END_STATE();
    case 647:
      if (lookahead == 'd') ADVANCE(498);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(2269);
      END_STATE();
    case 649:
      if (lookahead == 'd') ADVANCE(1256);
      END_STATE();
    case 650:
      if (lookahead == 'd') ADVANCE(1852);
      END_STATE();
    case 651:
      if (lookahead == 'd') ADVANCE(1925);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(2275);
      END_STATE();
    case 653:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 654:
      if (lookahead == 'd') ADVANCE(724);
      END_STATE();
    case 655:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 656:
      if (lookahead == 'd') ADVANCE(725);
      END_STATE();
    case 657:
      if (lookahead == 'd') ADVANCE(2281);
      END_STATE();
    case 658:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 659:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 660:
      if (lookahead == 'd') ADVANCE(2302);
      END_STATE();
    case 661:
      if (lookahead == 'd') ADVANCE(827);
      END_STATE();
    case 662:
      if (lookahead == 'd') ADVANCE(2304);
      END_STATE();
    case 663:
      if (lookahead == 'd') ADVANCE(835);
      END_STATE();
    case 664:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 665:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 666:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 667:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(740);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(742);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(806);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(811);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(749);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(2664);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(799);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(966);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(2316);
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 'p') ADVANCE(2199);
      if (lookahead == 's') ADVANCE(2005);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(1020);
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(1282);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(407);
      if (lookahead == 'o') ADVANCE(576);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(910);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(1287);
      END_STATE();
    case 683:
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(2246);
      END_STATE();
    case 684:
      if (lookahead == 'd') ADVANCE(905);
      END_STATE();
    case 685:
      if (lookahead == 'd') ADVANCE(833);
      if (lookahead == 's') ADVANCE(1248);
      END_STATE();
    case 686:
      if (lookahead == 'd') ADVANCE(944);
      END_STATE();
    case 687:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 688:
      if (lookahead == 'd') ADVANCE(686);
      END_STATE();
    case 689:
      if (lookahead == 'd') ADVANCE(908);
      END_STATE();
    case 690:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 691:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 692:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 693:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 695:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 696:
      if (lookahead == 'd') ADVANCE(1040);
      END_STATE();
    case 697:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 698:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 699:
      if (lookahead == 'd') ADVANCE(613);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(1045);
      END_STATE();
    case 701:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 702:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 703:
      if (lookahead == 'd') ADVANCE(1970);
      END_STATE();
    case 704:
      if (lookahead == 'd') ADVANCE(230);
      END_STATE();
    case 705:
      if (lookahead == 'd') ADVANCE(1065);
      END_STATE();
    case 706:
      if (lookahead == 'd') ADVANCE(705);
      END_STATE();
    case 707:
      if (lookahead == 'd') ADVANCE(708);
      END_STATE();
    case 708:
      if (lookahead == 'd') ADVANCE(1069);
      END_STATE();
    case 709:
      if (lookahead == 'd') ADVANCE(1423);
      if (lookahead == 'n') ADVANCE(1961);
      if (lookahead == 'p') ADVANCE(1962);
      END_STATE();
    case 710:
      if (lookahead == 'd') ADVANCE(1424);
      if (lookahead == 'k') ADVANCE(965);
      END_STATE();
    case 711:
      if (lookahead == 'e') ADVANCE(2094);
      if (lookahead == 'h') ADVANCE(2573);
      if (lookahead == 'i') ADVANCE(1976);
      if (lookahead == 'l') ADVANCE(784);
      if (lookahead == 'o') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 712:
      if (lookahead == 'e') ADVANCE(2706);
      if (lookahead == 'n') ADVANCE(1818);
      if (lookahead == 'o') ADVANCE(1237);
      if (lookahead == 's') ADVANCE(3011);
      END_STATE();
    case 713:
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead == 'f') ADVANCE(523);
      END_STATE();
    case 714:
      if (lookahead == 'e') ADVANCE(2693);
      if (lookahead == 'h') ADVANCE(2161);
      if (lookahead == 'o') ADVANCE(1085);
      if (lookahead == 'r') ADVANCE(2578);
      END_STATE();
    case 715:
      if (lookahead == 'e') ADVANCE(3147);
      END_STATE();
    case 716:
      if (lookahead == 'e') ADVANCE(3151);
      END_STATE();
    case 717:
      if (lookahead == 'e') ADVANCE(3010);
      END_STATE();
    case 718:
      if (lookahead == 'e') ADVANCE(3148);
      END_STATE();
    case 719:
      if (lookahead == 'e') ADVANCE(3150);
      END_STATE();
    case 720:
      if (lookahead == 'e') ADVANCE(3015);
      END_STATE();
    case 721:
      if (lookahead == 'e') ADVANCE(2817);
      END_STATE();
    case 722:
      if (lookahead == 'e') ADVANCE(3054);
      END_STATE();
    case 723:
      if (lookahead == 'e') ADVANCE(2892);
      END_STATE();
    case 724:
      if (lookahead == 'e') ADVANCE(3021);
      END_STATE();
    case 725:
      if (lookahead == 'e') ADVANCE(2870);
      END_STATE();
    case 726:
      if (lookahead == 'e') ADVANCE(2840);
      END_STATE();
    case 727:
      if (lookahead == 'e') ADVANCE(2937);
      END_STATE();
    case 728:
      if (lookahead == 'e') ADVANCE(3007);
      END_STATE();
    case 729:
      if (lookahead == 'e') ADVANCE(3024);
      END_STATE();
    case 730:
      if (lookahead == 'e') ADVANCE(3078);
      END_STATE();
    case 731:
      if (lookahead == 'e') ADVANCE(2885);
      END_STATE();
    case 732:
      if (lookahead == 'e') ADVANCE(3053);
      END_STATE();
    case 733:
      if (lookahead == 'e') ADVANCE(2871);
      END_STATE();
    case 734:
      if (lookahead == 'e') ADVANCE(3051);
      END_STATE();
    case 735:
      if (lookahead == 'e') ADVANCE(3084);
      END_STATE();
    case 736:
      if (lookahead == 'e') ADVANCE(2835);
      END_STATE();
    case 737:
      if (lookahead == 'e') ADVANCE(3068);
      END_STATE();
    case 738:
      if (lookahead == 'e') ADVANCE(2958);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(2841);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(3079);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(2925);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(2923);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(2994);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(2927);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(2978);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(2905);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(3077);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(3004);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(2862);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(2833);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(3048);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(2926);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(3088);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(2928);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(2830);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(3028);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(3089);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(2844);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(3047);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(2834);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(2995);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(2898);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(2899);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(3046);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(2982);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(2939);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(917);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(2003);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(2979);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(3013);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(3082);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(3030);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(2694);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(2449);
      if (lookahead == 'k') ADVANCE(625);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(1076);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(2683);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'i') ADVANCE(2460);
      if (lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(2369);
      if (lookahead == 'i') ADVANCE(1637);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(2640);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(2069);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(1088);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(2729);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(2373);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(2666);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(2103);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(563);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'k') ADVANCE(1301);
      if (lookahead == 'y') ADVANCE(1611);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(1614);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(2708);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(2725);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(2743);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(2384);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(2711);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(2751);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(2509);
      if (lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(2713);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(1104);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(2125);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(2714);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(1708);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(2547);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(2715);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(2193);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(2716);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(815);
      if (lookahead == 'o') ADVANCE(2588);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(2098);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(2383);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(2093);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(1509);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(2719);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(1613);
      if (lookahead == 'p') ADVANCE(1239);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(2073);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(2720);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(2001);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(1481);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(2267);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(2426);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(2113);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(2280);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(2477);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(1487);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(2075);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(2431);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(1489);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(2286);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(1490);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(2076);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(2287);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(2077);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(2288);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1514);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(980);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(2293);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(1589);
      if (lookahead == 'h') ADVANCE(1933);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(2165);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(2294);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(2459);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(2078);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(2296);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(2079);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(2299);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(2168);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(2300);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(2301);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(2442);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(2370);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(2083);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(2124);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(2084);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(2086);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(2088);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(971);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(2089);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(687);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(2361);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(2171);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(2752);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(2695);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(2095);
      if (lookahead == 'o') ADVANCE(2183);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(2641);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(1626);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(2130);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(1627);
      if (lookahead == 'f') ADVANCE(590);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(2365);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == 't') ADVANCE(704);
      END_STATE();
    case 908:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(1744);
      END_STATE();
    case 911:
      if (lookahead == 'e') ADVANCE(2107);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(2643);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(1713);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 917:
      if (lookahead == 'e') ADVANCE(2010);
      if (lookahead == 'y') ADVANCE(2397);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 920:
      if (lookahead == 'e') ADVANCE(2364);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 922:
      if (lookahead == 'e') ADVANCE(2728);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(2342);
      END_STATE();
    case 925:
      if (lookahead == 'e') ADVANCE(1734);
      END_STATE();
    case 926:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 927:
      if (lookahead == 'e') ADVANCE(1662);
      END_STATE();
    case 928:
      if (lookahead == 'e') ADVANCE(2009);
      END_STATE();
    case 929:
      if (lookahead == 'e') ADVANCE(1812);
      if (lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(2315);
      END_STATE();
    case 931:
      if (lookahead == 'e') ADVANCE(2730);
      END_STATE();
    case 932:
      if (lookahead == 'e') ADVANCE(2646);
      END_STATE();
    case 933:
      if (lookahead == 'e') ADVANCE(2735);
      END_STATE();
    case 934:
      if (lookahead == 'e') ADVANCE(2321);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(1722);
      END_STATE();
    case 936:
      if (lookahead == 'e') ADVANCE(2483);
      END_STATE();
    case 937:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 938:
      if (lookahead == 'e') ADVANCE(2691);
      END_STATE();
    case 939:
      if (lookahead == 'e') ADVANCE(1798);
      END_STATE();
    case 940:
      if (lookahead == 'e') ADVANCE(2647);
      END_STATE();
    case 941:
      if (lookahead == 'e') ADVANCE(2345);
      END_STATE();
    case 942:
      if (lookahead == 'e') ADVANCE(2222);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(2734);
      END_STATE();
    case 944:
      if (lookahead == 'e') ADVANCE(1790);
      END_STATE();
    case 945:
      if (lookahead == 'e') ADVANCE(2648);
      END_STATE();
    case 946:
      if (lookahead == 'e') ADVANCE(2758);
      END_STATE();
    case 947:
      if (lookahead == 'e') ADVANCE(1715);
      END_STATE();
    case 948:
      if (lookahead == 'e') ADVANCE(1739);
      END_STATE();
    case 949:
      if (lookahead == 'e') ADVANCE(2202);
      END_STATE();
    case 950:
      if (lookahead == 'e') ADVANCE(1725);
      END_STATE();
    case 951:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 952:
      if (lookahead == 'e') ADVANCE(2649);
      END_STATE();
    case 953:
      if (lookahead == 'e') ADVANCE(2147);
      END_STATE();
    case 954:
      if (lookahead == 'e') ADVANCE(2650);
      END_STATE();
    case 955:
      if (lookahead == 'e') ADVANCE(1742);
      END_STATE();
    case 956:
      if (lookahead == 'e') ADVANCE(2218);
      END_STATE();
    case 957:
      if (lookahead == 'e') ADVANCE(2651);
      END_STATE();
    case 958:
      if (lookahead == 'e') ADVANCE(2739);
      END_STATE();
    case 959:
      if (lookahead == 'e') ADVANCE(1746);
      END_STATE();
    case 960:
      if (lookahead == 'e') ADVANCE(2140);
      END_STATE();
    case 961:
      if (lookahead == 'e') ADVANCE(2652);
      END_STATE();
    case 962:
      if (lookahead == 'e') ADVANCE(2740);
      END_STATE();
    case 963:
      if (lookahead == 'e') ADVANCE(1760);
      END_STATE();
    case 964:
      if (lookahead == 'e') ADVANCE(2653);
      END_STATE();
    case 965:
      if (lookahead == 'e') ADVANCE(2747);
      END_STATE();
    case 966:
      if (lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 967:
      if (lookahead == 'e') ADVANCE(2145);
      END_STATE();
    case 968:
      if (lookahead == 'e') ADVANCE(2763);
      END_STATE();
    case 969:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 970:
      if (lookahead == 'e') ADVANCE(1765);
      END_STATE();
    case 971:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 972:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 973:
      if (lookahead == 'e') ADVANCE(2741);
      END_STATE();
    case 974:
      if (lookahead == 'e') ADVANCE(2494);
      END_STATE();
    case 975:
      if (lookahead == 'e') ADVANCE(2555);
      END_STATE();
    case 976:
      if (lookahead == 'e') ADVANCE(2179);
      END_STATE();
    case 977:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 979:
      if (lookahead == 'e') ADVANCE(2378);
      if (lookahead == 'i') ADVANCE(2105);
      END_STATE();
    case 980:
      if (lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 981:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 982:
      if (lookahead == 'e') ADVANCE(2745);
      END_STATE();
    case 983:
      if (lookahead == 'e') ADVANCE(972);
      END_STATE();
    case 984:
      if (lookahead == 'e') ADVANCE(2176);
      END_STATE();
    case 985:
      if (lookahead == 'e') ADVANCE(572);
      if (lookahead == 'u') ADVANCE(517);
      END_STATE();
    case 986:
      if (lookahead == 'e') ADVANCE(2688);
      END_STATE();
    case 987:
      if (lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 988:
      if (lookahead == 'e') ADVANCE(2386);
      END_STATE();
    case 989:
      if (lookahead == 'e') ADVANCE(1786);
      END_STATE();
    case 990:
      if (lookahead == 'e') ADVANCE(2750);
      END_STATE();
    case 991:
      if (lookahead == 'e') ADVANCE(2201);
      END_STATE();
    case 992:
      if (lookahead == 'e') ADVANCE(2659);
      END_STATE();
    case 993:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 994:
      if (lookahead == 'e') ADVANCE(2209);
      END_STATE();
    case 995:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 996:
      if (lookahead == 'e') ADVANCE(2367);
      END_STATE();
    case 997:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 998:
      if (lookahead == 'e') ADVANCE(1795);
      END_STATE();
    case 999:
      if (lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 1000:
      if (lookahead == 'e') ADVANCE(2211);
      END_STATE();
    case 1001:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 1002:
      if (lookahead == 'e') ADVANCE(2371);
      END_STATE();
    case 1003:
      if (lookahead == 'e') ADVANCE(1797);
      END_STATE();
    case 1004:
      if (lookahead == 'e') ADVANCE(2217);
      END_STATE();
    case 1005:
      if (lookahead == 'e') ADVANCE(2188);
      END_STATE();
    case 1006:
      if (lookahead == 'e') ADVANCE(2381);
      END_STATE();
    case 1007:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 1008:
      if (lookahead == 'e') ADVANCE(2374);
      END_STATE();
    case 1009:
      if (lookahead == 'e') ADVANCE(1799);
      END_STATE();
    case 1010:
      if (lookahead == 'e') ADVANCE(2189);
      END_STATE();
    case 1011:
      if (lookahead == 'e') ADVANCE(2375);
      END_STATE();
    case 1012:
      if (lookahead == 'e') ADVANCE(2190);
      END_STATE();
    case 1013:
      if (lookahead == 'e') ADVANCE(2191);
      END_STATE();
    case 1014:
      if (lookahead == 'e') ADVANCE(2754);
      END_STATE();
    case 1015:
      if (lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 1016:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 1017:
      if (lookahead == 'e') ADVANCE(2214);
      END_STATE();
    case 1018:
      if (lookahead == 'e') ADVANCE(2203);
      END_STATE();
    case 1019:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 1021:
      if (lookahead == 'e') ADVANCE(2759);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(2216);
      END_STATE();
    case 1023:
      if (lookahead == 'e') ADVANCE(694);
      END_STATE();
    case 1024:
      if (lookahead == 'e') ADVANCE(2243);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(1110);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 1027:
      if (lookahead == 'e') ADVANCE(2244);
      END_STATE();
    case 1028:
      if (lookahead == 'e') ADVANCE(2212);
      END_STATE();
    case 1029:
      if (lookahead == 'e') ADVANCE(2225);
      END_STATE();
    case 1030:
      if (lookahead == 'e') ADVANCE(2249);
      END_STATE();
    case 1031:
      if (lookahead == 'e') ADVANCE(1112);
      END_STATE();
    case 1032:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 1033:
      if (lookahead == 'e') ADVANCE(2250);
      END_STATE();
    case 1034:
      if (lookahead == 'e') ADVANCE(2228);
      END_STATE();
    case 1035:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 1036:
      if (lookahead == 'e') ADVANCE(2254);
      END_STATE();
    case 1037:
      if (lookahead == 'e') ADVANCE(2223);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 1039:
      if (lookahead == 'e') ADVANCE(2698);
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1040:
      if (lookahead == 'e') ADVANCE(1117);
      END_STATE();
    case 1041:
      if (lookahead == 'e') ADVANCE(2761);
      END_STATE();
    case 1042:
      if (lookahead == 'e') ADVANCE(2247);
      END_STATE();
    case 1043:
      if (lookahead == 'e') ADVANCE(2260);
      END_STATE();
    case 1044:
      if (lookahead == 'e') ADVANCE(2242);
      END_STATE();
    case 1045:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 1046:
      if (lookahead == 'e') ADVANCE(2569);
      END_STATE();
    case 1047:
      if (lookahead == 'e') ADVANCE(2764);
      END_STATE();
    case 1048:
      if (lookahead == 'e') ADVANCE(2699);
      if (lookahead == 's') ADVANCE(2581);
      END_STATE();
    case 1049:
      if (lookahead == 'e') ADVANCE(2762);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(2257);
      END_STATE();
    case 1051:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 1052:
      if (lookahead == 'e') ADVANCE(2700);
      END_STATE();
    case 1053:
      if (lookahead == 'e') ADVANCE(2258);
      END_STATE();
    case 1054:
      if (lookahead == 'e') ADVANCE(2701);
      END_STATE();
    case 1055:
      if (lookahead == 'e') ADVANCE(2702);
      if (lookahead == 'l') ADVANCE(952);
      END_STATE();
    case 1056:
      if (lookahead == 'e') ADVANCE(2703);
      if (lookahead == 'l') ADVANCE(957);
      END_STATE();
    case 1057:
      if (lookahead == 'e') ADVANCE(2704);
      if (lookahead == 'h') ADVANCE(2240);
      if (lookahead == 't') ADVANCE(2707);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(2403);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(1598);
      END_STATE();
    case 1061:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(2265);
      END_STATE();
    case 1063:
      if (lookahead == 'e') ADVANCE(2765);
      END_STATE();
    case 1064:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 1065:
      if (lookahead == 'e') ADVANCE(1811);
      END_STATE();
    case 1066:
      if (lookahead == 'e') ADVANCE(701);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(2406);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(2405);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(2407);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(1066);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(2411);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(1670);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 1076:
      if (lookahead == 'f') ADVANCE(3010);
      END_STATE();
    case 1077:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 1078:
      if (lookahead == 'f') ADVANCE(627);
      END_STATE();
    case 1079:
      if (lookahead == 'f') ADVANCE(2887);
      END_STATE();
    case 1080:
      if (lookahead == 'f') ADVANCE(2815);
      END_STATE();
    case 1081:
      if (lookahead == 'f') ADVANCE(3046);
      END_STATE();
    case 1082:
      if (lookahead == 'f') ADVANCE(628);
      END_STATE();
    case 1083:
      if (lookahead == 'f') ADVANCE(629);
      END_STATE();
    case 1084:
      if (lookahead == 'f') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(928);
      END_STATE();
    case 1085:
      if (lookahead == 'f') ADVANCE(2591);
      END_STATE();
    case 1086:
      if (lookahead == 'f') ADVANCE(1306);
      if (lookahead == 't') ADVANCE(1242);
      END_STATE();
    case 1087:
      if (lookahead == 'f') ADVANCE(2712);
      END_STATE();
    case 1088:
      if (lookahead == 'f') ADVANCE(387);
      END_STATE();
    case 1089:
      if (lookahead == 'f') ADVANCE(637);
      END_STATE();
    case 1090:
      if (lookahead == 'f') ADVANCE(2574);
      END_STATE();
    case 1091:
      if (lookahead == 'f') ADVANCE(459);
      END_STATE();
    case 1092:
      if (lookahead == 'f') ADVANCE(1302);
      END_STATE();
    case 1093:
      if (lookahead == 'f') ADVANCE(1379);
      END_STATE();
    case 1094:
      if (lookahead == 'f') ADVANCE(298);
      END_STATE();
    case 1095:
      if (lookahead == 'f') ADVANCE(2766);
      END_STATE();
    case 1096:
      if (lookahead == 'f') ADVANCE(2158);
      END_STATE();
    case 1097:
      if (lookahead == 'f') ADVANCE(2022);
      END_STATE();
    case 1098:
      if (lookahead == 'f') ADVANCE(2121);
      if (lookahead == 'n') ADVANCE(1923);
      if (lookahead == 'o') ADVANCE(1565);
      if (lookahead == 'w') ADVANCE(977);
      END_STATE();
    case 1099:
      if (lookahead == 'f') ADVANCE(1523);
      END_STATE();
    case 1100:
      if (lookahead == 'f') ADVANCE(2132);
      END_STATE();
    case 1101:
      if (lookahead == 'f') ADVANCE(1876);
      END_STATE();
    case 1102:
      if (lookahead == 'f') ADVANCE(1883);
      END_STATE();
    case 1103:
      if (lookahead == 'f') ADVANCE(2359);
      END_STATE();
    case 1104:
      if (lookahead == 'f') ADVANCE(967);
      END_STATE();
    case 1105:
      if (lookahead == 'f') ADVANCE(1314);
      if (lookahead == 'n') ADVANCE(1855);
      if (lookahead == 'p') ADVANCE(1897);
      END_STATE();
    case 1106:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 1107:
      if (lookahead == 'f') ADVANCE(991);
      END_STATE();
    case 1108:
      if (lookahead == 'f') ADVANCE(1337);
      END_STATE();
    case 1109:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 1110:
      if (lookahead == 'f') ADVANCE(1000);
      END_STATE();
    case 1111:
      if (lookahead == 'f') ADVANCE(1381);
      END_STATE();
    case 1112:
      if (lookahead == 'f') ADVANCE(1004);
      END_STATE();
    case 1113:
      if (lookahead == 'f') ADVANCE(1387);
      END_STATE();
    case 1114:
      if (lookahead == 'f') ADVANCE(1391);
      END_STATE();
    case 1115:
      if (lookahead == 'f') ADVANCE(1344);
      END_STATE();
    case 1116:
      if (lookahead == 'f') ADVANCE(1348);
      END_STATE();
    case 1117:
      if (lookahead == 'f') ADVANCE(485);
      END_STATE();
    case 1118:
      if (lookahead == 'f') ADVANCE(467);
      END_STATE();
    case 1119:
      if (lookahead == 'f') ADVANCE(1405);
      END_STATE();
    case 1120:
      if (lookahead == 'f') ADVANCE(1408);
      END_STATE();
    case 1121:
      if (lookahead == 'f') ADVANCE(1406);
      END_STATE();
    case 1122:
      if (lookahead == 'f') ADVANCE(2262);
      END_STATE();
    case 1123:
      if (lookahead == 'f') ADVANCE(2402);
      END_STATE();
    case 1124:
      if (lookahead == 'f') ADVANCE(1416);
      END_STATE();
    case 1125:
      if (lookahead == 'g') ADVANCE(3031);
      END_STATE();
    case 1126:
      if (lookahead == 'g') ADVANCE(2877);
      END_STATE();
    case 1127:
      if (lookahead == 'g') ADVANCE(2956);
      END_STATE();
    case 1128:
      if (lookahead == 'g') ADVANCE(1781);
      END_STATE();
    case 1129:
      if (lookahead == 'g') ADVANCE(2937);
      END_STATE();
    case 1130:
      if (lookahead == 'g') ADVANCE(2918);
      END_STATE();
    case 1131:
      if (lookahead == 'g') ADVANCE(2845);
      END_STATE();
    case 1132:
      if (lookahead == 'g') ADVANCE(2957);
      END_STATE();
    case 1133:
      if (lookahead == 'g') ADVANCE(2846);
      END_STATE();
    case 1134:
      if (lookahead == 'g') ADVANCE(2917);
      END_STATE();
    case 1135:
      if (lookahead == 'g') ADVANCE(2865);
      END_STATE();
    case 1136:
      if (lookahead == 'g') ADVANCE(2847);
      END_STATE();
    case 1137:
      if (lookahead == 'g') ADVANCE(3046);
      END_STATE();
    case 1138:
      if (lookahead == 'g') ADVANCE(2982);
      END_STATE();
    case 1139:
      if (lookahead == 'g') ADVANCE(3013);
      END_STATE();
    case 1140:
      if (lookahead == 'g') ADVANCE(3025);
      END_STATE();
    case 1141:
      if (lookahead == 'g') ADVANCE(1757);
      if (lookahead == 'm') ADVANCE(1993);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 1142:
      if (lookahead == 'g') ADVANCE(789);
      if (lookahead == 'r') ADVANCE(1615);
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 1143:
      if (lookahead == 'g') ADVANCE(374);
      END_STATE();
    case 1144:
      if (lookahead == 'g') ADVANCE(2194);
      if (lookahead == 'k') ADVANCE(1755);
      END_STATE();
    case 1145:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 1146:
      if (lookahead == 'g') ADVANCE(2269);
      END_STATE();
    case 1147:
      if (lookahead == 'g') ADVANCE(1981);
      END_STATE();
    case 1148:
      if (lookahead == 'g') ADVANCE(1777);
      END_STATE();
    case 1149:
      if (lookahead == 'g') ADVANCE(2238);
      END_STATE();
    case 1150:
      if (lookahead == 'g') ADVANCE(2276);
      END_STATE();
    case 1151:
      if (lookahead == 'g') ADVANCE(2267);
      END_STATE();
    case 1152:
      if (lookahead == 'g') ADVANCE(1822);
      END_STATE();
    case 1153:
      if (lookahead == 'g') ADVANCE(1823);
      END_STATE();
    case 1154:
      if (lookahead == 'g') ADVANCE(1985);
      END_STATE();
    case 1155:
      if (lookahead == 'g') ADVANCE(2455);
      END_STATE();
    case 1156:
      if (lookahead == 'g') ADVANCE(2282);
      END_STATE();
    case 1157:
      if (lookahead == 'g') ADVANCE(1791);
      END_STATE();
    case 1158:
      if (lookahead == 'g') ADVANCE(1806);
      END_STATE();
    case 1159:
      if (lookahead == 'g') ADVANCE(2285);
      END_STATE();
    case 1160:
      if (lookahead == 'g') ADVANCE(1987);
      END_STATE();
    case 1161:
      if (lookahead == 'g') ADVANCE(1988);
      END_STATE();
    case 1162:
      if (lookahead == 'g') ADVANCE(1824);
      END_STATE();
    case 1163:
      if (lookahead == 'g') ADVANCE(2111);
      END_STATE();
    case 1164:
      if (lookahead == 'g') ADVANCE(1826);
      END_STATE();
    case 1165:
      if (lookahead == 'g') ADVANCE(1827);
      END_STATE();
    case 1166:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 1167:
      if (lookahead == 'g') ADVANCE(1828);
      END_STATE();
    case 1168:
      if (lookahead == 'g') ADVANCE(2114);
      END_STATE();
    case 1169:
      if (lookahead == 'g') ADVANCE(727);
      END_STATE();
    case 1170:
      if (lookahead == 'g') ADVANCE(1830);
      END_STATE();
    case 1171:
      if (lookahead == 'g') ADVANCE(1831);
      END_STATE();
    case 1172:
      if (lookahead == 'g') ADVANCE(1832);
      END_STATE();
    case 1173:
      if (lookahead == 'g') ADVANCE(2080);
      END_STATE();
    case 1174:
      if (lookahead == 'g') ADVANCE(2305);
      END_STATE();
    case 1175:
      if (lookahead == 'g') ADVANCE(1881);
      END_STATE();
    case 1176:
      if (lookahead == 'g') ADVANCE(1882);
      END_STATE();
    case 1177:
      if (lookahead == 'g') ADVANCE(44);
      END_STATE();
    case 1178:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 1179:
      if (lookahead == 'g') ADVANCE(766);
      END_STATE();
    case 1180:
      if (lookahead == 'g') ADVANCE(1245);
      END_STATE();
    case 1181:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 1182:
      if (lookahead == 'g') ADVANCE(1261);
      END_STATE();
    case 1183:
      if (lookahead == 'g') ADVANCE(1269);
      END_STATE();
    case 1184:
      if (lookahead == 'g') ADVANCE(939);
      END_STATE();
    case 1185:
      if (lookahead == 'g') ADVANCE(1274);
      END_STATE();
    case 1186:
      if (lookahead == 'g') ADVANCE(888);
      END_STATE();
    case 1187:
      if (lookahead == 'g') ADVANCE(890);
      END_STATE();
    case 1188:
      if (lookahead == 'g') ADVANCE(863);
      END_STATE();
    case 1189:
      if (lookahead == 'g') ADVANCE(1001);
      END_STATE();
    case 1190:
      if (lookahead == 'g') ADVANCE(1775);
      if (lookahead == 'o') ADVANCE(1501);
      END_STATE();
    case 1191:
      if (lookahead == 'g') ADVANCE(1778);
      END_STATE();
    case 1192:
      if (lookahead == 'g') ADVANCE(934);
      END_STATE();
    case 1193:
      if (lookahead == 'g') ADVANCE(1556);
      END_STATE();
    case 1194:
      if (lookahead == 'g') ADVANCE(2389);
      END_STATE();
    case 1195:
      if (lookahead == 'g') ADVANCE(1006);
      END_STATE();
    case 1196:
      if (lookahead == 'g') ADVANCE(1800);
      END_STATE();
    case 1197:
      if (lookahead == 'g') ADVANCE(1019);
      END_STATE();
    case 1198:
      if (lookahead == 'g') ADVANCE(1807);
      END_STATE();
    case 1199:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 1200:
      if (lookahead == 'g') ADVANCE(1044);
      END_STATE();
    case 1201:
      if (lookahead == 'g') ADVANCE(2245);
      END_STATE();
    case 1202:
      if (lookahead == 'g') ADVANCE(1599);
      END_STATE();
    case 1203:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 1204:
      if (lookahead == 'g') ADVANCE(1058);
      END_STATE();
    case 1205:
      if (lookahead == 'g') ADVANCE(1067);
      END_STATE();
    case 1206:
      if (lookahead == 'g') ADVANCE(1070);
      END_STATE();
    case 1207:
      if (lookahead == 'h') ADVANCE(2955);
      END_STATE();
    case 1208:
      if (lookahead == 'h') ADVANCE(2868);
      END_STATE();
    case 1209:
      if (lookahead == 'h') ADVANCE(2988);
      END_STATE();
    case 1210:
      if (lookahead == 'h') ADVANCE(3027);
      END_STATE();
    case 1211:
      if (lookahead == 'h') ADVANCE(1399);
      if (lookahead == 'v') ADVANCE(843);
      END_STATE();
    case 1212:
      if (lookahead == 'h') ADVANCE(2596);
      END_STATE();
    case 1213:
      if (lookahead == 'h') ADVANCE(804);
      END_STATE();
    case 1214:
      if (lookahead == 'h') ADVANCE(430);
      END_STATE();
    case 1215:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 1216:
      if (lookahead == 'h') ADVANCE(2157);
      END_STATE();
    case 1217:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 1218:
      if (lookahead == 'h') ADVANCE(1835);
      END_STATE();
    case 1219:
      if (lookahead == 'h') ADVANCE(736);
      END_STATE();
    case 1220:
      if (lookahead == 'h') ADVANCE(1847);
      END_STATE();
    case 1221:
      if (lookahead == 'h') ADVANCE(746);
      END_STATE();
    case 1222:
      if (lookahead == 'h') ADVANCE(838);
      END_STATE();
    case 1223:
      if (lookahead == 'h') ADVANCE(1911);
      if (lookahead == 'o') ADVANCE(1594);
      END_STATE();
    case 1224:
      if (lookahead == 'h') ADVANCE(402);
      END_STATE();
    case 1225:
      if (lookahead == 'h') ADVANCE(810);
      END_STATE();
    case 1226:
      if (lookahead == 'h') ADVANCE(1324);
      END_STATE();
    case 1227:
      if (lookahead == 'h') ADVANCE(953);
      END_STATE();
    case 1228:
      if (lookahead == 'h') ADVANCE(1937);
      if (lookahead == 'o') ADVANCE(1595);
      if (lookahead == 'r') ADVANCE(1400);
      END_STATE();
    case 1229:
      if (lookahead == 'h') ADVANCE(1934);
      END_STATE();
    case 1230:
      if (lookahead == 'h') ADVANCE(1358);
      END_STATE();
    case 1231:
      if (lookahead == 'h') ADVANCE(1042);
      END_STATE();
    case 1232:
      if (lookahead == 'h') ADVANCE(1050);
      END_STATE();
    case 1233:
      if (lookahead == 'h') ADVANCE(1053);
      END_STATE();
    case 1234:
      if (lookahead == 'h') ADVANCE(1059);
      END_STATE();
    case 1235:
      if (lookahead == 'h') ADVANCE(1418);
      END_STATE();
    case 1236:
      if (lookahead == 'i') ADVANCE(643);
      if (lookahead == 'k') ADVANCE(1977);
      END_STATE();
    case 1237:
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 1238:
      if (lookahead == 'i') ADVANCE(2769);
      END_STATE();
    case 1239:
      if (lookahead == 'i') ADVANCE(3046);
      END_STATE();
    case 1240:
      if (lookahead == 'i') ADVANCE(1989);
      END_STATE();
    case 1241:
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 1242:
      if (lookahead == 'i') ADVANCE(1621);
      END_STATE();
    case 1243:
      if (lookahead == 'i') ADVANCE(1998);
      END_STATE();
    case 1244:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 1245:
      if (lookahead == 'i') ADVANCE(1700);
      END_STATE();
    case 1246:
      if (lookahead == 'i') ADVANCE(1204);
      END_STATE();
    case 1247:
      if (lookahead == 'i') ADVANCE(1645);
      END_STATE();
    case 1248:
      if (lookahead == 'i') ADVANCE(2458);
      END_STATE();
    case 1249:
      if (lookahead == 'i') ADVANCE(1994);
      END_STATE();
    case 1250:
      if (lookahead == 'i') ADVANCE(652);
      END_STATE();
    case 1251:
      if (lookahead == 'i') ADVANCE(1128);
      END_STATE();
    case 1252:
      if (lookahead == 'i') ADVANCE(1146);
      END_STATE();
    case 1253:
      if (lookahead == 'i') ADVANCE(1146);
      if (lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 1254:
      if (lookahead == 'i') ADVANCE(1649);
      if (lookahead == 'l') ADVANCE(1861);
      if (lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 1255:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 1256:
      if (lookahead == 'i') ADVANCE(1192);
      END_STATE();
    case 1257:
      if (lookahead == 'i') ADVANCE(1196);
      END_STATE();
    case 1258:
      if (lookahead == 'i') ADVANCE(1733);
      END_STATE();
    case 1259:
      if (lookahead == 'i') ADVANCE(2270);
      END_STATE();
    case 1260:
      if (lookahead == 'i') ADVANCE(1148);
      END_STATE();
    case 1261:
      if (lookahead == 'i') ADVANCE(1675);
      END_STATE();
    case 1262:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 1263:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 1264:
      if (lookahead == 'i') ADVANCE(638);
      END_STATE();
    case 1265:
      if (lookahead == 'i') ADVANCE(2025);
      END_STATE();
    case 1266:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 1267:
      if (lookahead == 'i') ADVANCE(1796);
      END_STATE();
    case 1268:
      if (lookahead == 'i') ADVANCE(1983);
      END_STATE();
    case 1269:
      if (lookahead == 'i') ADVANCE(1681);
      END_STATE();
    case 1270:
      if (lookahead == 'i') ADVANCE(1773);
      END_STATE();
    case 1271:
      if (lookahead == 'i') ADVANCE(1860);
      END_STATE();
    case 1272:
      if (lookahead == 'i') ADVANCE(527);
      END_STATE();
    case 1273:
      if (lookahead == 'i') ADVANCE(1194);
      END_STATE();
    case 1274:
      if (lookahead == 'i') ADVANCE(1683);
      END_STATE();
    case 1275:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 1276:
      if (lookahead == 'i') ADVANCE(1863);
      END_STATE();
    case 1277:
      if (lookahead == 'i') ADVANCE(1864);
      END_STATE();
    case 1278:
      if (lookahead == 'i') ADVANCE(1866);
      END_STATE();
    case 1279:
      if (lookahead == 'i') ADVANCE(1846);
      END_STATE();
    case 1280:
      if (lookahead == 'i') ADVANCE(1867);
      END_STATE();
    case 1281:
      if (lookahead == 'i') ADVANCE(1870);
      END_STATE();
    case 1282:
      if (lookahead == 'i') ADVANCE(2465);
      END_STATE();
    case 1283:
      if (lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 1284:
      if (lookahead == 'i') ADVANCE(2232);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 1285:
      if (lookahead == 'i') ADVANCE(1875);
      END_STATE();
    case 1286:
      if (lookahead == 'i') ADVANCE(2525);
      END_STATE();
    case 1287:
      if (lookahead == 'i') ADVANCE(2472);
      END_STATE();
    case 1288:
      if (lookahead == 'i') ADVANCE(2306);
      END_STATE();
    case 1289:
      if (lookahead == 'i') ADVANCE(1878);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(1879);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(1880);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(2226);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(2771);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(2642);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(1641);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(2457);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(1087);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1697);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(2006);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(1526);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(657);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1157);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(1093);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(1520);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(2770);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(1181);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(1707);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1623);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(1158);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1559);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(2645);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1709);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(660);
      END_STATE();
    case 1318:
      if (lookahead == 'i') ADVANCE(915);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 1320:
      if (lookahead == 'i') ADVANCE(1178);
      END_STATE();
    case 1321:
      if (lookahead == 'i') ADVANCE(1711);
      END_STATE();
    case 1322:
      if (lookahead == 'i') ADVANCE(1151);
      END_STATE();
    case 1323:
      if (lookahead == 'i') ADVANCE(1759);
      END_STATE();
    case 1324:
      if (lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 1325:
      if (lookahead == 'i') ADVANCE(1174);
      END_STATE();
    case 1326:
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(2610);
      if (lookahead == 's') ADVANCE(426);
      END_STATE();
    case 1327:
      if (lookahead == 'i') ADVANCE(1717);
      END_STATE();
    case 1328:
      if (lookahead == 'i') ADVANCE(1741);
      END_STATE();
    case 1329:
      if (lookahead == 'i') ADVANCE(2476);
      END_STATE();
    case 1330:
      if (lookahead == 'i') ADVANCE(2335);
      END_STATE();
    case 1331:
      if (lookahead == 'i') ADVANCE(1764);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1633);
      END_STATE();
    case 1333:
      if (lookahead == 'i') ADVANCE(2143);
      END_STATE();
    case 1334:
      if (lookahead == 'i') ADVANCE(2149);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 1336:
      if (lookahead == 'i') ADVANCE(1770);
      END_STATE();
    case 1337:
      if (lookahead == 'i') ADVANCE(1539);
      END_STATE();
    case 1338:
      if (lookahead == 'i') ADVANCE(690);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(1720);
      END_STATE();
    case 1340:
      if (lookahead == 'i') ADVANCE(2144);
      END_STATE();
    case 1341:
      if (lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 1342:
      if (lookahead == 'i') ADVANCE(1721);
      END_STATE();
    case 1343:
      if (lookahead == 'i') ADVANCE(1747);
      END_STATE();
    case 1344:
      if (lookahead == 'i') ADVANCE(1541);
      END_STATE();
    case 1345:
      if (lookahead == 'i') ADVANCE(955);
      END_STATE();
    case 1346:
      if (lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(2133);
      END_STATE();
    case 1348:
      if (lookahead == 'i') ADVANCE(1542);
      END_STATE();
    case 1349:
      if (lookahead == 'i') ADVANCE(692);
      END_STATE();
    case 1350:
      if (lookahead == 'i') ADVANCE(1724);
      END_STATE();
    case 1351:
      if (lookahead == 'i') ADVANCE(2148);
      END_STATE();
    case 1352:
      if (lookahead == 'i') ADVANCE(959);
      END_STATE();
    case 1353:
      if (lookahead == 'i') ADVANCE(1726);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(2150);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(963);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(2151);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(970);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(1731);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(2152);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(2658);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(1182);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 1363:
      if (lookahead == 'i') ADVANCE(451);
      END_STATE();
    case 1364:
      if (lookahead == 'i') ADVANCE(2506);
      END_STATE();
    case 1365:
      if (lookahead == 'i') ADVANCE(2030);
      END_STATE();
    case 1366:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 1367:
      if (lookahead == 'i') ADVANCE(1910);
      END_STATE();
    case 1368:
      if (lookahead == 'i') ADVANCE(1776);
      END_STATE();
    case 1369:
      if (lookahead == 'i') ADVANCE(1643);
      END_STATE();
    case 1370:
      if (lookahead == 'i') ADVANCE(2208);
      END_STATE();
    case 1371:
      if (lookahead == 'i') ADVANCE(2372);
      END_STATE();
    case 1372:
      if (lookahead == 'i') ADVANCE(1183);
      END_STATE();
    case 1373:
      if (lookahead == 'i') ADVANCE(594);
      END_STATE();
    case 1374:
      if (lookahead == 'i') ADVANCE(2379);
      END_STATE();
    case 1375:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 1376:
      if (lookahead == 'i') ADVANCE(2037);
      END_STATE();
    case 1377:
      if (lookahead == 'i') ADVANCE(1963);
      END_STATE();
    case 1378:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 1379:
      if (lookahead == 'i') ADVANCE(602);
      END_STATE();
    case 1380:
      if (lookahead == 'i') ADVANCE(1921);
      END_STATE();
    case 1381:
      if (lookahead == 'i') ADVANCE(1571);
      END_STATE();
    case 1382:
      if (lookahead == 'i') ADVANCE(1185);
      END_STATE();
    case 1383:
      if (lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 1384:
      if (lookahead == 'i') ADVANCE(2041);
      END_STATE();
    case 1385:
      if (lookahead == 'i') ADVANCE(1939);
      END_STATE();
    case 1386:
      if (lookahead == 'i') ADVANCE(1927);
      END_STATE();
    case 1387:
      if (lookahead == 'i') ADVANCE(1583);
      END_STATE();
    case 1388:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 1389:
      if (lookahead == 'i') ADVANCE(2044);
      END_STATE();
    case 1390:
      if (lookahead == 'i') ADVANCE(1931);
      END_STATE();
    case 1391:
      if (lookahead == 'i') ADVANCE(1585);
      END_STATE();
    case 1392:
      if (lookahead == 'i') ADVANCE(600);
      END_STATE();
    case 1393:
      if (lookahead == 'i') ADVANCE(2046);
      END_STATE();
    case 1394:
      if (lookahead == 'i') ADVANCE(1936);
      END_STATE();
    case 1395:
      if (lookahead == 'i') ADVANCE(954);
      END_STATE();
    case 1396:
      if (lookahead == 'i') ADVANCE(1941);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(964);
      END_STATE();
    case 1398:
      if (lookahead == 'i') ADVANCE(2029);
      if (lookahead == 'o') ADVANCE(1669);
      END_STATE();
    case 1399:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 1400:
      if (lookahead == 'i') ADVANCE(1652);
      END_STATE();
    case 1401:
      if (lookahead == 'i') ADVANCE(1195);
      END_STATE();
    case 1402:
      if (lookahead == 'i') ADVANCE(1654);
      if (lookahead == 'l') ADVANCE(1950);
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 1403:
      if (lookahead == 'i') ADVANCE(1191);
      END_STATE();
    case 1404:
      if (lookahead == 'i') ADVANCE(2551);
      END_STATE();
    case 1405:
      if (lookahead == 'i') ADVANCE(1581);
      END_STATE();
    case 1406:
      if (lookahead == 'i') ADVANCE(603);
      END_STATE();
    case 1407:
      if (lookahead == 'i') ADVANCE(1657);
      END_STATE();
    case 1408:
      if (lookahead == 'i') ADVANCE(1592);
      END_STATE();
    case 1409:
      if (lookahead == 'i') ADVANCE(1805);
      END_STATE();
    case 1410:
      if (lookahead == 'i') ADVANCE(1198);
      END_STATE();
    case 1411:
      if (lookahead == 'i') ADVANCE(1121);
      END_STATE();
    case 1412:
      if (lookahead == 'i') ADVANCE(2393);
      END_STATE();
    case 1413:
      if (lookahead == 'i') ADVANCE(1199);
      END_STATE();
    case 1414:
      if (lookahead == 'i') ADVANCE(697);
      if (lookahead == 'n') ADVANCE(2636);
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 1415:
      if (lookahead == 'i') ADVANCE(1965);
      END_STATE();
    case 1416:
      if (lookahead == 'i') ADVANCE(1813);
      END_STATE();
    case 1417:
      if (lookahead == 'i') ADVANCE(2412);
      END_STATE();
    case 1418:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 1419:
      if (lookahead == 'i') ADVANCE(1203);
      END_STATE();
    case 1420:
      if (lookahead == 'i') ADVANCE(2062);
      if (lookahead == 'o') ADVANCE(2612);
      END_STATE();
    case 1421:
      if (lookahead == 'i') ADVANCE(2064);
      END_STATE();
    case 1422:
      if (lookahead == 'i') ADVANCE(2065);
      END_STATE();
    case 1423:
      if (lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 1424:
      if (lookahead == 'i') ADVANCE(1206);
      END_STATE();
    case 1425:
      if (lookahead == 'k') ADVANCE(14);
      if (lookahead == 's') ADVANCE(976);
      END_STATE();
    case 1426:
      if (lookahead == 'k') ADVANCE(2875);
      END_STATE();
    case 1427:
      if (lookahead == 'k') ADVANCE(2876);
      END_STATE();
    case 1428:
      if (lookahead == 'k') ADVANCE(2916);
      END_STATE();
    case 1429:
      if (lookahead == 'k') ADVANCE(3046);
      END_STATE();
    case 1430:
      if (lookahead == 'k') ADVANCE(3080);
      END_STATE();
    case 1431:
      if (lookahead == 'k') ADVANCE(2987);
      END_STATE();
    case 1432:
      if (lookahead == 'k') ADVANCE(1977);
      END_STATE();
    case 1433:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 1434:
      if (lookahead == 'k') ADVANCE(787);
      if (lookahead == 's') ADVANCE(2461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 1435:
      if (lookahead == 'k') ADVANCE(897);
      if (lookahead == 'n') ADVANCE(1956);
      if (lookahead == 'p') ADVANCE(1958);
      END_STATE();
    case 1436:
      if (lookahead == 'k') ADVANCE(795);
      if (lookahead == 'n') ADVANCE(1964);
      if (lookahead == 'o') ADVANCE(1703);
      if (lookahead == 'p') ADVANCE(1223);
      if (lookahead == 's') ADVANCE(907);
      if (lookahead == 'u') ADVANCE(1326);
      END_STATE();
    case 1437:
      if (lookahead == 'k') ADVANCE(640);
      END_STATE();
    case 1438:
      if (lookahead == 'k') ADVANCE(798);
      END_STATE();
    case 1439:
      if (lookahead == 'k') ADVANCE(2295);
      END_STATE();
    case 1440:
      if (lookahead == 'k') ADVANCE(807);
      END_STATE();
    case 1441:
      if (lookahead == 'k') ADVANCE(812);
      END_STATE();
    case 1442:
      if (lookahead == 'k') ADVANCE(817);
      END_STATE();
    case 1443:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 1444:
      if (lookahead == 'k') ADVANCE(819);
      END_STATE();
    case 1445:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 1446:
      if (lookahead == 'k') ADVANCE(866);
      END_STATE();
    case 1447:
      if (lookahead == 'k') ADVANCE(831);
      END_STATE();
    case 1448:
      if (lookahead == 'k') ADVANCE(834);
      END_STATE();
    case 1449:
      if (lookahead == 'k') ADVANCE(877);
      END_STATE();
    case 1450:
      if (lookahead == 'k') ADVANCE(70);
      END_STATE();
    case 1451:
      if (lookahead == 'k') ADVANCE(110);
      END_STATE();
    case 1452:
      if (lookahead == 'k') ADVANCE(2585);
      END_STATE();
    case 1453:
      if (lookahead == 'k') ADVANCE(2585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 1454:
      if (lookahead == 'k') ADVANCE(2594);
      END_STATE();
    case 1455:
      if (lookahead == 'k') ADVANCE(666);
      END_STATE();
    case 1456:
      if (lookahead == 'k') ADVANCE(2349);
      END_STATE();
    case 1457:
      if (lookahead == 'k') ADVANCE(879);
      END_STATE();
    case 1458:
      if (lookahead == 'k') ADVANCE(922);
      END_STATE();
    case 1459:
      if (lookahead == 'k') ADVANCE(946);
      END_STATE();
    case 1460:
      if (lookahead == 'k') ADVANCE(982);
      END_STATE();
    case 1461:
      if (lookahead == 'k') ADVANCE(1766);
      END_STATE();
    case 1462:
      if (lookahead == 'k') ADVANCE(931);
      END_STATE();
    case 1463:
      if (lookahead == 'k') ADVANCE(958);
      END_STATE();
    case 1464:
      if (lookahead == 'k') ADVANCE(943);
      if (lookahead == 'p') ADVANCE(1456);
      END_STATE();
    case 1465:
      if (lookahead == 'k') ADVANCE(962);
      END_STATE();
    case 1466:
      if (lookahead == 'k') ADVANCE(968);
      END_STATE();
    case 1467:
      if (lookahead == 'k') ADVANCE(990);
      END_STATE();
    case 1468:
      if (lookahead == 'k') ADVANCE(973);
      END_STATE();
    case 1469:
      if (lookahead == 'k') ADVANCE(178);
      END_STATE();
    case 1470:
      if (lookahead == 'k') ADVANCE(187);
      END_STATE();
    case 1471:
      if (lookahead == 'k') ADVANCE(1041);
      END_STATE();
    case 1472:
      if (lookahead == 'k') ADVANCE(1047);
      END_STATE();
    case 1473:
      if (lookahead == 'k') ADVANCE(1049);
      if (lookahead == 'r') ADVANCE(1026);
      END_STATE();
    case 1474:
      if (lookahead == 'k') ADVANCE(226);
      END_STATE();
    case 1475:
      if (lookahead == 'k') ADVANCE(1063);
      if (lookahead == 'n') ADVANCE(1952);
      if (lookahead == 'p') ADVANCE(1228);
      if (lookahead == 's') ADVANCE(2557);
      if (lookahead == 'u') ADVANCE(1414);
      END_STATE();
    case 1476:
      if (lookahead == 'l') ADVANCE(3010);
      END_STATE();
    case 1477:
      if (lookahead == 'l') ADVANCE(3015);
      END_STATE();
    case 1478:
      if (lookahead == 'l') ADVANCE(2886);
      END_STATE();
    case 1479:
      if (lookahead == 'l') ADVANCE(3029);
      END_STATE();
    case 1480:
      if (lookahead == 'l') ADVANCE(2974);
      END_STATE();
    case 1481:
      if (lookahead == 'l') ADVANCE(2827);
      END_STATE();
    case 1482:
      if (lookahead == 'l') ADVANCE(2964);
      END_STATE();
    case 1483:
      if (lookahead == 'l') ADVANCE(2969);
      END_STATE();
    case 1484:
      if (lookahead == 'l') ADVANCE(3066);
      END_STATE();
    case 1485:
      if (lookahead == 'l') ADVANCE(3064);
      END_STATE();
    case 1486:
      if (lookahead == 'l') ADVANCE(3065);
      END_STATE();
    case 1487:
      if (lookahead == 'l') ADVANCE(2828);
      END_STATE();
    case 1488:
      if (lookahead == 'l') ADVANCE(3067);
      END_STATE();
    case 1489:
      if (lookahead == 'l') ADVANCE(2967);
      END_STATE();
    case 1490:
      if (lookahead == 'l') ADVANCE(2966);
      END_STATE();
    case 1491:
      if (lookahead == 'l') ADVANCE(3093);
      END_STATE();
    case 1492:
      if (lookahead == 'l') ADVANCE(3080);
      END_STATE();
    case 1493:
      if (lookahead == 'l') ADVANCE(2979);
      END_STATE();
    case 1494:
      if (lookahead == 'l') ADVANCE(3013);
      END_STATE();
    case 1495:
      if (lookahead == 'l') ADVANCE(3082);
      END_STATE();
    case 1496:
      if (lookahead == 'l') ADVANCE(805);
      if (lookahead == 'r') ADVANCE(894);
      END_STATE();
    case 1497:
      if (lookahead == 'l') ADVANCE(1076);
      if (lookahead == 'n') ADVANCE(685);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 1498:
      if (lookahead == 'l') ADVANCE(1510);
      END_STATE();
    case 1499:
      if (lookahead == 'l') ADVANCE(717);
      END_STATE();
    case 1500:
      if (lookahead == 'l') ADVANCE(2608);
      END_STATE();
    case 1501:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 1502:
      if (lookahead == 'l') ADVANCE(2680);
      if (lookahead == 's') ADVANCE(1430);
      if (lookahead == 'u') ADVANCE(2493);
      END_STATE();
    case 1503:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 1504:
      if (lookahead == 'l') ADVANCE(1552);
      if (lookahead == 'r') ADVANCE(1640);
      if (lookahead == 's') ADVANCE(1474);
      if (lookahead == 'u') ADVANCE(2462);
      END_STATE();
    case 1505:
      if (lookahead == 'l') ADVANCE(2709);
      END_STATE();
    case 1506:
      if (lookahead == 'l') ADVANCE(1374);
      END_STATE();
    case 1507:
      if (lookahead == 'l') ADVANCE(2269);
      END_STATE();
    case 1508:
      if (lookahead == 'l') ADVANCE(1478);
      END_STATE();
    case 1509:
      if (lookahead == 'l') ADVANCE(1103);
      END_STATE();
    case 1510:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 1511:
      if (lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 1512:
      if (lookahead == 'l') ADVANCE(2515);
      END_STATE();
    case 1513:
      if (lookahead == 'l') ADVANCE(2717);
      END_STATE();
    case 1514:
      if (lookahead == 'l') ADVANCE(1080);
      END_STATE();
    case 1515:
      if (lookahead == 'l') ADVANCE(1362);
      END_STATE();
    case 1516:
      if (lookahead == 'l') ADVANCE(2721);
      END_STATE();
    case 1517:
      if (lookahead == 'l') ADVANCE(1902);
      END_STATE();
    case 1518:
      if (lookahead == 'l') ADVANCE(2723);
      END_STATE();
    case 1519:
      if (lookahead == 'l') ADVANCE(2724);
      END_STATE();
    case 1520:
      if (lookahead == 'l') ADVANCE(722);
      END_STATE();
    case 1521:
      if (lookahead == 'l') ADVANCE(1363);
      END_STATE();
    case 1522:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 1523:
      if (lookahead == 'l') ADVANCE(1300);
      END_STATE();
    case 1524:
      if (lookahead == 'l') ADVANCE(1330);
      END_STATE();
    case 1525:
      if (lookahead == 'l') ADVANCE(1865);
      END_STATE();
    case 1526:
      if (lookahead == 'l') ADVANCE(2526);
      END_STATE();
    case 1527:
      if (lookahead == 'l') ADVANCE(1868);
      END_STATE();
    case 1528:
      if (lookahead == 'l') ADVANCE(2302);
      END_STATE();
    case 1529:
      if (lookahead == 'l') ADVANCE(1845);
      END_STATE();
    case 1530:
      if (lookahead == 'l') ADVANCE(2446);
      END_STATE();
    case 1531:
      if (lookahead == 'l') ADVANCE(2444);
      END_STATE();
    case 1532:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 1533:
      if (lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 1534:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 1535:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 1536:
      if (lookahead == 'l') ADVANCE(1947);
      if (lookahead == 's') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3045);
      END_STATE();
    case 1537:
      if (lookahead == 'l') ADVANCE(735);
      END_STATE();
    case 1538:
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 1539:
      if (lookahead == 'l') ADVANCE(743);
      END_STATE();
    case 1540:
      if (lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 1541:
      if (lookahead == 'l') ADVANCE(758);
      END_STATE();
    case 1542:
      if (lookahead == 'l') ADVANCE(761);
      END_STATE();
    case 1543:
      if (lookahead == 'l') ADVANCE(1894);
      if (lookahead == 'w') ADVANCE(372);
      END_STATE();
    case 1544:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1545:
      if (lookahead == 'l') ADVANCE(1298);
      END_STATE();
    case 1546:
      if (lookahead == 'l') ADVANCE(1588);
      END_STATE();
    case 1547:
      if (lookahead == 'l') ADVANCE(857);
      END_STATE();
    case 1548:
      if (lookahead == 'l') ADVANCE(1532);
      END_STATE();
    case 1549:
      if (lookahead == 'l') ADVANCE(1162);
      END_STATE();
    case 1550:
      if (lookahead == 'l') ADVANCE(914);
      END_STATE();
    case 1551:
      if (lookahead == 'l') ADVANCE(1255);
      END_STATE();
    case 1552:
      if (lookahead == 'l') ADVANCE(1914);
      END_STATE();
    case 1553:
      if (lookahead == 'l') ADVANCE(1164);
      END_STATE();
    case 1554:
      if (lookahead == 'l') ADVANCE(923);
      END_STATE();
    case 1555:
      if (lookahead == 'l') ADVANCE(1165);
      END_STATE();
    case 1556:
      if (lookahead == 'l') ADVANCE(913);
      END_STATE();
    case 1557:
      if (lookahead == 'l') ADVANCE(1167);
      END_STATE();
    case 1558:
      if (lookahead == 'l') ADVANCE(1445);
      END_STATE();
    case 1559:
      if (lookahead == 'l') ADVANCE(918);
      END_STATE();
    case 1560:
      if (lookahead == 'l') ADVANCE(876);
      END_STATE();
    case 1561:
      if (lookahead == 'l') ADVANCE(1170);
      END_STATE();
    case 1562:
      if (lookahead == 'l') ADVANCE(1270);
      END_STATE();
    case 1563:
      if (lookahead == 'l') ADVANCE(2737);
      END_STATE();
    case 1564:
      if (lookahead == 'l') ADVANCE(1171);
      END_STATE();
    case 1565:
      if (lookahead == 'l') ADVANCE(667);
      END_STATE();
    case 1566:
      if (lookahead == 'l') ADVANCE(1172);
      END_STATE();
    case 1567:
      if (lookahead == 'l') ADVANCE(947);
      END_STATE();
    case 1568:
      if (lookahead == 'l') ADVANCE(1175);
      END_STATE();
    case 1569:
      if (lookahead == 'l') ADVANCE(1176);
      END_STATE();
    case 1570:
      if (lookahead == 'l') ADVANCE(889);
      END_STATE();
    case 1571:
      if (lookahead == 'l') ADVANCE(925);
      END_STATE();
    case 1572:
      if (lookahead == 'l') ADVANCE(2486);
      END_STATE();
    case 1573:
      if (lookahead == 'l') ADVANCE(1007);
      END_STATE();
    case 1574:
      if (lookahead == 'l') ADVANCE(2496);
      END_STATE();
    case 1575:
      if (lookahead == 'l') ADVANCE(2498);
      END_STATE();
    case 1576:
      if (lookahead == 'l') ADVANCE(1338);
      END_STATE();
    case 1577:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 1578:
      if (lookahead == 'l') ADVANCE(2527);
      END_STATE();
    case 1579:
      if (lookahead == 'l') ADVANCE(1366);
      END_STATE();
    case 1580:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 1581:
      if (lookahead == 'l') ADVANCE(1003);
      END_STATE();
    case 1582:
      if (lookahead == 'l') ADVANCE(1368);
      END_STATE();
    case 1583:
      if (lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 1584:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 1585:
      if (lookahead == 'l') ADVANCE(998);
      END_STATE();
    case 1586:
      if (lookahead == 'l') ADVANCE(945);
      END_STATE();
    case 1587:
      if (lookahead == 'l') ADVANCE(961);
      END_STATE();
    case 1588:
      if (lookahead == 'l') ADVANCE(1350);
      END_STATE();
    case 1589:
      if (lookahead == 'l') ADVANCE(1109);
      END_STATE();
    case 1590:
      if (lookahead == 'l') ADVANCE(1373);
      END_STATE();
    case 1591:
      if (lookahead == 'l') ADVANCE(1375);
      END_STATE();
    case 1592:
      if (lookahead == 'l') ADVANCE(1009);
      END_STATE();
    case 1593:
      if (lookahead == 'l') ADVANCE(1383);
      END_STATE();
    case 1594:
      if (lookahead == 'l') ADVANCE(1388);
      END_STATE();
    case 1595:
      if (lookahead == 'l') ADVANCE(1392);
      END_STATE();
    case 1596:
      if (lookahead == 'l') ADVANCE(2400);
      END_STATE();
    case 1597:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 1598:
      if (lookahead == 'l') ADVANCE(1123);
      END_STATE();
    case 1599:
      if (lookahead == 'l') ADVANCE(1064);
      END_STATE();
    case 1600:
      if (lookahead == 'l') ADVANCE(2638);
      END_STATE();
    case 1601:
      if (lookahead == 'l') ADVANCE(1417);
      END_STATE();
    case 1602:
      if (lookahead == 'm') ADVANCE(1603);
      END_STATE();
    case 1603:
      if (lookahead == 'm') ADVANCE(378);
      if (lookahead == 'p') ADVANCE(1496);
      END_STATE();
    case 1604:
      if (lookahead == 'm') ADVANCE(2989);
      END_STATE();
    case 1605:
      if (lookahead == 'm') ADVANCE(2848);
      END_STATE();
    case 1606:
      if (lookahead == 'm') ADVANCE(2990);
      END_STATE();
    case 1607:
      if (lookahead == 'm') ADVANCE(2910);
      END_STATE();
    case 1608:
      if (lookahead == 'm') ADVANCE(2849);
      END_STATE();
    case 1609:
      if (lookahead == 'm') ADVANCE(2824);
      END_STATE();
    case 1610:
      if (lookahead == 'm') ADVANCE(1296);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 's') ADVANCE(560);
      if (lookahead == 'x') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 1611:
      if (lookahead == 'm') ADVANCE(1459);
      END_STATE();
    case 1612:
      if (lookahead == 'm') ADVANCE(1642);
      END_STATE();
    case 1613:
      if (lookahead == 'm') ADVANCE(1888);
      END_STATE();
    case 1614:
      if (lookahead == 'm') ADVANCE(505);
      END_STATE();
    case 1615:
      if (lookahead == 'm') ADVANCE(1694);
      END_STATE();
    case 1616:
      if (lookahead == 'm') ADVANCE(1849);
      END_STATE();
    case 1617:
      if (lookahead == 'm') ADVANCE(2584);
      if (lookahead == 'n') ADVANCE(992);
      if (lookahead == 'o') ADVANCE(1701);
      END_STATE();
    case 1618:
      if (lookahead == 'm') ADVANCE(507);
      END_STATE();
    case 1619:
      if (lookahead == 'm') ADVANCE(1412);
      END_STATE();
    case 1620:
      if (lookahead == 'm') ADVANCE(2019);
      END_STATE();
    case 1621:
      if (lookahead == 'm') ADVANCE(723);
      END_STATE();
    case 1622:
      if (lookahead == 'm') ADVANCE(902);
      END_STATE();
    case 1623:
      if (lookahead == 'm') ADVANCE(1068);
      END_STATE();
    case 1624:
      if (lookahead == 'm') ADVANCE(737);
      END_STATE();
    case 1625:
      if (lookahead == 'm') ADVANCE(738);
      END_STATE();
    case 1626:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 1627:
      if (lookahead == 'm') ADVANCE(1922);
      END_STATE();
    case 1628:
      if (lookahead == 'm') ADVANCE(809);
      END_STATE();
    case 1629:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 1630:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 1631:
      if (lookahead == 'm') ADVANCE(748);
      END_STATE();
    case 1632:
      if (lookahead == 'm') ADVANCE(823);
      END_STATE();
    case 1633:
      if (lookahead == 'm') ADVANCE(751);
      END_STATE();
    case 1634:
      if (lookahead == 'm') ADVANCE(762);
      END_STATE();
    case 1635:
      if (lookahead == 'm') ADVANCE(829);
      END_STATE();
    case 1636:
      if (lookahead == 'm') ADVANCE(763);
      END_STATE();
    case 1637:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 1638:
      if (lookahead == 'm') ADVANCE(1999);
      END_STATE();
    case 1639:
      if (lookahead == 'm') ADVANCE(405);
      END_STATE();
    case 1640:
      if (lookahead == 'm') ADVANCE(1871);
      END_STATE();
    case 1641:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 1642:
      if (lookahead == 'm') ADVANCE(935);
      if (lookahead == 'p') ADVANCE(2206);
      END_STATE();
    case 1643:
      if (lookahead == 'm') ADVANCE(414);
      END_STATE();
    case 1644:
      if (lookahead == 'm') ADVANCE(854);
      END_STATE();
    case 1645:
      if (lookahead == 'm') ADVANCE(887);
      END_STATE();
    case 1646:
      if (lookahead == 'm') ADVANCE(864);
      END_STATE();
    case 1647:
      if (lookahead == 'm') ADVANCE(869);
      END_STATE();
    case 1648:
      if (lookahead == 'm') ADVANCE(1329);
      if (lookahead == 's') ADVANCE(2466);
      END_STATE();
    case 1649:
      if (lookahead == 'm') ADVANCE(2016);
      END_STATE();
    case 1650:
      if (lookahead == 'm') ADVANCE(1771);
      END_STATE();
    case 1651:
      if (lookahead == 'm') ADVANCE(1932);
      END_STATE();
    case 1652:
      if (lookahead == 'm') ADVANCE(470);
      END_STATE();
    case 1653:
      if (lookahead == 'm') ADVANCE(2033);
      END_STATE();
    case 1654:
      if (lookahead == 'm') ADVANCE(2035);
      END_STATE();
    case 1655:
      if (lookahead == 'm') ADVANCE(1938);
      END_STATE();
    case 1656:
      if (lookahead == 'm') ADVANCE(148);
      END_STATE();
    case 1657:
      if (lookahead == 'm') ADVANCE(2043);
      END_STATE();
    case 1658:
      if (lookahead == 'm') ADVANCE(1943);
      END_STATE();
    case 1659:
      if (lookahead == 'm') ADVANCE(1944);
      END_STATE();
    case 1660:
      if (lookahead == 'm') ADVANCE(1945);
      END_STATE();
    case 1661:
      if (lookahead == 'm') ADVANCE(1946);
      END_STATE();
    case 1662:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 1663:
      if (lookahead == 'm') ADVANCE(1371);
      END_STATE();
    case 1664:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 1665:
      if (lookahead == 'm') ADVANCE(1404);
      if (lookahead == 'n') ADVANCE(612);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead == 'x') ADVANCE(2026);
      END_STATE();
    case 1666:
      if (lookahead == 'm') ADVANCE(2050);
      END_STATE();
    case 1667:
      if (lookahead == 'm') ADVANCE(2053);
      END_STATE();
    case 1668:
      if (lookahead == 'm') ADVANCE(2060);
      END_STATE();
    case 1669:
      if (lookahead == 'm') ADVANCE(2061);
      END_STATE();
    case 1670:
      if (lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 1671:
      if (lookahead == 'n') ADVANCE(536);
      END_STATE();
    case 1672:
      if (lookahead == 'n') ADVANCE(1144);
      if (lookahead == 'r') ADVANCE(1476);
      if (lookahead == 's') ADVANCE(797);
      if (lookahead == 't') ADVANCE(1077);
      END_STATE();
    case 1673:
      if (lookahead == 'n') ADVANCE(3010);
      END_STATE();
    case 1674:
      if (lookahead == 'n') ADVANCE(3015);
      END_STATE();
    case 1675:
      if (lookahead == 'n') ADVANCE(3009);
      END_STATE();
    case 1676:
      if (lookahead == 'n') ADVANCE(2894);
      END_STATE();
    case 1677:
      if (lookahead == 'n') ADVANCE(3058);
      END_STATE();
    case 1678:
      if (lookahead == 'n') ADVANCE(3056);
      END_STATE();
    case 1679:
      if (lookahead == 'n') ADVANCE(3057);
      END_STATE();
    case 1680:
      if (lookahead == 'n') ADVANCE(3063);
      END_STATE();
    case 1681:
      if (lookahead == 'n') ADVANCE(3081);
      END_STATE();
    case 1682:
      if (lookahead == 'n') ADVANCE(2895);
      END_STATE();
    case 1683:
      if (lookahead == 'n') ADVANCE(2867);
      END_STATE();
    case 1684:
      if (lookahead == 'n') ADVANCE(2889);
      END_STATE();
    case 1685:
      if (lookahead == 'n') ADVANCE(2850);
      END_STATE();
    case 1686:
      if (lookahead == 'n') ADVANCE(2851);
      END_STATE();
    case 1687:
      if (lookahead == 'n') ADVANCE(3013);
      END_STATE();
    case 1688:
      if (lookahead == 'n') ADVANCE(2987);
      END_STATE();
    case 1689:
      if (lookahead == 'n') ADVANCE(2579);
      if (lookahead == 'r') ADVANCE(1893);
      END_STATE();
    case 1690:
      if (lookahead == 'n') ADVANCE(1193);
      if (lookahead == 'r') ADVANCE(1180);
      if (lookahead == 'x') ADVANCE(16);
      END_STATE();
    case 1691:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 1692:
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 1693:
      if (lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 1694:
      if (lookahead == 'n') ADVANCE(1149);
      END_STATE();
    case 1695:
      if (lookahead == 'n') ADVANCE(1439);
      END_STATE();
    case 1696:
      if (lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 1697:
      if (lookahead == 'n') ADVANCE(1127);
      END_STATE();
    case 1698:
      if (lookahead == 'n') ADVANCE(2533);
      END_STATE();
    case 1699:
      if (lookahead == 'n') ADVANCE(1505);
      if (lookahead == 'p') ADVANCE(2471);
      END_STATE();
    case 1700:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 1701:
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 1702:
      if (lookahead == 'n') ADVANCE(2420);
      END_STATE();
    case 1703:
      if (lookahead == 'n') ADVANCE(1563);
      END_STATE();
    case 1704:
      if (lookahead == 'n') ADVANCE(440);
      END_STATE();
    case 1705:
      if (lookahead == 'n') ADVANCE(2269);
      END_STATE();
    case 1706:
      if (lookahead == 'n') ADVANCE(1461);
      END_STATE();
    case 1707:
      if (lookahead == 'n') ADVANCE(1188);
      END_STATE();
    case 1708:
      if (lookahead == 'n') ADVANCE(2387);
      END_STATE();
    case 1709:
      if (lookahead == 'n') ADVANCE(1130);
      END_STATE();
    case 1710:
      if (lookahead == 'n') ADVANCE(1099);
      END_STATE();
    case 1711:
      if (lookahead == 'n') ADVANCE(1131);
      END_STATE();
    case 1712:
      if (lookahead == 'n') ADVANCE(2273);
      END_STATE();
    case 1713:
      if (lookahead == 'n') ADVANCE(2422);
      END_STATE();
    case 1714:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 1715:
      if (lookahead == 'n') ADVANCE(1155);
      END_STATE();
    case 1716:
      if (lookahead == 'n') ADVANCE(2423);
      END_STATE();
    case 1717:
      if (lookahead == 'n') ADVANCE(1129);
      END_STATE();
    case 1718:
      if (lookahead == 'n') ADVANCE(2274);
      END_STATE();
    case 1719:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 1720:
      if (lookahead == 'n') ADVANCE(1132);
      END_STATE();
    case 1721:
      if (lookahead == 'n') ADVANCE(1133);
      END_STATE();
    case 1722:
      if (lookahead == 'n') ADVANCE(2464);
      END_STATE();
    case 1723:
      if (lookahead == 'n') ADVANCE(1134);
      END_STATE();
    case 1724:
      if (lookahead == 'n') ADVANCE(1135);
      END_STATE();
    case 1725:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 1726:
      if (lookahead == 'n') ADVANCE(1136);
      END_STATE();
    case 1727:
      if (lookahead == 'n') ADVANCE(2277);
      END_STATE();
    case 1728:
      if (lookahead == 'n') ADVANCE(1138);
      END_STATE();
    case 1729:
      if (lookahead == 'n') ADVANCE(1138);
      if (lookahead == 'o') ADVANCE(1454);
      END_STATE();
    case 1730:
      if (lookahead == 'n') ADVANCE(2278);
      END_STATE();
    case 1731:
      if (lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 1732:
      if (lookahead == 'n') ADVANCE(2279);
      END_STATE();
    case 1733:
      if (lookahead == 'n') ADVANCE(1295);
      END_STATE();
    case 1734:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 1735:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 1736:
      if (lookahead == 'n') ADVANCE(1513);
      END_STATE();
    case 1737:
      if (lookahead == 'n') ADVANCE(2432);
      END_STATE();
    case 1738:
      if (lookahead == 'n') ADVANCE(1516);
      END_STATE();
    case 1739:
      if (lookahead == 'n') ADVANCE(2433);
      END_STATE();
    case 1740:
      if (lookahead == 'n') ADVANCE(2289);
      END_STATE();
    case 1741:
      if (lookahead == 'n') ADVANCE(2434);
      END_STATE();
    case 1742:
      if (lookahead == 'n') ADVANCE(2435);
      END_STATE();
    case 1743:
      if (lookahead == 'n') ADVANCE(1518);
      END_STATE();
    case 1744:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 1745:
      if (lookahead == 'n') ADVANCE(1519);
      END_STATE();
    case 1746:
      if (lookahead == 'n') ADVANCE(2439);
      END_STATE();
    case 1747:
      if (lookahead == 'n') ADVANCE(2441);
      END_STATE();
    case 1748:
      if (lookahead == 'n') ADVANCE(2302);
      END_STATE();
    case 1749:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 1750:
      if (lookahead == 'n') ADVANCE(765);
      END_STATE();
    case 1751:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 1752:
      if (lookahead == 'n') ADVANCE(719);
      END_STATE();
    case 1753:
      if (lookahead == 'n') ADVANCE(772);
      END_STATE();
    case 1754:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 1755:
      if (lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1756:
      if (lookahead == 'n') ADVANCE(1992);
      END_STATE();
    case 1757:
      if (lookahead == 'n') ADVANCE(1853);
      END_STATE();
    case 1758:
      if (lookahead == 'n') ADVANCE(553);
      END_STATE();
    case 1759:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 1760:
      if (lookahead == 'n') ADVANCE(2479);
      END_STATE();
    case 1761:
      if (lookahead == 'n') ADVANCE(884);
      END_STATE();
    case 1762:
      if (lookahead == 'n') ADVANCE(792);
      END_STATE();
    case 1763:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 1764:
      if (lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 1765:
      if (lookahead == 'n') ADVANCE(2484);
      END_STATE();
    case 1766:
      if (lookahead == 'n') ADVANCE(1912);
      END_STATE();
    case 1767:
      if (lookahead == 'n') ADVANCE(2021);
      END_STATE();
    case 1768:
      if (lookahead == 'n') ADVANCE(659);
      END_STATE();
    case 1769:
      if (lookahead == 'n') ADVANCE(558);
      END_STATE();
    case 1770:
      if (lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 1771:
      if (lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 1772:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 1773:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 1774:
      if (lookahead == 'n') ADVANCE(2505);
      END_STATE();
    case 1775:
      if (lookahead == 'n') ADVANCE(1900);
      END_STATE();
    case 1776:
      if (lookahead == 'n') ADVANCE(856);
      END_STATE();
    case 1777:
      if (lookahead == 'n') ADVANCE(870);
      END_STATE();
    case 1778:
      if (lookahead == 'n') ADVANCE(949);
      END_STATE();
    case 1779:
      if (lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 1780:
      if (lookahead == 'n') ADVANCE(2609);
      if (lookahead == 'o') ADVANCE(1869);
      END_STATE();
    case 1781:
      if (lookahead == 'n') ADVANCE(424);
      if (lookahead == 's') ADVANCE(2922);
      END_STATE();
    case 1782:
      if (lookahead == 'n') ADVANCE(1952);
      END_STATE();
    case 1783:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 1784:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 1785:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 1786:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 1787:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 1788:
      if (lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 1789:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 1790:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 1791:
      if (lookahead == 'n') ADVANCE(969);
      END_STATE();
    case 1792:
      if (lookahead == 'n') ADVANCE(983);
      END_STATE();
    case 1793:
      if (lookahead == 'n') ADVANCE(452);
      END_STATE();
    case 1794:
      if (lookahead == 'n') ADVANCE(588);
      END_STATE();
    case 1795:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 1796:
      if (lookahead == 'n') ADVANCE(2398);
      END_STATE();
    case 1797:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 1798:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 1799:
      if (lookahead == 'n') ADVANCE(456);
      END_STATE();
    case 1800:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 1801:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 1802:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 1803:
      if (lookahead == 'n') ADVANCE(1342);
      END_STATE();
    case 1804:
      if (lookahead == 'n') ADVANCE(1353);
      END_STATE();
    case 1805:
      if (lookahead == 'n') ADVANCE(1369);
      END_STATE();
    case 1806:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 1807:
      if (lookahead == 'n') ADVANCE(1023);
      END_STATE();
    case 1808:
      if (lookahead == 'n') ADVANCE(1964);
      END_STATE();
    case 1809:
      if (lookahead == 'n') ADVANCE(1966);
      END_STATE();
    case 1810:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 1811:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 1812:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 1813:
      if (lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 1814:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 1815:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 1816:
      if (lookahead == 'n') ADVANCE(1974);
      END_STATE();
    case 1817:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 1818:
      if (lookahead == 'o') ADVANCE(2679);
      END_STATE();
    case 1819:
      if (lookahead == 'o') ADVANCE(1699);
      if (lookahead == 's') ADVANCE(1251);
      END_STATE();
    case 1820:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 1821:
      if (lookahead == 'o') ADVANCE(2996);
      END_STATE();
    case 1822:
      if (lookahead == 'o') ADVANCE(3069);
      END_STATE();
    case 1823:
      if (lookahead == 'o') ADVANCE(3070);
      END_STATE();
    case 1824:
      if (lookahead == 'o') ADVANCE(3071);
      END_STATE();
    case 1825:
      if (lookahead == 'o') ADVANCE(2854);
      END_STATE();
    case 1826:
      if (lookahead == 'o') ADVANCE(3019);
      END_STATE();
    case 1827:
      if (lookahead == 'o') ADVANCE(3020);
      END_STATE();
    case 1828:
      if (lookahead == 'o') ADVANCE(3072);
      END_STATE();
    case 1829:
      if (lookahead == 'o') ADVANCE(2997);
      END_STATE();
    case 1830:
      if (lookahead == 'o') ADVANCE(3073);
      END_STATE();
    case 1831:
      if (lookahead == 'o') ADVANCE(3074);
      END_STATE();
    case 1832:
      if (lookahead == 'o') ADVANCE(3090);
      END_STATE();
    case 1833:
      if (lookahead == 'o') ADVANCE(1729);
      END_STATE();
    case 1834:
      if (lookahead == 'o') ADVANCE(3046);
      END_STATE();
    case 1835:
      if (lookahead == 'o') ADVANCE(2135);
      END_STATE();
    case 1836:
      if (lookahead == 'o') ADVANCE(678);
      if (lookahead == 't') ADVANCE(662);
      END_STATE();
    case 1837:
      if (lookahead == 'o') ADVANCE(2975);
      END_STATE();
    case 1838:
      if (lookahead == 'o') ADVANCE(2987);
      END_STATE();
    case 1839:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 1840:
      if (lookahead == 'o') ADVANCE(2673);
      END_STATE();
    case 1841:
      if (lookahead == 'o') ADVANCE(2692);
      END_STATE();
    case 1842:
      if (lookahead == 'o') ADVANCE(1638);
      END_STATE();
    case 1843:
      if (lookahead == 'o') ADVANCE(1457);
      END_STATE();
    case 1844:
      if (lookahead == 'o') ADVANCE(1612);
      END_STATE();
    case 1845:
      if (lookahead == 'o') ADVANCE(2682);
      END_STATE();
    case 1846:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 1847:
      if (lookahead == 'o') ADVANCE(2671);
      END_STATE();
    case 1848:
      if (lookahead == 'o') ADVANCE(2593);
      END_STATE();
    case 1849:
      if (lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 1850:
      if (lookahead == 'o') ADVANCE(2687);
      END_STATE();
    case 1851:
      if (lookahead == 'o') ADVANCE(2317);
      END_STATE();
    case 1852:
      if (lookahead == 'o') ADVANCE(1656);
      END_STATE();
    case 1853:
      if (lookahead == 'o') ADVANCE(2167);
      END_STATE();
    case 1854:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 1855:
      if (lookahead == 'o') ADVANCE(2508);
      END_STATE();
    case 1856:
      if (lookahead == 'o') ADVANCE(1517);
      END_STATE();
    case 1857:
      if (lookahead == 'o') ADVANCE(2269);
      END_STATE();
    case 1858:
      if (lookahead == 'o') ADVANCE(2100);
      END_STATE();
    case 1859:
      if (lookahead == 'o') ADVANCE(1607);
      END_STATE();
    case 1860:
      if (lookahead == 'o') ADVANCE(1676);
      END_STATE();
    case 1861:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 1862:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 1863:
      if (lookahead == 'o') ADVANCE(1677);
      END_STATE();
    case 1864:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1865:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 1866:
      if (lookahead == 'o') ADVANCE(1679);
      END_STATE();
    case 1867:
      if (lookahead == 'o') ADVANCE(1705);
      END_STATE();
    case 1868:
      if (lookahead == 'o') ADVANCE(537);
      END_STATE();
    case 1869:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 1870:
      if (lookahead == 'o') ADVANCE(1680);
      END_STATE();
    case 1871:
      if (lookahead == 'o') ADVANCE(2074);
      END_STATE();
    case 1872:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 1873:
      if (lookahead == 'o') ADVANCE(1137);
      END_STATE();
    case 1874:
      if (lookahead == 'o') ADVANCE(1710);
      END_STATE();
    case 1875:
      if (lookahead == 'o') ADVANCE(1682);
      END_STATE();
    case 1876:
      if (lookahead == 'o') ADVANCE(2099);
      END_STATE();
    case 1877:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 1878:
      if (lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1879:
      if (lookahead == 'o') ADVANCE(1685);
      END_STATE();
    case 1880:
      if (lookahead == 'o') ADVANCE(1686);
      END_STATE();
    case 1881:
      if (lookahead == 'o') ADVANCE(2290);
      END_STATE();
    case 1882:
      if (lookahead == 'o') ADVANCE(2292);
      END_STATE();
    case 1883:
      if (lookahead == 'o') ADVANCE(2172);
      END_STATE();
    case 1884:
      if (lookahead == 'o') ADVANCE(2302);
      END_STATE();
    case 1885:
      if (lookahead == 'o') ADVANCE(2081);
      END_STATE();
    case 1886:
      if (lookahead == 'o') ADVANCE(2082);
      END_STATE();
    case 1887:
      if (lookahead == 'o') ADVANCE(2085);
      END_STATE();
    case 1888:
      if (lookahead == 'o') ADVANCE(2110);
      if (lookahead == 's') ADVANCE(2519);
      END_STATE();
    case 1889:
      if (lookahead == 'o') ADVANCE(2087);
      END_STATE();
    case 1890:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 1891:
      if (lookahead == 'o') ADVANCE(1090);
      END_STATE();
    case 1892:
      if (lookahead == 'o') ADVANCE(2672);
      END_STATE();
    case 1893:
      if (lookahead == 'o') ADVANCE(2583);
      END_STATE();
    case 1894:
      if (lookahead == 'o') ADVANCE(2674);
      END_STATE();
    case 1895:
      if (lookahead == 'o') ADVANCE(1620);
      if (lookahead == 'r') ADVANCE(1951);
      END_STATE();
    case 1896:
      if (lookahead == 'o') ADVANCE(1163);
      END_STATE();
    case 1897:
      if (lookahead == 'o') ADVANCE(1515);
      END_STATE();
    case 1898:
      if (lookahead == 'o') ADVANCE(502);
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 1899:
      if (lookahead == 'o') ADVANCE(1704);
      END_STATE();
    case 1900:
      if (lookahead == 'o') ADVANCE(2195);
      END_STATE();
    case 1901:
      if (lookahead == 'o') ADVANCE(1736);
      END_STATE();
    case 1902:
      if (lookahead == 'o') ADVANCE(1712);
      END_STATE();
    case 1903:
      if (lookahead == 'o') ADVANCE(2685);
      END_STATE();
    case 1904:
      if (lookahead == 'o') ADVANCE(2675);
      END_STATE();
    case 1905:
      if (lookahead == 'o') ADVANCE(1201);
      END_STATE();
    case 1906:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 1907:
      if (lookahead == 'o') ADVANCE(1629);
      END_STATE();
    case 1908:
      if (lookahead == 'o') ADVANCE(1738);
      END_STATE();
    case 1909:
      if (lookahead == 'o') ADVANCE(2131);
      END_STATE();
    case 1910:
      if (lookahead == 'o') ADVANCE(1718);
      END_STATE();
    case 1911:
      if (lookahead == 'o') ADVANCE(2473);
      END_STATE();
    case 1912:
      if (lookahead == 'o') ADVANCE(2676);
      END_STATE();
    case 1913:
      if (lookahead == 'o') ADVANCE(2587);
      END_STATE();
    case 1914:
      if (lookahead == 'o') ADVANCE(2684);
      END_STATE();
    case 1915:
      if (lookahead == 'o') ADVANCE(1785);
      END_STATE();
    case 1916:
      if (lookahead == 'o') ADVANCE(1168);
      END_STATE();
    case 1917:
      if (lookahead == 'o') ADVANCE(1545);
      END_STATE();
    case 1918:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 1919:
      if (lookahead == 'o') ADVANCE(1743);
      END_STATE();
    case 1920:
      if (lookahead == 'o') ADVANCE(1750);
      END_STATE();
    case 1921:
      if (lookahead == 'o') ADVANCE(1727);
      END_STATE();
    case 1922:
      if (lookahead == 'o') ADVANCE(2501);
      END_STATE();
    case 1923:
      if (lookahead == 'o') ADVANCE(1789);
      END_STATE();
    case 1924:
      if (lookahead == 'o') ADVANCE(2122);
      END_STATE();
    case 1925:
      if (lookahead == 'o') ADVANCE(2343);
      END_STATE();
    case 1926:
      if (lookahead == 'o') ADVANCE(1745);
      END_STATE();
    case 1927:
      if (lookahead == 'o') ADVANCE(1730);
      END_STATE();
    case 1928:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 1929:
      if (lookahead == 'o') ADVANCE(2129);
      END_STATE();
    case 1930:
      if (lookahead == 'o') ADVANCE(1752);
      END_STATE();
    case 1931:
      if (lookahead == 'o') ADVANCE(1732);
      END_STATE();
    case 1932:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 1933:
      if (lookahead == 'o') ADVANCE(2686);
      END_STATE();
    case 1934:
      if (lookahead == 'o') ADVANCE(2134);
      END_STATE();
    case 1935:
      if (lookahead == 'o') ADVANCE(1753);
      END_STATE();
    case 1936:
      if (lookahead == 'o') ADVANCE(1740);
      END_STATE();
    case 1937:
      if (lookahead == 'o') ADVANCE(2492);
      END_STATE();
    case 1938:
      if (lookahead == 'o') ADVANCE(661);
      END_STATE();
    case 1939:
      if (lookahead == 'o') ADVANCE(1810);
      END_STATE();
    case 1940:
      if (lookahead == 'o') ADVANCE(1754);
      END_STATE();
    case 1941:
      if (lookahead == 'o') ADVANCE(1748);
      END_STATE();
    case 1942:
      if (lookahead == 'o') ADVANCE(2139);
      END_STATE();
    case 1943:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 1944:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 1945:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 1946:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 1947:
      if (lookahead == 'o') ADVANCE(1728);
      END_STATE();
    case 1948:
      if (lookahead == 'o') ADVANCE(2155);
      END_STATE();
    case 1949:
      if (lookahead == 'o') ADVANCE(2503);
      END_STATE();
    case 1950:
      if (lookahead == 'o') ADVANCE(577);
      END_STATE();
    case 1951:
      if (lookahead == 'o') ADVANCE(2366);
      END_STATE();
    case 1952:
      if (lookahead == 'o') ADVANCE(2521);
      END_STATE();
    case 1953:
      if (lookahead == 'o') ADVANCE(2185);
      END_STATE();
    case 1954:
      if (lookahead == 'o') ADVANCE(2192);
      END_STATE();
    case 1955:
      if (lookahead == 'o') ADVANCE(1653);
      END_STATE();
    case 1956:
      if (lookahead == 'o') ADVANCE(2542);
      END_STATE();
    case 1957:
      if (lookahead == 'o') ADVANCE(2234);
      END_STATE();
    case 1958:
      if (lookahead == 'o') ADVANCE(1590);
      END_STATE();
    case 1959:
      if (lookahead == 'o') ADVANCE(2689);
      END_STATE();
    case 1960:
      if (lookahead == 'o') ADVANCE(1664);
      END_STATE();
    case 1961:
      if (lookahead == 'o') ADVANCE(2546);
      END_STATE();
    case 1962:
      if (lookahead == 'o') ADVANCE(1593);
      END_STATE();
    case 1963:
      if (lookahead == 'o') ADVANCE(1801);
      END_STATE();
    case 1964:
      if (lookahead == 'o') ADVANCE(2548);
      END_STATE();
    case 1965:
      if (lookahead == 'o') ADVANCE(1802);
      END_STATE();
    case 1966:
      if (lookahead == 'o') ADVANCE(2550);
      END_STATE();
    case 1967:
      if (lookahead == 'o') ADVANCE(2055);
      END_STATE();
    case 1968:
      if (lookahead == 'o') ADVANCE(1667);
      END_STATE();
    case 1969:
      if (lookahead == 'o') ADVANCE(607);
      END_STATE();
    case 1970:
      if (lookahead == 'o') ADVANCE(2404);
      END_STATE();
    case 1971:
      if (lookahead == 'o') ADVANCE(1668);
      END_STATE();
    case 1972:
      if (lookahead == 'o') ADVANCE(2057);
      END_STATE();
    case 1973:
      if (lookahead == 'o') ADVANCE(2635);
      END_STATE();
    case 1974:
      if (lookahead == 'o') ADVANCE(1814);
      END_STATE();
    case 1975:
      if (lookahead == 'o') ADVANCE(2415);
      END_STATE();
    case 1976:
      if (lookahead == 'p') ADVANCE(1225);
      END_STATE();
    case 1977:
      if (lookahead == 'p') ADVANCE(302);
      END_STATE();
    case 1978:
      if (lookahead == 'p') ADVANCE(287);
      END_STATE();
    case 1979:
      if (lookahead == 'p') ADVANCE(2998);
      END_STATE();
    case 1980:
      if (lookahead == 'p') ADVANCE(3015);
      END_STATE();
    case 1981:
      if (lookahead == 'p') ADVANCE(2878);
      END_STATE();
    case 1982:
      if (lookahead == 'p') ADVANCE(3001);
      END_STATE();
    case 1983:
      if (lookahead == 'p') ADVANCE(2866);
      END_STATE();
    case 1984:
      if (lookahead == 'p') ADVANCE(3046);
      END_STATE();
    case 1985:
      if (lookahead == 'p') ADVANCE(2975);
      END_STATE();
    case 1986:
      if (lookahead == 'p') ADVANCE(2980);
      END_STATE();
    case 1987:
      if (lookahead == 'p') ADVANCE(2775);
      END_STATE();
    case 1988:
      if (lookahead == 'p') ADVANCE(3025);
      END_STATE();
    case 1989:
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 1990:
      if (lookahead == 'p') ADVANCE(1216);
      END_STATE();
    case 1991:
      if (lookahead == 'p') ADVANCE(1126);
      END_STATE();
    case 1992:
      if (lookahead == 'p') ADVANCE(1147);
      END_STATE();
    case 1993:
      if (lookahead == 'p') ADVANCE(1953);
      END_STATE();
    case 1994:
      if (lookahead == 'p') ADVANCE(1318);
      END_STATE();
    case 1995:
      if (lookahead == 'p') ADVANCE(2101);
      END_STATE();
    case 1996:
      if (lookahead == 'p') ADVANCE(2268);
      END_STATE();
    case 1997:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 1998:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 1999:
      if (lookahead == 'p') ADVANCE(2196);
      END_STATE();
    case 2000:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 2001:
      if (lookahead == 'p') ADVANCE(2454);
      END_STATE();
    case 2002:
      if (lookahead == 'p') ADVANCE(1140);
      END_STATE();
    case 2003:
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead == 's') ADVANCE(2524);
      END_STATE();
    case 2004:
      if (lookahead == 'p') ADVANCE(1292);
      END_STATE();
    case 2005:
      if (lookahead == 'p') ADVANCE(822);
      END_STATE();
    case 2006:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 2007:
      if (lookahead == 'p') ADVANCE(909);
      END_STATE();
    case 2008:
      if (lookahead == 'p') ADVANCE(816);
      END_STATE();
    case 2009:
      if (lookahead == 'p') ADVANCE(951);
      END_STATE();
    case 2010:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 2011:
      if (lookahead == 'p') ADVANCE(786);
      if (lookahead == 'u') ADVANCE(2452);
      if (lookahead == 'v') ADVANCE(791);
      END_STATE();
    case 2012:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 2013:
      if (lookahead == 'p') ADVANCE(2582);
      END_STATE();
    case 2014:
      if (lookahead == 'p') ADVANCE(2108);
      END_STATE();
    case 2015:
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == 'u') ADVANCE(2015);
      END_STATE();
    case 2016:
      if (lookahead == 'p') ADVANCE(1924);
      END_STATE();
    case 2017:
      if (lookahead == 'p') ADVANCE(2204);
      END_STATE();
    case 2018:
      if (lookahead == 'p') ADVANCE(2592);
      END_STATE();
    case 2019:
      if (lookahead == 'p') ADVANCE(1521);
      END_STATE();
    case 2020:
      if (lookahead == 'p') ADVANCE(859);
      END_STATE();
    case 2021:
      if (lookahead == 'p') ADVANCE(1161);
      END_STATE();
    case 2022:
      if (lookahead == 'p') ADVANCE(2146);
      END_STATE();
    case 2023:
      if (lookahead == 'p') ADVANCE(2491);
      END_STATE();
    case 2024:
      if (lookahead == 'p') ADVANCE(2141);
      END_STATE();
    case 2025:
      if (lookahead == 'p') ADVANCE(1538);
      END_STATE();
    case 2026:
      if (lookahead == 'p') ADVANCE(911);
      END_STATE();
    case 2027:
      if (lookahead == 'p') ADVANCE(2487);
      END_STATE();
    case 2028:
      if (lookahead == 'p') ADVANCE(960);
      END_STATE();
    case 2029:
      if (lookahead == 'p') ADVANCE(1227);
      END_STATE();
    case 2030:
      if (lookahead == 'p') ADVANCE(1341);
      END_STATE();
    case 2031:
      if (lookahead == 'p') ADVANCE(1917);
      END_STATE();
    case 2032:
      if (lookahead == 'p') ADVANCE(1333);
      END_STATE();
    case 2033:
      if (lookahead == 'p') ADVANCE(2233);
      END_STATE();
    case 2034:
      if (lookahead == 'p') ADVANCE(978);
      END_STATE();
    case 2035:
      if (lookahead == 'p') ADVANCE(1929);
      END_STATE();
    case 2036:
      if (lookahead == 'p') ADVANCE(2538);
      END_STATE();
    case 2037:
      if (lookahead == 'p') ADVANCE(1345);
      END_STATE();
    case 2038:
      if (lookahead == 'p') ADVANCE(1340);
      END_STATE();
    case 2039:
      if (lookahead == 'p') ADVANCE(2210);
      END_STATE();
    case 2040:
      if (lookahead == 'p') ADVANCE(2545);
      END_STATE();
    case 2041:
      if (lookahead == 'p') ADVANCE(1352);
      END_STATE();
    case 2042:
      if (lookahead == 'p') ADVANCE(1347);
      END_STATE();
    case 2043:
      if (lookahead == 'p') ADVANCE(1942);
      END_STATE();
    case 2044:
      if (lookahead == 'p') ADVANCE(1355);
      END_STATE();
    case 2045:
      if (lookahead == 'p') ADVANCE(1351);
      END_STATE();
    case 2046:
      if (lookahead == 'p') ADVANCE(1357);
      END_STATE();
    case 2047:
      if (lookahead == 'p') ADVANCE(1354);
      END_STATE();
    case 2048:
      if (lookahead == 'p') ADVANCE(1356);
      END_STATE();
    case 2049:
      if (lookahead == 'p') ADVANCE(1359);
      END_STATE();
    case 2050:
      if (lookahead == 'p') ADVANCE(1954);
      END_STATE();
    case 2051:
      if (lookahead == 'p') ADVANCE(2552);
      END_STATE();
    case 2052:
      if (lookahead == 'p') ADVANCE(2213);
      END_STATE();
    case 2053:
      if (lookahead == 'p') ADVANCE(1591);
      END_STATE();
    case 2054:
      if (lookahead == 'p') ADVANCE(2237);
      END_STATE();
    case 2055:
      if (lookahead == 'p') ADVANCE(2558);
      END_STATE();
    case 2056:
      if (lookahead == 'p') ADVANCE(2248);
      END_STATE();
    case 2057:
      if (lookahead == 'p') ADVANCE(2562);
      END_STATE();
    case 2058:
      if (lookahead == 'p') ADVANCE(2253);
      END_STATE();
    case 2059:
      if (lookahead == 'p') ADVANCE(1043);
      END_STATE();
    case 2060:
      if (lookahead == 'p') ADVANCE(2251);
      END_STATE();
    case 2061:
      if (lookahead == 'p') ADVANCE(2255);
      END_STATE();
    case 2062:
      if (lookahead == 'p') ADVANCE(1231);
      END_STATE();
    case 2063:
      if (lookahead == 'p') ADVANCE(1061);
      END_STATE();
    case 2064:
      if (lookahead == 'p') ADVANCE(1232);
      END_STATE();
    case 2065:
      if (lookahead == 'p') ADVANCE(1233);
      END_STATE();
    case 2066:
      if (lookahead == 'q') ADVANCE(2773);
      END_STATE();
    case 2067:
      if (lookahead == 'q') ADVANCE(2589);
      END_STATE();
    case 2068:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 2069:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 2070:
      if (lookahead == 'r') ADVANCE(2859);
      END_STATE();
    case 2071:
      if (lookahead == 'r') ADVANCE(2973);
      END_STATE();
    case 2072:
      if (lookahead == 'r') ADVANCE(2960);
      END_STATE();
    case 2073:
      if (lookahead == 'r') ADVANCE(3003);
      END_STATE();
    case 2074:
      if (lookahead == 'r') ADVANCE(2860);
      END_STATE();
    case 2075:
      if (lookahead == 'r') ADVANCE(2983);
      END_STATE();
    case 2076:
      if (lookahead == 'r') ADVANCE(3002);
      END_STATE();
    case 2077:
      if (lookahead == 'r') ADVANCE(2842);
      END_STATE();
    case 2078:
      if (lookahead == 'r') ADVANCE(2940);
      END_STATE();
    case 2079:
      if (lookahead == 'r') ADVANCE(2977);
      END_STATE();
    case 2080:
      if (lookahead == 'r') ADVANCE(2838);
      END_STATE();
    case 2081:
      if (lookahead == 'r') ADVANCE(2911);
      END_STATE();
    case 2082:
      if (lookahead == 'r') ADVANCE(2912);
      END_STATE();
    case 2083:
      if (lookahead == 'r') ADVANCE(2971);
      END_STATE();
    case 2084:
      if (lookahead == 'r') ADVANCE(2891);
      END_STATE();
    case 2085:
      if (lookahead == 'r') ADVANCE(2843);
      END_STATE();
    case 2086:
      if (lookahead == 'r') ADVANCE(3046);
      END_STATE();
    case 2087:
      if (lookahead == 'r') ADVANCE(3080);
      END_STATE();
    case 2088:
      if (lookahead == 'r') ADVANCE(2979);
      END_STATE();
    case 2089:
      if (lookahead == 'r') ADVANCE(3082);
      END_STATE();
    case 2090:
      if (lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 2091:
      if (lookahead == 'r') ADVANCE(2727);
      END_STATE();
    case 2092:
      if (lookahead == 'r') ADVANCE(2310);
      END_STATE();
    case 2093:
      if (lookahead == 'r') ADVANCE(2655);
      END_STATE();
    case 2094:
      if (lookahead == 'r') ADVANCE(2456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 2095:
      if (lookahead == 'r') ADVANCE(2418);
      END_STATE();
    case 2096:
      if (lookahead == 'r') ADVANCE(1319);
      END_STATE();
    case 2097:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 2098:
      if (lookahead == 'r') ADVANCE(1619);
      END_STATE();
    case 2099:
      if (lookahead == 'r') ADVANCE(1639);
      END_STATE();
    case 2100:
      if (lookahead == 'r') ADVANCE(1361);
      END_STATE();
    case 2101:
      if (lookahead == 'r') ADVANCE(777);
      END_STATE();
    case 2102:
      if (lookahead == 'r') ADVANCE(2615);
      END_STATE();
    case 2103:
      if (lookahead == 'r') ADVANCE(2096);
      END_STATE();
    case 2104:
      if (lookahead == 'r') ADVANCE(2632);
      END_STATE();
    case 2105:
      if (lookahead == 'r') ADVANCE(895);
      END_STATE();
    case 2106:
      if (lookahead == 'r') ADVANCE(1186);
      END_STATE();
    case 2107:
      if (lookahead == 'r') ADVANCE(2421);
      END_STATE();
    case 2108:
      if (lookahead == 'r') ADVANCE(1896);
      END_STATE();
    case 2109:
      if (lookahead == 'r') ADVANCE(2575);
      END_STATE();
    case 2110:
      if (lookahead == 'r') ADVANCE(2722);
      END_STATE();
    case 2111:
      if (lookahead == 'r') ADVANCE(389);
      END_STATE();
    case 2112:
      if (lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 2113:
      if (lookahead == 'r') ADVANCE(1297);
      END_STATE();
    case 2114:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 2115:
      if (lookahead == 'r') ADVANCE(1484);
      END_STATE();
    case 2116:
      if (lookahead == 'r') ADVANCE(1485);
      END_STATE();
    case 2117:
      if (lookahead == 'r') ADVANCE(2429);
      END_STATE();
    case 2118:
      if (lookahead == 'r') ADVANCE(1486);
      END_STATE();
    case 2119:
      if (lookahead == 'r') ADVANCE(1507);
      END_STATE();
    case 2120:
      if (lookahead == 'r') ADVANCE(1244);
      END_STATE();
    case 2121:
      if (lookahead == 'r') ADVANCE(860);
      END_STATE();
    case 2122:
      if (lookahead == 'r') ADVANCE(2430);
      END_STATE();
    case 2123:
      if (lookahead == 'r') ADVANCE(1488);
      END_STATE();
    case 2124:
      if (lookahead == 'r') ADVANCE(1305);
      END_STATE();
    case 2125:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 2126:
      if (lookahead == 'r') ADVANCE(1491);
      END_STATE();
    case 2127:
      if (lookahead == 'r') ADVANCE(1335);
      END_STATE();
    case 2128:
      if (lookahead == 'r') ADVANCE(1528);
      END_STATE();
    case 2129:
      if (lookahead == 'r') ADVANCE(2437);
      END_STATE();
    case 2130:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 2131:
      if (lookahead == 'r') ADVANCE(242);
      END_STATE();
    case 2132:
      if (lookahead == 'r') ADVANCE(1859);
      END_STATE();
    case 2133:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 2134:
      if (lookahead == 'r') ADVANCE(2443);
      END_STATE();
    case 2135:
      if (lookahead == 'r') ADVANCE(2443);
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 2136:
      if (lookahead == 'r') ADVANCE(840);
      END_STATE();
    case 2137:
      if (lookahead == 'r') ADVANCE(2446);
      END_STATE();
    case 2138:
      if (lookahead == 'r') ADVANCE(808);
      END_STATE();
    case 2139:
      if (lookahead == 'r') ADVANCE(2447);
      END_STATE();
    case 2140:
      if (lookahead == 'r') ADVANCE(2448);
      END_STATE();
    case 2141:
      if (lookahead == 'r') ADVANCE(1873);
      END_STATE();
    case 2142:
      if (lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 2143:
      if (lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 2144:
      if (lookahead == 'r') ADVANCE(744);
      END_STATE();
    case 2145:
      if (lookahead == 'r') ADVANCE(937);
      END_STATE();
    case 2146:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 2147:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 2148:
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 2149:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 2150:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 2151:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 2152:
      if (lookahead == 'r') ADVANCE(757);
      END_STATE();
    case 2153:
      if (lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 2154:
      if (lookahead == 'r') ADVANCE(916);
      END_STATE();
    case 2155:
      if (lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 2156:
      if (lookahead == 'r') ADVANCE(556);
      END_STATE();
    case 2157:
      if (lookahead == 'r') ADVANCE(425);
      END_STATE();
    case 2158:
      if (lookahead == 'r') ADVANCE(1907);
      END_STATE();
    case 2159:
      if (lookahead == 'r') ADVANCE(1395);
      END_STATE();
    case 2160:
      if (lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 2161:
      if (lookahead == 'r') ADVANCE(1904);
      END_STATE();
    case 2162:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 2163:
      if (lookahead == 'r') ADVANCE(1286);
      END_STATE();
    case 2164:
      if (lookahead == 'r') ADVANCE(2748);
      END_STATE();
    case 2165:
      if (lookahead == 'r') ADVANCE(2017);
      END_STATE();
    case 2166:
      if (lookahead == 'r') ADVANCE(2325);
      END_STATE();
    case 2167:
      if (lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 2168:
      if (lookahead == 'r') ADVANCE(2178);
      END_STATE();
    case 2169:
      if (lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 2170:
      if (lookahead == 'r') ADVANCE(2326);
      END_STATE();
    case 2171:
      if (lookahead == 'r') ADVANCE(2323);
      END_STATE();
    case 2172:
      if (lookahead == 'r') ADVANCE(1630);
      END_STATE();
    case 2173:
      if (lookahead == 'r') ADVANCE(2469);
      END_STATE();
    case 2174:
      if (lookahead == 'r') ADVANCE(2736);
      END_STATE();
    case 2175:
      if (lookahead == 'r') ADVANCE(1268);
      END_STATE();
    case 2176:
      if (lookahead == 'r') ADVANCE(2368);
      END_STATE();
    case 2177:
      if (lookahead == 'r') ADVANCE(2344);
      END_STATE();
    case 2178:
      if (lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 2179:
      if (lookahead == 'r') ADVANCE(2513);
      END_STATE();
    case 2180:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 2181:
      if (lookahead == 'r') ADVANCE(1886);
      END_STATE();
    case 2182:
      if (lookahead == 'r') ADVANCE(1887);
      END_STATE();
    case 2183:
      if (lookahead == 'r') ADVANCE(2480);
      END_STATE();
    case 2184:
      if (lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 2185:
      if (lookahead == 'r') ADVANCE(2482);
      END_STATE();
    case 2186:
      if (lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 2187:
      if (lookahead == 'r') ADVANCE(2744);
      END_STATE();
    case 2188:
      if (lookahead == 'r') ADVANCE(2489);
      END_STATE();
    case 2189:
      if (lookahead == 'r') ADVANCE(2534);
      END_STATE();
    case 2190:
      if (lookahead == 'r') ADVANCE(2539);
      END_STATE();
    case 2191:
      if (lookahead == 'r') ADVANCE(2537);
      END_STATE();
    case 2192:
      if (lookahead == 'r') ADVANCE(2499);
      END_STATE();
    case 2193:
      if (lookahead == 'r') ADVANCE(2657);
      END_STATE();
    case 2194:
      if (lookahead == 'r') ADVANCE(1913);
      END_STATE();
    case 2195:
      if (lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 2196:
      if (lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 2197:
      if (lookahead == 'r') ADVANCE(2617);
      END_STATE();
    case 2198:
      if (lookahead == 'r') ADVANCE(1187);
      END_STATE();
    case 2199:
      if (lookahead == 'r') ADVANCE(1905);
      END_STATE();
    case 2200:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 2201:
      if (lookahead == 'r') ADVANCE(950);
      END_STATE();
    case 2202:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 2203:
      if (lookahead == 'r') ADVANCE(2181);
      END_STATE();
    case 2204:
      if (lookahead == 'r') ADVANCE(1328);
      END_STATE();
    case 2205:
      if (lookahead == 'r') ADVANCE(1316);
      END_STATE();
    case 2206:
      if (lookahead == 'r') ADVANCE(930);
      END_STATE();
    case 2207:
      if (lookahead == 'r') ADVANCE(2620);
      END_STATE();
    case 2208:
      if (lookahead == 'r') ADVANCE(921);
      END_STATE();
    case 2209:
      if (lookahead == 'r') ADVANCE(1189);
      END_STATE();
    case 2210:
      if (lookahead == 'r') ADVANCE(1916);
      END_STATE();
    case 2211:
      if (lookahead == 'r') ADVANCE(989);
      END_STATE();
    case 2212:
      if (lookahead == 'r') ADVANCE(2182);
      END_STATE();
    case 2213:
      if (lookahead == 'r') ADVANCE(1343);
      END_STATE();
    case 2214:
      if (lookahead == 'r') ADVANCE(2660);
      END_STATE();
    case 2215:
      if (lookahead == 'r') ADVANCE(2624);
      END_STATE();
    case 2216:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 2217:
      if (lookahead == 'r') ADVANCE(999);
      END_STATE();
    case 2218:
      if (lookahead == 'r') ADVANCE(2549);
      END_STATE();
    case 2219:
      if (lookahead == 'r') ADVANCE(2184);
      END_STATE();
    case 2220:
      if (lookahead == 'r') ADVANCE(1323);
      END_STATE();
    case 2221:
      if (lookahead == 'r') ADVANCE(2625);
      END_STATE();
    case 2222:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 2223:
      if (lookahead == 'r') ADVANCE(2662);
      END_STATE();
    case 2224:
      if (lookahead == 'r') ADVANCE(1327);
      if (lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 2225:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 2226:
      if (lookahead == 'r') ADVANCE(472);
      END_STATE();
    case 2227:
      if (lookahead == 'r') ADVANCE(1331);
      END_STATE();
    case 2228:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 2229:
      if (lookahead == 'r') ADVANCE(1336);
      END_STATE();
    case 2230:
      if (lookahead == 'r') ADVANCE(1339);
      END_STATE();
    case 2231:
      if (lookahead == 'r') ADVANCE(1346);
      END_STATE();
    case 2232:
      if (lookahead == 'r') ADVANCE(1650);
      END_STATE();
    case 2233:
      if (lookahead == 'r') ADVANCE(996);
      END_STATE();
    case 2234:
      if (lookahead == 'r') ADVANCE(1372);
      END_STATE();
    case 2235:
      if (lookahead == 'r') ADVANCE(1804);
      END_STATE();
    case 2236:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 2237:
      if (lookahead == 'r') ADVANCE(1015);
      END_STATE();
    case 2238:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 2239:
      if (lookahead == 'r') ADVANCE(1397);
      END_STATE();
    case 2240:
      if (lookahead == 'r') ADVANCE(1959);
      END_STATE();
    case 2241:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 2242:
      if (lookahead == 'r') ADVANCE(2052);
      END_STATE();
    case 2243:
      if (lookahead == 'r') ADVANCE(2556);
      END_STATE();
    case 2244:
      if (lookahead == 'r') ADVANCE(2667);
      END_STATE();
    case 2245:
      if (lookahead == 'r') ADVANCE(1002);
      END_STATE();
    case 2246:
      if (lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 2247:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 2248:
      if (lookahead == 'r') ADVANCE(1025);
      END_STATE();
    case 2249:
      if (lookahead == 'r') ADVANCE(2560);
      END_STATE();
    case 2250:
      if (lookahead == 'r') ADVANCE(2668);
      END_STATE();
    case 2251:
      if (lookahead == 'r') ADVANCE(1008);
      END_STATE();
    case 2252:
      if (lookahead == 'r') ADVANCE(1032);
      END_STATE();
    case 2253:
      if (lookahead == 'r') ADVANCE(1031);
      END_STATE();
    case 2254:
      if (lookahead == 'r') ADVANCE(2669);
      END_STATE();
    case 2255:
      if (lookahead == 'r') ADVANCE(1011);
      END_STATE();
    case 2256:
      if (lookahead == 'r') ADVANCE(1035);
      END_STATE();
    case 2257:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 2258:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 2259:
      if (lookahead == 'r') ADVANCE(2757);
      END_STATE();
    case 2260:
      if (lookahead == 'r') ADVANCE(1663);
      END_STATE();
    case 2261:
      if (lookahead == 'r') ADVANCE(1197);
      END_STATE();
    case 2262:
      if (lookahead == 'r') ADVANCE(1960);
      END_STATE();
    case 2263:
      if (lookahead == 'r') ADVANCE(2760);
      END_STATE();
    case 2264:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 2265:
      if (lookahead == 'r') ADVANCE(1411);
      END_STATE();
    case 2266:
      if (lookahead == 'r') ADVANCE(1975);
      END_STATE();
    case 2267:
      if (lookahead == 's') ADVANCE(3015);
      END_STATE();
    case 2268:
      if (lookahead == 's') ADVANCE(2855);
      END_STATE();
    case 2269:
      if (lookahead == 's') ADVANCE(2937);
      END_STATE();
    case 2270:
      if (lookahead == 's') ADVANCE(2880);
      END_STATE();
    case 2271:
      if (lookahead == 's') ADVANCE(2893);
      END_STATE();
    case 2272:
      if (lookahead == 's') ADVANCE(2823);
      END_STATE();
    case 2273:
      if (lookahead == 's') ADVANCE(2861);
      END_STATE();
    case 2274:
      if (lookahead == 's') ADVANCE(2935);
      END_STATE();
    case 2275:
      if (lookahead == 's') ADVANCE(2900);
      END_STATE();
    case 2276:
      if (lookahead == 's') ADVANCE(2962);
      END_STATE();
    case 2277:
      if (lookahead == 's') ADVANCE(3014);
      END_STATE();
    case 2278:
      if (lookahead == 's') ADVANCE(3012);
      END_STATE();
    case 2279:
      if (lookahead == 's') ADVANCE(2938);
      END_STATE();
    case 2280:
      if (lookahead == 's') ADVANCE(2921);
      END_STATE();
    case 2281:
      if (lookahead == 's') ADVANCE(2901);
      END_STATE();
    case 2282:
      if (lookahead == 's') ADVANCE(2963);
      END_STATE();
    case 2283:
      if (lookahead == 's') ADVANCE(1253);
      if (lookahead == 'u') ADVANCE(1312);
      END_STATE();
    case 2284:
      if (lookahead == 's') ADVANCE(2856);
      END_STATE();
    case 2285:
      if (lookahead == 's') ADVANCE(2890);
      END_STATE();
    case 2286:
      if (lookahead == 's') ADVANCE(2903);
      END_STATE();
    case 2287:
      if (lookahead == 's') ADVANCE(2825);
      END_STATE();
    case 2288:
      if (lookahead == 's') ADVANCE(2904);
      END_STATE();
    case 2289:
      if (lookahead == 's') ADVANCE(2933);
      END_STATE();
    case 2290:
      if (lookahead == 's') ADVANCE(2913);
      END_STATE();
    case 2291:
      if (lookahead == 's') ADVANCE(2857);
      END_STATE();
    case 2292:
      if (lookahead == 's') ADVANCE(2914);
      END_STATE();
    case 2293:
      if (lookahead == 's') ADVANCE(2991);
      END_STATE();
    case 2294:
      if (lookahead == 's') ADVANCE(2826);
      END_STATE();
    case 2295:
      if (lookahead == 's') ADVANCE(2888);
      END_STATE();
    case 2296:
      if (lookahead == 's') ADVANCE(2932);
      END_STATE();
    case 2297:
      if (lookahead == 's') ADVANCE(2915);
      END_STATE();
    case 2298:
      if (lookahead == 's') ADVANCE(2858);
      END_STATE();
    case 2299:
      if (lookahead == 's') ADVANCE(3016);
      END_STATE();
    case 2300:
      if (lookahead == 's') ADVANCE(3017);
      END_STATE();
    case 2301:
      if (lookahead == 's') ADVANCE(3018);
      END_STATE();
    case 2302:
      if (lookahead == 's') ADVANCE(2939);
      END_STATE();
    case 2303:
      if (lookahead == 's') ADVANCE(2975);
      END_STATE();
    case 2304:
      if (lookahead == 's') ADVANCE(2979);
      END_STATE();
    case 2305:
      if (lookahead == 's') ADVANCE(3013);
      END_STATE();
    case 2306:
      if (lookahead == 's') ADVANCE(3025);
      END_STATE();
    case 2307:
      if (lookahead == 's') ADVANCE(2351);
      END_STATE();
    case 2308:
      if (lookahead == 's') ADVANCE(2417);
      END_STATE();
    case 2309:
      if (lookahead == 's') ADVANCE(1208);
      END_STATE();
    case 2310:
      if (lookahead == 's') ADVANCE(1899);
      END_STATE();
    case 2311:
      if (lookahead == 's') ADVANCE(419);
      END_STATE();
    case 2312:
      if (lookahead == 's') ADVANCE(1431);
      if (lookahead == 'u') ADVANCE(2495);
      END_STATE();
    case 2313:
      if (lookahead == 's') ADVANCE(1252);
      END_STATE();
    case 2314:
      if (lookahead == 's') ADVANCE(1238);
      END_STATE();
    case 2315:
      if (lookahead == 's') ADVANCE(2272);
      END_STATE();
    case 2316:
      if (lookahead == 's') ADVANCE(376);
      END_STATE();
    case 2317:
      if (lookahead == 's') ADVANCE(721);
      END_STATE();
    case 2318:
      if (lookahead == 's') ADVANCE(490);
      END_STATE();
    case 2319:
      if (lookahead == 's') ADVANCE(2535);
      END_STATE();
    case 2320:
      if (lookahead == 's') ADVANCE(1260);
      END_STATE();
    case 2321:
      if (lookahead == 's') ADVANCE(2425);
      END_STATE();
    case 2322:
      if (lookahead == 's') ADVANCE(2427);
      END_STATE();
    case 2323:
      if (lookahead == 's') ADVANCE(1271);
      END_STATE();
    case 2324:
      if (lookahead == 's') ADVANCE(1377);
      END_STATE();
    case 2325:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 2326:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 2327:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 2328:
      if (lookahead == 's') ADVANCE(2463);
      END_STATE();
    case 2329:
      if (lookahead == 's') ADVANCE(1272);
      END_STATE();
    case 2330:
      if (lookahead == 's') ADVANCE(1273);
      END_STATE();
    case 2331:
      if (lookahead == 's') ADVANCE(2467);
      END_STATE();
    case 2332:
      if (lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 2333:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 2334:
      if (lookahead == 's') ADVANCE(730);
      END_STATE();
    case 2335:
      if (lookahead == 's') ADVANCE(2440);
      END_STATE();
    case 2336:
      if (lookahead == 's') ADVANCE(2442);
      END_STATE();
    case 2337:
      if (lookahead == 's') ADVANCE(802);
      END_STATE();
    case 2338:
      if (lookahead == 's') ADVANCE(2447);
      END_STATE();
    case 2339:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 2340:
      if (lookahead == 's') ADVANCE(830);
      END_STATE();
    case 2341:
      if (lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 2342:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 2343:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 2344:
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 2345:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 2346:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 2347:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 2348:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 2349:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 2350:
      if (lookahead == 's') ADVANCE(858);
      END_STATE();
    case 2351:
      if (lookahead == 's') ADVANCE(1990);
      END_STATE();
    case 2352:
      if (lookahead == 's') ADVANCE(1217);
      END_STATE();
    case 2353:
      if (lookahead == 's') ADVANCE(1230);
      END_STATE();
    case 2354:
      if (lookahead == 's') ADVANCE(2553);
      END_STATE();
    case 2355:
      if (lookahead == 's') ADVANCE(2568);
      END_STATE();
    case 2356:
      if (lookahead == 's') ADVANCE(1322);
      END_STATE();
    case 2357:
      if (lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 2358:
      if (lookahead == 's') ADVANCE(2007);
      END_STATE();
    case 2359:
      if (lookahead == 's') ADVANCE(1304);
      END_STATE();
    case 2360:
      if (lookahead == 's') ADVANCE(2746);
      END_STATE();
    case 2361:
      if (lookahead == 's') ADVANCE(2339);
      END_STATE();
    case 2362:
      if (lookahead == 's') ADVANCE(1307);
      END_STATE();
    case 2363:
      if (lookahead == 's') ADVANCE(1313);
      END_STATE();
    case 2364:
      if (lookahead == 's') ADVANCE(2337);
      END_STATE();
    case 2365:
      if (lookahead == 's') ADVANCE(2324);
      END_STATE();
    case 2366:
      if (lookahead == 's') ADVANCE(2385);
      END_STATE();
    case 2367:
      if (lookahead == 's') ADVANCE(2394);
      END_STATE();
    case 2368:
      if (lookahead == 's') ADVANCE(1285);
      END_STATE();
    case 2369:
      if (lookahead == 's') ADVANCE(828);
      END_STATE();
    case 2370:
      if (lookahead == 's') ADVANCE(2524);
      END_STATE();
    case 2371:
      if (lookahead == 's') ADVANCE(2347);
      END_STATE();
    case 2372:
      if (lookahead == 's') ADVANCE(2395);
      END_STATE();
    case 2373:
      if (lookahead == 's') ADVANCE(2554);
      END_STATE();
    case 2374:
      if (lookahead == 's') ADVANCE(2348);
      END_STATE();
    case 2375:
      if (lookahead == 's') ADVANCE(2413);
      END_STATE();
    case 2376:
      if (lookahead == 's') ADVANCE(2329);
      END_STATE();
    case 2377:
      if (lookahead == 's') ADVANCE(853);
      END_STATE();
    case 2378:
      if (lookahead == 's') ADVANCE(2488);
      END_STATE();
    case 2379:
      if (lookahead == 's') ADVANCE(2570);
      END_STATE();
    case 2380:
      if (lookahead == 's') ADVANCE(2540);
      END_STATE();
    case 2381:
      if (lookahead == 's') ADVANCE(2572);
      END_STATE();
    case 2382:
      if (lookahead == 's') ADVANCE(885);
      END_STATE();
    case 2383:
      if (lookahead == 's') ADVANCE(565);
      END_STATE();
    case 2384:
      if (lookahead == 's') ADVANCE(1320);
      END_STATE();
    case 2385:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 2386:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 2387:
      if (lookahead == 's') ADVANCE(1364);
      END_STATE();
    case 2388:
      if (lookahead == 's') ADVANCE(1325);
      END_STATE();
    case 2389:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 2390:
      if (lookahead == 's') ADVANCE(997);
      END_STATE();
    case 2391:
      if (lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 2392:
      if (lookahead == 's') ADVANCE(1017);
      END_STATE();
    case 2393:
      if (lookahead == 's') ADVANCE(2391);
      END_STATE();
    case 2394:
      if (lookahead == 's') ADVANCE(206);
      END_STATE();
    case 2395:
      if (lookahead == 's') ADVANCE(1394);
      END_STATE();
    case 2396:
      if (lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 2397:
      if (lookahead == 's') ADVANCE(1037);
      END_STATE();
    case 2398:
      if (lookahead == 's') ADVANCE(1013);
      END_STATE();
    case 2399:
      if (lookahead == 's') ADVANCE(491);
      END_STATE();
    case 2400:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 2401:
      if (lookahead == 's') ADVANCE(2559);
      END_STATE();
    case 2402:
      if (lookahead == 's') ADVANCE(1410);
      END_STATE();
    case 2403:
      if (lookahead == 's') ADVANCE(2564);
      END_STATE();
    case 2404:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 2405:
      if (lookahead == 's') ADVANCE(2563);
      END_STATE();
    case 2406:
      if (lookahead == 's') ADVANCE(2565);
      END_STATE();
    case 2407:
      if (lookahead == 's') ADVANCE(2567);
      END_STATE();
    case 2408:
      if (lookahead == 's') ADVANCE(2637);
      END_STATE();
    case 2409:
      if (lookahead == 's') ADVANCE(1415);
      END_STATE();
    case 2410:
      if (lookahead == 's') ADVANCE(1060);
      END_STATE();
    case 2411:
      if (lookahead == 's') ADVANCE(2409);
      END_STATE();
    case 2412:
      if (lookahead == 's') ADVANCE(2571);
      END_STATE();
    case 2413:
      if (lookahead == 's') ADVANCE(234);
      END_STATE();
    case 2414:
      if (lookahead == 's') ADVANCE(240);
      END_STATE();
    case 2415:
      if (lookahead == 's') ADVANCE(2414);
      END_STATE();
    case 2416:
      if (lookahead == 's') ADVANCE(1075);
      if (lookahead == 't') ADVANCE(1094);
      END_STATE();
    case 2417:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 2418:
      if (lookahead == 't') ADVANCE(2852);
      END_STATE();
    case 2419:
      if (lookahead == 't') ADVANCE(3005);
      END_STATE();
    case 2420:
      if (lookahead == 't') ADVANCE(3055);
      END_STATE();
    case 2421:
      if (lookahead == 't') ADVANCE(2853);
      END_STATE();
    case 2422:
      if (lookahead == 't') ADVANCE(2992);
      END_STATE();
    case 2423:
      if (lookahead == 't') ADVANCE(3023);
      END_STATE();
    case 2424:
      if (lookahead == 't') ADVANCE(3006);
      END_STATE();
    case 2425:
      if (lookahead == 't') ADVANCE(3085);
      END_STATE();
    case 2426:
      if (lookahead == 't') ADVANCE(2869);
      END_STATE();
    case 2427:
      if (lookahead == 't') ADVANCE(2829);
      END_STATE();
    case 2428:
      if (lookahead == 't') ADVANCE(2981);
      END_STATE();
    case 2429:
      if (lookahead == 't') ADVANCE(2839);
      END_STATE();
    case 2430:
      if (lookahead == 't') ADVANCE(2831);
      END_STATE();
    case 2431:
      if (lookahead == 't') ADVANCE(2959);
      END_STATE();
    case 2432:
      if (lookahead == 't') ADVANCE(3008);
      END_STATE();
    case 2433:
      if (lookahead == 't') ADVANCE(2993);
      END_STATE();
    case 2434:
      if (lookahead == 't') ADVANCE(2863);
      END_STATE();
    case 2435:
      if (lookahead == 't') ADVANCE(2814);
      END_STATE();
    case 2436:
      if (lookahead == 't') ADVANCE(3075);
      END_STATE();
    case 2437:
      if (lookahead == 't') ADVANCE(2832);
      END_STATE();
    case 2438:
      if (lookahead == 't') ADVANCE(2909);
      END_STATE();
    case 2439:
      if (lookahead == 't') ADVANCE(2816);
      END_STATE();
    case 2440:
      if (lookahead == 't') ADVANCE(3092);
      END_STATE();
    case 2441:
      if (lookahead == 't') ADVANCE(2864);
      END_STATE();
    case 2442:
      if (lookahead == 't') ADVANCE(3046);
      END_STATE();
    case 2443:
      if (lookahead == 't') ADVANCE(2982);
      END_STATE();
    case 2444:
      if (lookahead == 't') ADVANCE(3080);
      END_STATE();
    case 2445:
      if (lookahead == 't') ADVANCE(2975);
      END_STATE();
    case 2446:
      if (lookahead == 't') ADVANCE(2979);
      END_STATE();
    case 2447:
      if (lookahead == 't') ADVANCE(3013);
      END_STATE();
    case 2448:
      if (lookahead == 't') ADVANCE(3030);
      END_STATE();
    case 2449:
      if (lookahead == 't') ADVANCE(1215);
      END_STATE();
    case 2450:
      if (lookahead == 't') ADVANCE(1207);
      END_STATE();
    case 2451:
      if (lookahead == 't') ADVANCE(2607);
      END_STATE();
    case 2452:
      if (lookahead == 't') ADVANCE(2013);
      END_STATE();
    case 2453:
      if (lookahead == 't') ADVANCE(1854);
      END_STATE();
    case 2454:
      if (lookahead == 't') ADVANCE(1209);
      END_STATE();
    case 2455:
      if (lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 2456:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 2457:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 2458:
      if (lookahead == 't') ADVANCE(1294);
      END_STATE();
    case 2459:
      if (lookahead == 't') ADVANCE(2269);
      END_STATE();
    case 2460:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 2461:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 2462:
      if (lookahead == 't') ADVANCE(1820);
      END_STATE();
    case 2463:
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 2464:
      if (lookahead == 't') ADVANCE(2271);
      END_STATE();
    case 2465:
      if (lookahead == 't') ADVANCE(2710);
      END_STATE();
    case 2466:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 2467:
      if (lookahead == 't') ADVANCE(647);
      END_STATE();
    case 2468:
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 2469:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 2470:
      if (lookahead == 't') ADVANCE(1821);
      END_STATE();
    case 2471:
      if (lookahead == 't') ADVANCE(1367);
      END_STATE();
    case 2472:
      if (lookahead == 't') ADVANCE(2723);
      END_STATE();
    case 2473:
      if (lookahead == 't') ADVANCE(1857);
      END_STATE();
    case 2474:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 2475:
      if (lookahead == 't') ADVANCE(2102);
      END_STATE();
    case 2476:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 2477:
      if (lookahead == 't') ADVANCE(2284);
      END_STATE();
    case 2478:
      if (lookahead == 't') ADVANCE(1825);
      END_STATE();
    case 2479:
      if (lookahead == 't') ADVANCE(2291);
      END_STATE();
    case 2480:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 2481:
      if (lookahead == 't') ADVANCE(2120);
      END_STATE();
    case 2482:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 2483:
      if (lookahead == 't') ADVANCE(2159);
      END_STATE();
    case 2484:
      if (lookahead == 't') ADVANCE(2298);
      END_STATE();
    case 2485:
      if (lookahead == 't') ADVANCE(1829);
      END_STATE();
    case 2486:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 2487:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 2488:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 2489:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 2490:
      if (lookahead == 't') ADVANCE(2127);
      END_STATE();
    case 2491:
      if (lookahead == 't') ADVANCE(1834);
      END_STATE();
    case 2492:
      if (lookahead == 't') ADVANCE(1884);
      END_STATE();
    case 2493:
      if (lookahead == 't') ADVANCE(1837);
      END_STATE();
    case 2494:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 2495:
      if (lookahead == 't') ADVANCE(1838);
      END_STATE();
    case 2496:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 2497:
      if (lookahead == 't') ADVANCE(745);
      END_STATE();
    case 2498:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 2499:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 2500:
      if (lookahead == 't') ADVANCE(755);
      END_STATE();
    case 2501:
      if (lookahead == 't') ADVANCE(771);
      END_STATE();
    case 2502:
      if (lookahead == 't') ADVANCE(1651);
      END_STATE();
    case 2503:
      if (lookahead == 't') ADVANCE(1877);
      END_STATE();
    case 2504:
      if (lookahead == 't') ADVANCE(2598);
      END_STATE();
    case 2505:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 2506:
      if (lookahead == 't') ADVANCE(1360);
      END_STATE();
    case 2507:
      if (lookahead == 't') ADVANCE(1276);
      END_STATE();
    case 2508:
      if (lookahead == 't') ADVANCE(434);
      END_STATE();
    case 2509:
      if (lookahead == 't') ADVANCE(924);
      END_STATE();
    case 2510:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 2511:
      if (lookahead == 't') ADVANCE(1277);
      END_STATE();
    case 2512:
      if (lookahead == 't') ADVANCE(2481);
      END_STATE();
    case 2513:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 2514:
      if (lookahead == 't') ADVANCE(1278);
      END_STATE();
    case 2515:
      if (lookahead == 't') ADVANCE(1265);
      END_STATE();
    case 2516:
      if (lookahead == 't') ADVANCE(1280);
      END_STATE();
    case 2517:
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 2518:
      if (lookahead == 't') ADVANCE(1281);
      END_STATE();
    case 2519:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 2520:
      if (lookahead == 't') ADVANCE(1289);
      END_STATE();
    case 2521:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 2522:
      if (lookahead == 't') ADVANCE(1290);
      END_STATE();
    case 2523:
      if (lookahead == 't') ADVANCE(1291);
      END_STATE();
    case 2524:
      if (lookahead == 't') ADVANCE(1948);
      END_STATE();
    case 2525:
      if (lookahead == 't') ADVANCE(1051);
      END_STATE();
    case 2526:
      if (lookahead == 't') ADVANCE(881);
      END_STATE();
    case 2527:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 2528:
      if (lookahead == 't') ADVANCE(2622);
      END_STATE();
    case 2529:
      if (lookahead == 't') ADVANCE(1311);
      END_STATE();
    case 2530:
      if (lookahead == 't') ADVANCE(2018);
      END_STATE();
    case 2531:
      if (lookahead == 't') ADVANCE(1315);
      END_STATE();
    case 2532:
      if (lookahead == 't') ADVANCE(2024);
      END_STATE();
    case 2533:
      if (lookahead == 't') ADVANCE(2174);
      END_STATE();
    case 2534:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 2535:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 2536:
      if (lookahead == 't') ADVANCE(2197);
      END_STATE();
    case 2537:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 2538:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 2539:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 2540:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 2541:
      if (lookahead == 't') ADVANCE(2629);
      END_STATE();
    case 2542:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 2543:
      if (lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 2544:
      if (lookahead == 't') ADVANCE(2207);
      END_STATE();
    case 2545:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 2546:
      if (lookahead == 't') ADVANCE(446);
      END_STATE();
    case 2547:
      if (lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 2548:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 2549:
      if (lookahead == 't') ADVANCE(2221);
      END_STATE();
    case 2550:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 2551:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 2552:
      if (lookahead == 't') ADVANCE(1380);
      END_STATE();
    case 2553:
      if (lookahead == 't') ADVANCE(2220);
      END_STATE();
    case 2554:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 2555:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 2556:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 2557:
      if (lookahead == 't') ADVANCE(695);
      END_STATE();
    case 2558:
      if (lookahead == 't') ADVANCE(1386);
      END_STATE();
    case 2559:
      if (lookahead == 't') ADVANCE(2227);
      END_STATE();
    case 2560:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 2561:
      if (lookahead == 't') ADVANCE(1658);
      END_STATE();
    case 2562:
      if (lookahead == 't') ADVANCE(1390);
      END_STATE();
    case 2563:
      if (lookahead == 't') ADVANCE(2229);
      END_STATE();
    case 2564:
      if (lookahead == 't') ADVANCE(208);
      END_STATE();
    case 2565:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 2566:
      if (lookahead == 't') ADVANCE(1396);
      END_STATE();
    case 2567:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 2568:
      if (lookahead == 't') ADVANCE(484);
      END_STATE();
    case 2569:
      if (lookahead == 't') ADVANCE(2239);
      END_STATE();
    case 2570:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 2571:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 2572:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 2573:
      if (lookahead == 'u') ADVANCE(1241);
      END_STATE();
    case 2574:
      if (lookahead == 'u') ADVANCE(2976);
      END_STATE();
    case 2575:
      if (lookahead == 'u') ADVANCE(3030);
      END_STATE();
    case 2576:
      if (lookahead == 'u') ADVANCE(979);
      END_STATE();
    case 2577:
      if (lookahead == 'u') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 2578:
      if (lookahead == 'u') ADVANCE(2308);
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 2579:
      if (lookahead == 'u') ADVANCE(1991);
      END_STATE();
    case 2580:
      if (lookahead == 'u') ADVANCE(1572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2803);
      END_STATE();
    case 2581:
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 2582:
      if (lookahead == 'u') ADVANCE(2419);
      END_STATE();
    case 2583:
      if (lookahead == 'u') ADVANCE(1979);
      END_STATE();
    case 2584:
      if (lookahead == 'u') ADVANCE(1512);
      END_STATE();
    case 2585:
      if (lookahead == 'u') ADVANCE(1980);
      END_STATE();
    case 2586:
      if (lookahead == 'u') ADVANCE(1106);
      END_STATE();
    case 2587:
      if (lookahead == 'u') ADVANCE(1982);
      END_STATE();
    case 2588:
      if (lookahead == 'u') ADVANCE(1996);
      END_STATE();
    case 2589:
      if (lookahead == 'u') ADVANCE(1370);
      END_STATE();
    case 2590:
      if (lookahead == 'u') ADVANCE(1081);
      END_STATE();
    case 2591:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 2592:
      if (lookahead == 'u') ADVANCE(2424);
      END_STATE();
    case 2593:
      if (lookahead == 'u') ADVANCE(2162);
      END_STATE();
    case 2594:
      if (lookahead == 'u') ADVANCE(1984);
      END_STATE();
    case 2595:
      if (lookahead == 'u') ADVANCE(1139);
      END_STATE();
    case 2596:
      if (lookahead == 'u') ADVANCE(1695);
      END_STATE();
    case 2597:
      if (lookahead == 'u') ADVANCE(1558);
      END_STATE();
    case 2598:
      if (lookahead == 'u') ADVANCE(2169);
      END_STATE();
    case 2599:
      if (lookahead == 'u') ADVANCE(2115);
      END_STATE();
    case 2600:
      if (lookahead == 'u') ADVANCE(2116);
      END_STATE();
    case 2601:
      if (lookahead == 'u') ADVANCE(2118);
      END_STATE();
    case 2602:
      if (lookahead == 'u') ADVANCE(2119);
      END_STATE();
    case 2603:
      if (lookahead == 'u') ADVANCE(2123);
      END_STATE();
    case 2604:
      if (lookahead == 'u') ADVANCE(2126);
      END_STATE();
    case 2605:
      if (lookahead == 'u') ADVANCE(2128);
      END_STATE();
    case 2606:
      if (lookahead == 'u') ADVANCE(2109);
      END_STATE();
    case 2607:
      if (lookahead == 'u') ADVANCE(2333);
      END_STATE();
    case 2608:
      if (lookahead == 'u') ADVANCE(684);
      END_STATE();
    case 2609:
      if (lookahead == 'u') ADVANCE(2002);
      END_STATE();
    case 2610:
      if (lookahead == 'u') ADVANCE(2318);
      END_STATE();
    case 2611:
      if (lookahead == 'u') ADVANCE(1531);
      END_STATE();
    case 2612:
      if (lookahead == 'u') ADVANCE(1716);
      END_STATE();
    case 2613:
      if (lookahead == 'u') ADVANCE(1530);
      END_STATE();
    case 2614:
      if (lookahead == 'u') ADVANCE(1262);
      END_STATE();
    case 2615:
      if (lookahead == 'u') ADVANCE(2322);
      END_STATE();
    case 2616:
      if (lookahead == 'u') ADVANCE(1263);
      END_STATE();
    case 2617:
      if (lookahead == 'u') ADVANCE(2328);
      END_STATE();
    case 2618:
      if (lookahead == 'u') ADVANCE(2510);
      END_STATE();
    case 2619:
      if (lookahead == 'u') ADVANCE(1264);
      END_STATE();
    case 2620:
      if (lookahead == 'u') ADVANCE(2331);
      END_STATE();
    case 2621:
      if (lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 2622:
      if (lookahead == 'u') ADVANCE(2346);
      END_STATE();
    case 2623:
      if (lookahead == 'u') ADVANCE(1317);
      END_STATE();
    case 2624:
      if (lookahead == 'u') ADVANCE(2336);
      END_STATE();
    case 2625:
      if (lookahead == 'u') ADVANCE(2338);
      END_STATE();
    case 2626:
      if (lookahead == 'u') ADVANCE(2377);
      END_STATE();
    case 2627:
      if (lookahead == 'u') ADVANCE(1574);
      END_STATE();
    case 2628:
      if (lookahead == 'u') ADVANCE(2517);
      END_STATE();
    case 2629:
      if (lookahead == 'u') ADVANCE(2186);
      END_STATE();
    case 2630:
      if (lookahead == 'u') ADVANCE(1349);
      END_STATE();
    case 2631:
      if (lookahead == 'u') ADVANCE(1575);
      END_STATE();
    case 2632:
      if (lookahead == 'u') ADVANCE(2380);
      END_STATE();
    case 2633:
      if (lookahead == 'u') ADVANCE(2530);
      END_STATE();
    case 2634:
      if (lookahead == 'u') ADVANCE(518);
      END_STATE();
    case 2635:
      if (lookahead == 'u') ADVANCE(2241);
      END_STATE();
    case 2636:
      if (lookahead == 'u') ADVANCE(2399);
      END_STATE();
    case 2637:
      if (lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 2638:
      if (lookahead == 'u') ADVANCE(700);
      END_STATE();
    case 2639:
      if (lookahead == 'v') ADVANCE(1283);
      END_STATE();
    case 2640:
      if (lookahead == 'v') ADVANCE(1862);
      END_STATE();
    case 2641:
      if (lookahead == 'v') ADVANCE(1843);
      END_STATE();
    case 2642:
      if (lookahead == 'v') ADVANCE(775);
      END_STATE();
    case 2643:
      if (lookahead == 'v') ADVANCE(824);
      END_STATE();
    case 2644:
      if (lookahead == 'v') ADVANCE(2306);
      END_STATE();
    case 2645:
      if (lookahead == 'v') ADVANCE(731);
      END_STATE();
    case 2646:
      if (lookahead == 'v') ADVANCE(836);
      END_STATE();
    case 2647:
      if (lookahead == 'v') ADVANCE(837);
      END_STATE();
    case 2648:
      if (lookahead == 'v') ADVANCE(841);
      END_STATE();
    case 2649:
      if (lookahead == 'v') ADVANCE(847);
      END_STATE();
    case 2650:
      if (lookahead == 'v') ADVANCE(750);
      END_STATE();
    case 2651:
      if (lookahead == 'v') ADVANCE(850);
      END_STATE();
    case 2652:
      if (lookahead == 'v') ADVANCE(852);
      END_STATE();
    case 2653:
      if (lookahead == 'v') ADVANCE(760);
      END_STATE();
    case 2654:
      if (lookahead == 'v') ADVANCE(427);
      END_STATE();
    case 2655:
      if (lookahead == 'v') ADVANCE(919);
      END_STATE();
    case 2656:
      if (lookahead == 'v') ADVANCE(896);
      END_STATE();
    case 2657:
      if (lookahead == 'v') ADVANCE(848);
      END_STATE();
    case 2658:
      if (lookahead == 'v') ADVANCE(995);
      END_STATE();
    case 2659:
      if (lookahead == 'v') ADVANCE(855);
      END_STATE();
    case 2660:
      if (lookahead == 'v') ADVANCE(942);
      END_STATE();
    case 2661:
      if (lookahead == 'v') ADVANCE(880);
      END_STATE();
    case 2662:
      if (lookahead == 'v') ADVANCE(883);
      END_STATE();
    case 2663:
      if (lookahead == 'v') ADVANCE(984);
      END_STATE();
    case 2664:
      if (lookahead == 'v') ADVANCE(454);
      END_STATE();
    case 2665:
      if (lookahead == 'v') ADVANCE(488);
      END_STATE();
    case 2666:
      if (lookahead == 'v') ADVANCE(1462);
      END_STATE();
    case 2667:
      if (lookahead == 'v') ADVANCE(1022);
      END_STATE();
    case 2668:
      if (lookahead == 'v') ADVANCE(1029);
      END_STATE();
    case 2669:
      if (lookahead == 'v') ADVANCE(1034);
      END_STATE();
    case 2670:
      if (lookahead == 'v') ADVANCE(1062);
      END_STATE();
    case 2671:
      if (lookahead == 'w') ADVANCE(3013);
      END_STATE();
    case 2672:
      if (lookahead == 'w') ADVANCE(1673);
      END_STATE();
    case 2673:
      if (lookahead == 'w') ADVANCE(27);
      END_STATE();
    case 2674:
      if (lookahead == 'w') ADVANCE(30);
      END_STATE();
    case 2675:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 2676:
      if (lookahead == 'w') ADVANCE(1688);
      END_STATE();
    case 2677:
      if (lookahead == 'w') ADVANCE(2163);
      END_STATE();
    case 2678:
      if (lookahead == 'w') ADVANCE(96);
      END_STATE();
    case 2679:
      if (lookahead == 'w') ADVANCE(1735);
      END_STATE();
    case 2680:
      if (lookahead == 'w') ADVANCE(448);
      END_STATE();
    case 2681:
      if (lookahead == 'w') ADVANCE(416);
      END_STATE();
    case 2682:
      if (lookahead == 'w') ADVANCE(1635);
      END_STATE();
    case 2683:
      if (lookahead == 'w') ADVANCE(867);
      END_STATE();
    case 2684:
      if (lookahead == 'w') ADVANCE(129);
      END_STATE();
    case 2685:
      if (lookahead == 'w') ADVANCE(1779);
      END_STATE();
    case 2686:
      if (lookahead == 'w') ADVANCE(189);
      END_STATE();
    case 2687:
      if (lookahead == 'w') ADVANCE(2382);
      END_STATE();
    case 2688:
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 2689:
      if (lookahead == 'w') ADVANCE(173);
      END_STATE();
    case 2690:
      if (lookahead == 'w') ADVANCE(486);
      END_STATE();
    case 2691:
      if (lookahead == 'w') ADVANCE(233);
      END_STATE();
    case 2692:
      if (lookahead == 'x') ADVANCE(2937);
      END_STATE();
    case 2693:
      if (lookahead == 'x') ADVANCE(2502);
      END_STATE();
    case 2694:
      if (lookahead == 'x') ADVANCE(2032);
      END_STATE();
    case 2695:
      if (lookahead == 'x') ADVANCE(2004);
      END_STATE();
    case 2696:
      if (lookahead == 'x') ADVANCE(2028);
      END_STATE();
    case 2697:
      if (lookahead == 'x') ADVANCE(2043);
      END_STATE();
    case 2698:
      if (lookahead == 'x') ADVANCE(2038);
      END_STATE();
    case 2699:
      if (lookahead == 'x') ADVANCE(2042);
      END_STATE();
    case 2700:
      if (lookahead == 'x') ADVANCE(2045);
      END_STATE();
    case 2701:
      if (lookahead == 'x') ADVANCE(2047);
      END_STATE();
    case 2702:
      if (lookahead == 'x') ADVANCE(2048);
      END_STATE();
    case 2703:
      if (lookahead == 'x') ADVANCE(2049);
      END_STATE();
    case 2704:
      if (lookahead == 'x') ADVANCE(2561);
      END_STATE();
    case 2705:
      if (lookahead == 'x') ADVANCE(2800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 2706:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 2707:
      if (lookahead == 'y') ADVANCE(2818);
      END_STATE();
    case 2708:
      if (lookahead == 'y') ADVANCE(2224);
      END_STATE();
    case 2709:
      if (lookahead == 'y') ADVANCE(2884);
      END_STATE();
    case 2710:
      if (lookahead == 'y') ADVANCE(2937);
      END_STATE();
    case 2711:
      if (lookahead == 'y') ADVANCE(2934);
      END_STATE();
    case 2712:
      if (lookahead == 'y') ADVANCE(2919);
      END_STATE();
    case 2713:
      if (lookahead == 'y') ADVANCE(2970);
      END_STATE();
    case 2714:
      if (lookahead == 'y') ADVANCE(2931);
      END_STATE();
    case 2715:
      if (lookahead == 'y') ADVANCE(2930);
      END_STATE();
    case 2716:
      if (lookahead == 'y') ADVANCE(2924);
      END_STATE();
    case 2717:
      if (lookahead == 'y') ADVANCE(2896);
      END_STATE();
    case 2718:
      if (lookahead == 'y') ADVANCE(2986);
      END_STATE();
    case 2719:
      if (lookahead == 'y') ADVANCE(3086);
      END_STATE();
    case 2720:
      if (lookahead == 'y') ADVANCE(2929);
      END_STATE();
    case 2721:
      if (lookahead == 'y') ADVANCE(2897);
      END_STATE();
    case 2722:
      if (lookahead == 'y') ADVANCE(3046);
      END_STATE();
    case 2723:
      if (lookahead == 'y') ADVANCE(2939);
      END_STATE();
    case 2724:
      if (lookahead == 'y') ADVANCE(3013);
      END_STATE();
    case 2725:
      if (lookahead == 'y') ADVANCE(45);
      END_STATE();
    case 2726:
      if (lookahead == 'y') ADVANCE(2327);
      END_STATE();
    case 2727:
      if (lookahead == 'y') ADVANCE(2027);
      END_STATE();
    case 2728:
      if (lookahead == 'y') ADVANCE(2269);
      END_STATE();
    case 2729:
      if (lookahead == 'y') ADVANCE(2205);
      END_STATE();
    case 2730:
      if (lookahead == 'y') ADVANCE(2267);
      END_STATE();
    case 2731:
      if (lookahead == 'y') ADVANCE(2023);
      END_STATE();
    case 2732:
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 2733:
      if (lookahead == 'y') ADVANCE(2303);
      END_STATE();
    case 2734:
      if (lookahead == 'y') ADVANCE(2305);
      END_STATE();
    case 2735:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 2736:
      if (lookahead == 'y') ADVANCE(214);
      END_STATE();
    case 2737:
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 2738:
      if (lookahead == 'y') ADVANCE(124);
      END_STATE();
    case 2739:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 2740:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 2741:
      if (lookahead == 'y') ADVANCE(123);
      END_STATE();
    case 2742:
      if (lookahead == 'y') ADVANCE(1848);
      END_STATE();
    case 2743:
      if (lookahead == 'y') ADVANCE(1250);
      END_STATE();
    case 2744:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 2745:
      if (lookahead == 'y') ADVANCE(1303);
      END_STATE();
    case 2746:
      if (lookahead == 'y') ADVANCE(2319);
      END_STATE();
    case 2747:
      if (lookahead == 'y') ADVANCE(158);
      END_STATE();
    case 2748:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 2749:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 2750:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 2751:
      if (lookahead == 'y') ADVANCE(941);
      END_STATE();
    case 2752:
      if (lookahead == 'y') ADVANCE(2392);
      END_STATE();
    case 2753:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 2754:
      if (lookahead == 'y') ADVANCE(988);
      END_STATE();
    case 2755:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 2756:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 2757:
      if (lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 2758:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 2759:
      if (lookahead == 'y') ADVANCE(194);
      END_STATE();
    case 2760:
      if (lookahead == 'y') ADVANCE(2040);
      END_STATE();
    case 2761:
      if (lookahead == 'y') ADVANCE(2230);
      END_STATE();
    case 2762:
      if (lookahead == 'y') ADVANCE(2231);
      END_STATE();
    case 2763:
      if (lookahead == 'y') ADVANCE(219);
      END_STATE();
    case 2764:
      if (lookahead == 'y') ADVANCE(222);
      END_STATE();
    case 2765:
      if (lookahead == 'y') ADVANCE(2396);
      END_STATE();
    case 2766:
      if (lookahead == 'y') ADVANCE(236);
      END_STATE();
    case 2767:
      if (lookahead == 'y') ADVANCE(1973);
      END_STATE();
    case 2768:
      if (lookahead == 'y') ADVANCE(243);
      END_STATE();
    case 2769:
      if (lookahead == 'z') ADVANCE(728);
      END_STATE();
    case 2770:
      if (lookahead == 'z') ADVANCE(759);
      END_STATE();
    case 2771:
      if (lookahead == 'z') ADVANCE(886);
      END_STATE();
    case 2772:
      if (lookahead == '{') ADVANCE(2066);
      END_STATE();
    case 2773:
      if (lookahead == '}') ADVANCE(2948);
      END_STATE();
    case 2774:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(3022);
      END_STATE();
    case 2775:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(3025);
      END_STATE();
    case 2776:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 2777:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2776);
      END_STATE();
    case 2778:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2777);
      END_STATE();
    case 2779:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2779);
      END_STATE();
    case 2780:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3128);
      END_STATE();
    case 2781:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3129);
      END_STATE();
    case 2782:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3142);
      END_STATE();
    case 2783:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3143);
      END_STATE();
    case 2784:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 2785:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2784);
      END_STATE();
    case 2786:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2782);
      END_STATE();
    case 2787:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2789);
      END_STATE();
    case 2788:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2783);
      END_STATE();
    case 2789:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 2790:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2785);
      END_STATE();
    case 2791:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2786);
      END_STATE();
    case 2792:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2790);
      END_STATE();
    case 2793:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 2794:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2791);
      END_STATE();
    case 2795:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2792);
      END_STATE();
    case 2796:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2793);
      END_STATE();
    case 2797:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2794);
      END_STATE();
    case 2798:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2795);
      END_STATE();
    case 2799:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2797);
      END_STATE();
    case 2800:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2807);
      END_STATE();
    case 2801:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3127);
      END_STATE();
    case 2802:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2801);
      END_STATE();
    case 2803:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2802);
      END_STATE();
    case 2804:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2803);
      END_STATE();
    case 2805:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2804);
      END_STATE();
    case 2806:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2805);
      END_STATE();
    case 2807:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2806);
      END_STATE();
    case 2808:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2809:
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3091);
      END_STATE();
    case 2810:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(2999);
      END_STATE();
    case 2811:
      if (eof) ADVANCE(2812);
      if (lookahead == '\n') ADVANCE(2813);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(3049);
      if (lookahead == '#') ADVANCE(3146);
      if (lookahead == ',') ADVANCE(2936);
      if (lookahead == '0') ADVANCE(2705);
      if (lookahead == '3') ADVANCE(316);
      if (lookahead == '=') ADVANCE(3000);
      if (lookahead == 'A') ADVANCE(320);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(304);
      if (lookahead == 'D') ADVANCE(350);
      if (lookahead == 'E') ADVANCE(311);
      if (lookahead == 'I') ADVANCE(312);
      if (lookahead == 'R') ADVANCE(331);
      if (lookahead == 'S') ADVANCE(329);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'U') ADVANCE(1671);
      if (lookahead == 'Z') ADVANCE(334);
      if (lookahead == 'a') ADVANCE(621);
      if (lookahead == 'b') ADVANCE(361);
      if (lookahead == 'c') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(1610);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'g') ADVANCE(1689);
      if (lookahead == 'h') ADVANCE(1236);
      if (lookahead == 'i') ADVANCE(1141);
      if (lookahead == 'k') ADVANCE(712);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(1817);
      if (lookahead == 'o') ADVANCE(2011);
      if (lookahead == 'p') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == 'u') ADVANCE(1672);
      if (lookahead == 'v') ADVANCE(783);
      if (lookahead == 'w') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3152);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == 'F') ADVANCE(2807);
      END_STATE();
    case 2812:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2813:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 2814:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(2350);
      END_STATE();
    case 2815:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 2816:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 2817:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 2818:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 2819:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 2820:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 2821:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 2822:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 2823:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 2824:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 2825:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2826:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2827:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 2828:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 2829:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 2830:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 2831:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 2832:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 2833:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 2834:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 2835:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 2836:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2837:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2838:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 2839:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 2840:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 2841:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 2842:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 2843:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 2844:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 2845:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 2846:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 2847:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 2848:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 2849:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 2850:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 2851:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 2852:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 2853:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 2854:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      END_STATE();
    case 2855:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      END_STATE();
    case 2856:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      END_STATE();
    case 2857:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2858:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2859:
      ACCEPT_TOKEN(anon_sym_armor);
      END_STATE();
    case 2860:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      END_STATE();
    case 2861:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      END_STATE();
    case 2862:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      END_STATE();
    case 2863:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      END_STATE();
    case 2864:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      END_STATE();
    case 2865:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      END_STATE();
    case 2866:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      END_STATE();
    case 2867:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      END_STATE();
    case 2868:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      END_STATE();
    case 2869:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      END_STATE();
    case 2870:
      ACCEPT_TOKEN(anon_sym_textmode);
      END_STATE();
    case 2871:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      END_STATE();
    case 2872:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      END_STATE();
    case 2873:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      END_STATE();
    case 2874:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      END_STATE();
    case 2875:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      END_STATE();
    case 2876:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      END_STATE();
    case 2877:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 2878:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 2879:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1259);
      END_STATE();
    case 2880:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 2881:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 2882:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 2883:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 2884:
      ACCEPT_TOKEN(anon_sym_list_DASHonly);
      END_STATE();
    case 2885:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 2886:
      ACCEPT_TOKEN(anon_sym_debug_DASHall);
      if (lookahead == 'o') ADVANCE(2678);
      END_STATE();
    case 2887:
      ACCEPT_TOKEN(anon_sym_debug_DASHiolbf);
      END_STATE();
    case 2888:
      ACCEPT_TOKEN(anon_sym_debug_DASHallow_DASHlarge_DASHchunks);
      END_STATE();
    case 2889:
      ACCEPT_TOKEN(anon_sym_debug_DASHignore_DASHexpiration);
      END_STATE();
    case 2890:
      ACCEPT_TOKEN(anon_sym_full_DASHtimestrings);
      END_STATE();
    case 2891:
      ACCEPT_TOKEN(anon_sym_enable_DASHprogress_DASHfilter);
      END_STATE();
    case 2892:
      ACCEPT_TOKEN(anon_sym_log_DASHtime);
      END_STATE();
    case 2893:
      ACCEPT_TOKEN(anon_sym_no_DASHcomments);
      END_STATE();
    case 2894:
      ACCEPT_TOKEN(anon_sym_emit_DASHversion);
      END_STATE();
    case 2895:
      ACCEPT_TOKEN(anon_sym_no_DASHemit_DASHversion);
      END_STATE();
    case 2896:
      ACCEPT_TOKEN(anon_sym_for_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 2897:
      ACCEPT_TOKEN(anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 2898:
      ACCEPT_TOKEN(anon_sym_use_DASHembedded_DASHfilename);
      END_STATE();
    case 2899:
      ACCEPT_TOKEN(anon_sym_no_DASHuse_DASHembedded_DASHfilename);
      END_STATE();
    case 2900:
      ACCEPT_TOKEN(anon_sym_throw_DASHkeyids);
      END_STATE();
    case 2901:
      ACCEPT_TOKEN(anon_sym_no_DASHthrow_DASHkeyids);
      END_STATE();
    case 2902:
      ACCEPT_TOKEN(anon_sym_not_DASHdash_DASHescaped);
      END_STATE();
    case 2903:
      ACCEPT_TOKEN(anon_sym_escape_DASHfrom_DASHlines);
      END_STATE();
    case 2904:
      ACCEPT_TOKEN(anon_sym_no_DASHescape_DASHfrom_DASHlines);
      END_STATE();
    case 2905:
      ACCEPT_TOKEN(anon_sym_no_DASHsymkey_DASHcache);
      END_STATE();
    case 2906:
      ACCEPT_TOKEN(anon_sym_allow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 2907:
      ACCEPT_TOKEN(anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 2908:
      ACCEPT_TOKEN(anon_sym_allow_DASHfreeform_DASHuid);
      END_STATE();
    case 2909:
      ACCEPT_TOKEN(anon_sym_ignore_DASHtime_DASHconflict);
      END_STATE();
    case 2910:
      ACCEPT_TOKEN(anon_sym_ignore_DASHvalid_DASHfrom);
      END_STATE();
    case 2911:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcrc_DASHerror);
      END_STATE();
    case 2912:
      ACCEPT_TOKEN(anon_sym_ignore_DASHmdc_DASHerror);
      END_STATE();
    case 2913:
      ACCEPT_TOKEN(anon_sym_allow_DASHold_DASHcipher_DASHalgos);
      END_STATE();
    case 2914:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHdigest_DASHalgos);
      END_STATE();
    case 2915:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHkey_DASHsignatures);
      END_STATE();
    case 2916:
      ACCEPT_TOKEN(anon_sym_override_DASHcompliance_DASHcheck);
      END_STATE();
    case 2917:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHkeyring);
      END_STATE();
    case 2918:
      ACCEPT_TOKEN(anon_sym_no_DASHkeyring);
      END_STATE();
    case 2919:
      ACCEPT_TOKEN(anon_sym_skip_DASHverify);
      END_STATE();
    case 2920:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHdata);
      END_STATE();
    case 2921:
      ACCEPT_TOKEN(anon_sym_list_DASHsignatures);
      END_STATE();
    case 2922:
      ACCEPT_TOKEN(anon_sym_list_DASHsigs);
      END_STATE();
    case 2923:
      ACCEPT_TOKEN(anon_sym_fast_DASHlist_DASHmode);
      END_STATE();
    case 2924:
      ACCEPT_TOKEN(anon_sym_show_DASHsession_DASHkey);
      END_STATE();
    case 2925:
      ACCEPT_TOKEN(anon_sym_ask_DASHsig_DASHexpire);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHsig_DASHexpire);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHexpire);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHexpire);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(anon_sym_force_DASHsign_DASHkey);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(anon_sym_forbid_DASHgen_DASHkey);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(anon_sym_enable_DASHspecial_DASHfilenames);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(anon_sym_preserve_DASHpermissions);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == 's') ADVANCE(1033);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(aux_sym__command_token1);
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
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(2772);
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
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(2772);
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
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
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
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(sym__no_utf8_strings);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(1154);
      if (lookahead == 'u') ADVANCE(2015);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(246);
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1108);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1116);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(aux_sym__group_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(2999);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(anon_sym_sender);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(sym__key_origin_value);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(sym__key_origin_value);
      if (lookahead == '-') ADVANCE(1995);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'b') ADVANCE(1288);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(sym__require_compliance);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(anon_sym_debug_DASHlevel);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(sym__debug_level_value);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '-') ADVANCE(422);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'a') ADVANCE(3034);
      if (lookahead == 'l') ADVANCE(1872);
      if (lookahead == 'r') ADVANCE(2731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'c') ADVANCE(3035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'h') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'i') ADVANCE(1578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(2532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3032);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3039);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3040);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3041);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3042);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3043);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3044);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(sym__debug_flag_value);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(anon_sym_debug_DASHset_DASHiobuf_DASHsize);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(anon_sym_faked_DASHsystem_DASHtime);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(anon_sym_status_DASHfd);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(anon_sym_status_DASHfile);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(anon_sym_logger_DASHfd);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(anon_sym_logger_DASHfile);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(anon_sym_log_DASHfile);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(anon_sym_sig_DASHnotation);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(anon_sym_cert_DASHnotation);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(anon_sym_set_DASHnotation);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      if (lookahead == '\n') ADVANCE(2813);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      if (lookahead == '%' ||
          lookahead == 'K' ||
          lookahead == 'S' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(3062);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(aux_sym__notation_format_token1);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(anon_sym_known_DASHnotation);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(anon_sym_sig_DASHpolicy_DASHurl);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(anon_sym_cert_DASHpolicy_DASHurl);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(anon_sym_set_DASHpolicy_DASHurl);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(anon_sym_sig_DASHkeyserver_DASHurl);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(anon_sym_set_DASHfilename);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(anon_sym_cipher_DASHalgo);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(anon_sym_digest_DASHalgo);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(anon_sym_compress_DASHalgo);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(anon_sym_cert_DASHdigest_DASHalgo);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(anon_sym_disable_DASHcipher_DASHalgo);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_disable_DASHpubkey_DASHalgo);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHrepeat);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfd);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfile);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(anon_sym_passphrase);
      if (lookahead == '-') ADVANCE(1084);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(anon_sym_pinentry_DASHmode);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(sym__pinentry_mode_value);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(anon_sym_request_DASHorigin);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(sym__request_origin_value);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(anon_sym_command_DASHfd);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(anon_sym_command_DASHfile);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(anon_sym_weak_DASHdigest);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey);
      if (lookahead == '-') ADVANCE(1089);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey_DASHfd);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(anon_sym_default_DASHsig_DASHexpire);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHexpire);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(anon_sym_default_DASHnew_DASHkey_DASHalgo);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(sym__new_key_algo);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3091);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(anon_sym_default_DASHpreference_DASHlist);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(anon_sym_default_DASHkeyserver_DASHurl);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(anon_sym_chuid);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(sym_key);
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
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3112);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3113);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3114);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3115);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3116);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3117);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3118);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3119);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3120);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3121);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3122);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3123);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3124);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3125);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3126);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(2808);
      if (lookahead == '.') ADVANCE(2780);
      if (lookahead == ':') ADVANCE(2781);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3128);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3129);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'T') ADVANCE(2799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3140);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3130);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2798);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3132);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3134);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3135);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3136);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3137);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3138);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3140);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(sym_iso_time);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(sym_expire_time);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(sym_expire_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2787);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3145);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3146);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(sym__pubkey_algo_value);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      END_STATE();
    case 3149:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      if (lookahead == '1') ADVANCE(299);
      if (lookahead == '2') ADVANCE(282);
      END_STATE();
    case 3150:
      ACCEPT_TOKEN(sym__hash_algo_value);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(sym__compression_algo_value);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2811},
  [2] = {.lex_state = 2811},
  [3] = {.lex_state = 2811},
  [4] = {.lex_state = 2811},
  [5] = {.lex_state = 2811},
  [6] = {.lex_state = 2811},
  [7] = {.lex_state = 2811},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2811},
  [25] = {.lex_state = 2811},
  [26] = {.lex_state = 2811},
  [27] = {.lex_state = 2811},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 2811},
  [33] = {.lex_state = 2811},
  [34] = {.lex_state = 2811},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 2811},
  [38] = {.lex_state = 2811},
  [39] = {.lex_state = 2811},
  [40] = {.lex_state = 2811},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 2811},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 2811},
  [48] = {.lex_state = 2811},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 2811},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 2811},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 2811},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 2811},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 2811},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 2811},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 2811},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 2811},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 2811},
  [77] = {.lex_state = 2811},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 2811},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 2811},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 2811},
  [90] = {.lex_state = 2811},
  [91] = {.lex_state = 2811},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2811},
  [94] = {.lex_state = 2811},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 2811},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 2811},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 2811},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 2811},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 2811},
  [126] = {.lex_state = 2811},
  [127] = {.lex_state = 2811},
  [128] = {.lex_state = 2811},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 2811},
  [131] = {.lex_state = 2811},
  [132] = {.lex_state = 2811},
  [133] = {.lex_state = 2811},
  [134] = {.lex_state = 2811},
  [135] = {.lex_state = 2811},
  [136] = {.lex_state = 2811},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 2811},
  [139] = {.lex_state = 2811},
  [140] = {.lex_state = 2811},
  [141] = {.lex_state = 2811},
  [142] = {.lex_state = 2811},
  [143] = {.lex_state = 2811},
  [144] = {.lex_state = 2811},
  [145] = {.lex_state = 2811},
  [146] = {.lex_state = 2811},
  [147] = {.lex_state = 2811},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 2811},
  [150] = {.lex_state = 2811},
  [151] = {.lex_state = 2811},
  [152] = {.lex_state = 2811},
  [153] = {.lex_state = 2811},
  [154] = {.lex_state = 2811},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 2811},
  [158] = {.lex_state = 2811},
  [159] = {.lex_state = 2811},
  [160] = {.lex_state = 2811},
  [161] = {.lex_state = 2811},
  [162] = {.lex_state = 2811},
  [163] = {.lex_state = 2811},
  [164] = {.lex_state = 2811},
  [165] = {.lex_state = 2811},
  [166] = {.lex_state = 2811},
  [167] = {.lex_state = 2811},
  [168] = {.lex_state = 2811},
  [169] = {.lex_state = 2811},
  [170] = {.lex_state = 2811},
  [171] = {.lex_state = 2811},
  [172] = {.lex_state = 2811},
  [173] = {.lex_state = 2811},
  [174] = {.lex_state = 2811},
  [175] = {.lex_state = 2811},
  [176] = {.lex_state = 2811},
  [177] = {.lex_state = 251},
  [178] = {.lex_state = 2811},
  [179] = {.lex_state = 252},
  [180] = {.lex_state = 2811},
  [181] = {.lex_state = 2811},
  [182] = {.lex_state = 2811},
  [183] = {.lex_state = 2811},
  [184] = {.lex_state = 2811},
  [185] = {.lex_state = 2811},
  [186] = {.lex_state = 2811},
  [187] = {.lex_state = 2811},
  [188] = {.lex_state = 2811},
  [189] = {.lex_state = 2811},
  [190] = {.lex_state = 2811},
  [191] = {.lex_state = 2811},
  [192] = {.lex_state = 2811},
  [193] = {.lex_state = 2811},
  [194] = {.lex_state = 252},
  [195] = {.lex_state = 252},
  [196] = {.lex_state = 2811},
  [197] = {.lex_state = 2811},
  [198] = {.lex_state = 2811},
  [199] = {.lex_state = 2811},
  [200] = {.lex_state = 2811},
  [201] = {.lex_state = 2811},
  [202] = {.lex_state = 2811},
  [203] = {.lex_state = 2811},
  [204] = {.lex_state = 2811},
  [205] = {.lex_state = 2811},
  [206] = {.lex_state = 2811},
  [207] = {.lex_state = 2811},
  [208] = {.lex_state = 2811},
  [209] = {.lex_state = 2811},
  [210] = {.lex_state = 2811},
  [211] = {.lex_state = 2811},
  [212] = {.lex_state = 2811},
  [213] = {.lex_state = 2811},
  [214] = {.lex_state = 2811},
  [215] = {.lex_state = 2811},
  [216] = {.lex_state = 2811},
  [217] = {.lex_state = 2811},
  [218] = {.lex_state = 2811},
  [219] = {.lex_state = 2811},
  [220] = {.lex_state = 2811},
  [221] = {.lex_state = 2811},
  [222] = {.lex_state = 2811},
  [223] = {.lex_state = 2811},
  [224] = {.lex_state = 2811},
  [225] = {.lex_state = 2811},
  [226] = {.lex_state = 2811},
  [227] = {.lex_state = 2811},
  [228] = {.lex_state = 2811},
  [229] = {.lex_state = 2811},
  [230] = {.lex_state = 2811},
  [231] = {.lex_state = 2811},
  [232] = {.lex_state = 2811},
  [233] = {.lex_state = 2811},
  [234] = {.lex_state = 2811},
  [235] = {.lex_state = 2811},
  [236] = {.lex_state = 2811},
  [237] = {.lex_state = 2811},
  [238] = {.lex_state = 2811},
  [239] = {.lex_state = 2811},
  [240] = {.lex_state = 2811},
  [241] = {.lex_state = 2811},
  [242] = {.lex_state = 2811},
  [243] = {.lex_state = 2811},
  [244] = {.lex_state = 2811},
  [245] = {.lex_state = 2811},
  [246] = {.lex_state = 2811},
  [247] = {.lex_state = 2811},
  [248] = {.lex_state = 2811},
  [249] = {.lex_state = 2811},
  [250] = {.lex_state = 2811},
  [251] = {.lex_state = 2811},
  [252] = {.lex_state = 2811},
  [253] = {.lex_state = 2811},
  [254] = {.lex_state = 2811},
  [255] = {.lex_state = 2811},
  [256] = {.lex_state = 2811},
  [257] = {.lex_state = 2811},
  [258] = {.lex_state = 252},
  [259] = {.lex_state = 2811},
  [260] = {.lex_state = 2811},
  [261] = {.lex_state = 2811},
  [262] = {.lex_state = 2811},
  [263] = {.lex_state = 2811},
  [264] = {.lex_state = 2811},
  [265] = {.lex_state = 2811},
  [266] = {.lex_state = 2811},
  [267] = {.lex_state = 2811},
  [268] = {.lex_state = 2811},
  [269] = {.lex_state = 2811},
  [270] = {.lex_state = 2811},
  [271] = {.lex_state = 2811},
  [272] = {.lex_state = 2811},
  [273] = {.lex_state = 2811},
  [274] = {.lex_state = 2811},
  [275] = {.lex_state = 2811},
  [276] = {.lex_state = 2811},
  [277] = {.lex_state = 2811},
  [278] = {.lex_state = 2811},
  [279] = {.lex_state = 251},
  [280] = {.lex_state = 2811},
  [281] = {.lex_state = 2811},
  [282] = {.lex_state = 2811},
  [283] = {.lex_state = 61},
  [284] = {.lex_state = 61},
  [285] = {.lex_state = 404},
  [286] = {.lex_state = 404},
  [287] = {.lex_state = 2811},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 252},
  [290] = {.lex_state = 2811},
  [291] = {.lex_state = 2811},
  [292] = {.lex_state = 2811},
  [293] = {.lex_state = 251},
  [294] = {.lex_state = 2811},
  [295] = {.lex_state = 252},
  [296] = {.lex_state = 2811},
  [297] = {.lex_state = 252},
  [298] = {.lex_state = 61},
  [299] = {.lex_state = 2811},
  [300] = {.lex_state = 252},
  [301] = {.lex_state = 2811},
  [302] = {.lex_state = 2810},
  [303] = {.lex_state = 252},
  [304] = {.lex_state = 252},
  [305] = {.lex_state = 2811},
  [306] = {.lex_state = 2811},
  [307] = {.lex_state = 252},
  [308] = {.lex_state = 2811},
  [309] = {.lex_state = 252},
  [310] = {.lex_state = 2811},
  [311] = {.lex_state = 255},
  [312] = {.lex_state = 61},
  [313] = {.lex_state = 2811},
  [314] = {.lex_state = 2811},
  [315] = {.lex_state = 2811},
  [316] = {.lex_state = 2811},
  [317] = {.lex_state = 252},
  [318] = {.lex_state = 2811},
  [319] = {.lex_state = 2811},
  [320] = {.lex_state = 2811},
  [321] = {.lex_state = 2811},
  [322] = {.lex_state = 2811},
  [323] = {.lex_state = 2811},
  [324] = {.lex_state = 251},
  [325] = {.lex_state = 251},
  [326] = {.lex_state = 2809},
  [327] = {.lex_state = 2811},
  [328] = {.lex_state = 2811},
  [329] = {.lex_state = 2811},
  [330] = {.lex_state = 2811},
  [331] = {.lex_state = 2811},
  [332] = {.lex_state = 2811},
  [333] = {.lex_state = 2811},
  [334] = {.lex_state = 2811},
  [335] = {.lex_state = 2811},
  [336] = {.lex_state = 2811},
  [337] = {.lex_state = 255},
  [338] = {.lex_state = 255},
  [339] = {.lex_state = 252},
  [340] = {.lex_state = 2811},
  [341] = {.lex_state = 2811},
  [342] = {.lex_state = 2811},
  [343] = {.lex_state = 2811},
  [344] = {.lex_state = 252},
  [345] = {.lex_state = 252},
  [346] = {.lex_state = 2811},
  [347] = {.lex_state = 2811},
  [348] = {.lex_state = 2811},
  [349] = {.lex_state = 2811},
  [350] = {.lex_state = 2811},
  [351] = {.lex_state = 2811},
  [352] = {.lex_state = 255},
  [353] = {.lex_state = 255},
  [354] = {.lex_state = 2811},
  [355] = {.lex_state = 2811},
  [356] = {.lex_state = 61},
  [357] = {.lex_state = 61},
  [358] = {.lex_state = 2811},
  [359] = {.lex_state = 2811},
  [360] = {.lex_state = 252},
  [361] = {.lex_state = 252},
  [362] = {.lex_state = 2811},
  [363] = {.lex_state = 2811},
  [364] = {.lex_state = 251},
  [365] = {.lex_state = 2811},
  [366] = {.lex_state = 251},
  [367] = {.lex_state = 252},
  [368] = {.lex_state = 61},
  [369] = {.lex_state = 2811},
  [370] = {.lex_state = 2811},
  [371] = {.lex_state = 2811},
  [372] = {.lex_state = 2811},
  [373] = {.lex_state = 2811},
  [374] = {.lex_state = 2811},
  [375] = {.lex_state = 2811},
  [376] = {.lex_state = 2811},
  [377] = {.lex_state = 2811},
  [378] = {.lex_state = 2811},
  [379] = {.lex_state = 2811},
  [380] = {.lex_state = 2809},
  [381] = {.lex_state = 2809},
  [382] = {.lex_state = 2811},
  [383] = {.lex_state = 2811},
  [384] = {.lex_state = 2811},
  [385] = {.lex_state = 2811},
  [386] = {.lex_state = 2811},
  [387] = {.lex_state = 2811},
  [388] = {.lex_state = 2811},
  [389] = {.lex_state = 2811},
  [390] = {.lex_state = 252},
  [391] = {.lex_state = 2811},
  [392] = {.lex_state = 2811},
  [393] = {.lex_state = 2811},
  [394] = {.lex_state = 61},
  [395] = {.lex_state = 2811},
  [396] = {.lex_state = 2811},
  [397] = {.lex_state = 252},
  [398] = {.lex_state = 2811},
  [399] = {.lex_state = 2811},
  [400] = {.lex_state = 252},
  [401] = {.lex_state = 2811},
  [402] = {.lex_state = 2811},
  [403] = {.lex_state = 2811},
  [404] = {.lex_state = 252},
  [405] = {.lex_state = 2811},
  [406] = {.lex_state = 2811},
  [407] = {.lex_state = 2811},
  [408] = {.lex_state = 255},
  [409] = {.lex_state = 2811},
  [410] = {.lex_state = 61},
  [411] = {.lex_state = 2811},
  [412] = {.lex_state = 2811},
  [413] = {.lex_state = 2811},
  [414] = {.lex_state = 252},
  [415] = {.lex_state = 2811},
  [416] = {.lex_state = 2811},
  [417] = {.lex_state = 2811},
  [418] = {.lex_state = 61},
  [419] = {.lex_state = 2811},
  [420] = {.lex_state = 2811},
  [421] = {.lex_state = 2811},
  [422] = {.lex_state = 255},
  [423] = {.lex_state = 2811},
  [424] = {.lex_state = 2811},
  [425] = {.lex_state = 2811},
  [426] = {.lex_state = 252},
  [427] = {.lex_state = 2811},
  [428] = {.lex_state = 2811},
  [429] = {.lex_state = 2811},
  [430] = {.lex_state = 252},
  [431] = {.lex_state = 2811},
  [432] = {.lex_state = 2811},
  [433] = {.lex_state = 2811},
  [434] = {.lex_state = 252},
  [435] = {.lex_state = 2811},
  [436] = {.lex_state = 404},
  [437] = {.lex_state = 2811},
  [438] = {.lex_state = 252},
  [439] = {.lex_state = 2811},
  [440] = {.lex_state = 61},
  [441] = {.lex_state = 2811},
  [442] = {.lex_state = 2811},
  [443] = {.lex_state = 2811},
  [444] = {.lex_state = 252},
  [445] = {.lex_state = 2811},
  [446] = {.lex_state = 2811},
  [447] = {.lex_state = 2774},
  [448] = {.lex_state = 61},
  [449] = {.lex_state = 255},
  [450] = {.lex_state = 2811},
  [451] = {.lex_state = 2811},
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
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__notation_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(288),
    [sym_option] = STATE(259),
    [sym__default_key] = STATE(197),
    [sym__list_options] = STATE(197),
    [sym__verify_options] = STATE(197),
    [sym__photo_viewer] = STATE(197),
    [sym__exec_path] = STATE(197),
    [sym__keyring] = STATE(197),
    [sym__primary_keyring] = STATE(197),
    [sym__trustdb_name] = STATE(197),
    [sym__display_charset] = STATE(197),
    [sym__compress_level] = STATE(197),
    [sym__bzip2_compress_level] = STATE(197),
    [sym__default_cert_level] = STATE(197),
    [sym__min_cert_level] = STATE(197),
    [sym__trusted_key] = STATE(197),
    [sym__add_desig_revoker] = STATE(197),
    [sym__trust_model] = STATE(197),
    [sym__assert_signer] = STATE(197),
    [sym__auto_key_locate] = STATE(197),
    [sym__keyid_format] = STATE(197),
    [sym__keyserver] = STATE(197),
    [sym__completes_needed] = STATE(197),
    [sym__marginals_needed] = STATE(197),
    [sym__tofu_default_policy] = STATE(197),
    [sym__max_cert_depth] = STATE(197),
    [sym__agent_program] = STATE(197),
    [sym__dirmngr_program] = STATE(197),
    [sym__limit_card_insert_tries] = STATE(197),
    [sym__recipient] = STATE(197),
    [sym__hidden_recipient] = STATE(197),
    [sym__recipient_file] = STATE(197),
    [sym__hidden_recipient_file] = STATE(197),
    [sym__encrypt_to] = STATE(197),
    [sym__hidden_encrypt_to] = STATE(197),
    [sym__group] = STATE(260),
    [sym__ungroup] = STATE(197),
    [sym__local_user] = STATE(197),
    [sym__sender] = STATE(197),
    [sym__try_secret_name] = STATE(197),
    [sym__output] = STATE(197),
    [sym__max_output] = STATE(197),
    [sym__chunk_size] = STATE(197),
    [sym__input_size_hint] = STATE(197),
    [sym__key_origin] = STATE(197),
    [sym__import_options] = STATE(197),
    [sym__export_options] = STATE(197),
    [sym__personal_cipher_preferences] = STATE(197),
    [sym__personal_digest_preferences] = STATE(197),
    [sym__personal_compress_preferences] = STATE(197),
    [sym__s2k_cipher_algo] = STATE(197),
    [sym__s2k_digest_algo] = STATE(197),
    [sym__s2k_mode] = STATE(197),
    [sym__s2k_count] = STATE(197),
    [sym__compliance] = STATE(197),
    [sym__min_rsa_length] = STATE(197),
    [sym__debug_level] = STATE(197),
    [sym__debug] = STATE(197),
    [sym__debug_set_iobuf_size] = STATE(197),
    [sym__faked_system_time] = STATE(197),
    [sym__status_fd] = STATE(197),
    [sym__status_file] = STATE(197),
    [sym__logger_fd] = STATE(197),
    [sym__logger_file] = STATE(197),
    [sym__comment] = STATE(197),
    [sym__sig_notation] = STATE(269),
    [sym__cert_notation] = STATE(271),
    [sym__set_notation] = STATE(278),
    [sym__known_notation] = STATE(197),
    [sym__sig_policy_url] = STATE(197),
    [sym__cert_policy_url] = STATE(197),
    [sym__set_policy_url] = STATE(197),
    [sym__sig_keyserver_url] = STATE(197),
    [sym__set_filename] = STATE(197),
    [sym__cipher_algo] = STATE(197),
    [sym__digest_algo] = STATE(197),
    [sym__compress_algo] = STATE(197),
    [sym__cert_digest_algo] = STATE(197),
    [sym__disable_cipher_algo] = STATE(197),
    [sym__disable_pubkey_algo] = STATE(197),
    [sym__passphrase_repeat] = STATE(197),
    [sym__passphrase_fd] = STATE(197),
    [sym__passphrase_file] = STATE(197),
    [sym__passphrase] = STATE(197),
    [sym__pinentry_mode] = STATE(197),
    [sym__request_origin] = STATE(197),
    [sym__command_fd] = STATE(197),
    [sym__command_file] = STATE(197),
    [sym__weak_digest] = STATE(197),
    [sym__override_session_key] = STATE(197),
    [sym__override_session_key_fd] = STATE(197),
    [sym__default_sig_expire] = STATE(197),
    [sym__default_cert_expire] = STATE(197),
    [sym__default_new_key_algo] = STATE(197),
    [sym__default_preference_list] = STATE(197),
    [sym__default_keyserver_url] = STATE(197),
    [sym__chuid] = STATE(197),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
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
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
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
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHoptions] = ACTIONS(13),
    [anon_sym_verify_DASHoptions] = ACTIONS(15),
    [anon_sym_photo_DASHviewer] = ACTIONS(17),
    [anon_sym_exec_DASHpath] = ACTIONS(19),
    [anon_sym_keyring] = ACTIONS(21),
    [anon_sym_primary_DASHkeyring] = ACTIONS(23),
    [anon_sym_trustdb_DASHname] = ACTIONS(25),
    [anon_sym_display_DASHcharset] = ACTIONS(27),
    [sym__utf8_strings] = ACTIONS(9),
    [sym__no_utf8_strings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(29),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(31),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(33),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_trusted_DASHkey] = ACTIONS(37),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(39),
    [anon_sym_trust_DASHmodel] = ACTIONS(41),
    [anon_sym_assert_DASHsigner] = ACTIONS(43),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(45),
    [anon_sym_keyid_DASHformat] = ACTIONS(47),
    [anon_sym_keyserver] = ACTIONS(49),
    [anon_sym_completes_DASHneeded] = ACTIONS(51),
    [anon_sym_marginals_DASHneeded] = ACTIONS(53),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(55),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(57),
    [anon_sym_agent_DASHprogram] = ACTIONS(59),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(61),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(63),
    [anon_sym_recipient] = ACTIONS(65),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(67),
    [anon_sym_recipient_DASHfile] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(71),
    [anon_sym_encrypt_DASHto] = ACTIONS(73),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(75),
    [anon_sym_group] = ACTIONS(77),
    [anon_sym_ungroup] = ACTIONS(79),
    [anon_sym_local_DASHuser] = ACTIONS(81),
    [anon_sym_sender] = ACTIONS(83),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(87),
    [anon_sym_max_DASHoutput] = ACTIONS(89),
    [anon_sym_chunk_DASHsize] = ACTIONS(91),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(93),
    [anon_sym_key_DASHorigin] = ACTIONS(95),
    [anon_sym_import_DASHoptions] = ACTIONS(97),
    [anon_sym_export_DASHoptions] = ACTIONS(99),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(101),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(105),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(107),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHmode] = ACTIONS(111),
    [anon_sym_s2k_DASHcount] = ACTIONS(113),
    [anon_sym_compliance] = ACTIONS(115),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(117),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(119),
    [anon_sym_debug] = ACTIONS(121),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(123),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(125),
    [anon_sym_status_DASHfd] = ACTIONS(127),
    [anon_sym_status_DASHfile] = ACTIONS(129),
    [anon_sym_logger_DASHfd] = ACTIONS(131),
    [anon_sym_logger_DASHfile] = ACTIONS(133),
    [anon_sym_log_DASHfile] = ACTIONS(133),
    [anon_sym_comment] = ACTIONS(135),
    [anon_sym_sig_DASHnotation] = ACTIONS(137),
    [anon_sym_cert_DASHnotation] = ACTIONS(139),
    [anon_sym_set_DASHnotation] = ACTIONS(141),
    [anon_sym_known_DASHnotation] = ACTIONS(143),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(145),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(147),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(149),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(151),
    [anon_sym_set_DASHfilename] = ACTIONS(153),
    [anon_sym_cipher_DASHalgo] = ACTIONS(155),
    [anon_sym_digest_DASHalgo] = ACTIONS(157),
    [anon_sym_compress_DASHalgo] = ACTIONS(159),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(161),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(163),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(165),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(167),
    [anon_sym_passphrase_DASHfd] = ACTIONS(169),
    [anon_sym_passphrase_DASHfile] = ACTIONS(171),
    [anon_sym_passphrase] = ACTIONS(173),
    [anon_sym_pinentry_DASHmode] = ACTIONS(175),
    [anon_sym_request_DASHorigin] = ACTIONS(177),
    [anon_sym_command_DASHfd] = ACTIONS(179),
    [anon_sym_command_DASHfile] = ACTIONS(181),
    [anon_sym_weak_DASHdigest] = ACTIONS(183),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(185),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(187),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(189),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(191),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(193),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(195),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(197),
    [anon_sym_chuid] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
  },
  [2] = {
    [sym_option] = STATE(259),
    [sym__default_key] = STATE(197),
    [sym__list_options] = STATE(197),
    [sym__verify_options] = STATE(197),
    [sym__photo_viewer] = STATE(197),
    [sym__exec_path] = STATE(197),
    [sym__keyring] = STATE(197),
    [sym__primary_keyring] = STATE(197),
    [sym__trustdb_name] = STATE(197),
    [sym__display_charset] = STATE(197),
    [sym__compress_level] = STATE(197),
    [sym__bzip2_compress_level] = STATE(197),
    [sym__default_cert_level] = STATE(197),
    [sym__min_cert_level] = STATE(197),
    [sym__trusted_key] = STATE(197),
    [sym__add_desig_revoker] = STATE(197),
    [sym__trust_model] = STATE(197),
    [sym__assert_signer] = STATE(197),
    [sym__auto_key_locate] = STATE(197),
    [sym__keyid_format] = STATE(197),
    [sym__keyserver] = STATE(197),
    [sym__completes_needed] = STATE(197),
    [sym__marginals_needed] = STATE(197),
    [sym__tofu_default_policy] = STATE(197),
    [sym__max_cert_depth] = STATE(197),
    [sym__agent_program] = STATE(197),
    [sym__dirmngr_program] = STATE(197),
    [sym__limit_card_insert_tries] = STATE(197),
    [sym__recipient] = STATE(197),
    [sym__hidden_recipient] = STATE(197),
    [sym__recipient_file] = STATE(197),
    [sym__hidden_recipient_file] = STATE(197),
    [sym__encrypt_to] = STATE(197),
    [sym__hidden_encrypt_to] = STATE(197),
    [sym__group] = STATE(260),
    [sym__ungroup] = STATE(197),
    [sym__local_user] = STATE(197),
    [sym__sender] = STATE(197),
    [sym__try_secret_name] = STATE(197),
    [sym__output] = STATE(197),
    [sym__max_output] = STATE(197),
    [sym__chunk_size] = STATE(197),
    [sym__input_size_hint] = STATE(197),
    [sym__key_origin] = STATE(197),
    [sym__import_options] = STATE(197),
    [sym__export_options] = STATE(197),
    [sym__personal_cipher_preferences] = STATE(197),
    [sym__personal_digest_preferences] = STATE(197),
    [sym__personal_compress_preferences] = STATE(197),
    [sym__s2k_cipher_algo] = STATE(197),
    [sym__s2k_digest_algo] = STATE(197),
    [sym__s2k_mode] = STATE(197),
    [sym__s2k_count] = STATE(197),
    [sym__compliance] = STATE(197),
    [sym__min_rsa_length] = STATE(197),
    [sym__debug_level] = STATE(197),
    [sym__debug] = STATE(197),
    [sym__debug_set_iobuf_size] = STATE(197),
    [sym__faked_system_time] = STATE(197),
    [sym__status_fd] = STATE(197),
    [sym__status_file] = STATE(197),
    [sym__logger_fd] = STATE(197),
    [sym__logger_file] = STATE(197),
    [sym__comment] = STATE(197),
    [sym__sig_notation] = STATE(269),
    [sym__cert_notation] = STATE(271),
    [sym__set_notation] = STATE(278),
    [sym__known_notation] = STATE(197),
    [sym__sig_policy_url] = STATE(197),
    [sym__cert_policy_url] = STATE(197),
    [sym__set_policy_url] = STATE(197),
    [sym__sig_keyserver_url] = STATE(197),
    [sym__set_filename] = STATE(197),
    [sym__cipher_algo] = STATE(197),
    [sym__digest_algo] = STATE(197),
    [sym__compress_algo] = STATE(197),
    [sym__cert_digest_algo] = STATE(197),
    [sym__disable_cipher_algo] = STATE(197),
    [sym__disable_pubkey_algo] = STATE(197),
    [sym__passphrase_repeat] = STATE(197),
    [sym__passphrase_fd] = STATE(197),
    [sym__passphrase_file] = STATE(197),
    [sym__passphrase] = STATE(197),
    [sym__pinentry_mode] = STATE(197),
    [sym__request_origin] = STATE(197),
    [sym__command_fd] = STATE(197),
    [sym__command_file] = STATE(197),
    [sym__weak_digest] = STATE(197),
    [sym__override_session_key] = STATE(197),
    [sym__override_session_key_fd] = STATE(197),
    [sym__default_sig_expire] = STATE(197),
    [sym__default_cert_expire] = STATE(197),
    [sym__default_new_key_algo] = STATE(197),
    [sym__default_preference_list] = STATE(197),
    [sym__default_keyserver_url] = STATE(197),
    [sym__chuid] = STATE(197),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_config_token1] = ACTIONS(207),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
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
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
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
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHoptions] = ACTIONS(13),
    [anon_sym_verify_DASHoptions] = ACTIONS(15),
    [anon_sym_photo_DASHviewer] = ACTIONS(17),
    [anon_sym_exec_DASHpath] = ACTIONS(19),
    [anon_sym_keyring] = ACTIONS(21),
    [anon_sym_primary_DASHkeyring] = ACTIONS(23),
    [anon_sym_trustdb_DASHname] = ACTIONS(25),
    [anon_sym_display_DASHcharset] = ACTIONS(27),
    [sym__utf8_strings] = ACTIONS(9),
    [sym__no_utf8_strings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(29),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(31),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(33),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_trusted_DASHkey] = ACTIONS(37),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(39),
    [anon_sym_trust_DASHmodel] = ACTIONS(41),
    [anon_sym_assert_DASHsigner] = ACTIONS(43),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(45),
    [anon_sym_keyid_DASHformat] = ACTIONS(47),
    [anon_sym_keyserver] = ACTIONS(49),
    [anon_sym_completes_DASHneeded] = ACTIONS(51),
    [anon_sym_marginals_DASHneeded] = ACTIONS(53),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(55),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(57),
    [anon_sym_agent_DASHprogram] = ACTIONS(59),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(61),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(63),
    [anon_sym_recipient] = ACTIONS(65),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(67),
    [anon_sym_recipient_DASHfile] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(71),
    [anon_sym_encrypt_DASHto] = ACTIONS(73),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(75),
    [anon_sym_group] = ACTIONS(77),
    [anon_sym_ungroup] = ACTIONS(79),
    [anon_sym_local_DASHuser] = ACTIONS(81),
    [anon_sym_sender] = ACTIONS(83),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(87),
    [anon_sym_max_DASHoutput] = ACTIONS(89),
    [anon_sym_chunk_DASHsize] = ACTIONS(91),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(93),
    [anon_sym_key_DASHorigin] = ACTIONS(95),
    [anon_sym_import_DASHoptions] = ACTIONS(97),
    [anon_sym_export_DASHoptions] = ACTIONS(99),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(101),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(105),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(107),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHmode] = ACTIONS(111),
    [anon_sym_s2k_DASHcount] = ACTIONS(113),
    [anon_sym_compliance] = ACTIONS(115),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(117),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(119),
    [anon_sym_debug] = ACTIONS(121),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(123),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(125),
    [anon_sym_status_DASHfd] = ACTIONS(127),
    [anon_sym_status_DASHfile] = ACTIONS(129),
    [anon_sym_logger_DASHfd] = ACTIONS(131),
    [anon_sym_logger_DASHfile] = ACTIONS(133),
    [anon_sym_log_DASHfile] = ACTIONS(133),
    [anon_sym_comment] = ACTIONS(135),
    [anon_sym_sig_DASHnotation] = ACTIONS(137),
    [anon_sym_cert_DASHnotation] = ACTIONS(139),
    [anon_sym_set_DASHnotation] = ACTIONS(141),
    [anon_sym_known_DASHnotation] = ACTIONS(143),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(145),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(147),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(149),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(151),
    [anon_sym_set_DASHfilename] = ACTIONS(153),
    [anon_sym_cipher_DASHalgo] = ACTIONS(155),
    [anon_sym_digest_DASHalgo] = ACTIONS(157),
    [anon_sym_compress_DASHalgo] = ACTIONS(159),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(161),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(163),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(165),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(167),
    [anon_sym_passphrase_DASHfd] = ACTIONS(169),
    [anon_sym_passphrase_DASHfile] = ACTIONS(171),
    [anon_sym_passphrase] = ACTIONS(173),
    [anon_sym_pinentry_DASHmode] = ACTIONS(175),
    [anon_sym_request_DASHorigin] = ACTIONS(177),
    [anon_sym_command_DASHfd] = ACTIONS(179),
    [anon_sym_command_DASHfile] = ACTIONS(181),
    [anon_sym_weak_DASHdigest] = ACTIONS(183),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(185),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(187),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(189),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(191),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(193),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(195),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(197),
    [anon_sym_chuid] = ACTIONS(199),
    [sym_comment] = ACTIONS(201),
    [sym__space] = ACTIONS(203),
  },
  [3] = {
    [sym_option] = STATE(259),
    [sym__default_key] = STATE(197),
    [sym__list_options] = STATE(197),
    [sym__verify_options] = STATE(197),
    [sym__photo_viewer] = STATE(197),
    [sym__exec_path] = STATE(197),
    [sym__keyring] = STATE(197),
    [sym__primary_keyring] = STATE(197),
    [sym__trustdb_name] = STATE(197),
    [sym__display_charset] = STATE(197),
    [sym__compress_level] = STATE(197),
    [sym__bzip2_compress_level] = STATE(197),
    [sym__default_cert_level] = STATE(197),
    [sym__min_cert_level] = STATE(197),
    [sym__trusted_key] = STATE(197),
    [sym__add_desig_revoker] = STATE(197),
    [sym__trust_model] = STATE(197),
    [sym__assert_signer] = STATE(197),
    [sym__auto_key_locate] = STATE(197),
    [sym__keyid_format] = STATE(197),
    [sym__keyserver] = STATE(197),
    [sym__completes_needed] = STATE(197),
    [sym__marginals_needed] = STATE(197),
    [sym__tofu_default_policy] = STATE(197),
    [sym__max_cert_depth] = STATE(197),
    [sym__agent_program] = STATE(197),
    [sym__dirmngr_program] = STATE(197),
    [sym__limit_card_insert_tries] = STATE(197),
    [sym__recipient] = STATE(197),
    [sym__hidden_recipient] = STATE(197),
    [sym__recipient_file] = STATE(197),
    [sym__hidden_recipient_file] = STATE(197),
    [sym__encrypt_to] = STATE(197),
    [sym__hidden_encrypt_to] = STATE(197),
    [sym__group] = STATE(260),
    [sym__ungroup] = STATE(197),
    [sym__local_user] = STATE(197),
    [sym__sender] = STATE(197),
    [sym__try_secret_name] = STATE(197),
    [sym__output] = STATE(197),
    [sym__max_output] = STATE(197),
    [sym__chunk_size] = STATE(197),
    [sym__input_size_hint] = STATE(197),
    [sym__key_origin] = STATE(197),
    [sym__import_options] = STATE(197),
    [sym__export_options] = STATE(197),
    [sym__personal_cipher_preferences] = STATE(197),
    [sym__personal_digest_preferences] = STATE(197),
    [sym__personal_compress_preferences] = STATE(197),
    [sym__s2k_cipher_algo] = STATE(197),
    [sym__s2k_digest_algo] = STATE(197),
    [sym__s2k_mode] = STATE(197),
    [sym__s2k_count] = STATE(197),
    [sym__compliance] = STATE(197),
    [sym__min_rsa_length] = STATE(197),
    [sym__debug_level] = STATE(197),
    [sym__debug] = STATE(197),
    [sym__debug_set_iobuf_size] = STATE(197),
    [sym__faked_system_time] = STATE(197),
    [sym__status_fd] = STATE(197),
    [sym__status_file] = STATE(197),
    [sym__logger_fd] = STATE(197),
    [sym__logger_file] = STATE(197),
    [sym__comment] = STATE(197),
    [sym__sig_notation] = STATE(269),
    [sym__cert_notation] = STATE(271),
    [sym__set_notation] = STATE(278),
    [sym__known_notation] = STATE(197),
    [sym__sig_policy_url] = STATE(197),
    [sym__cert_policy_url] = STATE(197),
    [sym__set_policy_url] = STATE(197),
    [sym__sig_keyserver_url] = STATE(197),
    [sym__set_filename] = STATE(197),
    [sym__cipher_algo] = STATE(197),
    [sym__digest_algo] = STATE(197),
    [sym__compress_algo] = STATE(197),
    [sym__cert_digest_algo] = STATE(197),
    [sym__disable_cipher_algo] = STATE(197),
    [sym__disable_pubkey_algo] = STATE(197),
    [sym__passphrase_repeat] = STATE(197),
    [sym__passphrase_fd] = STATE(197),
    [sym__passphrase_file] = STATE(197),
    [sym__passphrase] = STATE(197),
    [sym__pinentry_mode] = STATE(197),
    [sym__request_origin] = STATE(197),
    [sym__command_fd] = STATE(197),
    [sym__command_file] = STATE(197),
    [sym__weak_digest] = STATE(197),
    [sym__override_session_key] = STATE(197),
    [sym__override_session_key_fd] = STATE(197),
    [sym__default_sig_expire] = STATE(197),
    [sym__default_cert_expire] = STATE(197),
    [sym__default_new_key_algo] = STATE(197),
    [sym__default_preference_list] = STATE(197),
    [sym__default_keyserver_url] = STATE(197),
    [sym__chuid] = STATE(197),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_config_token1] = ACTIONS(211),
    [anon_sym_default_DASHrecipient] = ACTIONS(214),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(217),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(217),
    [anon_sym_verbose] = ACTIONS(217),
    [anon_sym_no_DASHtty] = ACTIONS(217),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(217),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(217),
    [anon_sym_enable_DASHdsa2] = ACTIONS(217),
    [anon_sym_disable_DASHdsa2] = ACTIONS(217),
    [anon_sym_no_DASHcompress] = ACTIONS(217),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(217),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(217),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(217),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(217),
    [anon_sym_always_DASHtrust] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(217),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(217),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(217),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(217),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(217),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(217),
    [anon_sym_no_DASHautostart] = ACTIONS(217),
    [anon_sym_lock_DASHonce] = ACTIONS(217),
    [anon_sym_lock_DASHmultiple] = ACTIONS(217),
    [anon_sym_lock_DASHnever] = ACTIONS(217),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(217),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(217),
    [anon_sym_no_DASHgreeting] = ACTIONS(217),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(217),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(217),
    [anon_sym_require_DASHsecmem] = ACTIONS(217),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(217),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(217),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(217),
    [anon_sym_expert] = ACTIONS(217),
    [anon_sym_no_DASHexpert] = ACTIONS(217),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(217),
    [anon_sym_no_DASHgroups] = ACTIONS(217),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(217),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(217),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(217),
    [anon_sym_armor] = ACTIONS(217),
    [anon_sym_no_DASHarmor] = ACTIONS(217),
    [anon_sym_with_DASHcolons] = ACTIONS(217),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(217),
    [anon_sym_with_DASHfingerprint] = ACTIONS(217),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(217),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(217),
    [anon_sym_with_DASHkeygrip] = ACTIONS(217),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(217),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(217),
    [anon_sym_with_DASHsecret] = ACTIONS(217),
    [anon_sym_textmode] = ACTIONS(217),
    [anon_sym_no_DASHtextmode] = ACTIONS(217),
    [anon_sym_force_DASHocb] = ACTIONS(217),
    [anon_sym_force_DASHaead] = ACTIONS(217),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(217),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(217),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(217),
    [anon_sym_gnupg] = ACTIONS(217),
    [anon_sym_openpgp] = ACTIONS(217),
    [anon_sym_rfc4880] = ACTIONS(214),
    [anon_sym_rfc4880bis] = ACTIONS(217),
    [anon_sym_rfc2440] = ACTIONS(217),
    [anon_sym_pgp7] = ACTIONS(217),
    [anon_sym_pgp8] = ACTIONS(217),
    [anon_sym_list_DASHonly] = ACTIONS(217),
    [anon_sym_interactive] = ACTIONS(217),
    [anon_sym_debug_DASHall] = ACTIONS(214),
    [anon_sym_debug_DASHiolbf] = ACTIONS(217),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(217),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(217),
    [anon_sym_full_DASHtimestrings] = ACTIONS(217),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(217),
    [anon_sym_log_DASHtime] = ACTIONS(217),
    [anon_sym_no_DASHcomments] = ACTIONS(217),
    [anon_sym_emit_DASHversion] = ACTIONS(217),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(217),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(217),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(217),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(217),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(217),
    [anon_sym_throw_DASHkeyids] = ACTIONS(217),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(217),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(217),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(217),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(217),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(217),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(217),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(217),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(217),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(217),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(217),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(217),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(217),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(217),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(217),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(217),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(217),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(217),
    [anon_sym_no_DASHkeyring] = ACTIONS(217),
    [anon_sym_skip_DASHverify] = ACTIONS(217),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(217),
    [anon_sym_list_DASHsignatures] = ACTIONS(217),
    [anon_sym_list_DASHsigs] = ACTIONS(217),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(217),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(217),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(217),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(217),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(217),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(217),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(217),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(217),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(217),
    [anon_sym_default_DASHkey] = ACTIONS(220),
    [anon_sym_list_DASHoptions] = ACTIONS(223),
    [anon_sym_verify_DASHoptions] = ACTIONS(226),
    [anon_sym_photo_DASHviewer] = ACTIONS(229),
    [anon_sym_exec_DASHpath] = ACTIONS(232),
    [anon_sym_keyring] = ACTIONS(235),
    [anon_sym_primary_DASHkeyring] = ACTIONS(238),
    [anon_sym_trustdb_DASHname] = ACTIONS(241),
    [anon_sym_display_DASHcharset] = ACTIONS(244),
    [sym__utf8_strings] = ACTIONS(217),
    [sym__no_utf8_strings] = ACTIONS(217),
    [anon_sym_compress_DASHlevel] = ACTIONS(247),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(250),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(253),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(256),
    [anon_sym_trusted_DASHkey] = ACTIONS(259),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(262),
    [anon_sym_trust_DASHmodel] = ACTIONS(265),
    [anon_sym_assert_DASHsigner] = ACTIONS(268),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(271),
    [anon_sym_keyid_DASHformat] = ACTIONS(274),
    [anon_sym_keyserver] = ACTIONS(277),
    [anon_sym_completes_DASHneeded] = ACTIONS(280),
    [anon_sym_marginals_DASHneeded] = ACTIONS(283),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(286),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(289),
    [anon_sym_agent_DASHprogram] = ACTIONS(292),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(295),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(298),
    [anon_sym_recipient] = ACTIONS(301),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(304),
    [anon_sym_recipient_DASHfile] = ACTIONS(307),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(310),
    [anon_sym_encrypt_DASHto] = ACTIONS(313),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(316),
    [anon_sym_group] = ACTIONS(319),
    [anon_sym_ungroup] = ACTIONS(322),
    [anon_sym_local_DASHuser] = ACTIONS(325),
    [anon_sym_sender] = ACTIONS(328),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(331),
    [anon_sym_output] = ACTIONS(334),
    [anon_sym_max_DASHoutput] = ACTIONS(337),
    [anon_sym_chunk_DASHsize] = ACTIONS(340),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(343),
    [anon_sym_key_DASHorigin] = ACTIONS(346),
    [anon_sym_import_DASHoptions] = ACTIONS(349),
    [anon_sym_export_DASHoptions] = ACTIONS(352),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(355),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(358),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(361),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(364),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(367),
    [anon_sym_s2k_DASHmode] = ACTIONS(370),
    [anon_sym_s2k_DASHcount] = ACTIONS(373),
    [anon_sym_compliance] = ACTIONS(376),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(379),
    [sym__require_compliance] = ACTIONS(217),
    [anon_sym_debug_DASHlevel] = ACTIONS(382),
    [anon_sym_debug] = ACTIONS(385),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(388),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(391),
    [anon_sym_status_DASHfd] = ACTIONS(394),
    [anon_sym_status_DASHfile] = ACTIONS(397),
    [anon_sym_logger_DASHfd] = ACTIONS(400),
    [anon_sym_logger_DASHfile] = ACTIONS(403),
    [anon_sym_log_DASHfile] = ACTIONS(403),
    [anon_sym_comment] = ACTIONS(406),
    [anon_sym_sig_DASHnotation] = ACTIONS(409),
    [anon_sym_cert_DASHnotation] = ACTIONS(412),
    [anon_sym_set_DASHnotation] = ACTIONS(415),
    [anon_sym_known_DASHnotation] = ACTIONS(418),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(421),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(424),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(427),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(430),
    [anon_sym_set_DASHfilename] = ACTIONS(433),
    [anon_sym_cipher_DASHalgo] = ACTIONS(436),
    [anon_sym_digest_DASHalgo] = ACTIONS(439),
    [anon_sym_compress_DASHalgo] = ACTIONS(442),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(445),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(448),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(451),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(454),
    [anon_sym_passphrase_DASHfd] = ACTIONS(457),
    [anon_sym_passphrase_DASHfile] = ACTIONS(460),
    [anon_sym_passphrase] = ACTIONS(463),
    [anon_sym_pinentry_DASHmode] = ACTIONS(466),
    [anon_sym_request_DASHorigin] = ACTIONS(469),
    [anon_sym_command_DASHfd] = ACTIONS(472),
    [anon_sym_command_DASHfile] = ACTIONS(475),
    [anon_sym_weak_DASHdigest] = ACTIONS(478),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(481),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(484),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(487),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(490),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(493),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(496),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(499),
    [anon_sym_chuid] = ACTIONS(502),
    [sym_comment] = ACTIONS(505),
    [sym__space] = ACTIONS(508),
  },
  [4] = {
    [sym_option] = STATE(203),
    [sym__default_key] = STATE(197),
    [sym__list_options] = STATE(197),
    [sym__verify_options] = STATE(197),
    [sym__photo_viewer] = STATE(197),
    [sym__exec_path] = STATE(197),
    [sym__keyring] = STATE(197),
    [sym__primary_keyring] = STATE(197),
    [sym__trustdb_name] = STATE(197),
    [sym__display_charset] = STATE(197),
    [sym__compress_level] = STATE(197),
    [sym__bzip2_compress_level] = STATE(197),
    [sym__default_cert_level] = STATE(197),
    [sym__min_cert_level] = STATE(197),
    [sym__trusted_key] = STATE(197),
    [sym__add_desig_revoker] = STATE(197),
    [sym__trust_model] = STATE(197),
    [sym__assert_signer] = STATE(197),
    [sym__auto_key_locate] = STATE(197),
    [sym__keyid_format] = STATE(197),
    [sym__keyserver] = STATE(197),
    [sym__completes_needed] = STATE(197),
    [sym__marginals_needed] = STATE(197),
    [sym__tofu_default_policy] = STATE(197),
    [sym__max_cert_depth] = STATE(197),
    [sym__agent_program] = STATE(197),
    [sym__dirmngr_program] = STATE(197),
    [sym__limit_card_insert_tries] = STATE(197),
    [sym__recipient] = STATE(197),
    [sym__hidden_recipient] = STATE(197),
    [sym__recipient_file] = STATE(197),
    [sym__hidden_recipient_file] = STATE(197),
    [sym__encrypt_to] = STATE(197),
    [sym__hidden_encrypt_to] = STATE(197),
    [sym__group] = STATE(260),
    [sym__ungroup] = STATE(197),
    [sym__local_user] = STATE(197),
    [sym__sender] = STATE(197),
    [sym__try_secret_name] = STATE(197),
    [sym__output] = STATE(197),
    [sym__max_output] = STATE(197),
    [sym__chunk_size] = STATE(197),
    [sym__input_size_hint] = STATE(197),
    [sym__key_origin] = STATE(197),
    [sym__import_options] = STATE(197),
    [sym__export_options] = STATE(197),
    [sym__personal_cipher_preferences] = STATE(197),
    [sym__personal_digest_preferences] = STATE(197),
    [sym__personal_compress_preferences] = STATE(197),
    [sym__s2k_cipher_algo] = STATE(197),
    [sym__s2k_digest_algo] = STATE(197),
    [sym__s2k_mode] = STATE(197),
    [sym__s2k_count] = STATE(197),
    [sym__compliance] = STATE(197),
    [sym__min_rsa_length] = STATE(197),
    [sym__debug_level] = STATE(197),
    [sym__debug] = STATE(197),
    [sym__debug_set_iobuf_size] = STATE(197),
    [sym__faked_system_time] = STATE(197),
    [sym__status_fd] = STATE(197),
    [sym__status_file] = STATE(197),
    [sym__logger_fd] = STATE(197),
    [sym__logger_file] = STATE(197),
    [sym__comment] = STATE(197),
    [sym__sig_notation] = STATE(269),
    [sym__cert_notation] = STATE(271),
    [sym__set_notation] = STATE(278),
    [sym__known_notation] = STATE(197),
    [sym__sig_policy_url] = STATE(197),
    [sym__cert_policy_url] = STATE(197),
    [sym__set_policy_url] = STATE(197),
    [sym__sig_keyserver_url] = STATE(197),
    [sym__set_filename] = STATE(197),
    [sym__cipher_algo] = STATE(197),
    [sym__digest_algo] = STATE(197),
    [sym__compress_algo] = STATE(197),
    [sym__cert_digest_algo] = STATE(197),
    [sym__disable_cipher_algo] = STATE(197),
    [sym__disable_pubkey_algo] = STATE(197),
    [sym__passphrase_repeat] = STATE(197),
    [sym__passphrase_fd] = STATE(197),
    [sym__passphrase_file] = STATE(197),
    [sym__passphrase] = STATE(197),
    [sym__pinentry_mode] = STATE(197),
    [sym__request_origin] = STATE(197),
    [sym__command_fd] = STATE(197),
    [sym__command_file] = STATE(197),
    [sym__weak_digest] = STATE(197),
    [sym__override_session_key] = STATE(197),
    [sym__override_session_key_fd] = STATE(197),
    [sym__default_sig_expire] = STATE(197),
    [sym__default_cert_expire] = STATE(197),
    [sym__default_new_key_algo] = STATE(197),
    [sym__default_preference_list] = STATE(197),
    [sym__default_keyserver_url] = STATE(197),
    [sym__chuid] = STATE(197),
    [aux_sym_config_token1] = ACTIONS(511),
    [anon_sym_default_DASHrecipient] = ACTIONS(7),
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
    [anon_sym_rfc4880] = ACTIONS(7),
    [anon_sym_rfc4880bis] = ACTIONS(9),
    [anon_sym_rfc2440] = ACTIONS(9),
    [anon_sym_pgp7] = ACTIONS(9),
    [anon_sym_pgp8] = ACTIONS(9),
    [anon_sym_list_DASHonly] = ACTIONS(9),
    [anon_sym_interactive] = ACTIONS(9),
    [anon_sym_debug_DASHall] = ACTIONS(7),
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
    [anon_sym_default_DASHkey] = ACTIONS(11),
    [anon_sym_list_DASHoptions] = ACTIONS(13),
    [anon_sym_verify_DASHoptions] = ACTIONS(15),
    [anon_sym_photo_DASHviewer] = ACTIONS(17),
    [anon_sym_exec_DASHpath] = ACTIONS(19),
    [anon_sym_keyring] = ACTIONS(21),
    [anon_sym_primary_DASHkeyring] = ACTIONS(23),
    [anon_sym_trustdb_DASHname] = ACTIONS(25),
    [anon_sym_display_DASHcharset] = ACTIONS(27),
    [sym__utf8_strings] = ACTIONS(9),
    [sym__no_utf8_strings] = ACTIONS(9),
    [anon_sym_compress_DASHlevel] = ACTIONS(29),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(31),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(33),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(35),
    [anon_sym_trusted_DASHkey] = ACTIONS(37),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(39),
    [anon_sym_trust_DASHmodel] = ACTIONS(41),
    [anon_sym_assert_DASHsigner] = ACTIONS(43),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(45),
    [anon_sym_keyid_DASHformat] = ACTIONS(47),
    [anon_sym_keyserver] = ACTIONS(49),
    [anon_sym_completes_DASHneeded] = ACTIONS(51),
    [anon_sym_marginals_DASHneeded] = ACTIONS(53),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(55),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(57),
    [anon_sym_agent_DASHprogram] = ACTIONS(59),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(61),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(63),
    [anon_sym_recipient] = ACTIONS(65),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(67),
    [anon_sym_recipient_DASHfile] = ACTIONS(69),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(71),
    [anon_sym_encrypt_DASHto] = ACTIONS(73),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(75),
    [anon_sym_group] = ACTIONS(77),
    [anon_sym_ungroup] = ACTIONS(79),
    [anon_sym_local_DASHuser] = ACTIONS(81),
    [anon_sym_sender] = ACTIONS(83),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(85),
    [anon_sym_output] = ACTIONS(87),
    [anon_sym_max_DASHoutput] = ACTIONS(89),
    [anon_sym_chunk_DASHsize] = ACTIONS(91),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(93),
    [anon_sym_key_DASHorigin] = ACTIONS(95),
    [anon_sym_import_DASHoptions] = ACTIONS(97),
    [anon_sym_export_DASHoptions] = ACTIONS(99),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(101),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(103),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(105),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(107),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(109),
    [anon_sym_s2k_DASHmode] = ACTIONS(111),
    [anon_sym_s2k_DASHcount] = ACTIONS(113),
    [anon_sym_compliance] = ACTIONS(115),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(117),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(119),
    [anon_sym_debug] = ACTIONS(121),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(123),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(125),
    [anon_sym_status_DASHfd] = ACTIONS(127),
    [anon_sym_status_DASHfile] = ACTIONS(129),
    [anon_sym_logger_DASHfd] = ACTIONS(131),
    [anon_sym_logger_DASHfile] = ACTIONS(133),
    [anon_sym_log_DASHfile] = ACTIONS(133),
    [anon_sym_comment] = ACTIONS(135),
    [anon_sym_sig_DASHnotation] = ACTIONS(137),
    [anon_sym_cert_DASHnotation] = ACTIONS(139),
    [anon_sym_set_DASHnotation] = ACTIONS(141),
    [anon_sym_known_DASHnotation] = ACTIONS(143),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(145),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(147),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(149),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(151),
    [anon_sym_set_DASHfilename] = ACTIONS(153),
    [anon_sym_cipher_DASHalgo] = ACTIONS(155),
    [anon_sym_digest_DASHalgo] = ACTIONS(157),
    [anon_sym_compress_DASHalgo] = ACTIONS(159),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(161),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(163),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(165),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(167),
    [anon_sym_passphrase_DASHfd] = ACTIONS(169),
    [anon_sym_passphrase_DASHfile] = ACTIONS(171),
    [anon_sym_passphrase] = ACTIONS(173),
    [anon_sym_pinentry_DASHmode] = ACTIONS(175),
    [anon_sym_request_DASHorigin] = ACTIONS(177),
    [anon_sym_command_DASHfd] = ACTIONS(179),
    [anon_sym_command_DASHfile] = ACTIONS(181),
    [anon_sym_weak_DASHdigest] = ACTIONS(183),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(185),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(187),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(189),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(191),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(193),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(195),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(197),
    [anon_sym_chuid] = ACTIONS(199),
    [sym_comment] = ACTIONS(513),
    [sym__space] = ACTIONS(515),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [aux_sym_config_token1] = ACTIONS(517),
    [anon_sym_default_DASHrecipient] = ACTIONS(519),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(517),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(517),
    [anon_sym_verbose] = ACTIONS(517),
    [anon_sym_no_DASHtty] = ACTIONS(517),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(517),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(517),
    [anon_sym_enable_DASHdsa2] = ACTIONS(517),
    [anon_sym_disable_DASHdsa2] = ACTIONS(517),
    [anon_sym_no_DASHcompress] = ACTIONS(517),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(517),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(517),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(517),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(517),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(517),
    [anon_sym_always_DASHtrust] = ACTIONS(517),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(517),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(517),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(517),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(517),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(517),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(517),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(517),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(517),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(517),
    [anon_sym_no_DASHautostart] = ACTIONS(517),
    [anon_sym_lock_DASHonce] = ACTIONS(517),
    [anon_sym_lock_DASHmultiple] = ACTIONS(517),
    [anon_sym_lock_DASHnever] = ACTIONS(517),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(517),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(517),
    [anon_sym_no_DASHgreeting] = ACTIONS(517),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(517),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(517),
    [anon_sym_require_DASHsecmem] = ACTIONS(517),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(517),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(517),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(517),
    [anon_sym_expert] = ACTIONS(517),
    [anon_sym_no_DASHexpert] = ACTIONS(517),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(517),
    [anon_sym_no_DASHgroups] = ACTIONS(517),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(517),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(517),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(517),
    [anon_sym_armor] = ACTIONS(517),
    [anon_sym_no_DASHarmor] = ACTIONS(517),
    [anon_sym_with_DASHcolons] = ACTIONS(517),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(517),
    [anon_sym_with_DASHfingerprint] = ACTIONS(517),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(517),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(517),
    [anon_sym_with_DASHkeygrip] = ACTIONS(517),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(517),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(517),
    [anon_sym_with_DASHsecret] = ACTIONS(517),
    [anon_sym_textmode] = ACTIONS(517),
    [anon_sym_no_DASHtextmode] = ACTIONS(517),
    [anon_sym_force_DASHocb] = ACTIONS(517),
    [anon_sym_force_DASHaead] = ACTIONS(517),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(517),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(517),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(517),
    [anon_sym_gnupg] = ACTIONS(517),
    [anon_sym_openpgp] = ACTIONS(517),
    [anon_sym_rfc4880] = ACTIONS(519),
    [anon_sym_rfc4880bis] = ACTIONS(517),
    [anon_sym_rfc2440] = ACTIONS(517),
    [anon_sym_pgp7] = ACTIONS(517),
    [anon_sym_pgp8] = ACTIONS(517),
    [anon_sym_list_DASHonly] = ACTIONS(517),
    [anon_sym_interactive] = ACTIONS(517),
    [anon_sym_debug_DASHall] = ACTIONS(519),
    [anon_sym_debug_DASHiolbf] = ACTIONS(517),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(517),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(517),
    [anon_sym_full_DASHtimestrings] = ACTIONS(517),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(517),
    [anon_sym_log_DASHtime] = ACTIONS(517),
    [anon_sym_no_DASHcomments] = ACTIONS(517),
    [anon_sym_emit_DASHversion] = ACTIONS(517),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(517),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(517),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(517),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(517),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(517),
    [anon_sym_throw_DASHkeyids] = ACTIONS(517),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(517),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(517),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(517),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(517),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(517),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(517),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(517),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(517),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(517),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(517),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(517),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(517),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(517),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(517),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(517),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(517),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(517),
    [anon_sym_no_DASHkeyring] = ACTIONS(517),
    [anon_sym_skip_DASHverify] = ACTIONS(517),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(517),
    [anon_sym_list_DASHsignatures] = ACTIONS(517),
    [anon_sym_list_DASHsigs] = ACTIONS(517),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(517),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(517),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(517),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(517),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(517),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(517),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(517),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(517),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(517),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(517),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(517),
    [anon_sym_default_DASHkey] = ACTIONS(519),
    [anon_sym_list_DASHoptions] = ACTIONS(517),
    [anon_sym_verify_DASHoptions] = ACTIONS(517),
    [anon_sym_photo_DASHviewer] = ACTIONS(517),
    [anon_sym_exec_DASHpath] = ACTIONS(517),
    [anon_sym_keyring] = ACTIONS(517),
    [anon_sym_primary_DASHkeyring] = ACTIONS(517),
    [anon_sym_trustdb_DASHname] = ACTIONS(517),
    [anon_sym_display_DASHcharset] = ACTIONS(517),
    [sym__utf8_strings] = ACTIONS(517),
    [sym__no_utf8_strings] = ACTIONS(517),
    [anon_sym_compress_DASHlevel] = ACTIONS(517),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(517),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(517),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(517),
    [anon_sym_trusted_DASHkey] = ACTIONS(517),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(517),
    [anon_sym_trust_DASHmodel] = ACTIONS(517),
    [anon_sym_assert_DASHsigner] = ACTIONS(517),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(517),
    [anon_sym_keyid_DASHformat] = ACTIONS(517),
    [anon_sym_keyserver] = ACTIONS(517),
    [anon_sym_completes_DASHneeded] = ACTIONS(517),
    [anon_sym_marginals_DASHneeded] = ACTIONS(517),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(517),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(517),
    [anon_sym_agent_DASHprogram] = ACTIONS(517),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(517),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(517),
    [anon_sym_recipient] = ACTIONS(519),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(519),
    [anon_sym_recipient_DASHfile] = ACTIONS(517),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(517),
    [anon_sym_encrypt_DASHto] = ACTIONS(517),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(517),
    [anon_sym_group] = ACTIONS(517),
    [anon_sym_ungroup] = ACTIONS(517),
    [anon_sym_local_DASHuser] = ACTIONS(517),
    [anon_sym_sender] = ACTIONS(517),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(517),
    [anon_sym_output] = ACTIONS(517),
    [anon_sym_max_DASHoutput] = ACTIONS(517),
    [anon_sym_chunk_DASHsize] = ACTIONS(517),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(517),
    [anon_sym_key_DASHorigin] = ACTIONS(517),
    [anon_sym_import_DASHoptions] = ACTIONS(517),
    [anon_sym_export_DASHoptions] = ACTIONS(517),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(517),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(517),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(517),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(517),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(517),
    [anon_sym_s2k_DASHmode] = ACTIONS(517),
    [anon_sym_s2k_DASHcount] = ACTIONS(517),
    [anon_sym_compliance] = ACTIONS(517),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(517),
    [sym__require_compliance] = ACTIONS(517),
    [anon_sym_debug_DASHlevel] = ACTIONS(517),
    [anon_sym_debug] = ACTIONS(519),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(517),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(517),
    [anon_sym_status_DASHfd] = ACTIONS(517),
    [anon_sym_status_DASHfile] = ACTIONS(517),
    [anon_sym_logger_DASHfd] = ACTIONS(517),
    [anon_sym_logger_DASHfile] = ACTIONS(517),
    [anon_sym_log_DASHfile] = ACTIONS(517),
    [anon_sym_comment] = ACTIONS(517),
    [anon_sym_sig_DASHnotation] = ACTIONS(517),
    [anon_sym_cert_DASHnotation] = ACTIONS(517),
    [anon_sym_set_DASHnotation] = ACTIONS(517),
    [anon_sym_known_DASHnotation] = ACTIONS(517),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(517),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(517),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(517),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(517),
    [anon_sym_set_DASHfilename] = ACTIONS(517),
    [anon_sym_cipher_DASHalgo] = ACTIONS(517),
    [anon_sym_digest_DASHalgo] = ACTIONS(517),
    [anon_sym_compress_DASHalgo] = ACTIONS(517),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(517),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(517),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(517),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(517),
    [anon_sym_passphrase_DASHfd] = ACTIONS(517),
    [anon_sym_passphrase_DASHfile] = ACTIONS(517),
    [anon_sym_passphrase] = ACTIONS(519),
    [anon_sym_pinentry_DASHmode] = ACTIONS(517),
    [anon_sym_request_DASHorigin] = ACTIONS(517),
    [anon_sym_command_DASHfd] = ACTIONS(517),
    [anon_sym_command_DASHfile] = ACTIONS(517),
    [anon_sym_weak_DASHdigest] = ACTIONS(517),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(519),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(517),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(517),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(517),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(517),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(517),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(517),
    [anon_sym_chuid] = ACTIONS(517),
    [sym_comment] = ACTIONS(517),
    [sym__space] = ACTIONS(517),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [aux_sym_config_token1] = ACTIONS(521),
    [anon_sym_default_DASHrecipient] = ACTIONS(523),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(521),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(521),
    [anon_sym_verbose] = ACTIONS(521),
    [anon_sym_no_DASHtty] = ACTIONS(521),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(521),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(521),
    [anon_sym_enable_DASHdsa2] = ACTIONS(521),
    [anon_sym_disable_DASHdsa2] = ACTIONS(521),
    [anon_sym_no_DASHcompress] = ACTIONS(521),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(521),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(521),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(521),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(521),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(521),
    [anon_sym_always_DASHtrust] = ACTIONS(521),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(521),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(521),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(521),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(521),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(521),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(521),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(521),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(521),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(521),
    [anon_sym_no_DASHautostart] = ACTIONS(521),
    [anon_sym_lock_DASHonce] = ACTIONS(521),
    [anon_sym_lock_DASHmultiple] = ACTIONS(521),
    [anon_sym_lock_DASHnever] = ACTIONS(521),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(521),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(521),
    [anon_sym_no_DASHgreeting] = ACTIONS(521),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(521),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(521),
    [anon_sym_require_DASHsecmem] = ACTIONS(521),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(521),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(521),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(521),
    [anon_sym_expert] = ACTIONS(521),
    [anon_sym_no_DASHexpert] = ACTIONS(521),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(521),
    [anon_sym_no_DASHgroups] = ACTIONS(521),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(521),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(521),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(521),
    [anon_sym_armor] = ACTIONS(521),
    [anon_sym_no_DASHarmor] = ACTIONS(521),
    [anon_sym_with_DASHcolons] = ACTIONS(521),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(521),
    [anon_sym_with_DASHfingerprint] = ACTIONS(521),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(521),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(521),
    [anon_sym_with_DASHkeygrip] = ACTIONS(521),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(521),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(521),
    [anon_sym_with_DASHsecret] = ACTIONS(521),
    [anon_sym_textmode] = ACTIONS(521),
    [anon_sym_no_DASHtextmode] = ACTIONS(521),
    [anon_sym_force_DASHocb] = ACTIONS(521),
    [anon_sym_force_DASHaead] = ACTIONS(521),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(521),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(521),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(521),
    [anon_sym_gnupg] = ACTIONS(521),
    [anon_sym_openpgp] = ACTIONS(521),
    [anon_sym_rfc4880] = ACTIONS(523),
    [anon_sym_rfc4880bis] = ACTIONS(521),
    [anon_sym_rfc2440] = ACTIONS(521),
    [anon_sym_pgp7] = ACTIONS(521),
    [anon_sym_pgp8] = ACTIONS(521),
    [anon_sym_list_DASHonly] = ACTIONS(521),
    [anon_sym_interactive] = ACTIONS(521),
    [anon_sym_debug_DASHall] = ACTIONS(523),
    [anon_sym_debug_DASHiolbf] = ACTIONS(521),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(521),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(521),
    [anon_sym_full_DASHtimestrings] = ACTIONS(521),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(521),
    [anon_sym_log_DASHtime] = ACTIONS(521),
    [anon_sym_no_DASHcomments] = ACTIONS(521),
    [anon_sym_emit_DASHversion] = ACTIONS(521),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(521),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(521),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(521),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(521),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(521),
    [anon_sym_throw_DASHkeyids] = ACTIONS(521),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(521),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(521),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(521),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(521),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(521),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(521),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(521),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(521),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(521),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(521),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(521),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(521),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(521),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(521),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(521),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(521),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(521),
    [anon_sym_no_DASHkeyring] = ACTIONS(521),
    [anon_sym_skip_DASHverify] = ACTIONS(521),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(521),
    [anon_sym_list_DASHsignatures] = ACTIONS(521),
    [anon_sym_list_DASHsigs] = ACTIONS(521),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(521),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(521),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(521),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(521),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(521),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(521),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(521),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(521),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(521),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(521),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(521),
    [anon_sym_default_DASHkey] = ACTIONS(523),
    [anon_sym_list_DASHoptions] = ACTIONS(521),
    [anon_sym_verify_DASHoptions] = ACTIONS(521),
    [anon_sym_photo_DASHviewer] = ACTIONS(521),
    [anon_sym_exec_DASHpath] = ACTIONS(521),
    [anon_sym_keyring] = ACTIONS(521),
    [anon_sym_primary_DASHkeyring] = ACTIONS(521),
    [anon_sym_trustdb_DASHname] = ACTIONS(521),
    [anon_sym_display_DASHcharset] = ACTIONS(521),
    [sym__utf8_strings] = ACTIONS(521),
    [sym__no_utf8_strings] = ACTIONS(521),
    [anon_sym_compress_DASHlevel] = ACTIONS(521),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(521),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(521),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(521),
    [anon_sym_trusted_DASHkey] = ACTIONS(521),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(521),
    [anon_sym_trust_DASHmodel] = ACTIONS(521),
    [anon_sym_assert_DASHsigner] = ACTIONS(521),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(521),
    [anon_sym_keyid_DASHformat] = ACTIONS(521),
    [anon_sym_keyserver] = ACTIONS(521),
    [anon_sym_completes_DASHneeded] = ACTIONS(521),
    [anon_sym_marginals_DASHneeded] = ACTIONS(521),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(521),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(521),
    [anon_sym_agent_DASHprogram] = ACTIONS(521),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(521),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(521),
    [anon_sym_recipient] = ACTIONS(523),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(523),
    [anon_sym_recipient_DASHfile] = ACTIONS(521),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(521),
    [anon_sym_encrypt_DASHto] = ACTIONS(521),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(521),
    [anon_sym_group] = ACTIONS(521),
    [anon_sym_ungroup] = ACTIONS(521),
    [anon_sym_local_DASHuser] = ACTIONS(521),
    [anon_sym_sender] = ACTIONS(521),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(521),
    [anon_sym_output] = ACTIONS(521),
    [anon_sym_max_DASHoutput] = ACTIONS(521),
    [anon_sym_chunk_DASHsize] = ACTIONS(521),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(521),
    [anon_sym_key_DASHorigin] = ACTIONS(521),
    [anon_sym_import_DASHoptions] = ACTIONS(521),
    [anon_sym_export_DASHoptions] = ACTIONS(521),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(521),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(521),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(521),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(521),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(521),
    [anon_sym_s2k_DASHmode] = ACTIONS(521),
    [anon_sym_s2k_DASHcount] = ACTIONS(521),
    [anon_sym_compliance] = ACTIONS(521),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(521),
    [sym__require_compliance] = ACTIONS(521),
    [anon_sym_debug_DASHlevel] = ACTIONS(521),
    [anon_sym_debug] = ACTIONS(523),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(521),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(521),
    [anon_sym_status_DASHfd] = ACTIONS(521),
    [anon_sym_status_DASHfile] = ACTIONS(521),
    [anon_sym_logger_DASHfd] = ACTIONS(521),
    [anon_sym_logger_DASHfile] = ACTIONS(521),
    [anon_sym_log_DASHfile] = ACTIONS(521),
    [anon_sym_comment] = ACTIONS(521),
    [anon_sym_sig_DASHnotation] = ACTIONS(521),
    [anon_sym_cert_DASHnotation] = ACTIONS(521),
    [anon_sym_set_DASHnotation] = ACTIONS(521),
    [anon_sym_known_DASHnotation] = ACTIONS(521),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(521),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(521),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(521),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(521),
    [anon_sym_set_DASHfilename] = ACTIONS(521),
    [anon_sym_cipher_DASHalgo] = ACTIONS(521),
    [anon_sym_digest_DASHalgo] = ACTIONS(521),
    [anon_sym_compress_DASHalgo] = ACTIONS(521),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(521),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(521),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(521),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(521),
    [anon_sym_passphrase_DASHfd] = ACTIONS(521),
    [anon_sym_passphrase_DASHfile] = ACTIONS(521),
    [anon_sym_passphrase] = ACTIONS(523),
    [anon_sym_pinentry_DASHmode] = ACTIONS(521),
    [anon_sym_request_DASHorigin] = ACTIONS(521),
    [anon_sym_command_DASHfd] = ACTIONS(521),
    [anon_sym_command_DASHfile] = ACTIONS(521),
    [anon_sym_weak_DASHdigest] = ACTIONS(521),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(523),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(521),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(521),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(521),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(521),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(521),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(521),
    [anon_sym_chuid] = ACTIONS(521),
    [sym_comment] = ACTIONS(521),
    [sym__space] = ACTIONS(521),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_config_token1] = ACTIONS(209),
    [anon_sym_default_DASHrecipient] = ACTIONS(525),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(209),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(209),
    [anon_sym_verbose] = ACTIONS(209),
    [anon_sym_no_DASHtty] = ACTIONS(209),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(209),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(209),
    [anon_sym_enable_DASHdsa2] = ACTIONS(209),
    [anon_sym_disable_DASHdsa2] = ACTIONS(209),
    [anon_sym_no_DASHcompress] = ACTIONS(209),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(209),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(209),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(209),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(209),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(209),
    [anon_sym_always_DASHtrust] = ACTIONS(209),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(209),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(209),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(209),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(209),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(209),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(209),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(209),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(209),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(209),
    [anon_sym_no_DASHautostart] = ACTIONS(209),
    [anon_sym_lock_DASHonce] = ACTIONS(209),
    [anon_sym_lock_DASHmultiple] = ACTIONS(209),
    [anon_sym_lock_DASHnever] = ACTIONS(209),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(209),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(209),
    [anon_sym_no_DASHgreeting] = ACTIONS(209),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(209),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(209),
    [anon_sym_require_DASHsecmem] = ACTIONS(209),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(209),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(209),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(209),
    [anon_sym_expert] = ACTIONS(209),
    [anon_sym_no_DASHexpert] = ACTIONS(209),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(209),
    [anon_sym_no_DASHgroups] = ACTIONS(209),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(209),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(209),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(209),
    [anon_sym_armor] = ACTIONS(209),
    [anon_sym_no_DASHarmor] = ACTIONS(209),
    [anon_sym_with_DASHcolons] = ACTIONS(209),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(209),
    [anon_sym_with_DASHfingerprint] = ACTIONS(209),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(209),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(209),
    [anon_sym_with_DASHkeygrip] = ACTIONS(209),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(209),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(209),
    [anon_sym_with_DASHsecret] = ACTIONS(209),
    [anon_sym_textmode] = ACTIONS(209),
    [anon_sym_no_DASHtextmode] = ACTIONS(209),
    [anon_sym_force_DASHocb] = ACTIONS(209),
    [anon_sym_force_DASHaead] = ACTIONS(209),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(209),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(209),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(209),
    [anon_sym_gnupg] = ACTIONS(209),
    [anon_sym_openpgp] = ACTIONS(209),
    [anon_sym_rfc4880] = ACTIONS(525),
    [anon_sym_rfc4880bis] = ACTIONS(209),
    [anon_sym_rfc2440] = ACTIONS(209),
    [anon_sym_pgp7] = ACTIONS(209),
    [anon_sym_pgp8] = ACTIONS(209),
    [anon_sym_list_DASHonly] = ACTIONS(209),
    [anon_sym_interactive] = ACTIONS(209),
    [anon_sym_debug_DASHall] = ACTIONS(525),
    [anon_sym_debug_DASHiolbf] = ACTIONS(209),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(209),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(209),
    [anon_sym_full_DASHtimestrings] = ACTIONS(209),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(209),
    [anon_sym_log_DASHtime] = ACTIONS(209),
    [anon_sym_no_DASHcomments] = ACTIONS(209),
    [anon_sym_emit_DASHversion] = ACTIONS(209),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(209),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(209),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(209),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(209),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(209),
    [anon_sym_throw_DASHkeyids] = ACTIONS(209),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(209),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(209),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(209),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(209),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(209),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(209),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(209),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(209),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(209),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(209),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(209),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(209),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(209),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(209),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(209),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(209),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(209),
    [anon_sym_no_DASHkeyring] = ACTIONS(209),
    [anon_sym_skip_DASHverify] = ACTIONS(209),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(209),
    [anon_sym_list_DASHsignatures] = ACTIONS(209),
    [anon_sym_list_DASHsigs] = ACTIONS(209),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(209),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(209),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(209),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(209),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(209),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(209),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(209),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(209),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(209),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(209),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(209),
    [anon_sym_default_DASHkey] = ACTIONS(525),
    [anon_sym_list_DASHoptions] = ACTIONS(209),
    [anon_sym_verify_DASHoptions] = ACTIONS(209),
    [anon_sym_photo_DASHviewer] = ACTIONS(209),
    [anon_sym_exec_DASHpath] = ACTIONS(209),
    [anon_sym_keyring] = ACTIONS(209),
    [anon_sym_primary_DASHkeyring] = ACTIONS(209),
    [anon_sym_trustdb_DASHname] = ACTIONS(209),
    [anon_sym_display_DASHcharset] = ACTIONS(209),
    [sym__utf8_strings] = ACTIONS(209),
    [sym__no_utf8_strings] = ACTIONS(209),
    [anon_sym_compress_DASHlevel] = ACTIONS(209),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(209),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(209),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(209),
    [anon_sym_trusted_DASHkey] = ACTIONS(209),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(209),
    [anon_sym_trust_DASHmodel] = ACTIONS(209),
    [anon_sym_assert_DASHsigner] = ACTIONS(209),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(209),
    [anon_sym_keyid_DASHformat] = ACTIONS(209),
    [anon_sym_keyserver] = ACTIONS(209),
    [anon_sym_completes_DASHneeded] = ACTIONS(209),
    [anon_sym_marginals_DASHneeded] = ACTIONS(209),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(209),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(209),
    [anon_sym_agent_DASHprogram] = ACTIONS(209),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(209),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(209),
    [anon_sym_recipient] = ACTIONS(525),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(525),
    [anon_sym_recipient_DASHfile] = ACTIONS(209),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(209),
    [anon_sym_encrypt_DASHto] = ACTIONS(209),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(209),
    [anon_sym_group] = ACTIONS(209),
    [anon_sym_ungroup] = ACTIONS(209),
    [anon_sym_local_DASHuser] = ACTIONS(209),
    [anon_sym_sender] = ACTIONS(209),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(209),
    [anon_sym_output] = ACTIONS(209),
    [anon_sym_max_DASHoutput] = ACTIONS(209),
    [anon_sym_chunk_DASHsize] = ACTIONS(209),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(209),
    [anon_sym_key_DASHorigin] = ACTIONS(209),
    [anon_sym_import_DASHoptions] = ACTIONS(209),
    [anon_sym_export_DASHoptions] = ACTIONS(209),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(209),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(209),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(209),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(209),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(209),
    [anon_sym_s2k_DASHmode] = ACTIONS(209),
    [anon_sym_s2k_DASHcount] = ACTIONS(209),
    [anon_sym_compliance] = ACTIONS(209),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(209),
    [sym__require_compliance] = ACTIONS(209),
    [anon_sym_debug_DASHlevel] = ACTIONS(209),
    [anon_sym_debug] = ACTIONS(525),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(209),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(209),
    [anon_sym_status_DASHfd] = ACTIONS(209),
    [anon_sym_status_DASHfile] = ACTIONS(209),
    [anon_sym_logger_DASHfd] = ACTIONS(209),
    [anon_sym_logger_DASHfile] = ACTIONS(209),
    [anon_sym_log_DASHfile] = ACTIONS(209),
    [anon_sym_comment] = ACTIONS(209),
    [anon_sym_sig_DASHnotation] = ACTIONS(209),
    [anon_sym_cert_DASHnotation] = ACTIONS(209),
    [anon_sym_set_DASHnotation] = ACTIONS(209),
    [anon_sym_known_DASHnotation] = ACTIONS(209),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(209),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(209),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(209),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(209),
    [anon_sym_set_DASHfilename] = ACTIONS(209),
    [anon_sym_cipher_DASHalgo] = ACTIONS(209),
    [anon_sym_digest_DASHalgo] = ACTIONS(209),
    [anon_sym_compress_DASHalgo] = ACTIONS(209),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(209),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(209),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(209),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(209),
    [anon_sym_passphrase_DASHfd] = ACTIONS(209),
    [anon_sym_passphrase_DASHfile] = ACTIONS(209),
    [anon_sym_passphrase] = ACTIONS(525),
    [anon_sym_pinentry_DASHmode] = ACTIONS(209),
    [anon_sym_request_DASHorigin] = ACTIONS(209),
    [anon_sym_command_DASHfd] = ACTIONS(209),
    [anon_sym_command_DASHfile] = ACTIONS(209),
    [anon_sym_weak_DASHdigest] = ACTIONS(209),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(525),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(209),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(209),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(209),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(209),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(209),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(209),
    [anon_sym_chuid] = ACTIONS(209),
    [sym_comment] = ACTIONS(209),
    [sym__space] = ACTIONS(209),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(527), 1,
      aux_sym__command_token1,
    ACTIONS(529), 1,
      anon_sym_DQUOTE,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    ACTIONS(533), 1,
      aux_sym__command_format_token1,
    STATE(18), 1,
      aux_sym__command_repeat1,
    STATE(92), 1,
      sym__command_format,
    STATE(211), 1,
      sym__command,
  [22] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(535), 2,
      aux_sym_config_token1,
      sym__space,
  [39] = 5,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
    ACTIONS(543), 1,
      aux_sym__command_token2,
    STATE(14), 1,
      aux_sym__command_repeat2,
    STATE(85), 1,
      sym__command_format,
    ACTIONS(545), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [56] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(547), 2,
      aux_sym_config_token1,
      sym__space,
  [73] = 5,
    ACTIONS(551), 1,
      aux_sym__notation_token1,
    ACTIONS(554), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(549), 2,
      aux_sym_config_token1,
      sym__space,
  [90] = 5,
    ACTIONS(541), 1,
      anon_sym_SQUOTE,
    ACTIONS(559), 1,
      aux_sym__command_token3,
    STATE(15), 1,
      aux_sym__command_repeat3,
    STATE(55), 1,
      sym__command_format,
    ACTIONS(557), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [107] = 5,
    ACTIONS(561), 1,
      anon_sym_DQUOTE,
    ACTIONS(563), 1,
      aux_sym__command_token2,
    STATE(14), 1,
      aux_sym__command_repeat2,
    STATE(85), 1,
      sym__command_format,
    ACTIONS(566), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [124] = 5,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
    ACTIONS(574), 1,
      aux_sym__command_token3,
    STATE(15), 1,
      aux_sym__command_repeat3,
    STATE(55), 1,
      sym__command_format,
    ACTIONS(569), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [141] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(577), 2,
      aux_sym_config_token1,
      sym__space,
  [158] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(579), 2,
      aux_sym_config_token1,
      sym__space,
  [175] = 5,
    ACTIONS(527), 1,
      aux_sym__command_token1,
    ACTIONS(533), 1,
      aux_sym__command_format_token1,
    STATE(23), 1,
      aux_sym__command_repeat1,
    STATE(92), 1,
      sym__command_format,
    ACTIONS(581), 2,
      aux_sym_config_token1,
      sym__space,
  [192] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(583), 2,
      aux_sym_config_token1,
      sym__space,
  [209] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(585), 2,
      aux_sym_config_token1,
      sym__space,
  [226] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(587), 2,
      aux_sym_config_token1,
      sym__space,
  [243] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(12), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
    ACTIONS(589), 2,
      aux_sym_config_token1,
      sym__space,
  [260] = 5,
    ACTIONS(593), 1,
      aux_sym__command_token1,
    ACTIONS(596), 1,
      aux_sym__command_format_token1,
    STATE(23), 1,
      aux_sym__command_repeat1,
    STATE(92), 1,
      sym__command_format,
    ACTIONS(591), 2,
      aux_sym_config_token1,
      sym__space,
  [277] = 5,
    ACTIONS(599), 1,
      aux_sym_config_token1,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      sym__space,
    STATE(66), 1,
      aux_sym__personal_compress_preferences_repeat1,
    STATE(165), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [293] = 5,
    ACTIONS(605), 1,
      aux_sym_config_token1,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      sym__space,
    STATE(59), 1,
      aux_sym__default_new_key_algo_repeat1,
    STATE(167), 1,
      aux_sym__default_new_key_algo_repeat2,
  [309] = 5,
    ACTIONS(611), 1,
      aux_sym_config_token1,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      sym__space,
    STATE(68), 1,
      aux_sym__personal_digest_preferences_repeat1,
    STATE(164), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [325] = 5,
    ACTIONS(617), 1,
      aux_sym_config_token1,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      sym__space,
    STATE(64), 1,
      aux_sym__debug_repeat1,
    STATE(166), 1,
      aux_sym__debug_repeat2,
  [341] = 5,
    ACTIONS(623), 1,
      anon_sym_EQ,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [357] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(629), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [373] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    ACTIONS(631), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [389] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(633), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [405] = 5,
    ACTIONS(635), 1,
      aux_sym_config_token1,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      sym__space,
    STATE(72), 1,
      aux_sym__export_options_repeat1,
    STATE(162), 1,
      aux_sym__export_options_repeat2,
  [421] = 5,
    ACTIONS(641), 1,
      aux_sym_config_token1,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      sym__space,
    STATE(74), 1,
      aux_sym__import_options_repeat1,
    STATE(161), 1,
      aux_sym__import_options_repeat2,
  [437] = 5,
    ACTIONS(647), 1,
      aux_sym_config_token1,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      sym__space,
    STATE(77), 1,
      aux_sym__auto_key_locate_repeat1,
    STATE(159), 1,
      aux_sym__auto_key_locate_repeat2,
  [453] = 4,
    ACTIONS(559), 1,
      aux_sym__command_token3,
    STATE(13), 1,
      aux_sym__command_repeat3,
    STATE(55), 1,
      sym__command_format,
    ACTIONS(557), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [467] = 4,
    ACTIONS(543), 1,
      aux_sym__command_token2,
    STATE(10), 1,
      aux_sym__command_repeat2,
    STATE(85), 1,
      sym__command_format,
    ACTIONS(545), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [481] = 5,
    ACTIONS(653), 1,
      aux_sym_config_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      sym__space,
    STATE(87), 1,
      aux_sym__verify_options_repeat1,
    STATE(152), 1,
      aux_sym__verify_options_repeat2,
  [497] = 5,
    ACTIONS(659), 1,
      aux_sym_config_token1,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      sym__space,
    STATE(89), 1,
      aux_sym__list_options_repeat1,
    STATE(151), 1,
      aux_sym__list_options_repeat2,
  [513] = 5,
    ACTIONS(665), 1,
      aux_sym_config_token1,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      sym__space,
    STATE(70), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    STATE(163), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [529] = 5,
    ACTIONS(671), 1,
      aux_sym_config_token1,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    ACTIONS(675), 1,
      sym__space,
    STATE(57), 1,
      aux_sym__default_preference_list_repeat1,
    STATE(138), 1,
      aux_sym__default_preference_list_repeat2,
  [545] = 5,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(681), 1,
      sym_number,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(198), 1,
      sym_string,
  [561] = 3,
    ACTIONS(685), 1,
      sym__pubkey_algo_value,
    STATE(40), 1,
      sym__default_preference_value,
    ACTIONS(687), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [573] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(689), 1,
      anon_sym_BANG,
    STATE(28), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [589] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(691), 1,
      anon_sym_BANG,
    STATE(29), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [605] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(693), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [621] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(695), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [637] = 3,
    ACTIONS(685), 1,
      sym__pubkey_algo_value,
    STATE(173), 1,
      sym__default_preference_value,
    ACTIONS(687), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [649] = 3,
    ACTIONS(685), 1,
      sym__pubkey_algo_value,
    STATE(158), 1,
      sym__default_preference_value,
    ACTIONS(687), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [661] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(697), 1,
      anon_sym_EQ,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [677] = 5,
    ACTIONS(549), 1,
      anon_sym_EQ,
    ACTIONS(699), 1,
      aux_sym__notation_token1,
    ACTIONS(702), 1,
      aux_sym__notation_format_token1,
    STATE(50), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [693] = 5,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    ACTIONS(705), 1,
      anon_sym_BANG,
    STATE(31), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [709] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    ACTIONS(707), 1,
      anon_sym_BANG,
    STATE(21), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [725] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    ACTIONS(709), 1,
      anon_sym_BANG,
    STATE(17), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [741] = 5,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    ACTIONS(711), 1,
      anon_sym_BANG,
    STATE(16), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [757] = 2,
    ACTIONS(715), 1,
      aux_sym__command_token3,
    ACTIONS(713), 3,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      anon_sym_SQUOTE,
      aux_sym__command_format_token1,
  [766] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(218), 1,
      sym_string,
  [779] = 3,
    ACTIONS(673), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(717), 2,
      aux_sym_config_token1,
      sym__space,
  [790] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(275), 1,
      sym_string,
  [803] = 3,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(719), 2,
      aux_sym_config_token1,
      sym__space,
  [814] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(175), 1,
      sym_string,
  [827] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(176), 1,
      sym_string,
  [840] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(178), 1,
      sym_string,
  [853] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(206), 1,
      sym_string,
  [866] = 3,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym__debug_repeat1,
    ACTIONS(721), 2,
      aux_sym_config_token1,
      sym__space,
  [877] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(273), 1,
      sym_string,
  [890] = 3,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(723), 2,
      aux_sym_config_token1,
      sym__space,
  [901] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(169), 1,
      sym_string,
  [914] = 3,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(725), 2,
      aux_sym_config_token1,
      sym__space,
  [925] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(210), 1,
      sym_string,
  [938] = 3,
    ACTIONS(667), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(727), 2,
      aux_sym_config_token1,
      sym__space,
  [949] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(212), 1,
      sym_string,
  [962] = 3,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(729), 2,
      aux_sym_config_token1,
      sym__space,
  [973] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(257), 1,
      sym_string,
  [986] = 3,
    ACTIONS(643), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(731), 2,
      aux_sym_config_token1,
      sym__space,
  [997] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(187), 1,
      sym_string,
  [1010] = 3,
    ACTIONS(735), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(733), 2,
      aux_sym_config_token1,
      sym__space,
  [1021] = 3,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(738), 2,
      aux_sym_config_token1,
      sym__space,
  [1032] = 4,
    ACTIONS(740), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(742), 1,
      anon_sym_SQUOTE,
    ACTIONS(744), 1,
      aux_sym__command_token3,
    STATE(99), 1,
      aux_sym_string_repeat2,
  [1045] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(277), 1,
      sym_string,
  [1058] = 4,
    ACTIONS(742), 1,
      anon_sym_DQUOTE,
    ACTIONS(746), 1,
      aux_sym__command_token2,
    ACTIONS(748), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [1071] = 3,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(750), 2,
      aux_sym_config_token1,
      sym__space,
  [1082] = 2,
    ACTIONS(757), 1,
      aux_sym__notation_token1,
    ACTIONS(755), 3,
      aux_sym_config_token1,
      aux_sym__notation_format_token1,
      sym__space,
  [1091] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(276), 1,
      sym_string,
  [1104] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(170), 1,
      sym_string,
  [1117] = 2,
    ACTIONS(761), 1,
      aux_sym__command_token2,
    ACTIONS(759), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1126] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(171), 1,
      sym_string,
  [1139] = 3,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(763), 2,
      aux_sym_config_token1,
      sym__space,
  [1150] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(172), 1,
      sym_string,
  [1163] = 3,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(765), 2,
      aux_sym_config_token1,
      sym__space,
  [1174] = 3,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(767), 2,
      aux_sym_config_token1,
      sym__space,
  [1185] = 3,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym__debug_repeat1,
    ACTIONS(772), 2,
      aux_sym_config_token1,
      sym__space,
  [1196] = 2,
    ACTIONS(779), 1,
      aux_sym__command_token1,
    ACTIONS(777), 3,
      aux_sym_config_token1,
      aux_sym__command_format_token1,
      sym__space,
  [1205] = 3,
    ACTIONS(783), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(781), 2,
      aux_sym_config_token1,
      sym__space,
  [1216] = 3,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(786), 2,
      aux_sym_config_token1,
      sym__space,
  [1227] = 4,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(9), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [1240] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(251), 1,
      sym_string,
  [1253] = 4,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(19), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [1266] = 4,
    ACTIONS(791), 1,
      anon_sym_DQUOTE,
    ACTIONS(793), 1,
      aux_sym__command_token2,
    ACTIONS(796), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(98), 1,
      aux_sym_string_repeat1,
  [1279] = 4,
    ACTIONS(799), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(802), 1,
      anon_sym_SQUOTE,
    ACTIONS(804), 1,
      aux_sym__command_token3,
    STATE(99), 1,
      aux_sym_string_repeat2,
  [1292] = 4,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(20), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [1305] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(250), 1,
      sym_string,
  [1318] = 4,
    ACTIONS(537), 1,
      aux_sym__notation_token1,
    ACTIONS(539), 1,
      aux_sym__notation_format_token1,
    STATE(22), 1,
      aux_sym__notation,
    STATE(82), 1,
      sym__notation_format,
  [1331] = 3,
    ACTIONS(809), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(807), 2,
      aux_sym_config_token1,
      sym__space,
  [1342] = 4,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    STATE(45), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [1355] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(249), 1,
      sym_string,
  [1368] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(248), 1,
      sym_string,
  [1381] = 4,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    STATE(49), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [1394] = 3,
    ACTIONS(814), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(812), 2,
      aux_sym_config_token1,
      sym__space,
  [1405] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(247), 1,
      sym_string,
  [1418] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(216), 1,
      sym_string,
  [1431] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(217), 1,
      sym_string,
  [1444] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(245), 1,
      sym_string,
  [1457] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(219), 1,
      sym_string,
  [1470] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(244), 1,
      sym_string,
  [1483] = 4,
    ACTIONS(625), 1,
      aux_sym__notation_token1,
    ACTIONS(627), 1,
      aux_sym__notation_format_token1,
    STATE(46), 1,
      aux_sym__notation,
    STATE(137), 1,
      sym__notation_format,
  [1496] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(243), 1,
      sym_string,
  [1509] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(242), 1,
      sym_string,
  [1522] = 3,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(817), 2,
      aux_sym_config_token1,
      sym__space,
  [1533] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(241), 1,
      sym_string,
  [1546] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(240), 1,
      sym_string,
  [1559] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(238), 1,
      sym_string,
  [1572] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(229), 1,
      sym_string,
  [1585] = 3,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(822), 2,
      aux_sym_config_token1,
      sym__space,
  [1596] = 4,
    ACTIONS(677), 1,
      anon_sym_DQUOTE,
    ACTIONS(679), 1,
      anon_sym_SQUOTE,
    ACTIONS(683), 1,
      aux_sym_string_token1,
    STATE(237), 1,
      sym_string,
  [1609] = 3,
    ACTIONS(829), 1,
      anon_sym_COMMA,
    STATE(125), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(827), 2,
      aux_sym_config_token1,
      sym__space,
  [1620] = 1,
    ACTIONS(832), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1626] = 3,
    ACTIONS(834), 1,
      aux_sym_config_token1,
    ACTIONS(836), 1,
      sym__space,
    STATE(127), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [1636] = 1,
    ACTIONS(772), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1642] = 3,
    ACTIONS(746), 1,
      aux_sym__command_token2,
    ACTIONS(748), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(80), 1,
      aux_sym_string_repeat1,
  [1652] = 3,
    ACTIONS(839), 1,
      aux_sym_config_token1,
    ACTIONS(841), 1,
      sym__space,
    STATE(130), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [1662] = 1,
    ACTIONS(844), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1668] = 3,
    ACTIONS(846), 1,
      aux_sym_config_token1,
    ACTIONS(848), 1,
      sym__space,
    STATE(132), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [1678] = 2,
    ACTIONS(851), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(853), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [1686] = 3,
    ACTIONS(855), 1,
      aux_sym_config_token1,
    ACTIONS(857), 1,
      sym__space,
    STATE(134), 1,
      aux_sym__export_options_repeat2,
  [1696] = 1,
    ACTIONS(817), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1702] = 2,
    ACTIONS(862), 1,
      anon_sym_BANG,
    ACTIONS(860), 2,
      aux_sym_config_token1,
      sym__space,
  [1710] = 2,
    ACTIONS(757), 1,
      aux_sym__notation_token1,
    ACTIONS(755), 2,
      anon_sym_EQ,
      aux_sym__notation_format_token1,
  [1718] = 3,
    ACTIONS(675), 1,
      sym__space,
    ACTIONS(717), 1,
      aux_sym_config_token1,
    STATE(160), 1,
      aux_sym__default_preference_list_repeat2,
  [1728] = 1,
    ACTIONS(864), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1734] = 3,
    ACTIONS(866), 1,
      aux_sym_config_token1,
    ACTIONS(868), 1,
      sym__space,
    STATE(140), 1,
      aux_sym__import_options_repeat2,
  [1744] = 1,
    ACTIONS(812), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1750] = 3,
    ACTIONS(871), 1,
      aux_sym_config_token1,
    ACTIONS(873), 1,
      sym__space,
    STATE(142), 1,
      aux_sym__auto_key_locate_repeat2,
  [1760] = 1,
    ACTIONS(807), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1766] = 3,
    ACTIONS(876), 1,
      aux_sym_config_token1,
    ACTIONS(878), 1,
      sym__space,
    STATE(144), 1,
      aux_sym__verify_options_repeat2,
  [1776] = 1,
    ACTIONS(786), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1782] = 2,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(881), 2,
      aux_sym_config_token1,
      sym__space,
  [1790] = 1,
    ACTIONS(885), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1796] = 3,
    ACTIONS(740), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(744), 1,
      aux_sym__command_token3,
    STATE(78), 1,
      aux_sym_string_repeat2,
  [1806] = 3,
    ACTIONS(887), 1,
      aux_sym_config_token1,
    ACTIONS(889), 1,
      sym__space,
    STATE(149), 1,
      aux_sym__list_options_repeat2,
  [1816] = 3,
    ACTIONS(892), 1,
      aux_sym_config_token1,
    ACTIONS(894), 1,
      sym__space,
    STATE(150), 1,
      aux_sym__debug_repeat2,
  [1826] = 3,
    ACTIONS(663), 1,
      sym__space,
    ACTIONS(765), 1,
      aux_sym_config_token1,
    STATE(149), 1,
      aux_sym__list_options_repeat2,
  [1836] = 3,
    ACTIONS(657), 1,
      sym__space,
    ACTIONS(763), 1,
      aux_sym_config_token1,
    STATE(144), 1,
      aux_sym__verify_options_repeat2,
  [1846] = 1,
    ACTIONS(767), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1852] = 1,
    ACTIONS(750), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1858] = 2,
    ACTIONS(899), 1,
      aux_sym__command_token2,
    ACTIONS(897), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [1866] = 2,
    ACTIONS(903), 1,
      aux_sym__command_token3,
    ACTIONS(901), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      anon_sym_SQUOTE,
  [1874] = 3,
    ACTIONS(905), 1,
      aux_sym_config_token1,
    ACTIONS(907), 1,
      sym__space,
    STATE(157), 1,
      aux_sym__default_new_key_algo_repeat2,
  [1884] = 1,
    ACTIONS(733), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [1890] = 3,
    ACTIONS(651), 1,
      sym__space,
    ACTIONS(738), 1,
      aux_sym_config_token1,
    STATE(142), 1,
      aux_sym__auto_key_locate_repeat2,
  [1900] = 3,
    ACTIONS(910), 1,
      aux_sym_config_token1,
    ACTIONS(912), 1,
      sym__space,
    STATE(160), 1,
      aux_sym__default_preference_list_repeat2,
  [1910] = 3,
    ACTIONS(645), 1,
      sym__space,
    ACTIONS(731), 1,
      aux_sym_config_token1,
    STATE(140), 1,
      aux_sym__import_options_repeat2,
  [1920] = 3,
    ACTIONS(639), 1,
      sym__space,
    ACTIONS(729), 1,
      aux_sym_config_token1,
    STATE(134), 1,
      aux_sym__export_options_repeat2,
  [1930] = 3,
    ACTIONS(669), 1,
      sym__space,
    ACTIONS(727), 1,
      aux_sym_config_token1,
    STATE(130), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [1940] = 3,
    ACTIONS(615), 1,
      sym__space,
    ACTIONS(725), 1,
      aux_sym_config_token1,
    STATE(132), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [1950] = 3,
    ACTIONS(603), 1,
      sym__space,
    ACTIONS(723), 1,
      aux_sym_config_token1,
    STATE(127), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [1960] = 3,
    ACTIONS(621), 1,
      sym__space,
    ACTIONS(721), 1,
      aux_sym_config_token1,
    STATE(150), 1,
      aux_sym__debug_repeat2,
  [1970] = 3,
    ACTIONS(609), 1,
      sym__space,
    ACTIONS(719), 1,
      aux_sym_config_token1,
    STATE(157), 1,
      aux_sym__default_new_key_algo_repeat2,
  [1980] = 1,
    ACTIONS(915), 2,
      aux_sym_config_token1,
      sym__space,
  [1985] = 1,
    ACTIONS(917), 2,
      aux_sym_config_token1,
      sym__space,
  [1990] = 1,
    ACTIONS(919), 2,
      aux_sym_config_token1,
      sym__space,
  [1995] = 1,
    ACTIONS(921), 2,
      aux_sym_config_token1,
      sym__space,
  [2000] = 1,
    ACTIONS(923), 2,
      aux_sym_config_token1,
      sym__space,
  [2005] = 1,
    ACTIONS(910), 2,
      aux_sym_config_token1,
      sym__space,
  [2010] = 1,
    ACTIONS(905), 2,
      aux_sym_config_token1,
      sym__space,
  [2015] = 1,
    ACTIONS(925), 2,
      aux_sym_config_token1,
      sym__space,
  [2020] = 1,
    ACTIONS(927), 2,
      aux_sym_config_token1,
      sym__space,
  [2025] = 2,
    ACTIONS(929), 1,
      aux_sym__debug_token1,
    ACTIONS(931), 1,
      sym__debug_flag_value,
  [2032] = 1,
    ACTIONS(933), 2,
      aux_sym_config_token1,
      sym__space,
  [2037] = 2,
    ACTIONS(935), 1,
      sym_number,
    ACTIONS(937), 1,
      sym_iso_time,
  [2044] = 1,
    ACTIONS(892), 2,
      aux_sym_config_token1,
      sym__space,
  [2049] = 1,
    ACTIONS(939), 2,
      aux_sym_config_token1,
      sym__space,
  [2054] = 1,
    ACTIONS(941), 2,
      aux_sym_config_token1,
      sym__space,
  [2059] = 1,
    ACTIONS(943), 2,
      aux_sym_config_token1,
      sym__space,
  [2064] = 1,
    ACTIONS(855), 2,
      aux_sym_config_token1,
      sym__space,
  [2069] = 1,
    ACTIONS(866), 2,
      aux_sym_config_token1,
      sym__space,
  [2074] = 1,
    ACTIONS(945), 2,
      aux_sym_config_token1,
      sym__space,
  [2079] = 1,
    ACTIONS(947), 2,
      aux_sym_config_token1,
      sym__space,
  [2084] = 1,
    ACTIONS(871), 2,
      aux_sym_config_token1,
      sym__space,
  [2089] = 1,
    ACTIONS(949), 2,
      aux_sym_config_token1,
      sym__space,
  [2094] = 1,
    ACTIONS(951), 2,
      aux_sym_config_token1,
      sym__space,
  [2099] = 1,
    ACTIONS(876), 2,
      aux_sym_config_token1,
      sym__space,
  [2104] = 1,
    ACTIONS(887), 2,
      aux_sym_config_token1,
      sym__space,
  [2109] = 1,
    ACTIONS(953), 2,
      aux_sym_config_token1,
      sym__space,
  [2114] = 2,
    ACTIONS(955), 1,
      sym__key_locate_value,
    ACTIONS(957), 1,
      sym_url,
  [2121] = 2,
    ACTIONS(959), 1,
      sym__key_locate_value,
    ACTIONS(961), 1,
      sym_url,
  [2128] = 1,
    ACTIONS(963), 2,
      aux_sym_config_token1,
      sym__space,
  [2133] = 1,
    ACTIONS(965), 2,
      aux_sym_config_token1,
      sym__space,
  [2138] = 1,
    ACTIONS(967), 2,
      aux_sym_config_token1,
      sym__space,
  [2143] = 1,
    ACTIONS(969), 2,
      aux_sym_config_token1,
      sym__space,
  [2148] = 1,
    ACTIONS(971), 2,
      aux_sym_config_token1,
      sym__space,
  [2153] = 1,
    ACTIONS(973), 2,
      aux_sym_config_token1,
      sym__space,
  [2158] = 1,
    ACTIONS(975), 2,
      aux_sym_config_token1,
      sym__space,
  [2163] = 2,
    ACTIONS(977), 1,
      aux_sym_config_token1,
    ACTIONS(979), 1,
      sym__space,
  [2170] = 1,
    ACTIONS(981), 2,
      aux_sym_config_token1,
      sym__space,
  [2175] = 1,
    ACTIONS(983), 2,
      aux_sym_config_token1,
      sym__space,
  [2180] = 1,
    ACTIONS(985), 2,
      aux_sym_config_token1,
      sym__space,
  [2185] = 1,
    ACTIONS(987), 2,
      aux_sym_config_token1,
      sym__space,
  [2190] = 1,
    ACTIONS(989), 2,
      aux_sym_config_token1,
      sym__space,
  [2195] = 1,
    ACTIONS(991), 2,
      aux_sym_config_token1,
      sym__space,
  [2200] = 1,
    ACTIONS(993), 2,
      aux_sym_config_token1,
      sym__space,
  [2205] = 1,
    ACTIONS(995), 2,
      aux_sym_config_token1,
      sym__space,
  [2210] = 1,
    ACTIONS(997), 2,
      aux_sym_config_token1,
      sym__space,
  [2215] = 1,
    ACTIONS(999), 2,
      aux_sym_config_token1,
      sym__space,
  [2220] = 1,
    ACTIONS(1001), 2,
      aux_sym_config_token1,
      sym__space,
  [2225] = 1,
    ACTIONS(1003), 2,
      aux_sym_config_token1,
      sym__space,
  [2230] = 1,
    ACTIONS(1005), 2,
      aux_sym_config_token1,
      sym__space,
  [2235] = 1,
    ACTIONS(1007), 2,
      aux_sym_config_token1,
      sym__space,
  [2240] = 1,
    ACTIONS(1009), 2,
      aux_sym_config_token1,
      sym__space,
  [2245] = 1,
    ACTIONS(1011), 2,
      aux_sym_config_token1,
      sym__space,
  [2250] = 1,
    ACTIONS(1013), 2,
      aux_sym_config_token1,
      sym__space,
  [2255] = 1,
    ACTIONS(1015), 2,
      aux_sym_config_token1,
      sym__space,
  [2260] = 1,
    ACTIONS(1017), 2,
      aux_sym_config_token1,
      sym__space,
  [2265] = 1,
    ACTIONS(1019), 2,
      aux_sym_config_token1,
      sym__space,
  [2270] = 1,
    ACTIONS(1021), 2,
      aux_sym_config_token1,
      sym__space,
  [2275] = 1,
    ACTIONS(1023), 2,
      aux_sym_config_token1,
      sym__space,
  [2280] = 1,
    ACTIONS(1025), 2,
      aux_sym_config_token1,
      sym__space,
  [2285] = 1,
    ACTIONS(1027), 2,
      aux_sym_config_token1,
      sym__space,
  [2290] = 1,
    ACTIONS(1029), 2,
      aux_sym_config_token1,
      sym__space,
  [2295] = 1,
    ACTIONS(1031), 2,
      aux_sym_config_token1,
      sym__space,
  [2300] = 1,
    ACTIONS(1033), 2,
      aux_sym_config_token1,
      sym__space,
  [2305] = 1,
    ACTIONS(1035), 2,
      aux_sym_config_token1,
      sym__space,
  [2310] = 1,
    ACTIONS(1037), 2,
      aux_sym_config_token1,
      sym__space,
  [2315] = 1,
    ACTIONS(1039), 2,
      aux_sym_config_token1,
      sym__space,
  [2320] = 1,
    ACTIONS(1041), 2,
      aux_sym_config_token1,
      sym__space,
  [2325] = 1,
    ACTIONS(1043), 2,
      aux_sym_config_token1,
      sym__space,
  [2330] = 1,
    ACTIONS(1045), 2,
      aux_sym_config_token1,
      sym__space,
  [2335] = 1,
    ACTIONS(1047), 2,
      aux_sym_config_token1,
      sym__space,
  [2340] = 1,
    ACTIONS(1049), 2,
      aux_sym_config_token1,
      sym__space,
  [2345] = 1,
    ACTIONS(1051), 2,
      aux_sym_config_token1,
      sym__space,
  [2350] = 1,
    ACTIONS(1053), 2,
      aux_sym_config_token1,
      sym__space,
  [2355] = 1,
    ACTIONS(1055), 2,
      aux_sym_config_token1,
      sym__space,
  [2360] = 1,
    ACTIONS(1057), 2,
      aux_sym_config_token1,
      sym__space,
  [2365] = 1,
    ACTIONS(1059), 2,
      aux_sym_config_token1,
      sym__space,
  [2370] = 1,
    ACTIONS(1061), 2,
      aux_sym_config_token1,
      sym__space,
  [2375] = 1,
    ACTIONS(1063), 2,
      aux_sym_config_token1,
      sym__space,
  [2380] = 1,
    ACTIONS(1065), 2,
      aux_sym_config_token1,
      sym__space,
  [2385] = 1,
    ACTIONS(1067), 2,
      aux_sym_config_token1,
      sym__space,
  [2390] = 1,
    ACTIONS(1069), 2,
      aux_sym_config_token1,
      sym__space,
  [2395] = 1,
    ACTIONS(1071), 2,
      aux_sym_config_token1,
      sym__space,
  [2400] = 1,
    ACTIONS(1073), 2,
      aux_sym_config_token1,
      sym__space,
  [2405] = 1,
    ACTIONS(1075), 2,
      aux_sym_config_token1,
      sym__space,
  [2410] = 1,
    ACTIONS(1077), 2,
      aux_sym_config_token1,
      sym__space,
  [2415] = 1,
    ACTIONS(1079), 2,
      aux_sym_config_token1,
      sym__space,
  [2420] = 1,
    ACTIONS(1081), 2,
      aux_sym_config_token1,
      sym__space,
  [2425] = 1,
    ACTIONS(1083), 2,
      aux_sym_config_token1,
      sym__space,
  [2430] = 1,
    ACTIONS(1085), 2,
      aux_sym_config_token1,
      sym__space,
  [2435] = 1,
    ACTIONS(1087), 2,
      aux_sym_config_token1,
      sym__space,
  [2440] = 2,
    ACTIONS(1089), 1,
      sym__key_locate_value,
    ACTIONS(1091), 1,
      sym_url,
  [2447] = 2,
    ACTIONS(511), 1,
      aux_sym_config_token1,
    ACTIONS(515), 1,
      sym__space,
  [2454] = 1,
    ACTIONS(1093), 2,
      aux_sym_config_token1,
      sym__space,
  [2459] = 1,
    ACTIONS(1095), 2,
      aux_sym_config_token1,
      sym__space,
  [2464] = 1,
    ACTIONS(1097), 2,
      aux_sym_config_token1,
      sym__space,
  [2469] = 1,
    ACTIONS(1099), 2,
      aux_sym_config_token1,
      sym__space,
  [2474] = 1,
    ACTIONS(1101), 2,
      aux_sym_config_token1,
      sym__space,
  [2479] = 1,
    ACTIONS(1103), 2,
      aux_sym_config_token1,
      sym__space,
  [2484] = 1,
    ACTIONS(1105), 2,
      aux_sym_config_token1,
      sym__space,
  [2489] = 1,
    ACTIONS(1107), 2,
      aux_sym_config_token1,
      sym__space,
  [2494] = 1,
    ACTIONS(617), 2,
      aux_sym_config_token1,
      sym__space,
  [2499] = 1,
    ACTIONS(1093), 2,
      aux_sym_config_token1,
      sym__space,
  [2504] = 1,
    ACTIONS(1109), 2,
      aux_sym_config_token1,
      sym__space,
  [2509] = 1,
    ACTIONS(1093), 2,
      aux_sym_config_token1,
      sym__space,
  [2514] = 1,
    ACTIONS(1111), 2,
      aux_sym_config_token1,
      sym__space,
  [2519] = 1,
    ACTIONS(1113), 2,
      aux_sym_config_token1,
      sym__space,
  [2524] = 1,
    ACTIONS(1115), 2,
      aux_sym_config_token1,
      sym__space,
  [2529] = 1,
    ACTIONS(1117), 2,
      aux_sym_config_token1,
      sym__space,
  [2534] = 1,
    ACTIONS(1119), 2,
      aux_sym_config_token1,
      sym__space,
  [2539] = 1,
    ACTIONS(1121), 2,
      aux_sym_config_token1,
      sym__space,
  [2544] = 1,
    ACTIONS(1093), 2,
      aux_sym_config_token1,
      sym__space,
  [2549] = 1,
    ACTIONS(1123), 1,
      sym__debug_flag_value,
  [2553] = 1,
    ACTIONS(1125), 1,
      sym_url,
  [2557] = 1,
    ACTIONS(1127), 1,
      sym__charset_value,
  [2561] = 1,
    ACTIONS(1129), 1,
      sym_key,
  [2565] = 1,
    ACTIONS(1131), 1,
      aux_sym__compress_level_token1,
  [2569] = 1,
    ACTIONS(1133), 1,
      aux_sym__compress_level_token1,
  [2573] = 1,
    ACTIONS(1135), 1,
      aux_sym__default_cert_level_token1,
  [2577] = 1,
    ACTIONS(1137), 1,
      aux_sym__default_cert_level_token1,
  [2581] = 1,
    ACTIONS(1139), 1,
      sym_key,
  [2585] = 1,
    ACTIONS(1141), 1,
      ts_builtin_sym_end,
  [2589] = 1,
    ACTIONS(1143), 1,
      sym__model,
  [2593] = 1,
    ACTIONS(1145), 1,
      sym__space,
  [2597] = 1,
    ACTIONS(1147), 1,
      sym__space,
  [2601] = 1,
    ACTIONS(1149), 1,
      sym__space,
  [2605] = 1,
    ACTIONS(1151), 1,
      sym__keyid_format_value,
  [2609] = 1,
    ACTIONS(1153), 1,
      sym__space,
  [2613] = 1,
    ACTIONS(1155), 1,
      sym_number,
  [2617] = 1,
    ACTIONS(1157), 1,
      anon_sym_EQ,
  [2621] = 1,
    ACTIONS(1159), 1,
      sym_number,
  [2625] = 1,
    ACTIONS(1161), 1,
      sym__tofu_policy_value,
  [2629] = 1,
    ACTIONS(1163), 1,
      sym_key,
  [2633] = 1,
    ACTIONS(1165), 1,
      sym_number,
  [2637] = 1,
    ACTIONS(1167), 1,
      sym__space,
  [2641] = 1,
    ACTIONS(1169), 1,
      aux_sym__group_token1,
  [2645] = 1,
    ACTIONS(1171), 1,
      sym_number,
  [2649] = 1,
    ACTIONS(1173), 1,
      sym_number,
  [2653] = 1,
    ACTIONS(1175), 1,
      sym__space,
  [2657] = 1,
    ACTIONS(1177), 1,
      sym__key_origin_value,
  [2661] = 1,
    ACTIONS(1179), 1,
      sym__import_parameter,
  [2665] = 1,
    ACTIONS(1181), 1,
      sym__export_parameter,
  [2669] = 1,
    ACTIONS(1183), 1,
      sym__compression_algo_value,
  [2673] = 1,
    ACTIONS(977), 1,
      aux_sym_config_token1,
  [2677] = 1,
    ACTIONS(1185), 1,
      sym__cipher_algo_value,
  [2681] = 1,
    ACTIONS(1187), 1,
      sym__hash_algo_value,
  [2685] = 1,
    ACTIONS(1189), 1,
      sym__space,
  [2689] = 1,
    ACTIONS(1191), 1,
      sym__space,
  [2693] = 1,
    ACTIONS(1193), 1,
      sym__space,
  [2697] = 1,
    ACTIONS(1195), 1,
      sym_url,
  [2701] = 1,
    ACTIONS(1197), 1,
      sym_number,
  [2705] = 1,
    ACTIONS(1199), 1,
      sym__space,
  [2709] = 1,
    ACTIONS(1201), 1,
      aux_sym_config_token1,
  [2713] = 1,
    ACTIONS(1203), 1,
      sym__list_parameter,
  [2717] = 1,
    ACTIONS(1205), 1,
      sym__list_parameter,
  [2721] = 1,
    ACTIONS(1207), 1,
      sym__space,
  [2725] = 1,
    ACTIONS(1209), 1,
      sym__space,
  [2729] = 1,
    ACTIONS(1211), 1,
      sym__verify_parameter,
  [2733] = 1,
    ACTIONS(1213), 1,
      sym__verify_parameter,
  [2737] = 1,
    ACTIONS(1215), 1,
      sym__new_key_algo,
  [2741] = 1,
    ACTIONS(1217), 1,
      sym__space,
  [2745] = 1,
    ACTIONS(1219), 1,
      sym__space,
  [2749] = 1,
    ACTIONS(1221), 1,
      sym__space,
  [2753] = 1,
    ACTIONS(1223), 1,
      sym__space,
  [2757] = 1,
    ACTIONS(1225), 1,
      sym__space,
  [2761] = 1,
    ACTIONS(1227), 1,
      sym__space,
  [2765] = 1,
    ACTIONS(1229), 1,
      sym__space,
  [2769] = 1,
    ACTIONS(1231), 1,
      sym__space,
  [2773] = 1,
    ACTIONS(1233), 1,
      sym__space,
  [2777] = 1,
    ACTIONS(1235), 1,
      sym__space,
  [2781] = 1,
    ACTIONS(1237), 1,
      sym_expire_time,
  [2785] = 1,
    ACTIONS(1239), 1,
      sym_expire_time,
  [2789] = 1,
    ACTIONS(1241), 1,
      sym_number,
  [2793] = 1,
    ACTIONS(1243), 1,
      sym__space,
  [2797] = 1,
    ACTIONS(1245), 1,
      sym__space,
  [2801] = 1,
    ACTIONS(1247), 1,
      sym__space,
  [2805] = 1,
    ACTIONS(1249), 1,
      sym_url,
  [2809] = 1,
    ACTIONS(1251), 1,
      sym__import_parameter,
  [2813] = 1,
    ACTIONS(1253), 1,
      sym__import_parameter,
  [2817] = 1,
    ACTIONS(1255), 1,
      sym__space,
  [2821] = 1,
    ACTIONS(1257), 1,
      sym__space,
  [2825] = 1,
    ACTIONS(1259), 1,
      sym__export_parameter,
  [2829] = 1,
    ACTIONS(1261), 1,
      sym__export_parameter,
  [2833] = 1,
    ACTIONS(1263), 1,
      sym__space,
  [2837] = 1,
    ACTIONS(1265), 1,
      sym__space,
  [2841] = 1,
    ACTIONS(1267), 1,
      sym__cipher_algo_value,
  [2845] = 1,
    ACTIONS(1269), 1,
      sym__cipher_algo_value,
  [2849] = 1,
    ACTIONS(1271), 1,
      sym__space,
  [2853] = 1,
    ACTIONS(1273), 1,
      sym__space,
  [2857] = 1,
    ACTIONS(1275), 1,
      sym__hash_algo_value,
  [2861] = 1,
    ACTIONS(1277), 1,
      sym__hash_algo_value,
  [2865] = 1,
    ACTIONS(1279), 1,
      sym__space,
  [2869] = 1,
    ACTIONS(1281), 1,
      sym__space,
  [2873] = 1,
    ACTIONS(1283), 1,
      sym__compression_algo_value,
  [2877] = 1,
    ACTIONS(1285), 1,
      sym__compression_algo_value,
  [2881] = 1,
    ACTIONS(1287), 1,
      sym__space,
  [2885] = 1,
    ACTIONS(1289), 1,
      sym__space,
  [2889] = 1,
    ACTIONS(1291), 1,
      sym__debug_flag_value,
  [2893] = 1,
    ACTIONS(1293), 1,
      sym__list_parameter,
  [2897] = 1,
    ACTIONS(1295), 1,
      sym__verify_parameter,
  [2901] = 1,
    ACTIONS(1297), 1,
      sym_number,
  [2905] = 1,
    ACTIONS(1299), 1,
      sym__hash_algo_value,
  [2909] = 1,
    ACTIONS(1301), 1,
      sym__space,
  [2913] = 1,
    ACTIONS(1303), 1,
      sym__space,
  [2917] = 1,
    ACTIONS(1305), 1,
      sym__space,
  [2921] = 1,
    ACTIONS(1307), 1,
      sym__space,
  [2925] = 1,
    ACTIONS(1309), 1,
      sym__space,
  [2929] = 1,
    ACTIONS(1311), 1,
      sym__space,
  [2933] = 1,
    ACTIONS(1313), 1,
      sym__space,
  [2937] = 1,
    ACTIONS(1315), 1,
      sym__space,
  [2941] = 1,
    ACTIONS(1317), 1,
      sym__space,
  [2945] = 1,
    ACTIONS(1319), 1,
      sym__space,
  [2949] = 1,
    ACTIONS(1321), 1,
      sym__space,
  [2953] = 1,
    ACTIONS(1323), 1,
      sym__new_key_algo,
  [2957] = 1,
    ACTIONS(1325), 1,
      sym__new_key_algo,
  [2961] = 1,
    ACTIONS(1327), 1,
      sym__space,
  [2965] = 1,
    ACTIONS(1329), 1,
      sym__space,
  [2969] = 1,
    ACTIONS(1331), 1,
      sym__space,
  [2973] = 1,
    ACTIONS(1333), 1,
      sym__space,
  [2977] = 1,
    ACTIONS(1335), 1,
      sym__space,
  [2981] = 1,
    ACTIONS(1337), 1,
      sym__space,
  [2985] = 1,
    ACTIONS(1339), 1,
      sym__space,
  [2989] = 1,
    ACTIONS(1341), 1,
      sym__space,
  [2993] = 1,
    ACTIONS(1343), 1,
      sym_number,
  [2997] = 1,
    ACTIONS(1345), 1,
      sym__space,
  [3001] = 1,
    ACTIONS(1347), 1,
      sym__space,
  [3005] = 1,
    ACTIONS(1349), 1,
      sym__space,
  [3009] = 1,
    ACTIONS(1351), 1,
      sym__request_origin_value,
  [3013] = 1,
    ACTIONS(1353), 1,
      sym__space,
  [3017] = 1,
    ACTIONS(1355), 1,
      sym__space,
  [3021] = 1,
    ACTIONS(1357), 1,
      sym__pinentry_mode_value,
  [3025] = 1,
    ACTIONS(1359), 1,
      sym__space,
  [3029] = 1,
    ACTIONS(1361), 1,
      sym__space,
  [3033] = 1,
    ACTIONS(1363), 1,
      sym_number,
  [3037] = 1,
    ACTIONS(1365), 1,
      sym__space,
  [3041] = 1,
    ACTIONS(1367), 1,
      sym__space,
  [3045] = 1,
    ACTIONS(1369), 1,
      sym__space,
  [3049] = 1,
    ACTIONS(1371), 1,
      sym_number,
  [3053] = 1,
    ACTIONS(1373), 1,
      sym__space,
  [3057] = 1,
    ACTIONS(1375), 1,
      sym__space,
  [3061] = 1,
    ACTIONS(1377), 1,
      sym__pubkey_algo_value,
  [3065] = 1,
    ACTIONS(1379), 1,
      sym__cipher_algo_value,
  [3069] = 1,
    ACTIONS(1381), 1,
      sym__space,
  [3073] = 1,
    ACTIONS(1383), 1,
      sym__hash_algo_value,
  [3077] = 1,
    ACTIONS(1385), 1,
      sym__space,
  [3081] = 1,
    ACTIONS(1387), 1,
      sym__space,
  [3085] = 1,
    ACTIONS(1389), 1,
      sym__space,
  [3089] = 1,
    ACTIONS(1391), 1,
      sym__compression_algo_value,
  [3093] = 1,
    ACTIONS(1393), 1,
      sym__space,
  [3097] = 1,
    ACTIONS(1395), 1,
      sym__space,
  [3101] = 1,
    ACTIONS(1397), 1,
      sym__space,
  [3105] = 1,
    ACTIONS(1399), 1,
      sym__hash_algo_value,
  [3109] = 1,
    ACTIONS(1401), 1,
      sym__space,
  [3113] = 1,
    ACTIONS(1403), 1,
      sym__space,
  [3117] = 1,
    ACTIONS(1405), 1,
      sym__space,
  [3121] = 1,
    ACTIONS(1407), 1,
      sym__cipher_algo_value,
  [3125] = 1,
    ACTIONS(1409), 1,
      sym__space,
  [3129] = 1,
    ACTIONS(1411), 1,
      sym__space,
  [3133] = 1,
    ACTIONS(1413), 1,
      sym__space,
  [3137] = 1,
    ACTIONS(1415), 1,
      sym_number,
  [3141] = 1,
    ACTIONS(1417), 1,
      sym__space,
  [3145] = 1,
    ACTIONS(1419), 1,
      sym__space,
  [3149] = 1,
    ACTIONS(1421), 1,
      sym__space,
  [3153] = 1,
    ACTIONS(1423), 1,
      sym_number,
  [3157] = 1,
    ACTIONS(1425), 1,
      sym__space,
  [3161] = 1,
    ACTIONS(1427), 1,
      sym__space,
  [3165] = 1,
    ACTIONS(1429), 1,
      sym__space,
  [3169] = 1,
    ACTIONS(1431), 1,
      sym_number,
  [3173] = 1,
    ACTIONS(1433), 1,
      sym__space,
  [3177] = 1,
    ACTIONS(1435), 1,
      sym__debug_level_value,
  [3181] = 1,
    ACTIONS(1437), 1,
      sym__space,
  [3185] = 1,
    ACTIONS(1439), 1,
      sym_number,
  [3189] = 1,
    ACTIONS(1441), 1,
      sym__space,
  [3193] = 1,
    ACTIONS(1443), 1,
      sym__compliance_value,
  [3197] = 1,
    ACTIONS(1445), 1,
      sym__space,
  [3201] = 1,
    ACTIONS(1447), 1,
      sym__space,
  [3205] = 1,
    ACTIONS(1449), 1,
      sym__space,
  [3209] = 1,
    ACTIONS(1451), 1,
      sym_number,
  [3213] = 1,
    ACTIONS(1453), 1,
      sym__space,
  [3217] = 1,
    ACTIONS(1455), 1,
      sym__space,
  [3221] = 1,
    ACTIONS(1457), 1,
      aux_sym__s2k_mode_token1,
  [3225] = 1,
    ACTIONS(1459), 1,
      sym__hash_algo_value,
  [3229] = 1,
    ACTIONS(1461), 1,
      sym__cipher_algo_value,
  [3233] = 1,
    ACTIONS(1463), 1,
      sym__space,
  [3237] = 1,
    ACTIONS(1465), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 22,
  [SMALL_STATE(10)] = 39,
  [SMALL_STATE(11)] = 56,
  [SMALL_STATE(12)] = 73,
  [SMALL_STATE(13)] = 90,
  [SMALL_STATE(14)] = 107,
  [SMALL_STATE(15)] = 124,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 158,
  [SMALL_STATE(18)] = 175,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 209,
  [SMALL_STATE(21)] = 226,
  [SMALL_STATE(22)] = 243,
  [SMALL_STATE(23)] = 260,
  [SMALL_STATE(24)] = 277,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 309,
  [SMALL_STATE(27)] = 325,
  [SMALL_STATE(28)] = 341,
  [SMALL_STATE(29)] = 357,
  [SMALL_STATE(30)] = 373,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 405,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 453,
  [SMALL_STATE(36)] = 467,
  [SMALL_STATE(37)] = 481,
  [SMALL_STATE(38)] = 497,
  [SMALL_STATE(39)] = 513,
  [SMALL_STATE(40)] = 529,
  [SMALL_STATE(41)] = 545,
  [SMALL_STATE(42)] = 561,
  [SMALL_STATE(43)] = 573,
  [SMALL_STATE(44)] = 589,
  [SMALL_STATE(45)] = 605,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 637,
  [SMALL_STATE(48)] = 649,
  [SMALL_STATE(49)] = 661,
  [SMALL_STATE(50)] = 677,
  [SMALL_STATE(51)] = 693,
  [SMALL_STATE(52)] = 709,
  [SMALL_STATE(53)] = 725,
  [SMALL_STATE(54)] = 741,
  [SMALL_STATE(55)] = 757,
  [SMALL_STATE(56)] = 766,
  [SMALL_STATE(57)] = 779,
  [SMALL_STATE(58)] = 790,
  [SMALL_STATE(59)] = 803,
  [SMALL_STATE(60)] = 814,
  [SMALL_STATE(61)] = 827,
  [SMALL_STATE(62)] = 840,
  [SMALL_STATE(63)] = 853,
  [SMALL_STATE(64)] = 866,
  [SMALL_STATE(65)] = 877,
  [SMALL_STATE(66)] = 890,
  [SMALL_STATE(67)] = 901,
  [SMALL_STATE(68)] = 914,
  [SMALL_STATE(69)] = 925,
  [SMALL_STATE(70)] = 938,
  [SMALL_STATE(71)] = 949,
  [SMALL_STATE(72)] = 962,
  [SMALL_STATE(73)] = 973,
  [SMALL_STATE(74)] = 986,
  [SMALL_STATE(75)] = 997,
  [SMALL_STATE(76)] = 1010,
  [SMALL_STATE(77)] = 1021,
  [SMALL_STATE(78)] = 1032,
  [SMALL_STATE(79)] = 1045,
  [SMALL_STATE(80)] = 1058,
  [SMALL_STATE(81)] = 1071,
  [SMALL_STATE(82)] = 1082,
  [SMALL_STATE(83)] = 1091,
  [SMALL_STATE(84)] = 1104,
  [SMALL_STATE(85)] = 1117,
  [SMALL_STATE(86)] = 1126,
  [SMALL_STATE(87)] = 1139,
  [SMALL_STATE(88)] = 1150,
  [SMALL_STATE(89)] = 1163,
  [SMALL_STATE(90)] = 1174,
  [SMALL_STATE(91)] = 1185,
  [SMALL_STATE(92)] = 1196,
  [SMALL_STATE(93)] = 1205,
  [SMALL_STATE(94)] = 1216,
  [SMALL_STATE(95)] = 1227,
  [SMALL_STATE(96)] = 1240,
  [SMALL_STATE(97)] = 1253,
  [SMALL_STATE(98)] = 1266,
  [SMALL_STATE(99)] = 1279,
  [SMALL_STATE(100)] = 1292,
  [SMALL_STATE(101)] = 1305,
  [SMALL_STATE(102)] = 1318,
  [SMALL_STATE(103)] = 1331,
  [SMALL_STATE(104)] = 1342,
  [SMALL_STATE(105)] = 1355,
  [SMALL_STATE(106)] = 1368,
  [SMALL_STATE(107)] = 1381,
  [SMALL_STATE(108)] = 1394,
  [SMALL_STATE(109)] = 1405,
  [SMALL_STATE(110)] = 1418,
  [SMALL_STATE(111)] = 1431,
  [SMALL_STATE(112)] = 1444,
  [SMALL_STATE(113)] = 1457,
  [SMALL_STATE(114)] = 1470,
  [SMALL_STATE(115)] = 1483,
  [SMALL_STATE(116)] = 1496,
  [SMALL_STATE(117)] = 1509,
  [SMALL_STATE(118)] = 1522,
  [SMALL_STATE(119)] = 1533,
  [SMALL_STATE(120)] = 1546,
  [SMALL_STATE(121)] = 1559,
  [SMALL_STATE(122)] = 1572,
  [SMALL_STATE(123)] = 1585,
  [SMALL_STATE(124)] = 1596,
  [SMALL_STATE(125)] = 1609,
  [SMALL_STATE(126)] = 1620,
  [SMALL_STATE(127)] = 1626,
  [SMALL_STATE(128)] = 1636,
  [SMALL_STATE(129)] = 1642,
  [SMALL_STATE(130)] = 1652,
  [SMALL_STATE(131)] = 1662,
  [SMALL_STATE(132)] = 1668,
  [SMALL_STATE(133)] = 1678,
  [SMALL_STATE(134)] = 1686,
  [SMALL_STATE(135)] = 1696,
  [SMALL_STATE(136)] = 1702,
  [SMALL_STATE(137)] = 1710,
  [SMALL_STATE(138)] = 1718,
  [SMALL_STATE(139)] = 1728,
  [SMALL_STATE(140)] = 1734,
  [SMALL_STATE(141)] = 1744,
  [SMALL_STATE(142)] = 1750,
  [SMALL_STATE(143)] = 1760,
  [SMALL_STATE(144)] = 1766,
  [SMALL_STATE(145)] = 1776,
  [SMALL_STATE(146)] = 1782,
  [SMALL_STATE(147)] = 1790,
  [SMALL_STATE(148)] = 1796,
  [SMALL_STATE(149)] = 1806,
  [SMALL_STATE(150)] = 1816,
  [SMALL_STATE(151)] = 1826,
  [SMALL_STATE(152)] = 1836,
  [SMALL_STATE(153)] = 1846,
  [SMALL_STATE(154)] = 1852,
  [SMALL_STATE(155)] = 1858,
  [SMALL_STATE(156)] = 1866,
  [SMALL_STATE(157)] = 1874,
  [SMALL_STATE(158)] = 1884,
  [SMALL_STATE(159)] = 1890,
  [SMALL_STATE(160)] = 1900,
  [SMALL_STATE(161)] = 1910,
  [SMALL_STATE(162)] = 1920,
  [SMALL_STATE(163)] = 1930,
  [SMALL_STATE(164)] = 1940,
  [SMALL_STATE(165)] = 1950,
  [SMALL_STATE(166)] = 1960,
  [SMALL_STATE(167)] = 1970,
  [SMALL_STATE(168)] = 1980,
  [SMALL_STATE(169)] = 1985,
  [SMALL_STATE(170)] = 1990,
  [SMALL_STATE(171)] = 1995,
  [SMALL_STATE(172)] = 2000,
  [SMALL_STATE(173)] = 2005,
  [SMALL_STATE(174)] = 2010,
  [SMALL_STATE(175)] = 2015,
  [SMALL_STATE(176)] = 2020,
  [SMALL_STATE(177)] = 2025,
  [SMALL_STATE(178)] = 2032,
  [SMALL_STATE(179)] = 2037,
  [SMALL_STATE(180)] = 2044,
  [SMALL_STATE(181)] = 2049,
  [SMALL_STATE(182)] = 2054,
  [SMALL_STATE(183)] = 2059,
  [SMALL_STATE(184)] = 2064,
  [SMALL_STATE(185)] = 2069,
  [SMALL_STATE(186)] = 2074,
  [SMALL_STATE(187)] = 2079,
  [SMALL_STATE(188)] = 2084,
  [SMALL_STATE(189)] = 2089,
  [SMALL_STATE(190)] = 2094,
  [SMALL_STATE(191)] = 2099,
  [SMALL_STATE(192)] = 2104,
  [SMALL_STATE(193)] = 2109,
  [SMALL_STATE(194)] = 2114,
  [SMALL_STATE(195)] = 2121,
  [SMALL_STATE(196)] = 2128,
  [SMALL_STATE(197)] = 2133,
  [SMALL_STATE(198)] = 2138,
  [SMALL_STATE(199)] = 2143,
  [SMALL_STATE(200)] = 2148,
  [SMALL_STATE(201)] = 2153,
  [SMALL_STATE(202)] = 2158,
  [SMALL_STATE(203)] = 2163,
  [SMALL_STATE(204)] = 2170,
  [SMALL_STATE(205)] = 2175,
  [SMALL_STATE(206)] = 2180,
  [SMALL_STATE(207)] = 2185,
  [SMALL_STATE(208)] = 2190,
  [SMALL_STATE(209)] = 2195,
  [SMALL_STATE(210)] = 2200,
  [SMALL_STATE(211)] = 2205,
  [SMALL_STATE(212)] = 2210,
  [SMALL_STATE(213)] = 2215,
  [SMALL_STATE(214)] = 2220,
  [SMALL_STATE(215)] = 2225,
  [SMALL_STATE(216)] = 2230,
  [SMALL_STATE(217)] = 2235,
  [SMALL_STATE(218)] = 2240,
  [SMALL_STATE(219)] = 2245,
  [SMALL_STATE(220)] = 2250,
  [SMALL_STATE(221)] = 2255,
  [SMALL_STATE(222)] = 2260,
  [SMALL_STATE(223)] = 2265,
  [SMALL_STATE(224)] = 2270,
  [SMALL_STATE(225)] = 2275,
  [SMALL_STATE(226)] = 2280,
  [SMALL_STATE(227)] = 2285,
  [SMALL_STATE(228)] = 2290,
  [SMALL_STATE(229)] = 2295,
  [SMALL_STATE(230)] = 2300,
  [SMALL_STATE(231)] = 2305,
  [SMALL_STATE(232)] = 2310,
  [SMALL_STATE(233)] = 2315,
  [SMALL_STATE(234)] = 2320,
  [SMALL_STATE(235)] = 2325,
  [SMALL_STATE(236)] = 2330,
  [SMALL_STATE(237)] = 2335,
  [SMALL_STATE(238)] = 2340,
  [SMALL_STATE(239)] = 2345,
  [SMALL_STATE(240)] = 2350,
  [SMALL_STATE(241)] = 2355,
  [SMALL_STATE(242)] = 2360,
  [SMALL_STATE(243)] = 2365,
  [SMALL_STATE(244)] = 2370,
  [SMALL_STATE(245)] = 2375,
  [SMALL_STATE(246)] = 2380,
  [SMALL_STATE(247)] = 2385,
  [SMALL_STATE(248)] = 2390,
  [SMALL_STATE(249)] = 2395,
  [SMALL_STATE(250)] = 2400,
  [SMALL_STATE(251)] = 2405,
  [SMALL_STATE(252)] = 2410,
  [SMALL_STATE(253)] = 2415,
  [SMALL_STATE(254)] = 2420,
  [SMALL_STATE(255)] = 2425,
  [SMALL_STATE(256)] = 2430,
  [SMALL_STATE(257)] = 2435,
  [SMALL_STATE(258)] = 2440,
  [SMALL_STATE(259)] = 2447,
  [SMALL_STATE(260)] = 2454,
  [SMALL_STATE(261)] = 2459,
  [SMALL_STATE(262)] = 2464,
  [SMALL_STATE(263)] = 2469,
  [SMALL_STATE(264)] = 2474,
  [SMALL_STATE(265)] = 2479,
  [SMALL_STATE(266)] = 2484,
  [SMALL_STATE(267)] = 2489,
  [SMALL_STATE(268)] = 2494,
  [SMALL_STATE(269)] = 2499,
  [SMALL_STATE(270)] = 2504,
  [SMALL_STATE(271)] = 2509,
  [SMALL_STATE(272)] = 2514,
  [SMALL_STATE(273)] = 2519,
  [SMALL_STATE(274)] = 2524,
  [SMALL_STATE(275)] = 2529,
  [SMALL_STATE(276)] = 2534,
  [SMALL_STATE(277)] = 2539,
  [SMALL_STATE(278)] = 2544,
  [SMALL_STATE(279)] = 2549,
  [SMALL_STATE(280)] = 2553,
  [SMALL_STATE(281)] = 2557,
  [SMALL_STATE(282)] = 2561,
  [SMALL_STATE(283)] = 2565,
  [SMALL_STATE(284)] = 2569,
  [SMALL_STATE(285)] = 2573,
  [SMALL_STATE(286)] = 2577,
  [SMALL_STATE(287)] = 2581,
  [SMALL_STATE(288)] = 2585,
  [SMALL_STATE(289)] = 2589,
  [SMALL_STATE(290)] = 2593,
  [SMALL_STATE(291)] = 2597,
  [SMALL_STATE(292)] = 2601,
  [SMALL_STATE(293)] = 2605,
  [SMALL_STATE(294)] = 2609,
  [SMALL_STATE(295)] = 2613,
  [SMALL_STATE(296)] = 2617,
  [SMALL_STATE(297)] = 2621,
  [SMALL_STATE(298)] = 2625,
  [SMALL_STATE(299)] = 2629,
  [SMALL_STATE(300)] = 2633,
  [SMALL_STATE(301)] = 2637,
  [SMALL_STATE(302)] = 2641,
  [SMALL_STATE(303)] = 2645,
  [SMALL_STATE(304)] = 2649,
  [SMALL_STATE(305)] = 2653,
  [SMALL_STATE(306)] = 2657,
  [SMALL_STATE(307)] = 2661,
  [SMALL_STATE(308)] = 2665,
  [SMALL_STATE(309)] = 2669,
  [SMALL_STATE(310)] = 2673,
  [SMALL_STATE(311)] = 2677,
  [SMALL_STATE(312)] = 2681,
  [SMALL_STATE(313)] = 2685,
  [SMALL_STATE(314)] = 2689,
  [SMALL_STATE(315)] = 2693,
  [SMALL_STATE(316)] = 2697,
  [SMALL_STATE(317)] = 2701,
  [SMALL_STATE(318)] = 2705,
  [SMALL_STATE(319)] = 2709,
  [SMALL_STATE(320)] = 2713,
  [SMALL_STATE(321)] = 2717,
  [SMALL_STATE(322)] = 2721,
  [SMALL_STATE(323)] = 2725,
  [SMALL_STATE(324)] = 2729,
  [SMALL_STATE(325)] = 2733,
  [SMALL_STATE(326)] = 2737,
  [SMALL_STATE(327)] = 2741,
  [SMALL_STATE(328)] = 2745,
  [SMALL_STATE(329)] = 2749,
  [SMALL_STATE(330)] = 2753,
  [SMALL_STATE(331)] = 2757,
  [SMALL_STATE(332)] = 2761,
  [SMALL_STATE(333)] = 2765,
  [SMALL_STATE(334)] = 2769,
  [SMALL_STATE(335)] = 2773,
  [SMALL_STATE(336)] = 2777,
  [SMALL_STATE(337)] = 2781,
  [SMALL_STATE(338)] = 2785,
  [SMALL_STATE(339)] = 2789,
  [SMALL_STATE(340)] = 2793,
  [SMALL_STATE(341)] = 2797,
  [SMALL_STATE(342)] = 2801,
  [SMALL_STATE(343)] = 2805,
  [SMALL_STATE(344)] = 2809,
  [SMALL_STATE(345)] = 2813,
  [SMALL_STATE(346)] = 2817,
  [SMALL_STATE(347)] = 2821,
  [SMALL_STATE(348)] = 2825,
  [SMALL_STATE(349)] = 2829,
  [SMALL_STATE(350)] = 2833,
  [SMALL_STATE(351)] = 2837,
  [SMALL_STATE(352)] = 2841,
  [SMALL_STATE(353)] = 2845,
  [SMALL_STATE(354)] = 2849,
  [SMALL_STATE(355)] = 2853,
  [SMALL_STATE(356)] = 2857,
  [SMALL_STATE(357)] = 2861,
  [SMALL_STATE(358)] = 2865,
  [SMALL_STATE(359)] = 2869,
  [SMALL_STATE(360)] = 2873,
  [SMALL_STATE(361)] = 2877,
  [SMALL_STATE(362)] = 2881,
  [SMALL_STATE(363)] = 2885,
  [SMALL_STATE(364)] = 2889,
  [SMALL_STATE(365)] = 2893,
  [SMALL_STATE(366)] = 2897,
  [SMALL_STATE(367)] = 2901,
  [SMALL_STATE(368)] = 2905,
  [SMALL_STATE(369)] = 2909,
  [SMALL_STATE(370)] = 2913,
  [SMALL_STATE(371)] = 2917,
  [SMALL_STATE(372)] = 2921,
  [SMALL_STATE(373)] = 2925,
  [SMALL_STATE(374)] = 2929,
  [SMALL_STATE(375)] = 2933,
  [SMALL_STATE(376)] = 2937,
  [SMALL_STATE(377)] = 2941,
  [SMALL_STATE(378)] = 2945,
  [SMALL_STATE(379)] = 2949,
  [SMALL_STATE(380)] = 2953,
  [SMALL_STATE(381)] = 2957,
  [SMALL_STATE(382)] = 2961,
  [SMALL_STATE(383)] = 2965,
  [SMALL_STATE(384)] = 2969,
  [SMALL_STATE(385)] = 2973,
  [SMALL_STATE(386)] = 2977,
  [SMALL_STATE(387)] = 2981,
  [SMALL_STATE(388)] = 2985,
  [SMALL_STATE(389)] = 2989,
  [SMALL_STATE(390)] = 2993,
  [SMALL_STATE(391)] = 2997,
  [SMALL_STATE(392)] = 3001,
  [SMALL_STATE(393)] = 3005,
  [SMALL_STATE(394)] = 3009,
  [SMALL_STATE(395)] = 3013,
  [SMALL_STATE(396)] = 3017,
  [SMALL_STATE(397)] = 3021,
  [SMALL_STATE(398)] = 3025,
  [SMALL_STATE(399)] = 3029,
  [SMALL_STATE(400)] = 3033,
  [SMALL_STATE(401)] = 3037,
  [SMALL_STATE(402)] = 3041,
  [SMALL_STATE(403)] = 3045,
  [SMALL_STATE(404)] = 3049,
  [SMALL_STATE(405)] = 3053,
  [SMALL_STATE(406)] = 3057,
  [SMALL_STATE(407)] = 3061,
  [SMALL_STATE(408)] = 3065,
  [SMALL_STATE(409)] = 3069,
  [SMALL_STATE(410)] = 3073,
  [SMALL_STATE(411)] = 3077,
  [SMALL_STATE(412)] = 3081,
  [SMALL_STATE(413)] = 3085,
  [SMALL_STATE(414)] = 3089,
  [SMALL_STATE(415)] = 3093,
  [SMALL_STATE(416)] = 3097,
  [SMALL_STATE(417)] = 3101,
  [SMALL_STATE(418)] = 3105,
  [SMALL_STATE(419)] = 3109,
  [SMALL_STATE(420)] = 3113,
  [SMALL_STATE(421)] = 3117,
  [SMALL_STATE(422)] = 3121,
  [SMALL_STATE(423)] = 3125,
  [SMALL_STATE(424)] = 3129,
  [SMALL_STATE(425)] = 3133,
  [SMALL_STATE(426)] = 3137,
  [SMALL_STATE(427)] = 3141,
  [SMALL_STATE(428)] = 3145,
  [SMALL_STATE(429)] = 3149,
  [SMALL_STATE(430)] = 3153,
  [SMALL_STATE(431)] = 3157,
  [SMALL_STATE(432)] = 3161,
  [SMALL_STATE(433)] = 3165,
  [SMALL_STATE(434)] = 3169,
  [SMALL_STATE(435)] = 3173,
  [SMALL_STATE(436)] = 3177,
  [SMALL_STATE(437)] = 3181,
  [SMALL_STATE(438)] = 3185,
  [SMALL_STATE(439)] = 3189,
  [SMALL_STATE(440)] = 3193,
  [SMALL_STATE(441)] = 3197,
  [SMALL_STATE(442)] = 3201,
  [SMALL_STATE(443)] = 3205,
  [SMALL_STATE(444)] = 3209,
  [SMALL_STATE(445)] = 3213,
  [SMALL_STATE(446)] = 3217,
  [SMALL_STATE(447)] = 3221,
  [SMALL_STATE(448)] = 3225,
  [SMALL_STATE(449)] = 3229,
  [SMALL_STATE(450)] = 3233,
  [SMALL_STATE(451)] = 3237,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(451),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(450),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(446),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(445),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(443),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(442),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(441),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(439),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(437),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(435),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(433),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(432),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(431),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(429),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(428),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(427),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(425),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(424),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(423),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(421),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(419),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(416),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(415),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(413),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(412),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(411),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(409),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(406),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(402),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(401),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(398),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(396),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(395),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(389),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(388),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(387),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(386),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(385),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(384),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(382),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(379),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(378),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(377),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(376),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(374),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(373),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(372),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(371),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(370),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(369),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(305),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(294),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(363),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(362),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(359),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(358),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(355),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(354),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(351),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(350),
  [430] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(347),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(346),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(342),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(341),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(340),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(336),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(335),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(334),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(333),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(332),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(331),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(330),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(329),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(328),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(327),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(301),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(323),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(322),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(318),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(315),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(314),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(313),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(292),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(291),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(290),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(259),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 4, .production_id = 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 3, .production_id = 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 2),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(82),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(82),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [563] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(85),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(85),
  [569] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(55),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [574] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(55),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 3, .production_id = 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 3, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 4, .production_id = 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 4, .production_id = 5),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 3, .production_id = 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 4, .production_id = 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(92),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(92),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, .production_id = 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, .production_id = 3),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [699] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(137),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(137),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 4),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 4),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 4),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, .production_id = 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, .production_id = 3),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, .production_id = 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2), SHIFT_REPEAT(48),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [746] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(380),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 1),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__notation, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 1),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(320),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(364),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(360),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(324),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(155),
  [796] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(155),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(156),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [804] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(156),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2), SHIFT_REPEAT(195),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2),
  [814] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(344),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(348),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(352),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(356),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_value, 1),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2), SHIFT_REPEAT(361),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2),
  [841] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2), SHIFT_REPEAT(353),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, .production_id = 8),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2), SHIFT_REPEAT(357),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2), SHIFT_REPEAT(349),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, .production_id = 8),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2), SHIFT_REPEAT(345),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2),
  [873] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2), SHIFT_REPEAT(194),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2),
  [878] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2), SHIFT_REPEAT(325),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, .production_id = 8),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2), SHIFT_REPEAT(321),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2),
  [894] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2), SHIFT_REPEAT(279),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2),
  [907] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2), SHIFT_REPEAT(381),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2),
  [912] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2), SHIFT_REPEAT(47),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key, 3),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 6, .production_id = 10),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 6, .production_id = 10),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 6, .production_id = 10),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 5, .production_id = 9),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 5, .production_id = 9),
  [929] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 5, .production_id = 9),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2, .production_id = 8),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2, .production_id = 8),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2, .production_id = 8),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, .production_id = 7),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 6),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 6),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 4),
  [955] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [959] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chuid, 3),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_keyserver_url, 3),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_expire, 3),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_sig_expire, 3),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key_fd, 3),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__weak_digest, 3, .production_id = 3),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_file, 3),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_fd, 3),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_origin, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pinentry_mode, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_file, 3),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_fd, 3),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_repeat, 3),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_pubkey_algo, 3, .production_id = 3),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_cipher_algo, 3, .production_id = 3),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3),
  [1033] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_digest_algo, 3, .production_id = 3),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3),
  [1051] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3),
  [1055] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3),
  [1065] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_algo, 3, .production_id = 3),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3),
  [1071] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3),
  [1079] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3),
  [1081] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digest_algo, 3, .production_id = 3),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cipher_algo, 3, .production_id = 3),
  [1087] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_filename, 3),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1093] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 1),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, .production_id = 3),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, .production_id = 3),
  [1099] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3),
  [1101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3),
  [1105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_level, 3),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_set_iobuf_size, 3),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_fd, 3),
  [1113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_file, 3),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_fd, 3),
  [1117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_file, 3),
  [1119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_notation, 3),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
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
