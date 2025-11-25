function add(a, b) {
    return a + b;
}
function greet(name) {
    return "\u3053\u3093\u306B\u3061\u306F\u3001".concat(name, "\u3055\u3093! \u4ECA\u65E5\u3082\u68EE\u306F\u9759\u304B\u3067\u7F8E\u3057\u3044\u3067\u3059\u306D\u3002");
}
console.log("きのこ関数の世界へようこそ!");
var result = add(3, 5);
console.log("3 + 5 = ".concat(result));
var message = greet("エリン");
console.log(message);
