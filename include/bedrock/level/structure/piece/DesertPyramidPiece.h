#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "ScatteredFeaturePiece.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BoundingBox.h"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual void getType()const;
    ~DesertPyramidPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    DesertPyramidPiece(int, int);
};
