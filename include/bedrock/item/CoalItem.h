#pragma once

#include <string>
#include "ItemInstance.h"
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "unmapped/ItemDescriptor.h"


class CoalItem : Item {

public:
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~CoalItem();
    virtual void setIcon(std::string const&, int);
    bool isCharcoal(ItemInstance const&);
    CoalItem(std::string const&, int);
};
