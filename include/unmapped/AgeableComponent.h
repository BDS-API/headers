#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"
#include "../bedrock/nbt/CompoundTag"


class AgeableComponent {

public:

    AgeableComponent(AgeableComponent&&);
    void setAge(int);
    void getAge()const;
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
