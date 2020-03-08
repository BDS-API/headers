#pragma once

#include "../bedrock/util/BlockPos"


class BoundingBox {

public:

    bool isValid()const;
    BoundingBox(int, int, int, int, int, int);
    void orientBox(int, int, int, int, int, int, int, int, int, int);
    bool isInside(int, int, int)const;
    void getZSpan()const;
    void getXSpan()const;
    void getUnknownBox();
    void intersects(BoundingBox const&)const;
    void getYSpan()const;
    BoundingBox(void);
    void move(int, int, int);
    BoundingBox(BlockPos const&, BlockPos const&);
    BoundingBox(BoundingBox const&);
    void getXCenter()const;
    void getZCenter()const;
    BoundingBox(int, int, int, int);
    bool isInside(BlockPos const&)const;
    void createProper(int, int, int, int, int, int);
    void getIntersection(BoundingBox const&, BoundingBox&)const;
    void getCenter()const;
    void getYCenter()const;
    void intersects(int, int, int, int)const;
    void intersects(int, int, int, int, int, int)const;
    void expand(BoundingBox const&);
};
