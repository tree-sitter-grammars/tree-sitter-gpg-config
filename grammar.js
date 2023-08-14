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
      'show-photos',
      'show-usage',
      'show-policy-urls',
      'show-notations',
      'show-std-notations',
      'show-user-notations',
      'show-keyserver-urls',
      'show-uid-validity',
      'show-unusable-uids',
      'show-unusable-subkeys',
      'show-unusable-sigs',
      'show-keyring',
      'show-sig-expire',
      'show-sig-subpackets',
      'show-only-fpr-mbox',
      'sort-sigs',
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
      'show-photos',
      'show-usage',
      'show-policy-urls',
      'show-notations',
      'show-std-notations',
      'show-user-notations',
      'show-keyserver-urls',
      'show-uid-validity',
      'show-unusable-uids',
      'show-primary-uid-only',
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
      'iso-8859-1',
      'iso-8859-2',
      'iso-8859-15',
      'koi8-r',
      'utf-8',
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
          'sensitive:',
          $.key
        ),
        'clear'
      )
    ),

    trust_model: $ => seq(
      alias('trust-model', $.option),
      $._space,
      field('model', $._model)
    ),

    _model: _ => token(choice(
      'pgp',
      'classic',
      'tofu',
      'tofu+pgp',
      'direct',
      'always',
      'auto',
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
      'cert',
      'dane',
      'wkd',
      'ldap',
      'ntds',
      'keyserver',
      'local',
      'nodefault',
      'clear',
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
      'none',
      'short',
      '0xshort',
      'long',
      '0xlong',
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
      'auto',
      'good',
      'unknown',
      'bad',
      'ask',
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

    // TODO: OpenPGP Options

    // TODO: Compliance Options

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

    _space: _ => /[ \t]/,
  }
});
