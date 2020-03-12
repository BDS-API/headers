#pragma once

#include "StructurePiece.h"


class ScatteredFeaturePiece : StructurePiece {

public:
    ~ScatteredFeaturePiece();
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
    ScatteredFeaturePiece(int, int, int, int, int, int);
};
