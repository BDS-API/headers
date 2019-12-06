#pragma once

class WorldChangeTransaction {

public:

    void WorldChangeTransaction(BlockSource &);
    void setBlock(BlockPos const&, Block const&, int);
    void setBlock(BlockPos const&, Block const&, Block const&, int);
    void getBlock(BlockPos const&)const;
    void apply(void)const;
};
