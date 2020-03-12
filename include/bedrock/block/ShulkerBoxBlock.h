#pragma once

#include <memory>
#include <string>
#include "ChestBlock.h"


class ShulkerBoxBlock : ChestBlock {

public:
    ~ShulkerBoxBlock();
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getColor(Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    ShulkerBoxBlock(std::string const&, int);
    void spawnBoxInstance(BlockSource &, Level &, BlockPos const&, Block const&, std::string const&, std::unique_ptr<CompoundTag>, int)const;
};
