#pragma once

#include <string>
#include "../../container/Container.h"
#include "BlockActor.h"


class BeaconBlockActor : BlockActor, Container {

public:
    virtual void getContainerSize()const;
    virtual void setItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual std::string getName()const;
    virtual bool hasAlphaLayer()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    ~BeaconBlockActor();
    virtual void tick(BlockSource &);
    virtual void getItem(int)const;
    virtual void getMaxStackSize()const;
    virtual void save(CompoundTag &)const;
    virtual void stopOpen(Player &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void getMaxSelections()const;
    void _setEffect(int, int &, int &);
    bool isEffectAvailable(int)const;
    void getPrimaryEffect()const;
    void _applyEffects(BlockSource &);
    void _saveClientSideState(CompoundTag &)const;
    void setPrimaryEffect(int);
    void getPrimaryEffectTier()const;
    bool isSecondaryAvailable()const;
    void _isSecondaryEffectValid(int)const;
    void _checkShape(BlockSource &);
    void getSecondaryEffect()const;
    void getEffects()const;
    void getSecondaryEffectTier()const;
    void getTierEffects()const;
    void _isEffectValid(int)const;
    void _getEffectTier(int)const;
    bool isPaymentItem(ItemDescriptor const&);
    BeaconBlockActor(BlockPos const&);
    void getNumLevels()const;
    void _loadClientSideState(Level &, CompoundTag const&, DataLoadHelper &);
    bool isActive()const;
    void setSecondaryEffect(int);
    void getBeaconData();
};
