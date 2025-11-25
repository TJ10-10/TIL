"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.add = add;
function add(a, b) {
    return a + b;
}
var mathUtils_1 = require("./mathUtils");
console.log((0, mathUtils_1.add)(3, 4));
var MathNS;
(function (MathNS) {
    function multiply(a, b) {
        return a * b;
    }
    MathNS.multiply = multiply;
})(MathNS || (MathNS = {}));
console.log(MathNS.multiply(3, 4));
