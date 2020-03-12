#pragma once

#include "StructurePiece.h"


class BuriedTreasurePiece : StructurePiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~BuriedTreasurePiece();
    void _isCovered(BlockSource const&, BlockPos const&)const;
    BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
};
