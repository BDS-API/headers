#pragma once

#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../../unmapped/Block"
#include "unmapped/ItemDescriptor"


class LeafBlockItem : BlockItem {

public:
    virtual LeafBlockItem::~LeafBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;

    LeafBlockItem(std::string const&, int, Block const*);
};
