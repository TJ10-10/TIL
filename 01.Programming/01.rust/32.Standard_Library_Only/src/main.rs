use std::io::{BufReader, prelude::*};
use std::net::{TcpListener, TcpStream};

fn main() {
    let listener = TcpListener::bind("127.0.0.1:7878").unwrap();
    println!("Server running on http:127.0.0.1:7878");

    for stream in listener.incoming() {
        let stream = stream.unwrap();
        handle_connection(stream);
    }
}

fn handle_connection(mut stream: TcpStream) {
    let buf_reader = BufReader::new(&mut stream);

    let request_line = match buf_reader.lines().next() {
        Some(Ok(line)) => line,
        _ => return,
    };

    let (status_line, contents) = if request_line == "GET / HTTP/1.1" {
        (
            "HTTP/1.1 200 OK",
            "<h1>Hello from Rust!</h1><p>Success!</p>",
        )
    } else {
        (
            "HTTP/1.1 404 NOT FOUND",
            "<h1>404</h1><p>Page not found</p>",
        )
    };

    let length = contents.len();
    let response = format!(
        "{}\r\nContent-Length: {}\r\n\r\n{}",
        status_line, length, contents
    );

    stream.write_all(response.as_bytes()).unwrap();
}
