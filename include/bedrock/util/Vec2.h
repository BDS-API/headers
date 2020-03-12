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

    void dot(Vec2 const&)const;
    void normalized()const;
    Vec2();
    void operator-(Vec2 const&)const;
    void distanceToSqr(Vec2 const&)const;
//  Vec2(glm::tvec20<float, (glm::precision>); //TODO: incomplete function definition
    void operator==(Vec2 const&)const;
    void operator*(float)const;
    void lengthSquared()const;
    void operator!=(Vec2 const&)const;
    void operator+(Vec2 const&)const;
    Vec2(float, float);
    void length()const;
};
