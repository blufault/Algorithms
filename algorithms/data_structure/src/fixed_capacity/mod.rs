
use std::io::Error;

pub mod stack_of_strings {
    pub struct Stack {
        storage: [i32; 5],
        len: usize
    }

    impl Stack {
        pub fn new() -> Stack {
            Stack { len: 0, storage: [0, 0, 0, 0, 0] }
        }

        pub fn getLen(&self) -> usize {
            self.len
        }

        pub fn push(&mut self, value: i32) {
            self.storage[self.len] = value;
            // Add a trait to allow Binary Operation
            self.len = self.len + 1;
        }

        pub fn pop(&mut self) -> i32 {
            // Add a trait to allow Binary Operation
            self.len = self.len - 1;
            let val: i32 = self.storage[self.len];
            val
        }

        pub fn at(&self, ind: usize) -> i32 {
            self.storage[ind]
        }

        // pub fn peek(&self) -> i32 {}

        // fn range_check() -> Result<i32, io::Error> {}
    }
}

