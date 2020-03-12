#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"


class ScatteredFeaturePiece : StructurePiece {

public:
    ~ScatteredFeaturePiece();
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
    ScatteredFeaturePiece(int, int, int, int, int, int);
};
