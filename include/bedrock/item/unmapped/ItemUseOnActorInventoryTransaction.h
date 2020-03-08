#pragma once

#include "../../io/BinaryStream"
#include "../../actor/unmapped/ActorRuntimeID"
#include "../../actor/Player"
#include "../../../unmapped/InventoryTransaction"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"
#include "../ItemStack"
#include "../../../unmapped/ComplexInventoryTransaction"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ItemUseOnActorInventoryTransaction::~ItemUseOnActorInventoryTransaction()
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    ItemUseOnActorInventoryTransaction(void);
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setActionType(ItemUseOnActorInventoryTransaction::ActionType);
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
