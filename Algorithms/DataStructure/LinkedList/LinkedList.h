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
  
    void insertAtEnd(T value) {
      Node<T> *last;
      // TODO: call the member function 'traverse' with last as argument
      
      for (last = head; last->next != 0; last = last->next) {
        ;
      }
      
      Node<T> *tmp = new Node<T>(value);
      last->next = tmp;
    }
  
    void removeFromBeginning() {
      head = head->next;
    }
  
    void traverse() {
      for (Node<T> *t = head; t != 0; t = t->next) {
        cout << t->value << endl;
      }
    }
  
    void traverse(Node<T> &refT) {
      Node<T> *t;
      for (t = head; t != 0; t = t->next) {
        cout << t->value << endl;
      }
      
      refT = t;
    }
  
  private:
    Node<T> *head;
};

#endif
