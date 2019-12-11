#pragma once

class FullPlayerInventoryWrapper {

public:

    void FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *);
    void clearAllItems(void);
    void _removeCursorItem(void);
    void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int);
    void getItemCount(ItemDescriptor const&);
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&);
    void removeResource(ItemStack const&, bool, int);
    void _removeCursorItem(ItemStack const&, bool, int);
    void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int);
    void _sendCursorSlotPacket(void)const;
};
