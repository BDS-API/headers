#pragma once

class DeadBush : BushBlock {

public:
    virtual ~DeadBush();
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;

    void DeadBush(std::string const&, int);
};
