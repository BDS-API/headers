#pragma once

#include "../bedrock/item/ItemStack.h"
#include "InventorySource.h"


class InventoryAction {

public:
    void operator==(InventoryAction const&)const;
    InventoryAction(InventoryAction const&);
    ~InventoryAction();
    void getToItem()const;
    void reverse()const;
    void getSource()const;
    void getFromItem()const;
    InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&);
    void getSlot()const;
};
