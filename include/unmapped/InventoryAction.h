#pragma once

#include "InventorySource.h"


class InventoryAction {

public:
    InventoryAction(InventorySource, unsigned int, ItemStack const&, ItemStack const&); // _ZN15InventoryActionC2E15InventorySourcejRK9ItemStackS3_
    ~InventoryAction(); // _ZN15InventoryActionD2Ev
    void getSource()const; // _ZNK15InventoryAction9getSourceEv
    void getSlot()const; // _ZNK15InventoryAction7getSlotEv
    void getFromItem()const; // _ZNK15InventoryAction11getFromItemEv
    void getToItem()const; // _ZNK15InventoryAction9getToItemEv
    InventoryAction(InventoryAction const&); // _ZN15InventoryActionC2ERKS_
    void reverse()const; // _ZNK15InventoryAction7reverseEv
    void operator==(InventoryAction const&)const; // _ZNK15InventoryActioneqERKS_
};
