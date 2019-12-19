#pragma once

class CraftingContainer : Container {

public:
    virtual CraftingContainer::~CraftingContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void setContainerChanged(int);

    CraftingContainer(int, int);
    void getItem(int, int)const;
};
