#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/item/unmapped/ItemDescriptor"
#include "../bedrock/item/ItemStack"
#include "../bedrock/container/SimpleContainer"


class FullPlayerInventoryWrapper {

public:

    FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *);
    void clearAllItems();
    void _removeCursorItem();
    void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int);
    void getItemCount(ItemDescriptor const&);
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&);
    void removeResource(ItemStack const&, bool, int);
    void _removeCursorItem(ItemStack const&, bool, int);
    void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int);
    void _sendCursorSlotPacket()const;
};
