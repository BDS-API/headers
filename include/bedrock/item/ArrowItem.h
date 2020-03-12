#pragma once

#include <memory>
#include "Item.h"
#include <string>


class ArrowItem : Item {

public:
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    ~ArrowItem();
    virtual void setIcon(std::string const&, int);
    virtual bool isValidAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    void applyEffect(Arrow *, ItemInstance const&)const;
    ArrowItem(std::string const&, int);
    void getMobEffects(int)const;
};
