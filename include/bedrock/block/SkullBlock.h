#pragma once

#include "../level/Level"
#include "actor/BlockActor"
#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "actor/SkullBlockActor"
#include "../util/AABB"


class SkullBlock : ActorBlock {

public:
    SkullBlock::~SkullBlock()
    virtual void waterSpreadCausesSpawn()const;
    virtual bool canContainLiquid()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    SkullBlock(std::string const&, int);
    void _witherSkullTester(BlockSource &, BlockPos const&, Block const&)const;
    void _updatedDragonCircuit(BlockSource &, BlockPos const&)const;
    void checkMobSpawn(Level &, BlockSource &, BlockPos const&, SkullBlockActor &)const;
};
