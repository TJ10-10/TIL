#[derive(Debug)]
enum OrderStatus {
    Unpaid,
    Pending,
    Shipped,
}

struct Order {
    id: u32,
    status: OrderStatus,
}

impl Order {
    fn new(id: u32) -> Self {
        Self {
            id,
            status: OrderStatus::Unpaid,
        }
    }

    fn proceed(&mut self) {
        self.status = match self.status {
            OrderStatus::Unpaid => {
                println!("Order {}: 支払いを確認しました。出荷準備に入ります。", self.id);
                OrderStatus::Pending
            }
            OrderStatus::Pending => {
                println!("Order {}: 商品を出荷しました。", self.id);
                OrderStatus::Shipped
            }
            OrderStatus::Shipped => {
                println!("Order {}: すでの配送済みです。", self.id);
                OrderStatus::Shipped
            }
        };
    }
}

fn main() {
    let mut my_order = Order::new(101);
    println!("現在の状態: {:?}", my_order.status);

    my_order.proceed(); // Unpaid -> Pending
    my_order.proceed(); // Pending -> Shipped
    
    println!("最終状態: {:?}", my_order.status);
}
