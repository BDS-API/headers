#pragma once

#include "../../../unmapped/ComplexInventoryTransaction"
#include "../ItemStack"
#include "../../../unmapped/InventoryTransaction"
#include "../../io/ReadOnlyBinaryStream"
#include "../../util/Vec3"
#include "../../io/BinaryStream"
#include "../../actor/Player"


class ItemReleaseInventoryTransaction : ComplexInventoryTransaction {

public:
    ItemReleaseInventoryTransaction::~ItemReleaseInventoryTransaction()
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    ItemReleaseInventoryTransaction(void);
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setFromPosition(Vec3 const&);
    void setActionType(ItemReleaseInventoryTransaction::ActionType);
    ItemReleaseInventoryTransaction(InventoryTransaction const&);
    void getSelectedItem()const;
    void getSelectedSlot()const;
    void getFromPosition()const;
    void getActionType()const;
};
