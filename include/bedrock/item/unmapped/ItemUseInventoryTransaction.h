#pragma once

#include "../../../unmapped/Block.h"
#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/NetworkBlockPosition.h"
#include "../../../unmapped/InventoryTransaction.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/ComplexInventoryTransaction.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
//  virtual void onTransactionError(Player &, InventoryTransactionError)const; //TODO: incomplete function definition

    ItemUseInventoryTransaction();
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setBlockPosition(NetworkBlockPosition const&);
    void setFacing(unsigned char);
    void setClickPosition(Vec3 const&);
    void setFromPosition(Vec3 const&);
//  void setActionType(ItemUseInventoryTransaction::ActionType); //TODO: incomplete function definition
    void setTargetBlock(Block const&);
    ItemUseInventoryTransaction(InventoryTransaction const&);
    void getTargetBlock(Level const&)const;
    void resendBlocksAroundArea(Player &, BlockPos const&, unsigned char)const;
    void getBlockPosition()const;
    void getFacing()const;
    void getSelectedItem()const;
    void getSelectedSlot()const;
    void getActionType()const;
    void getFromPosition()const;
    void getClickPosition()const;
};
