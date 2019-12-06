#pragma once

class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ~ItemReleaseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    void ItemReleaseInventoryTransaction(void);
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setFromPosition(Vec3 const&);
    void setActionType(ItemReleaseInventoryTransaction::ActionType);
    void ItemReleaseInventoryTransaction(InventoryTransaction const&);
    void getSelectedItem(void)const;
    void getSelectedSlot(void)const;
    void getFromPosition(void)const;
    void getActionType(void)const;
};
