#pragma once

class Vec2 {

public:
    static long Vec2::ZERO;
    static long Vec2::ONE;
    static long Vec2::UNIT_X;
    static long Vec2::NEG_UNIT_X;
    static long Vec2::UNIT_Y;
    static long Vec2::NEG_UNIT_Y;
    static long Vec2::MAX;
    static long Vec2::MIN;
    static long Vec2::LOWEST;


    void Vec2(float, float);
    void Vec2(void);
    void distanceToSqr(Vec2 const&)const;
    void operator-(Vec2 const&)const;
    void lengthSquared(void)const;
    void normalized(void)const;
    void length(void)const;
    void Vec2(glm::tvec2<float, (glm::precision)0> const&);
    void dot(Vec2 const&)const;
};
