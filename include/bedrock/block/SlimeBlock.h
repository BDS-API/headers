#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include <string>


class SlimeBlock : BlockLegacy {

public:
    virtual ~SlimeBlock();
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock()const;
    virtual void getExtraRenderLayers()const;

    SlimeBlock(std::string const&, int, Material const&);
};
