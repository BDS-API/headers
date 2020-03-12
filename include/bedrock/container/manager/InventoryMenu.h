#pragma once

#include "BaseContainerMenu.h"


class InventoryMenu : BaseContainerMenu {

public:
    virtual void removeSlot(int, int);
    ~InventoryMenu();
    virtual void getItems();
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void _getContainer()const;
    InventoryMenu(Player &, Container *);
};
