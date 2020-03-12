#pragma once



class SitComponent {

public:
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
    SitComponent(SitComponent &&);
};
