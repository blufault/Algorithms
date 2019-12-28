
pub mod fixed_capacity {
    pub mod Point {
        pub struct Point {
            pub x: i32,
            pub y: i32
        }

        impl Point {
            pub fn new() -> Point {
                Point { x: 0, y: 0 }
            }
        }
    }
}

