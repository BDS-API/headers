#pragma once

#include "./ItemStackBase.h"
#include <memory>
#include "./ItemInstance.h"
#include "./Item.h"
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include <string>


class CoalItem : Item {

public:
    virtual ~CoalItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    CoalItem(std::string const&, int);
    bool isCharcoal(ItemInstance const&);
};
