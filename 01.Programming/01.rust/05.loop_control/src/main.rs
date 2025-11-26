fn main() {
    let mut count = 0;

    loop {
        count += 1;

        if count % 2 == 0 {
            println!("{} is even, skipping...", count);
            continue;
        }

        println!("Odd number: {}", count);

        if count >= 7 {
            println!("Reached the limit, breaking the loop.");
            break
        }
    }

    println!("Loop ended.");
}
