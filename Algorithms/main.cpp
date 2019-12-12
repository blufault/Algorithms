//
//  main.cpp
//  Algorithms
//
//  Created by Jeff Kim on 12/6/19.
//  Copyright © 2019 Jeff Kim. All rights reserved.
//

#include<iostream>
#include "DataStructure/Stack/FixedCapacityStack.hpp"

using namespace std;

// 0 = false
// 1 = true

int main(int argc, const char * argv[]) {
    FixedCapacityStack<int> fixedStack(10);
    
    fixedStack.push(10);
    fixedStack.iterator();
    
    return 0;
}
