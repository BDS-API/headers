#pragma once

#include "../../unmapped/BaseGameVersion"
#include "../util/Random"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class StainedGlassBlock : BlockLegacy {

public:
    StainedGlassBlock::~StainedGlassBlock()
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    StainedGlassBlock(std::string const&, int, Material const&, bool, bool);
};
