#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../../actor/unmapped/ActorRuntimeID.h"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual void read(ReadOnlyBinaryStream &);
    virtual void handle(Player &, bool)const;
    ~ItemUseOnActorInventoryTransaction();
    virtual void write(BinaryStream &)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    ItemUseOnActorInventoryTransaction(InventoryTransaction const&);
    void setEntityRuntimeId(ActorRuntimeID);
    void getEntityRuntimeId()const;
    void setFromPosition(Vec3 const&);
    void getSelectedSlot()const;
    ItemUseOnActorInventoryTransaction();
    void getHitPosition()const;
    void setHitPosition(Vec3 const&);
    void getFromPosition()const;
    void getActionType()const;
    void setSelectedItem(ItemStack const&);
//  void setActionType(ItemUseOnActorInventoryTransaction::ActionType); //TODO: incomplete function definition
    void setSelectedSlot(int);
    void getSelectedItem()const;
};
