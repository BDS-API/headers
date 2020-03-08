#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ThrownPotion::~ThrownPotion()
    virtual void queryEntityRenderer()const;
    virtual void setAuxValue(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    ThrownPotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isLinger()const;
    void setLinger(bool);
    void getPotionId()const;
    void init(short);
};
