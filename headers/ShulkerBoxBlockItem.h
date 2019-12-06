#pragma once

class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual ~ShulkerBoxBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;

    void ShulkerBoxBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Block const*);
};
