#pragma once

class ExplodeComponent {

public:

    ExplodeComponent(ExplodeComponent&&);
    void initFromDefinition(Actor &, ExplodeDefinition const&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void explode(Actor &, Vec3 const&);
    void getFuseLength(void)const;
    void setFuseLength(int);
    void getInitialFuseLength(void)const;
    void getIsFuseLit(void)const;
    void setAllowUnderwater(bool);
    bool isFuseLit(void)const;
    ExplodeComponent(void);
};
