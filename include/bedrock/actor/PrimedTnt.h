#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/DataLoadHelper"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../nbt/CompoundTag"


class PrimedTnt : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    PrimedTnt::~PrimedTnt()
    virtual void getOwnerEntityType();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual void getSourceUniqueID()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    PrimedTnt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void inheritOwners(Actor *);
};
