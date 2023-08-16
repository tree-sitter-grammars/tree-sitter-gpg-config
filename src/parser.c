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
#define STATE_COUNT 574
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 421
#define ALIAS_COUNT 0
#define TOKEN_COUNT 281
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_list_DASHfilter = 123,
  anon_sym_EQ = 124,
  sym__list_filter_name = 125,
  anon_sym_DQUOTE = 126,
  anon_sym_SQUOTE = 127,
  anon_sym_list_DASHoptions = 128,
  anon_sym_COMMA = 129,
  sym__list_parameter = 130,
  anon_sym_verify_DASHoptions = 131,
  sym__verify_parameter = 132,
  anon_sym_photo_DASHviewer = 133,
  aux_sym__command_token1 = 134,
  aux_sym__command_token2 = 135,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 136,
  aux_sym__command_token3 = 137,
  aux_sym__command_format_token1 = 138,
  anon_sym_exec_DASHpath = 139,
  anon_sym_keyring = 140,
  anon_sym_primary_DASHkeyring = 141,
  anon_sym_trustdb_DASHname = 142,
  anon_sym_display_DASHcharset = 143,
  sym__charset_value = 144,
  sym__utf8_strings = 145,
  sym__no_utf8_strings = 146,
  anon_sym_compress_DASHlevel = 147,
  aux_sym__compress_level_token1 = 148,
  anon_sym_bzip2_DASHcompress_DASHlevel = 149,
  anon_sym_default_DASHcert_DASHlevel = 150,
  aux_sym__default_cert_level_token1 = 151,
  anon_sym_min_DASHcert_DASHlevel = 152,
  anon_sym_trusted_DASHkey = 153,
  anon_sym_add_DASHdesig_DASHrevoker = 154,
  aux_sym__add_desig_revoker_token1 = 155,
  aux_sym__add_desig_revoker_token2 = 156,
  anon_sym_trust_DASHmodel = 157,
  sym__model = 158,
  anon_sym_assert_DASHsigner = 159,
  anon_sym_auto_DASHkey_DASHlocate = 160,
  sym__key_locate_value = 161,
  anon_sym_keyid_DASHformat = 162,
  sym__keyid_format_value = 163,
  anon_sym_keyserver = 164,
  anon_sym_completes_DASHneeded = 165,
  anon_sym_marginals_DASHneeded = 166,
  anon_sym_tofu_DASHdefault_DASHpolicy = 167,
  sym__tofu_policy_value = 168,
  anon_sym_max_DASHcert_DASHdepth = 169,
  anon_sym_agent_DASHprogram = 170,
  anon_sym_dirmngr_DASHprogram = 171,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 172,
  anon_sym_recipient = 173,
  anon_sym_hidden_DASHrecipient = 174,
  anon_sym_recipient_DASHfile = 175,
  anon_sym_hidden_DASHrecipient_DASHfile = 176,
  anon_sym_encrypt_DASHto = 177,
  anon_sym_hidden_DASHencrypt_DASHto = 178,
  anon_sym_group = 179,
  aux_sym__group_token1 = 180,
  anon_sym_ungroup = 181,
  anon_sym_local_DASHuser = 182,
  anon_sym_sender = 183,
  anon_sym_try_DASHsecret_DASHname = 184,
  anon_sym_output = 185,
  anon_sym_max_DASHoutput = 186,
  anon_sym_chunk_DASHsize = 187,
  anon_sym_input_DASHsize_DASHhint = 188,
  anon_sym_key_DASHorigin = 189,
  sym__key_origin_value = 190,
  anon_sym_import_DASHoptions = 191,
  sym__import_parameter = 192,
  anon_sym_import_DASHfilter = 193,
  sym__import_filter_name = 194,
  anon_sym_export_DASHfilter = 195,
  sym__export_filter_name = 196,
  anon_sym_export_DASHoptions = 197,
  sym__export_parameter = 198,
  anon_sym_personal_DASHcipher_DASHpreferences = 199,
  anon_sym_personal_DASHdigest_DASHpreferences = 200,
  anon_sym_personal_DASHcompress_DASHpreferences = 201,
  anon_sym_s2k_DASHcipher_DASHalgo = 202,
  anon_sym_s2k_DASHdigest_DASHalgo = 203,
  anon_sym_s2k_DASHmode = 204,
  aux_sym__s2k_mode_token1 = 205,
  anon_sym_s2k_DASHcount = 206,
  anon_sym_compliance = 207,
  sym__compliance_value = 208,
  anon_sym_min_DASHrsa_DASHlength = 209,
  sym__require_compliance = 210,
  anon_sym_debug_DASHlevel = 211,
  sym__debug_level_value = 212,
  anon_sym_debug = 213,
  aux_sym__debug_token1 = 214,
  sym__debug_flag_value = 215,
  anon_sym_debug_DASHset_DASHiobuf_DASHsize = 216,
  anon_sym_faked_DASHsystem_DASHtime = 217,
  anon_sym_BANG = 218,
  anon_sym_status_DASHfd = 219,
  anon_sym_status_DASHfile = 220,
  anon_sym_logger_DASHfd = 221,
  anon_sym_logger_DASHfile = 222,
  anon_sym_log_DASHfile = 223,
  anon_sym_comment = 224,
  anon_sym_sig_DASHnotation = 225,
  anon_sym_cert_DASHnotation = 226,
  anon_sym_set_DASHnotation = 227,
  aux_sym__notation_token1 = 228,
  aux_sym__notation_format_token1 = 229,
  anon_sym_known_DASHnotation = 230,
  anon_sym_sig_DASHpolicy_DASHurl = 231,
  anon_sym_cert_DASHpolicy_DASHurl = 232,
  anon_sym_set_DASHpolicy_DASHurl = 233,
  anon_sym_sig_DASHkeyserver_DASHurl = 234,
  anon_sym_set_DASHfilename = 235,
  anon_sym_cipher_DASHalgo = 236,
  anon_sym_digest_DASHalgo = 237,
  anon_sym_compress_DASHalgo = 238,
  anon_sym_cert_DASHdigest_DASHalgo = 239,
  anon_sym_disable_DASHcipher_DASHalgo = 240,
  anon_sym_disable_DASHpubkey_DASHalgo = 241,
  anon_sym_passphrase_DASHrepeat = 242,
  anon_sym_passphrase_DASHfd = 243,
  anon_sym_passphrase_DASHfile = 244,
  anon_sym_passphrase = 245,
  anon_sym_pinentry_DASHmode = 246,
  sym__pinentry_mode_value = 247,
  anon_sym_request_DASHorigin = 248,
  sym__request_origin_value = 249,
  anon_sym_command_DASHfd = 250,
  anon_sym_command_DASHfile = 251,
  anon_sym_weak_DASHdigest = 252,
  anon_sym_override_DASHsession_DASHkey = 253,
  anon_sym_override_DASHsession_DASHkey_DASHfd = 254,
  anon_sym_default_DASHsig_DASHexpire = 255,
  anon_sym_default_DASHcert_DASHexpire = 256,
  anon_sym_default_DASHnew_DASHkey_DASHalgo = 257,
  sym__new_key_algo = 258,
  anon_sym_default_DASHpreference_DASHlist = 259,
  anon_sym_default_DASHkeyserver_DASHurl = 260,
  anon_sym_chuid = 261,
  sym_key = 262,
  sym_url = 263,
  sym_number = 264,
  sym_iso_time = 265,
  sym_expire_time = 266,
  aux_sym_string_token1 = 267,
  sym_filter_scope = 268,
  sym_filter_property = 269,
  sym_filter_lc = 270,
  sym_filter_op1 = 271,
  sym_filter_op0 = 272,
  sym_filter_flag = 273,
  aux_sym_filter_value_token1 = 274,
  sym_comment = 275,
  sym__pubkey_algo_value = 276,
  sym__cipher_algo_value = 277,
  sym__hash_algo_value = 278,
  sym__compression_algo_value = 279,
  sym__space = 280,
  sym_config = 281,
  sym_option = 282,
  sym__default_key = 283,
  sym__list_filter = 284,
  sym__filter_expression = 285,
  sym__filter_expression_inner = 286,
  sym__list_options = 287,
  sym__verify_options = 288,
  sym__photo_viewer = 289,
  sym__command = 290,
  sym__command_format = 291,
  sym__exec_path = 292,
  sym__keyring = 293,
  sym__primary_keyring = 294,
  sym__trustdb_name = 295,
  sym__display_charset = 296,
  sym__compress_level = 297,
  sym__bzip2_compress_level = 298,
  sym__default_cert_level = 299,
  sym__min_cert_level = 300,
  sym__trusted_key = 301,
  sym__add_desig_revoker = 302,
  sym__trust_model = 303,
  sym__assert_signer = 304,
  sym__auto_key_locate = 305,
  sym__keyid_format = 306,
  sym__keyserver = 307,
  sym__completes_needed = 308,
  sym__marginals_needed = 309,
  sym__tofu_default_policy = 310,
  sym__max_cert_depth = 311,
  sym__agent_program = 312,
  sym__dirmngr_program = 313,
  sym__limit_card_insert_tries = 314,
  sym__recipient = 315,
  sym__hidden_recipient = 316,
  sym__recipient_file = 317,
  sym__hidden_recipient_file = 318,
  sym__encrypt_to = 319,
  sym__hidden_encrypt_to = 320,
  sym__group = 321,
  sym__ungroup = 322,
  sym__local_user = 323,
  sym__sender = 324,
  sym__try_secret_name = 325,
  sym__output = 326,
  sym__max_output = 327,
  sym__chunk_size = 328,
  sym__input_size_hint = 329,
  sym__key_origin = 330,
  sym__import_options = 331,
  sym__import_filter = 332,
  sym__export_filter = 333,
  sym__export_options = 334,
  sym__personal_cipher_preferences = 335,
  sym__personal_digest_preferences = 336,
  sym__personal_compress_preferences = 337,
  sym__s2k_cipher_algo = 338,
  sym__s2k_digest_algo = 339,
  sym__s2k_mode = 340,
  sym__s2k_count = 341,
  sym__compliance = 342,
  sym__min_rsa_length = 343,
  sym__debug_level = 344,
  sym__debug = 345,
  sym__debug_set_iobuf_size = 346,
  sym__faked_system_time = 347,
  sym__status_fd = 348,
  sym__status_file = 349,
  sym__logger_fd = 350,
  sym__logger_file = 351,
  sym__comment = 352,
  sym__sig_notation = 353,
  sym__cert_notation = 354,
  sym__set_notation = 355,
  aux_sym__notation = 356,
  sym__notation_format = 357,
  sym__known_notation = 358,
  sym__sig_policy_url = 359,
  sym__cert_policy_url = 360,
  sym__set_policy_url = 361,
  sym__sig_keyserver_url = 362,
  sym__set_filename = 363,
  sym__cipher_algo = 364,
  sym__digest_algo = 365,
  sym__compress_algo = 366,
  sym__cert_digest_algo = 367,
  sym__disable_cipher_algo = 368,
  sym__disable_pubkey_algo = 369,
  sym__passphrase_repeat = 370,
  sym__passphrase_fd = 371,
  sym__passphrase_file = 372,
  sym__passphrase = 373,
  sym__pinentry_mode = 374,
  sym__request_origin = 375,
  sym__command_fd = 376,
  sym__command_file = 377,
  sym__weak_digest = 378,
  sym__override_session_key = 379,
  sym__override_session_key_fd = 380,
  sym__default_sig_expire = 381,
  sym__default_cert_expire = 382,
  sym__default_new_key_algo = 383,
  sym__default_preference_list = 384,
  sym__default_preference_value = 385,
  sym__default_keyserver_url = 386,
  sym__chuid = 387,
  sym_string = 388,
  sym_filter_value = 389,
  aux_sym_config_repeat1 = 390,
  aux_sym__filter_expression_inner_repeat1 = 391,
  aux_sym__filter_expression_inner_repeat2 = 392,
  aux_sym__list_options_repeat1 = 393,
  aux_sym__list_options_repeat2 = 394,
  aux_sym__verify_options_repeat1 = 395,
  aux_sym__verify_options_repeat2 = 396,
  aux_sym__command_repeat1 = 397,
  aux_sym__command_repeat2 = 398,
  aux_sym__command_repeat3 = 399,
  aux_sym__auto_key_locate_repeat1 = 400,
  aux_sym__auto_key_locate_repeat2 = 401,
  aux_sym__import_options_repeat1 = 402,
  aux_sym__import_options_repeat2 = 403,
  aux_sym__export_options_repeat1 = 404,
  aux_sym__export_options_repeat2 = 405,
  aux_sym__personal_cipher_preferences_repeat1 = 406,
  aux_sym__personal_cipher_preferences_repeat2 = 407,
  aux_sym__personal_digest_preferences_repeat1 = 408,
  aux_sym__personal_digest_preferences_repeat2 = 409,
  aux_sym__personal_compress_preferences_repeat1 = 410,
  aux_sym__personal_compress_preferences_repeat2 = 411,
  aux_sym__debug_repeat1 = 412,
  aux_sym__debug_repeat2 = 413,
  aux_sym__default_new_key_algo_repeat1 = 414,
  aux_sym__default_new_key_algo_repeat2 = 415,
  aux_sym__default_preference_list_repeat1 = 416,
  aux_sym__default_preference_list_repeat2 = 417,
  aux_sym_string_repeat1 = 418,
  aux_sym_string_repeat2 = 419,
  aux_sym_filter_value_repeat1 = 420,
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
  [anon_sym_list_DASHfilter] = "list-filter",
  [anon_sym_EQ] = "=",
  [sym__list_filter_name] = "filter_name",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_list_DASHoptions] = "list-options",
  [anon_sym_COMMA] = ",",
  [sym__list_parameter] = "value",
  [anon_sym_verify_DASHoptions] = "verify-options",
  [sym__verify_parameter] = "value",
  [anon_sym_photo_DASHviewer] = "photo-viewer",
  [aux_sym__command_token1] = "_command_token1",
  [aux_sym__command_token2] = "_command_token2",
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = "\\${q}",
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
  [anon_sym_import_DASHfilter] = "import-filter",
  [sym__import_filter_name] = "filter_name",
  [anon_sym_export_DASHfilter] = "export-filter",
  [sym__export_filter_name] = "filter_name",
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
  [sym_filter_scope] = "filter_scope",
  [sym_filter_property] = "filter_property",
  [sym_filter_lc] = "filter_lc",
  [sym_filter_op1] = "filter_op1",
  [sym_filter_op0] = "filter_op0",
  [sym_filter_flag] = "filter_flag",
  [aux_sym_filter_value_token1] = "filter_value_token1",
  [sym_comment] = "comment",
  [sym__pubkey_algo_value] = "_pubkey_algo_value",
  [sym__cipher_algo_value] = "_cipher_algo_value",
  [sym__hash_algo_value] = "_hash_algo_value",
  [sym__compression_algo_value] = "_compression_algo_value",
  [sym__space] = "_space",
  [sym_config] = "config",
  [sym_option] = "option",
  [sym__default_key] = "_default_key",
  [sym__list_filter] = "_list_filter",
  [sym__filter_expression] = "_filter_expression",
  [sym__filter_expression_inner] = "_filter_expression_inner",
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
  [sym__import_filter] = "_import_filter",
  [sym__export_filter] = "_export_filter",
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
  [sym_filter_value] = "filter_value",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym__filter_expression_inner_repeat1] = "_filter_expression_inner_repeat1",
  [aux_sym__filter_expression_inner_repeat2] = "_filter_expression_inner_repeat2",
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
  [aux_sym_filter_value_repeat1] = "filter_value_repeat1",
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
  [anon_sym_list_DASHfilter] = anon_sym_list_DASHfilter,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym__list_filter_name] = sym__list_filter_name,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_list_DASHoptions] = anon_sym_list_DASHoptions,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__list_parameter] = sym__list_parameter,
  [anon_sym_verify_DASHoptions] = anon_sym_verify_DASHoptions,
  [sym__verify_parameter] = sym__list_parameter,
  [anon_sym_photo_DASHviewer] = anon_sym_photo_DASHviewer,
  [aux_sym__command_token1] = aux_sym__command_token1,
  [aux_sym__command_token2] = aux_sym__command_token2,
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
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
  [anon_sym_import_DASHfilter] = anon_sym_import_DASHfilter,
  [sym__import_filter_name] = sym__list_filter_name,
  [anon_sym_export_DASHfilter] = anon_sym_export_DASHfilter,
  [sym__export_filter_name] = sym__list_filter_name,
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
  [sym_filter_scope] = sym_filter_scope,
  [sym_filter_property] = sym_filter_property,
  [sym_filter_lc] = sym_filter_lc,
  [sym_filter_op1] = sym_filter_op1,
  [sym_filter_op0] = sym_filter_op0,
  [sym_filter_flag] = sym_filter_flag,
  [aux_sym_filter_value_token1] = aux_sym_filter_value_token1,
  [sym_comment] = sym_comment,
  [sym__pubkey_algo_value] = sym__pubkey_algo_value,
  [sym__cipher_algo_value] = sym__cipher_algo_value,
  [sym__hash_algo_value] = sym__hash_algo_value,
  [sym__compression_algo_value] = sym__compression_algo_value,
  [sym__space] = sym__space,
  [sym_config] = sym_config,
  [sym_option] = sym_option,
  [sym__default_key] = sym__default_key,
  [sym__list_filter] = sym__list_filter,
  [sym__filter_expression] = sym__filter_expression,
  [sym__filter_expression_inner] = sym__filter_expression_inner,
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
  [sym__import_filter] = sym__import_filter,
  [sym__export_filter] = sym__export_filter,
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
  [sym_filter_value] = sym_filter_value,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym__filter_expression_inner_repeat1] = aux_sym__filter_expression_inner_repeat1,
  [aux_sym__filter_expression_inner_repeat2] = aux_sym__filter_expression_inner_repeat2,
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
  [aux_sym_filter_value_repeat1] = aux_sym_filter_value_repeat1,
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
  [anon_sym_list_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__list_filter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [aux_sym__command_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE] = {
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
  [anon_sym_import_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [sym__import_filter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_export_DASHfilter] = {
    .visible = true,
    .named = false,
  },
  [sym__export_filter_name] = {
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
  [sym_filter_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_property] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_lc] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_op1] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_op0] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_flag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_filter_value_token1] = {
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
  [sym__default_key] = {
    .visible = false,
    .named = true,
  },
  [sym__list_filter] = {
    .visible = false,
    .named = true,
  },
  [sym__filter_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__filter_expression_inner] = {
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
  [sym__import_filter] = {
    .visible = false,
    .named = true,
  },
  [sym__export_filter] = {
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
  [sym_filter_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__filter_expression_inner_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__filter_expression_inner_repeat2] = {
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
  [aux_sym_filter_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_expression = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [7] = {.index = 2, .length = 1},
  [9] = {.index = 3, .length = 1},
  [11] = {.index = 3, .length = 1},
  [12] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_expression, 0, .inherited = true},
  [1] =
    {field_value, 0, .inherited = true},
  [2] =
    {field_expression, 4},
  [3] =
    {field_value, 4},
  [4] =
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = aux_sym_string_token1,
  },
  [4] = {
    [2] = sym__list_parameter,
  },
  [5] = {
    [2] = sym_url,
  },
  [6] = {
    [3] = sym_url,
  },
  [8] = {
    [1] = aux_sym_string_token1,
  },
  [10] = {
    [1] = sym__list_parameter,
  },
  [11] = {
    [2] = aux_sym__group_token1,
  },
  [12] = {
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
  [10] = 9,
  [11] = 11,
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 26,
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
  [65] = 63,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 67,
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
  [84] = 83,
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
  [104] = 41,
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
  [179] = 134,
  [180] = 133,
  [181] = 181,
  [182] = 116,
  [183] = 170,
  [184] = 184,
  [185] = 148,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 123,
  [190] = 114,
  [191] = 191,
  [192] = 188,
  [193] = 193,
  [194] = 191,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 199,
  [205] = 200,
  [206] = 201,
  [207] = 197,
  [208] = 202,
  [209] = 198,
  [210] = 203,
  [211] = 211,
  [212] = 195,
  [213] = 196,
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
  [273] = 269,
  [274] = 270,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 272,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 259,
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
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 486,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 501,
  [571] = 467,
  [572] = 572,
  [573] = 573,
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
      if (eof) ADVANCE(2926);
      if (lookahead == '\n') ADVANCE(3064);
      if (lookahead == '\r') ADVANCE(3064);
      if (lookahead == '!') ADVANCE(3169);
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead == ',') ADVANCE(3057);
      if (lookahead == '2') ADVANCE(3062);
      if (lookahead == '=') ADVANCE(3050);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3064);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3062);
      if (lookahead != 0) ADVANCE(3062);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2927);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2927);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(3063);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      if (lookahead != 0) ADVANCE(3062);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(2927);
      if (lookahead == '\r') ADVANCE(3180);
      if (lookahead == '%') ADVANCE(3181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(3179);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(3169);
      if (lookahead == '%') ADVANCE(3181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3179);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(2883);
      if (lookahead == '-') ADVANCE(2892);
      if (lookahead == '0') ADVANCE(3157);
      if (lookahead == '<') ADVANCE(3273);
      if (lookahead == '=') ADVANCE(3272);
      if (lookahead == '>') ADVANCE(311);
      if (lookahead == 'c') ADVANCE(3153);
      if (lookahead == 'e') ADVANCE(3158);
      if (lookahead == 'f') ADVANCE(3156);
      if (lookahead == 'h') ADVANCE(429);
      if (lookahead == 'i') ADVANCE(1985);
      if (lookahead == 'l') ADVANCE(1905);
      if (lookahead == 'm') ADVANCE(855);
      if (lookahead == 'n') ADVANCE(2007);
      if (lookahead == 'p') ADVANCE(414);
      if (lookahead == 's') ADVANCE(1267);
      if (lookahead == 't') ADVANCE(2309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'd')) ADVANCE(3165);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '%') ADVANCE(3063);
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3062);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '%') ADVANCE(3066);
      if (lookahead == '\\') ADVANCE(3065);
      if (lookahead != 0) ADVANCE(3064);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '&') ADVANCE(3277);
      if (lookahead == '-') ADVANCE(3292);
      if (lookahead == 'a') ADVANCE(3285);
      if (lookahead == 'd') ADVANCE(3284);
      if (lookahead == 'e') ADVANCE(3289);
      if (lookahead == 'f') ADVANCE(3286);
      if (lookahead == 'k') ADVANCE(3280);
      if (lookahead == 'l') ADVANCE(3278);
      if (lookahead == 'm') ADVANCE(3279);
      if (lookahead == 'o') ADVANCE(3287);
      if (lookahead == 'p') ADVANCE(3288);
      if (lookahead == 'r') ADVANCE(3281);
      if (lookahead == 's') ADVANCE(3282);
      if (lookahead == 'u') ADVANCE(3283);
      if (lookahead == '|') ADVANCE(3290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3276);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '\\') ADVANCE(3065);
      if (lookahead != 0) ADVANCE(3064);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(3053);
      if (lookahead == '\'') ADVANCE(3055);
      if (lookahead == '0') ADVANCE(3261);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(3053);
      if (lookahead == '\'') ADVANCE(3055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(3181);
      if (lookahead == '=') ADVANCE(3050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ') ADVANCE(3179);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(3070);
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead == '\\') ADVANCE(3069);
      if (lookahead != 0) ADVANCE(3068);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(3270);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(3277);
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead == '-') ADVANCE(3292);
      if (lookahead == 'a') ADVANCE(3285);
      if (lookahead == 'd') ADVANCE(3284);
      if (lookahead == 'e') ADVANCE(3289);
      if (lookahead == 'f') ADVANCE(3286);
      if (lookahead == 'k') ADVANCE(3280);
      if (lookahead == 'l') ADVANCE(3278);
      if (lookahead == 'm') ADVANCE(3279);
      if (lookahead == 'o') ADVANCE(3287);
      if (lookahead == 'p') ADVANCE(3288);
      if (lookahead == 'r') ADVANCE(3281);
      if (lookahead == 's') ADVANCE(3282);
      if (lookahead == 'u') ADVANCE(3283);
      if (lookahead == '|') ADVANCE(3290);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3276);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead == '\\') ADVANCE(3069);
      if (lookahead != 0) ADVANCE(3068);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == 'n') ADVANCE(744);
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(616);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(1126);
      if (lookahead == 'g') ADVANCE(945);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(626);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(628);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(1127);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(1500);
      if (lookahead == '/') ADVANCE(3266);
      if (lookahead == '_') ADVANCE(392);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(474);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(551);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(737);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(2760);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(1973);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(1128);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(1688);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(1543);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(1260);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(571);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(1141);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(633);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(445);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(2921);
      if (lookahead == '.') ADVANCE(2893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(702);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(968);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(574);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(614);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(1526);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(639);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(594);
      if (lookahead == 'd') ADVANCE(3267);
      END_STATE();
    case 47:
      if (lookahead == '-') ADVANCE(642);
      if (lookahead == 's') ADVANCE(2610);
      END_STATE();
    case 48:
      if (lookahead == '-') ADVANCE(1086);
      END_STATE();
    case 49:
      if (lookahead == '-') ADVANCE(1450);
      END_STATE();
    case 50:
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 51:
      if (lookahead == '-') ADVANCE(711);
      if (lookahead == 'g') ADVANCE(2259);
      END_STATE();
    case 52:
      if (lookahead == '-') ADVANCE(738);
      END_STATE();
    case 53:
      if (lookahead == '-') ADVANCE(1541);
      END_STATE();
    case 54:
      if (lookahead == '-') ADVANCE(1099);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(2390);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(2743);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(1514);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(550);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(267);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(300);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(2834);
      if (lookahead == 'b') ADVANCE(1363);
      if (lookahead == 'c') ADVANCE(879);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(588);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(296);
      if (lookahead == '8') ADVANCE(140);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'R') ADVANCE(338);
      if (lookahead == 'S') ADVANCE(337);
      if (lookahead == 'a') ADVANCE(1569);
      if (lookahead == 'b') ADVANCE(2226);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead == 'd') ADVANCE(466);
      if (lookahead == 'e') ADVANCE(2302);
      if (lookahead == 'f') ADVANCE(1409);
      if (lookahead == 'k') ADVANCE(2393);
      if (lookahead == 'l') ADVANCE(1915);
      if (lookahead == 'n') ADVANCE(2015);
      if (lookahead == 'p') ADVANCE(1204);
      if (lookahead == 'r') ADVANCE(947);
      if (lookahead == 's') ADVANCE(901);
      if (lookahead == 't') ADVANCE(1972);
      if (lookahead == 'u') ADVANCE(1877);
      if (lookahead == 'w') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3082);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(596);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(2786);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(2758);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(1142);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(2782);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(674);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(2400);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(1138);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(1284);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(2748);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(1292);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(720);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(1117);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(1575);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(2455);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(1274);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(593);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(1123);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(2606);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(2730);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(2437);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(2397);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(820);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(1234);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(1154);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(2080);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(1164);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(476);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(2082);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(1993);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(1160);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(2733);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(1690);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(2152);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(1930);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(1134);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(564);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(1631);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(2445);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(1077);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(834);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(859);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(577);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(1880);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(2044);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(530);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(2109);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(1666);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(522);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(1271);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(2697);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(680);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(1835);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(2715);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(1979);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(1888);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(1504);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(2698);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(2481);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(2574);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(1988);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(725);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(2253);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(2699);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(2427);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(1938);
      if (lookahead == '_') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(683);
      if (lookahead == 'r') ADVANCE(1294);
      if (lookahead == 's') ADVANCE(856);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(1878);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(1599);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(1997);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(2573);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(2439);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(1538);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(2901);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(2700);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(2428);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(2443);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(1507);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(1323);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(1652);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(2701);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(1336);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(2581);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(1508);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(2702);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(2585);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(1509);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(2703);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(691);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(1511);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(1512);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(2246);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(1513);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(2349);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(2237);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(912);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(1140);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(2615);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(2449);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(1634);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(2132);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(643);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(2131);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(1637);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(1852);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(532);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(615);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(2717);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(1528);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(1854);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(2256);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(2639);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(2458);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(2453);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(595);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(2718);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(1863);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(2459);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(2719);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(2766);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(2462);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(2721);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(2725);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(2467);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(2468);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(2470);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(2768);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(1097);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(1461);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(2506);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(1646);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(1148);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(2116);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(1051);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(1053);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(1729);
      if (lookahead == 'd') ADVANCE(528);
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(1531);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(1861);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(2909);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(2909);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2891);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(1654);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(1058);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(2647);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(1098);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(489);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(1069);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(2649);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(491);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(1733);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(493);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(1734);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(1537);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(495);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(1735);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(496);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(497);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(2793);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(2770);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(1157);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(1158);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(2038);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(2496);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(2134);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(1883);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(1539);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(1159);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(2135);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(1161);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(1162);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(636);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(1092);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(731);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(2350);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(2774);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(1095);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(2873);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(2508);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(1670);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(1114);
      END_STATE();
    case 251:
      if (lookahead == '/') ADVANCE(3266);
      END_STATE();
    case 252:
      if (lookahead == '/') ADVANCE(3266);
      if (lookahead == '_') ADVANCE(392);
      END_STATE();
    case 253:
      if (lookahead == '/') ADVANCE(2921);
      END_STATE();
    case 254:
      if (lookahead == '/') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '0') ADVANCE(3297);
      END_STATE();
    case 256:
      if (lookahead == '0') ADVANCE(282);
      END_STATE();
    case 257:
      if (lookahead == '0') ADVANCE(2995);
      END_STATE();
    case 258:
      if (lookahead == '0') ADVANCE(2993);
      END_STATE();
    case 259:
      if (lookahead == '0') ADVANCE(3253);
      if (lookahead == 'B') ADVANCE(368);
      if (lookahead == 'U') ADVANCE(1742);
      if (lookahead == 'Z') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(2402);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'c') ADVANCE(923);
      if (lookahead == 'd') ADVANCE(465);
      if (lookahead == 'g') ADVANCE(1850);
      if (lookahead == 'h') ADVANCE(1496);
      if (lookahead == 'k') ADVANCE(802);
      if (lookahead == 'l') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(1908);
      if (lookahead == 'o') ADVANCE(2111);
      if (lookahead == 'p') ADVANCE(1200);
      if (lookahead == 'r') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1769);
      if (lookahead == 'w') ADVANCE(1501);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3259);
      END_STATE();
    case 260:
      if (lookahead == '0') ADVANCE(3145);
      END_STATE();
    case 261:
      if (lookahead == '0') ADVANCE(3146);
      END_STATE();
    case 262:
      if (lookahead == '0') ADVANCE(3264);
      if (lookahead == '3') ADVANCE(323);
      if (lookahead == 'A') ADVANCE(329);
      if (lookahead == 'B') ADVANCE(345);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead == 'I') ADVANCE(320);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(2019);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2890);
      END_STATE();
    case 263:
      if (lookahead == '0') ADVANCE(256);
      END_STATE();
    case 264:
      if (lookahead == '1') ADVANCE(3297);
      if (lookahead == '2') ADVANCE(278);
      if (lookahead == '3') ADVANCE(297);
      if (lookahead == '5') ADVANCE(270);
      END_STATE();
    case 265:
      if (lookahead == '1') ADVANCE(263);
      END_STATE();
    case 266:
      if (lookahead == '1') ADVANCE(279);
      if (lookahead == '2') ADVANCE(289);
      END_STATE();
    case 267:
      if (lookahead == '1') ADVANCE(3078);
      if (lookahead == '2') ADVANCE(3077);
      END_STATE();
    case 268:
      if (lookahead == '1') ADVANCE(3082);
      END_STATE();
    case 269:
      if (lookahead == '1') ADVANCE(293);
      END_STATE();
    case 270:
      if (lookahead == '1') ADVANCE(274);
      END_STATE();
    case 271:
      if (lookahead == '2') ADVANCE(1498);
      if (lookahead == 'e') ADVANCE(561);
      if (lookahead == 'h') ADVANCE(1914);
      if (lookahead == 'i') ADVANCE(1166);
      if (lookahead == 'k') ADVANCE(1362);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 272:
      if (lookahead == '2') ADVANCE(3298);
      END_STATE();
    case 273:
      if (lookahead == '2') ADVANCE(3295);
      END_STATE();
    case 274:
      if (lookahead == '2') ADVANCE(3297);
      END_STATE();
    case 275:
      if (lookahead == '2') ADVANCE(284);
      if (lookahead == '4') ADVANCE(301);
      END_STATE();
    case 276:
      if (lookahead == '2') ADVANCE(2935);
      END_STATE();
    case 277:
      if (lookahead == '2') ADVANCE(2936);
      END_STATE();
    case 278:
      if (lookahead == '2') ADVANCE(283);
      if (lookahead == '5') ADVANCE(292);
      END_STATE();
    case 279:
      if (lookahead == '2') ADVANCE(295);
      if (lookahead == '9') ADVANCE(273);
      END_STATE();
    case 280:
      if (lookahead == '2') ADVANCE(36);
      END_STATE();
    case 281:
      if (lookahead == '2') ADVANCE(287);
      if (lookahead == '4') ADVANCE(303);
      END_STATE();
    case 282:
      if (lookahead == '3') ADVANCE(3135);
      END_STATE();
    case 283:
      if (lookahead == '4') ADVANCE(3297);
      END_STATE();
    case 284:
      if (lookahead == '4') ADVANCE(285);
      END_STATE();
    case 285:
      if (lookahead == '4') ADVANCE(257);
      END_STATE();
    case 286:
      if (lookahead == '4') ADVANCE(260);
      END_STATE();
    case 287:
      if (lookahead == '4') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '5') ADVANCE(3295);
      END_STATE();
    case 289:
      if (lookahead == '5') ADVANCE(291);
      END_STATE();
    case 290:
      if (lookahead == '5') ADVANCE(307);
      END_STATE();
    case 291:
      if (lookahead == '6') ADVANCE(3295);
      END_STATE();
    case 292:
      if (lookahead == '6') ADVANCE(3297);
      END_STATE();
    case 293:
      if (lookahead == '6') ADVANCE(255);
      END_STATE();
    case 294:
      if (lookahead == '7') ADVANCE(2996);
      if (lookahead == '8') ADVANCE(2997);
      END_STATE();
    case 295:
      if (lookahead == '8') ADVANCE(3295);
      END_STATE();
    case 296:
      if (lookahead == '8') ADVANCE(3077);
      END_STATE();
    case 297:
      if (lookahead == '8') ADVANCE(283);
      END_STATE();
    case 298:
      if (lookahead == '8') ADVANCE(290);
      END_STATE();
    case 299:
      if (lookahead == '8') ADVANCE(258);
      END_STATE();
    case 300:
      if (lookahead == '8') ADVANCE(298);
      END_STATE();
    case 301:
      if (lookahead == '8') ADVANCE(299);
      END_STATE();
    case 302:
      if (lookahead == '8') ADVANCE(261);
      END_STATE();
    case 303:
      if (lookahead == '8') ADVANCE(302);
      END_STATE();
    case 304:
      if (lookahead == '8') ADVANCE(101);
      END_STATE();
    case 305:
      if (lookahead == '8') ADVANCE(233);
      END_STATE();
    case 306:
      if (lookahead == '9') ADVANCE(273);
      END_STATE();
    case 307:
      if (lookahead == '9') ADVANCE(60);
      END_STATE();
    case 308:
      if (lookahead == ':') ADVANCE(3089);
      END_STATE();
    case 309:
      if (lookahead == ':') ADVANCE(254);
      END_STATE();
    case 310:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 311:
      if (lookahead == '=') ADVANCE(3271);
      END_STATE();
    case 312:
      if (lookahead == 'A') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 313:
      if (lookahead == 'A') ADVANCE(3294);
      END_STATE();
    case 314:
      if (lookahead == 'A') ADVANCE(264);
      END_STATE();
    case 315:
      if (lookahead == 'A') ADVANCE(3295);
      END_STATE();
    case 316:
      if (lookahead == 'A') ADVANCE(266);
      END_STATE();
    case 317:
      if (lookahead == 'A') ADVANCE(350);
      END_STATE();
    case 318:
      if (lookahead == 'B') ADVANCE(3298);
      END_STATE();
    case 319:
      if (lookahead == 'C') ADVANCE(321);
      if (lookahead == 'D') ADVANCE(325);
      if (lookahead == 'L') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 320:
      if (lookahead == 'D') ADVANCE(331);
      END_STATE();
    case 321:
      if (lookahead == 'D') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 322:
      if (lookahead == 'D') ADVANCE(269);
      END_STATE();
    case 323:
      if (lookahead == 'D') ADVANCE(332);
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2889);
      END_STATE();
    case 324:
      if (lookahead == 'D') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 325:
      if (lookahead == 'D') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 326:
      if (lookahead == 'E') ADVANCE(347);
      END_STATE();
    case 327:
      if (lookahead == 'E') ADVANCE(349);
      END_STATE();
    case 328:
      if (lookahead == 'E') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 329:
      if (lookahead == 'E') ADVANCE(359);
      END_STATE();
    case 330:
      if (lookahead == 'E') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 331:
      if (lookahead == 'E') ADVANCE(315);
      END_STATE();
    case 332:
      if (lookahead == 'E') ADVANCE(361);
      END_STATE();
    case 333:
      if (lookahead == 'F') ADVANCE(341);
      END_STATE();
    case 334:
      if (lookahead == 'G') ADVANCE(3294);
      END_STATE();
    case 335:
      if (lookahead == 'H') ADVANCE(3294);
      if (lookahead == 'S') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 336:
      if (lookahead == 'H') ADVANCE(3295);
      END_STATE();
    case 337:
      if (lookahead == 'H') ADVANCE(314);
      END_STATE();
    case 338:
      if (lookahead == 'I') ADVANCE(356);
      END_STATE();
    case 339:
      if (lookahead == 'I') ADVANCE(356);
      if (lookahead == 'S') ADVANCE(313);
      END_STATE();
    case 340:
      if (lookahead == 'I') ADVANCE(318);
      END_STATE();
    case 341:
      if (lookahead == 'I') ADVANCE(363);
      END_STATE();
    case 342:
      if (lookahead == 'I') ADVANCE(354);
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 343:
      if (lookahead == 'I') ADVANCE(355);
      END_STATE();
    case 344:
      if (lookahead == 'I') ADVANCE(316);
      END_STATE();
    case 345:
      if (lookahead == 'L') ADVANCE(353);
      END_STATE();
    case 346:
      if (lookahead == 'L') ADVANCE(353);
      if (lookahead == 'Z') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 347:
      if (lookahead == 'L') ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'L') ADVANCE(344);
      END_STATE();
    case 349:
      if (lookahead == 'M') ADVANCE(322);
      END_STATE();
    case 350:
      if (lookahead == 'M') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(364);
      END_STATE();
    case 351:
      if (lookahead == 'M') ADVANCE(326);
      if (lookahead == 'S') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 352:
      if (lookahead == 'O') ADVANCE(333);
      END_STATE();
    case 353:
      if (lookahead == 'O') ADVANCE(366);
      END_STATE();
    case 354:
      if (lookahead == 'P') ADVANCE(3298);
      END_STATE();
    case 355:
      if (lookahead == 'P') ADVANCE(272);
      END_STATE();
    case 356:
      if (lookahead == 'P') ADVANCE(327);
      END_STATE();
    case 357:
      if (lookahead == 'S') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 358:
      if (lookahead == 'S') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 359:
      if (lookahead == 'S') ADVANCE(3296);
      END_STATE();
    case 360:
      if (lookahead == 'S') ADVANCE(3296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 361:
      if (lookahead == 'S') ADVANCE(3295);
      END_STATE();
    case 362:
      if (lookahead == 'S') ADVANCE(3295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 363:
      if (lookahead == 'S') ADVANCE(336);
      END_STATE();
    case 364:
      if (lookahead == 'T') ADVANCE(288);
      END_STATE();
    case 365:
      if (lookahead == 'T') ADVANCE(2912);
      END_STATE();
    case 366:
      if (lookahead == 'W') ADVANCE(333);
      END_STATE();
    case 367:
      if (lookahead == 'W') ADVANCE(352);
      END_STATE();
    case 368:
      if (lookahead == 'Z') ADVANCE(343);
      END_STATE();
    case 369:
      if (lookahead == '_') ADVANCE(393);
      END_STATE();
    case 370:
      if (lookahead == '_') ADVANCE(391);
      END_STATE();
    case 371:
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead == 'u') ADVANCE(1614);
      if (lookahead == 'z') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 372:
      if (lookahead == 'a') ADVANCE(1497);
      if (lookahead == 'o') ADVANCE(2146);
      if (lookahead == 'p') ADVANCE(2147);
      if (lookahead == 'u') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 373:
      if (lookahead == 'a') ADVANCE(2396);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(1187);
      if (lookahead == 'i') ADVANCE(1718);
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 374:
      if (lookahead == 'a') ADVANCE(1761);
      if (lookahead == 'b') ADVANCE(1912);
      if (lookahead == 'e') ADVANCE(2177);
      if (lookahead == 'i') ADVANCE(1762);
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 375:
      if (lookahead == 'a') ADVANCE(2832);
      END_STATE();
    case 376:
      if (lookahead == 'a') ADVANCE(1573);
      if (lookahead == 'c') ADVANCE(1919);
      if (lookahead == 'd') ADVANCE(808);
      if (lookahead == 'e') ADVANCE(1737);
      if (lookahead == 'f') ADVANCE(1990);
      if (lookahead == 'g') ADVANCE(2151);
      if (lookahead == 'i') ADVANCE(1763);
      if (lookahead == 'k') ADVANCE(813);
      if (lookahead == 'm') ADVANCE(394);
      if (lookahead == 'p') ADVANCE(862);
      if (lookahead == 'r') ADVANCE(395);
      if (lookahead == 's') ADVANCE(823);
      if (lookahead == 't') ADVANCE(1101);
      if (lookahead == 'u') ADVANCE(2456);
      END_STATE();
    case 377:
      if (lookahead == 'a') ADVANCE(3034);
      END_STATE();
    case 378:
      if (lookahead == 'a') ADVANCE(2933);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(2934);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(2051);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(2395);
      if (lookahead == 'e') ADVANCE(2176);
      if (lookahead == 'g') ADVANCE(2052);
      if (lookahead == 'h') ADVANCE(1971);
      if (lookahead == 'i') ADVANCE(1836);
      if (lookahead == 'r') ADVANCE(811);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 'c') ADVANCE(2173);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(2681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(2549);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(1375);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(1839);
      if (lookahead == 'e') ADVANCE(1772);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(2091);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(1574);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(2188);
      if (lookahead == 'd') ADVANCE(1423);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(1574);
      if (lookahead == 'c') ADVANCE(2188);
      if (lookahead == 'e') ADVANCE(2798);
      if (lookahead == 's') ADVANCE(1287);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(1887);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(1764);
      if (lookahead == 'e') ADVANCE(2145);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(2150);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(655);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(2436);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(2731);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(1675);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(1664);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(1818);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(1677);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(2548);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(1744);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(2611);
      if (lookahead == 'b') ADVANCE(400);
      if (lookahead == 'c') ADVANCE(1621);
      if (lookahead == 'd') ADVANCE(403);
      if (lookahead == 'f') ADVANCE(1454);
      if (lookahead == 'l') ADVANCE(1986);
      if (lookahead == 'm') ADVANCE(1312);
      if (lookahead == 'o') ADVANCE(2129);
      if (lookahead == 'r') ADVANCE(809);
      if (lookahead == 's') ADVANCE(845);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(1645);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(1745);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(2605);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(2252);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 414:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 415:
      if (lookahead == 'a') ADVANCE(1545);
      END_STATE();
    case 416:
      if (lookahead == 'a') ADVANCE(1546);
      END_STATE();
    case 417:
      if (lookahead == 'a') ADVANCE(2094);
      END_STATE();
    case 418:
      if (lookahead == 'a') ADVANCE(2401);
      END_STATE();
    case 419:
      if (lookahead == 'a') ADVANCE(565);
      END_STATE();
    case 420:
      if (lookahead == 'a') ADVANCE(701);
      if (lookahead == 'b') ADVANCE(456);
      if (lookahead == 'e') ADVANCE(2801);
      if (lookahead == 'g') ADVANCE(2704);
      if (lookahead == 'n') ADVANCE(2020);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3085);
      END_STATE();
    case 421:
      if (lookahead == 'a') ADVANCE(2526);
      END_STATE();
    case 422:
      if (lookahead == 'a') ADVANCE(2060);
      END_STATE();
    case 423:
      if (lookahead == 'a') ADVANCE(2264);
      END_STATE();
    case 424:
      if (lookahead == 'a') ADVANCE(2572);
      END_STATE();
    case 425:
      if (lookahead == 'a') ADVANCE(1561);
      END_STATE();
    case 426:
      if (lookahead == 'a') ADVANCE(2207);
      END_STATE();
    case 427:
      if (lookahead == 'a') ADVANCE(2534);
      END_STATE();
    case 428:
      if (lookahead == 'a') ADVANCE(1564);
      END_STATE();
    case 429:
      if (lookahead == 'a') ADVANCE(2438);
      END_STATE();
    case 430:
      if (lookahead == 'a') ADVANCE(2197);
      END_STATE();
    case 431:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 432:
      if (lookahead == 'a') ADVANCE(2540);
      END_STATE();
    case 433:
      if (lookahead == 'a') ADVANCE(2170);
      END_STATE();
    case 434:
      if (lookahead == 'a') ADVANCE(1579);
      if (lookahead == 'i') ADVANCE(1243);
      if (lookahead == 'l') ADVANCE(954);
      if (lookahead == 's') ADVANCE(1016);
      END_STATE();
    case 435:
      if (lookahead == 'a') ADVANCE(1595);
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 436:
      if (lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 437:
      if (lookahead == 'a') ADVANCE(2561);
      END_STATE();
    case 438:
      if (lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 439:
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 440:
      if (lookahead == 'a') ADVANCE(2423);
      END_STATE();
    case 441:
      if (lookahead == 'a') ADVANCE(1969);
      END_STATE();
    case 442:
      if (lookahead == 'a') ADVANCE(1625);
      END_STATE();
    case 443:
      if (lookahead == 'a') ADVANCE(1516);
      END_STATE();
    case 444:
      if (lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 445:
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead == 'o') ADVANCE(555);
      if (lookahead == 's') ADVANCE(1311);
      END_STATE();
    case 446:
      if (lookahead == 'a') ADVANCE(2261);
      END_STATE();
    case 447:
      if (lookahead == 'a') ADVANCE(2841);
      END_STATE();
    case 448:
      if (lookahead == 'a') ADVANCE(1216);
      if (lookahead == 'e') ADVANCE(2323);
      END_STATE();
    case 449:
      if (lookahead == 'a') ADVANCE(1695);
      END_STATE();
    case 450:
      if (lookahead == 'a') ADVANCE(2607);
      END_STATE();
    case 451:
      if (lookahead == 'a') ADVANCE(2598);
      END_STATE();
    case 452:
      if (lookahead == 'a') ADVANCE(1832);
      END_STATE();
    case 453:
      if (lookahead == 'a') ADVANCE(1605);
      END_STATE();
    case 454:
      if (lookahead == 'a') ADVANCE(1224);
      if (lookahead == 'e') ADVANCE(2347);
      END_STATE();
    case 455:
      if (lookahead == 'a') ADVANCE(1696);
      END_STATE();
    case 456:
      if (lookahead == 'a') ADVANCE(2418);
      END_STATE();
    case 457:
      if (lookahead == 'a') ADVANCE(1657);
      END_STATE();
    case 458:
      if (lookahead == 'a') ADVANCE(2601);
      END_STATE();
    case 459:
      if (lookahead == 'a') ADVANCE(1510);
      END_STATE();
    case 460:
      if (lookahead == 'a') ADVANCE(2842);
      END_STATE();
    case 461:
      if (lookahead == 'a') ADVANCE(1668);
      END_STATE();
    case 462:
      if (lookahead == 'a') ADVANCE(1701);
      END_STATE();
    case 463:
      if (lookahead == 'a') ADVANCE(1837);
      END_STATE();
    case 464:
      if (lookahead == 'a') ADVANCE(2450);
      END_STATE();
    case 465:
      if (lookahead == 'a') ADVANCE(1822);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(2002);
      END_STATE();
    case 466:
      if (lookahead == 'a') ADVANCE(1823);
      if (lookahead == 'e') ADVANCE(1156);
      if (lookahead == 'i') ADVANCE(2240);
      END_STATE();
    case 467:
      if (lookahead == 'a') ADVANCE(1704);
      END_STATE();
    case 468:
      if (lookahead == 'a') ADVANCE(1705);
      END_STATE();
    case 469:
      if (lookahead == 'a') ADVANCE(1846);
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 470:
      if (lookahead == 'a') ADVANCE(1797);
      END_STATE();
    case 471:
      if (lookahead == 'a') ADVANCE(1707);
      END_STATE();
    case 472:
      if (lookahead == 'a') ADVANCE(1708);
      END_STATE();
    case 473:
      if (lookahead == 'a') ADVANCE(1709);
      END_STATE();
    case 474:
      if (lookahead == 'a') ADVANCE(1618);
      if (lookahead == 's') ADVANCE(941);
      END_STATE();
    case 475:
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'p') ADVANCE(1570);
      END_STATE();
    case 476:
      if (lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 477:
      if (lookahead == 'a') ADVANCE(2711);
      END_STATE();
    case 478:
      if (lookahead == 'a') ADVANCE(592);
      END_STATE();
    case 479:
      if (lookahead == 'a') ADVANCE(608);
      END_STATE();
    case 480:
      if (lookahead == 'a') ADVANCE(2631);
      END_STATE();
    case 481:
      if (lookahead == 'a') ADVANCE(2612);
      END_STATE();
    case 482:
      if (lookahead == 'a') ADVANCE(1853);
      END_STATE();
    case 483:
      if (lookahead == 'a') ADVANCE(1620);
      END_STATE();
    case 484:
      if (lookahead == 'a') ADVANCE(2713);
      END_STATE();
    case 485:
      if (lookahead == 'a') ADVANCE(2266);
      END_STATE();
    case 486:
      if (lookahead == 'a') ADVANCE(2616);
      END_STATE();
    case 487:
      if (lookahead == 'a') ADVANCE(1623);
      if (lookahead == 'l') ADVANCE(977);
      END_STATE();
    case 488:
      if (lookahead == 'a') ADVANCE(2617);
      END_STATE();
    case 489:
      if (lookahead == 'a') ADVANCE(1626);
      END_STATE();
    case 490:
      if (lookahead == 'a') ADVANCE(2618);
      END_STATE();
    case 491:
      if (lookahead == 'a') ADVANCE(1627);
      END_STATE();
    case 492:
      if (lookahead == 'a') ADVANCE(2619);
      END_STATE();
    case 493:
      if (lookahead == 'a') ADVANCE(1629);
      END_STATE();
    case 494:
      if (lookahead == 'a') ADVANCE(2621);
      END_STATE();
    case 495:
      if (lookahead == 'a') ADVANCE(1630);
      END_STATE();
    case 496:
      if (lookahead == 'a') ADVANCE(1633);
      END_STATE();
    case 497:
      if (lookahead == 'a') ADVANCE(1635);
      END_STATE();
    case 498:
      if (lookahead == 'a') ADVANCE(1636);
      END_STATE();
    case 499:
      if (lookahead == 'a') ADVANCE(1638);
      END_STATE();
    case 500:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 501:
      if (lookahead == 'a') ADVANCE(2280);
      END_STATE();
    case 502:
      if (lookahead == 'a') ADVANCE(2628);
      END_STATE();
    case 503:
      if (lookahead == 'a') ADVANCE(2734);
      END_STATE();
    case 504:
      if (lookahead == 'a') ADVANCE(2321);
      END_STATE();
    case 505:
      if (lookahead == 'a') ADVANCE(1648);
      END_STATE();
    case 506:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 507:
      if (lookahead == 'a') ADVANCE(2330);
      END_STATE();
    case 508:
      if (lookahead == 'a') ADVANCE(2290);
      END_STATE();
    case 509:
      if (lookahead == 'a') ADVANCE(2660);
      END_STATE();
    case 510:
      if (lookahead == 'a') ADVANCE(2666);
      END_STATE();
    case 511:
      if (lookahead == 'a') ADVANCE(1659);
      END_STATE();
    case 512:
      if (lookahead == 'a') ADVANCE(2138);
      END_STATE();
    case 513:
      if (lookahead == 'b') ADVANCE(2680);
      if (lookahead == 'f') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(2918);
      END_STATE();
    case 514:
      if (lookahead == 'b') ADVANCE(251);
      END_STATE();
    case 515:
      if (lookahead == 'b') ADVANCE(2986);
      END_STATE();
    case 516:
      if (lookahead == 'b') ADVANCE(2950);
      END_STATE();
    case 517:
      if (lookahead == 'b') ADVANCE(2951);
      END_STATE();
    case 518:
      if (lookahead == 'b') ADVANCE(1619);
      END_STATE();
    case 519:
      if (lookahead == 'b') ADVANCE(1118);
      END_STATE();
    case 520:
      if (lookahead == 'b') ADVANCE(1926);
      if (lookahead == 'i') ADVANCE(1137);
      END_STATE();
    case 521:
      if (lookahead == 'b') ADVANCE(2687);
      END_STATE();
    case 522:
      if (lookahead == 'b') ADVANCE(2694);
      END_STATE();
    case 523:
      if (lookahead == 'b') ADVANCE(2690);
      END_STATE();
    case 524:
      if (lookahead == 'b') ADVANCE(2110);
      END_STATE();
    case 525:
      if (lookahead == 'b') ADVANCE(933);
      END_STATE();
    case 526:
      if (lookahead == 'b') ADVANCE(419);
      END_STATE();
    case 527:
      if (lookahead == 'b') ADVANCE(1615);
      END_STATE();
    case 528:
      if (lookahead == 'b') ADVANCE(178);
      END_STATE();
    case 529:
      if (lookahead == 'b') ADVANCE(1918);
      END_STATE();
    case 530:
      if (lookahead == 'b') ADVANCE(1596);
      END_STATE();
    case 531:
      if (lookahead == 'b') ADVANCE(1580);
      END_STATE();
    case 532:
      if (lookahead == 'b') ADVANCE(1597);
      END_STATE();
    case 533:
      if (lookahead == 'b') ADVANCE(1506);
      END_STATE();
    case 534:
      if (lookahead == 'b') ADVANCE(2714);
      END_STATE();
    case 535:
      if (lookahead == 'b') ADVANCE(1640);
      END_STATE();
    case 536:
      if (lookahead == 'b') ADVANCE(1642);
      END_STATE();
    case 537:
      if (lookahead == 'b') ADVANCE(1532);
      END_STATE();
    case 538:
      if (lookahead == 'b') ADVANCE(1533);
      END_STATE();
    case 539:
      if (lookahead == 'b') ADVANCE(1534);
      END_STATE();
    case 540:
      if (lookahead == 'b') ADVANCE(1535);
      END_STATE();
    case 541:
      if (lookahead == 'b') ADVANCE(1113);
      END_STATE();
    case 542:
      if (lookahead == 'c') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 543:
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 544:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 545:
      if (lookahead == 'c') ADVANCE(1481);
      if (lookahead == 'd') ADVANCE(1301);
      if (lookahead == 'm') ADVANCE(2005);
      END_STATE();
    case 546:
      if (lookahead == 'c') ADVANCE(1976);
      if (lookahead == 's') ADVANCE(1021);
      END_STATE();
    case 547:
      if (lookahead == 'c') ADVANCE(3166);
      END_STATE();
    case 548:
      if (lookahead == 'c') ADVANCE(3092);
      END_STATE();
    case 549:
      if (lookahead == 'c') ADVANCE(3150);
      END_STATE();
    case 550:
      if (lookahead == 'c') ADVANCE(1447);
      if (lookahead == 'd') ADVANCE(1453);
      END_STATE();
    case 551:
      if (lookahead == 'c') ADVANCE(1262);
      if (lookahead == 'k') ADVANCE(972);
      END_STATE();
    case 552:
      if (lookahead == 'c') ADVANCE(2874);
      END_STATE();
    case 553:
      if (lookahead == 'c') ADVANCE(1567);
      if (lookahead == 'p') ADVANCE(2716);
      if (lookahead == 't') ADVANCE(839);
      END_STATE();
    case 554:
      if (lookahead == 'c') ADVANCE(1517);
      END_STATE();
    case 555:
      if (lookahead == 'c') ADVANCE(515);
      END_STATE();
    case 556:
      if (lookahead == 'c') ADVANCE(1490);
      END_STATE();
    case 557:
      if (lookahead == 'c') ADVANCE(1491);
      END_STATE();
    case 558:
      if (lookahead == 'c') ADVANCE(1263);
      END_STATE();
    case 559:
      if (lookahead == 'c') ADVANCE(1917);
      END_STATE();
    case 560:
      if (lookahead == 'c') ADVANCE(2180);
      END_STATE();
    case 561:
      if (lookahead == 'c') ADVANCE(2180);
      if (lookahead == 'l') ADVANCE(815);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 562:
      if (lookahead == 'c') ADVANCE(1492);
      END_STATE();
    case 563:
      if (lookahead == 'c') ADVANCE(1493);
      END_STATE();
    case 564:
      if (lookahead == 'c') ADVANCE(1261);
      END_STATE();
    case 565:
      if (lookahead == 'c') ADVANCE(1495);
      END_STATE();
    case 566:
      if (lookahead == 'c') ADVANCE(2515);
      END_STATE();
    case 567:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 568:
      if (lookahead == 'c') ADVANCE(441);
      END_STATE();
    case 569:
      if (lookahead == 'c') ADVANCE(2823);
      END_STATE();
    case 570:
      if (lookahead == 'c') ADVANCE(404);
      END_STATE();
    case 571:
      if (lookahead == 'c') ADVANCE(1932);
      if (lookahead == 'f') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead == 'k') ADVANCE(822);
      if (lookahead == 's') ADVANCE(956);
      if (lookahead == 'w') ADVANCE(1523);
      END_STATE();
    case 572:
      if (lookahead == 'c') ADVANCE(1432);
      END_STATE();
    case 573:
      if (lookahead == 'c') ADVANCE(2353);
      END_STATE();
    case 574:
      if (lookahead == 'c') ADVANCE(2242);
      if (lookahead == 'm') ADVANCE(728);
      if (lookahead == 't') ADVANCE(1303);
      if (lookahead == 'v') ADVANCE(409);
      END_STATE();
    case 575:
      if (lookahead == 'c') ADVANCE(757);
      END_STATE();
    case 576:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 577:
      if (lookahead == 'c') ADVANCE(1948);
      END_STATE();
    case 578:
      if (lookahead == 'c') ADVANCE(2536);
      END_STATE();
    case 579:
      if (lookahead == 'c') ADVANCE(2544);
      END_STATE();
    case 580:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 581:
      if (lookahead == 'c') ADVANCE(787);
      END_STATE();
    case 582:
      if (lookahead == 'c') ADVANCE(909);
      END_STATE();
    case 583:
      if (lookahead == 'c') ADVANCE(911);
      END_STATE();
    case 584:
      if (lookahead == 'c') ADVANCE(913);
      END_STATE();
    case 585:
      if (lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 586:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 587:
      if (lookahead == 'c') ADVANCE(1268);
      END_STATE();
    case 588:
      if (lookahead == 'c') ADVANCE(2039);
      if (lookahead == 's') ADVANCE(1104);
      END_STATE();
    case 589:
      if (lookahead == 'c') ADVANCE(1694);
      END_STATE();
    case 590:
      if (lookahead == 'c') ADVANCE(1297);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead == 'q') ADVANCE(2677);
      if (lookahead == 's') ADVANCE(2559);
      if (lookahead == 'v') ADVANCE(1911);
      END_STATE();
    case 591:
      if (lookahead == 'c') ADVANCE(417);
      END_STATE();
    case 592:
      if (lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 593:
      if (lookahead == 'c') ADVANCE(423);
      END_STATE();
    case 594:
      if (lookahead == 'c') ADVANCE(1484);
      if (lookahead == 'd') ADVANCE(1338);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'p') ADVANCE(2739);
      if (lookahead == 's') ADVANCE(1456);
      END_STATE();
    case 595:
      if (lookahead == 'c') ADVANCE(1270);
      END_STATE();
    case 596:
      if (lookahead == 'c') ADVANCE(2352);
      if (lookahead == 's') ADVANCE(1032);
      END_STATE();
    case 597:
      if (lookahead == 'c') ADVANCE(1699);
      END_STATE();
    case 598:
      if (lookahead == 'c') ADVANCE(425);
      END_STATE();
    case 599:
      if (lookahead == 'c') ADVANCE(1536);
      END_STATE();
    case 600:
      if (lookahead == 'c') ADVANCE(2285);
      END_STATE();
    case 601:
      if (lookahead == 'c') ADVANCE(1702);
      END_STATE();
    case 602:
      if (lookahead == 'c') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 603:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 604:
      if (lookahead == 'c') ADVANCE(2845);
      END_STATE();
    case 605:
      if (lookahead == 'c') ADVANCE(878);
      END_STATE();
    case 606:
      if (lookahead == 'c') ADVANCE(458);
      END_STATE();
    case 607:
      if (lookahead == 'c') ADVANCE(1522);
      END_STATE();
    case 608:
      if (lookahead == 'c') ADVANCE(1524);
      END_STATE();
    case 609:
      if (lookahead == 'c') ADVANCE(1054);
      END_STATE();
    case 610:
      if (lookahead == 'c') ADVANCE(931);
      END_STATE();
    case 611:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 612:
      if (lookahead == 'c') ADVANCE(2249);
      END_STATE();
    case 613:
      if (lookahead == 'c') ADVANCE(457);
      END_STATE();
    case 614:
      if (lookahead == 'c') ADVANCE(1624);
      if (lookahead == 'e') ADVANCE(2799);
      if (lookahead == 'f') ADVANCE(1464);
      if (lookahead == 'l') ADVANCE(2047);
      if (lookahead == 'm') ADVANCE(1455);
      if (lookahead == 'o') ADVANCE(2133);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == 's') ADVANCE(1266);
      END_STATE();
    case 615:
      if (lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 616:
      if (lookahead == 'c') ADVANCE(1037);
      if (lookahead == 's') ADVANCE(1356);
      END_STATE();
    case 617:
      if (lookahead == 'c') ADVANCE(2855);
      END_STATE();
    case 618:
      if (lookahead == 'c') ADVANCE(2257);
      END_STATE();
    case 619:
      if (lookahead == 'c') ADVANCE(2859);
      END_STATE();
    case 620:
      if (lookahead == 'c') ADVANCE(2860);
      END_STATE();
    case 621:
      if (lookahead == 'c') ADVANCE(2861);
      END_STATE();
    case 622:
      if (lookahead == 'c') ADVANCE(492);
      END_STATE();
    case 623:
      if (lookahead == 'c') ADVANCE(494);
      END_STATE();
    case 624:
      if (lookahead == 'c') ADVANCE(2630);
      END_STATE();
    case 625:
      if (lookahead == 'c') ADVANCE(1451);
      END_STATE();
    case 626:
      if (lookahead == 'c') ADVANCE(1041);
      if (lookahead == 'o') ADVANCE(2736);
      END_STATE();
    case 627:
      if (lookahead == 'c') ADVANCE(1462);
      END_STATE();
    case 628:
      if (lookahead == 'c') ADVANCE(1045);
      if (lookahead == 'r') ADVANCE(2403);
      END_STATE();
    case 629:
      if (lookahead == 'c') ADVANCE(1466);
      END_STATE();
    case 630:
      if (lookahead == 'c') ADVANCE(1470);
      END_STATE();
    case 631:
      if (lookahead == 'c') ADVANCE(1473);
      END_STATE();
    case 632:
      if (lookahead == 'c') ADVANCE(2345);
      END_STATE();
    case 633:
      if (lookahead == 'c') ADVANCE(2037);
      if (lookahead == 'd') ADVANCE(1100);
      END_STATE();
    case 634:
      if (lookahead == 'c') ADVANCE(211);
      END_STATE();
    case 635:
      if (lookahead == 'c') ADVANCE(511);
      END_STATE();
    case 636:
      if (lookahead == 'c') ADVANCE(1066);
      if (lookahead == 's') ADVANCE(1482);
      END_STATE();
    case 637:
      if (lookahead == 'c') ADVANCE(2348);
      END_STATE();
    case 638:
      if (lookahead == 'c') ADVANCE(2043);
      END_STATE();
    case 639:
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == 'k') ADVANCE(827);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'p') ADVANCE(2222);
      if (lookahead == 'r') ADVANCE(1080);
      if (lookahead == 's') ADVANCE(1485);
      END_STATE();
    case 640:
      if (lookahead == 'c') ADVANCE(512);
      END_STATE();
    case 641:
      if (lookahead == 'c') ADVANCE(1540);
      END_STATE();
    case 642:
      if (lookahead == 'c') ADVANCE(1283);
      if (lookahead == 'k') ADVANCE(1062);
      if (lookahead == 't') ADVANCE(2283);
      END_STATE();
    case 643:
      if (lookahead == 'c') ADVANCE(1486);
      END_STATE();
    case 644:
      if (lookahead == 'c') ADVANCE(1673);
      END_STATE();
    case 645:
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == 'g') ADVANCE(810);
      if (lookahead == 'l') ADVANCE(1189);
      if (lookahead == 'r') ADVANCE(1687);
      if (lookahead == 's') ADVANCE(1489);
      if (lookahead == 'u') ADVANCE(2552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 646:
      if (lookahead == 'd') ADVANCE(3298);
      END_STATE();
    case 647:
      if (lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 648:
      if (lookahead == 'd') ADVANCE(3267);
      END_STATE();
    case 649:
      if (lookahead == 'd') ADVANCE(3268);
      END_STATE();
    case 650:
      if (lookahead == 'd') ADVANCE(3214);
      END_STATE();
    case 651:
      if (lookahead == 'd') ADVANCE(3133);
      END_STATE();
    case 652:
      if (lookahead == 'd') ADVANCE(3172);
      if (lookahead == 'i') ADVANCE(1602);
      END_STATE();
    case 653:
      if (lookahead == 'd') ADVANCE(3170);
      if (lookahead == 'i') ADVANCE(1604);
      END_STATE();
    case 654:
      if (lookahead == 'd') ADVANCE(3203);
      if (lookahead == 'i') ADVANCE(1606);
      END_STATE();
    case 655:
      if (lookahead == 'd') ADVANCE(2987);
      END_STATE();
    case 656:
      if (lookahead == 'd') ADVANCE(3269);
      END_STATE();
    case 657:
      if (lookahead == 'd') ADVANCE(3196);
      if (lookahead == 'i') ADVANCE(1610);
      END_STATE();
    case 658:
      if (lookahead == 'd') ADVANCE(3101);
      END_STATE();
    case 659:
      if (lookahead == 'd') ADVANCE(3102);
      END_STATE();
    case 660:
      if (lookahead == 'd') ADVANCE(3016);
      END_STATE();
    case 661:
      if (lookahead == 'd') ADVANCE(3022);
      END_STATE();
    case 662:
      if (lookahead == 'd') ADVANCE(2988);
      END_STATE();
    case 663:
      if (lookahead == 'd') ADVANCE(3207);
      END_STATE();
    case 664:
      if (lookahead == 'd') ADVANCE(3020);
      END_STATE();
    case 665:
      if (lookahead == 'd') ADVANCE(3021);
      END_STATE();
    case 666:
      if (lookahead == 'd') ADVANCE(3104);
      END_STATE();
    case 667:
      if (lookahead == 'd') ADVANCE(3096);
      END_STATE();
    case 668:
      if (lookahead == 'd') ADVANCE(3131);
      END_STATE();
    case 669:
      if (lookahead == 'd') ADVANCE(3126);
      END_STATE();
    case 670:
      if (lookahead == 'd') ADVANCE(3150);
      END_STATE();
    case 671:
      if (lookahead == 'd') ADVANCE(706);
      END_STATE();
    case 672:
      if (lookahead == 'd') ADVANCE(803);
      END_STATE();
    case 673:
      if (lookahead == 'd') ADVANCE(516);
      END_STATE();
    case 674:
      if (lookahead == 'd') ADVANCE(398);
      END_STATE();
    case 675:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 676:
      if (lookahead == 'd') ADVANCE(1022);
      END_STATE();
    case 677:
      if (lookahead == 'd') ADVANCE(2357);
      END_STATE();
    case 678:
      if (lookahead == 'd') ADVANCE(1929);
      END_STATE();
    case 679:
      if (lookahead == 'd') ADVANCE(2363);
      END_STATE();
    case 680:
      if (lookahead == 'd') ADVANCE(2006);
      END_STATE();
    case 681:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 682:
      if (lookahead == 'd') ADVANCE(755);
      END_STATE();
    case 683:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 684:
      if (lookahead == 'd') ADVANCE(756);
      END_STATE();
    case 685:
      if (lookahead == 'd') ADVANCE(2369);
      END_STATE();
    case 686:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 687:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 688:
      if (lookahead == 'd') ADVANCE(2389);
      END_STATE();
    case 689:
      if (lookahead == 'd') ADVANCE(2391);
      END_STATE();
    case 690:
      if (lookahead == 'd') ADVANCE(861);
      END_STATE();
    case 691:
      if (lookahead == 'd') ADVANCE(866);
      END_STATE();
    case 692:
      if (lookahead == 'd') ADVANCE(764);
      END_STATE();
    case 693:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 694:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 695:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 696:
      if (lookahead == 'd') ADVANCE(771);
      END_STATE();
    case 697:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 698:
      if (lookahead == 'd') ADVANCE(773);
      END_STATE();
    case 699:
      if (lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 700:
      if (lookahead == 'd') ADVANCE(780);
      END_STATE();
    case 701:
      if (lookahead == 'd') ADVANCE(2769);
      END_STATE();
    case 702:
      if (lookahead == 'd') ADVANCE(2407);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(2284);
      if (lookahead == 's') ADVANCE(2076);
      END_STATE();
    case 703:
      if (lookahead == 'd') ADVANCE(938);
      if (lookahead == 'n') ADVANCE(745);
      END_STATE();
    case 704:
      if (lookahead == 'd') ADVANCE(1340);
      END_STATE();
    case 705:
      if (lookahead == 'd') ADVANCE(422);
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 706:
      if (lookahead == 'd') ADVANCE(953);
      END_STATE();
    case 707:
      if (lookahead == 'd') ADVANCE(1344);
      END_STATE();
    case 708:
      if (lookahead == 'd') ADVANCE(843);
      END_STATE();
    case 709:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 710:
      if (lookahead == 'd') ADVANCE(847);
      END_STATE();
    case 711:
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(2338);
      END_STATE();
    case 712:
      if (lookahead == 'd') ADVANCE(1024);
      END_STATE();
    case 713:
      if (lookahead == 'd') ADVANCE(870);
      if (lookahead == 's') ADVANCE(1308);
      END_STATE();
    case 714:
      if (lookahead == 'd') ADVANCE(981);
      END_STATE();
    case 715:
      if (lookahead == 'd') ADVANCE(717);
      END_STATE();
    case 716:
      if (lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 717:
      if (lookahead == 'd') ADVANCE(1006);
      END_STATE();
    case 718:
      if (lookahead == 'd') ADVANCE(948);
      END_STATE();
    case 719:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 720:
      if (lookahead == 'd') ADVANCE(1431);
      END_STATE();
    case 721:
      if (lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 722:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 723:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 724:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 725:
      if (lookahead == 'd') ADVANCE(1078);
      END_STATE();
    case 726:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 727:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 728:
      if (lookahead == 'd') ADVANCE(634);
      END_STATE();
    case 729:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 730:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 731:
      if (lookahead == 'd') ADVANCE(2041);
      END_STATE();
    case 732:
      if (lookahead == 'd') ADVANCE(1085);
      END_STATE();
    case 733:
      if (lookahead == 'd') ADVANCE(1107);
      END_STATE();
    case 734:
      if (lookahead == 'd') ADVANCE(1112);
      END_STATE();
    case 735:
      if (lookahead == 'd') ADVANCE(733);
      END_STATE();
    case 736:
      if (lookahead == 'd') ADVANCE(734);
      END_STATE();
    case 737:
      if (lookahead == 'd') ADVANCE(1487);
      if (lookahead == 'n') ADVANCE(2033);
      if (lookahead == 'p') ADVANCE(2045);
      END_STATE();
    case 738:
      if (lookahead == 'd') ADVANCE(1488);
      if (lookahead == 'k') ADVANCE(1005);
      END_STATE();
    case 739:
      if (lookahead == 'e') ADVANCE(2175);
      if (lookahead == 'h') ADVANCE(2674);
      if (lookahead == 'i') ADVANCE(2050);
      if (lookahead == 'l') ADVANCE(812);
      if (lookahead == 'o') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 740:
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'i') ADVANCE(1186);
      if (lookahead == 'r') ADVANCE(1920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 741:
      if (lookahead == 'e') ADVANCE(940);
      if (lookahead == 'n') ADVANCE(1891);
      if (lookahead == 'o') ADVANCE(1286);
      END_STATE();
    case 742:
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == 'f') ADVANCE(544);
      END_STATE();
    case 743:
      if (lookahead == 'e') ADVANCE(2797);
      if (lookahead == 'h') ADVANCE(2247);
      if (lookahead == 'o') ADVANCE(1125);
      if (lookahead == 'r') ADVANCE(2705);
      END_STATE();
    case 744:
      if (lookahead == 'e') ADVANCE(3294);
      END_STATE();
    case 745:
      if (lookahead == 'e') ADVANCE(3298);
      END_STATE();
    case 746:
      if (lookahead == 'e') ADVANCE(3267);
      END_STATE();
    case 747:
      if (lookahead == 'e') ADVANCE(3295);
      END_STATE();
    case 748:
      if (lookahead == 'e') ADVANCE(3297);
      END_STATE();
    case 749:
      if (lookahead == 'e') ADVANCE(3135);
      END_STATE();
    case 750:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 751:
      if (lookahead == 'e') ADVANCE(3129);
      END_STATE();
    case 752:
      if (lookahead == 'e') ADVANCE(2931);
      END_STATE();
    case 753:
      if (lookahead == 'e') ADVANCE(3174);
      END_STATE();
    case 754:
      if (lookahead == 'e') ADVANCE(3006);
      END_STATE();
    case 755:
      if (lookahead == 'e') ADVANCE(3141);
      END_STATE();
    case 756:
      if (lookahead == 'e') ADVANCE(2984);
      END_STATE();
    case 757:
      if (lookahead == 'e') ADVANCE(2954);
      END_STATE();
    case 758:
      if (lookahead == 'e') ADVANCE(3123);
      END_STATE();
    case 759:
      if (lookahead == 'e') ADVANCE(3144);
      END_STATE();
    case 760:
      if (lookahead == 'e') ADVANCE(3198);
      END_STATE();
    case 761:
      if (lookahead == 'e') ADVANCE(3060);
      END_STATE();
    case 762:
      if (lookahead == 'e') ADVANCE(2999);
      END_STATE();
    case 763:
      if (lookahead == 'e') ADVANCE(3173);
      END_STATE();
    case 764:
      if (lookahead == 'e') ADVANCE(2985);
      END_STATE();
    case 765:
      if (lookahead == 'e') ADVANCE(3171);
      END_STATE();
    case 766:
      if (lookahead == 'e') ADVANCE(3204);
      END_STATE();
    case 767:
      if (lookahead == 'e') ADVANCE(2949);
      END_STATE();
    case 768:
      if (lookahead == 'e') ADVANCE(3188);
      END_STATE();
    case 769:
      if (lookahead == 'e') ADVANCE(3075);
      END_STATE();
    case 770:
      if (lookahead == 'e') ADVANCE(2955);
      END_STATE();
    case 771:
      if (lookahead == 'e') ADVANCE(3199);
      END_STATE();
    case 772:
      if (lookahead == 'e') ADVANCE(3039);
      END_STATE();
    case 773:
      if (lookahead == 'e') ADVANCE(3037);
      END_STATE();
    case 774:
      if (lookahead == 'e') ADVANCE(3111);
      END_STATE();
    case 775:
      if (lookahead == 'e') ADVANCE(3041);
      END_STATE();
    case 776:
      if (lookahead == 'e') ADVANCE(3095);
      END_STATE();
    case 777:
      if (lookahead == 'e') ADVANCE(3019);
      END_STATE();
    case 778:
      if (lookahead == 'e') ADVANCE(3197);
      END_STATE();
    case 779:
      if (lookahead == 'e') ADVANCE(3120);
      END_STATE();
    case 780:
      if (lookahead == 'e') ADVANCE(2976);
      END_STATE();
    case 781:
      if (lookahead == 'e') ADVANCE(2947);
      END_STATE();
    case 782:
      if (lookahead == 'e') ADVANCE(3168);
      END_STATE();
    case 783:
      if (lookahead == 'e') ADVANCE(3040);
      END_STATE();
    case 784:
      if (lookahead == 'e') ADVANCE(3208);
      END_STATE();
    case 785:
      if (lookahead == 'e') ADVANCE(3042);
      END_STATE();
    case 786:
      if (lookahead == 'e') ADVANCE(2944);
      END_STATE();
    case 787:
      if (lookahead == 'e') ADVANCE(3148);
      END_STATE();
    case 788:
      if (lookahead == 'e') ADVANCE(3209);
      END_STATE();
    case 789:
      if (lookahead == 'e') ADVANCE(2958);
      END_STATE();
    case 790:
      if (lookahead == 'e') ADVANCE(3167);
      END_STATE();
    case 791:
      if (lookahead == 'e') ADVANCE(2948);
      END_STATE();
    case 792:
      if (lookahead == 'e') ADVANCE(3112);
      END_STATE();
    case 793:
      if (lookahead == 'e') ADVANCE(3012);
      END_STATE();
    case 794:
      if (lookahead == 'e') ADVANCE(3013);
      END_STATE();
    case 795:
      if (lookahead == 'e') ADVANCE(3166);
      END_STATE();
    case 796:
      if (lookahead == 'e') ADVANCE(3099);
      END_STATE();
    case 797:
      if (lookahead == 'e') ADVANCE(3058);
      END_STATE();
    case 798:
      if (lookahead == 'e') ADVANCE(3096);
      END_STATE();
    case 799:
      if (lookahead == 'e') ADVANCE(3126);
      END_STATE();
    case 800:
      if (lookahead == 'e') ADVANCE(3202);
      END_STATE();
    case 801:
      if (lookahead == 'e') ADVANCE(3150);
      END_STATE();
    case 802:
      if (lookahead == 'e') ADVANCE(979);
      END_STATE();
    case 803:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 804:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 805:
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead == 'i') ADVANCE(2547);
      END_STATE();
    case 806:
      if (lookahead == 'e') ADVANCE(2788);
      END_STATE();
    case 807:
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'i') ADVANCE(2558);
      if (lookahead == 'p') ADVANCE(832);
      END_STATE();
    case 808:
      if (lookahead == 'e') ADVANCE(1129);
      END_STATE();
    case 809:
      if (lookahead == 'e') ADVANCE(2744);
      END_STATE();
    case 810:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 811:
      if (lookahead == 'e') ADVANCE(2461);
      if (lookahead == 'i') ADVANCE(1711);
      END_STATE();
    case 812:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 813:
      if (lookahead == 'e') ADVANCE(2836);
      END_STATE();
    case 814:
      if (lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 815:
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 816:
      if (lookahead == 'e') ADVANCE(2148);
      END_STATE();
    case 817:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 818:
      if (lookahead == 'e') ADVANCE(2761);
      END_STATE();
    case 819:
      if (lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 820:
      if (lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 821:
      if (lookahead == 'e') ADVANCE(2187);
      END_STATE();
    case 822:
      if (lookahead == 'e') ADVANCE(2830);
      END_STATE();
    case 823:
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(1209);
      if (lookahead == 'k') ADVANCE(1370);
      if (lookahead == 'y') ADVANCE(1710);
      END_STATE();
    case 824:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 825:
      if (lookahead == 'e') ADVANCE(2851);
      END_STATE();
    case 826:
      if (lookahead == 'e') ADVANCE(2262);
      END_STATE();
    case 827:
      if (lookahead == 'e') ADVANCE(2816);
      END_STATE();
    case 828:
      if (lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 829:
      if (lookahead == 'e') ADVANCE(2813);
      END_STATE();
    case 830:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 831:
      if (lookahead == 'e') ADVANCE(2511);
      END_STATE();
    case 832:
      if (lookahead == 'e') ADVANCE(2178);
      if (lookahead == 'i') ADVANCE(2243);
      if (lookahead == 'o') ADVANCE(2265);
      END_STATE();
    case 833:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 834:
      if (lookahead == 'e') ADVANCE(2854);
      END_STATE();
    case 835:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 836:
      if (lookahead == 'e') ADVANCE(2818);
      END_STATE();
    case 837:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 838:
      if (lookahead == 'e') ADVANCE(1676);
      END_STATE();
    case 839:
      if (lookahead == 'e') ADVANCE(2179);
      END_STATE();
    case 840:
      if (lookahead == 'e') ADVANCE(2447);
      END_STATE();
    case 841:
      if (lookahead == 'e') ADVANCE(2819);
      END_STATE();
    case 842:
      if (lookahead == 'e') ADVANCE(2569);
      if (lookahead == 'i') ADVANCE(452);
      END_STATE();
    case 843:
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 844:
      if (lookahead == 'e') ADVANCE(2820);
      END_STATE();
    case 845:
      if (lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 846:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 847:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 848:
      if (lookahead == 'e') ADVANCE(2821);
      END_STATE();
    case 849:
      if (lookahead == 'e') ADVANCE(1679);
      END_STATE();
    case 850:
      if (lookahead == 'e') ADVANCE(2210);
      END_STATE();
    case 851:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 852:
      if (lookahead == 'e') ADVANCE(2358);
      END_STATE();
    case 853:
      if (lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 854:
      if (lookahead == 'e') ADVANCE(2646);
      END_STATE();
    case 855:
      if (lookahead == 'e') ADVANCE(1681);
      if (lookahead == 'p') ADVANCE(1288);
      END_STATE();
    case 856:
      if (lookahead == 'e') ADVANCE(2278);
      END_STATE();
    case 857:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 858:
      if (lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 859:
      if (lookahead == 'e') ADVANCE(2479);
      END_STATE();
    case 860:
      if (lookahead == 'e') ADVANCE(2824);
      END_STATE();
    case 861:
      if (lookahead == 'e') ADVANCE(1549);
      END_STATE();
    case 862:
      if (lookahead == 'e') ADVANCE(2181);
      END_STATE();
    case 863:
      if (lookahead == 'e') ADVANCE(2825);
      END_STATE();
    case 864:
      if (lookahead == 'e') ADVANCE(1577);
      END_STATE();
    case 865:
      if (lookahead == 'e') ADVANCE(2174);
      END_STATE();
    case 866:
      if (lookahead == 'e') ADVANCE(2075);
      END_STATE();
    case 867:
      if (lookahead == 'e') ADVANCE(1121);
      END_STATE();
    case 868:
      if (lookahead == 'e') ADVANCE(562);
      END_STATE();
    case 869:
      if (lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 870:
      if (lookahead == 'e') ADVANCE(2153);
      END_STATE();
    case 871:
      if (lookahead == 'e') ADVANCE(1551);
      END_STATE();
    case 872:
      if (lookahead == 'e') ADVANCE(2828);
      END_STATE();
    case 873:
      if (lookahead == 'e') ADVANCE(1552);
      END_STATE();
    case 874:
      if (lookahead == 'e') ADVANCE(2108);
      END_STATE();
    case 875:
      if (lookahead == 'e') ADVANCE(2193);
      END_STATE();
    case 876:
      if (lookahead == 'e') ADVANCE(2353);
      END_STATE();
    case 877:
      if (lookahead == 'e') ADVANCE(2191);
      END_STATE();
    case 878:
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 879:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 880:
      if (lookahead == 'e') ADVANCE(2524);
      END_STATE();
    case 881:
      if (lookahead == 'e') ADVANCE(2368);
      END_STATE();
    case 882:
      if (lookahead == 'e') ADVANCE(1556);
      END_STATE();
    case 883:
      if (lookahead == 'e') ADVANCE(2155);
      END_STATE();
    case 884:
      if (lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 885:
      if (lookahead == 'e') ADVANCE(1559);
      END_STATE();
    case 886:
      if (lookahead == 'e') ADVANCE(2287);
      END_STATE();
    case 887:
      if (lookahead == 'e') ADVANCE(2156);
      END_STATE();
    case 888:
      if (lookahead == 'e') ADVANCE(2373);
      END_STATE();
    case 889:
      if (lookahead == 'e') ADVANCE(2577);
      END_STATE();
    case 890:
      if (lookahead == 'e') ADVANCE(2157);
      END_STATE();
    case 891:
      if (lookahead == 'e') ADVANCE(2374);
      END_STATE();
    case 892:
      if (lookahead == 'e') ADVANCE(2375);
      END_STATE();
    case 893:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 894:
      if (lookahead == 'e') ADVANCE(2529);
      END_STATE();
    case 895:
      if (lookahead == 'e') ADVANCE(1583);
      END_STATE();
    case 896:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(1020);
      END_STATE();
    case 898:
      if (lookahead == 'e') ADVANCE(2158);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(2380);
      END_STATE();
    case 900:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 901:
      if (lookahead == 'e') ADVANCE(1589);
      END_STATE();
    case 902:
      if (lookahead == 'e') ADVANCE(2196);
      END_STATE();
    case 903:
      if (lookahead == 'e') ADVANCE(2381);
      END_STATE();
    case 904:
      if (lookahead == 'e') ADVANCE(2159);
      END_STATE();
    case 905:
      if (lookahead == 'e') ADVANCE(2383);
      END_STATE();
    case 906:
      if (lookahead == 'e') ADVANCE(1562);
      END_STATE();
    case 907:
      if (lookahead == 'e') ADVANCE(2160);
      END_STATE();
    case 908:
      if (lookahead == 'e') ADVANCE(2384);
      END_STATE();
    case 909:
      if (lookahead == 'e') ADVANCE(2386);
      END_STATE();
    case 910:
      if (lookahead == 'e') ADVANCE(2161);
      END_STATE();
    case 911:
      if (lookahead == 'e') ADVANCE(2387);
      END_STATE();
    case 912:
      if (lookahead == 'e') ADVANCE(2254);
      END_STATE();
    case 913:
      if (lookahead == 'e') ADVANCE(2388);
      END_STATE();
    case 914:
      if (lookahead == 'e') ADVANCE(2162);
      END_STATE();
    case 915:
      if (lookahead == 'e') ADVANCE(2540);
      END_STATE();
    case 916:
      if (lookahead == 'e') ADVANCE(2587);
      END_STATE();
    case 917:
      if (lookahead == 'e') ADVANCE(2166);
      END_STATE();
    case 918:
      if (lookahead == 'e') ADVANCE(2200);
      END_STATE();
    case 919:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 920:
      if (lookahead == 'e') ADVANCE(2167);
      END_STATE();
    case 921:
      if (lookahead == 'e') ADVANCE(1010);
      END_STATE();
    case 922:
      if (lookahead == 'e') ADVANCE(2169);
      END_STATE();
    case 923:
      if (lookahead == 'e') ADVANCE(2223);
      if (lookahead == 'l') ADVANCE(978);
      END_STATE();
    case 924:
      if (lookahead == 'e') ADVANCE(2170);
      END_STATE();
    case 925:
      if (lookahead == 'e') ADVANCE(2172);
      END_STATE();
    case 926:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 927:
      if (lookahead == 'e') ADVANCE(2224);
      END_STATE();
    case 928:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 929:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 930:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 931:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 932:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 933:
      if (lookahead == 'e') ADVANCE(715);
      END_STATE();
    case 934:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 935:
      if (lookahead == 'e') ADVANCE(2856);
      END_STATE();
    case 936:
      if (lookahead == 'e') ADVANCE(2448);
      END_STATE();
    case 937:
      if (lookahead == 'e') ADVANCE(2183);
      END_STATE();
    case 938:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 939:
      if (lookahead == 'e') ADVANCE(2746);
      END_STATE();
    case 940:
      if (lookahead == 'e') ADVANCE(2072);
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 941:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 942:
      if (lookahead == 'e') ADVANCE(854);
      if (lookahead == 'o') ADVANCE(2689);
      END_STATE();
    case 943:
      if (lookahead == 'e') ADVANCE(1697);
      END_STATE();
    case 944:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 945:
      if (lookahead == 'e') ADVANCE(2214);
      END_STATE();
    case 946:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 947:
      if (lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 948:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 949:
      if (lookahead == 'e') ADVANCE(2835);
      END_STATE();
    case 950:
      if (lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 951:
      if (lookahead == 'e') ADVANCE(2440);
      if (lookahead == 't') ADVANCE(724);
      END_STATE();
    case 952:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 953:
      if (lookahead == 'e') ADVANCE(1810);
      END_STATE();
    case 954:
      if (lookahead == 'e') ADVANCE(2747);
      END_STATE();
    case 955:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 956:
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'u') ADVANCE(538);
      END_STATE();
    case 957:
      if (lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 958:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 959:
      if (lookahead == 'e') ADVANCE(1784);
      END_STATE();
    case 960:
      if (lookahead == 'e') ADVANCE(2464);
      END_STATE();
    case 961:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 962:
      if (lookahead == 'e') ADVANCE(2838);
      END_STATE();
    case 963:
      if (lookahead == 'e') ADVANCE(2405);
      END_STATE();
    case 964:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 965:
      if (lookahead == 'e') ADVANCE(2429);
      END_STATE();
    case 966:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 967:
      if (lookahead == 'e') ADVANCE(1722);
      END_STATE();
    case 968:
      if (lookahead == 'e') ADVANCE(1884);
      if (lookahead == 'r') ADVANCE(837);
      END_STATE();
    case 969:
      if (lookahead == 'e') ADVANCE(2840);
      END_STATE();
    case 970:
      if (lookahead == 'e') ADVANCE(2406);
      END_STATE();
    case 971:
      if (lookahead == 'e') ADVANCE(2750);
      END_STATE();
    case 972:
      if (lookahead == 'e') ADVANCE(2843);
      END_STATE();
    case 973:
      if (lookahead == 'e') ADVANCE(1793);
      END_STATE();
    case 974:
      if (lookahead == 'e') ADVANCE(2583);
      END_STATE();
    case 975:
      if (lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 976:
      if (lookahead == 'e') ADVANCE(1868);
      END_STATE();
    case 977:
      if (lookahead == 'e') ADVANCE(2751);
      END_STATE();
    case 978:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 979:
      if (lookahead == 'e') ADVANCE(2125);
      if (lookahead == 'y') ADVANCE(2492);
      END_STATE();
    case 980:
      if (lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 981:
      if (lookahead == 'e') ADVANCE(1857);
      END_STATE();
    case 982:
      if (lookahead == 'e') ADVANCE(2752);
      END_STATE();
    case 983:
      if (lookahead == 'e') ADVANCE(2863);
      END_STATE();
    case 984:
      if (lookahead == 'e') ADVANCE(1809);
      END_STATE();
    case 985:
      if (lookahead == 'e') ADVANCE(2305);
      END_STATE();
    case 986:
      if (lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 987:
      if (lookahead == 'e') ADVANCE(2411);
      END_STATE();
    case 988:
      if (lookahead == 'e') ADVANCE(2753);
      END_STATE();
    case 989:
      if (lookahead == 'e') ADVANCE(2451);
      END_STATE();
    case 990:
      if (lookahead == 'e') ADVANCE(2296);
      END_STATE();
    case 991:
      if (lookahead == 'e') ADVANCE(1842);
      END_STATE();
    case 992:
      if (lookahead == 'e') ADVANCE(2415);
      END_STATE();
    case 993:
      if (lookahead == 'e') ADVANCE(2754);
      END_STATE();
    case 994:
      if (lookahead == 'e') ADVANCE(2846);
      END_STATE();
    case 995:
      if (lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 996:
      if (lookahead == 'e') ADVANCE(2231);
      END_STATE();
    case 997:
      if (lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 998:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 999:
      if (lookahead == 'e') ADVANCE(2755);
      END_STATE();
    case 1000:
      if (lookahead == 'e') ADVANCE(2847);
      END_STATE();
    case 1001:
      if (lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 1002:
      if (lookahead == 'e') ADVANCE(2756);
      END_STATE();
    case 1003:
      if (lookahead == 'e') ADVANCE(1814);
      END_STATE();
    case 1004:
      if (lookahead == 'e') ADVANCE(2757);
      END_STATE();
    case 1005:
      if (lookahead == 'e') ADVANCE(2867);
      END_STATE();
    case 1006:
      if (lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 1007:
      if (lookahead == 'e') ADVANCE(2870);
      END_STATE();
    case 1008:
      if (lookahead == 'e') ADVANCE(699);
      END_STATE();
    case 1009:
      if (lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1010:
      if (lookahead == 'e') ADVANCE(708);
      END_STATE();
    case 1011:
      if (lookahead == 'e') ADVANCE(2849);
      END_STATE();
    case 1012:
      if (lookahead == 'e') ADVANCE(2454);
      END_STATE();
    case 1013:
      if (lookahead == 'e') ADVANCE(710);
      END_STATE();
    case 1014:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 1015:
      if (lookahead == 'e') ADVANCE(2230);
      END_STATE();
    case 1016:
      if (lookahead == 'e') ADVANCE(2595);
      END_STATE();
    case 1017:
      if (lookahead == 'e') ADVANCE(2654);
      END_STATE();
    case 1018:
      if (lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 1019:
      if (lookahead == 'e') ADVANCE(1840);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(1143);
      END_STATE();
    case 1021:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(2483);
      END_STATE();
    case 1023:
      if (lookahead == 'e') ADVANCE(2852);
      END_STATE();
    case 1024:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 1025:
      if (lookahead == 'e') ADVANCE(1013);
      END_STATE();
    case 1026:
      if (lookahead == 'e') ADVANCE(2281);
      END_STATE();
    case 1027:
      if (lookahead == 'e') ADVANCE(2794);
      END_STATE();
    case 1028:
      if (lookahead == 'e') ADVANCE(2472);
      if (lookahead == 'i') ADVANCE(2189);
      END_STATE();
    case 1029:
      if (lookahead == 'e') ADVANCE(2286);
      END_STATE();
    case 1030:
      if (lookahead == 'e') ADVANCE(2764);
      END_STATE();
    case 1031:
      if (lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 1032:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 1033:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 1034:
      if (lookahead == 'e') ADVANCE(2466);
      END_STATE();
    case 1035:
      if (lookahead == 'e') ADVANCE(2791);
      END_STATE();
    case 1036:
      if (lookahead == 'e') ADVANCE(2295);
      END_STATE();
    case 1037:
      if (lookahead == 'e') ADVANCE(2273);
      END_STATE();
    case 1038:
      if (lookahead == 'e') ADVANCE(2469);
      END_STATE();
    case 1039:
      if (lookahead == 'e') ADVANCE(1866);
      END_STATE();
    case 1040:
      if (lookahead == 'e') ADVANCE(2301);
      END_STATE();
    case 1041:
      if (lookahead == 'e') ADVANCE(2275);
      END_STATE();
    case 1042:
      if (lookahead == 'e') ADVANCE(2471);
      END_STATE();
    case 1043:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 1044:
      if (lookahead == 'e') ADVANCE(2477);
      END_STATE();
    case 1045:
      if (lookahead == 'e') ADVANCE(2276);
      END_STATE();
    case 1046:
      if (lookahead == 'e') ADVANCE(2473);
      END_STATE();
    case 1047:
      if (lookahead == 'e') ADVANCE(1869);
      END_STATE();
    case 1048:
      if (lookahead == 'e') ADVANCE(2277);
      END_STATE();
    case 1049:
      if (lookahead == 'e') ADVANCE(1871);
      END_STATE();
    case 1050:
      if (lookahead == 'e') ADVANCE(1873);
      END_STATE();
    case 1051:
      if (lookahead == 'e') ADVANCE(2800);
      END_STATE();
    case 1052:
      if (lookahead == 'e') ADVANCE(1147);
      END_STATE();
    case 1053:
      if (lookahead == 'e') ADVANCE(2857);
      END_STATE();
    case 1054:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 1055:
      if (lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 1056:
      if (lookahead == 'e') ADVANCE(2318);
      END_STATE();
    case 1057:
      if (lookahead == 'e') ADVANCE(2320);
      END_STATE();
    case 1058:
      if (lookahead == 'e') ADVANCE(2288);
      END_STATE();
    case 1059:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 1060:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 1061:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 1062:
      if (lookahead == 'e') ADVANCE(2864);
      END_STATE();
    case 1063:
      if (lookahead == 'e') ADVANCE(2300);
      END_STATE();
    case 1064:
      if (lookahead == 'e') ADVANCE(2865);
      END_STATE();
    case 1065:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 1066:
      if (lookahead == 'e') ADVANCE(2329);
      END_STATE();
    case 1067:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 1068:
      if (lookahead == 'e') ADVANCE(2331);
      END_STATE();
    case 1069:
      if (lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 1070:
      if (lookahead == 'e') ADVANCE(2310);
      END_STATE();
    case 1071:
      if (lookahead == 'e') ADVANCE(2336);
      END_STATE();
    case 1072:
      if (lookahead == 'e') ADVANCE(1152);
      END_STATE();
    case 1073:
      if (lookahead == 'e') ADVANCE(2337);
      END_STATE();
    case 1074:
      if (lookahead == 'e') ADVANCE(2312);
      END_STATE();
    case 1075:
      if (lookahead == 'e') ADVANCE(2341);
      END_STATE();
    case 1076:
      if (lookahead == 'e') ADVANCE(2307);
      END_STATE();
    case 1077:
      if (lookahead == 'e') ADVANCE(2802);
      END_STATE();
    case 1078:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 1079:
      if (lookahead == 'e') ADVANCE(2868);
      END_STATE();
    case 1080:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 1081:
      if (lookahead == 'e') ADVANCE(2334);
      END_STATE();
    case 1082:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 1083:
      if (lookahead == 'e') ADVANCE(2669);
      END_STATE();
    case 1084:
      if (lookahead == 'e') ADVANCE(2871);
      END_STATE();
    case 1085:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 1086:
      if (lookahead == 'e') ADVANCE(2803);
      if (lookahead == 'l') ADVANCE(971);
      END_STATE();
    case 1087:
      if (lookahead == 'e') ADVANCE(2869);
      END_STATE();
    case 1088:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 1089:
      if (lookahead == 'e') ADVANCE(2343);
      END_STATE();
    case 1090:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 1091:
      if (lookahead == 'e') ADVANCE(2499);
      END_STATE();
    case 1092:
      if (lookahead == 'e') ADVANCE(2804);
      END_STATE();
    case 1093:
      if (lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 1094:
      if (lookahead == 'e') ADVANCE(2344);
      END_STATE();
    case 1095:
      if (lookahead == 'e') ADVANCE(2805);
      END_STATE();
    case 1096:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 1097:
      if (lookahead == 'e') ADVANCE(2806);
      if (lookahead == 'l') ADVANCE(988);
      END_STATE();
    case 1098:
      if (lookahead == 'e') ADVANCE(2807);
      if (lookahead == 'l') ADVANCE(999);
      END_STATE();
    case 1099:
      if (lookahead == 'e') ADVANCE(2808);
      if (lookahead == 's') ADVANCE(2684);
      END_STATE();
    case 1100:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 1101:
      if (lookahead == 'e') ADVANCE(2809);
      if (lookahead == 'h') ADVANCE(2327);
      if (lookahead == 't') ADVANCE(2811);
      END_STATE();
    case 1102:
      if (lookahead == 'e') ADVANCE(2351);
      END_STATE();
    case 1103:
      if (lookahead == 'e') ADVANCE(2872);
      END_STATE();
    case 1104:
      if (lookahead == 'e') ADVANCE(2503);
      END_STATE();
    case 1105:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 1106:
      if (lookahead == 'e') ADVANCE(2497);
      END_STATE();
    case 1107:
      if (lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 1108:
      if (lookahead == 'e') ADVANCE(2500);
      END_STATE();
    case 1109:
      if (lookahead == 'e') ADVANCE(2501);
      END_STATE();
    case 1110:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 1111:
      if (lookahead == 'e') ADVANCE(1672);
      END_STATE();
    case 1112:
      if (lookahead == 'e') ADVANCE(1885);
      END_STATE();
    case 1113:
      if (lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 1114:
      if (lookahead == 'e') ADVANCE(1741);
      END_STATE();
    case 1115:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 1116:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 1117:
      if (lookahead == 'f') ADVANCE(652);
      END_STATE();
    case 1118:
      if (lookahead == 'f') ADVANCE(3001);
      END_STATE();
    case 1119:
      if (lookahead == 'f') ADVANCE(2929);
      END_STATE();
    case 1120:
      if (lookahead == 'f') ADVANCE(3166);
      END_STATE();
    case 1121:
      if (lookahead == 'f') ADVANCE(3126);
      END_STATE();
    case 1122:
      if (lookahead == 'f') ADVANCE(653);
      END_STATE();
    case 1123:
      if (lookahead == 'f') ADVANCE(654);
      END_STATE();
    case 1124:
      if (lookahead == 'f') ADVANCE(657);
      if (lookahead == 'r') ADVANCE(874);
      END_STATE();
    case 1125:
      if (lookahead == 'f') ADVANCE(2691);
      END_STATE();
    case 1126:
      if (lookahead == 'f') ADVANCE(1371);
      if (lookahead == 't') ADVANCE(1295);
      END_STATE();
    case 1127:
      if (lookahead == 'f') ADVANCE(1300);
      if (lookahead == 'n') ADVANCE(1934);
      if (lookahead == 'p') ADVANCE(1977);
      END_STATE();
    case 1128:
      if (lookahead == 'f') ADVANCE(1304);
      if (lookahead == 'o') ADVANCE(1770);
      if (lookahead == 's') ADVANCE(1307);
      END_STATE();
    case 1129:
      if (lookahead == 'f') ADVANCE(399);
      END_STATE();
    case 1130:
      if (lookahead == 'f') ADVANCE(2817);
      END_STATE();
    case 1131:
      if (lookahead == 'f') ADVANCE(2675);
      END_STATE();
    case 1132:
      if (lookahead == 'f') ADVANCE(663);
      END_STATE();
    case 1133:
      if (lookahead == 'f') ADVANCE(1434);
      END_STATE();
    case 1134:
      if (lookahead == 'f') ADVANCE(2100);
      END_STATE();
    case 1135:
      if (lookahead == 'f') ADVANCE(477);
      END_STATE();
    case 1136:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 1137:
      if (lookahead == 'f') ADVANCE(2839);
      END_STATE();
    case 1138:
      if (lookahead == 'f') ADVANCE(2245);
      END_STATE();
    case 1139:
      if (lookahead == 'f') ADVANCE(1592);
      END_STATE();
    case 1140:
      if (lookahead == 'f') ADVANCE(2218);
      END_STATE();
    case 1141:
      if (lookahead == 'f') ADVANCE(2209);
      if (lookahead == 'n') ADVANCE(2000);
      if (lookahead == 'o') ADVANCE(1632);
      if (lookahead == 'w') ADVANCE(1018);
      END_STATE();
    case 1142:
      if (lookahead == 'f') ADVANCE(1952);
      END_STATE();
    case 1143:
      if (lookahead == 'f') ADVANCE(1960);
      END_STATE();
    case 1144:
      if (lookahead == 'f') ADVANCE(1015);
      END_STATE();
    case 1145:
      if (lookahead == 'f') ADVANCE(611);
      END_STATE();
    case 1146:
      if (lookahead == 'f') ADVANCE(1394);
      END_STATE();
    case 1147:
      if (lookahead == 'f') ADVANCE(1029);
      END_STATE();
    case 1148:
      if (lookahead == 'f') ADVANCE(1400);
      END_STATE();
    case 1149:
      if (lookahead == 'f') ADVANCE(182);
      END_STATE();
    case 1150:
      if (lookahead == 'f') ADVANCE(1036);
      END_STATE();
    case 1151:
      if (lookahead == 'f') ADVANCE(1404);
      END_STATE();
    case 1152:
      if (lookahead == 'f') ADVANCE(1040);
      END_STATE();
    case 1153:
      if (lookahead == 'f') ADVANCE(2465);
      END_STATE();
    case 1154:
      if (lookahead == 'f') ADVANCE(1452);
      END_STATE();
    case 1155:
      if (lookahead == 'f') ADVANCE(503);
      END_STATE();
    case 1156:
      if (lookahead == 'f') ADVANCE(484);
      END_STATE();
    case 1157:
      if (lookahead == 'f') ADVANCE(2326);
      END_STATE();
    case 1158:
      if (lookahead == 'f') ADVANCE(1463);
      END_STATE();
    case 1159:
      if (lookahead == 'f') ADVANCE(1467);
      END_STATE();
    case 1160:
      if (lookahead == 'f') ADVANCE(1468);
      END_STATE();
    case 1161:
      if (lookahead == 'f') ADVANCE(1471);
      END_STATE();
    case 1162:
      if (lookahead == 'f') ADVANCE(1474);
      END_STATE();
    case 1163:
      if (lookahead == 'f') ADVANCE(1460);
      END_STATE();
    case 1164:
      if (lookahead == 'f') ADVANCE(1475);
      END_STATE();
    case 1165:
      if (lookahead == 'f') ADVANCE(2504);
      END_STATE();
    case 1166:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 1167:
      if (lookahead == 'g') ADVANCE(3151);
      END_STATE();
    case 1168:
      if (lookahead == 'g') ADVANCE(2991);
      END_STATE();
    case 1169:
      if (lookahead == 'g') ADVANCE(3073);
      END_STATE();
    case 1170:
      if (lookahead == 'g') ADVANCE(3129);
      END_STATE();
    case 1171:
      if (lookahead == 'g') ADVANCE(1851);
      END_STATE();
    case 1172:
      if (lookahead == 'g') ADVANCE(3032);
      END_STATE();
    case 1173:
      if (lookahead == 'g') ADVANCE(2959);
      END_STATE();
    case 1174:
      if (lookahead == 'g') ADVANCE(3074);
      END_STATE();
    case 1175:
      if (lookahead == 'g') ADVANCE(2960);
      END_STATE();
    case 1176:
      if (lookahead == 'g') ADVANCE(3031);
      END_STATE();
    case 1177:
      if (lookahead == 'g') ADVANCE(2979);
      END_STATE();
    case 1178:
      if (lookahead == 'g') ADVANCE(2961);
      END_STATE();
    case 1179:
      if (lookahead == 'g') ADVANCE(252);
      END_STATE();
    case 1180:
      if (lookahead == 'g') ADVANCE(3166);
      END_STATE();
    case 1181:
      if (lookahead == 'g') ADVANCE(3099);
      END_STATE();
    case 1182:
      if (lookahead == 'g') ADVANCE(3058);
      END_STATE();
    case 1183:
      if (lookahead == 'g') ADVANCE(3145);
      END_STATE();
    case 1184:
      if (lookahead == 'g') ADVANCE(3131);
      END_STATE();
    case 1185:
      if (lookahead == 'g') ADVANCE(1831);
      if (lookahead == 'm') ADVANCE(2089);
      if (lookahead == 'n') ADVANCE(553);
      if (lookahead == 's') ADVANCE(1913);
      END_STATE();
    case 1186:
      if (lookahead == 'g') ADVANCE(960);
      if (lookahead == 'r') ADVANCE(1686);
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 1187:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 1188:
      if (lookahead == 'g') ADVANCE(1981);
      END_STATE();
    case 1189:
      if (lookahead == 'g') ADVANCE(1981);
      if (lookahead == 'l') ADVANCE(1975);
      if (lookahead == 'w') ADVANCE(375);
      END_STATE();
    case 1190:
      if (lookahead == 'g') ADVANCE(2279);
      END_STATE();
    case 1191:
      if (lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 1192:
      if (lookahead == 'g') ADVANCE(2055);
      END_STATE();
    case 1193:
      if (lookahead == 'g') ADVANCE(2354);
      END_STATE();
    case 1194:
      if (lookahead == 'g') ADVANCE(1890);
      END_STATE();
    case 1195:
      if (lookahead == 'g') ADVANCE(2364);
      END_STATE();
    case 1196:
      if (lookahead == 'g') ADVANCE(2353);
      END_STATE();
    case 1197:
      if (lookahead == 'g') ADVANCE(1864);
      END_STATE();
    case 1198:
      if (lookahead == 'g') ADVANCE(1862);
      END_STATE();
    case 1199:
      if (lookahead == 'g') ADVANCE(1894);
      END_STATE();
    case 1200:
      if (lookahead == 'g') ADVANCE(2059);
      END_STATE();
    case 1201:
      if (lookahead == 'g') ADVANCE(1895);
      END_STATE();
    case 1202:
      if (lookahead == 'g') ADVANCE(2370);
      END_STATE();
    case 1203:
      if (lookahead == 'g') ADVANCE(2061);
      END_STATE();
    case 1204:
      if (lookahead == 'g') ADVANCE(2062);
      END_STATE();
    case 1205:
      if (lookahead == 'g') ADVANCE(2372);
      END_STATE();
    case 1206:
      if (lookahead == 'g') ADVANCE(2554);
      END_STATE();
    case 1207:
      if (lookahead == 'g') ADVANCE(2199);
      END_STATE();
    case 1208:
      if (lookahead == 'g') ADVANCE(1896);
      END_STATE();
    case 1209:
      if (lookahead == 'g') ADVANCE(121);
      END_STATE();
    case 1210:
      if (lookahead == 'g') ADVANCE(1898);
      END_STATE();
    case 1211:
      if (lookahead == 'g') ADVANCE(1899);
      END_STATE();
    case 1212:
      if (lookahead == 'g') ADVANCE(2201);
      END_STATE();
    case 1213:
      if (lookahead == 'g') ADVANCE(1900);
      END_STATE();
    case 1214:
      if (lookahead == 'g') ADVANCE(2389);
      END_STATE();
    case 1215:
      if (lookahead == 'g') ADVANCE(1902);
      END_STATE();
    case 1216:
      if (lookahead == 'g') ADVANCE(761);
      END_STATE();
    case 1217:
      if (lookahead == 'g') ADVANCE(1903);
      END_STATE();
    case 1218:
      if (lookahead == 'g') ADVANCE(1904);
      END_STATE();
    case 1219:
      if (lookahead == 'g') ADVANCE(1958);
      END_STATE();
    case 1220:
      if (lookahead == 'g') ADVANCE(1959);
      END_STATE();
    case 1221:
      if (lookahead == 'g') ADVANCE(2163);
      END_STATE();
    case 1222:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 1223:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 1224:
      if (lookahead == 'g') ADVANCE(797);
      END_STATE();
    case 1225:
      if (lookahead == 'g') ADVANCE(1296);
      END_STATE();
    case 1226:
      if (lookahead == 'g') ADVANCE(1576);
      END_STATE();
    case 1227:
      if (lookahead == 'g') ADVANCE(944);
      END_STATE();
    case 1228:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 1229:
      if (lookahead == 'g') ADVANCE(1302);
      END_STATE();
    case 1230:
      if (lookahead == 'g') ADVANCE(1315);
      END_STATE();
    case 1231:
      if (lookahead == 'g') ADVANCE(2441);
      END_STATE();
    case 1232:
      if (lookahead == 'g') ADVANCE(2322);
      END_STATE();
    case 1233:
      if (lookahead == 'g') ADVANCE(1326);
      END_STATE();
    case 1234:
      if (lookahead == 'g') ADVANCE(976);
      END_STATE();
    case 1235:
      if (lookahead == 'g') ADVANCE(1329);
      END_STATE();
    case 1236:
      if (lookahead == 'g') ADVANCE(929);
      END_STATE();
    case 1237:
      if (lookahead == 'g') ADVANCE(930);
      END_STATE();
    case 1238:
      if (lookahead == 'g') ADVANCE(902);
      END_STATE();
    case 1239:
      if (lookahead == 'g') ADVANCE(987);
      END_STATE();
    case 1240:
      if (lookahead == 'g') ADVANCE(1848);
      END_STATE();
    case 1241:
      if (lookahead == 'g') ADVANCE(1849);
      END_STATE();
    case 1242:
      if (lookahead == 'g') ADVANCE(992);
      END_STATE();
    case 1243:
      if (lookahead == 'g') ADVANCE(1859);
      if (lookahead == 'o') ADVANCE(1568);
      END_STATE();
    case 1244:
      if (lookahead == 'g') ADVANCE(1044);
      END_STATE();
    case 1245:
      if (lookahead == 'g') ADVANCE(1870);
      END_STATE();
    case 1246:
      if (lookahead == 'g') ADVANCE(1059);
      END_STATE();
    case 1247:
      if (lookahead == 'g') ADVANCE(1057);
      END_STATE();
    case 1248:
      if (lookahead == 'g') ADVANCE(1879);
      END_STATE();
    case 1249:
      if (lookahead == 'g') ADVANCE(2333);
      END_STATE();
    case 1250:
      if (lookahead == 'g') ADVANCE(242);
      END_STATE();
    case 1251:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 1252:
      if (lookahead == 'g') ADVANCE(1106);
      END_STATE();
    case 1253:
      if (lookahead == 'g') ADVANCE(1671);
      END_STATE();
    case 1254:
      if (lookahead == 'g') ADVANCE(1108);
      END_STATE();
    case 1255:
      if (lookahead == 'g') ADVANCE(1109);
      END_STATE();
    case 1256:
      if (lookahead == 'h') ADVANCE(3072);
      END_STATE();
    case 1257:
      if (lookahead == 'h') ADVANCE(2982);
      END_STATE();
    case 1258:
      if (lookahead == 'h') ADVANCE(3105);
      END_STATE();
    case 1259:
      if (lookahead == 'h') ADVANCE(3147);
      END_STATE();
    case 1260:
      if (lookahead == 'h') ADVANCE(1448);
      if (lookahead == 'v') ADVANCE(877);
      END_STATE();
    case 1261:
      if (lookahead == 'h') ADVANCE(2696);
      END_STATE();
    case 1262:
      if (lookahead == 'h') ADVANCE(830);
      END_STATE();
    case 1263:
      if (lookahead == 'h') ADVANCE(446);
      END_STATE();
    case 1264:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 1265:
      if (lookahead == 'h') ADVANCE(2186);
      END_STATE();
    case 1266:
      if (lookahead == 'h') ADVANCE(1916);
      END_STATE();
    case 1267:
      if (lookahead == 'h') ADVANCE(1907);
      if (lookahead == 'o') ADVANCE(2346);
      END_STATE();
    case 1268:
      if (lookahead == 'h') ADVANCE(767);
      END_STATE();
    case 1269:
      if (lookahead == 'h') ADVANCE(777);
      END_STATE();
    case 1270:
      if (lookahead == 'h') ADVANCE(868);
      END_STATE();
    case 1271:
      if (lookahead == 'h') ADVANCE(418);
      END_STATE();
    case 1272:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 1273:
      if (lookahead == 'h') ADVANCE(850);
      END_STATE();
    case 1274:
      if (lookahead == 'h') ADVANCE(1383);
      END_STATE();
    case 1275:
      if (lookahead == 'h') ADVANCE(1968);
      END_STATE();
    case 1276:
      if (lookahead == 'h') ADVANCE(996);
      END_STATE();
    case 1277:
      if (lookahead == 'h') ADVANCE(2004);
      if (lookahead == 'o') ADVANCE(1667);
      if (lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1278:
      if (lookahead == 'h') ADVANCE(2017);
      if (lookahead == 'o') ADVANCE(1669);
      END_STATE();
    case 1279:
      if (lookahead == 'h') ADVANCE(1412);
      END_STATE();
    case 1280:
      if (lookahead == 'h') ADVANCE(1081);
      END_STATE();
    case 1281:
      if (lookahead == 'h') ADVANCE(1089);
      END_STATE();
    case 1282:
      if (lookahead == 'h') ADVANCE(1094);
      END_STATE();
    case 1283:
      if (lookahead == 'h') ADVANCE(1110);
      END_STATE();
    case 1284:
      if (lookahead == 'h') ADVANCE(1483);
      END_STATE();
    case 1285:
      if (lookahead == 'i') ADVANCE(671);
      if (lookahead == 'k') ADVANCE(2051);
      END_STATE();
    case 1286:
      if (lookahead == 'i') ADVANCE(304);
      END_STATE();
    case 1287:
      if (lookahead == 'i') ADVANCE(2875);
      END_STATE();
    case 1288:
      if (lookahead == 'i') ADVANCE(3166);
      END_STATE();
    case 1289:
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(1190);
      if (lookahead == 'r') ADVANCE(1544);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == 't') ADVANCE(1116);
      END_STATE();
    case 1290:
      if (lookahead == 'i') ADVANCE(2063);
      END_STATE();
    case 1291:
      if (lookahead == 'i') ADVANCE(650);
      if (lookahead == 'n') ADVANCE(1503);
      END_STATE();
    case 1292:
      if (lookahead == 'i') ADVANCE(1719);
      END_STATE();
    case 1293:
      if (lookahead == 'i') ADVANCE(534);
      END_STATE();
    case 1294:
      if (lookahead == 'i') ADVANCE(1765);
      END_STATE();
    case 1295:
      if (lookahead == 'i') ADVANCE(1693);
      END_STATE();
    case 1296:
      if (lookahead == 'i') ADVANCE(1768);
      END_STATE();
    case 1297:
      if (lookahead == 'i') ADVANCE(2068);
      END_STATE();
    case 1298:
      if (lookahead == 'i') ADVANCE(651);
      END_STATE();
    case 1299:
      if (lookahead == 'i') ADVANCE(1728);
      END_STATE();
    case 1300:
      if (lookahead == 'i') ADVANCE(1628);
      END_STATE();
    case 1301:
      if (lookahead == 'i') ADVANCE(1252);
      END_STATE();
    case 1302:
      if (lookahead == 'i') ADVANCE(1743);
      END_STATE();
    case 1303:
      if (lookahead == 'i') ADVANCE(1717);
      END_STATE();
    case 1304:
      if (lookahead == 'i') ADVANCE(1585);
      END_STATE();
    case 1305:
      if (lookahead == 'i') ADVANCE(2243);
      END_STATE();
    case 1306:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 1307:
      if (lookahead == 'i') ADVANCE(1171);
      END_STATE();
    case 1308:
      if (lookahead == 'i') ADVANCE(2557);
      END_STATE();
    case 1309:
      if (lookahead == 'i') ADVANCE(1231);
      END_STATE();
    case 1310:
      if (lookahead == 'i') ADVANCE(704);
      END_STATE();
    case 1311:
      if (lookahead == 'i') ADVANCE(1245);
      END_STATE();
    case 1312:
      if (lookahead == 'i') ADVANCE(1833);
      END_STATE();
    case 1313:
      if (lookahead == 'i') ADVANCE(2356);
      END_STATE();
    case 1314:
      if (lookahead == 'i') ADVANCE(1240);
      END_STATE();
    case 1315:
      if (lookahead == 'i') ADVANCE(1746);
      END_STATE();
    case 1316:
      if (lookahead == 'i') ADVANCE(1133);
      END_STATE();
    case 1317:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 1318:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 1319:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 1320:
      if (lookahead == 'i') ADVANCE(2098);
      END_STATE();
    case 1321:
      if (lookahead == 'i') ADVANCE(1197);
      END_STATE();
    case 1322:
      if (lookahead == 'i') ADVANCE(664);
      END_STATE();
    case 1323:
      if (lookahead == 'i') ADVANCE(1865);
      END_STATE();
    case 1324:
      if (lookahead == 'i') ADVANCE(665);
      END_STATE();
    case 1325:
      if (lookahead == 'i') ADVANCE(2057);
      END_STATE();
    case 1326:
      if (lookahead == 'i') ADVANCE(1752);
      END_STATE();
    case 1327:
      if (lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 1328:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 1329:
      if (lookahead == 'i') ADVANCE(1754);
      END_STATE();
    case 1330:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 1331:
      if (lookahead == 'i') ADVANCE(1184);
      END_STATE();
    case 1332:
      if (lookahead == 'i') ADVANCE(1936);
      END_STATE();
    case 1333:
      if (lookahead == 'i') ADVANCE(1940);
      END_STATE();
    case 1334:
      if (lookahead == 'i') ADVANCE(1941);
      END_STATE();
    case 1335:
      if (lookahead == 'i') ADVANCE(1943);
      END_STATE();
    case 1336:
      if (lookahead == 'i') ADVANCE(1923);
      END_STATE();
    case 1337:
      if (lookahead == 'i') ADVANCE(806);
      END_STATE();
    case 1338:
      if (lookahead == 'i') ADVANCE(2316);
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 1339:
      if (lookahead == 'i') ADVANCE(1945);
      END_STATE();
    case 1340:
      if (lookahead == 'i') ADVANCE(2562);
      END_STATE();
    case 1341:
      if (lookahead == 'i') ADVANCE(1950);
      END_STATE();
    case 1342:
      if (lookahead == 'i') ADVANCE(2623);
      END_STATE();
    case 1343:
      if (lookahead == 'i') ADVANCE(2392);
      END_STATE();
    case 1344:
      if (lookahead == 'i') ADVANCE(2571);
      END_STATE();
    case 1345:
      if (lookahead == 'i') ADVANCE(1953);
      END_STATE();
    case 1346:
      if (lookahead == 'i') ADVANCE(1954);
      END_STATE();
    case 1347:
      if (lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1348:
      if (lookahead == 'i') ADVANCE(2306);
      END_STATE();
    case 1349:
      if (lookahead == 'i') ADVANCE(899);
      END_STATE();
    case 1350:
      if (lookahead == 'i') ADVANCE(2876);
      END_STATE();
    case 1351:
      if (lookahead == 'i') ADVANCE(1130);
      END_STATE();
    case 1352:
      if (lookahead == 'i') ADVANCE(2745);
      END_STATE();
    case 1353:
      if (lookahead == 'i') ADVANCE(1712);
      END_STATE();
    case 1354:
      if (lookahead == 'i') ADVANCE(2555);
      END_STATE();
    case 1355:
      if (lookahead == 'i') ADVANCE(604);
      END_STATE();
    case 1356:
      if (lookahead == 'i') ADVANCE(1228);
      END_STATE();
    case 1357:
      if (lookahead == 'i') ADVANCE(1774);
      END_STATE();
    case 1358:
      if (lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 1359:
      if (lookahead == 'i') ADVANCE(1198);
      END_STATE();
    case 1360:
      if (lookahead == 'i') ADVANCE(2878);
      END_STATE();
    case 1361:
      if (lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 1362:
      if (lookahead == 'i') ADVANCE(2073);
      END_STATE();
    case 1363:
      if (lookahead == 'i') ADVANCE(686);
      END_STATE();
    case 1364:
      if (lookahead == 'i') ADVANCE(1222);
      END_STATE();
    case 1365:
      if (lookahead == 'i') ADVANCE(1777);
      END_STATE();
    case 1366:
      if (lookahead == 'i') ADVANCE(677);
      END_STATE();
    case 1367:
      if (lookahead == 'i') ADVANCE(1819);
      END_STATE();
    case 1368:
      if (lookahead == 'i') ADVANCE(2877);
      END_STATE();
    case 1369:
      if (lookahead == 'i') ADVANCE(2749);
      END_STATE();
    case 1370:
      if (lookahead == 'i') ADVANCE(2077);
      END_STATE();
    case 1371:
      if (lookahead == 'i') ADVANCE(1594);
      END_STATE();
    case 1372:
      if (lookahead == 'i') ADVANCE(1223);
      if (lookahead == 't') ADVANCE(729);
      END_STATE();
    case 1373:
      if (lookahead == 'i') ADVANCE(1778);
      END_STATE();
    case 1374:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 1375:
      if (lookahead == 'i') ADVANCE(2217);
      END_STATE();
    case 1376:
      if (lookahead == 'i') ADVANCE(1196);
      END_STATE();
    case 1377:
      if (lookahead == 'i') ADVANCE(957);
      END_STATE();
    case 1378:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 1379:
      if (lookahead == 'i') ADVANCE(1779);
      END_STATE();
    case 1380:
      if (lookahead == 'i') ADVANCE(1820);
      END_STATE();
    case 1381:
      if (lookahead == 'i') ADVANCE(1193);
      END_STATE();
    case 1382:
      if (lookahead == 'i') ADVANCE(2484);
      END_STATE();
    case 1383:
      if (lookahead == 'i') ADVANCE(1807);
      END_STATE();
    case 1384:
      if (lookahead == 'i') ADVANCE(1214);
      END_STATE();
    case 1385:
      if (lookahead == 'i') ADVANCE(1214);
      if (lookahead == 'u') ADVANCE(537);
      END_STATE();
    case 1386:
      if (lookahead == 'i') ADVANCE(693);
      if (lookahead == 'n') ADVANCE(2710);
      if (lookahead == 's') ADVANCE(448);
      END_STATE();
    case 1387:
      if (lookahead == 'i') ADVANCE(1834);
      END_STATE();
    case 1388:
      if (lookahead == 'i') ADVANCE(2576);
      END_STATE();
    case 1389:
      if (lookahead == 'i') ADVANCE(1811);
      END_STATE();
    case 1390:
      if (lookahead == 'i') ADVANCE(2219);
      END_STATE();
    case 1391:
      if (lookahead == 'i') ADVANCE(1838);
      END_STATE();
    case 1392:
      if (lookahead == 'i') ADVANCE(1703);
      END_STATE();
    case 1393:
      if (lookahead == 'i') ADVANCE(1782);
      END_STATE();
    case 1394:
      if (lookahead == 'i') ADVANCE(1609);
      END_STATE();
    case 1395:
      if (lookahead == 'i') ADVANCE(1786);
      END_STATE();
    case 1396:
      if (lookahead == 'i') ADVANCE(719);
      END_STATE();
    case 1397:
      if (lookahead == 'i') ADVANCE(2227);
      END_STATE();
    case 1398:
      if (lookahead == 'i') ADVANCE(1787);
      END_STATE();
    case 1399:
      if (lookahead == 'i') ADVANCE(984);
      END_STATE();
    case 1400:
      if (lookahead == 'i') ADVANCE(1611);
      END_STATE();
    case 1401:
      if (lookahead == 'i') ADVANCE(1816);
      END_STATE();
    case 1402:
      if (lookahead == 'i') ADVANCE(1790);
      END_STATE();
    case 1403:
      if (lookahead == 'i') ADVANCE(995);
      END_STATE();
    case 1404:
      if (lookahead == 'i') ADVANCE(1612);
      END_STATE();
    case 1405:
      if (lookahead == 'i') ADVANCE(1792);
      END_STATE();
    case 1406:
      if (lookahead == 'i') ADVANCE(2424);
      END_STATE();
    case 1407:
      if (lookahead == 'i') ADVANCE(1001);
      END_STATE();
    case 1408:
      if (lookahead == 'i') ADVANCE(709);
      END_STATE();
    case 1409:
      if (lookahead == 'i') ADVANCE(1613);
      END_STATE();
    case 1410:
      if (lookahead == 'i') ADVANCE(2229);
      END_STATE();
    case 1411:
      if (lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 1412:
      if (lookahead == 'i') ADVANCE(1799);
      END_STATE();
    case 1413:
      if (lookahead == 'i') ADVANCE(1009);
      END_STATE();
    case 1414:
      if (lookahead == 'i') ADVANCE(2232);
      END_STATE();
    case 1415:
      if (lookahead == 'i') ADVANCE(1801);
      END_STATE();
    case 1416:
      if (lookahead == 'i') ADVANCE(2233);
      END_STATE();
    case 1417:
      if (lookahead == 'i') ADVANCE(2235);
      END_STATE();
    case 1418:
      if (lookahead == 'i') ADVANCE(2236);
      END_STATE();
    case 1419:
      if (lookahead == 'i') ADVANCE(2239);
      END_STATE();
    case 1420:
      if (lookahead == 'i') ADVANCE(2763);
      END_STATE();
    case 1421:
      if (lookahead == 'i') ADVANCE(1229);
      END_STATE();
    case 1422:
      if (lookahead == 'i') ADVANCE(463);
      END_STATE();
    case 1423:
      if (lookahead == 'i') ADVANCE(1239);
      END_STATE();
    case 1424:
      if (lookahead == 'i') ADVANCE(2604);
      END_STATE();
    case 1425:
      if (lookahead == 'i') ADVANCE(707);
      END_STATE();
    case 1426:
      if (lookahead == 'i') ADVANCE(1989);
      END_STATE();
    case 1427:
      if (lookahead == 'i') ADVANCE(1713);
      END_STATE();
    case 1428:
      if (lookahead == 'i') ADVANCE(2293);
      END_STATE();
    case 1429:
      if (lookahead == 'i') ADVANCE(1230);
      END_STATE();
    case 1430:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 1431:
      if (lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 1432:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 1433:
      if (lookahead == 'i') ADVANCE(2034);
      END_STATE();
    case 1434:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 1435:
      if (lookahead == 'i') ADVANCE(1998);
      END_STATE();
    case 1436:
      if (lookahead == 'i') ADVANCE(2475);
      END_STATE();
    case 1437:
      if (lookahead == 'i') ADVANCE(1233);
      END_STATE();
    case 1438:
      if (lookahead == 'i') ADVANCE(2013);
      END_STATE();
    case 1439:
      if (lookahead == 'i') ADVANCE(2003);
      END_STATE();
    case 1440:
      if (lookahead == 'i') ADVANCE(1235);
      END_STATE();
    case 1441:
      if (lookahead == 'i') ADVANCE(2009);
      END_STATE();
    case 1442:
      if (lookahead == 'i') ADVANCE(993);
      END_STATE();
    case 1443:
      if (lookahead == 'i') ADVANCE(2011);
      END_STATE();
    case 1444:
      if (lookahead == 'i') ADVANCE(2014);
      END_STATE();
    case 1445:
      if (lookahead == 'i') ADVANCE(2016);
      END_STATE();
    case 1446:
      if (lookahead == 'i') ADVANCE(1004);
      END_STATE();
    case 1447:
      if (lookahead == 'i') ADVANCE(2106);
      if (lookahead == 'o') ADVANCE(1740);
      END_STATE();
    case 1448:
      if (lookahead == 'i') ADVANCE(716);
      END_STATE();
    case 1449:
      if (lookahead == 'i') ADVANCE(1725);
      END_STATE();
    case 1450:
      if (lookahead == 'i') ADVANCE(1727);
      if (lookahead == 'l') ADVANCE(1935);
      if (lookahead == 'r') ADVANCE(974);
      END_STATE();
    case 1451:
      if (lookahead == 'i') ADVANCE(2107);
      END_STATE();
    case 1452:
      if (lookahead == 'i') ADVANCE(1649);
      END_STATE();
    case 1453:
      if (lookahead == 'i') ADVANCE(1244);
      END_STATE();
    case 1454:
      if (lookahead == 'i') ADVANCE(1647);
      END_STATE();
    case 1455:
      if (lookahead == 'i') ADVANCE(1860);
      END_STATE();
    case 1456:
      if (lookahead == 'i') ADVANCE(1241);
      END_STATE();
    case 1457:
      if (lookahead == 'i') ADVANCE(2650);
      END_STATE();
    case 1458:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 1459:
      if (lookahead == 'i') ADVANCE(2487);
      END_STATE();
    case 1460:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 1461:
      if (lookahead == 'i') ADVANCE(1731);
      if (lookahead == 'l') ADVANCE(2027);
      if (lookahead == 'r') ADVANCE(1083);
      END_STATE();
    case 1462:
      if (lookahead == 'i') ADVANCE(2115);
      END_STATE();
    case 1463:
      if (lookahead == 'i') ADVANCE(1658);
      END_STATE();
    case 1464:
      if (lookahead == 'i') ADVANCE(1650);
      END_STATE();
    case 1465:
      if (lookahead == 'i') ADVANCE(619);
      END_STATE();
    case 1466:
      if (lookahead == 'i') ADVANCE(2119);
      END_STATE();
    case 1467:
      if (lookahead == 'i') ADVANCE(1660);
      END_STATE();
    case 1468:
      if (lookahead == 'i') ADVANCE(1651);
      END_STATE();
    case 1469:
      if (lookahead == 'i') ADVANCE(620);
      END_STATE();
    case 1470:
      if (lookahead == 'i') ADVANCE(2121);
      END_STATE();
    case 1471:
      if (lookahead == 'i') ADVANCE(1661);
      END_STATE();
    case 1472:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 1473:
      if (lookahead == 'i') ADVANCE(2123);
      END_STATE();
    case 1474:
      if (lookahead == 'i') ADVANCE(1662);
      END_STATE();
    case 1475:
      if (lookahead == 'i') ADVANCE(1881);
      END_STATE();
    case 1476:
      if (lookahead == 'i') ADVANCE(726);
      if (lookahead == 'n') ADVANCE(2738);
      if (lookahead == 's') ADVANCE(454);
      END_STATE();
    case 1477:
      if (lookahead == 'i') ADVANCE(2036);
      END_STATE();
    case 1478:
      if (lookahead == 'i') ADVANCE(1163);
      END_STATE();
    case 1479:
      if (lookahead == 'i') ADVANCE(1248);
      END_STATE();
    case 1480:
      if (lookahead == 'i') ADVANCE(2505);
      END_STATE();
    case 1481:
      if (lookahead == 'i') ADVANCE(2141);
      if (lookahead == 'o') ADVANCE(2712);
      END_STATE();
    case 1482:
      if (lookahead == 'i') ADVANCE(1250);
      END_STATE();
    case 1483:
      if (lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 1484:
      if (lookahead == 'i') ADVANCE(2142);
      END_STATE();
    case 1485:
      if (lookahead == 'i') ADVANCE(1251);
      END_STATE();
    case 1486:
      if (lookahead == 'i') ADVANCE(2143);
      END_STATE();
    case 1487:
      if (lookahead == 'i') ADVANCE(1254);
      END_STATE();
    case 1488:
      if (lookahead == 'i') ADVANCE(1255);
      END_STATE();
    case 1489:
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 's') ADVANCE(826);
      END_STATE();
    case 1490:
      if (lookahead == 'k') ADVANCE(2989);
      END_STATE();
    case 1491:
      if (lookahead == 'k') ADVANCE(2990);
      END_STATE();
    case 1492:
      if (lookahead == 'k') ADVANCE(3030);
      END_STATE();
    case 1493:
      if (lookahead == 'k') ADVANCE(3166);
      END_STATE();
    case 1494:
      if (lookahead == 'k') ADVANCE(3104);
      END_STATE();
    case 1495:
      if (lookahead == 'k') ADVANCE(3200);
      END_STATE();
    case 1496:
      if (lookahead == 'k') ADVANCE(2051);
      END_STATE();
    case 1497:
      if (lookahead == 'k') ADVANCE(817);
      if (lookahead == 's') ADVANCE(2560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 1498:
      if (lookahead == 'k') ADVANCE(22);
      END_STATE();
    case 1499:
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 1500:
      if (lookahead == 'k') ADVANCE(935);
      if (lookahead == 'n') ADVANCE(2031);
      if (lookahead == 'p') ADVANCE(2040);
      END_STATE();
    case 1501:
      if (lookahead == 'k') ADVANCE(667);
      END_STATE();
    case 1502:
      if (lookahead == 'k') ADVANCE(669);
      END_STATE();
    case 1503:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 1504:
      if (lookahead == 'k') ADVANCE(825);
      END_STATE();
    case 1505:
      if (lookahead == 'k') ADVANCE(2382);
      END_STATE();
    case 1506:
      if (lookahead == 'k') ADVANCE(829);
      END_STATE();
    case 1507:
      if (lookahead == 'k') ADVANCE(836);
      END_STATE();
    case 1508:
      if (lookahead == 'k') ADVANCE(841);
      END_STATE();
    case 1509:
      if (lookahead == 'k') ADVANCE(844);
      END_STATE();
    case 1510:
      if (lookahead == 'k') ADVANCE(52);
      END_STATE();
    case 1511:
      if (lookahead == 'k') ADVANCE(848);
      END_STATE();
    case 1512:
      if (lookahead == 'k') ADVANCE(860);
      END_STATE();
    case 1513:
      if (lookahead == 'k') ADVANCE(863);
      END_STATE();
    case 1514:
      if (lookahead == 'k') ADVANCE(872);
      if (lookahead == 'n') ADVANCE(2042);
      if (lookahead == 'o') ADVANCE(1808);
      if (lookahead == 'p') ADVANCE(1278);
      if (lookahead == 's') ADVANCE(1372);
      if (lookahead == 'u') ADVANCE(1476);
      END_STATE();
    case 1515:
      if (lookahead == 'k') ADVANCE(824);
      END_STATE();
    case 1516:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 1517:
      if (lookahead == 'k') ADVANCE(2685);
      END_STATE();
    case 1518:
      if (lookahead == 'k') ADVANCE(2685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 1519:
      if (lookahead == 'k') ADVANCE(1829);
      END_STATE();
    case 1520:
      if (lookahead == 'k') ADVANCE(2695);
      END_STATE();
    case 1521:
      if (lookahead == 'k') ADVANCE(2485);
      END_STATE();
    case 1522:
      if (lookahead == 'k') ADVANCE(915);
      END_STATE();
    case 1523:
      if (lookahead == 'k') ADVANCE(694);
      END_STATE();
    case 1524:
      if (lookahead == 'k') ADVANCE(916);
      END_STATE();
    case 1525:
      if (lookahead == 'k') ADVANCE(917);
      END_STATE();
    case 1526:
      if (lookahead == 'k') ADVANCE(949);
      if (lookahead == 'p') ADVANCE(1521);
      END_STATE();
    case 1527:
      if (lookahead == 'k') ADVANCE(983);
      END_STATE();
    case 1528:
      if (lookahead == 'k') ADVANCE(1023);
      END_STATE();
    case 1529:
      if (lookahead == 'k') ADVANCE(1858);
      END_STATE();
    case 1530:
      if (lookahead == 'k') ADVANCE(962);
      END_STATE();
    case 1531:
      if (lookahead == 'k') ADVANCE(994);
      END_STATE();
    case 1532:
      if (lookahead == 'k') ADVANCE(969);
      END_STATE();
    case 1533:
      if (lookahead == 'k') ADVANCE(1000);
      END_STATE();
    case 1534:
      if (lookahead == 'k') ADVANCE(1007);
      END_STATE();
    case 1535:
      if (lookahead == 'k') ADVANCE(1011);
      END_STATE();
    case 1536:
      if (lookahead == 'k') ADVANCE(212);
      END_STATE();
    case 1537:
      if (lookahead == 'k') ADVANCE(1064);
      END_STATE();
    case 1538:
      if (lookahead == 'k') ADVANCE(1079);
      END_STATE();
    case 1539:
      if (lookahead == 'k') ADVANCE(1084);
      END_STATE();
    case 1540:
      if (lookahead == 'k') ADVANCE(216);
      END_STATE();
    case 1541:
      if (lookahead == 'k') ADVANCE(1087);
      if (lookahead == 'r') ADVANCE(1088);
      END_STATE();
    case 1542:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 1543:
      if (lookahead == 'k') ADVANCE(1103);
      if (lookahead == 'n') ADVANCE(2026);
      if (lookahead == 'o') ADVANCE(1773);
      if (lookahead == 'p') ADVANCE(1277);
      if (lookahead == 's') ADVANCE(951);
      if (lookahead == 'u') ADVANCE(1386);
      END_STATE();
    case 1544:
      if (lookahead == 'l') ADVANCE(3267);
      END_STATE();
    case 1545:
      if (lookahead == 'l') ADVANCE(3135);
      END_STATE();
    case 1546:
      if (lookahead == 'l') ADVANCE(3129);
      END_STATE();
    case 1547:
      if (lookahead == 'l') ADVANCE(3000);
      END_STATE();
    case 1548:
      if (lookahead == 'l') ADVANCE(3149);
      END_STATE();
    case 1549:
      if (lookahead == 'l') ADVANCE(3091);
      END_STATE();
    case 1550:
      if (lookahead == 'l') ADVANCE(2941);
      END_STATE();
    case 1551:
      if (lookahead == 'l') ADVANCE(3081);
      END_STATE();
    case 1552:
      if (lookahead == 'l') ADVANCE(3086);
      END_STATE();
    case 1553:
      if (lookahead == 'l') ADVANCE(3186);
      END_STATE();
    case 1554:
      if (lookahead == 'l') ADVANCE(3184);
      END_STATE();
    case 1555:
      if (lookahead == 'l') ADVANCE(3185);
      END_STATE();
    case 1556:
      if (lookahead == 'l') ADVANCE(2942);
      END_STATE();
    case 1557:
      if (lookahead == 'l') ADVANCE(3187);
      END_STATE();
    case 1558:
      if (lookahead == 'l') ADVANCE(3084);
      END_STATE();
    case 1559:
      if (lookahead == 'l') ADVANCE(3083);
      END_STATE();
    case 1560:
      if (lookahead == 'l') ADVANCE(3213);
      END_STATE();
    case 1561:
      if (lookahead == 'l') ADVANCE(3096);
      END_STATE();
    case 1562:
      if (lookahead == 'l') ADVANCE(3200);
      END_STATE();
    case 1563:
      if (lookahead == 'l') ADVANCE(3126);
      END_STATE();
    case 1564:
      if (lookahead == 'l') ADVANCE(3202);
      END_STATE();
    case 1565:
      if (lookahead == 'l') ADVANCE(842);
      if (lookahead == 'r') ADVANCE(936);
      END_STATE();
    case 1566:
      if (lookahead == 'l') ADVANCE(1578);
      END_STATE();
    case 1567:
      if (lookahead == 'l') ADVANCE(2708);
      END_STATE();
    case 1568:
      if (lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 1569:
      if (lookahead == 'l') ADVANCE(2785);
      if (lookahead == 's') ADVANCE(1495);
      if (lookahead == 'u') ADVANCE(2596);
      END_STATE();
    case 1570:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 1571:
      if (lookahead == 'l') ADVANCE(2814);
      END_STATE();
    case 1572:
      if (lookahead == 'l') ADVANCE(2812);
      END_STATE();
    case 1573:
      if (lookahead == 'l') ADVANCE(1622);
      if (lookahead == 'r') ADVANCE(1716);
      if (lookahead == 's') ADVANCE(1542);
      if (lookahead == 'u') ADVANCE(2568);
      END_STATE();
    case 1574:
      if (lookahead == 'l') ADVANCE(1194);
      END_STATE();
    case 1575:
      if (lookahead == 'l') ADVANCE(1436);
      END_STATE();
    case 1576:
      if (lookahead == 'l') ADVANCE(955);
      END_STATE();
    case 1577:
      if (lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 1578:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 1579:
      if (lookahead == 'l') ADVANCE(1547);
      END_STATE();
    case 1580:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 1581:
      if (lookahead == 'l') ADVANCE(1355);
      END_STATE();
    case 1582:
      if (lookahead == 'l') ADVANCE(2815);
      END_STATE();
    case 1583:
      if (lookahead == 'l') ADVANCE(1119);
      END_STATE();
    case 1584:
      if (lookahead == 'l') ADVANCE(2822);
      END_STATE();
    case 1585:
      if (lookahead == 'l') ADVANCE(2622);
      END_STATE();
    case 1586:
      if (lookahead == 'l') ADVANCE(2613);
      END_STATE();
    case 1587:
      if (lookahead == 'l') ADVANCE(2357);
      END_STATE();
    case 1588:
      if (lookahead == 'l') ADVANCE(2826);
      END_STATE();
    case 1589:
      if (lookahead == 'l') ADVANCE(1121);
      END_STATE();
    case 1590:
      if (lookahead == 'l') ADVANCE(1422);
      END_STATE();
    case 1591:
      if (lookahead == 'l') ADVANCE(1319);
      END_STATE();
    case 1592:
      if (lookahead == 'l') ADVANCE(1361);
      END_STATE();
    case 1593:
      if (lookahead == 'l') ADVANCE(1980);
      END_STATE();
    case 1594:
      if (lookahead == 'l') ADVANCE(753);
      END_STATE();
    case 1595:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 1596:
      if (lookahead == 'l') ADVANCE(1939);
      END_STATE();
    case 1597:
      if (lookahead == 'l') ADVANCE(1944);
      END_STATE();
    case 1598:
      if (lookahead == 'l') ADVANCE(2389);
      END_STATE();
    case 1599:
      if (lookahead == 'l') ADVANCE(1922);
      END_STATE();
    case 1600:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 1601:
      if (lookahead == 'l') ADVANCE(2542);
      END_STATE();
    case 1602:
      if (lookahead == 'l') ADVANCE(763);
      END_STATE();
    case 1603:
      if (lookahead == 'l') ADVANCE(2543);
      END_STATE();
    case 1604:
      if (lookahead == 'l') ADVANCE(765);
      END_STATE();
    case 1605:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 1606:
      if (lookahead == 'l') ADVANCE(766);
      END_STATE();
    case 1607:
      if (lookahead == 'l') ADVANCE(2023);
      if (lookahead == 's') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3165);
      END_STATE();
    case 1608:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 1609:
      if (lookahead == 'l') ADVANCE(774);
      END_STATE();
    case 1610:
      if (lookahead == 'l') ADVANCE(778);
      END_STATE();
    case 1611:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 1612:
      if (lookahead == 'l') ADVANCE(792);
      END_STATE();
    case 1613:
      if (lookahead == 'l') ADVANCE(799);
      END_STATE();
    case 1614:
      if (lookahead == 'l') ADVANCE(1499);
      END_STATE();
    case 1615:
      if (lookahead == 'l') ADVANCE(824);
      END_STATE();
    case 1616:
      if (lookahead == 'l') ADVANCE(1199);
      END_STATE();
    case 1617:
      if (lookahead == 'l') ADVANCE(1655);
      END_STATE();
    case 1618:
      if (lookahead == 'l') ADVANCE(1600);
      END_STATE();
    case 1619:
      if (lookahead == 'l') ADVANCE(893);
      END_STATE();
    case 1620:
      if (lookahead == 'l') ADVANCE(1201);
      END_STATE();
    case 1621:
      if (lookahead == 'l') ADVANCE(958);
      END_STATE();
    case 1622:
      if (lookahead == 'l') ADVANCE(1992);
      END_STATE();
    case 1623:
      if (lookahead == 'l') ADVANCE(1208);
      END_STATE();
    case 1624:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 1625:
      if (lookahead == 'l') ADVANCE(1310);
      END_STATE();
    case 1626:
      if (lookahead == 'l') ADVANCE(1210);
      END_STATE();
    case 1627:
      if (lookahead == 'l') ADVANCE(1211);
      END_STATE();
    case 1628:
      if (lookahead == 'l') ADVANCE(959);
      END_STATE();
    case 1629:
      if (lookahead == 'l') ADVANCE(1213);
      END_STATE();
    case 1630:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 1631:
      if (lookahead == 'l') ADVANCE(1367);
      END_STATE();
    case 1632:
      if (lookahead == 'l') ADVANCE(695);
      END_STATE();
    case 1633:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 1634:
      if (lookahead == 'l') ADVANCE(980);
      END_STATE();
    case 1635:
      if (lookahead == 'l') ADVANCE(1218);
      END_STATE();
    case 1636:
      if (lookahead == 'l') ADVANCE(1219);
      END_STATE();
    case 1637:
      if (lookahead == 'l') ADVANCE(1380);
      END_STATE();
    case 1638:
      if (lookahead == 'l') ADVANCE(1220);
      END_STATE();
    case 1639:
      if (lookahead == 'l') ADVANCE(2586);
      END_STATE();
    case 1640:
      if (lookahead == 'l') ADVANCE(946);
      END_STATE();
    case 1641:
      if (lookahead == 'l') ADVANCE(2850);
      END_STATE();
    case 1642:
      if (lookahead == 'l') ADVANCE(932);
      END_STATE();
    case 1643:
      if (lookahead == 'l') ADVANCE(2597);
      END_STATE();
    case 1644:
      if (lookahead == 'l') ADVANCE(2599);
      END_STATE();
    case 1645:
      if (lookahead == 'l') ADVANCE(1396);
      END_STATE();
    case 1646:
      if (lookahead == 'l') ADVANCE(1406);
      END_STATE();
    case 1647:
      if (lookahead == 'l') ADVANCE(2624);
      END_STATE();
    case 1648:
      if (lookahead == 'l') ADVANCE(1425);
      END_STATE();
    case 1649:
      if (lookahead == 'l') ADVANCE(1039);
      END_STATE();
    case 1650:
      if (lookahead == 'l') ADVANCE(2625);
      END_STATE();
    case 1651:
      if (lookahead == 'l') ADVANCE(2626);
      END_STATE();
    case 1652:
      if (lookahead == 'l') ADVANCE(982);
      END_STATE();
    case 1653:
      if (lookahead == 'l') ADVANCE(2627);
      END_STATE();
    case 1654:
      if (lookahead == 'l') ADVANCE(1002);
      END_STATE();
    case 1655:
      if (lookahead == 'l') ADVANCE(1402);
      END_STATE();
    case 1656:
      if (lookahead == 'l') ADVANCE(1430);
      END_STATE();
    case 1657:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 1658:
      if (lookahead == 'l') ADVANCE(1043);
      END_STATE();
    case 1659:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 1660:
      if (lookahead == 'l') ADVANCE(1047);
      END_STATE();
    case 1661:
      if (lookahead == 'l') ADVANCE(1049);
      END_STATE();
    case 1662:
      if (lookahead == 'l') ADVANCE(1050);
      END_STATE();
    case 1663:
      if (lookahead == 'l') ADVANCE(1458);
      END_STATE();
    case 1664:
      if (lookahead == 'l') ADVANCE(2495);
      END_STATE();
    case 1665:
      if (lookahead == 'l') ADVANCE(1465);
      END_STATE();
    case 1666:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 1667:
      if (lookahead == 'l') ADVANCE(1469);
      END_STATE();
    case 1668:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 1669:
      if (lookahead == 'l') ADVANCE(1472);
      END_STATE();
    case 1670:
      if (lookahead == 'l') ADVANCE(1480);
      END_STATE();
    case 1671:
      if (lookahead == 'l') ADVANCE(1105);
      END_STATE();
    case 1672:
      if (lookahead == 'l') ADVANCE(1165);
      END_STATE();
    case 1673:
      if (lookahead == 'l') ADVANCE(2741);
      END_STATE();
    case 1674:
      if (lookahead == 'm') ADVANCE(1683);
      END_STATE();
    case 1675:
      if (lookahead == 'm') ADVANCE(3106);
      END_STATE();
    case 1676:
      if (lookahead == 'm') ADVANCE(2962);
      END_STATE();
    case 1677:
      if (lookahead == 'm') ADVANCE(3107);
      END_STATE();
    case 1678:
      if (lookahead == 'm') ADVANCE(3024);
      END_STATE();
    case 1679:
      if (lookahead == 'm') ADVANCE(2963);
      END_STATE();
    case 1680:
      if (lookahead == 'm') ADVANCE(2938);
      END_STATE();
    case 1681:
      if (lookahead == 'm') ADVANCE(1967);
      END_STATE();
    case 1682:
      if (lookahead == 'm') ADVANCE(1354);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 's') ADVANCE(586);
      if (lookahead == 'x') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 1683:
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(1565);
      END_STATE();
    case 1684:
      if (lookahead == 'm') ADVANCE(1714);
      END_STATE();
    case 1685:
      if (lookahead == 'm') ADVANCE(525);
      END_STATE();
    case 1686:
      if (lookahead == 'm') ADVANCE(1827);
      END_STATE();
    case 1687:
      if (lookahead == 'm') ADVANCE(1928);
      END_STATE();
    case 1688:
      if (lookahead == 'm') ADVANCE(2707);
      if (lookahead == 'n') ADVANCE(1030);
      if (lookahead == 'o') ADVANCE(1766);
      END_STATE();
    case 1689:
      if (lookahead == 'm') ADVANCE(2093);
      END_STATE();
    case 1690:
      if (lookahead == 'm') ADVANCE(529);
      END_STATE();
    case 1691:
      if (lookahead == 'm') ADVANCE(1459);
      END_STATE();
    case 1692:
      if (lookahead == 'm') ADVANCE(2087);
      END_STATE();
    case 1693:
      if (lookahead == 'm') ADVANCE(754);
      END_STATE();
    case 1694:
      if (lookahead == 'm') ADVANCE(943);
      END_STATE();
    case 1695:
      if (lookahead == 'm') ADVANCE(768);
      END_STATE();
    case 1696:
      if (lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 1697:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 1698:
      if (lookahead == 'm') ADVANCE(2008);
      END_STATE();
    case 1699:
      if (lookahead == 'm') ADVANCE(838);
      END_STATE();
    case 1700:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 1701:
      if (lookahead == 'm') ADVANCE(779);
      END_STATE();
    case 1702:
      if (lookahead == 'm') ADVANCE(849);
      END_STATE();
    case 1703:
      if (lookahead == 'm') ADVANCE(782);
      END_STATE();
    case 1704:
      if (lookahead == 'm') ADVANCE(891);
      END_STATE();
    case 1705:
      if (lookahead == 'm') ADVANCE(793);
      END_STATE();
    case 1706:
      if (lookahead == 'm') ADVANCE(853);
      END_STATE();
    case 1707:
      if (lookahead == 'm') ADVANCE(903);
      END_STATE();
    case 1708:
      if (lookahead == 'm') ADVANCE(905);
      END_STATE();
    case 1709:
      if (lookahead == 'm') ADVANCE(794);
      END_STATE();
    case 1710:
      if (lookahead == 'm') ADVANCE(1527);
      END_STATE();
    case 1711:
      if (lookahead == 'm') ADVANCE(412);
      END_STATE();
    case 1712:
      if (lookahead == 'm') ADVANCE(415);
      END_STATE();
    case 1713:
      if (lookahead == 'm') ADVANCE(416);
      END_STATE();
    case 1714:
      if (lookahead == 'm') ADVANCE(973);
      if (lookahead == 'p') ADVANCE(2291);
      END_STATE();
    case 1715:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 1716:
      if (lookahead == 'm') ADVANCE(1949);
      END_STATE();
    case 1717:
      if (lookahead == 'm') ADVANCE(928);
      END_STATE();
    case 1718:
      if (lookahead == 'm') ADVANCE(1388);
      if (lookahead == 's') ADVANCE(2565);
      END_STATE();
    case 1719:
      if (lookahead == 'm') ADVANCE(2096);
      END_STATE();
    case 1720:
      if (lookahead == 'm') ADVANCE(1843);
      END_STATE();
    case 1721:
      if (lookahead == 'm') ADVANCE(1382);
      END_STATE();
    case 1722:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 1723:
      if (lookahead == 'm') ADVANCE(2010);
      END_STATE();
    case 1724:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 1725:
      if (lookahead == 'm') ADVANCE(485);
      END_STATE();
    case 1726:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 1727:
      if (lookahead == 'm') ADVANCE(2099);
      END_STATE();
    case 1728:
      if (lookahead == 'm') ADVANCE(1091);
      END_STATE();
    case 1729:
      if (lookahead == 'm') ADVANCE(2012);
      END_STATE();
    case 1730:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 1731:
      if (lookahead == 'm') ADVANCE(2102);
      END_STATE();
    case 1732:
      if (lookahead == 'm') ADVANCE(2018);
      END_STATE();
    case 1733:
      if (lookahead == 'm') ADVANCE(2021);
      END_STATE();
    case 1734:
      if (lookahead == 'm') ADVANCE(2022);
      END_STATE();
    case 1735:
      if (lookahead == 'm') ADVANCE(2024);
      END_STATE();
    case 1736:
      if (lookahead == 'm') ADVANCE(2113);
      END_STATE();
    case 1737:
      if (lookahead == 'm') ADVANCE(1457);
      if (lookahead == 'n') ADVANCE(632);
      if (lookahead == 's') ADVANCE(640);
      if (lookahead == 'x') ADVANCE(2101);
      END_STATE();
    case 1738:
      if (lookahead == 'm') ADVANCE(2130);
      END_STATE();
    case 1739:
      if (lookahead == 'm') ADVANCE(2139);
      END_STATE();
    case 1740:
      if (lookahead == 'm') ADVANCE(2140);
      END_STATE();
    case 1741:
      if (lookahead == 'm') ADVANCE(541);
      END_STATE();
    case 1742:
      if (lookahead == 'n') ADVANCE(559);
      END_STATE();
    case 1743:
      if (lookahead == 'n') ADVANCE(3267);
      END_STATE();
    case 1744:
      if (lookahead == 'n') ADVANCE(3135);
      END_STATE();
    case 1745:
      if (lookahead == 'n') ADVANCE(3129);
      END_STATE();
    case 1746:
      if (lookahead == 'n') ADVANCE(3125);
      END_STATE();
    case 1747:
      if (lookahead == 'n') ADVANCE(3008);
      END_STATE();
    case 1748:
      if (lookahead == 'n') ADVANCE(3178);
      END_STATE();
    case 1749:
      if (lookahead == 'n') ADVANCE(3176);
      END_STATE();
    case 1750:
      if (lookahead == 'n') ADVANCE(3177);
      END_STATE();
    case 1751:
      if (lookahead == 'n') ADVANCE(3183);
      END_STATE();
    case 1752:
      if (lookahead == 'n') ADVANCE(3201);
      END_STATE();
    case 1753:
      if (lookahead == 'n') ADVANCE(3009);
      END_STATE();
    case 1754:
      if (lookahead == 'n') ADVANCE(2981);
      END_STATE();
    case 1755:
      if (lookahead == 'n') ADVANCE(3003);
      END_STATE();
    case 1756:
      if (lookahead == 'n') ADVANCE(2964);
      END_STATE();
    case 1757:
      if (lookahead == 'n') ADVANCE(2965);
      END_STATE();
    case 1758:
      if (lookahead == 'n') ADVANCE(3104);
      END_STATE();
    case 1759:
      if (lookahead == 'n') ADVANCE(3126);
      END_STATE();
    case 1760:
      if (lookahead == 'n') ADVANCE(2679);
      if (lookahead == 'r') ADVANCE(1974);
      END_STATE();
    case 1761:
      if (lookahead == 'n') ADVANCE(1226);
      if (lookahead == 'r') ADVANCE(1225);
      if (lookahead == 'x') ADVANCE(20);
      END_STATE();
    case 1762:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 1763:
      if (lookahead == 'n') ADVANCE(644);
      END_STATE();
    case 1764:
      if (lookahead == 'n') ADVANCE(678);
      END_STATE();
    case 1765:
      if (lookahead == 'n') ADVANCE(1169);
      END_STATE();
    case 1766:
      if (lookahead == 'n') ADVANCE(575);
      END_STATE();
    case 1767:
      if (lookahead == 'n') ADVANCE(2634);
      END_STATE();
    case 1768:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 1769:
      if (lookahead == 'n') ADVANCE(1519);
      END_STATE();
    case 1770:
      if (lookahead == 'n') ADVANCE(1571);
      if (lookahead == 'p') ADVANCE(2566);
      END_STATE();
    case 1771:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 1772:
      if (lookahead == 'n') ADVANCE(2516);
      END_STATE();
    case 1773:
      if (lookahead == 'n') ADVANCE(1572);
      END_STATE();
    case 1774:
      if (lookahead == 'n') ADVANCE(1238);
      END_STATE();
    case 1775:
      if (lookahead == 'n') ADVANCE(1139);
      END_STATE();
    case 1776:
      if (lookahead == 'n') ADVANCE(2482);
      END_STATE();
    case 1777:
      if (lookahead == 'n') ADVANCE(1172);
      END_STATE();
    case 1778:
      if (lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 1779:
      if (lookahead == 'n') ADVANCE(1195);
      END_STATE();
    case 1780:
      if (lookahead == 'n') ADVANCE(609);
      END_STATE();
    case 1781:
      if (lookahead == 'n') ADVANCE(1206);
      END_STATE();
    case 1782:
      if (lookahead == 'n') ADVANCE(1174);
      END_STATE();
    case 1783:
      if (lookahead == 'n') ADVANCE(2357);
      END_STATE();
    case 1784:
      if (lookahead == 'n') ADVANCE(449);
      END_STATE();
    case 1785:
      if (lookahead == 'n') ADVANCE(2361);
      END_STATE();
    case 1786:
      if (lookahead == 'n') ADVANCE(1175);
      END_STATE();
    case 1787:
      if (lookahead == 'n') ADVANCE(1176);
      END_STATE();
    case 1788:
      if (lookahead == 'n') ADVANCE(2519);
      END_STATE();
    case 1789:
      if (lookahead == 'n') ADVANCE(2362);
      END_STATE();
    case 1790:
      if (lookahead == 'n') ADVANCE(1177);
      END_STATE();
    case 1791:
      if (lookahead == 'n') ADVANCE(2520);
      END_STATE();
    case 1792:
      if (lookahead == 'n') ADVANCE(1178);
      END_STATE();
    case 1793:
      if (lookahead == 'n') ADVANCE(2564);
      END_STATE();
    case 1794:
      if (lookahead == 'n') ADVANCE(2365);
      END_STATE();
    case 1795:
      if (lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 1796:
      if (lookahead == 'n') ADVANCE(1181);
      if (lookahead == 'o') ADVANCE(1520);
      END_STATE();
    case 1797:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 1798:
      if (lookahead == 'n') ADVANCE(2366);
      END_STATE();
    case 1799:
      if (lookahead == 'n') ADVANCE(1180);
      END_STATE();
    case 1800:
      if (lookahead == 'n') ADVANCE(2367);
      END_STATE();
    case 1801:
      if (lookahead == 'n') ADVANCE(1182);
      END_STATE();
    case 1802:
      if (lookahead == 'n') ADVANCE(1584);
      END_STATE();
    case 1803:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 1804:
      if (lookahead == 'n') ADVANCE(1588);
      END_STATE();
    case 1805:
      if (lookahead == 'n') ADVANCE(1582);
      END_STATE();
    case 1806:
      if (lookahead == 'n') ADVANCE(2376);
      END_STATE();
    case 1807:
      if (lookahead == 'n') ADVANCE(2530);
      END_STATE();
    case 1808:
      if (lookahead == 'n') ADVANCE(1641);
      END_STATE();
    case 1809:
      if (lookahead == 'n') ADVANCE(2531);
      END_STATE();
    case 1810:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 1811:
      if (lookahead == 'n') ADVANCE(2532);
      END_STATE();
    case 1812:
      if (lookahead == 'n') ADVANCE(2533);
      END_STATE();
    case 1813:
      if (lookahead == 'n') ADVANCE(2537);
      END_STATE();
    case 1814:
      if (lookahead == 'n') ADVANCE(2580);
      END_STATE();
    case 1815:
      if (lookahead == 'n') ADVANCE(2389);
      END_STATE();
    case 1816:
      if (lookahead == 'n') ADVANCE(2539);
      END_STATE();
    case 1817:
      if (lookahead == 'n') ADVANCE(2584);
      END_STATE();
    case 1818:
      if (lookahead == 'n') ADVANCE(749);
      END_STATE();
    case 1819:
      if (lookahead == 'n') ADVANCE(888);
      END_STATE();
    case 1820:
      if (lookahead == 'n') ADVANCE(892);
      END_STATE();
    case 1821:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 1822:
      if (lookahead == 'n') ADVANCE(798);
      END_STATE();
    case 1823:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 1824:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 1825:
      if (lookahead == 'n') ADVANCE(747);
      END_STATE();
    case 1826:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 1827:
      if (lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 1828:
      if (lookahead == 'n') ADVANCE(1505);
      END_STATE();
    case 1829:
      if (lookahead == 'n') ADVANCE(1982);
      END_STATE();
    case 1830:
      if (lookahead == 'n') ADVANCE(2067);
      END_STATE();
    case 1831:
      if (lookahead == 'n') ADVANCE(1931);
      END_STATE();
    case 1832:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 1833:
      if (lookahead == 'n') ADVANCE(1353);
      END_STATE();
    case 1834:
      if (lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 1835:
      if (lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 1836:
      if (lookahead == 'n') ADVANCE(819);
      END_STATE();
    case 1837:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 1838:
      if (lookahead == 'n') ADVANCE(1205);
      END_STATE();
    case 1839:
      if (lookahead == 'n') ADVANCE(687);
      END_STATE();
    case 1840:
      if (lookahead == 'n') ADVANCE(2088);
      END_STATE();
    case 1841:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 1842:
      if (lookahead == 'n') ADVANCE(583);
      END_STATE();
    case 1843:
      if (lookahead == 'n') ADVANCE(1221);
      END_STATE();
    case 1844:
      if (lookahead == 'n') ADVANCE(2570);
      END_STATE();
    case 1845:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 1846:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 1847:
      if (lookahead == 'n') ADVANCE(886);
      END_STATE();
    case 1848:
      if (lookahead == 'n') ADVANCE(907);
      END_STATE();
    case 1849:
      if (lookahead == 'n') ADVANCE(990);
      END_STATE();
    case 1850:
      if (lookahead == 'n') ADVANCE(2709);
      if (lookahead == 'o') ADVANCE(1946);
      END_STATE();
    case 1851:
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 's') ADVANCE(3036);
      END_STATE();
    case 1852:
      if (lookahead == 'n') ADVANCE(2026);
      END_STATE();
    case 1853:
      if (lookahead == 'n') ADVANCE(610);
      END_STATE();
    case 1854:
      if (lookahead == 'n') ADVANCE(455);
      END_STATE();
    case 1855:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 1856:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 1857:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 1858:
      if (lookahead == 'n') ADVANCE(1991);
      END_STATE();
    case 1859:
      if (lookahead == 'n') ADVANCE(2025);
      END_STATE();
    case 1860:
      if (lookahead == 'n') ADVANCE(1427);
      END_STATE();
    case 1861:
      if (lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 1862:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 1863:
      if (lookahead == 'n') ADVANCE(462);
      END_STATE();
    case 1864:
      if (lookahead == 'n') ADVANCE(1014);
      END_STATE();
    case 1865:
      if (lookahead == 'n') ADVANCE(2490);
      END_STATE();
    case 1866:
      if (lookahead == 'n') ADVANCE(467);
      END_STATE();
    case 1867:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 1868:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 1869:
      if (lookahead == 'n') ADVANCE(471);
      END_STATE();
    case 1870:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 1871:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 1872:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 1873:
      if (lookahead == 'n') ADVANCE(473);
      END_STATE();
    case 1874:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 1875:
      if (lookahead == 'n') ADVANCE(1395);
      END_STATE();
    case 1876:
      if (lookahead == 'n') ADVANCE(1405);
      END_STATE();
    case 1877:
      if (lookahead == 'n') ADVANCE(1529);
      if (lookahead == 'r') ADVANCE(1563);
      END_STATE();
    case 1878:
      if (lookahead == 'n') ADVANCE(1035);
      END_STATE();
    case 1879:
      if (lookahead == 'n') ADVANCE(1065);
      END_STATE();
    case 1880:
      if (lookahead == 'n') ADVANCE(2035);
      END_STATE();
    case 1881:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 1882:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 1883:
      if (lookahead == 'n') ADVANCE(2042);
      END_STATE();
    case 1884:
      if (lookahead == 'n') ADVANCE(637);
      END_STATE();
    case 1885:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 1886:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 1887:
      if (lookahead == 'n') ADVANCE(1253);
      END_STATE();
    case 1888:
      if (lookahead == 'n') ADVANCE(2048);
      END_STATE();
    case 1889:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 1890:
      if (lookahead == 'o') ADVANCE(3267);
      END_STATE();
    case 1891:
      if (lookahead == 'o') ADVANCE(2784);
      END_STATE();
    case 1892:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 1893:
      if (lookahead == 'o') ADVANCE(3113);
      END_STATE();
    case 1894:
      if (lookahead == 'o') ADVANCE(3189);
      END_STATE();
    case 1895:
      if (lookahead == 'o') ADVANCE(3190);
      END_STATE();
    case 1896:
      if (lookahead == 'o') ADVANCE(3191);
      END_STATE();
    case 1897:
      if (lookahead == 'o') ADVANCE(2968);
      END_STATE();
    case 1898:
      if (lookahead == 'o') ADVANCE(3139);
      END_STATE();
    case 1899:
      if (lookahead == 'o') ADVANCE(3140);
      END_STATE();
    case 1900:
      if (lookahead == 'o') ADVANCE(3192);
      END_STATE();
    case 1901:
      if (lookahead == 'o') ADVANCE(3114);
      END_STATE();
    case 1902:
      if (lookahead == 'o') ADVANCE(3193);
      END_STATE();
    case 1903:
      if (lookahead == 'o') ADVANCE(3194);
      END_STATE();
    case 1904:
      if (lookahead == 'o') ADVANCE(3210);
      END_STATE();
    case 1905:
      if (lookahead == 'o') ADVANCE(1796);
      END_STATE();
    case 1906:
      if (lookahead == 'o') ADVANCE(3166);
      END_STATE();
    case 1907:
      if (lookahead == 'o') ADVANCE(2221);
      END_STATE();
    case 1908:
      if (lookahead == 'o') ADVANCE(703);
      if (lookahead == 't') ADVANCE(689);
      END_STATE();
    case 1909:
      if (lookahead == 'o') ADVANCE(3104);
      END_STATE();
    case 1910:
      if (lookahead == 'o') ADVANCE(3092);
      END_STATE();
    case 1911:
      if (lookahead == 'o') ADVANCE(1515);
      END_STATE();
    case 1912:
      if (lookahead == 'o') ADVANCE(2795);
      END_STATE();
    case 1913:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 1914:
      if (lookahead == 'o') ADVANCE(2777);
      END_STATE();
    case 1915:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 1916:
      if (lookahead == 'o') ADVANCE(2775);
      END_STATE();
    case 1917:
      if (lookahead == 'o') ADVANCE(1689);
      END_STATE();
    case 1918:
      if (lookahead == 'o') ADVANCE(2796);
      END_STATE();
    case 1919:
      if (lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1920:
      if (lookahead == 'o') ADVANCE(2069);
      END_STATE();
    case 1921:
      if (lookahead == 'o') ADVANCE(1525);
      END_STATE();
    case 1922:
      if (lookahead == 'o') ADVANCE(2787);
      END_STATE();
    case 1923:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 1924:
      if (lookahead == 'o') ADVANCE(2790);
      END_STATE();
    case 1925:
      if (lookahead == 'o') ADVANCE(2693);
      END_STATE();
    case 1926:
      if (lookahead == 'o') ADVANCE(2408);
      END_STATE();
    case 1927:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 1928:
      if (lookahead == 'o') ADVANCE(2149);
      END_STATE();
    case 1929:
      if (lookahead == 'o') ADVANCE(1730);
      END_STATE();
    case 1930:
      if (lookahead == 'o') ADVANCE(1773);
      END_STATE();
    case 1931:
      if (lookahead == 'o') ADVANCE(2255);
      END_STATE();
    case 1932:
      if (lookahead == 'o') ADVANCE(1593);
      END_STATE();
    case 1933:
      if (lookahead == 'o') ADVANCE(1678);
      END_STATE();
    case 1934:
      if (lookahead == 'o') ADVANCE(2609);
      END_STATE();
    case 1935:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 1936:
      if (lookahead == 'o') ADVANCE(1747);
      END_STATE();
    case 1937:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 1938:
      if (lookahead == 'o') ADVANCE(2317);
      END_STATE();
    case 1939:
      if (lookahead == 'o') ADVANCE(556);
      END_STATE();
    case 1940:
      if (lookahead == 'o') ADVANCE(1748);
      END_STATE();
    case 1941:
      if (lookahead == 'o') ADVANCE(1749);
      END_STATE();
    case 1942:
      if (lookahead == 'o') ADVANCE(2357);
      END_STATE();
    case 1943:
      if (lookahead == 'o') ADVANCE(1750);
      END_STATE();
    case 1944:
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 1945:
      if (lookahead == 'o') ADVANCE(1751);
      END_STATE();
    case 1946:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 1947:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 1948:
      if (lookahead == 'o') ADVANCE(1775);
      END_STATE();
    case 1949:
      if (lookahead == 'o') ADVANCE(2154);
      END_STATE();
    case 1950:
      if (lookahead == 'o') ADVANCE(1753);
      END_STATE();
    case 1951:
      if (lookahead == 'o') ADVANCE(1180);
      END_STATE();
    case 1952:
      if (lookahead == 'o') ADVANCE(2184);
      END_STATE();
    case 1953:
      if (lookahead == 'o') ADVANCE(1755);
      END_STATE();
    case 1954:
      if (lookahead == 'o') ADVANCE(1756);
      END_STATE();
    case 1955:
      if (lookahead == 'o') ADVANCE(1757);
      END_STATE();
    case 1956:
      if (lookahead == 'o') ADVANCE(2203);
      END_STATE();
    case 1957:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 1958:
      if (lookahead == 'o') ADVANCE(2377);
      END_STATE();
    case 1959:
      if (lookahead == 'o') ADVANCE(2379);
      END_STATE();
    case 1960:
      if (lookahead == 'o') ADVANCE(2258);
      END_STATE();
    case 1961:
      if (lookahead == 'o') ADVANCE(2389);
      END_STATE();
    case 1962:
      if (lookahead == 'o') ADVANCE(2211);
      END_STATE();
    case 1963:
      if (lookahead == 'o') ADVANCE(2164);
      END_STATE();
    case 1964:
      if (lookahead == 'o') ADVANCE(2165);
      END_STATE();
    case 1965:
      if (lookahead == 'o') ADVANCE(2216);
      END_STATE();
    case 1966:
      if (lookahead == 'o') ADVANCE(2168);
      END_STATE();
    case 1967:
      if (lookahead == 'o') ADVANCE(2195);
      if (lookahead == 's') ADVANCE(2620);
      END_STATE();
    case 1968:
      if (lookahead == 'o') ADVANCE(2220);
      END_STATE();
    case 1969:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 1970:
      if (lookahead == 'o') ADVANCE(2171);
      END_STATE();
    case 1971:
      if (lookahead == 'o') ADVANCE(2556);
      END_STATE();
    case 1972:
      if (lookahead == 'o') ADVANCE(1131);
      END_STATE();
    case 1973:
      if (lookahead == 'o') ADVANCE(2776);
      if (lookahead == 'u') ADVANCE(1298);
      END_STATE();
    case 1974:
      if (lookahead == 'o') ADVANCE(2682);
      END_STATE();
    case 1975:
      if (lookahead == 'o') ADVANCE(2778);
      END_STATE();
    case 1976:
      if (lookahead == 'o') ADVANCE(1692);
      if (lookahead == 'r') ADVANCE(2028);
      END_STATE();
    case 1977:
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1978:
      if (lookahead == 'o') ADVANCE(1771);
      END_STATE();
    case 1979:
      if (lookahead == 'o') ADVANCE(1802);
      END_STATE();
    case 1980:
      if (lookahead == 'o') ADVANCE(1785);
      END_STATE();
    case 1981:
      if (lookahead == 'o') ADVANCE(2399);
      END_STATE();
    case 1982:
      if (lookahead == 'o') ADVANCE(2780);
      END_STATE();
    case 1983:
      if (lookahead == 'o') ADVANCE(2779);
      END_STATE();
    case 1984:
      if (lookahead == 'o') ADVANCE(1207);
      END_STATE();
    case 1985:
      if (lookahead == 'o') ADVANCE(523);
      if (lookahead == 'p') ADVANCE(547);
      END_STATE();
    case 1986:
      if (lookahead == 'o') ADVANCE(613);
      END_STATE();
    case 1987:
      if (lookahead == 'o') ADVANCE(1700);
      END_STATE();
    case 1988:
      if (lookahead == 'o') ADVANCE(1804);
      END_STATE();
    case 1989:
      if (lookahead == 'o') ADVANCE(1789);
      END_STATE();
    case 1990:
      if (lookahead == 'o') ADVANCE(2215);
      END_STATE();
    case 1991:
      if (lookahead == 'o') ADVANCE(2781);
      END_STATE();
    case 1992:
      if (lookahead == 'o') ADVANCE(2789);
      END_STATE();
    case 1993:
      if (lookahead == 'o') ADVANCE(1855);
      END_STATE();
    case 1994:
      if (lookahead == 'o') ADVANCE(1249);
      END_STATE();
    case 1995:
      if (lookahead == 'o') ADVANCE(1591);
      END_STATE();
    case 1996:
      if (lookahead == 'o') ADVANCE(2190);
      END_STATE();
    case 1997:
      if (lookahead == 'o') ADVANCE(1805);
      END_STATE();
    case 1998:
      if (lookahead == 'o') ADVANCE(1794);
      END_STATE();
    case 1999:
      if (lookahead == 'o') ADVANCE(2688);
      END_STATE();
    case 2000:
      if (lookahead == 'o') ADVANCE(1856);
      END_STATE();
    case 2001:
      if (lookahead == 'o') ADVANCE(1212);
      END_STATE();
    case 2002:
      if (lookahead == 'o') ADVANCE(2137);
      END_STATE();
    case 2003:
      if (lookahead == 'o') ADVANCE(1798);
      END_STATE();
    case 2004:
      if (lookahead == 'o') ADVANCE(2575);
      END_STATE();
    case 2005:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 2006:
      if (lookahead == 'o') ADVANCE(2430);
      END_STATE();
    case 2007:
      if (lookahead == 'o') ADVANCE(1821);
      END_STATE();
    case 2008:
      if (lookahead == 'o') ADVANCE(2602);
      END_STATE();
    case 2009:
      if (lookahead == 'o') ADVANCE(1783);
      END_STATE();
    case 2010:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 2011:
      if (lookahead == 'o') ADVANCE(1800);
      END_STATE();
    case 2012:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 2013:
      if (lookahead == 'o') ADVANCE(1882);
      END_STATE();
    case 2014:
      if (lookahead == 'o') ADVANCE(1806);
      END_STATE();
    case 2015:
      if (lookahead == 'o') ADVANCE(1824);
      END_STATE();
    case 2016:
      if (lookahead == 'o') ADVANCE(1815);
      END_STATE();
    case 2017:
      if (lookahead == 'o') ADVANCE(2593);
      END_STATE();
    case 2018:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 2019:
      if (lookahead == 'o') ADVANCE(1825);
      END_STATE();
    case 2020:
      if (lookahead == 'o') ADVANCE(1826);
      END_STATE();
    case 2021:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 2022:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 2023:
      if (lookahead == 'o') ADVANCE(1795);
      END_STATE();
    case 2024:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 2025:
      if (lookahead == 'o') ADVANCE(2267);
      END_STATE();
    case 2026:
      if (lookahead == 'o') ADVANCE(2614);
      END_STATE();
    case 2027:
      if (lookahead == 'o') ADVANCE(606);
      END_STATE();
    case 2028:
      if (lookahead == 'o') ADVANCE(2463);
      END_STATE();
    case 2029:
      if (lookahead == 'o') ADVANCE(1724);
      END_STATE();
    case 2030:
      if (lookahead == 'o') ADVANCE(2269);
      END_STATE();
    case 2031:
      if (lookahead == 'o') ADVANCE(2642);
      END_STATE();
    case 2032:
      if (lookahead == 'o') ADVANCE(2792);
      END_STATE();
    case 2033:
      if (lookahead == 'o') ADVANCE(2645);
      END_STATE();
    case 2034:
      if (lookahead == 'o') ADVANCE(1872);
      END_STATE();
    case 2035:
      if (lookahead == 'o') ADVANCE(2648);
      END_STATE();
    case 2036:
      if (lookahead == 'o') ADVANCE(1874);
      END_STATE();
    case 2037:
      if (lookahead == 'o') ADVANCE(1736);
      END_STATE();
    case 2038:
      if (lookahead == 'o') ADVANCE(2332);
      END_STATE();
    case 2039:
      if (lookahead == 'o') ADVANCE(1738);
      END_STATE();
    case 2040:
      if (lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 2041:
      if (lookahead == 'o') ADVANCE(2498);
      END_STATE();
    case 2042:
      if (lookahead == 'o') ADVANCE(2671);
      END_STATE();
    case 2043:
      if (lookahead == 'o') ADVANCE(1739);
      END_STATE();
    case 2044:
      if (lookahead == 'o') ADVANCE(2136);
      END_STATE();
    case 2045:
      if (lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 2046:
      if (lookahead == 'o') ADVANCE(2737);
      END_STATE();
    case 2047:
      if (lookahead == 'o') ADVANCE(635);
      END_STATE();
    case 2048:
      if (lookahead == 'o') ADVANCE(1886);
      END_STATE();
    case 2049:
      if (lookahead == 'o') ADVANCE(2510);
      END_STATE();
    case 2050:
      if (lookahead == 'p') ADVANCE(1273);
      END_STATE();
    case 2051:
      if (lookahead == 'p') ADVANCE(310);
      END_STATE();
    case 2052:
      if (lookahead == 'p') ADVANCE(294);
      END_STATE();
    case 2053:
      if (lookahead == 'p') ADVANCE(3115);
      END_STATE();
    case 2054:
      if (lookahead == 'p') ADVANCE(3135);
      END_STATE();
    case 2055:
      if (lookahead == 'p') ADVANCE(2992);
      END_STATE();
    case 2056:
      if (lookahead == 'p') ADVANCE(3117);
      END_STATE();
    case 2057:
      if (lookahead == 'p') ADVANCE(2980);
      END_STATE();
    case 2058:
      if (lookahead == 'p') ADVANCE(3166);
      END_STATE();
    case 2059:
      if (lookahead == 'p') ADVANCE(2887);
      END_STATE();
    case 2060:
      if (lookahead == 'p') ADVANCE(3097);
      END_STATE();
    case 2061:
      if (lookahead == 'p') ADVANCE(3145);
      END_STATE();
    case 2062:
      if (lookahead == 'p') ADVANCE(3092);
      END_STATE();
    case 2063:
      if (lookahead == 'p') ADVANCE(280);
      END_STATE();
    case 2064:
      if (lookahead == 'p') ADVANCE(1265);
      END_STATE();
    case 2065:
      if (lookahead == 'p') ADVANCE(1168);
      END_STATE();
    case 2066:
      if (lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 2067:
      if (lookahead == 'p') ADVANCE(1192);
      END_STATE();
    case 2068:
      if (lookahead == 'p') ADVANCE(1377);
      END_STATE();
    case 2069:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 2070:
      if (lookahead == 'p') ADVANCE(526);
      END_STATE();
    case 2071:
      if (lookahead == 'p') ADVANCE(2355);
      END_STATE();
    case 2072:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 2073:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 2074:
      if (lookahead == 'p') ADVANCE(1183);
      END_STATE();
    case 2075:
      if (lookahead == 'p') ADVANCE(2551);
      END_STATE();
    case 2076:
      if (lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 2077:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 2078:
      if (lookahead == 'p') ADVANCE(950);
      END_STATE();
    case 2079:
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead == 'r') ADVANCE(1421);
      if (lookahead == 'u') ADVANCE(2550);
      if (lookahead == 'v') ADVANCE(821);
      END_STATE();
    case 2080:
      if (lookahead == 'p') ADVANCE(406);
      END_STATE();
    case 2081:
      if (lookahead == 'p') ADVANCE(2683);
      END_STATE();
    case 2082:
      if (lookahead == 'p') ADVANCE(2198);
      END_STATE();
    case 2083:
      if (lookahead == 'p') ADVANCE(1390);
      END_STATE();
    case 2084:
      if (lookahead == 'p') ADVANCE(2263);
      END_STATE();
    case 2085:
      if (lookahead == 'p') ADVANCE(2692);
      END_STATE();
    case 2086:
      if (lookahead == 'p') ADVANCE(1348);
      END_STATE();
    case 2087:
      if (lookahead == 'p') ADVANCE(1590);
      END_STATE();
    case 2088:
      if (lookahead == 'p') ADVANCE(1203);
      END_STATE();
    case 2089:
      if (lookahead == 'p') ADVANCE(2030);
      END_STATE();
    case 2090:
      if (lookahead == 'p') ADVANCE(1305);
      END_STATE();
    case 2091:
      if (lookahead == 'p') ADVANCE(896);
      END_STATE();
    case 2092:
      if (lookahead == 'p') ADVANCE(1204);
      if (lookahead == 'u') ADVANCE(2092);
      END_STATE();
    case 2093:
      if (lookahead == 'p') ADVANCE(2282);
      END_STATE();
    case 2094:
      if (lookahead == 'p') ADVANCE(851);
      END_STATE();
    case 2095:
      if (lookahead == 'p') ADVANCE(2225);
      END_STATE();
    case 2096:
      if (lookahead == 'p') ADVANCE(1956);
      END_STATE();
    case 2097:
      if (lookahead == 'p') ADVANCE(2592);
      END_STATE();
    case 2098:
      if (lookahead == 'p') ADVANCE(1608);
      END_STATE();
    case 2099:
      if (lookahead == 'p') ADVANCE(1962);
      END_STATE();
    case 2100:
      if (lookahead == 'p') ADVANCE(2234);
      END_STATE();
    case 2101:
      if (lookahead == 'p') ADVANCE(875);
      END_STATE();
    case 2102:
      if (lookahead == 'p') ADVANCE(1965);
      END_STATE();
    case 2103:
      if (lookahead == 'p') ADVANCE(2588);
      END_STATE();
    case 2104:
      if (lookahead == 'p') ADVANCE(2241);
      END_STATE();
    case 2105:
      if (lookahead == 'p') ADVANCE(927);
      END_STATE();
    case 2106:
      if (lookahead == 'p') ADVANCE(1276);
      END_STATE();
    case 2107:
      if (lookahead == 'p') ADVANCE(1399);
      END_STATE();
    case 2108:
      if (lookahead == 'p') ADVANCE(998);
      END_STATE();
    case 2109:
      if (lookahead == 'p') ADVANCE(1995);
      END_STATE();
    case 2110:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 2111:
      if (lookahead == 'p') ADVANCE(1019);
      END_STATE();
    case 2112:
      if (lookahead == 'p') ADVANCE(2271);
      END_STATE();
    case 2113:
      if (lookahead == 'p') ADVANCE(2319);
      END_STATE();
    case 2114:
      if (lookahead == 'p') ADVANCE(2640);
      END_STATE();
    case 2115:
      if (lookahead == 'p') ADVANCE(1403);
      END_STATE();
    case 2116:
      if (lookahead == 'p') ADVANCE(2294);
      END_STATE();
    case 2117:
      if (lookahead == 'p') ADVANCE(1397);
      END_STATE();
    case 2118:
      if (lookahead == 'p') ADVANCE(2644);
      END_STATE();
    case 2119:
      if (lookahead == 'p') ADVANCE(1407);
      END_STATE();
    case 2120:
      if (lookahead == 'p') ADVANCE(1410);
      END_STATE();
    case 2121:
      if (lookahead == 'p') ADVANCE(1411);
      END_STATE();
    case 2122:
      if (lookahead == 'p') ADVANCE(1414);
      END_STATE();
    case 2123:
      if (lookahead == 'p') ADVANCE(1413);
      END_STATE();
    case 2124:
      if (lookahead == 'p') ADVANCE(1416);
      END_STATE();
    case 2125:
      if (lookahead == 'p') ADVANCE(191);
      END_STATE();
    case 2126:
      if (lookahead == 'p') ADVANCE(1417);
      END_STATE();
    case 2127:
      if (lookahead == 'p') ADVANCE(1418);
      END_STATE();
    case 2128:
      if (lookahead == 'p') ADVANCE(1419);
      END_STATE();
    case 2129:
      if (lookahead == 'p') ADVANCE(2651);
      END_STATE();
    case 2130:
      if (lookahead == 'p') ADVANCE(1656);
      END_STATE();
    case 2131:
      if (lookahead == 'p') ADVANCE(1056);
      END_STATE();
    case 2132:
      if (lookahead == 'p') ADVANCE(2324);
      END_STATE();
    case 2133:
      if (lookahead == 'p') ADVANCE(2656);
      END_STATE();
    case 2134:
      if (lookahead == 'p') ADVANCE(2335);
      END_STATE();
    case 2135:
      if (lookahead == 'p') ADVANCE(2340);
      END_STATE();
    case 2136:
      if (lookahead == 'p') ADVANCE(2663);
      END_STATE();
    case 2137:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 2138:
      if (lookahead == 'p') ADVANCE(1082);
      END_STATE();
    case 2139:
      if (lookahead == 'p') ADVANCE(2339);
      END_STATE();
    case 2140:
      if (lookahead == 'p') ADVANCE(2342);
      END_STATE();
    case 2141:
      if (lookahead == 'p') ADVANCE(1280);
      END_STATE();
    case 2142:
      if (lookahead == 'p') ADVANCE(1281);
      END_STATE();
    case 2143:
      if (lookahead == 'p') ADVANCE(1282);
      END_STATE();
    case 2144:
      if (lookahead == 'q') ADVANCE(2881);
      END_STATE();
    case 2145:
      if (lookahead == 'q') ADVANCE(2732);
      END_STATE();
    case 2146:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 2147:
      if (lookahead == 'r') ADVANCE(3267);
      END_STATE();
    case 2148:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 2149:
      if (lookahead == 'r') ADVANCE(2973);
      END_STATE();
    case 2150:
      if (lookahead == 'r') ADVANCE(3090);
      END_STATE();
    case 2151:
      if (lookahead == 'r') ADVANCE(942);
      END_STATE();
    case 2152:
      if (lookahead == 'r') ADVANCE(3077);
      END_STATE();
    case 2153:
      if (lookahead == 'r') ADVANCE(3119);
      END_STATE();
    case 2154:
      if (lookahead == 'r') ADVANCE(2974);
      END_STATE();
    case 2155:
      if (lookahead == 'r') ADVANCE(3100);
      END_STATE();
    case 2156:
      if (lookahead == 'r') ADVANCE(3118);
      END_STATE();
    case 2157:
      if (lookahead == 'r') ADVANCE(2956);
      END_STATE();
    case 2158:
      if (lookahead == 'r') ADVANCE(3049);
      END_STATE();
    case 2159:
      if (lookahead == 'r') ADVANCE(3061);
      END_STATE();
    case 2160:
      if (lookahead == 'r') ADVANCE(3094);
      END_STATE();
    case 2161:
      if (lookahead == 'r') ADVANCE(3132);
      END_STATE();
    case 2162:
      if (lookahead == 'r') ADVANCE(3130);
      END_STATE();
    case 2163:
      if (lookahead == 'r') ADVANCE(2952);
      END_STATE();
    case 2164:
      if (lookahead == 'r') ADVANCE(3025);
      END_STATE();
    case 2165:
      if (lookahead == 'r') ADVANCE(3026);
      END_STATE();
    case 2166:
      if (lookahead == 'r') ADVANCE(3088);
      END_STATE();
    case 2167:
      if (lookahead == 'r') ADVANCE(3005);
      END_STATE();
    case 2168:
      if (lookahead == 'r') ADVANCE(2957);
      END_STATE();
    case 2169:
      if (lookahead == 'r') ADVANCE(3166);
      END_STATE();
    case 2170:
      if (lookahead == 'r') ADVANCE(3096);
      END_STATE();
    case 2171:
      if (lookahead == 'r') ADVANCE(3200);
      END_STATE();
    case 2172:
      if (lookahead == 'r') ADVANCE(3202);
      END_STATE();
    case 2173:
      if (lookahead == 'r') ADVANCE(2833);
      END_STATE();
    case 2174:
      if (lookahead == 'r') ADVANCE(2759);
      END_STATE();
    case 2175:
      if (lookahead == 'r') ADVANCE(2553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 2176:
      if (lookahead == 'r') ADVANCE(2404);
      END_STATE();
    case 2177:
      if (lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 2178:
      if (lookahead == 'r') ADVANCE(2513);
      END_STATE();
    case 2179:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 2180:
      if (lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 2181:
      if (lookahead == 'r') ADVANCE(1691);
      END_STATE();
    case 2182:
      if (lookahead == 'r') ADVANCE(1378);
      END_STATE();
    case 2183:
      if (lookahead == 'r') ADVANCE(2444);
      END_STATE();
    case 2184:
      if (lookahead == 'r') ADVANCE(1715);
      END_STATE();
    case 2185:
      if (lookahead == 'r') ADVANCE(2720);
      END_STATE();
    case 2186:
      if (lookahead == 'r') ADVANCE(440);
      END_STATE();
    case 2187:
      if (lookahead == 'r') ADVANCE(2182);
      END_STATE();
    case 2188:
      if (lookahead == 'r') ADVANCE(952);
      END_STATE();
    case 2189:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 2190:
      if (lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 2191:
      if (lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 2192:
      if (lookahead == 'r') ADVANCE(2676);
      END_STATE();
    case 2193:
      if (lookahead == 'r') ADVANCE(2518);
      END_STATE();
    case 2194:
      if (lookahead == 'r') ADVANCE(1293);
      END_STATE();
    case 2195:
      if (lookahead == 'r') ADVANCE(2827);
      END_STATE();
    case 2196:
      if (lookahead == 'r') ADVANCE(2084);
      END_STATE();
    case 2197:
      if (lookahead == 'r') ADVANCE(1875);
      END_STATE();
    case 2198:
      if (lookahead == 'r') ADVANCE(1984);
      END_STATE();
    case 2199:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 2200:
      if (lookahead == 'r') ADVANCE(1316);
      END_STATE();
    case 2201:
      if (lookahead == 'r') ADVANCE(405);
      END_STATE();
    case 2202:
      if (lookahead == 'r') ADVANCE(1553);
      END_STATE();
    case 2203:
      if (lookahead == 'r') ADVANCE(2517);
      END_STATE();
    case 2204:
      if (lookahead == 'r') ADVANCE(1554);
      END_STATE();
    case 2205:
      if (lookahead == 'r') ADVANCE(1555);
      END_STATE();
    case 2206:
      if (lookahead == 'r') ADVANCE(1587);
      END_STATE();
    case 2207:
      if (lookahead == 'r') ADVANCE(2527);
      END_STATE();
    case 2208:
      if (lookahead == 'r') ADVANCE(1557);
      END_STATE();
    case 2209:
      if (lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 2210:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 2211:
      if (lookahead == 'r') ADVANCE(2528);
      END_STATE();
    case 2212:
      if (lookahead == 'r') ADVANCE(1560);
      END_STATE();
    case 2213:
      if (lookahead == 'r') ADVANCE(1598);
      END_STATE();
    case 2214:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 2215:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 2216:
      if (lookahead == 'r') ADVANCE(2535);
      END_STATE();
    case 2217:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 2218:
      if (lookahead == 'r') ADVANCE(1933);
      END_STATE();
    case 2219:
      if (lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 2220:
      if (lookahead == 'r') ADVANCE(2541);
      END_STATE();
    case 2221:
      if (lookahead == 'r') ADVANCE(2541);
      if (lookahead == 'w') ADVANCE(58);
      END_STATE();
    case 2222:
      if (lookahead == 'r') ADVANCE(828);
      END_STATE();
    case 2223:
      if (lookahead == 'r') ADVANCE(2542);
      END_STATE();
    case 2224:
      if (lookahead == 'r') ADVANCE(2545);
      END_STATE();
    case 2225:
      if (lookahead == 'r') ADVANCE(1951);
      END_STATE();
    case 2226:
      if (lookahead == 'r') ADVANCE(1924);
      END_STATE();
    case 2227:
      if (lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 2228:
      if (lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 2229:
      if (lookahead == 'r') ADVANCE(775);
      END_STATE();
    case 2230:
      if (lookahead == 'r') ADVANCE(975);
      END_STATE();
    case 2231:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 2232:
      if (lookahead == 'r') ADVANCE(783);
      END_STATE();
    case 2233:
      if (lookahead == 'r') ADVANCE(784);
      END_STATE();
    case 2234:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 2235:
      if (lookahead == 'r') ADVANCE(785);
      END_STATE();
    case 2236:
      if (lookahead == 'r') ADVANCE(788);
      END_STATE();
    case 2237:
      if (lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 2238:
      if (lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 2239:
      if (lookahead == 'r') ADVANCE(797);
      END_STATE();
    case 2240:
      if (lookahead == 'r') ADVANCE(964);
      END_STATE();
    case 2241:
      if (lookahead == 'r') ADVANCE(867);
      END_STATE();
    case 2242:
      if (lookahead == 'r') ADVANCE(580);
      END_STATE();
    case 2243:
      if (lookahead == 'r') ADVANCE(824);
      END_STATE();
    case 2244:
      if (lookahead == 'r') ADVANCE(1442);
      END_STATE();
    case 2245:
      if (lookahead == 'r') ADVANCE(1987);
      END_STATE();
    case 2246:
      if (lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 2247:
      if (lookahead == 'r') ADVANCE(1983);
      END_STATE();
    case 2248:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 2249:
      if (lookahead == 'r') ADVANCE(880);
      END_STATE();
    case 2250:
      if (lookahead == 'r') ADVANCE(1349);
      END_STATE();
    case 2251:
      if (lookahead == 'r') ADVANCE(1342);
      END_STATE();
    case 2252:
      if (lookahead == 'r') ADVANCE(2858);
      END_STATE();
    case 2253:
      if (lookahead == 'r') ADVANCE(2412);
      END_STATE();
    case 2254:
      if (lookahead == 'r') ADVANCE(2268);
      END_STATE();
    case 2255:
      if (lookahead == 'r') ADVANCE(900);
      END_STATE();
    case 2256:
      if (lookahead == 'r') ADVANCE(2414);
      END_STATE();
    case 2257:
      if (lookahead == 'r') ADVANCE(889);
      END_STATE();
    case 2258:
      if (lookahead == 'r') ADVANCE(1726);
      END_STATE();
    case 2259:
      if (lookahead == 'r') ADVANCE(1325);
      END_STATE();
    case 2260:
      if (lookahead == 'r') ADVANCE(2844);
      END_STATE();
    case 2261:
      if (lookahead == 'r') ADVANCE(2457);
      END_STATE();
    case 2262:
      if (lookahead == 'r') ADVANCE(2633);
      END_STATE();
    case 2263:
      if (lookahead == 'r') ADVANCE(1389);
      END_STATE();
    case 2264:
      if (lookahead == 'r') ADVANCE(697);
      END_STATE();
    case 2265:
      if (lookahead == 'r') ADVANCE(2578);
      END_STATE();
    case 2266:
      if (lookahead == 'r') ADVANCE(2848);
      END_STATE();
    case 2267:
      if (lookahead == 'r') ADVANCE(1060);
      END_STATE();
    case 2268:
      if (lookahead == 'r') ADVANCE(1963);
      END_STATE();
    case 2269:
      if (lookahead == 'r') ADVANCE(2582);
      END_STATE();
    case 2270:
      if (lookahead == 'r') ADVANCE(1964);
      END_STATE();
    case 2271:
      if (lookahead == 'r') ADVANCE(1401);
      END_STATE();
    case 2272:
      if (lookahead == 'r') ADVANCE(1966);
      END_STATE();
    case 2273:
      if (lookahead == 'r') ADVANCE(2590);
      END_STATE();
    case 2274:
      if (lookahead == 'r') ADVANCE(1970);
      END_STATE();
    case 2275:
      if (lookahead == 'r') ADVANCE(2635);
      END_STATE();
    case 2276:
      if (lookahead == 'r') ADVANCE(2591);
      END_STATE();
    case 2277:
      if (lookahead == 'r') ADVANCE(2638);
      END_STATE();
    case 2278:
      if (lookahead == 'r') ADVANCE(2762);
      END_STATE();
    case 2279:
      if (lookahead == 'r') ADVANCE(1999);
      END_STATE();
    case 2280:
      if (lookahead == 'r') ADVANCE(1236);
      END_STATE();
    case 2281:
      if (lookahead == 'r') ADVANCE(2460);
      END_STATE();
    case 2282:
      if (lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 2283:
      if (lookahead == 'r') ADVANCE(2735);
      END_STATE();
    case 2284:
      if (lookahead == 'r') ADVANCE(1994);
      END_STATE();
    case 2285:
      if (lookahead == 'r') ADVANCE(1017);
      END_STATE();
    case 2286:
      if (lookahead == 'r') ADVANCE(986);
      END_STATE();
    case 2287:
      if (lookahead == 'r') ADVANCE(2643);
      END_STATE();
    case 2288:
      if (lookahead == 'r') ADVANCE(2270);
      END_STATE();
    case 2289:
      if (lookahead == 'r') ADVANCE(1365);
      END_STATE();
    case 2290:
      if (lookahead == 'r') ADVANCE(1237);
      END_STATE();
    case 2291:
      if (lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 2292:
      if (lookahead == 'r') ADVANCE(2722);
      END_STATE();
    case 2293:
      if (lookahead == 'r') ADVANCE(961);
      END_STATE();
    case 2294:
      if (lookahead == 'r') ADVANCE(2001);
      END_STATE();
    case 2295:
      if (lookahead == 'r') ADVANCE(991);
      END_STATE();
    case 2296:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 2297:
      if (lookahead == 'r') ADVANCE(2272);
      END_STATE();
    case 2298:
      if (lookahead == 'r') ADVANCE(2765);
      END_STATE();
    case 2299:
      if (lookahead == 'r') ADVANCE(2724);
      END_STATE();
    case 2300:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 2301:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 2302:
      if (lookahead == 'r') ADVANCE(2274);
      END_STATE();
    case 2303:
      if (lookahead == 'r') ADVANCE(1379);
      END_STATE();
    case 2304:
      if (lookahead == 'r') ADVANCE(2727);
      END_STATE();
    case 2305:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 2306:
      if (lookahead == 'r') ADVANCE(490);
      END_STATE();
    case 2307:
      if (lookahead == 'r') ADVANCE(2767);
      END_STATE();
    case 2308:
      if (lookahead == 'r') ADVANCE(1387);
      END_STATE();
    case 2309:
      if (lookahead == 'r') ADVANCE(2728);
      END_STATE();
    case 2310:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 2311:
      if (lookahead == 'r') ADVANCE(1391);
      END_STATE();
    case 2312:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 2313:
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 2314:
      if (lookahead == 'r') ADVANCE(1398);
      END_STATE();
    case 2315:
      if (lookahead == 'r') ADVANCE(1415);
      if (lookahead == 's') ADVANCE(1075);
      END_STATE();
    case 2316:
      if (lookahead == 'r') ADVANCE(1720);
      END_STATE();
    case 2317:
      if (lookahead == 'r') ADVANCE(1429);
      END_STATE();
    case 2318:
      if (lookahead == 'r') ADVANCE(1721);
      END_STATE();
    case 2319:
      if (lookahead == 'r') ADVANCE(1034);
      END_STATE();
    case 2320:
      if (lookahead == 'r') ADVANCE(2112);
      END_STATE();
    case 2321:
      if (lookahead == 'r') ADVANCE(1876);
      END_STATE();
    case 2322:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 2323:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 2324:
      if (lookahead == 'r') ADVANCE(1052);
      END_STATE();
    case 2325:
      if (lookahead == 'r') ADVANCE(1446);
      END_STATE();
    case 2326:
      if (lookahead == 'r') ADVANCE(2029);
      END_STATE();
    case 2327:
      if (lookahead == 'r') ADVANCE(2032);
      END_STATE();
    case 2328:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 2329:
      if (lookahead == 'r') ADVANCE(2655);
      END_STATE();
    case 2330:
      if (lookahead == 'r') ADVANCE(1246);
      END_STATE();
    case 2331:
      if (lookahead == 'r') ADVANCE(2771);
      END_STATE();
    case 2332:
      if (lookahead == 'r') ADVANCE(1437);
      END_STATE();
    case 2333:
      if (lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 2334:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 2335:
      if (lookahead == 'r') ADVANCE(1067);
      END_STATE();
    case 2336:
      if (lookahead == 'r') ADVANCE(2658);
      END_STATE();
    case 2337:
      if (lookahead == 'r') ADVANCE(2772);
      END_STATE();
    case 2338:
      if (lookahead == 'r') ADVANCE(1440);
      END_STATE();
    case 2339:
      if (lookahead == 'r') ADVANCE(1042);
      END_STATE();
    case 2340:
      if (lookahead == 'r') ADVANCE(1072);
      END_STATE();
    case 2341:
      if (lookahead == 'r') ADVANCE(2773);
      END_STATE();
    case 2342:
      if (lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 2343:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 2344:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 2345:
      if (lookahead == 'r') ADVANCE(2862);
      END_STATE();
    case 2346:
      if (lookahead == 'r') ADVANCE(2665);
      END_STATE();
    case 2347:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 2348:
      if (lookahead == 'r') ADVANCE(2866);
      END_STATE();
    case 2349:
      if (lookahead == 'r') ADVANCE(1093);
      END_STATE();
    case 2350:
      if (lookahead == 'r') ADVANCE(1096);
      END_STATE();
    case 2351:
      if (lookahead == 'r') ADVANCE(1478);
      END_STATE();
    case 2352:
      if (lookahead == 'r') ADVANCE(2049);
      END_STATE();
    case 2353:
      if (lookahead == 's') ADVANCE(3135);
      END_STATE();
    case 2354:
      if (lookahead == 's') ADVANCE(3129);
      END_STATE();
    case 2355:
      if (lookahead == 's') ADVANCE(2969);
      END_STATE();
    case 2356:
      if (lookahead == 's') ADVANCE(2994);
      END_STATE();
    case 2357:
      if (lookahead == 's') ADVANCE(3060);
      END_STATE();
    case 2358:
      if (lookahead == 's') ADVANCE(3269);
      END_STATE();
    case 2359:
      if (lookahead == 's') ADVANCE(3007);
      END_STATE();
    case 2360:
      if (lookahead == 's') ADVANCE(2937);
      END_STATE();
    case 2361:
      if (lookahead == 's') ADVANCE(2975);
      END_STATE();
    case 2362:
      if (lookahead == 's') ADVANCE(3056);
      END_STATE();
    case 2363:
      if (lookahead == 's') ADVANCE(3014);
      END_STATE();
    case 2364:
      if (lookahead == 's') ADVANCE(3079);
      END_STATE();
    case 2365:
      if (lookahead == 's') ADVANCE(3134);
      END_STATE();
    case 2366:
      if (lookahead == 's') ADVANCE(3128);
      END_STATE();
    case 2367:
      if (lookahead == 's') ADVANCE(3059);
      END_STATE();
    case 2368:
      if (lookahead == 's') ADVANCE(3035);
      END_STATE();
    case 2369:
      if (lookahead == 's') ADVANCE(3015);
      END_STATE();
    case 2370:
      if (lookahead == 's') ADVANCE(3080);
      END_STATE();
    case 2371:
      if (lookahead == 's') ADVANCE(2970);
      END_STATE();
    case 2372:
      if (lookahead == 's') ADVANCE(3004);
      END_STATE();
    case 2373:
      if (lookahead == 's') ADVANCE(3017);
      END_STATE();
    case 2374:
      if (lookahead == 's') ADVANCE(2939);
      END_STATE();
    case 2375:
      if (lookahead == 's') ADVANCE(3018);
      END_STATE();
    case 2376:
      if (lookahead == 's') ADVANCE(3047);
      END_STATE();
    case 2377:
      if (lookahead == 's') ADVANCE(3027);
      END_STATE();
    case 2378:
      if (lookahead == 's') ADVANCE(2971);
      END_STATE();
    case 2379:
      if (lookahead == 's') ADVANCE(3028);
      END_STATE();
    case 2380:
      if (lookahead == 's') ADVANCE(3108);
      END_STATE();
    case 2381:
      if (lookahead == 's') ADVANCE(2940);
      END_STATE();
    case 2382:
      if (lookahead == 's') ADVANCE(3002);
      END_STATE();
    case 2383:
      if (lookahead == 's') ADVANCE(3046);
      END_STATE();
    case 2384:
      if (lookahead == 's') ADVANCE(3029);
      END_STATE();
    case 2385:
      if (lookahead == 's') ADVANCE(2972);
      END_STATE();
    case 2386:
      if (lookahead == 's') ADVANCE(3136);
      END_STATE();
    case 2387:
      if (lookahead == 's') ADVANCE(3137);
      END_STATE();
    case 2388:
      if (lookahead == 's') ADVANCE(3138);
      END_STATE();
    case 2389:
      if (lookahead == 's') ADVANCE(3058);
      END_STATE();
    case 2390:
      if (lookahead == 's') ADVANCE(1385);
      if (lookahead == 'u') ADVANCE(1374);
      END_STATE();
    case 2391:
      if (lookahead == 's') ADVANCE(3096);
      END_STATE();
    case 2392:
      if (lookahead == 's') ADVANCE(3145);
      END_STATE();
    case 2393:
      if (lookahead == 's') ADVANCE(3127);
      END_STATE();
    case 2394:
      if (lookahead == 's') ADVANCE(3092);
      END_STATE();
    case 2395:
      if (lookahead == 's') ADVANCE(2435);
      END_STATE();
    case 2396:
      if (lookahead == 's') ADVANCE(2608);
      END_STATE();
    case 2397:
      if (lookahead == 's') ADVANCE(2853);
      END_STATE();
    case 2398:
      if (lookahead == 's') ADVANCE(2512);
      END_STATE();
    case 2399:
      if (lookahead == 's') ADVANCE(2546);
      END_STATE();
    case 2400:
      if (lookahead == 's') ADVANCE(2678);
      END_STATE();
    case 2401:
      if (lookahead == 's') ADVANCE(1257);
      END_STATE();
    case 2402:
      if (lookahead == 's') ADVANCE(1494);
      if (lookahead == 'u') ADVANCE(2594);
      END_STATE();
    case 2403:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 2404:
      if (lookahead == 's') ADVANCE(1978);
      END_STATE();
    case 2405:
      if (lookahead == 's') ADVANCE(2452);
      END_STATE();
    case 2406:
      if (lookahead == 's') ADVANCE(2360);
      END_STATE();
    case 2407:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 2408:
      if (lookahead == 's') ADVANCE(752);
      END_STATE();
    case 2409:
      if (lookahead == 's') ADVANCE(1433);
      END_STATE();
    case 2410:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 2411:
      if (lookahead == 's') ADVANCE(2522);
      END_STATE();
    case 2412:
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 2413:
      if (lookahead == 's') ADVANCE(2517);
      END_STATE();
    case 2414:
      if (lookahead == 's') ADVANCE(379);
      END_STATE();
    case 2415:
      if (lookahead == 's') ADVANCE(2523);
      END_STATE();
    case 2416:
      if (lookahead == 's') ADVANCE(1328);
      END_STATE();
    case 2417:
      if (lookahead == 's') ADVANCE(2525);
      END_STATE();
    case 2418:
      if (lookahead == 's') ADVANCE(1330);
      END_STATE();
    case 2419:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 2420:
      if (lookahead == 's') ADVANCE(2563);
      END_STATE();
    case 2421:
      if (lookahead == 's') ADVANCE(2567);
      END_STATE();
    case 2422:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 2423:
      if (lookahead == 's') ADVANCE(760);
      END_STATE();
    case 2424:
      if (lookahead == 's') ADVANCE(2538);
      END_STATE();
    case 2425:
      if (lookahead == 's') ADVANCE(2540);
      END_STATE();
    case 2426:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 2427:
      if (lookahead == 's') ADVANCE(864);
      END_STATE();
    case 2428:
      if (lookahead == 's') ADVANCE(1031);
      END_STATE();
    case 2429:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 2430:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 2431:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 2432:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 2433:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 2434:
      if (lookahead == 's') ADVANCE(895);
      END_STATE();
    case 2435:
      if (lookahead == 's') ADVANCE(2064);
      END_STATE();
    case 2436:
      if (lookahead == 's') ADVANCE(1272);
      END_STATE();
    case 2437:
      if (lookahead == 's') ADVANCE(1350);
      END_STATE();
    case 2438:
      if (lookahead == 's') ADVANCE(1279);
      END_STATE();
    case 2439:
      if (lookahead == 's') ADVANCE(2652);
      END_STATE();
    case 2440:
      if (lookahead == 's') ADVANCE(2409);
      END_STATE();
    case 2441:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 2442:
      if (lookahead == 's') ADVANCE(2637);
      END_STATE();
    case 2443:
      if (lookahead == 's') ADVANCE(2668);
      END_STATE();
    case 2444:
      if (lookahead == 's') ADVANCE(1332);
      END_STATE();
    case 2445:
      if (lookahead == 's') ADVANCE(2078);
      END_STATE();
    case 2446:
      if (lookahead == 's') ADVANCE(444);
      END_STATE();
    case 2447:
      if (lookahead == 's') ADVANCE(2559);
      END_STATE();
    case 2448:
      if (lookahead == 's') ADVANCE(2426);
      END_STATE();
    case 2449:
      if (lookahead == 's') ADVANCE(1360);
      END_STATE();
    case 2450:
      if (lookahead == 's') ADVANCE(2416);
      END_STATE();
    case 2451:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 2452:
      if (lookahead == 's') ADVANCE(835);
      END_STATE();
    case 2453:
      if (lookahead == 's') ADVANCE(1368);
      END_STATE();
    case 2454:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 2455:
      if (lookahead == 's') ADVANCE(1309);
      END_STATE();
    case 2456:
      if (lookahead == 's') ADVANCE(1115);
      if (lookahead == 't') ADVANCE(1136);
      END_STATE();
    case 2457:
      if (lookahead == 's') ADVANCE(894);
      END_STATE();
    case 2458:
      if (lookahead == 's') ADVANCE(1314);
      END_STATE();
    case 2459:
      if (lookahead == 's') ADVANCE(1376);
      END_STATE();
    case 2460:
      if (lookahead == 's') ADVANCE(1341);
      END_STATE();
    case 2461:
      if (lookahead == 's') ADVANCE(865);
      END_STATE();
    case 2462:
      if (lookahead == 's') ADVANCE(1381);
      END_STATE();
    case 2463:
      if (lookahead == 's') ADVANCE(2480);
      END_STATE();
    case 2464:
      if (lookahead == 's') ADVANCE(2653);
      END_STATE();
    case 2465:
      if (lookahead == 's') ADVANCE(1321);
      END_STATE();
    case 2466:
      if (lookahead == 's') ADVANCE(2494);
      END_STATE();
    case 2467:
      if (lookahead == 's') ADVANCE(1359);
      END_STATE();
    case 2468:
      if (lookahead == 's') ADVANCE(1384);
      END_STATE();
    case 2469:
      if (lookahead == 's') ADVANCE(2432);
      END_STATE();
    case 2470:
      if (lookahead == 's') ADVANCE(1331);
      END_STATE();
    case 2471:
      if (lookahead == 's') ADVANCE(2433);
      END_STATE();
    case 2472:
      if (lookahead == 's') ADVANCE(2589);
      END_STATE();
    case 2473:
      if (lookahead == 's') ADVANCE(2507);
      END_STATE();
    case 2474:
      if (lookahead == 's') ADVANCE(887);
      END_STATE();
    case 2475:
      if (lookahead == 's') ADVANCE(2670);
      END_STATE();
    case 2476:
      if (lookahead == 's') ADVANCE(2641);
      END_STATE();
    case 2477:
      if (lookahead == 's') ADVANCE(2673);
      END_STATE();
    case 2478:
      if (lookahead == 's') ADVANCE(925);
      END_STATE();
    case 2479:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 2480:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 2481:
      if (lookahead == 's') ADVANCE(1061);
      END_STATE();
    case 2482:
      if (lookahead == 's') ADVANCE(1424);
      END_STATE();
    case 2483:
      if (lookahead == 's') ADVANCE(1364);
      END_STATE();
    case 2484:
      if (lookahead == 's') ADVANCE(2491);
      END_STATE();
    case 2485:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 2486:
      if (lookahead == 's') ADVANCE(1438);
      END_STATE();
    case 2487:
      if (lookahead == 's') ADVANCE(2486);
      END_STATE();
    case 2488:
      if (lookahead == 's') ADVANCE(1055);
      END_STATE();
    case 2489:
      if (lookahead == 's') ADVANCE(1068);
      END_STATE();
    case 2490:
      if (lookahead == 's') ADVANCE(1048);
      END_STATE();
    case 2491:
      if (lookahead == 's') ADVANCE(1444);
      END_STATE();
    case 2492:
      if (lookahead == 's') ADVANCE(1076);
      END_STATE();
    case 2493:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 2494:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 2495:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 2496:
      if (lookahead == 's') ADVANCE(2657);
      END_STATE();
    case 2497:
      if (lookahead == 's') ADVANCE(2662);
      END_STATE();
    case 2498:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 2499:
      if (lookahead == 's') ADVANCE(2661);
      END_STATE();
    case 2500:
      if (lookahead == 's') ADVANCE(2664);
      END_STATE();
    case 2501:
      if (lookahead == 's') ADVANCE(2667);
      END_STATE();
    case 2502:
      if (lookahead == 's') ADVANCE(1477);
      END_STATE();
    case 2503:
      if (lookahead == 's') ADVANCE(2502);
      END_STATE();
    case 2504:
      if (lookahead == 's') ADVANCE(1479);
      END_STATE();
    case 2505:
      if (lookahead == 's') ADVANCE(2672);
      END_STATE();
    case 2506:
      if (lookahead == 's') ADVANCE(2740);
      END_STATE();
    case 2507:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 2508:
      if (lookahead == 's') ADVANCE(1111);
      END_STATE();
    case 2509:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 2510:
      if (lookahead == 's') ADVANCE(2509);
      END_STATE();
    case 2511:
      if (lookahead == 't') ADVANCE(3267);
      END_STATE();
    case 2512:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 2513:
      if (lookahead == 't') ADVANCE(2966);
      END_STATE();
    case 2514:
      if (lookahead == 't') ADVANCE(3121);
      END_STATE();
    case 2515:
      if (lookahead == 't') ADVANCE(3051);
      END_STATE();
    case 2516:
      if (lookahead == 't') ADVANCE(3175);
      END_STATE();
    case 2517:
      if (lookahead == 't') ADVANCE(3129);
      END_STATE();
    case 2518:
      if (lookahead == 't') ADVANCE(2967);
      END_STATE();
    case 2519:
      if (lookahead == 't') ADVANCE(3109);
      END_STATE();
    case 2520:
      if (lookahead == 't') ADVANCE(3143);
      END_STATE();
    case 2521:
      if (lookahead == 't') ADVANCE(3122);
      END_STATE();
    case 2522:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 2523:
      if (lookahead == 't') ADVANCE(3205);
      END_STATE();
    case 2524:
      if (lookahead == 't') ADVANCE(2983);
      END_STATE();
    case 2525:
      if (lookahead == 't') ADVANCE(2943);
      END_STATE();
    case 2526:
      if (lookahead == 't') ADVANCE(3098);
      END_STATE();
    case 2527:
      if (lookahead == 't') ADVANCE(2953);
      END_STATE();
    case 2528:
      if (lookahead == 't') ADVANCE(2945);
      END_STATE();
    case 2529:
      if (lookahead == 't') ADVANCE(3076);
      END_STATE();
    case 2530:
      if (lookahead == 't') ADVANCE(3124);
      END_STATE();
    case 2531:
      if (lookahead == 't') ADVANCE(3110);
      END_STATE();
    case 2532:
      if (lookahead == 't') ADVANCE(2977);
      END_STATE();
    case 2533:
      if (lookahead == 't') ADVANCE(2928);
      END_STATE();
    case 2534:
      if (lookahead == 't') ADVANCE(3195);
      END_STATE();
    case 2535:
      if (lookahead == 't') ADVANCE(2946);
      END_STATE();
    case 2536:
      if (lookahead == 't') ADVANCE(3023);
      END_STATE();
    case 2537:
      if (lookahead == 't') ADVANCE(2930);
      END_STATE();
    case 2538:
      if (lookahead == 't') ADVANCE(3212);
      END_STATE();
    case 2539:
      if (lookahead == 't') ADVANCE(2978);
      END_STATE();
    case 2540:
      if (lookahead == 't') ADVANCE(3166);
      END_STATE();
    case 2541:
      if (lookahead == 't') ADVANCE(3099);
      END_STATE();
    case 2542:
      if (lookahead == 't') ADVANCE(3096);
      END_STATE();
    case 2543:
      if (lookahead == 't') ADVANCE(3200);
      END_STATE();
    case 2544:
      if (lookahead == 't') ADVANCE(3092);
      END_STATE();
    case 2545:
      if (lookahead == 't') ADVANCE(3150);
      END_STATE();
    case 2546:
      if (lookahead == 't') ADVANCE(2147);
      END_STATE();
    case 2547:
      if (lookahead == 't') ADVANCE(1264);
      END_STATE();
    case 2548:
      if (lookahead == 't') ADVANCE(1256);
      END_STATE();
    case 2549:
      if (lookahead == 't') ADVANCE(2706);
      END_STATE();
    case 2550:
      if (lookahead == 't') ADVANCE(2081);
      END_STATE();
    case 2551:
      if (lookahead == 't') ADVANCE(1258);
      END_STATE();
    case 2552:
      if (lookahead == 't') ADVANCE(1927);
      END_STATE();
    case 2553:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 2554:
      if (lookahead == 't') ADVANCE(1259);
      END_STATE();
    case 2555:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 2556:
      if (lookahead == 't') ADVANCE(1957);
      END_STATE();
    case 2557:
      if (lookahead == 't') ADVANCE(1352);
      END_STATE();
    case 2558:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 2559:
      if (lookahead == 't') ADVANCE(1996);
      END_STATE();
    case 2560:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 2561:
      if (lookahead == 't') ADVANCE(2726);
      END_STATE();
    case 2562:
      if (lookahead == 't') ADVANCE(2815);
      END_STATE();
    case 2563:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 2564:
      if (lookahead == 't') ADVANCE(2359);
      END_STATE();
    case 2565:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 2566:
      if (lookahead == 't') ADVANCE(1426);
      END_STATE();
    case 2567:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 2568:
      if (lookahead == 't') ADVANCE(1892);
      END_STATE();
    case 2569:
      if (lookahead == 't') ADVANCE(965);
      END_STATE();
    case 2570:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 2571:
      if (lookahead == 't') ADVANCE(2829);
      END_STATE();
    case 2572:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 2573:
      if (lookahead == 't') ADVANCE(1893);
      END_STATE();
    case 2574:
      if (lookahead == 't') ADVANCE(2185);
      END_STATE();
    case 2575:
      if (lookahead == 't') ADVANCE(1942);
      END_STATE();
    case 2576:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 2577:
      if (lookahead == 't') ADVANCE(2371);
      END_STATE();
    case 2578:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 2579:
      if (lookahead == 't') ADVANCE(2194);
      END_STATE();
    case 2580:
      if (lookahead == 't') ADVANCE(2378);
      END_STATE();
    case 2581:
      if (lookahead == 't') ADVANCE(1897);
      END_STATE();
    case 2582:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 2583:
      if (lookahead == 't') ADVANCE(2244);
      END_STATE();
    case 2584:
      if (lookahead == 't') ADVANCE(2385);
      END_STATE();
    case 2585:
      if (lookahead == 't') ADVANCE(1901);
      END_STATE();
    case 2586:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 2587:
      if (lookahead == 't') ADVANCE(2389);
      END_STATE();
    case 2588:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 2589:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 2590:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 2591:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 2592:
      if (lookahead == 't') ADVANCE(1906);
      END_STATE();
    case 2593:
      if (lookahead == 't') ADVANCE(1961);
      END_STATE();
    case 2594:
      if (lookahead == 't') ADVANCE(1909);
      END_STATE();
    case 2595:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 2596:
      if (lookahead == 't') ADVANCE(1910);
      END_STATE();
    case 2597:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 2598:
      if (lookahead == 't') ADVANCE(776);
      END_STATE();
    case 2599:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 2600:
      if (lookahead == 't') ADVANCE(876);
      END_STATE();
    case 2601:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 2602:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 2603:
      if (lookahead == 't') ADVANCE(1723);
      END_STATE();
    case 2604:
      if (lookahead == 't') ADVANCE(1420);
      END_STATE();
    case 2605:
      if (lookahead == 't') ADVANCE(833);
      END_STATE();
    case 2606:
      if (lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 2607:
      if (lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 2608:
      if (lookahead == 't') ADVANCE(2686);
      END_STATE();
    case 2609:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 2610:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 2611:
      if (lookahead == 't') ADVANCE(2579);
      END_STATE();
    case 2612:
      if (lookahead == 't') ADVANCE(1334);
      END_STATE();
    case 2613:
      if (lookahead == 't') ADVANCE(1320);
      END_STATE();
    case 2614:
      if (lookahead == 't') ADVANCE(509);
      END_STATE();
    case 2615:
      if (lookahead == 't') ADVANCE(1392);
      END_STATE();
    case 2616:
      if (lookahead == 't') ADVANCE(1335);
      END_STATE();
    case 2617:
      if (lookahead == 't') ADVANCE(1339);
      END_STATE();
    case 2618:
      if (lookahead == 't') ADVANCE(1345);
      END_STATE();
    case 2619:
      if (lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 2620:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 2621:
      if (lookahead == 't') ADVANCE(1347);
      END_STATE();
    case 2622:
      if (lookahead == 't') ADVANCE(898);
      END_STATE();
    case 2623:
      if (lookahead == 't') ADVANCE(1090);
      END_STATE();
    case 2624:
      if (lookahead == 't') ADVANCE(910);
      END_STATE();
    case 2625:
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 2626:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 2627:
      if (lookahead == 't') ADVANCE(922);
      END_STATE();
    case 2628:
      if (lookahead == 't') ADVANCE(2723);
      END_STATE();
    case 2629:
      if (lookahead == 't') ADVANCE(2085);
      END_STATE();
    case 2630:
      if (lookahead == 't') ADVANCE(1369);
      END_STATE();
    case 2631:
      if (lookahead == 't') ADVANCE(2729);
      END_STATE();
    case 2632:
      if (lookahead == 't') ADVANCE(2095);
      END_STATE();
    case 2633:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 2634:
      if (lookahead == 't') ADVANCE(2260);
      END_STATE();
    case 2635:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 2636:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 2637:
      if (lookahead == 't') ADVANCE(967);
      END_STATE();
    case 2638:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 2639:
      if (lookahead == 't') ADVANCE(2250);
      END_STATE();
    case 2640:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 2641:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 2642:
      if (lookahead == 't') ADVANCE(481);
      END_STATE();
    case 2643:
      if (lookahead == 't') ADVANCE(2292);
      END_STATE();
    case 2644:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 2645:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 2646:
      if (lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 2647:
      if (lookahead == 't') ADVANCE(2299);
      END_STATE();
    case 2648:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 2649:
      if (lookahead == 't') ADVANCE(2304);
      END_STATE();
    case 2650:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 2651:
      if (lookahead == 't') ADVANCE(1435);
      END_STATE();
    case 2652:
      if (lookahead == 't') ADVANCE(2303);
      END_STATE();
    case 2653:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 2654:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 2655:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 2656:
      if (lookahead == 't') ADVANCE(1439);
      END_STATE();
    case 2657:
      if (lookahead == 't') ADVANCE(2308);
      END_STATE();
    case 2658:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 2659:
      if (lookahead == 't') ADVANCE(1732);
      END_STATE();
    case 2660:
      if (lookahead == 't') ADVANCE(1441);
      END_STATE();
    case 2661:
      if (lookahead == 't') ADVANCE(2311);
      END_STATE();
    case 2662:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 2663:
      if (lookahead == 't') ADVANCE(1443);
      END_STATE();
    case 2664:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 2665:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 2666:
      if (lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 2667:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 2668:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 2669:
      if (lookahead == 't') ADVANCE(2325);
      END_STATE();
    case 2670:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 2671:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 2672:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 2673:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 2674:
      if (lookahead == 'u') ADVANCE(1291);
      END_STATE();
    case 2675:
      if (lookahead == 'u') ADVANCE(3093);
      END_STATE();
    case 2676:
      if (lookahead == 'u') ADVANCE(3150);
      END_STATE();
    case 2677:
      if (lookahead == 'u') ADVANCE(1028);
      END_STATE();
    case 2678:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 2679:
      if (lookahead == 'u') ADVANCE(2065);
      END_STATE();
    case 2680:
      if (lookahead == 'u') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 2681:
      if (lookahead == 'u') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2916);
      END_STATE();
    case 2682:
      if (lookahead == 'u') ADVANCE(2053);
      END_STATE();
    case 2683:
      if (lookahead == 'u') ADVANCE(2514);
      END_STATE();
    case 2684:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 2685:
      if (lookahead == 'u') ADVANCE(2054);
      END_STATE();
    case 2686:
      if (lookahead == 'u') ADVANCE(2066);
      END_STATE();
    case 2687:
      if (lookahead == 'u') ADVANCE(1149);
      END_STATE();
    case 2688:
      if (lookahead == 'u') ADVANCE(2056);
      END_STATE();
    case 2689:
      if (lookahead == 'u') ADVANCE(2071);
      END_STATE();
    case 2690:
      if (lookahead == 'u') ADVANCE(1120);
      END_STATE();
    case 2691:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 2692:
      if (lookahead == 'u') ADVANCE(2521);
      END_STATE();
    case 2693:
      if (lookahead == 'u') ADVANCE(2248);
      END_STATE();
    case 2694:
      if (lookahead == 'u') ADVANCE(1170);
      END_STATE();
    case 2695:
      if (lookahead == 'u') ADVANCE(2058);
      END_STATE();
    case 2696:
      if (lookahead == 'u') ADVANCE(1828);
      END_STATE();
    case 2697:
      if (lookahead == 'u') ADVANCE(2202);
      END_STATE();
    case 2698:
      if (lookahead == 'u') ADVANCE(2204);
      END_STATE();
    case 2699:
      if (lookahead == 'u') ADVANCE(2205);
      END_STATE();
    case 2700:
      if (lookahead == 'u') ADVANCE(2206);
      END_STATE();
    case 2701:
      if (lookahead == 'u') ADVANCE(2208);
      END_STATE();
    case 2702:
      if (lookahead == 'u') ADVANCE(2212);
      END_STATE();
    case 2703:
      if (lookahead == 'u') ADVANCE(2213);
      END_STATE();
    case 2704:
      if (lookahead == 'u') ADVANCE(2192);
      END_STATE();
    case 2705:
      if (lookahead == 'u') ADVANCE(2398);
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 2706:
      if (lookahead == 'u') ADVANCE(2422);
      END_STATE();
    case 2707:
      if (lookahead == 'u') ADVANCE(1586);
      END_STATE();
    case 2708:
      if (lookahead == 'u') ADVANCE(712);
      END_STATE();
    case 2709:
      if (lookahead == 'u') ADVANCE(2074);
      END_STATE();
    case 2710:
      if (lookahead == 'u') ADVANCE(2410);
      END_STATE();
    case 2711:
      if (lookahead == 'u') ADVANCE(1601);
      END_STATE();
    case 2712:
      if (lookahead == 'u') ADVANCE(1791);
      END_STATE();
    case 2713:
      if (lookahead == 'u') ADVANCE(1603);
      END_STATE();
    case 2714:
      if (lookahead == 'u') ADVANCE(2600);
      END_STATE();
    case 2715:
      if (lookahead == 'u') ADVANCE(1366);
      END_STATE();
    case 2716:
      if (lookahead == 'u') ADVANCE(2636);
      END_STATE();
    case 2717:
      if (lookahead == 'u') ADVANCE(1317);
      END_STATE();
    case 2718:
      if (lookahead == 'u') ADVANCE(1318);
      END_STATE();
    case 2719:
      if (lookahead == 'u') ADVANCE(1322);
      END_STATE();
    case 2720:
      if (lookahead == 'u') ADVANCE(2417);
      END_STATE();
    case 2721:
      if (lookahead == 'u') ADVANCE(1324);
      END_STATE();
    case 2722:
      if (lookahead == 'u') ADVANCE(2413);
      END_STATE();
    case 2723:
      if (lookahead == 'u') ADVANCE(2431);
      END_STATE();
    case 2724:
      if (lookahead == 'u') ADVANCE(2420);
      END_STATE();
    case 2725:
      if (lookahead == 'u') ADVANCE(1327);
      END_STATE();
    case 2726:
      if (lookahead == 'u') ADVANCE(2228);
      END_STATE();
    case 2727:
      if (lookahead == 'u') ADVANCE(2421);
      END_STATE();
    case 2728:
      if (lookahead == 'u') ADVANCE(2425);
      END_STATE();
    case 2729:
      if (lookahead == 'u') ADVANCE(2238);
      END_STATE();
    case 2730:
      if (lookahead == 'u') ADVANCE(2474);
      END_STATE();
    case 2731:
      if (lookahead == 'u') ADVANCE(1643);
      END_STATE();
    case 2732:
      if (lookahead == 'u') ADVANCE(1428);
      END_STATE();
    case 2733:
      if (lookahead == 'u') ADVANCE(1408);
      END_STATE();
    case 2734:
      if (lookahead == 'u') ADVANCE(1644);
      END_STATE();
    case 2735:
      if (lookahead == 'u') ADVANCE(2476);
      END_STATE();
    case 2736:
      if (lookahead == 'u') ADVANCE(2629);
      END_STATE();
    case 2737:
      if (lookahead == 'u') ADVANCE(2328);
      END_STATE();
    case 2738:
      if (lookahead == 'u') ADVANCE(2493);
      END_STATE();
    case 2739:
      if (lookahead == 'u') ADVANCE(539);
      END_STATE();
    case 2740:
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 2741:
      if (lookahead == 'u') ADVANCE(732);
      END_STATE();
    case 2742:
      if (lookahead == 'v') ADVANCE(1911);
      END_STATE();
    case 2743:
      if (lookahead == 'v') ADVANCE(1337);
      END_STATE();
    case 2744:
      if (lookahead == 'v') ADVANCE(1937);
      END_STATE();
    case 2745:
      if (lookahead == 'v') ADVANCE(804);
      END_STATE();
    case 2746:
      if (lookahead == 'v') ADVANCE(1921);
      END_STATE();
    case 2747:
      if (lookahead == 'v') ADVANCE(858);
      END_STATE();
    case 2748:
      if (lookahead == 'v') ADVANCE(2392);
      END_STATE();
    case 2749:
      if (lookahead == 'v') ADVANCE(762);
      END_STATE();
    case 2750:
      if (lookahead == 'v') ADVANCE(869);
      END_STATE();
    case 2751:
      if (lookahead == 'v') ADVANCE(871);
      END_STATE();
    case 2752:
      if (lookahead == 'v') ADVANCE(873);
      END_STATE();
    case 2753:
      if (lookahead == 'v') ADVANCE(882);
      END_STATE();
    case 2754:
      if (lookahead == 'v') ADVANCE(781);
      END_STATE();
    case 2755:
      if (lookahead == 'v') ADVANCE(884);
      END_STATE();
    case 2756:
      if (lookahead == 'v') ADVANCE(885);
      END_STATE();
    case 2757:
      if (lookahead == 'v') ADVANCE(791);
      END_STATE();
    case 2758:
      if (lookahead == 'v') ADVANCE(442);
      END_STATE();
    case 2759:
      if (lookahead == 'v') ADVANCE(919);
      END_STATE();
    case 2760:
      if (lookahead == 'v') ADVANCE(937);
      END_STATE();
    case 2761:
      if (lookahead == 'v') ADVANCE(1530);
      END_STATE();
    case 2762:
      if (lookahead == 'v') ADVANCE(883);
      END_STATE();
    case 2763:
      if (lookahead == 'v') ADVANCE(1033);
      END_STATE();
    case 2764:
      if (lookahead == 'v') ADVANCE(890);
      END_STATE();
    case 2765:
      if (lookahead == 'v') ADVANCE(985);
      END_STATE();
    case 2766:
      if (lookahead == 'v') ADVANCE(918);
      END_STATE();
    case 2767:
      if (lookahead == 'v') ADVANCE(924);
      END_STATE();
    case 2768:
      if (lookahead == 'v') ADVANCE(1026);
      END_STATE();
    case 2769:
      if (lookahead == 'v') ADVANCE(470);
      END_STATE();
    case 2770:
      if (lookahead == 'v') ADVANCE(505);
      END_STATE();
    case 2771:
      if (lookahead == 'v') ADVANCE(1063);
      END_STATE();
    case 2772:
      if (lookahead == 'v') ADVANCE(1070);
      END_STATE();
    case 2773:
      if (lookahead == 'v') ADVANCE(1074);
      END_STATE();
    case 2774:
      if (lookahead == 'v') ADVANCE(1102);
      END_STATE();
    case 2775:
      if (lookahead == 'w') ADVANCE(3129);
      END_STATE();
    case 2776:
      if (lookahead == 'w') ADVANCE(1847);
      END_STATE();
    case 2777:
      if (lookahead == 'w') ADVANCE(32);
      END_STATE();
    case 2778:
      if (lookahead == 'w') ADVANCE(35);
      END_STATE();
    case 2779:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 2780:
      if (lookahead == 'w') ADVANCE(1758);
      END_STATE();
    case 2781:
      if (lookahead == 'w') ADVANCE(1759);
      END_STATE();
    case 2782:
      if (lookahead == 'w') ADVANCE(2251);
      END_STATE();
    case 2783:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 2784:
      if (lookahead == 'w') ADVANCE(1803);
      END_STATE();
    case 2785:
      if (lookahead == 'w') ADVANCE(460);
      END_STATE();
    case 2786:
      if (lookahead == 'w') ADVANCE(430);
      END_STATE();
    case 2787:
      if (lookahead == 'w') ADVANCE(1706);
      END_STATE();
    case 2788:
      if (lookahead == 'w') ADVANCE(904);
      END_STATE();
    case 2789:
      if (lookahead == 'w') ADVANCE(125);
      END_STATE();
    case 2790:
      if (lookahead == 'w') ADVANCE(2478);
      END_STATE();
    case 2791:
      if (lookahead == 'w') ADVANCE(161);
      END_STATE();
    case 2792:
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 2793:
      if (lookahead == 'w') ADVANCE(504);
      END_STATE();
    case 2794:
      if (lookahead == 'w') ADVANCE(236);
      END_STATE();
    case 2795:
      if (lookahead == 'x') ADVANCE(3267);
      END_STATE();
    case 2796:
      if (lookahead == 'x') ADVANCE(3058);
      END_STATE();
    case 2797:
      if (lookahead == 'x') ADVANCE(2603);
      END_STATE();
    case 2798:
      if (lookahead == 'x') ADVANCE(2083);
      END_STATE();
    case 2799:
      if (lookahead == 'x') ADVANCE(2096);
      END_STATE();
    case 2800:
      if (lookahead == 'x') ADVANCE(2086);
      END_STATE();
    case 2801:
      if (lookahead == 'x') ADVANCE(2105);
      END_STATE();
    case 2802:
      if (lookahead == 'x') ADVANCE(2117);
      END_STATE();
    case 2803:
      if (lookahead == 'x') ADVANCE(2120);
      END_STATE();
    case 2804:
      if (lookahead == 'x') ADVANCE(2122);
      END_STATE();
    case 2805:
      if (lookahead == 'x') ADVANCE(2124);
      END_STATE();
    case 2806:
      if (lookahead == 'x') ADVANCE(2126);
      END_STATE();
    case 2807:
      if (lookahead == 'x') ADVANCE(2127);
      END_STATE();
    case 2808:
      if (lookahead == 'x') ADVANCE(2128);
      END_STATE();
    case 2809:
      if (lookahead == 'x') ADVANCE(2659);
      END_STATE();
    case 2810:
      if (lookahead == 'x') ADVANCE(2913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 2811:
      if (lookahead == 'y') ADVANCE(2932);
      END_STATE();
    case 2812:
      if (lookahead == 'y') ADVANCE(3129);
      END_STATE();
    case 2813:
      if (lookahead == 'y') ADVANCE(3133);
      END_STATE();
    case 2814:
      if (lookahead == 'y') ADVANCE(2998);
      END_STATE();
    case 2815:
      if (lookahead == 'y') ADVANCE(3060);
      END_STATE();
    case 2816:
      if (lookahead == 'y') ADVANCE(3048);
      END_STATE();
    case 2817:
      if (lookahead == 'y') ADVANCE(3033);
      END_STATE();
    case 2818:
      if (lookahead == 'y') ADVANCE(3087);
      END_STATE();
    case 2819:
      if (lookahead == 'y') ADVANCE(3045);
      END_STATE();
    case 2820:
      if (lookahead == 'y') ADVANCE(3044);
      END_STATE();
    case 2821:
      if (lookahead == 'y') ADVANCE(3038);
      END_STATE();
    case 2822:
      if (lookahead == 'y') ADVANCE(3010);
      END_STATE();
    case 2823:
      if (lookahead == 'y') ADVANCE(3103);
      END_STATE();
    case 2824:
      if (lookahead == 'y') ADVANCE(3206);
      END_STATE();
    case 2825:
      if (lookahead == 'y') ADVANCE(3043);
      END_STATE();
    case 2826:
      if (lookahead == 'y') ADVANCE(3011);
      END_STATE();
    case 2827:
      if (lookahead == 'y') ADVANCE(3166);
      END_STATE();
    case 2828:
      if (lookahead == 'y') ADVANCE(2315);
      END_STATE();
    case 2829:
      if (lookahead == 'y') ADVANCE(3058);
      END_STATE();
    case 2830:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 2831:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 2832:
      if (lookahead == 'y') ADVANCE(2419);
      END_STATE();
    case 2833:
      if (lookahead == 'y') ADVANCE(2103);
      END_STATE();
    case 2834:
      if (lookahead == 'y') ADVANCE(1925);
      END_STATE();
    case 2835:
      if (lookahead == 'y') ADVANCE(2354);
      END_STATE();
    case 2836:
      if (lookahead == 'y') ADVANCE(2289);
      END_STATE();
    case 2837:
      if (lookahead == 'y') ADVANCE(2097);
      END_STATE();
    case 2838:
      if (lookahead == 'y') ADVANCE(2353);
      END_STATE();
    case 2839:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 2840:
      if (lookahead == 'y') ADVANCE(2389);
      END_STATE();
    case 2841:
      if (lookahead == 'y') ADVANCE(92);
      END_STATE();
    case 2842:
      if (lookahead == 'y') ADVANCE(2394);
      END_STATE();
    case 2843:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 2844:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 2845:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 2846:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 2847:
      if (lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 2848:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 2849:
      if (lookahead == 'y') ADVANCE(117);
      END_STATE();
    case 2850:
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 2851:
      if (lookahead == 'y') ADVANCE(1306);
      END_STATE();
    case 2852:
      if (lookahead == 'y') ADVANCE(1358);
      END_STATE();
    case 2853:
      if (lookahead == 'y') ADVANCE(2442);
      END_STATE();
    case 2854:
      if (lookahead == 'y') ADVANCE(989);
      END_STATE();
    case 2855:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 2856:
      if (lookahead == 'y') ADVANCE(2488);
      END_STATE();
    case 2857:
      if (lookahead == 'y') ADVANCE(1012);
      END_STATE();
    case 2858:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 2859:
      if (lookahead == 'y') ADVANCE(133);
      END_STATE();
    case 2860:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 2861:
      if (lookahead == 'y') ADVANCE(156);
      END_STATE();
    case 2862:
      if (lookahead == 'y') ADVANCE(2114);
      END_STATE();
    case 2863:
      if (lookahead == 'y') ADVANCE(175);
      END_STATE();
    case 2864:
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 2865:
      if (lookahead == 'y') ADVANCE(174);
      END_STATE();
    case 2866:
      if (lookahead == 'y') ADVANCE(2118);
      END_STATE();
    case 2867:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 2868:
      if (lookahead == 'y') ADVANCE(2313);
      END_STATE();
    case 2869:
      if (lookahead == 'y') ADVANCE(2314);
      END_STATE();
    case 2870:
      if (lookahead == 'y') ADVANCE(224);
      END_STATE();
    case 2871:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 2872:
      if (lookahead == 'y') ADVANCE(2489);
      END_STATE();
    case 2873:
      if (lookahead == 'y') ADVANCE(2046);
      END_STATE();
    case 2874:
      if (lookahead == 'y') ADVANCE(249);
      END_STATE();
    case 2875:
      if (lookahead == 'z') ADVANCE(746);
      END_STATE();
    case 2876:
      if (lookahead == 'z') ADVANCE(758);
      END_STATE();
    case 2877:
      if (lookahead == 'z') ADVANCE(790);
      END_STATE();
    case 2878:
      if (lookahead == 'z') ADVANCE(926);
      END_STATE();
    case 2879:
      if (lookahead == '{') ADVANCE(2144);
      END_STATE();
    case 2880:
      if (lookahead == '|') ADVANCE(3270);
      END_STATE();
    case 2881:
      if (lookahead == '}') ADVANCE(3067);
      END_STATE();
    case 2882:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3276);
      END_STATE();
    case 2883:
      if (lookahead == '=' ||
          lookahead == '~') ADVANCE(3271);
      END_STATE();
    case 2884:
      if (lookahead == 'e' ||
          lookahead == 't') ADVANCE(3271);
      END_STATE();
    case 2885:
      if (lookahead == '-' ||
          lookahead == 'c' ||
          lookahead == 't') ADVANCE(3275);
      END_STATE();
    case 2886:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(3142);
      END_STATE();
    case 2887:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(3145);
      END_STATE();
    case 2888:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(209);
      END_STATE();
    case 2889:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2888);
      END_STATE();
    case 2890:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2889);
      END_STATE();
    case 2891:
      if (lookahead == 'd' ||
          lookahead == 'm' ||
          lookahead == 'w' ||
          lookahead == 'y') ADVANCE(3263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2891);
      END_STATE();
    case 2892:
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 't' ||
          lookahead == 'z') ADVANCE(3274);
      if (lookahead == 'g') ADVANCE(2884);
      if (lookahead == 'l') ADVANCE(2884);
      END_STATE();
    case 2893:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3248);
      END_STATE();
    case 2894:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3249);
      END_STATE();
    case 2895:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3262);
      END_STATE();
    case 2896:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3263);
      END_STATE();
    case 2897:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 2898:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2897);
      END_STATE();
    case 2899:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2895);
      END_STATE();
    case 2900:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2902);
      END_STATE();
    case 2901:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2896);
      END_STATE();
    case 2902:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    case 2903:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2898);
      END_STATE();
    case 2904:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2899);
      END_STATE();
    case 2905:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2903);
      END_STATE();
    case 2906:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 2907:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2904);
      END_STATE();
    case 2908:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2905);
      END_STATE();
    case 2909:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2906);
      END_STATE();
    case 2910:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2907);
      END_STATE();
    case 2911:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2908);
      END_STATE();
    case 2912:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2910);
      END_STATE();
    case 2913:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2920);
      END_STATE();
    case 2914:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3247);
      END_STATE();
    case 2915:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2914);
      END_STATE();
    case 2916:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2915);
      END_STATE();
    case 2917:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2916);
      END_STATE();
    case 2918:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2917);
      END_STATE();
    case 2919:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2918);
      END_STATE();
    case 2920:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2919);
      END_STATE();
    case 2921:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2922:
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3211);
      END_STATE();
    case 2923:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3116);
      END_STATE();
    case 2924:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3276);
      END_STATE();
    case 2925:
      if (eof) ADVANCE(2926);
      if (lookahead == '\n') ADVANCE(2927);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '!') ADVANCE(3169);
      if (lookahead == '"') ADVANCE(3052);
      if (lookahead == '#') ADVANCE(3293);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '\'') ADVANCE(3054);
      if (lookahead == ',') ADVANCE(3057);
      if (lookahead == '-') ADVANCE(2885);
      if (lookahead == '0') ADVANCE(2810);
      if (lookahead == '3') ADVANCE(324);
      if (lookahead == '=') ADVANCE(3050);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'B') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(312);
      if (lookahead == 'D') ADVANCE(358);
      if (lookahead == 'E') ADVANCE(319);
      if (lookahead == 'I') ADVANCE(320);
      if (lookahead == 'R') ADVANCE(339);
      if (lookahead == 'S') ADVANCE(337);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(1742);
      if (lookahead == 'Z') ADVANCE(342);
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'b') ADVANCE(371);
      if (lookahead == 'c') ADVANCE(739);
      if (lookahead == 'd') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(1682);
      if (lookahead == 'f') ADVANCE(372);
      if (lookahead == 'g') ADVANCE(1760);
      if (lookahead == 'h') ADVANCE(1285);
      if (lookahead == 'i') ADVANCE(1185);
      if (lookahead == 'k') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(374);
      if (lookahead == 'n') ADVANCE(1889);
      if (lookahead == 'o') ADVANCE(2079);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 'r') ADVANCE(742);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 't') ADVANCE(743);
      if (lookahead == 'u') ADVANCE(1289);
      if (lookahead == 'v') ADVANCE(816);
      if (lookahead == 'w') ADVANCE(805);
      if (lookahead == '|') ADVANCE(2880);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == 'F') ADVANCE(2920);
      END_STATE();
    case 2926:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2927:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 2928:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(2434);
      END_STATE();
    case 2929:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      END_STATE();
    case 2930:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      END_STATE();
    case 2931:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 2932:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      END_STATE();
    case 2933:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      END_STATE();
    case 2934:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      END_STATE();
    case 2935:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      END_STATE();
    case 2936:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      END_STATE();
    case 2937:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      END_STATE();
    case 2938:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      END_STATE();
    case 2939:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2940:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      END_STATE();
    case 2941:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      END_STATE();
    case 2942:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      END_STATE();
    case 2943:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      END_STATE();
    case 2944:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      END_STATE();
    case 2945:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      END_STATE();
    case 2946:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      END_STATE();
    case 2947:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      END_STATE();
    case 2948:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      END_STATE();
    case 2949:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      END_STATE();
    case 2950:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2951:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      END_STATE();
    case 2952:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      END_STATE();
    case 2953:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      END_STATE();
    case 2954:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      END_STATE();
    case 2955:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      END_STATE();
    case 2956:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      END_STATE();
    case 2957:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      END_STATE();
    case 2958:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      END_STATE();
    case 2959:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      END_STATE();
    case 2960:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      END_STATE();
    case 2961:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      END_STATE();
    case 2962:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      END_STATE();
    case 2963:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      END_STATE();
    case 2964:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      END_STATE();
    case 2965:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      END_STATE();
    case 2966:
      ACCEPT_TOKEN(anon_sym_expert);
      END_STATE();
    case 2967:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      END_STATE();
    case 2968:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      END_STATE();
    case 2969:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      END_STATE();
    case 2970:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      END_STATE();
    case 2971:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2972:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      END_STATE();
    case 2973:
      ACCEPT_TOKEN(anon_sym_armor);
      END_STATE();
    case 2974:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      END_STATE();
    case 2975:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      END_STATE();
    case 2976:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      END_STATE();
    case 2977:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      END_STATE();
    case 2978:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      END_STATE();
    case 2979:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      END_STATE();
    case 2980:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      END_STATE();
    case 2981:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      END_STATE();
    case 2982:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      END_STATE();
    case 2983:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      END_STATE();
    case 2984:
      ACCEPT_TOKEN(anon_sym_textmode);
      END_STATE();
    case 2985:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      END_STATE();
    case 2986:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      END_STATE();
    case 2987:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      END_STATE();
    case 2988:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      END_STATE();
    case 2989:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      END_STATE();
    case 2990:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      END_STATE();
    case 2991:
      ACCEPT_TOKEN(anon_sym_gnupg);
      END_STATE();
    case 2992:
      ACCEPT_TOKEN(anon_sym_openpgp);
      END_STATE();
    case 2993:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1313);
      END_STATE();
    case 2994:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      END_STATE();
    case 2995:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      END_STATE();
    case 2996:
      ACCEPT_TOKEN(anon_sym_pgp7);
      END_STATE();
    case 2997:
      ACCEPT_TOKEN(anon_sym_pgp8);
      END_STATE();
    case 2998:
      ACCEPT_TOKEN(anon_sym_list_DASHonly);
      END_STATE();
    case 2999:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 3000:
      ACCEPT_TOKEN(anon_sym_debug_DASHall);
      if (lookahead == 'o') ADVANCE(2783);
      END_STATE();
    case 3001:
      ACCEPT_TOKEN(anon_sym_debug_DASHiolbf);
      END_STATE();
    case 3002:
      ACCEPT_TOKEN(anon_sym_debug_DASHallow_DASHlarge_DASHchunks);
      END_STATE();
    case 3003:
      ACCEPT_TOKEN(anon_sym_debug_DASHignore_DASHexpiration);
      END_STATE();
    case 3004:
      ACCEPT_TOKEN(anon_sym_full_DASHtimestrings);
      END_STATE();
    case 3005:
      ACCEPT_TOKEN(anon_sym_enable_DASHprogress_DASHfilter);
      END_STATE();
    case 3006:
      ACCEPT_TOKEN(anon_sym_log_DASHtime);
      END_STATE();
    case 3007:
      ACCEPT_TOKEN(anon_sym_no_DASHcomments);
      END_STATE();
    case 3008:
      ACCEPT_TOKEN(anon_sym_emit_DASHversion);
      END_STATE();
    case 3009:
      ACCEPT_TOKEN(anon_sym_no_DASHemit_DASHversion);
      END_STATE();
    case 3010:
      ACCEPT_TOKEN(anon_sym_for_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 3011:
      ACCEPT_TOKEN(anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly);
      END_STATE();
    case 3012:
      ACCEPT_TOKEN(anon_sym_use_DASHembedded_DASHfilename);
      END_STATE();
    case 3013:
      ACCEPT_TOKEN(anon_sym_no_DASHuse_DASHembedded_DASHfilename);
      END_STATE();
    case 3014:
      ACCEPT_TOKEN(anon_sym_throw_DASHkeyids);
      END_STATE();
    case 3015:
      ACCEPT_TOKEN(anon_sym_no_DASHthrow_DASHkeyids);
      END_STATE();
    case 3016:
      ACCEPT_TOKEN(anon_sym_not_DASHdash_DASHescaped);
      END_STATE();
    case 3017:
      ACCEPT_TOKEN(anon_sym_escape_DASHfrom_DASHlines);
      END_STATE();
    case 3018:
      ACCEPT_TOKEN(anon_sym_no_DASHescape_DASHfrom_DASHlines);
      END_STATE();
    case 3019:
      ACCEPT_TOKEN(anon_sym_no_DASHsymkey_DASHcache);
      END_STATE();
    case 3020:
      ACCEPT_TOKEN(anon_sym_allow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 3021:
      ACCEPT_TOKEN(anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid);
      END_STATE();
    case 3022:
      ACCEPT_TOKEN(anon_sym_allow_DASHfreeform_DASHuid);
      END_STATE();
    case 3023:
      ACCEPT_TOKEN(anon_sym_ignore_DASHtime_DASHconflict);
      END_STATE();
    case 3024:
      ACCEPT_TOKEN(anon_sym_ignore_DASHvalid_DASHfrom);
      END_STATE();
    case 3025:
      ACCEPT_TOKEN(anon_sym_ignore_DASHcrc_DASHerror);
      END_STATE();
    case 3026:
      ACCEPT_TOKEN(anon_sym_ignore_DASHmdc_DASHerror);
      END_STATE();
    case 3027:
      ACCEPT_TOKEN(anon_sym_allow_DASHold_DASHcipher_DASHalgos);
      END_STATE();
    case 3028:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHdigest_DASHalgos);
      END_STATE();
    case 3029:
      ACCEPT_TOKEN(anon_sym_allow_DASHweak_DASHkey_DASHsignatures);
      END_STATE();
    case 3030:
      ACCEPT_TOKEN(anon_sym_override_DASHcompliance_DASHcheck);
      END_STATE();
    case 3031:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHkeyring);
      END_STATE();
    case 3032:
      ACCEPT_TOKEN(anon_sym_no_DASHkeyring);
      END_STATE();
    case 3033:
      ACCEPT_TOKEN(anon_sym_skip_DASHverify);
      END_STATE();
    case 3034:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHdata);
      END_STATE();
    case 3035:
      ACCEPT_TOKEN(anon_sym_list_DASHsignatures);
      END_STATE();
    case 3036:
      ACCEPT_TOKEN(anon_sym_list_DASHsigs);
      END_STATE();
    case 3037:
      ACCEPT_TOKEN(anon_sym_fast_DASHlist_DASHmode);
      END_STATE();
    case 3038:
      ACCEPT_TOKEN(anon_sym_show_DASHsession_DASHkey);
      END_STATE();
    case 3039:
      ACCEPT_TOKEN(anon_sym_ask_DASHsig_DASHexpire);
      END_STATE();
    case 3040:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHsig_DASHexpire);
      END_STATE();
    case 3041:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHexpire);
      END_STATE();
    case 3042:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHexpire);
      END_STATE();
    case 3043:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey);
      END_STATE();
    case 3044:
      ACCEPT_TOKEN(anon_sym_force_DASHsign_DASHkey);
      END_STATE();
    case 3045:
      ACCEPT_TOKEN(anon_sym_forbid_DASHgen_DASHkey);
      END_STATE();
    case 3046:
      ACCEPT_TOKEN(anon_sym_enable_DASHspecial_DASHfilenames);
      END_STATE();
    case 3047:
      ACCEPT_TOKEN(anon_sym_preserve_DASHpermissions);
      END_STATE();
    case 3048:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == 's') ADVANCE(1073);
      END_STATE();
    case 3049:
      ACCEPT_TOKEN(anon_sym_list_DASHfilter);
      END_STATE();
    case 3050:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 3051:
      ACCEPT_TOKEN(sym__list_filter_name);
      END_STATE();
    case 3052:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3053:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 3054:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 3055:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 3056:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      END_STATE();
    case 3057:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 3058:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 3059:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      END_STATE();
    case 3060:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 3061:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      END_STATE();
    case 3062:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 3063:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(3071);
      END_STATE();
    case 3064:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 3065:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(2879);
      END_STATE();
    case 3066:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(3071);
      END_STATE();
    case 3067:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 3068:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 3069:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(2879);
      END_STATE();
    case 3070:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (aux_sym__command_format_token1_character_set_1(lookahead)) ADVANCE(3071);
      END_STATE();
    case 3071:
      ACCEPT_TOKEN(aux_sym__command_format_token1);
      END_STATE();
    case 3072:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      END_STATE();
    case 3073:
      ACCEPT_TOKEN(anon_sym_keyring);
      END_STATE();
    case 3074:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      END_STATE();
    case 3075:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      END_STATE();
    case 3076:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      END_STATE();
    case 3077:
      ACCEPT_TOKEN(sym__charset_value);
      END_STATE();
    case 3078:
      ACCEPT_TOKEN(sym__charset_value);
      if (lookahead == '5') ADVANCE(3077);
      END_STATE();
    case 3079:
      ACCEPT_TOKEN(sym__utf8_strings);
      END_STATE();
    case 3080:
      ACCEPT_TOKEN(sym__no_utf8_strings);
      END_STATE();
    case 3081:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      END_STATE();
    case 3082:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 3083:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      END_STATE();
    case 3084:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      END_STATE();
    case 3085:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 3086:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      END_STATE();
    case 3087:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      END_STATE();
    case 3088:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      END_STATE();
    case 3089:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 3090:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 3091:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      END_STATE();
    case 3092:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 3093:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(1204);
      if (lookahead == 'u') ADVANCE(2092);
      END_STATE();
    case 3094:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      END_STATE();
    case 3095:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      END_STATE();
    case 3096:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 3097:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 's') ADVANCE(309);
      END_STATE();
    case 3098:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      END_STATE();
    case 3099:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 3100:
      ACCEPT_TOKEN(anon_sym_keyserver);
      END_STATE();
    case 3101:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      END_STATE();
    case 3102:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      END_STATE();
    case 3103:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      END_STATE();
    case 3104:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 3105:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      END_STATE();
    case 3106:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      END_STATE();
    case 3107:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      END_STATE();
    case 3108:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      END_STATE();
    case 3109:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1146);
      END_STATE();
    case 3110:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1151);
      END_STATE();
    case 3111:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      END_STATE();
    case 3112:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      END_STATE();
    case 3113:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      END_STATE();
    case 3114:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      END_STATE();
    case 3115:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 3116:
      ACCEPT_TOKEN(aux_sym__group_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(3116);
      END_STATE();
    case 3117:
      ACCEPT_TOKEN(anon_sym_ungroup);
      END_STATE();
    case 3118:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      END_STATE();
    case 3119:
      ACCEPT_TOKEN(anon_sym_sender);
      END_STATE();
    case 3120:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      END_STATE();
    case 3121:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 3122:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      END_STATE();
    case 3123:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      END_STATE();
    case 3124:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      END_STATE();
    case 3125:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      END_STATE();
    case 3126:
      ACCEPT_TOKEN(sym__key_origin_value);
      END_STATE();
    case 3127:
      ACCEPT_TOKEN(sym__key_origin_value);
      if (lookahead == '-') ADVANCE(2104);
      END_STATE();
    case 3128:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      END_STATE();
    case 3129:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 3130:
      ACCEPT_TOKEN(anon_sym_import_DASHfilter);
      END_STATE();
    case 3131:
      ACCEPT_TOKEN(sym__import_filter_name);
      END_STATE();
    case 3132:
      ACCEPT_TOKEN(anon_sym_export_DASHfilter);
      END_STATE();
    case 3133:
      ACCEPT_TOKEN(sym__export_filter_name);
      END_STATE();
    case 3134:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      END_STATE();
    case 3135:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 3136:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      END_STATE();
    case 3137:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      END_STATE();
    case 3138:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      END_STATE();
    case 3139:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      END_STATE();
    case 3140:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      END_STATE();
    case 3141:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      END_STATE();
    case 3142:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 3143:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      END_STATE();
    case 3144:
      ACCEPT_TOKEN(anon_sym_compliance);
      END_STATE();
    case 3145:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 3146:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'b') ADVANCE(1343);
      END_STATE();
    case 3147:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      END_STATE();
    case 3148:
      ACCEPT_TOKEN(sym__require_compliance);
      END_STATE();
    case 3149:
      ACCEPT_TOKEN(anon_sym_debug_DASHlevel);
      END_STATE();
    case 3150:
      ACCEPT_TOKEN(sym__debug_level_value);
      END_STATE();
    case 3151:
      ACCEPT_TOKEN(anon_sym_debug);
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 3152:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      END_STATE();
    case 3153:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'a') ADVANCE(3154);
      if (lookahead == 'l') ADVANCE(1947);
      if (lookahead == 'r') ADVANCE(2837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3164);
      END_STATE();
    case 3154:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'c') ADVANCE(3155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3163);
      END_STATE();
    case 3155:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'h') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3162);
      END_STATE();
    case 3156:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'i') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3164);
      END_STATE();
    case 3157:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3164);
      END_STATE();
    case 3158:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (lookahead == 'x') ADVANCE(2632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3164);
      END_STATE();
    case 3159:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3152);
      END_STATE();
    case 3160:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3159);
      END_STATE();
    case 3161:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3160);
      END_STATE();
    case 3162:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3161);
      END_STATE();
    case 3163:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3162);
      END_STATE();
    case 3164:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3163);
      END_STATE();
    case 3165:
      ACCEPT_TOKEN(aux_sym__debug_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'f')) ADVANCE(3164);
      END_STATE();
    case 3166:
      ACCEPT_TOKEN(sym__debug_flag_value);
      END_STATE();
    case 3167:
      ACCEPT_TOKEN(anon_sym_debug_DASHset_DASHiobuf_DASHsize);
      END_STATE();
    case 3168:
      ACCEPT_TOKEN(anon_sym_faked_DASHsystem_DASHtime);
      END_STATE();
    case 3169:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 3170:
      ACCEPT_TOKEN(anon_sym_status_DASHfd);
      END_STATE();
    case 3171:
      ACCEPT_TOKEN(anon_sym_status_DASHfile);
      END_STATE();
    case 3172:
      ACCEPT_TOKEN(anon_sym_logger_DASHfd);
      END_STATE();
    case 3173:
      ACCEPT_TOKEN(anon_sym_logger_DASHfile);
      END_STATE();
    case 3174:
      ACCEPT_TOKEN(anon_sym_log_DASHfile);
      END_STATE();
    case 3175:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 3176:
      ACCEPT_TOKEN(anon_sym_sig_DASHnotation);
      END_STATE();
    case 3177:
      ACCEPT_TOKEN(anon_sym_cert_DASHnotation);
      END_STATE();
    case 3178:
      ACCEPT_TOKEN(anon_sym_set_DASHnotation);
      END_STATE();
    case 3179:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      END_STATE();
    case 3180:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      if (lookahead == '\n') ADVANCE(2927);
      END_STATE();
    case 3181:
      ACCEPT_TOKEN(aux_sym__notation_token1);
      if (lookahead == '%' ||
          lookahead == 'K' ||
          lookahead == 'S' ||
          lookahead == 'c' ||
          lookahead == 'f' ||
          lookahead == 'g' ||
          lookahead == 'k' ||
          lookahead == 'p' ||
          lookahead == 's') ADVANCE(3182);
      END_STATE();
    case 3182:
      ACCEPT_TOKEN(aux_sym__notation_format_token1);
      END_STATE();
    case 3183:
      ACCEPT_TOKEN(anon_sym_known_DASHnotation);
      END_STATE();
    case 3184:
      ACCEPT_TOKEN(anon_sym_sig_DASHpolicy_DASHurl);
      END_STATE();
    case 3185:
      ACCEPT_TOKEN(anon_sym_cert_DASHpolicy_DASHurl);
      END_STATE();
    case 3186:
      ACCEPT_TOKEN(anon_sym_set_DASHpolicy_DASHurl);
      END_STATE();
    case 3187:
      ACCEPT_TOKEN(anon_sym_sig_DASHkeyserver_DASHurl);
      END_STATE();
    case 3188:
      ACCEPT_TOKEN(anon_sym_set_DASHfilename);
      END_STATE();
    case 3189:
      ACCEPT_TOKEN(anon_sym_cipher_DASHalgo);
      END_STATE();
    case 3190:
      ACCEPT_TOKEN(anon_sym_digest_DASHalgo);
      END_STATE();
    case 3191:
      ACCEPT_TOKEN(anon_sym_compress_DASHalgo);
      END_STATE();
    case 3192:
      ACCEPT_TOKEN(anon_sym_cert_DASHdigest_DASHalgo);
      END_STATE();
    case 3193:
      ACCEPT_TOKEN(anon_sym_disable_DASHcipher_DASHalgo);
      END_STATE();
    case 3194:
      ACCEPT_TOKEN(anon_sym_disable_DASHpubkey_DASHalgo);
      END_STATE();
    case 3195:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHrepeat);
      END_STATE();
    case 3196:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfd);
      END_STATE();
    case 3197:
      ACCEPT_TOKEN(anon_sym_passphrase_DASHfile);
      END_STATE();
    case 3198:
      ACCEPT_TOKEN(anon_sym_passphrase);
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 3199:
      ACCEPT_TOKEN(anon_sym_pinentry_DASHmode);
      END_STATE();
    case 3200:
      ACCEPT_TOKEN(sym__pinentry_mode_value);
      END_STATE();
    case 3201:
      ACCEPT_TOKEN(anon_sym_request_DASHorigin);
      END_STATE();
    case 3202:
      ACCEPT_TOKEN(sym__request_origin_value);
      END_STATE();
    case 3203:
      ACCEPT_TOKEN(anon_sym_command_DASHfd);
      END_STATE();
    case 3204:
      ACCEPT_TOKEN(anon_sym_command_DASHfile);
      END_STATE();
    case 3205:
      ACCEPT_TOKEN(anon_sym_weak_DASHdigest);
      END_STATE();
    case 3206:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey);
      if (lookahead == '-') ADVANCE(1132);
      END_STATE();
    case 3207:
      ACCEPT_TOKEN(anon_sym_override_DASHsession_DASHkey_DASHfd);
      END_STATE();
    case 3208:
      ACCEPT_TOKEN(anon_sym_default_DASHsig_DASHexpire);
      END_STATE();
    case 3209:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHexpire);
      END_STATE();
    case 3210:
      ACCEPT_TOKEN(anon_sym_default_DASHnew_DASHkey_DASHalgo);
      END_STATE();
    case 3211:
      ACCEPT_TOKEN(sym__new_key_algo);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(3211);
      END_STATE();
    case 3212:
      ACCEPT_TOKEN(anon_sym_default_DASHpreference_DASHlist);
      END_STATE();
    case 3213:
      ACCEPT_TOKEN(anon_sym_default_DASHkeyserver_DASHurl);
      END_STATE();
    case 3214:
      ACCEPT_TOKEN(anon_sym_chuid);
      END_STATE();
    case 3215:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 3216:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3215);
      END_STATE();
    case 3217:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3216);
      END_STATE();
    case 3218:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3217);
      END_STATE();
    case 3219:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3218);
      END_STATE();
    case 3220:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3219);
      END_STATE();
    case 3221:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3220);
      END_STATE();
    case 3222:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3221);
      END_STATE();
    case 3223:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3222);
      END_STATE();
    case 3224:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3223);
      END_STATE();
    case 3225:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3224);
      END_STATE();
    case 3226:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3225);
      END_STATE();
    case 3227:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3226);
      END_STATE();
    case 3228:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3227);
      END_STATE();
    case 3229:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3228);
      END_STATE();
    case 3230:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3229);
      END_STATE();
    case 3231:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3230);
      END_STATE();
    case 3232:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3231);
      END_STATE();
    case 3233:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3232);
      END_STATE();
    case 3234:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3233);
      END_STATE();
    case 3235:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3234);
      END_STATE();
    case 3236:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3235);
      END_STATE();
    case 3237:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3236);
      END_STATE();
    case 3238:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3237);
      END_STATE();
    case 3239:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3238);
      END_STATE();
    case 3240:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3239);
      END_STATE();
    case 3241:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3240);
      END_STATE();
    case 3242:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3241);
      END_STATE();
    case 3243:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3242);
      END_STATE();
    case 3244:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3243);
      END_STATE();
    case 3245:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3244);
      END_STATE();
    case 3246:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3245);
      END_STATE();
    case 3247:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(3246);
      END_STATE();
    case 3248:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(2921);
      if (lookahead == '.') ADVANCE(2893);
      if (lookahead == ':') ADVANCE(2894);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(3248);
      END_STATE();
    case 3249:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3249);
      END_STATE();
    case 3250:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'T') ADVANCE(2912);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3260);
      END_STATE();
    case 3251:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 3252:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3250);
      END_STATE();
    case 3253:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2911);
      END_STATE();
    case 3254:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3252);
      END_STATE();
    case 3255:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3254);
      END_STATE();
    case 3256:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3255);
      END_STATE();
    case 3257:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3256);
      END_STATE();
    case 3258:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3257);
      END_STATE();
    case 3259:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3258);
      END_STATE();
    case 3260:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3260);
      END_STATE();
    case 3261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 3262:
      ACCEPT_TOKEN(sym_iso_time);
      END_STATE();
    case 3263:
      ACCEPT_TOKEN(sym_expire_time);
      END_STATE();
    case 3264:
      ACCEPT_TOKEN(sym_expire_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2900);
      END_STATE();
    case 3265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(3265);
      END_STATE();
    case 3266:
      ACCEPT_TOKEN(sym_filter_scope);
      END_STATE();
    case 3267:
      ACCEPT_TOKEN(sym_filter_property);
      END_STATE();
    case 3268:
      ACCEPT_TOKEN(sym_filter_property);
      if (lookahead == '/') ADVANCE(3266);
      END_STATE();
    case 3269:
      ACCEPT_TOKEN(sym_filter_property);
      if (lookahead == '_') ADVANCE(648);
      END_STATE();
    case 3270:
      ACCEPT_TOKEN(sym_filter_lc);
      END_STATE();
    case 3271:
      ACCEPT_TOKEN(sym_filter_op1);
      END_STATE();
    case 3272:
      ACCEPT_TOKEN(sym_filter_op1);
      if (lookahead == '=' ||
          lookahead == '~') ADVANCE(3271);
      END_STATE();
    case 3273:
      ACCEPT_TOKEN(sym_filter_op1);
      if (lookahead == '=' ||
          lookahead == '>') ADVANCE(3271);
      END_STATE();
    case 3274:
      ACCEPT_TOKEN(sym_filter_op0);
      END_STATE();
    case 3275:
      ACCEPT_TOKEN(sym_filter_flag);
      END_STATE();
    case 3276:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      END_STATE();
    case 3277:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '&') ADVANCE(3270);
      END_STATE();
    case 3278:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'a') ADVANCE(2396);
      END_STATE();
    case 3279:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'b') ADVANCE(1912);
      END_STATE();
    case 3280:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'e') ADVANCE(2831);
      END_STATE();
    case 3281:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'e') ADVANCE(2742);
      END_STATE();
    case 3282:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(1179);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 3283:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'i') ADVANCE(649);
      if (lookahead == 'r') ADVANCE(1544);
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 3284:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'i') ADVANCE(2446);
      END_STATE();
    case 3285:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'l') ADVANCE(1188);
      END_STATE();
    case 3286:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'p') ADVANCE(2147);
      END_STATE();
    case 3287:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'r') ADVANCE(1421);
      END_STATE();
    case 3288:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 3289:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == 'x') ADVANCE(2090);
      END_STATE();
    case 3290:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '|') ADVANCE(3270);
      END_STATE();
    case 3291:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      END_STATE();
    case 3292:
      ACCEPT_TOKEN(aux_sym_filter_value_token1);
      if (lookahead == '-' ||
          lookahead == 'c' ||
          lookahead == 't') ADVANCE(3275);
      END_STATE();
    case 3293:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3293);
      END_STATE();
    case 3294:
      ACCEPT_TOKEN(sym__pubkey_algo_value);
      END_STATE();
    case 3295:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      END_STATE();
    case 3296:
      ACCEPT_TOKEN(sym__cipher_algo_value);
      if (lookahead == '1') ADVANCE(306);
      if (lookahead == '2') ADVANCE(289);
      END_STATE();
    case 3297:
      ACCEPT_TOKEN(sym__hash_algo_value);
      END_STATE();
    case 3298:
      ACCEPT_TOKEN(sym__compression_algo_value);
      END_STATE();
    case 3299:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3299);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2925},
  [2] = {.lex_state = 2925},
  [3] = {.lex_state = 2925},
  [4] = {.lex_state = 2925},
  [5] = {.lex_state = 2925},
  [6] = {.lex_state = 2925},
  [7] = {.lex_state = 2925},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 2925},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 2925},
  [14] = {.lex_state = 2925},
  [15] = {.lex_state = 2925},
  [16] = {.lex_state = 2925},
  [17] = {.lex_state = 2925},
  [18] = {.lex_state = 2925},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 2925},
  [21] = {.lex_state = 2925},
  [22] = {.lex_state = 2925},
  [23] = {.lex_state = 2925},
  [24] = {.lex_state = 2925},
  [25] = {.lex_state = 2925},
  [26] = {.lex_state = 2925},
  [27] = {.lex_state = 2925},
  [28] = {.lex_state = 2925},
  [29] = {.lex_state = 2925},
  [30] = {.lex_state = 2925},
  [31] = {.lex_state = 2925},
  [32] = {.lex_state = 2925},
  [33] = {.lex_state = 2925},
  [34] = {.lex_state = 2925},
  [35] = {.lex_state = 2925},
  [36] = {.lex_state = 2925},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2925},
  [44] = {.lex_state = 2925},
  [45] = {.lex_state = 2925},
  [46] = {.lex_state = 2925},
  [47] = {.lex_state = 2925},
  [48] = {.lex_state = 2925},
  [49] = {.lex_state = 2925},
  [50] = {.lex_state = 2925},
  [51] = {.lex_state = 2925},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2925},
  [54] = {.lex_state = 2925},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 2925},
  [57] = {.lex_state = 2925},
  [58] = {.lex_state = 2925},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 2925},
  [61] = {.lex_state = 2925},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 2925},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 2925},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 2925},
  [68] = {.lex_state = 13},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 2925},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 2925},
  [75] = {.lex_state = 2925},
  [76] = {.lex_state = 2925},
  [77] = {.lex_state = 2925},
  [78] = {.lex_state = 2925},
  [79] = {.lex_state = 2925},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 2925},
  [84] = {.lex_state = 2925},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 2925},
  [90] = {.lex_state = 2925},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 2925},
  [93] = {.lex_state = 2925},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 2925},
  [98] = {.lex_state = 2925},
  [99] = {.lex_state = 2925},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 2925},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 2925},
  [109] = {.lex_state = 2925},
  [110] = {.lex_state = 2925},
  [111] = {.lex_state = 2925},
  [112] = {.lex_state = 2925},
  [113] = {.lex_state = 2925},
  [114] = {.lex_state = 2882},
  [115] = {.lex_state = 2925},
  [116] = {.lex_state = 2925},
  [117] = {.lex_state = 11},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 11},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 2882},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 2925},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 2925},
  [131] = {.lex_state = 2925},
  [132] = {.lex_state = 2925},
  [133] = {.lex_state = 2882},
  [134] = {.lex_state = 2925},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 2925},
  [137] = {.lex_state = 11},
  [138] = {.lex_state = 11},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 11},
  [141] = {.lex_state = 11},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 11},
  [144] = {.lex_state = 11},
  [145] = {.lex_state = 11},
  [146] = {.lex_state = 2925},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 2882},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 11},
  [152] = {.lex_state = 12},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 16},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 2925},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 2925},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 2925},
  [162] = {.lex_state = 2925},
  [163] = {.lex_state = 2925},
  [164] = {.lex_state = 2925},
  [165] = {.lex_state = 2925},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 11},
  [168] = {.lex_state = 11},
  [169] = {.lex_state = 11},
  [170] = {.lex_state = 2925},
  [171] = {.lex_state = 11},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 2925},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 2925},
  [179] = {.lex_state = 2925},
  [180] = {.lex_state = 2882},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 2925},
  [183] = {.lex_state = 2925},
  [184] = {.lex_state = 2925},
  [185] = {.lex_state = 2882},
  [186] = {.lex_state = 11},
  [187] = {.lex_state = 11},
  [188] = {.lex_state = 2882},
  [189] = {.lex_state = 2882},
  [190] = {.lex_state = 2882},
  [191] = {.lex_state = 3},
  [192] = {.lex_state = 2882},
  [193] = {.lex_state = 2925},
  [194] = {.lex_state = 12},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 2924},
  [200] = {.lex_state = 2924},
  [201] = {.lex_state = 2924},
  [202] = {.lex_state = 2924},
  [203] = {.lex_state = 2924},
  [204] = {.lex_state = 2924},
  [205] = {.lex_state = 2924},
  [206] = {.lex_state = 2924},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 2924},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 2924},
  [211] = {.lex_state = 2925},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 5},
  [214] = {.lex_state = 2925},
  [215] = {.lex_state = 2925},
  [216] = {.lex_state = 2925},
  [217] = {.lex_state = 2925},
  [218] = {.lex_state = 2925},
  [219] = {.lex_state = 2925},
  [220] = {.lex_state = 2925},
  [221] = {.lex_state = 2925},
  [222] = {.lex_state = 2925},
  [223] = {.lex_state = 2925},
  [224] = {.lex_state = 9},
  [225] = {.lex_state = 16},
  [226] = {.lex_state = 2925},
  [227] = {.lex_state = 2925},
  [228] = {.lex_state = 2925},
  [229] = {.lex_state = 2925},
  [230] = {.lex_state = 2925},
  [231] = {.lex_state = 2925},
  [232] = {.lex_state = 2925},
  [233] = {.lex_state = 2925},
  [234] = {.lex_state = 2925},
  [235] = {.lex_state = 2925},
  [236] = {.lex_state = 2925},
  [237] = {.lex_state = 2925},
  [238] = {.lex_state = 2925},
  [239] = {.lex_state = 2925},
  [240] = {.lex_state = 2925},
  [241] = {.lex_state = 2925},
  [242] = {.lex_state = 2925},
  [243] = {.lex_state = 2925},
  [244] = {.lex_state = 2925},
  [245] = {.lex_state = 2925},
  [246] = {.lex_state = 2925},
  [247] = {.lex_state = 2925},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 9},
  [250] = {.lex_state = 2925},
  [251] = {.lex_state = 2925},
  [252] = {.lex_state = 2925},
  [253] = {.lex_state = 2925},
  [254] = {.lex_state = 2925},
  [255] = {.lex_state = 2925},
  [256] = {.lex_state = 2925},
  [257] = {.lex_state = 2925},
  [258] = {.lex_state = 2925},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 2925},
  [261] = {.lex_state = 2925},
  [262] = {.lex_state = 2925},
  [263] = {.lex_state = 2925},
  [264] = {.lex_state = 2925},
  [265] = {.lex_state = 2925},
  [266] = {.lex_state = 2925},
  [267] = {.lex_state = 2925},
  [268] = {.lex_state = 5},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 259},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 2925},
  [276] = {.lex_state = 2925},
  [277] = {.lex_state = 2925},
  [278] = {.lex_state = 2925},
  [279] = {.lex_state = 2925},
  [280] = {.lex_state = 2925},
  [281] = {.lex_state = 2925},
  [282] = {.lex_state = 2925},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 2925},
  [285] = {.lex_state = 2925},
  [286] = {.lex_state = 2925},
  [287] = {.lex_state = 2925},
  [288] = {.lex_state = 2925},
  [289] = {.lex_state = 2925},
  [290] = {.lex_state = 2925},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 2925},
  [293] = {.lex_state = 2925},
  [294] = {.lex_state = 2925},
  [295] = {.lex_state = 2925},
  [296] = {.lex_state = 2925},
  [297] = {.lex_state = 2925},
  [298] = {.lex_state = 2925},
  [299] = {.lex_state = 2925},
  [300] = {.lex_state = 2925},
  [301] = {.lex_state = 2925},
  [302] = {.lex_state = 2925},
  [303] = {.lex_state = 2925},
  [304] = {.lex_state = 2925},
  [305] = {.lex_state = 2925},
  [306] = {.lex_state = 2925},
  [307] = {.lex_state = 2925},
  [308] = {.lex_state = 2925},
  [309] = {.lex_state = 2925},
  [310] = {.lex_state = 2925},
  [311] = {.lex_state = 2925},
  [312] = {.lex_state = 2925},
  [313] = {.lex_state = 2925},
  [314] = {.lex_state = 2925},
  [315] = {.lex_state = 2925},
  [316] = {.lex_state = 2925},
  [317] = {.lex_state = 2925},
  [318] = {.lex_state = 2925},
  [319] = {.lex_state = 2925},
  [320] = {.lex_state = 2925},
  [321] = {.lex_state = 2925},
  [322] = {.lex_state = 2925},
  [323] = {.lex_state = 2925},
  [324] = {.lex_state = 2925},
  [325] = {.lex_state = 259},
  [326] = {.lex_state = 2925},
  [327] = {.lex_state = 2925},
  [328] = {.lex_state = 2925},
  [329] = {.lex_state = 2925},
  [330] = {.lex_state = 2925},
  [331] = {.lex_state = 2925},
  [332] = {.lex_state = 2925},
  [333] = {.lex_state = 2925},
  [334] = {.lex_state = 2925},
  [335] = {.lex_state = 2925},
  [336] = {.lex_state = 2925},
  [337] = {.lex_state = 2925},
  [338] = {.lex_state = 2925},
  [339] = {.lex_state = 2925},
  [340] = {.lex_state = 2925},
  [341] = {.lex_state = 2925},
  [342] = {.lex_state = 2925},
  [343] = {.lex_state = 2925},
  [344] = {.lex_state = 2925},
  [345] = {.lex_state = 2925},
  [346] = {.lex_state = 2925},
  [347] = {.lex_state = 2925},
  [348] = {.lex_state = 2925},
  [349] = {.lex_state = 2925},
  [350] = {.lex_state = 2925},
  [351] = {.lex_state = 259},
  [352] = {.lex_state = 259},
  [353] = {.lex_state = 2925},
  [354] = {.lex_state = 2925},
  [355] = {.lex_state = 2925},
  [356] = {.lex_state = 2925},
  [357] = {.lex_state = 2925},
  [358] = {.lex_state = 2925},
  [359] = {.lex_state = 2925},
  [360] = {.lex_state = 2925},
  [361] = {.lex_state = 2925},
  [362] = {.lex_state = 2925},
  [363] = {.lex_state = 2925},
  [364] = {.lex_state = 2925},
  [365] = {.lex_state = 2925},
  [366] = {.lex_state = 2925},
  [367] = {.lex_state = 2925},
  [368] = {.lex_state = 2925},
  [369] = {.lex_state = 2925},
  [370] = {.lex_state = 2925},
  [371] = {.lex_state = 2925},
  [372] = {.lex_state = 2925},
  [373] = {.lex_state = 2925},
  [374] = {.lex_state = 2925},
  [375] = {.lex_state = 2925},
  [376] = {.lex_state = 2925},
  [377] = {.lex_state = 2925},
  [378] = {.lex_state = 2925},
  [379] = {.lex_state = 2925},
  [380] = {.lex_state = 2925},
  [381] = {.lex_state = 2925},
  [382] = {.lex_state = 2925},
  [383] = {.lex_state = 2925},
  [384] = {.lex_state = 2925},
  [385] = {.lex_state = 5},
  [386] = {.lex_state = 259},
  [387] = {.lex_state = 2925},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 259},
  [390] = {.lex_state = 2925},
  [391] = {.lex_state = 2925},
  [392] = {.lex_state = 2925},
  [393] = {.lex_state = 2925},
  [394] = {.lex_state = 2925},
  [395] = {.lex_state = 2922},
  [396] = {.lex_state = 2922},
  [397] = {.lex_state = 2925},
  [398] = {.lex_state = 259},
  [399] = {.lex_state = 2925},
  [400] = {.lex_state = 2925},
  [401] = {.lex_state = 2925},
  [402] = {.lex_state = 65},
  [403] = {.lex_state = 2925},
  [404] = {.lex_state = 2925},
  [405] = {.lex_state = 2925},
  [406] = {.lex_state = 65},
  [407] = {.lex_state = 2925},
  [408] = {.lex_state = 2925},
  [409] = {.lex_state = 2925},
  [410] = {.lex_state = 262},
  [411] = {.lex_state = 262},
  [412] = {.lex_state = 2925},
  [413] = {.lex_state = 2925},
  [414] = {.lex_state = 2925},
  [415] = {.lex_state = 2925},
  [416] = {.lex_state = 5},
  [417] = {.lex_state = 2925},
  [418] = {.lex_state = 2925},
  [419] = {.lex_state = 2925},
  [420] = {.lex_state = 2925},
  [421] = {.lex_state = 2925},
  [422] = {.lex_state = 2925},
  [423] = {.lex_state = 2925},
  [424] = {.lex_state = 2925},
  [425] = {.lex_state = 2925},
  [426] = {.lex_state = 65},
  [427] = {.lex_state = 65},
  [428] = {.lex_state = 420},
  [429] = {.lex_state = 2925},
  [430] = {.lex_state = 2925},
  [431] = {.lex_state = 420},
  [432] = {.lex_state = 2925},
  [433] = {.lex_state = 65},
  [434] = {.lex_state = 2925},
  [435] = {.lex_state = 2925},
  [436] = {.lex_state = 259},
  [437] = {.lex_state = 2925},
  [438] = {.lex_state = 2925},
  [439] = {.lex_state = 2925},
  [440] = {.lex_state = 5},
  [441] = {.lex_state = 5},
  [442] = {.lex_state = 5},
  [443] = {.lex_state = 2925},
  [444] = {.lex_state = 2925},
  [445] = {.lex_state = 2925},
  [446] = {.lex_state = 2925},
  [447] = {.lex_state = 259},
  [448] = {.lex_state = 259},
  [449] = {.lex_state = 259},
  [450] = {.lex_state = 259},
  [451] = {.lex_state = 2925},
  [452] = {.lex_state = 2925},
  [453] = {.lex_state = 2925},
  [454] = {.lex_state = 2923},
  [455] = {.lex_state = 2925},
  [456] = {.lex_state = 259},
  [457] = {.lex_state = 2925},
  [458] = {.lex_state = 259},
  [459] = {.lex_state = 2925},
  [460] = {.lex_state = 259},
  [461] = {.lex_state = 2925},
  [462] = {.lex_state = 2922},
  [463] = {.lex_state = 262},
  [464] = {.lex_state = 65},
  [465] = {.lex_state = 2925},
  [466] = {.lex_state = 262},
  [467] = {.lex_state = 2925},
  [468] = {.lex_state = 259},
  [469] = {.lex_state = 2925},
  [470] = {.lex_state = 2925},
  [471] = {.lex_state = 2925},
  [472] = {.lex_state = 2925},
  [473] = {.lex_state = 2925},
  [474] = {.lex_state = 2925},
  [475] = {.lex_state = 2925},
  [476] = {.lex_state = 2925},
  [477] = {.lex_state = 259},
  [478] = {.lex_state = 5},
  [479] = {.lex_state = 65},
  [480] = {.lex_state = 2925},
  [481] = {.lex_state = 2925},
  [482] = {.lex_state = 2925},
  [483] = {.lex_state = 2925},
  [484] = {.lex_state = 2925},
  [485] = {.lex_state = 259},
  [486] = {.lex_state = 2925},
  [487] = {.lex_state = 2925},
  [488] = {.lex_state = 2925},
  [489] = {.lex_state = 262},
  [490] = {.lex_state = 2925},
  [491] = {.lex_state = 2925},
  [492] = {.lex_state = 2925},
  [493] = {.lex_state = 2925},
  [494] = {.lex_state = 65},
  [495] = {.lex_state = 65},
  [496] = {.lex_state = 2925},
  [497] = {.lex_state = 2925},
  [498] = {.lex_state = 2925},
  [499] = {.lex_state = 65},
  [500] = {.lex_state = 2925},
  [501] = {.lex_state = 2925},
  [502] = {.lex_state = 259},
  [503] = {.lex_state = 2925},
  [504] = {.lex_state = 2925},
  [505] = {.lex_state = 2925},
  [506] = {.lex_state = 2925},
  [507] = {.lex_state = 2925},
  [508] = {.lex_state = 2925},
  [509] = {.lex_state = 259},
  [510] = {.lex_state = 259},
  [511] = {.lex_state = 2925},
  [512] = {.lex_state = 2925},
  [513] = {.lex_state = 2925},
  [514] = {.lex_state = 2925},
  [515] = {.lex_state = 2925},
  [516] = {.lex_state = 2925},
  [517] = {.lex_state = 262},
  [518] = {.lex_state = 2925},
  [519] = {.lex_state = 2925},
  [520] = {.lex_state = 2925},
  [521] = {.lex_state = 2925},
  [522] = {.lex_state = 262},
  [523] = {.lex_state = 2925},
  [524] = {.lex_state = 2925},
  [525] = {.lex_state = 2925},
  [526] = {.lex_state = 2925},
  [527] = {.lex_state = 2925},
  [528] = {.lex_state = 65},
  [529] = {.lex_state = 2925},
  [530] = {.lex_state = 2925},
  [531] = {.lex_state = 2925},
  [532] = {.lex_state = 2925},
  [533] = {.lex_state = 2925},
  [534] = {.lex_state = 2925},
  [535] = {.lex_state = 2925},
  [536] = {.lex_state = 2925},
  [537] = {.lex_state = 2925},
  [538] = {.lex_state = 2925},
  [539] = {.lex_state = 2925},
  [540] = {.lex_state = 2925},
  [541] = {.lex_state = 259},
  [542] = {.lex_state = 2925},
  [543] = {.lex_state = 65},
  [544] = {.lex_state = 2925},
  [545] = {.lex_state = 2925},
  [546] = {.lex_state = 262},
  [547] = {.lex_state = 2925},
  [548] = {.lex_state = 259},
  [549] = {.lex_state = 2925},
  [550] = {.lex_state = 259},
  [551] = {.lex_state = 2925},
  [552] = {.lex_state = 2925},
  [553] = {.lex_state = 65},
  [554] = {.lex_state = 2886},
  [555] = {.lex_state = 259},
  [556] = {.lex_state = 259},
  [557] = {.lex_state = 2925},
  [558] = {.lex_state = 2925},
  [559] = {.lex_state = 2925},
  [560] = {.lex_state = 2925},
  [561] = {.lex_state = 420},
  [562] = {.lex_state = 259},
  [563] = {.lex_state = 2925},
  [564] = {.lex_state = 2925},
  [565] = {.lex_state = 2925},
  [566] = {.lex_state = 2925},
  [567] = {.lex_state = 2925},
  [568] = {.lex_state = 2925},
  [569] = {.lex_state = 2925},
  [570] = {.lex_state = 2925},
  [571] = {.lex_state = 2925},
  [572] = {.lex_state = 2925},
  [573] = {.lex_state = 2925},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__command_token1] = ACTIONS(1),
    [aux_sym__command_token2] = ACTIONS(1),
    [aux_sym__command_token3] = ACTIONS(1),
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [aux_sym__notation_token1] = ACTIONS(1),
    [aux_sym_filter_value_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(388),
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(304),
    [sym__list_filter] = STATE(376),
    [sym__list_options] = STATE(304),
    [sym__verify_options] = STATE(304),
    [sym__photo_viewer] = STATE(304),
    [sym__exec_path] = STATE(304),
    [sym__keyring] = STATE(304),
    [sym__primary_keyring] = STATE(304),
    [sym__trustdb_name] = STATE(304),
    [sym__display_charset] = STATE(304),
    [sym__compress_level] = STATE(304),
    [sym__bzip2_compress_level] = STATE(304),
    [sym__default_cert_level] = STATE(304),
    [sym__min_cert_level] = STATE(304),
    [sym__trusted_key] = STATE(304),
    [sym__add_desig_revoker] = STATE(304),
    [sym__trust_model] = STATE(304),
    [sym__assert_signer] = STATE(304),
    [sym__auto_key_locate] = STATE(304),
    [sym__keyid_format] = STATE(304),
    [sym__keyserver] = STATE(304),
    [sym__completes_needed] = STATE(304),
    [sym__marginals_needed] = STATE(304),
    [sym__tofu_default_policy] = STATE(304),
    [sym__max_cert_depth] = STATE(304),
    [sym__agent_program] = STATE(304),
    [sym__dirmngr_program] = STATE(304),
    [sym__limit_card_insert_tries] = STATE(304),
    [sym__recipient] = STATE(304),
    [sym__hidden_recipient] = STATE(304),
    [sym__recipient_file] = STATE(304),
    [sym__hidden_recipient_file] = STATE(304),
    [sym__encrypt_to] = STATE(304),
    [sym__hidden_encrypt_to] = STATE(304),
    [sym__group] = STATE(379),
    [sym__ungroup] = STATE(304),
    [sym__local_user] = STATE(304),
    [sym__sender] = STATE(304),
    [sym__try_secret_name] = STATE(304),
    [sym__output] = STATE(304),
    [sym__max_output] = STATE(304),
    [sym__chunk_size] = STATE(304),
    [sym__input_size_hint] = STATE(304),
    [sym__key_origin] = STATE(304),
    [sym__import_options] = STATE(304),
    [sym__import_filter] = STATE(380),
    [sym__export_filter] = STATE(257),
    [sym__export_options] = STATE(304),
    [sym__personal_cipher_preferences] = STATE(304),
    [sym__personal_digest_preferences] = STATE(304),
    [sym__personal_compress_preferences] = STATE(304),
    [sym__s2k_cipher_algo] = STATE(304),
    [sym__s2k_digest_algo] = STATE(304),
    [sym__s2k_mode] = STATE(304),
    [sym__s2k_count] = STATE(304),
    [sym__compliance] = STATE(304),
    [sym__min_rsa_length] = STATE(304),
    [sym__debug_level] = STATE(304),
    [sym__debug] = STATE(304),
    [sym__debug_set_iobuf_size] = STATE(304),
    [sym__faked_system_time] = STATE(304),
    [sym__status_fd] = STATE(304),
    [sym__status_file] = STATE(304),
    [sym__logger_fd] = STATE(304),
    [sym__logger_file] = STATE(304),
    [sym__comment] = STATE(304),
    [sym__sig_notation] = STATE(381),
    [sym__cert_notation] = STATE(377),
    [sym__set_notation] = STATE(373),
    [sym__known_notation] = STATE(304),
    [sym__sig_policy_url] = STATE(304),
    [sym__cert_policy_url] = STATE(304),
    [sym__set_policy_url] = STATE(304),
    [sym__sig_keyserver_url] = STATE(304),
    [sym__set_filename] = STATE(304),
    [sym__cipher_algo] = STATE(304),
    [sym__digest_algo] = STATE(304),
    [sym__compress_algo] = STATE(304),
    [sym__cert_digest_algo] = STATE(304),
    [sym__disable_cipher_algo] = STATE(304),
    [sym__disable_pubkey_algo] = STATE(304),
    [sym__passphrase_repeat] = STATE(304),
    [sym__passphrase_fd] = STATE(304),
    [sym__passphrase_file] = STATE(304),
    [sym__passphrase] = STATE(304),
    [sym__pinentry_mode] = STATE(304),
    [sym__request_origin] = STATE(304),
    [sym__command_fd] = STATE(304),
    [sym__command_file] = STATE(304),
    [sym__weak_digest] = STATE(304),
    [sym__override_session_key] = STATE(304),
    [sym__override_session_key_fd] = STATE(304),
    [sym__default_sig_expire] = STATE(304),
    [sym__default_cert_expire] = STATE(304),
    [sym__default_new_key_algo] = STATE(304),
    [sym__default_preference_list] = STATE(304),
    [sym__default_keyserver_url] = STATE(304),
    [sym__chuid] = STATE(304),
    [aux_sym_config_repeat1] = STATE(3),
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
    [anon_sym_list_DASHfilter] = ACTIONS(13),
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
    [anon_sym_import_DASHfilter] = ACTIONS(101),
    [anon_sym_export_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHoptions] = ACTIONS(105),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(107),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(111),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(113),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHmode] = ACTIONS(117),
    [anon_sym_s2k_DASHcount] = ACTIONS(119),
    [anon_sym_compliance] = ACTIONS(121),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(123),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(125),
    [anon_sym_debug] = ACTIONS(127),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(129),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(131),
    [anon_sym_status_DASHfd] = ACTIONS(133),
    [anon_sym_status_DASHfile] = ACTIONS(135),
    [anon_sym_logger_DASHfd] = ACTIONS(137),
    [anon_sym_logger_DASHfile] = ACTIONS(139),
    [anon_sym_log_DASHfile] = ACTIONS(139),
    [anon_sym_comment] = ACTIONS(141),
    [anon_sym_sig_DASHnotation] = ACTIONS(143),
    [anon_sym_cert_DASHnotation] = ACTIONS(145),
    [anon_sym_set_DASHnotation] = ACTIONS(147),
    [anon_sym_known_DASHnotation] = ACTIONS(149),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(151),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(157),
    [anon_sym_set_DASHfilename] = ACTIONS(159),
    [anon_sym_cipher_DASHalgo] = ACTIONS(161),
    [anon_sym_digest_DASHalgo] = ACTIONS(163),
    [anon_sym_compress_DASHalgo] = ACTIONS(165),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(167),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(171),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(173),
    [anon_sym_passphrase_DASHfd] = ACTIONS(175),
    [anon_sym_passphrase_DASHfile] = ACTIONS(177),
    [anon_sym_passphrase] = ACTIONS(179),
    [anon_sym_pinentry_DASHmode] = ACTIONS(181),
    [anon_sym_request_DASHorigin] = ACTIONS(183),
    [anon_sym_command_DASHfd] = ACTIONS(185),
    [anon_sym_command_DASHfile] = ACTIONS(187),
    [anon_sym_weak_DASHdigest] = ACTIONS(189),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(193),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(195),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(199),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(201),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(203),
    [anon_sym_chuid] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym__space] = ACTIONS(209),
  },
  [2] = {
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(304),
    [sym__list_filter] = STATE(376),
    [sym__list_options] = STATE(304),
    [sym__verify_options] = STATE(304),
    [sym__photo_viewer] = STATE(304),
    [sym__exec_path] = STATE(304),
    [sym__keyring] = STATE(304),
    [sym__primary_keyring] = STATE(304),
    [sym__trustdb_name] = STATE(304),
    [sym__display_charset] = STATE(304),
    [sym__compress_level] = STATE(304),
    [sym__bzip2_compress_level] = STATE(304),
    [sym__default_cert_level] = STATE(304),
    [sym__min_cert_level] = STATE(304),
    [sym__trusted_key] = STATE(304),
    [sym__add_desig_revoker] = STATE(304),
    [sym__trust_model] = STATE(304),
    [sym__assert_signer] = STATE(304),
    [sym__auto_key_locate] = STATE(304),
    [sym__keyid_format] = STATE(304),
    [sym__keyserver] = STATE(304),
    [sym__completes_needed] = STATE(304),
    [sym__marginals_needed] = STATE(304),
    [sym__tofu_default_policy] = STATE(304),
    [sym__max_cert_depth] = STATE(304),
    [sym__agent_program] = STATE(304),
    [sym__dirmngr_program] = STATE(304),
    [sym__limit_card_insert_tries] = STATE(304),
    [sym__recipient] = STATE(304),
    [sym__hidden_recipient] = STATE(304),
    [sym__recipient_file] = STATE(304),
    [sym__hidden_recipient_file] = STATE(304),
    [sym__encrypt_to] = STATE(304),
    [sym__hidden_encrypt_to] = STATE(304),
    [sym__group] = STATE(379),
    [sym__ungroup] = STATE(304),
    [sym__local_user] = STATE(304),
    [sym__sender] = STATE(304),
    [sym__try_secret_name] = STATE(304),
    [sym__output] = STATE(304),
    [sym__max_output] = STATE(304),
    [sym__chunk_size] = STATE(304),
    [sym__input_size_hint] = STATE(304),
    [sym__key_origin] = STATE(304),
    [sym__import_options] = STATE(304),
    [sym__import_filter] = STATE(380),
    [sym__export_filter] = STATE(257),
    [sym__export_options] = STATE(304),
    [sym__personal_cipher_preferences] = STATE(304),
    [sym__personal_digest_preferences] = STATE(304),
    [sym__personal_compress_preferences] = STATE(304),
    [sym__s2k_cipher_algo] = STATE(304),
    [sym__s2k_digest_algo] = STATE(304),
    [sym__s2k_mode] = STATE(304),
    [sym__s2k_count] = STATE(304),
    [sym__compliance] = STATE(304),
    [sym__min_rsa_length] = STATE(304),
    [sym__debug_level] = STATE(304),
    [sym__debug] = STATE(304),
    [sym__debug_set_iobuf_size] = STATE(304),
    [sym__faked_system_time] = STATE(304),
    [sym__status_fd] = STATE(304),
    [sym__status_file] = STATE(304),
    [sym__logger_fd] = STATE(304),
    [sym__logger_file] = STATE(304),
    [sym__comment] = STATE(304),
    [sym__sig_notation] = STATE(381),
    [sym__cert_notation] = STATE(377),
    [sym__set_notation] = STATE(373),
    [sym__known_notation] = STATE(304),
    [sym__sig_policy_url] = STATE(304),
    [sym__cert_policy_url] = STATE(304),
    [sym__set_policy_url] = STATE(304),
    [sym__sig_keyserver_url] = STATE(304),
    [sym__set_filename] = STATE(304),
    [sym__cipher_algo] = STATE(304),
    [sym__digest_algo] = STATE(304),
    [sym__compress_algo] = STATE(304),
    [sym__cert_digest_algo] = STATE(304),
    [sym__disable_cipher_algo] = STATE(304),
    [sym__disable_pubkey_algo] = STATE(304),
    [sym__passphrase_repeat] = STATE(304),
    [sym__passphrase_fd] = STATE(304),
    [sym__passphrase_file] = STATE(304),
    [sym__passphrase] = STATE(304),
    [sym__pinentry_mode] = STATE(304),
    [sym__request_origin] = STATE(304),
    [sym__command_fd] = STATE(304),
    [sym__command_file] = STATE(304),
    [sym__weak_digest] = STATE(304),
    [sym__override_session_key] = STATE(304),
    [sym__override_session_key_fd] = STATE(304),
    [sym__default_sig_expire] = STATE(304),
    [sym__default_cert_expire] = STATE(304),
    [sym__default_new_key_algo] = STATE(304),
    [sym__default_preference_list] = STATE(304),
    [sym__default_keyserver_url] = STATE(304),
    [sym__chuid] = STATE(304),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_config_token1] = ACTIONS(213),
    [anon_sym_default_DASHrecipient] = ACTIONS(216),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(219),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(219),
    [anon_sym_verbose] = ACTIONS(219),
    [anon_sym_no_DASHtty] = ACTIONS(219),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(219),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(219),
    [anon_sym_enable_DASHdsa2] = ACTIONS(219),
    [anon_sym_disable_DASHdsa2] = ACTIONS(219),
    [anon_sym_no_DASHcompress] = ACTIONS(219),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(219),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(219),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(219),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(219),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(219),
    [anon_sym_always_DASHtrust] = ACTIONS(219),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(219),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(219),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(219),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(219),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(219),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(219),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(219),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(219),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(219),
    [anon_sym_no_DASHautostart] = ACTIONS(219),
    [anon_sym_lock_DASHonce] = ACTIONS(219),
    [anon_sym_lock_DASHmultiple] = ACTIONS(219),
    [anon_sym_lock_DASHnever] = ACTIONS(219),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(219),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(219),
    [anon_sym_no_DASHgreeting] = ACTIONS(219),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(219),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(219),
    [anon_sym_require_DASHsecmem] = ACTIONS(219),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(219),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(219),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(219),
    [anon_sym_expert] = ACTIONS(219),
    [anon_sym_no_DASHexpert] = ACTIONS(219),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(219),
    [anon_sym_no_DASHgroups] = ACTIONS(219),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(219),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(219),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(219),
    [anon_sym_armor] = ACTIONS(219),
    [anon_sym_no_DASHarmor] = ACTIONS(219),
    [anon_sym_with_DASHcolons] = ACTIONS(219),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(219),
    [anon_sym_with_DASHfingerprint] = ACTIONS(219),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(219),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(219),
    [anon_sym_with_DASHkeygrip] = ACTIONS(219),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(219),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(219),
    [anon_sym_with_DASHsecret] = ACTIONS(219),
    [anon_sym_textmode] = ACTIONS(219),
    [anon_sym_no_DASHtextmode] = ACTIONS(219),
    [anon_sym_force_DASHocb] = ACTIONS(219),
    [anon_sym_force_DASHaead] = ACTIONS(219),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(219),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(219),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(219),
    [anon_sym_gnupg] = ACTIONS(219),
    [anon_sym_openpgp] = ACTIONS(219),
    [anon_sym_rfc4880] = ACTIONS(216),
    [anon_sym_rfc4880bis] = ACTIONS(219),
    [anon_sym_rfc2440] = ACTIONS(219),
    [anon_sym_pgp7] = ACTIONS(219),
    [anon_sym_pgp8] = ACTIONS(219),
    [anon_sym_list_DASHonly] = ACTIONS(219),
    [anon_sym_interactive] = ACTIONS(219),
    [anon_sym_debug_DASHall] = ACTIONS(216),
    [anon_sym_debug_DASHiolbf] = ACTIONS(219),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(219),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(219),
    [anon_sym_full_DASHtimestrings] = ACTIONS(219),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(219),
    [anon_sym_log_DASHtime] = ACTIONS(219),
    [anon_sym_no_DASHcomments] = ACTIONS(219),
    [anon_sym_emit_DASHversion] = ACTIONS(219),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(219),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(219),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(219),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(219),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(219),
    [anon_sym_throw_DASHkeyids] = ACTIONS(219),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(219),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(219),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(219),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(219),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(219),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(219),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(219),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(219),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(219),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(219),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(219),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(219),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(219),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(219),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(219),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(219),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(219),
    [anon_sym_no_DASHkeyring] = ACTIONS(219),
    [anon_sym_skip_DASHverify] = ACTIONS(219),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(219),
    [anon_sym_list_DASHsignatures] = ACTIONS(219),
    [anon_sym_list_DASHsigs] = ACTIONS(219),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(219),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(219),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(219),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(219),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(219),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(219),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(219),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(219),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(219),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(219),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(219),
    [anon_sym_default_DASHkey] = ACTIONS(222),
    [anon_sym_list_DASHfilter] = ACTIONS(225),
    [anon_sym_list_DASHoptions] = ACTIONS(228),
    [anon_sym_verify_DASHoptions] = ACTIONS(231),
    [anon_sym_photo_DASHviewer] = ACTIONS(234),
    [anon_sym_exec_DASHpath] = ACTIONS(237),
    [anon_sym_keyring] = ACTIONS(240),
    [anon_sym_primary_DASHkeyring] = ACTIONS(243),
    [anon_sym_trustdb_DASHname] = ACTIONS(246),
    [anon_sym_display_DASHcharset] = ACTIONS(249),
    [sym__utf8_strings] = ACTIONS(219),
    [sym__no_utf8_strings] = ACTIONS(219),
    [anon_sym_compress_DASHlevel] = ACTIONS(252),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(255),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(258),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(261),
    [anon_sym_trusted_DASHkey] = ACTIONS(264),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(267),
    [anon_sym_trust_DASHmodel] = ACTIONS(270),
    [anon_sym_assert_DASHsigner] = ACTIONS(273),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(276),
    [anon_sym_keyid_DASHformat] = ACTIONS(279),
    [anon_sym_keyserver] = ACTIONS(282),
    [anon_sym_completes_DASHneeded] = ACTIONS(285),
    [anon_sym_marginals_DASHneeded] = ACTIONS(288),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(291),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(294),
    [anon_sym_agent_DASHprogram] = ACTIONS(297),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(300),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(303),
    [anon_sym_recipient] = ACTIONS(306),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(309),
    [anon_sym_recipient_DASHfile] = ACTIONS(312),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(315),
    [anon_sym_encrypt_DASHto] = ACTIONS(318),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(321),
    [anon_sym_group] = ACTIONS(324),
    [anon_sym_ungroup] = ACTIONS(327),
    [anon_sym_local_DASHuser] = ACTIONS(330),
    [anon_sym_sender] = ACTIONS(333),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(336),
    [anon_sym_output] = ACTIONS(339),
    [anon_sym_max_DASHoutput] = ACTIONS(342),
    [anon_sym_chunk_DASHsize] = ACTIONS(345),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(348),
    [anon_sym_key_DASHorigin] = ACTIONS(351),
    [anon_sym_import_DASHoptions] = ACTIONS(354),
    [anon_sym_import_DASHfilter] = ACTIONS(357),
    [anon_sym_export_DASHfilter] = ACTIONS(360),
    [anon_sym_export_DASHoptions] = ACTIONS(363),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(366),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(369),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(372),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(375),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(378),
    [anon_sym_s2k_DASHmode] = ACTIONS(381),
    [anon_sym_s2k_DASHcount] = ACTIONS(384),
    [anon_sym_compliance] = ACTIONS(387),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(390),
    [sym__require_compliance] = ACTIONS(219),
    [anon_sym_debug_DASHlevel] = ACTIONS(393),
    [anon_sym_debug] = ACTIONS(396),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(399),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(402),
    [anon_sym_status_DASHfd] = ACTIONS(405),
    [anon_sym_status_DASHfile] = ACTIONS(408),
    [anon_sym_logger_DASHfd] = ACTIONS(411),
    [anon_sym_logger_DASHfile] = ACTIONS(414),
    [anon_sym_log_DASHfile] = ACTIONS(414),
    [anon_sym_comment] = ACTIONS(417),
    [anon_sym_sig_DASHnotation] = ACTIONS(420),
    [anon_sym_cert_DASHnotation] = ACTIONS(423),
    [anon_sym_set_DASHnotation] = ACTIONS(426),
    [anon_sym_known_DASHnotation] = ACTIONS(429),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(432),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(435),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(438),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(441),
    [anon_sym_set_DASHfilename] = ACTIONS(444),
    [anon_sym_cipher_DASHalgo] = ACTIONS(447),
    [anon_sym_digest_DASHalgo] = ACTIONS(450),
    [anon_sym_compress_DASHalgo] = ACTIONS(453),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(456),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(459),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(462),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(465),
    [anon_sym_passphrase_DASHfd] = ACTIONS(468),
    [anon_sym_passphrase_DASHfile] = ACTIONS(471),
    [anon_sym_passphrase] = ACTIONS(474),
    [anon_sym_pinentry_DASHmode] = ACTIONS(477),
    [anon_sym_request_DASHorigin] = ACTIONS(480),
    [anon_sym_command_DASHfd] = ACTIONS(483),
    [anon_sym_command_DASHfile] = ACTIONS(486),
    [anon_sym_weak_DASHdigest] = ACTIONS(489),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(492),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(495),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(498),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(501),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(504),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(507),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(510),
    [anon_sym_chuid] = ACTIONS(513),
    [sym_comment] = ACTIONS(516),
    [sym__space] = ACTIONS(519),
  },
  [3] = {
    [sym_option] = STATE(375),
    [sym__default_key] = STATE(304),
    [sym__list_filter] = STATE(376),
    [sym__list_options] = STATE(304),
    [sym__verify_options] = STATE(304),
    [sym__photo_viewer] = STATE(304),
    [sym__exec_path] = STATE(304),
    [sym__keyring] = STATE(304),
    [sym__primary_keyring] = STATE(304),
    [sym__trustdb_name] = STATE(304),
    [sym__display_charset] = STATE(304),
    [sym__compress_level] = STATE(304),
    [sym__bzip2_compress_level] = STATE(304),
    [sym__default_cert_level] = STATE(304),
    [sym__min_cert_level] = STATE(304),
    [sym__trusted_key] = STATE(304),
    [sym__add_desig_revoker] = STATE(304),
    [sym__trust_model] = STATE(304),
    [sym__assert_signer] = STATE(304),
    [sym__auto_key_locate] = STATE(304),
    [sym__keyid_format] = STATE(304),
    [sym__keyserver] = STATE(304),
    [sym__completes_needed] = STATE(304),
    [sym__marginals_needed] = STATE(304),
    [sym__tofu_default_policy] = STATE(304),
    [sym__max_cert_depth] = STATE(304),
    [sym__agent_program] = STATE(304),
    [sym__dirmngr_program] = STATE(304),
    [sym__limit_card_insert_tries] = STATE(304),
    [sym__recipient] = STATE(304),
    [sym__hidden_recipient] = STATE(304),
    [sym__recipient_file] = STATE(304),
    [sym__hidden_recipient_file] = STATE(304),
    [sym__encrypt_to] = STATE(304),
    [sym__hidden_encrypt_to] = STATE(304),
    [sym__group] = STATE(379),
    [sym__ungroup] = STATE(304),
    [sym__local_user] = STATE(304),
    [sym__sender] = STATE(304),
    [sym__try_secret_name] = STATE(304),
    [sym__output] = STATE(304),
    [sym__max_output] = STATE(304),
    [sym__chunk_size] = STATE(304),
    [sym__input_size_hint] = STATE(304),
    [sym__key_origin] = STATE(304),
    [sym__import_options] = STATE(304),
    [sym__import_filter] = STATE(380),
    [sym__export_filter] = STATE(257),
    [sym__export_options] = STATE(304),
    [sym__personal_cipher_preferences] = STATE(304),
    [sym__personal_digest_preferences] = STATE(304),
    [sym__personal_compress_preferences] = STATE(304),
    [sym__s2k_cipher_algo] = STATE(304),
    [sym__s2k_digest_algo] = STATE(304),
    [sym__s2k_mode] = STATE(304),
    [sym__s2k_count] = STATE(304),
    [sym__compliance] = STATE(304),
    [sym__min_rsa_length] = STATE(304),
    [sym__debug_level] = STATE(304),
    [sym__debug] = STATE(304),
    [sym__debug_set_iobuf_size] = STATE(304),
    [sym__faked_system_time] = STATE(304),
    [sym__status_fd] = STATE(304),
    [sym__status_file] = STATE(304),
    [sym__logger_fd] = STATE(304),
    [sym__logger_file] = STATE(304),
    [sym__comment] = STATE(304),
    [sym__sig_notation] = STATE(381),
    [sym__cert_notation] = STATE(377),
    [sym__set_notation] = STATE(373),
    [sym__known_notation] = STATE(304),
    [sym__sig_policy_url] = STATE(304),
    [sym__cert_policy_url] = STATE(304),
    [sym__set_policy_url] = STATE(304),
    [sym__sig_keyserver_url] = STATE(304),
    [sym__set_filename] = STATE(304),
    [sym__cipher_algo] = STATE(304),
    [sym__digest_algo] = STATE(304),
    [sym__compress_algo] = STATE(304),
    [sym__cert_digest_algo] = STATE(304),
    [sym__disable_cipher_algo] = STATE(304),
    [sym__disable_pubkey_algo] = STATE(304),
    [sym__passphrase_repeat] = STATE(304),
    [sym__passphrase_fd] = STATE(304),
    [sym__passphrase_file] = STATE(304),
    [sym__passphrase] = STATE(304),
    [sym__pinentry_mode] = STATE(304),
    [sym__request_origin] = STATE(304),
    [sym__command_fd] = STATE(304),
    [sym__command_file] = STATE(304),
    [sym__weak_digest] = STATE(304),
    [sym__override_session_key] = STATE(304),
    [sym__override_session_key_fd] = STATE(304),
    [sym__default_sig_expire] = STATE(304),
    [sym__default_cert_expire] = STATE(304),
    [sym__default_new_key_algo] = STATE(304),
    [sym__default_preference_list] = STATE(304),
    [sym__default_keyserver_url] = STATE(304),
    [sym__chuid] = STATE(304),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(522),
    [aux_sym_config_token1] = ACTIONS(524),
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
    [anon_sym_list_DASHfilter] = ACTIONS(13),
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
    [anon_sym_import_DASHfilter] = ACTIONS(101),
    [anon_sym_export_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHoptions] = ACTIONS(105),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(107),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(111),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(113),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHmode] = ACTIONS(117),
    [anon_sym_s2k_DASHcount] = ACTIONS(119),
    [anon_sym_compliance] = ACTIONS(121),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(123),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(125),
    [anon_sym_debug] = ACTIONS(127),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(129),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(131),
    [anon_sym_status_DASHfd] = ACTIONS(133),
    [anon_sym_status_DASHfile] = ACTIONS(135),
    [anon_sym_logger_DASHfd] = ACTIONS(137),
    [anon_sym_logger_DASHfile] = ACTIONS(139),
    [anon_sym_log_DASHfile] = ACTIONS(139),
    [anon_sym_comment] = ACTIONS(141),
    [anon_sym_sig_DASHnotation] = ACTIONS(143),
    [anon_sym_cert_DASHnotation] = ACTIONS(145),
    [anon_sym_set_DASHnotation] = ACTIONS(147),
    [anon_sym_known_DASHnotation] = ACTIONS(149),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(151),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(157),
    [anon_sym_set_DASHfilename] = ACTIONS(159),
    [anon_sym_cipher_DASHalgo] = ACTIONS(161),
    [anon_sym_digest_DASHalgo] = ACTIONS(163),
    [anon_sym_compress_DASHalgo] = ACTIONS(165),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(167),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(171),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(173),
    [anon_sym_passphrase_DASHfd] = ACTIONS(175),
    [anon_sym_passphrase_DASHfile] = ACTIONS(177),
    [anon_sym_passphrase] = ACTIONS(179),
    [anon_sym_pinentry_DASHmode] = ACTIONS(181),
    [anon_sym_request_DASHorigin] = ACTIONS(183),
    [anon_sym_command_DASHfd] = ACTIONS(185),
    [anon_sym_command_DASHfile] = ACTIONS(187),
    [anon_sym_weak_DASHdigest] = ACTIONS(189),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(193),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(195),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(199),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(201),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(203),
    [anon_sym_chuid] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym__space] = ACTIONS(209),
  },
  [4] = {
    [sym_option] = STATE(302),
    [sym__default_key] = STATE(304),
    [sym__list_filter] = STATE(376),
    [sym__list_options] = STATE(304),
    [sym__verify_options] = STATE(304),
    [sym__photo_viewer] = STATE(304),
    [sym__exec_path] = STATE(304),
    [sym__keyring] = STATE(304),
    [sym__primary_keyring] = STATE(304),
    [sym__trustdb_name] = STATE(304),
    [sym__display_charset] = STATE(304),
    [sym__compress_level] = STATE(304),
    [sym__bzip2_compress_level] = STATE(304),
    [sym__default_cert_level] = STATE(304),
    [sym__min_cert_level] = STATE(304),
    [sym__trusted_key] = STATE(304),
    [sym__add_desig_revoker] = STATE(304),
    [sym__trust_model] = STATE(304),
    [sym__assert_signer] = STATE(304),
    [sym__auto_key_locate] = STATE(304),
    [sym__keyid_format] = STATE(304),
    [sym__keyserver] = STATE(304),
    [sym__completes_needed] = STATE(304),
    [sym__marginals_needed] = STATE(304),
    [sym__tofu_default_policy] = STATE(304),
    [sym__max_cert_depth] = STATE(304),
    [sym__agent_program] = STATE(304),
    [sym__dirmngr_program] = STATE(304),
    [sym__limit_card_insert_tries] = STATE(304),
    [sym__recipient] = STATE(304),
    [sym__hidden_recipient] = STATE(304),
    [sym__recipient_file] = STATE(304),
    [sym__hidden_recipient_file] = STATE(304),
    [sym__encrypt_to] = STATE(304),
    [sym__hidden_encrypt_to] = STATE(304),
    [sym__group] = STATE(379),
    [sym__ungroup] = STATE(304),
    [sym__local_user] = STATE(304),
    [sym__sender] = STATE(304),
    [sym__try_secret_name] = STATE(304),
    [sym__output] = STATE(304),
    [sym__max_output] = STATE(304),
    [sym__chunk_size] = STATE(304),
    [sym__input_size_hint] = STATE(304),
    [sym__key_origin] = STATE(304),
    [sym__import_options] = STATE(304),
    [sym__import_filter] = STATE(380),
    [sym__export_filter] = STATE(257),
    [sym__export_options] = STATE(304),
    [sym__personal_cipher_preferences] = STATE(304),
    [sym__personal_digest_preferences] = STATE(304),
    [sym__personal_compress_preferences] = STATE(304),
    [sym__s2k_cipher_algo] = STATE(304),
    [sym__s2k_digest_algo] = STATE(304),
    [sym__s2k_mode] = STATE(304),
    [sym__s2k_count] = STATE(304),
    [sym__compliance] = STATE(304),
    [sym__min_rsa_length] = STATE(304),
    [sym__debug_level] = STATE(304),
    [sym__debug] = STATE(304),
    [sym__debug_set_iobuf_size] = STATE(304),
    [sym__faked_system_time] = STATE(304),
    [sym__status_fd] = STATE(304),
    [sym__status_file] = STATE(304),
    [sym__logger_fd] = STATE(304),
    [sym__logger_file] = STATE(304),
    [sym__comment] = STATE(304),
    [sym__sig_notation] = STATE(381),
    [sym__cert_notation] = STATE(377),
    [sym__set_notation] = STATE(373),
    [sym__known_notation] = STATE(304),
    [sym__sig_policy_url] = STATE(304),
    [sym__cert_policy_url] = STATE(304),
    [sym__set_policy_url] = STATE(304),
    [sym__sig_keyserver_url] = STATE(304),
    [sym__set_filename] = STATE(304),
    [sym__cipher_algo] = STATE(304),
    [sym__digest_algo] = STATE(304),
    [sym__compress_algo] = STATE(304),
    [sym__cert_digest_algo] = STATE(304),
    [sym__disable_cipher_algo] = STATE(304),
    [sym__disable_pubkey_algo] = STATE(304),
    [sym__passphrase_repeat] = STATE(304),
    [sym__passphrase_fd] = STATE(304),
    [sym__passphrase_file] = STATE(304),
    [sym__passphrase] = STATE(304),
    [sym__pinentry_mode] = STATE(304),
    [sym__request_origin] = STATE(304),
    [sym__command_fd] = STATE(304),
    [sym__command_file] = STATE(304),
    [sym__weak_digest] = STATE(304),
    [sym__override_session_key] = STATE(304),
    [sym__override_session_key_fd] = STATE(304),
    [sym__default_sig_expire] = STATE(304),
    [sym__default_cert_expire] = STATE(304),
    [sym__default_new_key_algo] = STATE(304),
    [sym__default_preference_list] = STATE(304),
    [sym__default_keyserver_url] = STATE(304),
    [sym__chuid] = STATE(304),
    [aux_sym_config_token1] = ACTIONS(526),
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
    [anon_sym_list_DASHfilter] = ACTIONS(13),
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
    [anon_sym_import_DASHfilter] = ACTIONS(101),
    [anon_sym_export_DASHfilter] = ACTIONS(103),
    [anon_sym_export_DASHoptions] = ACTIONS(105),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(107),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(109),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(111),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(113),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(115),
    [anon_sym_s2k_DASHmode] = ACTIONS(117),
    [anon_sym_s2k_DASHcount] = ACTIONS(119),
    [anon_sym_compliance] = ACTIONS(121),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(123),
    [sym__require_compliance] = ACTIONS(9),
    [anon_sym_debug_DASHlevel] = ACTIONS(125),
    [anon_sym_debug] = ACTIONS(127),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(129),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(131),
    [anon_sym_status_DASHfd] = ACTIONS(133),
    [anon_sym_status_DASHfile] = ACTIONS(135),
    [anon_sym_logger_DASHfd] = ACTIONS(137),
    [anon_sym_logger_DASHfile] = ACTIONS(139),
    [anon_sym_log_DASHfile] = ACTIONS(139),
    [anon_sym_comment] = ACTIONS(141),
    [anon_sym_sig_DASHnotation] = ACTIONS(143),
    [anon_sym_cert_DASHnotation] = ACTIONS(145),
    [anon_sym_set_DASHnotation] = ACTIONS(147),
    [anon_sym_known_DASHnotation] = ACTIONS(149),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(151),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(153),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(155),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(157),
    [anon_sym_set_DASHfilename] = ACTIONS(159),
    [anon_sym_cipher_DASHalgo] = ACTIONS(161),
    [anon_sym_digest_DASHalgo] = ACTIONS(163),
    [anon_sym_compress_DASHalgo] = ACTIONS(165),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(167),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(169),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(171),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(173),
    [anon_sym_passphrase_DASHfd] = ACTIONS(175),
    [anon_sym_passphrase_DASHfile] = ACTIONS(177),
    [anon_sym_passphrase] = ACTIONS(179),
    [anon_sym_pinentry_DASHmode] = ACTIONS(181),
    [anon_sym_request_DASHorigin] = ACTIONS(183),
    [anon_sym_command_DASHfd] = ACTIONS(185),
    [anon_sym_command_DASHfile] = ACTIONS(187),
    [anon_sym_weak_DASHdigest] = ACTIONS(189),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(191),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(193),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(195),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(197),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(199),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(201),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(203),
    [anon_sym_chuid] = ACTIONS(205),
    [sym_comment] = ACTIONS(528),
    [sym__space] = ACTIONS(530),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [aux_sym_config_token1] = ACTIONS(211),
    [anon_sym_default_DASHrecipient] = ACTIONS(532),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(211),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(211),
    [anon_sym_verbose] = ACTIONS(211),
    [anon_sym_no_DASHtty] = ACTIONS(211),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(211),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(211),
    [anon_sym_enable_DASHdsa2] = ACTIONS(211),
    [anon_sym_disable_DASHdsa2] = ACTIONS(211),
    [anon_sym_no_DASHcompress] = ACTIONS(211),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(211),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(211),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(211),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(211),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(211),
    [anon_sym_always_DASHtrust] = ACTIONS(211),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(211),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(211),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(211),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(211),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(211),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(211),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(211),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(211),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(211),
    [anon_sym_no_DASHautostart] = ACTIONS(211),
    [anon_sym_lock_DASHonce] = ACTIONS(211),
    [anon_sym_lock_DASHmultiple] = ACTIONS(211),
    [anon_sym_lock_DASHnever] = ACTIONS(211),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(211),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(211),
    [anon_sym_no_DASHgreeting] = ACTIONS(211),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(211),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(211),
    [anon_sym_require_DASHsecmem] = ACTIONS(211),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(211),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(211),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(211),
    [anon_sym_expert] = ACTIONS(211),
    [anon_sym_no_DASHexpert] = ACTIONS(211),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(211),
    [anon_sym_no_DASHgroups] = ACTIONS(211),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(211),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(211),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(211),
    [anon_sym_armor] = ACTIONS(211),
    [anon_sym_no_DASHarmor] = ACTIONS(211),
    [anon_sym_with_DASHcolons] = ACTIONS(211),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(211),
    [anon_sym_with_DASHfingerprint] = ACTIONS(211),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(211),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(211),
    [anon_sym_with_DASHkeygrip] = ACTIONS(211),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(211),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(211),
    [anon_sym_with_DASHsecret] = ACTIONS(211),
    [anon_sym_textmode] = ACTIONS(211),
    [anon_sym_no_DASHtextmode] = ACTIONS(211),
    [anon_sym_force_DASHocb] = ACTIONS(211),
    [anon_sym_force_DASHaead] = ACTIONS(211),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(211),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(211),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(211),
    [anon_sym_gnupg] = ACTIONS(211),
    [anon_sym_openpgp] = ACTIONS(211),
    [anon_sym_rfc4880] = ACTIONS(532),
    [anon_sym_rfc4880bis] = ACTIONS(211),
    [anon_sym_rfc2440] = ACTIONS(211),
    [anon_sym_pgp7] = ACTIONS(211),
    [anon_sym_pgp8] = ACTIONS(211),
    [anon_sym_list_DASHonly] = ACTIONS(211),
    [anon_sym_interactive] = ACTIONS(211),
    [anon_sym_debug_DASHall] = ACTIONS(532),
    [anon_sym_debug_DASHiolbf] = ACTIONS(211),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(211),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(211),
    [anon_sym_full_DASHtimestrings] = ACTIONS(211),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(211),
    [anon_sym_log_DASHtime] = ACTIONS(211),
    [anon_sym_no_DASHcomments] = ACTIONS(211),
    [anon_sym_emit_DASHversion] = ACTIONS(211),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(211),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(211),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(211),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(211),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(211),
    [anon_sym_throw_DASHkeyids] = ACTIONS(211),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(211),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(211),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(211),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(211),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(211),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(211),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(211),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(211),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(211),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(211),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(211),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(211),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(211),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(211),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(211),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(211),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(211),
    [anon_sym_no_DASHkeyring] = ACTIONS(211),
    [anon_sym_skip_DASHverify] = ACTIONS(211),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(211),
    [anon_sym_list_DASHsignatures] = ACTIONS(211),
    [anon_sym_list_DASHsigs] = ACTIONS(211),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(211),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(211),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(211),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(211),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(211),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(211),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(211),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(211),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(211),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(211),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(211),
    [anon_sym_default_DASHkey] = ACTIONS(532),
    [anon_sym_list_DASHfilter] = ACTIONS(211),
    [anon_sym_list_DASHoptions] = ACTIONS(211),
    [anon_sym_verify_DASHoptions] = ACTIONS(211),
    [anon_sym_photo_DASHviewer] = ACTIONS(211),
    [anon_sym_exec_DASHpath] = ACTIONS(211),
    [anon_sym_keyring] = ACTIONS(211),
    [anon_sym_primary_DASHkeyring] = ACTIONS(211),
    [anon_sym_trustdb_DASHname] = ACTIONS(211),
    [anon_sym_display_DASHcharset] = ACTIONS(211),
    [sym__utf8_strings] = ACTIONS(211),
    [sym__no_utf8_strings] = ACTIONS(211),
    [anon_sym_compress_DASHlevel] = ACTIONS(211),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(211),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(211),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(211),
    [anon_sym_trusted_DASHkey] = ACTIONS(211),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(211),
    [anon_sym_trust_DASHmodel] = ACTIONS(211),
    [anon_sym_assert_DASHsigner] = ACTIONS(211),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(211),
    [anon_sym_keyid_DASHformat] = ACTIONS(211),
    [anon_sym_keyserver] = ACTIONS(211),
    [anon_sym_completes_DASHneeded] = ACTIONS(211),
    [anon_sym_marginals_DASHneeded] = ACTIONS(211),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(211),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(211),
    [anon_sym_agent_DASHprogram] = ACTIONS(211),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(211),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(211),
    [anon_sym_recipient] = ACTIONS(532),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(532),
    [anon_sym_recipient_DASHfile] = ACTIONS(211),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(211),
    [anon_sym_encrypt_DASHto] = ACTIONS(211),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(211),
    [anon_sym_group] = ACTIONS(211),
    [anon_sym_ungroup] = ACTIONS(211),
    [anon_sym_local_DASHuser] = ACTIONS(211),
    [anon_sym_sender] = ACTIONS(211),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(211),
    [anon_sym_output] = ACTIONS(211),
    [anon_sym_max_DASHoutput] = ACTIONS(211),
    [anon_sym_chunk_DASHsize] = ACTIONS(211),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(211),
    [anon_sym_key_DASHorigin] = ACTIONS(211),
    [anon_sym_import_DASHoptions] = ACTIONS(211),
    [anon_sym_import_DASHfilter] = ACTIONS(211),
    [anon_sym_export_DASHfilter] = ACTIONS(211),
    [anon_sym_export_DASHoptions] = ACTIONS(211),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(211),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(211),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(211),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(211),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(211),
    [anon_sym_s2k_DASHmode] = ACTIONS(211),
    [anon_sym_s2k_DASHcount] = ACTIONS(211),
    [anon_sym_compliance] = ACTIONS(211),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(211),
    [sym__require_compliance] = ACTIONS(211),
    [anon_sym_debug_DASHlevel] = ACTIONS(211),
    [anon_sym_debug] = ACTIONS(532),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(211),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(211),
    [anon_sym_status_DASHfd] = ACTIONS(211),
    [anon_sym_status_DASHfile] = ACTIONS(211),
    [anon_sym_logger_DASHfd] = ACTIONS(211),
    [anon_sym_logger_DASHfile] = ACTIONS(211),
    [anon_sym_log_DASHfile] = ACTIONS(211),
    [anon_sym_comment] = ACTIONS(211),
    [anon_sym_sig_DASHnotation] = ACTIONS(211),
    [anon_sym_cert_DASHnotation] = ACTIONS(211),
    [anon_sym_set_DASHnotation] = ACTIONS(211),
    [anon_sym_known_DASHnotation] = ACTIONS(211),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(211),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(211),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(211),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(211),
    [anon_sym_set_DASHfilename] = ACTIONS(211),
    [anon_sym_cipher_DASHalgo] = ACTIONS(211),
    [anon_sym_digest_DASHalgo] = ACTIONS(211),
    [anon_sym_compress_DASHalgo] = ACTIONS(211),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(211),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(211),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(211),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(211),
    [anon_sym_passphrase_DASHfd] = ACTIONS(211),
    [anon_sym_passphrase_DASHfile] = ACTIONS(211),
    [anon_sym_passphrase] = ACTIONS(532),
    [anon_sym_pinentry_DASHmode] = ACTIONS(211),
    [anon_sym_request_DASHorigin] = ACTIONS(211),
    [anon_sym_command_DASHfd] = ACTIONS(211),
    [anon_sym_command_DASHfile] = ACTIONS(211),
    [anon_sym_weak_DASHdigest] = ACTIONS(211),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(532),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(211),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(211),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(211),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(211),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(211),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(211),
    [anon_sym_chuid] = ACTIONS(211),
    [sym_comment] = ACTIONS(211),
    [sym__space] = ACTIONS(211),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [aux_sym_config_token1] = ACTIONS(534),
    [anon_sym_default_DASHrecipient] = ACTIONS(536),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(534),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(534),
    [anon_sym_verbose] = ACTIONS(534),
    [anon_sym_no_DASHtty] = ACTIONS(534),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(534),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(534),
    [anon_sym_enable_DASHdsa2] = ACTIONS(534),
    [anon_sym_disable_DASHdsa2] = ACTIONS(534),
    [anon_sym_no_DASHcompress] = ACTIONS(534),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(534),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(534),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(534),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(534),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(534),
    [anon_sym_always_DASHtrust] = ACTIONS(534),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(534),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(534),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(534),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(534),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(534),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(534),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(534),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(534),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(534),
    [anon_sym_no_DASHautostart] = ACTIONS(534),
    [anon_sym_lock_DASHonce] = ACTIONS(534),
    [anon_sym_lock_DASHmultiple] = ACTIONS(534),
    [anon_sym_lock_DASHnever] = ACTIONS(534),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(534),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(534),
    [anon_sym_no_DASHgreeting] = ACTIONS(534),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(534),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(534),
    [anon_sym_require_DASHsecmem] = ACTIONS(534),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(534),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(534),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(534),
    [anon_sym_expert] = ACTIONS(534),
    [anon_sym_no_DASHexpert] = ACTIONS(534),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(534),
    [anon_sym_no_DASHgroups] = ACTIONS(534),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(534),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(534),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(534),
    [anon_sym_armor] = ACTIONS(534),
    [anon_sym_no_DASHarmor] = ACTIONS(534),
    [anon_sym_with_DASHcolons] = ACTIONS(534),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(534),
    [anon_sym_with_DASHfingerprint] = ACTIONS(534),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(534),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(534),
    [anon_sym_with_DASHkeygrip] = ACTIONS(534),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(534),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(534),
    [anon_sym_with_DASHsecret] = ACTIONS(534),
    [anon_sym_textmode] = ACTIONS(534),
    [anon_sym_no_DASHtextmode] = ACTIONS(534),
    [anon_sym_force_DASHocb] = ACTIONS(534),
    [anon_sym_force_DASHaead] = ACTIONS(534),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(534),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(534),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(534),
    [anon_sym_gnupg] = ACTIONS(534),
    [anon_sym_openpgp] = ACTIONS(534),
    [anon_sym_rfc4880] = ACTIONS(536),
    [anon_sym_rfc4880bis] = ACTIONS(534),
    [anon_sym_rfc2440] = ACTIONS(534),
    [anon_sym_pgp7] = ACTIONS(534),
    [anon_sym_pgp8] = ACTIONS(534),
    [anon_sym_list_DASHonly] = ACTIONS(534),
    [anon_sym_interactive] = ACTIONS(534),
    [anon_sym_debug_DASHall] = ACTIONS(536),
    [anon_sym_debug_DASHiolbf] = ACTIONS(534),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(534),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(534),
    [anon_sym_full_DASHtimestrings] = ACTIONS(534),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(534),
    [anon_sym_log_DASHtime] = ACTIONS(534),
    [anon_sym_no_DASHcomments] = ACTIONS(534),
    [anon_sym_emit_DASHversion] = ACTIONS(534),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(534),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(534),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(534),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(534),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(534),
    [anon_sym_throw_DASHkeyids] = ACTIONS(534),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(534),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(534),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(534),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(534),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(534),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(534),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(534),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(534),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(534),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(534),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(534),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(534),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(534),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(534),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(534),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(534),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(534),
    [anon_sym_no_DASHkeyring] = ACTIONS(534),
    [anon_sym_skip_DASHverify] = ACTIONS(534),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(534),
    [anon_sym_list_DASHsignatures] = ACTIONS(534),
    [anon_sym_list_DASHsigs] = ACTIONS(534),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(534),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(534),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(534),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(534),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(534),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(534),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(534),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(534),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(534),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(534),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(534),
    [anon_sym_default_DASHkey] = ACTIONS(536),
    [anon_sym_list_DASHfilter] = ACTIONS(534),
    [anon_sym_list_DASHoptions] = ACTIONS(534),
    [anon_sym_verify_DASHoptions] = ACTIONS(534),
    [anon_sym_photo_DASHviewer] = ACTIONS(534),
    [anon_sym_exec_DASHpath] = ACTIONS(534),
    [anon_sym_keyring] = ACTIONS(534),
    [anon_sym_primary_DASHkeyring] = ACTIONS(534),
    [anon_sym_trustdb_DASHname] = ACTIONS(534),
    [anon_sym_display_DASHcharset] = ACTIONS(534),
    [sym__utf8_strings] = ACTIONS(534),
    [sym__no_utf8_strings] = ACTIONS(534),
    [anon_sym_compress_DASHlevel] = ACTIONS(534),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(534),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(534),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(534),
    [anon_sym_trusted_DASHkey] = ACTIONS(534),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(534),
    [anon_sym_trust_DASHmodel] = ACTIONS(534),
    [anon_sym_assert_DASHsigner] = ACTIONS(534),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(534),
    [anon_sym_keyid_DASHformat] = ACTIONS(534),
    [anon_sym_keyserver] = ACTIONS(534),
    [anon_sym_completes_DASHneeded] = ACTIONS(534),
    [anon_sym_marginals_DASHneeded] = ACTIONS(534),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(534),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(534),
    [anon_sym_agent_DASHprogram] = ACTIONS(534),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(534),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(534),
    [anon_sym_recipient] = ACTIONS(536),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(536),
    [anon_sym_recipient_DASHfile] = ACTIONS(534),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(534),
    [anon_sym_encrypt_DASHto] = ACTIONS(534),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(534),
    [anon_sym_group] = ACTIONS(534),
    [anon_sym_ungroup] = ACTIONS(534),
    [anon_sym_local_DASHuser] = ACTIONS(534),
    [anon_sym_sender] = ACTIONS(534),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(534),
    [anon_sym_output] = ACTIONS(534),
    [anon_sym_max_DASHoutput] = ACTIONS(534),
    [anon_sym_chunk_DASHsize] = ACTIONS(534),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(534),
    [anon_sym_key_DASHorigin] = ACTIONS(534),
    [anon_sym_import_DASHoptions] = ACTIONS(534),
    [anon_sym_import_DASHfilter] = ACTIONS(534),
    [anon_sym_export_DASHfilter] = ACTIONS(534),
    [anon_sym_export_DASHoptions] = ACTIONS(534),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(534),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(534),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(534),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(534),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(534),
    [anon_sym_s2k_DASHmode] = ACTIONS(534),
    [anon_sym_s2k_DASHcount] = ACTIONS(534),
    [anon_sym_compliance] = ACTIONS(534),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(534),
    [sym__require_compliance] = ACTIONS(534),
    [anon_sym_debug_DASHlevel] = ACTIONS(534),
    [anon_sym_debug] = ACTIONS(536),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(534),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(534),
    [anon_sym_status_DASHfd] = ACTIONS(534),
    [anon_sym_status_DASHfile] = ACTIONS(534),
    [anon_sym_logger_DASHfd] = ACTIONS(534),
    [anon_sym_logger_DASHfile] = ACTIONS(534),
    [anon_sym_log_DASHfile] = ACTIONS(534),
    [anon_sym_comment] = ACTIONS(534),
    [anon_sym_sig_DASHnotation] = ACTIONS(534),
    [anon_sym_cert_DASHnotation] = ACTIONS(534),
    [anon_sym_set_DASHnotation] = ACTIONS(534),
    [anon_sym_known_DASHnotation] = ACTIONS(534),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(534),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(534),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(534),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(534),
    [anon_sym_set_DASHfilename] = ACTIONS(534),
    [anon_sym_cipher_DASHalgo] = ACTIONS(534),
    [anon_sym_digest_DASHalgo] = ACTIONS(534),
    [anon_sym_compress_DASHalgo] = ACTIONS(534),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(534),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(534),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(534),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(534),
    [anon_sym_passphrase_DASHfd] = ACTIONS(534),
    [anon_sym_passphrase_DASHfile] = ACTIONS(534),
    [anon_sym_passphrase] = ACTIONS(536),
    [anon_sym_pinentry_DASHmode] = ACTIONS(534),
    [anon_sym_request_DASHorigin] = ACTIONS(534),
    [anon_sym_command_DASHfd] = ACTIONS(534),
    [anon_sym_command_DASHfile] = ACTIONS(534),
    [anon_sym_weak_DASHdigest] = ACTIONS(534),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(536),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(534),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(534),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(534),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(534),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(534),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(534),
    [anon_sym_chuid] = ACTIONS(534),
    [sym_comment] = ACTIONS(534),
    [sym__space] = ACTIONS(534),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(538),
    [aux_sym_config_token1] = ACTIONS(538),
    [anon_sym_default_DASHrecipient] = ACTIONS(540),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(538),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(538),
    [anon_sym_verbose] = ACTIONS(538),
    [anon_sym_no_DASHtty] = ACTIONS(538),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(538),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(538),
    [anon_sym_enable_DASHdsa2] = ACTIONS(538),
    [anon_sym_disable_DASHdsa2] = ACTIONS(538),
    [anon_sym_no_DASHcompress] = ACTIONS(538),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(538),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(538),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(538),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(538),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(538),
    [anon_sym_always_DASHtrust] = ACTIONS(538),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(538),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(538),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(538),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(538),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(538),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(538),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(538),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(538),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(538),
    [anon_sym_no_DASHautostart] = ACTIONS(538),
    [anon_sym_lock_DASHonce] = ACTIONS(538),
    [anon_sym_lock_DASHmultiple] = ACTIONS(538),
    [anon_sym_lock_DASHnever] = ACTIONS(538),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(538),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(538),
    [anon_sym_no_DASHgreeting] = ACTIONS(538),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(538),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(538),
    [anon_sym_require_DASHsecmem] = ACTIONS(538),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(538),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(538),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(538),
    [anon_sym_expert] = ACTIONS(538),
    [anon_sym_no_DASHexpert] = ACTIONS(538),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(538),
    [anon_sym_no_DASHgroups] = ACTIONS(538),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(538),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(538),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(538),
    [anon_sym_armor] = ACTIONS(538),
    [anon_sym_no_DASHarmor] = ACTIONS(538),
    [anon_sym_with_DASHcolons] = ACTIONS(538),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(538),
    [anon_sym_with_DASHfingerprint] = ACTIONS(538),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(538),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(538),
    [anon_sym_with_DASHkeygrip] = ACTIONS(538),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(538),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(538),
    [anon_sym_with_DASHsecret] = ACTIONS(538),
    [anon_sym_textmode] = ACTIONS(538),
    [anon_sym_no_DASHtextmode] = ACTIONS(538),
    [anon_sym_force_DASHocb] = ACTIONS(538),
    [anon_sym_force_DASHaead] = ACTIONS(538),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(538),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(538),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(538),
    [anon_sym_gnupg] = ACTIONS(538),
    [anon_sym_openpgp] = ACTIONS(538),
    [anon_sym_rfc4880] = ACTIONS(540),
    [anon_sym_rfc4880bis] = ACTIONS(538),
    [anon_sym_rfc2440] = ACTIONS(538),
    [anon_sym_pgp7] = ACTIONS(538),
    [anon_sym_pgp8] = ACTIONS(538),
    [anon_sym_list_DASHonly] = ACTIONS(538),
    [anon_sym_interactive] = ACTIONS(538),
    [anon_sym_debug_DASHall] = ACTIONS(540),
    [anon_sym_debug_DASHiolbf] = ACTIONS(538),
    [anon_sym_debug_DASHallow_DASHlarge_DASHchunks] = ACTIONS(538),
    [anon_sym_debug_DASHignore_DASHexpiration] = ACTIONS(538),
    [anon_sym_full_DASHtimestrings] = ACTIONS(538),
    [anon_sym_enable_DASHprogress_DASHfilter] = ACTIONS(538),
    [anon_sym_log_DASHtime] = ACTIONS(538),
    [anon_sym_no_DASHcomments] = ACTIONS(538),
    [anon_sym_emit_DASHversion] = ACTIONS(538),
    [anon_sym_no_DASHemit_DASHversion] = ACTIONS(538),
    [anon_sym_for_DASHyour_DASHeyes_DASHonly] = ACTIONS(538),
    [anon_sym_no_DASHfor_DASHyour_DASHeyes_DASHonly] = ACTIONS(538),
    [anon_sym_use_DASHembedded_DASHfilename] = ACTIONS(538),
    [anon_sym_no_DASHuse_DASHembedded_DASHfilename] = ACTIONS(538),
    [anon_sym_throw_DASHkeyids] = ACTIONS(538),
    [anon_sym_no_DASHthrow_DASHkeyids] = ACTIONS(538),
    [anon_sym_not_DASHdash_DASHescaped] = ACTIONS(538),
    [anon_sym_escape_DASHfrom_DASHlines] = ACTIONS(538),
    [anon_sym_no_DASHescape_DASHfrom_DASHlines] = ACTIONS(538),
    [anon_sym_no_DASHsymkey_DASHcache] = ACTIONS(538),
    [anon_sym_allow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(538),
    [anon_sym_no_DASHallow_DASHnon_DASHselfsigned_DASHuid] = ACTIONS(538),
    [anon_sym_allow_DASHfreeform_DASHuid] = ACTIONS(538),
    [anon_sym_ignore_DASHtime_DASHconflict] = ACTIONS(538),
    [anon_sym_ignore_DASHvalid_DASHfrom] = ACTIONS(538),
    [anon_sym_ignore_DASHcrc_DASHerror] = ACTIONS(538),
    [anon_sym_ignore_DASHmdc_DASHerror] = ACTIONS(538),
    [anon_sym_allow_DASHold_DASHcipher_DASHalgos] = ACTIONS(538),
    [anon_sym_allow_DASHweak_DASHdigest_DASHalgos] = ACTIONS(538),
    [anon_sym_allow_DASHweak_DASHkey_DASHsignatures] = ACTIONS(538),
    [anon_sym_override_DASHcompliance_DASHcheck] = ACTIONS(538),
    [anon_sym_no_DASHdefault_DASHkeyring] = ACTIONS(538),
    [anon_sym_no_DASHkeyring] = ACTIONS(538),
    [anon_sym_skip_DASHverify] = ACTIONS(538),
    [anon_sym_with_DASHkey_DASHdata] = ACTIONS(538),
    [anon_sym_list_DASHsignatures] = ACTIONS(538),
    [anon_sym_list_DASHsigs] = ACTIONS(538),
    [anon_sym_fast_DASHlist_DASHmode] = ACTIONS(538),
    [anon_sym_show_DASHsession_DASHkey] = ACTIONS(538),
    [anon_sym_ask_DASHsig_DASHexpire] = ACTIONS(538),
    [anon_sym_no_DASHask_DASHsig_DASHexpire] = ACTIONS(538),
    [anon_sym_ask_DASHcert_DASHexpire] = ACTIONS(538),
    [anon_sym_no_DASHask_DASHcert_DASHexpire] = ACTIONS(538),
    [anon_sym_no_DASHauto_DASHtrust_DASHnew_DASHkey] = ACTIONS(538),
    [anon_sym_force_DASHsign_DASHkey] = ACTIONS(538),
    [anon_sym_forbid_DASHgen_DASHkey] = ACTIONS(538),
    [anon_sym_enable_DASHspecial_DASHfilenames] = ACTIONS(538),
    [anon_sym_preserve_DASHpermissions] = ACTIONS(538),
    [anon_sym_default_DASHkey] = ACTIONS(540),
    [anon_sym_list_DASHfilter] = ACTIONS(538),
    [anon_sym_list_DASHoptions] = ACTIONS(538),
    [anon_sym_verify_DASHoptions] = ACTIONS(538),
    [anon_sym_photo_DASHviewer] = ACTIONS(538),
    [anon_sym_exec_DASHpath] = ACTIONS(538),
    [anon_sym_keyring] = ACTIONS(538),
    [anon_sym_primary_DASHkeyring] = ACTIONS(538),
    [anon_sym_trustdb_DASHname] = ACTIONS(538),
    [anon_sym_display_DASHcharset] = ACTIONS(538),
    [sym__utf8_strings] = ACTIONS(538),
    [sym__no_utf8_strings] = ACTIONS(538),
    [anon_sym_compress_DASHlevel] = ACTIONS(538),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(538),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(538),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(538),
    [anon_sym_trusted_DASHkey] = ACTIONS(538),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(538),
    [anon_sym_trust_DASHmodel] = ACTIONS(538),
    [anon_sym_assert_DASHsigner] = ACTIONS(538),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(538),
    [anon_sym_keyid_DASHformat] = ACTIONS(538),
    [anon_sym_keyserver] = ACTIONS(538),
    [anon_sym_completes_DASHneeded] = ACTIONS(538),
    [anon_sym_marginals_DASHneeded] = ACTIONS(538),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(538),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(538),
    [anon_sym_agent_DASHprogram] = ACTIONS(538),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(538),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(538),
    [anon_sym_recipient] = ACTIONS(540),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(540),
    [anon_sym_recipient_DASHfile] = ACTIONS(538),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(538),
    [anon_sym_encrypt_DASHto] = ACTIONS(538),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(538),
    [anon_sym_group] = ACTIONS(538),
    [anon_sym_ungroup] = ACTIONS(538),
    [anon_sym_local_DASHuser] = ACTIONS(538),
    [anon_sym_sender] = ACTIONS(538),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(538),
    [anon_sym_output] = ACTIONS(538),
    [anon_sym_max_DASHoutput] = ACTIONS(538),
    [anon_sym_chunk_DASHsize] = ACTIONS(538),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(538),
    [anon_sym_key_DASHorigin] = ACTIONS(538),
    [anon_sym_import_DASHoptions] = ACTIONS(538),
    [anon_sym_import_DASHfilter] = ACTIONS(538),
    [anon_sym_export_DASHfilter] = ACTIONS(538),
    [anon_sym_export_DASHoptions] = ACTIONS(538),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(538),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(538),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(538),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(538),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(538),
    [anon_sym_s2k_DASHmode] = ACTIONS(538),
    [anon_sym_s2k_DASHcount] = ACTIONS(538),
    [anon_sym_compliance] = ACTIONS(538),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(538),
    [sym__require_compliance] = ACTIONS(538),
    [anon_sym_debug_DASHlevel] = ACTIONS(538),
    [anon_sym_debug] = ACTIONS(540),
    [anon_sym_debug_DASHset_DASHiobuf_DASHsize] = ACTIONS(538),
    [anon_sym_faked_DASHsystem_DASHtime] = ACTIONS(538),
    [anon_sym_status_DASHfd] = ACTIONS(538),
    [anon_sym_status_DASHfile] = ACTIONS(538),
    [anon_sym_logger_DASHfd] = ACTIONS(538),
    [anon_sym_logger_DASHfile] = ACTIONS(538),
    [anon_sym_log_DASHfile] = ACTIONS(538),
    [anon_sym_comment] = ACTIONS(538),
    [anon_sym_sig_DASHnotation] = ACTIONS(538),
    [anon_sym_cert_DASHnotation] = ACTIONS(538),
    [anon_sym_set_DASHnotation] = ACTIONS(538),
    [anon_sym_known_DASHnotation] = ACTIONS(538),
    [anon_sym_sig_DASHpolicy_DASHurl] = ACTIONS(538),
    [anon_sym_cert_DASHpolicy_DASHurl] = ACTIONS(538),
    [anon_sym_set_DASHpolicy_DASHurl] = ACTIONS(538),
    [anon_sym_sig_DASHkeyserver_DASHurl] = ACTIONS(538),
    [anon_sym_set_DASHfilename] = ACTIONS(538),
    [anon_sym_cipher_DASHalgo] = ACTIONS(538),
    [anon_sym_digest_DASHalgo] = ACTIONS(538),
    [anon_sym_compress_DASHalgo] = ACTIONS(538),
    [anon_sym_cert_DASHdigest_DASHalgo] = ACTIONS(538),
    [anon_sym_disable_DASHcipher_DASHalgo] = ACTIONS(538),
    [anon_sym_disable_DASHpubkey_DASHalgo] = ACTIONS(538),
    [anon_sym_passphrase_DASHrepeat] = ACTIONS(538),
    [anon_sym_passphrase_DASHfd] = ACTIONS(538),
    [anon_sym_passphrase_DASHfile] = ACTIONS(538),
    [anon_sym_passphrase] = ACTIONS(540),
    [anon_sym_pinentry_DASHmode] = ACTIONS(538),
    [anon_sym_request_DASHorigin] = ACTIONS(538),
    [anon_sym_command_DASHfd] = ACTIONS(538),
    [anon_sym_command_DASHfile] = ACTIONS(538),
    [anon_sym_weak_DASHdigest] = ACTIONS(538),
    [anon_sym_override_DASHsession_DASHkey] = ACTIONS(540),
    [anon_sym_override_DASHsession_DASHkey_DASHfd] = ACTIONS(538),
    [anon_sym_default_DASHsig_DASHexpire] = ACTIONS(538),
    [anon_sym_default_DASHcert_DASHexpire] = ACTIONS(538),
    [anon_sym_default_DASHnew_DASHkey_DASHalgo] = ACTIONS(538),
    [anon_sym_default_DASHpreference_DASHlist] = ACTIONS(538),
    [anon_sym_default_DASHkeyserver_DASHurl] = ACTIONS(538),
    [anon_sym_chuid] = ACTIONS(538),
    [sym_comment] = ACTIONS(538),
    [sym__space] = ACTIONS(538),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(546), 1,
      aux_sym_filter_value_token1,
    STATE(9), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(544), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(542), 4,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [17] = 4,
    ACTIONS(552), 1,
      aux_sym_filter_value_token1,
    STATE(9), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(550), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(548), 4,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [34] = 4,
    ACTIONS(555), 1,
      aux_sym_filter_value_token1,
    STATE(10), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(550), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(548), 4,
      anon_sym_DQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [51] = 8,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(562), 1,
      sym_filter_lc,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(566), 1,
      sym__space,
    STATE(25), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
    STATE(475), 1,
      sym__filter_expression_inner,
  [76] = 4,
    ACTIONS(568), 1,
      aux_sym_filter_value_token1,
    STATE(10), 1,
      aux_sym_filter_value_repeat1,
    ACTIONS(544), 2,
      sym_filter_property,
      sym__space,
    ACTIONS(542), 4,
      anon_sym_DQUOTE,
      sym_filter_scope,
      sym_filter_lc,
      sym_filter_flag,
  [93] = 8,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(574), 1,
      sym_filter_lc,
    ACTIONS(576), 1,
      sym__space,
    STATE(30), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
    STATE(472), 1,
      sym__filter_expression_inner,
  [118] = 4,
    ACTIONS(580), 1,
      sym_filter_property,
    ACTIONS(582), 1,
      sym_filter_lc,
    ACTIONS(584), 1,
      sym__space,
    ACTIONS(578), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [134] = 7,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(587), 1,
      anon_sym_SQUOTE,
    ACTIONS(589), 1,
      sym__space,
    STATE(23), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [156] = 3,
    ACTIONS(593), 1,
      sym_filter_property,
    ACTIONS(595), 1,
      sym_filter_lc,
    ACTIONS(591), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [170] = 4,
    ACTIONS(599), 1,
      sym_filter_property,
    ACTIONS(601), 1,
      sym_filter_lc,
    ACTIONS(603), 1,
      sym__space,
    ACTIONS(597), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [186] = 7,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      sym__space,
    STATE(21), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [208] = 7,
    ACTIONS(608), 1,
      anon_sym_DQUOTE,
    ACTIONS(610), 1,
      anon_sym_SQUOTE,
    ACTIONS(612), 1,
      aux_sym__command_token1,
    ACTIONS(614), 1,
      aux_sym__command_format_token1,
    STATE(52), 1,
      aux_sym__command_repeat1,
    STATE(172), 1,
      sym__command_format,
    STATE(330), 1,
      sym__command,
  [230] = 3,
    ACTIONS(618), 1,
      sym_filter_property,
    ACTIONS(620), 1,
      sym_filter_lc,
    ACTIONS(616), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [244] = 7,
    ACTIONS(578), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      sym_filter_scope,
    ACTIONS(625), 1,
      sym_filter_property,
    ACTIONS(628), 1,
      sym_filter_flag,
    ACTIONS(631), 1,
      sym__space,
    STATE(21), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [266] = 4,
    ACTIONS(618), 1,
      sym_filter_property,
    ACTIONS(620), 1,
      sym_filter_lc,
    ACTIONS(634), 1,
      sym__space,
    ACTIONS(616), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [282] = 7,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
    ACTIONS(628), 1,
      sym_filter_flag,
    ACTIONS(637), 1,
      sym_filter_scope,
    ACTIONS(640), 1,
      sym_filter_property,
    ACTIONS(643), 1,
      sym__space,
    STATE(23), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [304] = 3,
    ACTIONS(648), 1,
      sym_filter_property,
    ACTIONS(650), 1,
      sym_filter_lc,
    ACTIONS(646), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [318] = 7,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(589), 1,
      sym__space,
    ACTIONS(652), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [340] = 7,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(589), 1,
      sym__space,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [362] = 4,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(660), 1,
      sym_filter_lc,
    ACTIONS(662), 1,
      sym__space,
    ACTIONS(656), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [378] = 3,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(660), 1,
      sym_filter_lc,
    ACTIONS(656), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [392] = 3,
    ACTIONS(667), 1,
      sym_filter_property,
    ACTIONS(669), 1,
      sym_filter_lc,
    ACTIONS(665), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [406] = 7,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(606), 1,
      sym__space,
    ACTIONS(652), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [428] = 4,
    ACTIONS(673), 1,
      sym_filter_property,
    ACTIONS(675), 1,
      sym_filter_lc,
    ACTIONS(677), 1,
      sym__space,
    ACTIONS(671), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [444] = 3,
    ACTIONS(673), 1,
      sym_filter_property,
    ACTIONS(675), 1,
      sym_filter_lc,
    ACTIONS(671), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [458] = 4,
    ACTIONS(667), 1,
      sym_filter_property,
    ACTIONS(669), 1,
      sym_filter_lc,
    ACTIONS(680), 1,
      sym__space,
    ACTIONS(665), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [474] = 7,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(606), 1,
      sym__space,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [496] = 3,
    ACTIONS(599), 1,
      sym_filter_property,
    ACTIONS(601), 1,
      sym_filter_lc,
    ACTIONS(597), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [510] = 4,
    ACTIONS(593), 1,
      sym_filter_property,
    ACTIONS(595), 1,
      sym_filter_lc,
    ACTIONS(683), 1,
      sym__space,
    ACTIONS(591), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [526] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(686), 2,
      aux_sym_config_token1,
      sym__space,
  [543] = 5,
    ACTIONS(692), 1,
      anon_sym_DQUOTE,
    ACTIONS(694), 1,
      aux_sym__command_token2,
    STATE(38), 1,
      aux_sym__command_repeat2,
    STATE(127), 1,
      sym__command_format,
    ACTIONS(697), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [560] = 5,
    ACTIONS(702), 1,
      aux_sym__command_token1,
    ACTIONS(705), 1,
      aux_sym__command_format_token1,
    STATE(39), 1,
      aux_sym__command_repeat1,
    STATE(172), 1,
      sym__command_format,
    ACTIONS(700), 2,
      aux_sym_config_token1,
      sym__space,
  [577] = 5,
    ACTIONS(708), 1,
      anon_sym_SQUOTE,
    ACTIONS(712), 1,
      aux_sym__command_token3,
    STATE(68), 1,
      aux_sym__command_repeat3,
    STATE(125), 1,
      sym__command_format,
    ACTIONS(710), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [594] = 5,
    ACTIONS(716), 1,
      aux_sym__notation_token1,
    ACTIONS(719), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(714), 2,
      aux_sym_config_token1,
      sym__space,
  [611] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(722), 2,
      aux_sym_config_token1,
      sym__space,
  [628] = 2,
    ACTIONS(726), 1,
      sym_filter_property,
    ACTIONS(724), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [639] = 3,
    ACTIONS(730), 1,
      sym_filter_property,
    ACTIONS(732), 1,
      sym__space,
    ACTIONS(728), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [652] = 2,
    ACTIONS(730), 1,
      sym_filter_property,
    ACTIONS(728), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [663] = 3,
    ACTIONS(648), 1,
      sym_filter_property,
    ACTIONS(735), 1,
      sym__space,
    ACTIONS(646), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [676] = 2,
    ACTIONS(648), 1,
      sym_filter_property,
    ACTIONS(646), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [687] = 3,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(738), 1,
      sym__space,
    ACTIONS(656), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [700] = 2,
    ACTIONS(658), 1,
      sym_filter_property,
    ACTIONS(656), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [711] = 3,
    ACTIONS(673), 1,
      sym_filter_property,
    ACTIONS(741), 1,
      sym__space,
    ACTIONS(671), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [724] = 2,
    ACTIONS(673), 1,
      sym_filter_property,
    ACTIONS(671), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [735] = 5,
    ACTIONS(612), 1,
      aux_sym__command_token1,
    ACTIONS(614), 1,
      aux_sym__command_format_token1,
    STATE(39), 1,
      aux_sym__command_repeat1,
    STATE(172), 1,
      sym__command_format,
    ACTIONS(744), 2,
      aux_sym_config_token1,
      sym__space,
  [752] = 2,
    ACTIONS(593), 1,
      sym_filter_property,
    ACTIONS(591), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [763] = 3,
    ACTIONS(593), 1,
      sym_filter_property,
    ACTIONS(746), 1,
      sym__space,
    ACTIONS(591), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [776] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(749), 2,
      aux_sym_config_token1,
      sym__space,
  [793] = 2,
    ACTIONS(618), 1,
      sym_filter_property,
    ACTIONS(616), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [804] = 3,
    ACTIONS(618), 1,
      sym_filter_property,
    ACTIONS(751), 1,
      sym__space,
    ACTIONS(616), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [817] = 2,
    ACTIONS(667), 1,
      sym_filter_property,
    ACTIONS(665), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
      sym__space,
  [828] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(754), 2,
      aux_sym_config_token1,
      sym__space,
  [845] = 3,
    ACTIONS(667), 1,
      sym_filter_property,
    ACTIONS(756), 1,
      sym__space,
    ACTIONS(665), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [858] = 3,
    ACTIONS(599), 1,
      sym_filter_property,
    ACTIONS(759), 1,
      sym__space,
    ACTIONS(597), 4,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_filter_scope,
      sym_filter_flag,
  [871] = 5,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    ACTIONS(762), 1,
      aux_sym__command_token2,
    STATE(38), 1,
      aux_sym__command_repeat2,
    STATE(127), 1,
      sym__command_format,
    ACTIONS(764), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [888] = 6,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(589), 1,
      sym__space,
    STATE(26), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [907] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(766), 2,
      aux_sym_config_token1,
      sym__space,
  [924] = 6,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(606), 1,
      sym__space,
    STATE(34), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [943] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(768), 2,
      aux_sym_config_token1,
      sym__space,
  [960] = 6,
    ACTIONS(558), 1,
      sym_filter_scope,
    ACTIONS(560), 1,
      sym_filter_property,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(589), 1,
      sym__space,
    STATE(15), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(134), 1,
      aux_sym__filter_expression_inner_repeat1,
  [979] = 5,
    ACTIONS(770), 1,
      anon_sym_SQUOTE,
    ACTIONS(775), 1,
      aux_sym__command_token3,
    STATE(68), 1,
      aux_sym__command_repeat3,
    STATE(125), 1,
      sym__command_format,
    ACTIONS(772), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [996] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(778), 2,
      aux_sym_config_token1,
      sym__space,
  [1013] = 6,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(570), 1,
      sym_filter_scope,
    ACTIONS(572), 1,
      sym_filter_property,
    ACTIONS(606), 1,
      sym__space,
    STATE(18), 1,
      aux_sym__filter_expression_inner_repeat2,
    STATE(179), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1032] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(41), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
    ACTIONS(780), 2,
      aux_sym_config_token1,
      sym__space,
  [1049] = 4,
    ACTIONS(712), 1,
      aux_sym__command_token3,
    STATE(40), 1,
      aux_sym__command_repeat3,
    STATE(125), 1,
      sym__command_format,
    ACTIONS(710), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1063] = 5,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(786), 1,
      sym_number,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(329), 1,
      sym_string,
  [1079] = 5,
    ACTIONS(790), 1,
      aux_sym_config_token1,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    ACTIONS(794), 1,
      sym__space,
    STATE(113), 1,
      aux_sym__import_options_repeat1,
    STATE(246), 1,
      aux_sym__import_options_repeat2,
  [1095] = 5,
    ACTIONS(796), 1,
      aux_sym_config_token1,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    ACTIONS(800), 1,
      sym__space,
    STATE(112), 1,
      aux_sym__export_options_repeat1,
    STATE(243), 1,
      aux_sym__export_options_repeat2,
  [1111] = 5,
    ACTIONS(802), 1,
      aux_sym_config_token1,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    ACTIONS(806), 1,
      sym__space,
    STATE(111), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    STATE(242), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [1127] = 5,
    ACTIONS(808), 1,
      aux_sym_config_token1,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    ACTIONS(812), 1,
      sym__space,
    STATE(110), 1,
      aux_sym__personal_digest_preferences_repeat1,
    STATE(241), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [1143] = 5,
    ACTIONS(814), 1,
      aux_sym_config_token1,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      sym__space,
    STATE(109), 1,
      aux_sym__personal_compress_preferences_repeat1,
    STATE(240), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [1159] = 5,
    ACTIONS(820), 1,
      aux_sym_config_token1,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    ACTIONS(824), 1,
      sym__space,
    STATE(108), 1,
      aux_sym__debug_repeat1,
    STATE(239), 1,
      aux_sym__debug_repeat2,
  [1175] = 5,
    ACTIONS(826), 1,
      anon_sym_EQ,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1191] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(832), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1207] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(834), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1223] = 5,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(836), 1,
      sym_filter_scope,
    ACTIONS(838), 1,
      sym_filter_property,
    ACTIONS(840), 1,
      sym_filter_lc,
    STATE(170), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1239] = 5,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(842), 1,
      sym_filter_scope,
    ACTIONS(844), 1,
      sym_filter_property,
    ACTIONS(846), 1,
      sym_filter_lc,
    STATE(183), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1255] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(848), 1,
      anon_sym_BANG,
    STATE(80), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1271] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(850), 1,
      anon_sym_BANG,
    STATE(81), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1287] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(852), 1,
      anon_sym_BANG,
    STATE(82), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1303] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    ACTIONS(854), 1,
      anon_sym_BANG,
    STATE(71), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1319] = 5,
    ACTIONS(856), 1,
      aux_sym_config_token1,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      sym__space,
    STATE(131), 1,
      aux_sym__default_new_key_algo_repeat1,
    STATE(238), 1,
      aux_sym__default_new_key_algo_repeat2,
  [1335] = 5,
    ACTIONS(862), 1,
      aux_sym_config_token1,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    ACTIONS(866), 1,
      sym__space,
    STATE(132), 1,
      aux_sym__default_preference_list_repeat1,
    STATE(237), 1,
      aux_sym__default_preference_list_repeat2,
  [1351] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    ACTIONS(868), 1,
      anon_sym_BANG,
    STATE(69), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1367] = 3,
    ACTIONS(870), 1,
      sym__pubkey_algo_value,
    STATE(295), 1,
      sym__default_preference_value,
    ACTIONS(872), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1379] = 3,
    ACTIONS(870), 1,
      sym__pubkey_algo_value,
    STATE(215), 1,
      sym__default_preference_value,
    ACTIONS(872), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1391] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    ACTIONS(874), 1,
      anon_sym_BANG,
    STATE(66), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1407] = 5,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    ACTIONS(876), 1,
      anon_sym_BANG,
    STATE(64), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1423] = 4,
    ACTIONS(762), 1,
      aux_sym__command_token2,
    STATE(62), 1,
      aux_sym__command_repeat2,
    STATE(127), 1,
      sym__command_format,
    ACTIONS(764), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1437] = 5,
    ACTIONS(878), 1,
      aux_sym_config_token1,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      sym__space,
    STATE(115), 1,
      aux_sym__auto_key_locate_repeat1,
    STATE(247), 1,
      aux_sym__auto_key_locate_repeat2,
  [1453] = 5,
    ACTIONS(884), 1,
      aux_sym_config_token1,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    ACTIONS(888), 1,
      sym__space,
    STATE(130), 1,
      aux_sym__list_options_repeat1,
    STATE(252), 1,
      aux_sym__list_options_repeat2,
  [1469] = 5,
    ACTIONS(890), 1,
      aux_sym_config_token1,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    ACTIONS(894), 1,
      sym__space,
    STATE(128), 1,
      aux_sym__verify_options_repeat1,
    STATE(251), 1,
      aux_sym__verify_options_repeat2,
  [1485] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(896), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1501] = 3,
    ACTIONS(870), 1,
      sym__pubkey_algo_value,
    STATE(90), 1,
      sym__default_preference_value,
    ACTIONS(872), 3,
      sym__cipher_algo_value,
      sym__hash_algo_value,
      sym__compression_algo_value,
  [1513] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(898), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1529] = 5,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    ACTIONS(900), 1,
      anon_sym_EQ,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1545] = 5,
    ACTIONS(714), 1,
      anon_sym_EQ,
    ACTIONS(902), 1,
      aux_sym__notation_token1,
    ACTIONS(905), 1,
      aux_sym__notation_format_token1,
    STATE(104), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [1561] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(349), 1,
      sym_string,
  [1574] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(261), 1,
      sym_string,
  [1587] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(300), 1,
      sym_string,
  [1600] = 3,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__debug_repeat1,
    ACTIONS(908), 2,
      aux_sym_config_token1,
      sym__space,
  [1611] = 3,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(910), 2,
      aux_sym_config_token1,
      sym__space,
  [1622] = 3,
    ACTIONS(810), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(912), 2,
      aux_sym_config_token1,
      sym__space,
  [1633] = 3,
    ACTIONS(804), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(914), 2,
      aux_sym_config_token1,
      sym__space,
  [1644] = 3,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(916), 2,
      aux_sym_config_token1,
      sym__space,
  [1655] = 3,
    ACTIONS(792), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(918), 2,
      aux_sym_config_token1,
      sym__space,
  [1666] = 4,
    ACTIONS(920), 1,
      aux_sym_filter_value_token1,
    ACTIONS(922), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [1679] = 3,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(924), 2,
      aux_sym_config_token1,
      sym__space,
  [1690] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(836), 1,
      sym_filter_scope,
    ACTIONS(838), 1,
      sym_filter_property,
    STATE(170), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1703] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(334), 1,
      sym_string,
  [1716] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(337), 1,
      sym_string,
  [1729] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(326), 1,
      sym_string,
  [1742] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(339), 1,
      sym_string,
  [1755] = 4,
    ACTIONS(926), 1,
      anon_sym_SQUOTE,
    ACTIONS(928), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(930), 1,
      aux_sym__command_token3,
    STATE(155), 1,
      aux_sym_string_repeat2,
  [1768] = 4,
    ACTIONS(926), 1,
      anon_sym_DQUOTE,
    ACTIONS(932), 1,
      aux_sym__command_token2,
    ACTIONS(934), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(153), 1,
      aux_sym_string_repeat1,
  [1781] = 4,
    ACTIONS(920), 1,
      aux_sym_filter_value_token1,
    ACTIONS(936), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(36), 1,
      sym_filter_value,
  [1794] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(299), 1,
      sym_string,
  [1807] = 2,
    ACTIONS(940), 1,
      aux_sym__command_token3,
    ACTIONS(938), 3,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1816] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(298), 1,
      sym_string,
  [1829] = 2,
    ACTIONS(944), 1,
      aux_sym__command_token2,
    ACTIONS(942), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      aux_sym__command_format_token1,
  [1838] = 3,
    ACTIONS(892), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(946), 2,
      aux_sym_config_token1,
      sym__space,
  [1849] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(382), 1,
      sym_string,
  [1862] = 3,
    ACTIONS(886), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(948), 2,
      aux_sym_config_token1,
      sym__space,
  [1873] = 3,
    ACTIONS(858), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(950), 2,
      aux_sym_config_token1,
      sym__space,
  [1884] = 3,
    ACTIONS(864), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(952), 2,
      aux_sym_config_token1,
      sym__space,
  [1895] = 4,
    ACTIONS(920), 1,
      aux_sym_filter_value_token1,
    ACTIONS(954), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(17), 1,
      sym_filter_value,
  [1908] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(836), 1,
      sym_filter_scope,
    ACTIONS(838), 1,
      sym_filter_property,
    STATE(184), 1,
      aux_sym__filter_expression_inner_repeat1,
  [1921] = 4,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(59), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1934] = 3,
    ACTIONS(958), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym__list_options_repeat1,
    ACTIONS(956), 2,
      aux_sym_config_token1,
      sym__space,
  [1945] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(360), 1,
      sym_string,
  [1958] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(354), 1,
      sym_string,
  [1971] = 4,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(37), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [1984] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(346), 1,
      sym_string,
  [1997] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(342), 1,
      sym_string,
  [2010] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(340), 1,
      sym_string,
  [2023] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(336), 1,
      sym_string,
  [2036] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(332), 1,
      sym_string,
  [2049] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(358), 1,
      sym_string,
  [2062] = 3,
    ACTIONS(963), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym__verify_options_repeat1,
    ACTIONS(961), 2,
      aux_sym_config_token1,
      sym__space,
  [2073] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(260), 1,
      sym_string,
  [2086] = 4,
    ACTIONS(920), 1,
      aux_sym_filter_value_token1,
    ACTIONS(966), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(33), 1,
      sym_filter_value,
  [2099] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(262), 1,
      sym_string,
  [2112] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(263), 1,
      sym_string,
  [2125] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(264), 1,
      sym_string,
  [2138] = 4,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(55), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [2151] = 4,
    ACTIONS(968), 1,
      anon_sym_DQUOTE,
    ACTIONS(970), 1,
      aux_sym__command_token2,
    ACTIONS(973), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(153), 1,
      aux_sym_string_repeat1,
  [2164] = 4,
    ACTIONS(688), 1,
      aux_sym__notation_token1,
    ACTIONS(690), 1,
      aux_sym__notation_format_token1,
    STATE(42), 1,
      aux_sym__notation,
    STATE(191), 1,
      sym__notation_format,
  [2177] = 4,
    ACTIONS(976), 1,
      anon_sym_SQUOTE,
    ACTIONS(978), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(981), 1,
      aux_sym__command_token3,
    STATE(155), 1,
      aux_sym_string_repeat2,
  [2190] = 4,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    STATE(100), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2203] = 3,
    ACTIONS(986), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym__auto_key_locate_repeat1,
    ACTIONS(984), 2,
      aux_sym_config_token1,
      sym__space,
  [2214] = 4,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    STATE(103), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2227] = 3,
    ACTIONS(991), 1,
      anon_sym_COMMA,
    STATE(159), 1,
      aux_sym__import_options_repeat1,
    ACTIONS(989), 2,
      aux_sym_config_token1,
      sym__space,
  [2238] = 4,
    ACTIONS(828), 1,
      aux_sym__notation_token1,
    ACTIONS(830), 1,
      aux_sym__notation_format_token1,
    STATE(102), 1,
      aux_sym__notation,
    STATE(194), 1,
      sym__notation_format,
  [2251] = 3,
    ACTIONS(996), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym__export_options_repeat1,
    ACTIONS(994), 2,
      aux_sym_config_token1,
      sym__space,
  [2262] = 3,
    ACTIONS(1001), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym__personal_cipher_preferences_repeat1,
    ACTIONS(999), 2,
      aux_sym_config_token1,
      sym__space,
  [2273] = 3,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym__personal_digest_preferences_repeat1,
    ACTIONS(1004), 2,
      aux_sym_config_token1,
      sym__space,
  [2284] = 3,
    ACTIONS(1011), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym__personal_compress_preferences_repeat1,
    ACTIONS(1009), 2,
      aux_sym_config_token1,
      sym__space,
  [2295] = 3,
    ACTIONS(1016), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym__debug_repeat1,
    ACTIONS(1014), 2,
      aux_sym_config_token1,
      sym__space,
  [2306] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(294), 1,
      sym_string,
  [2319] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(293), 1,
      sym_string,
  [2332] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(314), 1,
      sym_string,
  [2345] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(315), 1,
      sym_string,
  [2358] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(1019), 1,
      sym_filter_scope,
    ACTIONS(1021), 1,
      sym_filter_property,
    STATE(184), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2371] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(292), 1,
      sym_string,
  [2384] = 2,
    ACTIONS(1025), 1,
      aux_sym__command_token1,
    ACTIONS(1023), 3,
      aux_sym_config_token1,
      aux_sym__command_format_token1,
      sym__space,
  [2393] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(319), 1,
      sym_string,
  [2406] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(286), 1,
      sym_string,
  [2419] = 3,
    ACTIONS(1029), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym__default_new_key_algo_repeat1,
    ACTIONS(1027), 2,
      aux_sym_config_token1,
      sym__space,
  [2430] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(288), 1,
      sym_string,
  [2443] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(289), 1,
      sym_string,
  [2456] = 3,
    ACTIONS(1034), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym__default_preference_list_repeat1,
    ACTIONS(1032), 2,
      aux_sym_config_token1,
      sym__space,
  [2467] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(842), 1,
      sym_filter_scope,
    ACTIONS(844), 1,
      sym_filter_property,
    STATE(184), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2480] = 4,
    ACTIONS(1037), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1039), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(17), 1,
      sym_filter_value,
  [2493] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(296), 1,
      sym_string,
  [2506] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(842), 1,
      sym_filter_scope,
    ACTIONS(844), 1,
      sym_filter_property,
    STATE(183), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2519] = 4,
    ACTIONS(564), 1,
      sym_filter_flag,
    ACTIONS(1041), 1,
      sym_filter_scope,
    ACTIONS(1043), 1,
      sym_filter_property,
    STATE(184), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2532] = 4,
    ACTIONS(1045), 1,
      sym_filter_scope,
    ACTIONS(1047), 1,
      sym_filter_property,
    ACTIONS(1049), 1,
      sym_filter_flag,
    STATE(184), 1,
      aux_sym__filter_expression_inner_repeat1,
  [2545] = 4,
    ACTIONS(1037), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1052), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(33), 1,
      sym_filter_value,
  [2558] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(305), 1,
      sym_string,
  [2571] = 4,
    ACTIONS(782), 1,
      anon_sym_DQUOTE,
    ACTIONS(784), 1,
      anon_sym_SQUOTE,
    ACTIONS(788), 1,
      aux_sym_string_token1,
    STATE(321), 1,
      sym_string,
  [2584] = 4,
    ACTIONS(1037), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1054), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(22), 1,
      sym_filter_value,
  [2597] = 4,
    ACTIONS(1037), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1056), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(36), 1,
      sym_filter_value,
  [2610] = 4,
    ACTIONS(1037), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1058), 1,
      sym__space,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [2623] = 2,
    ACTIONS(1062), 1,
      aux_sym__notation_token1,
    ACTIONS(1060), 3,
      aux_sym_config_token1,
      aux_sym__notation_format_token1,
      sym__space,
  [2632] = 4,
    ACTIONS(920), 1,
      aux_sym_filter_value_token1,
    ACTIONS(1064), 1,
      sym__space,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(22), 1,
      sym_filter_value,
  [2645] = 3,
    ACTIONS(1066), 1,
      aux_sym_config_token1,
    ACTIONS(1068), 1,
      sym__space,
    STATE(193), 1,
      aux_sym__import_options_repeat2,
  [2655] = 2,
    ACTIONS(1062), 1,
      aux_sym__notation_token1,
    ACTIONS(1060), 2,
      anon_sym_EQ,
      aux_sym__notation_format_token1,
  [2663] = 3,
    ACTIONS(1071), 1,
      sym_filter_op1,
    ACTIONS(1073), 1,
      sym_filter_op0,
    ACTIONS(1075), 1,
      sym__space,
  [2673] = 3,
    ACTIONS(1077), 1,
      sym_filter_op1,
    ACTIONS(1079), 1,
      sym_filter_op0,
    ACTIONS(1081), 1,
      sym__space,
  [2683] = 3,
    ACTIONS(1083), 1,
      sym_filter_op1,
    ACTIONS(1085), 1,
      sym_filter_op0,
    ACTIONS(1087), 1,
      sym__space,
  [2693] = 3,
    ACTIONS(1089), 1,
      sym_filter_op1,
    ACTIONS(1091), 1,
      sym_filter_op0,
    ACTIONS(1093), 1,
      sym__space,
  [2703] = 3,
    ACTIONS(1095), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [2713] = 3,
    ACTIONS(1095), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [2723] = 3,
    ACTIONS(1095), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(36), 1,
      sym_filter_value,
  [2733] = 3,
    ACTIONS(1095), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(22), 1,
      sym_filter_value,
  [2743] = 3,
    ACTIONS(1095), 1,
      aux_sym_filter_value_token1,
    STATE(8), 1,
      aux_sym_filter_value_repeat1,
    STATE(33), 1,
      sym_filter_value,
  [2753] = 3,
    ACTIONS(1097), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(27), 1,
      sym_filter_value,
  [2763] = 3,
    ACTIONS(1097), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(31), 1,
      sym_filter_value,
  [2773] = 3,
    ACTIONS(1097), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(36), 1,
      sym_filter_value,
  [2783] = 3,
    ACTIONS(1085), 1,
      sym_filter_op0,
    ACTIONS(1099), 1,
      sym_filter_op1,
    ACTIONS(1101), 1,
      sym__space,
  [2793] = 3,
    ACTIONS(1097), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(22), 1,
      sym_filter_value,
  [2803] = 3,
    ACTIONS(1091), 1,
      sym_filter_op0,
    ACTIONS(1103), 1,
      sym_filter_op1,
    ACTIONS(1105), 1,
      sym__space,
  [2813] = 3,
    ACTIONS(1097), 1,
      aux_sym_filter_value_token1,
    STATE(12), 1,
      aux_sym_filter_value_repeat1,
    STATE(33), 1,
      sym_filter_value,
  [2823] = 2,
    ACTIONS(1047), 1,
      sym_filter_property,
    ACTIONS(1045), 2,
      sym_filter_scope,
      sym_filter_flag,
  [2831] = 3,
    ACTIONS(1073), 1,
      sym_filter_op0,
    ACTIONS(1107), 1,
      sym_filter_op1,
    ACTIONS(1109), 1,
      sym__space,
  [2841] = 3,
    ACTIONS(1079), 1,
      sym_filter_op0,
    ACTIONS(1111), 1,
      sym_filter_op1,
    ACTIONS(1113), 1,
      sym__space,
  [2851] = 3,
    ACTIONS(1115), 1,
      aux_sym_config_token1,
    ACTIONS(1117), 1,
      sym__space,
    STATE(214), 1,
      aux_sym__default_preference_list_repeat2,
  [2861] = 1,
    ACTIONS(1032), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2867] = 3,
    ACTIONS(1120), 1,
      aux_sym_config_token1,
    ACTIONS(1122), 1,
      sym__space,
    STATE(216), 1,
      aux_sym__default_new_key_algo_repeat2,
  [2877] = 1,
    ACTIONS(1027), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2883] = 3,
    ACTIONS(1125), 1,
      aux_sym_config_token1,
    ACTIONS(1127), 1,
      sym__space,
    STATE(218), 1,
      aux_sym__debug_repeat2,
  [2893] = 1,
    ACTIONS(1014), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2899] = 3,
    ACTIONS(1130), 1,
      aux_sym_config_token1,
    ACTIONS(1132), 1,
      sym__space,
    STATE(220), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [2909] = 1,
    ACTIONS(1135), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2915] = 3,
    ACTIONS(1137), 1,
      aux_sym_config_token1,
    ACTIONS(1139), 1,
      sym__space,
    STATE(222), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [2925] = 1,
    ACTIONS(1142), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2931] = 3,
    ACTIONS(932), 1,
      aux_sym__command_token2,
    ACTIONS(934), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(122), 1,
      aux_sym_string_repeat1,
  [2941] = 3,
    ACTIONS(928), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(930), 1,
      aux_sym__command_token3,
    STATE(121), 1,
      aux_sym_string_repeat2,
  [2951] = 3,
    ACTIONS(1144), 1,
      aux_sym_config_token1,
    ACTIONS(1146), 1,
      sym__space,
    STATE(226), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [2961] = 1,
    ACTIONS(1149), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2967] = 3,
    ACTIONS(1151), 1,
      aux_sym_config_token1,
    ACTIONS(1153), 1,
      sym__space,
    STATE(228), 1,
      aux_sym__export_options_repeat2,
  [2977] = 1,
    ACTIONS(994), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2983] = 1,
    ACTIONS(989), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [2989] = 3,
    ACTIONS(1156), 1,
      aux_sym_config_token1,
    ACTIONS(1158), 1,
      sym__space,
    STATE(231), 1,
      aux_sym__auto_key_locate_repeat2,
  [2999] = 1,
    ACTIONS(984), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3005] = 3,
    ACTIONS(1161), 1,
      aux_sym_config_token1,
    ACTIONS(1163), 1,
      sym__space,
    STATE(233), 1,
      aux_sym__verify_options_repeat2,
  [3015] = 1,
    ACTIONS(961), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3021] = 3,
    ACTIONS(1166), 1,
      aux_sym_config_token1,
    ACTIONS(1168), 1,
      sym__space,
    STATE(235), 1,
      aux_sym__list_options_repeat2,
  [3031] = 1,
    ACTIONS(956), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3037] = 3,
    ACTIONS(866), 1,
      sym__space,
    ACTIONS(952), 1,
      aux_sym_config_token1,
    STATE(214), 1,
      aux_sym__default_preference_list_repeat2,
  [3047] = 3,
    ACTIONS(860), 1,
      sym__space,
    ACTIONS(950), 1,
      aux_sym_config_token1,
    STATE(216), 1,
      aux_sym__default_new_key_algo_repeat2,
  [3057] = 3,
    ACTIONS(824), 1,
      sym__space,
    ACTIONS(908), 1,
      aux_sym_config_token1,
    STATE(218), 1,
      aux_sym__debug_repeat2,
  [3067] = 3,
    ACTIONS(818), 1,
      sym__space,
    ACTIONS(910), 1,
      aux_sym_config_token1,
    STATE(220), 1,
      aux_sym__personal_compress_preferences_repeat2,
  [3077] = 3,
    ACTIONS(812), 1,
      sym__space,
    ACTIONS(912), 1,
      aux_sym_config_token1,
    STATE(222), 1,
      aux_sym__personal_digest_preferences_repeat2,
  [3087] = 3,
    ACTIONS(806), 1,
      sym__space,
    ACTIONS(914), 1,
      aux_sym_config_token1,
    STATE(226), 1,
      aux_sym__personal_cipher_preferences_repeat2,
  [3097] = 3,
    ACTIONS(800), 1,
      sym__space,
    ACTIONS(916), 1,
      aux_sym_config_token1,
    STATE(228), 1,
      aux_sym__export_options_repeat2,
  [3107] = 3,
    ACTIONS(1171), 1,
      anon_sym_DQUOTE,
    ACTIONS(1173), 1,
      anon_sym_SQUOTE,
    STATE(341), 1,
      sym__filter_expression,
  [3117] = 3,
    ACTIONS(1171), 1,
      anon_sym_DQUOTE,
    ACTIONS(1173), 1,
      anon_sym_SQUOTE,
    STATE(343), 1,
      sym__filter_expression,
  [3127] = 3,
    ACTIONS(794), 1,
      sym__space,
    ACTIONS(918), 1,
      aux_sym_config_token1,
    STATE(193), 1,
      aux_sym__import_options_repeat2,
  [3137] = 3,
    ACTIONS(882), 1,
      sym__space,
    ACTIONS(924), 1,
      aux_sym_config_token1,
    STATE(231), 1,
      aux_sym__auto_key_locate_repeat2,
  [3147] = 2,
    ACTIONS(1177), 1,
      aux_sym__command_token3,
    ACTIONS(1175), 2,
      anon_sym_SQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [3155] = 2,
    ACTIONS(1181), 1,
      aux_sym__command_token2,
    ACTIONS(1179), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
  [3163] = 2,
    ACTIONS(1183), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(1185), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [3171] = 3,
    ACTIONS(894), 1,
      sym__space,
    ACTIONS(946), 1,
      aux_sym_config_token1,
    STATE(233), 1,
      aux_sym__verify_options_repeat2,
  [3181] = 3,
    ACTIONS(888), 1,
      sym__space,
    ACTIONS(948), 1,
      aux_sym_config_token1,
    STATE(235), 1,
      aux_sym__list_options_repeat2,
  [3191] = 3,
    ACTIONS(1171), 1,
      anon_sym_DQUOTE,
    ACTIONS(1173), 1,
      anon_sym_SQUOTE,
    STATE(369), 1,
      sym__filter_expression,
  [3201] = 1,
    ACTIONS(1187), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__space,
  [3207] = 2,
    ACTIONS(1191), 1,
      anon_sym_BANG,
    ACTIONS(1189), 2,
      aux_sym_config_token1,
      sym__space,
  [3215] = 2,
    ACTIONS(1195), 1,
      anon_sym_COMMA,
    ACTIONS(1193), 2,
      aux_sym_config_token1,
      sym__space,
  [3223] = 1,
    ACTIONS(1197), 2,
      aux_sym_config_token1,
      sym__space,
  [3228] = 1,
    ACTIONS(1199), 2,
      aux_sym_config_token1,
      sym__space,
  [3233] = 2,
    ACTIONS(1071), 1,
      sym_filter_op1,
    ACTIONS(1073), 1,
      sym_filter_op0,
  [3240] = 1,
    ACTIONS(1201), 2,
      aux_sym_config_token1,
      sym__space,
  [3245] = 1,
    ACTIONS(1203), 2,
      aux_sym_config_token1,
      sym__space,
  [3250] = 1,
    ACTIONS(1205), 2,
      aux_sym_config_token1,
      sym__space,
  [3255] = 1,
    ACTIONS(1207), 2,
      aux_sym_config_token1,
      sym__space,
  [3260] = 1,
    ACTIONS(1209), 2,
      aux_sym_config_token1,
      sym__space,
  [3265] = 1,
    ACTIONS(1211), 2,
      aux_sym_config_token1,
      sym__space,
  [3270] = 1,
    ACTIONS(1213), 2,
      aux_sym_config_token1,
      sym__space,
  [3275] = 1,
    ACTIONS(1215), 2,
      aux_sym_config_token1,
      sym__space,
  [3280] = 2,
    ACTIONS(1217), 1,
      aux_sym__debug_token1,
    ACTIONS(1219), 1,
      sym__debug_flag_value,
  [3287] = 2,
    ACTIONS(1221), 1,
      sym_filter_op1,
    ACTIONS(1223), 1,
      sym_filter_op0,
  [3294] = 2,
    ACTIONS(1083), 1,
      sym_filter_op1,
    ACTIONS(1085), 1,
      sym_filter_op0,
  [3301] = 2,
    ACTIONS(1225), 1,
      sym_number,
    ACTIONS(1227), 1,
      sym_iso_time,
  [3308] = 2,
    ACTIONS(1089), 1,
      sym_filter_op1,
    ACTIONS(1091), 1,
      sym_filter_op0,
  [3315] = 2,
    ACTIONS(1223), 1,
      sym_filter_op0,
    ACTIONS(1229), 1,
      sym_filter_op1,
  [3322] = 2,
    ACTIONS(1085), 1,
      sym_filter_op0,
    ACTIONS(1099), 1,
      sym_filter_op1,
  [3329] = 1,
    ACTIONS(1231), 2,
      aux_sym_config_token1,
      sym__space,
  [3334] = 1,
    ACTIONS(1233), 2,
      aux_sym_config_token1,
      sym__space,
  [3339] = 1,
    ACTIONS(1235), 2,
      aux_sym_config_token1,
      sym__space,
  [3344] = 1,
    ACTIONS(1237), 2,
      aux_sym_config_token1,
      sym__space,
  [3349] = 1,
    ACTIONS(1239), 2,
      aux_sym_config_token1,
      sym__space,
  [3354] = 1,
    ACTIONS(1241), 2,
      aux_sym_config_token1,
      sym__space,
  [3359] = 1,
    ACTIONS(1243), 2,
      aux_sym_config_token1,
      sym__space,
  [3364] = 1,
    ACTIONS(820), 2,
      aux_sym_config_token1,
      sym__space,
  [3369] = 2,
    ACTIONS(1091), 1,
      sym_filter_op0,
    ACTIONS(1103), 1,
      sym_filter_op1,
  [3376] = 1,
    ACTIONS(1245), 2,
      aux_sym_config_token1,
      sym__space,
  [3381] = 1,
    ACTIONS(1247), 2,
      aux_sym_config_token1,
      sym__space,
  [3386] = 1,
    ACTIONS(1249), 2,
      aux_sym_config_token1,
      sym__space,
  [3391] = 1,
    ACTIONS(1251), 2,
      aux_sym_config_token1,
      sym__space,
  [3396] = 1,
    ACTIONS(1253), 2,
      aux_sym_config_token1,
      sym__space,
  [3401] = 1,
    ACTIONS(1255), 2,
      aux_sym_config_token1,
      sym__space,
  [3406] = 1,
    ACTIONS(1257), 2,
      aux_sym_config_token1,
      sym__space,
  [3411] = 2,
    ACTIONS(1073), 1,
      sym_filter_op0,
    ACTIONS(1107), 1,
      sym_filter_op1,
  [3418] = 1,
    ACTIONS(1259), 2,
      aux_sym_config_token1,
      sym__space,
  [3423] = 1,
    ACTIONS(1261), 2,
      aux_sym_config_token1,
      sym__space,
  [3428] = 1,
    ACTIONS(1263), 2,
      aux_sym_config_token1,
      sym__space,
  [3433] = 1,
    ACTIONS(1115), 2,
      aux_sym_config_token1,
      sym__space,
  [3438] = 1,
    ACTIONS(1265), 2,
      aux_sym_config_token1,
      sym__space,
  [3443] = 1,
    ACTIONS(1120), 2,
      aux_sym_config_token1,
      sym__space,
  [3448] = 1,
    ACTIONS(1267), 2,
      aux_sym_config_token1,
      sym__space,
  [3453] = 1,
    ACTIONS(1269), 2,
      aux_sym_config_token1,
      sym__space,
  [3458] = 1,
    ACTIONS(1271), 2,
      aux_sym_config_token1,
      sym__space,
  [3463] = 1,
    ACTIONS(1125), 2,
      aux_sym_config_token1,
      sym__space,
  [3468] = 2,
    ACTIONS(1273), 1,
      aux_sym_config_token1,
    ACTIONS(1275), 1,
      sym__space,
  [3475] = 1,
    ACTIONS(1277), 2,
      aux_sym_config_token1,
      sym__space,
  [3480] = 1,
    ACTIONS(1279), 2,
      aux_sym_config_token1,
      sym__space,
  [3485] = 1,
    ACTIONS(1281), 2,
      aux_sym_config_token1,
      sym__space,
  [3490] = 1,
    ACTIONS(1283), 2,
      aux_sym_config_token1,
      sym__space,
  [3495] = 1,
    ACTIONS(1285), 2,
      aux_sym_config_token1,
      sym__space,
  [3500] = 1,
    ACTIONS(1287), 2,
      aux_sym_config_token1,
      sym__space,
  [3505] = 1,
    ACTIONS(1289), 2,
      aux_sym_config_token1,
      sym__space,
  [3510] = 1,
    ACTIONS(1291), 2,
      aux_sym_config_token1,
      sym__space,
  [3515] = 1,
    ACTIONS(1293), 2,
      aux_sym_config_token1,
      sym__space,
  [3520] = 1,
    ACTIONS(1295), 2,
      aux_sym_config_token1,
      sym__space,
  [3525] = 1,
    ACTIONS(1297), 2,
      aux_sym_config_token1,
      sym__space,
  [3530] = 1,
    ACTIONS(1299), 2,
      aux_sym_config_token1,
      sym__space,
  [3535] = 1,
    ACTIONS(1301), 2,
      aux_sym_config_token1,
      sym__space,
  [3540] = 1,
    ACTIONS(1303), 2,
      aux_sym_config_token1,
      sym__space,
  [3545] = 1,
    ACTIONS(1305), 2,
      aux_sym_config_token1,
      sym__space,
  [3550] = 1,
    ACTIONS(1307), 2,
      aux_sym_config_token1,
      sym__space,
  [3555] = 1,
    ACTIONS(1309), 2,
      aux_sym_config_token1,
      sym__space,
  [3560] = 1,
    ACTIONS(1311), 2,
      aux_sym_config_token1,
      sym__space,
  [3565] = 1,
    ACTIONS(1313), 2,
      aux_sym_config_token1,
      sym__space,
  [3570] = 1,
    ACTIONS(1315), 2,
      aux_sym_config_token1,
      sym__space,
  [3575] = 1,
    ACTIONS(1317), 2,
      aux_sym_config_token1,
      sym__space,
  [3580] = 1,
    ACTIONS(1319), 2,
      aux_sym_config_token1,
      sym__space,
  [3585] = 2,
    ACTIONS(1321), 1,
      sym__key_locate_value,
    ACTIONS(1323), 1,
      sym_url,
  [3592] = 1,
    ACTIONS(1325), 2,
      aux_sym_config_token1,
      sym__space,
  [3597] = 1,
    ACTIONS(1327), 2,
      aux_sym_config_token1,
      sym__space,
  [3602] = 1,
    ACTIONS(1329), 2,
      aux_sym_config_token1,
      sym__space,
  [3607] = 1,
    ACTIONS(1331), 2,
      aux_sym_config_token1,
      sym__space,
  [3612] = 1,
    ACTIONS(1333), 2,
      aux_sym_config_token1,
      sym__space,
  [3617] = 1,
    ACTIONS(1335), 2,
      aux_sym_config_token1,
      sym__space,
  [3622] = 1,
    ACTIONS(1337), 2,
      aux_sym_config_token1,
      sym__space,
  [3627] = 1,
    ACTIONS(1339), 2,
      aux_sym_config_token1,
      sym__space,
  [3632] = 1,
    ACTIONS(1341), 2,
      aux_sym_config_token1,
      sym__space,
  [3637] = 1,
    ACTIONS(1343), 2,
      aux_sym_config_token1,
      sym__space,
  [3642] = 1,
    ACTIONS(1345), 2,
      aux_sym_config_token1,
      sym__space,
  [3647] = 1,
    ACTIONS(1347), 2,
      aux_sym_config_token1,
      sym__space,
  [3652] = 1,
    ACTIONS(1151), 2,
      aux_sym_config_token1,
      sym__space,
  [3657] = 1,
    ACTIONS(1349), 2,
      aux_sym_config_token1,
      sym__space,
  [3662] = 1,
    ACTIONS(1351), 2,
      aux_sym_config_token1,
      sym__space,
  [3667] = 1,
    ACTIONS(1353), 2,
      aux_sym_config_token1,
      sym__space,
  [3672] = 1,
    ACTIONS(1355), 2,
      aux_sym_config_token1,
      sym__space,
  [3677] = 1,
    ACTIONS(1357), 2,
      aux_sym_config_token1,
      sym__space,
  [3682] = 1,
    ACTIONS(1066), 2,
      aux_sym_config_token1,
      sym__space,
  [3687] = 1,
    ACTIONS(1359), 2,
      aux_sym_config_token1,
      sym__space,
  [3692] = 1,
    ACTIONS(1361), 2,
      aux_sym_config_token1,
      sym__space,
  [3697] = 1,
    ACTIONS(1363), 2,
      aux_sym_config_token1,
      sym__space,
  [3702] = 1,
    ACTIONS(1365), 2,
      aux_sym_config_token1,
      sym__space,
  [3707] = 1,
    ACTIONS(1367), 2,
      aux_sym_config_token1,
      sym__space,
  [3712] = 1,
    ACTIONS(1369), 2,
      aux_sym_config_token1,
      sym__space,
  [3717] = 2,
    ACTIONS(1371), 1,
      sym__key_locate_value,
    ACTIONS(1373), 1,
      sym_url,
  [3724] = 2,
    ACTIONS(1375), 1,
      sym__key_locate_value,
    ACTIONS(1377), 1,
      sym_url,
  [3731] = 1,
    ACTIONS(1379), 2,
      aux_sym_config_token1,
      sym__space,
  [3736] = 1,
    ACTIONS(1381), 2,
      aux_sym_config_token1,
      sym__space,
  [3741] = 1,
    ACTIONS(1156), 2,
      aux_sym_config_token1,
      sym__space,
  [3746] = 1,
    ACTIONS(1383), 2,
      aux_sym_config_token1,
      sym__space,
  [3751] = 1,
    ACTIONS(1385), 2,
      aux_sym_config_token1,
      sym__space,
  [3756] = 1,
    ACTIONS(1387), 2,
      aux_sym_config_token1,
      sym__space,
  [3761] = 1,
    ACTIONS(1389), 2,
      aux_sym_config_token1,
      sym__space,
  [3766] = 1,
    ACTIONS(1391), 2,
      aux_sym_config_token1,
      sym__space,
  [3771] = 1,
    ACTIONS(1393), 2,
      aux_sym_config_token1,
      sym__space,
  [3776] = 1,
    ACTIONS(1395), 2,
      aux_sym_config_token1,
      sym__space,
  [3781] = 1,
    ACTIONS(1397), 2,
      aux_sym_config_token1,
      sym__space,
  [3786] = 1,
    ACTIONS(1161), 2,
      aux_sym_config_token1,
      sym__space,
  [3791] = 1,
    ACTIONS(1399), 2,
      aux_sym_config_token1,
      sym__space,
  [3796] = 1,
    ACTIONS(1401), 2,
      aux_sym_config_token1,
      sym__space,
  [3801] = 1,
    ACTIONS(1403), 2,
      aux_sym_config_token1,
      sym__space,
  [3806] = 1,
    ACTIONS(1166), 2,
      aux_sym_config_token1,
      sym__space,
  [3811] = 1,
    ACTIONS(1405), 2,
      aux_sym_config_token1,
      sym__space,
  [3816] = 1,
    ACTIONS(1407), 2,
      aux_sym_config_token1,
      sym__space,
  [3821] = 1,
    ACTIONS(1409), 2,
      aux_sym_config_token1,
      sym__space,
  [3826] = 1,
    ACTIONS(1411), 2,
      aux_sym_config_token1,
      sym__space,
  [3831] = 1,
    ACTIONS(1413), 2,
      aux_sym_config_token1,
      sym__space,
  [3836] = 1,
    ACTIONS(1415), 2,
      aux_sym_config_token1,
      sym__space,
  [3841] = 2,
    ACTIONS(526), 1,
      aux_sym_config_token1,
    ACTIONS(530), 1,
      sym__space,
  [3848] = 1,
    ACTIONS(1197), 2,
      aux_sym_config_token1,
      sym__space,
  [3853] = 1,
    ACTIONS(1413), 2,
      aux_sym_config_token1,
      sym__space,
  [3858] = 1,
    ACTIONS(1417), 2,
      aux_sym_config_token1,
      sym__space,
  [3863] = 1,
    ACTIONS(1413), 2,
      aux_sym_config_token1,
      sym__space,
  [3868] = 1,
    ACTIONS(1197), 2,
      aux_sym_config_token1,
      sym__space,
  [3873] = 1,
    ACTIONS(1413), 2,
      aux_sym_config_token1,
      sym__space,
  [3878] = 1,
    ACTIONS(1419), 2,
      aux_sym_config_token1,
      sym__space,
  [3883] = 1,
    ACTIONS(1421), 1,
      sym__space,
  [3887] = 1,
    ACTIONS(1423), 1,
      sym__export_filter_name,
  [3891] = 1,
    ACTIONS(1425), 1,
      sym__debug_flag_value,
  [3895] = 1,
    ACTIONS(1427), 1,
      sym__compliance_value,
  [3899] = 1,
    ACTIONS(1429), 1,
      sym__verify_parameter,
  [3903] = 1,
    ACTIONS(1431), 1,
      ts_builtin_sym_end,
  [3907] = 1,
    ACTIONS(1433), 1,
      sym__compression_algo_value,
  [3911] = 1,
    ACTIONS(1435), 1,
      sym__space,
  [3915] = 1,
    ACTIONS(1437), 1,
      sym__space,
  [3919] = 1,
    ACTIONS(1439), 1,
      sym__space,
  [3923] = 1,
    ACTIONS(1441), 1,
      sym__space,
  [3927] = 1,
    ACTIONS(1443), 1,
      sym__space,
  [3931] = 1,
    ACTIONS(1445), 1,
      sym__new_key_algo,
  [3935] = 1,
    ACTIONS(1447), 1,
      sym__new_key_algo,
  [3939] = 1,
    ACTIONS(1449), 1,
      sym__space,
  [3943] = 1,
    ACTIONS(1451), 1,
      sym__compression_algo_value,
  [3947] = 1,
    ACTIONS(1453), 1,
      sym__space,
  [3951] = 1,
    ACTIONS(1455), 1,
      sym__space,
  [3955] = 1,
    ACTIONS(1457), 1,
      sym__space,
  [3959] = 1,
    ACTIONS(1459), 1,
      sym__hash_algo_value,
  [3963] = 1,
    ACTIONS(1461), 1,
      sym__space,
  [3967] = 1,
    ACTIONS(1463), 1,
      sym__space,
  [3971] = 1,
    ACTIONS(1465), 1,
      sym__space,
  [3975] = 1,
    ACTIONS(1467), 1,
      sym__hash_algo_value,
  [3979] = 1,
    ACTIONS(1469), 1,
      sym_key,
  [3983] = 1,
    ACTIONS(1471), 1,
      sym_key,
  [3987] = 1,
    ACTIONS(1473), 1,
      sym__space,
  [3991] = 1,
    ACTIONS(1475), 1,
      sym__cipher_algo_value,
  [3995] = 1,
    ACTIONS(1477), 1,
      sym__cipher_algo_value,
  [3999] = 1,
    ACTIONS(1479), 1,
      sym__list_filter_name,
  [4003] = 1,
    ACTIONS(1481), 1,
      sym__space,
  [4007] = 1,
    ACTIONS(1483), 1,
      sym__export_parameter,
  [4011] = 1,
    ACTIONS(1485), 1,
      sym__export_parameter,
  [4015] = 1,
    ACTIONS(1487), 1,
      sym__list_parameter,
  [4019] = 1,
    ACTIONS(1489), 1,
      sym__space,
  [4023] = 1,
    ACTIONS(1491), 1,
      sym__import_parameter,
  [4027] = 1,
    ACTIONS(1493), 1,
      sym__space,
  [4031] = 1,
    ACTIONS(1495), 1,
      sym__space,
  [4035] = 1,
    ACTIONS(1497), 1,
      sym__import_parameter,
  [4039] = 1,
    ACTIONS(1499), 1,
      sym_url,
  [4043] = 1,
    ACTIONS(1501), 1,
      sym__space,
  [4047] = 1,
    ACTIONS(1503), 1,
      sym__verify_parameter,
  [4051] = 1,
    ACTIONS(1505), 1,
      sym__charset_value,
  [4055] = 1,
    ACTIONS(1507), 1,
      aux_sym__compress_level_token1,
  [4059] = 1,
    ACTIONS(1509), 1,
      aux_sym__compress_level_token1,
  [4063] = 1,
    ACTIONS(1511), 1,
      aux_sym__default_cert_level_token1,
  [4067] = 1,
    ACTIONS(1513), 1,
      sym__space,
  [4071] = 1,
    ACTIONS(1515), 1,
      sym__space,
  [4075] = 1,
    ACTIONS(1517), 1,
      aux_sym__default_cert_level_token1,
  [4079] = 1,
    ACTIONS(1519), 1,
      sym_key,
  [4083] = 1,
    ACTIONS(1521), 1,
      sym__model,
  [4087] = 1,
    ACTIONS(1523), 1,
      sym__space,
  [4091] = 1,
    ACTIONS(1525), 1,
      sym__space,
  [4095] = 1,
    ACTIONS(1527), 1,
      sym_number,
  [4099] = 1,
    ACTIONS(1529), 1,
      anon_sym_EQ,
  [4103] = 1,
    ACTIONS(1531), 1,
      sym__verify_parameter,
  [4107] = 1,
    ACTIONS(1533), 1,
      sym__space,
  [4111] = 1,
    ACTIONS(1535), 1,
      sym__keyid_format_value,
  [4115] = 1,
    ACTIONS(1537), 1,
      sym__list_parameter,
  [4119] = 1,
    ACTIONS(1539), 1,
      sym__list_parameter,
  [4123] = 1,
    ACTIONS(1541), 1,
      sym__space,
  [4127] = 1,
    ACTIONS(1543), 1,
      aux_sym_config_token1,
  [4131] = 1,
    ACTIONS(1545), 1,
      anon_sym_EQ,
  [4135] = 1,
    ACTIONS(1547), 1,
      sym_url,
  [4139] = 1,
    ACTIONS(1549), 1,
      sym_number,
  [4143] = 1,
    ACTIONS(1551), 1,
      sym__tofu_policy_value,
  [4147] = 1,
    ACTIONS(1553), 1,
      sym_number,
  [4151] = 1,
    ACTIONS(1555), 1,
      sym_number,
  [4155] = 1,
    ACTIONS(1557), 1,
      sym__space,
  [4159] = 1,
    ACTIONS(1273), 1,
      aux_sym_config_token1,
  [4163] = 1,
    ACTIONS(1559), 1,
      sym__space,
  [4167] = 1,
    ACTIONS(1561), 1,
      aux_sym__group_token1,
  [4171] = 1,
    ACTIONS(1563), 1,
      sym__space,
  [4175] = 1,
    ACTIONS(1565), 1,
      sym_number,
  [4179] = 1,
    ACTIONS(1567), 1,
      sym__space,
  [4183] = 1,
    ACTIONS(1569), 1,
      sym_number,
  [4187] = 1,
    ACTIONS(1571), 1,
      sym_url,
  [4191] = 1,
    ACTIONS(1573), 1,
      sym_number,
  [4195] = 1,
    ACTIONS(1575), 1,
      sym__space,
  [4199] = 1,
    ACTIONS(1577), 1,
      sym__new_key_algo,
  [4203] = 1,
    ACTIONS(1579), 1,
      sym_expire_time,
  [4207] = 1,
    ACTIONS(1581), 1,
      sym__key_origin_value,
  [4211] = 1,
    ACTIONS(1583), 1,
      sym__space,
  [4215] = 1,
    ACTIONS(1585), 1,
      sym_expire_time,
  [4219] = 1,
    ACTIONS(1587), 1,
      sym_filter_property,
  [4223] = 1,
    ACTIONS(1589), 1,
      sym_number,
  [4227] = 1,
    ACTIONS(1591), 1,
      sym__space,
  [4231] = 1,
    ACTIONS(1593), 1,
      sym__space,
  [4235] = 1,
    ACTIONS(1595), 1,
      sym__space,
  [4239] = 1,
    ACTIONS(1597), 1,
      anon_sym_DQUOTE,
  [4243] = 1,
    ACTIONS(1599), 1,
      sym__space,
  [4247] = 1,
    ACTIONS(1601), 1,
      sym__space,
  [4251] = 1,
    ACTIONS(1597), 1,
      anon_sym_SQUOTE,
  [4255] = 1,
    ACTIONS(1603), 1,
      sym__import_parameter,
  [4259] = 1,
    ACTIONS(1605), 1,
      sym__import_filter_name,
  [4263] = 1,
    ACTIONS(1607), 1,
      sym__debug_flag_value,
  [4267] = 1,
    ACTIONS(1609), 1,
      sym__hash_algo_value,
  [4271] = 1,
    ACTIONS(1611), 1,
      sym__space,
  [4275] = 1,
    ACTIONS(1613), 1,
      sym__space,
  [4279] = 1,
    ACTIONS(1615), 1,
      sym__export_parameter,
  [4283] = 1,
    ACTIONS(1617), 1,
      sym__space,
  [4287] = 1,
    ACTIONS(1619), 1,
      sym__space,
  [4291] = 1,
    ACTIONS(1621), 1,
      sym_number,
  [4295] = 1,
    ACTIONS(1623), 1,
      sym_filter_property,
  [4299] = 1,
    ACTIONS(1625), 1,
      sym__space,
  [4303] = 1,
    ACTIONS(1627), 1,
      sym__space,
  [4307] = 1,
    ACTIONS(1629), 1,
      sym__cipher_algo_value,
  [4311] = 1,
    ACTIONS(1631), 1,
      sym__space,
  [4315] = 1,
    ACTIONS(1633), 1,
      sym__space,
  [4319] = 1,
    ACTIONS(1635), 1,
      sym__space,
  [4323] = 1,
    ACTIONS(1637), 1,
      sym__space,
  [4327] = 1,
    ACTIONS(1639), 1,
      sym__hash_algo_value,
  [4331] = 1,
    ACTIONS(1641), 1,
      sym__request_origin_value,
  [4335] = 1,
    ACTIONS(1643), 1,
      sym__space,
  [4339] = 1,
    ACTIONS(1645), 1,
      sym__space,
  [4343] = 1,
    ACTIONS(1647), 1,
      sym__space,
  [4347] = 1,
    ACTIONS(1649), 1,
      sym__pinentry_mode_value,
  [4351] = 1,
    ACTIONS(1651), 1,
      sym__space,
  [4355] = 1,
    ACTIONS(1653), 1,
      sym_filter_property,
  [4359] = 1,
    ACTIONS(1655), 1,
      sym_number,
  [4363] = 1,
    ACTIONS(1657), 1,
      sym__space,
  [4367] = 1,
    ACTIONS(1659), 1,
      sym__space,
  [4371] = 1,
    ACTIONS(1661), 1,
      sym__space,
  [4375] = 1,
    ACTIONS(1663), 1,
      sym__space,
  [4379] = 1,
    ACTIONS(1665), 1,
      sym__space,
  [4383] = 1,
    ACTIONS(1667), 1,
      sym__space,
  [4387] = 1,
    ACTIONS(1669), 1,
      sym__compression_algo_value,
  [4391] = 1,
    ACTIONS(1671), 1,
      sym_number,
  [4395] = 1,
    ACTIONS(1673), 1,
      sym__space,
  [4399] = 1,
    ACTIONS(1675), 1,
      sym__space,
  [4403] = 1,
    ACTIONS(1677), 1,
      sym__space,
  [4407] = 1,
    ACTIONS(1679), 1,
      sym__space,
  [4411] = 1,
    ACTIONS(1681), 1,
      sym__pubkey_algo_value,
  [4415] = 1,
    ACTIONS(1683), 1,
      sym__space,
  [4419] = 1,
    ACTIONS(1685), 1,
      sym__cipher_algo_value,
  [4423] = 1,
    ACTIONS(1687), 1,
      sym__space,
  [4427] = 1,
    ACTIONS(1689), 1,
      sym__space,
  [4431] = 1,
    ACTIONS(1691), 1,
      sym__space,
  [4435] = 1,
    ACTIONS(1693), 1,
      sym__space,
  [4439] = 1,
    ACTIONS(1695), 1,
      sym__cipher_algo_value,
  [4443] = 1,
    ACTIONS(1697), 1,
      sym__space,
  [4447] = 1,
    ACTIONS(1699), 1,
      sym__space,
  [4451] = 1,
    ACTIONS(1701), 1,
      sym__space,
  [4455] = 1,
    ACTIONS(1703), 1,
      sym__space,
  [4459] = 1,
    ACTIONS(1705), 1,
      sym__space,
  [4463] = 1,
    ACTIONS(1707), 1,
      sym__hash_algo_value,
  [4467] = 1,
    ACTIONS(1709), 1,
      sym__space,
  [4471] = 1,
    ACTIONS(1711), 1,
      sym__space,
  [4475] = 1,
    ACTIONS(1713), 1,
      sym__space,
  [4479] = 1,
    ACTIONS(1715), 1,
      sym__space,
  [4483] = 1,
    ACTIONS(1717), 1,
      sym__space,
  [4487] = 1,
    ACTIONS(1719), 1,
      sym__space,
  [4491] = 1,
    ACTIONS(1721), 1,
      sym__space,
  [4495] = 1,
    ACTIONS(1723), 1,
      sym__space,
  [4499] = 1,
    ACTIONS(1725), 1,
      sym__space,
  [4503] = 1,
    ACTIONS(1727), 1,
      sym__space,
  [4507] = 1,
    ACTIONS(1729), 1,
      sym__space,
  [4511] = 1,
    ACTIONS(1731), 1,
      sym__space,
  [4515] = 1,
    ACTIONS(1733), 1,
      sym__compression_algo_value,
  [4519] = 1,
    ACTIONS(1735), 1,
      sym__space,
  [4523] = 1,
    ACTIONS(1737), 1,
      sym__hash_algo_value,
  [4527] = 1,
    ACTIONS(1739), 1,
      sym__space,
  [4531] = 1,
    ACTIONS(1741), 1,
      sym__space,
  [4535] = 1,
    ACTIONS(1743), 1,
      sym__cipher_algo_value,
  [4539] = 1,
    ACTIONS(1745), 1,
      sym__space,
  [4543] = 1,
    ACTIONS(1747), 1,
      sym_number,
  [4547] = 1,
    ACTIONS(1749), 1,
      sym__space,
  [4551] = 1,
    ACTIONS(1751), 1,
      sym_number,
  [4555] = 1,
    ACTIONS(1753), 1,
      sym__space,
  [4559] = 1,
    ACTIONS(1755), 1,
      sym__space,
  [4563] = 1,
    ACTIONS(1757), 1,
      sym__hash_algo_value,
  [4567] = 1,
    ACTIONS(1759), 1,
      aux_sym__s2k_mode_token1,
  [4571] = 1,
    ACTIONS(1761), 1,
      sym_number,
  [4575] = 1,
    ACTIONS(1763), 1,
      sym_number,
  [4579] = 1,
    ACTIONS(1765), 1,
      anon_sym_EQ,
  [4583] = 1,
    ACTIONS(1767), 1,
      anon_sym_EQ,
  [4587] = 1,
    ACTIONS(1769), 1,
      sym__space,
  [4591] = 1,
    ACTIONS(1771), 1,
      sym__space,
  [4595] = 1,
    ACTIONS(1773), 1,
      sym__debug_level_value,
  [4599] = 1,
    ACTIONS(1775), 1,
      sym_number,
  [4603] = 1,
    ACTIONS(1777), 1,
      sym__space,
  [4607] = 1,
    ACTIONS(1779), 1,
      sym__space,
  [4611] = 1,
    ACTIONS(1781), 1,
      sym_filter_property,
  [4615] = 1,
    ACTIONS(1783), 1,
      sym__space,
  [4619] = 1,
    ACTIONS(1785), 1,
      sym__space,
  [4623] = 1,
    ACTIONS(1787), 1,
      sym__space,
  [4627] = 1,
    ACTIONS(1789), 1,
      sym__space,
  [4631] = 1,
    ACTIONS(1791), 1,
      sym_filter_property,
  [4635] = 1,
    ACTIONS(1793), 1,
      sym_filter_property,
  [4639] = 1,
    ACTIONS(1795), 1,
      sym__space,
  [4643] = 1,
    ACTIONS(1797), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 17,
  [SMALL_STATE(10)] = 34,
  [SMALL_STATE(11)] = 51,
  [SMALL_STATE(12)] = 76,
  [SMALL_STATE(13)] = 93,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 134,
  [SMALL_STATE(16)] = 156,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 208,
  [SMALL_STATE(20)] = 230,
  [SMALL_STATE(21)] = 244,
  [SMALL_STATE(22)] = 266,
  [SMALL_STATE(23)] = 282,
  [SMALL_STATE(24)] = 304,
  [SMALL_STATE(25)] = 318,
  [SMALL_STATE(26)] = 340,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 392,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 428,
  [SMALL_STATE(32)] = 444,
  [SMALL_STATE(33)] = 458,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 496,
  [SMALL_STATE(36)] = 510,
  [SMALL_STATE(37)] = 526,
  [SMALL_STATE(38)] = 543,
  [SMALL_STATE(39)] = 560,
  [SMALL_STATE(40)] = 577,
  [SMALL_STATE(41)] = 594,
  [SMALL_STATE(42)] = 611,
  [SMALL_STATE(43)] = 628,
  [SMALL_STATE(44)] = 639,
  [SMALL_STATE(45)] = 652,
  [SMALL_STATE(46)] = 663,
  [SMALL_STATE(47)] = 676,
  [SMALL_STATE(48)] = 687,
  [SMALL_STATE(49)] = 700,
  [SMALL_STATE(50)] = 711,
  [SMALL_STATE(51)] = 724,
  [SMALL_STATE(52)] = 735,
  [SMALL_STATE(53)] = 752,
  [SMALL_STATE(54)] = 763,
  [SMALL_STATE(55)] = 776,
  [SMALL_STATE(56)] = 793,
  [SMALL_STATE(57)] = 804,
  [SMALL_STATE(58)] = 817,
  [SMALL_STATE(59)] = 828,
  [SMALL_STATE(60)] = 845,
  [SMALL_STATE(61)] = 858,
  [SMALL_STATE(62)] = 871,
  [SMALL_STATE(63)] = 888,
  [SMALL_STATE(64)] = 907,
  [SMALL_STATE(65)] = 924,
  [SMALL_STATE(66)] = 943,
  [SMALL_STATE(67)] = 960,
  [SMALL_STATE(68)] = 979,
  [SMALL_STATE(69)] = 996,
  [SMALL_STATE(70)] = 1013,
  [SMALL_STATE(71)] = 1032,
  [SMALL_STATE(72)] = 1049,
  [SMALL_STATE(73)] = 1063,
  [SMALL_STATE(74)] = 1079,
  [SMALL_STATE(75)] = 1095,
  [SMALL_STATE(76)] = 1111,
  [SMALL_STATE(77)] = 1127,
  [SMALL_STATE(78)] = 1143,
  [SMALL_STATE(79)] = 1159,
  [SMALL_STATE(80)] = 1175,
  [SMALL_STATE(81)] = 1191,
  [SMALL_STATE(82)] = 1207,
  [SMALL_STATE(83)] = 1223,
  [SMALL_STATE(84)] = 1239,
  [SMALL_STATE(85)] = 1255,
  [SMALL_STATE(86)] = 1271,
  [SMALL_STATE(87)] = 1287,
  [SMALL_STATE(88)] = 1303,
  [SMALL_STATE(89)] = 1319,
  [SMALL_STATE(90)] = 1335,
  [SMALL_STATE(91)] = 1351,
  [SMALL_STATE(92)] = 1367,
  [SMALL_STATE(93)] = 1379,
  [SMALL_STATE(94)] = 1391,
  [SMALL_STATE(95)] = 1407,
  [SMALL_STATE(96)] = 1423,
  [SMALL_STATE(97)] = 1437,
  [SMALL_STATE(98)] = 1453,
  [SMALL_STATE(99)] = 1469,
  [SMALL_STATE(100)] = 1485,
  [SMALL_STATE(101)] = 1501,
  [SMALL_STATE(102)] = 1513,
  [SMALL_STATE(103)] = 1529,
  [SMALL_STATE(104)] = 1545,
  [SMALL_STATE(105)] = 1561,
  [SMALL_STATE(106)] = 1574,
  [SMALL_STATE(107)] = 1587,
  [SMALL_STATE(108)] = 1600,
  [SMALL_STATE(109)] = 1611,
  [SMALL_STATE(110)] = 1622,
  [SMALL_STATE(111)] = 1633,
  [SMALL_STATE(112)] = 1644,
  [SMALL_STATE(113)] = 1655,
  [SMALL_STATE(114)] = 1666,
  [SMALL_STATE(115)] = 1679,
  [SMALL_STATE(116)] = 1690,
  [SMALL_STATE(117)] = 1703,
  [SMALL_STATE(118)] = 1716,
  [SMALL_STATE(119)] = 1729,
  [SMALL_STATE(120)] = 1742,
  [SMALL_STATE(121)] = 1755,
  [SMALL_STATE(122)] = 1768,
  [SMALL_STATE(123)] = 1781,
  [SMALL_STATE(124)] = 1794,
  [SMALL_STATE(125)] = 1807,
  [SMALL_STATE(126)] = 1816,
  [SMALL_STATE(127)] = 1829,
  [SMALL_STATE(128)] = 1838,
  [SMALL_STATE(129)] = 1849,
  [SMALL_STATE(130)] = 1862,
  [SMALL_STATE(131)] = 1873,
  [SMALL_STATE(132)] = 1884,
  [SMALL_STATE(133)] = 1895,
  [SMALL_STATE(134)] = 1908,
  [SMALL_STATE(135)] = 1921,
  [SMALL_STATE(136)] = 1934,
  [SMALL_STATE(137)] = 1945,
  [SMALL_STATE(138)] = 1958,
  [SMALL_STATE(139)] = 1971,
  [SMALL_STATE(140)] = 1984,
  [SMALL_STATE(141)] = 1997,
  [SMALL_STATE(142)] = 2010,
  [SMALL_STATE(143)] = 2023,
  [SMALL_STATE(144)] = 2036,
  [SMALL_STATE(145)] = 2049,
  [SMALL_STATE(146)] = 2062,
  [SMALL_STATE(147)] = 2073,
  [SMALL_STATE(148)] = 2086,
  [SMALL_STATE(149)] = 2099,
  [SMALL_STATE(150)] = 2112,
  [SMALL_STATE(151)] = 2125,
  [SMALL_STATE(152)] = 2138,
  [SMALL_STATE(153)] = 2151,
  [SMALL_STATE(154)] = 2164,
  [SMALL_STATE(155)] = 2177,
  [SMALL_STATE(156)] = 2190,
  [SMALL_STATE(157)] = 2203,
  [SMALL_STATE(158)] = 2214,
  [SMALL_STATE(159)] = 2227,
  [SMALL_STATE(160)] = 2238,
  [SMALL_STATE(161)] = 2251,
  [SMALL_STATE(162)] = 2262,
  [SMALL_STATE(163)] = 2273,
  [SMALL_STATE(164)] = 2284,
  [SMALL_STATE(165)] = 2295,
  [SMALL_STATE(166)] = 2306,
  [SMALL_STATE(167)] = 2319,
  [SMALL_STATE(168)] = 2332,
  [SMALL_STATE(169)] = 2345,
  [SMALL_STATE(170)] = 2358,
  [SMALL_STATE(171)] = 2371,
  [SMALL_STATE(172)] = 2384,
  [SMALL_STATE(173)] = 2393,
  [SMALL_STATE(174)] = 2406,
  [SMALL_STATE(175)] = 2419,
  [SMALL_STATE(176)] = 2430,
  [SMALL_STATE(177)] = 2443,
  [SMALL_STATE(178)] = 2456,
  [SMALL_STATE(179)] = 2467,
  [SMALL_STATE(180)] = 2480,
  [SMALL_STATE(181)] = 2493,
  [SMALL_STATE(182)] = 2506,
  [SMALL_STATE(183)] = 2519,
  [SMALL_STATE(184)] = 2532,
  [SMALL_STATE(185)] = 2545,
  [SMALL_STATE(186)] = 2558,
  [SMALL_STATE(187)] = 2571,
  [SMALL_STATE(188)] = 2584,
  [SMALL_STATE(189)] = 2597,
  [SMALL_STATE(190)] = 2610,
  [SMALL_STATE(191)] = 2623,
  [SMALL_STATE(192)] = 2632,
  [SMALL_STATE(193)] = 2645,
  [SMALL_STATE(194)] = 2655,
  [SMALL_STATE(195)] = 2663,
  [SMALL_STATE(196)] = 2673,
  [SMALL_STATE(197)] = 2683,
  [SMALL_STATE(198)] = 2693,
  [SMALL_STATE(199)] = 2703,
  [SMALL_STATE(200)] = 2713,
  [SMALL_STATE(201)] = 2723,
  [SMALL_STATE(202)] = 2733,
  [SMALL_STATE(203)] = 2743,
  [SMALL_STATE(204)] = 2753,
  [SMALL_STATE(205)] = 2763,
  [SMALL_STATE(206)] = 2773,
  [SMALL_STATE(207)] = 2783,
  [SMALL_STATE(208)] = 2793,
  [SMALL_STATE(209)] = 2803,
  [SMALL_STATE(210)] = 2813,
  [SMALL_STATE(211)] = 2823,
  [SMALL_STATE(212)] = 2831,
  [SMALL_STATE(213)] = 2841,
  [SMALL_STATE(214)] = 2851,
  [SMALL_STATE(215)] = 2861,
  [SMALL_STATE(216)] = 2867,
  [SMALL_STATE(217)] = 2877,
  [SMALL_STATE(218)] = 2883,
  [SMALL_STATE(219)] = 2893,
  [SMALL_STATE(220)] = 2899,
  [SMALL_STATE(221)] = 2909,
  [SMALL_STATE(222)] = 2915,
  [SMALL_STATE(223)] = 2925,
  [SMALL_STATE(224)] = 2931,
  [SMALL_STATE(225)] = 2941,
  [SMALL_STATE(226)] = 2951,
  [SMALL_STATE(227)] = 2961,
  [SMALL_STATE(228)] = 2967,
  [SMALL_STATE(229)] = 2977,
  [SMALL_STATE(230)] = 2983,
  [SMALL_STATE(231)] = 2989,
  [SMALL_STATE(232)] = 2999,
  [SMALL_STATE(233)] = 3005,
  [SMALL_STATE(234)] = 3015,
  [SMALL_STATE(235)] = 3021,
  [SMALL_STATE(236)] = 3031,
  [SMALL_STATE(237)] = 3037,
  [SMALL_STATE(238)] = 3047,
  [SMALL_STATE(239)] = 3057,
  [SMALL_STATE(240)] = 3067,
  [SMALL_STATE(241)] = 3077,
  [SMALL_STATE(242)] = 3087,
  [SMALL_STATE(243)] = 3097,
  [SMALL_STATE(244)] = 3107,
  [SMALL_STATE(245)] = 3117,
  [SMALL_STATE(246)] = 3127,
  [SMALL_STATE(247)] = 3137,
  [SMALL_STATE(248)] = 3147,
  [SMALL_STATE(249)] = 3155,
  [SMALL_STATE(250)] = 3163,
  [SMALL_STATE(251)] = 3171,
  [SMALL_STATE(252)] = 3181,
  [SMALL_STATE(253)] = 3191,
  [SMALL_STATE(254)] = 3201,
  [SMALL_STATE(255)] = 3207,
  [SMALL_STATE(256)] = 3215,
  [SMALL_STATE(257)] = 3223,
  [SMALL_STATE(258)] = 3228,
  [SMALL_STATE(259)] = 3233,
  [SMALL_STATE(260)] = 3240,
  [SMALL_STATE(261)] = 3245,
  [SMALL_STATE(262)] = 3250,
  [SMALL_STATE(263)] = 3255,
  [SMALL_STATE(264)] = 3260,
  [SMALL_STATE(265)] = 3265,
  [SMALL_STATE(266)] = 3270,
  [SMALL_STATE(267)] = 3275,
  [SMALL_STATE(268)] = 3280,
  [SMALL_STATE(269)] = 3287,
  [SMALL_STATE(270)] = 3294,
  [SMALL_STATE(271)] = 3301,
  [SMALL_STATE(272)] = 3308,
  [SMALL_STATE(273)] = 3315,
  [SMALL_STATE(274)] = 3322,
  [SMALL_STATE(275)] = 3329,
  [SMALL_STATE(276)] = 3334,
  [SMALL_STATE(277)] = 3339,
  [SMALL_STATE(278)] = 3344,
  [SMALL_STATE(279)] = 3349,
  [SMALL_STATE(280)] = 3354,
  [SMALL_STATE(281)] = 3359,
  [SMALL_STATE(282)] = 3364,
  [SMALL_STATE(283)] = 3369,
  [SMALL_STATE(284)] = 3376,
  [SMALL_STATE(285)] = 3381,
  [SMALL_STATE(286)] = 3386,
  [SMALL_STATE(287)] = 3391,
  [SMALL_STATE(288)] = 3396,
  [SMALL_STATE(289)] = 3401,
  [SMALL_STATE(290)] = 3406,
  [SMALL_STATE(291)] = 3411,
  [SMALL_STATE(292)] = 3418,
  [SMALL_STATE(293)] = 3423,
  [SMALL_STATE(294)] = 3428,
  [SMALL_STATE(295)] = 3433,
  [SMALL_STATE(296)] = 3438,
  [SMALL_STATE(297)] = 3443,
  [SMALL_STATE(298)] = 3448,
  [SMALL_STATE(299)] = 3453,
  [SMALL_STATE(300)] = 3458,
  [SMALL_STATE(301)] = 3463,
  [SMALL_STATE(302)] = 3468,
  [SMALL_STATE(303)] = 3475,
  [SMALL_STATE(304)] = 3480,
  [SMALL_STATE(305)] = 3485,
  [SMALL_STATE(306)] = 3490,
  [SMALL_STATE(307)] = 3495,
  [SMALL_STATE(308)] = 3500,
  [SMALL_STATE(309)] = 3505,
  [SMALL_STATE(310)] = 3510,
  [SMALL_STATE(311)] = 3515,
  [SMALL_STATE(312)] = 3520,
  [SMALL_STATE(313)] = 3525,
  [SMALL_STATE(314)] = 3530,
  [SMALL_STATE(315)] = 3535,
  [SMALL_STATE(316)] = 3540,
  [SMALL_STATE(317)] = 3545,
  [SMALL_STATE(318)] = 3550,
  [SMALL_STATE(319)] = 3555,
  [SMALL_STATE(320)] = 3560,
  [SMALL_STATE(321)] = 3565,
  [SMALL_STATE(322)] = 3570,
  [SMALL_STATE(323)] = 3575,
  [SMALL_STATE(324)] = 3580,
  [SMALL_STATE(325)] = 3585,
  [SMALL_STATE(326)] = 3592,
  [SMALL_STATE(327)] = 3597,
  [SMALL_STATE(328)] = 3602,
  [SMALL_STATE(329)] = 3607,
  [SMALL_STATE(330)] = 3612,
  [SMALL_STATE(331)] = 3617,
  [SMALL_STATE(332)] = 3622,
  [SMALL_STATE(333)] = 3627,
  [SMALL_STATE(334)] = 3632,
  [SMALL_STATE(335)] = 3637,
  [SMALL_STATE(336)] = 3642,
  [SMALL_STATE(337)] = 3647,
  [SMALL_STATE(338)] = 3652,
  [SMALL_STATE(339)] = 3657,
  [SMALL_STATE(340)] = 3662,
  [SMALL_STATE(341)] = 3667,
  [SMALL_STATE(342)] = 3672,
  [SMALL_STATE(343)] = 3677,
  [SMALL_STATE(344)] = 3682,
  [SMALL_STATE(345)] = 3687,
  [SMALL_STATE(346)] = 3692,
  [SMALL_STATE(347)] = 3697,
  [SMALL_STATE(348)] = 3702,
  [SMALL_STATE(349)] = 3707,
  [SMALL_STATE(350)] = 3712,
  [SMALL_STATE(351)] = 3717,
  [SMALL_STATE(352)] = 3724,
  [SMALL_STATE(353)] = 3731,
  [SMALL_STATE(354)] = 3736,
  [SMALL_STATE(355)] = 3741,
  [SMALL_STATE(356)] = 3746,
  [SMALL_STATE(357)] = 3751,
  [SMALL_STATE(358)] = 3756,
  [SMALL_STATE(359)] = 3761,
  [SMALL_STATE(360)] = 3766,
  [SMALL_STATE(361)] = 3771,
  [SMALL_STATE(362)] = 3776,
  [SMALL_STATE(363)] = 3781,
  [SMALL_STATE(364)] = 3786,
  [SMALL_STATE(365)] = 3791,
  [SMALL_STATE(366)] = 3796,
  [SMALL_STATE(367)] = 3801,
  [SMALL_STATE(368)] = 3806,
  [SMALL_STATE(369)] = 3811,
  [SMALL_STATE(370)] = 3816,
  [SMALL_STATE(371)] = 3821,
  [SMALL_STATE(372)] = 3826,
  [SMALL_STATE(373)] = 3831,
  [SMALL_STATE(374)] = 3836,
  [SMALL_STATE(375)] = 3841,
  [SMALL_STATE(376)] = 3848,
  [SMALL_STATE(377)] = 3853,
  [SMALL_STATE(378)] = 3858,
  [SMALL_STATE(379)] = 3863,
  [SMALL_STATE(380)] = 3868,
  [SMALL_STATE(381)] = 3873,
  [SMALL_STATE(382)] = 3878,
  [SMALL_STATE(383)] = 3883,
  [SMALL_STATE(384)] = 3887,
  [SMALL_STATE(385)] = 3891,
  [SMALL_STATE(386)] = 3895,
  [SMALL_STATE(387)] = 3899,
  [SMALL_STATE(388)] = 3903,
  [SMALL_STATE(389)] = 3907,
  [SMALL_STATE(390)] = 3911,
  [SMALL_STATE(391)] = 3915,
  [SMALL_STATE(392)] = 3919,
  [SMALL_STATE(393)] = 3923,
  [SMALL_STATE(394)] = 3927,
  [SMALL_STATE(395)] = 3931,
  [SMALL_STATE(396)] = 3935,
  [SMALL_STATE(397)] = 3939,
  [SMALL_STATE(398)] = 3943,
  [SMALL_STATE(399)] = 3947,
  [SMALL_STATE(400)] = 3951,
  [SMALL_STATE(401)] = 3955,
  [SMALL_STATE(402)] = 3959,
  [SMALL_STATE(403)] = 3963,
  [SMALL_STATE(404)] = 3967,
  [SMALL_STATE(405)] = 3971,
  [SMALL_STATE(406)] = 3975,
  [SMALL_STATE(407)] = 3979,
  [SMALL_STATE(408)] = 3983,
  [SMALL_STATE(409)] = 3987,
  [SMALL_STATE(410)] = 3991,
  [SMALL_STATE(411)] = 3995,
  [SMALL_STATE(412)] = 3999,
  [SMALL_STATE(413)] = 4003,
  [SMALL_STATE(414)] = 4007,
  [SMALL_STATE(415)] = 4011,
  [SMALL_STATE(416)] = 4015,
  [SMALL_STATE(417)] = 4019,
  [SMALL_STATE(418)] = 4023,
  [SMALL_STATE(419)] = 4027,
  [SMALL_STATE(420)] = 4031,
  [SMALL_STATE(421)] = 4035,
  [SMALL_STATE(422)] = 4039,
  [SMALL_STATE(423)] = 4043,
  [SMALL_STATE(424)] = 4047,
  [SMALL_STATE(425)] = 4051,
  [SMALL_STATE(426)] = 4055,
  [SMALL_STATE(427)] = 4059,
  [SMALL_STATE(428)] = 4063,
  [SMALL_STATE(429)] = 4067,
  [SMALL_STATE(430)] = 4071,
  [SMALL_STATE(431)] = 4075,
  [SMALL_STATE(432)] = 4079,
  [SMALL_STATE(433)] = 4083,
  [SMALL_STATE(434)] = 4087,
  [SMALL_STATE(435)] = 4091,
  [SMALL_STATE(436)] = 4095,
  [SMALL_STATE(437)] = 4099,
  [SMALL_STATE(438)] = 4103,
  [SMALL_STATE(439)] = 4107,
  [SMALL_STATE(440)] = 4111,
  [SMALL_STATE(441)] = 4115,
  [SMALL_STATE(442)] = 4119,
  [SMALL_STATE(443)] = 4123,
  [SMALL_STATE(444)] = 4127,
  [SMALL_STATE(445)] = 4131,
  [SMALL_STATE(446)] = 4135,
  [SMALL_STATE(447)] = 4139,
  [SMALL_STATE(448)] = 4143,
  [SMALL_STATE(449)] = 4147,
  [SMALL_STATE(450)] = 4151,
  [SMALL_STATE(451)] = 4155,
  [SMALL_STATE(452)] = 4159,
  [SMALL_STATE(453)] = 4163,
  [SMALL_STATE(454)] = 4167,
  [SMALL_STATE(455)] = 4171,
  [SMALL_STATE(456)] = 4175,
  [SMALL_STATE(457)] = 4179,
  [SMALL_STATE(458)] = 4183,
  [SMALL_STATE(459)] = 4187,
  [SMALL_STATE(460)] = 4191,
  [SMALL_STATE(461)] = 4195,
  [SMALL_STATE(462)] = 4199,
  [SMALL_STATE(463)] = 4203,
  [SMALL_STATE(464)] = 4207,
  [SMALL_STATE(465)] = 4211,
  [SMALL_STATE(466)] = 4215,
  [SMALL_STATE(467)] = 4219,
  [SMALL_STATE(468)] = 4223,
  [SMALL_STATE(469)] = 4227,
  [SMALL_STATE(470)] = 4231,
  [SMALL_STATE(471)] = 4235,
  [SMALL_STATE(472)] = 4239,
  [SMALL_STATE(473)] = 4243,
  [SMALL_STATE(474)] = 4247,
  [SMALL_STATE(475)] = 4251,
  [SMALL_STATE(476)] = 4255,
  [SMALL_STATE(477)] = 4259,
  [SMALL_STATE(478)] = 4263,
  [SMALL_STATE(479)] = 4267,
  [SMALL_STATE(480)] = 4271,
  [SMALL_STATE(481)] = 4275,
  [SMALL_STATE(482)] = 4279,
  [SMALL_STATE(483)] = 4283,
  [SMALL_STATE(484)] = 4287,
  [SMALL_STATE(485)] = 4291,
  [SMALL_STATE(486)] = 4295,
  [SMALL_STATE(487)] = 4299,
  [SMALL_STATE(488)] = 4303,
  [SMALL_STATE(489)] = 4307,
  [SMALL_STATE(490)] = 4311,
  [SMALL_STATE(491)] = 4315,
  [SMALL_STATE(492)] = 4319,
  [SMALL_STATE(493)] = 4323,
  [SMALL_STATE(494)] = 4327,
  [SMALL_STATE(495)] = 4331,
  [SMALL_STATE(496)] = 4335,
  [SMALL_STATE(497)] = 4339,
  [SMALL_STATE(498)] = 4343,
  [SMALL_STATE(499)] = 4347,
  [SMALL_STATE(500)] = 4351,
  [SMALL_STATE(501)] = 4355,
  [SMALL_STATE(502)] = 4359,
  [SMALL_STATE(503)] = 4363,
  [SMALL_STATE(504)] = 4367,
  [SMALL_STATE(505)] = 4371,
  [SMALL_STATE(506)] = 4375,
  [SMALL_STATE(507)] = 4379,
  [SMALL_STATE(508)] = 4383,
  [SMALL_STATE(509)] = 4387,
  [SMALL_STATE(510)] = 4391,
  [SMALL_STATE(511)] = 4395,
  [SMALL_STATE(512)] = 4399,
  [SMALL_STATE(513)] = 4403,
  [SMALL_STATE(514)] = 4407,
  [SMALL_STATE(515)] = 4411,
  [SMALL_STATE(516)] = 4415,
  [SMALL_STATE(517)] = 4419,
  [SMALL_STATE(518)] = 4423,
  [SMALL_STATE(519)] = 4427,
  [SMALL_STATE(520)] = 4431,
  [SMALL_STATE(521)] = 4435,
  [SMALL_STATE(522)] = 4439,
  [SMALL_STATE(523)] = 4443,
  [SMALL_STATE(524)] = 4447,
  [SMALL_STATE(525)] = 4451,
  [SMALL_STATE(526)] = 4455,
  [SMALL_STATE(527)] = 4459,
  [SMALL_STATE(528)] = 4463,
  [SMALL_STATE(529)] = 4467,
  [SMALL_STATE(530)] = 4471,
  [SMALL_STATE(531)] = 4475,
  [SMALL_STATE(532)] = 4479,
  [SMALL_STATE(533)] = 4483,
  [SMALL_STATE(534)] = 4487,
  [SMALL_STATE(535)] = 4491,
  [SMALL_STATE(536)] = 4495,
  [SMALL_STATE(537)] = 4499,
  [SMALL_STATE(538)] = 4503,
  [SMALL_STATE(539)] = 4507,
  [SMALL_STATE(540)] = 4511,
  [SMALL_STATE(541)] = 4515,
  [SMALL_STATE(542)] = 4519,
  [SMALL_STATE(543)] = 4523,
  [SMALL_STATE(544)] = 4527,
  [SMALL_STATE(545)] = 4531,
  [SMALL_STATE(546)] = 4535,
  [SMALL_STATE(547)] = 4539,
  [SMALL_STATE(548)] = 4543,
  [SMALL_STATE(549)] = 4547,
  [SMALL_STATE(550)] = 4551,
  [SMALL_STATE(551)] = 4555,
  [SMALL_STATE(552)] = 4559,
  [SMALL_STATE(553)] = 4563,
  [SMALL_STATE(554)] = 4567,
  [SMALL_STATE(555)] = 4571,
  [SMALL_STATE(556)] = 4575,
  [SMALL_STATE(557)] = 4579,
  [SMALL_STATE(558)] = 4583,
  [SMALL_STATE(559)] = 4587,
  [SMALL_STATE(560)] = 4591,
  [SMALL_STATE(561)] = 4595,
  [SMALL_STATE(562)] = 4599,
  [SMALL_STATE(563)] = 4603,
  [SMALL_STATE(564)] = 4607,
  [SMALL_STATE(565)] = 4611,
  [SMALL_STATE(566)] = 4615,
  [SMALL_STATE(567)] = 4619,
  [SMALL_STATE(568)] = 4623,
  [SMALL_STATE(569)] = 4627,
  [SMALL_STATE(570)] = 4631,
  [SMALL_STATE(571)] = 4635,
  [SMALL_STATE(572)] = 4639,
  [SMALL_STATE(573)] = 4643,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(529),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(304),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(304),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(573),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(572),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(569),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(568),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(567),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(566),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(564),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(563),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(560),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(559),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(552),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(551),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(549),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(547),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(545),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(544),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(542),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(540),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(539),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(538),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(537),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(536),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(535),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(534),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(533),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(532),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(531),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(530),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(529),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(527),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(526),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(525),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(524),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(523),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(521),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(520),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(519),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(518),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(516),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(514),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(513),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(512),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(511),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(508),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(507),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(506),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(505),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(504),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(503),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(500),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(498),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(497),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(496),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(493),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(492),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(491),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(490),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(488),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(487),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(484),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(483),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(481),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(480),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(474),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(473),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(471),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(469),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(465),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(461),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(457),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(455),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(453),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(451),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(434),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(443),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(439),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(435),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(430),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(429),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(423),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(420),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(419),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(417),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(383),
  [474] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(413),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(409),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(405),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(404),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(403),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(401),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(400),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(399),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(397),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(394),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(393),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(392),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(391),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(390),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(375),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(4),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 3),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 4),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_value, 1),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_value, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filter_value_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2),
  [552] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2), SHIFT_REPEAT(9),
  [555] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filter_value_repeat1, 2), SHIFT_REPEAT(10),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(35),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3), SHIFT_REPEAT(29),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(467),
  [625] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(213),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(470),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(182),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5), SHIFT_REPEAT(16),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(571),
  [640] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(196),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 2), SHIFT_REPEAT(116),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression_inner, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8), SHIFT_REPEAT(24),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7), SHIFT_REPEAT(28),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4), SHIFT_REPEAT(20),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6), SHIFT_REPEAT(32),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 4, .production_id = 6),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(127),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(127),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [702] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(172),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(172),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 2),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(191),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(191),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 4, .production_id = 6),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 11),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 11),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 10), SHIFT_REPEAT(43),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 9), SHIFT_REPEAT(45),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 8), SHIFT_REPEAT(47),
  [741] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 7), SHIFT_REPEAT(49),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 3),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 6), SHIFT_REPEAT(51),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 4, .production_id = 6),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 5), SHIFT_REPEAT(53),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 4, .production_id = 6),
  [756] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 4), SHIFT_REPEAT(56),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat2, 3), SHIFT_REPEAT(58),
  [762] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_keyserver_url, 3, .production_id = 5),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_policy_url, 3, .production_id = 5),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(125),
  [775] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(125),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_policy_url, 3, .production_id = 5),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_policy_url, 3, .production_id = 5),
  [782] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [786] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, .production_id = 4),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, .production_id = 4),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, .production_id = 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [838] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 3),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [902] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(194),
  [905] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__notation, 2), SHIFT_REPEAT(194),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug, 4),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, .production_id = 4),
  [912] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, .production_id = 4),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, .production_id = 4),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 1),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 1),
  [942] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 1),
  [944] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 1),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_new_key_algo, 4),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_list, 4),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(442),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(438),
  [966] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [970] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(249),
  [973] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(249),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(248),
  [981] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(248),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2), SHIFT_REPEAT(351),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2),
  [991] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(421),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2),
  [996] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(415),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(411),
  [1004] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2),
  [1006] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(406),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2),
  [1011] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(398),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2),
  [1016] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat1, 2), SHIFT_REPEAT(478),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 1),
  [1025] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 1),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2),
  [1029] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat1, 2), SHIFT_REPEAT(395),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2),
  [1034] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat1, 2), SHIFT_REPEAT(93),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2),
  [1047] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2),
  [1049] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__filter_expression_inner_repeat1, 2), SHIFT_REPEAT(470),
  [1052] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [1054] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__notation, 1),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__notation, 1),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2),
  [1068] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat2, 2), SHIFT_REPEAT(418),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2),
  [1117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_preference_list_repeat2, 2), SHIFT_REPEAT(92),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2),
  [1122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__default_new_key_algo_repeat2, 2), SHIFT_REPEAT(396),
  [1125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2),
  [1127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__debug_repeat2, 2), SHIFT_REPEAT(385),
  [1130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2),
  [1132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2), SHIFT_REPEAT(389),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, .production_id = 10),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2),
  [1139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2), SHIFT_REPEAT(402),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, .production_id = 10),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2), SHIFT_REPEAT(410),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, .production_id = 10),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2),
  [1153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat2, 2), SHIFT_REPEAT(414),
  [1156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2),
  [1158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat2, 2), SHIFT_REPEAT(352),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2),
  [1163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat2, 2), SHIFT_REPEAT(387),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2),
  [1168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat2, 2), SHIFT_REPEAT(441),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 1),
  [1177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 1),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [1181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_preference_value, 1),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 3),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__faked_system_time, 4),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3),
  [1209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, .production_id = 4),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, .production_id = 4),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_level, 3),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__debug_set_iobuf_size, 3),
  [1247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_fd, 3),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__status_file, 3),
  [1251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_fd, 3),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logger_file, 3),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__filter_expression, 3),
  [1259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 6, .production_id = 12),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 6, .production_id = 12),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 6, .production_id = 12),
  [1265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__known_notation, 3),
  [1267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_notation, 5, .production_id = 11),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_notation, 5, .production_id = 11),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_notation, 5, .production_id = 11),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3),
  [1279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__set_filename, 3),
  [1283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cipher_algo, 3, .production_id = 4),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__digest_algo, 3, .production_id = 4),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_algo, 3, .production_id = 4),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cert_digest_algo, 3, .production_id = 4),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_cipher_algo, 3, .production_id = 4),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__disable_pubkey_algo, 3, .production_id = 4),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_repeat, 3),
  [1297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_fd, 3),
  [1299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase_file, 3),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__passphrase, 3),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pinentry_mode, 3),
  [1305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__request_origin, 3),
  [1307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_fd, 3),
  [1309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command_file, 3),
  [1311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__weak_digest, 3, .production_id = 4),
  [1313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key, 3),
  [1315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__override_session_key_fd, 3),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_sig_expire, 3),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_expire, 3),
  [1321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3),
  [1327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat2, 2, .production_id = 10),
  [1329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_keyserver_url, 3),
  [1331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chuid, 3),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3),
  [1335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat2, 2, .production_id = 10),
  [1337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3),
  [1339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3),
  [1343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat2, 2, .production_id = 10),
  [1345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3),
  [1347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3),
  [1349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3),
  [1353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_filter, 5, .production_id = 7),
  [1355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3),
  [1357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_filter, 5, .production_id = 7),
  [1359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3),
  [1361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5),
  [1365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3),
  [1367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, .production_id = 9),
  [1369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3),
  [1381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3),
  [1385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 8),
  [1387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3),
  [1389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 8),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3),
  [1393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3),
  [1397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3),
  [1399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3),
  [1401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3),
  [1403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3),
  [1405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_filter, 5, .production_id = 7),
  [1407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3),
  [1409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3),
  [1411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3),
  [1413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 2),
  [1415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3),
  [1417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3),
  [1419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1431] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
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
