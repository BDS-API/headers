#pragma once

#include "BaseContainerMenu.h"
#include "../Container.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"


class InventoryMenu : BaseContainerMenu {

public:
    virtual void removeSlot(int, int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getItems();
    virtual void getSlot(int);
    virtual void _getContainer()const;
    ~InventoryMenu();
    InventoryMenu(Player &, Container *);
};
