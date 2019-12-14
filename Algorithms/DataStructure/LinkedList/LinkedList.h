#ifndef LinkedList_h
#define LinkedList_h

#include "../Node/Node.h"
#include "./../../Iterator/Iterator.h"

using namespace std;

template <class T> class Linkedlist {
  public:
    Linkedlist() {
      head = nullptr;
      // TODO: How did assign iterator to a new Iterator solve the BADxACCESS of biter?
      iterator = new Iterator<T>;
    }

    // TODO: when the user only uses this member function
    // TODO: we should be accountable for the 'tail'
    void insertAtBeginning(T value) {
      // Create the node
      Node<T> *tmp = new Node<T>(value);
      tmp->next = head;
      head = tmp;

      // setting Iterator here
      iterator->setBiter(head);
    }

    void insertAtEnd(T value) {
      Node<T> *tmp = new Node<T>(value);

      if (!head) {
        head = tmp;
      } else {
        Node<T> *last;
        // TODO: call the member function 'traverse' with last as argument

        for (last = head; last->next != 0; last = last->next) {
          ;
        }

        last->next = tmp;

        // Set up the end of the Iterator here
        iterator->setEiter(tmp);
      }
    }

    // TODO: Should this return the Node or just the type T?
    T removeFromBeginning() {
      Node<T> *rptr = head;
      head = head->next;

      return rptr->value;
    }

    void traverse() {
      for (Node<T> *t = head; t != 0; t = t->next) {
        cout << t->value << endl;
      }
    }

    // TODO: Properly overload the traverse function
    void traverse(Node<T> &refT) {
      Node<T> *t;
      for (t = head; t != 0; t = t->next) {
        cout << t->value << endl;
      }

      refT = t;
    }

    Node<T> *getHead() {
      return head;
    }

    Node<T> *getTail() {
      Node<T> *last;
      // TODO: call the member function 'traverse' with last as argument
      for (last = head; last->next != 0; last = last->next) {
        ;
      }

      return last;
    }

    Node<T> *begin() {
      return iterator->begin();
    }

    Node<T> *end() {
      return iterator->end();
    }
  
    // TODO: Complete the friend Operator++ for Iterator

  private:
    Node<T> *head;
    Iterator<T> *iterator;
};

#endif
