#pragma once

#include <string>


class NameableComponent {

public:
    void nameEntity(Actor &, std::string const&);
    void initFromDefinition(Actor &, NameableDescription const&);
    void initFromDefinition(Actor &);
    void getAlwaysShow();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    NameableComponent(NameableComponent &&);
    NameableComponent();
};
