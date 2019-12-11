#pragma once

class GrowsCropComponent {

public:

    void GrowsCropComponent(GrowsCropComponent&&);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void GrowsCropComponent(void);
};
