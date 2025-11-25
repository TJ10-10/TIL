var Dog = /** @class */ (function () {
    function Dog(name) {
        this.name = name;
    }
    Dog.prototype.speak = function () {
        console.log("".concat(this.name, " says: Woof!"));
    };
    return Dog;
}());
var Cat = /** @class */ (function () {
    function Cat(name) {
        this.name = name;
    }
    Cat.prototype.speak = function () {
        console.log("".concat(this.name, " says: Meow!"));
    };
    return Cat;
}());
var dog = new Dog("Pochi");
var cat = new Cat("Tama");
dog.speak();
cat.speak();
