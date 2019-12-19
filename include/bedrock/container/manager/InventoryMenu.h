#pragma once

class InventoryMenu : BaseContainerMenu {

public:
    virtual InventoryMenu::~InventoryMenu();
    virtual void removeSlot(int, int);
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void _getContainer(void)const;

    InventoryMenu(Player &, Container *);
};
