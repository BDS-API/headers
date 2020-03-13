#pragma once



class LevelDataWrapper {

public:
    LevelDataWrapper(); // _ZN16LevelDataWrapperC2Ev
    ~LevelDataWrapper(); // _ZN16LevelDataWrapperD2Ev
    void setLevelData(LevelData &); // _ZN16LevelDataWrapper12setLevelDataER9LevelData
    void operator->(); // _ZN16LevelDataWrapperptEv
    void operator->()const; // _ZNK16LevelDataWrapperptEv
    void operator*(); // _ZN16LevelDataWrapperdeEv
    void operator*()const; // _ZNK16LevelDataWrapperdeEv
    void resetLevelDataPointer(); // _ZN16LevelDataWrapper21resetLevelDataPointerEv
};
