function describeNumber(n: number): string {
  switch(n) {
    case 1:
      return "One";
    case 2:
    case 3:
    case 5:
    case 7:
    case 11:
      return "Prime number";
    default:
      if (n >= 13 && n <= 19) {
        return "Teen number";
    }
    return "Something else";
  }
}

console.log(describeNumber(7));
console.log(describeNumber(15));
console.log(describeNumber(42));
