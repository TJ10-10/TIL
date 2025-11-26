fn main() {
    println!("きのこ関数の世界へようこそ!");
    let result = add(3, 5);
    println!("3 + 5 = {}", result);

    greet("エリン");
}

fn add(x: i32, y: i32) -> i32 {
    x + y
}

fn greet(name: &str) {
    println!("こんにちは、{}さん! 今日も森は静かで美しいですね。", name);
}
