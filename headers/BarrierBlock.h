#pragma once

class BarrierBlock : BlockLegacy {

public:
    virtual ~BarrierBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canContainLiquid(void)const;
    virtual void getShadeBrightness(void)const;

    void BarrierBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
