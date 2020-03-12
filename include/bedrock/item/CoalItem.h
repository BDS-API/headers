#pragma once

#include <memory>
#include "Item.h"
#include <string>


class CoalItem : Item {

public:
    virtual void setIcon(std::string const&, int);
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~CoalItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    bool isCharcoal(ItemInstance const&);
    CoalItem(std::string const&, int);
};
