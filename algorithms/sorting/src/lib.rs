pub fn add_one(x: i32) -> i32 {
    x + 1
}

#[cfg(test)]
pub mod tests {

    #[test]
    fn should_add_one() {
        assert_eq!(3, add_one(2));
    }
}
