//
//  Memory.hpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef Memory_hpp
#define Memory_hpp

#include <iostream>
using namespace ::std;
#include <stdio.h>
class Memory
{
public: Memory():m_val(0)
    {
        cout<<"gou zao"<<endl;
    }
    ~Memory()
    {
        cout<<"~ Memory"<<endl;
        
    }
    
private:
    int m_val;
};







#endif /* Memory_hpp */
