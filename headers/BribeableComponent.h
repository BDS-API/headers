#pragma once

class BribeableComponent {

public:

    void BribeableComponent(BribeableComponent&&);
    void BribeableComponent(void);
    void clientBribeCheck(Actor &);
    void setBribed(Actor &);
    void resetBribe(Actor &);
    void getBribeTimer(void);
    void getBribeCooldown(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
