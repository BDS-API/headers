#pragma once

class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual ~ShulkerBoxBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void buildEffectDescriptionName[abi:cxx11](ItemStackBase const&)const;

    void ShulkerBoxBlockItem(std::string const&, int, Block const*);
};
