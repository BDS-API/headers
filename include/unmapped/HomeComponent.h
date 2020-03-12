#pragma once



class HomeComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
//  void setHome(BlockPos const&, AutomaticID<Dimension, int> const&); //TODO: incomplete function definition
    void getHomeDimension()const;
    void addAdditionalSaveData(CompoundTag &);
    void getHomePos()const;
    HomeComponent(HomeComponent &&);
    HomeComponent();
};
