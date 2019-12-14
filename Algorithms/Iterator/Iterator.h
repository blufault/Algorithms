#ifndef Iterator_h
#define Iterator_h

#include <iostream>
#include "./../DataStructure/Node/Node.h"

/*
 * Iterator
 *
 * Basically a pointer with a begin(), end() and increment (overload)
 */

template <class T> class Iterator {
  public:
    Iterator() {
      biter = nullptr;
      eiter = nullptr;
    }

    void setBiter (Node<T> *head) {
      biter = head;
    }

    void setEiter (Node<T> *tail) {
      eiter = tail;
    }

    Node<T> *begin() {
      return biter;
    }

    Node<T> *end() {
      return eiter;
    }

  private:
    Node<T> *biter;
    Node<T> *eiter;
};

#endif

