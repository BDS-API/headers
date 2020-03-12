#pragma once

#include <memory>
#include <string>
#include "AuxDataBlockItem.h"


class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    ~ShulkerBoxBlockItem();
    std::string buildContainedItemList(std::unique_ptr<CompoundTag> const&)const;
    ShulkerBoxBlockItem(std::string const&, int, Block const*);
};
