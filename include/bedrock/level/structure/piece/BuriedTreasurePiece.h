#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "../../../util/BlockPos.h"


class BuriedTreasurePiece : StructurePiece {

public:
    ~BuriedTreasurePiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    BuriedTreasurePiece(int, int);
};
