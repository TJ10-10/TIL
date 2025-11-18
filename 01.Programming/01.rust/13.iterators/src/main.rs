fn main() {
    let numbers = vec![1, 2, 3, 4, 5];

    let sum: i32 = numbers.iter().sum();
    println!("合計: {}", sum);

    let doubled: Vec<i32> = numbers.iter().map(|x| x * 2).collect();
    println!("2倍: {:?}", doubled);

    let evens: Vec<i32> = numbers.iter().filter(|x| *x % 2 == 0).cloned().collect();
    println!("偶数: {:?}", evens);

    for num in numbers.iter() {
        println!("要素: {}", num);
    }
}
