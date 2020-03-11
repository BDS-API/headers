#pragma once

#include "../../unmapped/MobEffectInstance.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "./Mob.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "unmapped/ActorDefinitionGroup.h"
#include <string>


class Npc : Mob {

public:
    static std::string SKIN_ID_TAG;
    static std::string Skins;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Npc();
    virtual bool breaksFallingBlocks()const;
    virtual bool canShowNameTag()const;
    virtual std::string getFormattedNameTag()const;
    virtual void interactPreventDefault();
    virtual bool isFishable()const;
    virtual bool isTargetable()const;
    virtual bool canBePulledIntoVehicle()const;
    virtual void buildDebugInfo(std::string &)const;
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void die(ActorDamageSource const&);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void _onSizeUpdated();
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual bool canExistWhenDisallowMob()const;
    virtual void useNewAi()const;
    virtual void newServerAiStep();
    virtual void _serverAiMobStep();

    Npc(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
