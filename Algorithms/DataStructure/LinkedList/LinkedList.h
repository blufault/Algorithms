#ifndef LinkedList_h
#define LinkedList_h

#include "../Node/Node.h"

using namespace std;

//node1.value = 1;
//node1.next = nullptr;
//
//node2.value = 2;
//node2.next = &node1;

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
  
    void traverse() {
      Node<T> *t = new Node<T>;
      t = head;
      
      while (t) {
        cout << t->value << endl;
        t = t->next;
      }
    }
  
  private:
    Node<T> *head;
};

#endif
