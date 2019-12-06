#pragma once

class LoomBlock : FaceDirectionalBlock {

public:
    virtual ~LoomBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void LoomBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
