#pragma once

class CrossbowItem : RangedWeaponItem {

public:
    static long CrossbowItem::DEFAULT_USE_DURATION;

    virtual ~CrossbowItem();
    virtual void getMaxUseDuration(ItemStack const*)const;
    virtual void getEnchantSlot(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual bool canBeCharged(void)const;
    virtual void playSoundIncrementally(ItemStack const&, Mob &)const;

    void CrossbowItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _getMaxUseDuration(ItemStack const&)const;
    void _shootArrow(ItemInstance const&, ItemInstance const&, Player &)const;
    void _shootFirework(ItemInstance const&, Player &)const;
    void _getShootDir(Player const&, float)const;
};
