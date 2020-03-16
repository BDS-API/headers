#pragma once

#include "StructurePiece.h"


class ScatteredFeaturePiece : public StructurePiece {

public:
    virtual ~ScatteredFeaturePiece(); // _ZN21ScatteredFeaturePieceD2Ev
    virtual void __fake_function0(); // fake
    ScatteredFeaturePiece(int, int, int, int, int, int); // _ZN21ScatteredFeaturePieceC2Eiiiiii
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int); // _ZN21ScatteredFeaturePiece25updateAverageGroundHeightEP11BlockSourceRK11BoundingBoxi
};
