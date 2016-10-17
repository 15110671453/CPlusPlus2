//
//  Student.cpp
//  CPlusKaoBeiGouZaoConstYinYong
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
#include <iostream>
using namespace ::std;
#include <cstring>//c语言中的string
#include "Student.hpp"
//构造函数 初始化列表
Student::Student(const char *pName,int sId):id(sId)
{
    memset(name, 0, 40);
    if (pName!=NULL) {
        int len =strlen(pName);
        len = (len>39)?39:len;
        strncpy(name, pName, len);
    }
    cout<<"condtructor of student "<<name<<endl;
    
    
}
//析构函数
Student::~Student()
{
    cout<<"destructor of student " <<name<<endl;
    
}

void Student::print()
{
    cout<<"Student: "<<endl;
}
//拷贝构造函数 const关键字 表示不会影响 传进来的对象的
Student::Student(const Student &s)
{
    cout<<"constructing copy! &s= "<<&s<<endl;
    strcpy(name, "copy");
    strcat(name, s.name);
    id =s.id;
}



