//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/LinkedList/LinkedList.h"

using namespace std;

int main(int argc, const char * argv[]) {
  Linkedlist<int> list;

  list.insertAtBeginning(1);
  list.insertAtBeginning(2);
  list.insertAtBeginning(3);
  list.insertAtEnd(5);

  // Use Iterator
  for (Node<int> *iter = list.begin(); iter != list.end(); iter = iter->next) {
    cout << iter->value << endl;
  }
  
  return 0;
}
