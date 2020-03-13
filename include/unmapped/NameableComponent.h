#pragma once

#include <string>


class NameableComponent {

public:
    NameableComponent(NameableComponent &&); // _ZN17NameableComponentC2EOS_
    NameableComponent(); // _ZN17NameableComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17NameableComponent18initFromDefinitionER5Actor
    void initFromDefinition(Actor &, NameableDescription const&); // _ZN17NameableComponent18initFromDefinitionER5ActorRK19NameableDescription
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17NameableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void getAlwaysShow(); // _ZN17NameableComponent13getAlwaysShowEv
    void nameEntity(Actor &, std::string const&); // _ZN17NameableComponent10nameEntityER5ActorRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
