#pragma once

#include "../bedrock/item/ItemStack"


class InventoryAction {

public:

    InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&);
    void getSource()const;
    void getSlot()const;
    void getFromItem()const;
    void getToItem()const;
    InventoryAction(InventoryAction const&);
    void reverse()const;
};
