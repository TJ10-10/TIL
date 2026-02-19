trait MessageSender {
    fn send(&self, recipient: &str, message: &str);
}

struct EmailService;
impl MessageSender for EmailService {
    fn send(&self, recipient: &str, message: &str) {
        println!("Sending Email to {}: {}", recipient, message);
    }
}

struct MockService;
impl MessageSender for MockService {
    fn send(&self, recipient: &str, message: &str) {
        println!("[MOCK] 実際には送信せずログ記録のみ: {} -> {}", recipient, message);
    }
}

struct NotificationApp<T: MessageSender> {
    sender: T,
}

impl<T: MessageSender> NotificationApp<T> {
    fn new(sender: T) -> Self {
        Self { sender }
    }

    fn notify(&self, user: &str) {
        self.sender.send(user, "こんにちは! Rustの学習は順調ですか？");
    }
}

fn main() {
    let real_app = NotificationApp::new(EmailService);
    real_app.notify("rust-user@example.com");

    let test_app = NotificationApp::new(MockService);
    test_app.notify("test-user");
}
