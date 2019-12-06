#pragma once

class StainedGlassPaneBlock : ThinFenceBlock {

public:
    virtual ~StainedGlassPaneBlock();
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void StainedGlassPaneBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, bool, bool, bool);
};
