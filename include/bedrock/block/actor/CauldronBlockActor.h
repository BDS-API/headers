#pragma once

#include <string>
#include "../../container/Container.h"
#include "BlockActor.h"


class CauldronBlockActor : BlockActor, Container {

public:
    static long WATER_COLOR;

    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual bool isFinished();
    virtual void getMaxStackSize()const;
    virtual void onChanged(BlockSource &);
    virtual void stopOpen(Player &);
    virtual void setItem(int, ItemStack const&);
    virtual void getItem(int)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getName()const;
    virtual void tick(BlockSource &);
    virtual void startOpen(Player &);
    ~CauldronBlockActor();
    virtual void getContainerSize()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    void setPotionId(int);
    void setPotionType(int);
    void setCustomColor(Color const&);
    void getPotionType()const;
    bool hasCustomColor()const;
    CauldronBlockActor(BlockPos const&);
    bool isSplashPotion()const;
    void getMixDyeColor();
    void getCustomColor()const;
    bool isLingeringPotion()const;
    void mixDyes();
    void getPotionColor()const;
    bool isSlotEmpty(int)const;
    void getColor()const;
    void getPotionId()const;
};
