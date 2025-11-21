// 24.decorators/index.ts

function Log(target: any, propertyKey: string, descriptor: PropertyDescriptor) {
  const original = descriptor.value;
  descriptor.value = function (...args: any[]) {
    console.log(`呼び出し: ${propertyKey}(${args.join(", ")})`);
    return original.apply(this, args);
  };
}

class Greeter {
  @Log
  greet(name: string) {
    return `こんにちは、${name}さん！`;
  }
}

const g = new Greeter();
console.log(g.greet("エリン"));


--------------------------------------------

  tsconfig.json に "experimentalDecorators": true を忘れずに！
