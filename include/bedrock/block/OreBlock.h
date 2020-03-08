#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class OreBlock : BlockLegacy {

public:
    virtual OreBlock::~OreBlock()
    virtual bool canBeOriginalSurface()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    OreBlock(std::string const&, int);
};
