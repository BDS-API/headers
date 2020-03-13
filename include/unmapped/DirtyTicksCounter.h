#pragma once



class DirtyTicksCounter {

public:
    void max(); // _ZN17DirtyTicksCounter3maxEv
    DirtyTicksCounter(); // _ZN17DirtyTicksCounterC2Ev
    void reset(); // _ZN17DirtyTicksCounter5resetEv
    void touch(); // _ZN17DirtyTicksCounter5touchEv
    void getTicksSinceLastChange()const; // _ZNK17DirtyTicksCounter23getTicksSinceLastChangeEv
    void getTotalDirtyTicks()const; // _ZNK17DirtyTicksCounter18getTotalDirtyTicksEv
    bool isDirty()const; // _ZNK17DirtyTicksCounter7isDirtyEv
};
