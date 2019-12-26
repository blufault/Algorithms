mod sorting;
pub use crate::sorting::binary_search;

#[test]
fn should_be_correct() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13];
    assert_eq!(Ok(3), binary_search::binary_search(&v, 4));
}

#[test]
fn should_be_incorrect() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13];
    assert_eq!(Err(-1), binary_search::binary_search(&v, 20));
}
