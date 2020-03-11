#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/Random.h"
#include "./ScatteredFeaturePiece.h"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual ~DesertPyramidPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    DesertPyramidPiece(int, int);
};
