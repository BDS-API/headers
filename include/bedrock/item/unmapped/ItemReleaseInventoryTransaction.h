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
    virtual ~ItemReleaseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition

    ItemReleaseInventoryTransaction();
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setFromPosition(Vec3 const&);
//  void setActionType(ItemReleaseInventoryTransaction::ActionType); //TODO: incomplete function definition
    ItemReleaseInventoryTransaction(InventoryTransaction const&);
    void getSelectedItem()const;
    void getSelectedSlot()const;
    void getFromPosition()const;
    void getActionType()const;
};
