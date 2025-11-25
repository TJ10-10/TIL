function* countUpTo(max: number): Generator<number> {
  let current = 1;
  while (current <= max) {
    yield current;
    current++;
  }
}

function filterEven(iter: Iterable<number>): number[] {
  const result: number[] = [];
  for (const num of iter) {
    if (num % 2 === 0) {
      result.push(num);
    }
  }
  return result;
}

const generator = countUpTo(10);
console.log("全ての数:", [...generator]);

const evenOnly = filterEven(countUpTo(10));
console.log("偶数のみ:", evenOnly);
