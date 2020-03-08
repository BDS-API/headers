#pragma once

#include "../../unmapped/Material"
#include "../../unmapped/SpawnConditions"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class SlabBlock : BlockLegacy {

public:
    SlabBlock::~SlabBlock()
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block ()(BlockPos const&)> const&, BlockPos const&)const;
    virtual bool isSlabBlock()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>);
    void getBaseSlab()const;
};
