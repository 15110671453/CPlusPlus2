//
//  Singleton.hpp
//  Inheriance
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <iostream>
#include <stdio.h>
using namespace ::std;

/*
 保证程序运行中某一类的对象只有一个
 
 */
class Singleton
{
public:
static Singleton* getInstance();
    void doSomething();
    void setIdname(int idNa);
   
private:
    // 私有 这里可以不用实现  实现也没意义
    Singleton();
    ~Singleton();
    Singleton(const Singleton&);
    Singleton& operator=(const Singleton&);
    
    static Singleton* instance;
     int* idName;
};




































#endif /* Singleton_hpp */
