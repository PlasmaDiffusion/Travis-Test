#include "NewVector3.h"
#include <vector>
#include <algorithm>
#include <cassert>
#include <math.h>
#include <cmath>

//Calculate the length of a Vector3
float Vector3::Length(Vector3 vA, Vector3 vB)
{
	return sqrt((vA.x - vB.x)*(vA.x - vB.x) + (vA.y - vB.y)*(vA.y - vB.y) + (vA.z - vB.z)*(vA.z - vB.z));
}

Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

Vector3::Vector3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3::~Vector3()
{
}

Vector3 Vector3::add(Vector3 other)
{
	Vector3 returnVal;


	returnVal = Vector3(this->x + other.x, this->y + other.y, this->z + other.z);

	return returnVal;
}

Vector3 Vector3::subtract(Vector3 other)
{
	Vector3 returnVal;

	returnVal = Vector3(this->x - other.x, this->y - other.y, this->z - other.z);

	return returnVal;
}

Vector3 Vector3::scalarMultiply(float scalar)
{
	Vector3 returnVal;



	returnVal = Vector3(this->x * scalar, this->y * scalar, this->z * scalar);

	return returnVal;

}

float Vector3::dotProduct(Vector3 vA, Vector3 vB)
{
	float returnVal;


	returnVal = vA.x * vB.x + vA.y * vA.y + vA.z * vB.z;

	return returnVal;

}

Vector3 Vector3::crossProduct(Vector3 vA, Vector3 vB)
{
	Vector3 returnVal;


	returnVal = Vector3(vA.y * vB.z - vA.z * vB.x, vA.z*vB.y - vA.x*vB.z, vA.x*vB.y - vA.y * vB.x);

	return returnVal;
}

//Project a Vector3 onto another
Vector3 Vector3::projection(Vector3 vA, Vector3 vB)
{

	float projectedX;
	float projectedY;
	float projectedZ;

	projectedX = ((dotProduct(vA, vB)) / (abs(vA.x)*abs(vA.x))) * vA.x;
	projectedY = ((dotProduct(vA, vB)) / (abs(vA.y)*abs(vA.y))) * vA.y;
	projectedZ = ((dotProduct(vA, vB)) / (abs(vA.z)*abs(vA.z))) * vA.z;

	return Vector3(projectedX, projectedY, projectedZ);

}

//Normalize a Vector3 (Good for anything moving towards another point)
Vector3 Vector3::normalize(Vector3 vA, Vector3 vB)
{
	//Normalize
	float length = Length(vA, vB);


	float normalizedX = (vB.x - vA.x) / length;
	float normalizedY = (vB.y - vB.y) / length;
	float normalizedZ = (vB.z - vB.z) / length;


	return Vector3(normalizedX, normalizedY, normalizedZ);

}


void Vector3::invariant() const {
}


//Determine the direction of a Vector3 (return an angle)
float Vector3::Vector3Direction(Vector3 vA, Vector3 vB)
{
	return 	(atan2(vB.z - vA.z, vB.x - vA.x)) * 180 / 3.14159265358979323846;
}

bool Vector3::isCollidingSphere(Vector3 & c1, float r1, Vector3 & c2, float r2)
{


	if (c1.Length(c1, c2) < r1 + r2) return true;


	return false;
}


