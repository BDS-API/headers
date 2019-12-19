#pragma once

class GrowsCropComponent {

public:

    GrowsCropComponent(GrowsCropComponent&&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    GrowsCropComponent(void);
};
