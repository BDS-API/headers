#pragma once

class ArmorItem : Item {

public:
    static long ArmorItem::mHealthPerSlot;
    static long ArmorItem::LEATHER;
    static long ArmorItem::CHAIN;
    static long ArmorItem::IRON;
    static long ArmorItem::GOLD;
    static long ArmorItem::DIAMOND;
    static long ArmorItem::ELYTRA;
    static long ArmorItem::TURTLE;

    virtual ~ArmorItem();
    virtual bool isArmor(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;
    virtual bool isValidRepairItem(ItemInstance const&, ItemInstance const&)const;
    virtual void getEnchantSlot(void)const;
    virtual void getEnchantValue(void)const;
    virtual void getArmorValue(void)const;
    virtual void getDamageChance(int)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void hurtEnemy(ItemStack &, Mob *, Mob *)const;
    virtual void mineBlock(ItemStack &, Block const&, int, int, int, Actor *)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void getTierItem(void)const;
    bool hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void clearColor(ItemStack &)const;
    void setColor(ItemStack &, Color const&)const;
    void ArmorItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, ArmorItem::ArmorMaterial const&, int, ArmorSlot);
    bool isElytra(void)const;
    void getArmorForSlot(ArmorSlot, int);
    void dispenseArmor(BlockSource &, Container &, int, Vec3 const&, unsigned char, ArmorSlot);
    void getSlotForItem(ItemStack const&);
    bool isElytraBroken(int);
    void playEquipSound(BlockSource &, ArmorSlot, Player &)const;
    bool isElytra(ItemDescriptor const&);
    bool isFlyEnabled(ItemInstance const&);
    bool isDamageable(ItemDescriptor const&);
};
