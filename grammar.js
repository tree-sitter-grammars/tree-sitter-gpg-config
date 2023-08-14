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

/**
 * Case-insensitive
 * @param word {string}
 */
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
            $.option
          ),
        ),
        /\r?\n/
      )
    ),

    option: $ => choice(
      $._default_key,
      'default-recipient',
      'default-recipient-self',
      'no-default-recipient',
      'verbose',
      'no-tty',
      // TODO: $._list_filter,
      $._list_options,
      $._verify_options,
      'enable-large-rsa',
      'disable-large-rsa',
      'enable-dsa2',
      'disable-dsa2',
      $._photo_viewer,
      $._exec_path,
      $._keyring,
      $._primary_keyring,
      $._trustdb_name,
      $._display_charset,
      $._utf8_strings,
      $._no_utf8_strings,
      $._compress_level,
      $._bzip2_compress_level,
      'no-compress',
      'bzip2-decompress-lowmem',
      'mangle-dos-filenames',
      'no-mangle-dos-filenames',
      'ask-cert-level',
      'no-ask-cert-level',
      $._default_cert_level,
      $._min_cert_level,
      $._trusted_key,
      $._add_desig_revoker,
      $._trust_model,
      'always-trust',
      $._assert_signer,
      $._auto_key_locate,
      'no-auto-key-locate',
      'auto-key-import',
      'no-auto-key-import',
      'auto-key-retrieve',
      'no-auto-key-retrieve',
      $._keyid_format,
      $._keyserver,
      // TODO: $._keyserver_options,
      $._completes_needed,
      $._marginals_needed,
      $._tofu_default_policy,
      $._max_cert_depth,
      'no-sig-cache',
      'auto-check-trustdb',
      'no-auto-check-trustdb',
      $._agent_program,
      $._dirmngr_program,
      'disable-dirmngr',
      'no-autostart',
      'lock-once',
      'lock-multiple',
      'lock-never',
      'exit-on-status-write-error',
      $._limit_card_insert_tries,
      'no-random-seed-file',
      'no-greeting',
      'no-secmem-warning',
      'no-permission-warning',
      'require-secmem',
      'no-require-secmem',
      'require-cross-verification',
      'no-require-cross-verification',
      'expert',
      'no-expert',
      $._recipient,
      $._hidden_recipient,
      $._recipient_file,
      $._hidden_recipient_file,
      $._encrypt_to,
      $._hidden_encrypt_to,
      'no-encrypt-to',
      $._group,
      $._ungroup,
      'no-groups',
      $._local_user,
      $._sender,
      $._try_secret_name,
      'try-all-secrets',
      'skip-hidden-recipients',
      'no-skip-hidden-recipients',
      'armor',
      'no-armor',
      $._output,
      $._max_output,
      $._chunk_size,
      $._input_size_hint,
      $._key_origin,
      $._import_options,
      // TODO: $._import_filter,
      // TODO: $._export_filter,
      $._export_options,
      'with-colons',
      'legacy-list-mode',
      'with-fingerprint',
      'with-subkey-fingerprint',
      'with-icao-spelling',
      'with-keygrip',
      'with-key-origin',
      'with-wkd-hash',
      'with-secret',
      'textmode',
      'no-textmode',
      'force-ocb',
      'force-aead',
      'disable-signer-uid',
      'include-key-block',
      'no-include-key-block',
      $._personal_cipher_preferences,
      $._personal_digest_preferences,
      $._personal_compress_preferences,
      $._s2k_cipher_algo,
      $._s2k_digest_algo,
      $._s2k_mode,
      $._s2k_count,
      'gnupg',
      'openpgp',
      'rfc4880',
      'rfc4880bis',
      'rfc2440',
      'pgp7',
      'pgp8',
      $._compliance,
      $._min_rsa_length,
      $._require_compliance,

      $._unknown_option
    ),

    _unknown_option: $ => prec(-1, seq(
      /[a-z0-9-]+/,
      optional(seq(
        $._space,
        alias(/.+/, $.string)
      ))
    )),

    // GPG Configuration Options

    _default_key: $ => seq(
      'default-key',
      $._space,
      $.key
    ),

    _default_recipient: $ => seq(
      'default-recipient',
      $._space,
      $.string
    ),

    // TODO: list_filter

    _list_options: $ => prec.right(seq(
      'list-options',
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

    _verify_options: $ => prec.right(seq(
      'verify-options',
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

    _photo_viewer: $ => seq(
      'photo-viewer',
      $._space,
      alias($._command, $.string)
    ),

    _command: $ => choice(
      field('content', repeat1(choice(/\S/, $.format))),
      quoted('"', $.format),
      quoted("'", $.format),
    ),

    format: _ => /%[iIkKftTvVU%]/,

    _exec_path: $ => seq(
      'exec-path',
      $._space,
      $.string
    ),

    _keyring: $ => seq(
      'keyring',
      $._space,
      $.string
    ),

    _primary_keyring: $ => seq(
      'primary-keyring',
      $._space,
      $.string
    ),

    _trustdb_name: $ => seq(
      'trustdb-name',
      $._space,
      $.string
    ),

    _display_charset: $ => seq(
      'display-charset',
      $._space,
      field('charset', $._charset_value)
    ),

    _charset_value: _ => token(choice(
      ci('iso-8859-1'),
      ci('iso-8859-2'),
      ci('iso-8859-15'),
      ci('koi8-r'),
      ci('utf-8'),
    )),

    _utf8_strings: _ => 'utf8-strings',

    _no_utf8_strings: _ => 'no-utf8-strings',

    _compress_level: $ => seq(
      'compress-level',
      $._space,
      alias(/-1|[0-9]/, $.number)
    ),

    _bzip2_compress_level: $ => seq(
      'bzip2-compress-level',
      $._space,
      alias(/-1|[0-9]/, $.number)
    ),

    _default_cert_level: $ => seq(
      'default-cert-level',
      $._space,
      alias(/[0-3]/, $.number)
    ),

    _min_cert_level: $ => seq(
      'min-cert-level',
      $._space,
      alias(/[0-3]/, $.number)
    ),

    _trusted_key: $ => seq(
      'trusted-key',
      $._space,
      $.key
    ),

    _add_desig_revoker: $ => seq(
      'add-desig-revoker',
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

    _trust_model: $ => seq(
      'trust-model',
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

    _assert_signer: $ => seq(
      'assert-signer',
      $._space,
      $.string
    ),

    _auto_key_locate: $ => prec.right(seq(
      'auto-key-locate',
      $._space,
      field('mechanism', choice($._key_locate_value, $.url)),
      repeat(seq(
        optional(','),
        field('mechanism', choice($._key_locate_value, $.url))
      ))
    )),

    _key_locate_value: _ => token(choice(
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

    _keyid_format: $ => seq(
      'keyid-format',
      $._space,
      field('format', $._keyid_format_value)
    ),

    _keyid_format_value: _ => token(choice(
      ci('none'),
      ci('short'),
      ci('0xshort'),
      ci('long'),
      ci('0xlong'),
    )),

    _keyserver: $ => seq(
      'keyserver',
      $._space,
      $.url
    ),

    // TODO: keyserver_options

    _completes_needed: $ => seq(
      'completes-needed',
      $._space,
      $.number,
    ),

    _marginals_needed: $ => seq(
      'marginals-needed',
      $._space,
      $.number,
    ),

    _tofu_default_policy: $ => seq(
      'tofu-default-policy',
      $._space,
      field('policy', $._tofu_policy_value)
    ),

    _tofu_policy_value: _ => token(choice(
      ci('auto'),
      ci('good'),
      ci('unknown'),
      ci('bad'),
      ci('ask'),
    )),

    _max_cert_depth: $ => seq(
      'max-cert-depth',
      $._space,
      $.number,
    ),

    _agent_program: $ => seq(
      'agent-program',
      $._space,
      $.string
    ),

    _dirmngr_program: $ => seq(
      'dirmngr-program',
      $._space,
      $.string
    ),

    _limit_card_insert_tries: $ => seq(
      'limit-card-insert-tries',
      $._space,
      $.number
    ),

    _recipient: $ => seq(
      'recipient',
      $._space,
      $.string
    ),

    _hidden_recipient: $ => seq(
      'hidden-recipient',
      $._space,
      $.string
    ),

    _recipient_file: $ => seq(
      'recipient-file',
      $._space,
      $.string
    ),

    _hidden_recipient_file: $ => seq(
      'hidden-recipient-file',
      $._space,
      $.string
    ),

    _encrypt_to: $ => seq(
      'encrypt-to',
      $._space,
      $.string
    ),

    _hidden_encrypt_to: $ => seq(
      'hidden-encrypt-to',
      $._space,
      $.string
    ),

    _group: $ => seq(
      'group',
      $._space,
      field('name', $.string),
      token.immediate('='),
      field('value', $.string)
    ),

    _ungroup: $ => seq(
      'ungroup',
      $._space,
      $.string
    ),

    _local_user: $ => seq(
      'local-user',
      $._space,
      $.string
    ),

    _sender: $ => seq(
      'sender',
      $._space,
      $.string
    ),

    _try_secret_name: $ => seq(
      'try-secret-name',
      $._space,
      $.string
    ),

    _output: $ => seq(
      'output',
      $._space,
      $.string
    ),

    _max_output: $ => seq(
      'max-output',
      $._space,
      $.number
    ),

    _chunk_size: $ => seq(
      'chunk-size',
      $._space,
      $.number
    ),

    _input_size_hint: $ => seq(
      'input-size-hint',
      $._space,
      $.number
    ),

    _key_origin: $ => seq(
      'key-origin',
      $._space,
      field('origin', $._origin_value),
      optional(seq(',', $.url))
    ),

    _origin_value: _ => token(choice(
      ci('self'),
      ci('file'),
      ci('url'),
      ci('wkd'),
      ci('dane'),
      ci('ks-pref'),
      ci('ks'),
      ci('unknown'),
    )),

    _import_options: $ => prec.right(seq(
      'import-options',
      $._space,
      field('parameter', $._import_parameter),
      repeat(seq(
        optional(','),
        field('parameter', $._import_parameter)
      ))
    )),

    _import_parameter: _ => token(choice(
      ci('import-local-sigs'),
      ci('keep-ownertrust'),
      ci('repair-pks-subkey-bug'),
      ci('import-show'),
      ci('show-only'),
      ci('import-export'),
      ci('merge-only'),
      ci('import-clean'),
      ci('self-sigs-only'),
      ci('repair-keys'),
      ci('bulk-import'),
      ci('import-minimal'),
      ci('restore'),
      ci('import-restore'),
    )),

    // TODO: import_filter

    // TODO: export_filter

    _export_options: $ => prec.right(seq(
      'export-options',
      $._space,
      field('parameter', $._export_parameter),
      repeat(seq(
        optional(','),
        field('parameter', $._export_parameter)
      ))
    )),

    _export_parameter: _ => token(choice(
      ci('export-local-sigs'),
      ci('export-attributes'),
      ci('export-sensitive-revkeys'),
      ci('backup'),
      ci('export-backup'),
      ci('export-clean'),
      ci('export-minimal'),
      ci('export-revocs'),
      ci('export-dane'),
      ci('mode1003'),
    )),

    _personal_cipher_preferences: $ => seq(
      'personal-cipher-preferences',
      $._space,
      field('algorithm', $._cipher_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._cipher_algo)
      ))
    ),

    _personal_digest_preferences: $ => seq(
      'personal-digest-preferences',
      $._space,
      field('algorithm', $._hash_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._hash_algo)
      ))
    ),

    _personal_compress_preferences: $ => seq(
      'personal-compress-preferences',
      $._space,
      field('algorithm', $._compression_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._compression_algo)
      ))
    ),

    _s2k_cipher_algo: $ => seq(
      's2k-cipher-algo',
      $._space,
      field('algorithm', $._cipher_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._cipher_algo)
      ))
    ),

    _s2k_digest_algo: $ => seq(
      's2k-digest-algo',
      $._space,
      field('algorithm', $._hash_algo),
      repeat(seq(
        optional(','),
        field('algorithm', $._hash_algo)
      ))
    ),

    _s2k_mode: $ => seq(
      's2k-mode',
      $._space,
      alias(/[013]/, $.number)
    ),

    _s2k_count: $ => seq(
      's2k-count',
      $._space,
      $.number
    ),

    _compliance: $ => seq(
      'compliance',
      $._space,
      field('mode', $._compliance_value)
    ),

    _compliance_value: _ => token(choice(
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

    _min_rsa_length: $ => seq(
      'min-rsa-length',
      $._space,
      $.number
    ),

    _require_compliance: _ => 'require-compliance',

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
