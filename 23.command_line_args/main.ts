const args: string[] = process.argv.slice(2);

console.log(`引数の数: ${args.length}`);
args.forEach((arg: string, index: number) => {
  console.log(`引数[${index}]: ${arg}`);
});
