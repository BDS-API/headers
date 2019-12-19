#pragma once

class AABB {

public:
    static long EMPTY;


    void fromPoints(Vec3 const&, Vec3 const&);
    void containsX(Vec3 const&)const;
    void containsY(Vec3 const&)const;
    void containsZ(Vec3 const&)const;
    AABB(void);
    AABB(float, float, float, float, float, float);
    AABB(Vec3 const&, Vec3 const&);
    AABB(Vec3 const&, float);
    void set(Vec3 const&, Vec3 const&);
    void expand(Vec3 const&);
    void expanded(Vec3 const&)const;
    void translated(Vec3 const&)const;
    void merge(AABB const&)const;
    void grow(Vec3 const&)const;
    void cloneMove(Vec3 const&)const;
    void clipCollide(AABB const&, Vec3 const&, bool, float *)const;
    void _clipAxisCollide(AABB const&, float, int, bool)const;
    void clipXCollide(AABB const&, float, bool)const;
    void clipYCollide(AABB const&, float, bool)const;
    void clipZCollide(AABB const&, float, bool)const;
    void intersects(AABB const&)const;
    void intersectsInner(AABB const&)const;
    void getSmallestAxisOut(AABB const&)const;
    void axisInside(AABB const&, Vec3)const;
    void distanceTo(Vec3 const&)const;
    void distanceToSqr(Vec3 const&)const;
    void distanceTo(AABB const&)const;
    void distanceToSqr(AABB const&)const;
    void intersects(Vec3 const&, Vec3 const&)const;
    void intersectSegment(Vec3 const&, Vec3 const&, Vec3&, Vec3&)const;
    void move(Vec3 const&);
    void move(float, float, float);
    void centerAt(Vec3 const&);
    void getBounds(void)const;
    void resize(Vec3 const&)const;
    void getCenter(void)const;
    void contains(Vec3 const&)const;
    void contains(AABB const&)const;
    void getSize(void)const;
    void getVolume(void)const;
    void shrink(Vec3 const&)const;
    void clip(Vec3 const&, Vec3 const&)const;
    bool isEmpty(void)const;
    void set(AABB const&);
    void set(float, float, float, float, float, float);
    bool isValid(void)const;
    void flooredCopy(float, float)const;
    void flooredCeiledCopy(void)const;
    bool isNan(void)const;
};
