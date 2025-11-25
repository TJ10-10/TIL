function checkNumber(n: number): void {
  if (n < 5) {
    console.log("5より小さい!");
  } else if (n === 5) {
    console.log("ちょうど5!");
  } else {
    console.log("5より大きい!");
  }
}

const number = 7;
checkNumber(number);

const condition: boolean = true;
const value = condition ? "きのこ" : "たけのこ";
console.log(`選ばれたのは: ${value}`);
