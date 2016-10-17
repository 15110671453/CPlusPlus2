//
//  ZhanToMalloc.hpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//

#ifndef ZhanToMalloc_hpp
#define ZhanToMalloc_hpp
/*
 我们之前的代码 都是在栈上生成的  资源都是自动分配的 都没有使用过 malloc free等 来动态内存分配
 资源都是自动分配的
 C语言的动态分配
 使用malloc/free 函数
 C语言中对内存区域分析
 全局变量 静态数据 常量 data area
 所有类成员函数和非成员函数代码 code area
 为运行函数而分配的局部变量
 函数参数 返回数据 返回地址等 stack area （栈区域 变量 类对象）
 动态内存分配            heap area（ 生命周期管理 堆区域生成的变量 对象 malloc 需要程序员 自己管理）
 */
/*
 c++中动态内存分配 new/delete
 在堆上生成对象 需要自动调用构造函数(而malloc 是分配空间不能自动调用构造函数的)
 在堆上生成的对象 在释放时需要自动调用析构函数(而free 是不能自动调用析构函数的)
 new/delete malloc/free需要配对使用
 new[]/delete 生成和释放对象数组
 new delete 是运算符 malloc free 是函数
 资源的回收与释放
 */
#include <stdio.h>

#endif /* ZhanToMalloc_hpp */
