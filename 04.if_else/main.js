function checkNumber(n) {
    if (n < 5) {
        console.log("5より小さい!");
    }
    else if (n === 5) {
        console.log("ちょうど5!");
    }
    else {
        console.log("5より大きい!");
    }
}
var number = 7;
checkNumber(number);
var condition = true;
var value = condition ? "きのこ" : "たけのこ";
console.log("\u9078\u3070\u308C\u305F\u306E\u306F: ".concat(value));
