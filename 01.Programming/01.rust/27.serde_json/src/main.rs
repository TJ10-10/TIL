use serde::{Deserialize, Serialize};
use serde_json;

#[derive(Serialize, Deserialize, Debug)]
struct Mushroom {
    name: String,
    color: String,
    is_edible: bool,
}

fn main() {
    let erin = Mushroom {
        name: "Erin".to_string(),
        color: "Golden Orange".to_string(),
        is_edible: false,
    };
    
    let json = serde_json::to_string(&erin).unwrap();
    println!("JSONに変換されたErin: {}", json);

    let data = r#"{"name":"Shiitake", "color":"Brown","is_edible":true}"#;
    let shiitake: Mushroom = serde_json::from_str(data).unwrap();
    println!("デシリアライズされたきのこ: {:?}", shiitake);
}
