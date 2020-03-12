#pragma once



class InteractComponent {

public:
    void getCooldownCounter()const;
    InteractComponent(InteractComponent &&);
    void initFromDefinition(Actor &, InteractDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void setCooldownCounter(short);
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &);
};
