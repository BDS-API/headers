#pragma once

class EnderChestContainer : FillingContainer {

public:
    static long EnderChestContainer::ITEMS_SIZE;

    virtual ~EnderChestContainer();
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void EnderChestContainer(void);
    void setActiveChest(ChestBlockActor *);
};
