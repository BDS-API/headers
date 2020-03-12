#pragma once

#include "Mob.h"
#include <string>


class Npc : Mob {

public:
    static std::string SKIN_ID_TAG;
    static std::string Skins;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool canBePulledIntoVehicle()const;
    virtual std::string getFormattedNameTag()const;
    virtual bool canShowNameTag()const;
    virtual bool isTargetable()const;
    virtual void _serverAiMobStep();
    virtual bool canBeAffected(MobEffectInstance const&)const;
    virtual void buildDebugInfo(std::string &)const;
    virtual void _onSizeUpdated();
    virtual bool isFishable()const;
    virtual bool breaksFallingBlocks()const;
    virtual void newServerAiStep();
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void die(ActorDamageSource const&);
    virtual void interactPreventDefault();
    ~Npc();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool canExistWhenDisallowMob()const;
    virtual void useNewAi()const;
    Npc(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
