#pragma once



class InventorySource {

public:

    void fromCreativeInventory();
    InventorySource(InventorySourceType, InventorySource::InventorySourceFlags);
    void getType()const;
    void getContainerId()const;
    void getFlags()const;
    void fromContainerWindowID(ContainerID);
    void fromGlobalInventory();
    void fromWorldInteraction(InventorySource::InventorySourceFlags);
    void fromUntrackedInteractionUI(ContainerID);
    void fromNONIMPLEMENTEDTODO(ContainerID);
    void fromInvalid();
    InventorySource(ContainerID);
    InventorySource(InventorySourceType);
    bool canMixBoth()const;
};
