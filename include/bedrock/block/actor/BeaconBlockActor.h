#pragma once

#include "../../item/ItemStack"
#include "../../container/Container"
#include "../../item/unmapped/ItemDescriptor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class BeaconBlockActor : BlockActor, Container {

public:
    BeaconBlockActor::~BeaconBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual bool hasAlphaLayer()const;
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void getNumLevels()const;
    void getPrimaryEffectTier()const;
    void getSecondaryEffectTier()const;
    void getPrimaryEffect()const;
    void getSecondaryEffect()const;
    BeaconBlockActor(BlockPos const&);
    bool isActive()const;
    void _checkShape(BlockSource &);
    void _applyEffects(BlockSource &);
    void getBeaconData();
    void _saveClientSideState(CompoundTag &)const;
    void _loadClientSideState(Level &, CompoundTag const&, DataLoadHelper &);
    void getEffects()const;
    void getTierEffects()const;
    void getMaxSelections()const;
    void setPrimaryEffect(int);
    void _setEffect(int, int &, int &);
    void setSecondaryEffect(int);
    void _isSecondaryEffectValid(int)const;
    bool isEffectAvailable(int)const;
    void _getEffectTier(int)const;
    bool isSecondaryAvailable()const;
    bool isPaymentItem(ItemDescriptor const&);
    void _isEffectValid(int)const;
};
