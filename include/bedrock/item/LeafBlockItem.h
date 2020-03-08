#pragma once

#include "../../unmapped/ItemDescriptor"


class LeafBlockItem : BlockItem {

public:
    virtual LeafBlockItem::~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;

    LeafBlockItem(std::string const&, int, Block const*);
};
