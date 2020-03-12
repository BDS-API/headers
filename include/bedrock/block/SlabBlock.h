#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../../unmapped/SpawnConditions.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class SlabBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual bool isSlabBlock()const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    ~SlabBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
//  SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
    void getBaseSlab()const;
};
