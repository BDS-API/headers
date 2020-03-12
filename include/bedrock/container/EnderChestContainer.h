#pragma once

#include "FillingContainer.h"


class EnderChestContainer : FillingContainer {

public:
    static long ITEMS_SIZE;

    virtual void startOpen(Player &);
    ~EnderChestContainer();
    virtual void stopOpen(Player &);
    EnderChestContainer();
    void setActiveChest(ChestBlockActor *);
};
