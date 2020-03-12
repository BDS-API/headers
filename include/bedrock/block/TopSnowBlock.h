#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../actor/unmapped/ActorBlockSyncMessage.h"
#include "../../unmapped/Block.h"
#include "../actor/Mob.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "HeavyBlock.h"


class TopSnowBlock : HeavyBlock {

public:
    static long MAX_HEIGHT;

    virtual bool canHaveExtraData()const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual bool canBeSilkTouched()const;
    virtual void shouldStopFalling(Actor &)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getDustColor(Block const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~TopSnowBlock();
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;
    virtual bool isWaterBlocking()const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    void calcSnowThickness(Mob *, BlockPos const&)const;
    void melt(BlockSource &, BlockPos const&, int)const;
    void buildSnowBlock(BlockSource &, BlockPos const&, int, bool);
    void getCoveredBlock(BlockSource &, BlockPos const&);
    TopSnowBlock(std::string const&, int);
};
