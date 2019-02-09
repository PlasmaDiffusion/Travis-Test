class Vector
{
public:

    Vector(float x = 0.0f, float y = 0.0f, float z = 0.0f);

    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;

    float x, y, z;
};
