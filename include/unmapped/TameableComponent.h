#pragma once



class TameableComponent {

public:
    ~TameableComponent(); // _ZN17TameableComponentD2Ev
    TameableComponent(TameableComponent &&); // _ZN17TameableComponentC2EOS_
    TameableComponent(); // _ZN17TameableComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17TameableComponent18initFromDefinitionER5Actor
    void _canTame(ItemStack const&)const; // _ZNK17TameableComponent8_canTameERK9ItemStack
    void _sendTameEvents(Actor &, Player &)const; // _ZNK17TameableComponent15_sendTameEventsER5ActorR6Player
    void _becomeTame(Actor &); // _ZN17TameableComponent11_becomeTameER5Actor
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN17TameableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
};
