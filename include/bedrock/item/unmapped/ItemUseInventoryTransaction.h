#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../unmapped/Block.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/InventoryTransaction.h"
#include "../../level/Level.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "../../util/BlockPos.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual void write(BinaryStream &)const;
    ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition
    void getFromPosition()const;
    void getClickPosition()const;
    void getBlockPosition()const;
    ItemUseInventoryTransaction(InventoryTransaction const&);
    void setFacing(unsigned char);
    void setFromPosition(Vec3 const&);
    void getSelectedItem()const;
    void getSelectedSlot()const;
    void setSelectedItem(ItemStack const&);
    void setTargetBlock(Block const&);
    void getFacing()const;
//  void setActionType(ItemUseInventoryTransaction::ActionType); //TODO: incomplete function definition
    void getActionType()const;
    void setBlockPosition(NetworkBlockPosition const&);
    void resendBlocksAroundArea(Player &, BlockPos const&, unsigned char)const;
    void getTargetBlock(Level const&)const;
    void setSelectedSlot(int);
    ItemUseInventoryTransaction();
    void setClickPosition(Vec3 const&);
};
