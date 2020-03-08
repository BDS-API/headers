#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"


class BuriedTreasurePiece : StructurePiece {

public:
    BuriedTreasurePiece::~BuriedTreasurePiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
};
