#pragma once

#include "../item/ItemStack.h"
#include "../actor/Player.h"
#include "Container.h"


class CraftingContainer : Container {

public:
    virtual void setContainerChanged(int);
    virtual void getMaxStackSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void startOpen(Player &);
    virtual void getItem(int)const;
    virtual void getContainerSize()const;
    virtual void stopOpen(Player &);
    ~CraftingContainer();
    void getItem(int, int)const;
    CraftingContainer(int, int);
};
