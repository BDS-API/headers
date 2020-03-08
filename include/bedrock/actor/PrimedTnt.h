#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/Vec3"


class PrimedTnt : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual PrimedTnt::~PrimedTnt();
    virtual void getOwnerEntityType(void);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual void getSourceUniqueID(void)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    PrimedTnt(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void inheritOwners(Actor *);
};
