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

    Vec3(); // _ZN4Vec3C2Ev
    Vec3(float); // _ZN4Vec3C2Ef
    void operator*(float)const; // _ZNK4Vec3mlEf
    Vec3(float, float, float); // _ZN4Vec3C2Efff
    void operator+(Vec3 const&)const; // _ZNK4Vec3plERKS_
    void operator-(Vec3 const&)const; // _ZNK4Vec3miERKS_
    void distanceToSqr(Vec3 const&)const; // _ZNK4Vec313distanceToSqrERKS_
    void operator==(Vec3 const&)const; // _ZNK4Vec3eqERKS_
    void lengthSquared()const; // _ZNK4Vec313lengthSquaredEv
    void length()const; // _ZNK4Vec36lengthEv
//  Vec3(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition // _ZN4Vec3C2ERKN3glm5tvec3IfLNS0_9precisionE0EEE
    void operator+(float)const; // _ZNK4Vec3plEf
    void distanceTo(Vec3 const&)const; // _ZNK4Vec310distanceToERKS_
    void operator[](int); // _ZN4Vec3ixEi
    void add(float, float, float)const; // _ZNK4Vec33addEfff
    void operator-()const; // _ZNK4Vec3ngEv
    void yRot(float); // _ZN4Vec34yRotEf
    void normalized()const; // _ZNK4Vec310normalizedEv
    void lerpComponent(Vec3 const&, Vec3 const&, Vec3 const&); // _ZN4Vec313lerpComponentERKS_S1_S1_
    void sub(float, float, float)const; // _ZNK4Vec33subEfff
    void negated()const; // _ZNK4Vec37negatedEv
    void operator!=(Vec3 const&)const; // _ZNK4Vec3neERKS_
    void operator-(float)const; // _ZNK4Vec3miEf
    void lerp(Vec3 const&, Vec3 const&, float); // _ZN4Vec34lerpERKS_S1_f
    void operator/(float)const; // _ZNK4Vec3dvEf
    void lengthXZSquared()const; // _ZNK4Vec315lengthXZSquaredEv
    void dot(Vec3 const&)const; // _ZNK4Vec33dotERKS_
    void set(float, float, float); // _ZN4Vec33setEfff
    void mul(Vec3 const&, Vec3 const&); // _ZN4Vec33mulERKS_S1_
//  void operator+(glm::tvec30<float, (glm::precision>)const; //TODO: incomplete function definition // _ZNK4Vec3plERKN3glm5tvec3IfLNS0_9precisionE0EEE
    void operator*(Vec3 const&)const; // _ZNK4Vec3mlERKS_
    void lengthXZ()const; // _ZNK4Vec38lengthXZEv
    void cross(Vec3 const&)const; // _ZNK4Vec35crossERKS_
    void min(Vec3 const&, Vec3 const&); // _ZN4Vec33minERKS_S1_
    void max(Vec3 const&, Vec3 const&); // _ZN4Vec33maxERKS_S1_
    void clipX(Vec3 const&, float, Vec3 &)const; // _ZNK4Vec35clipXERKS_fRS_
    void clipY(Vec3 const&, float, Vec3 &)const; // _ZNK4Vec35clipYERKS_fRS_
    void clipZ(Vec3 const&, float, Vec3 &)const; // _ZNK4Vec35clipZERKS_fRS_
    void operator[](int)const; // _ZNK4Vec3ixEi
    Vec3(BlockPos const&); // _ZN4Vec3C2ERK8BlockPos
    Vec3(Pos const&); // _ZN4Vec3C2ERK3Pos
    void projectOntoLine(Vec3 const&, Vec3 const&)const; // _ZNK4Vec315projectOntoLineERKS_S1_
    void distanceToLineSquared(Vec3 const&, Vec3 const&)const; // _ZNK4Vec321distanceToLineSquaredERKS_S1_
    void distanceToLine(Vec3 const&, Vec3 const&)const; // _ZNK4Vec314distanceToLineERKS_S1_
    void distanceToLineSegmentSquared(Vec3 const&, Vec3 const&)const; // _ZNK4Vec328distanceToLineSegmentSquaredERKS_S1_
    void distanceToLineSegment(Vec3 const&, Vec3 const&)const; // _ZNK4Vec321distanceToLineSegmentERKS_S1_
    void minComponent()const; // _ZNK4Vec312minComponentEv
    void maxComponent()const; // _ZNK4Vec312maxComponentEv
    void clamp(Vec3 const&, Vec3 const&, Vec3 const&); // _ZN4Vec35clampERKS_S1_S1_
    bool isNan()const; // _ZNK4Vec35isNanEv
    void clampAlongNormal(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 &); // _ZN4Vec316clampAlongNormalERKS_S1_S1_S1_RS_
    void directionFromRotation(Vec2 const&); // _ZN4Vec321directionFromRotationERK4Vec2
    void directionFromRotation(float, float); // _ZN4Vec321directionFromRotationEff
    std::string toString()const; // _ZNK4Vec38toStringB5cxx11Ev
    std::string toJsonString()const; // _ZNK4Vec312toJsonStringB5cxx11Ev
    void xz()const; // _ZNK4Vec32xzEv
    void abs()const; // _ZNK4Vec33absEv
    void floor(float)const; // _ZNK4Vec35floorEf
    void ceil()const; // _ZNK4Vec34ceilEv
    void round()const; // _ZNK4Vec35roundEv
    void rotationFromDirection(Vec3 const&); // _ZN4Vec321rotationFromDirectionERKS_
};
