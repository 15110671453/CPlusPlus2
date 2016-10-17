//
//  Car.cpp
//  MyCplusFengZhuang
//
//  Created by Li  on 2016/10/17.
//  Copyright © 2016年 bjcric. All rights reserved.
//
#include <iostream>
using namespace ::std;
#include "Car.hpp"

Car::Car(int price,int carNum)
{
    setProperty(price, carNum);
}
void  Car::run()
{
    cout<<"Car run"<<endl;
}
void  Car::stop()
{
    cout<<"Car stop"<<endl;
}
void Car::setProperty(int price, int carNum)
{
    this->m_price = price;
    this->m_carNum = carNum;
}
void Car::print()
{
    cout<<"this car price is "<<m_price<<endl;
    cout<<"this car carNum is "<<m_carNum<<endl;
}
