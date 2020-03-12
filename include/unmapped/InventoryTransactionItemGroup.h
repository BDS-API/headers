#pragma once

#include "../bedrock/item/ItemStack.h"


class InventoryTransactionItemGroup {

public:
    InventoryTransactionItemGroup(InventoryTransactionItemGroup &&);
    InventoryTransactionItemGroup(ItemStack const&, int);
    ~InventoryTransactionItemGroup();
    void add(ItemStack const&, int);
    bool hasOverflow()const;
    void getCount()const;
    void _itemAuxMatch(int)const;
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    void equals(ItemStack const&)const;
    void getItemInstance()const;
};
