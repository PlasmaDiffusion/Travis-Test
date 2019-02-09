#define CATCH_CONFIG_MAIN
//#include <catch2/catch.hpp>
#include "Vector.h"

TEST_CASE("Vector", "[vector]")
{
    Vector v1 = Vector(1, 2, 3);
	Vector v2 = Vector(4, 5, 6);

    SECTION("Basic")
    {
        CHECK(v1.x == Approx(1.0f));
        CHECK(v1.y == Approx(2.0f));
        CHECK(v1.z == Approx(3.0f));
    }

	SECTION("Addition")
	{
		v1 = v1.add(v2);
		
		CHECK(v1.x == Approx(5.0f));
		CHECK(v1.y == Approx(7.0f));
		CHECK(v1.z == Approx(8.0f));
	}

	SECTION("Subtraction")
	{
		v1 = Vector(1, 2, 3);
		v2 = Vector(4, 5, 6);

		v2 = v2.subtract(v1);
		

		CHECK(v2.x == Approx(3.0f));
		CHECK(v2.y == Approx(3.0f));
		CHECK(v2.z == Approx(3.0f));
	}

	SECTION("Scalar Multiplication")
	{

		v1 = v1.scalarMultiply(2.0f);

		CHECK(v1.x == Approx(2.0f));
		CHECK(v1.y == Approx(4.0f));
		CHECK(v1.z == Approx(6.0f));
	}

	SECTION("Dot")
	{
		v1 = Vector(1.0f, 2.0f, 1.0f);
		v2 = Vector(1.0f, 2.0f, 1.0f);

		float val = v1.dotProduct(v1, v2);

		CHECK(val == Approx(6.0f));
	}

	SECTION("Cross")
	{
		v1 = Vector(1.0f, 2.0f, 3.0f);
		v2 = v2(2.0f, 4.0f, 6.0f);

		v1 = v1.crossProduct(v1, v2);

		CHECK(v1.x == Approx(6.0f));
		CHECK(v1.y == Approx(6.0f));
		CHECK(v1.z == Approx(0.0f));
	}

	SECTION("Projection")
	{
		v1 = Vector(1.0f, 2.0f, 3.0f);
		v2 = Vector(2.0f, 4.0f, 6.0f);

		v1 = v1.projection(v1, v2);

		CHECK(v1.x == Approx(6.0f));
		CHECK(v1.y == Approx(6.0f));
		CHECK(v1.z == Approx(0.0f));
	}
}