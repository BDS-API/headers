#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    DesertPyramidPiece::~DesertPyramidPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    DesertPyramidPiece(int, int);
};
