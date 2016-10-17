//
//  Student.hpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
/*类定义*/
class Student{
public:
  explicit Student(int id); //禁止隐式类型转换
    /*
     C C++相信程序员有能力自己管理内存
     C 语言的 变量的生命周期
     从第一个大括号开始 到遇到的第二个大括号 结束
     ------ 经典
     与OC 中的autorelease
     
     如果类没有定义析构函数 则编译器提供一个默认的析构函数
     析构函数只有一个  不能重载
     函数重载： 可以有多个函数名相同的函数
     函数模版：
     */
    ~Student();
    inline int getId();
    inline  int getScore();
    void setId(int id)
    {
        m_id = id;
    }
    void setScore(int score)
    {
        m_score = score;
    }
private:
    int m_id;
    int m_score;
};

#endif /* Student_hpp */
