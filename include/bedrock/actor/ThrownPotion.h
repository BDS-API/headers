#pragma once

#include "Throwable.h"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

    virtual void setAuxValue(int);
    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~ThrownPotion();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void queryEntityRenderer()const;
    ThrownPotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setLinger(bool);
    void init(short);
    void getPotionId()const;
    bool isLinger()const;
};
