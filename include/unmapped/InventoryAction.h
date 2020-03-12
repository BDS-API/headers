#pragma once

#include "InventorySource.h"


class InventoryAction {

public:
    void getSource()const;
    void getFromItem()const;
    InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&);
    void getSlot()const;
    void operator==(InventoryAction const&)const;
    InventoryAction(InventoryAction const&);
    void reverse()const;
    ~InventoryAction();
    void getToItem()const;
};
