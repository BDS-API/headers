#pragma once

class LeafBlockItem : BlockItem {

public:
    virtual ~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    void LeafBlockItem(std::string const&, int, Block const*);
};
