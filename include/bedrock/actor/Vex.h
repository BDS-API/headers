#pragma once

#include "Monster.h"


class Vex : Monster {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Vex15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Vex20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~Vex(); // _ZN3VexD2Ev
    virtual bool isInWall()const; // _ZNK3Vex8isInWallEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN3Vex22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN3Vex21addAdditionalSaveDataER11CompoundTag
    Vex(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3VexC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
