#pragma once



class InventoryTransactionItemGroup {

public:
    ~InventoryTransactionItemGroup(); // _ZN29InventoryTransactionItemGroupD2Ev
    InventoryTransactionItemGroup(InventoryTransactionItemGroup const&); // _ZN29InventoryTransactionItemGroupC2ERKS_
    void getCount()const; // _ZNK29InventoryTransactionItemGroup8getCountEv
    bool hasOverflow()const; // _ZNK29InventoryTransactionItemGroup11hasOverflowEv
    void getItemInstance()const; // _ZNK29InventoryTransactionItemGroup15getItemInstanceEv
    void add(ItemStack const&, int); // _ZN29InventoryTransactionItemGroup3addERK9ItemStacki
    InventoryTransactionItemGroup(ItemStack const&, int); // _ZN29InventoryTransactionItemGroupC2ERK9ItemStacki
    void equals(ItemStack const&)const; // _ZNK29InventoryTransactionItemGroup6equalsERK9ItemStack
    void _itemAuxMatch(int)const; // _ZNK29InventoryTransactionItemGroup13_itemAuxMatchEi
    InventoryTransactionItemGroup(InventoryTransactionItemGroup &&); // _ZN29InventoryTransactionItemGroupC2EOS_
};
