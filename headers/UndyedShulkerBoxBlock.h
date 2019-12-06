#pragma once

class UndyedShulkerBoxBlock : ShulkerBoxBlock {

public:
    virtual ~UndyedShulkerBoxBlock();
    virtual void getColor(Block const&)const;

    void UndyedShulkerBoxBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
