#pragma once

#include "Throwable.h"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12ThrownPotion20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~ThrownPotion(); // _ZN12ThrownPotionD2Ev
    virtual void queryEntityRenderer()const; // _ZNK12ThrownPotion19queryEntityRendererEv
    virtual void setAuxValue(int); // _ZN12ThrownPotion11setAuxValueEi
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN12ThrownPotion22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN12ThrownPotion21addAdditionalSaveDataER11CompoundTag
    ThrownPotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12ThrownPotionC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    bool isLinger()const; // _ZNK12ThrownPotion8isLingerEv
    void setLinger(bool); // _ZN12ThrownPotion9setLingerEb
    void getPotionId()const; // _ZNK12ThrownPotion11getPotionIdEv
    void init(short); // _ZN12ThrownPotion4initEs
};
