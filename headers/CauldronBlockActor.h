#pragma once

class CauldronBlockActor : BlockActor, Container {

public:
    static long CauldronBlockActor::WATER_COLOR;

    virtual ~CauldronBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool isFinished(void);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getContainerSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void getPotionId(void)const;
    bool hasCustomColor(void)const;
    void setPotionId(int);
    void CauldronBlockActor(BlockPos const&);
    bool isSlotEmpty(int)const;
    void getColor(void)const;
    void getPotionColor(void)const;
    void getCustomColor(void)const;
    bool isSplashPotion(void)const;
    bool isLingeringPotion(void)const;
    void setPotionType(int);
    void getPotionType(void)const;
    void getMixDyeColor(void);
    void mixDyes(void);
    void setCustomColor(Color const&);
};
