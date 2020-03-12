#pragma once

#include "ComplexItem.h"
#include "ItemStack.h"
#include <string>
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include <memory>
#include "ItemInstance.h"
#include "unmapped/ItemDescriptor.h"


class EmptyMapItem : ComplexItem {

public:
    ~EmptyMapItem();
    virtual bool requiresInteract()const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual std::string getInteractText(Player const&)const;
    virtual void use(ItemStack &, Player &)const;
    bool isLocatorMap(ItemStack const&);
    void addPlayerMarker(ItemStack &);
    EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemInstance &);
};
