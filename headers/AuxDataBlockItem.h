#pragma once

class AuxDataBlockItem : BlockItem {

public:
    virtual ~AuxDataBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    void AuxDataBlockItem(std::string const&, int, Block const*);
};
