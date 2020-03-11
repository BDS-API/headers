#pragma once

#include "./Vec2.h"


class Vec2 {

public:
    static long ZERO;
    static long ONE;
    static long UNIT_X;
    static long NEG_UNIT_X;
    static long UNIT_Y;
    static long NEG_UNIT_Y;
    static long MAX;
    static long MIN;
    static long LOWEST;


    Vec2(float, float);
    Vec2();
    void distanceToSqr(Vec2 const&)const;
    void operator-(Vec2 const&)const;
    void operator*(float)const;
    void lengthSquared()const;
    void normalized()const;
    void length()const;
    void operator!=(Vec2 const&)const;
    void operator+(Vec2 const&)const;
//  Vec2(glm::tvec20<float, (glm::precision>); //TODO: incomplete function definition
    void operator==(Vec2 const&)const;
    void dot(Vec2 const&)const;
};
