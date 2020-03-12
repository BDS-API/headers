#pragma once

#include "ContainerManagerModel.h"


class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long MATERIAL_SLOT;
    static long RESULT_SLOT;

    ~AnvilContainerManagerModel();
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual void getItems();
    virtual void getSlot(int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
//  AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool isAnvilValid(float);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void applyDamageToAnvilBlock();
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos()const;
    void fireItemCraftedEvent(ItemInstance const&);
};
