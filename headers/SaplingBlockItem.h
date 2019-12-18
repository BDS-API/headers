#pragma once

class SaplingBlockItem : BlockItem {

public:
    virtual ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    void SaplingBlockItem(std::string const&, int);
};
