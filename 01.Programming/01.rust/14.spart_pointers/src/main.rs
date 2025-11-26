use std::rc::Rc;

fn main() {
    let a = Rc::new(String::from("森の知恵"));
    let b = Rc::clone(&a);
    let c = Rc::clone(&a);

    println!("a: {}, b: {}, c: {}", a, b, c);
    println!("参照カウント: {}", Rc::strong_count(&a));
}
