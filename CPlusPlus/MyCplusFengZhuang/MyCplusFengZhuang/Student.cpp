//
//  Student.cpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
/*类实现*/
#include <iostream>
using namespace ::std;
#include "Student.hpp"
Student::Student(int id):m_id(id),m_score(0)
{
    /*
     使用初始化列表的方式 来初始化
     初始化列表中的顺序 要与类定义文件中 字段定义的顺序一致
     */
    cout<<"constructor Student m-id is  "<<m_id<<endl;
    
}
Student::~Student()
{
    cout<<"Student destructor"<<endl;
}
