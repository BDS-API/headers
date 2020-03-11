#pragma once

#include "./LevelData.h"


class LevelDataWrapper {

public:

    LevelDataWrapper();
    ~LevelDataWrapper();
    void setLevelData(LevelData &);
    void operator->();
    void operator->()const;
    void operator*();
    void operator*()const;
    void resetLevelDataPointer();
};
