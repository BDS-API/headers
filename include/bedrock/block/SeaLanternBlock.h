#pragma once

#include "../util/Random"
#include "../../unmapped/Block"


class SeaLanternBlock : BlockLegacy {

public:
    SeaLanternBlock::~SeaLanternBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;

    SeaLanternBlock(std::string const&, int);
};
