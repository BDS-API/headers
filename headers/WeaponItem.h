#pragma once

class WeaponItem : Item {

public:
    virtual ~WeaponItem();
    virtual bool canDestroySpecial(Block const&)const;
    virtual void getAttackDamage(void)const;
    virtual bool isHandEquipped(void)const;
    virtual bool canDestroyInCreative(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getDestroySpeed(ItemInstance const&, Block const&)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    void WeaponItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Item::Tier const&);
};
