#pragma once

#include <string>
#include "BlockLegacy.h"
#include <functional>


class SlabBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;
    ~SlabBlock();
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    virtual bool isSlabBlock()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
//  SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
    void getBaseSlab()const;
};
