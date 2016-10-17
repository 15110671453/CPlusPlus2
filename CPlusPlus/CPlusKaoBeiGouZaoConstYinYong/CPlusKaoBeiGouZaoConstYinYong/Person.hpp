//
//  Person.hpp
//  CPlusKaoBeiGouZaoConstYinYong
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <iostream>
using namespace ::std;
#include <stdio.h>
class Person
{
public:

    Person(char* pName);
    ~Person();
    void Print();
//private://禁止拷贝构造函数 
    //拷贝构造函数
    Person(const Person&p);
    //赋值操作符函数
    Person& operator=(const Person& other);
//protected:
//    char* pName;
private:
    char* name;
};



#endif /* Person_hpp */
