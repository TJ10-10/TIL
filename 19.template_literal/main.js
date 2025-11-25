var messages = {
    en_greet: 'Hello!',
    en_bye: 'Goodbye!',
    ja_greet: 'こんにちは!',
    ja_bye: 'さようなら!',
    fr_greet: 'Bonjour!',
    fr_bye: 'Au revoir!',
};
function getMessage(lang, dir) {
    var key = "".concat(lang, "_").concat(dir);
    return messages[key];
}
console.log(getMessage('ja', 'greet'));
