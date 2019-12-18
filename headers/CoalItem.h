#pragma once

class CoalItem : Item {

public:
    virtual ~CoalItem();
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void CoalItem(std::string const&, int);
    bool isCharcoal(ItemInstance const&);
};
