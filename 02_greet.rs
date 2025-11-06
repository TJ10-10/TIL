fn main() {
    let name = "きのこ";
    greet(name);
}

fn greet(who: &str) {
    println!("こんにちは、{}さん!", who);
}
