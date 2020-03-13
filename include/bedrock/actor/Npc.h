#pragma once

#include <string>
#include "Mob.h"


class Npc : Mob {

public:
    static std::string SKIN_ID_TAG;
    static std::string Skins;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Npc15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN3Npc20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~Npc(); // _ZN3NpcD2Ev
    virtual bool breaksFallingBlocks()const; // _ZNK3Npc19breaksFallingBlocksEv
    virtual bool canShowNameTag()const; // _ZNK3Npc14canShowNameTagEv
    virtual std::string getFormattedNameTag()const; // _ZNK3Npc19getFormattedNameTagB5cxx11Ev
    virtual void interactPreventDefault(); // _ZN3Npc22interactPreventDefaultEv
    virtual bool isFishable()const; // _ZNK3Npc10isFishableEv
    virtual bool isTargetable()const; // _ZNK3Npc12isTargetableEv
    virtual bool canBePulledIntoVehicle()const; // _ZNK3Npc22canBePulledIntoVehicleEv
    virtual void buildDebugInfo(std::string &)const; // _ZNK3Npc14buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual bool canBeAffected(MobEffectInstance const&)const; // _ZNK3Npc13canBeAffectedERK17MobEffectInstance
    virtual void die(ActorDamageSource const&); // _ZN3Npc3dieERK17ActorDamageSource
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN3Npc5_hurtERK17ActorDamageSourceibb
    virtual void _onSizeUpdated(); // _ZN3Npc14_onSizeUpdatedEv
    virtual void knockback(Actor *, int, float, float, float, float, float); // _ZN3Npc9knockbackEP5Actorifffff
    virtual bool canExistWhenDisallowMob()const; // _ZNK3Npc23canExistWhenDisallowMobEv
    virtual void useNewAi()const; // _ZNK3Npc8useNewAiEv
    virtual void newServerAiStep(); // _ZN3Npc15newServerAiStepEv
    virtual void _serverAiMobStep(); // _ZN3Npc16_serverAiMobStepEv
    Npc(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN3NpcC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
