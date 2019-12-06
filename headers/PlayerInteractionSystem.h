#pragma once

class PlayerInteractionSystem {

public:

    void unregisterAllComponents(void);
    void PlayerInteractionSystem(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
