#pragma once

#include "ContainerManagerModel.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../network/packet/CraftingEventPacket.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long MATERIAL_SLOT;
    static long RESULT_SLOT;

    virtual void broadcastChanges();
    virtual void getSlot(int);
    ~AnvilContainerManagerModel();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void setData(int, int);
    virtual void getItems();
    virtual void init();
    void applyDamageToAnvilBlock();
    void sendCraftedPacket(CraftingEventPacket &);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    bool isAnvilValid(float);
    void fireItemCraftedEvent(ItemInstance const&);
    void getBlockPos()const;
//  AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
};
