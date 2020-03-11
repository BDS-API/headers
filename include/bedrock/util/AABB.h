#pragma once

#include "./Vec3.h"
#include "./AABB.h"
#include <string>


class AABB {

public:
    static long EMPTY;


    void fromPoints(Vec3 const&, Vec3 const&);
    bool containsX(Vec3 const&)const;
    bool containsY(Vec3 const&)const;
    bool containsZ(Vec3 const&)const;
    AABB();
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
    bool intersectsInner(AABB const&)const;
    void getSmallestAxisOut(AABB const&)const;
    bool axisInside(AABB const&, Vec3)const;
    void distanceTo(Vec3 const&)const;
    void distanceToSqr(Vec3 const&)const;
    void distanceTo(AABB const&)const;
    void distanceToSqr(AABB const&)const;
    void intersects(Vec3 const&, Vec3 const&)const;
    void intersectSegment(Vec3 const&, Vec3 const&, Vec3 &, Vec3 &)const;
    void move(Vec3 const&);
    void move(float, float, float);
    void centerAt(Vec3 const&);
    void getBounds()const;
    void resize(Vec3 const&)const;
    void getCenter()const;
    void contains(Vec3 const&)const;
    void contains(AABB const&)const;
    void getSize()const;
    void getVolume()const;
    void shrink(Vec3 const&)const;
    void clip(Vec3 const&, Vec3 const&)const;
    bool isEmpty()const;
    void set(AABB const&);
    void set(float, float, float, float, float, float);
    std::string toString()const;
    bool isValid()const;
    void flooredCopy(float, float)const;
    void flooredCeiledCopy()const;
    bool isNan()const;
    void operator==(AABB const&)const;
    void operator!=(AABB const&)const;
};
