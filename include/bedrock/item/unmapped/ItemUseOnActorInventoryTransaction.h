#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    ~ItemUseOnActorInventoryTransaction(); // _ZN34ItemUseOnActorInventoryTransactionD2Ev
    virtual void read(ReadOnlyBinaryStream &); // _ZN34ItemUseOnActorInventoryTransaction4readER20ReadOnlyBinaryStream
    virtual void write(BinaryStream &)const; // _ZNK34ItemUseOnActorInventoryTransaction5writeER12BinaryStream
    virtual void handle(Player &, bool)const; // _ZNK34ItemUseOnActorInventoryTransaction6handleER6Playerb
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition // _ZNK34ItemUseOnActorInventoryTransaction18onTransactionErrorER6Player25InventoryTransactionError
    ItemUseOnActorInventoryTransaction(); // _ZN34ItemUseOnActorInventoryTransactionC2Ev
    void setSelectedItem(ItemStack const&); // _ZN34ItemUseOnActorInventoryTransaction15setSelectedItemERK9ItemStack
    void setSelectedSlot(int); // _ZN34ItemUseOnActorInventoryTransaction15setSelectedSlotEi
//  void setActionType(ItemUseOnActorInventoryTransaction::ActionType); //TODO: incomplete function definition // _ZN34ItemUseOnActorInventoryTransaction13setActionTypeENS_10ActionTypeE
    void setEntityRuntimeId(ActorRuntimeID); // _ZN34ItemUseOnActorInventoryTransaction18setEntityRuntimeIdE14ActorRuntimeID
    void setFromPosition(Vec3 const&); // _ZN34ItemUseOnActorInventoryTransaction15setFromPositionERK4Vec3
    void setHitPosition(Vec3 const&); // _ZN34ItemUseOnActorInventoryTransaction14setHitPositionERK4Vec3
    ItemUseOnActorInventoryTransaction(InventoryTransaction const&); // _ZN34ItemUseOnActorInventoryTransactionC2ERK20InventoryTransaction
    void getSelectedItem()const; // _ZNK34ItemUseOnActorInventoryTransaction15getSelectedItemEv
    void getSelectedSlot()const; // _ZNK34ItemUseOnActorInventoryTransaction15getSelectedSlotEv
    void getEntityRuntimeId()const; // _ZNK34ItemUseOnActorInventoryTransaction18getEntityRuntimeIdEv
    void getFromPosition()const; // _ZNK34ItemUseOnActorInventoryTransaction15getFromPositionEv
    void getActionType()const; // _ZNK34ItemUseOnActorInventoryTransaction13getActionTypeEv
    void getHitPosition()const; // _ZNK34ItemUseOnActorInventoryTransaction14getHitPositionEv
};
