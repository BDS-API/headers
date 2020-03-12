#pragma once

#include "BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include <string>


class OreBlock : BlockLegacy {

public:
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~OreBlock();
    virtual void getExperienceDrop(Random &)const;
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    OreBlock(std::string const&, int);
};
