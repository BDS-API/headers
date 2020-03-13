#pragma once

#include "FillingContainer.h"


class EnderChestContainer : FillingContainer {

public:
    static long ITEMS_SIZE;

    ~EnderChestContainer(); // _ZN19EnderChestContainerD2Ev
    virtual void startOpen(Player &); // _ZN19EnderChestContainer9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN19EnderChestContainer8stopOpenER6Player
    EnderChestContainer(); // _ZN19EnderChestContainerC2Ev
    void setActiveChest(ChestBlockActor *); // _ZN19EnderChestContainer14setActiveChestEP15ChestBlockActor
};
