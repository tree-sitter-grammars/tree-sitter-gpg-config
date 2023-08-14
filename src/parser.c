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
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 238
#define ALIAS_COUNT 0
#define TOKEN_COUNT 165
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 24

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
  aux_sym__unknown_option_token1 = 72,
  aux_sym__unknown_option_token2 = 73,
  anon_sym_default_DASHkey = 74,
  anon_sym_list_DASHoptions = 75,
  anon_sym_COMMA = 76,
  sym__list_parameter = 77,
  anon_sym_verify_DASHoptions = 78,
  sym__verify_parameter = 79,
  anon_sym_photo_DASHviewer = 80,
  aux_sym__command_token1 = 81,
  anon_sym_DQUOTE = 82,
  aux_sym__command_token2 = 83,
  anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE = 84,
  anon_sym_SQUOTE = 85,
  aux_sym__command_token3 = 86,
  sym_format = 87,
  anon_sym_exec_DASHpath = 88,
  anon_sym_keyring = 89,
  anon_sym_primary_DASHkeyring = 90,
  anon_sym_trustdb_DASHname = 91,
  anon_sym_display_DASHcharset = 92,
  sym__charset_value = 93,
  sym__utf8_strings = 94,
  sym__no_utf8_strings = 95,
  anon_sym_compress_DASHlevel = 96,
  aux_sym__compress_level_token1 = 97,
  anon_sym_bzip2_DASHcompress_DASHlevel = 98,
  anon_sym_default_DASHcert_DASHlevel = 99,
  aux_sym__default_cert_level_token1 = 100,
  anon_sym_min_DASHcert_DASHlevel = 101,
  anon_sym_trusted_DASHkey = 102,
  anon_sym_add_DASHdesig_DASHrevoker = 103,
  aux_sym__add_desig_revoker_token1 = 104,
  aux_sym__add_desig_revoker_token2 = 105,
  anon_sym_trust_DASHmodel = 106,
  sym__model = 107,
  anon_sym_assert_DASHsigner = 108,
  anon_sym_auto_DASHkey_DASHlocate = 109,
  sym__key_locate_value = 110,
  anon_sym_keyid_DASHformat = 111,
  sym__keyid_format_value = 112,
  anon_sym_keyserver = 113,
  anon_sym_completes_DASHneeded = 114,
  anon_sym_marginals_DASHneeded = 115,
  anon_sym_tofu_DASHdefault_DASHpolicy = 116,
  sym__tofu_policy_value = 117,
  anon_sym_max_DASHcert_DASHdepth = 118,
  anon_sym_agent_DASHprogram = 119,
  anon_sym_dirmngr_DASHprogram = 120,
  anon_sym_limit_DASHcard_DASHinsert_DASHtries = 121,
  anon_sym_recipient = 122,
  anon_sym_hidden_DASHrecipient = 123,
  anon_sym_recipient_DASHfile = 124,
  anon_sym_hidden_DASHrecipient_DASHfile = 125,
  anon_sym_encrypt_DASHto = 126,
  anon_sym_hidden_DASHencrypt_DASHto = 127,
  anon_sym_group = 128,
  anon_sym_EQ = 129,
  anon_sym_ungroup = 130,
  anon_sym_local_DASHuser = 131,
  anon_sym_sender = 132,
  anon_sym_try_DASHsecret_DASHname = 133,
  anon_sym_output = 134,
  anon_sym_max_DASHoutput = 135,
  anon_sym_chunk_DASHsize = 136,
  anon_sym_input_DASHsize_DASHhint = 137,
  anon_sym_key_DASHorigin = 138,
  sym__origin_value = 139,
  anon_sym_import_DASHoptions = 140,
  sym__import_parameter = 141,
  anon_sym_export_DASHoptions = 142,
  sym__export_parameter = 143,
  anon_sym_personal_DASHcipher_DASHpreferences = 144,
  anon_sym_personal_DASHdigest_DASHpreferences = 145,
  anon_sym_personal_DASHcompress_DASHpreferences = 146,
  anon_sym_s2k_DASHcipher_DASHalgo = 147,
  anon_sym_s2k_DASHdigest_DASHalgo = 148,
  anon_sym_s2k_DASHmode = 149,
  aux_sym__s2k_mode_token1 = 150,
  anon_sym_s2k_DASHcount = 151,
  anon_sym_compliance = 152,
  sym__compliance_value = 153,
  anon_sym_min_DASHrsa_DASHlength = 154,
  sym__require_compliance = 155,
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
  sym_option = 166,
  sym__unknown_option = 167,
  sym__default_key = 168,
  sym__list_options = 169,
  sym__verify_options = 170,
  sym__photo_viewer = 171,
  sym__command = 172,
  sym__exec_path = 173,
  sym__keyring = 174,
  sym__primary_keyring = 175,
  sym__trustdb_name = 176,
  sym__display_charset = 177,
  sym__compress_level = 178,
  sym__bzip2_compress_level = 179,
  sym__default_cert_level = 180,
  sym__min_cert_level = 181,
  sym__trusted_key = 182,
  sym__add_desig_revoker = 183,
  sym__trust_model = 184,
  sym__assert_signer = 185,
  sym__auto_key_locate = 186,
  sym__keyid_format = 187,
  sym__keyserver = 188,
  sym__completes_needed = 189,
  sym__marginals_needed = 190,
  sym__tofu_default_policy = 191,
  sym__max_cert_depth = 192,
  sym__agent_program = 193,
  sym__dirmngr_program = 194,
  sym__limit_card_insert_tries = 195,
  sym__recipient = 196,
  sym__hidden_recipient = 197,
  sym__recipient_file = 198,
  sym__hidden_recipient_file = 199,
  sym__encrypt_to = 200,
  sym__hidden_encrypt_to = 201,
  sym__group = 202,
  sym__ungroup = 203,
  sym__local_user = 204,
  sym__sender = 205,
  sym__try_secret_name = 206,
  sym__output = 207,
  sym__max_output = 208,
  sym__chunk_size = 209,
  sym__input_size_hint = 210,
  sym__key_origin = 211,
  sym__import_options = 212,
  sym__export_options = 213,
  sym__personal_cipher_preferences = 214,
  sym__personal_digest_preferences = 215,
  sym__personal_compress_preferences = 216,
  sym__s2k_cipher_algo = 217,
  sym__s2k_digest_algo = 218,
  sym__s2k_mode = 219,
  sym__s2k_count = 220,
  sym__compliance = 221,
  sym__min_rsa_length = 222,
  sym_string = 223,
  aux_sym_config_repeat1 = 224,
  aux_sym__list_options_repeat1 = 225,
  aux_sym__verify_options_repeat1 = 226,
  aux_sym__command_repeat1 = 227,
  aux_sym__command_repeat2 = 228,
  aux_sym__command_repeat3 = 229,
  aux_sym__auto_key_locate_repeat1 = 230,
  aux_sym__import_options_repeat1 = 231,
  aux_sym__export_options_repeat1 = 232,
  aux_sym__personal_cipher_preferences_repeat1 = 233,
  aux_sym__personal_digest_preferences_repeat1 = 234,
  aux_sym__personal_compress_preferences_repeat1 = 235,
  aux_sym_string_repeat1 = 236,
  aux_sym_string_repeat2 = 237,
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
  [sym_format] = "format",
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
  [sym__origin_value] = "_origin_value",
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
  [sym_option] = "option",
  [sym__unknown_option] = "_unknown_option",
  [sym__default_key] = "_default_key",
  [sym__list_options] = "_list_options",
  [sym__verify_options] = "_verify_options",
  [sym__photo_viewer] = "_photo_viewer",
  [sym__command] = "string",
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
  [sym_format] = sym_format,
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
  [sym__origin_value] = sym__origin_value,
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
  [sym_option] = sym_option,
  [sym__unknown_option] = sym__unknown_option,
  [sym__default_key] = sym__default_key,
  [sym__list_options] = sym__list_options,
  [sym__verify_options] = sym__verify_options,
  [sym__photo_viewer] = sym__photo_viewer,
  [sym__command] = sym_string,
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
  [sym_format] = {
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
  [sym__origin_value] = {
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 1},
  [14] = {.index = 14, .length = 1},
  [15] = {.index = 15, .length = 1},
  [16] = {.index = 16, .length = 2},
  [17] = {.index = 18, .length = 1},
  [18] = {.index = 19, .length = 1},
  [19] = {.index = 20, .length = 1},
  [20] = {.index = 21, .length = 1},
  [21] = {.index = 22, .length = 2},
  [22] = {.index = 24, .length = 2},
  [23] = {.index = 26, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mechanism, 0, .inherited = true},
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
    {field_charset, 2},
  [7] =
    {field_model, 2},
  [8] =
    {field_mechanism, 2},
  [9] =
    {field_format, 2},
  [10] =
    {field_policy, 2},
  [11] =
    {field_origin, 2},
  [12] =
    {field_algorithm, 2},
  [13] =
    {field_mode, 2},
  [14] =
    {field_parameter, 0},
  [15] =
    {field_mechanism, 0},
  [16] =
    {field_mechanism, 2},
    {field_mechanism, 3, .inherited = true},
  [18] =
    {field_algorithm, 0},
  [19] =
    {field_parameter, 1},
  [20] =
    {field_content, 1},
  [21] =
    {field_mechanism, 1},
  [22] =
    {field_mechanism, 0, .inherited = true},
    {field_mechanism, 1, .inherited = true},
  [24] =
    {field_name, 2},
    {field_value, 4},
  [26] =
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
      if (eof) ADVANCE(605);
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '%') ADVANCE(1899);
      if (lookahead == '\'') ADVANCE(1906);
      if (lookahead == ',') ADVANCE(1893);
      if (lookahead == '2') ADVANCE(1889);
      if (lookahead == '=') ADVANCE(1956);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1902);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(1902);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1889);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      if (lookahead != 0) ADVANCE(1898);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(606);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(1899);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (lookahead != 0) ADVANCE(1898);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1893);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(567);
      if (lookahead == 'h') ADVANCE(307);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead == 'k') ADVANCE(190);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 's') ADVANCE(264);
      if (lookahead == 't') ADVANCE(388);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead == 'w') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1922);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1893);
      if (lookahead == '0') ADVANCE(572);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'C') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == 'b') ADVANCE(541);
      if (lookahead == 'c') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead == 'g') ADVANCE(381);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'k') ADVANCE(229);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead == 'p') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ',') ADVANCE(1893);
      if (lookahead == 'B') ADVANCE(120);
      if (lookahead == 'U') ADVANCE(367);
      if (lookahead == 'Z') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(491);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead == 'u') ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(1925);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '%') ADVANCE(1899);
      if (lookahead == '\'') ADVANCE(1906);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1898);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '%') ADVANCE(1904);
      if (lookahead == '\\') ADVANCE(1903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1902);
      if (lookahead != 0) ADVANCE(1902);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(1900);
      if (lookahead == '\\') ADVANCE(1903);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1902);
      if (lookahead != 0) ADVANCE(1902);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(1901);
      if (lookahead == '\'') ADVANCE(1907);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(2022);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(1910);
      if (lookahead == '\'') ADVANCE(1906);
      if (lookahead == '\\') ADVANCE(1909);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1908);
      if (lookahead != 0) ADVANCE(1908);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(1906);
      if (lookahead == '\\') ADVANCE(1909);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1908);
      if (lookahead != 0) ADVANCE(1908);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(310);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(481);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(169);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(321);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(318);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(246);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(446);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(364);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(540);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(488);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(544);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(304);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(394);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(408);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(492);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(499);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(463);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(502);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(503);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(546);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(413);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(558);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(385);
      END_STATE();
    case 46:
      if (lookahead == '/') ADVANCE(603);
      END_STATE();
    case 47:
      if (lookahead == '/') ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '0') ADVANCE(2026);
      END_STATE();
    case 49:
      if (lookahead == '0') ADVANCE(68);
      END_STATE();
    case 50:
      if (lookahead == '0') ADVANCE(1981);
      END_STATE();
    case 51:
      if (lookahead == '0') ADVANCE(1982);
      END_STATE();
    case 52:
      if (lookahead == '0') ADVANCE(2020);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(2021);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(49);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(569);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'k') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 's') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(384);
      if (lookahead == 'w') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      END_STATE();
    case 55:
      if (lookahead == '1') ADVANCE(1922);
      END_STATE();
    case 56:
      if (lookahead == '1') ADVANCE(2026);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == '5') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == '1') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == '1') ADVANCE(1918);
      if (lookahead == '2') ADVANCE(1917);
      END_STATE();
    case 60:
      if (lookahead == '1') ADVANCE(67);
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == '1') ADVANCE(77);
      END_STATE();
    case 62:
      if (lookahead == '2') ADVANCE(2026);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(69);
      if (lookahead == '5') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == '2') ADVANCE(2024);
      END_STATE();
    case 65:
      if (lookahead == '2') ADVANCE(2027);
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
      if (lookahead == '3') ADVANCE(1971);
      END_STATE();
    case 69:
      if (lookahead == '4') ADVANCE(2026);
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
      if (lookahead == '5') ADVANCE(2024);
      END_STATE();
    case 74:
      if (lookahead == '5') ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == '6') ADVANCE(2026);
      END_STATE();
    case 76:
      if (lookahead == '6') ADVANCE(2024);
      END_STATE();
    case 77:
      if (lookahead == '6') ADVANCE(48);
      END_STATE();
    case 78:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 79:
      if (lookahead == '8') ADVANCE(1917);
      END_STATE();
    case 80:
      if (lookahead == '8') ADVANCE(72);
      END_STATE();
    case 81:
      if (lookahead == '8') ADVANCE(2024);
      END_STATE();
    case 82:
      if (lookahead == '8') ADVANCE(26);
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
      if (lookahead == '9') ADVANCE(15);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1929);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 92:
      if (lookahead == 'A') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 93:
      if (lookahead == 'A') ADVANCE(60);
      END_STATE();
    case 94:
      if (lookahead == 'B') ADVANCE(2027);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
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
      if (lookahead == 'H') ADVANCE(2024);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(2027);
      END_STATE();
    case 115:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(2025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
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
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(336);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'l') ADVANCE(407);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(357);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(448);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(358);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(578);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 151:
      if (lookahead == 'b') ADVANCE(542);
      END_STATE();
    case 152:
      if (lookahead == 'b') ADVANCE(441);
      END_STATE();
    case 153:
      if (lookahead == 'b') ADVANCE(538);
      END_STATE();
    case 154:
      if (lookahead == 'b') ADVANCE(392);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(315);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(337);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(316);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(342);
      END_STATE();
    case 159:
      if (lookahead == 'c') ADVANCE(1932);
      END_STATE();
    case 160:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 161:
      if (lookahead == 'c') ADVANCE(308);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(507);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(479);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(396);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(582);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(341);
      if (lookahead == 'e') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 'm') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 's') ADVANCE(266);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(587);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 172:
      if (lookahead == 'd') ADVANCE(1936);
      END_STATE();
    case 173:
      if (lookahead == 'd') ADVANCE(2027);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(1944);
      END_STATE();
    case 175:
      if (lookahead == 'd') ADVANCE(1966);
      END_STATE();
    case 176:
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 177:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 178:
      if (lookahead == 'd') ADVANCE(478);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(210);
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 180:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(480);
      END_STATE();
    case 182:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 183:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 184:
      if (lookahead == 'd') ADVANCE(283);
      END_STATE();
    case 185:
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 186:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 188:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 189:
      if (lookahead == 'e') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(577);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 191:
      if (lookahead == 'e') ADVANCE(1936);
      END_STATE();
    case 192:
      if (lookahead == 'e') ADVANCE(2026);
      END_STATE();
    case 193:
      if (lookahead == 'e') ADVANCE(1971);
      END_STATE();
    case 194:
      if (lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 195:
      if (lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead == 'f') ADVANCE(160);
      END_STATE();
    case 197:
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'h') ADVANCE(406);
      END_STATE();
    case 198:
      if (lookahead == 'e') ADVANCE(2024);
      END_STATE();
    case 199:
      if (lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(1896);
      END_STATE();
    case 201:
      if (lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 202:
      if (lookahead == 'e') ADVANCE(1966);
      END_STATE();
    case 203:
      if (lookahead == 'e') ADVANCE(1939);
      END_STATE();
    case 204:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 206:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 207:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 208:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 210:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 211:
      if (lookahead == 'e') ADVANCE(447);
      END_STATE();
    case 212:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 213:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 214:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 215:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 216:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 217:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 218:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 219:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(570);
      if (lookahead == 's') ADVANCE(536);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(468);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(474);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 243:
      if (lookahead == 'f') ADVANCE(534);
      END_STATE();
    case 244:
      if (lookahead == 'f') ADVANCE(1966);
      END_STATE();
    case 245:
      if (lookahead == 'f') ADVANCE(127);
      END_STATE();
    case 246:
      if (lookahead == 'f') ADVANCE(437);
      END_STATE();
    case 247:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 248:
      if (lookahead == 'f') ADVANCE(40);
      END_STATE();
    case 249:
      if (lookahead == 'g') ADVANCE(1894);
      END_STATE();
    case 250:
      if (lookahead == 'g') ADVANCE(1981);
      END_STATE();
    case 251:
      if (lookahead == 'g') ADVANCE(1969);
      END_STATE();
    case 252:
      if (lookahead == 'g') ADVANCE(1939);
      END_STATE();
    case 253:
      if (lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 254:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 255:
      if (lookahead == 'g') ADVANCE(480);
      END_STATE();
    case 256:
      if (lookahead == 'g') ADVANCE(429);
      END_STATE();
    case 257:
      if (lookahead == 'g') ADVANCE(479);
      END_STATE();
    case 258:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 259:
      if (lookahead == 'g') ADVANCE(496);
      END_STATE();
    case 260:
      if (lookahead == 'g') ADVANCE(430);
      END_STATE();
    case 261:
      if (lookahead == 'g') ADVANCE(483);
      END_STATE();
    case 262:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 263:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 264:
      if (lookahead == 'h') ADVANCE(393);
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 265:
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 266:
      if (lookahead == 'h') ADVANCE(395);
      END_STATE();
    case 267:
      if (lookahead == 'h') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(348);
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 268:
      if (lookahead == 'h') ADVANCE(420);
      END_STATE();
    case 269:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 270:
      if (lookahead == 'i') ADVANCE(350);
      END_STATE();
    case 271:
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 272:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 273:
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(155);
      END_STATE();
    case 274:
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 275:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 276:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 277:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 278:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 279:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 280:
      if (lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 281:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 282:
      if (lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 283:
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 284:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 285:
      if (lookahead == 'i') ADVANCE(352);
      END_STATE();
    case 286:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 287:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 288:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 289:
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 290:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 291:
      if (lookahead == 'i') ADVANCE(353);
      END_STATE();
    case 292:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 293:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 294:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 295:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 296:
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 297:
      if (lookahead == 'i') ADVANCE(464);
      END_STATE();
    case 298:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 299:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 300:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 301:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 302:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 303:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 304:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 305:
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(549);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 306:
      if (lookahead == 'k') ADVANCE(1944);
      END_STATE();
    case 307:
      if (lookahead == 'k') ADVANCE(425);
      END_STATE();
    case 308:
      if (lookahead == 'k') ADVANCE(537);
      END_STATE();
    case 309:
      if (lookahead == 'k') ADVANCE(172);
      END_STATE();
    case 310:
      if (lookahead == 'k') ADVANCE(204);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == 'u') ADVANCE(289);
      END_STATE();
    case 311:
      if (lookahead == 'k') ADVANCE(175);
      END_STATE();
    case 312:
      if (lookahead == 'k') ADVANCE(500);
      END_STATE();
    case 313:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 314:
      if (lookahead == 'k') ADVANCE(221);
      END_STATE();
    case 315:
      if (lookahead == 'k') ADVANCE(234);
      END_STATE();
    case 316:
      if (lookahead == 'k') ADVANCE(237);
      END_STATE();
    case 317:
      if (lookahead == 'k') ADVANCE(375);
      END_STATE();
    case 318:
      if (lookahead == 'k') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead == 'o') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 's') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(305);
      END_STATE();
    case 319:
      if (lookahead == 'k') ADVANCE(382);
      END_STATE();
    case 320:
      if (lookahead == 'k') ADVANCE(236);
      END_STATE();
    case 321:
      if (lookahead == 'k') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(312);
      END_STATE();
    case 322:
      if (lookahead == 'l') ADVANCE(561);
      if (lookahead == 'u') ADVANCE(514);
      END_STATE();
    case 323:
      if (lookahead == 'l') ADVANCE(1936);
      END_STATE();
    case 324:
      if (lookahead == 'l') ADVANCE(1971);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(1969);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(1966);
      END_STATE();
    case 327:
      if (lookahead == 'l') ADVANCE(508);
      END_STATE();
    case 328:
      if (lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 329:
      if (lookahead == 'l') ADVANCE(313);
      END_STATE();
    case 330:
      if (lookahead == 'l') ADVANCE(575);
      END_STATE();
    case 331:
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(506);
      END_STATE();
    case 332:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 333:
      if (lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 334:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 335:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 336:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 337:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 338:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 339:
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 340:
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead == 's') ADVANCE(268);
      END_STATE();
    case 341:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 342:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 343:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 344:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 345:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 346:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 347:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 348:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 349:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 350:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 351:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 352:
      if (lookahead == 'm') ADVANCE(139);
      END_STATE();
    case 353:
      if (lookahead == 'm') ADVANCE(140);
      END_STATE();
    case 354:
      if (lookahead == 'm') ADVANCE(442);
      END_STATE();
    case 355:
      if (lookahead == 'm') ADVANCE(443);
      END_STATE();
    case 356:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 357:
      if (lookahead == 'n') ADVANCE(1971);
      END_STATE();
    case 358:
      if (lookahead == 'n') ADVANCE(1969);
      END_STATE();
    case 359:
      if (lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 360:
      if (lookahead == 'n') ADVANCE(1966);
      END_STATE();
    case 361:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 362:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 363:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 364:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 365:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 366:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 367:
      if (lookahead == 'n') ADVANCE(167);
      END_STATE();
    case 368:
      if (lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 369:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 370:
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 371:
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 372:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 373:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 374:
      if (lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 375:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 376:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 377:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 378:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 379:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 380:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 381:
      if (lookahead == 'n') ADVANCE(543);
      END_STATE();
    case 382:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 383:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 384:
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 385:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 386:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 387:
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 388:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 389:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 390:
      if (lookahead == 'o') ADVANCE(1932);
      END_STATE();
    case 391:
      if (lookahead == 'o') ADVANCE(1944);
      END_STATE();
    case 392:
      if (lookahead == 'o') ADVANCE(568);
      END_STATE();
    case 393:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 394:
      if (lookahead == 'o') ADVANCE(566);
      END_STATE();
    case 395:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 396:
      if (lookahead == 'o') ADVANCE(351);
      END_STATE();
    case 397:
      if (lookahead == 'o') ADVANCE(563);
      END_STATE();
    case 398:
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 399:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 400:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 401:
      if (lookahead == 'o') ADVANCE(480);
      END_STATE();
    case 402:
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 403:
      if (lookahead == 'o') ADVANCE(484);
      END_STATE();
    case 404:
      if (lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 405:
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 406:
      if (lookahead == 'o') ADVANCE(565);
      END_STATE();
    case 407:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 408:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 409:
      if (lookahead == 'o') ADVANCE(368);
      END_STATE();
    case 410:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 411:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 412:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 413:
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 414:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 415:
      if (lookahead == 'o') ADVANCE(473);
      END_STATE();
    case 416:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 417:
      if (lookahead == 'o') ADVANCE(465);
      END_STATE();
    case 418:
      if (lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 419:
      if (lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 420:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 421:
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 422:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 423:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 424:
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 425:
      if (lookahead == 'p') ADVANCE(89);
      END_STATE();
    case 426:
      if (lookahead == 'p') ADVANCE(1932);
      END_STATE();
    case 427:
      if (lookahead == 'p') ADVANCE(1937);
      END_STATE();
    case 428:
      if (lookahead == 'p') ADVANCE(1971);
      END_STATE();
    case 429:
      if (lookahead == 'p') ADVANCE(592);
      END_STATE();
    case 430:
      if (lookahead == 'p') ADVANCE(1981);
      END_STATE();
    case 431:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 432:
      if (lookahead == 'p') ADVANCE(250);
      END_STATE();
    case 433:
      if (lookahead == 'p') ADVANCE(286);
      END_STATE();
    case 434:
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 435:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 436:
      if (lookahead == 'p') ADVANCE(217);
      END_STATE();
    case 437:
      if (lookahead == 'p') ADVANCE(458);
      END_STATE();
    case 438:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 439:
      if (lookahead == 'p') ADVANCE(466);
      END_STATE();
    case 440:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 441:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 442:
      if (lookahead == 'p') ADVANCE(415);
      END_STATE();
    case 443:
      if (lookahead == 'p') ADVANCE(418);
      END_STATE();
    case 444:
      if (lookahead == 'q') ADVANCE(589);
      END_STATE();
    case 445:
      if (lookahead == 'r') ADVANCE(1936);
      END_STATE();
    case 446:
      if (lookahead == 'r') ADVANCE(1917);
      END_STATE();
    case 447:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 448:
      if (lookahead == 'r') ADVANCE(1930);
      END_STATE();
    case 449:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 450:
      if (lookahead == 'r') ADVANCE(508);
      END_STATE();
    case 451:
      if (lookahead == 'r') ADVANCE(513);
      END_STATE();
    case 452:
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 453:
      if (lookahead == 'r') ADVANCE(275);
      END_STATE();
    case 454:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 455:
      if (lookahead == 'r') ADVANCE(334);
      END_STATE();
    case 456:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 457:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 458:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 459:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 460:
      if (lookahead == 'r') ADVANCE(509);
      END_STATE();
    case 461:
      if (lookahead == 'r') ADVANCE(523);
      END_STATE();
    case 462:
      if (lookahead == 'r') ADVANCE(510);
      END_STATE();
    case 463:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 464:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 465:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 466:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 467:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 468:
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 469:
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 470:
      if (lookahead == 'r') ADVANCE(515);
      END_STATE();
    case 471:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 472:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 473:
      if (lookahead == 'r') ADVANCE(528);
      END_STATE();
    case 474:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 475:
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 476:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 477:
      if (lookahead == 's') ADVANCE(1932);
      END_STATE();
    case 478:
      if (lookahead == 's') ADVANCE(1936);
      END_STATE();
    case 479:
      if (lookahead == 's') ADVANCE(1971);
      END_STATE();
    case 480:
      if (lookahead == 's') ADVANCE(1894);
      END_STATE();
    case 481:
      if (lookahead == 's') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 482:
      if (lookahead == 's') ADVANCE(1981);
      END_STATE();
    case 483:
      if (lookahead == 's') ADVANCE(1969);
      END_STATE();
    case 484:
      if (lookahead == 's') ADVANCE(1896);
      END_STATE();
    case 485:
      if (lookahead == 's') ADVANCE(1967);
      END_STATE();
    case 486:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 487:
      if (lookahead == 's') ADVANCE(389);
      END_STATE();
    case 488:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 489:
      if (lookahead == 's') ADVANCE(486);
      END_STATE();
    case 490:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 491:
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 492:
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 493:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 494:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 495:
      if (lookahead == 's') ADVANCE(509);
      END_STATE();
    case 496:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 497:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 498:
      if (lookahead == 's') ADVANCE(497);
      END_STATE();
    case 499:
      if (lookahead == 's') ADVANCE(288);
      END_STATE();
    case 500:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 501:
      if (lookahead == 's') ADVANCE(525);
      END_STATE();
    case 502:
      if (lookahead == 's') ADVANCE(293);
      END_STATE();
    case 503:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 504:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 505:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 506:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 507:
      if (lookahead == 't') ADVANCE(1932);
      END_STATE();
    case 508:
      if (lookahead == 't') ADVANCE(1936);
      END_STATE();
    case 509:
      if (lookahead == 't') ADVANCE(1969);
      END_STATE();
    case 510:
      if (lookahead == 't') ADVANCE(1939);
      END_STATE();
    case 511:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 512:
      if (lookahead == 't') ADVANCE(574);
      END_STATE();
    case 513:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 514:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 515:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 516:
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 517:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 518:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 519:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 520:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 521:
      if (lookahead == 't') ADVANCE(480);
      END_STATE();
    case 522:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 523:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 524:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 525:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 526:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 527:
      if (lookahead == 't') ADVANCE(403);
      END_STATE();
    case 528:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 529:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 530:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 531:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 532:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 533:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 534:
      if (lookahead == 'u') ADVANCE(1933);
      END_STATE();
    case 535:
      if (lookahead == 'u') ADVANCE(327);
      END_STATE();
    case 536:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 537:
      if (lookahead == 'u') ADVANCE(428);
      END_STATE();
    case 538:
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 539:
      if (lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 540:
      if (lookahead == 'u') ADVANCE(455);
      END_STATE();
    case 541:
      if (lookahead == 'u') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 542:
      if (lookahead == 'u') ADVANCE(526);
      END_STATE();
    case 543:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 544:
      if (lookahead == 'u') ADVANCE(294);
      END_STATE();
    case 545:
      if (lookahead == 'u') ADVANCE(495);
      END_STATE();
    case 546:
      if (lookahead == 'u') ADVANCE(459);
      END_STATE();
    case 547:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 548:
      if (lookahead == 'u') ADVANCE(292);
      END_STATE();
    case 549:
      if (lookahead == 'u') ADVANCE(504);
      END_STATE();
    case 550:
      if (lookahead == 'v') ADVANCE(209);
      END_STATE();
    case 551:
      if (lookahead == 'v') ADVANCE(399);
      END_STATE();
    case 552:
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 553:
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 554:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 555:
      if (lookahead == 'v') ADVANCE(225);
      END_STATE();
    case 556:
      if (lookahead == 'v') ADVANCE(205);
      END_STATE();
    case 557:
      if (lookahead == 'v') ADVANCE(320);
      END_STATE();
    case 558:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 559:
      if (lookahead == 'v') ADVANCE(240);
      END_STATE();
    case 560:
      if (lookahead == 'w') ADVANCE(1969);
      END_STATE();
    case 561:
      if (lookahead == 'w') ADVANCE(144);
      END_STATE();
    case 562:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 563:
      if (lookahead == 'w') ADVANCE(359);
      END_STATE();
    case 564:
      if (lookahead == 'w') ADVANCE(360);
      END_STATE();
    case 565:
      if (lookahead == 'w') ADVANCE(20);
      END_STATE();
    case 566:
      if (lookahead == 'w') ADVANCE(377);
      END_STATE();
    case 567:
      if (lookahead == 'x') ADVANCE(431);
      END_STATE();
    case 568:
      if (lookahead == 'x') ADVANCE(1894);
      END_STATE();
    case 569:
      if (lookahead == 'x') ADVANCE(340);
      END_STATE();
    case 570:
      if (lookahead == 'x') ADVANCE(433);
      END_STATE();
    case 571:
      if (lookahead == 'x') ADVANCE(443);
      END_STATE();
    case 572:
      if (lookahead == 'x') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 573:
      if (lookahead == 'y') ADVANCE(452);
      END_STATE();
    case 574:
      if (lookahead == 'y') ADVANCE(1894);
      END_STATE();
    case 575:
      if (lookahead == 'y') ADVANCE(1969);
      END_STATE();
    case 576:
      if (lookahead == 'y') ADVANCE(1896);
      END_STATE();
    case 577:
      if (lookahead == 'y') ADVANCE(490);
      END_STATE();
    case 578:
      if (lookahead == 'y') ADVANCE(477);
      END_STATE();
    case 579:
      if (lookahead == 'y') ADVANCE(480);
      END_STATE();
    case 580:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 581:
      if (lookahead == 'y') ADVANCE(479);
      END_STATE();
    case 582:
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 583:
      if (lookahead == 'y') ADVANCE(483);
      END_STATE();
    case 584:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 585:
      if (lookahead == 'y') ADVANCE(36);
      END_STATE();
    case 586:
      if (lookahead == 'y') ADVANCE(505);
      END_STATE();
    case 587:
      if (lookahead == 'y') ADVANCE(42);
      END_STATE();
    case 588:
      if (lookahead == '{') ADVANCE(444);
      END_STATE();
    case 589:
      if (lookahead == '}') ADVANCE(1905);
      END_STATE();
    case 590:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '3') ADVANCE(1978);
      END_STATE();
    case 591:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(1890);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1890);
      END_STATE();
    case 592:
      if (('6' <= lookahead && lookahead <= '8')) ADVANCE(1981);
      END_STATE();
    case 593:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2018);
      END_STATE();
    case 594:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 595:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 596:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2017);
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
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      END_STATE();
    case 602:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 603:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 604:
      if (eof) ADVANCE(605);
      if (lookahead == '\n') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2023);
      if (lookahead == ',') ADVANCE(1893);
      if (lookahead == '=') ADVANCE(1956);
      if (lookahead == 'a') ADVANCE(916);
      if (lookahead == 'b') ADVANCE(1886);
      if (lookahead == 'c') ADVANCE(1182);
      if (lookahead == 'd') ADVANCE(953);
      if (lookahead == 'e') ADVANCE(1382);
      if (lookahead == 'f') ADVANCE(1452);
      if (lookahead == 'g') ADVANCE(1387);
      if (lookahead == 'h') ADVANCE(1199);
      if (lookahead == 'i') ADVANCE(1345);
      if (lookahead == 'k') ADVANCE(954);
      if (lookahead == 'l') ADVANCE(955);
      if (lookahead == 'm') ADVANCE(799);
      if (lookahead == 'n') ADVANCE(1453);
      if (lookahead == 'o') ADVANCE(1536);
      if (lookahead == 'p') ADVANCE(979);
      if (lookahead == 'r') ADVANCE(956);
      if (lookahead == 's') ADVANCE(787);
      if (lookahead == 't') ADVANCE(957);
      if (lookahead == 'u') ADVANCE(1388);
      if (lookahead == 'v') ADVANCE(980);
      if (lookahead == 'w') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient);
      if (lookahead == '-') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_default_DASHrecipient_DASHself);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_no_DASHdefault_DASHrecipient);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_no_DASHtty);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_enable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_disable_DASHlarge_DASHrsa);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_enable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_disable_DASHdsa2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_no_DASHcompress);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHdecompress_DASHlowmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_mangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_no_DASHmangle_DASHdos_DASHfilenames);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_ask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_no_DASHask_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_always_DASHtrust);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHimport);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHkey_DASHretrieve);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_no_DASHsig_DASHcache);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_auto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_no_DASHauto_DASHcheck_DASHtrustdb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_disable_DASHdirmngr);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_no_DASHautostart);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_lock_DASHonce);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_lock_DASHmultiple);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_lock_DASHnever);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_no_DASHrandom_DASHseed_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_no_DASHgreeting);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_no_DASHsecmem_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_no_DASHpermission_DASHwarning);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_require_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHsecmem);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_require_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_no_DASHrequire_DASHcross_DASHverification);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_expert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_no_DASHexpert);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_no_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_no_DASHgroups);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_try_DASHall_DASHsecrets);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_skip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_no_DASHskip_DASHhidden_DASHrecipients);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_armor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_no_DASHarmor);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_with_DASHcolons);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_legacy_DASHlist_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_with_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_with_DASHsubkey_DASHfingerprint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_with_DASHicao_DASHspelling);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_with_DASHkeygrip);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_with_DASHkey_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_with_DASHwkd_DASHhash);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_with_DASHsecret);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_textmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_no_DASHtextmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_force_DASHocb);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_force_DASHaead);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_disable_DASHsigner_DASHuid);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_include_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_no_DASHinclude_DASHkey_DASHblock);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_gnupg);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_openpgp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_rfc4880);
      if (lookahead == 'b') ADVANCE(1215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_rfc4880bis);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_rfc2440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_pgp7);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_pgp8);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1466);
      if (lookahead == 'i') ADVANCE(932);
      if (lookahead == 'r') ADVANCE(1205);
      if (lookahead == 's') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1378);
      if (lookahead == 'd') ADVANCE(856);
      if (lookahead == 'e') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1510);
      if (lookahead == 'g') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(914);
      if (lookahead == 's') ADVANCE(1790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '0') ADVANCE(674);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '0') ADVANCE(672);
      if (lookahead == '-' ||
          ('1' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(1284);
      if (lookahead == 'e') ADVANCE(1390);
      if (lookahead == 'k') ADVANCE(1204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(793);
      if (lookahead == '4') ADVANCE(796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '2') ADVANCE(685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '4') ADVANCE(785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '4') ADVANCE(792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '7') ADVANCE(675);
      if (lookahead == '8') ADVANCE(676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(723);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '8') ADVANCE(767);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1389);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == 'c') ADVANCE(1582);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1630);
      if (lookahead == 'c') ADVANCE(1485);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == 'e') ADVANCE(1393);
      if (lookahead == 'g') ADVANCE(1580);
      if (lookahead == 'i') ADVANCE(1396);
      if (lookahead == 'm') ADVANCE(815);
      if (lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'r') ADVANCE(830);
      if (lookahead == 's') ADVANCE(995);
      if (lookahead == 't') ADVANCE(1112);
      if (lookahead == 'u') ADVANCE(1816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(612);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1872);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1311);
      if (lookahead == 'k') ADVANCE(683);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1323);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1342);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1346);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1348);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1001);
      if (lookahead == 'o') ADVANCE(869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1685);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(710);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1614);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1598);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1391);
      if (lookahead == 'e') ADVANCE(1565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1358);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1483);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1428);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1361);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1599);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1363);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1365);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead == 'p') ADVANCE(1321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'a') ADVANCE(1645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(630);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1462);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'b') ADVANCE(1291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1304);
      if (lookahead == 'p') ADVANCE(1833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1218);
      if (lookahead == 'd') ADVANCE(1208);
      if (lookahead == 'm') ADVANCE(1495);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1488);
      if (lookahead == 's') ADVANCE(1061);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1256);
      if (lookahead == 'd') ADVANCE(1276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1191);
      if (lookahead == 'k') ADVANCE(1071);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1016);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1874);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1356);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(709);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1467);
      if (lookahead == 'f') ADVANCE(1214);
      if (lookahead == 'i') ADVANCE(875);
      if (lookahead == 'k') ADVANCE(988);
      if (lookahead == 's') ADVANCE(1062);
      if (lookahead == 'w') ADVANCE(1286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1662);
      if (lookahead == 's') ADVANCE(1095);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1036);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1037);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1040);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1207);
      if (lookahead == 'q') ADVANCE(1822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1359);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1362);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1060);
      if (lookahead == 'o') ADVANCE(1841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1098);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1506);
      if (lookahead == 'd') ADVANCE(1014);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'r') ADVANCE(1684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1508);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1110);
      if (lookahead == 'k') ADVANCE(993);
      if (lookahead == 'r') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1196);
      if (lookahead == 'k') ADVANCE(1118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'c') ADVANCE(1343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(922);
      if (lookahead == 'g') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(1858);
      if (lookahead == 'r') ADVANCE(1366);
      if (lookahead == 's') ADVANCE(1283);
      if (lookahead == 'u') ADVANCE(1752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1231);
      if (lookahead == 'l') ADVANCE(849);
      if (lookahead == 's') ADVANCE(1268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1941);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1055);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(985);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1464);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1493);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1005);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1019);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(986);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(971);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1688);
      if (lookahead == 'l') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(763);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1035);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1010);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1068);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1512);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(1126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'd') ADVANCE(951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1130);
      if (lookahead == 'i') ADVANCE(1581);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1866);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1367);
      if (lookahead == 'o') ADVANCE(861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(890);
      if (lookahead == 'f') ADVANCE(862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1864);
      if (lookahead == 'o') ADVANCE(1131);
      if (lookahead == 'r') ADVANCE(1818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1963);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1980);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1951);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1960);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1984);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(637);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1862);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1566);
      if (lookahead == 'g') ADVANCE(1514);
      if (lookahead == 'h') ADVANCE(1502);
      if (lookahead == 'r') ADVANCE(1202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(874);
      if (lookahead == 'i') ADVANCE(1757);
      if (lookahead == 'p') ADVANCE(992);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1427);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1868);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1586);
      if (lookahead == 'o') ADVANCE(1646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1869);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1880);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(873);
      if (lookahead == 'i') ADVANCE(1172);
      if (lookahead == 'k') ADVANCE(1280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1347);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1765);
      if (lookahead == 'i') ADVANCE(835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(889);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1012);
      if (lookahead == 'o') ADVANCE(1828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1349);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1447);
      if (lookahead == 'r') ADVANCE(1018);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1350);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(904);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(686);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1532);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1404);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(687);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1674);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1676);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(690);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1603);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1576);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1076);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1604);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(720);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1415);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1409);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1360);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(880);
      if (lookahead == 'u') ADVANCE(859);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1605);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1699);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1875);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1418);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1432);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1877);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1434);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1420);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1435);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1853);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1422);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(939);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1424);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1800);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1615);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1088);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(898);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1801);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1443);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1444);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1629);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1865);
      if (lookahead == 't') ADVANCE(1867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1724);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1141);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1142);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1143);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'e') ADVANCE(783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(797);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(809);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1475);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1051);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'f') ADVANCE(1278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(638);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1914);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(639);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(658);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(811);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1518);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1070);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1457);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1672);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1458);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(714);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1053);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1042);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1439);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1094);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'g') ADVANCE(1344);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1819);
      if (lookahead == 'o') ADVANCE(1351);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1912);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(661);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1945);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(684);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1013);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1034);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'h') ADVANCE(1279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1887);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1515);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1352);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1783);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1527);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1395);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1372);
      if (lookahead == 'l') ADVANCE(1472);
      if (lookahead == 'r') ADVANCE(1067);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1524);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1394);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1398);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1664);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1383);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1521);
      if (lookahead == 'o') ADVANCE(1832);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1400);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1542);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1520);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(876);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1440);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1406);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1384);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1407);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1410);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1413);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1643);
      if (lookahead == 's') ADVANCE(806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1792);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1029);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1888);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1429);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1473);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1417);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1477);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1479);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1419);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1480);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1077);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1481);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1482);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1085);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1058);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1494);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1547);
      if (lookahead == 'o') ADVANCE(1381);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1073);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1081);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1084);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1086);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1377);
      if (lookahead == 'l') ADVANCE(1505);
      if (lookahead == 'r') ADVANCE(1097);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1555);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1558);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1559);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1448);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(952);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'i') ADVANCE(1564);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(668);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(700);
      if (lookahead == 's') ADVANCE(987);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(680);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(936);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(994);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(996);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1048);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1074);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1078);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(1107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(761);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'k') ADVANCE(774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(620);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1921);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(621);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(998);
      if (lookahead == 'r') ADVANCE(989);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1057);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1789);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(706);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(694);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(967);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(977);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1025);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1471);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1056);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1476);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1031);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1064);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1478);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1069);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1072);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1773);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1080);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1083);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1788);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1726);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'l') ADVANCE(1127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1539);
      if (lookahead == 'n') ADVANCE(860);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1946);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1947);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(642);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1516);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1426);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1824);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 'o') ADVANCE(1401);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1059);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1538);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(966);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1006);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1028);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1008);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1032);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1463);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1203);
      if (lookahead == 's') ADVANCE(1760);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1530);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1533);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1470);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1543);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1433);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1497);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1546);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1499);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1500);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1501);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'm') ADVANCE(1557);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead == 'x') ADVANCE(981);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1965);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(660);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(643);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1820);
      if (lookahead == 'r') ADVANCE(1486);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1156);
      if (lookahead == 't') ADVANCE(1128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1170);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == 'x') ADVANCE(678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(944);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(679);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(911);
      if (lookahead == 'x') ADVANCE(1544);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(915);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(878);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1666);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1667);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1669);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1670);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1737);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(688);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1043);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1747);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1751);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1786);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(882);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(884);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(885);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1045);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1063);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1725);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(841);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1093);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(766);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(913);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(779);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'n') ADVANCE(1181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1953);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1975);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1954);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1861);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1375);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1585);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1397);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1528);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1402);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(893);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1405);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(695);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(870);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1408);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1411);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1414);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1386);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(715);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1368);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1442);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1357);
      if (lookahead == 'r') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1446);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(930);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1601);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(931);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1602);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(933);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1548);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(894);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1370);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1552);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1376);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1554);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1644);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'o') ADVANCE(1730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(791);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1955);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(671);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1957);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(659);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1663);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1491);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1017);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(984);
      if (lookahead == 'u') ADVANCE(1755);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1511);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1606);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1496);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1066);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1774);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1498);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1794);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1634);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1799);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1807);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1641);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1655);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(1657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'p') ADVANCE(784);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'q') ADVANCE(1842);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1682);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1959);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(653);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1940);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(635);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1897);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1934);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(631);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1928);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1003);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1353);
      if (lookahead == 's') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1873);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1355);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1733);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1490);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1735);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1002);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1436);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(983);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1627);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(711);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(991);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1369);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1027);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1879);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1693);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1713);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(745);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1535);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(937);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1075);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1787);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1484);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1798);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1371);
      if (lookahead == 's') ADVANCE(1295);
      if (lookahead == 'u') ADVANCE(1762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1489);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1835);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1492);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1437);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1079);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1806);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1837);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1082);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1373);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1812);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(765);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1556);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1808);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1815);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1810);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1881);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1883);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'r') ADVANCE(1513);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(648);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(616);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1892);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1919);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1970);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1968);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1895);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1920);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(618);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(650);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(619);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(651);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1974);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1468);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(827);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(805);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(958);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1665);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(802);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(803);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1785);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1534);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(730);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(717);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(727);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(759);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(731);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1026);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1721);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1046);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1691);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1041);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1704);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1728);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1030);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1813);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1781);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1817);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1096);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(741);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(750);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1796);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(776);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(778);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(780);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 's') ADVANCE(1729);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(762);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(645);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1961);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1949);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1979);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(622);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1938);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(632);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(624);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1964);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1950);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(625);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1465);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1374);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1537);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(705);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(926);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1454);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1065);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1455);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1456);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1623);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1673);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1459);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1675);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(689);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(732);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1678);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(969);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(719);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1608);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1474);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(718);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1540);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(736);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1626);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1633);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(742);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(754);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1636);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(748);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1640);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(743);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(744);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(746);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(749);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(764);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(757);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1379);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(769);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 't') ADVANCE(777);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1683);
      if (lookahead == 'y') ADVANCE(681);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1425);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1522);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1517);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1734);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1519);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1526);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1412);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1795);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1697);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1698);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1703);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1700);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(740);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1793);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(1255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'u') ADVANCE(948);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1461);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1009);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1011);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1015);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1020);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1850:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(972);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1021);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1023);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(976);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1024);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1033);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1050);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'v') ADVANCE(1125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(804);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1610);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1860:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1364);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(1044);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'w') ADVANCE(844);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1753);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'x') ADVANCE(1814);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(738);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(611);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(768);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1891);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1870:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1927);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1871:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1943);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1696);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1545);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1874:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(702);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(692);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(722);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1877:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(701);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1878:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(716);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1879:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(752);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1628);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1551);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(756);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1883:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(1553);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(771);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1885:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'y') ADVANCE(772);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1886:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1889);
      END_STATE();
    case 1887:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(962);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1889);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == 'z') ADVANCE(1047);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1889);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(aux_sym__unknown_option_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1890:
      ACCEPT_TOKEN(aux_sym__unknown_option_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1890);
      END_STATE();
    case 1891:
      ACCEPT_TOKEN(anon_sym_default_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1892:
      ACCEPT_TOKEN(anon_sym_list_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1893:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym__list_parameter);
      END_STATE();
    case 1895:
      ACCEPT_TOKEN(anon_sym_verify_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym__verify_parameter);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(anon_sym_photo_DASHviewer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(aux_sym__command_token1);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(aux_sym__command_token1);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1911);
      END_STATE();
    case 1900:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2022);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(aux_sym__command_token2);
      END_STATE();
    case 1903:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (lookahead == '$') ADVANCE(588);
      END_STATE();
    case 1904:
      ACCEPT_TOKEN(aux_sym__command_token2);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1911);
      END_STATE();
    case 1905:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2022);
      END_STATE();
    case 1908:
      ACCEPT_TOKEN(aux_sym__command_token3);
      END_STATE();
    case 1909:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (lookahead == '$') ADVANCE(588);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(aux_sym__command_token3);
      if (sym_format_character_set_1(lookahead)) ADVANCE(1911);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym_format);
      END_STATE();
    case 1912:
      ACCEPT_TOKEN(anon_sym_exec_DASHpath);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1913:
      ACCEPT_TOKEN(anon_sym_keyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(anon_sym_primary_DASHkeyring);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(anon_sym_trustdb_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(anon_sym_display_DASHcharset);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1917:
      ACCEPT_TOKEN(sym__charset_value);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym__charset_value);
      if (lookahead == '5') ADVANCE(1917);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym__utf8_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym__no_utf8_strings);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(anon_sym_compress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(aux_sym__compress_level_token1);
      END_STATE();
    case 1923:
      ACCEPT_TOKEN(anon_sym_bzip2_DASHcompress_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(anon_sym_default_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(aux_sym__default_cert_level_token1);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(anon_sym_min_DASHcert_DASHlevel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1927:
      ACCEPT_TOKEN(anon_sym_trusted_DASHkey);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(anon_sym_add_DASHdesig_DASHrevoker);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token1);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(aux_sym__add_desig_revoker_token2);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(anon_sym_trust_DASHmodel);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym__model);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym__model);
      if (lookahead == 'p') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(424);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(anon_sym_assert_DASHsigner);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(anon_sym_auto_DASHkey_DASHlocate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym__key_locate_value);
      END_STATE();
    case 1937:
      ACCEPT_TOKEN(sym__key_locate_value);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(anon_sym_keyid_DASHformat);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1939:
      ACCEPT_TOKEN(sym__keyid_format_value);
      END_STATE();
    case 1940:
      ACCEPT_TOKEN(anon_sym_keyserver);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(anon_sym_completes_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1942:
      ACCEPT_TOKEN(anon_sym_marginals_DASHneeded);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1943:
      ACCEPT_TOKEN(anon_sym_tofu_DASHdefault_DASHpolicy);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym__tofu_policy_value);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(anon_sym_max_DASHcert_DASHdepth);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(anon_sym_agent_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(anon_sym_dirmngr_DASHprogram);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1948:
      ACCEPT_TOKEN(anon_sym_limit_DASHcard_DASHinsert_DASHtries);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1949:
      ACCEPT_TOKEN(anon_sym_recipient);
      if (lookahead == '-') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient);
      if (lookahead == '-') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(anon_sym_recipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1952:
      ACCEPT_TOKEN(anon_sym_hidden_DASHrecipient_DASHfile);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1953:
      ACCEPT_TOKEN(anon_sym_encrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(anon_sym_hidden_DASHencrypt_DASHto);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(anon_sym_group);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1957:
      ACCEPT_TOKEN(anon_sym_ungroup);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1958:
      ACCEPT_TOKEN(anon_sym_local_DASHuser);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(anon_sym_sender);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(anon_sym_try_DASHsecret_DASHname);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1961:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1962:
      ACCEPT_TOKEN(anon_sym_max_DASHoutput);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1963:
      ACCEPT_TOKEN(anon_sym_chunk_DASHsize);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1964:
      ACCEPT_TOKEN(anon_sym_input_DASHsize_DASHhint);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1965:
      ACCEPT_TOKEN(anon_sym_key_DASHorigin);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym__origin_value);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym__origin_value);
      if (lookahead == '-') ADVANCE(440);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(anon_sym_import_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym__import_parameter);
      END_STATE();
    case 1970:
      ACCEPT_TOKEN(anon_sym_export_DASHoptions);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym__export_parameter);
      END_STATE();
    case 1972:
      ACCEPT_TOKEN(anon_sym_personal_DASHcipher_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1973:
      ACCEPT_TOKEN(anon_sym_personal_DASHdigest_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(anon_sym_personal_DASHcompress_DASHpreferences);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcipher_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1976:
      ACCEPT_TOKEN(anon_sym_s2k_DASHdigest_DASHalgo);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1977:
      ACCEPT_TOKEN(anon_sym_s2k_DASHmode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1978:
      ACCEPT_TOKEN(aux_sym__s2k_mode_token1);
      END_STATE();
    case 1979:
      ACCEPT_TOKEN(anon_sym_s2k_DASHcount);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1980:
      ACCEPT_TOKEN(anon_sym_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1981:
      ACCEPT_TOKEN(sym__compliance_value);
      END_STATE();
    case 1982:
      ACCEPT_TOKEN(sym__compliance_value);
      if (lookahead == 'b') ADVANCE(281);
      END_STATE();
    case 1983:
      ACCEPT_TOKEN(anon_sym_min_DASHrsa_DASHlength);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1984:
      ACCEPT_TOKEN(sym__require_compliance);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1889);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym_key);
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
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2015);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(2016);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym_url);
      if (lookahead == '-') ADVANCE(603);
      if (lookahead == '.') ADVANCE(593);
      if (lookahead == ':') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(2018);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym_url);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2019);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2021);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(2022);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2023);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__cipher_algo);
      END_STATE();
    case 2025:
      ACCEPT_TOKEN(sym__cipher_algo);
      if (lookahead == '1') ADVANCE(86);
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__hash_algo);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__compression_algo);
      END_STATE();
    case 2028:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 604},
  [2] = {.lex_state = 604},
  [3] = {.lex_state = 604},
  [4] = {.lex_state = 604},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 604},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 604},
  [89] = {.lex_state = 604},
  [90] = {.lex_state = 604},
  [91] = {.lex_state = 604},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 52},
  [107] = {.lex_state = 52},
  [108] = {.lex_state = 52},
  [109] = {.lex_state = 54},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 590},
  [118] = {.lex_state = 52},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 52},
  [121] = {.lex_state = 604},
  [122] = {.lex_state = 604},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 591},
  [126] = {.lex_state = 604},
  [127] = {.lex_state = 604},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 604},
  [130] = {.lex_state = 604},
  [131] = {.lex_state = 604},
  [132] = {.lex_state = 604},
  [133] = {.lex_state = 604},
  [134] = {.lex_state = 604},
  [135] = {.lex_state = 604},
  [136] = {.lex_state = 604},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 604},
  [139] = {.lex_state = 604},
  [140] = {.lex_state = 604},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 604},
  [143] = {.lex_state = 604},
  [144] = {.lex_state = 604},
  [145] = {.lex_state = 604},
  [146] = {.lex_state = 604},
  [147] = {.lex_state = 604},
  [148] = {.lex_state = 604},
  [149] = {.lex_state = 604},
  [150] = {.lex_state = 604},
  [151] = {.lex_state = 604},
  [152] = {.lex_state = 604},
  [153] = {.lex_state = 604},
  [154] = {.lex_state = 604},
  [155] = {.lex_state = 604},
  [156] = {.lex_state = 604},
  [157] = {.lex_state = 604},
  [158] = {.lex_state = 604},
  [159] = {.lex_state = 604},
  [160] = {.lex_state = 604},
  [161] = {.lex_state = 604},
  [162] = {.lex_state = 604},
  [163] = {.lex_state = 604},
  [164] = {.lex_state = 604},
  [165] = {.lex_state = 604},
  [166] = {.lex_state = 604},
  [167] = {.lex_state = 604},
  [168] = {.lex_state = 604},
  [169] = {.lex_state = 604},
  [170] = {.lex_state = 604},
  [171] = {.lex_state = 604},
  [172] = {.lex_state = 604},
  [173] = {.lex_state = 604},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 604},
  [179] = {.lex_state = 604},
  [180] = {.lex_state = 604},
  [181] = {.lex_state = 604},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 604},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 604},
  [187] = {.lex_state = 604},
  [188] = {.lex_state = 604},
  [189] = {.lex_state = 604},
  [190] = {.lex_state = 604},
  [191] = {.lex_state = 604},
  [192] = {.lex_state = 604},
  [193] = {.lex_state = 604},
  [194] = {.lex_state = 604},
  [195] = {.lex_state = 604},
  [196] = {.lex_state = 604},
  [197] = {.lex_state = 604},
  [198] = {.lex_state = 604},
  [199] = {.lex_state = 604},
  [200] = {.lex_state = 604},
  [201] = {.lex_state = 604},
  [202] = {.lex_state = 604},
  [203] = {.lex_state = 604},
  [204] = {.lex_state = 604},
  [205] = {.lex_state = 604},
  [206] = {.lex_state = 604},
  [207] = {.lex_state = 604},
  [208] = {.lex_state = 604},
  [209] = {.lex_state = 604},
  [210] = {.lex_state = 604},
  [211] = {.lex_state = 604},
  [212] = {.lex_state = 604},
  [213] = {.lex_state = 604},
  [214] = {.lex_state = 604},
  [215] = {.lex_state = 604},
  [216] = {.lex_state = 604},
  [217] = {.lex_state = 604},
  [218] = {.lex_state = 604},
  [219] = {.lex_state = 604},
  [220] = {.lex_state = 604},
  [221] = {.lex_state = 604},
  [222] = {.lex_state = 604},
  [223] = {.lex_state = 604},
  [224] = {.lex_state = 604},
  [225] = {.lex_state = 604},
  [226] = {.lex_state = 604},
  [227] = {.lex_state = 604},
  [228] = {.lex_state = 604},
  [229] = {.lex_state = 604},
  [230] = {.lex_state = 604},
  [231] = {.lex_state = 604},
  [232] = {.lex_state = 604},
  [233] = {.lex_state = 604},
  [234] = {.lex_state = 604},
  [235] = {.lex_state = 604},
  [236] = {.lex_state = 604},
  [237] = {.lex_state = 604},
  [238] = {.lex_state = 604},
  [239] = {.lex_state = 604},
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
    [sym_format] = ACTIONS(1),
    [aux_sym__default_cert_level_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym__s2k_mode_token1] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(130),
    [sym_option] = STATE(129),
    [sym__unknown_option] = STATE(122),
    [sym__default_key] = STATE(122),
    [sym__list_options] = STATE(122),
    [sym__verify_options] = STATE(122),
    [sym__photo_viewer] = STATE(122),
    [sym__exec_path] = STATE(122),
    [sym__keyring] = STATE(122),
    [sym__primary_keyring] = STATE(122),
    [sym__trustdb_name] = STATE(122),
    [sym__display_charset] = STATE(122),
    [sym__compress_level] = STATE(122),
    [sym__bzip2_compress_level] = STATE(122),
    [sym__default_cert_level] = STATE(122),
    [sym__min_cert_level] = STATE(122),
    [sym__trusted_key] = STATE(122),
    [sym__add_desig_revoker] = STATE(122),
    [sym__trust_model] = STATE(122),
    [sym__assert_signer] = STATE(122),
    [sym__auto_key_locate] = STATE(145),
    [sym__keyid_format] = STATE(122),
    [sym__keyserver] = STATE(122),
    [sym__completes_needed] = STATE(122),
    [sym__marginals_needed] = STATE(122),
    [sym__tofu_default_policy] = STATE(122),
    [sym__max_cert_depth] = STATE(122),
    [sym__agent_program] = STATE(122),
    [sym__dirmngr_program] = STATE(122),
    [sym__limit_card_insert_tries] = STATE(122),
    [sym__recipient] = STATE(122),
    [sym__hidden_recipient] = STATE(122),
    [sym__recipient_file] = STATE(122),
    [sym__hidden_recipient_file] = STATE(122),
    [sym__encrypt_to] = STATE(122),
    [sym__hidden_encrypt_to] = STATE(122),
    [sym__group] = STATE(170),
    [sym__ungroup] = STATE(122),
    [sym__local_user] = STATE(122),
    [sym__sender] = STATE(122),
    [sym__try_secret_name] = STATE(122),
    [sym__output] = STATE(122),
    [sym__max_output] = STATE(122),
    [sym__chunk_size] = STATE(122),
    [sym__input_size_hint] = STATE(122),
    [sym__key_origin] = STATE(122),
    [sym__import_options] = STATE(122),
    [sym__export_options] = STATE(122),
    [sym__personal_cipher_preferences] = STATE(122),
    [sym__personal_digest_preferences] = STATE(122),
    [sym__personal_compress_preferences] = STATE(122),
    [sym__s2k_cipher_algo] = STATE(122),
    [sym__s2k_digest_algo] = STATE(122),
    [sym__s2k_mode] = STATE(122),
    [sym__s2k_count] = STATE(122),
    [sym__compliance] = STATE(122),
    [sym__min_rsa_length] = STATE(122),
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
    [sym_comment] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
  },
  [2] = {
    [sym_option] = STATE(129),
    [sym__unknown_option] = STATE(122),
    [sym__default_key] = STATE(122),
    [sym__list_options] = STATE(122),
    [sym__verify_options] = STATE(122),
    [sym__photo_viewer] = STATE(122),
    [sym__exec_path] = STATE(122),
    [sym__keyring] = STATE(122),
    [sym__primary_keyring] = STATE(122),
    [sym__trustdb_name] = STATE(122),
    [sym__display_charset] = STATE(122),
    [sym__compress_level] = STATE(122),
    [sym__bzip2_compress_level] = STATE(122),
    [sym__default_cert_level] = STATE(122),
    [sym__min_cert_level] = STATE(122),
    [sym__trusted_key] = STATE(122),
    [sym__add_desig_revoker] = STATE(122),
    [sym__trust_model] = STATE(122),
    [sym__assert_signer] = STATE(122),
    [sym__auto_key_locate] = STATE(145),
    [sym__keyid_format] = STATE(122),
    [sym__keyserver] = STATE(122),
    [sym__completes_needed] = STATE(122),
    [sym__marginals_needed] = STATE(122),
    [sym__tofu_default_policy] = STATE(122),
    [sym__max_cert_depth] = STATE(122),
    [sym__agent_program] = STATE(122),
    [sym__dirmngr_program] = STATE(122),
    [sym__limit_card_insert_tries] = STATE(122),
    [sym__recipient] = STATE(122),
    [sym__hidden_recipient] = STATE(122),
    [sym__recipient_file] = STATE(122),
    [sym__hidden_recipient_file] = STATE(122),
    [sym__encrypt_to] = STATE(122),
    [sym__hidden_encrypt_to] = STATE(122),
    [sym__group] = STATE(170),
    [sym__ungroup] = STATE(122),
    [sym__local_user] = STATE(122),
    [sym__sender] = STATE(122),
    [sym__try_secret_name] = STATE(122),
    [sym__output] = STATE(122),
    [sym__max_output] = STATE(122),
    [sym__chunk_size] = STATE(122),
    [sym__input_size_hint] = STATE(122),
    [sym__key_origin] = STATE(122),
    [sym__import_options] = STATE(122),
    [sym__export_options] = STATE(122),
    [sym__personal_cipher_preferences] = STATE(122),
    [sym__personal_digest_preferences] = STATE(122),
    [sym__personal_compress_preferences] = STATE(122),
    [sym__s2k_cipher_algo] = STATE(122),
    [sym__s2k_digest_algo] = STATE(122),
    [sym__s2k_mode] = STATE(122),
    [sym__s2k_count] = STATE(122),
    [sym__compliance] = STATE(122),
    [sym__min_rsa_length] = STATE(122),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_config_token1] = ACTIONS(127),
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
    [sym_comment] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
  },
  [3] = {
    [sym_option] = STATE(129),
    [sym__unknown_option] = STATE(122),
    [sym__default_key] = STATE(122),
    [sym__list_options] = STATE(122),
    [sym__verify_options] = STATE(122),
    [sym__photo_viewer] = STATE(122),
    [sym__exec_path] = STATE(122),
    [sym__keyring] = STATE(122),
    [sym__primary_keyring] = STATE(122),
    [sym__trustdb_name] = STATE(122),
    [sym__display_charset] = STATE(122),
    [sym__compress_level] = STATE(122),
    [sym__bzip2_compress_level] = STATE(122),
    [sym__default_cert_level] = STATE(122),
    [sym__min_cert_level] = STATE(122),
    [sym__trusted_key] = STATE(122),
    [sym__add_desig_revoker] = STATE(122),
    [sym__trust_model] = STATE(122),
    [sym__assert_signer] = STATE(122),
    [sym__auto_key_locate] = STATE(145),
    [sym__keyid_format] = STATE(122),
    [sym__keyserver] = STATE(122),
    [sym__completes_needed] = STATE(122),
    [sym__marginals_needed] = STATE(122),
    [sym__tofu_default_policy] = STATE(122),
    [sym__max_cert_depth] = STATE(122),
    [sym__agent_program] = STATE(122),
    [sym__dirmngr_program] = STATE(122),
    [sym__limit_card_insert_tries] = STATE(122),
    [sym__recipient] = STATE(122),
    [sym__hidden_recipient] = STATE(122),
    [sym__recipient_file] = STATE(122),
    [sym__hidden_recipient_file] = STATE(122),
    [sym__encrypt_to] = STATE(122),
    [sym__hidden_encrypt_to] = STATE(122),
    [sym__group] = STATE(170),
    [sym__ungroup] = STATE(122),
    [sym__local_user] = STATE(122),
    [sym__sender] = STATE(122),
    [sym__try_secret_name] = STATE(122),
    [sym__output] = STATE(122),
    [sym__max_output] = STATE(122),
    [sym__chunk_size] = STATE(122),
    [sym__input_size_hint] = STATE(122),
    [sym__key_origin] = STATE(122),
    [sym__import_options] = STATE(122),
    [sym__export_options] = STATE(122),
    [sym__personal_cipher_preferences] = STATE(122),
    [sym__personal_digest_preferences] = STATE(122),
    [sym__personal_compress_preferences] = STATE(122),
    [sym__s2k_cipher_algo] = STATE(122),
    [sym__s2k_digest_algo] = STATE(122),
    [sym__s2k_mode] = STATE(122),
    [sym__s2k_count] = STATE(122),
    [sym__compliance] = STATE(122),
    [sym__min_rsa_length] = STATE(122),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_config_token1] = ACTIONS(131),
    [anon_sym_default_DASHrecipient] = ACTIONS(134),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(134),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(134),
    [anon_sym_verbose] = ACTIONS(134),
    [anon_sym_no_DASHtty] = ACTIONS(134),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(134),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(134),
    [anon_sym_enable_DASHdsa2] = ACTIONS(134),
    [anon_sym_disable_DASHdsa2] = ACTIONS(134),
    [anon_sym_no_DASHcompress] = ACTIONS(134),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(134),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(134),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(134),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(134),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(134),
    [anon_sym_always_DASHtrust] = ACTIONS(134),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(134),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(134),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(134),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(134),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(134),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(134),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(134),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(134),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(134),
    [anon_sym_no_DASHautostart] = ACTIONS(134),
    [anon_sym_lock_DASHonce] = ACTIONS(134),
    [anon_sym_lock_DASHmultiple] = ACTIONS(134),
    [anon_sym_lock_DASHnever] = ACTIONS(134),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(134),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(134),
    [anon_sym_no_DASHgreeting] = ACTIONS(134),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(134),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(134),
    [anon_sym_require_DASHsecmem] = ACTIONS(134),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(134),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(134),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(134),
    [anon_sym_expert] = ACTIONS(134),
    [anon_sym_no_DASHexpert] = ACTIONS(134),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(134),
    [anon_sym_no_DASHgroups] = ACTIONS(134),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(134),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(134),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(134),
    [anon_sym_armor] = ACTIONS(134),
    [anon_sym_no_DASHarmor] = ACTIONS(134),
    [anon_sym_with_DASHcolons] = ACTIONS(134),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(134),
    [anon_sym_with_DASHfingerprint] = ACTIONS(134),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(134),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(134),
    [anon_sym_with_DASHkeygrip] = ACTIONS(134),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(134),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(134),
    [anon_sym_with_DASHsecret] = ACTIONS(134),
    [anon_sym_textmode] = ACTIONS(134),
    [anon_sym_no_DASHtextmode] = ACTIONS(134),
    [anon_sym_force_DASHocb] = ACTIONS(134),
    [anon_sym_force_DASHaead] = ACTIONS(134),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(134),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(134),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(134),
    [anon_sym_gnupg] = ACTIONS(134),
    [anon_sym_openpgp] = ACTIONS(134),
    [anon_sym_rfc4880] = ACTIONS(134),
    [anon_sym_rfc4880bis] = ACTIONS(134),
    [anon_sym_rfc2440] = ACTIONS(134),
    [anon_sym_pgp7] = ACTIONS(134),
    [anon_sym_pgp8] = ACTIONS(134),
    [aux_sym__unknown_option_token1] = ACTIONS(137),
    [anon_sym_default_DASHkey] = ACTIONS(140),
    [anon_sym_list_DASHoptions] = ACTIONS(143),
    [anon_sym_verify_DASHoptions] = ACTIONS(146),
    [anon_sym_photo_DASHviewer] = ACTIONS(149),
    [anon_sym_exec_DASHpath] = ACTIONS(152),
    [anon_sym_keyring] = ACTIONS(155),
    [anon_sym_primary_DASHkeyring] = ACTIONS(158),
    [anon_sym_trustdb_DASHname] = ACTIONS(161),
    [anon_sym_display_DASHcharset] = ACTIONS(164),
    [sym__utf8_strings] = ACTIONS(134),
    [sym__no_utf8_strings] = ACTIONS(134),
    [anon_sym_compress_DASHlevel] = ACTIONS(167),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(170),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(173),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(176),
    [anon_sym_trusted_DASHkey] = ACTIONS(179),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(182),
    [anon_sym_trust_DASHmodel] = ACTIONS(185),
    [anon_sym_assert_DASHsigner] = ACTIONS(188),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(191),
    [anon_sym_keyid_DASHformat] = ACTIONS(194),
    [anon_sym_keyserver] = ACTIONS(197),
    [anon_sym_completes_DASHneeded] = ACTIONS(200),
    [anon_sym_marginals_DASHneeded] = ACTIONS(203),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(206),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(209),
    [anon_sym_agent_DASHprogram] = ACTIONS(212),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(215),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(218),
    [anon_sym_recipient] = ACTIONS(221),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(224),
    [anon_sym_recipient_DASHfile] = ACTIONS(227),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(230),
    [anon_sym_encrypt_DASHto] = ACTIONS(233),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(236),
    [anon_sym_group] = ACTIONS(239),
    [anon_sym_ungroup] = ACTIONS(242),
    [anon_sym_local_DASHuser] = ACTIONS(245),
    [anon_sym_sender] = ACTIONS(248),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(251),
    [anon_sym_output] = ACTIONS(254),
    [anon_sym_max_DASHoutput] = ACTIONS(257),
    [anon_sym_chunk_DASHsize] = ACTIONS(260),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(263),
    [anon_sym_key_DASHorigin] = ACTIONS(266),
    [anon_sym_import_DASHoptions] = ACTIONS(269),
    [anon_sym_export_DASHoptions] = ACTIONS(272),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(275),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(278),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(281),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(284),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(287),
    [anon_sym_s2k_DASHmode] = ACTIONS(290),
    [anon_sym_s2k_DASHcount] = ACTIONS(293),
    [anon_sym_compliance] = ACTIONS(296),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(299),
    [sym__require_compliance] = ACTIONS(134),
    [sym_comment] = ACTIONS(302),
    [sym__space] = ACTIONS(123),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [aux_sym_config_token1] = ACTIONS(129),
    [anon_sym_default_DASHrecipient] = ACTIONS(305),
    [anon_sym_default_DASHrecipient_DASHself] = ACTIONS(305),
    [anon_sym_no_DASHdefault_DASHrecipient] = ACTIONS(305),
    [anon_sym_verbose] = ACTIONS(305),
    [anon_sym_no_DASHtty] = ACTIONS(305),
    [anon_sym_enable_DASHlarge_DASHrsa] = ACTIONS(305),
    [anon_sym_disable_DASHlarge_DASHrsa] = ACTIONS(305),
    [anon_sym_enable_DASHdsa2] = ACTIONS(305),
    [anon_sym_disable_DASHdsa2] = ACTIONS(305),
    [anon_sym_no_DASHcompress] = ACTIONS(305),
    [anon_sym_bzip2_DASHdecompress_DASHlowmem] = ACTIONS(305),
    [anon_sym_mangle_DASHdos_DASHfilenames] = ACTIONS(305),
    [anon_sym_no_DASHmangle_DASHdos_DASHfilenames] = ACTIONS(305),
    [anon_sym_ask_DASHcert_DASHlevel] = ACTIONS(305),
    [anon_sym_no_DASHask_DASHcert_DASHlevel] = ACTIONS(305),
    [anon_sym_always_DASHtrust] = ACTIONS(305),
    [anon_sym_no_DASHauto_DASHkey_DASHlocate] = ACTIONS(305),
    [anon_sym_auto_DASHkey_DASHimport] = ACTIONS(305),
    [anon_sym_no_DASHauto_DASHkey_DASHimport] = ACTIONS(305),
    [anon_sym_auto_DASHkey_DASHretrieve] = ACTIONS(305),
    [anon_sym_no_DASHauto_DASHkey_DASHretrieve] = ACTIONS(305),
    [anon_sym_no_DASHsig_DASHcache] = ACTIONS(305),
    [anon_sym_auto_DASHcheck_DASHtrustdb] = ACTIONS(305),
    [anon_sym_no_DASHauto_DASHcheck_DASHtrustdb] = ACTIONS(305),
    [anon_sym_disable_DASHdirmngr] = ACTIONS(305),
    [anon_sym_no_DASHautostart] = ACTIONS(305),
    [anon_sym_lock_DASHonce] = ACTIONS(305),
    [anon_sym_lock_DASHmultiple] = ACTIONS(305),
    [anon_sym_lock_DASHnever] = ACTIONS(305),
    [anon_sym_exit_DASHon_DASHstatus_DASHwrite_DASHerror] = ACTIONS(305),
    [anon_sym_no_DASHrandom_DASHseed_DASHfile] = ACTIONS(305),
    [anon_sym_no_DASHgreeting] = ACTIONS(305),
    [anon_sym_no_DASHsecmem_DASHwarning] = ACTIONS(305),
    [anon_sym_no_DASHpermission_DASHwarning] = ACTIONS(305),
    [anon_sym_require_DASHsecmem] = ACTIONS(305),
    [anon_sym_no_DASHrequire_DASHsecmem] = ACTIONS(305),
    [anon_sym_require_DASHcross_DASHverification] = ACTIONS(305),
    [anon_sym_no_DASHrequire_DASHcross_DASHverification] = ACTIONS(305),
    [anon_sym_expert] = ACTIONS(305),
    [anon_sym_no_DASHexpert] = ACTIONS(305),
    [anon_sym_no_DASHencrypt_DASHto] = ACTIONS(305),
    [anon_sym_no_DASHgroups] = ACTIONS(305),
    [anon_sym_try_DASHall_DASHsecrets] = ACTIONS(305),
    [anon_sym_skip_DASHhidden_DASHrecipients] = ACTIONS(305),
    [anon_sym_no_DASHskip_DASHhidden_DASHrecipients] = ACTIONS(305),
    [anon_sym_armor] = ACTIONS(305),
    [anon_sym_no_DASHarmor] = ACTIONS(305),
    [anon_sym_with_DASHcolons] = ACTIONS(305),
    [anon_sym_legacy_DASHlist_DASHmode] = ACTIONS(305),
    [anon_sym_with_DASHfingerprint] = ACTIONS(305),
    [anon_sym_with_DASHsubkey_DASHfingerprint] = ACTIONS(305),
    [anon_sym_with_DASHicao_DASHspelling] = ACTIONS(305),
    [anon_sym_with_DASHkeygrip] = ACTIONS(305),
    [anon_sym_with_DASHkey_DASHorigin] = ACTIONS(305),
    [anon_sym_with_DASHwkd_DASHhash] = ACTIONS(305),
    [anon_sym_with_DASHsecret] = ACTIONS(305),
    [anon_sym_textmode] = ACTIONS(305),
    [anon_sym_no_DASHtextmode] = ACTIONS(305),
    [anon_sym_force_DASHocb] = ACTIONS(305),
    [anon_sym_force_DASHaead] = ACTIONS(305),
    [anon_sym_disable_DASHsigner_DASHuid] = ACTIONS(305),
    [anon_sym_include_DASHkey_DASHblock] = ACTIONS(305),
    [anon_sym_no_DASHinclude_DASHkey_DASHblock] = ACTIONS(305),
    [anon_sym_gnupg] = ACTIONS(305),
    [anon_sym_openpgp] = ACTIONS(305),
    [anon_sym_rfc4880] = ACTIONS(305),
    [anon_sym_rfc4880bis] = ACTIONS(305),
    [anon_sym_rfc2440] = ACTIONS(305),
    [anon_sym_pgp7] = ACTIONS(305),
    [anon_sym_pgp8] = ACTIONS(305),
    [aux_sym__unknown_option_token1] = ACTIONS(305),
    [anon_sym_default_DASHkey] = ACTIONS(305),
    [anon_sym_list_DASHoptions] = ACTIONS(305),
    [anon_sym_verify_DASHoptions] = ACTIONS(305),
    [anon_sym_photo_DASHviewer] = ACTIONS(305),
    [anon_sym_exec_DASHpath] = ACTIONS(305),
    [anon_sym_keyring] = ACTIONS(305),
    [anon_sym_primary_DASHkeyring] = ACTIONS(305),
    [anon_sym_trustdb_DASHname] = ACTIONS(305),
    [anon_sym_display_DASHcharset] = ACTIONS(305),
    [sym__utf8_strings] = ACTIONS(305),
    [sym__no_utf8_strings] = ACTIONS(305),
    [anon_sym_compress_DASHlevel] = ACTIONS(305),
    [anon_sym_bzip2_DASHcompress_DASHlevel] = ACTIONS(305),
    [anon_sym_default_DASHcert_DASHlevel] = ACTIONS(305),
    [anon_sym_min_DASHcert_DASHlevel] = ACTIONS(305),
    [anon_sym_trusted_DASHkey] = ACTIONS(305),
    [anon_sym_add_DASHdesig_DASHrevoker] = ACTIONS(305),
    [anon_sym_trust_DASHmodel] = ACTIONS(305),
    [anon_sym_assert_DASHsigner] = ACTIONS(305),
    [anon_sym_auto_DASHkey_DASHlocate] = ACTIONS(305),
    [anon_sym_keyid_DASHformat] = ACTIONS(305),
    [anon_sym_keyserver] = ACTIONS(305),
    [anon_sym_completes_DASHneeded] = ACTIONS(305),
    [anon_sym_marginals_DASHneeded] = ACTIONS(305),
    [anon_sym_tofu_DASHdefault_DASHpolicy] = ACTIONS(305),
    [anon_sym_max_DASHcert_DASHdepth] = ACTIONS(305),
    [anon_sym_agent_DASHprogram] = ACTIONS(305),
    [anon_sym_dirmngr_DASHprogram] = ACTIONS(305),
    [anon_sym_limit_DASHcard_DASHinsert_DASHtries] = ACTIONS(305),
    [anon_sym_recipient] = ACTIONS(305),
    [anon_sym_hidden_DASHrecipient] = ACTIONS(305),
    [anon_sym_recipient_DASHfile] = ACTIONS(305),
    [anon_sym_hidden_DASHrecipient_DASHfile] = ACTIONS(305),
    [anon_sym_encrypt_DASHto] = ACTIONS(305),
    [anon_sym_hidden_DASHencrypt_DASHto] = ACTIONS(305),
    [anon_sym_group] = ACTIONS(305),
    [anon_sym_ungroup] = ACTIONS(305),
    [anon_sym_local_DASHuser] = ACTIONS(305),
    [anon_sym_sender] = ACTIONS(305),
    [anon_sym_try_DASHsecret_DASHname] = ACTIONS(305),
    [anon_sym_output] = ACTIONS(305),
    [anon_sym_max_DASHoutput] = ACTIONS(305),
    [anon_sym_chunk_DASHsize] = ACTIONS(305),
    [anon_sym_input_DASHsize_DASHhint] = ACTIONS(305),
    [anon_sym_key_DASHorigin] = ACTIONS(305),
    [anon_sym_import_DASHoptions] = ACTIONS(305),
    [anon_sym_export_DASHoptions] = ACTIONS(305),
    [anon_sym_personal_DASHcipher_DASHpreferences] = ACTIONS(305),
    [anon_sym_personal_DASHdigest_DASHpreferences] = ACTIONS(305),
    [anon_sym_personal_DASHcompress_DASHpreferences] = ACTIONS(305),
    [anon_sym_s2k_DASHcipher_DASHalgo] = ACTIONS(305),
    [anon_sym_s2k_DASHdigest_DASHalgo] = ACTIONS(305),
    [anon_sym_s2k_DASHmode] = ACTIONS(305),
    [anon_sym_s2k_DASHcount] = ACTIONS(305),
    [anon_sym_compliance] = ACTIONS(305),
    [anon_sym_min_DASHrsa_DASHlength] = ACTIONS(305),
    [sym__require_compliance] = ACTIONS(305),
    [sym_comment] = ACTIONS(129),
    [sym__space] = ACTIONS(123),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(307), 1,
      aux_sym__command_token1,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      anon_sym_SQUOTE,
    ACTIONS(313), 1,
      sym_format,
    STATE(61), 1,
      aux_sym__command_repeat1,
    STATE(126), 1,
      sym__command,
  [22] = 6,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(315), 1,
      aux_sym_config_token1,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      sym__key_locate_value,
    ACTIONS(323), 1,
      sym_url,
    STATE(6), 1,
      aux_sym__auto_key_locate_repeat1,
  [41] = 6,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(326), 1,
      aux_sym_config_token1,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      sym__key_locate_value,
    ACTIONS(332), 1,
      sym_url,
    STATE(11), 1,
      aux_sym__auto_key_locate_repeat1,
  [60] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      aux_sym__command_token2,
    STATE(8), 1,
      aux_sym__command_repeat2,
    ACTIONS(339), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [77] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(342), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym__command_token2,
    STATE(8), 1,
      aux_sym__command_repeat2,
    ACTIONS(346), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [94] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    ACTIONS(350), 1,
      aux_sym__command_token3,
    STATE(12), 1,
      aux_sym__command_repeat3,
    ACTIONS(348), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [111] = 6,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      sym__key_locate_value,
    ACTIONS(332), 1,
      sym_url,
    ACTIONS(352), 1,
      aux_sym_config_token1,
    STATE(6), 1,
      aux_sym__auto_key_locate_repeat1,
  [130] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(359), 1,
      aux_sym__command_token3,
    STATE(12), 1,
      aux_sym__command_repeat3,
    ACTIONS(354), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [147] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(362), 1,
      aux_sym_config_token1,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      sym__list_parameter,
    STATE(47), 1,
      aux_sym__list_options_repeat1,
  [163] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(134), 1,
      sym_string,
  [179] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(374), 1,
      aux_sym_config_token1,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      sym__export_parameter,
    STATE(15), 1,
      aux_sym__export_options_repeat1,
  [195] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(153), 1,
      sym_string,
  [211] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(382), 1,
      aux_sym_config_token1,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      sym__import_parameter,
    STATE(17), 1,
      aux_sym__import_options_repeat1,
  [227] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(152), 1,
      sym_string,
  [243] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(392), 1,
      sym__key_locate_value,
    ACTIONS(390), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [255] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(394), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(397), 1,
      anon_sym_SQUOTE,
    ACTIONS(399), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [271] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(402), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      aux_sym__command_token2,
    ACTIONS(407), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [287] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(410), 1,
      aux_sym_config_token1,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      sym__hash_algo,
    STATE(22), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [303] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(418), 1,
      aux_sym_config_token1,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      sym__verify_parameter,
    STATE(23), 1,
      aux_sym__verify_options_repeat1,
  [319] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(166), 1,
      sym_string,
  [335] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(426), 1,
      aux_sym_config_token1,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      sym__list_parameter,
    STATE(25), 1,
      aux_sym__list_options_repeat1,
  [351] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(165), 1,
      sym_string,
  [367] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(434), 1,
      aux_sym_config_token1,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      sym__hash_algo,
    STATE(22), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [383] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(440), 1,
      aux_sym_config_token1,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      sym__cipher_algo,
    STATE(65), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [399] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(446), 1,
      aux_sym_config_token1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      sym__compression_algo,
    STATE(57), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [415] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(164), 1,
      sym_string,
  [431] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      sym__hash_algo,
    ACTIONS(452), 1,
      aux_sym_config_token1,
    STATE(22), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [447] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(163), 1,
      sym_string,
  [463] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      sym__cipher_algo,
    ACTIONS(454), 1,
      aux_sym_config_token1,
    STATE(65), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [479] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(144), 1,
      sym_string,
  [495] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(456), 1,
      aux_sym_config_token1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      sym__export_parameter,
    STATE(15), 1,
      aux_sym__export_options_repeat1,
  [511] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(162), 1,
      sym_string,
  [527] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(462), 1,
      aux_sym_config_token1,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      sym__import_parameter,
    STATE(17), 1,
      aux_sym__import_options_repeat1,
  [543] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(161), 1,
      sym_string,
  [559] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(172), 1,
      sym_string,
  [575] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(470), 1,
      sym__key_locate_value,
    ACTIONS(468), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym_url,
  [587] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(160), 1,
      sym_string,
  [603] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(472), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
    ACTIONS(476), 1,
      aux_sym__command_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [619] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(474), 1,
      anon_sym_DQUOTE,
    ACTIONS(478), 1,
      aux_sym__command_token2,
    ACTIONS(480), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [635] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(482), 1,
      aux_sym_config_token1,
    ACTIONS(484), 1,
      aux_sym__command_token1,
    ACTIONS(487), 1,
      sym_format,
    STATE(44), 1,
      aux_sym__command_repeat1,
  [651] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(490), 1,
      aux_sym_config_token1,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      sym__verify_parameter,
    STATE(23), 1,
      aux_sym__verify_options_repeat1,
  [667] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(159), 1,
      sym_string,
  [683] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      sym__list_parameter,
    ACTIONS(496), 1,
      aux_sym_config_token1,
    STATE(25), 1,
      aux_sym__list_options_repeat1,
  [699] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(158), 1,
      sym_string,
  [715] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      sym__hash_algo,
    ACTIONS(498), 1,
      aux_sym_config_token1,
    STATE(27), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [731] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      sym__cipher_algo,
    ACTIONS(500), 1,
      aux_sym_config_token1,
    STATE(28), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [747] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      sym__compression_algo,
    ACTIONS(502), 1,
      aux_sym_config_token1,
    STATE(29), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [763] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      sym__hash_algo,
    ACTIONS(504), 1,
      aux_sym_config_token1,
    STATE(31), 1,
      aux_sym__personal_digest_preferences_repeat1,
  [779] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      sym__cipher_algo,
    ACTIONS(506), 1,
      aux_sym_config_token1,
    STATE(33), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [795] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      sym__export_parameter,
    ACTIONS(508), 1,
      aux_sym_config_token1,
    STATE(35), 1,
      aux_sym__export_options_repeat1,
  [811] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      sym__import_parameter,
    ACTIONS(510), 1,
      aux_sym_config_token1,
    STATE(37), 1,
      aux_sym__import_options_repeat1,
  [827] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(157), 1,
      sym_string,
  [843] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(512), 1,
      aux_sym_config_token1,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      sym__compression_algo,
    STATE(57), 1,
      aux_sym__personal_compress_preferences_repeat1,
  [859] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(156), 1,
      sym_string,
  [875] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(133), 1,
      sym_string,
  [891] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(132), 1,
      sym_string,
  [907] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(520), 1,
      aux_sym_config_token1,
    ACTIONS(522), 1,
      aux_sym__command_token1,
    ACTIONS(524), 1,
      sym_format,
    STATE(44), 1,
      aux_sym__command_repeat1,
  [923] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(528), 1,
      aux_sym__command_token3,
    STATE(10), 1,
      aux_sym__command_repeat3,
    ACTIONS(526), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [937] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(530), 1,
      aux_sym__command_token2,
    STATE(9), 1,
      aux_sym__command_repeat2,
    ACTIONS(532), 2,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
      sym_format,
  [951] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      sym__verify_parameter,
    ACTIONS(534), 1,
      aux_sym_config_token1,
    STATE(45), 1,
      aux_sym__verify_options_repeat1,
  [967] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(536), 1,
      aux_sym_config_token1,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      sym__cipher_algo,
    STATE(65), 1,
      aux_sym__personal_cipher_preferences_repeat1,
  [983] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(155), 1,
      sym_string,
  [999] = 5,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(372), 1,
      aux_sym_string_token1,
    STATE(131), 1,
      sym_string,
  [1015] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(544), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1024] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(546), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1033] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(548), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    ACTIONS(550), 1,
      aux_sym__command_token3,
    STATE(42), 1,
      aux_sym_string_repeat2,
  [1046] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(552), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [1055] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(554), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__export_parameter,
  [1064] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(556), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1073] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(558), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1082] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(560), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1091] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(562), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__compression_algo,
  [1100] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(564), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__cipher_algo,
  [1109] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(566), 1,
      aux_sym__command_token2,
    ACTIONS(568), 1,
      anon_sym_BSLASH_DOLLAR_LBRACEq_RBRACE,
    STATE(43), 1,
      aux_sym_string_repeat1,
  [1122] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(570), 1,
      aux_sym__add_desig_revoker_token1,
    ACTIONS(572), 2,
      aux_sym__add_desig_revoker_token2,
      sym_key,
  [1133] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(574), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__import_parameter,
  [1142] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(576), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__verify_parameter,
  [1151] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(578), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [1160] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(580), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__hash_algo,
  [1169] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(582), 3,
      aux_sym_config_token1,
      anon_sym_COMMA,
      sym__list_parameter,
  [1178] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(584), 1,
      sym__key_locate_value,
    ACTIONS(586), 1,
      sym_url,
  [1188] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(588), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1196] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(590), 1,
      sym__key_locate_value,
    ACTIONS(592), 1,
      sym_url,
  [1206] = 3,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(594), 1,
      aux_sym_config_token1,
    ACTIONS(596), 1,
      anon_sym_COMMA,
  [1216] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(598), 2,
      aux_sym_config_token1,
      anon_sym_EQ,
  [1224] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(600), 1,
      aux_sym_config_token1,
  [1231] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(602), 1,
      aux_sym_config_token1,
  [1238] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(604), 1,
      sym__charset_value,
  [1245] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(606), 1,
      aux_sym__compress_level_token1,
  [1252] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(608), 1,
      aux_sym__compress_level_token1,
  [1259] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(610), 1,
      aux_sym__default_cert_level_token1,
  [1266] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(612), 1,
      aux_sym__default_cert_level_token1,
  [1273] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(614), 1,
      sym_key,
  [1280] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(616), 1,
      sym__model,
  [1287] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(618), 1,
      sym__keyid_format_value,
  [1294] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(620), 1,
      sym_url,
  [1301] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(622), 1,
      sym_number,
  [1308] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(624), 1,
      sym_number,
  [1315] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(626), 1,
      sym__tofu_policy_value,
  [1322] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(628), 1,
      sym_number,
  [1329] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(630), 1,
      sym_number,
  [1336] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(632), 1,
      sym_number,
  [1343] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(634), 1,
      sym_number,
  [1350] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(636), 1,
      sym_number,
  [1357] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(638), 1,
      sym__origin_value,
  [1364] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(640), 1,
      sym__import_parameter,
  [1371] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(642), 1,
      sym__export_parameter,
  [1378] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(644), 1,
      sym__cipher_algo,
  [1385] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(646), 1,
      sym__hash_algo,
  [1392] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(648), 1,
      sym__compression_algo,
  [1399] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(650), 1,
      sym__cipher_algo,
  [1406] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(652), 1,
      sym__hash_algo,
  [1413] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(654), 1,
      aux_sym__s2k_mode_token1,
  [1420] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(656), 1,
      sym_number,
  [1427] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(658), 1,
      sym__compliance_value,
  [1434] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(660), 1,
      sym_number,
  [1441] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(662), 1,
      aux_sym_config_token1,
  [1448] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(664), 1,
      aux_sym_config_token1,
  [1455] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(666), 1,
      sym__list_parameter,
  [1462] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(668), 1,
      sym_key,
  [1469] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(670), 1,
      aux_sym__unknown_option_token2,
  [1476] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(672), 1,
      aux_sym_config_token1,
  [1483] = 2,
    ACTIONS(674), 1,
      aux_sym_config_token1,
    ACTIONS(676), 1,
      sym__space,
  [1490] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(678), 1,
      sym__verify_parameter,
  [1497] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(680), 1,
      aux_sym_config_token1,
  [1504] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(682), 1,
      ts_builtin_sym_end,
  [1511] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(684), 1,
      aux_sym_config_token1,
  [1518] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(686), 1,
      aux_sym_config_token1,
  [1525] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(688), 1,
      aux_sym_config_token1,
  [1532] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(690), 1,
      aux_sym_config_token1,
  [1539] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(692), 1,
      aux_sym_config_token1,
  [1546] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(694), 1,
      aux_sym_config_token1,
  [1553] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(696), 1,
      sym__import_parameter,
  [1560] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(698), 1,
      aux_sym_config_token1,
  [1567] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(700), 1,
      aux_sym_config_token1,
  [1574] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(702), 1,
      aux_sym_config_token1,
  [1581] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(704), 1,
      sym_key,
  [1588] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(706), 1,
      aux_sym_config_token1,
  [1595] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(708), 1,
      aux_sym_config_token1,
  [1602] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(710), 1,
      aux_sym_config_token1,
  [1609] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(712), 1,
      aux_sym_config_token1,
  [1616] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(714), 1,
      aux_sym_config_token1,
  [1623] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(716), 1,
      aux_sym_config_token1,
  [1630] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(718), 1,
      aux_sym_config_token1,
  [1637] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(720), 1,
      aux_sym_config_token1,
  [1644] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(722), 1,
      aux_sym_config_token1,
  [1651] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(724), 1,
      aux_sym_config_token1,
  [1658] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(726), 1,
      aux_sym_config_token1,
  [1665] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(728), 1,
      aux_sym_config_token1,
  [1672] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(730), 1,
      aux_sym_config_token1,
  [1679] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(732), 1,
      aux_sym_config_token1,
  [1686] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(734), 1,
      aux_sym_config_token1,
  [1693] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(736), 1,
      aux_sym_config_token1,
  [1700] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(738), 1,
      aux_sym_config_token1,
  [1707] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(740), 1,
      aux_sym_config_token1,
  [1714] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(742), 1,
      aux_sym_config_token1,
  [1721] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(744), 1,
      anon_sym_EQ,
  [1728] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(746), 1,
      aux_sym_config_token1,
  [1735] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(748), 1,
      aux_sym_config_token1,
  [1742] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(750), 1,
      aux_sym_config_token1,
  [1749] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(752), 1,
      aux_sym_config_token1,
  [1756] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(754), 1,
      aux_sym_config_token1,
  [1763] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(756), 1,
      aux_sym_config_token1,
  [1770] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(758), 1,
      aux_sym_config_token1,
  [1777] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(760), 1,
      aux_sym_config_token1,
  [1784] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(762), 1,
      aux_sym_config_token1,
  [1791] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(764), 1,
      aux_sym_config_token1,
  [1798] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(766), 1,
      aux_sym_config_token1,
  [1805] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(768), 1,
      aux_sym_config_token1,
  [1812] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(770), 1,
      sym__compression_algo,
  [1819] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(772), 1,
      sym__hash_algo,
  [1826] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(774), 1,
      sym__cipher_algo,
  [1833] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(776), 1,
      sym__export_parameter,
  [1840] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(778), 1,
      aux_sym_config_token1,
  [1847] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(780), 1,
      aux_sym_config_token1,
  [1854] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(782), 1,
      aux_sym_config_token1,
  [1861] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(784), 1,
      aux_sym_config_token1,
  [1868] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(786), 1,
      sym__list_parameter,
  [1875] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(788), 1,
      sym__verify_parameter,
  [1882] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(790), 1,
      aux_sym_config_token1,
  [1889] = 2,
    ACTIONS(123), 1,
      sym__space,
    ACTIONS(792), 1,
      sym_url,
  [1896] = 1,
    ACTIONS(794), 1,
      sym__space,
  [1900] = 1,
    ACTIONS(796), 1,
      sym__space,
  [1904] = 1,
    ACTIONS(798), 1,
      sym__space,
  [1908] = 1,
    ACTIONS(800), 1,
      sym__space,
  [1912] = 1,
    ACTIONS(802), 1,
      sym__space,
  [1916] = 1,
    ACTIONS(804), 1,
      sym__space,
  [1920] = 1,
    ACTIONS(806), 1,
      sym__space,
  [1924] = 1,
    ACTIONS(808), 1,
      sym__space,
  [1928] = 1,
    ACTIONS(810), 1,
      sym__space,
  [1932] = 1,
    ACTIONS(812), 1,
      sym__space,
  [1936] = 1,
    ACTIONS(814), 1,
      sym__space,
  [1940] = 1,
    ACTIONS(816), 1,
      sym__space,
  [1944] = 1,
    ACTIONS(818), 1,
      sym__space,
  [1948] = 1,
    ACTIONS(820), 1,
      sym__space,
  [1952] = 1,
    ACTIONS(822), 1,
      sym__space,
  [1956] = 1,
    ACTIONS(824), 1,
      sym__space,
  [1960] = 1,
    ACTIONS(826), 1,
      sym__space,
  [1964] = 1,
    ACTIONS(828), 1,
      sym__space,
  [1968] = 1,
    ACTIONS(830), 1,
      sym__space,
  [1972] = 1,
    ACTIONS(832), 1,
      sym__space,
  [1976] = 1,
    ACTIONS(834), 1,
      sym__space,
  [1980] = 1,
    ACTIONS(836), 1,
      sym__space,
  [1984] = 1,
    ACTIONS(838), 1,
      sym__space,
  [1988] = 1,
    ACTIONS(840), 1,
      sym__space,
  [1992] = 1,
    ACTIONS(842), 1,
      sym__space,
  [1996] = 1,
    ACTIONS(844), 1,
      sym__space,
  [2000] = 1,
    ACTIONS(846), 1,
      sym__space,
  [2004] = 1,
    ACTIONS(848), 1,
      sym__space,
  [2008] = 1,
    ACTIONS(850), 1,
      sym__space,
  [2012] = 1,
    ACTIONS(852), 1,
      sym__space,
  [2016] = 1,
    ACTIONS(854), 1,
      sym__space,
  [2020] = 1,
    ACTIONS(856), 1,
      sym__space,
  [2024] = 1,
    ACTIONS(858), 1,
      sym__space,
  [2028] = 1,
    ACTIONS(860), 1,
      sym__space,
  [2032] = 1,
    ACTIONS(862), 1,
      sym__space,
  [2036] = 1,
    ACTIONS(864), 1,
      sym__space,
  [2040] = 1,
    ACTIONS(866), 1,
      sym__space,
  [2044] = 1,
    ACTIONS(868), 1,
      sym__space,
  [2048] = 1,
    ACTIONS(870), 1,
      sym__space,
  [2052] = 1,
    ACTIONS(872), 1,
      sym__space,
  [2056] = 1,
    ACTIONS(874), 1,
      sym__space,
  [2060] = 1,
    ACTIONS(876), 1,
      sym__space,
  [2064] = 1,
    ACTIONS(878), 1,
      sym__space,
  [2068] = 1,
    ACTIONS(880), 1,
      sym__space,
  [2072] = 1,
    ACTIONS(882), 1,
      sym__space,
  [2076] = 1,
    ACTIONS(884), 1,
      sym__space,
  [2080] = 1,
    ACTIONS(886), 1,
      sym__space,
  [2084] = 1,
    ACTIONS(888), 1,
      sym__space,
  [2088] = 1,
    ACTIONS(890), 1,
      sym__space,
  [2092] = 1,
    ACTIONS(892), 1,
      sym__space,
  [2096] = 1,
    ACTIONS(894), 1,
      sym__space,
  [2100] = 1,
    ACTIONS(896), 1,
      sym__space,
  [2104] = 1,
    ACTIONS(898), 1,
      sym__space,
  [2108] = 1,
    ACTIONS(900), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 22,
  [SMALL_STATE(7)] = 41,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 94,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 130,
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
  [SMALL_STATE(40)] = 575,
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
  [SMALL_STATE(60)] = 891,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 923,
  [SMALL_STATE(63)] = 937,
  [SMALL_STATE(64)] = 951,
  [SMALL_STATE(65)] = 967,
  [SMALL_STATE(66)] = 983,
  [SMALL_STATE(67)] = 999,
  [SMALL_STATE(68)] = 1015,
  [SMALL_STATE(69)] = 1024,
  [SMALL_STATE(70)] = 1033,
  [SMALL_STATE(71)] = 1046,
  [SMALL_STATE(72)] = 1055,
  [SMALL_STATE(73)] = 1064,
  [SMALL_STATE(74)] = 1073,
  [SMALL_STATE(75)] = 1082,
  [SMALL_STATE(76)] = 1091,
  [SMALL_STATE(77)] = 1100,
  [SMALL_STATE(78)] = 1109,
  [SMALL_STATE(79)] = 1122,
  [SMALL_STATE(80)] = 1133,
  [SMALL_STATE(81)] = 1142,
  [SMALL_STATE(82)] = 1151,
  [SMALL_STATE(83)] = 1160,
  [SMALL_STATE(84)] = 1169,
  [SMALL_STATE(85)] = 1178,
  [SMALL_STATE(86)] = 1188,
  [SMALL_STATE(87)] = 1196,
  [SMALL_STATE(88)] = 1206,
  [SMALL_STATE(89)] = 1216,
  [SMALL_STATE(90)] = 1224,
  [SMALL_STATE(91)] = 1231,
  [SMALL_STATE(92)] = 1238,
  [SMALL_STATE(93)] = 1245,
  [SMALL_STATE(94)] = 1252,
  [SMALL_STATE(95)] = 1259,
  [SMALL_STATE(96)] = 1266,
  [SMALL_STATE(97)] = 1273,
  [SMALL_STATE(98)] = 1280,
  [SMALL_STATE(99)] = 1287,
  [SMALL_STATE(100)] = 1294,
  [SMALL_STATE(101)] = 1301,
  [SMALL_STATE(102)] = 1308,
  [SMALL_STATE(103)] = 1315,
  [SMALL_STATE(104)] = 1322,
  [SMALL_STATE(105)] = 1329,
  [SMALL_STATE(106)] = 1336,
  [SMALL_STATE(107)] = 1343,
  [SMALL_STATE(108)] = 1350,
  [SMALL_STATE(109)] = 1357,
  [SMALL_STATE(110)] = 1364,
  [SMALL_STATE(111)] = 1371,
  [SMALL_STATE(112)] = 1378,
  [SMALL_STATE(113)] = 1385,
  [SMALL_STATE(114)] = 1392,
  [SMALL_STATE(115)] = 1399,
  [SMALL_STATE(116)] = 1406,
  [SMALL_STATE(117)] = 1413,
  [SMALL_STATE(118)] = 1420,
  [SMALL_STATE(119)] = 1427,
  [SMALL_STATE(120)] = 1434,
  [SMALL_STATE(121)] = 1441,
  [SMALL_STATE(122)] = 1448,
  [SMALL_STATE(123)] = 1455,
  [SMALL_STATE(124)] = 1462,
  [SMALL_STATE(125)] = 1469,
  [SMALL_STATE(126)] = 1476,
  [SMALL_STATE(127)] = 1483,
  [SMALL_STATE(128)] = 1490,
  [SMALL_STATE(129)] = 1497,
  [SMALL_STATE(130)] = 1504,
  [SMALL_STATE(131)] = 1511,
  [SMALL_STATE(132)] = 1518,
  [SMALL_STATE(133)] = 1525,
  [SMALL_STATE(134)] = 1532,
  [SMALL_STATE(135)] = 1539,
  [SMALL_STATE(136)] = 1546,
  [SMALL_STATE(137)] = 1553,
  [SMALL_STATE(138)] = 1560,
  [SMALL_STATE(139)] = 1567,
  [SMALL_STATE(140)] = 1574,
  [SMALL_STATE(141)] = 1581,
  [SMALL_STATE(142)] = 1588,
  [SMALL_STATE(143)] = 1595,
  [SMALL_STATE(144)] = 1602,
  [SMALL_STATE(145)] = 1609,
  [SMALL_STATE(146)] = 1616,
  [SMALL_STATE(147)] = 1623,
  [SMALL_STATE(148)] = 1630,
  [SMALL_STATE(149)] = 1637,
  [SMALL_STATE(150)] = 1644,
  [SMALL_STATE(151)] = 1651,
  [SMALL_STATE(152)] = 1658,
  [SMALL_STATE(153)] = 1665,
  [SMALL_STATE(154)] = 1672,
  [SMALL_STATE(155)] = 1679,
  [SMALL_STATE(156)] = 1686,
  [SMALL_STATE(157)] = 1693,
  [SMALL_STATE(158)] = 1700,
  [SMALL_STATE(159)] = 1707,
  [SMALL_STATE(160)] = 1714,
  [SMALL_STATE(161)] = 1721,
  [SMALL_STATE(162)] = 1728,
  [SMALL_STATE(163)] = 1735,
  [SMALL_STATE(164)] = 1742,
  [SMALL_STATE(165)] = 1749,
  [SMALL_STATE(166)] = 1756,
  [SMALL_STATE(167)] = 1763,
  [SMALL_STATE(168)] = 1770,
  [SMALL_STATE(169)] = 1777,
  [SMALL_STATE(170)] = 1784,
  [SMALL_STATE(171)] = 1791,
  [SMALL_STATE(172)] = 1798,
  [SMALL_STATE(173)] = 1805,
  [SMALL_STATE(174)] = 1812,
  [SMALL_STATE(175)] = 1819,
  [SMALL_STATE(176)] = 1826,
  [SMALL_STATE(177)] = 1833,
  [SMALL_STATE(178)] = 1840,
  [SMALL_STATE(179)] = 1847,
  [SMALL_STATE(180)] = 1854,
  [SMALL_STATE(181)] = 1861,
  [SMALL_STATE(182)] = 1868,
  [SMALL_STATE(183)] = 1875,
  [SMALL_STATE(184)] = 1882,
  [SMALL_STATE(185)] = 1889,
  [SMALL_STATE(186)] = 1896,
  [SMALL_STATE(187)] = 1900,
  [SMALL_STATE(188)] = 1904,
  [SMALL_STATE(189)] = 1908,
  [SMALL_STATE(190)] = 1912,
  [SMALL_STATE(191)] = 1916,
  [SMALL_STATE(192)] = 1920,
  [SMALL_STATE(193)] = 1924,
  [SMALL_STATE(194)] = 1928,
  [SMALL_STATE(195)] = 1932,
  [SMALL_STATE(196)] = 1936,
  [SMALL_STATE(197)] = 1940,
  [SMALL_STATE(198)] = 1944,
  [SMALL_STATE(199)] = 1948,
  [SMALL_STATE(200)] = 1952,
  [SMALL_STATE(201)] = 1956,
  [SMALL_STATE(202)] = 1960,
  [SMALL_STATE(203)] = 1964,
  [SMALL_STATE(204)] = 1968,
  [SMALL_STATE(205)] = 1972,
  [SMALL_STATE(206)] = 1976,
  [SMALL_STATE(207)] = 1980,
  [SMALL_STATE(208)] = 1984,
  [SMALL_STATE(209)] = 1988,
  [SMALL_STATE(210)] = 1992,
  [SMALL_STATE(211)] = 1996,
  [SMALL_STATE(212)] = 2000,
  [SMALL_STATE(213)] = 2004,
  [SMALL_STATE(214)] = 2008,
  [SMALL_STATE(215)] = 2012,
  [SMALL_STATE(216)] = 2016,
  [SMALL_STATE(217)] = 2020,
  [SMALL_STATE(218)] = 2024,
  [SMALL_STATE(219)] = 2028,
  [SMALL_STATE(220)] = 2032,
  [SMALL_STATE(221)] = 2036,
  [SMALL_STATE(222)] = 2040,
  [SMALL_STATE(223)] = 2044,
  [SMALL_STATE(224)] = 2048,
  [SMALL_STATE(225)] = 2052,
  [SMALL_STATE(226)] = 2056,
  [SMALL_STATE(227)] = 2060,
  [SMALL_STATE(228)] = 2064,
  [SMALL_STATE(229)] = 2068,
  [SMALL_STATE(230)] = 2072,
  [SMALL_STATE(231)] = 2076,
  [SMALL_STATE(232)] = 2080,
  [SMALL_STATE(233)] = 2084,
  [SMALL_STATE(234)] = 2088,
  [SMALL_STATE(235)] = 2092,
  [SMALL_STATE(236)] = 2096,
  [SMALL_STATE(237)] = 2100,
  [SMALL_STATE(238)] = 2104,
  [SMALL_STATE(239)] = 2108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(122),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(127),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(234),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(233),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(232),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(231),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(230),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(227),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(226),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(225),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(224),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(223),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(222),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(221),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(219),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(218),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(217),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(216),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(215),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(214),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(213),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(212),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(210),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(209),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(207),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(206),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(204),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(203),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(201),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(200),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(197),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(196),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(195),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(194),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(192),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(191),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(190),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(189),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(188),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(187),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(199),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(193),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(198),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(205),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(208),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(211),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(220),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(228),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(229),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(235),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(236),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(237),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(238),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(239),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(186),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(202),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(129),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 21),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 21), SHIFT_REPEAT(87),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 21), SHIFT_REPEAT(40),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 21), SHIFT_REPEAT(40),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 3, .production_id = 8),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(8),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat2, 2), SHIFT_REPEAT(8),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__auto_key_locate, 4, .production_id = 16),
  [354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(12),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat3, 2),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat3, 2), SHIFT_REPEAT(12),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 3, .production_id = 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(177),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2), SHIFT_REPEAT(69),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(137),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2), SHIFT_REPEAT(80),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 20),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 2, .production_id = 20),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(20),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(21),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(175),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2), SHIFT_REPEAT(82),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(183),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2), SHIFT_REPEAT(75),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(182),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2), SHIFT_REPEAT(74),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 4, .production_id = 12),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 4, .production_id = 12),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 4, .production_id = 12),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 4, .production_id = 12),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 4, .production_id = 12),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 4, .production_id = 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 4, .production_id = 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 15),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__auto_key_locate_repeat1, 1, .production_id = 15),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(44),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__command_repeat1, 2), SHIFT_REPEAT(44),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 4, .production_id = 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__list_options, 4, .production_id = 3),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_digest_algo, 3, .production_id = 12),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_cipher_algo, 3, .production_id = 12),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_compress_preferences, 3, .production_id = 12),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_digest_preferences, 3, .production_id = 12),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__personal_cipher_preferences, 3, .production_id = 12),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__export_options, 3, .production_id = 3),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__import_options, 3, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(174),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2), SHIFT_REPEAT(68),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 1, .production_id = 5),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verify_options, 3, .production_id = 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(176),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2), SHIFT_REPEAT(77),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 1, .production_id = 17),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 1, .production_id = 14),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 2, .production_id = 23),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__export_options_repeat1, 2, .production_id = 18),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 2, .production_id = 18),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 1, .production_id = 14),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 1, .production_id = 14),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_compress_preferences_repeat1, 2, .production_id = 23),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_cipher_preferences_repeat1, 1, .production_id = 17),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__import_options_repeat1, 1, .production_id = 14),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__verify_options_repeat1, 2, .production_id = 18),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 1, .production_id = 17),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__personal_digest_preferences_repeat1, 2, .production_id = 23),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__list_options_repeat1, 2, .production_id = 18),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 19),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 3, .production_id = 11),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, .production_id = 5),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unknown_option, 3),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bzip2_compress_level, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_key, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__photo_viewer, 3, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unknown_option, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [682] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exec_path, 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyring, 3),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_keyring, 3),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trustdb_name, 3),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_charset, 3, .production_id = 6),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compress_level, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__default_cert_level, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_cert_level, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trusted_key, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trust_model, 3, .production_id = 7),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assert_signer, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyid_format, 3, .production_id = 9),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__keyserver, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__completes_needed, 3),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__marginals_needed, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__tofu_default_policy, 3, .production_id = 10),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_cert_depth, 3),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__agent_program, 3),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dirmngr_program, 3),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__limit_card_insert_tries, 3),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient, 3),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipient_file, 3),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_recipient_file, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__encrypt_to, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__hidden_encrypt_to, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ungroup, 3),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__local_user, 3),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sender, 3),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__try_secret_name, 3),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output, 3),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__max_output, 3),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chunk_size, 3),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__input_size_hint, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 1, .production_id = 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_origin, 5, .production_id = 11),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group, 5, .production_id = 22),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__command, 3, .production_id = 19),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_mode, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__s2k_count, 3),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__compliance, 3, .production_id = 13),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__min_rsa_length, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__add_desig_revoker, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
