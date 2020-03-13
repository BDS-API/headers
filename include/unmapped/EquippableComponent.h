#pragma once



class EquippableComponent {

public:
    ~EquippableComponent(); // _ZN19EquippableComponentD2Ev
    EquippableComponent(); // _ZN19EquippableComponentC2Ev
    EquippableComponent(EquippableComponent &&); // _ZN19EquippableComponentC2EOS_
    void initFromDefinition(Actor &, EquippableDefinition const&); // _ZN19EquippableComponent18initFromDefinitionER5ActorRK20EquippableDefinition
    void onItemChanged(Actor &, unsigned long, Item const*)const; // _ZNK19EquippableComponent13onItemChangedER5ActormPK4Item
    void getSlots()const; // _ZNK19EquippableComponent8getSlotsEv
    void getSlot(int)const; // _ZNK19EquippableComponent7getSlotEi
    void getSlotCount()const; // _ZNK19EquippableComponent12getSlotCountEv
//  void createDataPacket(Actor &, ContainerID)const; //TODO: incomplete function definition // _ZNK19EquippableComponent16createDataPacketER5Actor11ContainerID
    void createTag(Actor &)const; // _ZNK19EquippableComponent9createTagER5Actor
    void setDataFromPacket(UpdateEquipPacket const&); // _ZN19EquippableComponent17setDataFromPacketERK17UpdateEquipPacket
};
