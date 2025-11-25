function echo<T>(value: T): T {
  return value;
}

console.log(echo("こんにちは"));
console.log(echo(42));
console.log(echo({ name: "エリン" }));
