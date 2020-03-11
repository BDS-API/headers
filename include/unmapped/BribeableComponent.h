#pragma once

#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "./BribeableComponent.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class BribeableComponent {

public:

    BribeableComponent(BribeableComponent &&);
    BribeableComponent();
    void clientBribeCheck(Actor &);
    void setBribed(Actor &);
    void resetBribe(Actor &);
    void getBribeTimer();
    void getBribeCooldown();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
};
