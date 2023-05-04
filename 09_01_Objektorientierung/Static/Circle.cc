#include "Circle.h"

Circle::Circle(const float _radius) : m_radius(_radius)
{

}

Circle::~Circle()
{

}

float Circle::compute_area() const
{
    return Circle::PI * Circle::PI * m_radius;
}

float Circle::get_pi()
{
    return Circle::PI;
}
