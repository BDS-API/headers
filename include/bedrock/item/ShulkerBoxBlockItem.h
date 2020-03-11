#pragma once

#include <string>
#include "./ItemStackBase.h"
#include "../../unmapped/Block.h"
#include <memory>
#include "./AuxDataBlockItem.h"
#include "../level/Level.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ItemDescriptor.h"


class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual ~ShulkerBoxBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;

    ShulkerBoxBlockItem(std::string const&, int, Block const*);
    std::string buildContainedItemList(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
};
