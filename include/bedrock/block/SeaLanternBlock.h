#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include <string>


class SeaLanternBlock : BlockLegacy {

public:
    virtual ~SeaLanternBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canBeSilkTouched()const;

    SeaLanternBlock(std::string const&, int);
};
