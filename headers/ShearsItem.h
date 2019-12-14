#pragma once

class ShearsItem : Item {

public:
    virtual ~ShearsItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void ShearsItem(std::string const&, int);
};
