#pragma once

#include "ContainerManagerModel.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../network/packet/CraftingEventPacket.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    virtual void broadcastChanges();
    virtual void init();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    ~GrindstoneContainerManagerModel();
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual void getItems();
    bool isGrindstoneValid(float);
    void sendCraftedPacket(CraftingEventPacket &);
//  GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void getBlockPos()const;
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void fireDisenchantedAchievementEvent();
};
