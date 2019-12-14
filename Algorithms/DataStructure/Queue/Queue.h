/*
 * Queue
 *
 * Implement a generic FIFO queue using a linked list.
 * It maintains the queue as a linked list in order from
 * least recently to most recently added items, with the
 * beginning of the queue referenced by an instance variable
 * first and the end of the queue referenced by an instance
 * variable last.
 *
 * To enqueue() an item, we add it to the end of the list;
 * To dequeue() an item, we remove it from the beginning of the list
 */

#ifndef Queue_h
#define Queue_h

#include<iostream>

#include"./../Node/Node.h"
#include"./../LinkedList/LinkedList.h"

template <class T> class Queue {
  public:
    Queue() {
      first = nullptr;
      last = nullptr;
    }

    void enqueue(T item) {
      list.insertAtEnd(item);
    }

    // TODO: What should dequeue do? Return the Node or the value?
    T dequeue() {
      return list.removeFromBeginning();
    }

  private:
    Node<T> *first;
    Node<T> *last;
    Linkedlist<T> list;
};

#endif

