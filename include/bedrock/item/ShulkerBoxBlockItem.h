#pragma once

#include <string>
#include "AuxDataBlockItem.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "ItemStackBase.h"
#include <memory>
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    ~ShulkerBoxBlockItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    std::string buildContainedItemList(std::unique_ptr<CompoundTag> const&)const;
    ShulkerBoxBlockItem(std::string const&, int, Block const*);
};
