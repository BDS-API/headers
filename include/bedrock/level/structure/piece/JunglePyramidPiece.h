#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../util/Random.h"
#include "./ScatteredFeaturePiece.h"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual ~JunglePyramidPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    JunglePyramidPiece(int, int);
};
