#pragma once

#include "StructurePiece.h"


class ScatteredFeaturePiece : StructurePiece {

public:
    ~ScatteredFeaturePiece(); // _ZN21ScatteredFeaturePieceD2Ev
    ScatteredFeaturePiece(int, int, int, int, int, int); // _ZN21ScatteredFeaturePieceC2Eiiiiii
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int); // _ZN21ScatteredFeaturePiece25updateAverageGroundHeightEP11BlockSourceRK11BoundingBoxi
};
