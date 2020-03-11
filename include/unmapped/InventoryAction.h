#pragma once

#include "../bedrock/item/ItemStack.h"
#include "./InventorySource.h"
#include "./InventoryAction.h"


class InventoryAction {

public:

    InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&);
    ~InventoryAction();
    void getSource()const;
    void getSlot()const;
    void getFromItem()const;
    void getToItem()const;
    InventoryAction(InventoryAction const&);
    void reverse()const;
    void operator==(InventoryAction const&)const;
};
