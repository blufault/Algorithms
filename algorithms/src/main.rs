use sorting::binary_search::binary_search;

fn main() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    let target: i32 = 4;
    println!("{} is at index {:#?}", target, binary_search(&v, target));
}

