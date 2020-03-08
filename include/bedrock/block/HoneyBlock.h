#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/AABB"


class HoneyBlock : BlockLegacy {

public:
    virtual HoneyBlock::~HoneyBlock()
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getExtraRenderLayers()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;

    HoneyBlock(std::string const&, int, Material const&);
    void _isSlidingDown(BlockPos const&, Actor &)const;
};
