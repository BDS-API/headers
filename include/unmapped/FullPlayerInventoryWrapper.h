#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/container/SimpleContainer.h"
#include "PlayerInventoryProxy.h"
#include "InventoryTransactionManager.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"


class FullPlayerInventoryWrapper {

public:
//  void _removeSimpleContainerItem(SimpleContainer &, ContainerID, int, ItemStack const&, bool, int); //TODO: incomplete function definition
    void _removeCursorItem();
    void removeResource(ItemStack const&, bool, int);
    void getItemCount(ItemDescriptor const&);
    void _getSimpleContainerItemCount(SimpleContainer &, int, ItemDescriptor const&);
    void clearAllItems();
    void _sendCursorSlotPacket()const;
    FullPlayerInventoryWrapper(PlayerInventoryProxy &, SimpleContainer &, SimpleContainer &, InventoryTransactionManager *, Player *);
    void _removeCursorItem(ItemStack const&, bool, int);
//  void _clearSimpleContainerItem(SimpleContainer &, ContainerID, int); //TODO: incomplete function definition
};
