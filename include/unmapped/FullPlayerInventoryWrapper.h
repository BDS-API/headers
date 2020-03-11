#pragma once

#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include "../bedrock/item/ItemStack.h"
#include "./PlayerInventoryProxy.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/container/SimpleContainer.h"
#include "./InventoryTransactionManager.h"


class FullPlayerInventoryWrapper {

public:

    FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *);
    void clearAllItems();
    void _removeCursorItem();
//  void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int); //TODO: incomplete function definition
    void getItemCount(ItemDescriptor const&);
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&);
    void removeResource(ItemStack const&, bool, int);
    void _removeCursorItem(ItemStack const&, bool, int);
//  void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int); //TODO: incomplete function definition
    void _sendCursorSlotPacket()const;
};
