#pragma once

#include <string>
#include "BlockLegacy.h"


class OreBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~OreBlock();
    virtual void getExperienceDrop(Random &)const;
    virtual bool canBeOriginalSurface()const;
    OreBlock(std::string const&, int);
};
