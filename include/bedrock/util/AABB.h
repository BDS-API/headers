#pragma once

#include "Vec3.h"


class AABB {

public:
    static long EMPTY;

    AABB(float, float, float, float, float, float);
    void intersects(AABB const&)const;
    void intersects(Vec3 const&, Vec3 const&)const;
    void grow(Vec3 const&)const;
    void distanceToSqr(Vec3 const&)const;
    bool isNan()const;
    void distanceTo(AABB const&)const;
    void operator==(AABB const&)const;
    void centerAt(Vec3 const&);
    bool containsZ(Vec3 const&)const;
    void cloneMove(Vec3 const&)const;
    bool containsX(Vec3 const&)const;
    void resize(Vec3 const&)const;
    void getVolume()const;
    void contains(Vec3 const&)const;
    void shrink(Vec3 const&)const;
    void expanded(Vec3 const&)const;
    void flooredCeiledCopy()const;
    void intersectSegment(Vec3 const&, Vec3 const&, Vec3 &, Vec3 &)const;
    bool isEmpty()const;
    void clip(Vec3 const&, Vec3 const&)const;
    void set(float, float, float, float, float, float);
    std::string toString()const;
    bool axisInside(AABB const&, Vec3)const;
    void flooredCopy(float, float)const;
    void clipCollide(AABB const&, Vec3 const&, bool, float *)const;
    void operator!=(AABB const&)const;
    void move(Vec3 const&);
    void clipXCollide(AABB const&, float, bool)const;
    void expand(Vec3 const&);
    void set(AABB const&);
    void distanceToSqr(AABB const&)const;
    AABB(Vec3 const&, Vec3 const&);
    void clipYCollide(AABB const&, float, bool)const;
    bool isValid()const;
    void getBounds()const;
    void contains(AABB const&)const;
    void set(Vec3 const&, Vec3 const&);
    bool intersectsInner(AABB const&)const;
    void _clipAxisCollide(AABB const&, float, int, bool)const;
    void translated(Vec3 const&)const;
    void getSize()const;
    void getCenter()const;
    AABB();
    void clipZCollide(AABB const&, float, bool)const;
    void move(float, float, float);
    void fromPoints(Vec3 const&, Vec3 const&);
    void getSmallestAxisOut(AABB const&)const;
    void distanceTo(Vec3 const&)const;
    void merge(AABB const&)const;
    bool containsY(Vec3 const&)const;
    AABB(Vec3 const&, float);
};
