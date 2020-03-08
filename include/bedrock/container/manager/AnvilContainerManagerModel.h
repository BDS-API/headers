#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../network/packet/CraftingEventPacket"


class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long INPUT_SLOT;
    static long MATERIAL_SLOT;
    static long RESULT_SLOT;

    virtual AnvilContainerManagerModel::~AnvilContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

    AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&);
    bool isAnvilValid(float);
    void applyDamageToAnvilBlock();
    void fireItemCraftedEvent(ItemInstance const&);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos()const;
};
