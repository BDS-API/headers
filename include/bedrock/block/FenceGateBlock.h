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


class FenceGateBlock : BlockLegacy {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    ~FenceGateBlock();
    virtual void ignoreEntitiesOnPistonMove(Block const&)const;
    virtual bool canContainLiquid()const;
    virtual bool isInteractiveBlock()const;
    virtual bool isFenceGateBlock()const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
//  FenceGateBlock(std::string const&, int, WoodType); //TODO: incomplete function definition
    void _checkIsInWall(BlockSource &, BlockPos const&)const;
    void _onOpenChanged(BlockSource &, BlockPos const&)const;
};
