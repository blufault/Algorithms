//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
//#include "DataStructure/Node/Node.h"
#include "DataStructure/LinkedList/LinkedList.h"

using namespace std;

int main(int argc, const char * argv[]) {
  Linkedlist<int> list;
  
  list.insertAtBeginning(1);
  
  list.traverse();
  
  return 0;
}
