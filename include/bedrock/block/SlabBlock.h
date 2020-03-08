#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../actor/Actor"
#include "../util/AABB"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"
#include "../../unmapped/SpawnConditions"


class SlabBlock : BlockLegacy {

public:
    virtual SlabBlock::~SlabBlock()
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
