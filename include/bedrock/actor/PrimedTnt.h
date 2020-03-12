#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class PrimedTnt : Actor {

public:
    virtual void getShadowRadius()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getOwnerEntityType();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getSourceUniqueID()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getShadowHeightOffs();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick();
    virtual bool isPickable();
    ~PrimedTnt();
//  virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    PrimedTnt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void inheritOwners(Actor *);
};
