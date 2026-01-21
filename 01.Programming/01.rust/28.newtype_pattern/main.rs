struct Meters(u32);
struct Feet(u32);

fn calculate_distance(distance: Meters) {
    println!("距離は {} メートルです。", distance.0);
}

fn main() {
    let my_house = Meters(10);
    let your_house = Feet(33);

    calculate_distance(my_house);
}
