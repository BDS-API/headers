#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/DataLoadHelper.h"
#include "Monster.h"


class Vex : Monster {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Vex();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isInWall()const;
    Vex(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
