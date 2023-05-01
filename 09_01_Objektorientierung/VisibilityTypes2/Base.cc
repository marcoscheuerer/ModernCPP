#pragma once

#include  <iostream>

class A
{
    public:
        int x;  // In base class and in derived class and outside of the classes

    protected:
        int y;  // In base class and in derived class, not outside of the classes

    private:
        int z;  // Only in base class, not in derived class, not outside of the classes
};

class B : public A
{
    // x is public
    // y is protected
    // z is not accessible from B

    void foo()
    {
        std::cout << x << '\n';
    }
};

class C : protected A
{
    // x is protected
    // y is protected
    // z is not accessible from C

    void foo()
    {
        std::cout << x << '\n';
    }
};

class C_Derived : protected C
{
    void foo()
    {
        std::cout << y << '\n';
    }
};

class D : private A
{
    // x is private
    // y is private
    // z is not accessible from D

    void foo()
    {
        std::cout << y << '\n';
    }
};

class D_Derived : public D
{
    void foo()
    {
        //std::cout << x << '\n';
    }
};
