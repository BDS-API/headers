#pragma once



class InventorySource {

public:
    void fromCreativeInventory(); // _ZN15InventorySource21fromCreativeInventoryEv
    ~InventorySource(); // _ZN15InventorySourceD2Ev
//  InventorySource(InventorySourceType, InventorySource::InventorySourceFlags); //TODO: incomplete function definition // _ZN15InventorySourceC2E19InventorySourceTypeNS_20InventorySourceFlagsE
    void getType()const; // _ZNK15InventorySource7getTypeEv
    void getContainerId()const; // _ZNK15InventorySource14getContainerIdEv
    void getFlags()const; // _ZNK15InventorySource8getFlagsEv
//  void fromContainerWindowID(ContainerID); //TODO: incomplete function definition // _ZN15InventorySource21fromContainerWindowIDE11ContainerID
    void fromGlobalInventory(); // _ZN15InventorySource19fromGlobalInventoryEv
//  void fromWorldInteraction(InventorySource::InventorySourceFlags); //TODO: incomplete function definition // _ZN15InventorySource20fromWorldInteractionENS_20InventorySourceFlagsE
//  void fromUntrackedInteractionUI(ContainerID); //TODO: incomplete function definition // _ZN15InventorySource26fromUntrackedInteractionUIE11ContainerID
//  void fromNONIMPLEMENTEDTODO(ContainerID); //TODO: incomplete function definition // _ZN15InventorySource22fromNONIMPLEMENTEDTODOE11ContainerID
    void fromInvalid(); // _ZN15InventorySource11fromInvalidEv
//  InventorySource(ContainerID); //TODO: incomplete function definition // _ZN15InventorySourceC2E11ContainerID
//  InventorySource(InventorySourceType); //TODO: incomplete function definition // _ZN15InventorySourceC2E19InventorySourceType
    bool canMixBoth()const; // _ZNK15InventorySource10canMixBothEv
    void operator==(InventorySource const&)const; // _ZNK15InventorySourceeqERKS_
};
