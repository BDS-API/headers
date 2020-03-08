#pragma once

#include "../Container"
#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class InventoryMenu : BaseContainerMenu {

public:
    InventoryMenu::~InventoryMenu()
    virtual void removeSlot(int, int);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void _getContainer()const;

    InventoryMenu(Player &, Container *);
};
