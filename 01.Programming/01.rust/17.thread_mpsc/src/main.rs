use std::sync::mpsc;
use std::thread;
use std::time::Duration;

fn main() {
    let (tx, rx) = mpsc::channel();

    for i in 0..3 {
        let tx_clone = tx.clone();
        thread::spawn(move || {
            let msg = format!("スレッド {} からのメッセージ", i);
            thread::sleep(Duration::from_millis(500 * i));
            tx_clone.send(msg).unwrap();
        });
    }

    for received in rx.iter().take(3) {
        println!("受信: {}", received);
    }
}
