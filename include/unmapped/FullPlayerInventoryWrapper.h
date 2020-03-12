#pragma once



class FullPlayerInventoryWrapper {

public:
//  void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int); //TODO: incomplete function definition
    void removeResource(ItemStack const&, bool, int);
    void clearAllItems();
    FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *);
    void _removeCursorItem();
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&);
    void _sendCursorSlotPacket()const;
    void _removeCursorItem(ItemStack const&, bool, int);
//  void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int); //TODO: incomplete function definition
    void getItemCount(ItemDescriptor const&);
};
