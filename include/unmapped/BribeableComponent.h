#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class BribeableComponent {

public:
    void getInteraction(Actor &, Player &, ActorInteraction &);
    BribeableComponent(BribeableComponent &&);
    void resetBribe(Actor &);
    void getBribeTimer();
    void setBribed(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void clientBribeCheck(Actor &);
    void getBribeCooldown();
    BribeableComponent();
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
