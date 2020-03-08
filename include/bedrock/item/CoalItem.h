#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class CoalItem : Item {

public:
    virtual CoalItem::~CoalItem()
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    CoalItem(std::string const&, int);
    bool isCharcoal(ItemInstance const&);
};
