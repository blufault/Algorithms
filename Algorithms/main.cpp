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
  Linkedlist<int> mylist;

  mylist.insertAtBeginning(1);
  mylist.insertAtBeginning(2);

  cout << mylist.getValue() << endl;
  return 0;
}
