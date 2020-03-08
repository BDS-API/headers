#pragma once

#include "../../unmapped/ItemDescriptor"


class SparklerItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual SparklerItem::~SparklerItem();
    virtual bool isHandEquipped(void)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    SparklerItem(std::string const&, int);
    void _getColorFromData(int);
    void getColor(int);
};
