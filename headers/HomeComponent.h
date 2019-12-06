#pragma once

class HomeComponent {

public:

    void HomeComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getHomePos(void)const;
    void setHomePos(BlockPos const&);
    void HomeComponent(HomeComponent&&);
};
