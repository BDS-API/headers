#pragma once

class AgeableComponent {

public:

    AgeableComponent(AgeableComponent&&);
    void setAge(int);
    void getAge(void)const;
    void addAdditionalSaveData(CompoundTag &)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
