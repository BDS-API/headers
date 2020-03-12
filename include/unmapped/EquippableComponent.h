#pragma once



class EquippableComponent {

public:
    void setDataFromPacket(UpdateEquipPacket const&);
    EquippableComponent(EquippableComponent &&);
//  void createDataPacket(Actor &, ContainerID)const; //TODO: incomplete function definition
    void getSlots()const;
    void onItemChanged(Actor &, unsigned long, Item const*)const;
    void createTag(Actor &)const;
    EquippableComponent();
    ~EquippableComponent();
    void getSlotCount()const;
    void initFromDefinition(Actor &, EquippableDefinition const&);
    void getSlot(int)const;
};
