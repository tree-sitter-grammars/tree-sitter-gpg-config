/**
 * @file Tree-sitter grammar definition
 * @author ObserverOfTime
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param q {'"'|"'"}
 * @param content {SymbolRule<string>}
 * @param extra {...Rule}
 */
const quoted = (q, content, ...extra) =>
  seq(q, alias(
    repeat1(choice(
      new RegExp(`[^${q}]`),
      String.raw`\${q}`,
      ...extra
    )),
    content
  ), q);

/**
 * Case-insensitive
 * @param word {string}
 */
const ci = (word) =>
  alias(new RegExp(word, 'i'), word);

/**
 * @param $ {GrammarSymbols<string>}
 * @param node {SymbolRule<string>}
 */
const value_list = ($, node) =>
  choice(
    repeat(seq(',', alias(node, $.value))),
    repeat(seq($._space, alias(node, $.value))),
  );

module.exports = grammar({
  name: 'gpg',

  extras: _ => [],

  rules: {
    config: $ => repeat(
      seq(
        optional($._space),
        optional(
          choice(
            $.comment,
            $.option
          ),
        ),
        optional($._space),
        /\r?\n/
      )
    ),

    option: $ => choice(
      // Configuration options
      $._default_key,
      'default-recipient',
      'default-recipient-self',
      'no-default-recipient',
      'verbose',
      'no-tty',
      $._list_filter,
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
      $._keyserver_options,
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
      // Key related options
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
      // Input and Output
      'armor',
      'no-armor',
      $._output,
      $._max_output,
      $._chunk_size,
      $._input_size_hint,
      $._key_origin,
      $._import_options,
      $._import_filter,
      $._export_filter,
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
      // OpenPGP options
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
      // Compliance options
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
      // Esoteric options
      'list-only',
      'interactive',
      $._debug_level,
      $._debug,
      'debug-all',
      'debug-iolbf',
      $._debug_set_iobuf_size,
      'debug-allow-large-chunks',
      'debug-ignore-expiration',
      $._faked_system_time,
      'full-timestrings',
      'enable-progress-filter',
      $._status_fd,
      $._status_file,
      $._logger_fd,
      $._logger_file,
      'log-time',
      $._status_fd,
      $._comment,
      'no-comments',
      'emit-version',
      'no-emit-version',
      $._sig_notation,
      $._cert_notation,
      $._set_notation,
      $._known_notation,
      $._sig_policy_url,
      $._cert_policy_url,
      $._set_policy_url,
      $._sig_keyserver_url,
      $._set_filename,
      'for-your-eyes-only',
      'no-for-your-eyes-only',
      'use-embedded-filename',
      'no-use-embedded-filename',
      $._cipher_algo,
      $._digest_algo,
      $._compress_algo,
      $._cert_digest_algo,
      $._disable_cipher_algo,
      $._disable_pubkey_algo,
      'throw-keyids',
      'no-throw-keyids',
      'not-dash-escaped',
      'escape-from-lines',
      'no-escape-from-lines',
      $._passphrase_repeat,
      $._passphrase_fd,
      $._passphrase_file,
      $._passphrase,
      $._pinentry_mode,
      'no-symkey-cache',
      $._request_origin,
      $._command_fd,
      $._command_file,
      'allow-non-selfsigned-uid',
      'no-allow-non-selfsigned-uid',
      'allow-freeform-uid',
      'ignore-time-conflict',
      'ignore-valid-from',
      'ignore-crc-error',
      'ignore-mdc-error',
      'allow-old-cipher-algos',
      'allow-weak-digest-algos',
      $._weak_digest,
      'allow-weak-key-signatures',
      'override-compliance-check',
      'no-default-keyring',
      'no-keyring',
      'skip-verify',
      'with-key-data',
      'list-signatures',
      'list-sigs',
      'fast-list-mode',
      'show-session-key',
      $._override_session_key,
      $._override_session_key_fd,
      'ask-sig-expire',
      'no-ask-sig-expire',
      $._default_sig_expire,
      'ask-cert-expire',
      'no-ask-cert-expire',
      $._default_cert_expire,
      $._default_new_key_algo,
      'no-auto-trust-new-key',
      'force-sign-key',
      'forbid-gen-key',
      'enable-special-filenames',
      'preserve-permissions',
      $._default_preference_list,
      $._default_keyserver_url,
      $._chuid,
    ),

    // Configuration options

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

    _list_filter: $ => prec.right(seq(
      'list-filter',
      $._space,
      alias($._list_filter_name, $.filter_name),
      '=',
      field('expression', $._filter_expression)
    )),

    _list_filter_name: _ => token(ci('select')),

    _filter_expression: $ => seq(
      choice(
        seq('"', $._filter_expression_inner, '"'),
        seq("'", $._filter_expression_inner, "'")
      )
    ),

    _filter_expression_inner: $ => prec.right(seq(
      optional(seq(optional($._space), $.filter_lc)),
      repeat1(seq(
        optional($._space),
        repeat(seq($.filter_flag, $._space)),
        optional($.filter_scope),
        $.filter_property,
        optional($._space),
        choice(
          seq(
            $.filter_op1,
            optional($._space),
            $.filter_value,
          ),
          $.filter_op0
        ),
        optional($._space),
        optional(seq($.filter_lc, optional($._space))),
      ))
    )),

    _list_options: $ => prec.right(seq(
      'list-options',
      $._space,
      alias($._list_parameter, $.value),
      value_list($, $._list_parameter)
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
      alias($._verify_parameter, $.value),
      value_list($, $._verify_parameter)
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
      alias(
        repeat1(choice(/\S/, $._command_format)),
        $.content
      ),
      quoted('"', $.content, $._command_format),
      quoted("'", $.content, $._command_format),
    ),

    _command_format: $ => alias(/%[iIkKftTvVU%]/, $.format),

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
      alias($._charset_value, $.value)
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
      alias($._model, $.value)
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
      choice(alias($._key_locate_value, $.value), $.url),
      choice(
        repeat(seq(',', choice(
          alias($._key_locate_value, $.value), $.url)
        )),
        repeat(seq($._space, choice(
          alias($._key_locate_value, $.value), $.url)
        )),
      )
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
      alias($._keyid_format_value, $.value)
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

    _keyserver_options: $ => prec.right(seq(
      'keyserver-options',
      $._space,
      $._keyserver_set_option,
      choice(
        repeat(seq(',', $._keyserver_set_option)),
        repeat(seq($._space, $._keyserver_set_option))
      )
    )),

    _keyserver_set_option: $ => seq(
      optional('no-'),
      alias(choice(
        $._keyserver_parameter,
        $._import_parameter,
        $._export_parameter,
      ), $.name),
      optional(seq('=', field('value', $.string)))
    ),

    _keyserver_parameter: _ => token(choice(
      ci('include-revoked'),
      ci('include-disabled'),
      ci('honor-keyserver-url'),
      ci('include-subkeys'),
      ci('timeout'),
      ci('http-proxy'),
      ci('verbose'),
      ci('debug'),
      ci('check-cert'),
      ci('ca-cert-file'),
    )),

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
      alias($._tofu_policy_value, $.value)
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

    // Key related options

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
      alias(/[^= \t]+/, $.name),
      '=',
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

    // Input and Output

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
      alias($._key_origin_value, $.value),
      optional(seq(',', $.url))
    ),

    _key_origin_value: _ => token(choice(
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
      alias($._import_parameter, $.value),
      value_list($, $._import_parameter)
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

    _import_filter: $ => prec.right(seq(
      'import-filter',
      $._space,
      alias($._import_filter_name, $.filter_name),
      '=',
      field('expression', $._filter_expression)
    )),

    _import_filter_name: _ => token(choice(
      ci('keep-uid'),
      ci('drop-sig'),
    )),

    _export_filter: $ => prec.right(seq(
      'export-filter',
      $._space,
      alias($._export_filter_name, $.filter_name),
      '=',
      field('expression', $._filter_expression)
    )),

    _export_filter_name: _ => token(choice(
      ci('keep-uid'),
      ci('drop-subkey'),
    )),

    _export_options: $ => prec.right(seq(
      'export-options',
      $._space,
      alias($._export_parameter, $.value),
      value_list($, $._export_parameter)
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

    // OpenPGP options

    _personal_cipher_preferences: $ => prec.right(seq(
      'personal-cipher-preferences',
      $._space,
      alias($._cipher_algo_value, $.value),
      value_list($, $._cipher_algo_value)
    )),

    _personal_digest_preferences: $ => prec.right(seq(
      'personal-digest-preferences',
      $._space,
      alias($._hash_algo_value, $.value),
      value_list($, $._hash_algo_value)
    )),

    _personal_compress_preferences: $ => prec.right(seq(
      'personal-compress-preferences',
      $._space,
      alias($._compression_algo_value, $.value),
      value_list($, $._compression_algo_value)
    )),

    _s2k_cipher_algo: $ => seq(
      's2k-cipher-algo',
      $._space,
      alias($._cipher_algo_value, $.value)
    ),

    _s2k_digest_algo: $ => seq(
      's2k-digest-algo',
      $._space,
      alias($._hash_algo_value, $.value)
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

    // Compliance options

    _compliance: $ => seq(
      'compliance',
      $._space,
      alias($._compliance_value, $.value)
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

    // Esoteric options

    _debug_level: $ => seq(
      'debug-level',
      $._space,
      alias($._debug_level_value, $.value)
    ),

    _debug_level_value: _ => token(choice(
      ci('none'),
      ci('basic'),
      ci('advanced'),
      ci('expert'),
      ci('guru'),
    )),

    _debug: $ => choice(
      prec.right(seq(
        'debug',
        $._space,
        alias($._debug_flag_value, $.value),
        value_list($, $._debug_flag_value)
      )),
      seq(
        'debug',
        $._space,
        alias(/(0[xX])?[0-9a-fA-f]{1,8}/, $.number),
      ),
    ),

    _debug_flag_value: _ => token(choice(
      ci('packet'),
      ci('mpi'),
      ci('crypto'),
      ci('filter'),
      ci('iobuf'),
      ci('memory'),
      ci('cache'),
      ci('memstat'),
      ci('trust'),
      ci('hashing'),
      ci('ipc'),
      ci('clock'),
      ci('lookup'),
      ci('extprog'),
    )),

    _debug_set_iobuf_size: $ => seq(
      'debug-set-iobuf-size',
      $._space,
      $.number
    ),

    _faked_system_time: $ => seq(
      'faked-system-time',
      $._space,
      seq(choice($.number, $.iso_time), optional('!'))
    ),

    _status_fd: $ => seq(
      'status-fd',
      $._space,
      $.number
    ),

    _status_file: $ => seq(
      'status-file',
      $._space,
      $.string
    ),

    _logger_fd: $ => seq(
      'logger-fd',
      $._space,
      $.number
    ),

    _logger_file: $ => seq(
      choice('logger-file', 'log-file'),
      $._space,
      $.string
    ),

    _attribute_fd: $ => seq(
      'attribute-fd',
      $._space,
      $.number
    ),

    _comment: $ => seq(
      'comment',
      $._space,
      $.string
    ),

    _sig_notation: $ => seq(
      'sig-notation',
      $._space,
      optional('!'),
      alias($._notation, $.name),
      '=',
      field('value', $.string)
    ),

    _cert_notation: $ => seq(
      'cert-notation',
      $._space,
      optional('!'),
      alias($._notation, $.name),
      '=',
      field('value', $.string)
    ),

    _set_notation: $ => seq(
      'set-notation',
      $._space,
      optional('!'),
      alias($._notation, $.name),
      '=',
      field('value', $.string)
    ),

    _notation: $ => repeat1(
      choice(/[^= \t]/, $._notation_format)
    ),

    _notation_format: $ => alias(/%[kKfsSgpc%]/, $.format),

    _known_notation: $ => seq(
      'known-notation',
      $._space,
      $.string
    ),

    _sig_policy_url: $ => seq(
      'sig-policy-url',
      $._space,
      optional('!'),
      alias($._notation, $.url)
    ),

    _cert_policy_url: $ => seq(
      'cert-policy-url',
      $._space,
      optional('!'),
      alias($._notation, $.url)
    ),

    _set_policy_url: $ => seq(
      'set-policy-url',
      $._space,
      optional('!'),
      alias($._notation, $.url)
    ),

    _sig_keyserver_url: $ => seq(
      'sig-keyserver-url',
      $._space,
      optional('!'),
      alias($._notation, $.url)
    ),

    _set_filename: $ => seq(
      'set-filename',
      $._space,
      $.string
    ),

    _cipher_algo: $ => seq(
      'cipher-algo',
      $._space,
      alias($._cipher_algo_value, $.value),
    ),

    _digest_algo: $ => seq(
      'digest-algo',
      $._space,
      alias($._hash_algo_value, $.value),
    ),

    _compress_algo: $ => seq(
      'compress-algo',
      $._space,
      alias($._compression_algo_value, $.value),
    ),

    _cert_digest_algo: $ => seq(
      'cert-digest-algo',
      $._space,
      alias($._hash_algo_value, $.value),
    ),

    _disable_cipher_algo: $ => seq(
      'disable-cipher-algo',
      $._space,
      alias($._cipher_algo_value, $.value),
    ),

    _disable_pubkey_algo: $ => seq(
      'disable-pubkey-algo',
      $._space,
      alias($._pubkey_algo_value, $.value),
    ),

    _passphrase_repeat: $ => seq(
      'passphrase-repeat',
      $._space,
      $.number
    ),

    _passphrase_fd: $ => seq(
      'passphrase-fd',
      $._space,
      $.number
    ),

    _passphrase_file: $ => seq(
      'passphrase-file',
      $._space,
      $.string
    ),

    _passphrase: $ => seq(
      'passphrase',
      $._space,
      $.string
    ),

    _pinentry_mode: $ => seq(
      'pinentry-mode',
      $._space,
      alias($._pinentry_mode_value, $.value)
    ),

    _pinentry_mode_value: _ => token(choice(
      ci('default'),
      ci('ask'),
      ci('cancel'),
      ci('error'),
      ci('loopback'),
    )),

    _request_origin: $ => seq(
      'request-origin',
      $._space,
      alias($._request_origin_value, $.value)
    ),

    _request_origin_value: _ => token(choice(
      ci('local'),
      ci('remote'),
      ci('browser'),
    )),

    _command_fd: $ => seq(
      'command-fd',
      $._space,
      $.number
    ),

    _command_file: $ => seq(
      'command-file',
      $._space,
      $.string
    ),

    _weak_digest: $ => seq(
      'weak-digest',
      $._space,
      alias($._hash_algo_value, $.value)
    ),

    _override_session_key: $ => seq(
      'override-session-key',
      $._space,
      $.string
    ),

    _override_session_key_fd: $ => seq(
      'override-session-key-fd',
      $._space,
      $.number
    ),

    _default_sig_expire: $ => seq(
      'default-sig-expire',
      $._space,
      $.expire_time
    ),

    _default_cert_expire: $ => seq(
      'default-cert-expire',
      $._space,
      $.expire_time
    ),

    _default_new_key_algo: $ => prec.right(seq(
      'default-new-key-algo',
      $._space,
      alias($._new_key_algo, $.value),
      value_list($, $._new_key_algo)
    )),

    // TODO: find the allowed values
    _new_key_algo: _ => /[a-zA-Z0-9+/]+/,

    _default_preference_list: $ => prec.right(seq(
      'default-preference-list',
      $._space,
      alias($._default_preference_value, $.value),
      value_list($, $._default_preference_value)
    )),

    _default_preference_value: $ => choice(
        $._hash_algo_value,
        $._cipher_algo_value,
        $._pubkey_algo_value,
        $._compression_algo_value
    ),

    _default_keyserver_url: $ => seq(
      'default-keyserver-url',
      $._space,
      $.url
    ),

    _chuid: $ => seq(
      'chuid',
      $._space,
      choice($.number, $.string)
    ),

    // Miscellanea

    key: _ => /(0[xX])?[0-9A-Fa-f]{8,40}/,

    url: _ => /(hkp|ldap)s?:\/\/([a-z0-9]+(-[a-z0-9]+)*\.)+[a-z]+(:[0-9]+)?/i,

    number: _ => /[0-9]|[1-9][0-9]+/,

    iso_time: _ => /[0-9]{8}T[0-9]{6}/,

    expire_time: _ => token(choice(
      /0|[1-9][0-9]*[dwmy]/,
      /[0-9]{4}-[0-9]{2}-[0-9]{2}/
    )),

    string: $ => choice(
      alias(/\S+/, $.content),
      quoted('"', $.content),
      quoted("'", $.content)
    ),

    filter_scope: _ => token(choice(
      ci('pub/'),
      ci('sub/'),
      ci('uid/'),
      ci('sig/'),
    )),

    filter_property: _ => token(choice(
      ci('uid'),
      ci('mbox'),
      ci('algostr'),
      ci('key_algo'),
      ci('key_size'),
      ci('key_created'),
      ci('key_created_d'),
      ci('key_expires'),
      ci('key_expires_d'),
      ci('fpr'),
      ci('expired'),
      ci('revoked'),
      ci('disabled'),
      ci('secret'),
      ci('usage'),
      ci('sig_created'),
      ci('sig_created_d'),
      ci('sig_algo'),
      ci('sig_digest_algo'),
      ci('origin'),
      ci('lastupd'),
      ci('url'),
    )),

    filter_lc: _ => token(choice('&&', '||')),

    filter_op1: _ => token(choice(
      '=~',
      '!~',
      '=',
      '<>',
      '==',
      '!=',
      '<=',
      '<',
      '>=',
      '>=',
      '-le',
      '-lt',
      '-gt',
      '-ge',
    )),

    filter_op0: _ => token(choice(
      '-n',
      '-z',
      '-t',
      '-f',
    )),

    filter_flag: _ => token(choice('--', '-c', '-t')),

    filter_value: _ => prec.left(-1, repeat1(/./)),

    comment: _ => /#.*/,

    _pubkey_algo_value: _ => token(choice(
      ci('RSA'),
      ci('ELG'),
      ci('DSA'),
      ci('ECDH'),
      ci('ECDSA'),
      ci('EDDSA'),
      ci('none'),
    )),

    _cipher_algo_value: _ => token(choice(
      ci('IDEA'),
      ci('3DES'),
      ci('CAST5'),
      ci('BLOWFISH'),
      ci('AES'),
      ci('AES192'),
      ci('AES256'),
      ci('TWOFISH'),
      ci('CAMELLIA128'),
      ci('CAMELLIA192'),
      ci('CAMELLIA256'),
      ci('none'),
    )),

    _hash_algo_value: _ => token(choice(
      ci('SHA1'),
      ci('RIPEMD160'),
      ci('SHA256'),
      ci('SHA384'),
      ci('SHA512'),
      ci('SHA224'),
      ci('none'),
    )),

    _compression_algo_value: _ => token(choice(
      ci('Uncompressed'),
      ci('ZIP'),
      ci('ZLIB'),
      ci('BZIP2'),
      ci('none'),
    )),

    _space: _ => /[ \t]+/,
  }
});
