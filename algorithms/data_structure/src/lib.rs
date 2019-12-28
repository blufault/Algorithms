
mod fixed_capacity;
pub use crate::fixed_capacity::fixed_capacity::Point::Point;

#[test]
fn test() {
    let p = Point::new();

    assert_eq!(p.x, 0);
}

