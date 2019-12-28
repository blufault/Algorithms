
mod fixed_capacity;
pub use crate::fixed_capacity::stack_of_strings::Stack;

#[test]
fn init_fixed_capacity_stack_of_strings() {
    let s: Stack = Stack::new();
    assert_eq!(s.get_len(), 0);
}

#[test]
fn stack_of_strings_push() {
    let mut s: Stack = Stack::new();
    s.push(1);

    assert_eq!(s.get_len(), 1);
    assert_eq!(s.at(0), 1);
}

#[test]
fn stack_of_strings_push_p_2() {
    let mut s: Stack = Stack::new();
    s.push(1);
    s.push(2);

    assert_eq!(s.get_len(), 2);
    assert_eq!(s.at(1), 2);
}

#[test]
fn stack_of_string_pop() {
    let mut s: Stack = Stack::new();
    s.push(1);
    s.push(2);
    let ret = s.pop();

    assert_eq!(s.get_len(), 1);
    assert_eq!(s.at(0), 1);
    assert_eq!(ret.unwrap(), 2);
}

#[test]
fn stack_of_strings_pop_p_2() -> Result<(), String>{
    let mut s: Stack = Stack::new();
    s.push(1);
    s.push(2);
    let ret = s.pop();
    let ret2 = s.pop();

    if s.get_len() == 0 {
        Ok(())
    } else {
        Err(String::from("Cannot pop."))
    }
}

#[test]
fn stack_of_string_invalid_pop() {
    let mut s: Stack = Stack::new();
    let err = s.pop();

    if err == Err(String::from("Cannot pop.")) {
        assert!(true);
    }
}

#[test]
fn stack_of_string_invalid_push() {
    let mut s:Stack = Stack::new();

    // TODO: Construct a better test for this..
    for num in (0..6) {
        if num == 5 {
            assert!(true);
            break;
        }
        s.push(num);
    }
}
