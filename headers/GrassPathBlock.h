#pragma once

class GrassPathBlock : BlockLegacy {

public:
    virtual ~GrassPathBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canBeOriginalSurface(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void GrassPathBlock(std::string const&, int);
};
