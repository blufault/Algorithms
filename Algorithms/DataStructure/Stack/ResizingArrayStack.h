#ifndef ResizingArrayStack_h
#define ResizingArrayStack_h

#include <iostream>
#include <vector>
/// Array Resizing stack
// Implments a generic stack using an resizing array.
// With a resizing array, we dynamically adjust the size of the array so that it is both sufficidently large
//  to hold all of the items and not so lorge as to waste
//  an excessive amount of space.
// We double the size of the array in push() if it is full;
// we halve the size of the array in pop if it is less than one-quarter full.

template <class T> class ResizingArrayStack {
  public:
    // Constructor
    ResizingArrayStack() = default;
    
    void push(T item) {
      if (stack.size() >= stack.capacity()) {
        stack.resize(stack.size() * 2);
      }
      stack.push_back(item);
    }

    T pop() {
      if (stack.size() <= stack.capacity() * .25) {
        stack.resize(stack.size() / 2);
      }
      return stack.pop_back();
    }

    bool isEmpty() {
      return stack.empty();
    }

    int size() {
      return stack.size();
    }

    void traverse() {
      for (typename std::vector<T>::iterator it = stack.begin(); it != stack.end(); ++it) {
        std::cout <<*it << ' ';
      }
      std::cout << std::endl;
    }
  
  private:
    std::vector<int> stack;
};

#endif
