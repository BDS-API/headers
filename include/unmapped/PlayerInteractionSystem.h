#pragma once



class PlayerInteractionSystem {

public:
    class InteractionMappingBase;

    ~PlayerInteractionSystem(); // _ZN23PlayerInteractionSystemD2Ev
    void unregisterAllComponents(); // _ZN23PlayerInteractionSystem23unregisterAllComponentsEv
    PlayerInteractionSystem(); // _ZN23PlayerInteractionSystemC2Ev
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN23PlayerInteractionSystem14getInteractionER5ActorR6PlayerR16ActorInteraction
    class InteractionMappingBase {

    public:
        ~InteractionMappingBase(); // _ZN23PlayerInteractionSystem22InteractionMappingBaseD2Ev
        virtual void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN23PlayerInteractionSystem22InteractionMappingBase14getInteractionER5ActorR6PlayerR16ActorInteraction
        InteractionMappingBase(); // _ZN23PlayerInteractionSystem22InteractionMappingBaseC2Ev
    };
};
