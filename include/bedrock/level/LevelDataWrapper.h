#pragma once



class LevelDataWrapper {

public:
    LevelDataWrapper();
    void operator->()const;
    void operator*();
    void operator->();
    void operator*()const;
    ~LevelDataWrapper();
    void resetLevelDataPointer();
    void setLevelData(LevelData &);
};
