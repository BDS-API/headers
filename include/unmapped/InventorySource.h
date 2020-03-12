#pragma once



class InventorySource {

public:
    void getType()const;
//  InventorySource(ContainerID); //TODO: incomplete function definition
//  void fromWorldInteraction(InventorySource::InventorySourceFlags); //TODO: incomplete function definition
//  InventorySource(InventorySourceType); //TODO: incomplete function definition
    bool canMixBoth()const;
//  void fromNONIMPLEMENTEDTODO(ContainerID); //TODO: incomplete function definition
    void fromCreativeInventory();
//  void fromUntrackedInteractionUI(ContainerID); //TODO: incomplete function definition
    ~InventorySource();
//  InventorySource(InventorySourceType, InventorySource::InventorySourceFlags); //TODO: incomplete function definition
    void operator==(InventorySource const&)const;
    void getFlags()const;
//  void fromContainerWindowID(ContainerID); //TODO: incomplete function definition
    void fromGlobalInventory();
    void getContainerId()const;
    void fromInvalid();
};
