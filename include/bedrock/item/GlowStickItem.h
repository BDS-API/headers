#pragma once

#include <memory>
#include <string>
#include "ChemistryStickItem.h"


class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~GlowStickItem();
    virtual bool isEmissive(int)const;
    virtual void getIconYOffset()const;
    virtual bool isValidAuxValue(int)const;
    GlowStickItem(std::string const&, int);
};
