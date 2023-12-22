// main.cpp

#include "point.h"
#include <iostream>

int main() {
    Point p1;  // використання конструктора за замовчуванням
    p1.print();

    Point p2(3, 4);  // використання конструктора з параметрами
    p2.print();

    p1.setX(1);
    p1.setY(2);
    std::cout << "New coordinates of p1: ";
    p1.print();

    return 0;
}
