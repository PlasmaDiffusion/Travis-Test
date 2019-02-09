#include "Vector.h"

Vector::
Vector(float x, float y, float z)
    : x(x), y(y), z(z)
{ }

auto
Vector::
operator+(const Vector& other) const -> Vector
{ return Vector(x + other.x, y + other.y, z + other.z); }

auto
Vector::
operator-(const Vector& other) const -> Vector
{ return Vector(x - other.x, y - other.y, z - other.z); }