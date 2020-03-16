#pragma once

#include "BlockPos.h"
#include <string>
#include "Pos.h"


class Vec3 {

public:
    static Vec3 * UNIT_X;
    static Vec3 * NEG_UNIT_X;
    static Vec3 * UNIT_Y;
    static Vec3 * NEG_UNIT_Y;
    static Vec3 * UNIT_Z;
    static Vec3 * NEG_UNIT_Z;
    static Vec3 * ZERO;
    static Vec3 * ONE;
    static Vec3 * TWO;
    static Vec3 * HALF;
    static Vec3 * MAX;
    static Vec3 * MIN;

    float x;
    float y;
    float z;

    Vec3() {
        this->x = 0;
        this->y = 0;
        this->z = 0;
    } // _ZN4Vec3C2Ev
    Vec3(float x) {
        this->x = x;
        this->y = x;
        this->z = x;
    } // _ZN4Vec3C2Ef
    Vec3 operator*(float value)const; // _ZNK4Vec3mlEf
    Vec3(float x, float y, float z) {
        this->x = x;
        this->y = y;
        this->z = z;
    } // _ZN4Vec3C2Efff
    Vec3 operator+(Vec3 const& vector)const; // _ZNK4Vec3plERKS_
    Vec3 operator-(Vec3 const& vector)const; // _ZNK4Vec3miERKS_
    float distanceToSqr(Vec3 const& vector)const; // _ZNK4Vec313distanceToSqrERKS_
    Vec3 * operator==(Vec3 const& vector)const; // _ZNK4Vec3eqERKS_
    float lengthSquared()const; // _ZNK4Vec313lengthSquaredEv
    float length()const; // _ZNK4Vec36lengthEv
//    Vec3(long); //TODO: incomplete function definition // _ZN4Vec3C2ERKN3glm5tvec3IfLNS0_9precisionE0EEE
    Vec3 operator+(float value)const; // _ZNK4Vec3plEf
    float distanceTo(Vec3 const& vector)const; // _ZNK4Vec310distanceToERKS_
    float operator[](int index); // _ZN4Vec3ixEi
    Vec3 * add(float x, float y, float z)const; // _ZNK4Vec33addEfff
    Vec3 operator-()const; // _ZNK4Vec3ngEv
    Vec3 * operator+=(Vec3 const& vec); // _ZN4Vec3pLERKS_
    float yRot(float angle); // _ZN4Vec34yRotEf
    Vec3 * normalized()const; // _ZNK4Vec310normalizedEv
    Vec3 * lerpComponent(Vec3 const& vec1, Vec3 const& vec2, Vec3 const& vec3); // _ZN4Vec313lerpComponentERKS_S1_S1_
    Vec3 * sub(float x, float y, float z)const; // _ZNK4Vec33subEfff
    Vec3 * negated()const; // _ZNK4Vec37negatedEv
    bool operator!=(Vec3 const& vec)const; // _ZNK4Vec3neERKS_
    Vec3 operator*=(float value); // _ZN4Vec3mLEf
    Vec3 operator-(float value)const; // _ZNK4Vec3miEf
    Vec3 * lerp(Vec3 const& vec1, Vec3 const& vec2, float value); // _ZN4Vec34lerpERKS_S1_f
    Vec3 operator/(float value)const; // _ZNK4Vec3dvEf
    float lengthXZSquared()const; // _ZNK4Vec315lengthXZSquaredEv
    float dot(Vec3 const& vec)const; // _ZNK4Vec33dotERKS_
    Vec3 * operator-=(Vec3 const& vec); // _ZN4Vec3mIERKS_
    Vec3 * set(float x, float y, float z); // _ZN4Vec33setEfff
    Vec3 * mul(Vec3 const& vec, Vec3 const& wtf); // _ZN4Vec33mulERKS_S1_
//    void operator+(long)const; //TODO: incomplete function definition // _ZNK4Vec3plERKN3glm5tvec3IfLNS0_9precisionE0EEE
    float operator*(Vec3 const& vec)const; // _ZNK4Vec3mlERKS_
    float lengthXZ()const; // _ZNK4Vec38lengthXZEv
    Vec3 * cross(Vec3 const& vec)const; // _ZNK4Vec35crossERKS_
    Vec3 * min(Vec3 const& vec1, Vec3 const& vec2); // _ZN4Vec33minERKS_S1_
    Vec3 * max(Vec3 const& vec1, Vec3 const& vec2); // _ZN4Vec33maxERKS_S1_
    bool clipX(Vec3 const& vec1, float value, Vec3 & vec2)const; // _ZNK4Vec35clipXERKS_fRS_
    bool clipY(Vec3 const& vec1, float value, Vec3 & vec2)const; // _ZNK4Vec35clipYERKS_fRS_
    bool clipZ(Vec3 const& vec1, float value, Vec3 & vec2)const; // _ZNK4Vec35clipZERKS_fRS_
    float operator[](int index)const; // _ZNK4Vec3ixEi
    Vec3(BlockPos const& blockPos) {
        this->x = blockPos.x;
        this->y = blockPos.y;
        this->z = blockPos.z;
    } // _ZN4Vec3C2ERK8BlockPos
    Vec3(Pos const& pos) {
        this->x = pos.x;
        this->y = pos.y;
        this->z = pos.z;
    } // _ZN4Vec3C2ERK3Pos
    Vec3 * projectOntoLine(Vec3 const& vec1, Vec3 const& vec2)const; // _ZNK4Vec315projectOntoLineERKS_S1_
    float distanceToLineSquared(Vec3 const& vec1, Vec3 const& vec2)const; // _ZNK4Vec321distanceToLineSquaredERKS_S1_
    float distanceToLine(Vec3 const& vec1, Vec3 const& vec2)const; // _ZNK4Vec314distanceToLineERKS_S1_
    float distanceToLineSegmentSquared(Vec3 const& vec1, Vec3 const& vec2)const; // _ZNK4Vec328distanceToLineSegmentSquaredERKS_S1_
    float distanceToLineSegment(Vec3 const& vec1, Vec3 const& vec2)const; // _ZNK4Vec321distanceToLineSegmentERKS_S1_
    float minComponent()const; // _ZNK4Vec312minComponentEv
    float maxComponent()const; // _ZNK4Vec312maxComponentEv
    Vec3 * clamp(Vec3 const& vec, Vec3 const& min, Vec3 const& max); // _ZN4Vec35clampERKS_S1_S1_
    bool isNan()const; // _ZNK4Vec35isNanEv
    bool clampAlongNormal(Vec3 const& vec1, Vec3 const& vec2, Vec3 const& vec3, Vec3 const& vec4, Vec3 & vec5); // _ZN4Vec316clampAlongNormalERKS_S1_S1_S1_RS_
    Vec3 * directionFromRotation(Vec2 const& rot); // _ZN4Vec321directionFromRotationERK4Vec2
    Vec3 * directionFromRotation(float yaw, float pitch); // _ZN4Vec321directionFromRotationEff
    std::string toString()const; // _ZNK4Vec38toStringB5cxx11Ev
    std::string toJsonString()const; // _ZNK4Vec312toJsonStringB5cxx11Ev
    Vec3 xz()const; // _ZNK4Vec32xzEv
    Vec3 abs()const; // _ZNK4Vec33absEv
    Vec3 floor(float)const; // _ZNK4Vec35floorEf
    Vec3 ceil()const; // _ZNK4Vec34ceilEv
    Vec3 round()const; // _ZNK4Vec35roundEv
    Vec2 * rotationFromDirection(Vec3 const&); // _ZN4Vec321rotationFromDirectionERKS_
};
