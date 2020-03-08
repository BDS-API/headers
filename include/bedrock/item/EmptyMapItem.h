#pragma once

#include "../actor/Player"
#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class EmptyMapItem : ComplexItem {

public:
    EmptyMapItem::~EmptyMapItem()
    virtual bool requiresInteract()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getInteractText(Player const&)const;

    EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemStack &);
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
};
