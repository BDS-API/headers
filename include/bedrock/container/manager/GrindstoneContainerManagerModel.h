#pragma once

#include "ContainerManagerModel.h"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    virtual void setData(int, int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void init();
    virtual void broadcastChanges();
    virtual void getSlot(int);
    ~GrindstoneContainerManagerModel();
    virtual void getItems();
    void getBlockPos()const;
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void fireDisenchantedAchievementEvent();
    void sendCraftedPacket(CraftingEventPacket &);
//  GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool isGrindstoneValid(float);
};
