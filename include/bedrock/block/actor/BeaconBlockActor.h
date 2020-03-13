#pragma once

#include <string>
#include "BlockActor.h"
#include "../../container/Container.h"


class BeaconBlockActor : BlockActor, Container {

public:
    ~BeaconBlockActor(); // _ZN16BeaconBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16BeaconBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK16BeaconBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN16BeaconBlockActor4tickER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN16BeaconBlockActor15getUpdatePacketER11BlockSource
    virtual bool hasAlphaLayer()const; // _ZNK16BeaconBlockActor13hasAlphaLayerEv
    virtual std::string getName()const; // _ZNK16BeaconBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN16BeaconBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void getItem(int)const; // _ZNK16BeaconBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN16BeaconBlockActor7setItemEiRK9ItemStack
    virtual void removeItem(int, int); // _ZN16BeaconBlockActor10removeItemEii
    virtual void getContainerSize()const; // _ZNK16BeaconBlockActor16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK16BeaconBlockActor15getMaxStackSizeEv
    virtual void startOpen(Player &); // _ZN16BeaconBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN16BeaconBlockActor8stopOpenER6Player
    void getNumLevels()const; // _ZNK16BeaconBlockActor12getNumLevelsEv
    void getPrimaryEffectTier()const; // _ZNK16BeaconBlockActor20getPrimaryEffectTierEv
    void getSecondaryEffectTier()const; // _ZNK16BeaconBlockActor22getSecondaryEffectTierEv
    void getPrimaryEffect()const; // _ZNK16BeaconBlockActor16getPrimaryEffectEv
    void getSecondaryEffect()const; // _ZNK16BeaconBlockActor18getSecondaryEffectEv
    BeaconBlockActor(BlockPos const&); // _ZN16BeaconBlockActorC2ERK8BlockPos
    bool isActive()const; // _ZNK16BeaconBlockActor8isActiveEv
    void _checkShape(BlockSource &); // _ZN16BeaconBlockActor11_checkShapeER11BlockSource
    void _applyEffects(BlockSource &); // _ZN16BeaconBlockActor13_applyEffectsER11BlockSource
    void getBeaconData(); // _ZN16BeaconBlockActor13getBeaconDataEv
    void _saveClientSideState(CompoundTag &)const; // _ZNK16BeaconBlockActor20_saveClientSideStateER11CompoundTag
    void _loadClientSideState(Level &, CompoundTag const&, DataLoadHelper &); // _ZN16BeaconBlockActor20_loadClientSideStateER5LevelRK11CompoundTagR14DataLoadHelper
    void getEffects()const; // _ZNK16BeaconBlockActor10getEffectsEv
    void getTierEffects()const; // _ZNK16BeaconBlockActor14getTierEffectsEv
    void getMaxSelections()const; // _ZNK16BeaconBlockActor16getMaxSelectionsEv
    void setPrimaryEffect(int); // _ZN16BeaconBlockActor16setPrimaryEffectEi
    void _setEffect(int, int &, int &); // _ZN16BeaconBlockActor10_setEffectEiRiS0_
    void setSecondaryEffect(int); // _ZN16BeaconBlockActor18setSecondaryEffectEi
    void _isSecondaryEffectValid(int)const; // _ZNK16BeaconBlockActor23_isSecondaryEffectValidEi
    bool isEffectAvailable(int)const; // _ZNK16BeaconBlockActor17isEffectAvailableEi
    void _getEffectTier(int)const; // _ZNK16BeaconBlockActor14_getEffectTierEi
    bool isSecondaryAvailable()const; // _ZNK16BeaconBlockActor20isSecondaryAvailableEv
    bool isPaymentItem(ItemDescriptor const&); // _ZN16BeaconBlockActor13isPaymentItemERK14ItemDescriptor
    void _isEffectValid(int)const; // _ZNK16BeaconBlockActor14_isEffectValidEi
};
