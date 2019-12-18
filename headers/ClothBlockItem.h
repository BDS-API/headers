#pragma once

class ClothBlockItem : BlockItem {

public:
    virtual ~ClothBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    void ClothBlockItem(std::string const&, int, Block const*);
};
