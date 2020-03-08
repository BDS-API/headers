#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../block/unmapped/BlockSource"


class ScatteredFeaturePiece : StructurePiece {

public:
    ScatteredFeaturePiece::~ScatteredFeaturePiece()

    ScatteredFeaturePiece(int, int, int, int, int, int);
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
};
