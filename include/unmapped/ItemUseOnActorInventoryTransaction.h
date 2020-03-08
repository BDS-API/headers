#pragma once

#include "../bedrock/io/ReadOnlyBinaryStream"
#include "../bedrock/io/BinaryStream"
#include "../bedrock/actor/Player"
#include "../bedrock/item/ItemStack"


class ItemUseOnActorInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ItemUseOnActorInventoryTransaction::~ItemUseOnActorInventoryTransaction();
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
    void getSelectedItem(void)const;
    void getSelectedSlot(void)const;
    void getEntityRuntimeId(void)const;
    void getFromPosition(void)const;
    void getActionType(void)const;
    void getHitPosition(void)const;
};
