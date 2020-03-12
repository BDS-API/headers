#pragma once

#include "Pos.h"
#include "Vec2.h"
#include "BlockPos.h"


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

    void projectOntoLine(Vec3 const&, Vec3 const&)const;
    void directionFromRotation(float, float);
    Vec3();
    void abs()const;
    void distanceToSqr(Vec3 const&)const;
    void distanceToLineSegment(Vec3 const&, Vec3 const&)const;
    void operator+(Vec3 const&)const;
    void operator!=(Vec3 const&)const;
    void clipY(Vec3 const&, float, Vec3 &)const;
    void distanceToLineSquared(Vec3 const&, Vec3 const&)const;
    void operator+(float)const;
    bool isNan()const;
    void operator*(Vec3 const&)const;
    void clipZ(Vec3 const&, float, Vec3 &)const;
    void floor(float)const;
    void operator/(float)const;
    void operator-(Vec3 const&)const;
    void rotationFromDirection(Vec3 const&);
    void operator[](int)const;
    void length()const;
    void lengthXZ()const;
    void xz()const;
    void set(float, float, float);
    void max(Vec3 const&, Vec3 const&);
    void lerp(Vec3 const&, Vec3 const&, float);
    void directionFromRotation(Vec2 const&);
    void operator-()const;
    void ceil()const;
    Vec3(float, float, float);
    void lengthSquared()const;
    void clipX(Vec3 const&, float, Vec3 &)const;
    void minComponent()const;
    void lerpComponent(Vec3 const&, Vec3 const&, Vec3 const&);
    void clamp(Vec3 const&, Vec3 const&, Vec3 const&);
    Vec3(BlockPos const&);
    void mul(Vec3 const&, Vec3 const&);
//  void operator+(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition
    std::string toString()const;
    void sub(float, float, float)const;
    void operator-(float)const;
    void dot(Vec3 const&)const;
    void operator*(float)const;
    Vec3(float);
    void cross(Vec3 const&)const;
    void lengthXZSquared()const;
    void min(Vec3 const&, Vec3 const&);
    void distanceToLine(Vec3 const&, Vec3 const&)const;
    void operator==(Vec3 const&)const;
    Vec3(Pos const&);
    void maxComponent()const;
    void clampAlongNormal(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 &);
    void distanceToLineSegmentSquared(Vec3 const&, Vec3 const&)const;
    void round()const;
//  Vec3(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    std::string toJsonString()const;
    void normalized()const;
    void yRot(float);
    void negated()const;
    void distanceTo(Vec3 const&)const;
    void operator[](int);
    void add(float, float, float)const;
};
