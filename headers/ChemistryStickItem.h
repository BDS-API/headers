#pragma once

class ChemistryStickItem : ChemistryItem {

public:
    static long ChemistryStickItem::COLOR_BITS;
    static long ChemistryStickItem::COLOR_MASK;
    static long ChemistryStickItem::ACTIVE_BIT;
    static long ChemistryStickItem::DAMAGE_START_BIT;
    static long ChemistryStickItem::DAMAGE_BITS;
    static long ChemistryStickItem::DAMAGE_MASK;

    virtual ~ChemistryStickItem();
    virtual void setMaxDamage(int);
    virtual void showsDurabilityInCreative(void)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void uniqueAuxValues(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual void fixupOnLoad(ItemStackBase &)const;

    void ChemistryStickItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    bool isActive(int);
    void getColorType(int);
    bool isChemistryStick(ItemInstance const&);
    void _activateItem(ItemStack &, unsigned long)const;
    void _tick(ItemStack &, unsigned long)const;
    void _storeActivationTimestamp(ItemStack &, unsigned long, int)const;
    void _getDamagePercent(ItemStack const&, unsigned long)const;
};
