#pragma once



class InventoryTransactionItemGroup {

public:
    InventoryTransactionItemGroup(InventoryTransactionItemGroup &&);
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&);
    void equals(ItemStack const&)const;
    ~InventoryTransactionItemGroup();
    InventoryTransactionItemGroup(ItemStack const&, int);
    void _itemAuxMatch(int)const;
    void getCount()const;
    bool hasOverflow()const;
    void add(ItemStack const&, int);
    void getItemInstance()const;
};
