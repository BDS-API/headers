#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class GlassBlock : BlockLegacy {

public:
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~GlassBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    GlassBlock(std::string const&, int, Material const&, bool, bool);
};
