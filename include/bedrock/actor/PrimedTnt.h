#pragma once

#include "Actor.h"


class PrimedTnt : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9PrimedTnt15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9PrimedTnt21reloadHardcodedClientEN5Actor20InitializationMethodERK20VariantParameterList
    ~PrimedTnt(); // _ZN9PrimedTntD2Ev
    virtual void getOwnerEntityType(); // _ZN9PrimedTnt18getOwnerEntityTypeEv
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN9PrimedTnt10teleportToERK4Vec3bii
    virtual void normalTick(); // _ZN9PrimedTnt10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN9PrimedTnt19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK9PrimedTnt15getShadowRadiusEv
    virtual bool isPickable(); // _ZN9PrimedTnt10isPickableEv
    virtual void getSourceUniqueID()const; // _ZNK9PrimedTnt17getSourceUniqueIDEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN9PrimedTnt5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN9PrimedTnt22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN9PrimedTnt21addAdditionalSaveDataER11CompoundTag
    PrimedTnt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9PrimedTntC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void inheritOwners(Actor *); // _ZN9PrimedTnt13inheritOwnersEP5Actor
};
