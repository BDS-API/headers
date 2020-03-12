#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include <vector>
#include "BlockLegacy.h"
#include "../util/Random.h"


class ThinFenceBlock : BlockLegacy {

public:
    virtual bool isThinFenceBlock()const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool canContainLiquid()const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    ~ThinFenceBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ThinFenceBlock(std::string const&, int, Material const&, bool, bool, bool);
};
