#include <iostream>
#include "Vector3.h"

int main()
{

	Vector3 v1(10.0f, 2.0f, 1.0f);
	Vector3 v2(22.0f, 3.0f, 4.0f);

	v1.add(v2);

	return 0;
}