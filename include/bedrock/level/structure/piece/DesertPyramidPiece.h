#pragma once

#include "ScatteredFeaturePiece.h"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual void getType()const;
    ~DesertPyramidPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    DesertPyramidPiece(int, int);
};
