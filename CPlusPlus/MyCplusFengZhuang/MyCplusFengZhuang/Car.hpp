//
//  Car.hpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Car_hpp
#define Car_hpp

#include <stdio.h>
class Car{
    public :
    /*
     构造函数和类名相同 并且没有返回值 可以设置参数
     不设置构造函数 编译器会使用默认构函数
     设置了构造函数 并且设置默认参数
     设置了构造函数 没有设置默认参数
     拷贝构造函数（后面研究）
     
     构造函数负责对象初始化工作 将数据成员初始化
     创建对象时 其类的构造函数确保： 在用户操作对象之前 系统保证初始化的进行
     建立对象时 须有一个有意义的初始值
     C++建立和初始化对象的过程专门由该类的构造函数完成
     构造函数给对象分配空间和初始化
     如果一个类没有专门定义构造函数 那么C++就仅仅创建对象而不做初始化
     构造函数函数语法规则：
     构造方法名与类名相同
     没有返回类型
     方法实现主要为字段赋初值
     放在外部定义的构造函数 其函数名前要加上“类名::”
     */
    //    Car();
    Car(int price=100,int carNum=9876);
    void run();
    void stop();
    void setProperty(int price,int carNum);
    void print();
private:
    int m_price;
    int m_carNum;
    
};
#endif /* Car_hpp */
