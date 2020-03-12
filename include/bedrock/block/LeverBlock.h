#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"


class LeverBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool canSpawnOn()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void updateShape(BlockSource *, BlockPos const&);
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isInteractiveBlock()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    ~LeverBlock();
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    void _getShape(Block const&, AABB &)const;
    void _checkCanSurvive(BlockSource &, BlockPos const&)const;
    LeverBlock(std::string const&, int);
    void _getFacing(Block const&)const;
    void getLeverFacing(int);
    void getSignal(BlockSource &, BlockPos const&, int)const;
};
