// Creating a Node
// To be used everywhere else
// Referring to a type, and a type of itself

#ifndef Node_h
#define Node_h

template <typename T> struct Node {
  T value;
  Node *next;
  
  Node(T val): value(val) {
    value = val;
    next = nullptr;
  }
  
};

#endif
