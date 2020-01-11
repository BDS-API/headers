#pragma once

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


    Vec3(void);
    Vec3(float);
    Vec3(float, float, float);
    void operator-(Vec3 const&)const;
    void distanceToSqr(Vec3 const&)const;
    void lengthSquared(void)const;
    void length(void)const;
    Vec3(glm::tvec3<float, (glm::precision)0> const&);
    void distanceTo(Vec3 const&)const;
    void add(float, float, float)const;
    void operator-(void)const;
    void yRot(float);
    void normalized(void)const;
    void lerpComponent(Vec3 const&, Vec3 const&, Vec3 const&);
    void sub(float, float, float)const;
    void negated(void)const;
    void operator-(float)const;
    void lerp(Vec3 const&, Vec3 const&, float);
    void lengthXZSquared(void)const;
    void dot(Vec3 const&)const;
    void set(float, float, float);
    void mul(Vec3 const&, Vec3 const&);
    void lengthXZ(void)const;
    void cross(Vec3 const&)const;
    void min(Vec3 const&, Vec3 const&);
    void max(Vec3 const&, Vec3 const&);
    void clipX(Vec3 const&, float, Vec3&)const;
    void clipY(Vec3 const&, float, Vec3&)const;
    void clipZ(Vec3 const&, float, Vec3&)const;
    Vec3(BlockPos const&);
    Vec3(Pos const&);
    void projectOntoLine(Vec3 const&, Vec3 const&)const;
    void distanceToLineSquared(Vec3 const&, Vec3 const&)const;
    void distanceToLine(Vec3 const&, Vec3 const&)const;
    void distanceToLineSegmentSquared(Vec3 const&, Vec3 const&)const;
    void distanceToLineSegment(Vec3 const&, Vec3 const&)const;
    void minComponent(void)const;
    void maxComponent(void)const;
    void clamp(Vec3 const&, Vec3 const&, Vec3 const&);
    bool isNan(void)const;
    void clampAlongNormal(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3&);
    void directionFromRotation(Vec2 const&);
    void directionFromRotation(float, float);
    void xz(void)const;
    void abs(void)const;
    void floor(float)const;
    void ceil(void)const;
    void round(void)const;
    void rotationFromDirection(Vec3 const&);
};