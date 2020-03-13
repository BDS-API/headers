#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"


class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

public:
    ~ItemReleaseInventoryTransaction(); // _ZN31ItemReleaseInventoryTransactionD2Ev
    virtual void read(ReadOnlyBinaryStream &); // _ZN31ItemReleaseInventoryTransaction4readER20ReadOnlyBinaryStream
    virtual void write(BinaryStream &)const; // _ZNK31ItemReleaseInventoryTransaction5writeER12BinaryStream
    virtual void handle(Player &, bool)const; // _ZNK31ItemReleaseInventoryTransaction6handleER6Playerb
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition // _ZNK31ItemReleaseInventoryTransaction18onTransactionErrorER6Player25InventoryTransactionError
    ItemReleaseInventoryTransaction(); // _ZN31ItemReleaseInventoryTransactionC2Ev
    void setSelectedItem(ItemStack const&); // _ZN31ItemReleaseInventoryTransaction15setSelectedItemERK9ItemStack
    void setSelectedSlot(int); // _ZN31ItemReleaseInventoryTransaction15setSelectedSlotEi
    void setFromPosition(Vec3 const&); // _ZN31ItemReleaseInventoryTransaction15setFromPositionERK4Vec3
//  void setActionType(ItemReleaseInventoryTransaction::ActionType); //TODO: incomplete function definition // _ZN31ItemReleaseInventoryTransaction13setActionTypeENS_10ActionTypeE
    ItemReleaseInventoryTransaction(InventoryTransaction const&); // _ZN31ItemReleaseInventoryTransactionC2ERK20InventoryTransaction
    void getSelectedItem()const; // _ZNK31ItemReleaseInventoryTransaction15getSelectedItemEv
    void getSelectedSlot()const; // _ZNK31ItemReleaseInventoryTransaction15getSelectedSlotEv
    void getFromPosition()const; // _ZNK31ItemReleaseInventoryTransaction15getFromPositionEv
    void getActionType()const; // _ZNK31ItemReleaseInventoryTransaction13getActionTypeEv
};
