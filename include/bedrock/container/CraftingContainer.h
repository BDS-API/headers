#pragma once

#include "Container.h"


class CraftingContainer : Container {

public:
    virtual void stopOpen(Player &);
    ~CraftingContainer();
    virtual void setItem(int, ItemStack const&);
    virtual void startOpen(Player &);
    virtual void getContainerSize()const;
    virtual void getItem(int)const;
    virtual void setContainerChanged(int);
    virtual void getMaxStackSize()const;
    CraftingContainer(int, int);
    void getItem(int, int)const;
};
