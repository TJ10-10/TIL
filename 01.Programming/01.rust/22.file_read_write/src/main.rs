use std::fs::File;
use std::io::{self, Read, Write};

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let mut file = File::create("example.txt")?;
    file.write_all("こんにちは、Rustの世界!".as_bytes())?;

    let mut file = File::open("example.txt")?;
    let mut contents = String::new();
    file.read_to_string(&mut contents)?;
    println!("ファイルの中身: {}", contents);

    Ok(())
}
