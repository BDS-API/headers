#pragma once

class InventoryTransactionItemGroup {

public:

    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    void getCount(void)const;
    bool hasOverflow(void)const;
    void getItemInstance(void)const;
    void add(ItemStack const&, int);
    InventoryTransactionItemGroup(ItemStack const&, int);
    void equals(ItemStack const&)const;
    void _itemAuxMatch(int)const;
    InventoryTransactionItemGroup(InventoryTransactionItemGroup&&);
};
