struct Draft;
struct Review;
struct Published;

struct Post<S> {
    content: String,
    state: S,
}

impl Post<Draft> {
    fn new(content: &str) -> Post<Draft> {
        Post {
            content: content.to_string(),
            state: Draft,
        }
    }

    fn request_review(self) -> Post<Review> {
        Post {
            content: self.content,
            state: Review,
        }
    }
}

impl Post<Review> {
    fn approve(self) -> Post<Published> {
        Post {
            content: self.content,
            state: Published,
        }
    }
}

impl Post<Published> {
    fn display(&self) {
        println!("Content: {}", self.content);
    }
}

fn main() {
    let post = Post::new("RustのTypestate Patternについて");

    let post_in_review = post.request_review();

    let post_published = post_in_review.approve();

    post_published.display();
}

