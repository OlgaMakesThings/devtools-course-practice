// Copyright 2021 Panova Olga

#ifndef MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_
#define MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_

#include <cmath>

class Shapes {
protected:
	int _x, _y, _z;
    double pi = 3.1415926535;
public:
    Shapes() :_x(0), _y(0), _z(0) {}
    Shapes(int x, int y, int z) :_x(x), _y(y), _z(z) {}
    //void move(int x, int y, int z) { _x = x; _y = y; _z = z; }
    virtual double Volume()const = 0;
    virtual ~Shapes() {}
};

class Ñube :public Shapes {
protected:
    double _side;
public:
    Ñube() : _side(1) {}
    Ñube(int x, int y, int z, double h) :Shapes(x, y, z), _side(h) {}
    double Volume() const override
    {
        return _side * _side * _side;
    }
};

class Sphere :public Shapes {
protected:
    double _radius;
public:
    Sphere() : _radius(1) {}
    Sphere(int x, int y, int z, double r) :Shapes(x, y, z), _radius(r) {}
    double Volume() const override
    {
        return pi * pow(_radius, 3) * 4 / 3;
    }
};

class Cone :public Shapes {
protected:
    double _radius, _h;
public:
    Cone() : _radius(1), _h(1) {}
    Cone(int x, int y, int z, double r, double h) :Shapes(x, y, z), _radius(r), _h(h) {}
    double BaseArea() const {
        return pi * pow(_radius, 2);
    }
    double Volume() const override
    {
        return (this->BaseArea()) * _h * 1 / 3;
    }
};

class Parallelepiped :public Shapes {
protected:
    double _a, _b, _h;
public:
    Parallelepiped() : _a(1), _b(1), _h(1) {}
    Parallelepiped(int x, int y, int z, double a, double b, double h) :Shapes(x, y, z), _a(a), _b(b), _h(h) {}
    double Volume() const override
    {
        return _a * _b * _h;
    }
};
#endif  // MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_
