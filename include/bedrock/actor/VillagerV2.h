#pragma once

#include <string>
#include "VillagerBase.h"


class VillagerV2 : VillagerBase {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN10VillagerV215reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~VillagerV2(); // _ZN10VillagerV2D2Ev
    virtual void remove(); // _ZN10VillagerV26removeEv
    virtual void buildDebugInfo(std::string &)const; // _ZNK10VillagerV214buildDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&); // _ZN10VillagerV214getInteractionER6PlayerR16ActorInteractionRK4Vec3
    virtual void die(ActorDamageSource const&); // _ZN10VillagerV23dieERK17ActorDamageSource
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN10VillagerV235updateEntitySpecificMolangVariablesER12RenderParams
    virtual void travel(float, float, float); // _ZN10VillagerV26travelEfff
    virtual void newServerAiStep(); // _ZN10VillagerV215newServerAiStepEv
    VillagerV2(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10VillagerV2C2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
