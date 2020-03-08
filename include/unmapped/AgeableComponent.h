#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"


class AgeableComponent {

public:

    AgeableComponent(AgeableComponent&&);
    void setAge(int);
    void getAge()const;
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
