#pragma once

class BoatItem : Item {

public:
    virtual ~BoatItem();
    virtual bool isStackedByData(void)const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BoatItem(std::string const&, int);
    void _getRotationBasedOnFacing(unsigned char)const;
};
