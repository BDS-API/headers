#pragma once

class RedstoneLampBlock : BlockLegacy {

public:
    virtual ~RedstoneLampBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void RedstoneLampBlock(std::string const&, int, bool);
};
