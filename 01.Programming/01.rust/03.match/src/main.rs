fn main() {
    let number = 7;

    match number {
        1 => println!("One"),
        2 | 3 | 5 | 7 | 11 => println!("This is a prime number"),
        13..=19 => println!("A teen number"),
        _ => println!("Something else"),
    }
}
