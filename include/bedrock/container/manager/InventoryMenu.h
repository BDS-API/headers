#pragma once

#include "BaseContainerMenu.h"


class InventoryMenu : BaseContainerMenu {

public:
    ~InventoryMenu(); // _ZN13InventoryMenuD2Ev
    virtual void removeSlot(int, int); // _ZN13InventoryMenu10removeSlotEii
    virtual void getItems(); // _ZN13InventoryMenu8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN13InventoryMenu7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN13InventoryMenu7getSlotEi
    virtual void _getContainer()const; // _ZNK13InventoryMenu13_getContainerEv
    InventoryMenu(Player &, Container *); // _ZN13InventoryMenuC2ER6PlayerP9Container
};
