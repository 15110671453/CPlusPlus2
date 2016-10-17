//
//  main.cpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
/*
 面向对象 三大特性
 encapsulation 封装
 inheritance  继承
 polymorphism 多态
 （这里没有提到 函数重载 函数模版 这些不是面向对象的 是结构化程序面向过程的编程 c++特有的而已）
 */
#include <stdlib.h>//malloc
#include <string>
#include <iostream>
using namespace ::std;
#include "Memory.hpp"
#include "Martain.hpp"
#include "Student.hpp"
#include "Car.hpp"
/*
 面向对象 三大特性
 encapsulation 封装
 inheritance  继承
 polymorphism 多态
 （这里没有提到 函数重载 函数模版 这些不是面向对象的 是结构化程序面向过程的编程 c++特有的而已）
 类背后隐藏的思想是数据抽象和封装
 信息隐藏 隐藏对象的实现细节 不让外部直接访问到
 将数据成员和成员函数一起包装到一个单元中 单元以类的形式
 实现
 将数据成员和成员函数包装到类中 加上具体实现的隐藏共同被称为封装 其结果是一个同时带有特征和行为的数据类型 定义类 定义其数据成员 成员函数的过程 称为封装类
 
 信息隐藏是面向对象编程最重要的功能之一 也是使用访问修饰符的原因
 信息隐藏的原因
 对模块的任何实现细节所做的更改不回影响
 使用该模块的代码
 防止用户意外修改数据
 使模块易于使用和维护
 privated protected（继承） public
 除非必须公开底层实现细节 否则应该将所有字段指定为private
 加以封装
 使数据成员私有 控制数据访问限制 增强了类的可维护性
 
 隐藏方法实现细节 （方法体） 向外部提供公开接口
 方法头 以供安全使用
 
 简化调用 方便修改维护
 
 程序的开发人员 按角色分为类创建者和客户端应用成员

 客户端程序员 收集各种用来实现应用开发的类的创建者 构建类
 
 类和对象
 封装
 */
/*
 构造函数
 析构函数
 编码规范 声明变量赋初值
 int I=0;
 int* p =NULL;
 malloc申请到的内存区域使用memset进行设置
 对象在定义时进行初始化
 完成对象初始化的函数是构造函数
 类的对象的初始化只能由类的成员函数来进行
 建立对象的同时 自动调用构造函数
 类对象的定义涉及到一个类名和一个对象名
 由于类的唯一性与对象的多样性 用类名
 而不是对象名来作为构造函数名是比较合适的
 默认构造函数
 c++规定 每个类必须有一个构造函数
 
 
 */
/*
 构造函数的初始化列表
 */

void fun(Student stu)
{
}
void funcC()
{
    Martain c;
    int count =Martain::getCount();
    cout<<"count = "<<count<<endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Car a;//C++的类的初始化 和OC 差别有点大
    a.print();
    a.setProperty(1000, 1234);
    a.print();
    a.run();
    Car b(123,478);
    b.print();

    /*构造函数 可以有多个 可以重载 构造函数 可以隐式的类型转换*/
    Student john(1001);
    
    fun (john);
    /*
     explicit Student(int id); //禁止隐式类型转换
      fun(1002);
     */
    cout<<"return from main"<<endl;
    /*
     一个类可能在构造函数中分配资源 这些资源需要
     在对象不复存在以前被释放（内存 或者  打开的文件）
     析构函数也是特殊类型的成员 它没有返回类型
     没有参数 不能随意调用 也没有重载
     只是在类对象生命周期结束时候 由系统自动调用
     析构函数名 就在构造函数名前加一个逻辑操作符~
     */
    
    
    cout<<"Hello string "<<endl;
    string aStr;
    cout<<aStr<<endl;//输出空
    /*
     构造函数可以重载 
     string 构造函数
     string s1 默认构造函数
     string s2(s1);
     string s3(“value");
     string s4(n,'a');
     string  操作
     s.empty();如果字符串为空 返回为true 否则返回false
     s.size(); 返回字符串中字符个数
     s[n];返回字符串中的第n个字符
     s1+s2;将s1和s2连接成一个新的字符串strcat
     返回新生成的字符串
     s1=s2;将s1内容替换为s2的内容
     v1==v2;比较s1与s2内容strcmp 相等true 否则false
     
     */
    string aStr2("c++");
    string bStr(aStr2);
    string cStr(4,'a');
    cout<<aStr2<<endl;
    cout<<bStr<<endl;
    cout<<cStr<<endl;
    
    string dStr;
    dStr="c++";
    if (dStr.empty()) {
        cout<<"string d is empty "<<endl;
    }else
    {
        cout<<"string d size is "<<dStr.size()<<endl;
    }
    
    string kStr=aStr2+cStr;
    cout<<kStr<<endl;
    if (kStr==cStr) {
        cout<<"k equals a "<<endl;
    }else
    {
        cout<<"not equal "<<endl;
    }
    int count0 =Martain::getCount();
    cout<<"count = "<<count0<<endl;
    
    Martain aMartain;
    int count1 =Martain::getCount();
    cout<<"count = "<<count1<<endl;
    
    Martain bMartain;
    int count2 =Martain::getCount();
    cout<<"count = "<<count2<<endl;
    funcC();
    int count4 =Martain::getCount();
    cout<<"count = "<<count4<<endl;
    
    {
        Memory mem;
    }
    cout<<"end of}"<<endl;
    
    Memory* pVal = new Memory();
    delete pVal;
    pVal = NULL;
    
    int * p=(int*)malloc(sizeof(int));
    
    free(p);
    p=NULL;
    cout<<"对象数组"<<endl;
    Memory* pArray = new Memory[2];
    delete[] pArray;//true
    //new中括号 delete中括号 要配对使用
//    delete pArray;//error
    
    
    
    return 0;
}


/*
 Abstract Data Type
 C++提供的抽象数据类型
 用于进行字符串操作
 
 字符串是软件系统中最常见的数据结构之一
 
 中文的字符编码标准GB18030 一个汉子占用的内存两个字节
 
 cjk unicode
 
 编写string类常见的笔试题目
 
 string类型支持可变长度的字符串
 C++标准负责管理与存储字符串的内存空间
 
 
 */

/*
 拷贝构造函数
 
 
 */



