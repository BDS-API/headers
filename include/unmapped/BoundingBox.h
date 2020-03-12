#pragma once



class BoundingBox {

public:
    void move(int, int, int);
    BoundingBox(int, int, int, int);
    BoundingBox();
    void expand(BoundingBox const&);
    bool isValid()const;
    void getCenter()const;
    void getYCenter()const;
    bool isInside(BlockPos const&)const;
    void getYSpan()const;
    void intersects(int, int, int, int, int, int)const;
    void intersects(BoundingBox const&)const;
    void orientBox(int, int, int, int, int, int, int, int, int, int);
    void getZSpan()const;
    BoundingBox(BlockPos const&, BlockPos const&);
    void getIntersection(BoundingBox const&, BoundingBox &)const;
    void getXCenter()const;
    void getXSpan()const;
    void getZCenter()const;
    void operator==(BoundingBox const&)const;
    BoundingBox(int, int, int, int, int, int);
    bool isInside(int, int, int)const;
    void getUnknownBox();
    void createProper(int, int, int, int, int, int);
    BoundingBox(BoundingBox const&);
    void intersects(int, int, int, int)const;
};
