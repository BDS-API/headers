#pragma once

class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long GrindstoneContainerManagerModel::INPUT_SLOT;
    static long GrindstoneContainerManagerModel::ADDITIONAL_SLOT;
    static long GrindstoneContainerManagerModel::RESULT_SLOT;

    virtual ~GrindstoneContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    void GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&);
    bool isGrindstoneValid(float);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos(void)const;
    void fireDisenchantedAchievementEvent(void);
    void fireItemAcquiredEvent(ItemInstance const&, int);
};
