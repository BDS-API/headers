#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../network/packet/CraftingEventPacket.h"
#include "../../actor/Player.h"


class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long MATERIAL_SLOT;
    static long RESULT_SLOT;

    virtual ~AnvilContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

//  AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    bool isAnvilValid(float);
    void applyDamageToAnvilBlock();
    void fireItemCraftedEvent(ItemInstance const&);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos()const;
};
