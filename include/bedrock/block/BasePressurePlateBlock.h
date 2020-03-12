#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class BasePressurePlateBlock : BlockLegacy {

public:
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isSignalSource()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual bool canSpawnOn()const;
    virtual void getTickDelay()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void getSensitiveAABB(BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~BasePressurePlateBlock();
    void checkPressed(BlockSource &, BlockPos const&, int, int)const;
    BasePressurePlateBlock(std::string const&, int, Material const&);
};
