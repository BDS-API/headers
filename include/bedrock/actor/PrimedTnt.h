#pragma once

#include "Actor.h"


class PrimedTnt : Actor {

public:
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~PrimedTnt();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getSourceUniqueID()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getOwnerEntityType();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual void addAdditionalSaveData(CompoundTag &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual void normalTick();
    void inheritOwners(Actor *);
    PrimedTnt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
