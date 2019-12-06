#pragma once

class SandStoneBlock : BlockLegacy {

public:
    virtual ~SandStoneBlock();
    virtual bool canBeOriginalSurface(void)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void SandStoneBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
};
