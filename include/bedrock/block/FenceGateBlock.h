#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class FenceGateBlock : BlockLegacy {

public:
    FenceGateBlock::~FenceGateBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool isFenceGateBlock()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void ignoreEntitiesOnPistonMove(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;

    FenceGateBlock(std::string const&, int, WoodType);
    void _checkIsInWall(BlockSource &, BlockPos const&)const;
    void _onOpenChanged(BlockSource &, BlockPos const&)const;
};
