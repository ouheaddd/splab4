// point.h

#ifndef POINT_H
#define POINT_H

class Point {
public:
    Point();  // конструктор за замовчуванням
    Point(int x, int y);  // конструктор з параметрами
    void setX(int x);  // встановлення значення координати x
    void setY(int y);  // встановлення значення координати y
    int getX() const;  // отримання значення координати x
    int getY() const;  // отримання значення координати y
    void print() const;  // виведення координат точки

private:
    int x;  // координата x
    int y;  // координата y
};

#endif // POINT_H
