#pragma once

class JukeboxBlockActor : RandomizableBlockActorContainer {

public:
    virtual ~JukeboxBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getContainer(void);
    virtual void startOpen(Player &);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void stopOpen(Player &);

    void JukeboxBlockActor(BlockPos const&);
    void getRecord(void)const;
    void setRecord(ItemStack const&);
    bool hasRecord(void)const;
    void stopPlayingRecord(BlockSource &)const;
};
