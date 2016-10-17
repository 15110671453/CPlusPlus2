//
//  Student.hpp
//  ConstKey
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
class Student{
public:
    explicit Student(int id =0);
   
    ~Student();
    /*成员函数 添加const 关键字*/
    inline int getId() const
    {
        return m_id;
    }
    void setId(int id)
    {
        m_id = id;
    }
    int getScore() const
    {
        return m_score;
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
