//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/Node/Node.h"

using namespace std;

int main(int argc, const char * argv[]) {
  Node<int> node, node2;

  node.value = 1;
  node2.value = 2;

  node.next = &node2;

  cout << node.value << " " << node2.value << endl;

  return 0;
}
