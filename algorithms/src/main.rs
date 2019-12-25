use std::vec;

use algorithms::default_binary_search::binary_search;
use sorting;

fn main() {
    /*
    let v: Vec<i32> = vec![10, 11, 12, 16, 18, 23, 29, 33, 48, 54, 57, 68, 77, 84, 98];
    let target: i32 = 11;

    println!("{} is at index {}", target, binary_search(&v, target));
    */

    let num = 10;
    println!("Add one to {} = {}", num, sorting::add_one(num));
}

