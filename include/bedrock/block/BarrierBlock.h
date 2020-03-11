#pragma once

#include "./BlockLegacy.h"
#include "../../unmapped/Block.h"
#include <string>


class BarrierBlock : BlockLegacy {

public:
    virtual ~BarrierBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getShadeBrightness()const;

    BarrierBlock(std::string const&, int);
};
