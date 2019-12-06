#pragma once

class CartographyTableBlock : BlockLegacy {

public:
    virtual ~CartographyTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void CartographyTableBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
