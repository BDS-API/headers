#pragma once

#include "unmapped/ItemDescriptor"
#include "../../unmapped/Block"
#include "../nbt/CompoundTag"
#include "../level/Level"


class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    ShulkerBoxBlockItem::~ShulkerBoxBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName(ItemStackBase const&)const;

    ShulkerBoxBlockItem(std::string const&, int, Block const*);
};
