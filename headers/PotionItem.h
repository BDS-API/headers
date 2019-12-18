#pragma once

class PotionItem : Item {

public:
    virtual ~PotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void uniqueAuxValues(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName[abi:cxx11](ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType(void)const;

    void PotionItem(std::string const&, int);
    void applyEffect(ThrownPotion *, ItemStack const&)const;
    void getEffectId(ItemDescriptor const&)const;
};
