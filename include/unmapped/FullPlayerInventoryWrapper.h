#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/item/unmapped/ItemDescriptor"
#include "../bedrock/container/SimpleContainer"
#include "../bedrock/actor/Player"


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
