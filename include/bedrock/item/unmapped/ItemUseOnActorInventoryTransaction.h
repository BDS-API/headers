#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/InventoryTransaction.h"
#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    ~ItemUseOnActorInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    virtual void write(BinaryStream &)const;
    void getSelectedItem()const;
    void getFromPosition()const;
//  void setActionType(ItemUseOnActorInventoryTransaction::ActionType); //TODO: incomplete function definition
    void setFromPosition(Vec3 const&);
    ItemUseOnActorInventoryTransaction(InventoryTransaction const&);
    void getHitPosition()const;
    void setSelectedItem(ItemStack const&);
    void getEntityRuntimeId()const;
    ItemUseOnActorInventoryTransaction();
    void getSelectedSlot()const;
    void setSelectedSlot(int);
    void getActionType()const;
    void setEntityRuntimeId(ActorRuntimeID);
    void setHitPosition(Vec3 const&);
};
