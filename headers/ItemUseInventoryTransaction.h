#pragma once

class ItemUseInventoryTransaction : ComplexInventoryTransaction {

public:
    virtual ~ItemUseInventoryTransaction();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void write(BinaryStream &)const;
    virtual void handle(Player &, bool)const;
    virtual void onTransactionError(Player &, InventoryTransactionError)const;

    void ItemUseInventoryTransaction(void);
    void setSelectedItem(ItemStack const&);
    void setSelectedSlot(int);
    void setBlockPosition(NetworkBlockPosition const&);
    void setFacing(unsigned char);
    void setClickPosition(Vec3 const&);
    void setFromPosition(Vec3 const&);
    void setActionType(ItemUseInventoryTransaction::ActionType);
    void setTargetBlock(Block const&);
    void ItemUseInventoryTransaction(InventoryTransaction const&);
    void getTargetBlock(Level const&)const;
    void resendBlocksAroundArea(Player &, BlockPos const&, unsigned char)const;
    void getBlockPosition(void)const;
    void getFacing(void)const;
    void getSelectedItem(void)const;
    void getSelectedSlot(void)const;
    void getActionType(void)const;
    void getFromPosition(void)const;
    void getClickPosition(void)const;
};
