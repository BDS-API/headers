#pragma once



class AgeableComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &)const;
    void getAge()const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    AgeableComponent(AgeableComponent &&);
    void setAge(int);
};
