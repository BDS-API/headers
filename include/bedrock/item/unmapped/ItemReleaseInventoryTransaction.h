#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/InventoryTransaction.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual void read(ReadOnlyBinaryStream &);
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    virtual void write(BinaryStream &)const;
    ~ItemReleaseInventoryTransaction();
    virtual void handle(Player &, bool)const;
    ItemReleaseInventoryTransaction();
//  void setActionType(ItemReleaseInventoryTransaction::ActionType); //TODO: incomplete function definition
    void setSelectedSlot(int);
    ItemReleaseInventoryTransaction(InventoryTransaction const&);
    void getSelectedItem()const;
    void setFromPosition(Vec3 const&);
    void getSelectedSlot()const;
    void getActionType()const;
    void setSelectedItem(ItemStack const&);
    void getFromPosition()const;
};
