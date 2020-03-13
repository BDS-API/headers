#pragma once



class SitComponent {

public:
    void initFromDefinition(Actor &); // _ZN12SitComponent18initFromDefinitionER5Actor
    SitComponent(SitComponent &&); // _ZN12SitComponentC2EOS_
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN12SitComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void _sitEvent(Actor &, bool); // _ZN12SitComponent9_sitEventER5Actorb
};
