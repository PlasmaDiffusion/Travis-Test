#pragma once
class Vector3
{


public:

	float x;
	float y;
	float z;

	Vector3();
	Vector3(float x, float y, float z);
	~Vector3();

	Vector3 add(Vector3 other);
	Vector3 subtract(Vector3 other);
	Vector3 scalarMultiply(float scalar);

	float dotProduct(Vector3 vA, Vector3 vB);

	Vector3 crossProduct(Vector3 vA, Vector3 vB);

	float Vector3::Length(Vector3 vA, Vector3 vB);
	Vector3 Vector3::projection(Vector3 vA, Vector3 vB);
	Vector3 Vector3::normalize(Vector3 vA, Vector3 vB);
	float Vector3::Vector3Direction(Vector3 vA, Vector3 vB);

	bool isCollidingSphere(Vector3 &c1, float r1, Vector3 &c2, float r2);

	void invariant() const;

};