#pragma once

class LeafBlockItem : BlockItem {

public:
    virtual LeafBlockItem::~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    LeafBlockItem(std::string const&, int, Block const*);
};
