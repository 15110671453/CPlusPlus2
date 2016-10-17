//
//  Singleton.cpp
//  Inheriance
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
#include <iostream>
#include "Singleton.hpp"
using namespace ::std;
/* 单列具体实现*/

Singleton* Singleton::instance = NULL;

Singleton::Singleton()
{
    cout<<"constructor"<<endl;
}
Singleton::~Singleton()
{
    cout<<"destructor"<<endl;
}
//not thread safe ,using pthread_mutex_lock/unlock
Singleton* Singleton::getInstance()
{
    Singleton* ret = instance;
    if (ret==NULL) {
        instance = new Singleton();
        ret = instance;
    }
    return ret;
}

void Singleton::doSomething()
{
    cout<<"do something"<<endl;
}
//void printIdname()
//{
//    int* name=idName;
//    cout<<"print id name"<<name<<endl;
//}
// void setIdname(int idNa)
//{
//    this->idName=idNa;
//}
