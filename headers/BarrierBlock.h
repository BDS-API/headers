#pragma once

class BarrierBlock : BlockLegacy {

public:
    virtual ~BarrierBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canContainLiquid(void)const;
    virtual void getShadeBrightness(void)const;

    void BarrierBlock(std::string const&, int);
};
