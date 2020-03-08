#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"


class WorldChangeTransaction {

public:

    WorldChangeTransaction(BlockSource &);
    void setBlock(BlockPos const&, Block const&, int);
    void setBlock(BlockPos const&, Block const&, Block const&, int);
    void getBlock(BlockPos const&)const;
    void apply()const;
};
