#pragma once

#include "../../unmapped/ItemDescriptor"


class ClothBlockItem : BlockItem {

public:
    virtual ClothBlockItem::~ClothBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    ClothBlockItem(std::string const&, int, Block const*);
};
