#pragma once

#include "../bedrock/util/BlockPos.h"


class BoundingBox {

public:
    bool isValid()const;
    void getUnknownBox();
    BoundingBox(int, int, int, int);
    void createProper(int, int, int, int, int, int);
    void operator==(BoundingBox const&)const;
    void orientBox(int, int, int, int, int, int, int, int, int, int);
    void getXCenter()const;
    void getIntersection(BoundingBox const&, BoundingBox &)const;
    void intersects(int, int, int, int)const;
    void getZSpan()const;
    void getZCenter()const;
    void intersects(BoundingBox const&)const;
    bool isInside(int, int, int)const;
    void getYCenter()const;
    void move(int, int, int);
    BoundingBox(int, int, int, int, int, int);
    BoundingBox();
    void getCenter()const;
    bool isInside(BlockPos const&)const;
    BoundingBox(BoundingBox const&);
    void getXSpan()const;
    void expand(BoundingBox const&);
    void getYSpan()const;
    BoundingBox(BlockPos const&, BlockPos const&);
    void intersects(int, int, int, int, int, int)const;
};
