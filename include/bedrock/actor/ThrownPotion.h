#pragma once

#include "./Throwable.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~ThrownPotion();
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
