#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../network/packet/CraftingEventPacket"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    virtual GrindstoneContainerManagerModel::~GrindstoneContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

    GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&);
    bool isGrindstoneValid(float);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos()const;
    void fireDisenchantedAchievementEvent();
    void fireItemAcquiredEvent(ItemInstance const&, int);
};
