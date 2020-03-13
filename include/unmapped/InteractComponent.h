#pragma once



class InteractComponent {

public:
    InteractComponent(InteractComponent &&); // _ZN17InteractComponentC2EOS_
    void setCooldownCounter(short); // _ZN17InteractComponent18setCooldownCounterEs
    void initFromDefinition(Actor &, InteractDefinition const&); // _ZN17InteractComponent18initFromDefinitionER5ActorRK18InteractDefinition
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17InteractComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &); // _ZN17InteractComponent15_runInteractionER5ActorRK11InteractionR6PlayerR16ActorInteraction
    void getCooldownCounter()const; // _ZNK17InteractComponent18getCooldownCounterEv
};
