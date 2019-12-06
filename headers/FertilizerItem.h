#pragma once

class FertilizerItem : Item {

public:
    virtual ~FertilizerItem();
    virtual bool isFertilizer(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void FertilizerItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, FertilizerType);
};
