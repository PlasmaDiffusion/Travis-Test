#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "Vector.h"

TEST_CASE("Vector", "[vector]")
{
    auto v1 = Vector(0, 0, 0);
    auto v2 = Vector(4, 5, 6);

    SECTION("Basic")
    {
        CHECK(v1.x == Approx(0.0f));
        CHECK(v1.y == Approx(0.0f));
        CHECK(v1.z == Approx(0.0f));
    }

    SECTION("operator+")
    {
        v1 = Vector(1, 2, 3);
        auto res = v1 + v2;
        CHECK(res.x == Approx(5));
        CHECK(res.y == Approx(7));
        CHECK(res.z == Approx(9));
    }

    SECTION("operator-")
    {
        v1 = Vector(1, 2, 3);
        auto res = v1 - v2;
        CHECK(res.x == Approx(-3));
        CHECK(res.y == Approx(-3));
        CHECK(res.z == Approx(-3));
    }
}