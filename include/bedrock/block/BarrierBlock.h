#pragma once

#include "BlockLegacy.h"
#include "../../unmapped/Block.h"
#include <string>


class BarrierBlock : BlockLegacy {

public:
    ~BarrierBlock();
    virtual bool canContainLiquid()const;
    virtual void getShadeBrightness()const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    BarrierBlock(std::string const&, int);
};
