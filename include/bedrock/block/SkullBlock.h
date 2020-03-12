#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "actor/BlockActor.h"
#include "ActorBlock.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../level/Level.h"
#include "../util/Random.h"
#include "actor/SkullBlockActor.h"


class SkullBlock : ActorBlock {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void waterSpreadCausesSpawn()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~SkullBlock();
    virtual bool canContainLiquid()const;
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    void _witherSkullTester(BlockSource &, BlockPos const&, Block const&)const;
    SkullBlock(std::string const&, int);
    std::string getTypeDescriptionId(int);
    void _updatedDragonCircuit(BlockSource &, BlockPos const&)const;
    void checkMobSpawn(Level &, BlockSource &, BlockPos const&, SkullBlockActor &)const;
};
