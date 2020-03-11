#pragma once

#include "../../actor/unmapped/ActorRuntimeID.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/InventoryTransaction.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ~ItemUseOnActorInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition

    ItemUseOnActorInventoryTransaction();
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
//  void setActionType(ItemUseOnActorInventoryTransaction::ActionType); //TODO: incomplete function definition
    void setEntityRuntimeId(ActorRuntimeID);
    void setFromPosition(Vec3 const&);
    void setHitPosition(Vec3 const&);
    ItemUseOnActorInventoryTransaction(InventoryTransaction const&);
    void getSelectedItem()const;
    void getSelectedSlot()const;
    void getEntityRuntimeId()const;
    void getFromPosition()const;
    void getActionType()const;
    void getHitPosition()const;
};
