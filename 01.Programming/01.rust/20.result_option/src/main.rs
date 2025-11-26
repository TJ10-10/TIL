use std::fs::File;
use std::io::{self, BufRead};
use std::path::Path;

fn read_line_from_file<P: AsRef<Path>>(
    path: P,
    line_number: usize,
) -> Option<Result<String, io::Error>> {
    let file = File::open(path);
    match file {
        Ok(f) => {
            let lines = io::BufReader::new(f).lines();
            lines
                .enumerate()
                .find(|(i, _)| *i == line_number)
                .map(|(_, line)| line)
        }
        Err(e) => Some(Err(e)),
    }
}

fn main() {
    match read_line_from_file("sample.txt", 2) {
        Some(Ok(line)) => println!("Line: {}", line),
        Some(Err(e)) => eprintln!("Error reading file: {}", e),
        None => println!("Line not found"),
    }
}
