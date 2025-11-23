extern crate proc_macro;
use proc_macro::TokenStream;

#[proc_macro]
pub fn make_hello(_item: TokenStrem) -> TokenStrem {
    let gen = quote::quote! {
        fn hello() {
            println!("こんにちは、手続き型マクロの世界へ!");
        }
    };
    gen.into()
}

