#pragma once

#include "../bedrock/network/packet/UpdateEquipPacket.h"
#include "./EquippableComponent.h"
#include "../bedrock/definition/EquippableDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/item/Item.h"


class EquippableComponent {

public:

    ~EquippableComponent();
    EquippableComponent();
    EquippableComponent(EquippableComponent &&);
    void initFromDefinition(Actor &, EquippableDefinition const&);
    void onItemChanged(Actor &, unsigned long, Item const*)const;
    void getSlots()const;
    void getSlot(int)const;
    void getSlotCount()const;
//  void createDataPacket(Actor &, ContainerID)const; //TODO: incomplete function definition
    void createTag(Actor &)const;
    void setDataFromPacket(UpdateEquipPacket const&);
};
