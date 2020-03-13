#pragma once

#include "../../../unmapped/ComplexInventoryTransaction.h"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    ~ItemUseInventoryTransaction(); // _ZN27ItemUseInventoryTransactionD2Ev
    virtual void read(ReadOnlyBinaryStream &); // _ZN27ItemUseInventoryTransaction4readER20ReadOnlyBinaryStream
    virtual void write(BinaryStream &)const; // _ZNK27ItemUseInventoryTransaction5writeER12BinaryStream
    virtual void handle(Player &, bool)const; // _ZNK27ItemUseInventoryTransaction6handleER6Playerb
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition // _ZNK27ItemUseInventoryTransaction18onTransactionErrorER6Player25InventoryTransactionError
    ItemUseInventoryTransaction(); // _ZN27ItemUseInventoryTransactionC2Ev
    void setSelectedItem(ItemStack const&); // _ZN27ItemUseInventoryTransaction15setSelectedItemERK9ItemStack
    void setSelectedSlot(int); // _ZN27ItemUseInventoryTransaction15setSelectedSlotEi
    void setBlockPosition(NetworkBlockPosition const&); // _ZN27ItemUseInventoryTransaction16setBlockPositionERK20NetworkBlockPosition
    void setFacing(unsigned char); // _ZN27ItemUseInventoryTransaction9setFacingEh
    void setClickPosition(Vec3 const&); // _ZN27ItemUseInventoryTransaction16setClickPositionERK4Vec3
    void setFromPosition(Vec3 const&); // _ZN27ItemUseInventoryTransaction15setFromPositionERK4Vec3
//  void setActionType(ItemUseInventoryTransaction::ActionType); //TODO: incomplete function definition // _ZN27ItemUseInventoryTransaction13setActionTypeENS_10ActionTypeE
    void setTargetBlock(Block const&); // _ZN27ItemUseInventoryTransaction14setTargetBlockERK5Block
    ItemUseInventoryTransaction(InventoryTransaction const&); // _ZN27ItemUseInventoryTransactionC2ERK20InventoryTransaction
    void getTargetBlock(Level const&)const; // _ZNK27ItemUseInventoryTransaction14getTargetBlockERK5Level
    void resendBlocksAroundArea(Player &, BlockPos const&, unsigned char)const; // _ZNK27ItemUseInventoryTransaction22resendBlocksAroundAreaER6PlayerRK8BlockPosh
    void getBlockPosition()const; // _ZNK27ItemUseInventoryTransaction16getBlockPositionEv
    void getFacing()const; // _ZNK27ItemUseInventoryTransaction9getFacingEv
    void getSelectedItem()const; // _ZNK27ItemUseInventoryTransaction15getSelectedItemEv
    void getSelectedSlot()const; // _ZNK27ItemUseInventoryTransaction15getSelectedSlotEv
    void getActionType()const; // _ZNK27ItemUseInventoryTransaction13getActionTypeEv
    void getFromPosition()const; // _ZNK27ItemUseInventoryTransaction15getFromPositionEv
    void getClickPosition()const; // _ZNK27ItemUseInventoryTransaction16getClickPositionEv
};
