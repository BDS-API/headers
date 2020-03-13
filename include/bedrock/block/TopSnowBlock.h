#pragma once

#include <string>
#include "HeavyBlock.h"


class TopSnowBlock : HeavyBlock {

public:
    static long MAX_HEIGHT;

    ~TopSnowBlock(); // _ZN12TopSnowBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK12TopSnowBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const; // _ZNK12TopSnowBlock17getCollisionShapeER4AABBRK5BlockR11BlockSourceRK8BlockPosP5Actor
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK12TopSnowBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual bool isWaterBlocking()const; // _ZNK12TopSnowBlock15isWaterBlockingEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK12TopSnowBlock22waterSpreadCausesSpawnEv
    virtual bool canContainLiquid()const; // _ZNK12TopSnowBlock16canContainLiquidEv
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK12TopSnowBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12TopSnowBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK12TopSnowBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const; // _ZNK12TopSnowBlock10tryToPlaceER11BlockSourceRK8BlockPosRK5BlockPK21ActorBlockSyncMessage
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12TopSnowBlock17playerWillDestroyER6PlayerRK8BlockPosRK5Block
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK12TopSnowBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK12TopSnowBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12TopSnowBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12TopSnowBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12TopSnowBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const; // _ZNK12TopSnowBlock13playerDestroyER6PlayerRK8BlockPosRK5Block
    virtual bool canBeBuiltOver(BlockSource &, BlockPos const&)const; // _ZNK12TopSnowBlock14canBeBuiltOverER11BlockSourceRK8BlockPos
    virtual void shouldStopFalling(Actor &)const; // _ZNK12TopSnowBlock17shouldStopFallingER5Actor
    virtual void calcGroundFriction(Mob &, BlockPos const&)const; // _ZNK12TopSnowBlock18calcGroundFrictionER3MobRK8BlockPos
    virtual bool canHaveExtraData()const; // _ZNK12TopSnowBlock16canHaveExtraDataEv
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK12TopSnowBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK12TopSnowBlock16canBeSilkTouchedEv
    virtual void getDustColor(Block const&)const; // _ZNK12TopSnowBlock12getDustColorERK5Block
    virtual std::string getDustParticleName(Block const&)const; // _ZNK12TopSnowBlock19getDustParticleNameB5cxx11ERK5Block
    virtual bool isFreeToFall(BlockSource &, BlockPos const&)const; // _ZNK12TopSnowBlock12isFreeToFallER11BlockSourceRK8BlockPos
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const; // _ZNK12TopSnowBlock12startFallingER11BlockSourceRK8BlockPosPK5Blockb
    void getCoveredBlock(BlockSource &, BlockPos const&); // _ZN12TopSnowBlock15getCoveredBlockER11BlockSourceRK8BlockPos
    void buildSnowBlock(BlockSource &, BlockPos const&, int, bool); // _ZN12TopSnowBlock14buildSnowBlockER11BlockSourceRK8BlockPosib
    TopSnowBlock(std::string const&, int); // _ZN12TopSnowBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void melt(BlockSource &, BlockPos const&, int)const; // _ZNK12TopSnowBlock4meltER11BlockSourceRK8BlockPosi
    void calcSnowThickness(Mob *, BlockPos const&)const; // _ZNK12TopSnowBlock17calcSnowThicknessEP3MobRK8BlockPos
};
