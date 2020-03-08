#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/BoundingBox"


class DesertPyramidPiece : ScatteredFeaturePiece {

public:
    virtual DesertPyramidPiece::~DesertPyramidPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    DesertPyramidPiece(int, int);
};
