#pragma once

class TameableComponent {

public:

    void TameableComponent(TameableComponent&&);
    void TameableComponent(void);
    void initFromDefinition(Actor &);
    void _canTame(ItemStack const&)const;
    void _sendTameEvents(Actor &, Player &)const;
    void _becomeTame(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
