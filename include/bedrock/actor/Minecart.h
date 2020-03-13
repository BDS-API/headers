#pragma once

#include <string>
#include "Actor.h"


class Minecart : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Minecart15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN8Minecart21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~Minecart(); // _ZN8MinecartD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN8Minecart6lerpToERK4Vec3RK4Vec2i
    virtual void normalTick(); // _ZN8Minecart10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN8Minecart19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK8Minecart15getShadowRadiusEv
    virtual bool isPickable(); // _ZN8Minecart10isPickableEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK8Minecart16isInvulnerableToERK17ActorDamageSource
    virtual void onBounceStarted(BlockPos const&, Block const&); // _ZN8Minecart15onBounceStartedERK8BlockPosRK5Block
    virtual void getControllingPlayer()const; // _ZNK8Minecart20getControllingPlayerEv
    virtual void kill(); // _ZN8Minecart4killEv
    virtual bool canMakeStepSound()const; // _ZNK8Minecart16canMakeStepSoundEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN8Minecart5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8Minecart22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN8Minecart21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN8Minecart14_onSizeUpdatedEv
    virtual void destroy(ActorDamageSource const&, bool); // _ZN8Minecart7destroyERK17ActorDamageSourceb
    virtual void getDefaultDisplayBlock()const; // _ZNK8Minecart22getDefaultDisplayBlockEv
    virtual void getDefaultDisplayData()const; // _ZNK8Minecart21getDefaultDisplayDataEv
    virtual void getDefaultDisplayOffset()const; // _ZNK8Minecart23getDefaultDisplayOffsetEv
    virtual void applyNaturalSlowdown(); // _ZN8Minecart20applyNaturalSlowdownEv
    virtual void lazyInitDisplayBlock(); // _ZN8Minecart20lazyInitDisplayBlockEv
    Minecart(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8MinecartC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _reloadMinecartHardcodedValues(); // _ZN8Minecart30_reloadMinecartHardcodedValuesEv
    void registerLoopingSounds(); // _ZN8Minecart21registerLoopingSoundsEv
    void getDisplayBlock()const; // _ZNK8Minecart15getDisplayBlockEv
    bool hasCustomDisplay()const; // _ZNK8Minecart16hasCustomDisplayEv
    void getDisplayOffset()const; // _ZNK8Minecart16getDisplayOffsetEv
    void setDisplayBlock(Block const&); // _ZN8Minecart15setDisplayBlockERK5Block
    void setCustomDisplay(bool); // _ZN8Minecart16setCustomDisplayEb
    void setDisplayOffset(int); // _ZN8Minecart16setDisplayOffsetEi
    void setCustomName(std::string const&); // _ZN8Minecart13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getAName(); // _ZN8Minecart8getANameB5cxx11Ev
    bool hasCustomName()const; // _ZNK8Minecart13hasCustomNameEv
    std::string getCustomName()const; // _ZNK8Minecart13getCustomNameB5cxx11Ev
};
