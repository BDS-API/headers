#pragma once

#include "ContainerManagerModel.h"


class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long MATERIAL_SLOT;
    static long RESULT_SLOT;

    ~AnvilContainerManagerModel(); // _ZN26AnvilContainerManagerModelD2Ev
    virtual void getItems(); // _ZN26AnvilContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN26AnvilContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN26AnvilContainerManagerModel7getSlotEi
    virtual void setData(int, int); // _ZN26AnvilContainerManagerModel7setDataEii
    virtual void broadcastChanges(); // _ZN26AnvilContainerManagerModel16broadcastChangesEv
    virtual void init(); // _ZN26AnvilContainerManagerModel4initEv
//  AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition // _ZN26AnvilContainerManagerModelC2E11ContainerIDR6PlayerRK8BlockPos
    bool isAnvilValid(float); // _ZN26AnvilContainerManagerModel12isAnvilValidEf
    void applyDamageToAnvilBlock(); // _ZN26AnvilContainerManagerModel23applyDamageToAnvilBlockEv
    void fireItemCraftedEvent(ItemInstance const&); // _ZN26AnvilContainerManagerModel20fireItemCraftedEventERK12ItemInstance
    void fireItemAcquiredEvent(ItemInstance const&, int); // _ZN26AnvilContainerManagerModel21fireItemAcquiredEventERK12ItemInstancei
    void sendCraftedPacket(CraftingEventPacket &); // _ZN26AnvilContainerManagerModel17sendCraftedPacketER19CraftingEventPacket
    void getBlockPos()const; // _ZNK26AnvilContainerManagerModel11getBlockPosEv
};
