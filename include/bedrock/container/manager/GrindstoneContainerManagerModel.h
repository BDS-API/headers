#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../network/packet/CraftingEventPacket.h"
#include "../../actor/Player.h"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    virtual ~GrindstoneContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

//  GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool isGrindstoneValid(float);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos()const;
    void fireDisenchantedAchievementEvent();
    void fireItemAcquiredEvent(ItemInstance const&, int);
};
