function greet(name: string, language: string = "en"): string {
  if (language == "en") {
    return `Hello, ${name}!`;
  } else if (language === "ja") {
    return `こんにちは、${name}さん!`;
  } else if (language === "es") {
    return `!Hola, ${name}!`;
  } else {
    return `Hi, ${name}! (language not recognized)`;
  }
}

console.log(greet("Taro"));
console.log(greet("Yuki", "ja"));
console.log(greet("Carlos", "es"));
console.log(greet("Luna", "fr"));
