use std::env;

fn main() {
    let args: Vec<String> = env::args().collect();

    println!("引数の数: {}", args.len());
    for (i, arg) in args.iter().enumerate() {
        println!("引数[{}]: {}", i, arg);
    }
}
