#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../actor/Player.h"


class BeaconBlockActor : BlockActor, Container {

public:
    virtual void getMaxStackSize()const;
    virtual void tick(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void removeItem(int, int);
    virtual void getContainerSize()const;
    virtual std::string getName()const;
    virtual void getItem(int)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void stopOpen(Player &);
    ~BeaconBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void setItem(int, ItemStack const&);
    virtual bool hasAlphaLayer()const;
    virtual void save(CompoundTag &)const;
    virtual void startOpen(Player &);
    void getBeaconData();
    bool isActive()const;
    void getSecondaryEffect()const;
    void getMaxSelections()const;
    void _isEffectValid(int)const;
    void _loadClientSideState(Level &, CompoundTag const&, DataLoadHelper &);
    BeaconBlockActor(BlockPos const&);
    void _checkShape(BlockSource &);
    bool isSecondaryAvailable()const;
    void _applyEffects(BlockSource &);
    bool isPaymentItem(ItemDescriptor const&);
    void setPrimaryEffect(int);
    void getSecondaryEffectTier()const;
    void getPrimaryEffectTier()const;
    void getEffects()const;
    void _getEffectTier(int)const;
    void getNumLevels()const;
    void setSecondaryEffect(int);
    void getPrimaryEffect()const;
    void _setEffect(int, int &, int &);
    bool isEffectAvailable(int)const;
    void _isSecondaryEffectValid(int)const;
    void _saveClientSideState(CompoundTag &)const;
    void getTierEffects()const;
};
