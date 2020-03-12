#pragma once

#include <string>
#include "BlockLegacy.h"


class BarrierBlock : BlockLegacy {

public:
    virtual bool canContainLiquid()const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    ~BarrierBlock();
    virtual void getShadeBrightness()const;
    BarrierBlock(std::string const&, int);
};
