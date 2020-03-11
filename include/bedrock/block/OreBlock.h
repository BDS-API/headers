#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include <string>


class OreBlock : BlockLegacy {

public:
    virtual ~OreBlock();
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    OreBlock(std::string const&, int);
};
