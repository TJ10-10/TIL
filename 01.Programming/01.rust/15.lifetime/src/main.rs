fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {
    if x.len() > y.len() { x } else { y }
}

fn main() {
    let string1 = String::from("森のささやき");
    let string2 = "きのこの歌";

    let result = longest(string1.as_str(), string2);
    println!("長い方の文字列は: {}", result);
}
