#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/Color.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class CauldronBlockActor : BlockActor, Container {

public:
    static long WATER_COLOR;

    virtual bool isFinished();
    virtual void onChanged(BlockSource &);
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize()const;
    virtual std::string getName()const;
    virtual void getMaxStackSize()const;
    ~CauldronBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void stopOpen(Player &);
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void save(CompoundTag &)const;
    virtual void getItem(int)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void mixDyes();
    void getPotionType()const;
    bool hasCustomColor()const;
    void setCustomColor(Color const&);
    void getCustomColor()const;
    CauldronBlockActor(BlockPos const&);
    bool isSplashPotion()const;
    void setPotionType(int);
    void getMixDyeColor();
    bool isSlotEmpty(int)const;
    void getColor()const;
    void setPotionId(int);
    bool isLingeringPotion()const;
    void getPotionColor()const;
    void getPotionId()const;
};
