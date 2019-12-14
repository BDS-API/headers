#pragma once

class PistonBlock : ActorBlock {

public:
    static long PistonBlock::ARM_DIRECTION_OFFSETS;

    virtual ~PistonBlock();
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isValidAuxValue(int)const;
    virtual bool canContainLiquid(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void breaksFallingBlocks(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void pushesUpFallingBlocks(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    void getFacingDir(unsigned char);
    void PistonBlock(std::string const&, int, PistonBlock::Type);
    bool isSticky(void)const;
};
