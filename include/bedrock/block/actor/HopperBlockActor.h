#pragma once

class HopperBlockActor : BlockActor, Container, Hopper {

public:
    virtual HopperBlockActor::~HopperBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getName[abi:cxx11](void)const;
    virtual void getContainer(void);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    HopperBlockActor(BlockPos const&);
    void _initItems(void);
    void _tick(BlockSource &, int);
    void _ensureTickingOrder(BlockSource &, int);
    void getLevelPos(void);
    void _countItems(void)const;
    void checkForSmeltEverythingAchievement(BlockSource &);
    bool isAttachedToChestAndFurnace(BlockSource &);
    void getAttachedFurnace(BlockSource &);
    bool isAttachedToContainerType(BlockSource &, ContainerType);
    bool isSourceOfContainerType(BlockSource &, ContainerType);
    void updateCooldownAfterMove(Tick const&, int);
};
