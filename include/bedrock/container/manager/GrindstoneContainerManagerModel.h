#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../network/packet/CraftingEventPacket"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    virtual GrindstoneContainerManagerModel::~GrindstoneContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&);
    bool isGrindstoneValid(float);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos(void)const;
    void fireDisenchantedAchievementEvent(void);
    void fireItemAcquiredEvent(ItemInstance const&, int);
};
