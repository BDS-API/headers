#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "Actor.h"
#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class Npc : Mob {

public:
    static std::string SKIN_ID_TAG;
    static std::string Skins;

    virtual bool isTargetable()const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void interactPreventDefault();
    virtual bool canShowNameTag()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void buildDebugInfo(std::string &)const;
    virtual bool canExistWhenDisallowMob()const;
    virtual void _onSizeUpdated();
    virtual bool canBePulledIntoVehicle()const;
    virtual void useNewAi()const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void _serverAiMobStep();
    virtual void die(ActorDamageSource const&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual bool isFishable()const;
    virtual void newServerAiStep();
    ~Npc();
    virtual bool breaksFallingBlocks()const;
    virtual std::string getFormattedNameTag()const;
    Npc(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
