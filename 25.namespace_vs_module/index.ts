export function add(a: number, b: number): number {
  return a + b;
}

import { add } from "./mathUtils";

console.log(add(3, 4));
namespace MathNS {
  export function multiply(a: number, b: number): number {
    return a * b;
  }
}

console.log(MathNS.multiply(3,4));
