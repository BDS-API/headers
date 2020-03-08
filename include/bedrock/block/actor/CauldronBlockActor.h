#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../util/Color"
#include "../../../unmapped/DataLoadHelper"
#include "../../container/Container"


class CauldronBlockActor : BlockActor, Container {

public:
    static long WATER_COLOR;

    virtual CauldronBlockActor::~CauldronBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual bool isFinished();
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void getPotionId()const;
    bool hasCustomColor()const;
    void setPotionId(int);
    CauldronBlockActor(BlockPos const&);
    bool isSlotEmpty(int)const;
    void getColor()const;
    void getPotionColor()const;
    void getCustomColor()const;
    bool isSplashPotion()const;
    bool isLingeringPotion()const;
    void setPotionType(int);
    void getPotionType()const;
    void getMixDyeColor();
    void mixDyes();
    void setCustomColor(Color const&);
};
