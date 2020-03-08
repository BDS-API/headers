#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"


class SlimeBlock : BlockLegacy {

public:
    virtual SlimeBlock::~SlimeBlock()
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock()const;
    virtual void getExtraRenderLayers()const;

    SlimeBlock(std::string const&, int, Material const&);
};
