#pragma once



class DamageOverTimeComponent {

public:
    void getDamageTime()const;
    void getDamageTimeInterval()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setDamageTime(int);
    DamageOverTimeComponent(DamageOverTimeComponent &&);
    void addAdditionalSaveData(CompoundTag &)const;
    void getHurtValue()const;
};
