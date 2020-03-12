#pragma once

#include <string>
#include "Vec3.h"


class AABB {

public:
    static long EMPTY;

    void translated(Vec3 const&)const;
    void getCenter()const;
    bool containsZ(Vec3 const&)const;
    void flooredCopy(float, float)const;
    void clipCollide(AABB const&, Vec3 const&, bool, float *)const;
    void move(float, float, float);
    void resize(Vec3 const&)const;
    void distanceToSqr(Vec3 const&)const;
    void distanceToSqr(AABB const&)const;
    void set(float, float, float, float, float, float);
    AABB();
    bool containsX(Vec3 const&)const;
    void getBounds()const;
    std::string toString()const;
    AABB(Vec3 const&, float);
    void clipXCollide(AABB const&, float, bool)const;
    void distanceTo(Vec3 const&)const;
    bool isValid()const;
    AABB(Vec3 const&, Vec3 const&);
    void intersects(Vec3 const&, Vec3 const&)const;
    AABB(float, float, float, float, float, float);
    void contains(AABB const&)const;
    void getSmallestAxisOut(AABB const&)const;
    void set(AABB const&);
    void operator!=(AABB const&)const;
    bool isNan()const;
    bool axisInside(AABB const&, Vec3)const;
    bool containsY(Vec3 const&)const;
    void operator==(AABB const&)const;
    void expand(Vec3 const&);
    void distanceTo(AABB const&)const;
    void set(Vec3 const&, Vec3 const&);
    void cloneMove(Vec3 const&)const;
    void intersectSegment(Vec3 const&, Vec3 const&, Vec3 &, Vec3 &)const;
    void grow(Vec3 const&)const;
    void fromPoints(Vec3 const&, Vec3 const&);
    void move(Vec3 const&);
    void _clipAxisCollide(AABB const&, float, int, bool)const;
    void expanded(Vec3 const&)const;
    void clipZCollide(AABB const&, float, bool)const;
    void intersects(AABB const&)const;
    void contains(Vec3 const&)const;
    void getSize()const;
    void shrink(Vec3 const&)const;
    void centerAt(Vec3 const&);
    void flooredCeiledCopy()const;
    void clipYCollide(AABB const&, float, bool)const;
    bool isEmpty()const;
    bool intersectsInner(AABB const&)const;
    void getVolume()const;
    void merge(AABB const&)const;
    void clip(Vec3 const&, Vec3 const&)const;
};
