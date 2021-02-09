// vector3f.cpp
// Solomon Himelbloom
// 9 February 2021
// Catch2 source file for CS 202.

#include "catch.hpp"

class Vector3f {
public:
    Vector3f() {
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }

    Vector3f(float updatedX, float updatedY, float updatedZ) {
        x = updatedX;
        y = updatedY;
        z = updatedZ;
    }

    Vector3f(const Vector3f &origin) {
        x = origin.x;
        y = origin.y;
        z = origin.z;
    }

    float x;
    float y;
    float z;
};

bool operator==(const Vector3f &a, const Vector3f &b) {
    return (a.x == b.x) && (a.y == b.y) && (a.z == b.z); 
}

bool operator!=(const Vector3f &a, const Vector3f &b) {
    return (a.x != b.x) || (a.y != b.y) || (a.z != b.z);
}

// Default constructor sets the values x, y, and z to 0.
// User constructor allows the values x, y, and z to be set to some number.
// Copy constructor copies members to each other.
// Equality and Inequality operator works.
TEST_CASE("Vectors are computed", "[Vector3f]") {
    Vector3f a;
    Vector3f b;
    REQUIRE(a==b);

    Vector3f first;
    Vector3f second(70.0, 48.0, 42.0);
    Vector3f third(second);

    REQUIRE(first.x == 0);
    REQUIRE(first.y == 0);
    REQUIRE(first.z == 0);

    REQUIRE(second.x == 70.0);
    REQUIRE(second.y == 48.0);
    REQUIRE(second.z == 42.0);

    REQUIRE(third == second);

    REQUIRE(second != first);
}
