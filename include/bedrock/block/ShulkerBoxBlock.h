#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include <memory>
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "ChestBlock.h"
#include "../actor/Player.h"
#include "../level/Level.h"
#include "../util/Random.h"


class ShulkerBoxBlock : ChestBlock {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~ShulkerBoxBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getColor(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    void spawnBoxInstance(BlockSource &, Level &, BlockPos const&, Block const&, std::string const&, std::unique_ptr<CompoundTag>, int)const;
    ShulkerBoxBlock(std::string const&, int);
};
