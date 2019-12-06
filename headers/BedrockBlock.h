#pragma once

class BedrockBlock : BlockLegacy {

public:
    virtual ~BedrockBlock();
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void BedrockBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
