#pragma once

class BeaconBlockActor : BlockActor, Container {

public:
    virtual BeaconBlockActor::~BeaconBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual bool hasAlphaLayer(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void removeItem(int, int);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void getNumLevels(void)const;
    void getPrimaryEffectTier(void)const;
    void getSecondaryEffectTier(void)const;
    void getPrimaryEffect(void)const;
    void getSecondaryEffect(void)const;
    BeaconBlockActor(BlockPos const&);
    bool isActive(void)const;
    void _checkShape(BlockSource &);
    void _applyEffects(BlockSource &);
    void getBeaconData(void);
    void _saveClientSideState(CompoundTag &)const;
    void _loadClientSideState(Level &, CompoundTag const&, DataLoadHelper &);
    void getEffects(void)const;
    void getTierEffects(void)const;
    void getMaxSelections(void)const;
    void setPrimaryEffect(int);
    void _setEffect(int, int &, int &);
    void setSecondaryEffect(int);
    void _isSecondaryEffectValid(int)const;
    bool isEffectAvailable(int)const;
    void _getEffectTier(int)const;
    bool isSecondaryAvailable(void)const;
    bool isPaymentItem(ItemDescriptor const&);
    void _isEffectValid(int)const;
};
