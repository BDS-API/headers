#pragma once

class EquippableComponent {

public:

    void EquippableComponent(void);
    void EquippableComponent(EquippableComponent&&);
    void initFromDefinition(Actor &, EquippableDefinition const&);
    void onItemChanged(Actor &, unsigned long, Item const*)const;
    void getSlots(void)const;
    void getSlot(int)const;
    void getSlotCount(void)const;
    void createDataPacket(Actor &, ContainerID)const;
    void createTag(Actor &)const;
    void setDataFromPacket(UpdateEquipPacket const&);
};
