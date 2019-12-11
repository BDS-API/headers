#pragma once

class HomeComponent {

public:

    void HomeComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHomePos(void)const;
    void getHomeDimension(void)const;
    void setHome(BlockPos const&, AutomaticID<Dimension, int> const&);
    void HomeComponent(HomeComponent&&);
};
