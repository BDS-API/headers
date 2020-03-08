#pragma once

#include "unmapped/BlockSource"
#include "../container/Container"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../../unmapped/Block"
#include "../actor/Actor"
#include "../util/Random"
#include "../nbt/CompoundTag"
#include "../util/Vec3"
#include "../util/AABB"
#include "../level/Level"


class ShulkerBoxBlock : ChestBlock {

public:
    ShulkerBoxBlock::~ShulkerBoxBlock()
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
