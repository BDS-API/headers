#pragma once

#include <string>


class Vec3 {

public:
    static long UNIT_X;
    static long NEG_UNIT_X;
    static long UNIT_Y;
    static long NEG_UNIT_Y;
    static long UNIT_Z;
    static long NEG_UNIT_Z;
    static long ZERO;
    static long ONE;
    static long TWO;
    static long HALF;
    static long MAX;
    static long MIN;

    void lengthXZSquared()const;
    void abs()const;
    void clipY(Vec3 const&, float, Vec3 &)const;
    void distanceToLineSquared(Vec3 const&, Vec3 const&)const;
    void lengthSquared()const;
    void clamp(Vec3 const&, Vec3 const&, Vec3 const&);
    void round()const;
    Vec3(BlockPos const&);
    void ceil()const;
    void operator*(Vec3 const&)const;
    void operator!=(Vec3 const&)const;
    void max(Vec3 const&, Vec3 const&);
    void floor(float)const;
    void normalized()const;
    void negated()const;
    void projectOntoLine(Vec3 const&, Vec3 const&)const;
    void operator*(float)const;
    void length()const;
//  void operator+(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    void set(float, float, float);
    void distanceToSqr(Vec3 const&)const;
    void clipZ(Vec3 const&, float, Vec3 &)const;
    void distanceToLineSegmentSquared(Vec3 const&, Vec3 const&)const;
    bool isNan()const;
//  Vec3(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void clipX(Vec3 const&, float, Vec3 &)const;
    void distanceTo(Vec3 const&)const;
    void min(Vec3 const&, Vec3 const&);
    void operator==(Vec3 const&)const;
    void operator-(float)const;
    void operator[](int)const;
    Vec3(float);
    void distanceToLineSegment(Vec3 const&, Vec3 const&)const;
    void clampAlongNormal(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 &);
    void maxComponent()const;
    void rotationFromDirection(Vec3 const&);
    std::string toJsonString()const;
    void operator/(float)const;
    Vec3(float, float, float);
    void operator-(Vec3 const&)const;
    void mul(Vec3 const&, Vec3 const&);
    void lerp(Vec3 const&, Vec3 const&, float);
    void directionFromRotation(float, float);
    void xz()const;
    void operator+(float)const;
    Vec3();
    void operator[](int);
    void directionFromRotation(Vec2 const&);
    void operator-()const;
    void distanceToLine(Vec3 const&, Vec3 const&)const;
    void yRot(float);
    void minComponent()const;
    void lerpComponent(Vec3 const&, Vec3 const&, Vec3 const&);
    void dot(Vec3 const&)const;
    std::string toString()const;
    void add(float, float, float)const;
    void operator+(Vec3 const&)const;
    void lengthXZ()const;
    void sub(float, float, float)const;
    Vec3(Pos const&);
    void cross(Vec3 const&)const;
};
