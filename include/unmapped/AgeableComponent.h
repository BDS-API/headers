#pragma once

#include "./AgeableComponent.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class AgeableComponent {

public:

    AgeableComponent(AgeableComponent &&);
    void setAge(int);
    void getAge()const;
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
