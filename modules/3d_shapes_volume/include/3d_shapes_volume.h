// Copyright 2021 Panova Olga

#ifndef MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_
#define MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_

class Shapes {
protected:
	int _x, _y, _z;
public:
    Shapes() :_x(0), _y(0), _z(0) {}
    Shapes(int x, int y, int z) :_x(x), _y(y), _z(z) {}
    //void move(int x, int y, int z) { _x = x; _y = y; _z = z; }
    virtual int Volume()const = 0;
    virtual ~Shapes() {}
};

class Ñube :public Shapes {
protected:
    int _side;
public:
    Ñube() : _side(1) {}
    Ñube(int x, int y, int z, int h) :Shapes(x, y, z), _side(h) {}
    int Volume() const override
    {
        return _side * _side * _side;
    }
};
#endif  // MODULES_3D_SHAPES_VOLUME_INCLUDE_3D_SHAPES_VOLUME_H_
