#pragma once

class TridentItem : Item {

public:
    static long TridentItem::THROW_THRESHOLD_TIME;
    static long TridentItem::CHARGE_THRESHOLD_TIME;

    virtual ~TridentItem();
    virtual void getMaxDamage(void)const;
    virtual void getAttackDamage(void)const;
    virtual bool canDestroyInCreative(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;

    void TridentItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _setupProjectile(Actor *, ItemStack, bool)const;
};
