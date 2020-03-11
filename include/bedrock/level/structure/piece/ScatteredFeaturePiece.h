#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "./StructurePiece.h"
#include "../../../block/unmapped/BlockSource.h"


class ScatteredFeaturePiece : StructurePiece {

public:
    virtual ~ScatteredFeaturePiece();

    ScatteredFeaturePiece(int, int, int, int, int, int);
    void updateAverageGroundHeight(BlockSource *, BoundingBox const&, int);
};
