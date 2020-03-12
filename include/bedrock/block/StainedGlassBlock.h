#pragma once

#include <string>
#include "BlockLegacy.h"


class StainedGlassBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    ~StainedGlassBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    StainedGlassBlock(std::string const&, int, Material const&, bool, bool);
};
