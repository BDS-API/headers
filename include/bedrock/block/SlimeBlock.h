#pragma once

#include <string>
#include "BlockLegacy.h"


class SlimeBlock : BlockLegacy {

public:
    virtual bool isBounceBlock()const;
    virtual void getExtraRenderLayers()const;
    ~SlimeBlock();
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    SlimeBlock(std::string const&, int, Material const&);
};
