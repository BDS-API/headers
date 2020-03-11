#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include <memory>
#include "./ChestBlock.h"
#include "../util/BlockPos.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../util/AABB.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include "../../unmapped/Block.h"


class ShulkerBoxBlock : ChestBlock {

public:
    virtual ~ShulkerBoxBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getColor(Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;

    ShulkerBoxBlock(std::string const&, int);
    void spawnBoxInstance(BlockSource &, Level &, BlockPos const&, Block const&, std::string const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>, int)const;
};
