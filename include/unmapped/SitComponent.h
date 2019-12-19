#pragma once

class SitComponent {

public:

    void initFromDefinition(Actor &);
    SitComponent(SitComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
};
