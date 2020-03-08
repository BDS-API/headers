#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../Container"


class InventoryMenu : BaseContainerMenu {

public:
    virtual InventoryMenu::~InventoryMenu()
    virtual void removeSlot(int, int);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void _getContainer()const;

    InventoryMenu(Player &, Container *);
};
