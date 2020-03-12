#pragma once

#include <memory>
#include <string>
#include "PotionItem.h"


class LingeringPotionItem : PotionItem {

public:
    virtual bool isThrowable()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getPotionType()const;
    ~LingeringPotionItem();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void setIcon(std::string const&, int);
    LingeringPotionItem(std::string const&, int);
};
