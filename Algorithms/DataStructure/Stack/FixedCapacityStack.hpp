//
//  FixedCapacityStack.hpp
//  Algorithms
//
//  Created by Jeff Kim on 12/11/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.

// FixedCapacityStack (try to make it generic);
// void push(Item item)
// Item pop()
// boolean isEmpty
// int size();

#ifndef FixedCapacityStack_hpp
#define FixedCapacityStack_hpp

// TODO: Create an iterator for FixedCapacityStack

template <class Item> class FixedCapacityStack {
public:
    // constructors
    FixedCapacityStack() = default;

    // member functions
    void push(Item _item) {
        item[capacity++] = _item;
    }
    Item pop() {
        return item[--capacity];
    }
    bool isEmpty() {
        return capacity == 0;
    }
    int size() {
        return capacity;
    }
    bool isFull() {
        return capacity == stacklen;
    }

private:
    int capacity = 0;
    // constexpr: evaluate the value at compile time.
    static constexpr int stacklen = 10;
    Item item[stacklen];
};

#endif /* FixedCapacityStack_hpp */
