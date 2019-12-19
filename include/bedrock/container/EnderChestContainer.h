#pragma once

class EnderChestContainer : FillingContainer {

public:
    static long ITEMS_SIZE;

    virtual EnderChestContainer::~EnderChestContainer();
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    EnderChestContainer(void);
    void setActiveChest(ChestBlockActor *);
};
