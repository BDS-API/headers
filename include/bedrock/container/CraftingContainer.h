#pragma once

#include "../item/ItemStack.h"
#include "../actor/Player.h"
#include "./Container.h"


class CraftingContainer : Container {

public:
    virtual ~CraftingContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);
    virtual void setContainerChanged(int);

    CraftingContainer(int, int);
    void getItem(int, int)const;
};
