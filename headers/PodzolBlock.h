#pragma once

class PodzolBlock : BlockLegacy {

public:
    virtual ~PodzolBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void PodzolBlock(std::string const&, int);
};
