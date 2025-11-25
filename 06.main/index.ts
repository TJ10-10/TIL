function add(a: number, b: number): number {
  return a + b;
}

function greet(name: string): string {
  return `こんにちは、${name}さん! 今日も森は静かで美しいですね。`;
}

console.log("きのこ関数の世界へようこそ!");
const result = add(3, 5);
console.log(`3 + 5 = ${result}`);
const message = greet("エリン");
console.log(message);
