#pragma once

#include "damagesource/ActorDamageSource"
#include "../../unmapped/MobEffectInstance"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class Npc : Mob {

public:
    static long SKIN_ID_TAG[abi:cxx11];
    static long Skins[abi:cxx11];

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual Npc::~Npc()
    virtual bool breaksFallingBlocks()const;
    virtual bool canShowNameTag()const;
    virtual void getFormattedNameTag()const;
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
