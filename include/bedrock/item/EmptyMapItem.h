#pragma once

#include <string>
#include <memory>
#include "./ItemInstance.h"
#include "./ComplexItem.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class EmptyMapItem : ComplexItem {

public:
    virtual ~EmptyMapItem();
    virtual bool requiresInteract()const;
    virtual void use(ItemStack &, Player &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual std::string getInteractText(Player const&)const;

    EmptyMapItem(std::string const&, short);
    void addPlayerMarker(ItemStack &);
    void addPlayerMarker(ItemInstance &);
    bool isLocatorMap(ItemStack const&);
};
