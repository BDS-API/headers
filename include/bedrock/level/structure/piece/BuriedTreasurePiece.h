#pragma once

#include "../../../util/BlockPos.h"
#include "../../../util/Random.h"
#include "./StructurePiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"


class BuriedTreasurePiece : StructurePiece {

public:
    virtual ~BuriedTreasurePiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
};
