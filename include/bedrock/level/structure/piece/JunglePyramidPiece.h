#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    JunglePyramidPiece::~JunglePyramidPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    JunglePyramidPiece(int, int);
};
