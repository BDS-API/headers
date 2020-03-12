#pragma once

#include <string>
#include "BlockLegacy.h"


class HoneyBlock : BlockLegacy {

public:
    virtual void getExtraRenderLayers()const;
    ~HoneyBlock();
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    HoneyBlock(std::string const&, int, Material const&);
    void _isSlidingDown(BlockPos const&, Actor &)const;
};
