#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"


class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

public:
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    ~ItemReleaseInventoryTransaction();
    virtual void handle(Player &, bool)const;
    ItemReleaseInventoryTransaction();
    void getActionType()const;
    void setSelectedSlot(int);
    void setSelectedItem(ItemStack const&);
    void setFromPosition(Vec3 const&);
//  void setActionType(ItemReleaseInventoryTransaction::ActionType); //TODO: incomplete function definition
    ItemReleaseInventoryTransaction(InventoryTransaction const&);
    void getFromPosition()const;
    void getSelectedSlot()const;
    void getSelectedItem()const;
};
