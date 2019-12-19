#pragma once

class BoundingBox {

public:

    bool isValid(void)const;
    BoundingBox(int, int, int, int, int, int);
    void orientBox(int, int, int, int, int, int, int, int, int, int);
    bool isInside(int, int, int)const;
    void getZSpan(void)const;
    void getXSpan(void)const;
    void getUnknownBox(void);
    void intersects(BoundingBox const&)const;
    void getYSpan(void)const;
    BoundingBox(void);
    void move(int, int, int);
    BoundingBox(BlockPos const&, BlockPos const&);
    BoundingBox(BoundingBox const&);
    void getXCenter(void)const;
    void getZCenter(void)const;
    BoundingBox(int, int, int, int);
    bool isInside(BlockPos const&)const;
    void createProper(int, int, int, int, int, int);
    void getIntersection(BoundingBox const&, BoundingBox&)const;
    void getCenter(void)const;
    void getYCenter(void)const;
    void intersects(int, int, int, int)const;
    void intersects(int, int, int, int, int, int)const;
    void expand(BoundingBox const&);
};
