#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../../unmapped/SpawnConditions.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include <functional>
#include "../util/Random.h"
#include "./BlockLegacy.h"


class SlabBlock : BlockLegacy {

public:
    virtual ~SlabBlock();
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
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

//  SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
    void getBaseSlab()const;
};
