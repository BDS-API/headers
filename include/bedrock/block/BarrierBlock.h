#pragma once

#include "../../unmapped/Block"


class BarrierBlock : BlockLegacy {

public:
    BarrierBlock::~BarrierBlock()
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canContainLiquid()const;
    virtual void getShadeBrightness()const;

    BarrierBlock(std::string const&, int);
};
