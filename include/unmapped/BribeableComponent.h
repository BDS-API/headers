#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class BribeableComponent {

public:

    BribeableComponent(BribeableComponent&&);
    BribeableComponent(void);
    void clientBribeCheck(Actor &);
    void setBribed(Actor &);
    void resetBribe(Actor &);
    void getBribeTimer(void);
    void getBribeCooldown(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
