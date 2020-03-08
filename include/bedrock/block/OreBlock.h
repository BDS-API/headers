#pragma once

#include "../../unmapped/Random"


class OreBlock : BlockLegacy {

public:
    virtual OreBlock::~OreBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    OreBlock(std::string const&, int);
};
