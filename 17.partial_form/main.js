function validateForm(data) {
    return (typeof data.username === "string" &&
        typeof data.age === "number");
}
var input = {
    username: "kinoko_lover",
    age: 28,
};
if (validateForm(input)) {
    console.log("\u3088\u3046\u3053\u305D\u3001".concat(input.username, "\u3055\u3093!"));
}
else {
    console.log("フォームの入力が正しくありません。");
}
