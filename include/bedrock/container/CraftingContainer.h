#pragma once

#include "Container.h"


class CraftingContainer : Container {

public:
    ~CraftingContainer(); // _ZN17CraftingContainerD2Ev
    virtual void getItem(int)const; // _ZNK17CraftingContainer7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN17CraftingContainer7setItemEiRK9ItemStack
    virtual void getContainerSize()const; // _ZNK17CraftingContainer16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK17CraftingContainer15getMaxStackSizeEv
    virtual void startOpen(Player &); // _ZN17CraftingContainer9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN17CraftingContainer8stopOpenER6Player
    virtual void setContainerChanged(int); // _ZN17CraftingContainer19setContainerChangedEi
    CraftingContainer(int, int); // _ZN17CraftingContainerC2Eii
    void getItem(int, int)const; // _ZNK17CraftingContainer7getItemEii
};
