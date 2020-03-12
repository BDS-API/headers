#pragma once

#include <string>
#include "ChemistryStickItem.h"
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"


class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;
    ~GlowStickItem();
    virtual bool isValidAuxValue(int)const;
    virtual bool isEmissive(int)const;
    GlowStickItem(std::string const&, int);
};
