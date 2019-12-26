mod sorting;
pub use crate::sorting::binary_search;

#[test]
fn should_be_correct_for_i32() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13];
    assert_eq!(Ok(3), binary_search::binary_search(&v, 4));
}

#[test]
fn should_be_incorrect_for_i32() {
    let v: Vec<i32> = vec![1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13];
    assert_eq!(Err(-1), binary_search::binary_search(&v, 20));
}

#[test]
fn should_be_correct_for_f32() {
    let v: Vec<f32> = vec![1.00, 2.50, 3.23, 4.10, 5.12, 6.39, 7.20, 8.59, 9.12, 10.32, 13.97];
    assert_eq!(Ok(3), binary_search::binary_search(&v, 4.10));
}

#[test]
fn should_be_incorrect_for_f32() {
    let v: Vec<f32> = vec![1.00, 2.50, 3.23, 4.10, 5.12, 6.39, 7.20, 8.59, 9.12, 10.32, 13.97];
    assert_eq!(Err(-1), binary_search::binary_search(&v, 4.20));
}
