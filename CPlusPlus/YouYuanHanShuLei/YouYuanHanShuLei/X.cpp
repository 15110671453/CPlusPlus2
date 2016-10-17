//
//  X.cpp
//  YouYuanHanShuLei
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#include "X.hpp"
void X::initialize()
{
    i=0;
}
void g(X* x,int i)
{
    x->i=i;
}
void Y::f(X *x)
{
    x->i = 47;
}



void Z::initialize()
{
    j=99;
}
void Z::g(X *x)
{
    x->i += j;
}
void h()
{
    X x;
    x.i=100;
}
