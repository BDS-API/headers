#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class SaplingBlockItem : BlockItem {

public:
    virtual SaplingBlockItem::~SaplingBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    SaplingBlockItem(std::string const&, int);
};
