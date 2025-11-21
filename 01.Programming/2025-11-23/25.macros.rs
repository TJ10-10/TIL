// src/main.rs

// 簡単なマクロの定義
macro_rules! say_hello {
    () => {
        println!("こんにちは、Rustの森へようこそ！");
    };
}

// 引数付きマクロ
macro_rules! print_sum {
    ($a:expr, $b:expr) => {
        println!("{} + {} = {}", $a, $b, $a + $b);
    };
}

// 可変引数マクロ
macro_rules! log_values {
    ($($val:expr),*) => {
        $(
            println!("値: {}", $val);
        )*
    };
}

fn main() {
    say_hello!();
    print_sum!(3, 7);
    log_values!(10, 20, 30, 40);
}
