//
//  Person.cpp
//  CPlusKaoBeiGouZaoConstYinYong
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#include "Person.hpp"
//拷贝构造函数
Person::Person(const Person&p)
{
    cout<<"copy constructor of person"<<endl;
    if (p.name!=NULL) {
        int len = strlen(p.name)+1;
        name = new char[len];
        cout<<"name = "<<static_cast<void*>(name)<<endl;
        memset(name, 0, len);
        strcpy(name, p.name);
        
    }else
    {
        name = NULL;
    }
}
//赋值运算符 操作函数
Person& Person::operator=(const Person &other)
{
    cout<<"operator = "<<endl;
    if (&other==this) {
        return *this;
    }
    if (name!=NULL) {
        delete []name;
        name = NULL;
    }
    if (other.name!=NULL) {
        int len= strlen(other.name) + 1;
        name = new char[len];
        memset(name, 0, len);
        strcpy(name, other.name);
        
    }else
    {
        name=NULL;
    }
    return *this;
}
//构造函数
Person::Person(char* pN)
{
    if (pN != NULL) {
        cout<<"constructing"<<endl;
        int len = strlen(pN)+1;
        name = new char[len];
        cout<<"name = "<<static_cast<void*>(name)<<endl;
        memset(name, 0, len);
        strcpy(name, pN);
        
    }else
    {
        name = NULL;
    }
}

//析构函数
Person::~Person()
{
    cout<<"Destructing Person"<<endl;
    if (name!=NULL) {
        Print();
        /*由于p2 与p 一个对象构造一个对象 没有设定 拷贝构造函数
         这时的赋值操作符 是执行浅拷贝 
         所以p2 析构完 p再析构导致 两次同时free同一块地址
         导致程序崩溃
         */
        /*
         这里解决办法 使用深拷贝
         
         */
        delete[] name;
        name=NULL;
    }
}
void Person::Print()
{
     cout<<"print pName = "<<name<<endl;
    cout<<"print pName = "<<static_cast<void*>(name)<<endl;
}
