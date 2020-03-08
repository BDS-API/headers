#pragma once



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
    Vec2(void);
    void distanceToSqr(Vec2 const&)const;
    void operator-(Vec2 const&)const;
    void lengthSquared()const;
    void normalized()const;
    void length()const;
    Vec2(glm::tvec2<float, (glm::precision)0> const&);
    void dot(Vec2 const&)const;
};
