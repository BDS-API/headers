#pragma once

#include "ItemStack.h"
#include <string>
#include "../actor/Actor.h"
#include "ChemistryStickItem.h"
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class SparklerItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    ~SparklerItem();
    virtual bool isHandEquipped()const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool isEmissive(int)const;
    virtual void setIcon(std::string const&, int);
    void _getColorFromData(int);
    void getColor(int);
    SparklerItem(std::string const&, int);
};
