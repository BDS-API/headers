#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class StainedGlassBlock : BlockLegacy {

public:
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    ~StainedGlassBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    StainedGlassBlock(std::string const&, int, Material const&, bool, bool);
};
