#pragma once

class DoorItem : Item {

public:
    virtual ~DoorItem();
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void DoorItem(std::string const&, int, DoorBlock::DoorType);
    void place(BlockSource *, int, int, int, int, Block const*);
};
