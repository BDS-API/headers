#pragma once

#include <string>
#include "BlockLegacy.h"


class SeaLanternBlock : BlockLegacy {

public:
    virtual bool canBeSilkTouched()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~SeaLanternBlock();
    SeaLanternBlock(std::string const&, int);
};
