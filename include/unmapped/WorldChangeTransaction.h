#pragma once

#include "../bedrock/util/BlockPos.h"
#include "./Block.h"
#include "../bedrock/block/unmapped/BlockSource.h"


class WorldChangeTransaction {

public:

    WorldChangeTransaction(BlockSource &);
    ~WorldChangeTransaction();
    void setBlock(BlockPos const&, Block const&, int);
    void setBlock(BlockPos const&, Block const&, Block const&, int);
    void getBlock(BlockPos const&)const;
    void apply()const;
};
