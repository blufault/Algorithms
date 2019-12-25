mod sorting;
pub use crate::sorting::binary_search;

#[test]

fn example() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13];
    assert_eq!(3, binary_search::binary_search(&v, 4));
}
