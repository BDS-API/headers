#pragma once

#include "./InventorySource.h"


class InventorySource {

public:

    void fromCreativeInventory();
    ~InventorySource();
//  InventorySource(InventorySourceType, InventorySource::InventorySourceFlags); //TODO: incomplete function definition
    void getType()const;
    void getContainerId()const;
    void getFlags()const;
//  void fromContainerWindowID(ContainerID); //TODO: incomplete function definition
    void fromGlobalInventory();
//  void fromWorldInteraction(InventorySource::InventorySourceFlags); //TODO: incomplete function definition
//  void fromUntrackedInteractionUI(ContainerID); //TODO: incomplete function definition
//  void fromNONIMPLEMENTEDTODO(ContainerID); //TODO: incomplete function definition
    void fromInvalid();
//  InventorySource(ContainerID); //TODO: incomplete function definition
//  InventorySource(InventorySourceType); //TODO: incomplete function definition
    bool canMixBoth()const;
    void operator==(InventorySource const&)const;
};
