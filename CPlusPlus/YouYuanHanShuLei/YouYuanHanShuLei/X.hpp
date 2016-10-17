//
//  X.hpp
//  YouYuanHanShuLei
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef X_hpp
#define X_hpp

#include <stdio.h>
class X;
//类的前置声明 如果这里使用类的前置声明 后面使用该类时 必须使用指针操作
class Y{
public:
    void f(X*);
    //void b(X);
private:
    X* pX;
};
class X{
public:
    void initialize();
    friend void g(X*,int);//g是X的友元函数
    friend void Y::f(X*);//Y的成员函数f也是X的友元函数
    friend class Z;//Z是X的友元类
    friend void h();
private:
    int i;
    
    
};
class Z{
    
public:
    void initialize();
    void g(X* x);
private:
    int j;
};


#endif /* X_hpp */
