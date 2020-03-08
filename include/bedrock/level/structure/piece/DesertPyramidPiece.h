#pragma once

#include "../../../../unmapped/BlockSource"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual DesertPyramidPiece::~DesertPyramidPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    DesertPyramidPiece(int, int);
};
