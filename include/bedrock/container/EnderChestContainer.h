#pragma once

#include "FillingContainer.h"
#include "../block/actor/ChestBlockActor.h"
#include "../actor/Player.h"


class EnderChestContainer : FillingContainer {

public:
    static long ITEMS_SIZE;

    virtual void stopOpen(Player &);
    ~EnderChestContainer();
    virtual void startOpen(Player &);
    void setActiveChest(ChestBlockActor *);
    EnderChestContainer();
};
