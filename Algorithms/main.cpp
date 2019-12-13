//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/Stack/ResizingArrayStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
  ResizingArrayStack<int> dystack;
  
  dystack.push(1);
  
  dystack.traverse();
  
  return 0;
}
