enum TrafficLight {
    Red,
    Yellow,
    Green,
}

fn print_light(light: TrafficLight) {
    match light {
        TrafficLight::Red => println!("とまれ!"),
        TrafficLight::Yellow => println!("注意して進め"),
        TrafficLight::Green => println!("進め!"),
    }
}

fn main() {
    let light = TrafficLight::Yellow;
    print_light(light);
}
