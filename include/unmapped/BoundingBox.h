#pragma once



class BoundingBox {

public:
    bool isValid()const; // _ZNK11BoundingBox7isValidEv
    BoundingBox(int, int, int, int, int, int); // _ZN11BoundingBoxC2Eiiiiii
    void orientBox(int, int, int, int, int, int, int, int, int, int); // _ZN11BoundingBox9orientBoxEiiiiiiiiii
    bool isInside(int, int, int)const; // _ZNK11BoundingBox8isInsideEiii
    void getZSpan()const; // _ZNK11BoundingBox8getZSpanEv
    void getXSpan()const; // _ZNK11BoundingBox8getXSpanEv
    void getUnknownBox(); // _ZN11BoundingBox13getUnknownBoxEv
    void intersects(BoundingBox const&)const; // _ZNK11BoundingBox10intersectsERKS_
    void getYSpan()const; // _ZNK11BoundingBox8getYSpanEv
    BoundingBox(); // _ZN11BoundingBoxC2Ev
    void move(int, int, int); // _ZN11BoundingBox4moveEiii
    BoundingBox(BlockPos const&, BlockPos const&); // _ZN11BoundingBoxC2ERK8BlockPosS2_
    BoundingBox(BoundingBox const&); // _ZN11BoundingBoxC2ERKS_
    void getXCenter()const; // _ZNK11BoundingBox10getXCenterEv
    void getZCenter()const; // _ZNK11BoundingBox10getZCenterEv
    BoundingBox(int, int, int, int); // _ZN11BoundingBoxC2Eiiii
    bool isInside(BlockPos const&)const; // _ZNK11BoundingBox8isInsideERK8BlockPos
    void createProper(int, int, int, int, int, int); // _ZN11BoundingBox12createProperEiiiiii
    void getIntersection(BoundingBox const&, BoundingBox &)const; // _ZNK11BoundingBox15getIntersectionERKS_RS_
    void operator==(BoundingBox const&)const; // _ZNK11BoundingBoxeqERKS_
    void getCenter()const; // _ZNK11BoundingBox9getCenterEv
    void getYCenter()const; // _ZNK11BoundingBox10getYCenterEv
    void intersects(int, int, int, int)const; // _ZNK11BoundingBox10intersectsEiiii
    void intersects(int, int, int, int, int, int)const; // _ZNK11BoundingBox10intersectsEiiiiii
    void expand(BoundingBox const&); // _ZN11BoundingBox6expandERKS_
};
