#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../util/BlockPos"
#include "../../../../unmapped/BoundingBox"


class BuriedTreasurePiece : StructurePiece {

public:
    virtual BuriedTreasurePiece::~BuriedTreasurePiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
};
