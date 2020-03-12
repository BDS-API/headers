#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    virtual void handle(Player &, bool)const;
    virtual void write(BinaryStream &)const;
    void setTargetBlock(Block const&);
//  void setActionType(ItemUseInventoryTransaction::ActionType); //TODO: incomplete function definition
    ItemUseInventoryTransaction(InventoryTransaction const&);
    void setBlockPosition(NetworkBlockPosition const&);
    void setFromPosition(Vec3 const&);
    void getActionType()const;
    ItemUseInventoryTransaction();
    void getSelectedSlot()const;
    void getClickPosition()const;
    void setSelectedItem(ItemStack const&);
    void getBlockPosition()const;
    void setClickPosition(Vec3 const&);
    void resendBlocksAroundArea(Player &, BlockPos const&, unsigned char)const;
    void getSelectedItem()const;
    void setSelectedSlot(int);
    void setFacing(unsigned char);
    void getFromPosition()const;
    void getFacing()const;
    void getTargetBlock(Level const&)const;
};
