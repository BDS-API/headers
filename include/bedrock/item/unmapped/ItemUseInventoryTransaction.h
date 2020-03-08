#pragma once

#include "../../../unmapped/ComplexInventoryTransaction"
#include "../ItemStack"
#include "../../level/Level"
#include "../../../unmapped/InventoryTransaction"
#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"
#include "../../util/Vec3"
#include "../../io/BinaryStream"
#include "../../actor/Player"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    ItemUseInventoryTransaction::~ItemUseInventoryTransaction()
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    ItemUseInventoryTransaction(void);
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setBlockPosition(NetworkBlockPosition const&);
    void setFacing(unsigned char);
    void setClickPosition(Vec3 const&);
    void setFromPosition(Vec3 const&);
    void setActionType(ItemUseInventoryTransaction::ActionType);
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
