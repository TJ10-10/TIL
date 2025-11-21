my_macro_lib

cargo new my_macro_lib --lib

my_macro_lib/Cargo.toml に追加

[lib]
proc-macro = true
--------------------------------------------------
// my_macro_lib/src/lib.rs

extern crate proc_macro;
use proc_macro::TokenStream;

#[proc_macro]
pub fn make_hello(_item: TokenStream) -> TokenStream {
    let gen = quote::quote! {
        fn hello() {
            println!("こんにちは、手続き型マクロの世界へ！");
        }
    };
    gen.into()
}
-------------------------------------------------------
[dependencies]
quote = "1.0"


cargo new my_macro_app

my_macro_app/Cargo.toml

[dependencies]
my_macro_lib = { path = "../my_macro_lib" }


---------------------------------------------------------
// my_macro_app/src/main.rs

use my_macro_lib::make_hello;

make_hello!();

fn main() {
    hello();
}
-----------------------------------------------------

cd my_macro_app
cargo run

