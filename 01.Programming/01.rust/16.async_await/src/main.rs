use tokio::time::{Duration, sleep};

async fn say_hello() {
    sleep(Duration::from_secs(1)).await;
    println!("Hello after 1 second!");
}

#[tokio::main]
async fn main() {
    println!("Start");
    say_hello().await;
    println!("End");
}
