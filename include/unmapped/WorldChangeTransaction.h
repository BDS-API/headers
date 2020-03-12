#pragma once

#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "../bedrock/util/BlockPos.h"


class WorldChangeTransaction {

public:
    class Data;

    void setBlock(BlockPos const&, Block const&, Block const&, int);
    void apply()const;
    WorldChangeTransaction(BlockSource &);
    void setBlock(BlockPos const&, Block const&, int);
    ~WorldChangeTransaction();
    void getBlock(BlockPos const&)const;
    class Data {

    public:
        Data();
        ~Data();
    };
};
