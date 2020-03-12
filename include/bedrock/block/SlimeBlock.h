#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "BlockLegacy.h"


class SlimeBlock : BlockLegacy {

public:
    virtual void getExtraRenderLayers()const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual bool isBounceBlock()const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    ~SlimeBlock();
    SlimeBlock(std::string const&, int, Material const&);
};
