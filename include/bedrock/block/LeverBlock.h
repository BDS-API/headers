#pragma once

#include <string>
#include "BlockLegacy.h"


class LeverBlock : BlockLegacy {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isInteractiveBlock()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool isSignalSource()const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    ~LeverBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void updateShape(BlockSource *, BlockPos const&);
    void getLeverFacing(int);
    void getSignal(BlockSource &, BlockPos const&, int)const;
    void _checkCanSurvive(BlockSource &, BlockPos const&)const;
    void _getShape(Block const&, AABB &)const;
    LeverBlock(std::string const&, int);
    void _getFacing(Block const&)const;
};
