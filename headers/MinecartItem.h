#pragma once

class MinecartItem : Item {

public:
    virtual ~MinecartItem();
    virtual bool isDestructive(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void MinecartItem(std::string const&, int, MinecartType);
};
