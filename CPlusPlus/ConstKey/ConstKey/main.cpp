//
//  main.cpp
//  ConstKey
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#include "Student.hpp"
#include <iostream>
//iostream 在实际项目中 会有专门的 输出类来管理
using namespace ::std;
#define  Buffer_size 512

#define Count 512
static const int Max_Count = 512;
void fun(Student stu)
{
    stu.setId(1003);
}
void bar(const Student& stu)
{
/* stu.setId(1003);//error 传入的stu 是不允许修改成员的 但是该函数是做了修改的 所以不能在这个函数调用
 */
   int id = stu.getId();
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
//    for(int index=0;index<512;index++)
//    {
//        
//    }
    /*
     const 指定一个不该被改动的对象
     比使用预定义
     #define  Buffer_size 512
     有点 有问题时 编译器会报错 使用预定义不会
     const 限定指针类型
     const 出现在星号的左边 表示被指物是常量
     const 出现在星号右边，表示指针自身是常量
     
     
     
     
     */
    
    const int a= 1;
//    a=12; error
    int b= 0;
    /*
     这里const 修饰的是int，而int定义的是一个
     整值，因此*p所指的对象值不能通过*p来修改,
     但是可以重新给p来赋值 使其指向不同的对象
     */
    const int * p =&a;
//      *p=1;//error
    p=&b;
    int * const p2 =&b;
    *p2=3;
    //p2=&a;//error
  /*
   const 数据成员必须使用成员列表来进行初始化
   const 成员函数
   类接口清晰 确定哪些函数可以修改数据成员
   
   使用const提高函数的健壮性
   控制使用指针和引用传递的实参被意外修改
   （以pass-by-refrence-to-const替换pass by value）
   按值传递 按引用传递
   */
    
    {
        int i =0;
        Student john(1001);
        cout<<"john's id "<<john.getId()<<endl;
        fun(john);
        cout<<"john's id "<<john.getId()<<endl;
    }
    
    
    
    return 0;
}
