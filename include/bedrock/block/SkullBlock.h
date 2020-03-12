#pragma once

#include <string>
#include "ActorBlock.h"


class SkullBlock : ActorBlock {

public:
    virtual void waterSpreadCausesSpawn()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~SkullBlock();
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canContainLiquid()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    SkullBlock(std::string const&, int);
    void checkMobSpawn(Level &, BlockSource &, BlockPos const&, SkullBlockActor &)const;
    void _updatedDragonCircuit(BlockSource &, BlockPos const&)const;
    std::string getTypeDescriptionId(int);
    void _witherSkullTester(BlockSource &, BlockPos const&, Block const&)const;
};
