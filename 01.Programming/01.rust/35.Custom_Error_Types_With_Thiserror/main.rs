use std::fmt;

#[derive(Debug)]
pub enum MyProjectError {
    NotFound(String),
    InvalidInput(u32),
    ConnectionFailed,
}

impl fmt::Display for MyProjectError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Self::NotFound(item) => write!(f, "Error: '{}' was not found.", item),
            Self::InvalidInput(val) => write!(f, "Error: {} is an invalid input.", val),
            Self::ConnectionFailed => write!(f, "Error: Failed to connect to server."),
        }
    }
}

impl std::error::Error for MyProjectError {}

fn check_value(val: u32) -> Result<(), MyProjectError> {
    if val > 100 {
        Err(MyProjectError::InvalidInput(val))
    } else {
        Ok(())
    }
}

fn main() {
    match check_value(150) {
        Ok(_) => println!("Success!"),
        Err(e) => eprintln!("An error occurred: {}", e),
    }
}
