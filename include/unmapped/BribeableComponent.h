#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"


class BribeableComponent {

public:

    BribeableComponent(BribeableComponent&&);
    BribeableComponent(void);
    void clientBribeCheck(Actor &);
    void setBribed(Actor &);
    void resetBribe(Actor &);
    void getBribeTimer();
    void getBribeCooldown();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
