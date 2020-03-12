#pragma once



class TameableComponent {

public:
    void initFromDefinition(Actor &);
    void _sendTameEvents(Actor &, Player &)const;
    void _canTame(ItemStack const&)const;
    TameableComponent(TameableComponent &&);
    TameableComponent();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    ~TameableComponent();
    void _becomeTame(Actor &);
};
