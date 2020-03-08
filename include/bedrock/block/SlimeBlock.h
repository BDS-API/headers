#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"


class SlimeBlock : BlockLegacy {

public:
    SlimeBlock::~SlimeBlock()
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock()const;
    virtual void getExtraRenderLayers()const;

    SlimeBlock(std::string const&, int, Material const&);
};
