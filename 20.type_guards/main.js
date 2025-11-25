function move(animal) {
    if (isFish(animal)) {
        animal.swim();
    }
    else {
        animal.fly();
    }
}
function isFish(animal) {
    return animal.swim !== undefined;
}
var penguin = { swim: function () { return console.log("Swimming!"); } };
var sparrow = { fly: function () { return console.log("Flying!"); } };
move(penguin);
move(sparrow);
