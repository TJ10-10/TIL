fn main() {
    let add = |a: i32, b: i32| a + b;
    let result = add(3, 4);
    println!("3 + 4 = {}", result);

    let mut count = 0;
    let mut increment = || {
        count += 1;
        println!("Count is now: {}", count);
    };

    increment();
    increment();
}

