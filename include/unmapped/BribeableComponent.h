#pragma once



class BribeableComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getBribeCooldown();
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getBribeTimer();
    BribeableComponent(BribeableComponent &&);
    void resetBribe(Actor &);
    void clientBribeCheck(Actor &);
    void setBribed(Actor &);
    BribeableComponent();
};
