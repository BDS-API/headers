#pragma once

class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual JunglePyramidPiece::~JunglePyramidPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    JunglePyramidPiece(int, int);
};
