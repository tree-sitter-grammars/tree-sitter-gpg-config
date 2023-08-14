/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 * @see {@link https://www.gnupg.org/documentation/manuals/gnupg/GPG-Options.html|GPG Options}
 */

/**
 * @param q {'"'|"'"}
 * @param extra {...Rule}
 */
const quoted = (q, ...extra) =>
  seq(q, field('content',
    repeat1(choice(
      new RegExp(`[^${q}]`),
      String.raw`\${q}`,
      ...extra
    ))
  ), q);

/** @param word {string} */
const ci = (word) =>
  alias(new RegExp(word, 'i'), word);

module.exports = grammar({
  name: 'gpg',

  extras: $ => [
    $._space,
  ],

  rules: {
    config: $ => repeat(
      seq(
        optional(
          choice(
            $.comment,
            $.default_key,
            $.default_recipient,
            $.default_recipient_self,
            $.no_default_recipient,
            $.verbose,
            $.no_tty,
            // TODO: $.list_filter,
            $.list_options,
            $.verify_options,
            $.enable_large_rsa,
            $.disable_large_rsa,
            $.enable_dsa2,
            $.disable_dsa2,
            $.photo_viewer,
            $.exec_path,
            $.keyring,
            $.primary_keyring,
            $.trustdb_name,
            $.display_charset,
            $.utf8_strings,
            $.no_utf8_strings,
            $.compress_level,
            $.bzip2_compress_level,
            $.no_compress,
            $.bzip2_decompress_lowmem,
            $.mangle_dos_filenames,
            $.no_mangle_dos_filenames,
            $.ask_cert_level,
            $.no_ask_cert_level,
            $.default_cert_level,
            $.min_cert_level,
            $.trusted_key,
            $.add_desig_revoker,
            $.trust_model,
            $.always_trust,
            $.assert_signer,
            $.auto_key_locate,
            $.no_auto_key_locate,
            $.auto_key_import,
            $.no_auto_key_import,
            $.auto_key_retrieve,
            $.no_auto_key_retrieve,
            $.keyid_format,
            $.keyserver,
            // TODO: $.keyserver_options,
            $.completes_needed,
            $.marginals_needed,
            $.tofu_default_policy,
            $.max_cert_depth,
            $.no_sig_cache,
            $.auto_check_trustdb,
            $.no_auto_check_trustdb,
            $.agent_program,
            $.dirmngr_program,
            $.disable_dirmngr,
            $.no_autostart,
            $.lock_once,
            $.lock_multiple,
            $.lock_never,
            $.exit_on_status_write_error,
            $.limit_card_insert_tries,
            $.no_random_seed_file,
            $.no_greeting,
            $.no_secmem_warning,
            $.no_permission_warning,
            $.require_secmem,
            $.no_require_secmem,
            $.require_cross_verification,
            $.no_require_cross_verification,
            $.expert,
            $.no_expert,

            $.textmode,
            $.no_textmode,
            $.force_ocb,
            $.disable_signer_uid,
            $.include_key_block,
            $.no_include_key_block,
            $.personal_cipher_preferences,
            $.personal_digest_preferences,
            $.personal_compress_preferences,
            $.s2k_cipher_algo,
            $.s2k_digest_algo,
            $.s2k_mode,
            $.s2k_count,
            $.gnupg,
            $.openpgp,
            $.rfc4880,
            $.rfc4880bis,
            $.rfc2440,
            $.pgp7,
            $.pgp8,
            $.compliance,
            $.min_rsa_length,
            $.require_compliance,
          ),
        ),
        /\r?\n/
      )
    ),

    // GPG Configuration Options

    default_key: $ => seq(
      alias('default-key', $.option),
      $._space,
      $.key
    ),

    default_recipient: $ => seq(
      alias('default-recipient', $.option),
      $._space,
      $.string
    ),

    default_recipient_self: $ =>
      alias('default-recipient-self', $.option),

    no_default_recipient: $ =>
      alias('no-default-recipient', $.option),

    verbose: $ =>
      alias('verbose', $.option),

    no_tty: $ =>
      alias('no-tty', $.option),

    // TODO: list_filter

    list_options: $ => prec.right(seq(
      alias('list-options', $.option),
      $._space,
      field('parameter', $._list_parameter),
      repeat(seq(
        optional(','),
        field('parameter', $._list_parameter)
      ))
    )),

    _list_parameter: _ => token(choice(
      ci('show-photos'),
      ci('show-usage'),
      ci('show-policy-urls'),
      ci('show-notations'),
      ci('show-std-notations'),
      ci('show-user-notations'),
      ci('show-keyserver-urls'),
      ci('show-uid-validity'),
      ci('show-unusable-uids'),
      ci('show-unusable-subkeys'),
      ci('show-unusable-sigs'),
      ci('show-keyring'),
      ci('show-sig-expire'),
      ci('show-sig-subpackets'),
      ci('show-only-fpr-mbox'),
      ci('sort-sigs'),
    )),

    verify_options: $ => prec.right(seq(
      alias('verify-options', $.option),
      $._space,
      field('parameter', $._verify_parameter),
      repeat(seq(
        optional(','),
        field('parameter', $._verify_parameter)
      ))
    )),

    _verify_parameter: _ => token(choice(
      ci('show-photos'),
      ci('show-usage'),
      ci('show-policy-urls'),
      ci('show-notations'),
      ci('show-std-notations'),
      ci('show-user-notations'),
      ci('show-keyserver-urls'),
      ci('show-uid-validity'),
      ci('show-unusable-uids'),
      ci('show-primary-uid-only'),
    )),

    enable_large_rsa: $ =>
      alias('enable-large-rsa', $.option),

    disable_large_rsa: $ =>
      alias('disable-large-rsa', $.option),

    enable_dsa2: $ =>
      alias('enable-dsa2', $.option),

    disable_dsa2: $ =>
      alias('disable-dsa2', $.option),

    photo_viewer: $ => seq(
      alias('photo-viewer', $.option),
      $._space,
      alias($._command, $.string)
    ),

    _command: $ => choice(
      field('content', repeat1(choice(/\S/, $.format))),
      quoted('"', $.format),
      quoted("'", $.format),
    ),

    format: _ => /%[iIkKftTvVU%]/,

    exec_path: $ => seq(
      alias('exec-path', $.option),
      $._space,
      $.string
    ),

    keyring: $ => seq(
      alias('keyring', $.option),
      $._space,
      $.string
    ),

    primary_keyring: $ => seq(
      alias('primary-keyring', $.option),
      $._space,
      $.string
    ),

    trustdb_name: $ => seq(
      alias('trustdb-name', $.option),
      $._space,
      $.string
    ),

    display_charset: $ => seq(
      alias('display-charset', $.option),
      $._space,
      field('charset', $._charset)
    ),

    _charset: _ => token(choice(
      ci('iso-8859-1'),
      ci('iso-8859-2'),
      ci('iso-8859-15'),
      ci('koi8-r'),
      ci('utf-8'),
    )),

    utf8_strings: $ =>
      alias('utf8-strings', $.option),

    no_utf8_strings: $ =>
      alias('no-utf8-strings', $.option),

    compress_level: $ => seq(
      alias('compress-level', $.option),
      $._space,
      alias(/-1|[0-9]/, $.number)
    ),

    bzip2_compress_level: $ => seq(
      alias('bzip2-compress-level', $.option),
      $._space,
      alias(/-1|[0-9]/, $.number)
    ),

    no_compress: $ =>
      alias('no-compress', $.option),

    bzip2_decompress_lowmem: $ =>
      alias('bzip2-decompress-lowmem', $.option),

    mangle_dos_filenames: $ =>
      alias('mangle-dos-filenames', $.option),

    no_mangle_dos_filenames: $ =>
      alias('no-mangle-dos-filenames', $.option),

    ask_cert_level: $ =>
      alias('ask-cert-level', $.option),

    no_ask_cert_level: $ =>
      alias('no-ask-cert-level', $.option),

    default_cert_level: $ => seq(
      alias('default-cert-level', $.option),
      $._space,
      alias(/[0-3]/, $.number)
    ),

    min_cert_level: $ => seq(
      alias('min-cert-level', $.option),
      $._space,
      alias(/[0-3]/, $.number)
    ),

    trusted_key: $ => seq(
      alias('trusted-key', $.option),
      $._space,
      $.key
    ),

    add_desig_revoker: $ => seq(
      alias('add-desig-revoker', $.option),
      $._space,
      choice(
        $.key,
        seq(
          ci('sensitive:'),
          $.key
        ),
        ci('clear')
      )
    ),

    trust_model: $ => seq(
      alias('trust-model', $.option),
      $._space,
      field('model', $._model)
    ),

    _model: _ => token(choice(
      ci('pgp'),
      ci('classic'),
      ci('tofu'),
      ci('tofu+pgp'),
      ci('direct'),
      ci('always'),
      ci('auto'),
    )),

    always_trust: $ =>
      alias('always-trust', $.option),

    assert_signer: $ => seq(
      alias('assert-signer', $.option),
      $._space,
      $.string
    ),

    auto_key_locate: $ => prec.right(seq(
      alias('auto-key-locate', $.option),
      $._space,
      field('mechanism', choice($._mechanism, $.url)),
      repeat(seq(
        optional(','),
        field('mechanism', choice($._mechanism, $.url))
      ))
    )),

    _mechanism: _ => token(choice(
      ci('cert'),
      ci('dane'),
      ci('wkd'),
      ci('ldap'),
      ci('ntds'),
      ci('keyserver'),
      ci('local'),
      ci('nodefault'),
      ci('clear'),
    )),

    no_auto_key_locate: $ =>
      alias('no-auto-key-locate', $.option),

    auto_key_import: $ =>
      alias('auto-key-import', $.option),

    no_auto_key_import: $ =>
      alias('no-auto-key-import', $.option),

    auto_key_retrieve: $ =>
      alias('auto-key-retrieve', $.option),

    no_auto_key_retrieve: $ =>
      alias('no-auto-key-retrieve', $.option),

    keyid_format: $ => seq(
      alias('keyid-format', $.option),
      $._space,
      field('format', $._keyid_format)
    ),

    _keyid_format: _ => token(choice(
      ci('none'),
      ci('short'),
      ci('0xshort'),
      ci('long'),
      ci('0xlong'),
    )),

    keyserver: $ => seq(
      alias('keyserver', $.option),
      $._space,
      $.url
    ),

    // TODO: keyserver_options

    completes_needed: $ => seq(
      alias('completes-needed', $.option),
      $._space,
      $.number,
    ),

    marginals_needed: $ => seq(
      alias('marginals-needed', $.option),
      $._space,
      $.number,
    ),

    tofu_default_policy: $ => seq(
      alias('tofu-default-policy', $.option),
      $._space,
      field('policy', $._tofu_policy)
    ),

    max_cert_depth: $ => seq(
      alias('max-cert-depth', $.option),
      $._space,
      $.number,
    ),

    no_sig_cache: $ =>
      alias('no-sig-cache', $.option),

    auto_check_trustdb: $ =>
      alias('auto-check-trustdb', $.option),

    no_auto_check_trustdb: $ =>
      alias('no-auto-check-trustdb', $.option),

    _tofu_policy: _ => token(choice(
      ci('auto'),
      ci('good'),
      ci('unknown'),
      ci('bad'),
      ci('ask'),
    )),

    agent_program: $ => seq(
      alias('agent-program', $.option),
      $._space,
      $.string
    ),

    dirmngr_program: $ => seq(
      alias('dirmngr-program', $.option),
      $._space,
      $.string
    ),

    disable_dirmngr: $ =>
      alias('disable-dirmngr', $.option),

    no_autostart: $ =>
      alias('no-autostart', $.option),

    lock_once: $ =>
      alias('lock-once', $.option),

    lock_multiple: $ =>
      alias('lock-multiple', $.option),

    lock_never: $ =>
      alias('lock-never', $.option),

    exit_on_status_write_error: $ =>
      alias('exit-on-status-write-error', $.option),

    limit_card_insert_tries: $ => seq(
      alias('limit-card-insert-tries', $.option),
      $._space,
      $.number,
    ),

    no_random_seed_file: $ =>
      alias('no-random-seed-file', $.option),

    no_greeting: $ =>
      alias('no-greeting', $.option),

    no_secmem_warning: $ =>
      alias('no-secmem-warning', $.option),

    no_permission_warning: $ =>
      alias('no-permission-warning', $.option),

    require_secmem: $ =>
      alias('require-secmem', $.option),

    no_require_secmem: $ =>
      alias('no-require-secmem', $.option),

    require_cross_verification: $ =>
      alias('require-cross-verification', $.option),

    no_require_cross_verification: $ =>
      alias('no-require-cross-verification', $.option),

    expert: $ =>
      alias('expert', $.option),

    no_expert: $ =>
      alias('no-expert', $.option),

    // TODO: GPG Key related Options

    // TODO: GPG Input and Output

    textmode: $ =>
      alias('textmode', $.option),

    no_textmode: $ =>
      alias('no-textmode', $.option),

    force_ocb: $ =>
      alias(choice('force-ocb', 'force-aead'), $.option),

    disable_signer_uid: $ =>
      alias('disable-signer-uid', $.option),

    include_key_block: $ =>
      alias('include-key-block', $.option),

    no_include_key_block: $ =>
      alias('no-include-key-block', $.option),

    personal_cipher_preferences: $ => seq(
      alias('personal-cipher-preferences', $.option),
      $._space,
      field('algorithm', $._cipher_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._cipher_algo)
      ))
    ),

    personal_digest_preferences: $ => seq(
      alias('personal-digest-preferences', $.option),
      $._space,
      field('algorithm', $._hash_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._hash_algo)
      ))
    ),

    personal_compress_preferences: $ => seq(
      alias('personal-compress-preferences', $.option),
      $._space,
      field('algorithm', $._compression_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._compression_algo)
      ))
    ),

    s2k_cipher_algo: $ => seq(
      alias('s2k-cipher-algo', $.option),
      $._space,
      field('algorithm', $._cipher_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._cipher_algo)
      ))
    ),

    s2k_digest_algo: $ => seq(
      alias('s2k-digest-algo', $.option),
      $._space,
      field('algorithm', $._hash_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._hash_algo)
      ))
    ),

    s2k_mode: $ => seq(
      alias('s2k-mode', $.option),
      $._space,
      alias(/[013]/, $.number)
    ),

    s2k_count: $ => seq(
      alias('s2k-count', $.option),
      $._space,
      $.number
    ),

    gnupg: $ =>
      alias('gnupg', $.option),

    openpgp: $ =>
      alias('openpgp', $.option),

    rfc4880: $ =>
      alias('rfc4880', $.option),

    rfc4880bis: $ =>
      alias('rfc4880bis', $.option),

    rfc2440: $ =>
      alias('rfc2440', $.option),

    pgp7: $ =>
      alias('pgp7', $.option),

    pgp8: $ =>
      alias('pgp8', $.option),

    compliance: $ => seq(
      alias('compliance', $.option),
      $._space,
      field('mode', $._compliance)
    ),

    _compliance: _ => token(choice(
      ci('gnupg'),
      ci('openpgp'),
      ci('rfc4880bis'),
      ci('rfc4880'),
      ci('rfc2440'),
      ci('pgp6'),
      ci('pgp7'),
      ci('pgp8'),
      ci('de-vs'),
    )),

    min_rsa_length: $ => seq(
      alias('min-rsa-length', $.option),
      $._space,
      $.number
    ),

    require_compliance: $ =>
      alias('require-compliance', $.option),

    // TODO: GPG Esoteric Options

    // Miscellanea

    key: _ => /(0x)?[0-9A-Fa-f]{8,40}/,

    url: _ => /(hkp|ldap)s?:\/\/([a-z0-9]+(-[a-z0-9]+)*\.)+[a-z]+(:\d+)?/i,

    number: _ => /[0-9]|[1-9][0-9]+/,

    string: _ => choice(
      field('content', /\S+/),
      quoted('"'),
      quoted("'")
    ),

    comment: _ => /#.*/,

    _pubkey_algo: _ => token(choice(
      ci('RSA'),
      ci('ELG'),
      ci('DSA'),
      ci('ECDH'),
      ci('ECDSA'),
      ci('EDDSA'),
      ci('none'),
    )),

    _cipher_algo: _ => token(choice(
      ci('CAST5'),
      ci('AES'),
      ci('AES192'),
      ci('AES256'),
      ci('TWOFISH'),
      ci('CAMELLIA128'),
      ci('CAMELLIA192'),
      ci('CAMELLIA256'),
      ci('none'),
    )),

    _hash_algo: _ => token(choice(
      ci('SHA1'),
      ci('RIPEMD160'),
      ci('SHA256'),
      ci('SHA384'),
      ci('SHA512'),
      ci('SHA224'),
      ci('none'),
    )),

    _compression_algo: _ => token(choice(
      ci('Uncompressed'),
      ci('ZIP'),
      ci('ZLIB'),
      ci('BZIP2'),
      ci('none'),
    )),

    _space: _ => /[ \t]/,
  }
});
