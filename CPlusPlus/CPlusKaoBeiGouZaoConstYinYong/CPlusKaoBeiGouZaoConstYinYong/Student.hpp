//
//  Student.hpp
//  CPlusKaoBeiGouZaoConstYinYong
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
class Student{
public:
    Student(const char* pName="NA",int ssId=0 );
    ~Student();
    Student(const Student&);
    void print();
private:
    char name[40];
    int id;
};
#endif /* Student_hpp */
