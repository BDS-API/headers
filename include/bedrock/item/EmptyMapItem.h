#pragma once

class EmptyMapItem : ComplexItem {

public:
    virtual EmptyMapItem::~EmptyMapItem();
    virtual void requiresInteract(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void getInteractText[abi:cxx11](Player const&)const;

    EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemStack &);
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
};
