#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "ScatteredFeaturePiece.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BoundingBox.h"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~JunglePyramidPiece();
    JunglePyramidPiece(int, int);
};
