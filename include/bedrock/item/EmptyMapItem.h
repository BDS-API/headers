#pragma once

#include <memory>
#include <string>
#include "ComplexItem.h"


class EmptyMapItem : ComplexItem {

public:
    virtual std::string getInteractText(Player const&)const;
    ~EmptyMapItem();
    virtual void use(ItemStack &, Player &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual bool requiresInteract()const;
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
    EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemStack &);
};
