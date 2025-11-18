fn main() {
    let number = 7;

    if number < 5 {
        println!("5より小さい!");
    } else if number == 5 {
        println!("ちょうど5!");
    } else {
        println!("5より大きい!");
    }

    let condition = true;
    let value = if condition {
        "きのこ"
    } else {
        "たけのこ"
    };
    println!("選ばれたのは: {}", value);
}
