#pragma once

#include "../../../unmapped/NetworkBlockPosition"
#include "../../io/BinaryStream"
#include "../../level/Level"
#include "../../../unmapped/Block"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../../unmapped/InventoryTransaction"
#include "../../util/Vec3"
#include "../../io/ReadOnlyBinaryStream"
#include "../ItemStack"
#include "../../../unmapped/ComplexInventoryTransaction"


class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ItemUseInventoryTransaction::~ItemUseInventoryTransaction()
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
