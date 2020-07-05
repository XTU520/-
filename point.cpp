#include "point.h"
#include "tools.h"
#include <iostream>

void Point::Print()//打印方块
{
    SetCursorPosition(x, y);
    std::cout <<"■" ;
}

void Point::PrintCircular()//打印圆形
{
    SetCursorPosition(x, y);
    std::cout << "●" ;
}

void Point::Clear()//擦除所打印的粒子
{
    SetCursorPosition(x, y);
    std::cout << "  " ;
}

void Point::ChangePosition(const int x, const int y)//改变坐标
{
    this->x = x;
    this->y = y;
}
