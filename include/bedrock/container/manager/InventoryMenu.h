#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "../Container.h"
#include "./BaseContainerMenu.h"
#include "../../actor/Player.h"


class InventoryMenu : BaseContainerMenu {

public:
    virtual ~InventoryMenu();
    virtual void removeSlot(int, int);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void _getContainer()const;

    InventoryMenu(Player &, Container *);
};
