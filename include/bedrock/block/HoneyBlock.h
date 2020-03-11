#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../../unmapped/Block.h"


class HoneyBlock : BlockLegacy {

public:
    virtual ~HoneyBlock();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getExtraRenderLayers()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;

    HoneyBlock(std::string const&, int, Material const&);
    void _isSlidingDown(BlockPos const&, Actor &)const;
};
