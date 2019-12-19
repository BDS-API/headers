#pragma once

class MyceliumBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    virtual ~MyceliumBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void MyceliumBlock(std::string const&, int);
};
