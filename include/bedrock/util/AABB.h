#pragma once

#include <string>
#include "Vec3.h"


class AABB {

public:
    static long EMPTY;

    void fromPoints(Vec3 const&, Vec3 const&); // _ZN4AABB10fromPointsERK4Vec3S2_
    bool containsX(Vec3 const&)const; // _ZNK4AABB9containsXERK4Vec3
    bool containsY(Vec3 const&)const; // _ZNK4AABB9containsYERK4Vec3
    bool containsZ(Vec3 const&)const; // _ZNK4AABB9containsZERK4Vec3
    AABB(); // _ZN4AABBC2Ev
    AABB(float, float, float, float, float, float); // _ZN4AABBC2Effffff
    AABB(Vec3 const&, Vec3 const&); // _ZN4AABBC2ERK4Vec3S2_
    AABB(Vec3 const&, float); // _ZN4AABBC2ERK4Vec3f
    void set(Vec3 const&, Vec3 const&); // _ZN4AABB3setERK4Vec3S2_
    void expand(Vec3 const&); // _ZN4AABB6expandERK4Vec3
    void expanded(Vec3 const&)const; // _ZNK4AABB8expandedERK4Vec3
    void translated(Vec3 const&)const; // _ZNK4AABB10translatedERK4Vec3
    void merge(AABB const&)const; // _ZNK4AABB5mergeERKS_
    void grow(Vec3 const&)const; // _ZNK4AABB4growERK4Vec3
    void cloneMove(Vec3 const&)const; // _ZNK4AABB9cloneMoveERK4Vec3
    void clipCollide(AABB const&, Vec3 const&, bool, float *)const; // _ZNK4AABB11clipCollideERKS_RK4Vec3bPf
    void _clipAxisCollide(AABB const&, float, int, bool)const; // _ZNK4AABB16_clipAxisCollideERKS_fib
    void clipXCollide(AABB const&, float, bool)const; // _ZNK4AABB12clipXCollideERKS_fb
    void clipYCollide(AABB const&, float, bool)const; // _ZNK4AABB12clipYCollideERKS_fb
    void clipZCollide(AABB const&, float, bool)const; // _ZNK4AABB12clipZCollideERKS_fb
    void intersects(AABB const&)const; // _ZNK4AABB10intersectsERKS_
    bool intersectsInner(AABB const&)const; // _ZNK4AABB15intersectsInnerERKS_
    void getSmallestAxisOut(AABB const&)const; // _ZNK4AABB18getSmallestAxisOutERKS_
    bool axisInside(AABB const&, Vec3)const; // _ZNK4AABB10axisInsideERKS_4Vec3
    void distanceTo(Vec3 const&)const; // _ZNK4AABB10distanceToERK4Vec3
    void distanceToSqr(Vec3 const&)const; // _ZNK4AABB13distanceToSqrERK4Vec3
    void distanceTo(AABB const&)const; // _ZNK4AABB10distanceToERKS_
    void distanceToSqr(AABB const&)const; // _ZNK4AABB13distanceToSqrERKS_
    void intersects(Vec3 const&, Vec3 const&)const; // _ZNK4AABB10intersectsERK4Vec3S2_
    void intersectSegment(Vec3 const&, Vec3 const&, Vec3 &, Vec3 &)const; // _ZNK4AABB16intersectSegmentERK4Vec3S2_RS0_S3_
    void move(Vec3 const&); // _ZN4AABB4moveERK4Vec3
    void move(float, float, float); // _ZN4AABB4moveEfff
    void centerAt(Vec3 const&); // _ZN4AABB8centerAtERK4Vec3
    void getBounds()const; // _ZNK4AABB9getBoundsEv
    void resize(Vec3 const&)const; // _ZNK4AABB6resizeERK4Vec3
    void getCenter()const; // _ZNK4AABB9getCenterEv
    void contains(Vec3 const&)const; // _ZNK4AABB8containsERK4Vec3
    void contains(AABB const&)const; // _ZNK4AABB8containsERKS_
    void getSize()const; // _ZNK4AABB7getSizeEv
    void getVolume()const; // _ZNK4AABB9getVolumeEv
    void shrink(Vec3 const&)const; // _ZNK4AABB6shrinkERK4Vec3
    void clip(Vec3 const&, Vec3 const&)const; // _ZNK4AABB4clipERK4Vec3S2_
    bool isEmpty()const; // _ZNK4AABB7isEmptyEv
    void set(AABB const&); // _ZN4AABB3setERKS_
    void set(float, float, float, float, float, float); // _ZN4AABB3setEffffff
    std::string toString()const; // _ZNK4AABB8toStringB5cxx11Ev
    bool isValid()const; // _ZNK4AABB7isValidEv
    void flooredCopy(float, float)const; // _ZNK4AABB11flooredCopyEff
    void flooredCeiledCopy()const; // _ZNK4AABB17flooredCeiledCopyEv
    bool isNan()const; // _ZNK4AABB5isNanEv
    void operator==(AABB const&)const; // _ZNK4AABBeqERKS_
    void operator!=(AABB const&)const; // _ZNK4AABBneERKS_
};
