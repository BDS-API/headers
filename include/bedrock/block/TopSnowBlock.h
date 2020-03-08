#pragma once

#include "../../unmapped/AABB"
#include "../actor/Mob"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"


class TopSnowBlock : HeavyBlock {

public:
    static long MAX_HEIGHT;

    virtual TopSnowBlock::~TopSnowBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isWaterBlocking(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual bool canHaveExtraData(void)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;

    void getCoveredBlock(BlockSource &, BlockPos const&);
    void buildSnowBlock(BlockSource &, BlockPos const&, int, bool);
    TopSnowBlock(std::string const&, int);
    void melt(BlockSource &, BlockPos const&, int)const;
    void calcSnowThickness(Mob *, BlockPos const&)const;
};
