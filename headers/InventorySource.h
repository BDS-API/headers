#pragma once

class InventorySource {

public:

    void fromCreativeInventory(void);
    void InventorySource(InventorySourceType, InventorySource::InventorySourceFlags);
    void getType(void)const;
    void getContainerId(void)const;
    void getFlags(void)const;
    void fromContainerWindowID(ContainerID);
    void fromGlobalInventory(void);
    void fromWorldInteraction(InventorySource::InventorySourceFlags);
    void fromUntrackedInteractionUI(ContainerID);
    void fromNONIMPLEMENTEDTODO(ContainerID);
    void fromInvalid(void);
    void InventorySource(ContainerID);
    void InventorySource(InventorySourceType);
    bool canMixBoth(void)const;
};
