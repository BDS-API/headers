#pragma once

#include "ContainerManagerModel.h"


class GrindstoneContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long ADDITIONAL_SLOT;
    static long RESULT_SLOT;

    ~GrindstoneContainerManagerModel(); // _ZN31GrindstoneContainerManagerModelD2Ev
    virtual void getItems(); // _ZN31GrindstoneContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN31GrindstoneContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN31GrindstoneContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN31GrindstoneContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN31GrindstoneContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN31GrindstoneContainerManagerModel4initEv
//  GrindstoneContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN31GrindstoneContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    bool isGrindstoneValid(float); // _ZN31GrindstoneContainerManagerModel17isGrindstoneValidEf
    void sendCraftedPacket(CraftingEventPacket &); // _ZN31GrindstoneContainerManagerModel17sendCraftedPacketER19CraftingEventPacket
    void getBlockPos()const; // _ZNK31GrindstoneContainerManagerModel11getBlockPosEv
    void fireDisenchantedAchievementEvent(); // _ZN31GrindstoneContainerManagerModel32fireDisenchantedAchievementEventEv
    void fireItemAcquiredEvent(ItemInstance const&, int); // _ZN31GrindstoneContainerManagerModel21fireItemAcquiredEventERK12ItemInstancei
};
