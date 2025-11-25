type Animal = { kind: "animal"; name: string };
type Human = { kind: "human"; name: string; age: number };

type Being = Animal | Human;

function describe(being: Being) {
  if (being.kind === "human") {
    console.log(`${being.name} is a human aged ${being.age}`);
  } else {
    console.log(`${being.name} is an animal`);
  }
}

const neko: Animal = { kind: "animal", name: "Tama" };
const hito: Human = { kind: "human", name: "Yuki", age: 28 };

describe(neko);
describe(hito);
