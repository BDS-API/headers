#pragma once

class SplashPotionItem : PotionItem {

public:
    virtual SplashPotionItem::~SplashPotionItem();
    virtual bool isThrowable(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType(void)const;

    SplashPotionItem(std::string const&, int);
};
