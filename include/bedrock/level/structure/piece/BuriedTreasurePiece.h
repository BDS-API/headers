#pragma once

#include "../../../../unmapped/BlockSource"


class BuriedTreasurePiece : StructurePiece {

public:
    virtual BuriedTreasurePiece::~BuriedTreasurePiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
};
