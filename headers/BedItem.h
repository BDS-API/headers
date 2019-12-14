#pragma once

class BedItem : Item {

public:
    virtual ~BedItem();
    virtual bool isValidAuxValue(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void _checkUseOnPermissions(Actor &, ItemStack &, unsigned char const&, BlockPos const&)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BedItem(std::string const&, int);
    void _tryUseOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;
    void _calculateHeadAndFeetPos(Actor &, BlockPos &, BlockPos &)const;
    void _calculateDir(Actor &)const;
};
