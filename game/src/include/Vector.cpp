#include "Vector.h"

#include <algorithm>
#include <cassert>
#include <math.h>
#include <cmath>



Vector::Vector()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector::Vector(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector::~Vector()
{
}

Vector Vector::add(Vector other)
{
	Vector returnVal;


	returnVal = Vector(this->x + other.x, this->y + other.y, this->z + other.z);

	return returnVal;
}

Vector Vector::subtract(Vector other)
{
	Vector returnVal;

	returnVal = Vector(this->x - other.x, this->y - other.y, this->z - other.z);

	return returnVal;
}

Vector Vector::scalarMultiply(float scalar)
{
	Vector returnVal;



	returnVal = Vector(this->x * scalar, this->y * scalar, this->z * scalar);

	return returnVal;

}

float Vector::dotProduct(Vector vA, Vector vB)
{
	float returnVal;


	returnVal = vA.x * vB.x + vA.y * vA.y + vA.z * vB.z;

	return returnVal;

}

Vector Vector::crossProduct(Vector vA, Vector vB)
{
	Vector returnVal;


	returnVal = Vector(vA.y * vB.z - vA.z * vB.x, vA.z*vB.y - vA.x*vB.z, vA.x*vB.y - vA.y * vB.x);

	return returnVal;
}

//Project a Vector3 onto another
Vector Vector::projection(Vector vA, Vector vB)
{

	float projectedX;
	float projectedY;
	float projectedZ;

	projectedX = ((dotProduct(vA, vB)) / (abs(vA.x)*abs(vA.x))) * vA.x;
	projectedY = ((dotProduct(vA, vB)) / (abs(vA.y)*abs(vA.y))) * vA.y;
	projectedZ = ((dotProduct(vA, vB)) / (abs(vA.z)*abs(vA.z))) * vA.z;

	return Vector(projectedX, projectedY, projectedZ);

}