// Copyright 2021 Panova Olga

#include "include/3d_shapes_volume.h"

double Cube::Volume() const {
    return pow(_side, 3);
}

double Sphere::Volume() const {
    return pi * pow(_radius, 3) * 4 / 3;
}

double Cone::BaseArea() const {
    return pi * pow(_radius, 2);
}

double Cone::Volume() const {
    return (this->BaseArea()) * _h * 1 / 3;
}

double Parallelepiped::Volume() const {
    return _a * _b * _h;
}

double Prism::BaseArea() const {
    return _corners_count * pow(_side, 2) / (4 * tan(180 / _corners_count));
}

double Prism::Volume() const {
    return (this->BaseArea()) * _h;
}

double Pyramid::BaseArea() const {
    return _corners_count * pow(_side, 2) / (4 * tan(180 / _corners_count));
}

double Pyramid::Volume() const {
    return (this->BaseArea()) * _h / 3;
}

double Torus::Volume() const {
    return 2 * pow(pi, 2) * center_to_axis * pow(_radius, 2);
}

double Frustum::Volume() const {
    return pi * _h * (pow(_top_r, 2) + _top_r * _r + pow(_r, 2)) / 3;
}
