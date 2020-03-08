#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    ThrownPotion::~ThrownPotion()
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
