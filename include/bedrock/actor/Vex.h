#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/DataLoadHelper"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class Vex : Monster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    Vex::~Vex()
    virtual bool isInWall()const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    Vex(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
