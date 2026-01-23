fn main() {
    let mut num = 42;

    let r1 = &num as *const i32;
    let r2 = &mut num as *mut i32;

    println!("ポインタ r1 のアドレス: {:p}", r1);

    unsafe {
        println!("r1 が指す値: {}", *r1);

        *r2 = 100;
        println!("r2 を通じて書きかえた値: {}", *num_via_pointer(r2));
    }

    unsafe {
        dangerous_function();
    }
}

unsafe fn dangerous_function() {
    println!("この関数は unsafe ブロック内でのみ呼び出せます。");
}

fn num_via_pointer(p: *mut i32) -> &'static i32 {
    unsafe {
        &*p
    }
}
