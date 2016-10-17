//
//  main.cpp
//  Inheriance
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
#include "Singleton.hpp"
#include <iostream>
using namespace ::std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    Singleton::getInstance()->doSomething();
    
    Singleton::getInstance()->setIdname(100);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
