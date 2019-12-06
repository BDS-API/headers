#pragma once

class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual ~JunglePyramidPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void JunglePyramidPiece(int, int);
};
