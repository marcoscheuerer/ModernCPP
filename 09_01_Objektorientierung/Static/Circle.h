#pragma once

class Circle
{
private:
    float m_radius;
    static constexpr auto PI = 3.14159F;

public:
    Circle(const float _radius);

    virtual ~Circle();

    float compute_area() const;

    static float get_pi();

};
