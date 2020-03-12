#pragma once



class PlayerInteractionSystem {

public:
    class InteractionMappingBase;

    void unregisterAllComponents();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    PlayerInteractionSystem();
    ~PlayerInteractionSystem();
    class InteractionMappingBase {

    public:
        virtual void getInteraction(Actor &, Player &, ActorInteraction &);
        ~InteractionMappingBase();
        InteractionMappingBase();
    };
};
