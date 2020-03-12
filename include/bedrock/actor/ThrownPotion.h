#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Throwable.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

    ~ThrownPotion();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void setAuxValue(int);
    virtual void queryEntityRenderer()const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addAdditionalSaveData(CompoundTag &);
    bool isLinger()const;
    void init(short);
    void getPotionId()const;
    void setLinger(bool);
    ThrownPotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
