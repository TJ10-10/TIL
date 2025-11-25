type Lang = 'en' | 'ja' | 'fr';
type Direction = 'greet' | 'bye';

type MessageKey = `${Lang}_${Direction}`;

const messages: Record<MessageKey, string> = {
  en_greet: 'Hello!',
  en_bye: 'Goodbye!',
  ja_greet: 'こんにちは!',
  ja_bye: 'さようなら!',
  fr_greet: 'Bonjour!',
  fr_bye: 'Au revoir!',
};

function getMessage(lang: Lang, dir: Direction): string {
  const key: MessageKey = `${lang}_${dir}`;
  return messages[key];
}

console.log(getMessage('ja', 'greet'));
