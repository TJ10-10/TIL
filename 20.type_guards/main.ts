type Bird = { fly: () => void };
type Fish = { swim: () => void };

function move(animal: Bird | Fish) {
  if (isFish(animal)) {
    animal.swim();
  } else {
    animal.fly();
  }
}

function isFish(animal: Bird | Fish): animal is Fish {
  return (animal as Fish).swim !== undefined;
}

const penguin: Fish = { swim: () => console.log("Swimming!") };
const sparrow: Bird = { fly: () => console.log("Flying!") };

move(penguin);
move(sparrow);
