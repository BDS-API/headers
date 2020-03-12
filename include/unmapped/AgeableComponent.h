#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class AgeableComponent {

public:
    AgeableComponent(AgeableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getAge()const;
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setAge(int);
};
