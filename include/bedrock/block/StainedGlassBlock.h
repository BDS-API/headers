#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/BaseGameVersion.h"
#include "./BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class StainedGlassBlock : BlockLegacy {

public:
    virtual ~StainedGlassBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassBlock(std::string const&, int, Material const&, bool, bool);
};
