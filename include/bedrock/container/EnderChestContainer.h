#pragma once

#include "./FillingContainer.h"
#include "../actor/Player.h"
#include "../block/actor/ChestBlockActor.h"


class EnderChestContainer : FillingContainer {

public:
    static long ITEMS_SIZE;

    virtual ~EnderChestContainer();
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    EnderChestContainer();
    void setActiveChest(ChestBlockActor *);
};
