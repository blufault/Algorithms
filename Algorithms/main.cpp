//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/Stack/FixedCapacityStackIterator.h"

using namespace std;

// 0 = false
// 1 = true

int main(int argc, const char * argv[]) {
  FixedCapacityStackIterator<int> fstack;

  fstack.vec.push_back(1);
  fstack.vec.push_back(2);
  fstack.vec.push_back(3);

  for (int &val : fstack) {
    cout << val << endl;
  }

  return 0;
}
