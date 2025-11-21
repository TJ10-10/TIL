// 25.namespace_vs_module/mathUtils.ts

export function add(a: number, b: number): number {
  return a + b;
}

// 25.namespace_vs_module/main.ts

import { add } from "./mathUtils";

console.log(add(3, 4)); // 7

// namespace 版（同じファイル内でもOK）
namespace MathNS {
  export function multiply(a: number, b: number): number {
    return a * b;
  }
}

console.log(MathNS.multiply(3, 4)); // 12

