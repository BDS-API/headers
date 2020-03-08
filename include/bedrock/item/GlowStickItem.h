#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual GlowStickItem::~GlowStickItem()
    virtual bool isValidAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;

    GlowStickItem(std::string const&, int);
};
