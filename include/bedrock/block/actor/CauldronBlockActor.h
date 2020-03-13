#pragma once

#include <string>
#include "BlockActor.h"
#include "../../container/Container.h"


class CauldronBlockActor : BlockActor, Container {

public:
    static long WATER_COLOR;

    ~CauldronBlockActor(); // _ZN18CauldronBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN18CauldronBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK18CauldronBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN18CauldronBlockActor4tickER11BlockSource
    virtual bool isFinished(); // _ZN18CauldronBlockActor10isFinishedEv
    virtual void onChanged(BlockSource &); // _ZN18CauldronBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN18CauldronBlockActor15getUpdatePacketER11BlockSource
    virtual std::string getName()const; // _ZNK18CauldronBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN18CauldronBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getItem(int)const; // _ZNK18CauldronBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN18CauldronBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK18CauldronBlockActor15getMaxStackSizeEv
    virtual void getContainerSize()const; // _ZNK18CauldronBlockActor16getContainerSizeEv
    virtual void startOpen(Player &); // _ZN18CauldronBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN18CauldronBlockActor8stopOpenER6Player
    void getPotionId()const; // _ZNK18CauldronBlockActor11getPotionIdEv
    bool hasCustomColor()const; // _ZNK18CauldronBlockActor14hasCustomColorEv
    void setPotionId(int); // _ZN18CauldronBlockActor11setPotionIdEi
    CauldronBlockActor(BlockPos const&); // _ZN18CauldronBlockActorC2ERK8BlockPos
    bool isSlotEmpty(int)const; // _ZNK18CauldronBlockActor11isSlotEmptyEi
    void getColor()const; // _ZNK18CauldronBlockActor8getColorEv
    void getPotionColor()const; // _ZNK18CauldronBlockActor14getPotionColorEv
    void getCustomColor()const; // _ZNK18CauldronBlockActor14getCustomColorEv
    bool isSplashPotion()const; // _ZNK18CauldronBlockActor14isSplashPotionEv
    bool isLingeringPotion()const; // _ZNK18CauldronBlockActor17isLingeringPotionEv
    void setPotionType(int); // _ZN18CauldronBlockActor13setPotionTypeEi
    void getPotionType()const; // _ZNK18CauldronBlockActor13getPotionTypeEv
    void getMixDyeColor(); // _ZN18CauldronBlockActor14getMixDyeColorEv
    void mixDyes(); // _ZN18CauldronBlockActor7mixDyesEv
    void setCustomColor(Color const&); // _ZN18CauldronBlockActor14setCustomColorERK5Color
};
