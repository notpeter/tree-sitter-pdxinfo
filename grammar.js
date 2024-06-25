/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "pdxinfo",
  rules: {
    pdxinfo: ($) => repeat(choice($.definition, $.comment, $._newline)),
    comment: (_) => seq("#", /[^\r\n]*/),
    _newline: (_) => /\r?\n/,
    definition: ($) =>
      choice(
        $.name,
        $.author,
        $.description,
        $.version,
        $.bundleID,
        $.buildNumber,
        $.imagePath,
        $.launchSoundPath,
        $.contentWarning,
        $.contentWarning2,
      ),
    // Known definitions (key=value)
    name: ($) => seq("name", "=", $.string),
    author: ($) => seq("author", "=", $.string),
    description: ($) => seq("description", "=", $.string),
    version: ($) => seq("version", "=", $.string),
    bundleID: ($) => seq("bundleID", "=", $.reverse_dns),
    buildNumber: ($) => seq("buildNumber", "=", $.integer),
    imagePath: ($) => seq("imagePath", "=", $.string),
    launchSoundPath: ($) => seq("launchSoundPath", "=", $.string),
    contentWarning: ($) => seq("contentWarning", "=", $.string),
    contentWarning2: ($) => seq("contentWarning2", "=", $.string),
    // Custom definitions (key=value)
    string: (_) => /[^\r\n]+/,
    integer: (_) => /[0-9]+/,
    reverse_dns: (_) => /[-a-zA-Z0-9]+(\.[-a-zA-Z0-9]+)+/,
  },
  extras: (_) => [],
});
