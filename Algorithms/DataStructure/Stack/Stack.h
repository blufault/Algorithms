#ifndef Stack_h
#define Stack_h

#include "./../LinkedList/LinkedList.h"

/*
 * Stack
 *
 * Implements a generic stack using a linked list. It maintains the stack as a linked list,
 *  with the top of the stack at the beginning, referenced by an instance variable first
 * To push() an item, we add it to the beginning of the list;
 * To pop() an item, we remove it from the beginning of the list
 */

template <typename T> class Stack {
  public:
    void push(T item) {
      first.insertAtBeginning(item);
    }

    T pop() {
      return first.removeFromBeginning();
    }

  private:
    Linkedlist<T> first;
};

#endif

