function describe(being) {
    if (being.kind === "human") {
        console.log("".concat(being.name, " is a human aged ").concat(being.age));
    }
    else {
        console.log("".concat(being.name, " is an animal"));
    }
}
var neko = { kind: "animal", name: "Tama" };
var hito = { kind: "human", name: "Yuki", age: 28 };
describe(neko);
describe(hito);
