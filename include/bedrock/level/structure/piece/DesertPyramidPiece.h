#pragma once

#include "ScatteredFeaturePiece.h"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    ~DesertPyramidPiece(); // _ZN18DesertPyramidPieceD2Ev
    virtual void getType()const; // _ZNK18DesertPyramidPiece7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN18DesertPyramidPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    DesertPyramidPiece(int, int); // _ZN18DesertPyramidPieceC2Eii
};
