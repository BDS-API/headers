#pragma once

#include "ScatteredFeaturePiece.h"


class JunglePyramidPiece : public ScatteredFeaturePiece {

public:
    virtual ~JunglePyramidPiece(); // _ZN18JunglePyramidPieceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK18JunglePyramidPiece7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN18JunglePyramidPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    JunglePyramidPiece(int, int); // _ZN18JunglePyramidPieceC2Eii
};
