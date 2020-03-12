#pragma once

#include "BlockLegacy.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"
#include <string>


class SeaLanternBlock : BlockLegacy {

public:
    virtual bool canBeSilkTouched()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~SeaLanternBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    SeaLanternBlock(std::string const&, int);
};
