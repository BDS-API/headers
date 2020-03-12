#pragma once

#include "ScatteredFeaturePiece.h"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~JunglePyramidPiece();
    virtual void getType()const;
    JunglePyramidPiece(int, int);
};
