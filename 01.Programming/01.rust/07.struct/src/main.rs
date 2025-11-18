struct Book {
    title: String,
    author: String,
    pages: u32,
    is_available: bool,
}

fn print_book_info(book: &Book) {
    println!(" Title: {}", book.title);
    println!(" Author: {}", book.author);
    println!(" Pages: {}", book.pages);
    println!(" Available: {}", book.is_available);
}

fn main() {
    let book1 = Book {
        title: String::from("The Rusty Forest"),
        author: String::from("Erin Nameko"),
        pages: 128,
        is_available: true,
    };

    print_book_info(&book1);
}
