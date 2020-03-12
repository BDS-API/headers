#pragma once

#include <memory>
#include <string>
#include "PotionItem.h"


class SplashPotionItem : PotionItem {

public:
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual bool isThrowable()const;
    virtual void getPotionType()const;
    ~SplashPotionItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void use(ItemStack &, Player &)const;
    SplashPotionItem(std::string const&, int);
};
