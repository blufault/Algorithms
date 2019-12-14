#ifndef LinkedList_h
#define LinkedList_h

#include "../Node/Node.h"

using namespace std;

template <class T> class Linkedlist {
  public:
    Linkedlist() {
      head = nullptr;
    }

    void insertAtBeginning(T value) {
      // Create the node
      Node<T> *tmp = new Node<T>(value);
      tmp->next = head;
      head = tmp;
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

  private:
    Node<T> *head;
};

#endif
