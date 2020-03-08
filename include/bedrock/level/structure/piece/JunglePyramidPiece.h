#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/BoundingBox"


class JunglePyramidPiece : ScatteredFeaturePiece {

public:
    virtual JunglePyramidPiece::~JunglePyramidPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    JunglePyramidPiece(int, int);
};
