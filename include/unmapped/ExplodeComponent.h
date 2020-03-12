#pragma once



class ExplodeComponent {

public:
    void addAdditionalSaveData(CompoundTag &);
    ExplodeComponent();
    void explode(Actor &, Vec3 const&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getIsFuseLit()const;
    ExplodeComponent(ExplodeComponent &&);
    void setFuseLength(int);
    void setAllowUnderwater(bool);
    void getFuseLength()const;
    void getInitialFuseLength()const;
    bool isFuseLit()const;
    void initFromDefinition(Actor &, ExplodeDefinition const&);
};
