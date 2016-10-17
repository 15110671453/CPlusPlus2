//
//  Martain.cpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
#include <iostream>
using namespace ::std;
#include "Martain.hpp"
/*有一个类的静态数据成员*/
int Martain::martainCount =0;

 Martain::Martain()
{
    martainCount++;
    
}
Martain::~Martain()
{
    martainCount--;
}
/*但是类的静态成员函数 和类的普通的成员函数 实现方式一致的*/
int Martain::getCount()
{
    /*在static成员函数中不能使用 this指针
     即使没有实例化类对象 static数据成员和成员函数
     仍然可以使用
     static成员的名字在类的作用域中
     因此可以避免与其他类的成员或者全局对象名字冲突
     可以实施封装 static成员可以是私有成员
     而全局对象不可以
     通过阅读代码容易看出static成员与特定类关联
     清晰的显示程序员的意图
     */
    return martainCount;
}

void Martain::fight()
{
    cout<<"fight "<<endl;
}


