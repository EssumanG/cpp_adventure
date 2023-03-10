#include "DerivedCircle.h"
#define PI 3.14159

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(double radius)
{
    setRadius(radius);
}

Circle::Circle(double radius, const string& color, bool filled)
{
    setRadius(radius);
    setColor(color);
    setFilled(filled);
}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double radius)
{
    this->radius = (radius >= 0) ? radius : 0;
}

double Circle::getArea() const
{
    return radius * radius * PI;
}

double Circle::getPerimeter() const
{
    return 2 * radius * PI;
}

double Circle::getDiameter() const
{
    return 2 * radius;
}

string Circle::toString() const
{
    return "Circle object";
}