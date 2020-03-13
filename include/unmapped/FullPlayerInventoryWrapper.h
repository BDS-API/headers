#pragma once



class FullPlayerInventoryWrapper {

public:
    FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *); // _ZN26FullPlayerInventoryWrapperC2ER20PlayerInventoryProxyR15SimpleContainerS3_P27InventoryTransactionManagerP6Player
    void clearAllItems(); // _ZN26FullPlayerInventoryWrapper13clearAllItemsEv
    void _removeCursorItem(); // _ZN26FullPlayerInventoryWrapper17_removeCursorItemEv
//  void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int); //TODO: incomplete function definition // _ZN26FullPlayerInventoryWrapper25_clearSimpleContainerItemER15SimpleContainer11ContainerIDi
    void getItemCount(ItemDescriptor const&); // _ZN26FullPlayerInventoryWrapper12getItemCountERK14ItemDescriptor
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&); // _ZN26FullPlayerInventoryWrapper28_getSimpleContainerItemCountER15SimpleContaineriRK14ItemDescriptor
    void removeResource(ItemStack const&, bool, int); // _ZN26FullPlayerInventoryWrapper14removeResourceERK9ItemStackbi
    void _removeCursorItem(ItemStack const&, bool, int); // _ZN26FullPlayerInventoryWrapper17_removeCursorItemERK9ItemStackbi
//  void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int); //TODO: incomplete function definition // _ZN26FullPlayerInventoryWrapper26_removeSimpleContainerItemER15SimpleContainer11ContainerIDiRK9ItemStackbi
    void _sendCursorSlotPacket()const; // _ZNK26FullPlayerInventoryWrapper21_sendCursorSlotPacketEv
};
