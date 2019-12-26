// TODO:
// [x] - Implement Result<Ok, Err>
// [] - Implement Generics for binary_search
// [] - Since Rust does not support overloading functions, try enums with tuples, traits and impl

pub mod binary_search {
    pub fn binary_search<T: PartialOrd >(v: &Vec<T>, target: T) -> Result<usize, isize> {
        let len_sub_one = (v.len() - 1) as usize;
        return Ok(binary_search_impl(&v, target, 0, len_sub_one)).unwrap_or_else(|err| {
            return err;
        });
    }

    fn binary_search_impl<T: PartialOrd>(v: &Vec<T>, target: T, low: usize, high: usize) -> Result<usize, isize>{
        if low > high {
            return Err(-1);
        }

        let mid: usize = low + (high - low) / 2;

        if target < v[mid] {
            return binary_search_impl(v, target, low, mid - 1);
        } else if target > v[mid] {
            return binary_search_impl(v, target, mid + 1, high);
        } else {
            return Ok(mid as usize); // convert usize to type T
        }
    }
}

