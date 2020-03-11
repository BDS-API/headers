#pragma once

#include "./ItemStackBase.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"
#include "./ChemistryStickItem.h"
#include "../nbt/CompoundTag.h"
#include <string>


class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual ~GlowStickItem();
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset()const;

    GlowStickItem(std::string const&, int);
};
