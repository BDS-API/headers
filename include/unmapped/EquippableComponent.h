#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/definition/EquippableDefinition.h"
#include "../bedrock/network/packet/UpdateEquipPacket.h"


class EquippableComponent {

public:
    void createTag(Actor &)const;
    void getSlots()const;
//  void createDataPacket(Actor &, ContainerID)const; //TODO: incomplete function definition
    void setDataFromPacket(UpdateEquipPacket const&);
    void onItemChanged(Actor &, unsigned long, Item const*)const;
    EquippableComponent();
    void getSlot(int)const;
    EquippableComponent(EquippableComponent &&);
    void initFromDefinition(Actor &, EquippableDefinition const&);
    ~EquippableComponent();
    void getSlotCount()const;
};
