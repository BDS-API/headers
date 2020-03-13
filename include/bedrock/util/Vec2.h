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

    Vec2(float, float); // _ZN4Vec2C2Eff
    Vec2(); // _ZN4Vec2C2Ev
    void distanceToSqr(Vec2 const&)const; // _ZNK4Vec213distanceToSqrERKS_
    void operator-(Vec2 const&)const; // _ZNK4Vec2miERKS_
    void operator*(float)const; // _ZNK4Vec2mlEf
    void lengthSquared()const; // _ZNK4Vec213lengthSquaredEv
    void normalized()const; // _ZNK4Vec210normalizedEv
    void length()const; // _ZNK4Vec26lengthEv
    void operator!=(Vec2 const&)const; // _ZNK4Vec2neERKS_
    void operator+(Vec2 const&)const; // _ZNK4Vec2plERKS_
//  Vec2(glm::tvec20<float, (glm::precision>); //TODO: incomplete function definition // _ZN4Vec2C2ERKN3glm5tvec2IfLNS0_9precisionE0EEE
    void operator==(Vec2 const&)const; // _ZNK4Vec2eqERKS_
    void dot(Vec2 const&)const; // _ZNK4Vec23dotERKS_
};
