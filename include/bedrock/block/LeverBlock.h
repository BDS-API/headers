#pragma once

class LeverBlock : BlockLegacy {

public:
    virtual LeverBlock::~LeverBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isInteractiveBlock(void)const;
    virtual bool isSignalSource(void)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canSpawnOn(void)const;
    virtual void updateShape(BlockSource *, BlockPos const&);

    LeverBlock(std::string const&, int);
    void _getShape(Block const&, AABB &)const;
    void getLeverFacing(int);
    void _getFacing(Block const&)const;
    void _checkCanSurvive(BlockSource &, BlockPos const&)const;
    void getSignal(BlockSource &, BlockPos const&, int)const;
};
