#pragma once

class HorseArmorItem : Item {

public:
    static long HorseArmorItem::mHealthPerTier;

    virtual ~HorseArmorItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getArmorValue(void)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable(void)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getTier(void)const;

    bool hasCustomColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void clearColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    void setColor(ItemStack &, Color const&)const;
    void HorseArmorItem(std::string const&, int, int, HorseArmorItem::HorseArmorTier);
};
