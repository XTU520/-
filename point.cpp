#include "point.h"
#include "tools.h"
#include <iostream>

void Point::Print()//��ӡ����
{
    SetCursorPosition(x, y);
    std::cout <<"��" ;
}

void Point::PrintCircular()//��ӡԲ��
{
    SetCursorPosition(x, y);
    std::cout << "��" ;
}

void Point::Clear()//��������ӡ������
{
    SetCursorPosition(x, y);
    std::cout << "  " ;
}

void Point::ChangePosition(const int x, const int y)//�ı�����
{
    this->x = x;
    this->y = y;
}
