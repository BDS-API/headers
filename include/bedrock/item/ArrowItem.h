#pragma once

#include "../level/Level"
#include "../container/Container"
#include "unmapped/ItemDescriptor"
#include "../actor/Arrow"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"


class ArrowItem : Item {

public:
    ArrowItem::~ArrowItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    ArrowItem(std::string const&, int);
    void applyEffect(Arrow *, ItemInstance const&)const;
    void getMobEffects(int)const;
};
