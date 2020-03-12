#pragma once



class GrowsCropComponent {

public:
    GrowsCropComponent(GrowsCropComponent &&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &);
    GrowsCropComponent();
};
