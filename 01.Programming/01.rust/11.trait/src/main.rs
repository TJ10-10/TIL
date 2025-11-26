trait Greet {
    fn greet(&self) -> String;
}

struct Person {
    name: String,
}

impl Greet for Person {
    fn greet(&self) -> String {
        format!("こんにちは、{}さん!", self.name)
    }
}

fn main() {
    let user = Person {
        name: String::from("エリン"),
    };
    println!("{}", user.greet());
}
