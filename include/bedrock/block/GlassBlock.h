#pragma once

#include "../../unmapped/BaseGameVersion"
#include "../util/Random"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class GlassBlock : BlockLegacy {

public:
    GlassBlock::~GlassBlock()
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    GlassBlock(std::string const&, int, Material const&, bool, bool);
};
