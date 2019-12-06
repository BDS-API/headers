#pragma once

class InventoryTransactionItemGroup {

public:

    void InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    void getCount(void)const;
    bool hasOverflow(void)const;
    void getItemInstance(void)const;
    void add(ItemStack const&, int);
    void InventoryTransactionItemGroup(ItemStack const&, int);
    void equals(ItemStack const&)const;
    void _itemAuxMatch(int)const;
    void InventoryTransactionItemGroup(InventoryTransactionItemGroup&&);
};
