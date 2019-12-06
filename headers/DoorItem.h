#pragma once

class DoorItem : Item {

public:
    virtual ~DoorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void DoorItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, DoorBlock::DoorType);
    void place(BlockSource *, int, int, int, int, Block const*);
};
