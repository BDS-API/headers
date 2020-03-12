#pragma once



class InventorySource {

public:
//  void fromNONIMPLEMENTEDTODO(ContainerID); //TODO: incomplete function definition
    void fromCreativeInventory();
//  InventorySource(InventorySourceType, InventorySource::InventorySourceFlags); //TODO: incomplete function definition
    void getContainerId()const;
    void getType()const;
    void getFlags()const;
//  void fromUntrackedInteractionUI(ContainerID); //TODO: incomplete function definition
//  InventorySource(ContainerID); //TODO: incomplete function definition
//  InventorySource(InventorySourceType); //TODO: incomplete function definition
    bool canMixBoth()const;
//  void fromContainerWindowID(ContainerID); //TODO: incomplete function definition
    void fromInvalid();
    void operator==(InventorySource const&)const;
//  void fromWorldInteraction(InventorySource::InventorySourceFlags); //TODO: incomplete function definition
    void fromGlobalInventory();
    ~InventorySource();
};
