#pragma once

#include "../nbt/CompoundTag"
#include "../../unmapped/Block"
#include "unmapped/ItemDescriptor"


class AuxDataBlockItem : BlockItem {

public:
    virtual AuxDataBlockItem::~AuxDataBlockItem()
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    AuxDataBlockItem(std::string const&, int, Block const*);
};
