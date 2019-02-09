#pragma once
class Vector
{


public:

	float x;
	float y;
	float z;

	Vector();
	Vector(float x, float y, float z);
	~Vector();

	Vector add(Vector other);
	Vector subtract(Vector other);
	Vector scalarMultiply(float scalar);

	float dotProduct(Vector vA, Vector vB);

	Vector crossProduct(Vector vA, Vector vB);

	float Vector::Length(Vector vA, Vector vB);
	Vector Vector::projection(Vector vA, Vector vB);
	Vector Vector::normalize(Vector vA, Vector vB);
	float Vector::Vector3Direction(Vector vA, Vector vB);

	bool isCollidingSphere(Vector &c1, float r1, Vector &c2, float r2);

	void invariant() const;

};