//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/Queue/Queue.h"

using namespace std;

int main(int argc, const char * argv[]) {
  Queue<int> queue;

  queue.enqueue(1);
  queue.enqueue(2);
  
  queue.dequeue();

  return 0;
}
