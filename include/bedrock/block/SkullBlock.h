#pragma once

#include "../../unmapped/Block"
#include "../level/Level"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../actor/Player"
#include "../../unmapped/Random"


class SkullBlock : ActorBlock {

public:
    virtual SkullBlock::~SkullBlock();
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    SkullBlock(std::string const&, int);
    void _witherSkullTester(BlockSource &, BlockPos const&, Block const&)const;
    void _updatedDragonCircuit(BlockSource &, BlockPos const&)const;
    void checkMobSpawn(Level &, BlockSource &, BlockPos const&, SkullBlockActor &)const;
};
