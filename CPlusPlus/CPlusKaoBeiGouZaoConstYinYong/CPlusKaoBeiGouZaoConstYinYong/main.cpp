//
//  main.cpp
//  CPlusKaoBeiGouZaoConstYinYong
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
/*
 何时需要拷贝构造函数
 类数据成员有指针
 类数据成员管理资源（如打开一个文件）
 如果一个类需要析构函数来释放资源 则它也需要一个拷贝构造函数
 如果想禁止一个类的拷贝构造函数 需要将拷贝构造函数设置为private
 */
#include <stdio.h>//printf
#include "Person.hpp"
#include "Student.hpp"
#include <iostream>
using namespace ::std;

/*
 拷贝构造函数 调用条件
 编译器提供拷贝构造函数 memberwise initialize 将新对象初始化为原对象的副本
 
 逐个成员 指的是编译器将现有对象的每个非static成员 依次复制到正在创建的对象
 为什么c++要定义拷贝构造函数
 对象s和对象t拥有统一资源 引起问题
 浅拷贝 
 创建p2时 对象p1被复制给p2 但资源并未复制
 因此p1 与p2指向同一块地址
 
 
 */
/*
 拷贝构造函数
 
 拷贝构造函数 是一种特殊的构造函数
 具有单个形参 此形参是对该类型的引用
 当定义一个新对象并用一个同类型的对象对它进行初始化时
 将显示使用拷贝构造函数
 当将该类型的对象传递给函数或从函数返回该类型
 的对象时，将隐式调用拷贝构造函数
 如果一个类没有定义拷贝构造函数，编译器会默认提供默认
 拷贝构造函数
 
 */
/*拷贝构造 大数据 这样影响性能*/
void  fun(Student stu)
{
    cout<<"In fun---"<<__func__<<",&stu="<<&stu<<endl;
    printf("&stu =%x\n",&stu);
}
Student bar()
{
      cout<<"In fun---"<<__func__<<endl;
    Student  tom("tom",112);
    return tom;
}
//值传递 定义类时 定义了一个数据类型 要满足这样的语法
void zoo(int val)
{
    printf("&val=%x\n",&val);
    val=100;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int i= 0;
    
    int j =i;
    printf("&j=%x\n",&i);
    printf("&j=%x\n",&j);
    zoo(j);
    cout<<"j= "<<j<<endl;
    
    std::cout << "Hello, World!\n";
    cout<<"enter main()"<<endl;
    Student joe("joe11",111);
    Student john=joe;//通过joe定义john时会调用拷贝构造函数
    //
//    printf("&john= %x\n",&john);
    cout<<"Calling foo"<<endl;
    printf("&joe=%x\n",&joe);
    fun(joe);//函数参数传递 是一个副本 会调用拷贝构造函数 拷贝一个临时对象
    /*先拷贝构造函数 再析构*/
   
    cout<<"return from foo"<<endl;
    
    Student tom =bar(); //函数返回一个对象 函数题局部变量
    //其过程 会先调用 构造函数 再调用拷贝构造函数 再 调用析构函数 编译器优化 只能看到 构造函数 析构函数
    
    cout<<"-------Person--------"<<endl;
    Person p("Joe");
    Person p3("tom");
    Person p2 = p;//这里是浅拷贝 因为没有定义类的拷贝构造函数
    //但是p p2两个对象的地址不一样 肯定的 但是p2中 成员的引用和p成员的引用 却是同一块地址 浅拷贝 在析构的时候需要注意
    p.Print();
    p2.Print();
    
    p2 = p3;
    
    int y = 0;//定义一个变量
    int h = y;//通过一个y的值定义一个新的变量
    y=h ;//把h的值赋给另一个已经定义的变量
    return 0;
}
