#pragma once

#include "../../unmapped/Block"


class BarrierBlock : BlockLegacy {

public:
    virtual BarrierBlock::~BarrierBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canContainLiquid(void)const;
    virtual void getShadeBrightness(void)const;

    BarrierBlock(std::string const&, int);
};
