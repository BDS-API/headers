#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/definition/EquippableDefinition"
#include "../bedrock/item/Item"
#include "../bedrock/network/packet/UpdateEquipPacket"


class EquippableComponent {

public:

    EquippableComponent(void);
    EquippableComponent(EquippableComponent&&);
    void initFromDefinition(Actor &, EquippableDefinition const&);
    void onItemChanged(Actor &, unsigned long, Item const*)const;
    void getSlots()const;
    void getSlot(int)const;
    void getSlotCount()const;
    void createDataPacket(Actor &, ContainerID)const;
    void createTag(Actor &)const;
    void setDataFromPacket(UpdateEquipPacket const&);
};
