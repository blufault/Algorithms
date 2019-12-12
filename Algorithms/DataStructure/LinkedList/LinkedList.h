#ifndef LinkedList_h
#define LinkedList_h

#include "../Node/Node.h"

// Linkedlist will only have a head for now
template <class T> class Linkedlist {
  public:
    void insertAtBeginning(T value) {
      Node<T> _node;
      _node.value = value;

      if (head != 0) {
        _node.next = head;
      }
      head = &_node;
    }

    T getValue() {
      // i previously did, *head.value
      // but head->value worked...
      return head->value;
    }
  private:
    Node<T> *head;
};

#endif
