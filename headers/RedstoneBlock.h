#pragma once

class RedstoneBlock : BlockLegacy {

public:
    virtual ~RedstoneBlock();
    virtual bool isSignalSource(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn(void)const;

    void RedstoneBlock(std::string const&, int);
};
