#pragma once



class HomeComponent {

public:
    HomeComponent(); // _ZN13HomeComponentC2Ev
    void addAdditionalSaveData(CompoundTag &); // _ZN13HomeComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN13HomeComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void getHomePos()const; // _ZNK13HomeComponent10getHomePosEv
    void getHomeDimension()const; // _ZNK13HomeComponent16getHomeDimensionEv
//  void setHome(BlockPos const&, AutomaticID<Dimension, int> const&); //TODO: incomplete function definition // _ZN13HomeComponent7setHomeERK8BlockPosRK11AutomaticIDI9DimensioniE
    HomeComponent(HomeComponent &&); // _ZN13HomeComponentC2EOS_
};
