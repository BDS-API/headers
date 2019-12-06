#pragma once

class EnchantingTableBlock : ActorBlock {

public:
    virtual ~EnchantingTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual bool isInteractiveBlock(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;

    void EnchantingTableBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
