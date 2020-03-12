#pragma once

#include <memory>
#include <string>
#include "ChemistryStickItem.h"


class SparklerItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~SparklerItem();
    virtual bool isHandEquipped()const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual bool isEmissive(int)const;
    virtual void setIcon(std::string const&, int);
    void _getColorFromData(int);
    void getColor(int);
    SparklerItem(std::string const&, int);
};
