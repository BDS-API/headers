#pragma once

class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual ~DesertPyramidPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void DesertPyramidPiece(int, int);
};
