#pragma once

#include "Monster.h"


class Vex : Monster {

public:
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~Vex();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isInWall()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    Vex(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
