//
//  Martain.hpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Martain_hpp
#define Martain_hpp
/*
 使用全局变量
 每个对象维护一个count
 */

#include <stdio.h>
class Martain
{
public:
    Martain();
    ~Martain();
    void fight();
    void hide();
    static int getCount();
private:
    static int  martainCount;
    int m_bloodValue;
    
};
#endif /* Martain_hpp */
