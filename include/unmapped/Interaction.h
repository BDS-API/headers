#pragma once

#include <string>


class Interaction {

public:
    ~Interaction(); // _ZN11InteractionD2Ev
    void setCooldown(float const&); // _ZN11Interaction11setCooldownERKf
    void setTransformItem(std::string const&); // _ZN11Interaction16setTransformItemERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setParticleType(std::string const&); // _ZN11Interaction15setParticleTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addLevelSoundEventByName(std::string const&); // _ZN11Interaction24addLevelSoundEventByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addActorDefinitionIdentifierByName(std::string const&); // _ZN11Interaction34addActorDefinitionIdentifierByNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Interaction(); // _ZN11InteractionC2Ev
    Interaction(Interaction const&); // _ZN11InteractionC2ERKS_
};
