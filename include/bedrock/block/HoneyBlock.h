#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"


class HoneyBlock : BlockLegacy {

public:
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    ~HoneyBlock();
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getExtraRenderLayers()const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    void _isSlidingDown(BlockPos const&, Actor &)const;
    HoneyBlock(std::string const&, int, Material const&);
};
