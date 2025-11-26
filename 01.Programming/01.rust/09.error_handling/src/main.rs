fn divide(a: f64, b: f64) -> Result<f64, String> {
    if b == 0.0 {
        Err(String::from("ゼロで割ることはできません"))
    } else {
        Ok(a / b)
    }
}

fn main() {
    match divide(10.0, 2.0) {
        Ok(result) => println!("結果: {}", result),
        Err(e) => println!("エラー: {}", e),
    }

    match divide(5.0, 0.0) {
        Ok(result) => println!("結果: {}", result),
        Err(e) => println!("エラー: {}", e),
    }
}
