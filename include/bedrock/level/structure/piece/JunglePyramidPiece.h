#pragma once

#include "ScatteredFeaturePiece.h"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    ~JunglePyramidPiece(); // _ZN18JunglePyramidPieceD2Ev
    virtual void getType()const; // _ZNK18JunglePyramidPiece7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN18JunglePyramidPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    JunglePyramidPiece(int, int); // _ZN18JunglePyramidPieceC2Eii
};
